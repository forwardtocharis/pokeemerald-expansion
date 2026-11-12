Route209_MapScripts::
	.byte 0

Route209_EventScript_RouteSign::
	msgbox Route209_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route209_EventScript_Trainer1::
	trainerbattle_single TRAINER_COLE, Route209_Text_Trainer1Intro, Route209_Text_Trainer1Defeat
	msgbox Route209_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route209_EventScript_Trainer2::
	trainerbattle_single TRAINER_FOSTER, Route209_Text_Trainer2Intro, Route209_Text_Trainer2Defeat
	msgbox Route209_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route209_Text_Sign1:
	.string "ROUTE 209\n"
	.string "HEARTHOME CITY - SOLACEON TOWN$"

Route209_Text_Trainer1Intro:
	.string "Our eyes met on Route 209! Let's\n"
	.string "battle!$"

Route209_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route209_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

Route209_Text_Trainer2Intro:
	.string "Our eyes met on Route 209! Let's\n"
	.string "battle!$"

Route209_Text_Trainer2Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route209_Text_Trainer2Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

