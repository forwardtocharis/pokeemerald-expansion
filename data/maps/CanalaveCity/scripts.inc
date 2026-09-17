CanalaveCity_MapScripts::
	.byte 0

CanalaveCity_EventScript_CitySign::
	msgbox CanalaveCity_Text_Sign1, MSGBOX_SIGN
	end

CanalaveCity_EventScript_GymSign::
	msgbox CanalaveCity_Text_Sign2, MSGBOX_SIGN
	end

CanalaveCity_EventScript_FerrySailor::
	lock
	faceplayer
	msgbox CanalaveCity_Text_SailorWelcome, MSGBOX_DEFAULT
	message CanalaveCity_Text_SailorWhereTo
	waitmessage
	multichoice 16, 4, MULTI_TRANSIT_CANALAVE, FALSE
	goto_if_eq VAR_RESULT, 0, CanalaveCity_EventScript_SailToSlateport
	goto_if_eq VAR_RESULT, 1, CanalaveCity_EventScript_SailToLilycove
	goto_if_eq VAR_RESULT, 2, CanalaveCity_EventScript_SailToVermilion
	goto_if_eq VAR_RESULT, 3, CanalaveCity_EventScript_SailToOlivine
	goto CanalaveCity_EventScript_SailorCancel

CanalaveCity_EventScript_SailToSlateport::
	msgbox CanalaveCity_Text_SlateportItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_EventScript_FerrySailor
	msgbox CanalaveCity_Text_SailorDepartHoenn, MSGBOX_DEFAULT
	setvar VAR_CURRENT_REGION, 0
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
	waitstate
	release
	end

CanalaveCity_EventScript_SailToLilycove::
	msgbox CanalaveCity_Text_LilycoveItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_EventScript_FerrySailor
	msgbox CanalaveCity_Text_SailorDepartHoenn, MSGBOX_DEFAULT
	setvar VAR_CURRENT_REGION, 0
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end

CanalaveCity_EventScript_SailToVermilion::
	msgbox CanalaveCity_Text_VermilionItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_EventScript_FerrySailor
	msgbox CanalaveCity_Text_SailorDepartKanto, MSGBOX_DEFAULT
	setvar VAR_CURRENT_REGION, 1
	warp MAP_VERMILION_CITY, 24, 32
	waitstate
	release
	end

CanalaveCity_EventScript_SailToOlivine::
	msgbox CanalaveCity_Text_OlivineItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_EventScript_FerrySailor
	msgbox CanalaveCity_Text_SailorDepartJohto, MSGBOX_DEFAULT
	setvar VAR_CURRENT_REGION, 2
	warp MAP_OLIVINE_CITY, 20, 31
	waitstate
	release
	end

CanalaveCity_EventScript_SailorCancel::
	msgbox CanalaveCity_Text_SailorComeBackSoon, MSGBOX_DEFAULT
	release
	end


CanalaveCity_Text_Sign1:
	.string "Canalave City"
	.string "The Canal City of Port and Library"

CanalaveCity_Text_Sign2:
	.string "Canalave City Pokémon Gym"
	.string "Leader: Byron, The Man with the Steel Body!"

CanalaveCity_Text_SailorWelcome:
	.string "Ahoy! Welcome to Canalave Port in the SINNOH region."

CanalaveCity_Text_SailorWhereTo:
	.string "Where would you like to set sail today?"

CanalaveCity_Text_SlateportItIs:
	.string "Slateport City in HOENN, is that right?"

CanalaveCity_Text_LilycoveItIs:
	.string "Lilycove City in HOENN, is that right?"

CanalaveCity_Text_VermilionItIs:
	.string "Vermilion City in KANTO, is that right?"

CanalaveCity_Text_OlivineItIs:
	.string "Olivine City in JOHTO, is that right?"

CanalaveCity_Text_SailorDepartHoenn:
	.string "Aye aye! Setting sail for the HOENN region!"

CanalaveCity_Text_SailorDepartKanto:
	.string "Aye aye! Setting sail for the KANTO region!"

CanalaveCity_Text_SailorDepartJohto:
	.string "Aye aye! Setting sail for the JOHTO region!"

CanalaveCity_Text_SailorComeBackSoon:
	.string "Let me know whenever you want to set sail!"

