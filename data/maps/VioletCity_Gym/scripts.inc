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
	.string "FALKNER: Welcome to the VIOLET CITY GYM!"
	.string "I specialize in FLYING-type Pokémon."
	.string "Show me what you and your team are made of!"

VioletCity_Gym_Text_FalknerDefeat:
	.string "Incredible! You have bested my FLYING techniques!"
	.string "Take the official LEAGUE ZEPHYR BADGE!"

VioletCity_Gym_Text_FalknerPostBattle:
	.string "FALKNER: With that badge, your journey reaches new heights."
	.string "Continue striving toward greatness!"

VioletCity_Gym_Text_FalknerRematchIntro:
	.string "FALKNER: Welcome back, Trainer!"
	.string "My team has grown substantially since our last match."
	.string "Are you ready for a rematch battle?"

VioletCity_Gym_Text_FalknerPostRematch:
	.string "FALKNER: What a spectacular contest!"
	.string "Your mastery is truly beyond compare!"

VioletCity_Gym_Text_FalknerExplainBadge:
	.string "FALKNER: The ZEPHYR BADGE proves your strength."
	.string "Pokémon across the land will acknowledge your bond!"

VioletCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!"
	.string "This GYM is all about FLYING-type Pokémon."
	.string "Plan your types carefully and strike with purpose!"

VioletCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible gym victory!"

VioletCity_Gym_Text_GymStatue:
	.string "VIOLET CITY POKéMON GYM"
	.string "LEADER: FALKNER"
	.string "WINNING TRAINERS:"
	.string "????"

VioletCity_Gym_Text_GymStatuePlayerWon:
	.string "VIOLET CITY POKéMON GYM"
	.string "LEADER: FALKNER"
	.string "WINNING TRAINERS:"
	.string "{PLAYER}"

