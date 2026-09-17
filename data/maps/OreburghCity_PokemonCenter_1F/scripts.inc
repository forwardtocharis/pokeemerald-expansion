OreburghCity_PokemonCenter_1F_MapScripts::
	.byte 0

OreburghCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	release
	end
