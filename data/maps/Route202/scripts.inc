Route202_MapScripts::
	.byte 0

Route202_EventScript_RouteSign::
	msgbox Route202_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route202_EventScript_Trainer1::
	trainerbattle_single TRAINER_KAREN_1, Route202_Text_Trainer1Intro, Route202_Text_Trainer1Defeat
	msgbox Route202_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route202_EventScript_Trainer2::
	trainerbattle_single TRAINER_NED, Route202_Text_Trainer2Intro, Route202_Text_Trainer2Defeat
	msgbox Route202_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route202_EventScript_Trainer3::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route202_Text_Trainer3Intro, Route202_Text_Trainer3Defeat
	msgbox Route202_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route202_Text_Sign1:
	.string "ROUTE 202\n"
	.string "SANDGEM TOWN - JUBILIFE CITY$"

Route202_Text_Trainer1Intro:
	.string "Hold up on Route202! My Pokémon\n"
	.string "are itching for a match!$"

Route202_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route202_Text_Trainer1Post:
	.string "Exploring every corner of Route202\n"
	.string "always turns up new surprises!$"

Route202_Text_Trainer2Intro:
	.string "I've been training on Route202 to\n"
	.string "challenge the Gym Leaders!$"

Route202_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route202_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route202_Text_Trainer3Intro:
	.string "ACE TRAINER: Travelling across\n"
	.string "Route202? Show me your team's\p"
	.string "synergy!$"

Route202_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route202_Text_Trainer3Post:
	.string "Every badge you earn raises the\n"
	.string "stakes across all four regions!$"

