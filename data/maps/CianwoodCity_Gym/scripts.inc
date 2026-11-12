CianwoodCity_Gym_MapScripts::
	.byte 0

CianwoodCity_Gym_EventScript_Chuck::
	goto_if_set FLAG_JOHTO_BADGE05_GET, CianwoodCity_Gym_EventScript_ChuckRematch
	trainerbattle_single TRAINER_LEADER_CHUCK, CianwoodCity_Gym_Text_ChuckIntro, CianwoodCity_Gym_Text_ChuckDefeat, CianwoodCity_Gym_EventScript_DefeatedChuck, NO_MUSIC
	msgbox CianwoodCity_Gym_Text_ChuckPostBattle, MSGBOX_DEFAULT
	release
	end

CianwoodCity_Gym_EventScript_ChuckRematch::
	msgbox CianwoodCity_Gym_Text_ChuckRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CianwoodCity_Gym_EventScript_ChuckNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_CHUCK_REMATCH, CianwoodCity_Gym_Text_ChuckDefeat
	msgbox CianwoodCity_Gym_Text_ChuckPostRematch, MSGBOX_DEFAULT
	release
	end

CianwoodCity_Gym_EventScript_ChuckNoRematch::
	msgbox CianwoodCity_Gym_Text_ChuckPostBattle, MSGBOX_DEFAULT
	release
	end

CianwoodCity_Gym_EventScript_DefeatedChuck::
	setflag FLAG_JOHTO_BADGE05_GET
	special UpdateTotalBadges
	msgbox CianwoodCity_Gym_Text_ChuckExplainBadge, MSGBOX_DEFAULT
	release
	end

CianwoodCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_JOHTO_BADGE05_GET, CianwoodCity_Gym_EventScript_GymGuyPostVictory
	msgbox CianwoodCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

CianwoodCity_Gym_EventScript_GymGuyPostVictory::
	msgbox CianwoodCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

CianwoodCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_JOHTO_BADGE05_GET, CianwoodCity_Gym_EventScript_GymStatuePostVictory
	msgbox CianwoodCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

CianwoodCity_Gym_EventScript_GymStatuePostVictory::
	msgbox CianwoodCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end
CianwoodCity_Gym_Text_ChuckIntro:
	.string "CHUCK: Welcome to the CIANWOOD\n"
	.string "CITY GYM!\p"
	.string "I specialize in FIGHTING-type\n"
	.string "Pokémon.\p"
	.string "Show me what you and your team are\n"
	.string "made of!$"

CianwoodCity_Gym_Text_ChuckDefeat:
	.string "Incredible! You have bested my\n"
	.string "FIGHTING techniques!\p"
	.string "Take the official LEAGUE STORM\n"
	.string "BADGE!$"

CianwoodCity_Gym_Text_ChuckPostBattle:
	.string "CHUCK: With that badge, your\n"
	.string "journey reaches new heights.\p"
	.string "Continue striving toward greatness!$"

CianwoodCity_Gym_Text_ChuckRematchIntro:
	.string "CHUCK: Welcome back, Trainer!\n"
	.string "My team has grown substantially\p"
	.string "since our last match.\n"
	.string "Are you ready for a rematch battle?$"

CianwoodCity_Gym_Text_ChuckPostRematch:
	.string "CHUCK: What a spectacular contest!\n"
	.string "Your mastery is truly beyond\p"
	.string "compare!$"

CianwoodCity_Gym_Text_ChuckExplainBadge:
	.string "CHUCK: The STORM BADGE proves your\n"
	.string "strength.\p"
	.string "Pokémon across the land will\n"
	.string "acknowledge your bond!$"

CianwoodCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about FIGHTING-\p"
	.string "type Pokémon.\n"
	.string "Plan your types carefully and\p"
	.string "strike with purpose!$"

CianwoodCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible\n"
	.string "gym victory!$"

CianwoodCity_Gym_Text_GymStatue:
	.string "CIANWOOD CITY POKéMON GYM\n"
	.string "LEADER: CHUCK\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

CianwoodCity_Gym_Text_GymStatuePlayerWon:
	.string "CIANWOOD CITY POKéMON GYM\n"
	.string "LEADER: CHUCK\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

