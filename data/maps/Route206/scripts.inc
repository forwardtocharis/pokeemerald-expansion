Route206_MapScripts::
	.byte 0

Route206_EventScript_RouteSign::
	msgbox Route206_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route206_EventScript_Trainer1::
	trainerbattle_single TRAINER_BROOKE_1, Route206_Text_Trainer1Intro, Route206_Text_Trainer1Defeat
	msgbox Route206_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route206_EventScript_Trainer2::
	trainerbattle_single TRAINER_STEVE_1, Route206_Text_Trainer2Intro, Route206_Text_Trainer2Defeat
	msgbox Route206_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route206_Text_Sign1:
	.string "ROUTE 206\n"
	.string "ETERNA CITY - ROUTE 207$"

Route206_Text_Trainer1Intro:
	.string "Our eyes met on Route 206! Let's\n"
	.string "battle!$"

Route206_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route206_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route206_Text_Trainer2Intro:
	.string "Our eyes met on Route 206! Let's\n"
	.string "battle!$"

Route206_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route206_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

