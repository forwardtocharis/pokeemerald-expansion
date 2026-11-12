PastoriaCity_MapScripts::
	.byte 0

PastoriaCity_EventScript_CitySign::
	msgbox PastoriaCity_Text_Sign1, MSGBOX_SIGN
	end

PastoriaCity_EventScript_GymSign::
	msgbox PastoriaCity_Text_Sign2, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

PastoriaCity_EventScript_AutoNPC1::
	msgbox PastoriaCity_Text_AutoNPC1, MSGBOX_NPC
	end

PastoriaCity_EventScript_AutoNPC2::
	msgbox PastoriaCity_Text_AutoNPC2, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
PastoriaCity_Text_Sign1:
	.string "PASTORIA CITY\n"
	.string "The Marsh City!$"

PastoriaCity_Text_Sign2:
	.string "PASTORIA CITY\n"
	.string "The Marsh City!$"

PastoriaCity_Text_AutoNPC1:
	.string "Water-type Pokémon love Pastoria's\n"
	.string "misty marshlands!\p"
	.string "Crasher Wake brings tidal energy\n"
	.string "to every Gym match!$"

PastoriaCity_Text_AutoNPC2:
	.string "Splash! Puddles and ponds make\n"
	.string "Pastoria the coolest city in\p"
	.string "Sinnoh!$"

