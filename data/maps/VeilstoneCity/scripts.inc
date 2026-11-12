VeilstoneCity_MapScripts::
	.byte 0

VeilstoneCity_EventScript_CitySign::
	msgbox VeilstoneCity_Text_Sign1, MSGBOX_SIGN
	end

VeilstoneCity_EventScript_GymSign::
	msgbox VeilstoneCity_Text_Sign2, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

VeilstoneCity_EventScript_AutoNPC1::
	msgbox VeilstoneCity_Text_AutoNPC1, MSGBOX_NPC
	end

VeilstoneCity_EventScript_AutoNPC2::
	msgbox VeilstoneCity_Text_AutoNPC2, MSGBOX_NPC
	end

VeilstoneCity_EventScript_AutoNPC3::
	msgbox VeilstoneCity_Text_AutoNPC3, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
VeilstoneCity_Text_Sign1:
	.string "VEILSTONE CITY\n"
	.string "Hewn from Rock!$"

VeilstoneCity_Text_Sign2:
	.string "VEILSTONE CITY\n"
	.string "Hewn from Rock!$"

VeilstoneCity_Text_AutoNPC1:
	.string "Carved into solid stone, Veilstone\n"
	.string "City is a paradise for martial\p"
	.string "artists!\n"
	.string "Maylene's Fighting spirit never\p"
	.string "wavers!$"

VeilstoneCity_Text_AutoNPC2:
	.string "Our Poké Mart carries top-grade\n"
	.string "supplies for tough mid- and late-\p"
	.string "game routes.$"

VeilstoneCity_Text_AutoNPC3:
	.string "Meteorites resting in Veilstone\n"
	.string "shimmer with cosmic energy.$"

