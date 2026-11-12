AzaleaTown_MapScripts::
	.byte 0

AzaleaTown_EventScript_TownSign::
	msgbox AzaleaTown_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

AzaleaTown_EventScript_GymSignAuto::
	msgbox AzaleaTown_Text_GymSignAuto, MSGBOX_SIGN
	end

AzaleaTown_EventScript_AutoNPC1::
	msgbox AzaleaTown_Text_AutoNPC1, MSGBOX_NPC
	end

AzaleaTown_EventScript_AutoNPC2::
	msgbox AzaleaTown_Text_AutoNPC2, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
AzaleaTown_Text_Sign1:
	.string "AZALEA TOWN\n"
	.string "Where People and Pokémon Live in\p"
	.string "Happy Harmony$"

AzaleaTown_Text_GymSignAuto:
	.string "AZALEA TOWN POKéMON GYM\n"
	.string "LEADER: BUGSY - Master of BUG!$"

AzaleaTown_Text_AutoNPC1:
	.string "Charcoal kilns and Slowpoke give\n"
	.string "Azalea Town its peaceful charm.\p"
	.string "Watch out for Bugsy's quick\n"
	.string "Scyther tactics in the Gym!$"

AzaleaTown_Text_AutoNPC2:
	.string "I love watching Bug-type Pokémon\n"
	.string "gather near Ilex Forest!$"

