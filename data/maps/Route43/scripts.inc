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

Route43_EventScript_Trainer3::
	trainerbattle_single TRAINER_DUSTY_5, Route43_Text_Trainer3Intro, Route43_Text_Trainer3Defeat
	msgbox Route43_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route43_Text_Sign1:
	.string "ROUTE 43\n"
	.string "MAHOGANY TOWN$"

Route43_Text_Trainer1Intro:
	.string "Hold up on Route43! My Pokémon are\n"
	.string "itching for a match!$"

Route43_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route43_Text_Trainer1Post:
	.string "Exploring every corner of Route43\n"
	.string "always turns up new surprises!$"

Route43_Text_Trainer2Intro:
	.string "I've been training on Route43 to\n"
	.string "challenge the Gym Leaders!$"

Route43_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route43_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route43_Text_Trainer3Intro:
	.string "CAMPER: Travelling across Route43?\n"
	.string "Show me your team's synergy!$"

Route43_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route43_Text_Trainer3Post:
	.string "I've been camping out waiting for\n"
	.string "a worthy challenger!$"

