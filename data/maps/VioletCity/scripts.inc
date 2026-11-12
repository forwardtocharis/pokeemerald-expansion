VioletCity_MapScripts::
	.byte 0

VioletCity_EventScript_TownSign::
	msgbox VioletCity_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

VioletCity_EventScript_GymSignAuto::
	msgbox VioletCity_Text_GymSignAuto, MSGBOX_SIGN
	end

VioletCity_EventScript_AutoNPC1::
	msgbox VioletCity_Text_AutoNPC1, MSGBOX_NPC
	end

VioletCity_EventScript_AutoNPC2::
	msgbox VioletCity_Text_AutoNPC2, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
VioletCity_Text_Sign1:
	.string "VIOLET CITY\n"
	.string "The City of Nostalgic Scents$"

VioletCity_Text_GymSignAuto:
	.string "VIOLET CITY POKéMON GYM\n"
	.string "LEADER: FALKNER - Master of FLYING!$"

VioletCity_Text_AutoNPC1:
	.string "Falkner's Flying-type Pokémon soar\n"
	.string "high above Violet City!\p"
	.string "Have you challenged the Violet Gym\n"
	.string "yet?$"

VioletCity_Text_AutoNPC2:
	.string "Violet City honors ancient\n"
	.string "traditions alongside young\p"
	.string "Trainers.$"

