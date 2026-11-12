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

@ === END GENERATED EVENTS ===
Route202_Text_Sign1:
	.string "ROUTE 202\n"
	.string "SANDGEM TOWN - JUBILIFE CITY$"

Route202_Text_Trainer1Intro:
	.string "Our eyes met on Route 202! Let's\n"
	.string "battle!$"

Route202_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route202_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route202_Text_Trainer2Intro:
	.string "Our eyes met on Route 202! Let's\n"
	.string "battle!$"

Route202_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route202_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

