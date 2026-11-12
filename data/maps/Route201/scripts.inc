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

@ === BEGIN GENERATED EVENTS ===

Route201_EventScript_Trainer1::
	trainerbattle_single TRAINER_CINDY_1, Route201_Text_Trainer1Intro, Route201_Text_Trainer1Defeat
	msgbox Route201_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route201_EventScript_Trainer2::
	trainerbattle_single TRAINER_JERRY_1, Route201_Text_Trainer2Intro, Route201_Text_Trainer2Defeat
	msgbox Route201_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route201_EventScript_Trainer3::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, Route201_Text_Trainer3Intro, Route201_Text_Trainer3Defeat
	msgbox Route201_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route201_Text_Sign1:
	.string "ROUTE 201\n"
	.string "TWINLEAF TOWN - SANDGEM TOWN$"

Route201_Text_LakeVerityDescription:
	.string "The tranquil waters of Lake Verity\n"
	.string "stretch beyond.\p"
	.string "A mystical cavern stands at the\n"
	.string "center of the lake.$"

Route201_Text_InspectLakeVerityPrompt:
	.string "A soothing aura fills the air.\n"
	.string "Would you like to investigate the\p"
	.string "cavern?$"

Route201_Text_MespritApproaches:
	.string "{PLAYER} entered the sacred cavern...\n"
	.string "A warm pink radiance shimmered\p"
	.string "over the waters,\n"
	.string "and MESPRIT, the Being of Emotion,\p"
	.string "descended!$"

Route201_Text_MespritCalm:
	.string "MESPRIT conveyed feelings of deep\n"
	.string "trust and joy\p"
	.string "before settling calmly into the\n"
	.string "POKé BALL.$"

Route201_Text_MespritVanished:
	.string "MESPRIT dissolved into sparkling\n"
	.string "light,\p"
	.string "retreating into the serene depths\n"
	.string "of the lake...$"

Route201_Text_MespritFlewOff:
	.string "MESPRIT darted swiftly across the\n"
	.string "lake...$"

Route201_Text_LakeVerityPeaceful:
	.string "The waters of Lake Verity ripple\n"
	.string "peacefully.$"

Route201_Text_Trainer1Intro:
	.string "Hold up on Route201! My Pokémon\n"
	.string "are itching for a match!$"

Route201_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route201_Text_Trainer1Post:
	.string "Exploring every corner of Route201\n"
	.string "always turns up new surprises!$"

Route201_Text_Trainer2Intro:
	.string "I've been training on Route201 to\n"
	.string "challenge the Gym Leaders!$"

Route201_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route201_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route201_Text_Trainer3Intro:
	.string "ACE TRAINER: Travelling across\n"
	.string "Route201? Show me your team's\p"
	.string "synergy!$"

Route201_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route201_Text_Trainer3Post:
	.string "Only sharp strategy will carry you\n"
	.string "through the League challenge!$"

