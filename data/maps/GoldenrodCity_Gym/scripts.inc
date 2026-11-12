GoldenrodCity_Gym_MapScripts::
	.byte 0

GoldenrodCity_Gym_EventScript_Whitney::
	goto_if_set FLAG_JOHTO_BADGE03_GET, GoldenrodCity_Gym_EventScript_WhitneyRematch
	trainerbattle_single TRAINER_LEADER_WHITNEY, GoldenrodCity_Gym_Text_WhitneyIntro, GoldenrodCity_Gym_Text_WhitneyDefeat, GoldenrodCity_Gym_EventScript_DefeatedWhitney, NO_MUSIC
	msgbox GoldenrodCity_Gym_Text_WhitneyPostBattle, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_Gym_EventScript_WhitneyRematch::
	msgbox GoldenrodCity_Gym_Text_WhitneyRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_Gym_EventScript_WhitneyNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_WHITNEY_REMATCH, GoldenrodCity_Gym_Text_WhitneyDefeat
	msgbox GoldenrodCity_Gym_Text_WhitneyPostRematch, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_Gym_EventScript_WhitneyNoRematch::
	msgbox GoldenrodCity_Gym_Text_WhitneyPostBattle, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_Gym_EventScript_DefeatedWhitney::
	setflag FLAG_JOHTO_BADGE03_GET
	special UpdateTotalBadges
	msgbox GoldenrodCity_Gym_Text_WhitneyExplainBadge, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_JOHTO_BADGE03_GET, GoldenrodCity_Gym_EventScript_GymGuyPostVictory
	msgbox GoldenrodCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_Gym_EventScript_GymGuyPostVictory::
	msgbox GoldenrodCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_JOHTO_BADGE03_GET, GoldenrodCity_Gym_EventScript_GymStatuePostVictory
	msgbox GoldenrodCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

GoldenrodCity_Gym_EventScript_GymStatuePostVictory::
	msgbox GoldenrodCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end

GoldenrodCity_Gym_EventScript_GymTrainer1::
	trainerbattle_single TRAINER_ALBERTO, GoldenrodCity_Gym_Text_GymTrainer1Intro, GoldenrodCity_Gym_Text_GymTrainer1Defeat
	msgbox GoldenrodCity_Gym_Text_GymTrainer1PostBattle, MSGBOX_AUTOCLOSE
	end

GoldenrodCity_Gym_EventScript_GymTrainer2::
	trainerbattle_single TRAINER_DECLAN, GoldenrodCity_Gym_Text_GymTrainer2Intro, GoldenrodCity_Gym_Text_GymTrainer2Defeat
	msgbox GoldenrodCity_Gym_Text_GymTrainer2PostBattle, MSGBOX_AUTOCLOSE
	end
GoldenrodCity_Gym_Text_WhitneyIntro:
	.string "WHITNEY: Welcome to the GOLDENROD\n"
	.string "CITY GYM!\p"
	.string "I specialize in NORMAL-type\n"
	.string "Pokémon.\p"
	.string "Show me what you and your team are\n"
	.string "made of!$"

GoldenrodCity_Gym_Text_WhitneyDefeat:
	.string "Incredible! You have bested my\n"
	.string "NORMAL techniques!\p"
	.string "Take the official LEAGUE PLAIN\n"
	.string "BADGE!$"

GoldenrodCity_Gym_Text_WhitneyPostBattle:
	.string "WHITNEY: With that badge, your\n"
	.string "journey reaches new heights.\p"
	.string "Continue striving toward greatness!$"

GoldenrodCity_Gym_Text_WhitneyRematchIntro:
	.string "WHITNEY: Welcome back, Trainer!\n"
	.string "My team has grown substantially\p"
	.string "since our last match.\n"
	.string "Are you ready for a rematch battle?$"

GoldenrodCity_Gym_Text_WhitneyPostRematch:
	.string "WHITNEY: What a spectacular\n"
	.string "contest!\p"
	.string "Your mastery is truly beyond\n"
	.string "compare!$"

GoldenrodCity_Gym_Text_WhitneyExplainBadge:
	.string "WHITNEY: The PLAIN BADGE proves\n"
	.string "your strength.\p"
	.string "Pokémon across the land will\n"
	.string "acknowledge your bond!$"

GoldenrodCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about NORMAL-type\p"
	.string "Pokémon.\n"
	.string "Plan your types carefully and\p"
	.string "strike with purpose!$"

GoldenrodCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible\n"
	.string "gym victory!$"

GoldenrodCity_Gym_Text_GymStatue:
	.string "GOLDENROD CITY POKéMON GYM\n"
	.string "LEADER: WHITNEY\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

GoldenrodCity_Gym_Text_GymStatuePlayerWon:
	.string "GOLDENROD CITY POKéMON GYM\n"
	.string "LEADER: WHITNEY\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

GoldenrodCity_Gym_Text_GymTrainer1Intro:
	.string "Hold it! Before you challenge\n"
	.string "WHITNEY, you must pass my NORMAL-\p"
	.string "type trial!$"

GoldenrodCity_Gym_Text_GymTrainer1Defeat:
	.string "What poise! My Plain formation\n"
	.string "couldn't hold you back!$"

GoldenrodCity_Gym_Text_GymTrainer1PostBattle:
	.string "WHITNEY has honed NORMAL-type\n"
	.string "mastery far beyond mine. Stay\p"
	.string "sharp!$"

GoldenrodCity_Gym_Text_GymTrainer2Intro:
	.string "You're one step from WHITNEY!\n"
	.string "Let's see how you handle true\p"
	.string "NORMAL power!$"

GoldenrodCity_Gym_Text_GymTrainer2Defeat:
	.string "Your Metronome counter-strategy\n"
	.string "broke right through my defense!$"

GoldenrodCity_Gym_Text_GymTrainer2PostBattle:
	.string "Go on ahead! WHITNEY is waiting at\n"
	.string "the back of the Gym!$"

