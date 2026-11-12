CanalaveCity_Gym_MapScripts::
	.byte 0

CanalaveCity_Gym_EventScript_Byron::
	goto_if_set FLAG_SINNOH_BADGE06_GET, CanalaveCity_Gym_EventScript_ByronRematch
	trainerbattle_single TRAINER_LEADER_BYRON, CanalaveCity_Gym_Text_ByronIntro, CanalaveCity_Gym_Text_ByronDefeat, CanalaveCity_Gym_EventScript_DefeatedByron, NO_MUSIC
	msgbox CanalaveCity_Gym_Text_ByronPostBattle, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Gym_EventScript_ByronRematch::
	msgbox CanalaveCity_Gym_Text_ByronRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_Gym_EventScript_ByronNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_BYRON_REMATCH, CanalaveCity_Gym_Text_ByronDefeat
	msgbox CanalaveCity_Gym_Text_ByronPostRematch, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Gym_EventScript_ByronNoRematch::
	msgbox CanalaveCity_Gym_Text_ByronPostBattle, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Gym_EventScript_DefeatedByron::
	setflag FLAG_SINNOH_BADGE06_GET
	special UpdateTotalBadges
	msgbox CanalaveCity_Gym_Text_ByronExplainBadge, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_SINNOH_BADGE06_GET, CanalaveCity_Gym_EventScript_GymGuyPostVictory
	msgbox CanalaveCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Gym_EventScript_GymGuyPostVictory::
	msgbox CanalaveCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_SINNOH_BADGE06_GET, CanalaveCity_Gym_EventScript_GymStatuePostVictory
	msgbox CanalaveCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

CanalaveCity_Gym_EventScript_GymStatuePostVictory::
	msgbox CanalaveCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end

CanalaveCity_Gym_EventScript_GymTrainer1::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, CanalaveCity_Gym_Text_GymTrainer1Intro, CanalaveCity_Gym_Text_GymTrainer1Defeat
	msgbox CanalaveCity_Gym_Text_GymTrainer1PostBattle, MSGBOX_AUTOCLOSE
	end

CanalaveCity_Gym_EventScript_GymTrainer2::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, CanalaveCity_Gym_Text_GymTrainer2Intro, CanalaveCity_Gym_Text_GymTrainer2Defeat
	msgbox CanalaveCity_Gym_Text_GymTrainer2PostBattle, MSGBOX_AUTOCLOSE
	end
CanalaveCity_Gym_Text_ByronIntro:
	.string "BYRON: Welcome to the CANALAVE\n"
	.string "CITY GYM!\p"
	.string "I specialize in STEEL-type Pokémon.\n"
	.string "Show me what you and your team are\p"
	.string "made of!$"

CanalaveCity_Gym_Text_ByronDefeat:
	.string "Incredible! You have bested my\n"
	.string "STEEL techniques!\p"
	.string "Take the official LEAGUE MINE\n"
	.string "BADGE!$"

CanalaveCity_Gym_Text_ByronPostBattle:
	.string "BYRON: With that badge, your\n"
	.string "journey reaches new heights.\p"
	.string "Continue striving toward greatness!$"

CanalaveCity_Gym_Text_ByronRematchIntro:
	.string "BYRON: Welcome back, Trainer!\n"
	.string "My team has grown substantially\p"
	.string "since our last match.\n"
	.string "Are you ready for a rematch battle?$"

CanalaveCity_Gym_Text_ByronPostRematch:
	.string "BYRON: What a spectacular contest!\n"
	.string "Your mastery is truly beyond\p"
	.string "compare!$"

CanalaveCity_Gym_Text_ByronExplainBadge:
	.string "BYRON: The MINE BADGE proves your\n"
	.string "strength.\p"
	.string "Pokémon across the land will\n"
	.string "acknowledge your bond!$"

CanalaveCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about STEEL-type\p"
	.string "Pokémon.\n"
	.string "Plan your types carefully and\p"
	.string "strike with purpose!$"

CanalaveCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible\n"
	.string "gym victory!$"

CanalaveCity_Gym_Text_GymStatue:
	.string "CANALAVE CITY POKéMON GYM\n"
	.string "LEADER: BYRON\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

CanalaveCity_Gym_Text_GymStatuePlayerWon:
	.string "CANALAVE CITY POKéMON GYM\n"
	.string "LEADER: BYRON\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

CanalaveCity_Gym_Text_GymTrainer1Intro:
	.string "Hold it! Before you challenge\n"
	.string "BYRON, you must pass my STEEL-type\p"
	.string "trial!$"

CanalaveCity_Gym_Text_GymTrainer1Defeat:
	.string "What poise! My Mine formation\n"
	.string "couldn't hold you back!$"

CanalaveCity_Gym_Text_GymTrainer1PostBattle:
	.string "BYRON has honed STEEL-type mastery\n"
	.string "far beyond mine. Stay sharp!$"

CanalaveCity_Gym_Text_GymTrainer2Intro:
	.string "You're one step from BYRON! Let's\n"
	.string "see how you handle true STEEL\p"
	.string "power!$"

CanalaveCity_Gym_Text_GymTrainer2Defeat:
	.string "Your Bastion counter-strategy\n"
	.string "broke right through my defense!$"

CanalaveCity_Gym_Text_GymTrainer2PostBattle:
	.string "Go on ahead! BYRON is waiting at\n"
	.string "the back of the Gym!$"

