Route209_MapScripts::
	.byte 0

Route209_EventScript_RouteSign::
	msgbox Route209_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route209_EventScript_Trainer1::
	trainerbattle_single TRAINER_COLE, Route209_Text_Trainer1Intro, Route209_Text_Trainer1Defeat
	msgbox Route209_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route209_EventScript_Trainer2::
	trainerbattle_single TRAINER_FOSTER, Route209_Text_Trainer2Intro, Route209_Text_Trainer2Defeat
	msgbox Route209_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route209_EventScript_Trainer3::
	trainerbattle_single TRAINER_ROSE_1, Route209_Text_Trainer3Intro, Route209_Text_Trainer3Defeat
	msgbox Route209_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route209_Text_Sign1:
	.string "ROUTE 209\n"
	.string "HEARTHOME CITY - SOLACEON TOWN$"

Route209_Text_Trainer1Intro:
	.string "Hold up on Route209! My Pokémon\n"
	.string "are itching for a match!$"

Route209_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route209_Text_Trainer1Post:
	.string "Exploring every corner of Route209\n"
	.string "always turns up new surprises!$"

Route209_Text_Trainer2Intro:
	.string "I've been training on Route209 to\n"
	.string "challenge the Gym Leaders!$"

Route209_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route209_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route209_Text_Trainer3Intro:
	.string "BUG CATCHER: Travelling across\n"
	.string "Route209? Show me your team's\p"
	.string "synergy!$"

Route209_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route209_Text_Trainer3Post:
	.string "Check out the rare specimens I\n"
	.string "caught along this route!$"

