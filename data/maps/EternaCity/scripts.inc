EternaCity_MapScripts::
	.byte 0

EternaCity_EventScript_CitySign::
	msgbox EternaCity_Text_Sign1, MSGBOX_SIGN
	end

EternaCity_EventScript_GymSign::
	msgbox EternaCity_Text_Sign2, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

EternaCity_EventScript_AutoNPC1::
	msgbox EternaCity_Text_AutoNPC1, MSGBOX_NPC
	end

EternaCity_EventScript_AutoNPC2::
	msgbox EternaCity_Text_AutoNPC2, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
EternaCity_Text_Sign1:
	.string "ETERNA CITY\n"
	.string "History Living!$"

EternaCity_Text_Sign2:
	.string "ETERNA CITY\n"
	.string "History Living!$"

EternaCity_Text_AutoNPC1:
	.string "Eterna City stands beside ancient\n"
	.string "myths of time and space.\p"
	.string "Gardenia's Grass Pokémon thrive in\n"
	.string "the forest sunlight.$"

EternaCity_Text_AutoNPC2:
	.string "Heading east leads toward Mount\n"
	.string "Coronet and Celestic Town!$"

