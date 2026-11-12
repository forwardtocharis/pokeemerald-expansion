Route214_MapScripts::
	.byte 0

Route214_EventScript_RouteSign::
	msgbox Route214_Text_Sign1, MSGBOX_SIGN
	end

Route214_EventScript_TurnbackCaveGiratina::
	lock
	goto_if_set FLAG_DEFEATED_GIRATINA, Route214_EventScript_GiratinaPeaceful
	msgbox Route214_Text_TurnbackCaveDescription, MSGBOX_DEFAULT
	msgbox Route214_Text_InspectGiratinaPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route214_EventScript_TurnbackCaveLeave
	msgbox Route214_Text_GiratinaApproaches, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	delay 20
	playmoncry SPECIES_GIRATINA, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	setwildbattle SPECIES_GIRATINA, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route214_EventScript_DefeatedGiratina
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, Route214_EventScript_CaughtGiratina
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route214_EventScript_RanFromGiratina
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route214_EventScript_RanFromGiratina
	release
	end

Route214_EventScript_CaughtGiratina::
	setflag FLAG_DEFEATED_GIRATINA
	msgbox Route214_Text_GiratinaCalm, MSGBOX_DEFAULT
	release
	end

Route214_EventScript_DefeatedGiratina::
	setflag FLAG_DEFEATED_GIRATINA
	msgbox Route214_Text_GiratinaVanished, MSGBOX_DEFAULT
	release
	end

Route214_EventScript_RanFromGiratina::
	msgbox Route214_Text_GiratinaFlewOff, MSGBOX_DEFAULT
	release
	end

Route214_EventScript_GiratinaPeaceful::
	msgbox Route214_Text_GiratinaPeaceful, MSGBOX_SIGN
	end

Route214_EventScript_TurnbackCaveLeave::
	release
	end

@ === BEGIN GENERATED EVENTS ===

Route214_EventScript_Trainer1::
	trainerbattle_single TRAINER_MOLLIE, Route214_Text_Trainer1Intro, Route214_Text_Trainer1Defeat
	msgbox Route214_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route214_EventScript_Trainer2::
	trainerbattle_single TRAINER_RONALD, Route214_Text_Trainer2Intro, Route214_Text_Trainer2Defeat
	msgbox Route214_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route214_Text_Sign1:
	.string "Route 214\n"
	.string "North to Veilstone City, South to\p"
	.string "Route 213.$"

Route214_Text_TurnbackCaveDescription:
	.string "An obscure path leads east through\n"
	.string "dense fog toward Sendoff Spring.\p"
	.string "Deep within lies Turnback Cave, a\n"
	.string "spatial nexus where dimensions\p"
	.string "overlap.$"

Route214_Text_InspectGiratinaPrompt:
	.string "Would you like to enter the\n"
	.string "abyssal depths of Turnback Cave?$"

Route214_Text_GiratinaApproaches:
	.string "A terrifying shadow tears open the\n"
	.string "fabric between reality and the\p"
	.string "Distortion World!\n"
	.string "The Renegade Pokémon Giratina\p"
	.string "emerges!$"

Route214_Text_GiratinaCalm:
	.string "Giratina accepted your bond and\n"
	.string "reined in its chaotic fury.$"

Route214_Text_GiratinaVanished:
	.string "Giratina vanished back into the\n"
	.string "dark depths of the Distortion\p"
	.string "World...$"

Route214_Text_GiratinaFlewOff:
	.string "Giratina melted away into a\n"
	.string "shadowy mist!$"

Route214_Text_GiratinaPeaceful:
	.string "The Sendoff Spring rests in\n"
	.string "haunting, quiet peace.$"

Route214_Text_Trainer1Intro:
	.string "Our eyes met on Route 214! Let's\n"
	.string "battle!$"

Route214_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route214_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route214_Text_Trainer2Intro:
	.string "Our eyes met on Route 214! Let's\n"
	.string "battle!$"

Route214_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route214_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

