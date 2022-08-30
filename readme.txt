What Is This?

This simple mod adds a player-tracking feature: dropped garbage after consuming vanilla packaged food & medical items.

There are some lightly re-textured models for empty food cans etc, nothing too fancy.

The mod is intended for hardcore and RP servers so that players can track other players' activity by finding their garbage trail - if players don't want to be tracked, then they need to clean up after themselves carefully ;)

You can craft empty cans into fish hooks (optional - can be disabled in the server config. Very rough on your knife tool and produces a damaged hook).

You can turn some paper-based food packets into regular paper.

You can hold liquids in empty jam or honey jars (only 250mL, 25% of regular bottles - and they're extremely fragile and easy to ruin).

Items That Drop Junk When Consumed:

- All vanilla packaged food and drink items
- Used saline bags
- Used blood bags
- Used morphine, epinephrine and pox injectors
- MRE from MassFood mod (as an example of how to add modded items)

Keep in mind that any modded items will only drop empty versions of themselves and not re-textured items with a unique name & description. But it's the best we can do, and better than nothing I guess!

Installation:

To install follow the usual steps - subscribe to the mod, copy the mod folder to your server folder, copy the .bikey file into the server's key folder, and then (optional) copy the types.xml entries into your types. Don't forget to put the mod "@ZenLeftovers" in your server's mods list.

The types.xml file is optional - if you don't add the types, then the food items will disappear immediately when a player is not nearby. If you have a popular server this might be preferred, if you have a quieter server you might want to implement the types.xml items so that you can still track players who have left an area.

The default persistence on all empty garbage items is 30 minutes.

Be aware there *may* be conflicts with any mods that override any of the player consume functions - especially any that affect how food/water/meds are consumed. I haven't done any testing with other mods except for MRE Foods to test example modded leftover items.

Adding Modded Items:

This mod comes with a json config file that you can modify to add extra items. After running the server it will be in your server config folder under "Zenarchist/ZenLeftoversConfig.json". Make sure that your syntax is correct or it'll break the mod, but all you need to do is add something like this:

{
    "OriginalItemType": "Food_Type_Name",
    "LeftoverItemType": "Junk_Type_Name",
    "ItemHealth": 1,
    "DropToGround": 0
}

It'll work with any item, doesn't necessarily need to be food (could be meds too for example).

OriginalItemType is the item you consume.
LeftoverItemType is the item that is dropped on the ground after.
ItemHealth is the HP of the junk item - 0 means inherit health from the original item, -1 means ruined, 1-100 means HP (1 = badly damaged).
DropToGround is a true/false 1/0 value - 0 means the junk item will be placed in the player's hands, 1 means the item will be dropped onto the ground.

You can also disable the use of empty jars as water containers by changing the LeftoverItemType for honey and marmalade to Empty_Honey_NoLiquid and Empty_Marmalade_NoLiquid (particularly useful for Namalsk as the default Empty model doesn't freeze).

Repacking & Credits:

Feel free to repack or use this mod in any way with no credit necessary :)

Huge thanks to everyone in the DayZ Modding discord (https://discord.com/invite/NEX27Gx) - I learned how to do all of this by just searching through prior discussions. Also thanks Spurgle for your retexturing vanilla items guide on YouTube.

Source Code:
https://github.com/ZenarchistCode/ZenLeftovers



5th August 2022 Update Changelog:
Added the option to drop items onto the ground or have the junk item remain in the player's hands.

18th April 2022 Update Changelog:
I made a few adjustments to make this mod a tiny bit more interesting and make some items not completely useless, but I don't think I'll tweak it much further as I want it to be a junk mod not a crafting mod.

As always the source code is provided if you want to adjust it for your server and repacking is allowed, no credit necessary.

Made it so you can craft fish hooks out of used cans (optional: can be turned off in config. Just set "CraftJunkHookHP": -1).
This produces a damaged hook that can only be used twice before it ruins, and is very rough on your knife tool. Can't use axes.

Made it so you can get paper out of some paper-based food wrappers (new action when holding the junk item in your hands).

Made it so you can use empty jam and honey jars to store liquids (only 250mL - 25% of a normal bottle/canteen, very fragile and easy to ruin).

30th August 2022 Update Changelog:
Removed "drink" action from empty soda cans. Made it so any future changes to json config structure will cause the mod to automatically back up the old json config and generate a new one.