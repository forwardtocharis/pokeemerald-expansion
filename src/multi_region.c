#include "global.h"
#include "battle_main.h"
#include "event_data.h"
#include "load_save.h"
#include "multi_region.h"
#include "pokemon.h"
#include "random.h"
#include "rtc.h"
#include "string_util.h"
#include "text.h"
#include "constants/flags.h"
#include "constants/items.h"
#include "constants/map_groups.h"
#include "constants/moves.h"
#include "constants/pokemon.h"
#include "constants/species.h"
#include "constants/vars.h"
#include "constants/regions.h"

static const u16 sHoennBadges[8] =
{
    FLAG_BADGE01_GET,
    FLAG_BADGE02_GET,
    FLAG_BADGE03_GET,
    FLAG_BADGE04_GET,
    FLAG_BADGE05_GET,
    FLAG_BADGE06_GET,
    FLAG_BADGE07_GET,
    FLAG_BADGE08_GET,
};

static const u16 sKantoBadges[8] =
{
    FLAG_KANTO_BADGE01_GET,
    FLAG_KANTO_BADGE02_GET,
    FLAG_KANTO_BADGE03_GET,
    FLAG_KANTO_BADGE04_GET,
    FLAG_KANTO_BADGE05_GET,
    FLAG_KANTO_BADGE06_GET,
    FLAG_KANTO_BADGE07_GET,
    FLAG_KANTO_BADGE08_GET,
};

static const u16 sJohtoBadges[8] =
{
    FLAG_JOHTO_BADGE01_GET,
    FLAG_JOHTO_BADGE02_GET,
    FLAG_JOHTO_BADGE03_GET,
    FLAG_JOHTO_BADGE04_GET,
    FLAG_JOHTO_BADGE05_GET,
    FLAG_JOHTO_BADGE06_GET,
    FLAG_JOHTO_BADGE07_GET,
    FLAG_JOHTO_BADGE08_GET,
};

static const u16 sSinnohBadges[8] =
{
    FLAG_SINNOH_BADGE01_GET,
    FLAG_SINNOH_BADGE02_GET,
    FLAG_SINNOH_BADGE03_GET,
    FLAG_SINNOH_BADGE04_GET,
    FLAG_SINNOH_BADGE05_GET,
    FLAG_SINNOH_BADGE06_GET,
    FLAG_SINNOH_BADGE07_GET,
    FLAG_SINNOH_BADGE08_GET,
};

static u16 CountFlagsInList(const u16 *flags, u32 count)
{
    u32 i;
    u16 badges = 0;
    for (i = 0; i < count; i++)
    {
        if (FlagGet(flags[i]))
            badges++;
    }
    return badges;
}

void UpdateTotalBadges(void)
{
    u16 hoennBadges = CountFlagsInList(sHoennBadges, ARRAY_COUNT(sHoennBadges));
    u16 kantoBadges = CountFlagsInList(sKantoBadges, ARRAY_COUNT(sKantoBadges));
    u16 johtoBadges = CountFlagsInList(sJohtoBadges, ARRAY_COUNT(sJohtoBadges));
    u16 sinnohBadges = CountFlagsInList(sSinnohBadges, ARRAY_COUNT(sSinnohBadges));
    u16 totalBadges = hoennBadges + kantoBadges + johtoBadges + sinnohBadges;

    VarSet(VAR_HOENN_BADGES, hoennBadges);
    VarSet(VAR_KANTO_BADGES, kantoBadges);
    VarSet(VAR_JOHTO_BADGES, johtoBadges);
    VarSet(VAR_SINNOH_BADGES, sinnohBadges);
    VarSet(VAR_TOTAL_BADGES, totalBadges);
}

u16 GetTotalBadgesCount(void)
{
    UpdateTotalBadges();
    return VarGet(VAR_TOTAL_BADGES);
}

u16 GetRegionBadgeCount(u8 regionId)
{
    switch (regionId)
    {
    case 0: // Hoenn
        return CountFlagsInList(sHoennBadges, ARRAY_COUNT(sHoennBadges));
    case 1: // Kanto
        return CountFlagsInList(sKantoBadges, ARRAY_COUNT(sKantoBadges));
    case 2: // Johto
        return CountFlagsInList(sJohtoBadges, ARRAY_COUNT(sJohtoBadges));
    case 3: // Sinnoh
        return CountFlagsInList(sSinnohBadges, ARRAY_COUNT(sSinnohBadges));
    default:
        return 0;
    }
}

