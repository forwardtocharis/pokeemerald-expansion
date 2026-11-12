Route215_MapScripts::
	.byte 0

Route215_EventScript_RouteSign::
	msgbox Route215_Text_Sign1, MSGBOX_SIGN
	end

Route215_EventScript_StarkMountainHeatran::
	lock
	goto_if_set FLAG_DEFEATED_HEATRAN, Route215_EventScript_HeatranPeaceful
	msgbox Route215_Text_StarkMountainDescription, MSGBOX_DEFAULT
	msgbox Route215_Text_InspectHeatranPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route215_EventScript_StarkMountainLeave
	msgbox Route215_Text_HeatranApproaches, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	delay 20
	playmoncry SPECIES_HEATRAN, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	setwildbattle SPECIES_HEATRAN, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route215_EventScript_DefeatedHeatran
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, Route215_EventScript_CaughtHeatran
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route215_EventScript_RanFromHeatran
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route215_EventScript_RanFromHeatran
	release
	end

Route215_EventScript_CaughtHeatran::
	setflag FLAG_DEFEATED_HEATRAN
	msgbox Route215_Text_HeatranCalm, MSGBOX_DEFAULT
	release
	end

Route215_EventScript_DefeatedHeatran::
	setflag FLAG_DEFEATED_HEATRAN
	msgbox Route215_Text_HeatranVanished, MSGBOX_DEFAULT
	release
	end

Route215_EventScript_RanFromHeatran::
	msgbox Route215_Text_HeatranFlewOff, MSGBOX_DEFAULT
	release
	end

Route215_EventScript_HeatranPeaceful::
	msgbox Route215_Text_HeatranPeaceful, MSGBOX_SIGN
	end

Route215_EventScript_StarkMountainLeave::
	release
	end

@ === BEGIN GENERATED EVENTS ===

Route215_EventScript_Trainer1::
	trainerbattle_single TRAINER_ISAIAH_1, Route215_Text_Trainer1Intro, Route215_Text_Trainer1Defeat
	msgbox Route215_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route215_EventScript_Trainer2::
	trainerbattle_single TRAINER_TERRY, Route215_Text_Trainer2Intro, Route215_Text_Trainer2Defeat
	msgbox Route215_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route215_Text_Sign1:
	.string "Route 215\n"
	.string "West to Route 210, East to\p"
	.string "Veilstone City.$"

Route215_Text_StarkMountainDescription:
	.string "A rugged trail winds northeast\n"
	.string "through intense thermal vents\p"
	.string "toward Stark Mountain.\n"
	.string "Deep in the volcanic cavern rests\p"
	.string "the incandescent Magma Stone\n"
	.string "altar.$"

Route215_Text_InspectHeatranPrompt:
	.string "Would you like to approach the\n"
	.string "searing volcanic chamber?$"

Route215_Text_HeatranApproaches:
	.string "Boiling magma surges up from the\n"
	.string "depths!\p"
	.string "Heatran erupts from the molten\n"
	.string "rock with intense fury!$"

Route215_Text_HeatranCalm:
	.string "Heatran's boiling magma cooled and\n"
	.string "it yielded with respect!$"

Route215_Text_HeatranVanished:
	.string "Heatran sank back into the molten\n"
	.string "crust of the mountain...$"

Route215_Text_HeatranFlewOff:
	.string "Heatran burrowed through the\n"
	.string "volcanic cavern walls and\p"
	.string "vanished!$"

Route215_Text_HeatranPeaceful:
	.string "The magma chambers of Stark\n"
	.string "Mountain rumble peacefully in the\p"
	.string "deep earth.$"

Route215_Text_Trainer1Intro:
	.string "Our eyes met on Route 215! Let's\n"
	.string "battle!$"

Route215_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route215_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route215_Text_Trainer2Intro:
	.string "Our eyes met on Route 215! Let's\n"
	.string "battle!$"

Route215_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route215_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

