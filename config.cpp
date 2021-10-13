///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//This mod is NOT to be used in a commercial product and falls under BI's APL-SA License
//Do not redistribute this mod without explicit permission from me: https://steamcommunity.com/id/Lv100Cinderace
//However, do feel free to use this mod for inspiration, though there are likely much more talented people than myself.
//Additionally, big thanks to Diwako for a lot of modding and scripting support. This would not have been made without him.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
class CfgPatches
{
	class LATMods
	{
		//01 is BLU, 02 is RED, 03 and 04 are IND... or at least it is for JETS. Helicopters are bullshit
		//Note- THIS IS THE EXPANDED VERSION TO INCLUDE THE FPA MOD PACK.
		name = "LAT Mods";
		author = "Lv100Latios";
		url = "";
		
		units[] = {};
		weapon[] = {};
		requiredVersion = 2.06;
		requiredAddons[] = {
			//"CBA_Common",
			"A3_Data_F_AOW_Loadorder",
			"rhsusf_sounds",
			"rhsusf_a2port_air",
			"rhsusf_a2port_air2",
			"RHS_US_A2_AirImport",
			"rhsusf_c_ch53",
			"rhsusf_ch53",
			"rhsusf_f22",
			"rhsusf_c_caiman",
			"rhsusf_caiman"
		};
		
	};
};


class CfgVehicles 
{
    class Plane_Base_F;
	class Helicopter_Base_F;
	class Helicopter_Base_H;
	
	//Planes
	class Plane_Fighter_01_Base_F : Plane_Base_F { //Black Wasp
		soundLocked[] = {"LATMods\Sounds\lockedOn3.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch.wss",1,1};
	};
	class Plane_Fighter_02_Base_F : Plane_Base_F { //Shikra
		soundLocked[] = {"LATMods\Sounds\lockedOnRUS.wss",1,1};
        soundIncommingMissile[] = {"LATMods\Sounds\missileLaunchRUS.wss",1,1};
    };
	class Plane_Fighter_03_base_F : Plane_Base_F { //Buzzard
		soundLocked[] = {"LATMods\Sounds\lockedOn.wss",1,1};
        soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch2.wss",1,1};
    };
	class Plane_Fighter_04_Base_F : Plane_Base_F { //Gryphon
		soundLocked[] = {"LATMods\Sounds\lockedOn.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch2.wss",1,1};
	};
	class Plane_CAS_01_base_F : Plane_Base_F { //Wipeout
		soundLocked[] = {"LATMods\Sounds\lockedOn2.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch3.wss",1,1};
	};
	class Plane_CAS_02_base_F : Plane_Base_F { //Nephron
		soundLocked[] = {"LATMods\Sounds\lockedOnRUS.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunchRUS.wss",1,1};
	};
	class VTOL_01_base_F : Plane_Base_F { //Blackfish
		soundLocked[] = {"LATMods\Sounds\lockedOn3.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch.wss",1,1};
	};
	class VTOL_02_base_F : Plane_Base_F { //Xi'an
		soundLocked[] = {"LATMods\Sounds\lockedOnRUS.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunchRUS.wss",1,1};
	};
	class RHS_A10 : Plane_Base_F { //A-10C
		soundLocked[] = {"LATMods\Sounds\lockedOn2.wss",1,1};
        soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch3.wss",1,1};
    };
	class rhsusf_f22 : Plane_Base_F {
		soundLocked[] = {"LATMods\Sounds\lockedOn2.wss",1,1};
        soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch3.wss",1,1};
    };
	class RHS_C130J_Base : Plane_Base_F {
		soundLocked[] = {"LATMods\Sounds\lockedOn2.wss",1,1};
        soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch3.wss",1,1};
    };
	class RHS_su25_base : Plane_Base_F {
		soundLocked[] = {"LATMods\Sounds\lockedOnRUS.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunchRUS.wss",1,1};
	};
	class RHS_TU95MS_base : Plane_Base_F {
		soundLocked[] = {"LATMods\Sounds\lockedOnRUS.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunchRUS.wss",1,1};
	};
	