u8 GetActiveRegion(void)
{
    return (u8)VarGet(VAR_CURRENT_REGION);
}

void SetActiveRegion(u8 regionId)
{
    VarSet(VAR_CURRENT_REGION, regionId);
}

u8 GetScaledTrainerMonLevel(u8 baseLevel)
{
    u16 totalBadges;
    u32 scaled;

    if (!FlagGet(FLAG_SYS_BATTLE_SCALING_ENABLED))
        return baseLevel;

    // Never downscale trainers originally configured above the cap
    if (baseLevel >= REGIONAL_SCALING_CAP)
        return baseLevel;

    totalBadges = VarGet(VAR_TOTAL_BADGES);
    if (totalBadges == 0)
        return baseLevel;

    // Smooth scaling from baseLevel up to REGIONAL_SCALING_CAP across 32 badges
    scaled = baseLevel + ((totalBadges * (REGIONAL_SCALING_CAP - baseLevel)) / 32);
    if (scaled > REGIONAL_SCALING_CAP)
        scaled = REGIONAL_SCALING_CAP;
    if (scaled < 1)
        scaled = 1;

    return (u8)scaled;
}

static const u8 sHoennGymLevelCaps[8]  = {15, 19, 24, 29, 31, 33, 42, 46};
static const u8 sKantoGymLevelCaps[8]  = {14, 21, 24, 29, 43, 43, 47, 50};
static const u8 sJohtoGymLevelCaps[8]  = {13, 17, 20, 25, 31, 35, 34, 41};
static const u8 sSinnohGymLevelCaps[8] = {14, 22, 32, 37, 36, 41, 44, 50};
static const u8 sRegionalLeagueCaps[4] = {58, 63, 79, 80};

u8 GetCurrentRegionLevelCap(void)
{
    u8 activeRegion;
    u32 i;
    const u16 *badgeFlags;
    const u8 *gymCaps;
    u8 nextCap = MAX_LEVEL;

    if (!FlagGet(FLAG_SYS_LEVEL_CAP_ENABLED))
        return MAX_LEVEL;

    if (GetTotalBadgesCount() >= 32)
        return MAX_LEVEL;

    activeRegion = GetActiveRegion();
    if (activeRegion > 3)
        activeRegion = 0;

    switch (activeRegion)
    {
    case 1:
        badgeFlags = sKantoBadges;
        gymCaps = sKantoGymLevelCaps;
        break;
    case 2:
        badgeFlags = sJohtoBadges;
        gymCaps = sJohtoGymLevelCaps;
        break;
    case 3:
        badgeFlags = sSinnohBadges;
        gymCaps = sSinnohGymLevelCaps;
        break;
    case 0:
    default:
        badgeFlags = sHoennBadges;
        gymCaps = sHoennGymLevelCaps;
        break;
    }

    for (i = 0; i < 8; i++)
    {
        if (!FlagGet(badgeFlags[i]))
        {
            if (gymCaps[i] < nextCap)
                nextCap = gymCaps[i];
        }
    }

    if (nextCap == MAX_LEVEL)
        nextCap = sRegionalLeagueCaps[activeRegion];

    return GetScaledTrainerMonLevel(nextCap);
}

static EWRAM_DATA u8 sStartingRegionChoice = 0;

void SetStartingRegionChoice(u8 region)
{
    sStartingRegionChoice = (region <= 3) ? region : 0;
}

u8 GetStartingRegionChoice(void)
{
    u16 saved = VarGet(VAR_STARTING_REGION);
    if (saved >= 1 && saved <= 4)
        return (u8)(saved - 1);
    if (GetTotalBadgesCount() < 8)
        return GetActiveRegion();
    return sStartingRegionChoice;
}

// ── Gym Monotype Mirror Restriction ─────────────────────────────────────
// After completing the first region (8+ badges), all Gyms outside the
// player's starting region require participating Pokemon to match the
// Gym's elemental type (primary or secondary). Non-matching party members
// are automatically stripped before battle and restored immediately after.

struct GymTypeRule
{
    s8 mapGroup;
    s8 mapNum;
    u8 regionId;
    enum Type requiredType;
};

#define GYM_RULE(map, region, type) \
    { MAP_GROUP(map), MAP_NUM(map), (region), (type) }

