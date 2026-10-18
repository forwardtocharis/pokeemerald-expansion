VermilionCity_Gym_MapScripts::
	.byte 0

VermilionCity_Gym_EventScript_LtSurge::
	goto_if_set FLAG_KANTO_BADGE03_GET, VermilionCity_Gym_EventScript_LtSurgeRematch
	trainerbattle_single TRAINER_LEADER_LT_SURGE, VermilionCity_Gym_Text_LtSurgeIntro, VermilionCity_Gym_Text_LtSurgeDefeat, VermilionCity_Gym_EventScript_DefeatedLtSurge, NO_MUSIC
	msgbox VermilionCity_Gym_Text_LtSurgePostBattle, MSGBOX_DEFAULT
	release
	end

VermilionCity_Gym_EventScript_LtSurgeRematch::
	msgbox VermilionCity_Gym_Text_LtSurgeRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VermilionCity_Gym_EventScript_LtSurgeNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_LT_SURGE_REMATCH, VermilionCity_Gym_Text_LtSurgeDefeat
	msgbox VermilionCity_Gym_Text_LtSurgePostRematch, MSGBOX_DEFAULT
	release
	end

VermilionCity_Gym_EventScript_LtSurgeNoRematch::
	msgbox VermilionCity_Gym_Text_LtSurgePostBattle, MSGBOX_DEFAULT
	release
	end

VermilionCity_Gym_EventScript_DefeatedLtSurge::
	setflag FLAG_KANTO_BADGE03_GET
	special UpdateTotalBadges
	msgbox VermilionCity_Gym_Text_LtSurgeExplainBadge, MSGBOX_DEFAULT
	release
	end

VermilionCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_KANTO_BADGE03_GET, VermilionCity_Gym_EventScript_GymGuyPostVictory
	msgbox VermilionCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

VermilionCity_Gym_EventScript_GymGuyPostVictory::
	msgbox VermilionCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

VermilionCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_KANTO_BADGE03_GET, VermilionCity_Gym_EventScript_GymStatuePostVictory
	msgbox VermilionCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

VermilionCity_Gym_EventScript_GymStatuePostVictory::
	msgbox VermilionCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end
VermilionCity_Gym_Text_LtSurgeIntro:
	.string "LT_SURGE: Welcome to the VERMILION CITY GYM!\n"
	.string "I specialize in ELECTRIC-type Pokémon.\p"
	.string "Show me what you and your team are made of!$"

VermilionCity_Gym_Text_LtSurgeDefeat:
	.string "Incredible! You have bested my ELECTRIC techniques!\n"
	.string "Take the official LEAGUE THUNDER BADGE!$"

VermilionCity_Gym_Text_LtSurgePostBattle:
	.string "LT_SURGE: With that badge, your journey reaches new heights.\n"
	.string "Continue striving toward greatness!$"

VermilionCity_Gym_Text_LtSurgeRematchIntro:
	.string "LT_SURGE: Welcome back, Trainer!\n"
	.string "My team has grown substantially since our last match.\p"
	.string "Are you ready for a rematch battle?$"

VermilionCity_Gym_Text_LtSurgePostRematch:
	.string "LT_SURGE: What a spectacular contest!\n"
	.string "Your mastery is truly beyond compare!$"

VermilionCity_Gym_Text_LtSurgeExplainBadge:
	.string "LT_SURGE: The THUNDER BADGE proves your strength.\n"
	.string "Pokémon across the land will acknowledge your bond!$"

VermilionCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about ELECTRIC-type Pokémon.\p"
	.string "Plan your types carefully and strike with purpose!$"

VermilionCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible gym victory!$"

VermilionCity_Gym_Text_GymStatue:
	.string "VERMILION CITY POKéMON GYM\n"
	.string "LEADER: LT_SURGE\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

VermilionCity_Gym_Text_GymStatuePlayerWon:
	.string "VERMILION CITY POKéMON GYM\n"
	.string "LEADER: LT_SURGE\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

