modded class ModItemRegisterCallbacks
{
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded(pType, pBehavior);

		// Register empty items with their regular hand animation counterparts
		DayzPlayerItemBehaviorCfg 	toolsOneHanded = new DayzPlayerItemBehaviorCfg;
		toolsOneHanded.SetToolsOneHanded();

		// Food
        pType.AddItemInHandsProfileIK("Empty_BoxCerealCrunchin", "dz/anims/workspaces/player/player_main/props/player_main_1h_food_box.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/box_cereal.anm");
        pType.AddItemInHandsProfileIK("Empty_Rice", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/rice.anm");
        pType.AddItemInHandsProfileIK("Empty_Marmalade", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/marmalade.anm");
        pType.AddItemInHandsProfileIK("Empty_PowderedMilk", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/powdered_milk.anm");
		pType.AddItemInHandsProfileIK("Empty_BakedBeansCan_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/food_can_opened.anm");
		pType.AddItemInHandsProfileIK("Empty_PeachesCan_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/food_can_opened.anm");
		pType.AddItemInHandsProfileIK("Empty_TacticalBaconCan_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/food_can_opened.anm");
		pType.AddItemInHandsProfileIK("Empty_SpaghettiCan_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/food_can_opened.anm");
		pType.AddItemInHandsProfileIK("Empty_SardinesCan_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/sardines.anm");
		pType.AddItemInHandsProfileIK("Empty_TunaCan_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/tuna.anm");
		pType.AddItemInHandsProfileIK("Empty_DogFoodCan_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/foodcan250g.anm");
		pType.AddItemInHandsProfileIK("Empty_CatFoodCan_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/foodcan250g.anm");
		pType.AddItemInHandsProfileIK("Empty_PorkCan_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/foodcan250g.anm");
		pType.AddItemInHandsProfileIK("Empty_Lunchmeat_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/foodcan250g.anm");
		pType.AddItemInHandsProfileIK("Empty_UnknownFoodCan_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/food_can_opened.anm");
		pType.AddItemInHandsProfileIK("Empty_Pajka_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/foodcan100g.anm");
		pType.AddItemInHandsProfileIK("Empty_Pate_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/foodcan100g.anm");
		pType.AddItemInHandsProfileIK("Empty_BrisketSpread_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/foodcan100g.anm");
		pType.AddItemInHandsProfileIK("Empty_Honey", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/marmalade.anm");
		pType.AddItemInHandsProfileIK("Empty_Zagorky_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/zagorky.anm");
		pType.AddItemInHandsProfileIK("Empty_Snack_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/BloodBag_Sealed.anm");
		pType.AddItemInHandsProfileIK("Empty_Crackers", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/saltycrackers.anm");
		// Meds
		pType.AddItemInHandsProfileIK("Used_Epinephrine", "dz/anims/workspaces/player/player_main/props/player_main_1h_morphine.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/morphine.anm");
		pType.AddItemInHandsProfileIK("Used_Morphine", "dz/anims/workspaces/player/player_main/props/player_main_1h_morphine.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/morphine.anm");
		pType.AddItemInHandsProfileIK("Used_AntiChemInjector", "dz/anims/workspaces/player/player_main/props/player_main_1h_morphine.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/morphine.anm");
		pType.AddItemInHandsProfileIK("Used_BloodBagIV", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/BloodBag_Full_IV.anm");
		pType.AddItemInHandsProfileIK("Used_SalineBagIV", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/TransfusionKit.anm");
    }
}