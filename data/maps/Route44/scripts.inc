Route44_MapScripts::
	.byte 0

Route44_EventScript_RouteSign::
	msgbox Route44_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route44_EventScript_Trainer1::
	trainerbattle_single TRAINER_PRESTON, Route44_Text_Trainer1Intro, Route44_Text_Trainer1Defeat
	msgbox Route44_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route44_EventScript_Trainer2::
	trainerbattle_single TRAINER_DAPHNE, Route44_Text_Trainer2Intro, Route44_Text_Trainer2Defeat
	msgbox Route44_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route44_Text_Sign1:
	.string "ROUTE 44\n"
	.string "MAHOGANY TOWN - BLACKTHORN CITY$"

Route44_Text_Trainer1Intro:
	.string "Our eyes met on Route 44! Let's\n"
	.string "battle!$"

Route44_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route44_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route44_Text_Trainer2Intro:
	.string "Our eyes met on Route 44! Let's\n"
	.string "battle!$"

Route44_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route44_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