static const struct GymTypeRule sGymTypeRules[] =
{
    // Hoenn (region 0)
    GYM_RULE(MAP_RUSTBORO_CITY_GYM,       STARTING_REGION_HOENN,  TYPE_ROCK),
    GYM_RULE(MAP_DEWFORD_TOWN_GYM,        STARTING_REGION_HOENN,  TYPE_FIGHTING),
    GYM_RULE(MAP_MAUVILLE_CITY_GYM,       STARTING_REGION_HOENN,  TYPE_ELECTRIC),
    GYM_RULE(MAP_LAVARIDGE_TOWN_GYM_1F,   STARTING_REGION_HOENN,  TYPE_FIRE),
    GYM_RULE(MAP_LAVARIDGE_TOWN_GYM_B1F,  STARTING_REGION_HOENN,  TYPE_FIRE),
    GYM_RULE(MAP_PETALBURG_CITY_GYM,      STARTING_REGION_HOENN,  TYPE_NORMAL),
    GYM_RULE(MAP_FORTREE_CITY_GYM,        STARTING_REGION_HOENN,  TYPE_FLYING),
    GYM_RULE(MAP_MOSSDEEP_CITY_GYM,       STARTING_REGION_HOENN,  TYPE_PSYCHIC),
    GYM_RULE(MAP_SOOTOPOLIS_CITY_GYM_1F,  STARTING_REGION_HOENN,  TYPE_WATER),
    GYM_RULE(MAP_SOOTOPOLIS_CITY_GYM_B1F, STARTING_REGION_HOENN,  TYPE_WATER),

    // Kanto (region 1)
    GYM_RULE(MAP_PEWTER_CITY_GYM,         STARTING_REGION_KANTO,  TYPE_ROCK),
    GYM_RULE(MAP_CERULEAN_CITY_GYM,       STARTING_REGION_KANTO,  TYPE_WATER),
    GYM_RULE(MAP_VERMILION_CITY_GYM,      STARTING_REGION_KANTO,  TYPE_ELECTRIC),
    GYM_RULE(MAP_CELADON_CITY_GYM,        STARTING_REGION_KANTO,  TYPE_GRASS),
    GYM_RULE(MAP_FUCHSIA_CITY_GYM,        STARTING_REGION_KANTO,  TYPE_POISON),
    GYM_RULE(MAP_SAFFRON_CITY_GYM,        STARTING_REGION_KANTO,  TYPE_PSYCHIC),
    GYM_RULE(MAP_CINNABAR_ISLAND_GYM,     STARTING_REGION_KANTO,  TYPE_FIRE),
    GYM_RULE(MAP_VIRIDIAN_CITY_GYM,       STARTING_REGION_KANTO,  TYPE_GROUND),

    // Johto (region 2)
    GYM_RULE(MAP_VIOLET_CITY__GYM,        STARTING_REGION_JOHTO,  TYPE_FLYING),
    GYM_RULE(MAP_AZALEA_TOWN__GYM,        STARTING_REGION_JOHTO,  TYPE_BUG),
    GYM_RULE(MAP_GOLDENROD_CITY__GYM,     STARTING_REGION_JOHTO,  TYPE_NORMAL),
    GYM_RULE(MAP_ECRUTEAK_CITY__GYM,      STARTING_REGION_JOHTO,  TYPE_GHOST),
    GYM_RULE(MAP_CIANWOOD_CITY__GYM,      STARTING_REGION_JOHTO,  TYPE_FIGHTING),
    GYM_RULE(MAP_OLIVINE_CITY__GYM,       STARTING_REGION_JOHTO,  TYPE_STEEL),
    GYM_RULE(MAP_MAHOGANY_TOWN__GYM,      STARTING_REGION_JOHTO,  TYPE_ICE),
    GYM_RULE(MAP_BLACKTHORN_CITY__GYM,    STARTING_REGION_JOHTO,  TYPE_DRAGON),

    // Sinnoh (region 3)
    GYM_RULE(MAP_OREBURGH_CITY__GYM,      STARTING_REGION_SINNOH, TYPE_ROCK),
    GYM_RULE(MAP_ETERNA_CITY__GYM,        STARTING_REGION_SINNOH, TYPE_GRASS),
    GYM_RULE(MAP_VEILSTONE_CITY__GYM,     STARTING_REGION_SINNOH, TYPE_FIGHTING),
    GYM_RULE(MAP_PASTORIA_CITY__GYM,      STARTING_REGION_SINNOH, TYPE_WATER),
    GYM_RULE(MAP_HEARTHOME_CITY__GYM,     STARTING_REGION_SINNOH, TYPE_GHOST),
    GYM_RULE(MAP_CANALAVE_CITY__GYM,      STARTING_REGION_SINNOH, TYPE_STEEL),
    GYM_RULE(MAP_SNOWPOINT_CITY__GYM,     STARTING_REGION_SINNOH, TYPE_ICE),
    GYM_RULE(MAP_SUNYSHORE_CITY__GYM,     STARTING_REGION_SINNOH, TYPE_ELECTRIC),
};

