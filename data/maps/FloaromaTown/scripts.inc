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

FloaromaTown_Text_Sign1:
	.string "Floaroma Town"
	.string "The Blooming, Beautiful Town of Fragrance."

FloaromaMeadow_Text_Sign:
	.string "Floaroma Meadow"
	.string "A lush field carpeted with vivid Gracidea blooms."

FloaromaTown_Text_MeadowDescription:
	.string "A hidden path leads north into Floaroma Meadow."
	.string "The air is sweet with the scent of blooming Gracidea flowers."

FloaromaTown_Text_InspectShayminPrompt:
	.string "Would you like to offer your gratitude to the meadow?"

FloaromaTown_Text_ShayminApproaches:
	.string "Gracidea petals burst into vibrant color across the meadow!"
	.string "The Gratitude Pokémon Shaymin scurries out playfully from the flowers!"

FloaromaTown_Text_ShayminCalm:
	.string "Shaymin chirped happily and nestled affectionately in your arms!"

FloaromaTown_Text_ShayminVanished:
	.string "Shaymin vanished into the sea of sweet-smelling flowers..."

FloaromaTown_Text_ShayminFlewOff:
	.string "Shaymin scampered joyfully away through the tall grass!"

FloaromaTown_Text_ShayminPeaceful:
	.string "The Gracidea blossoms sway peacefully in the gentle breeze."

