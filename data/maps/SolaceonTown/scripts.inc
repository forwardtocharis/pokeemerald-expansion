SolaceonTown_MapScripts::
	.byte 0

SolaceonTown_EventScript_TownSign::
	msgbox SolaceonTown_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

SolaceonTown_EventScript_AutoNPC1::
	msgbox SolaceonTown_Text_AutoNPC1, MSGBOX_NPC
	end

SolaceonTown_EventScript_AutoNPC2::
	msgbox SolaceonTown_Text_AutoNPC2, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
SolaceonTown_Text_Sign1:
	.string "SOLACEON TOWN\n"
	.string "Free of Worry!$"

SolaceonTown_Text_AutoNPC1:
	.string "Solaceon's mild climate makes it a\n"
	.string "favorite resting spot for raised\p"
	.string "Pokémon!$"

SolaceonTown_Text_AutoNPC2:
	.string "Trainers passing between Hearthome\n"
	.string "and Veilstone always rest at our\p"
	.string "Center.$"