#undef GYM_RULE

static EWRAM_DATA bool8 sIsGymTypeFilteredBattle = FALSE;
static EWRAM_DATA u8 sGymTypeParticipatingMask = 0;

enum Type GetGymRequiredTypeForMap(s8 mapGroup, s8 mapNum)
{
    u32 i;
    u8 startingRegion;

    for (i = 0; i < ARRAY_COUNT(sGymTypeRules); i++)
    {
        if (sGymTypeRules[i].mapGroup == mapGroup && sGymTypeRules[i].mapNum == mapNum)
        {
            startingRegion = GetStartingRegionChoice();
            // Starting region always waives the requirement
            if (sGymTypeRules[i].regionId == startingRegion)
                return TYPE_NONE;
            // Wait until after the first region (8 badges) before enforcing
            if (GetTotalBadgesCount() < 8)
                return TYPE_NONE;
            return sGymTypeRules[i].requiredType;
        }
    }
    return TYPE_NONE;
}

enum Type GetCurrentGymRequiredType(void)
{
    return GetGymRequiredTypeForMap(gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum);
}

bool32 CanMonParticipateInGymTypeBattle(struct Pokemon *mon, enum Type requiredType)
{
    enum Species species;

    if (requiredType == TYPE_NONE)
        return TRUE;

    if (!GetMonData(mon, MON_DATA_SANITY_HAS_SPECIES) || GetMonData(mon, MON_DATA_IS_EGG))
        return FALSE;

    species = GetMonData(mon, MON_DATA_SPECIES);
    return IsSpeciesOfType(species, requiredType);
}

u32 CountUsableGymTypePartyMons(enum Type requiredType)
{
    u32 i;
    u32 count = 0;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][i];
        if (CanMonParticipateInGymTypeBattle(mon, requiredType) && GetMonData(mon, MON_DATA_HP) > 0)
            count++;
    }
    return count;
}

bool32 HasEnoughMonsForCurrentGymBattle(bool32 isDoubleBattle)
{
    enum Type requiredType = GetCurrentGymRequiredType();
    u32 needed;

    if (requiredType == TYPE_NONE)
        return TRUE;

    needed = isDoubleBattle ? 2 : 1;
    return CountUsableGymTypePartyMons(requiredType) >= needed;
}

void BufferCurrentGymRestrictionStrings(bool32 isDoubleBattle)
{
    enum Type requiredType = GetCurrentGymRequiredType();
    u32 needed = isDoubleBattle ? 2 : 1;

    if (requiredType != TYPE_NONE && requiredType < NUMBER_OF_MON_TYPES)
        StringCopy(gStringVar1, gTypesInfo[requiredType].name);
    else
        gStringVar1[0] = EOS;

    ConvertIntToDecimalStringN(gStringVar2, needed, STR_CONV_MODE_LEFT_ALIGN, 1);
}

void TryPreparePartyForGymTypeBattle(void)
{
    enum Type requiredType = GetCurrentGymRequiredType();
    u8 i;
    u8 partyCount;
    u8 mask = 0;

    if (requiredType == TYPE_NONE || sIsGymTypeFilteredBattle)
        return;

    partyCount = CalculatePlayerPartyCount();
    sIsGymTypeFilteredBattle = TRUE;
    SavePlayerParty();

    for (i = 0; i < partyCount; i++)
    {
        struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][i];
        if (CanMonParticipateInGymTypeBattle(mon, requiredType))
            mask |= (1 << i);
        else
            ZeroMonData(mon);
    }

    sGymTypeParticipatingMask = mask;
    CompactPartySlots();
}

