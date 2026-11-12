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

Route215_EventScript_Trainer3::
	trainerbattle_single TRAINER_DUSTY_2, Route215_Text_Trainer3Intro, Route215_Text_Trainer3Defeat
	msgbox Route215_Text_Trainer3Post, MSGBOX_AUTOCLOSE
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
	.string "Hold up on Route215! My Pokémon\n"
	.string "are itching for a match!$"

Route215_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route215_Text_Trainer1Post:
	.string "Exploring every corner of Route215\n"
	.string "always turns up new surprises!$"

Route215_Text_Trainer2Intro:
	.string "I've been training on Route215 to\n"
	.string "challenge the Gym Leaders!$"

Route215_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route215_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route215_Text_Trainer3Intro:
	.string "CAMPER: Travelling across\n"
	.string "Route215? Show me your team's\p"
	.string "synergy!$"

Route215_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route215_Text_Trainer3Post:
	.string "I've been camping out waiting for\n"
	.string "a worthy challenger!$"

