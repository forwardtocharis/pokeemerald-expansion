Route218_MapScripts::
	.byte 0

Route218_EventScript_RouteSign::
	msgbox Route218_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route218_EventScript_Trainer1::
	trainerbattle_single TRAINER_PATRICIA, Route218_Text_Trainer1Intro, Route218_Text_Trainer1Defeat
	msgbox Route218_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route218_Text_Sign1:
	.string "ROUTE 218\n"
	.string "JUBILIFE CITY - CANALAVE CITY$"

Route218_Text_Trainer1Intro:
	.string "Our eyes met on Route 218! Let's\n"
	.string "battle!$"

Route218_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route218_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