void RestorePartyAfterGymTypeBattle(void)
{
    u8 i, j = 0;

    if (!sIsGymTypeFilteredBattle)
        return;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if ((sGymTypeParticipatingMask >> i) & 1)
        {
            SavePlayerPartyMon(i, &gParties[B_TRAINER_PLAYER][j]);
            j++;
        }
    }

    // Preserve any newly spawned party Pokémon during battle (e.g., Shedinja)
    while (j < gPartiesCount[B_TRAINER_PLAYER] && *GetSavedPlayerPartyCount() < PARTY_SIZE)
    {
        u8 newSlot = (*GetSavedPlayerPartyCount())++;
        SavePlayerPartyMon(newSlot, &gParties[B_TRAINER_PLAYER][j]);
        j++;
    }

    LoadPlayerParty();
    sIsGymTypeFilteredBattle = FALSE;
    sGymTypeParticipatingMask = 0;
}

// ── Daily rematch cooldown ──────────────────────────────────────────────
// One rematch per trainer per calendar day. The bitfield is in EWRAM, so
// it resets on power-off/load (every session starts with all rematches
// available). Within a session, talking to a trainer you already rematched
// today skips the "Care for a rematch?" prompt and shows post-battle text.

static EWRAM_DATA u32 sRematchDayCount = 0;
static EWRAM_DATA u8 sRematchedTodayBits[REMATCH_TRACKER_BYTES] = {0};

// If the calendar day has changed since the last rematch, wipe the bitfield.
static void RefreshRematchDay(void)
{
    u32 today = RtcGetLocalDayCount();
    if (today != sRematchDayCount)
    {
        sRematchDayCount = today;
        memset(sRematchedTodayBits, 0, sizeof(sRematchedTodayBits));
    }
}

bool32 HasRematchedToday(u16 trainerId)
{
    RefreshRematchDay();
    if (trainerId / 8 >= REMATCH_TRACKER_BYTES)
        return FALSE;
    return (sRematchedTodayBits[trainerId / 8] >> (trainerId % 8)) & 1;
}

void SetRematchedToday(u16 trainerId)
{
    RefreshRematchDay();
    if (trainerId / 8 < REMATCH_TRACKER_BYTES)
        sRematchedTodayBits[trainerId / 8] |= (1 << (trainerId % 8));
}

// ── Grand Champion Red Procedural Team Generator (WP4) ──────────────────
// Draws 3 unique Level 100 Legendaries from sRedLegendaryPool and
// 3 unique Level 100 Competitive Aces from sRedAcePool, enforcing
// Species Clause (no duplicate species) and Item Clause (no duplicate items),
// with 31 IVs across all 6 stats and optimized 252/252/4 EV spreads.

struct RedPoolEntry
{
    u16 species;
    u16 heldItem;
    u8 nature;
    u8 evs[6]; // HP, Atk, Def, SpA, SpD, Spe
    u16 moves[MAX_MON_MOVES];
};

