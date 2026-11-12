Route36_MapScripts::
	.byte 0

Route36_EventScript_RouteSign::
	msgbox Route36_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route36_EventScript_Trainer1::
	trainerbattle_single TRAINER_SAWYER_1, Route36_Text_Trainer1Intro, Route36_Text_Trainer1Defeat
	msgbox Route36_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route36_EventScript_Trainer2::
	trainerbattle_single TRAINER_DUSTY_1, Route36_Text_Trainer2Intro, Route36_Text_Trainer2Defeat
	msgbox Route36_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route36_Text_Sign1:
	.string "ROUTE 36\n"
	.string "ROUTE 35 - VIOLET CITY$"

Route36_Text_Trainer1Intro:
	.string "Our eyes met on Route 36! Let's\n"
	.string "battle!$"

Route36_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route36_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route36_Text_Trainer2Intro:
	.string "Our eyes met on Route 36! Let's\n"
	.string "battle!$"

Route36_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route36_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

