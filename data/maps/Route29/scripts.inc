Route29_MapScripts::
	.byte 0

Route29_EventScript_RouteSign::
	msgbox Route29_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route29_EventScript_Trainer1::
	trainerbattle_single TRAINER_CINDY_1, Route29_Text_Trainer1Intro, Route29_Text_Trainer1Defeat
	msgbox Route29_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route29_EventScript_Trainer2::
	trainerbattle_single TRAINER_JERRY_1, Route29_Text_Trainer2Intro, Route29_Text_Trainer2Defeat
	msgbox Route29_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route29_EventScript_Trainer3::
	trainerbattle_single TRAINER_FREDRICK, Route29_Text_Trainer3Intro, Route29_Text_Trainer3Defeat
	msgbox Route29_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route29_Text_Sign1:
	.string "ROUTE 29\n"
	.string "NEWBARK TOWN - CHERRYGROVE CITY$"

Route29_Text_Trainer1Intro:
	.string "Hold up on Route29! My Pokémon are\n"
	.string "itching for a match!$"

Route29_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route29_Text_Trainer1Post:
	.string "Exploring every corner of Route29\n"
	.string "always turns up new surprises!$"

Route29_Text_Trainer2Intro:
	.string "I've been training on Route29 to\n"
	.string "challenge the Gym Leaders!$"

Route29_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route29_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route29_Text_Trainer3Intro:
	.string "ACE TRAINER: Travelling across\n"
	.string "Route29? Show me your team's\p"
	.string "synergy!$"

Route29_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route29_Text_Trainer3Post:
	.string "Only sharp strategy will carry you\n"
	.string "through the League challenge!$"

