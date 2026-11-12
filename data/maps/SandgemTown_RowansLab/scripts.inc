SandgemTown_RowansLab_MapScripts::
	.byte 0

SandgemTown_RowansLab_EventScript_Prof::
	lock
	faceplayer
	msgbox SandgemTown_RowansLab_Text_ProfSpeech, MSGBOX_DEFAULT
	release
	end

SandgemTown_RowansLab_EventScript_Aide::
	msgbox SandgemTown_RowansLab_Text_AideSpeech, MSGBOX_NPC
	end
SandgemTown_RowansLab_Text_ProfSpeech:
	.string "PROF. ROWAN: Hmm! Let me take a good look at your Pokémon, {PLAYER}.\n"
	.string "Their evolution and trust in you\p"
	.string "speak volumes about your skill as\n"
	.string "a Trainer!\p"
	.string "Travel every road in Sinnoh and\n"
	.string "test yourself against all eight\p"
	.string "Gym Leaders!$"

SandgemTown_RowansLab_Text_AideSpeech:
	.string "Professor Rowan studies why\n"
	.string "certain Pokémon evolve while\p"
	.string "others remain unchanged.\n"
	.string "Sandgem's Pokémon Center and Poké\p"
	.string "Mart right outside are always open\n"
	.string "to Trainers!$"

