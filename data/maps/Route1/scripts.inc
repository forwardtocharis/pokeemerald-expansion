Route1_MapScripts::
	.byte 0

Route1_EventScript_RouteSign::
	msgbox Route1_Text_Sign1, MSGBOX_SIGN
	end

Route1_EventScript_Boy::
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
	end

Route1_EventScript_MartClerk::
	msgbox Route1_Text_WorkAtPokeMart, MSGBOX_NPC
	end
Route1_Text_Sign1:
	.string "Route1$"

Route1_Text_CanJumpFromLedges:
	.string "See those ledges along the road?\n"
	.string "You can jump down from them!$"

Route1_Text_WorkAtPokeMart:
	.string "Hi! I work at a POKéMON MART in\n"
	.string "VIRIDIAN CITY.$"

