Route204_MapScripts::
	.byte 0

Route204_EventScript_RouteSign::
	msgbox Route204_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route204_EventScript_Trainer1::
	trainerbattle_single TRAINER_RICKY_1, Route204_Text_Trainer1Intro, Route204_Text_Trainer1Defeat
	msgbox Route204_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route204_EventScript_Trainer2::
	trainerbattle_single TRAINER_DALTON_1, Route204_Text_Trainer2Intro, Route204_Text_Trainer2Defeat
	msgbox Route204_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route204_EventScript_Trainer3::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, Route204_Text_Trainer3Intro, Route204_Text_Trainer3Defeat
	msgbox Route204_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route204_Text_Sign1:
	.string "ROUTE 204\n"
	.string "JUBILIFE CITY - FLOAROMA TOWN$"

Route204_Text_Trainer1Intro:
	.string "Hold up on Route204! My Pokémon\n"
	.string "are itching for a match!$"

Route204_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route204_Text_Trainer1Post:
	.string "Exploring every corner of Route204\n"
	.string "always turns up new surprises!$"

Route204_Text_Trainer2Intro:
	.string "I've been training on Route204 to\n"
	.string "challenge the Gym Leaders!$"

Route204_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route204_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route204_Text_Trainer3Intro:
	.string "PSYCHIC: Travelling across\n"
	.string "Route204? Show me your team's\p"
	.string "synergy!$"

Route204_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route204_Text_Trainer3Post:
	.string "I foresaw our battle along this\n"
	.string "path before you even arrived!$"

