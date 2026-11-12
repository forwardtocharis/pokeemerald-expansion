Route206_MapScripts::
	.byte 0

Route206_EventScript_RouteSign::
	msgbox Route206_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route206_EventScript_Trainer1::
	trainerbattle_single TRAINER_BROOKE_1, Route206_Text_Trainer1Intro, Route206_Text_Trainer1Defeat
	msgbox Route206_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route206_EventScript_Trainer2::
	trainerbattle_single TRAINER_STEVE_1, Route206_Text_Trainer2Intro, Route206_Text_Trainer2Defeat
	msgbox Route206_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route206_EventScript_Trainer3::
	trainerbattle_single TRAINER_MATT, Route206_Text_Trainer3Intro, Route206_Text_Trainer3Defeat
	msgbox Route206_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route206_Text_Sign1:
	.string "ROUTE 206\n"
	.string "ETERNA CITY - ROUTE 207$"

Route206_Text_Trainer1Intro:
	.string "Hold up on Route206! My Pokémon\n"
	.string "are itching for a match!$"

Route206_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route206_Text_Trainer1Post:
	.string "Exploring every corner of Route206\n"
	.string "always turns up new surprises!$"

Route206_Text_Trainer2Intro:
	.string "I've been training on Route206 to\n"
	.string "challenge the Gym Leaders!$"

Route206_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route206_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route206_Text_Trainer3Intro:
	.string "CAMPER: Travelling across\n"
	.string "Route206? Show me your team's\p"
	.string "synergy!$"

Route206_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route206_Text_Trainer3Post:
	.string "I've been camping out waiting for\n"
	.string "a worthy challenger!$"

