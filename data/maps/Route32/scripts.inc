Route32_MapScripts::
	.byte 0

Route32_EventScript_RouteSign::
	msgbox Route32_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route32_EventScript_Trainer1::
	trainerbattle_single TRAINER_RICKY_1, Route32_Text_Trainer1Intro, Route32_Text_Trainer1Defeat
	msgbox Route32_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_Trainer2::
	trainerbattle_single TRAINER_DALTON_1, Route32_Text_Trainer2Intro, Route32_Text_Trainer2Defeat
	msgbox Route32_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route32_EventScript_Trainer3::
	trainerbattle_single TRAINER_SHELLY_SEAFLOOR_CAVERN, Route32_Text_Trainer3Intro, Route32_Text_Trainer3Defeat
	msgbox Route32_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route32_Text_Sign1:
	.string "ROUTE 32\n"
	.string "VIOLET CITY - ROUTE 33$"

Route32_Text_Trainer1Intro:
	.string "Hold up on Route32! My Pokémon are\n"
	.string "itching for a match!$"

Route32_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route32_Text_Trainer1Post:
	.string "Exploring every corner of Route32\n"
	.string "always turns up new surprises!$"

Route32_Text_Trainer2Intro:
	.string "I've been training on Route32 to\n"
	.string "challenge the Gym Leaders!$"

Route32_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route32_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route32_Text_Trainer3Intro:
	.string "PSYCHIC: Travelling across\n"
	.string "Route32? Show me your team's\p"
	.string "synergy!$"

Route32_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route32_Text_Trainer3Post:
	.string "I foresaw our battle along this\n"
	.string "path before you even arrived!$"

