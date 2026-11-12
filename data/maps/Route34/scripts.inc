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

@ === BEGIN GENERATED EVENTS ===

Route34_EventScript_Trainer1::
	trainerbattle_single TRAINER_WILTON_1, Route34_Text_Trainer1Intro, Route34_Text_Trainer1Defeat
	msgbox Route34_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route34_EventScript_Trainer2::
	trainerbattle_single TRAINER_STEVE_1, Route34_Text_Trainer2Intro, Route34_Text_Trainer2Defeat
	msgbox Route34_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route34_Text_Sign1:
	.string "ROUTE 34\n"
	.string "AZALEA TOWN - GOLDENROD CITY$"

Route34_Text_IlexShrineDescription:
	.string "An ancient wooden shrine weathered\n"
	.string "by centuries.\p"
	.string "It honors the guardian spirit of\n"
	.string "the forest.$"

Route34_Text_OfferPrayerPrompt:
	.string "A soothing breeze whispers through\n"
	.string "the trees.\p"
	.string "Would you like to offer a prayer\n"
	.string "at the shrine?$"

Route34_Text_OfferedPrayer:
	.string "{PLAYER} offered a sincere prayer at the shrine...\n"
	.string "A brilliant emerald light\p"
	.string "illuminated the forest canopy,\n"
	.string "and the mythical voice of the\p"
	.string "forest appeared!$"

Route34_Text_CelebiBlessedForest:
	.string "CELEBI touched {PLAYER}'s hand with a warm smile\n"
	.string "before settling peacefully into\p"
	.string "the POKé BALL.$"

Route34_Text_CelebiFlewThroughTime:
	.string "CELEBI dissolved into sparkling\n"
	.string "verdant light,\p"
	.string "vanishing into the streams of\n"
	.string "time...$"

Route34_Text_CelebiVanished:
	.string "CELEBI zipped back into the dense\n"
	.string "green canopy...$"

Route34_Text_ShrinePeaceful:
	.string "The forest shrine rests quietly in\n"
	.string "the gentle breeze.$"

Route34_Text_Trainer1Intro:
	.string "Our eyes met on Route 34! Let's\n"
	.string "battle!$"

Route34_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route34_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route34_Text_Trainer2Intro:
	.string "Our eyes met on Route 34! Let's\n"
	.string "battle!$"

Route34_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route34_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

