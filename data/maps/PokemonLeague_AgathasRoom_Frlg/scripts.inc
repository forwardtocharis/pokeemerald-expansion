PokemonLeague_AgathasRoom_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_AgathasRoom_OnResume
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_AgathasRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_AgathasRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_AgathasRoom_OnFrame
	.byte 0

PokemonLeague_AgathasRoom_OnResume::
	setvar VAR_0x8004, 2
	call PokemonLeague_EventScript_DoLightingEffect
	end

PokemonLeague_AgathasRoom_OnLoad::
	call_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_AgathasRoom_EventScript_SetDoorOpen
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 3, PokemonLeague_AgathasRoom_EventScript_CloseEntry
	end

PokemonLeague_AgathasRoom_EventScript_CloseEntry::
	call PokemonLeague_EventScript_CloseEntry
	return

PokemonLeague_AgathasRoom_EventScript_SetDoorOpen::
	call PokemonLeague_EventScript_SetDoorOpen
	return

PokemonLeague_AgathasRoom_OnWarp::
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_AgathasRoom_EventScript_TurnPlayerNorth
	.2byte 0

PokemonLeague_AgathasRoom_EventScript_TurnPlayerNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

PokemonLeague_AgathasRoom_OnFrame::
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 2, PokemonLeague_AgathasRoom_EventScript_EnterRoom
	.2byte 0

PokemonLeague_AgathasRoom_EventScript_EnterRoom::
	lockall
	call PokemonLeague_EventScript_EnterRoom
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 3
	releaseall
	end

PokemonLeague_AgathasRoom_EventScript_Agatha::
	lock
	faceplayer
	goto_if_eq VAR_CURRENT_REGION, 2, PokemonLeague_AgathasRoom_EventScript_Silver
	goto_if_eq VAR_CURRENT_REGION, 3, PokemonLeague_AgathasRoom_EventScript_Flint
	famechecker FAMECHECKER_AGATHA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	goto_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_AgathasRoom_EventScript_PostBattle
	famechecker FAMECHECKER_AGATHA, 0
	famechecker FAMECHECKER_AGATHA, 4
	famechecker FAMECHECKER_OAK, 4
	call_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_AgathasRoom_EventScript_Intro
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_AgathasRoom_EventScript_RematchIntro
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	call_if_unset FLAG_IS_CHAMPION, PokemonLeague_AgathasRoom_EventScript_Battle
	call_if_set FLAG_IS_CHAMPION, PokemonLeague_AgathasRoom_EventScript_Rematch
	clearflag FLAG_TEMP_5
	goto PokemonLeague_AgathasRoom_EventScript_DefeatedAgatha
	end

PokemonLeague_AgathasRoom_EventScript_Silver::
	goto_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_AgathasRoom_EventScript_SilverPostBattle
	msgbox PokemonLeague_AgathasRoom_Text_SilverIntro
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_ELITE_FOUR_SILVER, PokemonLeague_AgathasRoom_Text_SilverDefeat
	clearflag FLAG_TEMP_5
	setflag FLAG_DEFEATED_AGATHA
	call PokemonLeague_EventScript_OpenDoor
	msgbox PokemonLeague_AgathasRoom_Text_SilverPostBattle
	release
	end

PokemonLeague_AgathasRoom_EventScript_SilverPostBattle::
	msgbox PokemonLeague_AgathasRoom_Text_SilverPostBattle
	release
	end

PokemonLeague_AgathasRoom_EventScript_Flint::
	goto_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_AgathasRoom_EventScript_FlintPostBattle
	msgbox PokemonLeague_AgathasRoom_Text_FlintIntro
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_ELITE_FOUR_FLINT, PokemonLeague_AgathasRoom_Text_FlintDefeat
	clearflag FLAG_TEMP_5
	setflag FLAG_DEFEATED_AGATHA
	call PokemonLeague_EventScript_OpenDoor
	msgbox PokemonLeague_AgathasRoom_Text_FlintPostBattle
	release
	end

PokemonLeague_AgathasRoom_EventScript_FlintPostBattle::
	msgbox PokemonLeague_AgathasRoom_Text_FlintPostBattle
	release
	end

PokemonLeague_AgathasRoom_EventScript_Intro::
	msgbox PokemonLeague_AgathasRoom_Text_Intro
	return

PokemonLeague_AgathasRoom_EventScript_RematchIntro::
	msgbox PokemonLeague_AgathasRoom_Text_RematchIntro
	return

