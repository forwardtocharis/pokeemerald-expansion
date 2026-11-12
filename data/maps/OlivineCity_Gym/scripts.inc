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

OlivineCity_Gym_EventScript_GymTrainer1::
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_1, OlivineCity_Gym_Text_GymTrainer1Intro, OlivineCity_Gym_Text_GymTrainer1Defeat
	msgbox OlivineCity_Gym_Text_GymTrainer1PostBattle, MSGBOX_AUTOCLOSE
	end

OlivineCity_Gym_EventScript_GymTrainer2::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, OlivineCity_Gym_Text_GymTrainer2Intro, OlivineCity_Gym_Text_GymTrainer2Defeat
	msgbox OlivineCity_Gym_Text_GymTrainer2PostBattle, MSGBOX_AUTOCLOSE
	end
OlivineCity_Gym_Text_JasmineIntro:
	.string "JASMINE: Welcome to the OLIVINE\n"
	.string "CITY GYM!\p"
	.string "I specialize in STEEL-type Pokémon.\n"
	.string "Show me what you and your team are\p"
	.string "made of!$"

OlivineCity_Gym_Text_JasmineDefeat:
	.string "Incredible! You have bested my\n"
	.string "STEEL techniques!\p"
	.string "Take the official LEAGUE MINERAL\n"
	.string "BADGE!$"

OlivineCity_Gym_Text_JasminePostBattle:
	.string "JASMINE: With that badge, your\n"
	.string "journey reaches new heights.\p"
	.string "Continue striving toward greatness!$"

OlivineCity_Gym_Text_JasmineRematchIntro:
	.string "JASMINE: Welcome back, Trainer!\n"
	.string "My team has grown substantially\p"
	.string "since our last match.\n"
	.string "Are you ready for a rematch battle?$"

OlivineCity_Gym_Text_JasminePostRematch:
	.string "JASMINE: What a spectacular\n"
	.string "contest!\p"
	.string "Your mastery is truly beyond\n"
	.string "compare!$"

OlivineCity_Gym_Text_JasmineExplainBadge:
	.string "JASMINE: The MINERAL BADGE proves\n"
	.string "your strength.\p"
	.string "Pokémon across the land will\n"
	.string "acknowledge your bond!$"

OlivineCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about STEEL-type\p"
	.string "Pokémon.\n"
	.string "Plan your types carefully and\p"
	.string "strike with purpose!$"

OlivineCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible\n"
	.string "gym victory!$"

OlivineCity_Gym_Text_GymStatue:
	.string "OLIVINE CITY POKéMON GYM\n"
	.string "LEADER: JASMINE\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

OlivineCity_Gym_Text_GymStatuePlayerWon:
	.string "OLIVINE CITY POKéMON GYM\n"
	.string "LEADER: JASMINE\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

OlivineCity_Gym_Text_GymTrainer1Intro:
	.string "Hold it! Before you challenge\n"
	.string "JASMINE, you must pass my STEEL-\p"
	.string "type trial!$"

OlivineCity_Gym_Text_GymTrainer1Defeat:
	.string "What poise! My Mineral formation\n"
	.string "couldn't hold you back!$"

OlivineCity_Gym_Text_GymTrainer1PostBattle:
	.string "JASMINE has honed STEEL-type\n"
	.string "mastery far beyond mine. Stay\p"
	.string "sharp!$"

OlivineCity_Gym_Text_GymTrainer2Intro:
	.string "You're one step from JASMINE!\n"
	.string "Let's see how you handle true\p"
	.string "STEEL power!$"

OlivineCity_Gym_Text_GymTrainer2Defeat:
	.string "Your Iron counter-strategy broke\n"
	.string "right through my defense!$"

OlivineCity_Gym_Text_GymTrainer2PostBattle:
	.string "Go on ahead! JASMINE is waiting at\n"
	.string "the back of the Gym!$"

