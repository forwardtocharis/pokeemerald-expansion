#include "global.h"
#include "event_data.h"
#include "multi_region.h"
#include "constants/flags.h"
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

    totalBadges = VarGet(VAR_TOTAL_BADGES);
    if (totalBadges == 0)
        return baseLevel;

    // Smooth progression scaling across 32 badges without overflowing MAX_LEVEL
    scaled = baseLevel + ((totalBadges * (MAX_LEVEL - baseLevel)) / 48);
    if (scaled > MAX_LEVEL)
        scaled = MAX_LEVEL;
    if (scaled < 1)
        scaled = 1;

    return (u8)scaled;
}
