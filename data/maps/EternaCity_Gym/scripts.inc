EternaCity_Gym_MapScripts::
	.byte 0

EternaCity_Gym_EventScript_Gardenia::
	goto_if_set FLAG_SINNOH_BADGE02_GET, EternaCity_Gym_EventScript_GardeniaRematch
	trainerbattle_single TRAINER_LEADER_GARDENIA, EternaCity_Gym_Text_GardeniaIntro, EternaCity_Gym_Text_GardeniaDefeat, EternaCity_Gym_EventScript_DefeatedGardenia, NO_MUSIC
	msgbox EternaCity_Gym_Text_GardeniaPostBattle, MSGBOX_DEFAULT
	release
	end

EternaCity_Gym_EventScript_GardeniaRematch::
	msgbox EternaCity_Gym_Text_GardeniaRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EternaCity_Gym_EventScript_GardeniaNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_GARDENIA_REMATCH, EternaCity_Gym_Text_GardeniaDefeat
	msgbox EternaCity_Gym_Text_GardeniaPostRematch, MSGBOX_DEFAULT
	release
	end

EternaCity_Gym_EventScript_GardeniaNoRematch::
	msgbox EternaCity_Gym_Text_GardeniaPostBattle, MSGBOX_DEFAULT
	release
	end

EternaCity_Gym_EventScript_DefeatedGardenia::
	setflag FLAG_SINNOH_BADGE02_GET
	special UpdateTotalBadges
	msgbox EternaCity_Gym_Text_GardeniaExplainBadge, MSGBOX_DEFAULT
	release
	end

EternaCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_SINNOH_BADGE02_GET, EternaCity_Gym_EventScript_GymGuyPostVictory
	msgbox EternaCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

EternaCity_Gym_EventScript_GymGuyPostVictory::
	msgbox EternaCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

EternaCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_SINNOH_BADGE02_GET, EternaCity_Gym_EventScript_GymStatuePostVictory
	msgbox EternaCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

EternaCity_Gym_EventScript_GymStatuePostVictory::
	msgbox EternaCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end
EternaCity_Gym_Text_GardeniaIntro:
	.string "GARDENIA: Welcome to the ETERNA\n"
	.string "CITY GYM!\p"
	.string "I specialize in GRASS-type Pokémon.\n"
	.string "Show me what you and your team are\p"
	.string "made of!$"

EternaCity_Gym_Text_GardeniaDefeat:
	.string "Incredible! You have bested my\n"
	.string "GRASS techniques!\p"
	.string "Take the official LEAGUE FOREST\n"
	.string "BADGE!$"

EternaCity_Gym_Text_GardeniaPostBattle:
	.string "GARDENIA: With that badge, your\n"
	.string "journey reaches new heights.\p"
	.string "Continue striving toward greatness!$"

EternaCity_Gym_Text_GardeniaRematchIntro:
	.string "GARDENIA: Welcome back, Trainer!\n"
	.string "My team has grown substantially\p"
	.string "since our last match.\n"
	.string "Are you ready for a rematch battle?$"

EternaCity_Gym_Text_GardeniaPostRematch:
	.string "GARDENIA: What a spectacular\n"
	.string "contest!\p"
	.string "Your mastery is truly beyond\n"
	.string "compare!$"

EternaCity_Gym_Text_GardeniaExplainBadge:
	.string "GARDENIA: The FOREST BADGE proves\n"
	.string "your strength.\p"
	.string "Pokémon across the land will\n"
	.string "acknowledge your bond!$"

EternaCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about GRASS-type\p"
	.string "Pokémon.\n"
	.string "Plan your types carefully and\p"
	.string "strike with purpose!$"

EternaCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible\n"
	.string "gym victory!$"

EternaCity_Gym_Text_GymStatue:
	.string "ETERNA CITY POKéMON GYM\n"
	.string "LEADER: GARDENIA\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

EternaCity_Gym_Text_GymStatuePlayerWon:
	.string "ETERNA CITY POKéMON GYM\n"
	.string "LEADER: GARDENIA\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

