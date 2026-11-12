Route218_MapScripts::
	.byte 0

Route218_EventScript_RouteSign::
	msgbox Route218_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route218_EventScript_Trainer1::
	trainerbattle_single TRAINER_PATRICIA, Route218_Text_Trainer1Intro, Route218_Text_Trainer1Defeat
	msgbox Route218_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route218_EventScript_Trainer2::
	trainerbattle_single TRAINER_DUSTY_3, Route218_Text_Trainer2Intro, Route218_Text_Trainer2Defeat
	msgbox Route218_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route218_Text_Sign1:
	.string "ROUTE 218\n"
	.string "JUBILIFE CITY - CANALAVE CITY$"

Route218_Text_Trainer1Intro:
	.string "Hold up on Route218! My Pokémon\n"
	.string "are itching for a match!$"

Route218_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route218_Text_Trainer1Post:
	.string "Exploring every corner of Route218\n"
	.string "always turns up new surprises!$"

Route218_Text_Trainer2Intro:
	.string "CAMPER: Travelling across\n"
	.string "Route218? Show me your team's\p"
	.string "synergy!$"

Route218_Text_Trainer2Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route218_Text_Trainer2Post:
	.string "I've been camping out waiting for\n"
	.string "a worthy challenger!$"

