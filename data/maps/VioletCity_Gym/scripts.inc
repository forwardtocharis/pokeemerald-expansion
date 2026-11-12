VioletCity_Gym_MapScripts::
	.byte 0

VioletCity_Gym_EventScript_Falkner::
	goto_if_set FLAG_JOHTO_BADGE01_GET, VioletCity_Gym_EventScript_FalknerRematch
	trainerbattle_single TRAINER_LEADER_FALKNER, VioletCity_Gym_Text_FalknerIntro, VioletCity_Gym_Text_FalknerDefeat, VioletCity_Gym_EventScript_DefeatedFalkner, NO_MUSIC
	msgbox VioletCity_Gym_Text_FalknerPostBattle, MSGBOX_DEFAULT
	release
	end

VioletCity_Gym_EventScript_FalknerRematch::
	msgbox VioletCity_Gym_Text_FalknerRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VioletCity_Gym_EventScript_FalknerNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_FALKNER_REMATCH, VioletCity_Gym_Text_FalknerDefeat
	msgbox VioletCity_Gym_Text_FalknerPostRematch, MSGBOX_DEFAULT
	release
	end

VioletCity_Gym_EventScript_FalknerNoRematch::
	msgbox VioletCity_Gym_Text_FalknerPostBattle, MSGBOX_DEFAULT
	release
	end

VioletCity_Gym_EventScript_DefeatedFalkner::
	setflag FLAG_JOHTO_BADGE01_GET
	special UpdateTotalBadges
	msgbox VioletCity_Gym_Text_FalknerExplainBadge, MSGBOX_DEFAULT
	release
	end

VioletCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_JOHTO_BADGE01_GET, VioletCity_Gym_EventScript_GymGuyPostVictory
	msgbox VioletCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

VioletCity_Gym_EventScript_GymGuyPostVictory::
	msgbox VioletCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

VioletCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_JOHTO_BADGE01_GET, VioletCity_Gym_EventScript_GymStatuePostVictory
	msgbox VioletCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

VioletCity_Gym_EventScript_GymStatuePostVictory::
	msgbox VioletCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end
VioletCity_Gym_Text_FalknerIntro:
	.string "FALKNER: Welcome to the VIOLET\n"
	.string "CITY GYM!\p"
	.string "I specialize in FLYING-type\n"
	.string "Pokémon.\p"
	.string "Show me what you and your team are\n"
	.string "made of!$"

VioletCity_Gym_Text_FalknerDefeat:
	.string "Incredible! You have bested my\n"
	.string "FLYING techniques!\p"
	.string "Take the official LEAGUE ZEPHYR\n"
	.string "BADGE!$"

VioletCity_Gym_Text_FalknerPostBattle:
	.string "FALKNER: With that badge, your\n"
	.string "journey reaches new heights.\p"
	.string "Continue striving toward greatness!$"

VioletCity_Gym_Text_FalknerRematchIntro:
	.string "FALKNER: Welcome back, Trainer!\n"
	.string "My team has grown substantially\p"
	.string "since our last match.\n"
	.string "Are you ready for a rematch battle?$"

VioletCity_Gym_Text_FalknerPostRematch:
	.string "FALKNER: What a spectacular\n"
	.string "contest!\p"
	.string "Your mastery is truly beyond\n"
	.string "compare!$"

VioletCity_Gym_Text_FalknerExplainBadge:
	.string "FALKNER: The ZEPHYR BADGE proves\n"
	.string "your strength.\p"
	.string "Pokémon across the land will\n"
	.string "acknowledge your bond!$"

VioletCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about FLYING-type\p"
	.string "Pokémon.\n"
	.string "Plan your types carefully and\p"
	.string "strike with purpose!$"

VioletCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible\n"
	.string "gym victory!$"

VioletCity_Gym_Text_GymStatue:
	.string "VIOLET CITY POKéMON GYM\n"
	.string "LEADER: FALKNER\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

VioletCity_Gym_Text_GymStatuePlayerWon:
	.string "VIOLET CITY POKéMON GYM\n"
	.string "LEADER: FALKNER\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

