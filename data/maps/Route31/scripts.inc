Route31_MapScripts::
	.byte 0

Route31_EventScript_RouteSign::
	msgbox Route31_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route31_EventScript_Trainer1::
	trainerbattle_single TRAINER_DWAYNE, Route31_Text_Trainer1Intro, Route31_Text_Trainer1Defeat
	msgbox Route31_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route31_EventScript_Trainer2::
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, Route31_Text_Trainer2Intro, Route31_Text_Trainer2Defeat
	msgbox Route31_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route31_Text_Sign1:
	.string "ROUTE 31\n"
	.string "ROUTE 30 - VIOLET CITY$"

Route31_Text_Trainer1Intro:
	.string "Hold up on Route31! My Pokémon are\n"
	.string "itching for a match!$"

Route31_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route31_Text_Trainer1Post:
	.string "Exploring every corner of Route31\n"
	.string "always turns up new surprises!$"

Route31_Text_Trainer2Intro:
	.string "ACE TRAINER: Travelling across\n"
	.string "Route31? Show me your team's\p"
	.string "synergy!$"

Route31_Text_Trainer2Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route31_Text_Trainer2Post:
	.string "Every badge you earn raises the\n"
	.string "stakes across all four regions!$"

