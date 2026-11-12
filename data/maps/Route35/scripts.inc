Route35_MapScripts::
	.byte 0

Route35_EventScript_RouteSign::
	msgbox Route35_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route35_EventScript_Trainer1::
	trainerbattle_single TRAINER_NOB_1, Route35_Text_Trainer1Intro, Route35_Text_Trainer1Defeat
	msgbox Route35_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route35_Text_Sign1:
	.string "ROUTE 35\n"
	.string "GOLDENROD CITY - ROUTE 36$"

Route35_Text_Trainer1Intro:
	.string "Our eyes met on Route 35! Let's\n"
	.string "battle!$"

Route35_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route35_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

