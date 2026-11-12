Route35_MapScripts::
	.byte 0

Route35_EventScript_RouteSign::
	msgbox Route35_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route35_EventScript_Trainer1::
	trainerbattle_single TRAINER_NOB_1, Route35_Text_Trainer1Intro, Route35_Text_Trainer1Defeat
	msgbox Route35_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route35_EventScript_Trainer2::
	trainerbattle_single TRAINER_ROSE_1, Route35_Text_Trainer2Intro, Route35_Text_Trainer2Defeat
	msgbox Route35_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route35_Text_Sign1:
	.string "ROUTE 35\n"
	.string "GOLDENROD CITY - ROUTE 36$"

Route35_Text_Trainer1Intro:
	.string "Hold up on Route35! My Pokémon are\n"
	.string "itching for a match!$"

Route35_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route35_Text_Trainer1Post:
	.string "Exploring every corner of Route35\n"
	.string "always turns up new surprises!$"

Route35_Text_Trainer2Intro:
	.string "CAMPER: Travelling across Route35?\n"
	.string "Show me your team's synergy!$"

Route35_Text_Trainer2Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route35_Text_Trainer2Post:
	.string "I've been camping out waiting for\n"
	.string "a worthy challenger!$"

