// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_axe.h:17
class CDOTA_Bot_Hero_Axe : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Axe(CDOTA_Bot_Hero_Axe &);
	CDOTA_Bot_Hero_Axe(CDOTA_Bot_Hero_Axe &);
	CDOTA_Bot_Hero_Axe(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual float GetAggressionFactor();
	virtual ~CDOTA_Bot_Hero_Axe();

	// vtable[12] CreateMode
	// vtable[5] GetAggressionFactor
	// sizeof = 34504
};

// src/game/server/dota/bot/dota_bot_hero_axe.h:35
class CDOTA_BotMode_Attack_Axe : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_Axe(CDOTA_BotMode_Attack_Axe &);
	CDOTA_BotMode_Attack_Axe(const CDOTA_BotMode_Attack_Axe &);
	CDOTA_BotMode_Attack_Axe(CDOTA_Bot *);

protected:

	virtual Vector CalculateDesiredLocation();
	virtual ~CDOTA_BotMode_Attack_Axe();

	// vtable[15] CalculateDesiredLocation
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_axe.h:47
class CDOTA_BotMode_Laning_Axe : public CDOTA_BotMode_Laning {
public:

	CDOTA_BotMode_Laning_Axe(CDOTA_BotMode_Laning_Axe &);
	CDOTA_BotMode_Laning_Axe(const CDOTA_BotMode_Laning_Axe &);
	CDOTA_BotMode_Laning_Axe(CDOTA_Bot *);
	virtual float GetBaseAmountBackFromLane();
	virtual ~CDOTA_BotMode_Laning_Axe();

	// vtable[16] GetBaseAmountBackFromLane
	// sizeof = 240
};

// src/game/server/dota/bot/dota_bot_hero_axe.h:58
class CDOTA_Bot_AbilityUsage_Axe_BerserkersCall : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Axe> {
public:

	CDOTA_Bot_AbilityUsage_Axe_BerserkersCall(CDOTA_Bot_AbilityUsage_Axe_BerserkersCall &);
	CDOTA_Bot_AbilityUsage_Axe_BerserkersCall(const CDOTA_Bot_AbilityUsage_Axe_BerserkersCall &);
	CDOTA_Bot_AbilityUsage_Axe_BerserkersCall(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Axe_BerserkersCall();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_axe.h:71
class CDOTA_Bot_AbilityUsage_Axe_BattleHunger : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Axe> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Axe_BattleHunger(CDOTA_Bot_AbilityUsage_Axe_BattleHunger &);
	CDOTA_Bot_AbilityUsage_Axe_BattleHunger(const CDOTA_Bot_AbilityUsage_Axe_BattleHunger &);
	CDOTA_Bot_AbilityUsage_Axe_BattleHunger(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	bool IsValidBattleHungerTarget(CDOTA_BaseNPC *);
	virtual ~CDOTA_Bot_AbilityUsage_Axe_BattleHunger();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_axe.h:89
class CDOTA_Bot_AbilityUsage_Axe_CullingBlade : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Axe> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Axe_CullingBlade(CDOTA_Bot_AbilityUsage_Axe_CullingBlade &);
	CDOTA_Bot_AbilityUsage_Axe_CullingBlade(const CDOTA_Bot_AbilityUsage_Axe_CullingBlade &);
	CDOTA_Bot_AbilityUsage_Axe_CullingBlade(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Axe_CullingBlade();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_axe.h:109
class CDOTA_TutorialBot_Hero_Axe : public CDOTA_Bot_Hero_Axe {
public:

private:

	bool m_bHasSeenEnemy;  // +0x86c8
	CDOTA_TutorialBot_Hero_Axe(CDOTA_TutorialBot_Hero_Axe &);
	CDOTA_TutorialBot_Hero_Axe(CDOTA_TutorialBot_Hero_Axe &);
	CDOTA_TutorialBot_Hero_Axe(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual bool IsTutorial();
	virtual void Think();
	virtual ~CDOTA_TutorialBot_Hero_Axe();

	// vtable[27] IsTutorial
	// vtable[3] Think
	// sizeof = 34512
};
