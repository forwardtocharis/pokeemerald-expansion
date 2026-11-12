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

@ === END GENERATED EVENTS ===
Route30_Text_Sign1:
	.string "ROUTE 30\n"
	.string "CHERRYGROVE CITY - ROUTE 31$"

Route30_Text_Trainer1Intro:
	.string "Our eyes met on Route 30! Let's\n"
	.string "battle!$"

Route30_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route30_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route30_Text_Trainer2Intro:
	.string "Our eyes met on Route 30! Let's\n"
	.string "battle!$"

Route30_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route30_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

