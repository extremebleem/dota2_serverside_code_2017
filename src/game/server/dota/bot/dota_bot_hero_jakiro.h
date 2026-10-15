// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_jakiro.h:17
class CDOTA_Bot_Hero_Jakiro : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Jakiro(CDOTA_Bot_Hero_Jakiro &);
	CDOTA_Bot_Hero_Jakiro(CDOTA_Bot_Hero_Jakiro &);
	CDOTA_Bot_Hero_Jakiro(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot_Hero_Jakiro();

	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_jakiro.h:32
class CDOTA_Bot_AbilityUsage_Jakiro_DualBreath : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Jakiro> {
public:

private:

	bool m_bOnlyUnitsWithTargets;  // +0x20

	CDOTA_Bot_AbilityUsage_Jakiro_DualBreath(CDOTA_Bot_AbilityUsage_Jakiro_DualBreath &);
	CDOTA_Bot_AbilityUsage_Jakiro_DualBreath(const CDOTA_Bot_AbilityUsage_Jakiro_DualBreath &);
	CDOTA_Bot_AbilityUsage_Jakiro_DualBreath(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	virtual ~CDOTA_Bot_AbilityUsage_Jakiro_DualBreath();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_jakiro.h:53
class CDOTA_Bot_AbilityUsage_Jakiro_IcePath : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Jakiro> {
public:

private:

	CDOTA_Bot_AbilityUsage_Jakiro_IcePath(CDOTA_Bot_AbilityUsage_Jakiro_IcePath &);
	CDOTA_Bot_AbilityUsage_Jakiro_IcePath(const CDOTA_Bot_AbilityUsage_Jakiro_IcePath &);
	CDOTA_Bot_AbilityUsage_Jakiro_IcePath(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	virtual ~CDOTA_Bot_AbilityUsage_Jakiro_IcePath();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_jakiro.h:72
class CDOTA_Bot_AbilityUsage_Jakiro_Macropyre : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Jakiro> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Jakiro_Macropyre(CDOTA_Bot_AbilityUsage_Jakiro_Macropyre &);
	CDOTA_Bot_AbilityUsage_Jakiro_Macropyre(const CDOTA_Bot_AbilityUsage_Jakiro_Macropyre &);
	CDOTA_Bot_AbilityUsage_Jakiro_Macropyre(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	virtual ~CDOTA_Bot_AbilityUsage_Jakiro_Macropyre();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_jakiro.h:92
class CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Jakiro> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire(CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire &);
	CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire(const CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire &);
	CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Jakiro_LiquidFire();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};
