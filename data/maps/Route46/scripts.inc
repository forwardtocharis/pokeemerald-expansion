Route46_MapScripts::
	.byte 0

Route46_EventScript_RouteSign::
	msgbox Route46_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route46_EventScript_Trainer1::
	trainerbattle_single TRAINER_JOSHUA, Route46_Text_Trainer1Intro, Route46_Text_Trainer1Defeat
	msgbox Route46_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route46_EventScript_Trainer2::
	trainerbattle_single TRAINER_RODNEY, Route46_Text_Trainer2Intro, Route46_Text_Trainer2Defeat
	msgbox Route46_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route46_Text_Sign1:
	.string "ROUTE 46\n"
	.string "ROUTE 45 - ROUTE 29$"

Route46_Text_Trainer1Intro:
	.string "Hold up on Route46! My Pokémon are\n"
	.string "itching for a match!$"

Route46_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route46_Text_Trainer1Post:
	.string "Exploring every corner of Route46\n"
	.string "always turns up new surprises!$"

Route46_Text_Trainer2Intro:
	.string "LASS: Travelling across Route46?\n"
	.string "Show me your team's synergy!$"

Route46_Text_Trainer2Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route46_Text_Trainer2Post:
	.string "My Pokémon and I have been\n"
	.string "practicing combos all morning!$"

