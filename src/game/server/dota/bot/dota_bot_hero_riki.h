// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_riki.h:17
class CDOTA_Bot_Hero_Riki : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Riki(CDOTA_Bot_Hero_Riki &);
	CDOTA_Bot_Hero_Riki(CDOTA_Bot_Hero_Riki &);
	CDOTA_Bot_Hero_Riki(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual int GetGankDistance();
	virtual float GetAggressionFactor();
	virtual void SetAttackMoveAction(const Vector &);
	virtual ~CDOTA_Bot_Hero_Riki();

	// vtable[12] CreateMode
	// vtable[18] GetGankDistance
	// vtable[5] GetAggressionFactor
	// vtable[9] SetAttackMoveAction
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_riki.h:37
class CDOTA_BotMode_Attack_Riki : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_Riki(CDOTA_BotMode_Attack_Riki &);
	CDOTA_BotMode_Attack_Riki(const CDOTA_BotMode_Attack_Riki &);
	CDOTA_BotMode_Attack_Riki(CDOTA_Bot *);
	virtual float GetAttackScore(CDOTA_BaseNPC *);
	virtual Vector CalculateDesiredLocation();
	virtual float GetDesire();
	virtual ~CDOTA_BotMode_Attack_Riki();

	// vtable[17] GetAttackScore
	// vtable[15] CalculateDesiredLocation
	// vtable[10] GetDesire
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_riki.h:50
class CDOTA_BotMode_Roam_Riki : public CDOTA_BotMode_Roam {
public:

	CDOTA_BotMode_Roam_Riki(CDOTA_BotMode_Roam_Riki &);
	CDOTA_BotMode_Roam_Riki(const CDOTA_BotMode_Roam_Riki &);
	CDOTA_BotMode_Roam_Riki(CDOTA_Bot *);
	virtual float GetDesire();
	virtual ~CDOTA_BotMode_Roam_Riki();

	// vtable[10] GetDesire
	// sizeof = 264
};

// src/game/server/dota/bot/dota_bot_hero_riki.h:61
class CDOTA_Bot_AbilityUsage_Riki_SmokeScreen : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Riki> {
public:

private:

	CDOTA_Bot_AbilityUsage_Riki_SmokeScreen(CDOTA_Bot_AbilityUsage_Riki_SmokeScreen &);
	CDOTA_Bot_AbilityUsage_Riki_SmokeScreen(const CDOTA_Bot_AbilityUsage_Riki_SmokeScreen &);
	CDOTA_Bot_AbilityUsage_Riki_SmokeScreen(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Riki_SmokeScreen();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_riki.h:76
class CDOTA_Bot_AbilityUsage_Riki_BlinkStrike : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Riki> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Riki_BlinkStrike(CDOTA_Bot_AbilityUsage_Riki_BlinkStrike &);
	CDOTA_Bot_AbilityUsage_Riki_BlinkStrike(const CDOTA_Bot_AbilityUsage_Riki_BlinkStrike &);
	CDOTA_Bot_AbilityUsage_Riki_BlinkStrike(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool UseOnIllusionState(DOTA_BOT_ILLUSION_STATE);
	virtual ~CDOTA_Bot_AbilityUsage_Riki_BlinkStrike();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[2] UseOnIllusionState
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_riki.h:92
class CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Riki> {
public:

	CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade(CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade &);
	CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade(const CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade &);
	CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
