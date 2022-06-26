void DropJunk(ActionData action_data) 
{
	ItemBase item = action_data.m_MainItem;

	if (item && item.GetQuantity() <= 0.01)
	{
		LeftoverItem li = GetLeftoversConfig().GetLeftoverItem(item.GetType());

		if (!li || (li.OriginalItemType == "" && li.LeftoverItemType == ""))
		{
			if (item.GetType().Contains("dzn_"))
			{
				string itemType = item.GetType();
				itemType = itemType.Substring(4, itemType.Length());
				li = GetLeftoversConfig().GetLeftoverItem(itemType); // Namalsk frozen item support
			}
		}

		if (li && li.OriginalItemType != "" && li.LeftoverItemType != "") // Junk item found! Drop it on the ground.
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

			//ReplaceItemWithNewLambda lambda = new ReplaceItemWithNewLambda(action_data.m_MainItem, li.LeftoverItemType, action_data.m_Player);
			//action_data.m_Player.ServerReplaceItemWithNew(lambda);
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