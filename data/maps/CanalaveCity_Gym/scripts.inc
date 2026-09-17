CanalaveCity_Gym_MapScripts::
	.byte 0

CanalaveCity_Gym_EventScript_Byron::
	goto_if_set FLAG_SINNOH_BADGE06_GET, CanalaveCity_Gym_EventScript_ByronRematch
	trainerbattle_single TRAINER_LEADER_BYRON, CanalaveCity_Gym_Text_ByronIntro, CanalaveCity_Gym_Text_ByronDefeat, CanalaveCity_Gym_EventScript_DefeatedByron, NO_MUSIC
	msgbox CanalaveCity_Gym_Text_ByronPostBattle, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Gym_EventScript_ByronRematch::
	msgbox CanalaveCity_Gym_Text_ByronRematchIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_Gym_EventScript_ByronNoRematch
	@gba-only
	trainerbattle_no_intro TRAINER_LEADER_BYRON_REMATCH, CanalaveCity_Gym_Text_ByronDefeat
	msgbox CanalaveCity_Gym_Text_ByronPostRematch, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Gym_EventScript_ByronNoRematch::
	msgbox CanalaveCity_Gym_Text_ByronPostBattle, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Gym_EventScript_DefeatedByron::
	setflag FLAG_SINNOH_BADGE06_GET
	special UpdateTotalBadges
	msgbox CanalaveCity_Gym_Text_ByronExplainBadge, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_SINNOH_BADGE06_GET, CanalaveCity_Gym_EventScript_GymGuyPostVictory
	msgbox CanalaveCity_Gym_Text_GymGuyAdvice, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Gym_EventScript_GymGuyPostVictory::
	msgbox CanalaveCity_Gym_Text_GymGuyPostVictory, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_SINNOH_BADGE06_GET, CanalaveCity_Gym_EventScript_GymStatuePostVictory
	msgbox CanalaveCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

CanalaveCity_Gym_EventScript_GymStatuePostVictory::
	msgbox CanalaveCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end
CanalaveCity_Gym_Text_ByronIntro:
	.string "BYRON: Welcome to the CANALAVE CITY GYM!"
	.string "I specialize in STEEL-type Pokémon."
	.string "Show me what you and your team are made of!"

CanalaveCity_Gym_Text_ByronDefeat:
	.string "Incredible! You have bested my STEEL techniques!"
	.string "Take the official LEAGUE MINE BADGE!"

CanalaveCity_Gym_Text_ByronPostBattle:
	.string "BYRON: With that badge, your journey reaches new heights."
	.string "Continue striving toward greatness!"

CanalaveCity_Gym_Text_ByronRematchIntro:
	.string "BYRON: Welcome back, Trainer!"
	.string "My team has grown substantially since our last match."
	.string "Are you ready for a rematch battle?"

CanalaveCity_Gym_Text_ByronPostRematch:
	.string "BYRON: What a spectacular contest!"
	.string "Your mastery is truly beyond compare!"

CanalaveCity_Gym_Text_ByronExplainBadge:
	.string "BYRON: The MINE BADGE proves your strength."
	.string "Pokémon across the land will acknowledge your bond!"

CanalaveCity_Gym_Text_GymGuyAdvice:
	.string "Yo! Champ in the making!"
	.string "This GYM is all about STEEL-type Pokémon."
	.string "Plan your types carefully and strike with purpose!"

CanalaveCity_Gym_Text_GymGuyPostVictory:
	.string "You did it! That was an incredible gym victory!"

CanalaveCity_Gym_Text_GymStatue:
	.string "CANALAVE CITY POKéMON GYM"
	.string "LEADER: BYRON"
	.string "WINNING TRAINERS:"
	.string "????"

CanalaveCity_Gym_Text_GymStatuePlayerWon:
	.string "CANALAVE CITY POKéMON GYM"
	.string "LEADER: BYRON"
	.string "WINNING TRAINERS:"
	.string "{PLAYER}"

