Route45_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route45_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, Route45_OnResume
	.byte 0

Route45_OnTransition:
	call_if_unset FLAG_DEFEATED_ENTEI, Route45_EventScript_ShowEntei
	end

Route45_EventScript_ShowEntei::
	clearflag FLAG_DEFEATED_ENTEI
	return

Route45_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route45_EventScript_TryRemoveEntei
	end

Route45_EventScript_TryRemoveEntei::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

Route45_EventScript_RouteSign::
	msgbox Route45_Text_Sign1, MSGBOX_SIGN
	end

Route45_EventScript_Entei::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ENTEI, CRY_MODE_ENCOUNTER
	message Route45_Text_EnteiRoar
	waitmessage
	waitmoncry
	delay 20
	playse SE_PIN
	delay 10
	setwildbattle SPECIES_ENTEI, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route45_EventScript_DefeatedEntei
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route45_EventScript_RanFromEntei
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route45_EventScript_RanFromEntei
	setflag FLAG_DEFEATED_ENTEI
	release
	end

Route45_EventScript_DefeatedEntei::
	setflag FLAG_DEFEATED_ENTEI
	goto EventScript_RemoveStaticMon
	end

Route45_EventScript_RanFromEntei::
	setvar VAR_0x8004, SPECIES_ENTEI
	goto EventScript_MonFlewAway
	end


Route45_Text_Sign1:
	.string "Route45"

Route45_Text_EnteiRoar:
	.string "Booo-ooh!"

