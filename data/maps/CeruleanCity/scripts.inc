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

CeruleanCity_EventScript_BaldingMan::
	msgbox CeruleanCity_Text_CeruleanCaveHorriblyDangerous, MSGBOX_NPC
	end

CeruleanCity_EventScript_Grunt::
	msgbox CeruleanCity_Text_RocketGrunt, MSGBOX_NPC
	end

CeruleanCity_EventScript_Lass::
	msgbox CeruleanCity_Text_MistyExpertOnWaterPokemon, MSGBOX_NPC
	end

CeruleanCity_EventScript_LittleBoy::
	msgbox CeruleanCity_Text_MakePokemonFightAndGrow, MSGBOX_NPC
	end

CeruleanCity_EventScript_Policeman::
	msgbox CeruleanCity_Text_PolicemanWatchForTeamRocket, MSGBOX_NPC
	end

CeruleanCity_EventScript_Slowbro::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWBRO, CRY_MODE_NORMAL
	msgbox CeruleanCity_Text_Slowbro, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CeruleanCity_EventScript_Woman::
	msgbox CeruleanCity_Text_BillInventedStorageSystem, MSGBOX_NPC
	end

CeruleanCity_EventScript_Youngster::
	msgbox CeruleanCity_Text_BikeShopBicyclesExpensive, MSGBOX_NPC
	end
CeruleanCity_Text_Sign1:
	.string "CeruleanCity$"

CeruleanCity_Text_Sign2:
	.string "CeruleanCity$"

CeruleanCity_Text_Sign3:
	.string "CeruleanCity$"

CeruleanCity_Text_Sign4:
	.string "CeruleanCity$"

CeruleanCity_Text_Sign5:
	.string "CeruleanCity$"

CeruleanCity_Text_Sign6:
	.string "CeruleanCity$"

CeruleanCity_Text_Sign7:
	.string "CeruleanCity$"

CeruleanCity_Text_CaveGuardHalt:
	.string "This is CERULEAN CAVE.\n"
	.string "Horribly powerful POKéMON lurk\p"
	.string "within.\n"
	.string "Only a recognized POKéMON LEAGUE\p"
	.string "CHAMPION\n"
	.string "is permitted beyond this point!$"

CeruleanCity_Text_CaveGuardStepAside:
	.string "Wait... you're the POKéMON LEAGUE\n"
	.string "CHAMPION!\p"
	.string "Your strength and accomplishments\n"
	.string "are undeniable.\p"
	.string "The barrier to CERULEAN CAVE is\n"
	.string "cleared for you.\p"
	.string "Be extremely careful in those\n"
	.string "depths!$"

CeruleanCity_Text_CeruleanCaveHorriblyDangerous:
	.string "The CERULEAN CAVE is horribly\n"
	.string "dangerous!\p"
	.string "Only truly powerful TRAINERS are\n"
	.string "allowed inside.$"

CeruleanCity_Text_RocketGrunt:
	.string "I'm a TEAM ROCKET member!\n"
	.string "Don't mess with me!$"

CeruleanCity_Text_MistyExpertOnWaterPokemon:
	.string "MISTY, the GYM LEADER, is an\n"
	.string "expert on WATER-type POKéMON.$"

CeruleanCity_Text_MakePokemonFightAndGrow:
	.string "You make your POKéMON fight and\n"
	.string "make them grow!$"

CeruleanCity_Text_PolicemanWatchForTeamRocket:
	.string "I'm keeping watch for suspicious\n"
	.string "characters like TEAM ROCKET.$"

CeruleanCity_Text_Slowbro:
	.string "SLOWBRO: Yaaawn?$"

CeruleanCity_Text_BillInventedStorageSystem:
	.string "BILL has lots of POKéMON!\p"
	.string "He's the one who invented the\n"
	.string "POKéMON STORAGE SYSTEM.$"

CeruleanCity_Text_BikeShopBicyclesExpensive:
	.string "That BIKE SHOP sells great BICYCLES,\n"
	.string "but they're so expensive!$"

