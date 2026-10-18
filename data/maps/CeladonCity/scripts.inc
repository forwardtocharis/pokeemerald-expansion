CeladonCity_MapScripts::
	.byte 0

CeladonCity_EventScript_TrainerTips2::
	msgbox CeladonCity_Text_Sign1, MSGBOX_SIGN
	end

CeladonCity_EventScript_PrizeExchangeSign::
	msgbox CeladonCity_Text_Sign2, MSGBOX_SIGN
	end

CeladonCity_EventScript_GameCornerSign::
	msgbox CeladonCity_Text_Sign3, MSGBOX_SIGN
	end

CeladonCity_EventScript_CitySign::
	msgbox CeladonCity_Text_Sign4, MSGBOX_SIGN
	end

CeladonCity_EventScript_MansionSign::
	msgbox CeladonCity_Text_Sign5, MSGBOX_SIGN
	end

CeladonCity_EventScript_TrainerTips1::
	msgbox CeladonCity_Text_Sign6, MSGBOX_SIGN
	end

CeladonCity_EventScript_DeptStoreSign::
	msgbox CeladonCity_Text_Sign7, MSGBOX_SIGN
	end

CeladonCity_EventScript_GymSign::
	msgbox CeladonCity_Text_Sign8, MSGBOX_SIGN
	end

CeladonCity_EventScript_LittleGirl::
	msgbox CeladonCity_Text_GotMyKoffingInCinnabar, MSGBOX_NPC
	end

CeladonCity_EventScript_OldMan1::
	msgbox CeladonCity_Text_GymIsGreatFullOfWomen, MSGBOX_NPC
	end

CeladonCity_EventScript_Woman::
	msgbox CeladonCity_Text_GameCornerIsBadForCitysImage, MSGBOX_NPC
	end

CeladonCity_EventScript_OldMan2::
	msgbox CeladonCity_Text_BlewItAllAtSlots, MSGBOX_NPC
	end

CeladonCity_EventScript_SoftboiledTutor::
	msgbox CeladonCity_Text_SoftboiledTutor, MSGBOX_NPC
	end

CeladonCity_EventScript_FatMan::
	msgbox CeladonCity_Text_MyTrustedPalPoliwrath, MSGBOX_NPC
	end

CeladonCity_EventScript_Poliwrath::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POLIWRATH, CRY_MODE_NORMAL
	msgbox CeladonCity_Text_Poliwrath, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CeladonCity_EventScript_RocketGrunt1::
	msgbox CeladonCity_Text_KeepOutOfTeamRocketsWay, MSGBOX_NPC
	end

CeladonCity_EventScript_RocketGrunt2::
	msgbox CeladonCity_Text_GetLostOrIllPunchYou, MSGBOX_NPC
	end

CeladonCity_EventScript_Boy::
	msgbox CeladonCity_Text_ScaldedTongueOnTea, MSGBOX_NPC
	end

CeladonCity_EventScript_SilphCoScientist::
	msgbox CeladonCity_Text_SomeoneStoleSilphScope, MSGBOX_NPC
	end
CeladonCity_Text_Sign1:
	.string "CeladonCity$"

CeladonCity_Text_Sign2:
	.string "CeladonCity$"

CeladonCity_Text_Sign3:
	.string "CeladonCity$"

CeladonCity_Text_Sign4:
	.string "CeladonCity$"

CeladonCity_Text_Sign5:
	.string "CeladonCity$"

CeladonCity_Text_Sign6:
	.string "CeladonCity$"

CeladonCity_Text_Sign7:
	.string "CeladonCity$"

CeladonCity_Text_Sign8:
	.string "CeladonCity$"

CeladonCity_Text_GotMyKoffingInCinnabar:
	.string "I got my KOFFING in CINNABAR!\p"
	.string "It's nice, but it breathes poison\n"
	.string "when it gets angry!$"

CeladonCity_Text_GymIsGreatFullOfWomen:
	.string "Heheh! This GYM is great!\n"
	.string "It's full of women!$"

CeladonCity_Text_GameCornerIsBadForCitysImage:
	.string "The GAME CORNER is bad for our\n"
	.string "city's image!$"

CeladonCity_Text_BlewItAllAtSlots:
	.string "Moan... I blew it all at the\n"
	.string "slots!$"

CeladonCity_Text_SoftboiledTutor:
	.string "A soft-boiled egg is nutritious\n"
	.string "and delicious!$"

CeladonCity_Text_MyTrustedPalPoliwrath:
	.string "This is my trusted pal, POLIWRATH!$"

CeladonCity_Text_Poliwrath:
	.string "POLIWRATH: Ribo-ribit!$"

CeladonCity_Text_KeepOutOfTeamRocketsWay:
	.string "Keep out of TEAM ROCKET's way!$"

CeladonCity_Text_GetLostOrIllPunchYou:
	.string "What are you staring at?\n"
	.string "Get lost or I'll punch you!$"

CeladonCity_Text_ScaldedTongueOnTea:
	.string "Aaaaah, scalded my tongue on the\n"
	.string "hot TEA!$"

CeladonCity_Text_SomeoneStoleSilphScope:
	.string "Someone stole a SILPH SCOPE!$"

