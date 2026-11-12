SnowpointCity_Gym_MapScripts::
	.byte 0

SnowpointCity_Gym_EventScript_Candice::
	goto_if_set FLAG_SINNOH_BADGE07_GET, SnowpointCity_Gym_EventScript_CandiceRematch
	trainerbattle_single TRAINER_LEADER_CANDICE, SnowpointCity_Gym_Text_CandiceIntro, SnowpointCity_Gym_Text_CandiceDefeat, SnowpointCity_Gym_EventScript_DefeatedCandice, NO_MUSIC
	msgbox SnowpointCity_Gym_Text_CandicePostBattle, MSGBOX_DEFAULT
	release
	end

SnowpointCity_Gym_EventScript_CandiceRematch::
	msgbox SnowpointCity_Gym_Text_CandiceRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SnowpointCity_Gym_EventScript_CandiceNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_CANDICE_REMATCH, SnowpointCity_Gym_Text_CandiceDefeat
	msgbox SnowpointCity_Gym_Text_CandicePostRematch, MSGBOX_DEFAULT
	release
	end

SnowpointCity_Gym_EventScript_CandiceNoRematch::
	msgbox SnowpointCity_Gym_Text_CandicePostBattle, MSGBOX_DEFAULT
	release
	end

SnowpointCity_Gym_EventScript_DefeatedCandice::
	setflag FLAG_SINNOH_BADGE07_GET
	special UpdateTotalBadges
	msgbox SnowpointCity_Gym_Text_CandiceExplainBadge, MSGBOX_DEFAULT
	release
	end

SnowpointCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_SINNOH_BADGE07_GET, SnowpointCity_Gym_EventScript_GymGuyPostVictory
	msgbox SnowpointCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

SnowpointCity_Gym_EventScript_GymGuyPostVictory::
	msgbox SnowpointCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

SnowpointCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_SINNOH_BADGE07_GET, SnowpointCity_Gym_EventScript_GymStatuePostVictory
	msgbox SnowpointCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

SnowpointCity_Gym_EventScript_GymStatuePostVictory::
	msgbox SnowpointCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end

SnowpointCity_Gym_EventScript_GymTrainer1::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, SnowpointCity_Gym_Text_GymTrainer1Intro, SnowpointCity_Gym_Text_GymTrainer1Defeat
	msgbox SnowpointCity_Gym_Text_GymTrainer1PostBattle, MSGBOX_AUTOCLOSE
	end

SnowpointCity_Gym_EventScript_GymTrainer2::
	trainerbattle_single TRAINER_GRUNT_MUSEUM_1, SnowpointCity_Gym_Text_GymTrainer2Intro, SnowpointCity_Gym_Text_GymTrainer2Defeat
	msgbox SnowpointCity_Gym_Text_GymTrainer2PostBattle, MSGBOX_AUTOCLOSE
	end
SnowpointCity_Gym_Text_CandiceIntro:
	.string "CANDICE: Welcome to the SNOWPOINT\n"
	.string "CITY GYM!\p"
	.string "I specialize in ICE-type Pokémon.\n"
	.string "Show me what you and your team are\p"
	.string "made of!$"

SnowpointCity_Gym_Text_CandiceDefeat:
	.string "Incredible! You have bested my ICE\n"
	.string "techniques!\p"
	.string "Take the official LEAGUE ICICLE\n"
	.string "BADGE!$"

SnowpointCity_Gym_Text_CandicePostBattle:
	.string "CANDICE: With that badge, your\n"
	.string "journey reaches new heights.\p"
	.string "Continue striving toward greatness!$"

SnowpointCity_Gym_Text_CandiceRematchIntro:
	.string "CANDICE: Welcome back, Trainer!\n"
	.string "My team has grown substantially\p"
	.string "since our last match.\n"
	.string "Are you ready for a rematch battle?$"

SnowpointCity_Gym_Text_CandicePostRematch:
	.string "CANDICE: What a spectacular\n"
	.string "contest!\p"
	.string "Your mastery is truly beyond\n"
	.string "compare!$"

SnowpointCity_Gym_Text_CandiceExplainBadge:
	.string "CANDICE: The ICICLE BADGE proves\n"
	.string "your strength.\p"
	.string "Pokémon across the land will\n"
	.string "acknowledge your bond!$"

SnowpointCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about ICE-type\p"
	.string "Pokémon.\n"
	.string "Plan your types carefully and\p"
	.string "strike with purpose!$"

SnowpointCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible\n"
	.string "gym victory!$"

SnowpointCity_Gym_Text_GymStatue:
	.string "SNOWPOINT CITY POKéMON GYM\n"
	.string "LEADER: CANDICE\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

SnowpointCity_Gym_Text_GymStatuePlayerWon:
	.string "SNOWPOINT CITY POKéMON GYM\n"
	.string "LEADER: CANDICE\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

SnowpointCity_Gym_Text_GymTrainer1Intro:
	.string "Hold it! Before you challenge\n"
	.string "CANDICE, you must pass my ICE-type\p"
	.string "trial!$"

SnowpointCity_Gym_Text_GymTrainer1Defeat:
	.string "What poise! My Icicle formation\n"
	.string "couldn't hold you back!$"

SnowpointCity_Gym_Text_GymTrainer1PostBattle:
	.string "CANDICE has honed ICE-type mastery\n"
	.string "far beyond mine. Stay sharp!$"

SnowpointCity_Gym_Text_GymTrainer2Intro:
	.string "You're one step from CANDICE!\n"
	.string "Let's see how you handle true ICE\p"
	.string "power!$"

SnowpointCity_Gym_Text_GymTrainer2Defeat:
	.string "Your Blizzard counter-strategy\n"
	.string "broke right through my defense!$"

SnowpointCity_Gym_Text_GymTrainer2PostBattle:
	.string "Go on ahead! CANDICE is waiting at\n"
	.string "the back of the Gym!$"

