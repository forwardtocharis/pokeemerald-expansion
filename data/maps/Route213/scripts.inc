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

@ === BEGIN GENERATED EVENTS ===

Route213_EventScript_Trainer1::
	trainerbattle_single TRAINER_MARK, Route213_Text_Trainer1Intro, Route213_Text_Trainer1Defeat
	msgbox Route213_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route213_EventScript_Trainer2::
	trainerbattle_single TRAINER_WARREN, Route213_Text_Trainer2Intro, Route213_Text_Trainer2Defeat
	msgbox Route213_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route213_EventScript_Trainer3::
	trainerbattle_single TRAINER_ROSE_4, Route213_Text_Trainer3Intro, Route213_Text_Trainer3Defeat
	msgbox Route213_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route213_Text_Sign1:
	.string "Route 213\n"
	.string "East to Sunyshore City, West to\p"
	.string "Pastoria City.$"

Route213_Text_LakeValorDescription:
	.string "A hidden pathway leads north\n"
	.string "toward the grand basin of Lake\p"
	.string "Valor.\n"
	.string "An island cavern rests calmly in\p"
	.string "the middle of the reservoir.$"

Route213_Text_InspectLakeValorPrompt:
	.string "Would you like to enter the cavern\n"
	.string "of Lake Valor?$"

Route213_Text_AzelfApproaches:
	.string "The Being of Willpower descends\n"
	.string "from the glowing dome of the\p"
	.string "cavern!$"

Route213_Text_AzelfCalm:
	.string "Azelf acknowledged your unwavering\n"
	.string "resolve!$"

Route213_Text_AzelfVanished:
	.string "Azelf vanished silently into the\n"
	.string "sparkling water...$"

Route213_Text_AzelfFlewOff:
	.string "Azelf darted across the cavern and\n"
	.string "vanished!$"

Route213_Text_LakeValorPeaceful:
	.string "Lake Valor rests in majestic\n"
	.string "tranquility.$"

Route213_Text_Trainer1Intro:
	.string "Hold up on Route213! My Pokémon\n"
	.string "are itching for a match!$"

Route213_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route213_Text_Trainer1Post:
	.string "Exploring every corner of Route213\n"
	.string "always turns up new surprises!$"

Route213_Text_Trainer2Intro:
	.string "I've been training on Route213 to\n"
	.string "challenge the Gym Leaders!$"

Route213_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route213_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route213_Text_Trainer3Intro:
	.string "PSYCHIC: Travelling across\n"
	.string "Route213? Show me your team's\p"
	.string "synergy!$"

Route213_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route213_Text_Trainer3Post:
	.string "I foresaw our battle along this\n"
	.string "path before you even arrived!$"

