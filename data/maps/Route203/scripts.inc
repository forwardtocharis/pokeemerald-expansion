Route203_MapScripts::
	.byte 0

Route203_EventScript_RouteSign::
	msgbox Route203_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route203_EventScript_Trainer1::
	trainerbattle_single TRAINER_DWAYNE, Route203_Text_Trainer1Intro, Route203_Text_Trainer1Defeat
	msgbox Route203_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route203_EventScript_Trainer2::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_5, Route203_Text_Trainer2Intro, Route203_Text_Trainer2Defeat
	msgbox Route203_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route203_Text_Sign1:
	.string "ROUTE 203\n"
	.string "JUBILIFE CITY - OREBURGH CITY$"

Route203_Text_Trainer1Intro:
	.string "Hold up on Route203! My Pokémon\n"
	.string "are itching for a match!$"

Route203_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route203_Text_Trainer1Post:
	.string "Exploring every corner of Route203\n"
	.string "always turns up new surprises!$"

Route203_Text_Trainer2Intro:
	.string "ACE TRAINER: Travelling across\n"
	.string "Route203? Show me your team's\p"
	.string "synergy!$"

Route203_Text_Trainer2Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route203_Text_Trainer2Post:
	.string "Every badge you earn raises the\n"
	.string "stakes across all four regions!$"

