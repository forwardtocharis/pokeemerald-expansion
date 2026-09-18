Route207_MapScripts::
	.byte 0

Route207_EventScript_RouteSign::
	msgbox Route207_Text_Sign1, MSGBOX_SIGN
	end

Route207_EventScript_SpearPillarDialga::
	lock
	goto_if_set FLAG_DEFEATED_DIALGA, Route207_EventScript_DialgaPeaceful
	msgbox Route207_Text_DialgaAltarDescription, MSGBOX_DEFAULT
	msgbox Route207_Text_InspectDialgaPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route207_EventScript_SpearPillarLeave
	msgbox Route207_Text_DialgaApproaches, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	delay 20
	playmoncry SPECIES_DIALGA, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	setwildbattle SPECIES_DIALGA, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route207_EventScript_DefeatedDialga
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, Route207_EventScript_CaughtDialga
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route207_EventScript_RanFromDialga
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route207_EventScript_RanFromDialga
	release
	end

Route207_EventScript_CaughtDialga::
	setflag FLAG_DEFEATED_DIALGA
	msgbox Route207_Text_DialgaCalm, MSGBOX_DEFAULT
	release
	end

Route207_EventScript_DefeatedDialga::
	setflag FLAG_DEFEATED_DIALGA
	msgbox Route207_Text_DialgaVanished, MSGBOX_DEFAULT
	release
	end

Route207_EventScript_RanFromDialga::
	msgbox Route207_Text_DialgaFlewOff, MSGBOX_DEFAULT
	release
	end

Route207_EventScript_DialgaPeaceful::
	msgbox Route207_Text_DialgaPeaceful, MSGBOX_SIGN
	end

Route207_EventScript_SpearPillarPalkia::
	lock
	goto_if_set FLAG_DEFEATED_PALKIA, Route207_EventScript_PalkiaPeaceful
	msgbox Route207_Text_PalkiaAltarDescription, MSGBOX_DEFAULT
	msgbox Route207_Text_InspectPalkiaPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route207_EventScript_SpearPillarLeave
	msgbox Route207_Text_PalkiaApproaches, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	delay 20
	playmoncry SPECIES_PALKIA, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	setwildbattle SPECIES_PALKIA, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route207_EventScript_DefeatedPalkia
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, Route207_EventScript_CaughtPalkia
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route207_EventScript_RanFromPalkia
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route207_EventScript_RanFromPalkia
	release
	end

Route207_EventScript_CaughtPalkia::
	setflag FLAG_DEFEATED_PALKIA
	msgbox Route207_Text_PalkiaCalm, MSGBOX_DEFAULT
	release
	end

Route207_EventScript_DefeatedPalkia::
	setflag FLAG_DEFEATED_PALKIA
	msgbox Route207_Text_PalkiaVanished, MSGBOX_DEFAULT
	release
	end

Route207_EventScript_RanFromPalkia::
	msgbox Route207_Text_PalkiaFlewOff, MSGBOX_DEFAULT
	release
	end

Route207_EventScript_PalkiaPeaceful::
	msgbox Route207_Text_PalkiaPeaceful, MSGBOX_SIGN
	end

Route207_EventScript_HallOfOriginArceus::
	lock
	goto_if_set FLAG_DEFEATED_ARCEUS, Route207_EventScript_ArceusPeaceful
	goto_if_unset FLAG_DEFEATED_DIALGA, Route207_EventScript_ArceusDormant
	goto_if_unset FLAG_DEFEATED_PALKIA, Route207_EventScript_ArceusDormant
	msgbox Route207_Text_HallOfOriginDescription, MSGBOX_DEFAULT
	msgbox Route207_Text_InspectArceusPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route207_EventScript_SpearPillarLeave
	msgbox Route207_Text_ArceusApproaches, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	delay 20
	playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	setwildbattle SPECIES_ARCEUS, 80
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route207_EventScript_DefeatedArceus
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, Route207_EventScript_CaughtArceus
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route207_EventScript_RanFromArceus
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route207_EventScript_RanFromArceus
	release
	end

