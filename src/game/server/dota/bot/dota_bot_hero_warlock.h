// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_warlock.h:17
class CDOTA_Bot_Hero_Warlock : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Warlock(CDOTA_Bot_Hero_Warlock &);
	CDOTA_Bot_Hero_Warlock(CDOTA_Bot_Hero_Warlock &);
	CDOTA_Bot_Hero_Warlock(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot_Hero_Warlock();

	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_warlock.h:32
class CDOTA_Bot_AbilityUsage_Warlock_FatalBonds : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Warlock> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Warlock_FatalBonds(CDOTA_Bot_AbilityUsage_Warlock_FatalBonds &);
	CDOTA_Bot_AbilityUsage_Warlock_FatalBonds(const CDOTA_Bot_AbilityUsage_Warlock_FatalBonds &);
	CDOTA_Bot_AbilityUsage_Warlock_FatalBonds(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Warlock_FatalBonds();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_warlock.h:49
class CDOTA_Bot_AbilityUsage_Warlock_ShadowWord : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Warlock> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Warlock_ShadowWord(CDOTA_Bot_AbilityUsage_Warlock_ShadowWord &);
	CDOTA_Bot_AbilityUsage_Warlock_ShadowWord(const CDOTA_Bot_AbilityUsage_Warlock_ShadowWord &);
	CDOTA_Bot_AbilityUsage_Warlock_ShadowWord(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Warlock_ShadowWord();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_warlock.h:66
class CDOTA_Bot_AbilityUsage_Warlock_Upheaval : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Warlock> {
public:

private:

	CDOTA_Bot_AbilityUsage_Warlock_Upheaval(CDOTA_Bot_AbilityUsage_Warlock_Upheaval &);
	CDOTA_Bot_AbilityUsage_Warlock_Upheaval(const CDOTA_Bot_AbilityUsage_Warlock_Upheaval &);
	CDOTA_Bot_AbilityUsage_Warlock_Upheaval(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	virtual ~CDOTA_Bot_AbilityUsage_Warlock_Upheaval();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_warlock.h:85
class CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Warlock> {
public:

private:

	CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos(CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos &);
	CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos(const CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos &);
	CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Warlock_RainOfChaos();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_warlock.h:102
class CDOTA_Bot_Unit_WarlockGolem : public CDOTA_Bot {
public:

	CDOTA_Bot_Unit_WarlockGolem(CDOTA_Bot_Unit_WarlockGolem &);
	CDOTA_Bot_Unit_WarlockGolem(CDOTA_Bot_Unit_WarlockGolem &);
	CDOTA_Bot_Unit_WarlockGolem(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual DOTA_BOT_MODE GetInitialMode();
	virtual CDOTA_BotMode * CreateMode(int);
	virtual ~CDOTA_Bot_Unit_WarlockGolem();

	// vtable[4] GetInitialMode
	// vtable[12] CreateMode
	// sizeof = 34480
};

// src/game/server/dota/bot/dota_bot_hero_warlock.h:116
class CDOTA_BotMode_Attack_WarlockGolem : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_WarlockGolem(CDOTA_BotMode_Attack_WarlockGolem &);
	CDOTA_BotMode_Attack_WarlockGolem(const CDOTA_BotMode_Attack_WarlockGolem &);
	CDOTA_BotMode_Attack_WarlockGolem(CDOTA_Bot *);
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual ~CDOTA_BotMode_Attack_WarlockGolem();

	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// sizeof = 232
};
