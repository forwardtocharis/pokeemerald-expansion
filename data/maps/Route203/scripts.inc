Route203_MapScripts::
	.byte 0

Route203_EventScript_RouteSign::
	msgbox Route203_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route203_EventScript_Trainer1::
	trainerbattle_single TRAINER_DWAYNE, Route203_Text_Trainer1Intro, Route203_Text_Trainer1Defeat
	msgbox Route203_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route203_Text_Sign1:
	.string "ROUTE 203\n"
	.string "JUBILIFE CITY - OREBURGH CITY$"

Route203_Text_Trainer1Intro:
	.string "Our eyes met on Route 203! Let's\n"
	.string "battle!$"

Route203_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route203_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

