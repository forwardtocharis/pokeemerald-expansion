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

HearthomeCity_Gym_EventScript_GymTrainer1::
	trainerbattle_single TRAINER_DECLAN, HearthomeCity_Gym_Text_GymTrainer1Intro, HearthomeCity_Gym_Text_GymTrainer1Defeat
	msgbox HearthomeCity_Gym_Text_GymTrainer1PostBattle, MSGBOX_AUTOCLOSE
	end

HearthomeCity_Gym_EventScript_GymTrainer2::
	trainerbattle_single TRAINER_GRUNT_RUSTURF_TUNNEL, HearthomeCity_Gym_Text_GymTrainer2Intro, HearthomeCity_Gym_Text_GymTrainer2Defeat
	msgbox HearthomeCity_Gym_Text_GymTrainer2PostBattle, MSGBOX_AUTOCLOSE
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

HearthomeCity_Gym_Text_GymTrainer1Intro:
	.string "Hold it! Before you challenge\n"
	.string "FANTINA, you must pass my GHOST-\p"
	.string "type trial!$"

HearthomeCity_Gym_Text_GymTrainer1Defeat:
	.string "What poise! My Relic formation\n"
	.string "couldn't hold you back!$"

HearthomeCity_Gym_Text_GymTrainer1PostBattle:
	.string "FANTINA has honed GHOST-type\n"
	.string "mastery far beyond mine. Stay\p"
	.string "sharp!$"

HearthomeCity_Gym_Text_GymTrainer2Intro:
	.string "You're one step from FANTINA!\n"
	.string "Let's see how you handle true\p"
	.string "GHOST power!$"

HearthomeCity_Gym_Text_GymTrainer2Defeat:
	.string "Your Dusk counter-strategy broke\n"
	.string "right through my defense!$"

HearthomeCity_Gym_Text_GymTrainer2PostBattle:
	.string "Go on ahead! FANTINA is waiting at\n"
	.string "the back of the Gym!$"