	//Helicopters
	class Heli_Light_01_base_F : Helicopter_Base_F { //Pawnee
		soundLocked[] = {"LATMods\Sounds\lockedOn2.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch3.wss",1,1};
	};
	class Heli_Light_02_base_F : Helicopter_Base_F { //Orca
		soundLocked[] = {"LATMods\Sounds\lockedOnRUS.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunchRUS.wss",1,1};
	};
	class Heli_light_03_base_F : Helicopter_Base_F { //Hellcat
		soundLocked[] = {"LATMods\Sounds\lockedOn.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch2.wss",1,1};
	};
	class Heli_Light_01_civil_base_F : Helicopter_Base_F { //Civilian Pawnee
		soundLocked[] = {"LATMods\Sounds\lockedOn.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch2.wss",1,1};
	};
	class Heli_Attack_01_base_F : Helicopter_Base_F { //Blackfoot
		soundLocked[] = {"LATMods\Sounds\lockedOn2.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch3.wss",1,1};
	};
	class Heli_Attack_02_base_F : Helicopter_Base_F { //Kajman
		soundLocked[] = {"LATMods\Sounds\lockedOnRUS.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunchRUS.wss",1,1};
	};
	class Heli_Transport_01_base_F : Helicopter_Base_F { //Ghost Hawk
		soundLocked[] = {"LATMods\Sounds\lockedOn2.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch3.wss",1,1};
	};
	class Heli_Transport_02_base_F : Helicopter_Base_F { //Mohawk
		soundLocked[] = {"LATMods\Sounds\lockedOn.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch2.wss",1,1};
	};
	class Heli_Transport_03_base_F : Helicopter_Base_F { //Huron
		soundLocked[] = {"LATMods\Sounds\lockedOn2.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch3.wss",1,1};
	};
	class Heli_Transport_04_base_F : Helicopter_Base_F { //Taru
		soundLocked[] = {"LATMods\Sounds\lockedOnRUS.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunchRUS.wss",1,1};
	};
	class RHS_AH64_base : Helicopter_Base_F {
		soundLocked[] = {"LATMods\Sounds\lockedOn2.wss",1,1};
        soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch3.wss",1,1};
    };
	class RHS_CH_47F_base : Helicopter_Base_F {
		soundLocked[] = {"LATMods\Sounds\lockedOn2.wss",1,1};
        soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch3.wss",1,1};
    };
	class RHS_UH60_Base : Helicopter_Base_F {
		soundLocked[] = {"LATMods\Sounds\lockedOn2.wss",1,1};
        soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch3.wss",1,1};
    };
	class RHS_AH1Z_base : Helicopter_Base_F {
		soundLocked[] = {"LATMods\Sounds\lockedOn3.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch.wss",1,1};
    };
	class rhsusf_CH53E_USMC : Helicopter_Base_F {
		soundLocked[] = {"LATMods\Sounds\lockedOn3.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch.wss",1,1};
    };
	class RHS_UH1_Base : Helicopter_Base_F {
		soundLocked[] = {"LATMods\Sounds\lockedOn3.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch.wss",1,1};
    };
	class RHS_MELB_base : Helicopter_Base_F {
		soundLocked[] = {"LATMods\Sounds\lockedOn2.wss",1,1};
        soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch3.wss",1,1};
    };
	class RHS_Mi24_base : Helicopter_Base_F {
		soundLocked[] = {"LATMods\Sounds\lockedOnRUS.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunchRUS.wss",1,1};
	};
	class RHS_Mi8_base : Helicopter_Base_F {
		soundLocked[] = {"LATMods\Sounds\lockedOnRUS.wss",1,1};
		soundIncommingMissile[] = {"LATMods\Sounds\missileLaunchRUS.wss",1,1};
	};
	class UK3CB_BAF_Apache_base : Heli_Attack_01_base_F {
		soundLocked[] = {"LATMods\Sounds\lockedOn2.wss",1,1};
        soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch3.wss",1,1};
    };
	class UK3CB_BAF_Merlin_Base : Heli_Transport_02_base_F {
		soundLocked[] = {"LATMods\Sounds\lockedOn2.wss",1,1};
        soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch3.wss",1,1};
    };
	class UK3CB_BAF_Wildcat_Base : Heli_light_03_base_F {
		soundLocked[] = {"LATMods\Sounds\lockedOn2.wss",1,1};
        soundIncommingMissile[] = {"LATMods\Sounds\missileLaunch3.wss",1,1};
    };
};

