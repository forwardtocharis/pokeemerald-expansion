SunyshoreCity_MapScripts::
	.byte 0

SunyshoreCity_EventScript_CitySign::
	msgbox SunyshoreCity_Text_Sign1, MSGBOX_SIGN
	end

SunyshoreCity_EventScript_GymSign::
	msgbox SunyshoreCity_Text_Sign2, MSGBOX_SIGN
	end

@ === BEGIN GENERATED EVENTS ===

SunyshoreCity_EventScript_AutoNPC1::
	msgbox SunyshoreCity_Text_AutoNPC1, MSGBOX_NPC
	end

SunyshoreCity_EventScript_AutoNPC2::
	msgbox SunyshoreCity_Text_AutoNPC2, MSGBOX_NPC
	end

@ === END GENERATED EVENTS ===
SunyshoreCity_Text_Sign1:
	.string "SUNYSHORE CITY\n"
	.string "Solar Powered!$"

SunyshoreCity_Text_Sign2:
	.string "SUNYSHORE CITY\n"
	.string "Solar Powered!$"

SunyshoreCity_Text_AutoNPC1:
	.string "Solar walkways and ocean breezes\n"
	.string "power Sunyshore City!\p"
	.string "Volkner awaits worthy challengers\n"
	.string "for Sinnoh's final Gym Badge!$"

SunyshoreCity_Text_AutoNPC2:
	.string "Looking out over the eastern sea\n"
	.string "makes every step of the journey\p"
	.string "worthwhile!$"

