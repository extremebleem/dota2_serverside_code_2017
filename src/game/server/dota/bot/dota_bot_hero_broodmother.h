// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_broodmother.h:17
class CDOTA_Bot_Hero_Broodmother : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Broodmother(CDOTA_Bot_Hero_Broodmother &);
	CDOTA_Bot_Hero_Broodmother(CDOTA_Bot_Hero_Broodmother &);
	CDOTA_Bot_Hero_Broodmother(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot_Hero_Broodmother();

	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_broodmother.h:32
class CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Broodmother> {
public:

	CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings(CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings &);
	CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings(const CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings &);
	CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Broodmother_SpawnSpiderlings();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_broodmother.h:45
class CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Broodmother> {
public:

	CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb(CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb &);
	CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb(const CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb &);
	CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Broodmother_SpinWeb();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_broodmother.h:58
class CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Broodmother> {
public:

	CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger(CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger &);
	CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger(const CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger &);
	CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Broodmother_InsatiableHunger();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
