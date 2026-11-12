VeilstoneCity_Mart_MapScripts::
	.byte 0

VeilstoneCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message VeilstoneCity_Mart_Text_Welcome
	waitmessage
	@gba-only
	pokemart VeilstoneCity_Mart_Pokemart_Stock
	msgbox VeilstoneCity_Mart_Text_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	@gba-only
	.align 2
VeilstoneCity_Mart_Pokemart_Stock:
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
	.2byte ITEM_LINKING_CORD
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_ADAMANT_MINT
	.2byte ITEM_JOLLY_MINT
	.2byte ITEM_MODEST_MINT
	.2byte ITEM_TIMID_MINT
	@gba-only
	pokemartlistend

VeilstoneCity_Mart_EventScript_Shopper::
	msgbox VeilstoneCity_Mart_Text_Shopper, MSGBOX_NPC
	end
VeilstoneCity_Mart_Text_Welcome:
	.string "Welcome! How may I serve you?$"

VeilstoneCity_Mart_Text_PleaseComeAgain:
	.string "Please come again!$"

VeilstoneCity_Mart_Text_Shopper:
	.string "The VEILSTONE CITY Poké Mart\n"
	.string "stocks Ultra Balls, Full Heals,\p"
	.string "and Revives!\n"
	.string "Never head onto a long route\p"
	.string "without Escape Ropes and Repels.$"

