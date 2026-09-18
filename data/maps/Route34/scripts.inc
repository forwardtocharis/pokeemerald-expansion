Route34_MapScripts::
	.byte 0

Route34_EventScript_RouteSign::
	msgbox Route34_Text_Sign1, MSGBOX_SIGN
	end

Route34_EventScript_IlexShrine::
	lock
	goto_if_set FLAG_DEFEATED_CELEBI, Route34_EventScript_ShrinePeaceful
	msgbox Route34_Text_IlexShrineDescription, MSGBOX_DEFAULT
	msgbox Route34_Text_OfferPrayerPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route34_EventScript_ShrineLeave
	msgbox Route34_Text_OfferedPrayer, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	delay 20
	playse SE_M_GRASSWHISTLE
	waitse
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 30
	setwildbattle SPECIES_CELEBI, 30
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route34_EventScript_DefeatedCelebi
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, Route34_EventScript_CaughtCelebi
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route34_EventScript_RanFromCelebi
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route34_EventScript_RanFromCelebi
	release
	end

Route34_EventScript_CaughtCelebi::
	setflag FLAG_DEFEATED_CELEBI
	msgbox Route34_Text_CelebiBlessedForest, MSGBOX_DEFAULT
	release
	end

Route34_EventScript_DefeatedCelebi::
	setflag FLAG_DEFEATED_CELEBI
	msgbox Route34_Text_CelebiFlewThroughTime, MSGBOX_DEFAULT
	release
	end

Route34_EventScript_RanFromCelebi::
	msgbox Route34_Text_CelebiVanished, MSGBOX_DEFAULT
	release
	end

Route34_EventScript_ShrinePeaceful::
	msgbox Route34_Text_ShrinePeaceful, MSGBOX_SIGN
	end

Route34_EventScript_ShrineLeave::
	release
	end


Route34_Text_Sign1:
	.string "Route34"

Route34_Text_IlexShrineDescription:
	.string "An ancient wooden shrine weathered by centuries."
	.string "It honors the guardian spirit of the forest."

Route34_Text_OfferPrayerPrompt:
	.string "A soothing breeze whispers through the trees."
	.string "Would you like to offer a prayer at the shrine?"

Route34_Text_OfferedPrayer:
	.string "{PLAYER} offered a sincere prayer at the shrine..."
	.string "A brilliant emerald light illuminated the forest canopy,"
	.string "and the mythical voice of the forest appeared!"

Route34_Text_CelebiBlessedForest:
	.string "CELEBI touched {PLAYER}'s hand with a warm smile"
	.string "before settling peacefully into the POKé BALL."

Route34_Text_CelebiFlewThroughTime:
	.string "CELEBI dissolved into sparkling verdant light,"
	.string "vanishing into the streams of time..."

Route34_Text_CelebiVanished:
	.string "CELEBI zipped back into the dense green canopy..."

Route34_Text_ShrinePeaceful:
	.string "The forest shrine rests quietly in the gentle breeze."

