// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_oracle.h:16
class CDOTA_Bot_Hero_Oracle : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Oracle(CDOTA_Bot_Hero_Oracle &);
	CDOTA_Bot_Hero_Oracle(CDOTA_Bot_Hero_Oracle &);
	CDOTA_Bot_Hero_Oracle(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual ~CDOTA_Bot_Hero_Oracle();

	// vtable[12] CreateMode
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_oracle.h:33
class CDOTA_BotMode_Attack_Oracle : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_Oracle(CDOTA_BotMode_Attack_Oracle &);
	CDOTA_BotMode_Attack_Oracle(const CDOTA_BotMode_Attack_Oracle &);
	CDOTA_BotMode_Attack_Oracle(CDOTA_Bot *);
	virtual float GetDesire();
	virtual ~CDOTA_BotMode_Attack_Oracle();

	// vtable[10] GetDesire
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_oracle.h:44
class CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Oracle> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd(CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd &);
	CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd(const CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd &);
	CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Oracle_FortunesEnd();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_oracle.h:60
class CDOTA_Bot_AbilityUsage_Oracle_FatesEdict : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Oracle> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Oracle_FatesEdict(CDOTA_Bot_AbilityUsage_Oracle_FatesEdict &);
	CDOTA_Bot_AbilityUsage_Oracle_FatesEdict(const CDOTA_Bot_AbilityUsage_Oracle_FatesEdict &);
	CDOTA_Bot_AbilityUsage_Oracle_FatesEdict(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	int GetHealDesire();
	int GetOffensiveDesire();
	virtual ~CDOTA_Bot_AbilityUsage_Oracle_FatesEdict();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_oracle.h:79
class CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Oracle> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames(CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames &);
	CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames(const CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames &);
	CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	int GetHealDesire();
	int GetOffensiveDesire();
	virtual ~CDOTA_Bot_AbilityUsage_Oracle_PurifyingFlames();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_oracle.h:98
class CDOTA_Bot_AbilityUsage_Oracle_FalsePromise : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Oracle> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Oracle_FalsePromise(CDOTA_Bot_AbilityUsage_Oracle_FalsePromise &);
	CDOTA_Bot_AbilityUsage_Oracle_FalsePromise(const CDOTA_Bot_AbilityUsage_Oracle_FalsePromise &);
	CDOTA_Bot_AbilityUsage_Oracle_FalsePromise(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Oracle_FalsePromise();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
