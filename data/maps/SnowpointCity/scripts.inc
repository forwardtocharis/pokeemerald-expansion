SnowpointCity_MapScripts::
	.byte 0

SnowpointCity_EventScript_CitySign::
	msgbox SnowpointCity_Text_Sign1, MSGBOX_SIGN
	end

SnowpointCity_EventScript_GymSign::
	msgbox SnowpointCity_Text_Sign2, MSGBOX_SIGN
	end

SnowpointCity_EventScript_LakeAcuityCavern::
	lock
	goto_if_set FLAG_DEFEATED_UXIE, SnowpointCity_EventScript_LakeAcuityPeaceful
	msgbox SnowpointCity_Text_LakeAcuityDescription, MSGBOX_DEFAULT
	msgbox SnowpointCity_Text_InspectLakeAcuityPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SnowpointCity_EventScript_LakeAcuityLeave
	msgbox SnowpointCity_Text_UxieApproaches, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	delay 20
	playmoncry SPECIES_UXIE, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	setwildbattle SPECIES_UXIE, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SnowpointCity_EventScript_DefeatedUxie
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, SnowpointCity_EventScript_CaughtUxie
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SnowpointCity_EventScript_RanFromUxie
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SnowpointCity_EventScript_RanFromUxie
	release
	end

SnowpointCity_EventScript_CaughtUxie::
	setflag FLAG_DEFEATED_UXIE
	msgbox SnowpointCity_Text_UxieCalm, MSGBOX_DEFAULT
	release
	end

SnowpointCity_EventScript_DefeatedUxie::
	setflag FLAG_DEFEATED_UXIE
	msgbox SnowpointCity_Text_UxieVanished, MSGBOX_DEFAULT
	release
	end

SnowpointCity_EventScript_RanFromUxie::
	msgbox SnowpointCity_Text_UxieFlewOff, MSGBOX_DEFAULT
	release
	end

SnowpointCity_EventScript_LakeAcuityPeaceful::
	msgbox SnowpointCity_Text_LakeAcuityPeaceful, MSGBOX_SIGN
	end

SnowpointCity_EventScript_LakeAcuityLeave::
	release
	end

SnowpointCity_EventScript_SnowpointTempleRegigigas::
	lock
	goto_if_set FLAG_DEFEATED_REGIGIGAS, SnowpointCity_EventScript_RegigigasPeaceful
	msgbox SnowpointCity_Text_SnowpointTempleDescription, MSGBOX_DEFAULT
	checkspecies SPECIES_REGIROCK
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_EventScript_RegigigasSlumbers
	checkspecies SPECIES_REGICE
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_EventScript_RegigigasSlumbers
	checkspecies SPECIES_REGISTEEL
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_EventScript_RegigigasSlumbers
	msgbox SnowpointCity_Text_RegisResonate, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	delay 20
	playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	setwildbattle SPECIES_REGIGIGAS, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SnowpointCity_EventScript_DefeatedRegigigas
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, SnowpointCity_EventScript_CaughtRegigigas
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SnowpointCity_EventScript_RanFromRegigigas
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SnowpointCity_EventScript_RanFromRegigigas
	release
	end

SnowpointCity_EventScript_CaughtRegigigas::
	setflag FLAG_DEFEATED_REGIGIGAS
	msgbox SnowpointCity_Text_RegigigasCalm, MSGBOX_DEFAULT
	release
	end

SnowpointCity_EventScript_DefeatedRegigigas::
	setflag FLAG_DEFEATED_REGIGIGAS
	msgbox SnowpointCity_Text_RegigigasVanished, MSGBOX_DEFAULT
	release
	end

SnowpointCity_EventScript_RanFromRegigigas::
	msgbox SnowpointCity_Text_RegigigasFlewOff, MSGBOX_DEFAULT
	release
	end

SnowpointCity_EventScript_RegigigasSlumbers::
	msgbox SnowpointCity_Text_RegigigasSlumbers, MSGBOX_DEFAULT
	release
	end

SnowpointCity_EventScript_RegigigasPeaceful::
	msgbox SnowpointCity_Text_RegigigasPeaceful, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

SnowpointCity_EventScript_AutoNPC1::
	msgbox SnowpointCity_Text_AutoNPC1, MSGBOX_NPC
	end

SnowpointCity_EventScript_AutoNPC2::
	msgbox SnowpointCity_Text_AutoNPC2, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
SnowpointCity_Text_Sign1:
	.string "Snowpoint City\n"
	.string "A city of roaring snow and serene\p"
	.string "endurance.$"

SnowpointCity_Text_Sign2:
	.string "Snowpoint City Pokémon Gym\n"
	.string "Leader: Candice$"

SnowpointCity_Text_LakeAcuityDescription:
	.string "A pathway leads west into the\n"
	.string "tranquil, ice-fringed Lake Acuity.\p"
	.string "An ancient island cavern rests in\n"
	.string "the center of the waters.$"

SnowpointCity_Text_InspectLakeAcuityPrompt:
	.string "Would you like to approach the\n"
	.string "shimmering lake cavern?$"

SnowpointCity_Text_UxieApproaches:
	.string "The Being of Knowledge descends\n"
	.string "from the tranquil heights of Lake\p"
	.string "Acuity!$"

SnowpointCity_Text_UxieCalm:
	.string "Uxie has bestowed its serene\n"
	.string "wisdom upon you.$"

SnowpointCity_Text_UxieVanished:
	.string "Uxie vanished into the misty\n"
	.string "depths of the lake...$"

SnowpointCity_Text_UxieFlewOff:
	.string "Uxie flew across the surface of\n"
	.string "the lake!$"

SnowpointCity_Text_LakeAcuityPeaceful:
	.string "Lake Acuity sparkles gently in the\n"
	.string "falling snow.$"

SnowpointCity_Text_SnowpointTempleDescription:
	.string "A towering colossal statue\n"
	.string "slumbers deep within the ancient\p"
	.string "Snowpoint Temple.\n"
	.string "A mysterious inscription reads:\p"
	.string "'A body of rock, a body of ice, a\n"
	.string "body of steel...'\p"
	.string "'When the three giants gather, the\n"
	.string "colossal titan awakens.'$"

SnowpointCity_Text_RegisResonate:
	.string "The presence of Regirock, Regice,\n"
	.string "and Registeel resonates\p"
	.string "powerfully!\n"
	.string "The ancient titan begins to stir!$"

SnowpointCity_Text_RegigigasCalm:
	.string "Regigigas settled quietly into\n"
	.string "your party.$"

SnowpointCity_Text_RegigigasVanished:
	.string "Regigigas fell into a deep,\n"
	.string "eternal slumber once more...$"

SnowpointCity_Text_RegigigasFlewOff:
	.string "Regigigas retreated into the\n"
	.string "temple depths!$"

SnowpointCity_Text_RegigigasSlumbers:
	.string "The massive titan remains\n"
	.string "completely motionless like a stone\p"
	.string "monument.\n"
	.string "It feels as if three elemental\p"
	.string "giants are needed to break the\n"
	.string "ancient seal.$"

SnowpointCity_Text_RegigigasPeaceful:
	.string "The sacred altar of Snowpoint\n"
	.string "Temple rests in solemn stillness.$"

SnowpointCity_Text_AutoNPC1:
	.string "Up here in northern Sinnoh, only\n"
	.string "determined Trainers reach\p"
	.string "Snowpoint Temple!\n"
	.string "Candice's Ice-type focus burns\p"
	.string "bright despite the chill.$"

SnowpointCity_Text_AutoNPC2:
	.string "Lake Acuity's calm waters reflect\n"
	.string "the northern sky like a mirror.$"

