SunyshoreCity_Gym_MapScripts::
	.byte 0

SunyshoreCity_Gym_EventScript_Volkner::
	goto_if_set FLAG_SINNOH_BADGE08_GET, SunyshoreCity_Gym_EventScript_VolknerRematch
	trainerbattle_single TRAINER_LEADER_VOLKNER, SunyshoreCity_Gym_Text_VolknerIntro, SunyshoreCity_Gym_Text_VolknerDefeat, SunyshoreCity_Gym_EventScript_DefeatedVolkner, NO_MUSIC
	msgbox SunyshoreCity_Gym_Text_VolknerPostBattle, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_Gym_EventScript_VolknerRematch::
	msgbox SunyshoreCity_Gym_Text_VolknerRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SunyshoreCity_Gym_EventScript_VolknerNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_VOLKNER_REMATCH, SunyshoreCity_Gym_Text_VolknerDefeat
	msgbox SunyshoreCity_Gym_Text_VolknerPostRematch, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_Gym_EventScript_VolknerNoRematch::
	msgbox SunyshoreCity_Gym_Text_VolknerPostBattle, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_Gym_EventScript_DefeatedVolkner::
	setflag FLAG_SINNOH_BADGE08_GET
	special UpdateTotalBadges
	msgbox SunyshoreCity_Gym_Text_VolknerExplainBadge, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_SINNOH_BADGE08_GET, SunyshoreCity_Gym_EventScript_GymGuyPostVictory
	msgbox SunyshoreCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_Gym_EventScript_GymGuyPostVictory::
	msgbox SunyshoreCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_SINNOH_BADGE08_GET, SunyshoreCity_Gym_EventScript_GymStatuePostVictory
	msgbox SunyshoreCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

SunyshoreCity_Gym_EventScript_GymStatuePostVictory::
	msgbox SunyshoreCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end
SunyshoreCity_Gym_Text_VolknerIntro:
	.string "VOLKNER: Welcome to the SUNYSHORE\n"
	.string "CITY GYM!\p"
	.string "I specialize in ELECTRIC-type\n"
	.string "Pokémon.\p"
	.string "Show me what you and your team are\n"
	.string "made of!$"

SunyshoreCity_Gym_Text_VolknerDefeat:
	.string "Incredible! You have bested my\n"
	.string "ELECTRIC techniques!\p"
	.string "Take the official LEAGUE BEACON\n"
	.string "BADGE!$"

SunyshoreCity_Gym_Text_VolknerPostBattle:
	.string "VOLKNER: With that badge, your\n"
	.string "journey reaches new heights.\p"
	.string "Continue striving toward greatness!$"

SunyshoreCity_Gym_Text_VolknerRematchIntro:
	.string "VOLKNER: Welcome back, Trainer!\n"
	.string "My team has grown substantially\p"
	.string "since our last match.\n"
	.string "Are you ready for a rematch battle?$"

SunyshoreCity_Gym_Text_VolknerPostRematch:
	.string "VOLKNER: What a spectacular\n"
	.string "contest!\p"
	.string "Your mastery is truly beyond\n"
	.string "compare!$"

SunyshoreCity_Gym_Text_VolknerExplainBadge:
	.string "VOLKNER: The BEACON BADGE proves\n"
	.string "your strength.\p"
	.string "Pokémon across the land will\n"
	.string "acknowledge your bond!$"

SunyshoreCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!\n"
	.string "This GYM is all about ELECTRIC-\p"
	.string "type Pokémon.\n"
	.string "Plan your types carefully and\p"
	.string "strike with purpose!$"

SunyshoreCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible\n"
	.string "gym victory!$"

SunyshoreCity_Gym_Text_GymStatue:
	.string "SUNYSHORE CITY POKéMON GYM\n"
	.string "LEADER: VOLKNER\p"
	.string "WINNING TRAINERS:\n"
	.string "????$"

SunyshoreCity_Gym_Text_GymStatuePlayerWon:
	.string "SUNYSHORE CITY POKéMON GYM\n"
	.string "LEADER: VOLKNER\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

