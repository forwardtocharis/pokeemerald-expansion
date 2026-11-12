CianwoodCity_MapScripts::
	.byte 0

CianwoodCity_EventScript_CitySign::
	msgbox CianwoodCity_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

CianwoodCity_EventScript_GymSignAuto::
	msgbox CianwoodCity_Text_GymSignAuto, MSGBOX_SIGN
	end

CianwoodCity_EventScript_AutoNPC1::
	msgbox CianwoodCity_Text_AutoNPC1, MSGBOX_NPC
	end

CianwoodCity_EventScript_AutoNPC2::
	msgbox CianwoodCity_Text_AutoNPC2, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
CianwoodCity_Text_Sign1:
	.string "CIANWOOD CITY\n"
	.string "A Port Surrounded by Rough Seas$"

CianwoodCity_Text_GymSignAuto:
	.string "CIANWOOD CITY POKéMON GYM\n"
	.string "LEADER: CHUCK - Master of FIGHTING!$"

CianwoodCity_Text_AutoNPC1:
	.string "Crossing the sea to Cianwood\n"
	.string "toughens both Trainer and Pokémon!\p"
	.string "Chuck trains beneath roaring surf\n"
	.string "every single day!$"

CianwoodCity_Text_AutoNPC2:
	.string "Our island pharmacy and Poké Mart\n"
	.string "keep ocean travelers well\p"
	.string "supplied.$"

