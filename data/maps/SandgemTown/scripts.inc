SandgemTown_MapScripts::
	.byte 0

SandgemTown_EventScript_TownSign::
	msgbox SandgemTown_Text_Sign1, MSGBOX_SIGN
	end

SandgemTown_EventScript_LabSign::
	msgbox SandgemTown_Text_Sign2, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

SandgemTown_EventScript_AutoNPC1::
	msgbox SandgemTown_Text_AutoNPC1, MSGBOX_NPC
	end

SandgemTown_EventScript_AutoNPC2::
	msgbox SandgemTown_Text_AutoNPC2, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
SandgemTown_Text_Sign1:
	.string "SANDGEM TOWN\n"
	.string "Town of Sandyuestra!$"

SandgemTown_Text_Sign2:
	.string "SANDGEM TOWN\n"
	.string "Town of Sandyuestra!$"

SandgemTown_Text_AutoNPC1:
	.string "Professor Rowan's Pokémon Research\n"
	.string "Lab sits right here in Sandgem\p"
	.string "Town!\n"
	.string "He studies Pokémon evolution\p"
	.string "across every region.$"

SandgemTown_Text_AutoNPC2:
	.string "You can hear gentle waves brushing\n"
	.string "the southern beach from town.$"

