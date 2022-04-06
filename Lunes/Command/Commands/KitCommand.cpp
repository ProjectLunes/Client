#include "KitCommand.h"

#include "../../../SDK/Tag.h"
#include "../../Module/ModuleManager.h"
#include <thread>

KitCommand::KitCommand() : IMCCommand("kit", "have a shulker kit", "<starter> <semi> <vanilla> <overpowered>") {
	registerAlias("kits");
}

KitCommand::~KitCommand() {
}

bool KitCommand::execute(std::vector<std::string>* args) {
	if (args->at(1) == "overpowered") {
		assertTrue(args->size() > 1);
	std::ostringstream os;
	for (int i = 1; i < args->size(); i++) {
		if (i > 1)
			os << " ";
		os << args->at(i);
	}
	void* ItemPtr = malloc(0x8);
	C_Item*** cStack = ItemRegistry::getItemFromId(ItemPtr, 218);
	C_ItemStack* yot = new C_ItemStack(***cStack, 1, 3);
	free(ItemPtr);
	int slot = g_Data.getLocalPlayer()->getSupplies()->inventory->getFirstEmptySlot();
	std::string cmd = os.str();
	std::string tag = "{Items:[{Count:1b,Damage:0s,Name:""\"minecraft:netherite_helmet""\",Slot:0b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:0s,lvl:32767s},{id:28s,lvl:1s},{id:1s,lvl:32767s},{id:3s,lvl:32767s},{id:4s,lvl:32767s},{id:8s,lvl:32767s},{id:5s,lvl:32767s},{id:6s,lvl:32767s}],display:{Name:""\"§3§lNetherite Helmet""\",Lore:[""\"§3§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_chestplate""\",Slot:1b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:5s,lvl:32767s},{id:3s,lvl:32767s},{id:0s,lvl:32767s},{id:1s,lvl:32767s},{id:4s,lvl:32767s},{id:28s,lvl:1s}],display:{Name:""\"§3§lNetherite Chestplate""\",Lore:[""\"§3§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_leggings""\",Slot:2b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:5s,lvl:32767s},{id:1s,lvl:32767s},{id:0s,lvl:32767s},{id:3s,lvl:32767s},{id:4s,lvl:32767s},{id:28s,lvl:1s}],display:{Name:""\"§3§lNetherite Leggings""\",Lore:[""\"§3§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_boots""\",Slot:3b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:5s,lvl:32767s},{id:2s,lvl:32767s},{id:7s,lvl:32767s},{id:4s,lvl:32767s},{id:0s,lvl:32767s},{id:3s,lvl:32767s},{id:1s,lvl:32767s},{id:28s,lvl:1s}],display:{Name:""\"§3§lNetherite Boots""\",Lore:[""\"§3§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_sword""\",Slot:4b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:9s,lvl:32767s},{id:13s,lvl:32767s},{id:14s,lvl:32767s},{id:28s,lvl:1s}],display:{Name:""\"§3§lNetherite Sword""\",Lore:[""\"§3§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_axe""\",Slot:5b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:9s,lvl:32767s},{id:16s,lvl:32767s},{id:28s,lvl:1s},{id:15s,lvl:32767s}],display:{Name:""\"§3§lNetherite Axe""\",Lore:[""\"§3§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_pickaxe""\",Slot:6b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:16s,lvl:32767s},{id:28s,lvl:1s},{id:15s,lvl:32767s}],display:{Name:""\"§3§lNetherite Pickaxe""\",Lore:[""\"§3§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_shovel""\",Slot:7b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:16s,lvl:32767s},{id:28s,lvl:1s},{id:15s,lvl:32767s}],display:{Name:""\"§3§lNetherite Shovel""\",Lore:[""\"§3§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_hoe""\",Slot:8b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:16s,lvl:32767s},{id:28s,lvl:1s},{id:15s,lvl:32767s}],display:{Name:""\"§3§lNetherite Hoe""\",Lore:[""\"§3§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:elytra""\",Slot:9b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:0s,lvl:32767s},{id:1s,lvl:32767s},{id:3s,lvl:32767s},{id:4s,lvl:32767s},{id:5s,lvl:32767s},{id:28s,lvl:1s}],display:{Name:""\"§3§lElytra""\",Lore:[""\"§3§lBy Lunes Client""\"]}}},{Count:64b,Damage:0s,Name:""\"minecraft:fireworks""\",Slot:10b,WasPickedUp:0b,tag:{Fireworks:{Explosions:[],Flight:-1b}}},{Count:64b,Damage:0s,Name:""\"minecraft:fireworks""\",Slot:11b,WasPickedUp:0b,tag:{Fireworks:{Explosions:[],Flight:-1b}}},{Count:64b,Damage:0s,Name:""\"minecraft:cooked_beef""\",Slot:12b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:appleenchanted""\",Slot:13b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:obsidian""\",Slot:14b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:end_crystal""\",Slot:15b,WasPickedUp:0b},{Count:1b,Damage:2s,Name:""\"minecraft:emptymap""\",Slot:16b,WasPickedUp:0b,tag:{map_scale:3}},{Count:1b,Damage:0s,Name:""\"minecraft:flint_and_steel""\",Slot:17b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:28s,lvl:1s}],display:{Name:""\"§3§lFlint and Steel""\",Lore:[""\"§3§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:shears""\",Slot:18b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:28s,lvl:1s}],display:{Name:""\"§3§lShears""\",Lore:[""\"§3§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:totem""\",Slot:19b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:experience_bottle""\",Slot:20b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:arrow""\",Slot:21b,WasPickedUp:0b},{Count:1b,Damage:0s,Name:""\"minecraft:turtle_helmet""\",Slot:22b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:0s,lvl:32767s},{id:1s,lvl:32767s},{id:3s,lvl:32767s},{id:4s,lvl:32767s},{id:5s,lvl:32767s},{id:8s,lvl:32767s},{id:6s,lvl:32767s},{id:28s,lvl:1s}],display:{Name:""\"§3§lTurtle Shell""\",Lore:[""\"§3§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:shield""\",Slot:23b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:28s,lvl:1s}],display:{Name:""\"§3§lShield""\",Lore:[""\"§3§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:bow""\",Slot:24b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:21s,lvl:32767s},{id:22s,lvl:32767s},{id:19s,lvl:32767s},{id:28s,lvl:1s}],display:{Name:""\"§3§lBow""\",Lore:[""\"§3§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:trident""\",Slot:25b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:29s,lvl:32767s},{id:9s,lvl:32767s},{id:14s,lvl:32767s},{id:13s,lvl:32767s},{id:31s,lvl:3s},{id:28s,lvl:1s},{id:32s,lvl:32767s}],display:{Name:""\"§3§lTrident""\",Lore:[""\"§3§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:trident""\",Slot:26b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:13s,lvl:32767s},{id:14s,lvl:32767s},{id:9s,lvl:32767s},{id:29s,lvl:32767s},{id:28s,lvl:1s},{id:30s,lvl:32767s}],display:{Name:""\"§3§lTrident""\",Lore:[""\"§3§lBy Lunes Client""\"]}}}],ench:[{id:28s,lvl:1s}],RepairCost:0,display:{Lore:[""\"§1§lBy Lunes Client""\"],Name:""\"§1§lLunes Client's overpowered silk touch kit""\"}}";
	yot->setUserData(std::move(Mojangson::parseTag(tag)));
	g_Data.getLocalPlayer()->getTransactionManager()->addInventoryAction(C_InventoryAction(0, yot, nullptr, 507, 99999));
	g_Data.getLocalPlayer()->getTransactionManager()->addInventoryAction(C_InventoryAction(slot, nullptr, yot));
	g_Data.getLocalPlayer()->getSupplies()->inventory->addItemToFirstEmptySlot(yot);
	clientMessageF("[%sLunes%s] %splace the shulker box to get the kit!", GOLD, WHITE, GREEN);
	return true;
}

	else if (args->at(1) == "semi") {
		assertTrue(args->size() > 1);
	std::ostringstream os;
	for (int i = 1; i < args->size(); i++) {
		if (i > 1)
			os << " ";
		os << args->at(i);
	}
	void* ItemPtr = malloc(0x8);
	C_Item*** cStack = ItemRegistry::getItemFromId(ItemPtr, 218);
	C_ItemStack* yot = new C_ItemStack(***cStack, 1, 5);
	free(ItemPtr);
	int slot = g_Data.getLocalPlayer()->getSupplies()->inventory->getFirstEmptySlot();
	std::string cmd = os.str();
	std::string tag = "{Items:[{Count:1b,Damage:0s,Name:""\"minecraft:netherite_helmet""\",Slot:0b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:0s,lvl:4s},{id:28s,lvl:1s},{id:1s,lvl:4s},{id:3s,lvl:4s},{id:4s,lvl:4s},{id:8s,lvl:1s},{id:5s,lvl:3s},{id:6s,lvl:3s}],display:{Name:""\"§a§lNetherite Helmet""\",Lore:[""\"§a§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_chestplate""\",Slot:1b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:5s,lvl:3s},{id:28s,lvl:1s},{id:3s,lvl:4s},{id:0s,lvl:4s},{id:1s,lvl:4s},{id:4s,lvl:4s}],display:{Name:""\"§a§lNetherite Chestplate""\",Lore:[""\"§a§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_leggings""\",Slot:2b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:5s,lvl:3s},{id:28s,lvl:1s},{id:1s,lvl:4s},{id:0s,lvl:4s},{id:3s,lvl:4s},{id:4s,lvl:4s}],display:{Name:""\"§a§lNetherite Leggings""\",Lore:[""\"§a§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_boots""\",Slot:3b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:5s,lvl:3s},{id:2s,lvl:4s},{id:7s,lvl:3s},{id:4s,lvl:4s},{id:0s,lvl:4s},{id:3s,lvl:4s},{id:1s,lvl:4s},{id:28s,lvl:1s}],display:{Name:""\"§a§lNetherite Boots""\",Lore:[""\"§a§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_sword""\",Slot:4b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:9s,lvl:5s},{id:11s,lvl:5s},{id:10s,lvl:5s},{id:13s,lvl:2s},{id:14s,lvl:3s},{id:28s,lvl:1s}],display:{Name:""\"§a§lNetherite Sword""\",Lore:[""\"§a§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_axe""\",Slot:5b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:9s,lvl:5s},{id:11s,lvl:5s},{id:10s,lvl:5s},{id:18s,lvl:3s},{id:28s,lvl:1s},{id:15s,lvl:5s}],display:{Name:""\"§a§lNetherite Axe""\",Lore:[""\"§a§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_pickaxe""\",Slot:6b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:18s,lvl:3s},{id:28s,lvl:1s},{id:15s,lvl:5s}],display:{Name:""\"§a§lNetherite Pickaxe""\",Lore:[""\"§a§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_shovel""\",Slot:7b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:18s,lvl:3s},{id:28s,lvl:1s},{id:15s,lvl:5s}],display:{Name:""\"§a§lNetherite Shovel""\",Lore:[""\"§a§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_hoe""\",Slot:8b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:18s,lvl:3s},{id:28s,lvl:1s},{id:15s,lvl:5s}],display:{Name:""\"§a§lNetherite Hoe""\",Lore:[""\"§a§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:elytra""\",Slot:9b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:0s,lvl:4s},{id:1s,lvl:4s},{id:3s,lvl:4s},{id:4s,lvl:4s},{id:5s,lvl:3s},{id:28s,lvl:1s}],display:{Name:""\"§a§lElytra""\",Lore:[""\"§a§lBy Lunes Client""\"]}}},{Count:64b,Damage:0s,Name:""\"minecraft:fireworks""\",Slot:10b,WasPickedUp:0b,tag:{Fireworks:{Explosions:[],Flight:3b}}},{Count:64b,Damage:0s,Name:""\"minecraft:fireworks""\",Slot:11b,WasPickedUp:0b,tag:{Fireworks:{Explosions:[],Flight:3b}}},{Count:64b,Damage:0s,Name:""\"minecraft:cooked_beef""\",Slot:12b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:appleenchanted""\",Slot:13b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:obsidian""\",Slot:14b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:end_crystal""\",Slot:15b,WasPickedUp:0b},{Count:1b,Damage:2s,Name:""\"minecraft:emptymap""\",Slot:16b,WasPickedUp:0b,tag:{map_scale:3}},{Count:1b,Damage:0s,Name:""\"minecraft:flint_and_steel""\",Slot:17b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:28s,lvl:1s}],display:{Name:""\"§a§lFlint and Steel""\",Lore:[""\"§a§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:shears""\",Slot:18b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:28s,lvl:1s}],display:{Name:""\"§a§lShears""\",Lore:[""\"§a§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:totem""\",Slot:19b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:experience_bottle""\",Slot:20b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:arrow""\",Slot:21b,WasPickedUp:0b},{Count:1b,Damage:0s,Name:""\"minecraft:turtle_helmet""\",Slot:22b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:0s,lvl:4s},{id:1s,lvl:4s},{id:3s,lvl:4s},{id:4s,lvl:4s},{id:5s,lvl:3s},{id:8s,lvl:1s},{id:6s,lvl:3s},{id:28s,lvl:1s}],display:{Name:""\"§a§lTurtle Shell""\",Lore:[""\"§a§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:shield""\",Slot:23b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:28s,lvl:1s}],display:{Name:""\"§a§lShield""\",Lore:[""\"§a§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:bow""\",Slot:24b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:21s,lvl:1s},{id:22s,lvl:1s},{id:19s,lvl:5s},{id:28s,lvl:1s}],display:{Name:""\"§a§lBow""\",Lore:[""\"§a§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:trident""\",Slot:25b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:29s,lvl:5s},{id:11s,lvl:5s},{id:10s,lvl:5s},{id:9s,lvl:5s},{id:14s,lvl:3s},{id:13s,lvl:2s},{id:28s,lvl:1s},{id:31s,lvl:3s},{id:32s,lvl:1s}],display:{Name:""\"§a§lTrident""\",Lore:[""\"§a§lBy Lunes Client""\"]}}},{Count:1b,Damage:0s,Name:""\"minecraft:trident""\",Slot:26b,WasPickedUp:0b,tag:{Damage:0,Unbreakable:1b,ench:[{id:11s,lvl:5s},{id:10s,lvl:5s},{id:13s,lvl:2s},{id:14s,lvl:3s},{id:9s,lvl:5s},{id:29s,lvl:5s},{id:28s,lvl:1s},{id:30s,lvl:3s}],display:{Name:""\"§a§lTrident""\",Lore:[""\"§a§lBy Lunes Client""\"]}}}],ench:[{id:28s,lvl:1s}],RepairCost:0,display:{Lore:[""\"§2§lBy Lunes Client""\"],Name:""\"§2§lLunes Client's semi kit""\"}}";
	yot->setUserData(std::move(Mojangson::parseTag(tag)));
	g_Data.getLocalPlayer()->getTransactionManager()->addInventoryAction(C_InventoryAction(0, yot, nullptr, 507, 99999));
	g_Data.getLocalPlayer()->getTransactionManager()->addInventoryAction(C_InventoryAction(slot, nullptr, yot));
	g_Data.getLocalPlayer()->getSupplies()->inventory->addItemToFirstEmptySlot(yot);
	clientMessageF("[%sLunes%s] %splace the shulker box to get the kit!", GOLD, WHITE, GREEN);
	return true;
}

else if (args->at(1) == "vanilla") {
		assertTrue(args->size() > 1);
	std::ostringstream os;
	for (int i = 1; i < args->size(); i++) {
		if (i > 1)
			os << " ";
		os << args->at(i);
	}
	void* ItemPtr = malloc(0x8);
	C_Item*** cStack = ItemRegistry::getItemFromId(ItemPtr, 218);
	C_ItemStack* yot = new C_ItemStack(***cStack, 1, 0);
	free(ItemPtr);
	int slot = g_Data.getLocalPlayer()->getSupplies()->inventory->getFirstEmptySlot();
	std::string cmd = os.str();
	std::string tag = "{Items:[{Count:1b,Damage:0s,Name:""\"minecraft:netherite_helmet""\",Slot:0b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:0s,lvl:4s},{id:5s,lvl:3s},{id:8s,lvl:1s},{id:6s,lvl:3s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_chestplate""\",Slot:1b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:0s,lvl:4s},{id:5s,lvl:3s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_leggings""\",Slot:2b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:0s,lvl:4s},{id:5s,lvl:3s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_boots""\",Slot:3b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:0s,lvl:4s},{id:5s,lvl:3s},{id:2s,lvl:4s},{id:7s,lvl:3s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_sword""\",Slot:4b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:9s,lvl:5s},{id:14s,lvl:3s},{id:13s,lvl:2s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_axe""\",Slot:5b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:9s,lvl:5s},{id:18s,lvl:3s},{id:15s,lvl:5s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_pickaxe""\",Slot:6b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:18s,lvl:3s},{id:28s,lvl:1s},{id:15s,lvl:5s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_shovel""\",Slot:7b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:18s,lvl:3s},{id:15s,lvl:5s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:netherite_hoe""\",Slot:8b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:18s,lvl:3s},{id:15s,lvl:5s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:elytra""\",Slot:9b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:28s,lvl:1s}]}},{Count:64b,Damage:0s,Name:""\"minecraft:fireworks""\",Slot:10b,WasPickedUp:0b,tag:{Fireworks:{Explosions:[],Flight:3b}}},{Count:64b,Damage:0s,Name:""\"minecraft:fireworks""\",Slot:11b,WasPickedUp:0b,tag:{Fireworks:{Explosions:[],Flight:3b}}},{Count:64b,Damage:0s,Name:""\"minecraft:cooked_beef""\",Slot:12b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:appleenchanted""\",Slot:13b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:obsidian""\",Slot:14b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:end_crystal""\",Slot:15b,WasPickedUp:0b},{Count:1b,Damage:2s,Name:""\"minecraft:emptymap""\",Slot:16b,WasPickedUp:0b,tag:{map_scale:3}},{Count:1b,Damage:0s,Name:""\"minecraft:flint_and_steel""\",Slot:17b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:shears""\",Slot:18b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:totem""\",Slot:19b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:experience_bottle""\",Slot:20b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:arrow""\",Slot:21b,WasPickedUp:0b},{Count:1b,Damage:0s,Name:""\"minecraft:turtle_helmet""\",Slot:22b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:0s,lvl:4s},{id:8s,lvl:1s},{id:6s,lvl:3s},{id:5s,lvl:3s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:shield""\",Slot:23b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:bow""\",Slot:24b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:21s,lvl:1s},{id:19s,lvl:5s},{id:28s,lvl:1s},{id:22s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:trident""\",Slot:25b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:29s,lvl:5s},{id:28s,lvl:1s},{id:31s,lvl:3s},{id:32s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:trident""\",Slot:26b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:29s,lvl:5s},{id:30s,lvl:3s},{id:28s,lvl:1s}]}}]}";
	yot->setUserData(std::move(Mojangson::parseTag(tag)));
	g_Data.getLocalPlayer()->getTransactionManager()->addInventoryAction(C_InventoryAction(0, yot, nullptr, 507, 99999));
	g_Data.getLocalPlayer()->getTransactionManager()->addInventoryAction(C_InventoryAction(slot, nullptr, yot));
	g_Data.getLocalPlayer()->getSupplies()->inventory->addItemToFirstEmptySlot(yot);
	clientMessageF("[%sLunes%s] %splace the shulker box to get the kit!", GOLD, WHITE, GREEN);
	return true;
}

else if (args->at(1) == "starter") {
		assertTrue(args->size() > 1);
	std::ostringstream os;
	for (int i = 1; i < args->size(); i++) {
		if (i > 1)
			os << " ";
		os << args->at(i);
	}
	void* ItemPtr = malloc(0x8);
	C_Item*** cStack = ItemRegistry::getItemFromId(ItemPtr, 218);
	C_ItemStack* yot = new C_ItemStack(***cStack, 1, 6);
	free(ItemPtr);
	int slot = g_Data.getLocalPlayer()->getSupplies()->inventory->getFirstEmptySlot();
	std::string cmd = os.str();
	std::string tag = "{Items:[{Count:1b,Damage:0s,Name:""\"minecraft:diamond_helmet""\",Slot:0b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:0s,lvl:4s},{id:5s,lvl:3s},{id:8s,lvl:1s},{id:6s,lvl:3s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:diamond_chestplate""\",Slot:1b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:0s,lvl:4s},{id:5s,lvl:3s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:diamond_leggings""\",Slot:2b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:0s,lvl:4s},{id:5s,lvl:3s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:diamond_boots""\",Slot:3b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:0s,lvl:4s},{id:5s,lvl:3s},{id:2s,lvl:4s},{id:7s,lvl:3s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:diamond_sword""\",Slot:4b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:9s,lvl:5s},{id:14s,lvl:3s},{id:13s,lvl:2s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:diamond_axe""\",Slot:5b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:9s,lvl:5s},{id:18s,lvl:3s},{id:15s,lvl:5s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:diamond_pickaxe""\",Slot:6b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:18s,lvl:3s},{id:28s,lvl:1s},{id:15s,lvl:5s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:diamond_shovel""\",Slot:7b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:18s,lvl:3s},{id:15s,lvl:5s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:diamond_hoe""\",Slot:8b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:18s,lvl:3s},{id:15s,lvl:5s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:elytra""\",Slot:9b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:28s,lvl:1s}]}},{Count:64b,Damage:0s,Name:""\"minecraft:fireworks""\",Slot:10b,WasPickedUp:0b,tag:{Fireworks:{Explosions:[],Flight:3b}}},{Count:64b,Damage:0s,Name:""\"minecraft:fireworks""\",Slot:11b,WasPickedUp:0b,tag:{Fireworks:{Explosions:[],Flight:3b}}},{Count:64b,Damage:0s,Name:""\"minecraft:cooked_beef""\",Slot:12b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:appleenchanted""\",Slot:13b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:obsidian""\",Slot:14b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:end_crystal""\",Slot:15b,WasPickedUp:0b},{Count:1b,Damage:2s,Name:""\"minecraft:emptymap""\",Slot:16b,WasPickedUp:0b,tag:{map_scale:3}},{Count:1b,Damage:0s,Name:""\"minecraft:flint_and_steel""\",Slot:17b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:shears""\",Slot:18b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:totem""\",Slot:19b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:experience_bottle""\",Slot:20b,WasPickedUp:0b},{Count:64b,Damage:0s,Name:""\"minecraft:arrow""\",Slot:21b,WasPickedUp:0b},{Count:1b,Damage:0s,Name:""\"minecraft:turtle_helmet""\",Slot:22b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:0s,lvl:4s},{id:8s,lvl:1s},{id:6s,lvl:3s},{id:5s,lvl:3s},{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:shield""\",Slot:23b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:28s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:bow""\",Slot:24b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:21s,lvl:1s},{id:19s,lvl:5s},{id:28s,lvl:1s},{id:22s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:trident""\",Slot:25b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:29s,lvl:5s},{id:28s,lvl:1s},{id:31s,lvl:3s},{id:32s,lvl:1s}]}},{Count:1b,Damage:0s,Name:""\"minecraft:trident""\",Slot:26b,WasPickedUp:0b,tag:{Unbreakable:1b,ench:[{id:29s,lvl:5s},{id:30s,lvl:3s},{id:28s,lvl:1s}]}}]}";
	yot->setUserData(std::move(Mojangson::parseTag(tag)));
	g_Data.getLocalPlayer()->getTransactionManager()->addInventoryAction(C_InventoryAction(0, yot, nullptr, 507, 99999));
	g_Data.getLocalPlayer()->getTransactionManager()->addInventoryAction(C_InventoryAction(slot, nullptr, yot));
	g_Data.getLocalPlayer()->getSupplies()->inventory->addItemToFirstEmptySlot(yot);
	clientMessageF("[%sLunes%s] %splace the shulker box to get the kit!", GOLD, WHITE, GREEN);
	return true;
	
	}
}