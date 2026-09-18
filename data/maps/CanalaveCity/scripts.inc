CanalaveCity_MapScripts::
	.byte 0

CanalaveCity_EventScript_CitySign::
	msgbox CanalaveCity_Text_Sign1, MSGBOX_SIGN
	end

CanalaveCity_EventScript_GymSign::
	msgbox CanalaveCity_Text_Sign2, MSGBOX_SIGN
	end

CanalaveCity_EventScript_FerrySailor::
	lock
	faceplayer
	call CanalaveCity_EventScript_CheckBattleFrontierQualification
	goto_if_set FLAG_BATTLE_FRONTIER_QUALIFIED, CanalaveCity_EventScript_OfferBattleFrontier
CanalaveCity_EventScript_AskFerryDestination:
	msgbox CanalaveCity_Text_SailorWelcome, MSGBOX_DEFAULT
	message CanalaveCity_Text_SailorWhereTo
	waitmessage
	multichoice 16, 4, MULTI_TRANSIT_CANALAVE, FALSE
	goto_if_eq VAR_RESULT, 0, CanalaveCity_EventScript_SailToSlateport
	goto_if_eq VAR_RESULT, 1, CanalaveCity_EventScript_SailToLilycove
	goto_if_eq VAR_RESULT, 2, CanalaveCity_EventScript_SailToVermilion
	goto_if_eq VAR_RESULT, 3, CanalaveCity_EventScript_SailToOlivine
	goto CanalaveCity_EventScript_SailorCancel

CanalaveCity_EventScript_CheckBattleFrontierQualification::
	goto_if_set FLAG_BATTLE_FRONTIER_QUALIFIED, Common_EventScript_NopReturn
	goto_if_set FLAG_SYS_GAME_CLEAR, CanalaveCity_EventScript_QualifyFrontier
	goto_if_ge VAR_TOTAL_BADGES, 8, CanalaveCity_EventScript_QualifyFrontier
	return

CanalaveCity_EventScript_QualifyFrontier::
	setflag FLAG_BATTLE_FRONTIER_QUALIFIED
	setflag FLAG_SYS_FRONTIER_PASS
	setflag FLAG_RECEIVED_SS_TICKET
	setflag FLAG_MET_SCOTT_ON_SS_TIDAL
	setflag FLAG_TRANSIT_SS_TIDAL_UNLOCKED
	return

CanalaveCity_EventScript_OfferBattleFrontier::
	msgbox CanalaveCity_Text_SailToFrontierPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CanalaveCity_EventScript_SailToFrontier
	goto CanalaveCity_EventScript_AskFerryDestination

CanalaveCity_EventScript_SailToFrontier::
	msgbox CanalaveCity_Text_BattleFrontierItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_EventScript_AskFerryDestination
	msgbox CanalaveCity_Text_SailorDepartFrontier, MSGBOX_DEFAULT
	playse SE_SHIP
	waitse
	setvar VAR_CURRENT_REGION, 0
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
	waitstate
	release
	end

CanalaveCity_EventScript_SailToSlateport::
	msgbox CanalaveCity_Text_SlateportItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_EventScript_FerrySailor
	msgbox CanalaveCity_Text_SailorDepartHoenn, MSGBOX_DEFAULT
	playse SE_SHIP
	waitse
	setvar VAR_CURRENT_REGION, 0
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
	waitstate
	release
	end

CanalaveCity_EventScript_SailToLilycove::
	msgbox CanalaveCity_Text_LilycoveItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_EventScript_FerrySailor
	msgbox CanalaveCity_Text_SailorDepartHoenn, MSGBOX_DEFAULT
	playse SE_SHIP
	waitse
	setvar VAR_CURRENT_REGION, 0
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end

CanalaveCity_EventScript_SailToVermilion::
	msgbox CanalaveCity_Text_VermilionItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_EventScript_FerrySailor
	msgbox CanalaveCity_Text_SailorDepartKanto, MSGBOX_DEFAULT
	playse SE_SHIP
	waitse
	setvar VAR_CURRENT_REGION, 1
	warp MAP_VERMILION_CITY, 24, 32
	waitstate
	release
	end

CanalaveCity_EventScript_SailToOlivine::
	msgbox CanalaveCity_Text_OlivineItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_EventScript_FerrySailor
	msgbox CanalaveCity_Text_SailorDepartJohto, MSGBOX_DEFAULT
	playse SE_SHIP
	waitse
	setvar VAR_CURRENT_REGION, 2
	warp MAP_OLIVINE_CITY, 20, 31
	waitstate
	release
	end

CanalaveCity_EventScript_SailorCancel::
	msgbox CanalaveCity_Text_SailorComeBackSoon, MSGBOX_DEFAULT
	release
	end

