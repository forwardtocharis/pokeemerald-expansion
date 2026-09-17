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
AzaleaTown_Gym_Text_BugsyIntro:
	.string "BUGSY: Welcome to the AZALEA TOWN GYM!"
	.string "I specialize in BUG-type Pokémon."
	.string "Show me what you and your team are made of!"

AzaleaTown_Gym_Text_BugsyDefeat:
	.string "Incredible! You have bested my BUG techniques!"
	.string "Take the official LEAGUE HIVE BADGE!"

AzaleaTown_Gym_Text_BugsyPostBattle:
	.string "BUGSY: With that badge, your journey reaches new heights."
	.string "Continue striving toward greatness!"

AzaleaTown_Gym_Text_BugsyRematchIntro:
	.string "BUGSY: Welcome back, Trainer!"
	.string "My team has grown substantially since our last match."
	.string "Are you ready for a rematch battle?"

AzaleaTown_Gym_Text_BugsyPostRematch:
	.string "BUGSY: What a spectacular contest!"
	.string "Your mastery is truly beyond compare!"

AzaleaTown_Gym_Text_BugsyExplainBadge:
	.string "BUGSY: The HIVE BADGE proves your strength."
	.string "Pokémon across the land will acknowledge your bond!"

AzaleaTown_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!"
	.string "This GYM is all about BUG-type Pokémon."
	.string "Plan your types carefully and strike with purpose!"

AzaleaTown_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible gym victory!"

AzaleaTown_Gym_Text_GymStatue:
	.string "AZALEA TOWN POKéMON GYM"
	.string "LEADER: BUGSY"
	.string "WINNING TRAINERS:"
	.string "????"

AzaleaTown_Gym_Text_GymStatuePlayerWon:
	.string "AZALEA TOWN POKéMON GYM"
	.string "LEADER: BUGSY"
	.string "WINNING TRAINERS:"
	.string "{PLAYER}"

