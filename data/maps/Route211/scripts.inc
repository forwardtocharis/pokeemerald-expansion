Route211_MapScripts::
	.byte 0

Route211_EventScript_RouteSign::
	msgbox Route211_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route211_EventScript_Trainer1::
	trainerbattle_single TRAINER_JARED, Route211_Text_Trainer1Intro, Route211_Text_Trainer1Defeat
	msgbox Route211_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route211_Text_Sign1:
	.string "ROUTE 211\n"
	.string "ETERNA CITY - CELESTIC TOWN$"

Route211_Text_Trainer1Intro:
	.string "Our eyes met on Route 211! Let's\n"
	.string "battle!$"

Route211_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route211_Text_Trainer1Post:
	.string "Trainers across every region keep\n"
	.string "pushing me to train harder!$"

