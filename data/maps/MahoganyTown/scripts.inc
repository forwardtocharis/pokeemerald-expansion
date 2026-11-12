MahoganyTown_MapScripts::
	.byte 0

MahoganyTown_EventScript_TownSign::
	msgbox MahoganyTown_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

MahoganyTown_EventScript_GymSignAuto::
	msgbox MahoganyTown_Text_GymSignAuto, MSGBOX_SIGN
	end

MahoganyTown_EventScript_AutoNPC1::
	msgbox MahoganyTown_Text_AutoNPC1, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
MahoganyTown_Text_Sign1:
	.string "MAHOGANY TOWN\n"
	.string "Welcome to the Home of the Ninja$"

MahoganyTown_Text_GymSignAuto:
	.string "MAHOGANY TOWN POKéMON GYM\n"
	.string "LEADER: PRYCE - Master of ICE!$"

MahoganyTown_Text_AutoNPC1:
	.string "Shh! Mahogany Town was once a\n"
	.string "secret training ground for ninjas!\p"
	.string "Pryce's icy resolve has endured\n"
	.string "for decades.$"

