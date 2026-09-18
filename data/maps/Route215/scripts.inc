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

Route215_Text_Sign1:
	.string "Route 215"
	.string "West to Route 210, East to Veilstone City."

Route215_Text_StarkMountainDescription:
	.string "A rugged trail winds northeast through intense thermal vents toward Stark Mountain."
	.string "Deep in the volcanic cavern rests the incandescent Magma Stone altar."

Route215_Text_InspectHeatranPrompt:
	.string "Would you like to approach the searing volcanic chamber?"

Route215_Text_HeatranApproaches:
	.string "Boiling magma surges up from the depths!"
	.string "Heatran erupts from the molten rock with intense fury!"

Route215_Text_HeatranCalm:
	.string "Heatran's boiling magma cooled and it yielded with respect!"

Route215_Text_HeatranVanished:
	.string "Heatran sank back into the molten crust of the mountain..."

Route215_Text_HeatranFlewOff:
	.string "Heatran burrowed through the volcanic cavern walls and vanished!"

Route215_Text_HeatranPeaceful:
	.string "The magma chambers of Stark Mountain rumble peacefully in the deep earth."

