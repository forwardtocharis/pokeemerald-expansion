Route44_MapScripts::
	.byte 0

Route44_EventScript_RouteSign::
	msgbox Route44_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route44_EventScript_Trainer1::
	trainerbattle_single TRAINER_PRESTON, Route44_Text_Trainer1Intro, Route44_Text_Trainer1Defeat
	msgbox Route44_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Trainer2::
	trainerbattle_single TRAINER_DAPHNE, Route44_Text_Trainer2Intro, Route44_Text_Trainer2Defeat
	msgbox Route44_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Trainer3::
	trainerbattle_single TRAINER_BARRY, Route44_Text_Trainer3Intro, Route44_Text_Trainer3Defeat
	msgbox Route44_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route44_Text_Sign1:
	.string "ROUTE 44\n"
	.string "MAHOGANY TOWN - BLACKTHORN CITY$"

Route44_Text_Trainer1Intro:
	.string "Hold up on Route44! My Pokémon are\n"
	.string "itching for a match!$"

Route44_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route44_Text_Trainer1Post:
	.string "Exploring every corner of Route44\n"
	.string "always turns up new surprises!$"

Route44_Text_Trainer2Intro:
	.string "I've been training on Route44 to\n"
	.string "challenge the Gym Leaders!$"

Route44_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route44_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route44_Text_Trainer3Intro:
	.string "HIKER: Travelling across Route44?\n"
	.string "Show me your team's synergy!$"

Route44_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route44_Text_Trainer3Post:
	.string "The mountain trails test every\n"
	.string "bond between Trainer and Pokémon!$"

