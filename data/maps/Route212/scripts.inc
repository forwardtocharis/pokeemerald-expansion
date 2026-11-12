Route212_MapScripts::
	.byte 0

Route212_EventScript_RouteSign::
	msgbox Route212_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route212_EventScript_Trainer1::
	trainerbattle_single TRAINER_MARCEL, Route212_Text_Trainer1Intro, Route212_Text_Trainer1Defeat
	msgbox Route212_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route212_EventScript_Trainer2::
	trainerbattle_single TRAINER_LEAH, Route212_Text_Trainer2Intro, Route212_Text_Trainer2Defeat
	msgbox Route212_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route212_EventScript_Trainer3::
	trainerbattle_single TRAINER_ROSE_3, Route212_Text_Trainer3Intro, Route212_Text_Trainer3Defeat
	msgbox Route212_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route212_Text_Sign1:
	.string "ROUTE 212\n"
	.string "HEARTHOME CITY - PASTORIA CITY$"

Route212_Text_Trainer1Intro:
	.string "Hold up on Route212! My Pokémon\n"
	.string "are itching for a match!$"

Route212_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route212_Text_Trainer1Post:
	.string "Exploring every corner of Route212\n"
	.string "always turns up new surprises!$"

Route212_Text_Trainer2Intro:
	.string "I've been training on Route212 to\n"
	.string "challenge the Gym Leaders!$"

Route212_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route212_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route212_Text_Trainer3Intro:
	.string "BLACK BELT: Travelling across\n"
	.string "Route212? Show me your team's\p"
	.string "synergy!$"

Route212_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route212_Text_Trainer3Post:
	.string "True strength comes from\n"
	.string "relentless discipline and focus!$"

