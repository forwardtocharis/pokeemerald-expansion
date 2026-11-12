Route32_MapScripts::
	.byte 0

Route32_EventScript_RouteSign::
	msgbox Route32_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route32_EventScript_Trainer1::
	trainerbattle_single TRAINER_RICKY_1, Route32_Text_Trainer1Intro, Route32_Text_Trainer1Defeat
	msgbox Route32_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_Trainer2::
	trainerbattle_single TRAINER_DALTON_1, Route32_Text_Trainer2Intro, Route32_Text_Trainer2Defeat
	msgbox Route32_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route32_Text_Sign1:
	.string "ROUTE 32\n"
	.string "VIOLET CITY - ROUTE 33$"

Route32_Text_Trainer1Intro:
	.string "Our eyes met on Route 32! Let's\n"
	.string "battle!$"

Route32_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route32_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route32_Text_Trainer2Intro:
	.string "Our eyes met on Route 32! Let's\n"
	.string "battle!$"

Route32_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route32_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

