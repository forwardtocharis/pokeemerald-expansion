OlivineCity_MapScripts::
	.byte 0

OlivineCity_EventScript_CitySign::
	msgbox OlivineCity_Text_Sign1, MSGBOX_SIGN
	end

OlivineCity_EventScript_FerrySailor::
	lock
	faceplayer
	call OlivineCity_EventScript_CheckBattleFrontierQualification
	goto_if_set FLAG_BATTLE_FRONTIER_QUALIFIED, OlivineCity_EventScript_OfferBattleFrontier
OlivineCity_EventScript_AskFerryDestination:
	msgbox OlivineCity_Text_SailorWelcome, MSGBOX_DEFAULT
	message OlivineCity_Text_SailorWhereTo
	waitmessage
	multichoice 16, 4, MULTI_TRANSIT_OLIVINE, FALSE
	goto_if_eq VAR_RESULT, 0, OlivineCity_EventScript_SailToSlateport
	goto_if_eq VAR_RESULT, 1, OlivineCity_EventScript_SailToLilycove
	goto_if_eq VAR_RESULT, 2, OlivineCity_EventScript_SailToVermilion
	goto_if_eq VAR_RESULT, 3, OlivineCity_EventScript_SailToCanalave
	goto OlivineCity_EventScript_SailorCancel

OlivineCity_EventScript_CheckBattleFrontierQualification::
	goto_if_set FLAG_BATTLE_FRONTIER_QUALIFIED, Common_EventScript_NopReturn
	goto_if_set FLAG_SYS_GAME_CLEAR, OlivineCity_EventScript_QualifyFrontier
	goto_if_ge VAR_TOTAL_BADGES, 8, OlivineCity_EventScript_QualifyFrontier
	return

OlivineCity_EventScript_QualifyFrontier::
	setflag FLAG_BATTLE_FRONTIER_QUALIFIED
	setflag FLAG_SYS_FRONTIER_PASS
	setflag FLAG_RECEIVED_SS_TICKET
	setflag FLAG_MET_SCOTT_ON_SS_TIDAL
	setflag FLAG_TRANSIT_SS_TIDAL_UNLOCKED
	return

OlivineCity_EventScript_OfferBattleFrontier::
	msgbox OlivineCity_Text_SailToFrontierPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, OlivineCity_EventScript_SailToFrontier
	goto OlivineCity_EventScript_AskFerryDestination

OlivineCity_EventScript_SailToFrontier::
	msgbox OlivineCity_Text_BattleFrontierItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OlivineCity_EventScript_AskFerryDestination
	msgbox OlivineCity_Text_SailorDepartFrontier, MSGBOX_DEFAULT
	playse SE_SHIP
	waitse
	setvar VAR_CURRENT_REGION, 0
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
	waitstate
	release
	end

OlivineCity_EventScript_SailToSlateport::
	msgbox OlivineCity_Text_SlateportItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OlivineCity_EventScript_FerrySailor
	msgbox OlivineCity_Text_SailorDepartHoenn, MSGBOX_DEFAULT
	playse SE_SHIP
	waitse
	setvar VAR_CURRENT_REGION, 0
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
	waitstate
	release
	end

OlivineCity_EventScript_SailToLilycove::
	msgbox OlivineCity_Text_LilycoveItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OlivineCity_EventScript_FerrySailor
	msgbox OlivineCity_Text_SailorDepartHoenn, MSGBOX_DEFAULT
	playse SE_SHIP
	waitse
	setvar VAR_CURRENT_REGION, 0
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end

OlivineCity_EventScript_SailToVermilion::
	msgbox OlivineCity_Text_VermilionItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OlivineCity_EventScript_FerrySailor
	msgbox OlivineCity_Text_SailorDepartKanto, MSGBOX_DEFAULT
	playse SE_SHIP
	waitse
	setvar VAR_CURRENT_REGION, 1
	warp MAP_VERMILION_CITY, 24, 32
	waitstate
	release
	end

OlivineCity_EventScript_SailToCanalave::
	msgbox OlivineCity_Text_CanalaveItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OlivineCity_EventScript_FerrySailor
	msgbox OlivineCity_Text_SailorDepartSinnoh, MSGBOX_DEFAULT
	playse SE_SHIP
	waitse
	setvar VAR_CURRENT_REGION, 3
	warp MAP_CANALAVE_CITY, 14, 19
	waitstate
	release
	end

OlivineCity_EventScript_SailorCancel::
	msgbox OlivineCity_Text_SailorComeBackSoon, MSGBOX_DEFAULT
	release
	end

@ === BEGIN GENERATED EVENTS ===

OlivineCity_EventScript_GymSignAuto::
	msgbox OlivineCity_Text_GymSignAuto, MSGBOX_SIGN
	end

OlivineCity_EventScript_AutoNPC1::
	msgbox OlivineCity_Text_AutoNPC1, MSGBOX_NPC
	end

OlivineCity_EventScript_AutoNPC2::
	msgbox OlivineCity_Text_AutoNPC2, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
OlivineCity_Text_Sign1:
	.string "Olivine City\n"
	.string "The Port with Sea Breeze and Scent$"

OlivineCity_Text_SailorWelcome:
	.string "Ahoy! Welcome to Olivine Port in\n"
	.string "the JOHTO region.$"

OlivineCity_Text_SailorWhereTo:
	.string "Where would you like to sail today?$"

OlivineCity_Text_SlateportItIs:
	.string "Slateport City in HOENN, is that\n"
	.string "right?$"

OlivineCity_Text_LilycoveItIs:
	.string "Lilycove City in HOENN, is that\n"
	.string "right?$"

OlivineCity_Text_VermilionItIs:
	.string "Vermilion City in KANTO, is that\n"
	.string "right?$"

OlivineCity_Text_CanalaveItIs:
	.string "Canalave City in SINNOH, is that\n"
	.string "right?$"

OlivineCity_Text_SailorDepartHoenn:
	.string "Aye aye! Setting sail for the\n"
	.string "HOENN region!$"

OlivineCity_Text_SailorDepartKanto:
	.string "Aye aye! Setting sail for the\n"
	.string "KANTO region!$"

OlivineCity_Text_SailorDepartSinnoh:
	.string "Aye aye! Setting sail for the\n"
	.string "SINNOH region!$"

OlivineCity_Text_SailorComeBackSoon:
	.string "Let me know whenever you want to\n"
	.string "set sail!$"

OlivineCity_Text_SailToFrontierPrompt:
	.string "Ah, an authorized BATTLE FRONTIER\n"
	.string "contender! Would you like to sail\p"
	.string "to the BATTLE FRONTIER?$"

OlivineCity_Text_BattleFrontierItIs:
	.string "The BATTLE FRONTIER, is that right?$"

OlivineCity_Text_SailorDepartFrontier:
	.string "Aye aye! Setting sail for the\n"
	.string "BATTLE FRONTIER!$"

OlivineCity_Text_GymSignAuto:
	.string "OLIVINE CITY POKéMON GYM\n"
	.string "LEADER: JASMINE - Master of STEEL!$"

OlivineCity_Text_AutoNPC1:
	.string "Ships bound for Hoenn, Kanto, and\n"
	.string "Sinnoh dock right at Olivine's\p"
	.string "southern pier!$"

OlivineCity_Text_AutoNPC2:
	.string "Jasmine cares deeply for every\n"
	.string "Pokémon, and her Steel types shine\p"
	.string "like beacons.$"

