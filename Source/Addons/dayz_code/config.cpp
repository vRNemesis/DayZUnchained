#define VSoft		0
#define VArmor		1
#define VAir		2

#define private		0
#define protected		1
#define public		2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define EAST 0 // (Russian)

#include "basicdefines.hpp"

class CfgPatches {
	class dayz_code {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_equip","dayz_weapons","CAMisc3","CABuildingParts","CABuildingParts_Signs","CAStructuresHouse","CAStructuresLand_Ind_Stack_Big","CAStructures_Misc_Powerlines","CAStructures","CABuildings","CABuildings2","Ind_MalyKomin","CAStructures_A_CraneCon","CAStructures_Mil","CAStructures_Nav","CAStructures_Rail","A_Crane_02","A_TVTower","CAStructures_Railway","CAStructuresHouse","CAStructuresHouse_HouseBT"};
	};
	class DZ_DebriefingRemoved
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAUI"};
	};
};

class CfgMods
{
	class DayZ
	{
		dir = "@DayZUnchained";
		name = "DayZ Unchained";
		picture = "z\addons\dayz_code\gui\dayz_logo_ca.paa";
		hidePicture = 0;
		hideName = 0;
		action = "http://www.youtube.com/user/Relevant2MyInterest";
		version = "0.4";
		hiveVersion = 0.96; //0.93
	};
	class DZ_InitWorld
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"Chernarus","Takistan"};
	};
};

class CfgAddons
{
	access = 1;
	class PreloadBanks
	{
	};
	class PreloadAddons
	{
		class dayz
		{
			list[] = {"dayz_code","dayz","dayz_equip","dayz_weapons"};
		};
	};
};

class CfgAISkill {
	aimingaccuracy[] = {0, 0, 1, 1};
	aimingshake[] = {0, 0, 1, 1};
	aimingspeed[] = {0, 0, 1, 1};
	commanding[] = {0, 0, 1, 1};
	courage[] = {0, 1, 1, 1};
	endurance[] = {0, 0, 1, 1};
	general[] = {0, 0, 1, 1};
	reloadspeed[] = {0, 0, 1, 1};
	spotdistance[] = {0, 0, 1, 0.6};
	spottime[] = {0, 0, 1, 1};
};

class CfgInGameUI
{
    class PeripheralVision
    {
        cueColor[] = {0,0,0,0};
    };
	
	
	class MPTable
	{
		color[] = {0,0,0,0}; //{0.7,0.7,0.7,1};
		colorTitleBg[] = {0,0,0,0}; //{0.1,0.15,0.15,1};
		colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.9};
		colorSelected[] = {0,0,0,0}; //{0.7,0.7,0.7,0.4};
		colorWest[] = {0,0,0,0}; //{0.7,0.95,0.7,1};
		colorEast[] = {0,0,0,0}; //{0.95,0.7,0.7,1};
		colorCiv[] = {0,0,0,0}; //{0.8,0.8,0.8,1};
		colorRes[] = {0,0,0,0}; //{0.7,0.7,0.95,1};
		font = "EtelkaNarrowMediumPro";
		size = "0"; //"( 21 / 408 )";
		class Columns
		{
			class Order
			{
				width = 0; //0.046;
				colorBg[] = {0,0,0,0}; //{0.1,0.27,0.1,0.8};
				doubleLine = 0;
			};
			class Player
			{
				width = 0; //0.25;
				colorBg[] = {0,0,0,0}; //{0.1,0.23,0.1,0.8};
				doubleLine = 0;
			};
			class KillsInfantry
			{
				width = 0; //0.11;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_infantry_ca.paa";
			};
			class KillsSoft
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_soft_ca.paa";
			};
			class KillsArmor
			{
				width = 0; //0.11;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_armored_ca.paa";
			};
			class KillsAir
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_air_ca.paa";
			};
			class Killed
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.15,0.1,0.8};
				picture = ""; //"\ca\ui\data\stats_killed_ca.paa";
			};
			class KillsTotal
			{
				width = 0; //0.1;
				doubleLine = 0;
				colorBg[] = {0,0,0,0}; //{0.1,0.35,0.1,0.9};
				picture = ""; //"\ca\ui\data\stats_total_ca.paa";
			};
		};
	};
};

class RscPictureGUI
{
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.38,0.63,0.26,0.75};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	style = "0x30 + 0x100";
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};


class RscStructuredText {
	class Attributes;
};
class RscStructuredTextGUI: RscStructuredText
{
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	class Attributes: Attributes
	{
		align = "center";
		valign = "middle";
	};
};
//#include "CfgWorlds.hpp"
#include "cfgMoves.hpp"
#include "rscTitles.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "cfgLoot.hpp"
#include "CfgMarkers.hpp"
#include "CfgAmmo.hpp"

class CfgSurvival {
	class Inventory {
		class Default {
			//weapons[] = {"Makarov"};
			magazines[] = {"ItemBandage","ItemPainkiller"};
			weapons[] = {"ItemFlashlight"};
			backpackWeapon = "";
			backpack = "DZ_Patrol_Pack_EP1";
		};
	};
	class Meat {
		class Default {
			yield = 2;
			rawfoodtype = "FoodmeatRaw";
		};
		class Cow: Default {
			yield = 6;
			rawfoodtype = "FoodbeefRaw";
		};
		class Cow01: Cow {};
		class Cow02: Cow {};
		class Cow03: Cow {};
		class Cow04: Cow {};
		class Goat: Default {
			yield = 4;
			rawfoodtype = "FoodmuttonRaw";
		};
		class Sheep: Default {
			yield = 4;
			rawfoodtype = "FoodmuttonRaw";
		};
		class WildBoar: Default {
			yield = 4;
			rawfoodtype = "FoodbaconRaw";
		};
		class Hen: Default {
			yield = 2;
			rawfoodtype = "FoodchickenRaw";
		};
		class Rabbit: Default {
			yield = 1;
			rawfoodtype = "FoodrabbitRaw";
		};
	};
};

