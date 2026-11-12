SunyshoreCity_MapScripts::
	.byte 0

SunyshoreCity_EventScript_CitySign::
	msgbox SunyshoreCity_Text_Sign1, MSGBOX_SIGN
	end

SunyshoreCity_EventScript_GymSign::
	msgbox SunyshoreCity_Text_Sign2, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

SunyshoreCity_EventScript_AutoNPC1::
	msgbox SunyshoreCity_Text_AutoNPC1, MSGBOX_NPC
	end

SunyshoreCity_EventScript_AutoNPC2::
	msgbox SunyshoreCity_Text_AutoNPC2, MSGBOX_NPC
	end

SunyshoreCity_EventScript_SinnohLeagueGatekeeper::
	lock
	faceplayer
	goto_if_lt VAR_SINNOH_BADGES, 8, SunyshoreCity_EventScript_SinnohLeagueNeedBadges
	msgbox SunyshoreCity_Text_SinnohLeaguePrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SunyshoreCity_EventScript_EnterSinnohLeague
	release
	end

SunyshoreCity_EventScript_SinnohLeagueNeedBadges::
	msgbox SunyshoreCity_Text_SinnohLeagueNeedBadges, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_EventScript_EnterSinnohLeague::
	setvar VAR_CURRENT_REGION, 3
	clearflag FLAG_DEFEATED_LORELEI
	clearflag FLAG_DEFEATED_BRUNO
	clearflag FLAG_DEFEATED_AGATHA
	clearflag FLAG_DEFEATED_LANCE
	clearflag FLAG_DEFEATED_CHAMP
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 0
	msgbox SunyshoreCity_Text_SinnohLeagueGoodLuck, MSGBOX_DEFAULT
	closemessage
	warp MAP_POKEMON_LEAGUE_LORELEIS_ROOM, 6, 12
	waitstate
	release
	end

@ === END GENERATED EVENTS ===
SunyshoreCity_Text_Sign1:
	.string "SUNYSHORE CITY\n"
	.string "Solar Powered!$"

SunyshoreCity_Text_Sign2:
	.string "SUNYSHORE CITY\n"
	.string "Solar Powered!$"

SunyshoreCity_Text_AutoNPC1:
	.string "Solar walkways and ocean breezes\n"
	.string "power Sunyshore City!\p"
	.string "Volkner awaits worthy challengers\n"
	.string "for Sinnoh's final Gym Badge!$"

SunyshoreCity_Text_AutoNPC2:
	.string "Looking out over the eastern sea\n"
	.string "makes every step of the journey\p"
	.string "worthwhile!$"

SunyshoreCity_Text_SinnohLeagueNeedBadges:
	.string "Welcome to the Sinnoh Pokémon\n"
	.string "League Gate!\p"
	.string "Only Trainers who hold all 8\n"
	.string "Sinnoh Gym Badges may challenge\p"
	.string "Aaron, Bertha, Flint, Lucian, and\n"
	.string "Champion Cynthia!$"

SunyshoreCity_Text_SinnohLeaguePrompt:
	.string "You possess all 8 Sinnoh Gym\n"
	.string "Badges!\p"
	.string "Beyond this gate await the Sinnoh\n"
	.string "Elite Four (Aaron, Bertha, Flint,\p"
	.string "Lucian) and Champion Cynthia.\n"
	.string "Enter the Sinnoh Pokémon League\p"
	.string "now?$"

SunyshoreCity_Text_SinnohLeagueGoodLuck:
	.string "Step forth into the Sinnoh Pokémon\n"
	.string "League! Give it everything you\p"
	.string "have!$"

