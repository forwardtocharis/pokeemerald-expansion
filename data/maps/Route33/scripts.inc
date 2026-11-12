Route33_MapScripts::
	.byte 0

Route33_EventScript_RouteSign::
	msgbox Route33_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route33_EventScript_Trainer1::
	trainerbattle_single TRAINER_EDWARD, Route33_Text_Trainer1Intro, Route33_Text_Trainer1Defeat
	msgbox Route33_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route33_Text_Sign1:
	.string "ROUTE 33\n"
	.string "ROUTE 32 - AZALEA TOWN$"

Route33_Text_Trainer1Intro:
	.string "Our eyes met on Route 33! Let's\n"
	.string "battle!$"

Route33_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route33_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