static const struct RedPoolEntry sRedLegendaryPool[] =
{
    { SPECIES_MEWTWO,   ITEM_LIFE_ORB,         NATURE_TIMID,   {  4,   0,   0, 252,   0, 252}, {MOVE_PSYSTRIKE,        MOVE_AURA_SPHERE,  MOVE_ICE_BEAM,      MOVE_CALM_MIND} },
    { SPECIES_RAYQUAZA, ITEM_FOCUS_SASH,       NATURE_NAIVE,   {  0, 252,   0,   4,   0, 252}, {MOVE_DRAGON_ASCENT,    MOVE_EXTREME_SPEED,MOVE_EARTHQUAKE,    MOVE_DRAGON_DANCE} },
    { SPECIES_LUGIA,    ITEM_LEFTOVERS,        NATURE_BOLD,    {252,   0, 252,   0,   4,   0}, {MOVE_AEROBLAST,        MOVE_PSYCHIC,      MOVE_RECOVER,       MOVE_CALM_MIND} },
    { SPECIES_HO_OH,    ITEM_HEAVY_DUTY_BOOTS, NATURE_ADAMANT, {252, 252,   0,   0,   4,   0}, {MOVE_SACRED_FIRE,      MOVE_BRAVE_BIRD,   MOVE_EARTHQUAKE,    MOVE_RECOVER} },
    { SPECIES_DIALGA,   ITEM_ASSAULT_VEST,     NATURE_MODEST,  {252,   0,   0, 252,   4,   0}, {MOVE_DRACO_METEOR,     MOVE_FLASH_CANNON, MOVE_FIRE_BLAST,    MOVE_EARTH_POWER} },
    { SPECIES_PALKIA,   ITEM_CHOICE_SCARF,     NATURE_TIMID,   {  4,   0,   0, 252,   0, 252}, {MOVE_SPACIAL_REND,     MOVE_HYDRO_PUMP,   MOVE_FIRE_BLAST,    MOVE_THUNDERBOLT} },
    { SPECIES_GIRATINA, ITEM_LUM_BERRY,        NATURE_IMPISH,  {252,   4, 252,   0,   0,   0}, {MOVE_SHADOW_FORCE,     MOVE_DRAGON_CLAW,  MOVE_WILL_O_WISP,   MOVE_REST} },
    { SPECIES_GROUDON,  ITEM_SITRUS_BERRY,     NATURE_ADAMANT, {252, 252,   0,   0,   4,   0}, {MOVE_PRECIPICE_BLADES, MOVE_STONE_EDGE,   MOVE_FIRE_PUNCH,    MOVE_SWORDS_DANCE} },
    { SPECIES_KYOGRE,   ITEM_CHOICE_SPECS,     NATURE_MODEST,  {  4,   0,   0, 252,   0, 252}, {MOVE_WATER_SPOUT,      MOVE_ORIGIN_PULSE, MOVE_ICE_BEAM,      MOVE_THUNDER} },
    { SPECIES_LATIOS,   ITEM_SOUL_DEW,         NATURE_TIMID,   {  4,   0,   0, 252,   0, 252}, {MOVE_DRACO_METEOR,     MOVE_LUSTER_PURGE, MOVE_THUNDERBOLT,   MOVE_RECOVER} },
    { SPECIES_ZAPDOS,   ITEM_ROCKY_HELMET,     NATURE_BOLD,    {252,   0, 252,   0,   0,   4}, {MOVE_THUNDERBOLT,      MOVE_HURRICANE,    MOVE_HEAT_WAVE,     MOVE_ROOST} },
    { SPECIES_SUICUNE,  ITEM_CHESTO_BERRY,     NATURE_BOLD,    {252,   0, 252,   0,   4,   0}, {MOVE_SCALD,            MOVE_ICE_BEAM,     MOVE_CALM_MIND,     MOVE_REST} },
    { SPECIES_HEATRAN,  ITEM_AIR_BALLOON,      NATURE_MODEST,  {252,   0,   0, 252,   0,   4}, {MOVE_MAGMA_STORM,      MOVE_FLASH_CANNON, MOVE_EARTH_POWER,   MOVE_STEALTH_ROCK} },
    { SPECIES_RAIKOU,   ITEM_EXPERT_BELT,      NATURE_TIMID,   {  4,   0,   0, 252,   0, 252}, {MOVE_THUNDERBOLT,      MOVE_AURA_SPHERE,  MOVE_SHADOW_BALL,   MOVE_CALM_MIND} },
    { SPECIES_ENTEI,    ITEM_CHOICE_BAND,      NATURE_ADAMANT, {  4, 252,   0,   0,   0, 252}, {MOVE_SACRED_FIRE,      MOVE_EXTREME_SPEED,MOVE_STONE_EDGE,    MOVE_CRUNCH} },
};

