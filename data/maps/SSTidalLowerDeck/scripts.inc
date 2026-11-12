SSTidalLowerDeck_MapScripts::
	.byte 0

SSTidalLowerDeck_EventScript_Phillip::
	trainerbattle_single TRAINER_PHILLIP, SSTidalLowerDeck_Text_PhillipIntro, SSTidalLowerDeck_Text_PhillipDefeat
	msgbox SSTidalLowerDeck_Text_PhillipPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalLowerDeck_EventScript_Leonard::
	trainerbattle_single TRAINER_LEONARD, SSTidalLowerDeck_Text_LeonardIntro, SSTidalLowerDeck_Text_LeonardDefeat
	msgbox SSTidalLowerDeck_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalLowerDeck_Text_PhillipIntro:
	.string "Arrrgh! I'm fed up and dog-tired of\n"
	.string "cleaning this huge place!\p"
	.string "Let's have a quick battle!$"

SSTidalLowerDeck_Text_PhillipDefeat:
	.string "Little bro, I lost!$"

SSTidalLowerDeck_Text_PhillipPostBattle:
	.string "We're the CLEANUP BROTHERS!\p"
	.string "The old one dumps the detergent,\n"
	.string "and the young one does the scrubbing!$"

SSTidalLowerDeck_Text_LeonardIntro:
	.string "This is the bottom of the ship's hull.\n"
	.string "There's plenty of room.\l"
	.string "It'll be alright for a POKéMON battle.$"

SSTidalLowerDeck_Text_LeonardDefeat:
	.string "Big bro, I lost!$"

SSTidalLowerDeck_Text_LeonardPostBattle:
	.string "We're the CLEANUP BROTHERS!\p"
	.string "The old one dumps the detergent,\n"
	.string "and the young one does the scrubbing!$"

SSTidalLowerDeck_EventScript_ChampionshipReturnSailor::
	lock
	faceplayer
	msgbox SSTidalLowerDeck_Text_ReturnHarborPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SSTidalLowerDeck_EventScript_CancelReturn
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
	waitstate
	release
	end

SSTidalLowerDeck_EventScript_CancelReturn::
	release
	end

SSTidalLowerDeck_EventScript_CompetitivePrepVendor::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SSTidalLowerDeck_Pokemart_CompetitivePrep
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SSTidalLowerDeck_Pokemart_CompetitivePrep:
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_BOTTLE_CAP
	.2byte ITEM_ADAMANT_MINT
	.2byte ITEM_JOLLY_MINT
	.2byte ITEM_MODEST_MINT
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_BOLD_MINT
	.2byte ITEM_CAREFUL_MINT
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_HP_UP
	.2byte ITEM_LINKING_CORD
	pokemartlistend

SSTidalLowerDeck_EventScript_WorldChampionshipAnnouncer::
	lock
	faceplayer
	goto_if_lt VAR_TOTAL_BADGES, 32, SSTidalLowerDeck_EventScript_WorldChampionshipLocked
	switch VAR_SS_ANNE_CHAMPIONSHIP_STAGE
	case 0, SSTidalLowerDeck_EventScript_Stage0_Steven
	case 1, SSTidalLowerDeck_EventScript_Stage1_Blue
	case 2, SSTidalLowerDeck_EventScript_Stage2_Lance
	case 3, SSTidalLowerDeck_EventScript_Stage3_Cynthia
	case 4, SSTidalLowerDeck_EventScript_Stage4_Red
	goto SSTidalLowerDeck_EventScript_Stage0_Steven
	end

SSTidalLowerDeck_EventScript_WorldChampionshipLocked::
	msgbox SSTidalLowerDeck_Text_WorldChampionshipLocked, MSGBOX_DEFAULT
	release
	end

SSTidalLowerDeck_EventScript_Stage0_Steven::
	msgbox SSTidalLowerDeck_Text_Stage0_IntroPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SSTidalLowerDeck_EventScript_DeclineStage
	msgbox SSTidalLowerDeck_Text_Stage0_StevenEnter, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_CHAMPION_STEVEN_REMATCH, SSTidalLowerDeck_Text_StevenDefeat
	special HealPlayerParty
	setvar VAR_SS_ANNE_CHAMPIONSHIP_STAGE, 1
	msgbox SSTidalLowerDeck_Text_Stage0_StevenPost, MSGBOX_DEFAULT
	release
	end

