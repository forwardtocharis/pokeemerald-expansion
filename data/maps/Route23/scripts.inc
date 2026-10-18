Route23_MapScripts::
	.byte 0

Route23_EventScript_VictoryRoadGateSign::
	msgbox Route23_Text_Sign1, MSGBOX_SIGN
	end

Route23_EventScript_CascadeBadgeGuard::
	msgbox Route23_Text_BadgeGuardPass, MSGBOX_NPC
	end

Route23_EventScript_ThunderBadgeGuard::
	msgbox Route23_Text_BadgeGuardPass, MSGBOX_NPC
	end

Route23_EventScript_RainbowBadgeGuard::
	msgbox Route23_Text_BadgeGuardPass, MSGBOX_NPC
	end

Route23_EventScript_SoulBadgeGuard::
	msgbox Route23_Text_BadgeGuardPass, MSGBOX_NPC
	end

Route23_EventScript_MarshBadgeGuard::
	msgbox Route23_Text_BadgeGuardPass, MSGBOX_NPC
	end

Route23_EventScript_VolcanoBadgeGuard::
	msgbox Route23_Text_BadgeGuardPass, MSGBOX_NPC
	end

Route23_EventScript_EarthBadgeGuard::
	msgbox Route23_Text_BadgeGuardPass, MSGBOX_NPC
	end
Route23_Text_Sign1:
	.string "Route23$"

Route23_Text_BadgeGuardPass:
	.string "Pass through to VICTORY ROAD!$"

