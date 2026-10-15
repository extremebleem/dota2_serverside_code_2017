// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_brewmaster.h:17
class CDOTA_Bot_Hero_Brewmaster : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Brewmaster(CDOTA_Bot_Hero_Brewmaster &);
	CDOTA_Bot_Hero_Brewmaster(CDOTA_Bot_Hero_Brewmaster &);
	CDOTA_Bot_Hero_Brewmaster(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot_Hero_Brewmaster();

	// sizeof = 34504
};

// src/game/server/dota/bot/dota_bot_hero_brewmaster.h:31
class CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Brewmaster> {
public:

	CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap(CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap &);
	CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap(const CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap &);
	CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Brewmaster_ThunderClap();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_brewmaster.h:44
class CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Brewmaster> {
public:

	CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze(CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze &);
	CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze(const CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze &);
	CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Brewmaster_DrunkenHaze();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_brewmaster.h:57
class CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Brewmaster> {
public:

	CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit(CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit &);
	CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit(const CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit &);
	CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Brewmaster_PrimalSplit();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
