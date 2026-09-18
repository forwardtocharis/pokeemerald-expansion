Route213_MapScripts::
	.byte 0

Route213_EventScript_RouteSign::
	msgbox Route213_Text_Sign1, MSGBOX_SIGN
	end

Route213_EventScript_LakeValorCavern::
	lock
	goto_if_set FLAG_DEFEATED_AZELF, Route213_EventScript_LakeValorPeaceful
	msgbox Route213_Text_LakeValorDescription, MSGBOX_DEFAULT
	msgbox Route213_Text_InspectLakeValorPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route213_EventScript_LakeValorLeave
	msgbox Route213_Text_AzelfApproaches, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	delay 20
	playmoncry SPECIES_AZELF, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	setwildbattle SPECIES_AZELF, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route213_EventScript_DefeatedAzelf
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, Route213_EventScript_CaughtAzelf
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route213_EventScript_RanFromAzelf
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route213_EventScript_RanFromAzelf
	release
	end

Route213_EventScript_CaughtAzelf::
	setflag FLAG_DEFEATED_AZELF
	msgbox Route213_Text_AzelfCalm, MSGBOX_DEFAULT
	release
	end

Route213_EventScript_DefeatedAzelf::
	setflag FLAG_DEFEATED_AZELF
	msgbox Route213_Text_AzelfVanished, MSGBOX_DEFAULT
	release
	end

Route213_EventScript_RanFromAzelf::
	msgbox Route213_Text_AzelfFlewOff, MSGBOX_DEFAULT
	release
	end

Route213_EventScript_LakeValorPeaceful::
	msgbox Route213_Text_LakeValorPeaceful, MSGBOX_SIGN
	end

Route213_EventScript_LakeValorLeave::
	release
	end

Route213_Text_Sign1:
	.string "Route 213"
	.string "East to Sunyshore City, West to Pastoria City."

Route213_Text_LakeValorDescription:
	.string "A hidden pathway leads north toward the grand basin of Lake Valor."
	.string "An island cavern rests calmly in the middle of the reservoir."

Route213_Text_InspectLakeValorPrompt:
	.string "Would you like to enter the cavern of Lake Valor?"

Route213_Text_AzelfApproaches:
	.string "The Being of Willpower descends from the glowing dome of the cavern!"

Route213_Text_AzelfCalm:
	.string "Azelf acknowledged your unwavering resolve!"

Route213_Text_AzelfVanished:
	.string "Azelf vanished silently into the sparkling water..."

Route213_Text_AzelfFlewOff:
	.string "Azelf darted across the cavern and vanished!"

Route213_Text_LakeValorPeaceful:
	.string "Lake Valor rests in majestic tranquility."

