OlivineCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OlivineCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

OlivineCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_OLIVINE_CITY
	end

OlivineCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	release
	end

OlivineCity_PokemonCenter_1F_EventScript_Guest::
	msgbox OlivineCity_PokemonCenter_1F_Text_Guest, MSGBOX_NPC
	end
OlivineCity_PokemonCenter_1F_Text_Guest:
	.string "Resting at the OLIVINE CITY\n"
	.string "Pokémon Center keeps your team in\p"
	.string "top form!\n"
	.string "The PC by the counter connects to\p"
	.string "every region's storage network.$"

