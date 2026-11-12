PokemonLeague_BrunosRoom_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_BrunosRoom_OnResume
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_BrunosRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_BrunosRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_BrunosRoom_OnFrame
	.byte 0

PokemonLeague_BrunosRoom_OnResume::
	setvar VAR_0x8004, 1
	call PokemonLeague_EventScript_DoLightingEffect
	end

PokemonLeague_BrunosRoom_OnLoad::
	call_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_SetDoorOpen
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 2, PokemonLeague_BrunosRoom_EventScript_CloseEntry
	end

PokemonLeague_BrunosRoom_EventScript_CloseEntry::
	call PokemonLeague_EventScript_CloseEntry
	return

PokemonLeague_BrunosRoom_EventScript_SetDoorOpen::
	call PokemonLeague_EventScript_SetDoorOpen
	return

PokemonLeague_BrunosRoom_OnWarp::
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth
	.2byte 0

PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

PokemonLeague_BrunosRoom_OnFrame::
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 1, PokemonLeague_BrunosRoom_EventScript_EnterRoom
	.2byte 0

PokemonLeague_BrunosRoom_EventScript_EnterRoom::
	lockall
	call PokemonLeague_EventScript_EnterRoom
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 2
	releaseall
	end

PokemonLeague_BrunosRoom_EventScript_Bruno::
	lock
	faceplayer
	goto_if_eq VAR_CURRENT_REGION, 2, PokemonLeague_BrunosRoom_EventScript_KogaJohto
	goto_if_eq VAR_CURRENT_REGION, 3, PokemonLeague_BrunosRoom_EventScript_Bertha
	famechecker FAMECHECKER_BRUNO, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_PostBattle
	famechecker FAMECHECKER_BRUNO, 0
	famechecker FAMECHECKER_BRUNO, 1
	call_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_Intro
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_RematchIntro
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	call_if_unset FLAG_IS_CHAMPION, PokemonLeague_BrunosRoom_EventScript_Battle
	call_if_set FLAG_IS_CHAMPION, PokemonLeague_BrunosRoom_EventScript_Rematch
	clearflag FLAG_TEMP_5
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno
	end

PokemonLeague_BrunosRoom_EventScript_KogaJohto::
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_KogaJohtoPostBattle
	msgbox PokemonLeague_BrunosRoom_Text_KogaJohtoIntro
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_ELITE_FOUR_KOGA_JOHTO, PokemonLeague_BrunosRoom_Text_KogaJohtoDefeat
	clearflag FLAG_TEMP_5
	setflag FLAG_DEFEATED_BRUNO
	call PokemonLeague_EventScript_OpenDoor
	msgbox PokemonLeague_BrunosRoom_Text_KogaJohtoPostBattle
	release
	end

PokemonLeague_BrunosRoom_EventScript_KogaJohtoPostBattle::
	msgbox PokemonLeague_BrunosRoom_Text_KogaJohtoPostBattle
	release
	end

PokemonLeague_BrunosRoom_EventScript_Bertha::
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_BerthaPostBattle
	msgbox PokemonLeague_BrunosRoom_Text_BerthaIntro
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BERTHA, PokemonLeague_BrunosRoom_Text_BerthaDefeat
	clearflag FLAG_TEMP_5
	setflag FLAG_DEFEATED_BRUNO
	call PokemonLeague_EventScript_OpenDoor
	msgbox PokemonLeague_BrunosRoom_Text_BerthaPostBattle
	release
	end

PokemonLeague_BrunosRoom_EventScript_BerthaPostBattle::
	msgbox PokemonLeague_BrunosRoom_Text_BerthaPostBattle
	release
	end

PokemonLeague_BrunosRoom_EventScript_Intro::
	msgbox PokemonLeague_BrunosRoom_Text_Intro
	return

PokemonLeague_BrunosRoom_EventScript_RematchIntro::
	msgbox PokemonLeague_BrunosRoom_Text_RematchIntro
	return

