Route38_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route38_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, Route38_OnResume
	.byte 0

Route38_OnTransition:
	call_if_unset FLAG_DEFEATED_RAIKOU, Route38_EventScript_ShowRaikou
	end

Route38_EventScript_ShowRaikou::
	clearflag FLAG_DEFEATED_RAIKOU
	return

Route38_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route38_EventScript_TryRemoveRaikou
	end

Route38_EventScript_TryRemoveRaikou::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

Route38_EventScript_RouteSign::
	msgbox Route38_Text_Sign1, MSGBOX_SIGN
	end

Route38_EventScript_Raikou::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_RAIKOU, CRY_MODE_ENCOUNTER
	message Route38_Text_RaikouRoar
	waitmessage
	waitmoncry
	delay 20
	playse SE_PIN
	delay 10
	setwildbattle SPECIES_RAIKOU, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route38_EventScript_DefeatedRaikou
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route38_EventScript_RanFromRaikou
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route38_EventScript_RanFromRaikou
	setflag FLAG_DEFEATED_RAIKOU
	release
	end

Route38_EventScript_DefeatedRaikou::
	setflag FLAG_DEFEATED_RAIKOU
	goto EventScript_RemoveStaticMon
	end

Route38_EventScript_RanFromRaikou::
	setvar VAR_0x8004, SPECIES_RAIKOU
	goto EventScript_MonFlewAway
	end

@ === BEGIN GENERATED EVENTS ===

Route38_EventScript_Trainer1::
	trainerbattle_single TRAINER_FOSTER, Route38_Text_Trainer1Intro, Route38_Text_Trainer1Defeat
	msgbox Route38_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route38_EventScript_Trainer2::
	trainerbattle_single TRAINER_ROSE_3, Route38_Text_Trainer2Intro, Route38_Text_Trainer2Defeat
	msgbox Route38_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route38_Text_Sign1:
	.string "ROUTE 38\n"
	.string "ECRUTEAK CITY - ROUTE 39$"

Route38_Text_RaikouRoar:
	.string "Gyaaa-ooh!$"

Route38_Text_Trainer1Intro:
	.string "Hold up on Route38! My Pokémon are\n"
	.string "itching for a match!$"

Route38_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route38_Text_Trainer1Post:
	.string "Exploring every corner of Route38\n"
	.string "always turns up new surprises!$"

Route38_Text_Trainer2Intro:
	.string "BUG CATCHER: Travelling across\n"
	.string "Route38? Show me your team's\p"
	.string "synergy!$"

Route38_Text_Trainer2Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route38_Text_Trainer2Post:
	.string "Check out the rare specimens I\n"
	.string "caught along this route!$"

