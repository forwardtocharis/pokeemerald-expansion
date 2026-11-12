Route210_MapScripts::
	.byte 0

Route210_EventScript_RouteSign::
	msgbox Route210_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route210_EventScript_Trainer1::
	trainerbattle_single TRAINER_THALIA_1, Route210_Text_Trainer1Intro, Route210_Text_Trainer1Defeat
	msgbox Route210_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route210_EventScript_Trainer2::
	trainerbattle_single TRAINER_TIMOTHY_1, Route210_Text_Trainer2Intro, Route210_Text_Trainer2Defeat
	msgbox Route210_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route210_EventScript_Trainer3::
	trainerbattle_single TRAINER_FELIX, Route210_Text_Trainer3Intro, Route210_Text_Trainer3Defeat
	msgbox Route210_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route210_Text_Sign1:
	.string "ROUTE 210\n"
	.string "SOLACEON TOWN - ROUTE 215$"

Route210_Text_Trainer1Intro:
	.string "Hold up on Route210! My Pokémon\n"
	.string "are itching for a match!$"

Route210_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route210_Text_Trainer1Post:
	.string "Exploring every corner of Route210\n"
	.string "always turns up new surprises!$"

Route210_Text_Trainer2Intro:
	.string "I've been training on Route210 to\n"
	.string "challenge the Gym Leaders!$"

Route210_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route210_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route210_Text_Trainer3Intro:
	.string "ACE TRAINER: Travelling across\n"
	.string "Route210? Show me your team's\p"
	.string "synergy!$"

Route210_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route210_Text_Trainer3Post:
	.string "Only sharp strategy will carry you\n"
	.string "through the League challenge!$"

