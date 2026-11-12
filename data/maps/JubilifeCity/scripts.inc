JubilifeCity_MapScripts::
	.byte 0

JubilifeCity_EventScript_CitySign::
	msgbox JubilifeCity_Text_Sign1, MSGBOX_SIGN
	end

JubilifeCity_EventScript_PoketchSign::
	msgbox JubilifeCity_Text_Sign2, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

JubilifeCity_EventScript_AutoNPC1::
	msgbox JubilifeCity_Text_AutoNPC1, MSGBOX_NPC
	end

JubilifeCity_EventScript_AutoNPC2::
	msgbox JubilifeCity_Text_AutoNPC2, MSGBOX_NPC
	end

JubilifeCity_EventScript_AutoNPC3::
	msgbox JubilifeCity_Text_AutoNPC3, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
JubilifeCity_Text_Sign1:
	.string "JUBILIFE CITY\n"
	.string "City of Joy!$"

JubilifeCity_Text_Sign2:
	.string "JUBILIFE CITY\n"
	.string "City of Joy!$"

JubilifeCity_Text_AutoNPC1:
	.string "Welcome to Jubilife City, Sinnoh's\n"
	.string "modern crossroads!\p"
	.string "Routes branch north, south, east,\n"
	.string "and west from our plazas.$"

JubilifeCity_Text_AutoNPC2:
	.string "Pokétch engineers and Trainers\n"
	.string "alike gather in Jubilife's sunny\p"
	.string "avenues.$"

JubilifeCity_Text_AutoNPC3:
	.string "Checking type matchups before a\n"
	.string "Gym challenge is the mark of a\p"
	.string "sharp Trainer!$"