PokemonLeague_AgathasRoom_EventScript_Battle::
	trainerbattle_no_intro TRAINER_ELITE_FOUR_AGATHA, PokemonLeague_AgathasRoom_Text_Defeat
	return

PokemonLeague_AgathasRoom_EventScript_Rematch::
	trainerbattle_no_intro TRAINER_ELITE_FOUR_AGATHA_2, PokemonLeague_AgathasRoom_Text_Defeat
	return

PokemonLeague_AgathasRoom_EventScript_PostBattle::
	msgbox PokemonLeague_AgathasRoom_Text_PostBattle
	release
	end

PokemonLeague_AgathasRoom_EventScript_DefeatedAgatha::
	setflag FLAG_DEFEATED_AGATHA
	call PokemonLeague_EventScript_OpenDoor
	msgbox PokemonLeague_AgathasRoom_Text_PostBattle
	release
	end

PokemonLeague_AgathasRoom_Text_Intro::
	.string "I am AGATHA of the ELITE FOUR.\p"
	.string "I hear OAK's taken a lot of\n"
	.string "interest in you, child.\p"
	.string "That old duff was once tough and\n"
	.string "handsome.\p"
	.string "But that was decades ago.\n"
	.string "He's a shadow of his former self.\p"
	.string "Now he just wants to fiddle with\n"
	.string "his POKéDEX.\p"
	.string "He's wrong.\n"
	.string "POKéMON are for battling!\p"
	.string "{PLAYER}! I'll show you how a real\n"
	.string "TRAINER battles!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_AgathasRoom_Text_RematchIntro::
	.string "I am AGATHA of the ELITE FOUR.\p"
	.string "You're the child that OAK's taken\n"
	.string "under his wing, aren't you?\p"
	.string "That old duff was once tough and\n"
	.string "handsome.\p"
	.string "But that was decades ago.\n"
	.string "He's a shadow of his former self.\p"
	.string "Now he just wants to fiddle with\n"
	.string "his POKéDEX.\p"
	.string "He's wrong.\n"
	.string "POKéMON are for battling!\p"
	.string "{PLAYER}! I'll show you how a real\n"
	.string "TRAINER battles!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_AgathasRoom_Text_Defeat::
	.string "Oh, my!\n"
	.string "You're something special, child!$"

PokemonLeague_AgathasRoom_Text_PostBattle::
	.string "You win!\p"
	.string "I see what the old duff sees in\n"
	.string "you now.\p"
	.string "I have nothing else to say.\n"
	.string "Run along now, child!$"

PokemonLeague_AgathasRoom_Text_SilverIntro::
	.string "SILVER: …Hmph. So you made it.\p"
	.string "I used to think strength alone\n"
	.string "was all that mattered.\p"
	.string "LANCE and my POKéMON taught me\n"
	.string "what real trust looks like, and now\l"
	.string "I stand here in the JOHTO ELITE FOUR!\p"
	.string "Show me everything you've got,\n"
	.string "{PLAYER}!{PLAY_BGM}{MUS_RG_ENCOUNTER_RIVAL}$"

PokemonLeague_AgathasRoom_Text_SilverDefeat::
	.string "…Tch! Even with my POKéMON\n"
	.string "trusting me completely, you still\l"
	.string "came out on top!$"

PokemonLeague_AgathasRoom_Text_SilverPostBattle::
	.string "SILVER: Don't get cocky.\n"
	.string "I'm going to keep training with\l"
	.string "my partners until we're unbeatable.\p"
	.string "Go on. KAREN and LANCE are\n"
	.string "waiting ahead.$"

PokemonLeague_AgathasRoom_Text_FlintIntro::
	.string "There you are! I'm FLINT of the\n"
	.string "SINNOH ELITE FOUR!\p"
	.string "You know how battles are heated?\n"
	.string "I'm the guy who turns up the heat!\p"
	.string "Let our burning spirits clash\n"
	.string "at full blast!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_AgathasRoom_Text_FlintDefeat::
	.string "…! Even my white-hot team\n"
	.string "couldn't burn through your spirit!$"

PokemonLeague_AgathasRoom_Text_FlintPostBattle::
	.string "That was the best battle I've had\n"
	.string "in ages!\p"
	.string "Keep that fire burning and move on\n"
	.string "to LUCIAN's room!$"