static const struct RedPoolEntry sRedAcePool[] =
{
    { SPECIES_PIKACHU,   ITEM_LIGHT_BALL,       NATURE_TIMID,   {  4,   0,   0, 252,   0, 252}, {MOVE_VOLT_TACKLE,  MOVE_THUNDERBOLT,   MOVE_SURF,          MOVE_EXTREME_SPEED} },
    { SPECIES_TYRANITAR, ITEM_WEAKNESS_POLICY,  NATURE_JOLLY,   {  4, 252,   0,   0,   0, 252}, {MOVE_STONE_EDGE,   MOVE_CRUNCH,        MOVE_EARTHQUAKE,    MOVE_DRAGON_DANCE} },
    { SPECIES_GARCHOMP,  ITEM_ROCKY_HELMET,     NATURE_JOLLY,   {  4, 252,   0,   0,   0, 252}, {MOVE_EARTHQUAKE,   MOVE_OUTRAGE,       MOVE_STONE_EDGE,    MOVE_SWORDS_DANCE} },
    { SPECIES_METAGROSS, ITEM_ASSAULT_VEST,     NATURE_ADAMANT, {252, 252,   0,   0,   4,   0}, {MOVE_METEOR_MASH,  MOVE_BULLET_PUNCH,  MOVE_ZEN_HEADBUTT,  MOVE_EARTHQUAKE} },
    { SPECIES_DRAGONITE, ITEM_HEAVY_DUTY_BOOTS, NATURE_ADAMANT, {  4, 252,   0,   0,   0, 252}, {MOVE_OUTRAGE,      MOVE_EXTREME_SPEED, MOVE_EARTHQUAKE,    MOVE_DRAGON_DANCE} },
    { SPECIES_LUCARIO,   ITEM_LIFE_ORB,         NATURE_JOLLY,   {  4, 252,   0,   0,   0, 252}, {MOVE_CLOSE_COMBAT, MOVE_EXTREME_SPEED, MOVE_METEOR_MASH,   MOVE_SWORDS_DANCE} },
    { SPECIES_GENGAR,    ITEM_FOCUS_SASH,       NATURE_TIMID,   {  4,   0,   0, 252,   0, 252}, {MOVE_SHADOW_BALL,  MOVE_SLUDGE_WAVE,   MOVE_FOCUS_BLAST,   MOVE_DESTINY_BOND} },
    { SPECIES_SNORLAX,   ITEM_LEFTOVERS,        NATURE_CAREFUL, {252,   4,   0,   0, 252,   0}, {MOVE_BODY_SLAM,    MOVE_CRUNCH,        MOVE_CURSE,         MOVE_REST} },
    { SPECIES_CHARIZARD, ITEM_CHARCOAL,         NATURE_TIMID,   {  4,   0,   0, 252,   0, 252}, {MOVE_FIRE_BLAST,   MOVE_AIR_SLASH,     MOVE_SOLAR_BEAM,    MOVE_SCORCHING_SANDS} },
    { SPECIES_VENUSAUR,  ITEM_BLACK_SLUDGE,     NATURE_MODEST,  {252,   0,   0, 252,   4,   0}, {MOVE_GIGA_DRAIN,   MOVE_SLUDGE_BOMB,   MOVE_EARTH_POWER,   MOVE_SLEEP_POWDER} },
    { SPECIES_BLASTOISE, ITEM_WHITE_HERB,       NATURE_MODEST,  {  4,   0,   0, 252,   0, 252}, {MOVE_HYDRO_PUMP,   MOVE_ICE_BEAM,      MOVE_DARK_PULSE,    MOVE_SHELL_SMASH} },
    { SPECIES_VOLCARONA, ITEM_LUM_BERRY,        NATURE_TIMID,   {  4,   0,   0, 252,   0, 252}, {MOVE_FIERY_DANCE,  MOVE_BUG_BUZZ,      MOVE_GIGA_DRAIN,    MOVE_QUIVER_DANCE} },
    { SPECIES_SCIZOR,    ITEM_CHOICE_BAND,      NATURE_ADAMANT, {252, 252,   0,   0,   4,   0}, {MOVE_BULLET_PUNCH, MOVE_U_TURN,        MOVE_CLOSE_COMBAT,  MOVE_KNOCK_OFF} },
    { SPECIES_TOGEKISS,  ITEM_CHOICE_SCARF,     NATURE_TIMID,   {  4,   0,   0, 252,   0, 252}, {MOVE_AIR_SLASH,    MOVE_DAZZLING_GLEAM,MOVE_AURA_SPHERE,   MOVE_FLAMETHROWER} },
    { SPECIES_WEAVILE,   ITEM_EXPERT_BELT,      NATURE_JOLLY,   {  4, 252,   0,   0,   0, 252}, {MOVE_TRIPLE_AXEL,  MOVE_KNOCK_OFF,     MOVE_ICE_SHARD,     MOVE_LOW_KICK} },
    { SPECIES_SALAMENCE, ITEM_SITRUS_BERRY,     NATURE_JOLLY,   {  4, 252,   0,   0,   0, 252}, {MOVE_OUTRAGE,      MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE,    MOVE_DRAGON_DANCE} },
    { SPECIES_HYDREIGON, ITEM_CHOICE_SPECS,     NATURE_TIMID,   {  4,   0,   0, 252,   0, 252}, {MOVE_DRACO_METEOR, MOVE_DARK_PULSE,    MOVE_FLASH_CANNON,  MOVE_FLAMETHROWER} },
    { SPECIES_MILOTIC,   ITEM_FLAME_ORB,        NATURE_BOLD,    {252,   0, 252,   0,   4,   0}, {MOVE_SCALD,        MOVE_ICE_BEAM,      MOVE_RECOVER,       MOVE_HAZE} },
    { SPECIES_AEGISLASH, ITEM_AIR_BALLOON,      NATURE_QUIET,   {252,   4,   0, 252,   0,   0}, {MOVE_SHADOW_BALL,  MOVE_FLASH_CANNON,  MOVE_SHADOW_SNEAK,  MOVE_KINGS_SHIELD} },
    { SPECIES_EXCADRILL, ITEM_SOFT_SAND,        NATURE_JOLLY,   {  4, 252,   0,   0,   0, 252}, {MOVE_EARTHQUAKE,   MOVE_IRON_HEAD,     MOVE_ROCK_SLIDE,    MOVE_SWORDS_DANCE} },
};

