HearthomeCity_MapScripts::
	.byte 0

HearthomeCity_EventScript_CitySign::
	msgbox HearthomeCity_Text_Sign1, MSGBOX_SIGN
	end

HearthomeCity_EventScript_GymSign::
	msgbox HearthomeCity_Text_Sign2, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

HearthomeCity_EventScript_AutoNPC1::
	msgbox HearthomeCity_Text_AutoNPC1, MSGBOX_NPC
	end

HearthomeCity_EventScript_AutoNPC2::
	msgbox HearthomeCity_Text_AutoNPC2, MSGBOX_NPC
	end

HearthomeCity_EventScript_AutoNPC3::
	msgbox HearthomeCity_Text_AutoNPC3, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
HearthomeCity_Text_Sign1:
	.string "HEARTHOME CITY\n"
	.string "Warm and Kind!$"

HearthomeCity_Text_Sign2:
	.string "HEARTHOME CITY\n"
	.string "Warm and Kind!$"

HearthomeCity_Text_AutoNPC1:
	.string "Hearthome City welcomes Trainers\n"
	.string "and Coordinators with open arms!$"

HearthomeCity_Text_AutoNPC2:
	.string "Fantina's Ghost-type battle style\n"
	.string "blends elegance, rhythm, and\p"
	.string "mystery.$"

HearthomeCity_Text_AutoNPC3:
	.string "Whether you head east to Solaceon\n"
	.string "or south toward Pastoria, stock up\p"
	.string "first!$"

