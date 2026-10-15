// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_phantom_assassin.h:16
class CDOTA_Bot_Hero_PhantomAssassin : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_PhantomAssassin(CDOTA_Bot_Hero_PhantomAssassin &);
	CDOTA_Bot_Hero_PhantomAssassin(CDOTA_Bot_Hero_PhantomAssassin &);
	CDOTA_Bot_Hero_PhantomAssassin(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual int GetGankDistance();
	virtual bool IsWillingToSpendMana(int);
	virtual ~CDOTA_Bot_Hero_PhantomAssassin();

	// vtable[12] CreateMode
	// vtable[18] GetGankDistance
	// vtable[10] IsWillingToSpendMana
	// sizeof = 34504
};

// src/game/server/dota/bot/dota_bot_hero_phantom_assassin.h:35
class CDOTA_BotMode_Farm_PhantomAssassin : public CDOTA_BotMode_Farm {
public:

	CDOTA_BotMode_Farm_PhantomAssassin(CDOTA_BotMode_Farm_PhantomAssassin &);
	CDOTA_BotMode_Farm_PhantomAssassin(const CDOTA_BotMode_Farm_PhantomAssassin &);
	CDOTA_BotMode_Farm_PhantomAssassin(CDOTA_Bot *);
	virtual float GetDesire();
	virtual ~CDOTA_BotMode_Farm_PhantomAssassin();

	// vtable[10] GetDesire
	// sizeof = 272
};

// src/game/server/dota/bot/dota_bot_hero_phantom_assassin.h:46
class CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_PhantomAssassin> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger(CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger &);
	CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger(const CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger &);
	CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_PhantomAssassin_StiflingDagger();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_phantom_assassin.h:61
class CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_PhantomAssassin> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike(CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike &);
	CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike(const CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike &);
	CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool UseOnIllusionState(DOTA_BOT_ILLUSION_STATE);
	virtual ~CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[2] UseOnIllusionState
	// sizeof = 40
};
