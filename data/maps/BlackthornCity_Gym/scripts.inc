BlackthornCity_Gym_MapScripts::
	.byte 0

BlackthornCity_Gym_EventScript_Clair::
	goto_if_set FLAG_JOHTO_BADGE08_GET, BlackthornCity_Gym_EventScript_ClairRematch
	trainerbattle_single TRAINER_LEADER_CLAIR, BlackthornCity_Gym_Text_ClairIntro, BlackthornCity_Gym_Text_ClairDefeat, BlackthornCity_Gym_EventScript_DefeatedClair, NO_MUSIC
	msgbox BlackthornCity_Gym_Text_ClairPostBattle, MSGBOX_DEFAULT
	release
	end

BlackthornCity_Gym_EventScript_ClairRematch::
	msgbox BlackthornCity_Gym_Text_ClairRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BlackthornCity_Gym_EventScript_ClairNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_CLAIR_REMATCH, BlackthornCity_Gym_Text_ClairDefeat
	msgbox BlackthornCity_Gym_Text_ClairPostRematch, MSGBOX_DEFAULT
	release
	end

BlackthornCity_Gym_EventScript_ClairNoRematch::
	msgbox BlackthornCity_Gym_Text_ClairPostBattle, MSGBOX_DEFAULT
	release
	end

BlackthornCity_Gym_EventScript_DefeatedClair::
	setflag FLAG_JOHTO_BADGE08_GET
	special UpdateTotalBadges
	msgbox BlackthornCity_Gym_Text_ClairExplainBadge, MSGBOX_DEFAULT
	release
	end

BlackthornCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_JOHTO_BADGE08_GET, BlackthornCity_Gym_EventScript_GymGuyPostVictory
	msgbox BlackthornCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

BlackthornCity_Gym_EventScript_GymGuyPostVictory::
	msgbox BlackthornCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

BlackthornCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_JOHTO_BADGE08_GET, BlackthornCity_Gym_EventScript_GymStatuePostVictory
	msgbox BlackthornCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

BlackthornCity_Gym_EventScript_GymStatuePostVictory::
	msgbox BlackthornCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end

BlackthornCity_Gym_EventScript_GymTrainer1::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_5, BlackthornCity_Gym_Text_GymTrainer1Intro, BlackthornCity_Gym_Text_GymTrainer1Defeat
	msgbox BlackthornCity_Gym_Text_GymTrainer1PostBattle, MSGBOX_AUTOCLOSE
	end

BlackthornCity_Gym_EventScript_GymTrainer2::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, BlackthornCity_Gym_Text_GymTrainer2Intro, BlackthornCity_Gym_Text_GymTrainer2Defeat
	msgbox BlackthornCity_Gym_Text_GymTrainer2PostBattle, MSGBOX_AUTOCLOSE
	end
BlackthornCity_Gym_Text_ClairIntro:
	.string "CLAIR: Welcome to the BLACKTHORN\n"
	.string "CITY GYM!\p"
	.string "I specialize in DRAGON-type\n"
	.string "Pokémon.\p"
	.string "Show me what you and your team are\n"
	.string "made of!$"

BlackthornCity_Gym_Text_ClairDefeat:
	.string "Incredible! You have bested my\n"
	.string "DRAGON techniques!\p"
	.string "Take the official LEAGUE RISING\n"
	.string "BADGE!$"

BlackthornCity_Gym_Text_ClairPostBattle:
	.string "CLAIR: With that badge, your\n"
	.string "journey reaches new heights.\p"
	.string "Continue striving toward greatness!$"

BlackthornCity_Gym_Text_ClairRematchIntro:
	.string "CLAIR: Welcome back, Trainer!\n"
	.string "My team has grown substantially\p"
	.string "since our last match.\n"
	.string "Are you ready for a rematch battle?$"

BlackthornCity_Gym_Text_ClairPostRematch:
	.string "CLAIR: What a spectacular contest!\n"
	.string "Your mastery is truly beyond\p"
	.string "compare!$"

BlackthornCity_Gym_Text_ClairExplainBadge:
	.string "CLAIR: The RISING BADGE proves\n"
	.string "your strength.\p"
	.string "Pokémon across the land will\n"
	.string "acknowledge your bond!$"

BlackthornCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about DRAGON-type\p"
	.string "Pokémon.\n"
	.string "Plan your types carefully and\p"
	.string "strike with purpose!$"

BlackthornCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible\n"
	.string "gym victory!$"

BlackthornCity_Gym_Text_GymStatue:
	.string "BLACKTHORN CITY POKéMON GYM\n"
	.string "LEADER: CLAIR\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

BlackthornCity_Gym_Text_GymStatuePlayerWon:
	.string "BLACKTHORN CITY POKéMON GYM\n"
	.string "LEADER: CLAIR\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

BlackthornCity_Gym_Text_GymTrainer1Intro:
	.string "Hold it! Before you challenge\n"
	.string "CLAIR, you must pass my DRAGON-\p"
	.string "type trial!$"

BlackthornCity_Gym_Text_GymTrainer1Defeat:
	.string "What poise! My Rising formation\n"
	.string "couldn't hold you back!$"

BlackthornCity_Gym_Text_GymTrainer1PostBattle:
	.string "CLAIR has honed DRAGON-type\n"
	.string "mastery far beyond mine. Stay\p"
	.string "sharp!$"

BlackthornCity_Gym_Text_GymTrainer2Intro:
	.string "You're one step from CLAIR! Let's\n"
	.string "see how you handle true DRAGON\p"
	.string "power!$"

BlackthornCity_Gym_Text_GymTrainer2Defeat:
	.string "Your Fang counter-strategy broke\n"
	.string "right through my defense!$"

BlackthornCity_Gym_Text_GymTrainer2PostBattle:
	.string "Go on ahead! CLAIR is waiting at\n"
	.string "the back of the Gym!$"

