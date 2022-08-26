class Empty_BoxCerealCrunchin : Edible_Base
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionGetJunkPaper);
		RemoveAction(ActionForceFeed);
		RemoveAction(ActionEat);
	}
};

class Empty_Rice : Edible_Base
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionGetJunkPaper);
		RemoveAction(ActionForceFeed);
		RemoveAction(ActionEat);
	}
};

class Empty_PowderedMilk : Edible_Base
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionGetJunkPaper);
		RemoveAction(ActionForceFeed);
		RemoveAction(ActionEat);
	}
};

class Empty_SodaCan_ColorBase : SodaCan_ColorBase
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionForceDrink);
		RemoveAction(ActionDrinkCan);
	}
};