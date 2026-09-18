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

Route214_Text_Sign1:
	.string "Route 214"
	.string "North to Veilstone City, South to Route 213."

Route214_Text_TurnbackCaveDescription:
	.string "An obscure path leads east through dense fog toward Sendoff Spring."
	.string "Deep within lies Turnback Cave, a spatial nexus where dimensions overlap."

Route214_Text_InspectGiratinaPrompt:
	.string "Would you like to enter the abyssal depths of Turnback Cave?"

Route214_Text_GiratinaApproaches:
	.string "A terrifying shadow tears open the fabric between reality and the Distortion World!"
	.string "The Renegade Pokémon Giratina emerges!"

Route214_Text_GiratinaCalm:
	.string "Giratina accepted your bond and reined in its chaotic fury."

Route214_Text_GiratinaVanished:
	.string "Giratina vanished back into the dark depths of the Distortion World..."

Route214_Text_GiratinaFlewOff:
	.string "Giratina melted away into a shadowy mist!"

Route214_Text_GiratinaPeaceful:
	.string "The Sendoff Spring rests in haunting, quiet peace."

