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
	.string "GARDENIA: Welcome to the ETERNA CITY GYM!"
	.string "I specialize in GRASS-type Pokémon."
	.string "Show me what you and your team are made of!"

EternaCity_Gym_Text_GardeniaDefeat:
	.string "Incredible! You have bested my GRASS techniques!"
	.string "Take the official LEAGUE FOREST BADGE!"

EternaCity_Gym_Text_GardeniaPostBattle:
	.string "GARDENIA: With that badge, your journey reaches new heights."
	.string "Continue striving toward greatness!"

EternaCity_Gym_Text_GardeniaRematchIntro:
	.string "GARDENIA: Welcome back, Trainer!"
	.string "My team has grown substantially since our last match."
	.string "Are you ready for a rematch battle?"

EternaCity_Gym_Text_GardeniaPostRematch:
	.string "GARDENIA: What a spectacular contest!"
	.string "Your mastery is truly beyond compare!"

EternaCity_Gym_Text_GardeniaExplainBadge:
	.string "GARDENIA: The FOREST BADGE proves your strength."
	.string "Pokémon across the land will acknowledge your bond!"

EternaCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!"
	.string "This GYM is all about GRASS-type Pokémon."
	.string "Plan your types carefully and strike with purpose!"

EternaCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible gym victory!"

EternaCity_Gym_Text_GymStatue:
	.string "ETERNA CITY POKéMON GYM"
	.string "LEADER: GARDENIA"
	.string "WINNING TRAINERS:"
	.string "????"

EternaCity_Gym_Text_GymStatuePlayerWon:
	.string "ETERNA CITY POKéMON GYM"
	.string "LEADER: GARDENIA"
	.string "WINNING TRAINERS:"
	.string "{PLAYER}"

