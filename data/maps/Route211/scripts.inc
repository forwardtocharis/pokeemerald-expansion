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

Route211_EventScript_Trainer2::
	trainerbattle_single TRAINER_VIOLET, Route211_Text_Trainer2Intro, Route211_Text_Trainer2Defeat
	msgbox Route211_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route211_Text_Sign1:
	.string "ROUTE 211\n"
	.string "ETERNA CITY - CELESTIC TOWN$"

Route211_Text_Trainer1Intro:
	.string "Hold up on Route211! My Pokémon\n"
	.string "are itching for a match!$"

Route211_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route211_Text_Trainer1Post:
	.string "Exploring every corner of Route211\n"
	.string "always turns up new surprises!$"

Route211_Text_Trainer2Intro:
	.string "ACE TRAINER: Travelling across\n"
	.string "Route211? Show me your team's\p"
	.string "synergy!$"

Route211_Text_Trainer2Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route211_Text_Trainer2Post:
	.string "Only sharp strategy will carry you\n"
	.string "through the League challenge!$"

