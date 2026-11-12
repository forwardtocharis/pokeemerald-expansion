Route208_MapScripts::
	.byte 0

Route208_EventScript_RouteSign::
	msgbox Route208_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route208_EventScript_Trainer1::
	trainerbattle_single TRAINER_SAWYER_1, Route208_Text_Trainer1Intro, Route208_Text_Trainer1Defeat
	msgbox Route208_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route208_EventScript_Trainer2::
	trainerbattle_single TRAINER_DUSTY_1, Route208_Text_Trainer2Intro, Route208_Text_Trainer2Defeat
	msgbox Route208_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route208_Text_Sign1:
	.string "ROUTE 208\n"
	.string "ROUTE 207 - HEARTHOME CITY$"

Route208_Text_Trainer1Intro:
	.string "Our eyes met on Route 208! Let's\n"
	.string "battle!$"

Route208_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route208_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route208_Text_Trainer2Intro:
	.string "Our eyes met on Route 208! Let's\n"
	.string "battle!$"

Route208_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route208_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

