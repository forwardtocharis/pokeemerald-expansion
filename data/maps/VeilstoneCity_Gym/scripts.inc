VeilstoneCity_Gym_MapScripts::
	.byte 0

VeilstoneCity_Gym_EventScript_Maylene::
	goto_if_set FLAG_SINNOH_BADGE03_GET, VeilstoneCity_Gym_EventScript_MayleneRematch
	trainerbattle_single TRAINER_LEADER_MAYLENE, VeilstoneCity_Gym_Text_MayleneIntro, VeilstoneCity_Gym_Text_MayleneDefeat, VeilstoneCity_Gym_EventScript_DefeatedMaylene, NO_MUSIC
	msgbox VeilstoneCity_Gym_Text_MaylenePostBattle, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Gym_EventScript_MayleneRematch::
	msgbox VeilstoneCity_Gym_Text_MayleneRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VeilstoneCity_Gym_EventScript_MayleneNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_MAYLENE_REMATCH, VeilstoneCity_Gym_Text_MayleneDefeat
	msgbox VeilstoneCity_Gym_Text_MaylenePostRematch, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Gym_EventScript_MayleneNoRematch::
	msgbox VeilstoneCity_Gym_Text_MaylenePostBattle, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Gym_EventScript_DefeatedMaylene::
	setflag FLAG_SINNOH_BADGE03_GET
	special UpdateTotalBadges
	msgbox VeilstoneCity_Gym_Text_MayleneExplainBadge, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_SINNOH_BADGE03_GET, VeilstoneCity_Gym_EventScript_GymGuyPostVictory
	msgbox VeilstoneCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Gym_EventScript_GymGuyPostVictory::
	msgbox VeilstoneCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_SINNOH_BADGE03_GET, VeilstoneCity_Gym_EventScript_GymStatuePostVictory
	msgbox VeilstoneCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

VeilstoneCity_Gym_EventScript_GymStatuePostVictory::
	msgbox VeilstoneCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end
VeilstoneCity_Gym_Text_MayleneIntro:
	.string "MAYLENE: Welcome to the VEILSTONE\n"
	.string "CITY GYM!\p"
	.string "I specialize in FIGHTING-type\n"
	.string "Pokémon.\p"
	.string "Show me what you and your team are\n"
	.string "made of!$"

VeilstoneCity_Gym_Text_MayleneDefeat:
	.string "Incredible! You have bested my\n"
	.string "FIGHTING techniques!\p"
	.string "Take the official LEAGUE COBBLE\n"
	.string "BADGE!$"

VeilstoneCity_Gym_Text_MaylenePostBattle:
	.string "MAYLENE: With that badge, your\n"
	.string "journey reaches new heights.\p"
	.string "Continue striving toward greatness!$"

VeilstoneCity_Gym_Text_MayleneRematchIntro:
	.string "MAYLENE: Welcome back, Trainer!\n"
	.string "My team has grown substantially\p"
	.string "since our last match.\n"
	.string "Are you ready for a rematch battle?$"

VeilstoneCity_Gym_Text_MaylenePostRematch:
	.string "MAYLENE: What a spectacular\n"
	.string "contest!\p"
	.string "Your mastery is truly beyond\n"
	.string "compare!$"

VeilstoneCity_Gym_Text_MayleneExplainBadge:
	.string "MAYLENE: The COBBLE BADGE proves\n"
	.string "your strength.\p"
	.string "Pokémon across the land will\n"
	.string "acknowledge your bond!$"

VeilstoneCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about FIGHTING-\p"
	.string "type Pokémon.\n"
	.string "Plan your types carefully and\p"
	.string "strike with purpose!$"

VeilstoneCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible\n"
	.string "gym victory!$"

VeilstoneCity_Gym_Text_GymStatue:
	.string "VEILSTONE CITY POKéMON GYM\n"
	.string "LEADER: MAYLENE\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

VeilstoneCity_Gym_Text_GymStatuePlayerWon:
	.string "VEILSTONE CITY POKéMON GYM\n"
	.string "LEADER: MAYLENE\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

