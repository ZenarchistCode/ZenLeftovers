void DropJunk(ActionData action_data) 
{
	ItemBase item = action_data.m_MainItem;

	if (item && item.GetQuantity() <= 0.01)
	{
		LeftoverItem li = GetLeftoversConfig().GetLeftoverItem(item.GetType());
		if (li.OriginalItemType != "" && li.LeftoverItemType != "") // Junk item found! Drop it on the ground.
		{
			ItemBase junk = ItemBase.Cast(GetGame().CreateObjectEx(li.LeftoverItemType, action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
			if (junk)
			{
				if (li.ItemHealth != 0) // If the item is to be damaged, assign the damage value here
				{
					junk.SetHealth("", "Health", li.ItemHealth);
				}
				else // Otherwise just inheret the health of the original item
				{
					junk.SetHealth("", "Health", item.GetHealth());
				}

				junk.SetQuantity(0, false, false); // false, false overrides the game deleting edibles with <= 0 quantity.
			}
		}
	}
}

// Drop junk food items
modded class ActionConsume : ActionContinuousBase
{
	override void OnEndServer(ActionData action_data)
	{
		DropJunk(action_data);
		super.OnEndServer(action_data);
	};

	// Abandoned attempt at changing sodacan texture to "opened" texture when consuming:
	/*void SetOpenCanTexture(ItemBase item) // Why the hell doesn't this work?
	{
		if (!item)
			return;

		string texture = "";
		if (item.GetType() == "SodaCan_Cola")
			texture = "\ZenLeftovers\data\sodacan_cola_empty_co.paa";
		else if (item.GetType() == "SodaCan_Fronta")
			texture = "\ZenLeftovers\data\sodacan_fanda_empty_co.paa";
		else if (item.GetType() == "SodaCan_Kvass")
			texture = "\ZenLeftovers\data\sodacan_rasputin_kvass_empty_co.paa";
		else if (item.GetType() == "SodaCan_Pipsi")
			texture = "\dz\gear\drinks\Data\SodaCan_cola_co.paa";
		else if (item.GetType() == "SodaCan_Spite")
			texture = "\ZenLeftovers\data\sodacan_spite_empty_co.paa";

		if (texture != "")
		{
			item.SetObjectTexture(0, texture);
			item.SetObjectTexture(item.GetHiddenSelectionIndex("camoGround"), texture);
			item.SetObjectTexture(item.GetHiddenSelectionIndex("zbytek"), texture);
		}
	}

	override void OnStartAnimationLoopServer(ActionData action_data)
	{
		super.OnStartAnimationLoopServer(action_data);
		SetOpenCanTexture(action_data.m_MainItem);
	}

	override void OnStartAnimationLoopClient(ActionData action_data)
	{
		super.OnStartAnimationLoopClient(action_data);
		SetOpenCanTexture(action_data.m_MainItem);
	}*/
}

// Drop junk food items when feeding other players
modded class ActionForceConsume: ActionContinuousBase
{
	override void OnEndServer( ActionData action_data )
	{
		DropJunk(action_data);
		super.OnEndServer(action_data);
	};
}

// Drop junk saline bag on self
modded class ActionGiveSalineSelf
{
	override void OnFinishProgressServer(ActionData action_data)
	{
		DropJunk(action_data);
		super.OnFinishProgressServer(action_data);
	}
}

// Drop junk saline bag on other player
modded class ActionGiveSalineTarget
{
	override void OnFinishProgressServer(ActionData action_data)
	{
		DropJunk(action_data);
		super.OnFinishProgressServer(action_data);
	}
}

// Drop junk blood bag on self
modded class ActionGiveBloodSelf : ActionContinuousBase
{
	override void OnEndServer(ActionData action_data)
	{
		DropJunk(action_data);
		super.OnEndServer(action_data);
	};
}

// Drop junk blood bag on other player
modded class ActionGiveBloodTarget : ActionContinuousBase
{
	override void OnEndServer(ActionData action_data)
	{
		DropJunk(action_data);
		super.OnEndServer(action_data);
	};
}

// Drop junk syringe on injecting self
modded class ActionInjectSelf : ActionSingleUseBase
{
	override void OnEndServer(ActionData action_data)
	{
		if (action_data.m_WasExecuted && action_data.m_MainItem)
		{
			DropJunk(action_data);
		}

		super.OnEndServer(action_data);
	}
}

// Drop junk syringe on other player
modded class ActionInjectTarget : ActionSingleUseBase
{
	override void OnEndServer(ActionData action_data)
	{
		if (action_data.m_WasExecuted && action_data.m_MainItem)
		{
			DropJunk(action_data);
		}

		super.OnEndServer(action_data);
	}
}