//AIM-9 and Stinger sounds
class CfgWeapons
{
	class MissileLauncher;
	class RocketPods;
	class launch_O_Titan_F;
	class Rhs_weap_TOW_Launcher;
	class weapon_BIM9xLauncher : MissileLauncher{
		lockingTargetSound[] = {"LATMods\Sounds\AIM9Growl.wss",20,1};
		lockedTargetSound[] = {"LATMods\Sounds\AIM9Uncaged.wss",20,1};
	};
	class Missile_AA_04_Plane_CAS_01_F : RocketPods {
		lockingTargetSound[] = {"LATMods\Sounds\AIM9Growl.wss",20,1};
		lockedTargetSound[] = {"LATMods\Sounds\AIM9Uncaged.wss",20,1};
	};
	class missiles_ASRAAM : MissileLauncher {
		lockingTargetSound[] = {"LATMods\Sounds\AIM9Growl.wss",20,1};
		lockedTargetSound[] = {"LATMods\Sounds\AIM9Uncaged.wss",20,1};
	};
	class rhs_weap_fim92 : launch_O_Titan_F {
		lockingTargetSound[] = {"LATMods\Sounds\stingerGrowl1.wss",1,1};
		lockedTargetSound[] = {"LATMods\Sounds\stingerLock.wss",1,1};
	};
	class Rhs_weap_stinger_Launcher : Rhs_weap_TOW_Launcher {
		lockingTargetSound[] = {"LATMods\Sounds\stingerGrowl2.wss",20,1};
		lockedTargetSound[] = {"LATMods\Sounds\stingerLock.wss",20,1};
	};
	class rhs_weap_strela : launch_O_Titan_F {
		lockingTargetSound[] = {"LATMods\Sounds\stingerGrowl1.wss",1,1};
		lockedTargetSound[] = {"LATMods\Sounds\stingerLock.wss",1,1};
	};
	class rhs_weap_Igla_twice : Rhs_weap_stinger_Launcher {
		lockingTargetSound[] = {"LATMods\Sounds\stingerGrowl2.wss",1,1};
		lockedTargetSound[] = {"LATMods\Sounds\stingerLock.wss",1,1};
	};
	class rhs_weap_SidewinderLauncher : MissileLauncher {
		lockingTargetSound[] = {"LATMods\Sounds\AIM9Growl.wss",1,1};
		lockedTargetSound[] = {"LATMods\Sounds\AIM9Uncaged.wss",1,1};
	};
	class rhs_weap_AIM120 : MissileLauncher {
		lockingTargetSound[] = {,1,1};
		lockedTargetSound[] = {,1,1};
	};
	class rhs_weap_r73_Launcher : RocketPods {
		lockingTargetSound[] = {,1,1};
		lockedTargetSound[] = {,1,1};
	};
	class rhs_weap_r27r_Launcher : RocketPods {
		lockingTargetSound[] = {,1,1};
		lockedTargetSound[] = {,1,1};
	};
	class rhs_weap_r27t_Launcher : RocketPods {
		lockingTargetSound[] = {,1,1};
		lockedTargetSound[] = {,1,1};
	};
};