static bool32 IsRedEntryAllowed(const struct RedPoolEntry *entry, const u16 *usedSpecies, const u16 *usedItems, u32 currentCount)
{
    u32 i;
    for (i = 0; i < currentCount; i++)
    {
        if (usedSpecies[i] == entry->species)
            return FALSE; // Species Clause
        if (usedItems[i] == entry->heldItem)
            return FALSE; // Item Clause
    }
    return TRUE;
}

static void BuildRedMonFromPoolEntry(struct Pokemon *mon, const struct RedPoolEntry *entry)
{
    u32 i;
    u8 maxIv = MAX_PER_STAT_IVS;
    u32 personality = GetMonPersonality(entry->species, MON_GENDERLESS, entry->nature, 0);

    CreateMonWithIVs(mon, entry->species, MAX_LEVEL, personality, OTID_STRUCT_RANDOM_NO_SHINY, MAX_PER_STAT_IVS);

    for (i = 0; i < MAX_MON_MOVES; i++)
        SetMonMoveSlot(mon, entry->moves[i], i);

    SetMonData(mon, MON_DATA_HELD_ITEM, &entry->heldItem);
    SetMonData(mon, MON_DATA_HP_EV, &entry->evs[0]);
    SetMonData(mon, MON_DATA_ATK_EV, &entry->evs[1]);
    SetMonData(mon, MON_DATA_DEF_EV, &entry->evs[2]);
    SetMonData(mon, MON_DATA_SPATK_EV, &entry->evs[3]);
    SetMonData(mon, MON_DATA_SPDEF_EV, &entry->evs[4]);
    SetMonData(mon, MON_DATA_SPEED_EV, &entry->evs[5]);

    SetMonData(mon, MON_DATA_HP_IV, &maxIv);
    SetMonData(mon, MON_DATA_ATK_IV, &maxIv);
    SetMonData(mon, MON_DATA_DEF_IV, &maxIv);
    SetMonData(mon, MON_DATA_SPEED_IV, &maxIv);
    SetMonData(mon, MON_DATA_SPATK_IV, &maxIv);
    SetMonData(mon, MON_DATA_SPDEF_IV, &maxIv);

    CalculateMonStats(mon);
}

void CreateRedGrandChampionParty(struct Pokemon *party)
{
    u16 usedSpecies[PARTY_SIZE];
    u16 usedItems[PARTY_SIZE];
    u32 slot = 0;
    u32 attempts;
    u32 idx;

    ZeroPartyMons(party);

    // Draw 3 unique Legendaries from sRedLegendaryPool
    while (slot < 3)
    {
        idx = Random() % ARRAY_COUNT(sRedLegendaryPool);
        for (attempts = 0; attempts < ARRAY_COUNT(sRedLegendaryPool); attempts++)
        {
            const struct RedPoolEntry *candidate = &sRedLegendaryPool[(idx + attempts) % ARRAY_COUNT(sRedLegendaryPool)];
            if (IsRedEntryAllowed(candidate, usedSpecies, usedItems, slot))
            {
                usedSpecies[slot] = candidate->species;
                usedItems[slot] = candidate->heldItem;
                BuildRedMonFromPoolEntry(&party[slot], candidate);
                slot++;
                break;
            }
        }
    }

    // Draw 3 unique Competitive Aces from sRedAcePool
    while (slot < PARTY_SIZE)
    {
        idx = Random() % ARRAY_COUNT(sRedAcePool);
        for (attempts = 0; attempts < ARRAY_COUNT(sRedAcePool); attempts++)
        {
            const struct RedPoolEntry *candidate = &sRedAcePool[(idx + attempts) % ARRAY_COUNT(sRedAcePool)];
            if (IsRedEntryAllowed(candidate, usedSpecies, usedItems, slot))
            {
                usedSpecies[slot] = candidate->species;
                usedItems[slot] = candidate->heldItem;
                BuildRedMonFromPoolEntry(&party[slot], candidate);
                slot++;
                break;
            }
        }
    }
}

