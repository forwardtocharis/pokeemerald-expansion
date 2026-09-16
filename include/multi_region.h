#ifndef GUARD_MULTI_REGION_H
#define GUARD_MULTI_REGION_H

#include "global.h"

// Multi-region badge tracking & battle scaling
void UpdateTotalBadges(void);
u16 GetTotalBadgesCount(void);
u16 GetRegionBadgeCount(u8 regionId);
u8 GetActiveRegion(void);
void SetActiveRegion(u8 regionId);
u8 GetScaledTrainerMonLevel(u8 baseLevel, u16 trainerNum);

#endif // GUARD_MULTI_REGION_H