SSTidalLowerDeck_EventScript_Stage1_Blue::
	msgbox SSTidalLowerDeck_Text_Stage1_IntroPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SSTidalLowerDeck_EventScript_DeclineStage
	msgbox SSTidalLowerDeck_Text_Stage1_BlueEnter, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_CHAMPION_BLUE_REMATCH, SSTidalLowerDeck_Text_BlueDefeat
	special HealPlayerParty
	setvar VAR_SS_ANNE_CHAMPIONSHIP_STAGE, 2
	msgbox SSTidalLowerDeck_Text_Stage1_BluePost, MSGBOX_DEFAULT
	release
	end

SSTidalLowerDeck_EventScript_Stage2_Lance::
	msgbox SSTidalLowerDeck_Text_Stage2_IntroPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SSTidalLowerDeck_EventScript_DeclineStage
	msgbox SSTidalLowerDeck_Text_Stage2_LanceEnter, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_CHAMPION_LANCE_REMATCH, SSTidalLowerDeck_Text_LanceDefeat
	special HealPlayerParty
	setvar VAR_SS_ANNE_CHAMPIONSHIP_STAGE, 3
	msgbox SSTidalLowerDeck_Text_Stage2_LancePost, MSGBOX_DEFAULT
	release
	end

SSTidalLowerDeck_EventScript_Stage3_Cynthia::
	msgbox SSTidalLowerDeck_Text_Stage3_IntroPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SSTidalLowerDeck_EventScript_DeclineStage
	msgbox SSTidalLowerDeck_Text_Stage3_CynthiaEnter, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_CHAMPION_CYNTHIA_REMATCH, SSTidalLowerDeck_Text_CynthiaDefeat
	special HealPlayerParty
	setvar VAR_SS_ANNE_CHAMPIONSHIP_STAGE, 4
	playfanfare MUS_OBTAIN_BADGE
	msgbox SSTidalLowerDeck_Text_Stage3_CynthiaPost, MSGBOX_DEFAULT
	waitfanfare
	release
	end

SSTidalLowerDeck_EventScript_Stage4_Red::
	msgbox SSTidalLowerDeck_Text_Stage4_IntroPrompt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SSTidalLowerDeck_EventScript_DeclineStage
	msgbox SSTidalLowerDeck_Text_Stage4_RedEnter, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_CHAMPION_RED_POSTGAME, SSTidalLowerDeck_Text_RedDefeat
	special HealPlayerParty
	setflag FLAG_WON_WORLD_CHAMPIONSHIP
	setflag FLAG_DEFEATED_RED_POSTGAME
	setvar VAR_SS_ANNE_CHAMPIONSHIP_STAGE, 0
	playfanfare MUS_OBTAIN_SYMBOL
	msgbox SSTidalLowerDeck_Text_WorldChampionCrowned, MSGBOX_DEFAULT
	waitfanfare
	release
	end

SSTidalLowerDeck_EventScript_DeclineStage::
	msgbox SSTidalLowerDeck_Text_DeclineStage, MSGBOX_DEFAULT
	release
	end

SSTidalLowerDeck_Text_ReturnHarborPrompt:
	.string "Would you like to disembark from\n"
	.string "the WORLD CHAMPIONSHIP liner and\l"
	.string "return to SLATEPORT HARBOR?$"

SSTidalLowerDeck_Text_WorldChampionshipLocked:
	.string "Welcome to the S.S. ANNE WORLD\n"
	.string "CHAMPIONSHIP Grand Ballroom!\p"
	.string "Only TRAINERS who have earned all\n"
	.string "32 GYM BADGES across HOENN, KANTO,\l"
	.string "JOHTO, and SINNOH may compete!$"

SSTidalLowerDeck_Text_DeclineStage:
	.string "ANNOUNCER: Take a moment to catch\n"
	.string "your breath, and speak with me\l"
	.string "when you are ready for the next round!$"

SSTidalLowerDeck_Text_Stage0_IntroPrompt:
	.string "ANNOUNCER: Welcome to the S.S. ANNE\n"
	.string "WORLD CHAMPIONSHIP Grand Ballroom!\p"
	.string "Round 1 features HOENN CHAMPION\n"
	.string "STEVEN! Are you ready to begin?$"

SSTidalLowerDeck_Text_Stage0_StevenEnter:
	.string "STEVEN: Across four regions and\n"
	.string "thirty-two Gyms, your resolve has\l"
	.string "shined brighter than any stone.\p"
	.string "Show me the full brilliance of your\n"
	.string "team!$"

SSTidalLowerDeck_Text_StevenDefeat:
	.string "Magnificent… You have surpassed\n"
	.string "even my finest expectations.$"

