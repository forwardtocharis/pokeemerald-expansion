SaffronCity_MapScripts::
	.byte 0

SaffronCity_EventScript_CitySign::
	msgbox SaffronCity_Text_Sign1, MSGBOX_SIGN
	end

SaffronCity_EventScript_DojoSign::
	msgbox SaffronCity_Text_Sign2, MSGBOX_SIGN
	end

SaffronCity_EventScript_SilphProductSign::
	msgbox SaffronCity_Text_Sign3, MSGBOX_SIGN
	end

SaffronCity_EventScript_TrainerTips2::
	msgbox SaffronCity_Text_Sign4, MSGBOX_SIGN
	end

SaffronCity_EventScript_SilphCoSign::
	msgbox SaffronCity_Text_Sign5, MSGBOX_SIGN
	end

SaffronCity_EventScript_TrainerTips1::
	msgbox SaffronCity_Text_Sign6, MSGBOX_SIGN
	end

SaffronCity_EventScript_GymSign::
	msgbox SaffronCity_Text_Sign7, MSGBOX_SIGN
	end

SaffronCity_EventScript_MrPsychicsHouseSign::
	msgbox SaffronCity_Text_Sign8, MSGBOX_SIGN
	end

SaffronCity_EventScript_TrainerFanClubSign::
	msgbox SaffronCity_Text_Sign9, MSGBOX_SIGN
	end

SaffronCity_EventScript_Boy::
	msgbox SaffronCity_Text_SilphCoLargestBuilding, MSGBOX_NPC
	end

SaffronCity_EventScript_DoorGuardGrunt::
	msgbox SaffronCity_Text_DoorGuardGrunt, MSGBOX_NPC
	end

SaffronCity_EventScript_Lass::
	msgbox SaffronCity_Text_SabrinaPsychicPowers, MSGBOX_NPC
	end

SaffronCity_EventScript_Man::
	msgbox SaffronCity_Text_TeamRocketTookOverSilph, MSGBOX_NPC
	end

SaffronCity_EventScript_Pidgeot::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
	msgbox SaffronCity_Text_Pidgeot, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SaffronCity_EventScript_RocketGrunt1::
	msgbox SaffronCity_Text_RocketGrunt, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt2::
	msgbox SaffronCity_Text_RocketGrunt, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt3::
	msgbox SaffronCity_Text_RocketGrunt, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt4::
	msgbox SaffronCity_Text_RocketGrunt, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt5::
	msgbox SaffronCity_Text_RocketGrunt, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt6::
	msgbox SaffronCity_Text_RocketGrunt, MSGBOX_NPC
	end

SaffronCity_EventScript_RocketGrunt7::
	msgbox SaffronCity_Text_RocketGrunt, MSGBOX_NPC
	end

SaffronCity_EventScript_WorkerM::
	msgbox SaffronCity_Text_SilphCoWorker, MSGBOX_NPC
	end

SaffronCity_EventScript_Youngster::
	msgbox SaffronCity_Text_FightingDojoNextToGym, MSGBOX_NPC
	end
SaffronCity_Text_Sign1:
	.string "SaffronCity$"

SaffronCity_Text_Sign2:
	.string "SaffronCity$"

SaffronCity_Text_Sign3:
	.string "SaffronCity$"

SaffronCity_Text_Sign4:
	.string "SaffronCity$"

SaffronCity_Text_Sign5:
	.string "SaffronCity$"

SaffronCity_Text_Sign6:
	.string "SaffronCity$"

SaffronCity_Text_Sign7:
	.string "SaffronCity$"

SaffronCity_Text_Sign8:
	.string "SaffronCity$"

SaffronCity_Text_Sign9:
	.string "SaffronCity$"

SaffronCity_Text_LanceIsLegendary:
	.string "How can anyone not recognize LANCE?\n"
	.string "He's legendary!$"

SaffronCity_Text_SilphCoLargestBuilding:
	.string "SILPH CO. is the largest corporate\n"
	.string "building in KANTO.$"

SaffronCity_Text_DoorGuardGrunt:
	.string "Beat it, kid!\n"
	.string "The building is off-limits!$"

SaffronCity_Text_SabrinaPsychicPowers:
	.string "SABRINA, the GYM LEADER, has\n"
	.string "psychic powers!$"

SaffronCity_Text_TeamRocketTookOverSilph:
	.string "TEAM ROCKET took over SILPH CO.!$"

SaffronCity_Text_Pidgeot:
	.string "PIDGEOT: Pidgee-o!$"

SaffronCity_Text_RocketGrunt:
	.string "TEAM ROCKET rules this city!$"

SaffronCity_Text_SilphCoWorker:
	.string "I work at SILPH CO.\n"
	.string "We make all kinds of goods!$"

SaffronCity_Text_FightingDojoNextToGym:
	.string "The FIGHTING DOJO is right next\n"
	.string "to the GYM!$"

