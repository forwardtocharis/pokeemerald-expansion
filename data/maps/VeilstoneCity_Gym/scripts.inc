VeilstoneCity_Gym_MapScripts::
	.byte 0

VeilstoneCity_Gym_EventScript_Maylene::
	goto_if_set FLAG_SINNOH_BADGE03_GET, VeilstoneCity_Gym_EventScript_MayleneRematch
	trainerbattle_single TRAINER_LEADER_MAYLENE, VeilstoneCity_Gym_Text_MayleneIntro, VeilstoneCity_Gym_Text_MayleneDefeat, VeilstoneCity_Gym_EventScript_DefeatedMaylene, NO_MUSIC
	msgbox VeilstoneCity_Gym_Text_MaylenePostBattle, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Gym_EventScript_MayleneRematch::
	msgbox VeilstoneCity_Gym_Text_MayleneRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VeilstoneCity_Gym_EventScript_MayleneNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_MAYLENE_REMATCH, VeilstoneCity_Gym_Text_MayleneDefeat
	msgbox VeilstoneCity_Gym_Text_MaylenePostRematch, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Gym_EventScript_MayleneNoRematch::
	msgbox VeilstoneCity_Gym_Text_MaylenePostBattle, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Gym_EventScript_DefeatedMaylene::
	setflag FLAG_SINNOH_BADGE03_GET
	special UpdateTotalBadges
	msgbox VeilstoneCity_Gym_Text_MayleneExplainBadge, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_SINNOH_BADGE03_GET, VeilstoneCity_Gym_EventScript_GymGuyPostVictory
	msgbox VeilstoneCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Gym_EventScript_GymGuyPostVictory::
	msgbox VeilstoneCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_SINNOH_BADGE03_GET, VeilstoneCity_Gym_EventScript_GymStatuePostVictory
	msgbox VeilstoneCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

VeilstoneCity_Gym_EventScript_GymStatuePostVictory::
	msgbox VeilstoneCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end
VeilstoneCity_Gym_Text_MayleneIntro:
	.string "MAYLENE: Welcome to the VEILSTONE CITY GYM!"
	.string "I specialize in FIGHTING-type Pokémon."
	.string "Show me what you and your team are made of!"

VeilstoneCity_Gym_Text_MayleneDefeat:
	.string "Incredible! You have bested my FIGHTING techniques!"
	.string "Take the official LEAGUE COBBLE BADGE!"

VeilstoneCity_Gym_Text_MaylenePostBattle:
	.string "MAYLENE: With that badge, your journey reaches new heights."
	.string "Continue striving toward greatness!"

VeilstoneCity_Gym_Text_MayleneRematchIntro:
	.string "MAYLENE: Welcome back, Trainer!"
	.string "My team has grown substantially since our last match."
	.string "Are you ready for a rematch battle?"

VeilstoneCity_Gym_Text_MaylenePostRematch:
	.string "MAYLENE: What a spectacular contest!"
	.string "Your mastery is truly beyond compare!"

VeilstoneCity_Gym_Text_MayleneExplainBadge:
	.string "MAYLENE: The COBBLE BADGE proves your strength."
	.string "Pokémon across the land will acknowledge your bond!"

VeilstoneCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!"
	.string "This GYM is all about FIGHTING-type Pokémon."
	.string "Plan your types carefully and strike with purpose!"

VeilstoneCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible gym victory!"

VeilstoneCity_Gym_Text_GymStatue:
	.string "VEILSTONE CITY POKéMON GYM"
	.string "LEADER: MAYLENE"
	.string "WINNING TRAINERS:"
	.string "????"

VeilstoneCity_Gym_Text_GymStatuePlayerWon:
	.string "VEILSTONE CITY POKéMON GYM"
	.string "LEADER: MAYLENE"
	.string "WINNING TRAINERS:"
	.string "{PLAYER}"

