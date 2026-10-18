LavenderTown_MapScripts::
	.byte 0

LavenderTown_EventScript_SilphScopeNotice::
	msgbox LavenderTown_Text_Sign1, MSGBOX_SIGN
	end

LavenderTown_EventScript_TownSign::
	msgbox LavenderTown_Text_Sign2, MSGBOX_SIGN
	end

LavenderTown_EventScript_PokemonTowerSign::
	msgbox LavenderTown_Text_Sign3, MSGBOX_SIGN
	end

LavenderTown_EventScript_VolunteerHouseSign::
	msgbox LavenderTown_Text_Sign4, MSGBOX_SIGN
	end

LavenderTown_EventScript_Boy::
	msgbox LavenderTown_Text_DoYouBelieveInGhosts, MSGBOX_NPC
	end

LavenderTown_EventScript_LittleGirl::
	msgbox LavenderTown_Text_GraveSiteOfPokemon, MSGBOX_NPC
	end

LavenderTown_EventScript_WorkerM::
	msgbox LavenderTown_Text_TowerBuiltInMemory, MSGBOX_NPC
	end
LavenderTown_Text_Sign1:
	.string "LavenderTown$"

LavenderTown_Text_Sign2:
	.string "LavenderTown$"

LavenderTown_Text_Sign3:
	.string "LavenderTown$"

LavenderTown_Text_Sign4:
	.string "LavenderTown$"

LavenderTown_Text_DoYouBelieveInGhosts:
	.string "Do you believe in GHOSTS?\n"
	.string "I thought I saw one in the TOWER.$"

LavenderTown_Text_GraveSiteOfPokemon:
	.string "This town is known as the grave\n"
	.string "site of POKéMON.$"

LavenderTown_Text_TowerBuiltInMemory:
	.string "POKéMON TOWER was built in memory\n"
	.string "of POKéMON that have died.$"

