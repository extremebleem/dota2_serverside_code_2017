// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_pudge.h:18
class CDOTA_Bot_Hero_Pudge : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Pudge(CDOTA_Bot_Hero_Pudge &);
	CDOTA_Bot_Hero_Pudge(CDOTA_Bot_Hero_Pudge &);
	CDOTA_Bot_Hero_Pudge(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual int GetGankDistance();
	virtual float GetAggressionFactor();
	virtual bool IsSavingBlink();
	virtual ~CDOTA_Bot_Hero_Pudge();

	// vtable[12] CreateMode
	// vtable[18] GetGankDistance
	// vtable[5] GetAggressionFactor
	// vtable[20] IsSavingBlink
	// sizeof = 34504
};

// src/game/server/dota/bot/dota_bot_hero_pudge.h:38
class CDOTA_BotMode_Attack_Pudge : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_Pudge(CDOTA_BotMode_Attack_Pudge &);
	CDOTA_BotMode_Attack_Pudge(const CDOTA_BotMode_Attack_Pudge &);
	CDOTA_BotMode_Attack_Pudge(CDOTA_Bot *);
	virtual float GetDesire();
	virtual ~CDOTA_BotMode_Attack_Pudge();

	// vtable[10] GetDesire
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_pudge.h:49
class CDOTA_BotMode_Laning_Pudge : public CDOTA_BotMode_Laning {
public:

private:

	EHANDLE m_hHookTarget;  // +0xec
	CDOTA_BotMode_Laning_Pudge(CDOTA_BotMode_Laning_Pudge &);
	CDOTA_BotMode_Laning_Pudge(const CDOTA_BotMode_Laning_Pudge &);
	CDOTA_BotMode_Laning_Pudge(CDOTA_Bot *);
	virtual Vector CalculateDesiredLocation();
	EHANDLE GetHookTarget();
	float GetHookLocationDesireForTarget(const Vector &, CDOTA_BaseNPC *);
	void BuildHookStartLocationListForTarget(CDOTA_BaseNPC *, CUtlVector<Vector, CUtlMemory<Vector, int> > &);
	virtual ~CDOTA_BotMode_Laning_Pudge();

	// vtable[15] CalculateDesiredLocation
	// sizeof = 240
};

// src/game/server/dota/bot/dota_bot_hero_pudge.h:69
class CDOTA_Bot_AbilityUsage_Pudge_MeatHook : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Pudge> {
public:

private:

	CDOTA_Bot_AbilityUsage_Pudge_MeatHook(CDOTA_Bot_AbilityUsage_Pudge_MeatHook &);
	CDOTA_Bot_AbilityUsage_Pudge_MeatHook(const CDOTA_Bot_AbilityUsage_Pudge_MeatHook &);
	CDOTA_Bot_AbilityUsage_Pudge_MeatHook(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool UseOnIllusionState(DOTA_BOT_ILLUSION_STATE);
	bool IsHookPathClear(const Vector &, CDOTA_BaseNPC *, Vector *);
	bool IsHookPathClearFromCurrentPosition(CDOTA_BaseNPC *, Vector *);
	virtual ~CDOTA_Bot_AbilityUsage_Pudge_MeatHook();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[2] UseOnIllusionState
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_pudge.h:89
class CDOTA_Bot_AbilityUsage_Pudge_Rot : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Pudge> {
public:

	CDOTA_Bot_AbilityUsage_Pudge_Rot(CDOTA_Bot_AbilityUsage_Pudge_Rot &);
	CDOTA_Bot_AbilityUsage_Pudge_Rot(const CDOTA_Bot_AbilityUsage_Pudge_Rot &);
	CDOTA_Bot_AbilityUsage_Pudge_Rot(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Pudge_Rot();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_pudge.h:102
class CDOTA_Bot_AbilityUsage_Pudge_Dismember : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Pudge> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Pudge_Dismember(CDOTA_Bot_AbilityUsage_Pudge_Dismember &);
	CDOTA_Bot_AbilityUsage_Pudge_Dismember(const CDOTA_Bot_AbilityUsage_Pudge_Dismember &);
	CDOTA_Bot_AbilityUsage_Pudge_Dismember(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Pudge_Dismember();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
