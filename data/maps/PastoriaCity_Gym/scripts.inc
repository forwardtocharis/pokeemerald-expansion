PastoriaCity_Gym_MapScripts::
	.byte 0

PastoriaCity_Gym_EventScript_Wake::
	goto_if_set FLAG_SINNOH_BADGE04_GET, PastoriaCity_Gym_EventScript_WakeRematch
	trainerbattle_single TRAINER_LEADER_CRASHER_WAKE, PastoriaCity_Gym_Text_WakeIntro, PastoriaCity_Gym_Text_WakeDefeat, PastoriaCity_Gym_EventScript_DefeatedWake, NO_MUSIC
	msgbox PastoriaCity_Gym_Text_WakePostBattle, MSGBOX_DEFAULT
	release
	end

PastoriaCity_Gym_EventScript_WakeRematch::
	msgbox PastoriaCity_Gym_Text_WakeRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PastoriaCity_Gym_EventScript_WakeNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_CRASHER_WAKE_REMATCH, PastoriaCity_Gym_Text_WakeDefeat
	msgbox PastoriaCity_Gym_Text_WakePostRematch, MSGBOX_DEFAULT
	release
	end

PastoriaCity_Gym_EventScript_WakeNoRematch::
	msgbox PastoriaCity_Gym_Text_WakePostBattle, MSGBOX_DEFAULT
	release
	end

PastoriaCity_Gym_EventScript_DefeatedWake::
	setflag FLAG_SINNOH_BADGE04_GET
	special UpdateTotalBadges
	msgbox PastoriaCity_Gym_Text_WakeExplainBadge, MSGBOX_DEFAULT
	release
	end

PastoriaCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_SINNOH_BADGE04_GET, PastoriaCity_Gym_EventScript_GymGuyPostVictory
	msgbox PastoriaCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

PastoriaCity_Gym_EventScript_GymGuyPostVictory::
	msgbox PastoriaCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

PastoriaCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_SINNOH_BADGE04_GET, PastoriaCity_Gym_EventScript_GymStatuePostVictory
	msgbox PastoriaCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

PastoriaCity_Gym_EventScript_GymStatuePostVictory::
	msgbox PastoriaCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end

PastoriaCity_Gym_EventScript_GymTrainer1::
	trainerbattle_single TRAINER_ALBERTO, PastoriaCity_Gym_Text_GymTrainer1Intro, PastoriaCity_Gym_Text_GymTrainer1Defeat
	msgbox PastoriaCity_Gym_Text_GymTrainer1PostBattle, MSGBOX_AUTOCLOSE
	end

PastoriaCity_Gym_EventScript_GymTrainer2::
	trainerbattle_single TRAINER_ED, PastoriaCity_Gym_Text_GymTrainer2Intro, PastoriaCity_Gym_Text_GymTrainer2Defeat
	msgbox PastoriaCity_Gym_Text_GymTrainer2PostBattle, MSGBOX_AUTOCLOSE
	end
PastoriaCity_Gym_Text_WakeIntro:
	.string "CRASHER_WAKE: Welcome to the\n"
	.string "PASTORIA CITY GYM!\p"
	.string "I specialize in WATER-type Pokémon.\n"
	.string "Show me what you and your team are\p"
	.string "made of!$"

PastoriaCity_Gym_Text_WakeDefeat:
	.string "Incredible! You have bested my\n"
	.string "WATER techniques!\p"
	.string "Take the official LEAGUE FEN BADGE!$"

PastoriaCity_Gym_Text_WakePostBattle:
	.string "CRASHER_WAKE: With that badge,\n"
	.string "your journey reaches new heights.\p"
	.string "Continue striving toward greatness!$"

PastoriaCity_Gym_Text_WakeRematchIntro:
	.string "CRASHER_WAKE: Welcome back,\n"
	.string "Trainer!\p"
	.string "My team has grown substantially\n"
	.string "since our last match.\p"
	.string "Are you ready for a rematch battle?$"

PastoriaCity_Gym_Text_WakePostRematch:
	.string "CRASHER_WAKE: What a spectacular\n"
	.string "contest!\p"
	.string "Your mastery is truly beyond\n"
	.string "compare!$"

PastoriaCity_Gym_Text_WakeExplainBadge:
	.string "CRASHER_WAKE: The FEN BADGE proves\n"
	.string "your strength.\p"
	.string "Pokémon across the land will\n"
	.string "acknowledge your bond!$"

PastoriaCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about WATER-type\p"
	.string "Pokémon.\n"
	.string "Plan your types carefully and\p"
	.string "strike with purpose!$"

PastoriaCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible\n"
	.string "gym victory!$"

PastoriaCity_Gym_Text_GymStatue:
	.string "PASTORIA CITY POKéMON GYM\n"
	.string "LEADER: CRASHER_WAKE\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

PastoriaCity_Gym_Text_GymStatuePlayerWon:
	.string "PASTORIA CITY POKéMON GYM\n"
	.string "LEADER: CRASHER_WAKE\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

PastoriaCity_Gym_Text_GymTrainer1Intro:
	.string "Hold it! Before you challenge\n"
	.string "WAKE, you must pass my WATER-type\p"
	.string "trial!$"

PastoriaCity_Gym_Text_GymTrainer1Defeat:
	.string "What poise! My Fen formation\n"
	.string "couldn't hold you back!$"

PastoriaCity_Gym_Text_GymTrainer1PostBattle:
	.string "WAKE has honed WATER-type mastery\n"
	.string "far beyond mine. Stay sharp!$"

PastoriaCity_Gym_Text_GymTrainer2Intro:
	.string "You're one step from WAKE! Let's\n"
	.string "see how you handle true WATER\p"
	.string "power!$"

PastoriaCity_Gym_Text_GymTrainer2Defeat:
	.string "Your Torrent counter-strategy\n"
	.string "broke right through my defense!$"

PastoriaCity_Gym_Text_GymTrainer2PostBattle:
	.string "Go on ahead! WAKE is waiting at\n"
	.string "the back of the Gym!$"