SSTidalLowerDeck_Text_Stage0_StevenPost:
	.string "STEVEN: I applaud you, {PLAYER}.\n"
	.string "I shall watch the rest of your\l"
	.string "gauntlet from the VIP box.\p"
	.string "ANNOUNCER: Next up in Round 2 is\n"
	.string "KANTO CHAMPION BLUE!$"

SSTidalLowerDeck_Text_Stage1_IntroPrompt:
	.string "ANNOUNCER: Round 2 of the WORLD\n"
	.string "CHAMPIONSHIP pits you against\l"
	.string "KANTO CHAMPION BLUE! Ready?$"

SSTidalLowerDeck_Text_Stage1_BlueEnter:
	.string "BLUE: Yo, {PLAYER}! I heard you\n"
	.string "swept every Gym in four regions!\p"
	.string "Too bad for you, I'm about to show\n"
	.string "everyone aboard this ship who the\l"
	.string "real number-one Champion is!$"

SSTidalLowerDeck_Text_BlueDefeat:
	.string "What?! No way! Even on the world\n"
	.string "stage, you still outplayed me!$"

SSTidalLowerDeck_Text_Stage1_BluePost:
	.string "BLUE: Tch… Fine, you win this round!\n"
	.string "You'd better not lose to Lance or\l"
	.string "Cynthia after beating me!\p"
	.string "ANNOUNCER: Advancing to Round 3\n"
	.string "against JOHTO CHAMPION LANCE!$"

SSTidalLowerDeck_Text_Stage2_IntroPrompt:
	.string "ANNOUNCER: Round 3 of the WORLD\n"
	.string "CHAMPIONSHIP features JOHTO\l"
	.string "CHAMPION LANCE! Shall we begin?$"

SSTidalLowerDeck_Text_Stage2_LanceEnter:
	.string "LANCE: The roar of the crowd and\n"
	.string "the ocean waves… There is no finer\l"
	.string "arena for my dragons to soar!\p"
	.string "Come, {PLAYER}! Face the full might\n"
	.string "of the Dragon Master!$"

SSTidalLowerDeck_Text_LanceDefeat:
	.string "Truly peerless! Even my fiercest\n"
	.string "dragons bow before your command!$"

SSTidalLowerDeck_Text_Stage2_LancePost:
	.string "LANCE: You have defeated three\n"
	.string "Regional Champions in succession.\p"
	.string "ANNOUNCER: Round 4 - the Semifinal\n"
	.string "against SINNOH CHAMPION CYNTHIA!$"

SSTidalLowerDeck_Text_Stage3_IntroPrompt:
	.string "ANNOUNCER: Round 4 features SINNOH\n"
	.string "CHAMPION CYNTHIA! Are you ready?$"

SSTidalLowerDeck_Text_Stage3_CynthiaEnter:
	.string "CYNTHIA: Every battle tells a story\n"
	.string "of how a Trainer and their Pokémon\l"
	.string "walked together.\p"
	.string "Let us make this match one for the\n"
	.string "history books, {PLAYER}!$"

SSTidalLowerDeck_Text_CynthiaDefeat:
	.string "Remarkable… Your heart and your\n"
	.string "Pokémon beat as one!$"

SSTidalLowerDeck_Text_Stage3_CynthiaPost:
	.string "ANNOUNCER: Ladies and gentlemen!\n"
	.string "{PLAYER} has defeated all four\l"
	.string "Regional Champions!\p"
	.string "The ballroom lights dim… Stepping\n"
	.string "down from the Sun Deck for the\l"
	.string "Grand Finale is GRAND CHAMPION RED!$"

SSTidalLowerDeck_Text_Stage4_IntroPrompt:
	.string "ANNOUNCER: This is the WORLD\n"
	.string "CHAMPIONSHIP GRAND FINALE against\l"
	.string "LIVING LEGEND RED!\p"
	.string "Red's Level 100 Championship team\n"
	.string "is assembled anew for every match.\l"
	.string "Are you ready for the ultimate battle?$"

SSTidalLowerDeck_Text_Stage4_RedEnter:
	.string "RED: … … …!\n"
	.string "… … …!$"

SSTidalLowerDeck_Text_RedDefeat:
	.string "… … …!$"

SSTidalLowerDeck_Text_WorldChampionCrowned:
	.string "ANNOUNCER: UNBELIEVABLE!\n"
	.string "STEVEN, BLUE, LANCE, CYNTHIA, and\l"
	.string "even GRAND CHAMPION RED have fallen!\p"
	.string "All hail {PLAYER}, the undisputed\n"
	.string "POKéMON WORLD CHAMPION!$"


