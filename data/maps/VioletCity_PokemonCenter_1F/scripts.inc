VioletCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VioletCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

VioletCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_VIOLET_CITY
	end

VioletCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	release
	end

VioletCity_PokemonCenter_1F_EventScript_Guest::
	msgbox VioletCity_PokemonCenter_1F_Text_Guest, MSGBOX_NPC
	end
VioletCity_PokemonCenter_1F_Text_Guest:
	.string "Resting at the VIOLET CITY Pokémon\n"
	.string "Center keeps your team in top\p"
	.string "form!\n"
	.string "The PC by the counter connects to\p"
	.string "every region's storage network.$"

