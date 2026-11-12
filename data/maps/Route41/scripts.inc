Route41_MapScripts::
	.byte 0

Route41_EventScript_RouteSign::
	msgbox Route41_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route41_EventScript_Trainer1::
	trainerbattle_single TRAINER_LEAH, Route41_Text_Trainer1Intro, Route41_Text_Trainer1Defeat
	msgbox Route41_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route41_EventScript_Trainer2::
	trainerbattle_single TRAINER_WARREN, Route41_Text_Trainer2Intro, Route41_Text_Trainer2Defeat
	msgbox Route41_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route41_Text_Sign1:
	.string "ROUTE 41\n"
	.string "ROUTE 40 - CIANWOOD CITY$"

Route41_Text_Trainer1Intro:
	.string "Our eyes met on Route 41! Let's\n"
	.string "battle!$"

Route41_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route41_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route41_Text_Trainer2Intro:
	.string "Our eyes met on Route 41! Let's\n"
	.string "battle!$"

Route41_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route41_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

