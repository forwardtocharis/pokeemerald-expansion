Route39_MapScripts::
	.byte 0

Route39_EventScript_RouteSign::
	msgbox Route39_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route39_EventScript_Trainer1::
	trainerbattle_single TRAINER_TIMOTHY_1, Route39_Text_Trainer1Intro, Route39_Text_Trainer1Defeat
	msgbox Route39_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route39_EventScript_Trainer2::
	trainerbattle_single TRAINER_ROSE_4, Route39_Text_Trainer2Intro, Route39_Text_Trainer2Defeat
	msgbox Route39_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route39_Text_Sign1:
	.string "ROUTE 39\n"
	.string "ROUTE 38 - OLIVINE CITY$"

Route39_Text_Trainer1Intro:
	.string "Hold up on Route39! My Pokémon are\n"
	.string "itching for a match!$"

Route39_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route39_Text_Trainer1Post:
	.string "Exploring every corner of Route39\n"
	.string "always turns up new surprises!$"

Route39_Text_Trainer2Intro:
	.string "ACE TRAINER: Travelling across\n"
	.string "Route39? Show me your team's\p"
	.string "synergy!$"

Route39_Text_Trainer2Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route39_Text_Trainer2Post:
	.string "Only sharp strategy will carry you\n"
	.string "through the League challenge!$"

