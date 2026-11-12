CelesticTown_MapScripts::
	.byte 0

CelesticTown_EventScript_TownSign::
	msgbox CelesticTown_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

CelesticTown_EventScript_ChampionCynthia::
	lock
	faceplayer
	msgbox CelesticTown_Text_ChampionCynthiaChallenge, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CelesticTown_EventScript_ChampionCynthiaDecline
	@gba-only
	trainerbattle_no_intro TRAINER_CHAMPION_CYNTHIA_REMATCH, CelesticTown_Text_ChampionCynthiaDefeat
	setflag FLAG_DEFEATED_SINNOH_CHAMPION_REMATCH
	msgbox CelesticTown_Text_ChampionCynthiaPost, MSGBOX_DEFAULT
	release
	end

CelesticTown_EventScript_ChampionCynthiaDecline::
	msgbox CelesticTown_Text_ChampionCynthiaWait, MSGBOX_DEFAULT
	release
	end

CelesticTown_EventScript_AutoNPC1::
	msgbox CelesticTown_Text_AutoNPC1, MSGBOX_NPC
	end

CelesticTown_EventScript_AutoNPC2::
	msgbox CelesticTown_Text_AutoNPC2, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
CelesticTown_Text_Sign1:
	.string "CELESTIC TOWN\n"
	.string "Living Past!$"

CelesticTown_Text_ChampionCynthiaChallenge:
	.string "CYNTHIA: Hello, {PLAYER}. Researching Sinnoh's myths always brings me back to Celestic Town.\n"
	.string "My Garchomp and I can feel how far\p"
	.string "you and your Pokémon have traveled\n"
	.string "together.\p"
	.string "Shall we have a Champion match\n"
	.string "right here?$"

CelesticTown_Text_ChampionCynthiaDefeat:
	.string "What a breathtaking battle... My\n"
	.string "heart is still racing!$"

CelesticTown_Text_ChampionCynthiaPost:
	.string "CYNTHIA: Every decision you made\n"
	.string "showed complete trust in your\p"
	.string "Pokémon.\n"
	.string "Let's battle again whenever your\p"
	.string "travels bring you through Sinnoh!$"

CelesticTown_Text_ChampionCynthiaWait:
	.string "CYNTHIA: Take all the time you\n"
	.string "need. History isn't going\p"
	.string "anywhere!$"

CelesticTown_Text_AutoNPC1:
	.string "Celestic Town preserves Sinnoh's\n"
	.string "oldest shrine paintings of Dialga\p"
	.string "and Palkia.\n"
	.string "Even Champion Cynthia studies our\p"
	.string "town's ancient lore.$"

CelesticTown_Text_AutoNPC2:
	.string "The air at the heart of Sinnoh\n"
	.string "feels timeless and serene.$"

