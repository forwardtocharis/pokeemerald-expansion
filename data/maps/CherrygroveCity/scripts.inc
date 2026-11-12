CherrygroveCity_MapScripts::
	.byte 0

CherrygroveCity_EventScript_TownSign::
	msgbox CherrygroveCity_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

CherrygroveCity_EventScript_AutoNPC1::
	msgbox CherrygroveCity_Text_AutoNPC1, MSGBOX_NPC
	end

CherrygroveCity_EventScript_AutoNPC2::
	msgbox CherrygroveCity_Text_AutoNPC2, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
CherrygroveCity_Text_Sign1:
	.string "CHERRYGROVE CITY\n"
	.string "The City of Cute, Fragrant Flowers$"

CherrygroveCity_Text_AutoNPC1:
	.string "Welcome to Cherrygrove! Every\n"
	.string "great Johto journey passes by our\p"
	.string "seafront.\n"
	.string "Make sure you heal up at the\p"
	.string "Pokémon Center before heading\n"
	.string "north!$"

CherrygroveCity_Text_AutoNPC2:
	.string "Pink petals drift across the water\n"
	.string "every spring here in Cherrygrove\p"
	.string "City.$"