CanalaveCity_EventScript_SailorEldritch::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_CRESSELIA, CanalaveCity_EventScript_EldritchPeaceful
	msgbox CanalaveCity_Text_EldritchIntro, MSGBOX_DEFAULT
	msgbox CanalaveCity_Text_SailToFullmoonPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_EventScript_EldritchDecline
	msgbox CanalaveCity_Text_SailToFullmoonDepart, MSGBOX_DEFAULT
	closemessage
	playse SE_SHIP
	delay 40
	msgbox CanalaveCity_Text_ArriveFullmoonIsland, MSGBOX_DEFAULT
	playse SE_PIN
	delay 20
	playmoncry SPECIES_CRESSELIA, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	setwildbattle SPECIES_CRESSELIA, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, CanalaveCity_EventScript_DefeatedCresselia
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, CanalaveCity_EventScript_CaughtCresselia
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, CanalaveCity_EventScript_RanFromCresselia
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, CanalaveCity_EventScript_RanFromCresselia
	release
	end

CanalaveCity_EventScript_CaughtCresselia::
	setflag FLAG_DEFEATED_CRESSELIA
	msgbox CanalaveCity_Text_CresseliaCalm, MSGBOX_DEFAULT
	release
	end

CanalaveCity_EventScript_DefeatedCresselia::
	setflag FLAG_DEFEATED_CRESSELIA
	msgbox CanalaveCity_Text_CresseliaVanished, MSGBOX_DEFAULT
	release
	end

CanalaveCity_EventScript_RanFromCresselia::
	msgbox CanalaveCity_Text_CresseliaFlewOff, MSGBOX_DEFAULT
	release
	end

CanalaveCity_EventScript_EldritchDecline::
	msgbox CanalaveCity_Text_EldritchDecline, MSGBOX_DEFAULT
	release
	end

CanalaveCity_EventScript_EldritchPeaceful::
	msgbox CanalaveCity_Text_EldritchPeaceful, MSGBOX_NPC
	end

CanalaveCity_EventScript_HarborInnDarkrai::
	lock
	goto_if_set FLAG_DEFEATED_DARKRAI, CanalaveCity_EventScript_HarborInnPeaceful
	msgbox CanalaveCity_Text_HarborInnDescription, MSGBOX_DEFAULT
	msgbox CanalaveCity_Text_InspectHarborInnPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_EventScript_HarborInnLeave
	msgbox CanalaveCity_Text_HarborInnDreamBegins, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	delay 40
	fadescreen FADE_FROM_BLACK
	msgbox CanalaveCity_Text_DarkraiApproaches, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	delay 20
	playmoncry SPECIES_DARKRAI, CRY_MODE_ENCOUNTER
	waitmoncry
	delay 20
	setwildbattle SPECIES_DARKRAI, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, CanalaveCity_EventScript_DefeatedDarkrai
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, CanalaveCity_EventScript_CaughtDarkrai
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, CanalaveCity_EventScript_RanFromDarkrai
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, CanalaveCity_EventScript_RanFromDarkrai
	release
	end

CanalaveCity_EventScript_CaughtDarkrai::
	setflag FLAG_DEFEATED_DARKRAI
	msgbox CanalaveCity_Text_DarkraiCalm, MSGBOX_DEFAULT
	release
	end

CanalaveCity_EventScript_DefeatedDarkrai::
	setflag FLAG_DEFEATED_DARKRAI
	msgbox CanalaveCity_Text_DarkraiVanished, MSGBOX_DEFAULT
	release
	end

CanalaveCity_EventScript_RanFromDarkrai::
	msgbox CanalaveCity_Text_DarkraiFlewOff, MSGBOX_DEFAULT
	release
	end

CanalaveCity_EventScript_HarborInnPeaceful::
	msgbox CanalaveCity_Text_HarborInnPeaceful, MSGBOX_SIGN
	end

CanalaveCity_EventScript_HarborInnLeave::
	release
	end

CanalaveCity_EventScript_RangerManaphyEgg::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_MANAPHY_EGG, CanalaveCity_EventScript_RangerManaphyGiven
	msgbox CanalaveCity_Text_RangerIntro, MSGBOX_DEFAULT
	msgbox CanalaveCity_Text_GiveEggPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_EventScript_RangerRefused
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, CanalaveCity_EventScript_PartyFull
	setflag FLAG_RECEIVED_MANAPHY_EGG
	giveegg SPECIES_MANAPHY
	playfanfare MUS_OBTAIN_ITEM
	msgbox CanalaveCity_Text_ReceivedManaphyEgg, MSGBOX_DEFAULT
	waitfanfare
	msgbox CanalaveCity_Text_RangerPostGift, MSGBOX_DEFAULT
	release
	end

CanalaveCity_EventScript_PartyFull::
	msgbox CanalaveCity_Text_PartyFull, MSGBOX_DEFAULT
	release
	end

CanalaveCity_EventScript_RangerRefused::
	msgbox CanalaveCity_Text_RangerRefused, MSGBOX_DEFAULT
	release
	end

CanalaveCity_EventScript_RangerManaphyGiven::
	msgbox CanalaveCity_Text_RangerPostGift, MSGBOX_NPC
	end


CanalaveCity_Text_Sign1:
	.string "Canalave City"
	.string "The Canal City of Port and Library"

CanalaveCity_Text_Sign2:
	.string "Canalave City Pokémon Gym"
	.string "Leader: Byron, The Man with the Steel Body!"

