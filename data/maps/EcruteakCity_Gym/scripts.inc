EcruteakCity_Gym_MapScripts::
	.byte 0

EcruteakCity_Gym_EventScript_Morty::
	goto_if_set FLAG_JOHTO_BADGE04_GET, EcruteakCity_Gym_EventScript_MortyRematch
	trainerbattle_single TRAINER_LEADER_MORTY, EcruteakCity_Gym_Text_MortyIntro, EcruteakCity_Gym_Text_MortyDefeat, EcruteakCity_Gym_EventScript_DefeatedMorty, NO_MUSIC
	msgbox EcruteakCity_Gym_Text_MortyPostBattle, MSGBOX_DEFAULT
	release
	end

EcruteakCity_Gym_EventScript_MortyRematch::
	msgbox EcruteakCity_Gym_Text_MortyRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EcruteakCity_Gym_EventScript_MortyNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_MORTY_REMATCH, EcruteakCity_Gym_Text_MortyDefeat
	msgbox EcruteakCity_Gym_Text_MortyPostRematch, MSGBOX_DEFAULT
	release
	end

EcruteakCity_Gym_EventScript_MortyNoRematch::
	msgbox EcruteakCity_Gym_Text_MortyPostBattle, MSGBOX_DEFAULT
	release
	end

EcruteakCity_Gym_EventScript_DefeatedMorty::
	setflag FLAG_JOHTO_BADGE04_GET
	special UpdateTotalBadges
	msgbox EcruteakCity_Gym_Text_MortyExplainBadge, MSGBOX_DEFAULT
	release
	end

EcruteakCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_JOHTO_BADGE04_GET, EcruteakCity_Gym_EventScript_GymGuyPostVictory
	msgbox EcruteakCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

EcruteakCity_Gym_EventScript_GymGuyPostVictory::
	msgbox EcruteakCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

EcruteakCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_JOHTO_BADGE04_GET, EcruteakCity_Gym_EventScript_GymStatuePostVictory
	msgbox EcruteakCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

EcruteakCity_Gym_EventScript_GymStatuePostVictory::
	msgbox EcruteakCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end

EcruteakCity_Gym_EventScript_GymTrainer1::
	trainerbattle_single TRAINER_GRUNT_RUSTURF_TUNNEL, EcruteakCity_Gym_Text_GymTrainer1Intro, EcruteakCity_Gym_Text_GymTrainer1Defeat
	msgbox EcruteakCity_Gym_Text_GymTrainer1PostBattle, MSGBOX_AUTOCLOSE
	end

EcruteakCity_Gym_EventScript_GymTrainer2::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, EcruteakCity_Gym_Text_GymTrainer2Intro, EcruteakCity_Gym_Text_GymTrainer2Defeat
	msgbox EcruteakCity_Gym_Text_GymTrainer2PostBattle, MSGBOX_AUTOCLOSE
	end
EcruteakCity_Gym_Text_MortyIntro:
	.string "MORTY: Welcome to the ECRUTEAK\n"
	.string "CITY GYM!\p"
	.string "I specialize in GHOST-type Pokémon.\n"
	.string "Show me what you and your team are\p"
	.string "made of!$"

EcruteakCity_Gym_Text_MortyDefeat:
	.string "Incredible! You have bested my\n"
	.string "GHOST techniques!\p"
	.string "Take the official LEAGUE FOG BADGE!$"

EcruteakCity_Gym_Text_MortyPostBattle:
	.string "MORTY: With that badge, your\n"
	.string "journey reaches new heights.\p"
	.string "Continue striving toward greatness!$"

EcruteakCity_Gym_Text_MortyRematchIntro:
	.string "MORTY: Welcome back, Trainer!\n"
	.string "My team has grown substantially\p"
	.string "since our last match.\n"
	.string "Are you ready for a rematch battle?$"

EcruteakCity_Gym_Text_MortyPostRematch:
	.string "MORTY: What a spectacular contest!\n"
	.string "Your mastery is truly beyond\p"
	.string "compare!$"

EcruteakCity_Gym_Text_MortyExplainBadge:
	.string "MORTY: The FOG BADGE proves your\n"
	.string "strength.\p"
	.string "Pokémon across the land will\n"
	.string "acknowledge your bond!$"

EcruteakCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about GHOST-type\p"
	.string "Pokémon.\n"
	.string "Plan your types carefully and\p"
	.string "strike with purpose!$"

EcruteakCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible\n"
	.string "gym victory!$"

EcruteakCity_Gym_Text_GymStatue:
	.string "ECRUTEAK CITY POKéMON GYM\n"
	.string "LEADER: MORTY\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

EcruteakCity_Gym_Text_GymStatuePlayerWon:
	.string "ECRUTEAK CITY POKéMON GYM\n"
	.string "LEADER: MORTY\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

EcruteakCity_Gym_Text_GymTrainer1Intro:
	.string "Hold it! Before you challenge\n"
	.string "MORTY, you must pass my GHOST-type\p"
	.string "trial!$"

EcruteakCity_Gym_Text_GymTrainer1Defeat:
	.string "What poise! My Fog formation\n"
	.string "couldn't hold you back!$"

EcruteakCity_Gym_Text_GymTrainer1PostBattle:
	.string "MORTY has honed GHOST-type mastery\n"
	.string "far beyond mine. Stay sharp!$"

EcruteakCity_Gym_Text_GymTrainer2Intro:
	.string "You're one step from MORTY! Let's\n"
	.string "see how you handle true GHOST\p"
	.string "power!$"

EcruteakCity_Gym_Text_GymTrainer2Defeat:
	.string "Your Phantom counter-strategy\n"
	.string "broke right through my defense!$"

EcruteakCity_Gym_Text_GymTrainer2PostBattle:
	.string "Go on ahead! MORTY is waiting at\n"
	.string "the back of the Gym!$"

