AzaleaTown_Gym_MapScripts::
	.byte 0

AzaleaTown_Gym_EventScript_Bugsy::
	goto_if_set FLAG_JOHTO_BADGE02_GET, AzaleaTown_Gym_EventScript_BugsyRematch
	trainerbattle_single TRAINER_LEADER_BUGSY, AzaleaTown_Gym_Text_BugsyIntro, AzaleaTown_Gym_Text_BugsyDefeat, AzaleaTown_Gym_EventScript_DefeatedBugsy, NO_MUSIC
	msgbox AzaleaTown_Gym_Text_BugsyPostBattle, MSGBOX_DEFAULT
	release
	end

AzaleaTown_Gym_EventScript_BugsyRematch::
	msgbox AzaleaTown_Gym_Text_BugsyRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, AzaleaTown_Gym_EventScript_BugsyNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_BUGSY_REMATCH, AzaleaTown_Gym_Text_BugsyDefeat
	msgbox AzaleaTown_Gym_Text_BugsyPostRematch, MSGBOX_DEFAULT
	release
	end

AzaleaTown_Gym_EventScript_BugsyNoRematch::
	msgbox AzaleaTown_Gym_Text_BugsyPostBattle, MSGBOX_DEFAULT
	release
	end

AzaleaTown_Gym_EventScript_DefeatedBugsy::
	setflag FLAG_JOHTO_BADGE02_GET
	special UpdateTotalBadges
	msgbox AzaleaTown_Gym_Text_BugsyExplainBadge, MSGBOX_DEFAULT
	release
	end

AzaleaTown_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_JOHTO_BADGE02_GET, AzaleaTown_Gym_EventScript_GymGuyPostVictory
	msgbox AzaleaTown_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

AzaleaTown_Gym_EventScript_GymGuyPostVictory::
	msgbox AzaleaTown_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

AzaleaTown_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_JOHTO_BADGE02_GET, AzaleaTown_Gym_EventScript_GymStatuePostVictory
	msgbox AzaleaTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

AzaleaTown_Gym_EventScript_GymStatuePostVictory::
	msgbox AzaleaTown_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end

AzaleaTown_Gym_EventScript_GymTrainer1::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, AzaleaTown_Gym_Text_GymTrainer1Intro, AzaleaTown_Gym_Text_GymTrainer1Defeat
	msgbox AzaleaTown_Gym_Text_GymTrainer1PostBattle, MSGBOX_AUTOCLOSE
	end

AzaleaTown_Gym_EventScript_GymTrainer2::
	trainerbattle_single TRAINER_GRUNT_PETALBURG_WOODS, AzaleaTown_Gym_Text_GymTrainer2Intro, AzaleaTown_Gym_Text_GymTrainer2Defeat
	msgbox AzaleaTown_Gym_Text_GymTrainer2PostBattle, MSGBOX_AUTOCLOSE
	end
AzaleaTown_Gym_Text_BugsyIntro:
	.string "BUGSY: Welcome to the AZALEA TOWN\n"
	.string "GYM!\p"
	.string "I specialize in BUG-type Pokémon.\n"
	.string "Show me what you and your team are\p"
	.string "made of!$"

AzaleaTown_Gym_Text_BugsyDefeat:
	.string "Incredible! You have bested my BUG\n"
	.string "techniques!\p"
	.string "Take the official LEAGUE HIVE\n"
	.string "BADGE!$"

AzaleaTown_Gym_Text_BugsyPostBattle:
	.string "BUGSY: With that badge, your\n"
	.string "journey reaches new heights.\p"
	.string "Continue striving toward greatness!$"

AzaleaTown_Gym_Text_BugsyRematchIntro:
	.string "BUGSY: Welcome back, Trainer!\n"
	.string "My team has grown substantially\p"
	.string "since our last match.\n"
	.string "Are you ready for a rematch battle?$"

AzaleaTown_Gym_Text_BugsyPostRematch:
	.string "BUGSY: What a spectacular contest!\n"
	.string "Your mastery is truly beyond\p"
	.string "compare!$"

AzaleaTown_Gym_Text_BugsyExplainBadge:
	.string "BUGSY: The HIVE BADGE proves your\n"
	.string "strength.\p"
	.string "Pokémon across the land will\n"
	.string "acknowledge your bond!$"

AzaleaTown_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about BUG-type\p"
	.string "Pokémon.\n"
	.string "Plan your types carefully and\p"
	.string "strike with purpose!$"

AzaleaTown_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible\n"
	.string "gym victory!$"

AzaleaTown_Gym_Text_GymStatue:
	.string "AZALEA TOWN POKéMON GYM\n"
	.string "LEADER: BUGSY\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

AzaleaTown_Gym_Text_GymStatuePlayerWon:
	.string "AZALEA TOWN POKéMON GYM\n"
	.string "LEADER: BUGSY\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

AzaleaTown_Gym_Text_GymTrainer1Intro:
	.string "Hold it! Before you challenge\n"
	.string "BUGSY, you must pass my BUG-type\p"
	.string "trial!$"

AzaleaTown_Gym_Text_GymTrainer1Defeat:
	.string "What poise! My Hive formation\n"
	.string "couldn't hold you back!$"

AzaleaTown_Gym_Text_GymTrainer1PostBattle:
	.string "BUGSY has honed BUG-type mastery\n"
	.string "far beyond mine. Stay sharp!$"

AzaleaTown_Gym_Text_GymTrainer2Intro:
	.string "You're one step from BUGSY! Let's\n"
	.string "see how you handle true BUG power!$"

AzaleaTown_Gym_Text_GymTrainer2Defeat:
	.string "Your Cocoon counter-strategy broke\n"
	.string "right through my defense!$"

AzaleaTown_Gym_Text_GymTrainer2PostBattle:
	.string "Go on ahead! BUGSY is waiting at\n"
	.string "the back of the Gym!$"