CanalaveCity_Text_SailorWelcome:
	.string "Ahoy! Welcome to Canalave Port in the SINNOH region."

CanalaveCity_Text_SailorWhereTo:
	.string "Where would you like to set sail today?"

CanalaveCity_Text_SlateportItIs:
	.string "Slateport City in HOENN, is that right?"

CanalaveCity_Text_LilycoveItIs:
	.string "Lilycove City in HOENN, is that right?"

CanalaveCity_Text_VermilionItIs:
	.string "Vermilion City in KANTO, is that right?"

CanalaveCity_Text_OlivineItIs:
	.string "Olivine City in JOHTO, is that right?"

CanalaveCity_Text_SailorDepartHoenn:
	.string "Aye aye! Setting sail for the HOENN region!"

CanalaveCity_Text_SailorDepartKanto:
	.string "Aye aye! Setting sail for the KANTO region!"

CanalaveCity_Text_SailorDepartJohto:
	.string "Aye aye! Setting sail for the JOHTO region!"

CanalaveCity_Text_SailorComeBackSoon:
	.string "Let me know whenever you want to set sail!"

CanalaveCity_Text_SailToFrontierPrompt:
	.string "Ah, an authorized BATTLE FRONTIER contender! Would you like to sail to the BATTLE FRONTIER?"

CanalaveCity_Text_BattleFrontierItIs:
	.string "The BATTLE FRONTIER, is that right?"

CanalaveCity_Text_SailorDepartFrontier:
	.string "Aye aye! Setting sail for the BATTLE FRONTIER!"

CanalaveCity_Text_EldritchIntro:
	.string "Ahoy! My young boy has been trapped in endless nightmares..."
	.string "They say out on Fullmoon Island, a legendary Pokémon can heal bad dreams."

CanalaveCity_Text_SailToFullmoonPrompt:
	.string "Would you board my vessel and sail out to Fullmoon Island?"

CanalaveCity_Text_SailToFullmoonDepart:
	.string "All aboard! Steering through the midnight mist to Fullmoon Island!"

CanalaveCity_Text_ArriveFullmoonIsland:
	.string "You arrive upon the enchanted shores of Fullmoon Island."
	.string "Under the crescent moonlight, the Lunar Pokémon Cresselia shines with pure radiance!"

CanalaveCity_Text_CresseliaCalm:
	.string "Cresselia bestowed a Lunar Wing upon you and granted peaceful dreams."

CanalaveCity_Text_CresseliaVanished:
	.string "Cresselia dissolved into the shimmering lunar mist..."

CanalaveCity_Text_CresseliaFlewOff:
	.string "Cresselia took flight across the ocean waves!"

CanalaveCity_Text_EldritchDecline:
	.string "I understand. I'll be here at the docks if you change your mind."

CanalaveCity_Text_EldritchPeaceful:
	.string "Thanks to Cresselia's blessing, my son is sleeping like an angel."

CanalaveCity_Text_HarborInnDescription:
	.string "A weathered sign reads: Harbor Inn."
	.string "The door is unlocked, but a shadowy, chilling aura seeps through the frame..."

CanalaveCity_Text_InspectHarborInnPrompt:
	.string "Would you like to step inside Harbor Inn and rest?"

CanalaveCity_Text_HarborInnDreamBegins:
	.string "You lie down upon the dusty bed and close your eyes..."
	.string "A profound, bottomless darkness pulls you into a terrifying dream!"

CanalaveCity_Text_DarkraiApproaches:
	.string "You stand upon the barren shores of Newmoon Island!"
	.string "The Pitch-Black Pokémon Darkrai rises from the abyssal darkness!"

CanalaveCity_Text_DarkraiCalm:
	.string "Darkrai acknowledged your courage in facing the nightmare!"

CanalaveCity_Text_DarkraiVanished:
	.string "Darkrai vanished into the fading remnants of the nightmare..."

CanalaveCity_Text_DarkraiFlewOff:
	.string "Darkrai slipped away into the shadows of your mind!"

CanalaveCity_Text_HarborInnPeaceful:
	.string "Harbor Inn is locked and peaceful. The shadows have departed."

CanalaveCity_Text_RangerIntro:
	.string "Greetings, Trainer! I am a Pokémon Ranger researcher stationed from the Fiore region."
	.string "We recovered an ancient, glowing Egg from the sea floor—the legendary Prince of the Sea!"

CanalaveCity_Text_GiveEggPrompt:
	.string "It needs a caring Trainer to hatch and explore the world. Will you accept this Pokémon Egg?"

CanalaveCity_Text_ReceivedManaphyEgg:
	.string "{PLAYER} received the mysterious Manaphy Egg!"

CanalaveCity_Text_RangerPostGift:
	.string "Take great care of that Egg!"
	.string "Legend says if Manaphy breeds with a Ditto at a Pokémon Day Care, a Phione will hatch!"

CanalaveCity_Text_PartyFull:
	.string "Your party is full! Make room in your team and come speak with me again."

CanalaveCity_Text_RangerRefused:
	.string "I see. If you ever feel ready to care for this precious Egg, I will be here."

