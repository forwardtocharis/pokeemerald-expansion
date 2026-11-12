Route30_MapScripts::
	.byte 0

Route30_EventScript_RouteSign::
	msgbox Route30_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route30_EventScript_Trainer1::
	trainerbattle_single TRAINER_KAREN_1, Route30_Text_Trainer1Intro, Route30_Text_Trainer1Defeat
	msgbox Route30_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route30_EventScript_Trainer2::
	trainerbattle_single TRAINER_NED, Route30_Text_Trainer2Intro, Route30_Text_Trainer2Defeat
	msgbox Route30_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route30_EventScript_Trainer3::
	trainerbattle_single TRAINER_MATT, Route30_Text_Trainer3Intro, Route30_Text_Trainer3Defeat
	msgbox Route30_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route30_Text_Sign1:
	.string "ROUTE 30\n"
	.string "CHERRYGROVE CITY - ROUTE 31$"

Route30_Text_Trainer1Intro:
	.string "Hold up on Route30! My Pokémon are\n"
	.string "itching for a match!$"

Route30_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route30_Text_Trainer1Post:
	.string "Exploring every corner of Route30\n"
	.string "always turns up new surprises!$"

Route30_Text_Trainer2Intro:
	.string "I've been training on Route30 to\n"
	.string "challenge the Gym Leaders!$"

Route30_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route30_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route30_Text_Trainer3Intro:
	.string "ACE TRAINER: Travelling across\n"
	.string "Route30? Show me your team's\p"
	.string "synergy!$"

Route30_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route30_Text_Trainer3Post:
	.string "Every badge you earn raises the\n"
	.string "stakes across all four regions!$"

