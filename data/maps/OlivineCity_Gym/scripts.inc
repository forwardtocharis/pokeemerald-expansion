OlivineCity_Gym_MapScripts::
	.byte 0

OlivineCity_Gym_EventScript_Jasmine::
	goto_if_set FLAG_JOHTO_BADGE06_GET, OlivineCity_Gym_EventScript_JasmineRematch
	trainerbattle_single TRAINER_LEADER_JASMINE, OlivineCity_Gym_Text_JasmineIntro, OlivineCity_Gym_Text_JasmineDefeat, OlivineCity_Gym_EventScript_DefeatedJasmine, NO_MUSIC
	msgbox OlivineCity_Gym_Text_JasminePostBattle, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_JasmineRematch::
	msgbox OlivineCity_Gym_Text_JasmineRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OlivineCity_Gym_EventScript_JasmineNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_JASMINE_REMATCH, OlivineCity_Gym_Text_JasmineDefeat
	msgbox OlivineCity_Gym_Text_JasminePostRematch, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_JasmineNoRematch::
	msgbox OlivineCity_Gym_Text_JasminePostBattle, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_DefeatedJasmine::
	setflag FLAG_JOHTO_BADGE06_GET
	special UpdateTotalBadges
	msgbox OlivineCity_Gym_Text_JasmineExplainBadge, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_JOHTO_BADGE06_GET, OlivineCity_Gym_EventScript_GymGuyPostVictory
	msgbox OlivineCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_GymGuyPostVictory::
	msgbox OlivineCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

OlivineCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_JOHTO_BADGE06_GET, OlivineCity_Gym_EventScript_GymStatuePostVictory
	msgbox OlivineCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

OlivineCity_Gym_EventScript_GymStatuePostVictory::
	msgbox OlivineCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end
OlivineCity_Gym_Text_JasmineIntro:
	.string "JASMINE: Welcome to the OLIVINE CITY GYM!"
	.string "I specialize in STEEL-type Pokémon."
	.string "Show me what you and your team are made of!"

OlivineCity_Gym_Text_JasmineDefeat:
	.string "Incredible! You have bested my STEEL techniques!"
	.string "Take the official LEAGUE MINERAL BADGE!"

OlivineCity_Gym_Text_JasminePostBattle:
	.string "JASMINE: With that badge, your journey reaches new heights."
	.string "Continue striving toward greatness!"

OlivineCity_Gym_Text_JasmineRematchIntro:
	.string "JASMINE: Welcome back, Trainer!"
	.string "My team has grown substantially since our last match."
	.string "Are you ready for a rematch battle?"

OlivineCity_Gym_Text_JasminePostRematch:
	.string "JASMINE: What a spectacular contest!"
	.string "Your mastery is truly beyond compare!"

OlivineCity_Gym_Text_JasmineExplainBadge:
	.string "JASMINE: The MINERAL BADGE proves your strength."
	.string "Pokémon across the land will acknowledge your bond!"

OlivineCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!"
	.string "This GYM is all about STEEL-type Pokémon."
	.string "Plan your types carefully and strike with purpose!"

OlivineCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible gym victory!"

OlivineCity_Gym_Text_GymStatue:
	.string "OLIVINE CITY POKéMON GYM"
	.string "LEADER: JASMINE"
	.string "WINNING TRAINERS:"
	.string "????"

OlivineCity_Gym_Text_GymStatuePlayerWon:
	.string "OLIVINE CITY POKéMON GYM"
	.string "LEADER: JASMINE"
	.string "WINNING TRAINERS:"
	.string "{PLAYER}"