Route207_EventScript_CaughtArceus::
	setflag FLAG_DEFEATED_ARCEUS
	msgbox Route207_Text_ArceusCalm, MSGBOX_DEFAULT
	release
	end

Route207_EventScript_DefeatedArceus::
	setflag FLAG_DEFEATED_ARCEUS
	msgbox Route207_Text_ArceusVanished, MSGBOX_DEFAULT
	release
	end

Route207_EventScript_RanFromArceus::
	msgbox Route207_Text_ArceusFlewOff, MSGBOX_DEFAULT
	release
	end

Route207_EventScript_ArceusDormant::
	msgbox Route207_Text_ArceusDormant, MSGBOX_DEFAULT
	release
	end

Route207_EventScript_ArceusPeaceful::
	msgbox Route207_Text_ArceusPeaceful, MSGBOX_SIGN
	end

Route207_EventScript_SpearPillarLeave::
	release
	end

Route207_Text_Sign1:
	.string "Route 207"
	.string "North to Cycling Road, South to Oreburgh City."

Route207_Text_DialgaAltarDescription:
	.string "A massive staircase carves up Mt. Coronet toward the ancient Spear Pillar."
	.string "The Diamond Altar hums with temporal resonance."

Route207_Text_InspectDialgaPrompt:
	.string "Would you like to touch the Diamond Altar?"

Route207_Text_DialgaApproaches:
	.string "Time twists and fractures! Dialga materializes before you!"

Route207_Text_DialgaCalm:
	.string "Dialga accepted your presence and aligned with your journey."

Route207_Text_DialgaVanished:
	.string "Dialga dissolved into the infinite river of time..."

Route207_Text_DialgaFlewOff:
	.string "Dialga roared and warped out of the mortal realm!"

Route207_Text_DialgaPeaceful:
	.string "The Diamond Altar rests under a calm, unbroken flow of time."

Route207_Text_PalkiaAltarDescription:
	.string "At the peak of Spear Pillar, the Pearl Altar glows with spatial distortion."

Route207_Text_InspectPalkiaPrompt:
	.string "Would you like to touch the Pearl Altar?"

Route207_Text_PalkiaApproaches:
	.string "Space bends and ripples violently! Palkia manifests into this dimension!"

Route207_Text_PalkiaCalm:
	.string "Palkia acknowledged your strength and harmonized with your soul."

Route207_Text_PalkiaVanished:
	.string "Palkia faded into the dimensional folds of space..."

Route207_Text_PalkiaFlewOff:
	.string "Palkia slashed the rift and vanished across dimensions!"

Route207_Text_PalkiaPeaceful:
	.string "The Pearl Altar stands serene against the endless sky."

Route207_Text_HallOfOriginDescription:
	.string "An ethereal glass staircase ascends into the heavens above Spear Pillar!"
	.string "At the summit lies the Hall of Origin."

Route207_Text_InspectArceusPrompt:
	.string "Would you like to ascend the glass staircase to the Hall of Origin?"

Route207_Text_ArceusApproaches:
	.string "A blinding, celestial luminescence fills the cosmos!"
	.string "The Original One, Arceus, descends upon the altar!"

Route207_Text_ArceusCalm:
	.string "Arceus recognized your bond with all living beings!"

Route207_Text_ArceusVanished:
	.string "Arceus returned into the divine origin of creation..."

Route207_Text_ArceusFlewOff:
	.string "Arceus ascended beyond the veil of creation!"

Route207_Text_ArceusDormant:
	.string "A mysterious glass etching rests upon the summit."
	.string "It remains inert... Both Dialga and Palkia must be appeased first."

Route207_Text_ArceusPeaceful:
	.string "The Hall of Origin radiates with quiet divine tranquility."

