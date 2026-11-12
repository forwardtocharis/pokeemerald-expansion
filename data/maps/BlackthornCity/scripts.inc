BlackthornCity_MapScripts::
	.byte 0

BlackthornCity_EventScript_CitySign::
	msgbox BlackthornCity_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

BlackthornCity_EventScript_GymSignAuto::
	msgbox BlackthornCity_Text_GymSignAuto, MSGBOX_SIGN
	end

BlackthornCity_EventScript_ChampionLance::
	lock
	faceplayer
	msgbox BlackthornCity_Text_ChampionLanceChallenge, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BlackthornCity_EventScript_ChampionLanceDecline
	@gba-only
	trainerbattle_no_intro TRAINER_CHAMPION_LANCE_REMATCH, BlackthornCity_Text_ChampionLanceDefeat
	setflag FLAG_DEFEATED_JOHTO_CHAMPION_REMATCH
	msgbox BlackthornCity_Text_ChampionLancePost, MSGBOX_DEFAULT
	release
	end

BlackthornCity_EventScript_ChampionLanceDecline::
	msgbox BlackthornCity_Text_ChampionLanceWait, MSGBOX_DEFAULT
	release
	end

BlackthornCity_EventScript_AutoNPC1::
	msgbox BlackthornCity_Text_AutoNPC1, MSGBOX_NPC
	end

BlackthornCity_EventScript_AutoNPC2::
	msgbox BlackthornCity_Text_AutoNPC2, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
BlackthornCity_Text_Sign1:
	.string "BLACKTHORN CITY\n"
	.string "A Quiet Mountain Retreat$"

BlackthornCity_Text_GymSignAuto:
	.string "BLACKTHORN CITY POKéMON GYM\n"
	.string "LEADER: CLAIR - Master of DRAGON!$"

BlackthornCity_Text_ChampionLanceChallenge:
	.string "LANCE: I am Lance, Champion of the\n"
	.string "Indigo League and son of\p"
	.string "Blackthorn!\n"
	.string "My caped Dragon-type team senses\p"
	.string "extraordinary strength in your\n"
	.string "Pokémon.\p"
	.string "Will you face me in an all-out\n"
	.string "Champion battle?$"

BlackthornCity_Text_ChampionLanceDefeat:
	.string "Magnificent! Your bond surpasses\n"
	.string "even my fiercest dragons!$"

BlackthornCity_Text_ChampionLancePost:
	.string "LANCE: You truly stand among the\n"
	.string "greatest Trainers across all four\p"
	.string "regions.\n"
	.string "Return anytime you wish to test\p"
	.string "your dragons against mine!$"

BlackthornCity_Text_ChampionLanceWait:
	.string "LANCE: Very well. Prepare your\n"
	.string "party and speak to me when you are\p"
	.string "ready!$"

BlackthornCity_Text_AutoNPC1:
	.string "Dragon tamers have guarded\n"
	.string "Blackthorn's mountain crags for\p"
	.string "generations.\n"
	.string "Only the strongest earn Clair's\p"
	.string "Rising Badge!$"

BlackthornCity_Text_AutoNPC2:
	.string "South of Blackthorn lies Route 45\n"
	.string "- rumor says legendary Trainers\p"
	.string "train along its cliffs!$"

