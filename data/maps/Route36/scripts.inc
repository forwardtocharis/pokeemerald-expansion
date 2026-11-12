Route36_MapScripts::
	.byte 0

Route36_EventScript_RouteSign::
	msgbox Route36_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route36_EventScript_Trainer1::
	trainerbattle_single TRAINER_SAWYER_1, Route36_Text_Trainer1Intro, Route36_Text_Trainer1Defeat
	msgbox Route36_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route36_EventScript_Trainer2::
	trainerbattle_single TRAINER_DUSTY_1, Route36_Text_Trainer2Intro, Route36_Text_Trainer2Defeat
	msgbox Route36_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route36_EventScript_Trainer3::
	trainerbattle_single TRAINER_FELIX, Route36_Text_Trainer3Intro, Route36_Text_Trainer3Defeat
	msgbox Route36_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route36_Text_Sign1:
	.string "ROUTE 36\n"
	.string "ROUTE 35 - VIOLET CITY$"

Route36_Text_Trainer1Intro:
	.string "Hold up on Route36! My Pokémon are\n"
	.string "itching for a match!$"

Route36_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route36_Text_Trainer1Post:
	.string "Exploring every corner of Route36\n"
	.string "always turns up new surprises!$"

Route36_Text_Trainer2Intro:
	.string "I've been training on Route36 to\n"
	.string "challenge the Gym Leaders!$"

Route36_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route36_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route36_Text_Trainer3Intro:
	.string "LASS: Travelling across Route36?\n"
	.string "Show me your team's synergy!$"

Route36_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route36_Text_Trainer3Post:
	.string "My Pokémon and I have been\n"
	.string "practicing combos all morning!$"

