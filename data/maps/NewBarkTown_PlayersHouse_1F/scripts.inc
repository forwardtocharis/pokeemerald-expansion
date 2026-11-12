NewBarkTown_PlayersHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewBarkTown_PlayersHouse_1F_OnTransition
	.byte 0

NewBarkTown_PlayersHouse_1F_OnTransition:
	setrespawn HEAL_LOCATION_NEW_BARK_TOWN
	end

NewBarkTown_PlayersHouse_1F_EventScript_Mom::
	lock
	faceplayer
	msgbox NewBarkTown_PlayersHouse_1F_Text_MomWelcome, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	fadescreen FADE_FROM_BLACK
	msgbox NewBarkTown_PlayersHouse_1F_Text_MomHealed, MSGBOX_DEFAULT
	release
	end
NewBarkTown_PlayersHouse_1F_Text_MomWelcome:
	.string "MOM: Welcome home, {PLAYER}!\n"
	.string "You and your Pokémon look like\p"
	.string "you've been working hard. Rest a\n"
	.string "moment!$"

NewBarkTown_PlayersHouse_1F_Text_MomHealed:
	.string "MOM: There! You and your Pokémon\n"
	.string "are looking great again.\p"
	.string "Be careful out there on your\n"
	.string "adventure!$"

