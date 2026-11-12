Route29_MapScripts::
	.byte 0

Route29_EventScript_RouteSign::
	msgbox Route29_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route29_EventScript_Trainer1::
	trainerbattle_single TRAINER_CINDY_1, Route29_Text_Trainer1Intro, Route29_Text_Trainer1Defeat
	msgbox Route29_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route29_EventScript_Trainer2::
	trainerbattle_single TRAINER_JERRY_1, Route29_Text_Trainer2Intro, Route29_Text_Trainer2Defeat
	msgbox Route29_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route29_Text_Sign1:
	.string "ROUTE 29\n"
	.string "NEWBARK TOWN - CHERRYGROVE CITY$"

Route29_Text_Trainer1Intro:
	.string "Our eyes met on Route 29! Let's\n"
	.string "battle!$"

Route29_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route29_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route29_Text_Trainer2Intro:
	.string "Our eyes met on Route 29! Let's\n"
	.string "battle!$"

Route29_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route29_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

