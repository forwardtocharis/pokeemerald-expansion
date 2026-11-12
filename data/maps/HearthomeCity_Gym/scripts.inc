HearthomeCity_Gym_MapScripts::
	.byte 0

HearthomeCity_Gym_EventScript_Fantina::
	goto_if_set FLAG_SINNOH_BADGE05_GET, HearthomeCity_Gym_EventScript_FantinaRematch
	trainerbattle_single TRAINER_LEADER_FANTINA, HearthomeCity_Gym_Text_FantinaIntro, HearthomeCity_Gym_Text_FantinaDefeat, HearthomeCity_Gym_EventScript_DefeatedFantina, NO_MUSIC
	msgbox HearthomeCity_Gym_Text_FantinaPostBattle, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Gym_EventScript_FantinaRematch::
	msgbox HearthomeCity_Gym_Text_FantinaRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, HearthomeCity_Gym_EventScript_FantinaNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_FANTINA_REMATCH, HearthomeCity_Gym_Text_FantinaDefeat
	msgbox HearthomeCity_Gym_Text_FantinaPostRematch, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Gym_EventScript_FantinaNoRematch::
	msgbox HearthomeCity_Gym_Text_FantinaPostBattle, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Gym_EventScript_DefeatedFantina::
	setflag FLAG_SINNOH_BADGE05_GET
	special UpdateTotalBadges
	msgbox HearthomeCity_Gym_Text_FantinaExplainBadge, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_SINNOH_BADGE05_GET, HearthomeCity_Gym_EventScript_GymGuyPostVictory
	msgbox HearthomeCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Gym_EventScript_GymGuyPostVictory::
	msgbox HearthomeCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_SINNOH_BADGE05_GET, HearthomeCity_Gym_EventScript_GymStatuePostVictory
	msgbox HearthomeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

HearthomeCity_Gym_EventScript_GymStatuePostVictory::
	msgbox HearthomeCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end
HearthomeCity_Gym_Text_FantinaIntro:
	.string "FANTINA: Welcome to the HEARTHOME\n"
	.string "CITY GYM!\p"
	.string "I specialize in GHOST-type Pokémon.\n"
	.string "Show me what you and your team are\p"
	.string "made of!$"

HearthomeCity_Gym_Text_FantinaDefeat:
	.string "Incredible! You have bested my\n"
	.string "GHOST techniques!\p"
	.string "Take the official LEAGUE RELIC\n"
	.string "BADGE!$"

HearthomeCity_Gym_Text_FantinaPostBattle:
	.string "FANTINA: With that badge, your\n"
	.string "journey reaches new heights.\p"
	.string "Continue striving toward greatness!$"

HearthomeCity_Gym_Text_FantinaRematchIntro:
	.string "FANTINA: Welcome back, Trainer!\n"
	.string "My team has grown substantially\p"
	.string "since our last match.\n"
	.string "Are you ready for a rematch battle?$"

HearthomeCity_Gym_Text_FantinaPostRematch:
	.string "FANTINA: What a spectacular\n"
	.string "contest!\p"
	.string "Your mastery is truly beyond\n"
	.string "compare!$"

HearthomeCity_Gym_Text_FantinaExplainBadge:
	.string "FANTINA: The RELIC BADGE proves\n"
	.string "your strength.\p"
	.string "Pokémon across the land will\n"
	.string "acknowledge your bond!$"

HearthomeCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about GHOST-type\p"
	.string "Pokémon.\n"
	.string "Plan your types carefully and\p"
	.string "strike with purpose!$"

HearthomeCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible\n"
	.string "gym victory!$"

HearthomeCity_Gym_Text_GymStatue:
	.string "HEARTHOME CITY POKéMON GYM\n"
	.string "LEADER: FANTINA\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

HearthomeCity_Gym_Text_GymStatuePlayerWon:
	.string "HEARTHOME CITY POKéMON GYM\n"
	.string "LEADER: FANTINA\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

