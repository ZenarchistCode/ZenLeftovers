modded class MissionServer extends MissionBase
{
	override void OnInit()
	{
		super.OnInit();
		Print("[ZenLeftovers] OnInit");
		GetLeftoversConfig();
	}
}