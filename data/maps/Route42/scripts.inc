Route42_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route42_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, Route42_OnResume
	.byte 0

Route42_OnTransition:
	call_if_unset FLAG_DEFEATED_SUICUNE, Route42_EventScript_ShowSuicune
	end

Route42_EventScript_ShowSuicune::
	clearflag FLAG_DEFEATED_SUICUNE
	return

Route42_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route42_EventScript_TryRemoveSuicune
	end

Route42_EventScript_TryRemoveSuicune::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

Route42_EventScript_RouteSign::
	msgbox Route42_Text_Sign1, MSGBOX_SIGN
	end

Route42_EventScript_Suicune::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
	message Route42_Text_SuicuneRoar
	waitmessage
	waitmoncry
	delay 20
	playse SE_PIN
	delay 10
	setwildbattle SPECIES_SUICUNE, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route42_EventScript_DefeatedSuicune
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route42_EventScript_RanFromSuicune
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route42_EventScript_RanFromSuicune
	setflag FLAG_DEFEATED_SUICUNE
	release
	end

Route42_EventScript_DefeatedSuicune::
	setflag FLAG_DEFEATED_SUICUNE
	goto EventScript_RemoveStaticMon
	end

Route42_EventScript_RanFromSuicune::
	setvar VAR_0x8004, SPECIES_SUICUNE
	goto EventScript_MonFlewAway
	end

@ === BEGIN GENERATED EVENTS ===

Route42_EventScript_Trainer1::
	trainerbattle_single TRAINER_MOLLIE, Route42_Text_Trainer1Intro, Route42_Text_Trainer1Defeat
	msgbox Route42_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route42_EventScript_Trainer2::
	trainerbattle_single TRAINER_RONALD, Route42_Text_Trainer2Intro, Route42_Text_Trainer2Defeat
	msgbox Route42_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route42_EventScript_Trainer3::
	trainerbattle_single TRAINER_DUSTY_3, Route42_Text_Trainer3Intro, Route42_Text_Trainer3Defeat
	msgbox Route42_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route42_Text_Sign1:
	.string "ROUTE 42\n"
	.string "ECRUTEAK CITY - MAHOGANY TOWN$"

Route42_Text_SuicuneRoar:
	.string "Gugyoo-ooh!$"

Route42_Text_Trainer1Intro:
	.string "Hold up on Route42! My Pokémon are\n"
	.string "itching for a match!$"

Route42_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route42_Text_Trainer1Post:
	.string "Exploring every corner of Route42\n"
	.string "always turns up new surprises!$"

Route42_Text_Trainer2Intro:
	.string "I've been training on Route42 to\n"
	.string "challenge the Gym Leaders!$"

Route42_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route42_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route42_Text_Trainer3Intro:
	.string "PICNICKER: Travelling across\n"
	.string "Route42? Show me your team's\p"
	.string "synergy!$"

Route42_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route42_Text_Trainer3Post:
	.string "A scenic route like this is the\n"
	.string "best place for a Pokémon match!$"

