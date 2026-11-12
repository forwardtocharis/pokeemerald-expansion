Route41_MapScripts::
	.byte 0

Route41_EventScript_RouteSign::
	msgbox Route41_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route41_EventScript_Trainer1::
	trainerbattle_single TRAINER_LEAH, Route41_Text_Trainer1Intro, Route41_Text_Trainer1Defeat
	msgbox Route41_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route41_EventScript_Trainer2::
	trainerbattle_single TRAINER_WARREN, Route41_Text_Trainer2Intro, Route41_Text_Trainer2Defeat
	msgbox Route41_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route41_EventScript_Trainer3::
	trainerbattle_single TRAINER_DUSTY_2, Route41_Text_Trainer3Intro, Route41_Text_Trainer3Defeat
	msgbox Route41_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route41_Text_Sign1:
	.string "ROUTE 41\n"
	.string "ROUTE 40 - CIANWOOD CITY$"

Route41_Text_Trainer1Intro:
	.string "Hold up on Route41! My Pokémon are\n"
	.string "itching for a match!$"

Route41_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route41_Text_Trainer1Post:
	.string "Exploring every corner of Route41\n"
	.string "always turns up new surprises!$"

Route41_Text_Trainer2Intro:
	.string "I've been training on Route41 to\n"
	.string "challenge the Gym Leaders!$"

Route41_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route41_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route41_Text_Trainer3Intro:
	.string "PSYCHIC: Travelling across\n"
	.string "Route41? Show me your team's\p"
	.string "synergy!$"

Route41_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route41_Text_Trainer3Post:
	.string "I foresaw our battle along this\n"
	.string "path before you even arrived!$"

