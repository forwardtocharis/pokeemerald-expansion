Route33_MapScripts::
	.byte 0

Route33_EventScript_RouteSign::
	msgbox Route33_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route33_EventScript_Trainer1::
	trainerbattle_single TRAINER_EDWARD, Route33_Text_Trainer1Intro, Route33_Text_Trainer1Defeat
	msgbox Route33_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route33_EventScript_Trainer2::
	trainerbattle_single TRAINER_ARCHIE, Route33_Text_Trainer2Intro, Route33_Text_Trainer2Defeat
	msgbox Route33_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route33_Text_Sign1:
	.string "ROUTE 33\n"
	.string "ROUTE 32 - AZALEA TOWN$"

Route33_Text_Trainer1Intro:
	.string "Hold up on Route33! My Pokémon are\n"
	.string "itching for a match!$"

Route33_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route33_Text_Trainer1Post:
	.string "Exploring every corner of Route33\n"
	.string "always turns up new surprises!$"

Route33_Text_Trainer2Intro:
	.string "PSYCHIC: Travelling across\n"
	.string "Route33? Show me your team's\p"
	.string "synergy!$"

Route33_Text_Trainer2Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route33_Text_Trainer2Post:
	.string "I foresaw our battle along this\n"
	.string "path before you even arrived!$"

