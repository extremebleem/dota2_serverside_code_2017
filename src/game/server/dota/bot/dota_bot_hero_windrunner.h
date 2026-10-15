// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_windrunner.h:17
class CDOTA_Bot_Hero_Windrunner : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Windrunner(CDOTA_Bot_Hero_Windrunner &);
	CDOTA_Bot_Hero_Windrunner(CDOTA_Bot_Hero_Windrunner &);
	CDOTA_Bot_Hero_Windrunner(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual int GetMaxRoamDistance();
	virtual bool IsWillingToSpendMana(int);
	virtual ~CDOTA_Bot_Hero_Windrunner();

	// vtable[12] CreateMode
	// vtable[19] GetMaxRoamDistance
	// vtable[10] IsWillingToSpendMana
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_windrunner.h:38
class CDOTA_BotMode_Attack_Windrunner : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_Windrunner(CDOTA_BotMode_Attack_Windrunner &);
	CDOTA_BotMode_Attack_Windrunner(const CDOTA_BotMode_Attack_Windrunner &);
	CDOTA_BotMode_Attack_Windrunner(CDOTA_Bot *);
	virtual void Think();
	virtual ~CDOTA_BotMode_Attack_Windrunner();

	// vtable[5] Think
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_windrunner.h:49
class CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Windrunner> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot(CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot &);
	CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot(const CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot &);
	CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	bool IsGoodShackle(CDOTA_BaseNPC *);
	virtual ~CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_windrunner.h:68
class CDOTA_Bot_AbilityUsage_Windrunner_Powershot : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Windrunner> {
public:

private:

	CDOTA_Bot_AbilityUsage_Windrunner_Powershot(CDOTA_Bot_AbilityUsage_Windrunner_Powershot &);
	CDOTA_Bot_AbilityUsage_Windrunner_Powershot(const CDOTA_Bot_AbilityUsage_Windrunner_Powershot &);
	CDOTA_Bot_AbilityUsage_Windrunner_Powershot(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	virtual ~CDOTA_Bot_AbilityUsage_Windrunner_Powershot();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_windrunner.h:87
class CDOTA_Bot_AbilityUsage_Windrunner_Windrun : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Windrunner> {
public:

	CDOTA_Bot_AbilityUsage_Windrunner_Windrun(CDOTA_Bot_AbilityUsage_Windrunner_Windrun &);
	CDOTA_Bot_AbilityUsage_Windrunner_Windrun(const CDOTA_Bot_AbilityUsage_Windrunner_Windrun &);
	CDOTA_Bot_AbilityUsage_Windrunner_Windrun(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Windrunner_Windrun();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_windrunner.h:100
class CDOTA_Bot_AbilityUsage_Windrunner_FocusFire : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Windrunner> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Windrunner_FocusFire(CDOTA_Bot_AbilityUsage_Windrunner_FocusFire &);
	CDOTA_Bot_AbilityUsage_Windrunner_FocusFire(const CDOTA_Bot_AbilityUsage_Windrunner_FocusFire &);
	CDOTA_Bot_AbilityUsage_Windrunner_FocusFire(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Windrunner_FocusFire();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
