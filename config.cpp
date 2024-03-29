class CfgPatches
{
	class ZenLeftovers
	{
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Gear_Consumables",
			"DZ_Gear_Drinks"
		};
	};
};

class CfgMods
{
	class ZenLeftovers
	{
		dir = "ZenLeftovers";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ZenLeftovers";
		credits = "";
		author = "Zenarchist";
		authorID = "0";
		version = "1.04";
		extra = 0;
		type = "mod";
		dependencies[] = { "Game","World","Mission" };
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = { "ZenLeftovers/scripts/3_Game" };
			};
			class worldScriptModule
			{
				value = "";
				files[] = { "ZenLeftovers/scripts/4_World" };
			};
			class missionScriptModule
			{
				value = "";
				files[] = { "ZenLeftovers/scripts/5_Mission" };
			};
		};
	};
};

class CfgVehicles
{
	// Define empty food items:
	class Inventory_Base;
	class Zen_EmptyFood : Inventory_Base 
	{
		displayNameEmpty = "$STR_ZenLeftoversEmpty";
	};

	class SodaCan_ColorBase;
	class Empty_SodaCan_ColorBase : SodaCan_ColorBase 
	{
		scope = 0;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
	};
	//class SodaCan_Pipsi;
	class Empty_SodaCan_Pipsi : Empty_SodaCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SodaCan_Pipsi0";
		descriptionShort = "$STR_ZenLeftoversDescription";
		hiddenSelectionsTextures[] = { "\ZenLeftovers\data\sodacan_pipsi_empty_co.paa" };
	};
	class Empty_SodaCan_Cola : Empty_SodaCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SodaCan_Cola0";
		hiddenSelectionsTextures[] = { "\ZenLeftovers\data\sodacan_cola_empty_co.paa" };
	};
	class Empty_SodaCan_Spite : Empty_SodaCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SodaCan_Spite0";
		hiddenSelectionsTextures[] = { "\ZenLeftovers\data\sodacan_spite_empty_co.paa" };
	};
	class Empty_SodaCan_Kvass : Empty_SodaCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SodaCan_Kvass0";
		hiddenSelectionsTextures[] = { "\ZenLeftovers\data\sodacan_rasputin_kvass_empty_co.paa" };
	};
	class Empty_SodaCan_Fronta : Empty_SodaCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SodaCan_Fronta0";
		hiddenSelectionsTextures[] = { "\ZenLeftovers\data\sodacan_fanda_empty_co.paa" };
	};

	// Edibles
	class Empty_BoxCerealCrunchin : Zen_EmptyFood
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BoxCerealCrunchin0";
		model = "\dz\gear\food\BoxCereal.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 17;
		weight = 0;
		itemSize[] = { 3,3 };
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		inventorySlot[] =
		{
			"Paper"
		};
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"\dz\gear\food\Data\CerealBox_01_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\Cereal_box.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\Cereal_box.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\Cereal_box_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\Cereal_box_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\Cereal_box_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet = "BoxCerealCrunchin_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BoxCerealCrunchin_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Empty_Rice : Zen_EmptyFood
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Rice0";
		model = "\dz\gear\food\Rice.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = { 2,3 };
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		absorbency = 0.89999998;
		rotationFlags = 63;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\rice.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\rice.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\rice_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\rice_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\rice_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Empty_PowderedMilk : Zen_EmptyFood
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PowderedMilk0";
		model = "\dz\gear\food\PowderedMilk.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 17;
		weight = 0;
		itemSize[] = { 1,2 };
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		absorbency = 0.89999998;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\powdered_milk.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\powdered_milk.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\powdered_milk_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\powdered_milk_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\powdered_milk_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 400;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpBloodBag_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "bloodbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Empty_Honey_NoLiquid : Zen_EmptyFood
	{
		scope = 2;
		displayName = "$STR_Honey0";
		model = "\dz\gear\food\Honey.p3d";
		debug_ItemCategory = 6;
		weight = 15;
		itemSize[] = { 2,2 };
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\honey_jar.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\honey_jar.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\honey_jar_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\honey_jar_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\honey_jar_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Marmalade_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
	class Empty_Marmalade_NoLiquid : Zen_EmptyFood
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Marmalade0";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 0;
		itemSize[] = { 2,2 };
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\marmalade_jar.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\marmalade_jar.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\marmalade_jar_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\marmalade_jar_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\marmalade_jar_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Marmalade_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
	class Bottle_Base;
	class Empty_Honey : Bottle_Base
	{
		scope = 2;
		displayName = "$STR_Honey0";
		model = "\dz\gear\food\Honey.p3d";
		debug_ItemCategory = 6;
		weight = 15;
		itemSize[] = { 2,2 };
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 512;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 250;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\honey_jar.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\honey_jar.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\honey_jar_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\honey_jar_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\honey_jar_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterBottle_in_B
				{
					soundSet = "WaterBottle_in_B_SoundSet";
					id = 202;
				};
				class WaterBottle_in_C
				{
					soundSet = "WaterBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class WaterBottle_out_A
				{
					soundSet = "WaterBottle_out_A_SoundSet";
					id = 205;
				};
				class WaterBottle_out_B
				{
					soundSet = "WaterBottle_out_B_SoundSet";
					id = 206;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "Marmalade_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
	class Empty_Marmalade : Bottle_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Marmalade0";
		model = "\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory = 6;
		weight = 15;
		itemSize[] = { 2,2 };
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 512;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 250;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\marmalade_jar.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\marmalade_jar.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\marmalade_jar_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\marmalade_jar_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\marmalade_jar_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterBottle_in_B
				{
					soundSet = "WaterBottle_in_B_SoundSet";
					id = 202;
				};
				class WaterBottle_in_C
				{
					soundSet = "WaterBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class WaterBottle_out_A
				{
					soundSet = "WaterBottle_out_A_SoundSet";
					id = 205;
				};
				class WaterBottle_out_B
				{
					soundSet = "WaterBottle_out_B_SoundSet";
					id = 206;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
				class pickup
				{
					soundSet = "Marmalade_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
	class Zagorky_Empty : Zen_EmptyFood
	{
		model = "\dz\gear\food\Zagorky.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 1;
		weight = 0;
		itemSize[] = { 1,2 };
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\zagorky.rvmat",
								"DZ\gear\food\data\zagorky_wrapping.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\zagorky.rvmat",
								"DZ\gear\food\data\zagorky_wrapping.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\zagorky_damage.rvmat",
								"DZ\gear\food\data\zagorky_wrapping_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\zagorky_damage.rvmat",
								"DZ\gear\food\data\zagorky_wrapping_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\zagorky_destruct.rvmat",
								"DZ\gear\food\data\zagorky_wrapping_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpBloodBag_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "bloodbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Empty_Zagorky : Zagorky_Empty
	{
		scope = 2;
		displayName = "$STR_Zagorky0";
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		hiddenSelections[] =
		{
			"camoground"
		};
		hiddenSelectionsTextures[] =
		{
			"\dz\gear\food\Data\zagorky_milk_ca.paa"
		};
	};
	class Empty_ZagorkyChocolate : Zagorky_Empty
	{
		scope = 2;
		displayName = "$STR_ZagorkyChocolate0";
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		hiddenSelections[] =
		{
			"camoground"
		};
		hiddenSelectionsTextures[] =
		{
			"\dz\gear\food\Data\zagorky_choco_ca.paa"
		};
	};
	class Empty_ZagorkyPeanuts : Zagorky_Empty
	{
		scope = 2;
		displayName = "$STR_ZagorkyPeanuts0";
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		hiddenSelections[] =
		{
			"camoground"
		};
		hiddenSelectionsTextures[] =
		{
			"\dz\gear\food\Data\zagorky_nuts_ca.paa"
		};
	};
	class Empty_Snack_ColorBase : Zen_EmptyFood
	{
		model = "\DZ\gear\food\salty_crackers.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 1;
		weight = 0;
		itemSize[] = { 2,2 };
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\tycinky.rvmat",
								"DZ\gear\food\data\tycinky_wrapping.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\tycinky.rvmat",
								"DZ\gear\food\data\tycinky_wrapping.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\tycinky_damage.rvmat",
								"DZ\gear\food\data\tycinky_wrapping_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\tycinky_damage.rvmat",
								"DZ\gear\food\data\tycinky_wrapping_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\tycinky_destruct.rvmat",
								"DZ\gear\food\data\tycinky_wrapping_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpBloodBag_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "bloodbag_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class Empty_SaltySticks : Empty_Snack_ColorBase
	{
		scope = 2;
		displayName = "$STR_SaltySticks0";
	};
	class Empty_Crackers : Empty_Snack_ColorBase
	{
		scope = 2;
		displayName = "$STR_Crackers0";
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"\dz\gear\food\Data\salted_crackers_co.paa"
		};
	};
	class Empty_Chips : Empty_Snack_ColorBase
	{
		scope = 2;
		displayName = "$STR_Chips0";
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"\dz\gear\food\Data\salted_chips_co.paa"
		};
	};
	// Canned food
	class Empty_Can_Opened : Zen_EmptyFood
	{
		scope = 2;
		displayName = "Empty Can";
		descriptionShort = "An empty food can. It must have been recently discarded by a survivor...";
		model = "\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory = 6;
		itemSize[] = { 2,2 };
		weight = 20;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"\ZenLeftovers\data\deez_beans_empty_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{
						{
							1,
							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						{
							0.69999999,
							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						{
							0.5,
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						{
							0.30000001,
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						{
							0,
							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Empty_BakedBeansCan_Opened : Empty_Can_Opened
	{
		scope = 2;
		displayName = "$STR_BakedBeansCan0";
		hiddenSelectionsTextures[] = { "\ZenLeftovers\data\deez_beans_empty_co.paa" };
	};
	class Empty_PeachesCan_Opened : Empty_Can_Opened
	{
		scope = 2;
		displayName = "$STR_PeachesCan0";
		hiddenSelectionsTextures[] = { "\ZenLeftovers\data\canned_peaches_empty_co.paa" };
	};
	class Empty_TacticalBaconCan_Opened : Empty_Can_Opened
	{
		scope = 2;
		displayName = "$STR_TacticalBaconCan0";
		hiddenSelectionsTextures[] = { "\ZenLeftovers\data\tactical_bacon_empty_co.paa" };
	};
	class Empty_SpaghettiCan_Opened : Empty_Can_Opened
	{
		scope = 2;
		displayName = "$STR_SpaghettiCan0";
		hiddenSelectionsTextures[] = { "\ZenLeftovers\data\canned_spaghetti_empty_co.paa" };
	};
	class Empty_UnknownFoodCan_Opened : Empty_Can_Opened
	{
		scope = 2;
		displayName = "$STR_UnknownFoodCan0";
		hiddenSelectionsTextures[] = { "\ZenLeftovers\data\unknownfoodcan_empty_co.paa" };
	};
	class Empty_SardinesCan_Opened : Zen_EmptyFood
	{
		scope = 2;
		displayName = "$STR_Sardines0";
		model = "\dz\gear\food\can_sardines_open.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 34;
		itemSize[] = { 2,1 };
		weight = 50;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"\ZenLeftovers\data\sardines_empty_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\Sardines.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\Sardines.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\Sardines_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\Sardines_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\Sardines_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Empty_TunaCan_Opened : Zen_EmptyFood // Tuna can doesn't allow retexture for some reason? Just spawn closed can instead for now.
	{
		scope = 2;
		displayName = "$STR_TunaCan0";
		model = "\dz\gear\food\Tuna.p3d";
		debug_ItemCategory = 6;
		rotationFlags = 32;
		itemSize[] = { 2,1 };
		weight = 265;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"dz\gear\food\data\tuna_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\tuna.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\tuna.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\tuna_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\tuna_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\tuna_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Empty_FoodCan_250g_Opened_ColorBase : Zen_EmptyFood
	{
		scope = 2;
		debug_ItemCategory = 6;
		model = "\dz\gear\food\FoodCan_250g_open.p3d";
		itemSize[] = { 2,1 };
		weight = 5;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\FoodCan_250g.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\FoodCan_250g.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\FoodCan_250g_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\FoodCan_250g_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\FoodCan_250g_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Empty_DogFoodCan_Opened : Empty_FoodCan_250g_Opened_ColorBase
	{
		scope = 2;
		displayName = "$STR_DogFoodCan0";
		hiddenSelections[] = { "camoGround" };
		hiddenSelectionsTextures[] = { "\ZenLeftovers\data\foodcan_250g_dog_empty_co.paa" };
	};
	class Empty_CatFoodCan_Opened : Empty_FoodCan_250g_Opened_ColorBase
	{
		scope = 2;
		displayName = "$STR_CatFoodCan0";
		hiddenSelections[] = { "camoGround" };
		hiddenSelectionsTextures[] = { "\ZenLeftovers\data\foodcan_250g_cat_empty_co.paa" };
	};
	class Empty_PorkCan_Opened : Empty_FoodCan_250g_Opened_ColorBase
	{
		scope = 2;
		displayName = "$STR_PorkCan0";
		hiddenSelections[] = { "camoGround" };
		hiddenSelectionsTextures[] = { "\ZenLeftovers\data\foodcan_250g_pork_empty_co.paa" };
	};
	class Empty_Lunchmeat_Opened : Empty_FoodCan_250g_Opened_ColorBase
	{
		scope = 2;
		displayName = "$STR_Lunchmeat0";
		hiddenSelections[] = { "camoGround" };
		hiddenSelectionsTextures[] = { "\ZenLeftovers\data\foodcan_lunchmeat_open_empty_co.paa" };
	};

	// 100g cans
	class Empty_FoodCan_100g_Opened_ColorBase : Zen_EmptyFood
	{
		debug_ItemCategory = 6;
		model = "\dz\gear\food\FoodCan_100g_open.p3d";
		itemSize[] = { 1,1 };
		weight = 5;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\food\data\FoodCan_100g.rvmat",
								"DZ\gear\food\data\FoodCan_100g_white.rvmat",
								"DZ\gear\food\data\FoodCan_100g_content.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\food\data\FoodCan_100g.rvmat",
								"DZ\gear\food\data\FoodCan_100g_white.rvmat",
								"DZ\gear\food\data\FoodCan_100g_content.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\food\data\FoodCan_100g_damage.rvmat",
								"DZ\gear\food\data\FoodCan_100g_white_damage.rvmat",
								"DZ\gear\food\data\FoodCan_100g_content_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\food\data\FoodCan_100g_damage.rvmat",
								"DZ\gear\food\data\FoodCan_100g_white_damage.rvmat",
								"DZ\gear\food\data\FoodCan_100g_content_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\food\data\FoodCan_100g_destruct.rvmat",
								"DZ\gear\food\data\FoodCan_100g_white_destruct.rvmat",
								"DZ\gear\food\data\FoodCan_100g_content_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Empty_Pajka_Opened : Empty_FoodCan_100g_Opened_ColorBase
	{
		scope = 2;
		displayName = "$STR_Pajka0";
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		hiddenSelections[] = { "camoGround" };
		hiddenSelectionsTextures[] = { "\ZenLeftovers\data\foodcan_100g_pajka_empty_co.paa" };
	};
	class Empty_Pate_Opened : Empty_FoodCan_100g_Opened_ColorBase
	{
		scope = 2;
		displayName = "$STR_Pate0";
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		hiddenSelections[] =
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] =
		{
			"\ZenLeftovers\data\foodcan_100g_liver_empty_co.paa"
		};
	};
	class Empty_BrisketSpread_Opened : Empty_Pate_Opened
	{
		scope = 2;
		displayName = "$STR_BrisketSpread0";
	};
	// Define empty medical items
	class Used_MedicalItem : Zen_EmptyFood 
	{
		displayNameUsed = "$STR_ZenLeftoversUsed";
	};
	class Used_BloodBagIV : Used_MedicalItem
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BloodBagIV0";
		model = "\dz\gear\medical\BloodBag_Full_IV.p3d";
		hiddenSelections[] = { "zbytek" };
		hiddenSelectionsTextures[] = { "\ZenLeftovers\data\bloodbag_used_ca.paa" };
		itemSize[] = { 2,2 };
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\medical\data\BloodBag_Full.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\medical\data\BloodBag_Full.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\medical\data\BloodBag_Full_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\medical\data\BloodBag_Full_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\medical\data\BloodBag_Full_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Used_SalineBagIV : Used_MedicalItem
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SalineBagIV0";
		model = "\dz\gear\medical\TransfusionKit.p3d";
		hiddenSelections[] = { "zbytek" };
		hiddenSelectionsTextures[] = { "dz\gear\medical\data\saline_bag_ca.paa" };
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		itemSize[] = { 2,2 };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					healthLevels[] =
					{
						{
							1,

							{
								"DZ\gear\medical\data\transfusion_kit.rvmat"
							}
						},
						{
							0.69999999,

							{
								"DZ\gear\medical\data\transfusion_kit.rvmat"
							}
						},
						{
							0.5,

							{
								"DZ\gear\medical\data\transfusion_kit_damage.rvmat"
							}
						},
						{
							0.30000001,

							{
								"DZ\gear\medical\data\transfusion_kit_damage.rvmat"
							}
						},
						{
							0,

							{
								"DZ\gear\medical\data\transfusion_kit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Used_Morphine : Used_MedicalItem
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Morphine0";
		model = "\dz\gear\medical\Morphine.p3d";
		rotationFlags = 17;
		itemSize[] = { 1,2 };
		weight = 30;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\medical\data\Morphine.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\medical\data\Morphine.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\medical\data\Morphine_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\medical\data\Morphine_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\medical\data\Morphine_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Used_Epinephrine : Used_MedicalItem
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Epinephrine0";
		model = "\dz\gear\medical\Epinephrine.p3d";
		debug_ItemCategory = 7;
		rotationFlags = 17;
		itemSize[] = { 1,2 };
		weight = 30;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\medical\data\epipen_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Used_AntiChemInjector : Used_MedicalItem
	{
		scope = 2;
		displayName = "$STR_AntiChemInjector0";
		model = "\dz\gear\medical\Epinephrine.p3d";
		debug_ItemCategory = 7;
		hiddenSelections[] =
		{
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"\dz\gear\medical\data\antidote_co.paa"
		};
		rotationFlags = 17;
		itemSize[] = { 1,2 };
		weight = 30;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\gear\medical\data\epipen_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};