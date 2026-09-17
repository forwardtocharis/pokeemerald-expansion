VermilionCity_MapScripts::
	.byte 0

VermilionCity_EventScript_CitySign::
	msgbox VermilionCity_Text_Sign1, MSGBOX_SIGN
	end

VermilionCity_EventScript_PokemonFanClubSign::
	msgbox VermilionCity_Text_Sign2, MSGBOX_SIGN
	end

VermilionCity_EventScript_GymSign::
	msgbox VermilionCity_Text_Sign3, MSGBOX_SIGN
	end

VermilionCity_EventScript_HarborSign::
	msgbox VermilionCity_Text_Sign4, MSGBOX_SIGN
	end

VermilionCity_EventScript_SnorlaxNotice::
	msgbox VermilionCity_Text_Sign5, MSGBOX_SIGN
	end

VermilionCity_EventScript_Woman::
	msgbox VermilionCity_Text_Woman, MSGBOX_NPC
	end

VermilionCity_EventScript_OldMan1::
	msgbox VermilionCity_Text_OldMan1, MSGBOX_NPC
	end

VermilionCity_EventScript_OldMan2::
	msgbox VermilionCity_Text_OldMan2, MSGBOX_NPC
	end

VermilionCity_EventScript_Machop::
	lock
	faceplayer
	waitse
	playse SE_PIN
	msgbox VermilionCity_Text_Machop, MSGBOX_DEFAULT
	release
	end

VermilionCity_EventScript_Sailor::
	msgbox VermilionCity_Text_Sailor, MSGBOX_NPC
	end

VermilionCity_EventScript_OaksAide::
	msgbox VermilionCity_Text_OaksAide, MSGBOX_NPC
	end

VermilionCity_EventScript_FerrySailor::
	lock
	faceplayer
	msgbox VermilionCity_Text_SailorWelcome, MSGBOX_DEFAULT
	message VermilionCity_Text_SailorWhereTo
	waitmessage
	multichoice 16, 4, MULTI_TRANSIT_VERMILION, FALSE
	goto_if_eq VAR_RESULT, 0, VermilionCity_EventScript_SailToSlateport
	goto_if_eq VAR_RESULT, 1, VermilionCity_EventScript_SailToLilycove
	goto_if_eq VAR_RESULT, 2, VermilionCity_EventScript_SailToOlivine
	goto_if_eq VAR_RESULT, 3, VermilionCity_EventScript_SailToCanalave
	goto VermilionCity_EventScript_SailorCancel

VermilionCity_EventScript_SailToSlateport::
	msgbox VermilionCity_Text_SlateportItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VermilionCity_EventScript_FerrySailor
	msgbox VermilionCity_Text_SailorDepartHoenn, MSGBOX_DEFAULT
	playse SE_SHIP
	waitse
	setvar VAR_CURRENT_REGION, 0
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
	waitstate
	release
	end

VermilionCity_EventScript_SailToLilycove::
	msgbox VermilionCity_Text_LilycoveItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VermilionCity_EventScript_FerrySailor
	msgbox VermilionCity_Text_SailorDepartHoenn, MSGBOX_DEFAULT
	playse SE_SHIP
	waitse
	setvar VAR_CURRENT_REGION, 0
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end

VermilionCity_EventScript_SailToOlivine::
	msgbox VermilionCity_Text_OlivineItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VermilionCity_EventScript_FerrySailor
	msgbox VermilionCity_Text_SailorDepartJohto, MSGBOX_DEFAULT
	playse SE_SHIP
	waitse
	setvar VAR_CURRENT_REGION, 2
	warp MAP_OLIVINE_CITY, 20, 31
	waitstate
	release
	end

VermilionCity_EventScript_SailToCanalave::
	msgbox VermilionCity_Text_CanalaveItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VermilionCity_EventScript_FerrySailor
	msgbox VermilionCity_Text_SailorDepartSinnoh, MSGBOX_DEFAULT
	playse SE_SHIP
	waitse
	setvar VAR_CURRENT_REGION, 3
	warp MAP_CANALAVE_CITY, 14, 19
	waitstate
	release
	end

VermilionCity_EventScript_SailorCancel::
	msgbox VermilionCity_Text_SailorComeBackSoon, MSGBOX_DEFAULT
	release
	end


VermilionCity_Text_Sign1:
	.string "Vermilion City"
	.string "The Port of Exquisite Sunsets"

VermilionCity_Text_Sign2:
	.string "Pokémon Fan Club"
	.string "All Pokémon Fans Welcome!"

VermilionCity_Text_Sign3:
	.string "Vermilion City Pokémon Gym"
	.string "Leader: Lt. Surge, The Lightning American!"

VermilionCity_Text_Sign4:
	.string "Vermilion Harbor"

VermilionCity_Text_Sign5:
	.string "Notice: A sleeping Pokémon is blocking the road."

VermilionCity_Text_Woman:
	.string "We're setting up a fast transit line between regions!"

VermilionCity_Text_OldMan1:
	.string "Did you see the big ferry docked in the harbor?"

VermilionCity_Text_OldMan2:
	.string "My Machop is stomping the land flat for building."

VermilionCity_Text_Machop:
	.string "Machop: Guo! Gogogoh!"

VermilionCity_Text_Sailor:
	.string "The sea breeze feels wonderful here at the port."

VermilionCity_Text_OaksAide:
	.string "Professor Oak asked me to monitor regional biodiversity."

VermilionCity_Text_SailorWelcome:
	.string "Ahoy! The S.S. TIDAL offers high-speed transit across regions."

VermilionCity_Text_SailorWhereTo:
	.string "Where would you like to set sail today?"

VermilionCity_Text_SlateportItIs:
	.string "Slateport City in HOENN, is that right?"

VermilionCity_Text_LilycoveItIs:
	.string "Lilycove City in HOENN, is that right?"

VermilionCity_Text_OlivineItIs:
	.string "Olivine City in JOHTO, is that right?"

VermilionCity_Text_CanalaveItIs:
	.string "Canalave City in SINNOH, is that right?"

VermilionCity_Text_SailorDepartHoenn:
	.string "Aye aye! Setting sail for the HOENN region!"

VermilionCity_Text_SailorDepartJohto:
	.string "Aye aye! Setting sail for the JOHTO region!"

VermilionCity_Text_SailorDepartSinnoh:
	.string "Aye aye! Setting sail for the SINNOH region!"

VermilionCity_Text_SailorComeBackSoon:
	.string "Let me know whenever you're ready to sail!"

