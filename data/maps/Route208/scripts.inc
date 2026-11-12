Route208_MapScripts::
	.byte 0

Route208_EventScript_RouteSign::
	msgbox Route208_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route208_EventScript_Trainer1::
	trainerbattle_single TRAINER_SAWYER_1, Route208_Text_Trainer1Intro, Route208_Text_Trainer1Defeat
	msgbox Route208_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route208_EventScript_Trainer2::
	trainerbattle_single TRAINER_DUSTY_1, Route208_Text_Trainer2Intro, Route208_Text_Trainer2Defeat
	msgbox Route208_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route208_EventScript_Trainer3::
	trainerbattle_single TRAINER_DAISY, Route208_Text_Trainer3Intro, Route208_Text_Trainer3Defeat
	msgbox Route208_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route208_Text_Sign1:
	.string "ROUTE 208\n"
	.string "ROUTE 207 - HEARTHOME CITY$"

Route208_Text_Trainer1Intro:
	.string "Hold up on Route208! My Pokémon\n"
	.string "are itching for a match!$"

Route208_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route208_Text_Trainer1Post:
	.string "Exploring every corner of Route208\n"
	.string "always turns up new surprises!$"

Route208_Text_Trainer2Intro:
	.string "I've been training on Route208 to\n"
	.string "challenge the Gym Leaders!$"

Route208_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route208_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route208_Text_Trainer3Intro:
	.string "LASS: Travelling across Route208?\n"
	.string "Show me your team's synergy!$"

Route208_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route208_Text_Trainer3Post:
	.string "My Pokémon and I have been\n"
	.string "practicing combos all morning!$"

