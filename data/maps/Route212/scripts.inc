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

@ === END GENERATED EVENTS ===
Route212_Text_Sign1:
	.string "ROUTE 212\n"
	.string "HEARTHOME CITY - PASTORIA CITY$"

Route212_Text_Trainer1Intro:
	.string "Our eyes met on Route 212! Let's\n"
	.string "battle!$"

Route212_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route212_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route212_Text_Trainer2Intro:
	.string "Our eyes met on Route 212! Let's\n"
	.string "battle!$"

Route212_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route212_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

