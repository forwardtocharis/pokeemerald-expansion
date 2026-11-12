Route40_MapScripts::
	.byte 0

Route40_EventScript_RouteSign::
	msgbox Route40_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route40_EventScript_Trainer1::
	trainerbattle_single TRAINER_MARCEL, Route40_Text_Trainer1Intro, Route40_Text_Trainer1Defeat
	msgbox Route40_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route40_Text_Sign1:
	.string "ROUTE 40\n"
	.string "OLIVINE CITY - ROUTE 41$"

Route40_Text_Trainer1Intro:
	.string "Our eyes met on Route 40! Let's\n"
	.string "battle!$"

Route40_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route40_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

