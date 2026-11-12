OreburghCity_MapScripts::
	.byte 0

OreburghCity_EventScript_CitySign::
	msgbox OreburghCity_Text_Sign1, MSGBOX_SIGN
	end

OreburghCity_EventScript_GymSign::
	msgbox OreburghCity_Text_Sign2, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

OreburghCity_EventScript_AutoNPC1::
	msgbox OreburghCity_Text_AutoNPC1, MSGBOX_NPC
	end

OreburghCity_EventScript_AutoNPC2::
	msgbox OreburghCity_Text_AutoNPC2, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
OreburghCity_Text_Sign1:
	.string "OREBURGH CITY\n"
	.string "City of Energy!$"

OreburghCity_Text_Sign2:
	.string "OREBURGH CITY\n"
	.string "City of Energy!$"

OreburghCity_Text_AutoNPC1:
	.string "Oreburgh's coal mines power half\n"
	.string "of Sinnoh!\p"
	.string "Roark's Rock-type team hits harder\n"
	.string "than a pickaxe!$"

OreburghCity_Text_AutoNPC2:
	.string "Make sure to stock Potions at the\n"
	.string "Mart before trekking up Route 207!$"

