Route205_MapScripts::
	.byte 0

Route205_EventScript_RouteSign::
	msgbox Route205_Text_Sign1, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

Route205_EventScript_Trainer1::
	trainerbattle_single TRAINER_EDWARD, Route205_Text_Trainer1Intro, Route205_Text_Trainer1Defeat
	msgbox Route205_Text_Trainer1Post, MSGBOX_AUTOCLOSE
	end

Route205_EventScript_Trainer2::
	trainerbattle_single TRAINER_WILTON_1, Route205_Text_Trainer2Intro, Route205_Text_Trainer2Defeat
	msgbox Route205_Text_Trainer2Post, MSGBOX_AUTOCLOSE
	end

Route205_EventScript_Trainer3::
	trainerbattle_single TRAINER_FREDRICK, Route205_Text_Trainer3Intro, Route205_Text_Trainer3Defeat
	msgbox Route205_Text_Trainer3Post, MSGBOX_AUTOCLOSE
	end

@ === END GENERATED EVENTS ===
Route205_Text_Sign1:
	.string "ROUTE 205\n"
	.string "FLOAROMA TOWN - ETERNA CITY$"

Route205_Text_Trainer1Intro:
	.string "Hold up on Route205! My Pokémon\n"
	.string "are itching for a match!$"

Route205_Text_Trainer1Defeat:
	.string "Whoa! Your Pokémon are seriously\n"
	.string "strong!$"

Route205_Text_Trainer1Post:
	.string "Exploring every corner of Route205\n"
	.string "always turns up new surprises!$"

Route205_Text_Trainer2Intro:
	.string "I've been training on Route205 to\n"
	.string "challenge the Gym Leaders!$"

Route205_Text_Trainer2Defeat:
	.string "I see why you've made it this far!$"

Route205_Text_Trainer2Post:
	.string "Trainers from all four regions\n"
	.string "keep raising the bar!$"

Route205_Text_Trainer3Intro:
	.string "PICNICKER: Travelling across\n"
	.string "Route205? Show me your team's\p"
	.string "synergy!$"

Route205_Text_Trainer3Defeat:
	.string "Astounding! You didn't leave a\n"
	.string "single opening!$"

Route205_Text_Trainer3Post:
	.string "A scenic route like this is the\n"
	.string "best place for a Pokémon match!$"

