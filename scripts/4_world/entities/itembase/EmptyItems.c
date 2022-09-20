class Zen_EmptyFood : ItemBase
{
	// This makes it easier to add "Empty" to all the food items without re-translating all of their names
	override string GetDisplayName()
	{
		return ConfigGetString("displayNameEmpty") + " " + ConfigGetString("displayName");
	}

	// Override description
	override string GetTooltip()
	{
		return "#STR_ZenLeftoversDescription";
	}
};

class Used_MedicalItem : ItemBase
{
	// This makes it easier to add "Used" to all the medical items without re-translating all of their names
	override string GetDisplayName()
	{
		return ConfigGetString("displayNameUsed") + " " + ConfigGetString("displayName");
	}

	// Override description
	override string GetTooltip()
	{
		return "#STR_ZenLeftoversMedDescription";
	}
}

class Empty_BoxCerealCrunchin : Zen_EmptyFood
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionGetJunkPaper);
	}
};

class Empty_Rice : Zen_EmptyFood
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionGetJunkPaper);
	}
};

class Empty_PowderedMilk : Zen_EmptyFood
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionGetJunkPaper);
	}
};

class Empty_SodaCan_ColorBase : Zen_EmptyFood {};
class Empty_Honey_NoLiquid : Zen_EmptyFood {};
class Empty_Marmalade_NoLiquid : Zen_EmptyFood {};
class Empty_Honey : Zen_EmptyFood {};
class Empty_Marmalade : Zen_EmptyFood {};