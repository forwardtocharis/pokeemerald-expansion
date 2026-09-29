#ifndef GUARD_MULTI_REGION_H
#define GUARD_MULTI_REGION_H

#include "global.h"
#include "constants/opponents.h"

#define STARTING_REGION_HOENN   0
#define STARTING_REGION_KANTO   1
#define STARTING_REGION_JOHTO   2
#define STARTING_REGION_SINNOH  3

#define REGIONAL_SCALING_CAP    90

// Rematch daily cooldown: one rematch per trainer per calendar day (resets at midnight).
// The bitfield lives in EWRAM and auto-clears when the RTC day changes.
// It does NOT persist across save/load — a fresh session starts with all rematches available.
#define REMATCH_TRACKER_BYTES   ((MAX_TRAINERS_COUNT + 7) / 8)

// Multi-region badge tracking & battle scaling
void UpdateTotalBadges(void);
u16 GetTotalBadgesCount(void);
u16 GetRegionBadgeCount(u8 regionId);
u8 GetActiveRegion(void);
void SetActiveRegion(u8 regionId);
u8 GetScaledTrainerMonLevel(u8 baseLevel);
void SetStartingRegionChoice(u8 region);
u8 GetStartingRegionChoice(void);

// Daily rematch cooldown
bool32 HasRematchedToday(u16 trainerId);
void SetRematchedToday(u16 trainerId);

#endif // GUARD_MULTI_REGION_H
