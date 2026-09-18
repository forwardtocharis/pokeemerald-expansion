CeruleanCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_OnTransition
	.byte 0

CeruleanCity_OnTransition:
	call_if_set FLAG_SYS_GAME_CLEAR, CeruleanCity_EventScript_CheckHideCaveGuard
	end

CeruleanCity_EventScript_CheckHideCaveGuard::
	setflag FLAG_HIDE_CERULEAN_CAVE_GUARD
	return

CeruleanCity_EventScript_CeruleanCaveGuard::
	goto_if_set FLAG_SYS_GAME_CLEAR, CeruleanCity_EventScript_CeruleanCaveGuardChampion
	goto_if_ge VAR_TOTAL_BADGES, 8, CeruleanCity_EventScript_CeruleanCaveGuardChampion
	msgbox CeruleanCity_Text_CaveGuardHalt, MSGBOX_NPC
	end

CeruleanCity_EventScript_CeruleanCaveGuardChampion::
	lock
	faceplayer
	msgbox CeruleanCity_Text_CaveGuardStepAside, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, CeruleanCity_Movement_GuardStepAside
	waitmovement 0
	setflag FLAG_HIDE_CERULEAN_CAVE_GUARD
	removeobject VAR_LAST_TALKED
	release
	end

CeruleanCity_Movement_GuardStepAside:
	walk_down
	step_end


CeruleanCity_EventScript_CitySign::
	msgbox CeruleanCity_Text_Sign1, MSGBOX_SIGN
	end

CeruleanCity_EventScript_GymSign::
	msgbox CeruleanCity_Text_Sign2, MSGBOX_SIGN
	end

CeruleanCity_EventScript_BikeShopSign::
	msgbox CeruleanCity_Text_Sign3, MSGBOX_SIGN
	end

CeruleanCity_EventScript_TrainerTips::
	msgbox CeruleanCity_Text_Sign4, MSGBOX_SIGN
	end

CeruleanCity_BikeShop_EventScript_Bicycle::
	msgbox CeruleanCity_Text_Sign5, MSGBOX_SIGN
	end

CeruleanCity_BikeShop_EventScript_Bicycle::
	msgbox CeruleanCity_Text_Sign6, MSGBOX_SIGN
	end

CeruleanCity_BikeShop_EventScript_Bicycle::
	msgbox CeruleanCity_Text_Sign7, MSGBOX_SIGN
	end

CeruleanCity_Text_Sign1:
	.string "CeruleanCity"

CeruleanCity_Text_Sign2:
	.string "CeruleanCity"

CeruleanCity_Text_Sign3:
	.string "CeruleanCity"

CeruleanCity_Text_Sign4:
	.string "CeruleanCity"

CeruleanCity_Text_Sign5:
	.string "CeruleanCity"

CeruleanCity_Text_Sign6:
	.string "CeruleanCity"

CeruleanCity_Text_Sign7:
	.string "CeruleanCity"

CeruleanCity_Text_CaveGuardHalt:
	.string "This is CERULEAN CAVE."
	.string "Horribly powerful POKéMON lurk within."
	.string "Only a recognized POKéMON LEAGUE CHAMPION"
	.string "is permitted beyond this point!"

CeruleanCity_Text_CaveGuardStepAside:
	.string "Wait... you're the POKéMON LEAGUE CHAMPION!"
	.string "Your strength and accomplishments are undeniable."
	.string "The barrier to CERULEAN CAVE is cleared for you."
	.string "Be extremely careful in those depths!"

