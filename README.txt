# LatMod
A collection of sound mods being implemented primarily for aircraft but also some handheld and mounted AA weapons in Arma 3.

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//This mod is NOT to be used in a commercial product and falls under BI's APL-SA License
//Do not redistribute this mod without explicit permission from me: https://steamcommunity.com/id/AliceDerg
//However, do feel free to use this mod for inspiration, though there are likely much more talented people than myself.
//Additionally, big thanks to Diwako for a lot of modding and scripting support. This would not have been made without him.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

This is the testing branch, v1.0.2 of the combined branch of mods for the FPArma modpack. There are currently 2 main things that this mod does:
	Aircraft Sounds
	IR Missile Sounds

For aircraft sounds, the main archetypes are as follows:
	BLUFOR Aircraft
	BLUFOR Naval Aircraft
	OPFOR Aircraft
	GREENFOR/IND Aircraft

Each archetype has their own distinct sound for being locked and engaged. Even if you don't know what the sounds are, they're simple enough to be understood in that:
	If it sounds like it's yelling at you, you're probably being fired upon.
	If it's slow or constant, you're being locked.

The second portion of this is for missile sounds, and they are broken into the following categories:
	AIM-9/ASRAAM/r79 and ther derivatives
	RHS-specific AIM-120
	Stinger/Igla

The AIM-9 and ASRAAM missiles will have a very distinct "Sidewinder" growl as you lock, and a higher pitch when fully locked. The r79 has its own sounds for locking and locked.
The RHS AIM-120 will play a "Lock" voice cue when a target is locked. This may eventually be moved over to the vanilla AMRAAMs if I can have the code differentiate between the Black Wasp and the Gripen.
The Stinger and Igla MANPAD/vehicle carried systems will have more of a scratchy tone as it locks and a clearer tone when fully locked.
Currently, the vanilla Titan AA does not get a special tone, nor do the Tigris/Bardelas AA platforms. If you think this should change, please let me know.

Installation: Load the mod within Swifty under optionals, called latmod. Otherwise, load the addon like any other addon. If you're using a file manager, it should be the same process as regular addons. Otherwise, place in your addons folder (who still does this?).

If you have any suggestions or issues, please let me know through the issues tracker. You can find me on Discord as Lv100Latias (Silver#5760)

Current development priorities:
1. Ensure sounds are set properly for each aircraft as applicable.
2. Add fuel state sounds and possibly make Bingo settable by the player.
3. Add caution sounds when an aircraft is badly damaged. Either implement this as a loop that the player can acknowledge or just play the sound over a short timeframe.
4. Add low altitude/stall warnings.
5. Add additional lock sounds based on things like Ace Combat/Project Wingman
