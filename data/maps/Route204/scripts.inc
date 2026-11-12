Route204_MapScripts::
	.byte 0

Route204_EventScript_RouteSign::
	msgbox Route204_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route204_EventScript_Trainer1::
	trainerbattle_single TRAINER_RICKY_1, Route204_Text_Trainer1Intro, Route204_Text_Trainer1Defeat
	msgbox Route204_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route204_EventScript_Trainer2::
	trainerbattle_single TRAINER_DALTON_1, Route204_Text_Trainer2Intro, Route204_Text_Trainer2Defeat
	msgbox Route204_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route204_Text_Sign1:
	.string "ROUTE 204\n"
	.string "JUBILIFE CITY - FLOAROMA TOWN$"

Route204_Text_Trainer1Intro:
	.string "Our eyes met on Route 204! Let's\n"
	.string "battle!$"

Route204_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route204_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route204_Text_Trainer2Intro:
	.string "Our eyes met on Route 204! Let's\n"
	.string "battle!$"

Route204_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route204_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

