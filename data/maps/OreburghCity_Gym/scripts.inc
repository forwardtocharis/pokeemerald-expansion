OreburghCity_Gym_MapScripts::
	.byte 0

OreburghCity_Gym_EventScript_Roark::
	goto_if_set FLAG_SINNOH_BADGE01_GET, OreburghCity_Gym_EventScript_RoarkRematch
	trainerbattle_single TRAINER_LEADER_ROARK, OreburghCity_Gym_Text_RoarkIntro, OreburghCity_Gym_Text_RoarkDefeat, OreburghCity_Gym_EventScript_DefeatedRoark, NO_MUSIC
	msgbox OreburghCity_Gym_Text_RoarkPostBattle, MSGBOX_DEFAULT
	release
	end

OreburghCity_Gym_EventScript_RoarkRematch::
	msgbox OreburghCity_Gym_Text_RoarkRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OreburghCity_Gym_EventScript_RoarkNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_ROARK_REMATCH, OreburghCity_Gym_Text_RoarkDefeat
	msgbox OreburghCity_Gym_Text_RoarkPostRematch, MSGBOX_DEFAULT
	release
	end

OreburghCity_Gym_EventScript_RoarkNoRematch::
	msgbox OreburghCity_Gym_Text_RoarkPostBattle, MSGBOX_DEFAULT
	release
	end

OreburghCity_Gym_EventScript_DefeatedRoark::
	setflag FLAG_SINNOH_BADGE01_GET
	special UpdateTotalBadges
	msgbox OreburghCity_Gym_Text_RoarkExplainBadge, MSGBOX_DEFAULT
	release
	end

OreburghCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_SINNOH_BADGE01_GET, OreburghCity_Gym_EventScript_GymGuyPostVictory
	msgbox OreburghCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

OreburghCity_Gym_EventScript_GymGuyPostVictory::
	msgbox OreburghCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

OreburghCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_SINNOH_BADGE01_GET, OreburghCity_Gym_EventScript_GymStatuePostVictory
	msgbox OreburghCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

OreburghCity_Gym_EventScript_GymStatuePostVictory::
	msgbox OreburghCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end
OreburghCity_Gym_Text_RoarkIntro:
	.string "ROARK: Welcome to the OREBURGH CITY GYM!"
	.string "I specialize in ROCK-type Pokémon."
	.string "Show me what you and your team are made of!"

OreburghCity_Gym_Text_RoarkDefeat:
	.string "Incredible! You have bested my ROCK techniques!"
	.string "Take the official LEAGUE COAL BADGE!"

OreburghCity_Gym_Text_RoarkPostBattle:
	.string "ROARK: With that badge, your journey reaches new heights."
	.string "Continue striving toward greatness!"

OreburghCity_Gym_Text_RoarkRematchIntro:
	.string "ROARK: Welcome back, Trainer!"
	.string "My team has grown substantially since our last match."
	.string "Are you ready for a rematch battle?"

OreburghCity_Gym_Text_RoarkPostRematch:
	.string "ROARK: What a spectacular contest!"
	.string "Your mastery is truly beyond compare!"

OreburghCity_Gym_Text_RoarkExplainBadge:
	.string "ROARK: The COAL BADGE proves your strength."
	.string "Pokémon across the land will acknowledge your bond!"

OreburghCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!"
	.string "This GYM is all about ROCK-type Pokémon."
	.string "Plan your types carefully and strike with purpose!"

OreburghCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible gym victory!"

OreburghCity_Gym_Text_GymStatue:
	.string "OREBURGH CITY POKéMON GYM"
	.string "LEADER: ROARK"
	.string "WINNING TRAINERS:"
	.string "????"

OreburghCity_Gym_Text_GymStatuePlayerWon:
	.string "OREBURGH CITY POKéMON GYM"
	.string "LEADER: ROARK"
	.string "WINNING TRAINERS:"
	.string "{PLAYER}"

