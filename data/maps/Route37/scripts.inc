Route37_MapScripts::
	.byte 0

Route37_EventScript_RouteSign::
	msgbox Route37_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route37_EventScript_Trainer1::
	trainerbattle_single TRAINER_COLE, Route37_Text_Trainer1Intro, Route37_Text_Trainer1Defeat
	msgbox Route37_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route37_EventScript_Trainer2::
	trainerbattle_single TRAINER_VIOLET, Route37_Text_Trainer2Intro, Route37_Text_Trainer2Defeat
	msgbox Route37_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route37_Text_Sign1:
	.string "ROUTE 37\n"
	.string "ROUTE 36 - ECRUTEAK CITY$"

Route37_Text_Trainer1Intro:
	.string "Hold up on Route37! My Pokémon are\n"
	.string "itching for a match!$"

Route37_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route37_Text_Trainer1Post:
	.string "Exploring every corner of Route37\n"
	.string "always turns up new surprises!$"

Route37_Text_Trainer2Intro:
	.string "LASS: Travelling across Route37?\n"
	.string "Show me your team's synergy!$"

Route37_Text_Trainer2Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route37_Text_Trainer2Post:
	.string "My Pokémon and I have been\n"
	.string "practicing combos all morning!$"

