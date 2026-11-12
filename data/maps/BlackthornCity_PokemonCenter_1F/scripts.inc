BlackthornCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BlackthornCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

BlackthornCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_BLACKTHORN_CITY
	end

BlackthornCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	release
	end

BlackthornCity_PokemonCenter_1F_EventScript_Guest::
	msgbox BlackthornCity_PokemonCenter_1F_Text_Guest, MSGBOX_NPC
	end
BlackthornCity_PokemonCenter_1F_Text_Guest:
	.string "Resting at the BLACKTHORN CITY\n"
	.string "Pokémon Center keeps your team in\p"
	.string "top form!\n"
	.string "The PC by the counter connects to\p"
	.string "every region's storage network.$"

