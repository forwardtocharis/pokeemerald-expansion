OlivineCity_Mart_MapScripts::
	.byte 0

OlivineCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message OlivineCity_Mart_Text_Welcome
	waitmessage
	@gba-only
	pokemart OlivineCity_Mart_Pokemart_Stock
	msgbox OlivineCity_Mart_Text_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	@gba-only
	.align 2
OlivineCity_Mart_Pokemart_Stock:
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

OlivineCity_Mart_EventScript_Shopper::
	msgbox OlivineCity_Mart_Text_Shopper, MSGBOX_NPC
	end
OlivineCity_Mart_Text_Welcome:
	.string "Welcome! How may I serve you?$"

OlivineCity_Mart_Text_PleaseComeAgain:
	.string "Please come again!$"

OlivineCity_Mart_Text_Shopper:
	.string "The OLIVINE CITY Poké Mart stocks\n"
	.string "Ultra Balls, Full Heals, and\p"
	.string "Revives!\n"
	.string "Never head onto a long route\p"
	.string "without Escape Ropes and Repels.$"

