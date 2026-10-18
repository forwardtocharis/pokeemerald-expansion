PalletTown_MapScripts::
	.byte 0

PalletTown_EventScript_OaksLabSign::
	msgbox PalletTown_Text_Sign1, MSGBOX_SIGN
	end

PalletTown_EventScript_PlayersHouseSign::
	msgbox PalletTown_Text_Sign2, MSGBOX_SIGN
	end

PalletTown_EventScript_RivalsHouseSign::
	msgbox PalletTown_Text_Sign3, MSGBOX_SIGN
	end

PalletTown_EventScript_TownSign::
	msgbox PalletTown_Text_Sign4, MSGBOX_SIGN
	end

PalletTown_EventScript_TrainerTips::
	msgbox PalletTown_Text_Sign5, MSGBOX_SIGN
	end

PalletTown_EventScript_FatMan::
	msgbox PalletTown_Text_RaisingPokemonToo, MSGBOX_NPC
	end

PalletTown_EventScript_SignLady::
	msgbox PalletTown_Text_TechnologyIsIncredible, MSGBOX_NPC
	end
PalletTown_Text_Sign1:
	.string "PalletTown$"

PalletTown_Text_Sign2:
	.string "PalletTown$"

PalletTown_Text_Sign3:
	.string "PalletTown$"

PalletTown_Text_Sign4:
	.string "PalletTown$"

PalletTown_Text_Sign5:
	.string "PalletTown$"

PalletTown_Text_RaisingPokemonToo:
	.string "I'm raising POKéMON too!\p"
	.string "When they get strong, they can\n"
	.string "protect me!$"

PalletTown_Text_TechnologyIsIncredible:
	.string "Technology is incredible!\p"
	.string "You can now store and recall items\n"
	.string "and POKéMON as data via PC!$"

