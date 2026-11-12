FloaromaTown_MapScripts::
	.byte 0

FloaromaTown_EventScript_TownSign::
	msgbox FloaromaTown_Text_Sign1, MSGBOX_SIGN
	end

FloaromaTown_EventScript_FloaromaMeadowShaymin::
	lock
	goto_if_set FLAG_DEFEATED_SHAYMIN, FloaromaTown_EventScript_ShayminPeaceful
	msgbox FloaromaTown_Text_MeadowDescription, MSGBOX_DEFAULT
	msgbox FloaromaTown_Text_InspectShayminPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FloaromaTown_EventScript_MeadowLeave
	msgbox FloaromaTown_Text_ShayminApproaches, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	delay 20
	playmoncry SPECIES_SHAYMIN, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	setwildbattle SPECIES_SHAYMIN, 30
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, FloaromaTown_EventScript_DefeatedShaymin
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, FloaromaTown_EventScript_CaughtShaymin
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, FloaromaTown_EventScript_RanFromShaymin
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, FloaromaTown_EventScript_RanFromShaymin
	release
	end

FloaromaTown_EventScript_CaughtShaymin::
	setflag FLAG_DEFEATED_SHAYMIN
	msgbox FloaromaTown_Text_ShayminCalm, MSGBOX_DEFAULT
	release
	end

FloaromaTown_EventScript_DefeatedShaymin::
	setflag FLAG_DEFEATED_SHAYMIN
	msgbox FloaromaTown_Text_ShayminVanished, MSGBOX_DEFAULT
	release
	end

FloaromaTown_EventScript_RanFromShaymin::
	msgbox FloaromaTown_Text_ShayminFlewOff, MSGBOX_DEFAULT
	release
	end

FloaromaTown_EventScript_ShayminPeaceful::
	msgbox FloaromaTown_Text_ShayminPeaceful, MSGBOX_SIGN
	end

FloaromaTown_EventScript_MeadowLeave::
	release
	end

@ === BEGIN GENERATED EVENTS ===

FloaromaTown_EventScript_AutoNPC1::
	msgbox FloaromaTown_Text_AutoNPC1, MSGBOX_NPC
	end

FloaromaTown_EventScript_AutoNPC2::
	msgbox FloaromaTown_Text_AutoNPC2, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
FloaromaTown_Text_Sign1:
	.string "Floaroma Town\n"
	.string "The Blooming, Beautiful Town of\p"
	.string "Fragrance.$"

FloaromaMeadow_Text_Sign:
	.string "Floaroma Meadow\n"
	.string "A lush field carpeted with vivid\p"
	.string "Gracidea blooms.$"

FloaromaTown_Text_MeadowDescription:
	.string "A hidden path leads north into\n"
	.string "Floaroma Meadow.\p"
	.string "The air is sweet with the scent of\n"
	.string "blooming Gracidea flowers.$"

FloaromaTown_Text_InspectShayminPrompt:
	.string "Would you like to offer your\n"
	.string "gratitude to the meadow?$"

FloaromaTown_Text_ShayminApproaches:
	.string "Gracidea petals burst into vibrant\n"
	.string "color across the meadow!\p"
	.string "The Gratitude Pokémon Shaymin\n"
	.string "scurries out playfully from the\p"
	.string "flowers!$"

FloaromaTown_Text_ShayminCalm:
	.string "Shaymin chirped happily and\n"
	.string "nestled affectionately in your\p"
	.string "arms!$"

FloaromaTown_Text_ShayminVanished:
	.string "Shaymin vanished into the sea of\n"
	.string "sweet-smelling flowers...$"

FloaromaTown_Text_ShayminFlewOff:
	.string "Shaymin scampered joyfully away\n"
	.string "through the tall grass!$"

FloaromaTown_Text_ShayminPeaceful:
	.string "The Gracidea blossoms sway\n"
	.string "peacefully in the gentle breeze.$"

FloaromaTown_Text_AutoNPC1:
	.string "Every breeze in Floaroma carries\n"
	.string "the sweet scent of blooming\p"
	.string "wildflowers!$"

FloaromaTown_Text_AutoNPC2:
	.string "People say mythical Pokémon visit\n"
	.string "Floaroma's flower meadows when\p"
	.string "hearts are grateful!$"

