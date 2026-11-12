OreburghCity_Gym_MapScripts::
	.byte 0

OreburghCity_Gym_EventScript_Roark::
	goto_if_set FLAG_SINNOH_BADGE01_GET, OreburghCity_Gym_EventScript_RoarkRematch
	trainerbattle_single TRAINER_LEADER_ROARK, OreburghCity_Gym_Text_RoarkIntro, OreburghCity_Gym_Text_RoarkDefeat, OreburghCity_Gym_EventScript_DefeatedRoark, NO_MUSIC
	msgbox OreburghCity_Gym_Text_RoarkPostBattle, MSGBOX_DEFAULT
	release
	end

OreburghCity_Gym_EventScript_RoarkRematch::
	msgbox OreburghCity_Gym_Text_RoarkRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OreburghCity_Gym_EventScript_RoarkNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_ROARK_REMATCH, OreburghCity_Gym_Text_RoarkDefeat
	msgbox OreburghCity_Gym_Text_RoarkPostRematch, MSGBOX_DEFAULT
	release
	end

OreburghCity_Gym_EventScript_RoarkNoRematch::
	msgbox OreburghCity_Gym_Text_RoarkPostBattle, MSGBOX_DEFAULT
	release
	end

OreburghCity_Gym_EventScript_DefeatedRoark::
	setflag FLAG_SINNOH_BADGE01_GET
	special UpdateTotalBadges
	msgbox OreburghCity_Gym_Text_RoarkExplainBadge, MSGBOX_DEFAULT
	release
	end

OreburghCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_SINNOH_BADGE01_GET, OreburghCity_Gym_EventScript_GymGuyPostVictory
	msgbox OreburghCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

OreburghCity_Gym_EventScript_GymGuyPostVictory::
	msgbox OreburghCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

OreburghCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_SINNOH_BADGE01_GET, OreburghCity_Gym_EventScript_GymStatuePostVictory
	msgbox OreburghCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

OreburghCity_Gym_EventScript_GymStatuePostVictory::
	msgbox OreburghCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end

OreburghCity_Gym_EventScript_GymTrainer1::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, OreburghCity_Gym_Text_GymTrainer1Intro, OreburghCity_Gym_Text_GymTrainer1Defeat
	msgbox OreburghCity_Gym_Text_GymTrainer1PostBattle, MSGBOX_AUTOCLOSE
	end

OreburghCity_Gym_EventScript_GymTrainer2::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, OreburghCity_Gym_Text_GymTrainer2Intro, OreburghCity_Gym_Text_GymTrainer2Defeat
	msgbox OreburghCity_Gym_Text_GymTrainer2PostBattle, MSGBOX_AUTOCLOSE
	end
OreburghCity_Gym_Text_RoarkIntro:
	.string "ROARK: Welcome to the OREBURGH\n"
	.string "CITY GYM!\p"
	.string "I specialize in ROCK-type Pokémon.\n"
	.string "Show me what you and your team are\p"
	.string "made of!$"

OreburghCity_Gym_Text_RoarkDefeat:
	.string "Incredible! You have bested my\n"
	.string "ROCK techniques!\p"
	.string "Take the official LEAGUE COAL\n"
	.string "BADGE!$"

OreburghCity_Gym_Text_RoarkPostBattle:
	.string "ROARK: With that badge, your\n"
	.string "journey reaches new heights.\p"
	.string "Continue striving toward greatness!$"

OreburghCity_Gym_Text_RoarkRematchIntro:
	.string "ROARK: Welcome back, Trainer!\n"
	.string "My team has grown substantially\p"
	.string "since our last match.\n"
	.string "Are you ready for a rematch battle?$"

OreburghCity_Gym_Text_RoarkPostRematch:
	.string "ROARK: What a spectacular contest!\n"
	.string "Your mastery is truly beyond\p"
	.string "compare!$"

OreburghCity_Gym_Text_RoarkExplainBadge:
	.string "ROARK: The COAL BADGE proves your\n"
	.string "strength.\p"
	.string "Pokémon across the land will\n"
	.string "acknowledge your bond!$"

OreburghCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about ROCK-type\p"
	.string "Pokémon.\n"
	.string "Plan your types carefully and\p"
	.string "strike with purpose!$"

OreburghCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible\n"
	.string "gym victory!$"

OreburghCity_Gym_Text_GymStatue:
	.string "OREBURGH CITY POKéMON GYM\n"
	.string "LEADER: ROARK\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

OreburghCity_Gym_Text_GymStatuePlayerWon:
	.string "OREBURGH CITY POKéMON GYM\n"
	.string "LEADER: ROARK\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

OreburghCity_Gym_Text_GymTrainer1Intro:
	.string "Hold it! Before you challenge\n"
	.string "ROARK, you must pass my ROCK-type\p"
	.string "trial!$"

OreburghCity_Gym_Text_GymTrainer1Defeat:
	.string "What poise! My Coal formation\n"
	.string "couldn't hold you back!$"

OreburghCity_Gym_Text_GymTrainer1PostBattle:
	.string "ROARK has honed ROCK-type mastery\n"
	.string "far beyond mine. Stay sharp!$"

OreburghCity_Gym_Text_GymTrainer2Intro:
	.string "You're one step from ROARK! Let's\n"
	.string "see how you handle true ROCK\p"
	.string "power!$"

OreburghCity_Gym_Text_GymTrainer2Defeat:
	.string "Your Quarry counter-strategy broke\n"
	.string "right through my defense!$"

OreburghCity_Gym_Text_GymTrainer2PostBattle:
	.string "Go on ahead! ROARK is waiting at\n"
	.string "the back of the Gym!$"

