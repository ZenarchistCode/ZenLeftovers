modded class ItemBase
{
	override bool SetQuantity(float value, bool destroy_config = true, bool destroy_forced = false, bool allow_client = false, bool clamp_to_stack_max = true)
	{
		LeftoverItem li = GetLeftoversConfig().GetLeftoverItem(this.GetType());
		if (value <= 0 && li && !li.DropToGround && li.LeftoverItemType != "")
			return super.SetQuantity(0.01, destroy_config, destroy_forced, allow_client, clamp_to_stack_max); // Prevent edible item from being deleted if config says the junk item should be replaced in the player's hands instead of dropped to the ground.

		return super.SetQuantity(value, destroy_config, destroy_forced, allow_client, clamp_to_stack_max);
	}
};