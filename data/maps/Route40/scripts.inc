Route40_MapScripts::
	.byte 0

Route40_EventScript_RouteSign::
	msgbox Route40_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route40_EventScript_Trainer1::
	trainerbattle_single TRAINER_MARCEL, Route40_Text_Trainer1Intro, Route40_Text_Trainer1Defeat
	msgbox Route40_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route40_EventScript_Trainer2::
	trainerbattle_single TRAINER_ROSE_5, Route40_Text_Trainer2Intro, Route40_Text_Trainer2Defeat
	msgbox Route40_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route40_Text_Sign1:
	.string "ROUTE 40\n"
	.string "OLIVINE CITY - ROUTE 41$"

Route40_Text_Trainer1Intro:
	.string "Hold up on Route40! My Pokémon are\n"
	.string "itching for a match!$"

Route40_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route40_Text_Trainer1Post:
	.string "Exploring every corner of Route40\n"
	.string "always turns up new surprises!$"

Route40_Text_Trainer2Intro:
	.string "ACE TRAINER: Travelling across\n"
	.string "Route40? Show me your team's\p"
	.string "synergy!$"

Route40_Text_Trainer2Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route40_Text_Trainer2Post:
	.string "Every badge you earn raises the\n"
	.string "stakes across all four regions!$"

