NewBarkTown_ElmsLab_MapScripts::
	.byte 0

NewBarkTown_ElmsLab_EventScript_Prof::
	lock
	faceplayer
	msgbox NewBarkTown_ElmsLab_Text_ProfSpeech, MSGBOX_DEFAULT
	release
	end

NewBarkTown_ElmsLab_EventScript_Aide::
	msgbox NewBarkTown_ElmsLab_Text_AideSpeech, MSGBOX_NPC
	end
NewBarkTown_ElmsLab_Text_ProfSpeech:
	.string "PROF. ELM: Ah, {PLAYER}! How is your Pokédex coming along?\n"
	.string "Pokémon bonds and Egg discoveries\p"
	.string "across Johto never cease to amaze\n"
	.string "me!\p"
	.string "Challenge all eight Johto Gyms and\n"
	.string "show everyone how much your team\p"
	.string "has grown!$"

NewBarkTown_ElmsLab_Text_AideSpeech:
	.string "We're analyzing habitat data sent\n"
	.string "from Professor Birch and Professor\p"
	.string "Oak!\n"
	.string "Don't forget to visit Mom next\p"
	.string "door whenever your Pokémon get\n"
	.string "tired.$"

