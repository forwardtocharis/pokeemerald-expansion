CinnabarIsland_MapScripts::
	.byte 0

CinnabarIsland_EventScript_IslandSign::
	msgbox CinnabarIsland_Text_Sign1, MSGBOX_SIGN
	end

CinnabarIsland_EventScript_PokemonLabSign::
	msgbox CinnabarIsland_Text_Sign2, MSGBOX_SIGN
	end

CinnabarIsland_EventScript_GymSign::
	msgbox CinnabarIsland_Text_Sign3, MSGBOX_SIGN
	end

CinnabarIsland_EventScript_OldMan::
	msgbox CinnabarIsland_Text_BlaineLivedHereDecades, MSGBOX_NPC
	end

CinnabarIsland_EventScript_Woman::
	msgbox CinnabarIsland_Text_ScientistsInBurnedBuilding, MSGBOX_NPC
	end
CinnabarIsland_Text_Sign1:
	.string "CinnabarIsland$"

CinnabarIsland_Text_Sign2:
	.string "CinnabarIsland$"

CinnabarIsland_Text_Sign3:
	.string "CinnabarIsland$"

CinnabarIsland_Text_Sign4:
	.string "CinnabarIsland$"

CinnabarIsland_Text_BlaineLivedHereDecades:
	.string "CINNABAR GYM's BLAINE is an eccentric\n"
	.string "man who has lived here for decades.$"

CinnabarIsland_Text_ScientistsInBurnedBuilding:
	.string "Scientists conduct experiments in\n"
	.string "the burned-out building.$"

