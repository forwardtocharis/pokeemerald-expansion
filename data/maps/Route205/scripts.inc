Route205_MapScripts::
	.byte 0

Route205_EventScript_RouteSign::
	msgbox Route205_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route205_EventScript_Trainer1::
	trainerbattle_single TRAINER_EDWARD, Route205_Text_Trainer1Intro, Route205_Text_Trainer1Defeat
	msgbox Route205_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route205_EventScript_Trainer2::
	trainerbattle_single TRAINER_WILTON_1, Route205_Text_Trainer2Intro, Route205_Text_Trainer2Defeat
	msgbox Route205_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route205_Text_Sign1:
	.string "ROUTE 205\n"
	.string "FLOAROMA TOWN - ETERNA CITY$"

Route205_Text_Trainer1Intro:
	.string "Our eyes met on Route 205! Let's\n"
	.string "battle!$"

Route205_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route205_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route205_Text_Trainer2Intro:
	.string "Our eyes met on Route 205! Let's\n"
	.string "battle!$"

Route205_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route205_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

