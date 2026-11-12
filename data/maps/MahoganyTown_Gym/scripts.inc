MahoganyTown_Gym_MapScripts::
	.byte 0

MahoganyTown_Gym_EventScript_Pryce::
	goto_if_set FLAG_JOHTO_BADGE07_GET, MahoganyTown_Gym_EventScript_PryceRematch
	trainerbattle_single TRAINER_LEADER_PRYCE, MahoganyTown_Gym_Text_PryceIntro, MahoganyTown_Gym_Text_PryceDefeat, MahoganyTown_Gym_EventScript_DefeatedPryce, NO_MUSIC
	msgbox MahoganyTown_Gym_Text_PrycePostBattle, MSGBOX_DEFAULT
	release
	end

MahoganyTown_Gym_EventScript_PryceRematch::
	msgbox MahoganyTown_Gym_Text_PryceRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MahoganyTown_Gym_EventScript_PryceNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_PRYCE_REMATCH, MahoganyTown_Gym_Text_PryceDefeat
	msgbox MahoganyTown_Gym_Text_PrycePostRematch, MSGBOX_DEFAULT
	release
	end

MahoganyTown_Gym_EventScript_PryceNoRematch::
	msgbox MahoganyTown_Gym_Text_PrycePostBattle, MSGBOX_DEFAULT
	release
	end

MahoganyTown_Gym_EventScript_DefeatedPryce::
	setflag FLAG_JOHTO_BADGE07_GET
	special UpdateTotalBadges
	msgbox MahoganyTown_Gym_Text_PryceExplainBadge, MSGBOX_DEFAULT
	release
	end

MahoganyTown_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_JOHTO_BADGE07_GET, MahoganyTown_Gym_EventScript_GymGuyPostVictory
	msgbox MahoganyTown_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

MahoganyTown_Gym_EventScript_GymGuyPostVictory::
	msgbox MahoganyTown_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

MahoganyTown_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_JOHTO_BADGE07_GET, MahoganyTown_Gym_EventScript_GymStatuePostVictory
	msgbox MahoganyTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

MahoganyTown_Gym_EventScript_GymStatuePostVictory::
	msgbox MahoganyTown_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end

MahoganyTown_Gym_EventScript_GymTrainer1::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MahoganyTown_Gym_Text_GymTrainer1Intro, MahoganyTown_Gym_Text_GymTrainer1Defeat
	msgbox MahoganyTown_Gym_Text_GymTrainer1PostBattle, MSGBOX_AUTOCLOSE
	end

MahoganyTown_Gym_EventScript_GymTrainer2::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, MahoganyTown_Gym_Text_GymTrainer2Intro, MahoganyTown_Gym_Text_GymTrainer2Defeat
	msgbox MahoganyTown_Gym_Text_GymTrainer2PostBattle, MSGBOX_AUTOCLOSE
	end
MahoganyTown_Gym_Text_PryceIntro:
	.string "PRYCE: Welcome to the MAHOGANY\n"
	.string "TOWN GYM!\p"
	.string "I specialize in ICE-type Pokémon.\n"
	.string "Show me what you and your team are\p"
	.string "made of!$"

MahoganyTown_Gym_Text_PryceDefeat:
	.string "Incredible! You have bested my ICE\n"
	.string "techniques!\p"
	.string "Take the official LEAGUE GLACIER\n"
	.string "BADGE!$"

MahoganyTown_Gym_Text_PrycePostBattle:
	.string "PRYCE: With that badge, your\n"
	.string "journey reaches new heights.\p"
	.string "Continue striving toward greatness!$"

MahoganyTown_Gym_Text_PryceRematchIntro:
	.string "PRYCE: Welcome back, Trainer!\n"
	.string "My team has grown substantially\p"
	.string "since our last match.\n"
	.string "Are you ready for a rematch battle?$"

MahoganyTown_Gym_Text_PrycePostRematch:
	.string "PRYCE: What a spectacular contest!\n"
	.string "Your mastery is truly beyond\p"
	.string "compare!$"

MahoganyTown_Gym_Text_PryceExplainBadge:
	.string "PRYCE: The GLACIER BADGE proves\n"
	.string "your strength.\p"
	.string "Pokémon across the land will\n"
	.string "acknowledge your bond!$"

MahoganyTown_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about ICE-type\p"
	.string "Pokémon.\n"
	.string "Plan your types carefully and\p"
	.string "strike with purpose!$"

MahoganyTown_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible\n"
	.string "gym victory!$"

MahoganyTown_Gym_Text_GymStatue:
	.string "MAHOGANY TOWN POKéMON GYM\n"
	.string "LEADER: PRYCE\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

MahoganyTown_Gym_Text_GymStatuePlayerWon:
	.string "MAHOGANY TOWN POKéMON GYM\n"
	.string "LEADER: PRYCE\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

MahoganyTown_Gym_Text_GymTrainer1Intro:
	.string "Hold it! Before you challenge\n"
	.string "PRYCE, you must pass my ICE-type\p"
	.string "trial!$"

MahoganyTown_Gym_Text_GymTrainer1Defeat:
	.string "What poise! My Glacier formation\n"
	.string "couldn't hold you back!$"

MahoganyTown_Gym_Text_GymTrainer1PostBattle:
	.string "PRYCE has honed ICE-type mastery\n"
	.string "far beyond mine. Stay sharp!$"

MahoganyTown_Gym_Text_GymTrainer2Intro:
	.string "You're one step from PRYCE! Let's\n"
	.string "see how you handle true ICE power!$"

MahoganyTown_Gym_Text_GymTrainer2Defeat:
	.string "Your Frost counter-strategy broke\n"
	.string "right through my defense!$"

MahoganyTown_Gym_Text_GymTrainer2PostBattle:
	.string "Go on ahead! PRYCE is waiting at\n"
	.string "the back of the Gym!$"

