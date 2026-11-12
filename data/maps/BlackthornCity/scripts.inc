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

BlackthornCity_EventScript_JohtoLeagueEnvoy::
	lock
	faceplayer
	goto_if_lt VAR_JOHTO_BADGES, 8, BlackthornCity_EventScript_JohtoLeagueNeedBadges
	msgbox BlackthornCity_Text_JohtoLeaguePrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BlackthornCity_EventScript_TravelToIndigoPlateau
	release
	end

BlackthornCity_EventScript_JohtoLeagueNeedBadges::
	msgbox BlackthornCity_Text_JohtoLeagueNeedBadges, MSGBOX_DEFAULT
	release
	end

BlackthornCity_EventScript_TravelToIndigoPlateau::
	setvar VAR_CURRENT_REGION, 2
	msgbox BlackthornCity_Text_JohtoLeagueDepart, MSGBOX_DEFAULT
	closemessage
	warp MAP_INDIGO_PLATEAU_POKEMON_CENTER_1F, 8, 4
	waitstate
	release
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

BlackthornCity_Text_JohtoLeagueNeedBadges:
	.string "I am an envoy from the Indigo\n"
	.string "Plateau Pokémon League!\p"
	.string "Once you have earned all 8 Johto\n"
	.string "Gym Badges, speak with me to\p"
	.string "travel to Indigo Plateau's Johto\n"
	.string "League Hall!$"

BlackthornCity_Text_JohtoLeaguePrompt:
	.string "Congratulations on earning all 8\n"
	.string "Johto Gym Badges!\p"
	.string "Would you like me to escort you to\n"
	.string "Indigo Plateau Door 2 to challenge\p"
	.string "the Johto Elite Four (Will, Koga,\n"
	.string "Silver, Karen, and Lance)?$"

BlackthornCity_Text_JohtoLeagueDepart:
	.string "Right away! Off we go to Indigo\n"
	.string "Plateau!$"

