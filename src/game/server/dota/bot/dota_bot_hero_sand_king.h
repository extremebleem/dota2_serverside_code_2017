// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_sand_king.h:17
class CDOTA_Bot_Hero_SandKing : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_SandKing(CDOTA_Bot_Hero_SandKing &);
	CDOTA_Bot_Hero_SandKing(CDOTA_Bot_Hero_SandKing &);
	CDOTA_Bot_Hero_SandKing(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual bool IsSavingBlink();
	virtual ~CDOTA_Bot_Hero_SandKing();

	// vtable[20] IsSavingBlink
	// sizeof = 34504
};

// src/game/server/dota/bot/dota_bot_hero_sand_king.h:33
class CDOTA_BotMode_Attack_SandKing : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_SandKing(CDOTA_Bot *);
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual ~CDOTA_BotMode_Attack_SandKing();

	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_sand_king.h:46
class CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SandKing> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike(CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike &);
	CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike(const CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike &);
	CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_sand_king.h:64
class CDOTA_Bot_AbilityUsage_SandKing_SandStorm : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SandKing> {
public:

	CDOTA_Bot_AbilityUsage_SandKing_SandStorm(CDOTA_Bot_AbilityUsage_SandKing_SandStorm &);
	CDOTA_Bot_AbilityUsage_SandKing_SandStorm(const CDOTA_Bot_AbilityUsage_SandKing_SandStorm &);
	CDOTA_Bot_AbilityUsage_SandKing_SandStorm(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool ShouldBreakChannel();
	virtual ~CDOTA_Bot_AbilityUsage_SandKing_SandStorm();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[3] ShouldBreakChannel
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_sand_king.h:80
class CDOTA_Bot_AbilityUsage_SandKing_Epicenter : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SandKing> {
public:

private:

	int m_nFilterHealthThreshold;  // +0x20
	CDOTA_Bot_AbilityUsage_SandKing_Epicenter(CDOTA_Bot_AbilityUsage_SandKing_Epicenter &);
	CDOTA_Bot_AbilityUsage_SandKing_Epicenter(const CDOTA_Bot_AbilityUsage_SandKing_Epicenter &);
	CDOTA_Bot_AbilityUsage_SandKing_Epicenter(CDOTA_Bot *, CDOTABaseAbility *);
	virtual bool FindFilter(EHANDLE);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_SandKing_Epicenter();

	// vtable[7] FindFilter
	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};
