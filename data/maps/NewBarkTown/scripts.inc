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


NewBarkTown_Text_Sign1:
	.string "NewBarkTown"

NewBarkTown_Text_Sign2:
	.string "NewBarkTown"

NewBarkTown_Text_ElmEncourage:
	.string "ELM: Hello, {PLAYER}! How is your journey across JOHTO progressing?"
	.string "If you earn all 8 BADGES of our region, I have an astounding"
	.string "discovery of ancient legend to share with you!"

NewBarkTown_Text_ElmGiveMysticTicket:
	.string "ELM: Incredible, {PLAYER}! You have conquered all the GYMS of JOHTO!"
	.string "An expedition team recently recovered an ancient charter to NAVEL ROCK!"
	.string "Legends say the guardian of the sea, LUGIA, and the rainbow bird, HO-OH,"
	.string "both roost in its deep caverns and towering peak!"
	.string "Please, take this MYSTIC TICKET!"

NewBarkTown_Text_ElmMysticTicketExplanation:
	.string "You can board the ferry in LILYCOVE CITY or VERMILION CITY"
	.string "to explore NAVEL ROCK with that MYSTIC TICKET."
	.string "May the ancient guardians smile upon your courage!"

NewBarkTown_Text_ElmAfterTicket:
	.string "ELM: Have you visited NAVEL ROCK yet?"
	.string "May the blessing of the rainbow wings guide your steps!"

