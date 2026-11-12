Route210_MapScripts::
	.byte 0

Route210_EventScript_RouteSign::
	msgbox Route210_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route210_EventScript_Trainer1::
	trainerbattle_single TRAINER_THALIA_1, Route210_Text_Trainer1Intro, Route210_Text_Trainer1Defeat
	msgbox Route210_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route210_EventScript_Trainer2::
	trainerbattle_single TRAINER_TIMOTHY_1, Route210_Text_Trainer2Intro, Route210_Text_Trainer2Defeat
	msgbox Route210_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route210_Text_Sign1:
	.string "ROUTE 210\n"
	.string "SOLACEON TOWN - ROUTE 215$"

Route210_Text_Trainer1Intro:
	.string "Our eyes met on Route 210! Let's\n"
	.string "battle!$"

Route210_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route210_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route210_Text_Trainer2Intro:
	.string "Our eyes met on Route 210! Let's\n"
	.string "battle!$"

Route210_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route210_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

