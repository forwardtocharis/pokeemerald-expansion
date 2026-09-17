#ifndef GUARD_MULTI_REGION_H
#define GUARD_MULTI_REGION_H

#include "global.h"

#define STARTING_REGION_HOENN   0
#define STARTING_REGION_KANTO   1
#define STARTING_REGION_JOHTO   2
#define STARTING_REGION_SINNOH  3

// Multi-region badge tracking & battle scaling
void UpdateTotalBadges(void);
u16 GetTotalBadgesCount(void);
u16 GetRegionBadgeCount(u8 regionId);
u8 GetActiveRegion(void);
void SetActiveRegion(u8 regionId);
u8 GetScaledTrainerMonLevel(u8 baseLevel);
void SetStartingRegionChoice(u8 region);
u8 GetStartingRegionChoice(void);

#endif // GUARD_MULTI_REGION_H
