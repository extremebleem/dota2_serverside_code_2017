// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_bounty_hunter.h:17
class CDOTA_Bot_Hero_BountyHunter : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_BountyHunter(CDOTA_Bot_Hero_BountyHunter &);
	CDOTA_Bot_Hero_BountyHunter(CDOTA_Bot_Hero_BountyHunter &);
	CDOTA_Bot_Hero_BountyHunter(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual int GetGankDistance();
	virtual int GetMaxRoamDistance();
	virtual ~CDOTA_Bot_Hero_BountyHunter();

	// vtable[12] CreateMode
	// vtable[18] GetGankDistance
	// vtable[19] GetMaxRoamDistance
	// sizeof = 34504
};

// src/game/server/dota/bot/dota_bot_hero_bounty_hunter.h:37
class CDOTA_BotMode_Attack_BountyHunter : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_BountyHunter(CDOTA_BotMode_Attack_BountyHunter &);
	CDOTA_BotMode_Attack_BountyHunter(const CDOTA_BotMode_Attack_BountyHunter &);
	CDOTA_BotMode_Attack_BountyHunter(CDOTA_Bot *);
	virtual void Think();
	virtual float GetAttackScore(CDOTA_BaseNPC *);
	virtual Vector CalculateDesiredLocation();
	virtual ~CDOTA_BotMode_Attack_BountyHunter();

	// vtable[5] Think
	// vtable[17] GetAttackScore
	// vtable[15] CalculateDesiredLocation
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_bounty_hunter.h:52
class CDOTA_BotMode_Roam_BountyHunter : public CDOTA_BotMode_Roam {
public:

	CDOTA_BotMode_Roam_BountyHunter(CDOTA_BotMode_Roam_BountyHunter &);
	CDOTA_BotMode_Roam_BountyHunter(const CDOTA_BotMode_Roam_BountyHunter &);
	CDOTA_BotMode_Roam_BountyHunter(CDOTA_Bot *);
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual ~CDOTA_BotMode_Roam_BountyHunter();

	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// sizeof = 264
};

// src/game/server/dota/bot/dota_bot_hero_bounty_hunter.h:66
class CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_BountyHunter> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss(CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss &);
	CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss(const CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss &);
	CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_bounty_hunter.h:83
class CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_BountyHunter> {
public:

	CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk(CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk &);
	CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk(const CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk &);
	CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_BountyHunter_WindWalk();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_bounty_hunter.h:96
class CDOTA_Bot_AbilityUsage_BountyHunter_Track : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_BountyHunter> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_BountyHunter_Track(CDOTA_Bot_AbilityUsage_BountyHunter_Track &);
	CDOTA_Bot_AbilityUsage_BountyHunter_Track(const CDOTA_Bot_AbilityUsage_BountyHunter_Track &);
	CDOTA_Bot_AbilityUsage_BountyHunter_Track(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_BountyHunter_Track();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
