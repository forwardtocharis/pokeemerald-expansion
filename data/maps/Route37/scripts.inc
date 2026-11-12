Route37_MapScripts::
	.byte 0

Route37_EventScript_RouteSign::
	msgbox Route37_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route37_EventScript_Trainer1::
	trainerbattle_single TRAINER_COLE, Route37_Text_Trainer1Intro, Route37_Text_Trainer1Defeat
	msgbox Route37_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route37_Text_Sign1:
	.string "ROUTE 37\n"
	.string "ROUTE 36 - ECRUTEAK CITY$"

Route37_Text_Trainer1Intro:
	.string "Our eyes met on Route 37! Let's\n"
	.string "battle!$"

Route37_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route37_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

