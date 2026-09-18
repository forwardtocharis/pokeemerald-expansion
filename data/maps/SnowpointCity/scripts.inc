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

SnowpointCity_Text_Sign1:
	.string "Snowpoint City"
	.string "A city of roaring snow and serene endurance."

SnowpointCity_Text_Sign2:
	.string "Snowpoint City Pokémon Gym"
	.string "{'Leader': 'Candice'}"

SnowpointCity_Text_LakeAcuityDescription:
	.string "A pathway leads west into the tranquil, ice-fringed Lake Acuity."
	.string "An ancient island cavern rests in the center of the waters."

SnowpointCity_Text_InspectLakeAcuityPrompt:
	.string "Would you like to approach the shimmering lake cavern?"

SnowpointCity_Text_UxieApproaches:
	.string "The Being of Knowledge descends from the tranquil heights of Lake Acuity!"

SnowpointCity_Text_UxieCalm:
	.string "Uxie has bestowed its serene wisdom upon you."

SnowpointCity_Text_UxieVanished:
	.string "Uxie vanished into the misty depths of the lake..."

SnowpointCity_Text_UxieFlewOff:
	.string "Uxie flew across the surface of the lake!"

SnowpointCity_Text_LakeAcuityPeaceful:
	.string "Lake Acuity sparkles gently in the falling snow."

SnowpointCity_Text_SnowpointTempleDescription:
	.string "A towering colossal statue slumbers deep within the ancient Snowpoint Temple."
	.string "{'A mysterious inscription reads': None}"
	.string "'A body of rock, a body of ice, a body of steel...'"
	.string "'When the three giants gather, the colossal titan awakens.'"

SnowpointCity_Text_RegisResonate:
	.string "The presence of Regirock, Regice, and Registeel resonates powerfully!"
	.string "The ancient titan begins to stir!"

SnowpointCity_Text_RegigigasCalm:
	.string "Regigigas settled quietly into your party."

SnowpointCity_Text_RegigigasVanished:
	.string "Regigigas fell into a deep, eternal slumber once more..."

SnowpointCity_Text_RegigigasFlewOff:
	.string "Regigigas retreated into the temple depths!"

SnowpointCity_Text_RegigigasSlumbers:
	.string "The massive titan remains completely motionless like a stone monument."
	.string "It feels as if three elemental giants are needed to break the ancient seal."

SnowpointCity_Text_RegigigasPeaceful:
	.string "The sacred altar of Snowpoint Temple rests in solemn stillness."

