Route201_MapScripts::
	.byte 0

Route201_EventScript_RouteSign::
	msgbox Route201_Text_Sign1, MSGBOX_SIGN
	end

Route201_EventScript_LakeVerityCavern::
	lock
	goto_if_set FLAG_DEFEATED_MESPRIT, Route201_EventScript_LakeVerityPeaceful
	msgbox Route201_Text_LakeVerityDescription, MSGBOX_DEFAULT
	msgbox Route201_Text_InspectLakeVerityPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route201_EventScript_LakeVerityLeave
	msgbox Route201_Text_MespritApproaches, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	delay 20
	playmoncry SPECIES_MESPRIT, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	setwildbattle SPECIES_MESPRIT, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route201_EventScript_DefeatedMesprit
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, Route201_EventScript_CaughtMesprit
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route201_EventScript_RanFromMesprit
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route201_EventScript_RanFromMesprit
	release
	end

Route201_EventScript_CaughtMesprit::
	setflag FLAG_DEFEATED_MESPRIT
	msgbox Route201_Text_MespritCalm, MSGBOX_DEFAULT
	release
	end

Route201_EventScript_DefeatedMesprit::
	setflag FLAG_DEFEATED_MESPRIT
	msgbox Route201_Text_MespritVanished, MSGBOX_DEFAULT
	release
	end

Route201_EventScript_RanFromMesprit::
	msgbox Route201_Text_MespritFlewOff, MSGBOX_DEFAULT
	release
	end

Route201_EventScript_LakeVerityPeaceful::
	msgbox Route201_Text_LakeVerityPeaceful, MSGBOX_SIGN
	end

Route201_EventScript_LakeVerityLeave::
	release
	end


Route201_Text_Sign1:
	.string "Route201"

Route201_Text_LakeVerityDescription:
	.string "The tranquil waters of Lake Verity stretch beyond."
	.string "A mystical cavern stands at the center of the lake."

Route201_Text_InspectLakeVerityPrompt:
	.string "A soothing aura fills the air."
	.string "Would you like to investigate the cavern?"

Route201_Text_MespritApproaches:
	.string "{PLAYER} entered the sacred cavern..."
	.string "A warm pink radiance shimmered over the waters,"
	.string "and MESPRIT, the Being of Emotion, descended!"

Route201_Text_MespritCalm:
	.string "MESPRIT conveyed feelings of deep trust and joy"
	.string "before settling calmly into the POKé BALL."

Route201_Text_MespritVanished:
	.string "MESPRIT dissolved into sparkling light,"
	.string "retreating into the serene depths of the lake..."

Route201_Text_MespritFlewOff:
	.string "MESPRIT darted swiftly across the lake..."

Route201_Text_LakeVerityPeaceful:
	.string "The waters of Lake Verity ripple peacefully."

