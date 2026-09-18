OneIsland_Harbor_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, OneIsland_Harbor_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_Harbor_OnFrame
	.byte 0

OneIsland_Harbor_OnWarp::
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1, OneIsland_Harbor_EventScript_TurnPlayerNorth
	.2byte 0

OneIsland_Harbor_EventScript_TurnPlayerNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

OneIsland_Harbor_OnFrame::
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1, OneIsland_Harbor_EventScript_PlayerEnterHarborFirstTime
	.2byte 0

OneIsland_Harbor_EventScript_PlayerEnterHarborFirstTime::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_PLAYER, OneIsland_Harbor_Movement_PlayerExitHarbor
	waitmovement 0
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 2
	warp MAP_ONE_ISLAND, 12, 18
	waitstate
	releaseall
	end

OneIsland_Harbor_Movement_PlayerExitHarbor::
	walk_up
	walk_up
	walk_up
	step_end

OneIsland_Harbor_EventScript_Sailor::
	lock
	faceplayer
	msgbox OneIsland_Harbor_Text_SailToVermilionPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, OneIsland_Harbor_EventScript_SailToVermilion
	msgbox OneIsland_Harbor_Text_SailorStay, MSGBOX_DEFAULT
	release
	end

OneIsland_Harbor_EventScript_SailToVermilion::
	msgbox OneIsland_Harbor_Text_DepartingVermilion, MSGBOX_DEFAULT
	playse SE_SHIP
	waitse
	warp MAP_VERMILION_CITY, 31, 31
	waitstate
	release
	end

OneIsland_Harbor_Text_SailToVermilionPrompt:
	.string "Ahoy! Returning to VERMILION CITY\n"
	.string "on the Kanto mainland?$"

OneIsland_Harbor_Text_DepartingVermilion:
	.string "Aye aye! Setting sail for VERMILION CITY!$"

OneIsland_Harbor_Text_SailorStay:
	.string "Take your time exploring the island!$"

