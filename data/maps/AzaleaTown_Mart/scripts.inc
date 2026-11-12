AzaleaTown_Mart_MapScripts::
	.byte 0

AzaleaTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message AzaleaTown_Mart_Text_Welcome
	waitmessage
	@gba-only
	pokemart AzaleaTown_Mart_Pokemart_Stock
	msgbox AzaleaTown_Mart_Text_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	@gba-only
	.align 2
AzaleaTown_Mart_Pokemart_Stock:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	@gba-only
	pokemartlistend

AzaleaTown_Mart_EventScript_Shopper::
	msgbox AzaleaTown_Mart_Text_Shopper, MSGBOX_NPC
	end
AzaleaTown_Mart_Text_Welcome:
	.string "Welcome! How may I serve you?$"

AzaleaTown_Mart_Text_PleaseComeAgain:
	.string "Please come again!$"

AzaleaTown_Mart_Text_Shopper:
	.string "The AZALEA TOWN Poké Mart stocks\n"
	.string "Ultra Balls, Full Heals, and\p"
	.string "Revives!\n"
	.string "Never head onto a long route\p"
	.string "without Escape Ropes and Repels.$"

