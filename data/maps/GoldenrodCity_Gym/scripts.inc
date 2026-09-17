GoldenrodCity_Gym_MapScripts::
	.byte 0

GoldenrodCity_Gym_EventScript_Whitney::
	goto_if_set FLAG_JOHTO_BADGE03_GET, GoldenrodCity_Gym_EventScript_WhitneyRematch
	trainerbattle_single TRAINER_LEADER_WHITNEY, GoldenrodCity_Gym_Text_WhitneyIntro, GoldenrodCity_Gym_Text_WhitneyDefeat, GoldenrodCity_Gym_EventScript_DefeatedWhitney, NO_MUSIC
	msgbox GoldenrodCity_Gym_Text_WhitneyPostBattle, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_Gym_EventScript_WhitneyRematch::
	msgbox GoldenrodCity_Gym_Text_WhitneyRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_Gym_EventScript_WhitneyNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_WHITNEY_REMATCH, GoldenrodCity_Gym_Text_WhitneyDefeat
	msgbox GoldenrodCity_Gym_Text_WhitneyPostRematch, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_Gym_EventScript_WhitneyNoRematch::
	msgbox GoldenrodCity_Gym_Text_WhitneyPostBattle, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_Gym_EventScript_DefeatedWhitney::
	setflag FLAG_JOHTO_BADGE03_GET
	special UpdateTotalBadges
	msgbox GoldenrodCity_Gym_Text_WhitneyExplainBadge, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_JOHTO_BADGE03_GET, GoldenrodCity_Gym_EventScript_GymGuyPostVictory
	msgbox GoldenrodCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_Gym_EventScript_GymGuyPostVictory::
	msgbox GoldenrodCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_JOHTO_BADGE03_GET, GoldenrodCity_Gym_EventScript_GymStatuePostVictory
	msgbox GoldenrodCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

GoldenrodCity_Gym_EventScript_GymStatuePostVictory::
	msgbox GoldenrodCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end
GoldenrodCity_Gym_Text_WhitneyIntro:
	.string "WHITNEY: Welcome to the GOLDENROD CITY GYM!"
	.string "I specialize in NORMAL-type Pokémon."
	.string "Show me what you and your team are made of!"

GoldenrodCity_Gym_Text_WhitneyDefeat:
	.string "Incredible! You have bested my NORMAL techniques!"
	.string "Take the official LEAGUE PLAIN BADGE!"

GoldenrodCity_Gym_Text_WhitneyPostBattle:
	.string "WHITNEY: With that badge, your journey reaches new heights."
	.string "Continue striving toward greatness!"

GoldenrodCity_Gym_Text_WhitneyRematchIntro:
	.string "WHITNEY: Welcome back, Trainer!"
	.string "My team has grown substantially since our last match."
	.string "Are you ready for a rematch battle?"

GoldenrodCity_Gym_Text_WhitneyPostRematch:
	.string "WHITNEY: What a spectacular contest!"
	.string "Your mastery is truly beyond compare!"

GoldenrodCity_Gym_Text_WhitneyExplainBadge:
	.string "WHITNEY: The PLAIN BADGE proves your strength."
	.string "Pokémon across the land will acknowledge your bond!"

GoldenrodCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!"
	.string "This GYM is all about NORMAL-type Pokémon."
	.string "Plan your types carefully and strike with purpose!"

GoldenrodCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible gym victory!"

GoldenrodCity_Gym_Text_GymStatue:
	.string "GOLDENROD CITY POKéMON GYM"
	.string "LEADER: WHITNEY"
	.string "WINNING TRAINERS:"
	.string "????"

GoldenrodCity_Gym_Text_GymStatuePlayerWon:
	.string "GOLDENROD CITY POKéMON GYM"
	.string "LEADER: WHITNEY"
	.string "WINNING TRAINERS:"
	.string "{PLAYER}"