PokemonLeague_BrunosRoom_EventScript_Battle::
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO, PokemonLeague_BrunosRoom_Text_Defeat
	return

PokemonLeague_BrunosRoom_EventScript_Rematch::
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO_2, PokemonLeague_BrunosRoom_Text_Defeat
	return

PokemonLeague_BrunosRoom_EventScript_PostBattle::
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
	call_if_eq VAR_FACING, DIR_SOUTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
	call_if_eq VAR_FACING, DIR_WEST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
	call_if_eq VAR_FACING, DIR_EAST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
	release
	end

PokemonLeague_BrunosRoom_EventScript_DefeatedBruno::
	setflag FLAG_DEFEATED_BRUNO
	call PokemonLeague_EventScript_OpenDoor
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
	call_if_eq VAR_FACING, DIR_SOUTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
	call_if_eq VAR_FACING, DIR_WEST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
	call_if_eq VAR_FACING, DIR_EAST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
	release
	end

PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft::
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight::
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown::
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

PokemonLeague_BrunosRoom_Text_Intro::
	.string "I am BRUNO of the ELITE FOUR!\p"
	.string "Through rigorous training, people\n"
	.string "and POKéMON can become stronger\l"
	.string "without limit.\p"
	.string "I've lived and trained with my\n"
	.string "fighting POKéMON!\l"
	.string "And that will never change!\p"
	.string "{PLAYER}!\p"
	.string "We will grind you down with our\n"
	.string "superior power!\p"
	.string "Hoo hah!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_BrunosRoom_Text_RematchIntro::
	.string "I am BRUNO of the ELITE FOUR!\p"
	.string "Through rigorous training, people\n"
	.string "and POKéMON can become stronger\l"
	.string "without limit.\p"
	.string "I've lived and trained with my\n"
	.string "fighting POKéMON!\l"
	.string "And that will never change!\p"
	.string "{PLAYER}!\p"
	.string "We will grind you down with our\n"
	.string "superior power!\p"
	.string "Hoo hah!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_BrunosRoom_Text_Defeat::
	.string "Why?\n"
	.string "How could I lose?$"

PokemonLeague_BrunosRoom_Text_PostBattle::
	.string "My job is done.\n"
	.string "Go face your next challenge.$"

PokemonLeague_BrunosRoom_Text_KogaJohtoIntro::
	.string "Fwahahaha!\p"
	.string "I am KOGA of the JOHTO ELITE FOUR.\p"
	.string "I live in shadows—a ninja!\n"
	.string "My intricate style will confound\l"
	.string "and destroy you!\p"
	.string "Fell the despair of POISON and\n"
	.string "ninjutsu mastery!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_BrunosRoom_Text_KogaJohtoDefeat::
	.string "Ah!\n"
	.string "You have proven your worth!$"

PokemonLeague_BrunosRoom_Text_KogaJohtoPostBattle::
	.string "I subjected you to everything I\n"
	.string "could muster, yet I failed.\p"
	.string "Go on to the next room, where\n"
	.string "a fierce rival turned ELITE FOUR\l"
	.string "challenger awaits you!$"

PokemonLeague_BrunosRoom_Text_BerthaIntro::
	.string "Well, well! Look at what an adorable\n"
	.string "young TRAINER we have here!\p"
	.string "I'm BERTHA of the SINNOH ELITE FOUR.\n"
	.string "I favor GROUND-type POKéMON.\p"
	.string "Well then, would you show this old\n"
	.string "lady how much you've learned?{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_BrunosRoom_Text_BerthaDefeat::
	.string "You're quite something, youngster!\n"
	.string "I like how you and your POKéMON\l"
	.string "work so hard together.$"

PokemonLeague_BrunosRoom_Text_BerthaPostBattle::
	.string "Ahahaha! You and your cute POKéMON\n"
	.string "went all out!\p"
	.string "The next chamber is FLINT's.\n"
	.string "Give it everything you've got!$"


