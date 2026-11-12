Route43_MapScripts::
	.byte 0

Route43_EventScript_RouteSign::
	msgbox Route43_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route43_EventScript_Trainer1::
	trainerbattle_single TRAINER_ISAIAH_1, Route43_Text_Trainer1Intro, Route43_Text_Trainer1Defeat
	msgbox Route43_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route43_EventScript_Trainer2::
	trainerbattle_single TRAINER_TERRY, Route43_Text_Trainer2Intro, Route43_Text_Trainer2Defeat
	msgbox Route43_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route43_Text_Sign1:
	.string "ROUTE 43\n"
	.string "MAHOGANY TOWN$"

Route43_Text_Trainer1Intro:
	.string "Our eyes met on Route 43! Let's\n"
	.string "battle!$"

Route43_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route43_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route43_Text_Trainer2Intro:
	.string "Our eyes met on Route 43! Let's\n"
	.string "battle!$"

Route43_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route43_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

