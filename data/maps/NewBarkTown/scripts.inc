NewBarkTown_MapScripts::
	.byte 0

NewBarkTown_EventScript_TownSign::
	msgbox NewBarkTown_Text_Sign1, MSGBOX_SIGN
	end

NewBarkTown_EventScript_ElmsLabSign::
	msgbox NewBarkTown_Text_Sign2, MSGBOX_SIGN
	end

NewBarkTown_EventScript_ProfElm::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_MYSTIC_TICKET, NewBarkTown_EventScript_ElmAfterTicket
	goto_if_set FLAG_JOHTO_BADGE08_GET, NewBarkTown_EventScript_ElmGiveMysticTicket
	goto_if_ge VAR_TOTAL_BADGES, 8, NewBarkTown_EventScript_ElmGiveMysticTicket
	msgbox NewBarkTown_Text_ElmEncourage, MSGBOX_NPC
	end

NewBarkTown_EventScript_ElmGiveMysticTicket::
	msgbox NewBarkTown_Text_ElmGiveMysticTicket, MSGBOX_DEFAULT
	giveitem ITEM_MYSTIC_TICKET
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
	setflag FLAG_RECEIVED_MYSTIC_TICKET
	msgbox NewBarkTown_Text_ElmMysticTicketExplanation, MSGBOX_DEFAULT
	release
	end

NewBarkTown_EventScript_ElmAfterTicket::
	msgbox NewBarkTown_Text_ElmAfterTicket, MSGBOX_NPC
	end

@ === BEGIN GENERATED EVENTS ===

NewBarkTown_EventScript_AutoNPC1::
	msgbox NewBarkTown_Text_AutoNPC1, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
NewBarkTown_Text_Sign1:
	.string "NEW BARK TOWN\n"
	.string "Where Winds of a New Beginning Blow$"

NewBarkTown_Text_Sign2:
	.string "NEW BARK TOWN\n"
	.string "Where Winds of a New Beginning Blow$"

NewBarkTown_Text_ElmEncourage:
	.string "ELM: Hello, {PLAYER}! How is your journey across JOHTO progressing?\n"
	.string "If you earn all 8 BADGES of our\p"
	.string "region, I have an astounding\n"
	.string "discovery of ancient legend to\p"
	.string "share with you!$"

NewBarkTown_Text_ElmGiveMysticTicket:
	.string "ELM: Incredible, {PLAYER}! You have conquered all the GYMS of JOHTO!\n"
	.string "An expedition team recently\p"
	.string "recovered an ancient charter to\n"
	.string "NAVEL ROCK!\p"
	.string "Legends say the guardian of the\n"
	.string "sea, LUGIA, and the rainbow bird,\p"
	.string "HO-OH,\n"
	.string "both roost in its deep caverns and\p"
	.string "towering peak!\n"
	.string "Please, take this MYSTIC TICKET!$"

NewBarkTown_Text_ElmMysticTicketExplanation:
	.string "You can board the ferry in\n"
	.string "LILYCOVE CITY or VERMILION CITY\p"
	.string "to explore NAVEL ROCK with that\n"
	.string "MYSTIC TICKET.\p"
	.string "May the ancient guardians smile\n"
	.string "upon your courage!$"

NewBarkTown_Text_ElmAfterTicket:
	.string "ELM: Have you visited NAVEL ROCK\n"
	.string "yet?\p"
	.string "May the blessing of the rainbow\n"
	.string "wings guide your steps!$"

NewBarkTown_Text_AutoNPC1:
	.string "The breeze rolling off the bay\n"
	.string "smells like fresh beginnings!\p"
	.string "Professor Elm's Lab is right here\n"
	.string "in New Bark Town.$"

