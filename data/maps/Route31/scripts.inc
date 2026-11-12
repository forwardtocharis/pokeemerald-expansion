Route31_MapScripts::
	.byte 0

Route31_EventScript_RouteSign::
	msgbox Route31_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route31_EventScript_Trainer1::
	trainerbattle_single TRAINER_DWAYNE, Route31_Text_Trainer1Intro, Route31_Text_Trainer1Defeat
	msgbox Route31_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route31_Text_Sign1:
	.string "ROUTE 31\n"
	.string "ROUTE 30 - VIOLET CITY$"

Route31_Text_Trainer1Intro:
	.string "Our eyes met on Route 31! Let's\n"
	.string "battle!$"

Route31_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route31_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

