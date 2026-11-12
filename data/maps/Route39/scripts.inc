Route39_MapScripts::
	.byte 0

Route39_EventScript_RouteSign::
	msgbox Route39_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route39_EventScript_Trainer1::
	trainerbattle_single TRAINER_TIMOTHY_1, Route39_Text_Trainer1Intro, Route39_Text_Trainer1Defeat
	msgbox Route39_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route39_Text_Sign1:
	.string "ROUTE 39\n"
	.string "ROUTE 38 - OLIVINE CITY$"

Route39_Text_Trainer1Intro:
	.string "Our eyes met on Route 39! Let's\n"
	.string "battle!$"

Route39_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route39_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