class CfgBuildingLoot {
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"};
		lootChance = 0;
		lootPos[] = {};
		itemType[] = {};
		itemChance[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Master {
		weapons[] = {
			"SMAW",
			"Javelin",
			"G36C",
			"Stinger"
		};
	};
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"ItemSodaMdew","magazine"},
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemMap","weapon"},
			{"Makarov","weapon"},
			{"Colt1911","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"","generic"},
			{"LeeEnfield","weapon"},
			{"revolver_EP1","weapon"},
			
			{"DZ_Assault_Pack_EP1","object"}, // 12
			{"DZ_Czech_Vest_Puch","object"}, // 12-0
			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			
			{"Winchester1866","weapon"},
			{"WeaponHolder_ItemTent","object"},
			{"","military"},
			{"","trash"},
			{"Crossbow_DZ","weapon"},
			{"Binocular","weapon"},
			{"PartWoodPile","magazine"},
			{"Skin_Camo1_DZ","magazine"},
			{"Skin_Sniper1_DZ","magazine"},
			{"WeaponHolder_ItemCrowbar","object"},
			{"MR43","weapon"}
		};
		itemChance[] =	{
			0.01,
			0.15,
			0.05,
			0.03,
			0.13,
			0.05,
			0.03,
			0.08,
			0.06,
			2,
			0.06,
			0.04,
			0.05, //12
			0.04, // 12-0
			0.02, //16
			0.02, //16
			0.01, //18
			0.01,
			0.01,
			0.03,
			0.5,
			0.01,
			0.06,
			0.06,
			0.01,
			0.01,
			0.08,
			0.03
		};		
	};
	class Office: Residential {
		maxRoaming = 3;
		zombieClass[] = {"z_suit1","z_suit2"};
	};
	class Industrial: Default {
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.3;
		lootPos[] = {};
		itemType[] =	{
			{"","generic"},
			{"","trash"},
			{"","military"},
			{"WeaponHolder_PartGeneric","object"},
			{"WeaponHolder_PartWheel","object"},
			{"WeaponHolder_PartFueltank","object"},
			{"WeaponHolder_PartEngine","object"},
			{"WeaponHolder_PartGlass","object"},
			{"WeaponHolder_PartVRotor","object"},
			{"WeaponHolder_ItemJerrycan","object"},
			{"WeaponHolder_ItemHatchet","object"},
			{"ItemKnife","military"},
			{"ItemToolbox","weapon"},
			{"ItemWire","magazine"},
			{"ItemTankTrap","magazine"}
		};
		itemChance[] =	{
			0.18,
			0.29,
			0.04,
			0.04,
			0.05,
			0.02,
			0.02,
			0.04,
			0.01,
			0.04,
			0.11,
			0.07,
			0.06,
			0.01,
			0.04
		};
	};
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{
			{"WeaponHolder_ItemJerrycan","object"},
			{"","generic"},
			{"huntingrifle","weapon"},
			{"LeeEnfield","weapon"},
			{"Winchester1866","weapon"},
			{"","trash"},
			{"Crossbow_DZ","weapon"},
			{"PartWoodPile","magazine"},
			{"WeaponHolder_ItemHatchet","object"},
			{"MR43","weapon"},
			{"WeaponHolder_ItemMachete"}
		};
		itemChance[] =	{
			0.06,
			0.28,
			0.01,
			0.04,
			0.03,
			0.22,
			0.03,
			0.11,
			0.17,
			0.06,
			0.03
		};
	};
	class Supermarket: Default {
		lootChance = 0.6;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		itemType[] = {
			{"ItemWatch","generic"},
			{"ItemCompass","generic"},
			{"ItemMap","weapon"},
			{"Makarov","weapon"},
			{"Colt1911","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"","generic"},
			{"LeeEnfield","weapon"},
			{"revolver_EP1","weapon"},
					
			{"DZ_Assault_Pack_EP1","object"}, // 12
			{"DZ_Czech_Vest_Puch","object"}, // 12-0
			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			
			{"Winchester1866","weapon"},
			{"WeaponHolder_ItemTent","object"},
			{"","food"},
			{"","trash"},
			{"Crossbow_DZ","weapon"},
			{"Binocular","weapon"},
			{"PartWoodPile","magazine"},
			{"MR43","weapon"}
		};
		itemChance[] =	{
			0.15,
			0.01,
			0.05,
			0.02,
			0.02,
			0.05,
			0.02,
			0.05,
			0.05,
			0.01,
			0.01,
			0.05, //12
			0.04, // 12-0
			0.02, //16
			0.02, //16
			0.01, //18
			0.01,
			0.01,
			0.3,
			0.15,
			0.01,
			0.05,
			0.02,
			0.01
		};
	};
	class HeliCrash: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{		
			{"FN_FAL","weapon"},
			{"bizon_silenced","weapon"},
			{"M14_EP1","weapon"},
			{"FN_FAL_ANPVS4","weapon"},
			{"M107_DZ","weapon"},
			{"BAF_AS50_scoped","weapon"},
			{"Mk_48_DZ","weapon"},
			{"M249_DZ","weapon"},
			{"BAF_L85A2_RIS_SUSAT","weapon"},
			{"DMR","weapon"},
			{"","military"},
			{"","medical"},
			{"MedBox0","object"},
			{"NVGoggles","weapon"},
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},
			{"Skin_Camo1_DZ","magazine"},
			{"Skin_Sniper1_DZ","magazine"},
			{"G36C","weapon"},
			{"G36C_camo","weapon"},
			//{"G36_C_SD_camo","weapon"},
			{"G36A_camo","weapon"},
			{"G36K_camo","weapon"},
			{"100Rnd_762x54_PK","magazine"}
		};
		itemChance[] =	{
			0.02,		//{"FN_FAL","weapon"},
			0.05,		//{"bizon_silenced","weapon"},
			0.05,		//{"M14_EP1","weapon"},
			0.02,		//{"FN_FAL_ANPVS4","weapon"},
			0.02,		//{"m107","weapon"},
			0.01,		//{"BAF_AS50_scoped","weapon"},
			0.03,		//{"Mk_48_DZ","weapon"},
			0.05,		//{"M249_DZ","weapon"},
			0.01,		//{"BAF_L85A2_RIS_SUSAT","weapon"},
			0.06,		//{"DMR","weapon"},
			1,			//{"","military"},
			0.5,		//{"","medical"},
			0.1,		//{"MedBox0","object"},
			0.02,		//{"NVGoggles","weapon"}
			0.1,	//AmmoBoxSmall_556
			0.1,	//AmmoBoxSmall_762
			0.08,	//Skin_Camo1_DZ
			0.05,	//Skin_Sniper1_DZ
			0.03,	//G36C"
			0.02,	//G36C_camo
			//0.01,	//G36_C_SD_camo
			0.02,	//G36A_camo
			0.02,	//G36K_camo
			0.01	//("100Rnd_762x54_PK","magazine"}
		};
	};
	class HeliCrash_No50s: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{		
			{"FN_FAL","weapon"},
			{"bizon_silenced","weapon"},
			{"M14_EP1","weapon"},
			{"FN_FAL_ANPVS4","weapon"},
			{"Mk_48_DZ","weapon"},
			{"M249_DZ","weapon"},
			{"BAF_L85A2_RIS_SUSAT","weapon"},
			{"DMR","weapon"},
			{"","military"},
			{"","medical"},
			{"MedBox0","object"},
			{"NVGoggles","weapon"},
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},
			{"Skin_Camo1_DZ","magazine"},
			{"Skin_Sniper1_DZ","magazine"},
			{"G36C","weapon"},
			{"G36C_camo","weapon"},
			//{"G36_C_SD_camo","weapon"},
			{"G36A_camo","weapon"},
			{"G36K_camo","weapon"},
			{"100Rnd_762x54_PK","magazine"}
		};
		itemChance[] =	{
			0.02,		//{"FN_FAL","weapon"},
			0.05,		//{"bizon_silenced","weapon"},
			0.05,		//{"M14_EP1","weapon"},
			0.02,		//{"FN_FAL_ANPVS4","weapon"},
			0.03,		//{"Mk_48_DZ","weapon"},
			0.05,		//{"M249_DZ","weapon"},
			0.01,		//{"BAF_L85A2_RIS_SUSAT","weapon"},
			0.06,		//{"DMR","weapon"},
			1,			//{"","military"},
			0.5,		//{"","medical"},
			0.1,		//{"MedBox0","object"},
			0.02,		//{"NVGoggles","weapon"}
			0.1,	//AmmoBoxSmall_556
			0.1,	//AmmoBoxSmall_762
			0.08,	//Skin_Camo1_DZ
			0.05,	//Skin_Sniper1_DZ
			0.03,	//G36C"
			0.02,	//G36C_camo
			//0.01,	//G36_C_SD_camo
			0.02,	//G36A_camo
			0.02,	//G36K_camo
			0.01	//("100Rnd_762x54_PK","magazine"}
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"","hospital"},
			{"MedBox0","object"}
		};
		itemChance[] =	{
			0.2,
			1,
			0.2
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"M9","weapon"},
			{"M16A2","weapon"},
			{"M16A2GL","weapon"},
			{"M9SD","weapon"},
			{"AK_74","weapon"},
			{"M4A1_Aim","weapon"},
			{"AKS_74_kobra","weapon"},
			{"AKS_74_U","weapon"},
			{"AK_47_M","weapon"},
			{"M24","weapon"},
			{"M1014","weapon"},
			{"DMR","weapon"},
			{"M4A1","weapon"},
			{"M14_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"Remington870_lamp","weapon"},
			{"glock17_EP1","weapon"},
			{"MP5A5","weapon"},
			{"MP5SD","weapon"},
			{"M4A3_CCO_EP1","weapon"},
			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"ItemMap","military"},
			
			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			{"DZ_CivilBackpack_EP1","object"}, // 24
			{"DZ_Backpack_EP1","object"}, // 24
			
			//Normal
			{"","medical"},
			{"","generic"},
			{"","military"},
			//{"Body","object"},
			{"ItemEtool","weapon"},
			{"ItemSandbag","magazine"},
			{"Sa58P_EP1","weapon"},
			{"Sa58V_EP1","weapon"},
			{"BAF_L85A2_RIS_Holo","weapon"}
		};
		itemChance[] =	{
			0.05,
			0.05,
			0.01,
			0.02,
			0.15,
			0.01,
			0.08,
			0.05,
			0.05,
			0.01,
			0.10,
			0.01,
			0.02,
			0.01,
			0.05,
			0.08,
			0.10,
			0.04,
			0.02,
			0.01,
			0.06,
			0.10,
			0.10,
			0.01,
			0.05,
			//Bags
			0.08, //16
			0.08, //16
			0.06, //18
			0.01, //24
			0.01, //DZ_Backpack_EP1 24
			0.10, 
			1.00,
			2.50,
			//0.20,
			0.05,
			0.02,
			0.03,
			0.03,
			0.01
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"M16A2","weapon"},
			{"M16A2GL","weapon"},
			{"M249_DZ","weapon"},
			{"M9SD","weapon"},
			//{"M136","weapon"},
			{"AK_74","weapon"},
			{"M4A1_Aim","weapon"},
			{"AKS_74_kobra","weapon"},
			{"AKS_74_U","weapon"},
			{"AK_47_M","weapon"},
			{"M24","weapon"},
			{"SVD_CAMO","weapon"},
			{"M1014","weapon"},
			{"M107_DZ","weapon"},
			{"DMR","weapon"},
			{"M4A1","weapon"},
			{"M14_EP1","weapon"},
			{"UZI_EP1","weapon"},
			{"Remington870_lamp","weapon"},
			{"glock17_EP1","weapon"},
			{"M240_DZ","weapon"},
			{"M4A1_AIM_SD_camo","weapon"},
			{"M16A4_ACG","weapon"},
			{"M4A1_HWS_GL_camo","weapon"},
			{"Mk_48_DZ","weapon"},
			{"M4A3_CCO_EP1","weapon"},
			//Ammo
			{"AmmoBoxSmall_556","object"},
			{"AmmoBoxSmall_762","object"},

			//{"NVGoggles","weapon"},
			{"Binocular","weapon"},
			{"ItemFlashlightRed","military"},
			{"ItemKnife","military"},
			{"ItemGPS","weapon"},
			{"ItemMap","military"},
			{"Binocular_Vector","military"},

			{"DZ_ALICE_Pack_EP1","object"}, // 16
			{"DZ_TK_Assault_Pack_EP1","object"}, // 16
			{"DZ_British_ACU","object"}, // 18
			{"DZ_CivilBackpack_EP1","object"}, // 24
			{"DZ_Backpack_EP1","object"}, // 24		

			{"","medical"},
			{"","generic"},
			{"","military"},
			//{"Body","object"},
			{"PipeBomb","magazine"},
			{"Sa58V_RCO_EP1","weapon"},
			{"Sa58V_CCO_EP1","weapon"},
			//{"G36_C_SD_camo","weapon"},
			{"M40A3","weapon"},
			{"100Rnd_762x54_PK","magazine"}
		};
		itemChance[] =	{
			0.10,
			0.05,
			0.01,
			0.02,
			//0.01, //m136
			0.10,
			0.02,
			0.10,
			0.10,
			0.10,
			0.01,
			0.01,
			0.20,
			0.01,
			0.02,
			0.10,
			0.03,
			0.20,
			0.10,
			0.20,
			0.01,
			0.04,
			0.05,
			0.02,
			0.01,
			0.08,
			0.04,
			0.02,
			//0.01, //NVGoggles
			0.10,
			0.05,
			0.15,
			0.01, //ItemGPS
			0.03,
			0.01,
			//Bags
			0.08, //16
			0.08, //16
			0.06, //18
			0.01, //24
			0.01, //DZ_Backpack_EP1 24
			0.30,
			1.00,
			5.00, //military
			//0.20,
			0.01, //PipeBomb
			0.01, //Sa58V_RCO_EP1
			0.01, //Sa58V_CCO_EP1
			//0.01, //{"G36_C_SD_camo","weapon"},
			0.02, // M40A3
			0.01	//("100Rnd_762x54_PK","magazine"}
		};
	};
	class Hunting: Default {
		zombieChance = 0.4;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_hunter","z_hunter","z_hunter"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"ItemMap","weapon"},
			{"ItemFlashlight","generic"},
			{"ItemKnife","generic"},
			{"ItemMatchbox","generic"},
			{"Crossbow_DZ","weapon"},
			{"","military"},
			{"WeaponHolder_ItemMachete", "object"},
			{"huntingrifle","weapon"},
			{"","hunter"}
		};
		itemChance[] =	{
			0.08,
			0.05,
			0.04,
			0.06,
			0.03,
			2.00,
			0.03,
			0.04,
			3.00
		};
	};	
	class Church: Residential {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_priest","z_priest","z_priest"};
	};
	class Land_HouseV_1I4: Residential {
		lootPos[] = {{-0.400146,-3.87695,-2.76879},{-3.67749,-2.52002,-2.76551},{-0.472168,3.19702,-2.72021}};
	};
	class Land_kulna: Residential {
		lootPos[] = {{0.504395,0.218262,-1.11643},{-0.496582,1.93262,-1.12826}};
	};
	class Land_Ind_Workshop01_01: Industrial {
		lootPos[] = {{0.595215,-2.43115,-1.29412},{1.24365,0.463867,-1.295},{-0.663574,-0.50293,-1.29837}};
	};
	class Land_Ind_Garage01: Industrial {
		lootPos[] = {{-0.580078,-1.49707,-1.23483},{-0.834473,2.75781,-1.22563},{2.47754,-1.12891,-1.23714},{1.31934,1.63086,-1.23228}};
	};
	class Land_Ind_Workshop01_02: Industrial {
		lootPos[] = {{1.1543,-0.552246,-1.42943},{-1.18665,-0.178223,-1.42868},{-0.661621,1.104,-1.42682}};
	};
	class Land_Ind_Workshop01_04: Industrial {
		lootPos[] = {{-1.37415,4.18896,-1.53123},{0.695435,4.24561,-1.52934},{-1.06677,2.69531,-1.53062},{0.79248,-4.60742,-1.49341},{-1.84424,-6.1709,-1.44427},{-1.05566,-4.08398,-1.51927},{1.43774,-6.59424,-1.41742}};
		hangPos[] = {{-0.541748,4.01221,-2.03068}};
	};
	class Land_Ind_Workshop01_L: Industrial {
		lootPos[] = {{-3.26172,4.75439,-1.30246},{0.175781,3.91748,-1.30766},{-2.37891,2.35303,-1.30405},{4.10547,-4.10791,-1.31345},{0.727539,-2.61621,-1.31418},{2.54688,-2.17725,-1.31482},{1.52344,-3.79443,-1.31332}};
	};
	class Land_Hangar_2: Industrial {
		lootPos[] = {{10.1245,-6.4873,-2.56317},{11.9387,7.91113,-2.56317},{1.79517,7.12695,-2.56317},{-11.8948,10.5449,-2.56317},{-8.97021,-4.34766,-2.56317},{-0.562744,-7.59375,-2.56317},{5.98804,-2.6123,-2.56317}};
	};
	class Land_hut06: Residential {
		lootPos[] = {{0.328125,2.26953,-1.57786},{-0.552368,-0.0620117,-1.53837}};
	};
	class Land_stodola_old_open: Farm {
		lootPos[] = {{-3.06836,8.63184,-5.08054},{2.52588,10.5261,-5.08051},{4.76758,5.00854,-0.9935},{-2.78467,10.2368,-0.9935},{4.62598,10.4983,-0.993469},{2.09082,10.8425,2.96448},{-0.440918,10.3091,2.96445},{-2.58838,-5.91821,-5.08054},{4.11084,-10.9302,-5.08054},{-2.62842,-6.55518,-1.01584},{2.50537,-10.741,2.96445},{0.0410156,-11.0596,2.96445}};
		hangPos[] = {{-1.50537,5.34473,-5.08813},{0.494141,9.42725,-5.09016},{2.59473,-6.21191,-5.08055},{-1.74854,-2.39844,-1.14301}};
	};
	class Land_A_FuelStation_Build: Industrial {
		lootChance = 0.5;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootPos[] = {{-1.31958,-0.655151,-1.57448},{1.82349,0.769653,-1.57458},{1.67871,-0.918701,-1.57458},{-1.23242,1.26794,-1.57458}};
	};
	class Land_A_GeneralStore_01a: Supermarket {
		lootPos[] = {{-6.93213,1.0708,-1.20155},{-7.2959,-2.68213,-1.20155},{-3.41406,-4.39307,-1.20155},{-1.28809,-2.57861,-1.20155},{0.903809,-4.35986,-1.20155},{3.1377,-3.40771,-1.20155},{7.53418,-2.69971,-1.20154},{13.9653,-4.50342,-1.20155},{10.2617,0.109863,-1.20155},{10.5869,-3.84375,-1.20155},{7.84521,-0.137207,-1.20154},{3.57471,0.0356445,-1.20154},{-0.370605,5.17676,-1.20155},{4.77783,5.57617,-1.20155},{13.0874,4.35645,-1.20155},{12.9932,6.31689,-1.20155},{7.36328,3.00928,-1.20155},{1.93091,2.17236,-1.20154},{-3.82715,5.3335,-1.20155},{-7.55029,8.54199,-1.20154},{-4.42407,8.96631,-1.20154},{3.72705,8.36084,-1.20155},{9.84033,8.3374,-1.20155},{-2.90918,1.32031,-1.20155}};
	};
	class Land_A_GeneralStore_01: Supermarket {
		lootPos[] = {{-9.38965,-3.30371,-1.20155},{-3.77539,-3.86865,-1.20155},{1.31836,1.46631,-1.20155},{9.01367,3.8457,-1.20155},{13.3008,-1.77832,-1.20155},{9.81055,1.43213,-1.20155},{1.65039,5.14355,-1.20155},{0.753906,-3.69531,-1.20155},{13.3125,-7.65137,-1.20155},{11.168,-3.73682,-1.20155},{8.89453,-8.37402,-1.20155},{-2.04492,-7.58105,-1.20155},{-7.84766,-5.73633,-1.20155},{-8.22461,-7.32422,-1.20155},{3.79004,-5.69336,-1.20155},{-9.38379,4.46191,-1.20155},{-3.5752,4.46533,-1.20155},{-3.33789,0.612793,-1.20155},{10.5918,-9.9458,-1.21082},{0.105469,-9.6084,-1.21082},{-4.86035,-10.4209,-1.21082},{-6.80859,-1.23975,-1.20155},{1.12207,-1.58887,-1.20155}};
	};
	class Land_Farm_Cowshed_a: Farm {
		lootPos[] = {{-1.06836,-5.92163,-3.08763},{1.69043,-4.91089,-3.08763},{5.8833,-6.15381,-3.08763},{8.83984,-5.60278,-3.08763},{9.74023,-2.48657,-3.08763},{2.88428,-2.34546,-3.08763},{7.88037,2.94214,-3.08763}};
	};
	class Land_stodola_open: Farm {
		lootPos[] = {{-2.60303,5.31665,-4.12804},{-2.58154,-0.530029,-4.17349},{-0.0478516,-4.88989,-4.136},{0.983398,6.20483,-4.11143}};
		hangPos[] = {{-0.932617,-3.35962,-4.16446},{-2.01563,-0.115112,-4.19492}};
	};
	class Land_Barn_W_01: Farm {
		lootPos[] = {{4.93188,-17.0444,-2.63063},{-3.82813,-18.6699,-2.63036},{-4.46387,16.6665,-2.63651},{5.78711,18.9473,-2.6369},{3.9541,4.88428,-2.63446},{-2.99072,-4.16748,-2.63287}};
	};
	class Land_Hlidac_budka: Residential {
		lootPos[] = {{-2.3186,1.5127,-0.78363},{2.02075,0.444336,-0.78363},{-0.460938,1.75879,-0.78363}};
	};
	class Land_HouseV2_02_Interier: Residential {
		lootPos[] = {{7.23096,5.37207,-5.53067},{8.55005,0.754883,-5.53067},{5.20166,-1.54004,-5.53067},{3.34912,1.9707,-5.53067},{-3.62598,3.05371,-5.53067},{-5.4812,-0.0292969,-5.53067},{-5.83325,3.26563,-5.53067},{-5.71045,5.49414,-5.53067}};
	};
	class Land_a_stationhouse: Military {
		lootChance = 0.3;
		lootPos[] = {{-2.69922,-7.57422,-9.47058},{-0.892578,-5.7168,-9.47058},{-3.2417,-6.61914,-4.6489},{-1.35645,-8.3623,-4.6489},{-1.70801,-7.85449,-0.0437927},{-3.39502,-7.88281,-0.0437927},{-1.396,-7.79883,4.41141},{-1.37939,-5.79102,4.41141},{1.5127,1.96484,-9.47058},{18.9058,-4.06738,-9.47058}};
	};
	class Land_Mil_ControlTower: Military {
		lootChance = 0.4;
		lootPos[] = {{10.0703,3.76367,-9.62869},{3.89844,3.43457,-5.46368},{1.75195,5.68164,-5.46368},{6.66113,-0.625488,-1.0687},{2.63965,-0.191406,-1.0687},{6.72266,3.23389,-1.0687}};
	};
	class Land_SS_hangar: Military {
		maxRoaming = 3;
		lootPos[] = {{11.7344,-17.165,-5.87253},{-11.7158,-18.9541,-5.87253},{-14.2461,23.0439,-5.87253}};
	};
	class Land_A_Pub_01: Residential {
		zombieChance = 0.2;
		lootPos[] = {{1.83398,0.393799,-5.7462},{-1.76514,0.334473,-5.74622},{-6.62207,-6.55371,-5.74622},{-4.63623,-0.100586,-5.74622},{-5.75928,-3.05029,-5.74622},{-2.08203,0.922852,-1.76122},{-4.76514,-5.89087,-1.76122},{-6.94385,-1.9375,-1.76122},{-4.05225,-0.779785,-1.76122},{1.39795,-1.73779,-1.76122},{3.13867,-2.78564,-1.76122},{3.58301,-0.591309,-1.76122},{3.03027,-4.04346,-1.76122},{1.94092,3.18799,-1.76122},{-0.0961914,6.22437,-1.76122},{5.30469,7.55957,-1.76122},{6.72559,-2.72705,-1.76122},{2.56885,-4.6001,-5.74621},{4.06738,5.41406,-5.74622},{0.753418,2.2998,-5.74622}};
	};
	class Land_HouseB_Tenement: Office {
		lootPos[] = {{5.40576,9.89551,-20.7845},{5.99023,14.1689,-20.7845},{12.9609,14.0718,-20.7845},{14.6069,8.92383,-20.7845},{-2.75635,-2.08594,-20.7845}};
	};
	class Land_A_Hospital: hospital {
		lootChance = 0.9;
		lootPos[] = {{0.807129,-1.16333,-7.33966},{-7.23389,-2.63647,-7.33966},{-16.3687,-2.40381,-7.33966},{-12.2847,-3.19604,-7.33966},{4.40674,-3.50513,-7.33966},{-3.2666,-0.925293,-7.33966},{6.85693,-2.75146,-7.33966},{11.0151,-3.95435,-7.33966},{16.8198,-4.71118,-7.33966},{-1.12793,3.78418,-7.44939},{12.7476,0.142822,3.29184},{10.2661,-1.21558,3.29184}};
	};
	class Land_Panelak: Office {
		lootPos[] = {{-2.76904,-6.26563,0.0714226},{-2.93896,-1.3916,0.0714226},{-5.42065,-3.13184,0.0714226},{-6.81128,-6.15527,0.0714221},{-4.00879,2.53027,0.0714226},{-0.730957,-3.20117,2.77144},{3.979,-7.08936,2.77144},{2.49609,2.93701,2.77144},{6.7373,1.63281,2.77144},{6.38525,-2.3916,2.77144},{6.80615,-5.77295,2.77144},{3.75122,-0.803711,2.77144},{-0.824219,1.86914,1.32865}};
	};
	class Land_Panelak2: Office {
		lootPos[] = {{-0.729492,-3.00635,-2.62859},{-0.764648,1.36279,-1.37137},{-0.30127,3.65039,1.32864},{0.73584,-3.22217,2.71097},{-0.630859,1.84766,4.05244},{3.68921,-7.33545,5.43665},{2.26807,2.94092,5.43665},{6.7002,2.68994,5.43665},{6.87842,-1.45947,5.43665},{6.09619,-5.94824,5.43665},{4.45508,-1.64893,5.43665},{2.76367,0.445801,5.43665}};
	};
	class Land_Shed_Ind02: Industrial {
		lootPos[] = {{-2.28174,-5.67236,-4.62599},{4.54529,9.6665,-4.62599},{4.41223,2.64941,-1.27954},{-0.437866,11.6943,-1.27641},{-3.44482,12.2119,-1.27704}};
	};
	class Land_Shed_wooden: Residential {
		lootPos[] = {{1.26807,-0.361328,-1.29153},{-0.342773,1.0293,-1.29153}};
	};
	class Land_Misc_PowerStation: Industrial {
		lootPos[] = {{4.09888,4.89746,-1.26743},{4.22827,-1.19873,-1.2681}};
	};
	class Land_HouseBlock_A1_1: Residential {
		lootPos[] = {{-3.52881,0.158936,-4.74365},{-3.56152,-2.33484,-4.73106}};
	};
	class Land_Shed_W01: Industrial {
		lootPos[] = {{-1.52637,-0.246094,-1.41129}};
	};
	class Land_HouseV_1I1: Residential {
		lootPos[] = {{0.181641,-1.97314,-2.82275}};
	};
	class Land_Tovarna2: Industrial {
		lootPos[] = {{-11.6309,7.2052,-5.55933},{-12.0674,2.56909,-5.55933},{-4.89355,6.6394,-5.55933},{-3.74121,2.90393,-3.89665},{-12.8672,1.44519,-2.23135},{-12.415,8.1311,-2.23135},{-12.7236,4.11255,-2.23135},{-3.99805,8.9801,-2.23156},{-7.33105,8.44214,-2.23156},{-4.55371,5.22644,-2.23156},{-11.4746,2.92114,1.66661},{-11.0703,8.13818,1.66661},{-4.67578,7.32678,1.62174},{-2.68262,3.44763,3.4243},{-13.1953,-8.95862,3.4243},{-8.80859,-0.443481,0.401226},{-12.1328,-0.149414,0.424298},{-2.03418,6.61414,-5.55933},{0.239258,1.72278,-5.59793},{6.22461,-3.948,-4.61825},{-6.39355,-8.24353,-5.59541},{-10.8496,-6.91211,-5.56572},{-6.77637,-1.73083,-5.56019}};
	};
	class Land_rail_station_big: Office {
		lootPos[] = {{-4.97266,4.55737,-5.04438},{0.458496,4.85229,-5.04438},{2.4624,2.21851,-5.04438},{-1.32373,-2.60571,-5.04438},{-3.29443,-0.121826,-5.04438},{-1.07764,2.36646,-5.04438},{7.46045,-3.41528,-5.04438},{8.93408,3.1189,-5.04438},{-8.16357,-5.12842,-5.04438}};
	};
	class Land_Ind_Vysypka: Industrial {
		lootPos[] = {{0.486084,4.95459,-4.96861},{1.08032,-0.406738,-4.96801},{-0.0354004,-10.8208,-4.96686},{-5.07788,-16.4624,-4.96759},{-6.30298,2.92969,-4.96838},{-6.26685,26.7349,-4.9772},{1.64697,23.4038,-4.97097},{7.14575,3.92529,-4.96972},{4.63599,-12.1621,-4.96971}};
	};
	class Land_A_MunicipalOffice: Residential {
		zombieChance = 0.4;
		minRoaming = 3;
		maxRoaming = 9;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.4;
		lootPos[] = {{-4.66113,-6.27173,-18.429},{3.31641,-5.77417,-18.429},{-0.20752,-6.48682,-18.429},{-9.72412,-4.88745,-3.78903},{-9.57813,3.55615,-3.78903},{-7.16797,11.0737,-3.78903},{5.07422,11.1838,-3.78903},{9.3208,5.38623,-3.78903},{9.65332,-4.82056,-3.78903},{3.23535,-0.105957,-0.169027},{4.85205,-3.69019,-0.169027},{-0.80127,-7.89087,-0.169027},{-4.4082,-4.91772,-0.169027},{-4.90771,-2.23169,-0.169027}};
	};
	class Land_A_Office01: Office {
		lootPos[] = {{-2.50391,-2.46948,-4.528},{4.23535,-0.336914,-4.528},{4.11133,6.1123,-4.528},{0.242188,6.06299,-4.528},{4.31641,3.74023,-4.528},{5.08887,0.219727,-4.528},{11.6504,-1.5647,-4.528},{14.5811,-4.1123,-4.528},{13.8545,-0.749023,-4.528},{-7.7627,5.59082,-4.528},{1.81152,0.993408,-2.028},{4.93164,4.31982,-2.028},{1.18945,6.07031,-2.028},{2.23145,3.76563,-2.028},{-4.76367,-2.51221,-2.028},{-14.5596,-3.40723,-2.028},{-15.2705,5.92773,-2.028},{-10.9063,6.04175,0.472008},{-6.30762,3.30078,0.472006},{7.6416,6.38696,0.472001},{13.6729,6.5957,0.471999},{13.1924,-2.58691,0.471998},{3.0918,2.4375,6.20491},{-1.45703,-2.28369,6.20491},{-2.12988,4.51587,0.472005},{4.74414,-4.60156,-2.01486},{8.3457,-1.10718,-2.028},{9.94727,-3.74146,-2.028},{7.13867,-2.50732,-2.028},{12.8701,4.70923,-2.028},{15.3721,3.42383,-2.028}};
	};
	class Land_A_Office02: Office {
		lootPos[] = {{4.72266,-5.74121,-8.15108},{0.961426,-5.16943,-8.15076}};
	};
	class Land_A_BuildingWIP: Industrial {
		lootChance = 0.5;
		lootPos[] = {{-4.62573,4.52344,-6.45268},{-12.6377,0.494141,-6.49242},{-14.6023,-8.62842,-6.49961},{-16.0005,-9.80957,-6.50423},{-15.5627,-5.17725,-6.50523},{0.94458,-2.30371,-6.43043},{7.28125,3.20898,-6.44042},{9.75708,10.1138,-6.40827},{14.771,7.29688,-6.47756},{15.4504,-0.314941,-6.52979},{20.4895,2.31836,-4.52571},{17.3123,-3.1001,-2.53291},{10.707,-6.51611,-2.53255},{2.22534,-9.21582,-2.534},{-8.91943,-7.18896,-2.53313},{-16.3179,-8.35645,-2.53357},{-21.3064,-6.7915,-2.53182},{-21.6018,-1.79541,-2.53182},{-17.5808,6.14746,-2.53182},{-23.198,8.44727,-2.53182},{-17.1973,9.58594,-2.53182},{-4.99023,9.80957,-2.53182},{14.0872,7.44092,-2.52676},{10.5796,-6.84912,1.48116},{-3.19116,-2.49463,1.49403},{-13.8186,3.98975,1.49829},{-15.9502,-6.17383,1.48802},{-20.6997,-16.9761,1.50282},{-15.415,-13.3901,5.46683}};
	};
	class Land_Church_01: Church {
		lootPos[] = {{-6.92102,-0.382813,-4.21339}};
	};
	class Land_Church_03: Church {
		lootPos[] = {{5.15332,-6.96875,-14.3021},{-1.79053,-7.68018,-14.3021},{-0.0263672,-2.98438,-14.3021},{-0.00341797,2.02246,-14.3021},{5.49878,7.20508,-14.3021},{5.38892,3.4043,-14.3021},{3.23657,2.76074,-14.3021},{-1.51001,7.66309,-14.3021},{-7.6416,4.8125,-14.3021},{-6.56592,-4.59131,-14.3021},{9.552,2.22363,-13.7588},{9.93262,-3.85254,-13.7588}};
		hangPos[] = {{1.72168,-8.39771,-0.172569},{2.08838,-14.4236,-0.27536},{-13.7158,-10.4808,-0.795174},{-12.9072,-16.4105,-0.895065}};
	};
	class Land_Church_02: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_02a: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_05R: Church {
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Mil_Barracks_i: MilitarySpecial {
		lootPos[] = {{5.39038,-1.75684,-1.09824},{1.46753,-0.131836,-1.09824},{1.29395,-2.16211,-1.09824},{-1.78394,-0.168945,-1.09824},{-1.80615,-1.97656,-1.09824},{-4.77881,0.0488281,-1.09824},{-5.39258,-2.11816,-1.09824},{-5.47046,2.58105,-1.09824},{-8.32593,-0.144531,-1.09824},{-9.14966,-2.55859,-1.09824},{-1.95288,2.57715,-1.09824},{5.46362,2.57813,-1.09824}};
	};	//Qty: 2
	class Land_A_TVTower_Base: Industrial {
		lootPos[] = {{-0.982422,-1.92627,-2.21573},{-2.01782,-4.2417,-2.21918},{-0.759277,1.42139,-2.21573}};
	};
	class Land_Mil_House: Military {
		vehPos[] = {{13.439,3.25244,-5.71244,84}};
		lootPos[] = {{12.457,1.4248,-5.81439},{11.0391,4.85278,-5.81439},{13.667,4.42139,-5.81439}};
	};
	class Land_Misc_Cargo1Ao: Industrial {
		lootPos[] = {{0.48877,-1.61377,-1.09224},{0.012207,2.19263,-1.09224},{0.00976563,0.19043,-1.09224}};
	};
	class Land_Misc_Cargo1Bo: Industrial {
		lootPos[] = {{-0.322021,1.68555,-1.09222},{0.548584,-1.96289,-1.09222},{0.223389,-0.580078,-1.09222}};
	};
	class Land_Nav_Boathouse: Industrial {
		lootPos[] = {{5.27588,5.51953,3.9203},{5.49609,0.106445,4.19408},{1.68945,7.5166,3.80288},{-5.03613,6.19141,3.91093},{-5.63037,-1.27246,4.41481},{-6.98779,5.52441,3.9814},{-2.92236,9.2002,3.73014},{6.99463,7.80859,3.80663},{7.00342,-2.07422,4.31929}};
	};
	class Land_ruin_01: Residential {
		lootPos[] = {{-4.31934,-0.115234,-1.45578},{3.41309,0.270508,-1.71365},{3.00293,3.42773,-1.55765},{0.62207,-1.73779,-1.49048}};
	};
	class Land_wagon_box: Industrial {
		lootPos[] = {{0.542969,-3.89453,-0.776679},{0.47998,-0.608398,-0.776638},{0.515381,3.03857,-0.776592}};
	};
	class Land_HouseV2_04_interier: Residential {
		lootPos[] = {{7.49463,5.8374,-5.73902},{7.50989,-0.930176,-5.74176},{1.95532,4.16406,-5.73938},{2.10876,6.60645,-5.7386},{-2.30017,4.22461,-5.73936},{-5.13306,6.74365,-5.73856},{-4.74658,2.68457,-5.73985}};
	};
	class Land_HouseV2_01A: Residential {
		lootPos[] = {{-3.52881,-3.16895,-5.60346},{-1.62988,-3.25439,-5.66887}};
	};
	class Land_psi_bouda: Residential {
		maxRoaming = 4;
		lootPos[] = {{-1.77002,-1.45166,1.95942}};
	}; // Qty: 183
	class Land_KBud: Residential {
		zombieChance = 0.3;
		maxRoaming = 0;
		lootPos[] = {{-0.0170898,0.0114746,-0.66367}};
	}; // Qty: 90
	class Land_A_Castle_Bergfrit: Residential {
		lootPos[] = {{0.0185547,1.91602,-2.8364},{1.19141,-1.43848,-2.8364},{-2.36816,3.32275,-0.628571},{2.36133,3.86768,1.83972},{2.48438,-3.20557,3.85541},{-2.09473,-3.44873,6.31903},{-1.15918,3.13867,8.76691},{1.74707,1.26807,8.76691},{-0.540039,-2.35254,8.76691},{-1.62207,-4.27979,13.4801},{-2.23047,4.82471,16.856},{1.67578,-0.825195,16.8505}};
	}; // Qty: 3
	class Land_A_Castle_Stairs_A: Residential {
		lootPos[] = {{0.697998,-1.79395,0.726929},{8.3938,0.890625,0.875122},{8.17261,1.48926,7.02588}};
	}; // Qty: 3
	class Land_A_Castle_Gate: Residential {
		lootChance = 0.7;
		lootPos[] = {{0.244141,-4.48486,-3.14362},{-1.25293,2.98779,-3.07028},{4.50684,-3.31152,-2.94885},{4.55176,3.29834,-2.94858},{7.94824,1.4082,-2.91003}};
	}; // Qty: 3
	class Land_Mil_Barracks: Military {
		lootPos[] = {};
	}; // Qty: 8
	class Land_Mil_Barracks_L: Military {
		lootPos[] = {};
	}; // Qty: 5 
	class Land_Barn_W_02: Farm {
		lootPos[] = {{3.16504,5.56543,-2.31409},{3.35938,-0.152344,-2.31305},{2.53613,-5.89453,-2.30957},{-2.94629,-5.01367,-2.31006},{-2.84375,0.212891,-2.31183},{-5.63281,4.8291,-2.31363}};
	}; // Qty: 3
	class Land_sara_domek_zluty: Residential {
		maxRoaming = 1;
		lootPos[] = {{2.95703,3.00732,-2.4337},{7.06738,2.95557,-2.4337},{6.36304,-0.236328,-2.43375},{0.627686,-0.586914,-2.43387},{-0.659912,2.05371,-2.4337},{-2.77515,0.751953,-2.43372},{-5.07666,3.04492,-2.43361},{-6.17139,-2.33691,-2.43382},{-3.75293,-3.54688,-2.43382}};
	}; // Qty: 3
	class Land_HouseV_3I4: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 103
	class Land_Shed_W4: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 172
	class Land_HouseV_3I1: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 103
	class Land_HouseV_1L2: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 101
	class Land_HouseV_1T: Residential {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 90
	class Land_telek1: Industrial {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 4
	class Land_Rail_House_01: Industrial {
		lootPos[] = {{2.81152,3.61426,-1.28266},{-1.82178,3.10547,-1.28266},{0.487793,3.38867,-1.28266}};
	}; // Qty: 9
	class Land_HouseV_2I: Default {
		maxRoaming = 3;
		lootPos[] = {};
	}; // Qty: 83
	class Land_Misc_deerstand: Hunting {
		zombieChance = 0.3;
		lootChance = 0.5;
		maxRoaming = 3;
		lootPos[] = {{-0.923828,-0.808594,1.08539},{0.419922,-0.237305,1.08539}};
	}; // Qty: 56

	class Camp: Military {
		maxRoaming = 1;
		lootPos[] = {{0.833252,-1.52246,-1.15955},{0.38501,0.963867,-1.15955}};
	}; // Qty: 1

	class CampEast: Military {
		maxRoaming = 1;
		lootPos[] = {{-1.05713,-1.80762,-1.31049},{0.627441,1.83398,-1.31049}};
	}; // Qty: 1
	class CampEast_EP1: Military {
		maxRoaming = 1;
		lootPos[] = {{-0.670898,0.95459,-1.31049},{1.68506,-2.43384,-1.31049},{-1.76318,-1.62646,-1.31049}};
	}; // Qty: 1

	class MASH: Hospital {
		maxRoaming = 1;
		lootChance = 0.4;
		lootPos[] = {{1.18213,-1.65039,-1.17793},{0.24707,0.799316,-1.17803}};
	}; // Qty: 1
	class MASH_EP1: MASH {};

	class UH1Wreck_DZ: Military {
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0.3;
		lootChance = 0.6;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};
	
	class UH60Wreck_DZ: Military {
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0.3;
		lootChance = 0.6;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};

	class USMC_WarfareBFieldhHospital: MASH {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_soldier","z_soldier_heavy"};
		lootPos[] = {{-3.52246,-5.03931,1.14726},{2.36621,-4.52295,1.14786},{1.39063,-0.423096,1.14746},{1.14258,5.00952,1.1478},{3.7124,1.89795,1.14788}};
	}; // Qty: 1

	class Land_Ind_Shed_02_main: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
	}; // Qty: 283
	class HouseRoaming: Residential {
		lootChance = 0.5;
		zombieChance = 0.2;
		maxRoaming = 2;
	};
	class FarmRoaming: Farm {
		lootChance = 0.3;
		zombieChance = 0.4;
		maxRoaming = 2;
	};
//Takistan Beginning
	class Land_House_L_1_EP1: Residential {
		lootPos[] = {{0.871826,-1.55762,-0.616486},{-0.468628,-1.91333,-0.610672},{-0.265747,0.536377,-0.597946}};
	};
	class Land_House_L_3_EP1: Residential {
		lootPos[] = {{2.47095,2.23193,-0.222473},{0.26416,0.171143,-0.222473},{2.61646,0.507813,-0.222473},{-6.02686,1.77661,-0.229202},{-5.7417,0.234619,-0.172028},{-2.88672,0.0483398,-0.246185},{-4.65039,1.53516,2.64725},{1.1842,0.563477,2.22406}};
	};
	class Land_Ind_Garage01_EP1: Industrial {
		lootPos[] = {{-0.580078,-1.49707,-1.23483},{-0.834473,2.75781,-1.22563},{2.47754,-1.12891,-1.23714},{1.31934,1.63086,-1.23228}};
	};
	class Land_House_L_4_EP1: Residential {
		lootPos[] = {{-4.9248,0.795898,-1.34981},{0.29541,-0.552368,-1.33388},{6.14819,1.62915,-1.06708},{-3.52319,3.36365,0.768433},{-4.23145,0.80127,1.72308}};
	};
	class Land_A_FuelStation_Build_EP1: Industrial {
		lootChance = 0.5;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootPos[] = {{-1.31958,-0.655151,-1.57448},{1.82349,0.769653,-1.57458},{1.67871,-0.918701,-1.57458},{-1.23242,1.26794,-1.57458}};
	};
	class Land_House_L_6_EP1: Residential {
		lootPos[] = {{-3.10278,-1.99298,-1.53476},{-3.15869,0.68222,-1.52507},{6.81128,2.18054,-1.509},{3.89819,-1.98239,-1.50899},{6.76025,2.09421,1.28101},{3.60205,-0.866547,1.28099},{3.42529,-0.0309448,1.28101}};
	};
	class Land_House_L_7_EP1: Residential {
		lootPos[] = {{-0.447754,-3.17737,-0.97998},{-2.8252,-6.08374,-0.931091},{-5.09717,2.96655,-0.647263},{-3.92456,3.10986,-0.651184},{0.5625,2.16357,-0.261154},{5.13916,-0.493408,-0.165512}};
	};
	class Land_a_stationhouse_EP1: Military {
		lootChance = 0.3;
		lootPos[] = {{-2.69922,-7.57422,-9.47058},{-0.892578,-5.7168,-9.47058},{-3.2417,-6.61914,-4.6489},{-1.35645,-8.3623,-4.6489},{-1.70801,-7.85449,-0.0437927},{-3.39502,-7.88281,-0.0437927},{-1.396,-7.79883,4.41141},{-1.37939,-5.79102,4.41141},{1.5127,1.96484,-9.47058},{18.9058,-4.06738,-9.47058}};
	};
	class Land_Mil_ControlTower_EP1: Military {
		lootChance = 0.4;
		lootPos[] = {{10.0703,3.76367,-9.62869},{3.89844,3.43457,-5.46368},{1.75195,5.68164,-5.46368},{6.66113,-0.625488,-1.0687},{2.63965,-0.191406,-1.0687},{6.72266,3.23389,-1.0687}};
	};
	class Land_House_L_8_EP1: Residential {
		zombieChance = 0.2;
		lootPos[] = {{5.31592,5.72583,0.440201},{0.53125,5.56653,1.71164},{-1.43726,5.44019,1.67599},{-3.18311,0.695557,1.65121},{-3.38647,-4.27258,1.32121},{-1.90845,-6.01123,1.32121},{3.79834,5.56799,1.72716},{4.87573,3.19666,1.73621},{5.24243,3.61133,1.73621},{4.51929,3.89258,-0.773804},{1.19531,0.245728,-1.01575},{-2.98706,2.46497,-1.01575},{-1.41406,5.46545,-0.993652},{0.989746,5.41211,-1.01489},{4.06152,0.920898,-1.07404},{-2.81055,-1.93311,-1.54376}};
	};
	class Land_House_K_1_EP1: Residential {
		lootPos[] = {{-0.366638,4.03809,1.56625},{-3.11285,1.49536,1.60863},{-3.49854,3.7019,1.54504},{1.40958,3.53564,1.56625},{3.71457,3.01953,1.56625}};
	};
	class Land_Ind_PowerStation_EP1: Industrial {
		lootPos[] = {{4.09888,4.89746,-1.26743},{4.22827,-1.19873,-1.2681}};
	};
	class Land_House_K_3_EP1: Residential {
		lootPos[] = {{-4.6958,-2.12619,-0.795319},{-0.43042,-2.65918,-0.790298},{1.70874,0.0116577,-0.790314},{-0.104492,5.75488,-0.537674},{1.2771,5.4859,-0.537674},{-2.08569,5.74408,-0.537674},{1.35156,5.76053,2.8172},{-0.601074,5.0582,2.8172},{2.07397,1.9064,2.98969},{-2.13403,0.289764,2.98969},{-1.67236,0.710266,2.98969},{1.75073,-0.582886,3.04831}};
	};
	class Land_House_K_5_EP1: Residential {
		lootPos[] = {{-1.14258,1.85571,1.52243},{1.32349,1.95978,1.54776},{2.24414,3.94958,1.72903},{4.77734,2.79785,2.37181},{4.20483,-0.0202637,2.40567},{-6.69385,-2.33386,0.556442}};
	};
	class Land_A_Office01_EP1: Office {
		lootPos[] = {{-2.50391,-2.46948,-4.528},{4.23535,-0.336914,-4.528},{4.11133,6.1123,-4.528},{0.242188,6.06299,-4.528},{4.31641,3.74023,-4.528},{5.08887,0.219727,-4.528},{11.6504,-1.5647,-4.528},{14.5811,-4.1123,-4.528},{13.8545,-0.749023,-4.528},{-7.7627,5.59082,-4.528},{1.81152,0.993408,-2.028},{4.93164,4.31982,-2.028},{1.18945,6.07031,-2.028},{2.23145,3.76563,-2.028},{-4.76367,-2.51221,-2.028},{-14.5596,-3.40723,-2.028},{-15.2705,5.92773,-2.028},{-10.9063,6.04175,0.472008},{-6.30762,3.30078,0.472006},{7.6416,6.38696,0.472001},{13.6729,6.5957,0.471999},{13.1924,-2.58691,0.471998},{3.0918,2.4375,6.20491},{-1.45703,-2.28369,6.20491},{-2.12988,4.51587,0.472005},{4.74414,-4.60156,-2.01486},{8.3457,-1.10718,-2.028},{9.94727,-3.74146,-2.028},{7.13867,-2.50732,-2.028},{12.8701,4.70923,-2.028},{15.3721,3.42383,-2.028}};
	};
	class Land_A_BuildingWIP_EP1: Industrial {
		lootChance = 0.5;
		lootPos[] = {{-4.62573,4.52344,-6.45268},{-12.6377,0.494141,-6.49242},{-14.6023,-8.62842,-6.49961},{-16.0005,-9.80957,-6.50423},{-15.5627,-5.17725,-6.50523},{0.94458,-2.30371,-6.43043},{7.28125,3.20898,-6.44042},{9.75708,10.1138,-6.40827},{14.771,7.29688,-6.47756},{15.4504,-0.314941,-6.52979},{20.4895,2.31836,-4.52571},{17.3123,-3.1001,-2.53291},{10.707,-6.51611,-2.53255},{2.22534,-9.21582,-2.534},{-8.91943,-7.18896,-2.53313},{-16.3179,-8.35645,-2.53357},{-21.3064,-6.7915,-2.53182},{-21.6018,-1.79541,-2.53182},{-17.5808,6.14746,-2.53182},{-23.198,8.44727,-2.53182},{-17.1973,9.58594,-2.53182},{-4.99023,9.80957,-2.53182},{14.0872,7.44092,-2.52676},{10.5796,-6.84912,1.48116},{-3.19116,-2.49463,1.49403},{-13.8186,3.98975,1.49829},{-15.9502,-6.17383,1.48802},{-20.6997,-16.9761,1.50282},{-15.415,-13.3901,5.46683}};
	};
	class Land_A_Mosque_small_1_EP1: Church {
		lootPos[] = {{-5.85254,1.45819,-2.04604},{-2.42847,1.08264,-1.96561},{-1.27148,0.997742,-1.97945},{2.68384,-2.03418,-1.69603},{6.91284,1.3186,-1.94745},{5.3811,0.935486,-2.04604}};
	};
	class Land_A_Mosque_small_2_EP1: Church {
		lootPos[] = {{1.17212,2.79517,-2.48535},{1.33142,0.0349121,-2.48537},{-3.5802,-0.131836,-2.41061}};
	};
	class Land_A_Minaret_EP1: Church {
		lootPos[] = {{-1.28735,-1.39014,-12.9009},{-0.095459,-2.77759,-7.38249},{0.70459,-1.61646,-0.64415},{-0.489746,-2.69067,4.9671}};
		maxRoaming = 2;
	};
	class Land_A_Minaret_Porto_EP1: Church {
		lootPos[] = {{1.79004,0.0842285,-13.8153},{0.412109,-0.306396,-12.0783},{1.63965,0.1875,-7.72827},{0.445313,-0.296875,-3.31429},{1.68457,0.0654297,-2.02737},{1.77832,-0.317139,6.51392},{2.58789,0.241943,9.34502}};
		maxRoaming = 2;
	};
	class Land_A_Mosque_big_hq_EP1: Church {
		lootPos[] = {{0.0229492,7.44043,-9.31999},{0.918945,-8.68164,-9.31999}};
		maxRoaming = 2;
	};
	class Land_Mil_Barracks_i_EP1: MilitarySpecial {
		lootPos[] = {{5.39038,-1.75684,-1.09824},{1.46753,-0.131836,-1.09824},{1.29395,-2.16211,-1.09824},{-1.78394,-0.168945,-1.09824},{-1.80615,-1.97656,-1.09824},{-4.77881,0.0488281,-1.09824},{-5.39258,-2.11816,-1.09824},{-5.47046,2.58105,-1.09824},{-8.32593,-0.144531,-1.09824},{-9.14966,-2.55859,-1.09824},{-1.95288,2.57715,-1.09824},{5.46362,2.57813,-1.09824}};
	};
	class Land_House_K_6_EP1: Residential {
		lootPos[] = {{3.77872,5.33203,-1.60779},{1.22369,4.83667,-1.60793},{-0.0609741,0.880615,-1.52161},{4.36929,-1.37158,-1.60799},{0.334595,-1.88477,-1.60799},{1.28922,4.81055,1.47142},{1.08121,-2.49048,1.4705},{-2.50858,-1.86963,1.48848},{-4.46823,-0.855957,1.55824},{-4.46686,2.36377,1.48524},{-2.38812,1.7915,1.48848},{4.37427,4.93896,4.42143},{2.86694,4.79517,4.42143},{0.578125,4.70215,4.42143},{1.40213,-2.49927,4.42146},{-2.23779,-0.897461,4.42339},{-1.99829,3.8457,4.40755},{-3.20447,1.9248,4.41515}};
	};
	class Land_House_K_7_EP1: Residential {
		lootPos[] = {{-7.63452,1.83044,-0.218369},{-0.537598,4.14795,-0.218369},{-7.45581,3.11414,-0.218369},{-5.47266,3.60999,-0.218369},{-2.39453,3.88123,-0.218369},{-0.71582,1.70496,-0.218369},{-2.9751,0.459717,1.12976},{-0.688965,0.917969,3.23355},{-1.78516,3.67505,3.33363},{-4.34424,0.71936,3.29033},{-6.74683,1.42041,3.29033},{-0.187012,4.09521,3.29031},{-2.92554,-1.13062,3.20523},{0.55127,-1.54089,3.20523}};
	};
	class Land_House_K_8_EP1: Residential {
		lootPos[] = {{-0.804688,-1.44373,-2.55338},{2.66724,-1.16748,-2.57321},{2.71436,-3.04028,-2.56226},{-2.32959,-0.335083,-2.54623},{-1.13818,3.39648,-2.59065},{1.47705,3.35498,-2.59489},{2.71924,-0.784668,0.248505},{1.93066,1.6228,0.254028},{2.68262,3.93335,0.254303},{-1.81958,3.69189,0.250885},{-3.87231,3.5282,0.23053},{1.36084,-0.387329,0.250153},{-2.47119,-0.330688,0.250092},{-1.42651,-0.763794,0.251373},{-0.174072,3.26477,3.35995},{-2.30103,-0.827148,3.35992},{-1.16089,-0.63501,3.43097},{0.0507813,1.91443,3.35999},{2.86499,3.30273,3.35995}};
	};
	class Land_House_C_1_EP1: Supermarket {
		maxRoaming = 4;
		lootPos[] = {{-8.23486,-0.137451,-0.92775},{-6.82837,-1.89648,-0.92775},{3.57593,-2.97314,-0.92775},{7.85718,-1.05005,-0.92775}};
	};
	class Land_House_C_1_v2_EP1: Supermarket {
		zombieChance = 0;
		maxRoaming = 0;
		lootPos[] = {{-7.15088,-1.3291,-1.35547},{-6.39795,0.0136719,-1.35547},{3.16138,-1.58521,-1.35547},{8.2373,2.31641,-1.35547}};
	};
	class Land_A_Villa_EP1: Residential {
		zombieChance = 0;
		maxRoaming = 4;
		lootPos[] = {{11.2998,-0.221191,-5.06722},{8.66064,-4.1123,-5.06717},{13.3926,-14.8101,-5.06719},{0.0800781,0.422363,-5.06716},{-4.50342,8.47412,-5.06711},{-1.19775,12.3999,-5.06723},{-14.7354,13.8022,-5.06719},{-11.5762,10.3374,-5.06709},{-2.38818,3.0791,-1.48419},{2.56543,-2.33398,-1.4844},{-3.79248,-4.06543,-1.4844},{-6.20508,9.83643,-1.4844},{-12.1143,10.3896,-1.4844},{-15.2886,12.709,-1.4844},{-12.2637,15.229,-1.48439},{-7.52734,15.2529,-1.48439},{-3.38477,15.2471,-1.48439},{12.1592,9.54443,1.98539},{18.2222,3.31104,1.99262},{18.3906,-18.2554,1.99257},{18.3027,-7.24219,1.99261},{7.02783,-18.3413,1.9926},{6.38428,-3.43311,1.99247},{-3.45703,-6.48682,1.99165},{-3.33154,6.34033,1.97309},{-18.3467,7.14697,1.97169},{-18.4937,18.5259,1.97169},{-5.97559,18.3418,1.97169},{3.16797,18.439,1.97169},{8.23047,12.0913,1.96864}};
	};
	class Land_House_C_2_EP1: Residential {
		lootPos[] = {{-2.86084,1.9436,-2.27875},{-2.42041,-0.32959,-2.28658},{0.120117,2.42871,-2.30132},{5.36401,2.40552,-2.3127},{5.56445,-0.374512,-2.3127},{5.43213,3.26709,0.764496},{2.02905,1.55225,0.772644},{5.48047,-4.53809,0.80426},{2.14526,-4.18579,0.809158},{-0.468262,-3.60596,0.810181},{2.7605,-0.306885,0.786758},{5.4021,-0.251709,0.786713},{-4.2478,-0.813477,0.547485},{-2.28809,-0.41748,0.547485},{-3.73438,2.56372,0.547501}};
	};
	class Land_House_C_3_EP1: Residential {
		lootPos[] = {{-7.89551,-2.72266,-3.86868},{-8.08228,2.83203,-3.86868},{5.08813,-1.71973,-3.91483},{4.30029,2.77539,-3.91483},{6.79053,3.44531,-3.91481},{6.21802,0.575195,-3.91483},{6.73462,-3.14746,-0.497833},{4.63452,-3.09326,-0.51709},{6.68164,3.63086,-0.530151},{4.73315,3.6582,-0.529999},{0.831299,-3.02539,1.90303},{-0.634033,-3.02441,1.94284},{-4.91504,-3.00781,0.576141},{-6.81006,-3.02441,0.576141},{-4.55859,3.55859,0.576141},{-6.67139,3.29102,0.576141},{-0.293457,-2.27148,5.02356},{-7.78296,-3.22168,4.38844},{-7.97241,3.41113,4.26706},{1.23633,2.45361,5.01308},{4.18799,3.28271,4.12509},{7.73022,4.15723,4.08649},{8.24072,-3.20117,4.07164},{3.80835,-3.63379,4.07164}};
	};
	class Land_House_C_4_EP1: Residential {
		lootChance = 0.7;
		lootPos[] = {{4.45654,1.98218,-3.48355},{5.11157,-2.31543,-3.48355},{2.24097,-1.52881,-3.48354},{-1.18311,4.052,-2.98854},{-4.51245,-2.75488,-3.48355},{-5.25439,-1.70435,-3.48355},{-5.12451,2.75342,-3.48357},{-4.30103,4.07202,-3.48355},{5.53589,3.802,-0.239853},{2.71265,2.63452,-0.349167},{3.896,-5.21729,-0.27861},{1.68481,-5.15601,-0.278625},{-0.723877,-5.13721,-0.278625},{-5.47461,-2.91992,-0.350769},{-5.802,0.827393,-0.349442},{-1.69312,3.81885,2.29858},{-5.09009,2.39697,2.77975},{3.93896,-1.68848,2.80246}};
	};
	class Land_House_C_11_EP1: Residential {
		lootChance = 0.7;
		lootPos[] = {{-3.42017,4.55444,-2.92824},{4.05981,2.37231,-2.08453},{-0.626465,-2.6499,-2.08452},{0.710693,-2.45068,-2.08452},{-3.73608,-4.10059,0.312973},{7.36572,-2.62183,0.972977},{0.852051,-4.34644,0.972992},{3.6394,2.13916,0.972977}};
	};
	class Land_House_C_12_EP1: Industrial {
		lootChance = 0.7;
		lootPos[] = {{4.28687,1.98584,-3.51102},{6.24976,-2.08203,-3.51102},{2.19751,-3.49292,-3.51102},{-0.656738,1.62476,-3.51102},{-1.97192,-6.16162,-3.51102},{1.62012,-6.85571,-3.51102},{-3.31421,-7.27344,0.142807},{2.58154,-7.15503,0.132629},{-2.89453,-2.979,0.13884},{4.37378,-3.82788,0.132629},{6.31665,-1.10522,0.132629},{6.74341,1.41406,0.134293},{-2.69971,-4.67993,3.53703}};
	};
	class Land_Mil_Barracks_EP1: Military {
		lootPos[] = {};
	};
	class Land_Mil_Barracks_L_EP1: Military {
		lootPos[] = {};
	};
	class Land_House_C_5_EP1: Residential {
		maxRoaming = 1;
		lootPos[] = {{3.46216,3.26099,-0.802185},{2.00854,4.51953,-0.802185},{-2.60718,3.14404,-0.802185},{-3.41333,1.79749,-0.8022},{-3.31372,-2.07349,-0.802185},{-2.78809,-4.57544,-0.781952},{-3.42603,-3.97461,-0.763763},{-3.04736,3.62512,1.8428},{4.15454,2.5675,1.8428},{1.70996,4.89856,1.84756},{-1.25635,-0.0124512,1.84279},{-1.05249,-3.82288,1.84279},{-4.06323,-4.62207,1.84279},{-1.61597,-4.71704,1.84279}};
	};
	class Land_House_C_5_V1_EP1: Residential {
		maxRoaming = 3;
		lootPos[] = {{-3.27832,-3.99414,-1.36693},{-2.38306,-4.56055,-1.36693},{-3.72583,-1.95215,-1.36693},{-3.6731,1.53418,-1.36694},{-3.1377,3.34326,-1.36693},{2.15918,4.52539,-1.36693},{3.50977,3.69434,-1.36691},{0.201904,-0.17627,1.21068},{-1.5791,-4.38232,1.17349},{-4.09131,-1.854,1.17351},{-4.06299,3.87451,1.17349},{-0.638184,3.72803,1.4205},{1.99878,3.55029,1.4205},{3.81299,3.32568,1.51646},{2.77832,1.93018,1.42049}};
	};
	class Land_House_C_5_V2_EP1: Industrial {
		maxRoaming = 3;
		lootPos[] = {{-3.27832,-3.99414,-1.36693},{-2.38306,-4.56055,-1.36693},{-3.72583,-1.95215,-1.36693},{-3.6731,1.53418,-1.36694},{-3.1377,3.34326,-1.36693},{2.15918,4.52539,-1.36693},{3.50977,3.69434,-1.36691},{-0.074707,-0.171875,1.37523},{-3.69263,-0.529297,1.27808},{-3.24707,3.50146,1.27808},{0.690674,4.98096,1.28363},{4.1709,5.02686,1.28412},{4.28296,1.14063,1.27808},{-2.37646,-4.66553,1.41467},{-1.77979,-4.25537,1.41423}};
	};
	class Land_House_C_5_V3_EP1: Residential {
		maxRoaming = 3;
		lootPos[] = {{-3.27832,-3.99414,-1.36693},{-2.38306,-4.56055,-1.36693},{-3.72583,-1.95215,-1.36693},{-3.6731,1.53418,-1.36694},{-3.1377,3.34326,-1.36693},{2.15918,4.52539,-1.36693},{3.50977,3.69434,-1.36691},{0.201904,-0.17627,1.21068},{-4.06665,0.222168,1.17351},{-4.05981,3.69482,1.17351},{1.92749,3.90771,1.4205},{3.75244,3.12988,1.51645},{2.79956,1.92822,1.42049},{-2.48779,-4.63818,1.30734}};
	};
	class Land_House_C_9_EP1: Residential {
		maxRoaming = 3;
		lootPos[] = {{2.1875,5.57056,-3.74944},{-0.703613,-2.13892,-3.746},{5.2146,1.86011,-0.152161},{1.323,-5.15723,-0.152161},{-4.99072,0.973633,-0.152161},{-5.03003,1.95142,-0.152161},{-4.74072,4.30688,-0.152161},{2.51685,5.78247,-0.152161},{-4.04321,-4.24194,-0.152161},{-5.06104,-2.87817,-0.152161},{-2.70923,-5.57593,-0.152161},{-2.76172,-3.79248,2.58533},{-0.843994,-5.33569,2.58495},{-4.36621,-1.85352,2.58914},{5.36353,-5.68018,2.58609},{-4.76416,3.79932,2.58914},{2.36792,3.1394,2.58914}};
	};
	class Land_House_C_10_EP1: Residential {
		maxRoaming = 3;
		lootPos[] = {{-1.75024,-2.13672,-4.19254},{-1.21362,-7.8916,-4.20229},{-2.35352,0.68457,-4.18401},{4.3855,-8.71826,-0.868896},{2.42554,-2.13818,-0.869049},{3.85498,2.04321,-0.86879},{1.89136,8.67554,0.367508},{-2.89282,7.90381,-0.776978},{-2.53296,1.58911,-0.868958},{-4.3562,5.38086,-0.543655},{-4.71216,0.64502,-0.549423},{-4.70386,8.83984,-0.548325},{-2.57544,-2.29736,-0.869415},{-4.67603,-4.34937,-0.549469},{-4.66284,-0.777344,-0.548859},{-4.92725,-8.01172,-0.553589},{2.89014,-8.30322,2.52063},{-4.52026,-8.65332,2.47195},{-4.81519,0.40332,2.47195},{-4.77979,8.80518,2.47195},{4.4729,3.72925,2.47195},{4.38306,0.862061,2.47195},{1.40894,7.74316,5.22762}};
	};
	class Land_Ind_Shed_02_EP1: Industrial {
		lootPos[] = {{-2.28174,-5.67236,-4.62599},{4.54529,9.6665,-4.62599},{4.41223,2.64941,-1.27954},{-0.437866,11.6943,-1.27641},{-3.44482,12.2119,-1.27704}};
	};
	class Land_Ind_Shed_01_EP1: Industrial {
		lootPos[] = {{0.595215,-2.43115,-3.19412},{1.24365,0.463867,-3.195},{-0.663574,-0.50293,-3.19837}};
	};
	class Land_Mil_hangar_EP1: Military {
		lootPos[] = {{10.1245,-6.4873,-5.16317},{11.9387,7.91113,-5.16317},{1.79517,7.12695,-5.16317},{-11.8948,10.5449,-5.16317},{-8.97021,-4.34766,-5.16317},{-0.562744,-7.59375,-5.16317},{5.98804,-2.6123,-5.16317}};
	};
//Takistan End
	class Land_Shed_W03: HouseRoaming {}; // Qty: 206
	class Land_HouseV_1I3: HouseRoaming {}; // Qty: 117
	class Land_HouseV_1L1: HouseRoaming {}; // Qty: 97
	class Land_HouseV_1I2: HouseRoaming {};
	class Land_HouseV_2L: HouseRoaming {};
	class Land_HouseV_2T1: HouseRoaming {};
	class Land_houseV_2T2: HouseRoaming {};
	class Land_HouseV_3I2: HouseRoaming {};
	class Land_HouseV_3I3: HouseRoaming {};
	class Land_HouseBlock_A1: HouseRoaming {};
	class Land_HouseBlock_A1_2: HouseRoaming {};
	class Land_HouseBlock_A2: HouseRoaming {};
	class Land_HouseBlock_A2_1: HouseRoaming {};
	class Land_HouseBlock_A3: HouseRoaming {};
	class Land_HouseBlock_B1: HouseRoaming {};
	class Land_HouseBlock_B2: HouseRoaming {};
	class Land_HouseBlock_B3: HouseRoaming {};
	class Land_HouseBlock_B4: HouseRoaming {};
	class Land_HouseBlock_B5: HouseRoaming {};
	class Land_HouseBlock_B6: HouseRoaming {};
	class Land_HouseBlock_C1: HouseRoaming {};
	class Land_HouseBlock_C2: HouseRoaming {};
	class Land_HouseBlock_C3: HouseRoaming {};
	class Land_HouseBlock_C4: HouseRoaming {};
	class Land_HouseBlock_C5: HouseRoaming {};
	class Land_HouseV2_01B: HouseRoaming {}; // Qty: 20
	class Land_Misc_Cargo1D: HouseRoaming {}; // Qty: 29
	class Land_HouseV2_03: HouseRoaming {}; // Qty: 8
	class Land_Ind_Shed_01_end: HouseRoaming {}; // Qty: 266
	class Land_Ind_Coltan_Main_EP1: HouseRoaming{}; // Takistan
	class Land_Ind_FuelStation_Shed_EP1: HouseRoaming{}; // Takistan
	class Land_Ind_Oil_Tower_EP1: HouseRoaming{}; // Takistan
	class Land_A_statue01: HouseRoaming {
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_soldier","z_soldier_heavy","z_policeman"};
		minRoaming = 2;
		maxRoaming = 8;
	}; // Qty: 3
	class Land_Shed_W02: FarmRoaming {}; // Qty: 213
	//allow 
	class Grave: HouseRoaming {
		maxRoaming = 3;
	};
	class GraveCross1: HouseRoaming {	
		maxRoaming = 2;
	};
	class GraveCross2: HouseRoaming {	
		maxRoaming = 2;
	};
	class GraveCrossHelmet: Military {	
		maxRoaming = 4;
	};
	class Land_Wall_L_2m5_gate_EP1: HouseRoaming {
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_soldier","z_soldier_heavy","z_policeman"};
		minRoaming = 2;
		maxRoaming = 8;
	}; //Takistan
	class Land_Shed_W02_EP1: FarmRoaming{}; //Takistan
};

/*
class Land_Mil_House: Default {}; // Qty: 5
*/