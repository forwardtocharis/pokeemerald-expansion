Route46_MapScripts::
	.byte 0

Route46_EventScript_RouteSign::
	msgbox Route46_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route46_EventScript_Trainer1::
	trainerbattle_single TRAINER_JOSHUA, Route46_Text_Trainer1Intro, Route46_Text_Trainer1Defeat
	msgbox Route46_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route46_Text_Sign1:
	.string "ROUTE 46\n"
	.string "ROUTE 45 - ROUTE 29$"

Route46_Text_Trainer1Intro:
	.string "Our eyes met on Route 46! Let's\n"
	.string "battle!$"

Route46_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route46_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

