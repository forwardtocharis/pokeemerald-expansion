TwinleafTown_MapScripts::
	.byte 0

TwinleafTown_EventScript_TownSign::
	msgbox TwinleafTown_Text_Sign1, MSGBOX_SIGN
	end

TwinleafTown_EventScript_RivalHouseSign::
	msgbox TwinleafTown_Text_Sign2, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

TwinleafTown_EventScript_AutoNPC1::
	msgbox TwinleafTown_Text_AutoNPC1, MSGBOX_NPC
	end

TwinleafTown_EventScript_AutoNPC2::
	msgbox TwinleafTown_Text_AutoNPC2, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
TwinleafTown_Text_Sign1:
	.string "TWINLEAF TOWN\n"
	.string "Fresh and Free!$"

TwinleafTown_Text_Sign2:
	.string "TWINLEAF TOWN\n"
	.string "Fresh and Free!$"

TwinleafTown_Text_AutoNPC1:
	.string "Technology is incredible! Now\n"
	.string "Trainers can sail from Sinnoh to\p"
	.string "three other regions!$"

TwinleafTown_Text_AutoNPC2:
	.string "Twinleaf Town is quiet, crisp, and\n"
	.string "full of fresh mountain air.\p"
	.string "Stop by home whenever your Pokémon\n"
	.string "need a rest!$"

