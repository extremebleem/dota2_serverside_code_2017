// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_tidehunter.h:17
class CDOTA_Bot_Hero_Tidehunter : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Tidehunter(CDOTA_Bot_Hero_Tidehunter &);
	CDOTA_Bot_Hero_Tidehunter(CDOTA_Bot_Hero_Tidehunter &);
	CDOTA_Bot_Hero_Tidehunter(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual int GetGankDistance();
	virtual float GetAggressionFactor();
	virtual ~CDOTA_Bot_Hero_Tidehunter();

	// vtable[12] CreateMode
	// vtable[18] GetGankDistance
	// vtable[5] GetAggressionFactor
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_tidehunter.h:38
class CDOTA_BotMode_Attack_Tidehunter : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_Tidehunter(CDOTA_BotMode_Attack_Tidehunter &);
	CDOTA_BotMode_Attack_Tidehunter(const CDOTA_BotMode_Attack_Tidehunter &);
	CDOTA_BotMode_Attack_Tidehunter(CDOTA_Bot *);

protected:

	virtual Vector CalculateDesiredLocation();
	virtual ~CDOTA_BotMode_Attack_Tidehunter();

	// vtable[15] CalculateDesiredLocation
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_tidehunter.h:50
class CDOTA_Bot_AbilityUsage_Tidehunter_Gush : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tidehunter> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Tidehunter_Gush(CDOTA_Bot_AbilityUsage_Tidehunter_Gush &);
	CDOTA_Bot_AbilityUsage_Tidehunter_Gush(const CDOTA_Bot_AbilityUsage_Tidehunter_Gush &);
	CDOTA_Bot_AbilityUsage_Tidehunter_Gush(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Tidehunter_Gush();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_tidehunter.h:67
class CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tidehunter> {
public:

	CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash(CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash &);
	CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash(const CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash &);
	CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Tidehunter_AnchorSmash();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_tidehunter.h:80
class CDOTA_Bot_AbilityUsage_Tidehunter_Ravage : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tidehunter> {
public:

	CDOTA_Bot_AbilityUsage_Tidehunter_Ravage(CDOTA_Bot_AbilityUsage_Tidehunter_Ravage &);
	CDOTA_Bot_AbilityUsage_Tidehunter_Ravage(const CDOTA_Bot_AbilityUsage_Tidehunter_Ravage &);
	CDOTA_Bot_AbilityUsage_Tidehunter_Ravage(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Tidehunter_Ravage();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_tidehunter.h:96
class CDOTA_TutorialBot_Hero_Tidehunter : public CDOTA_Bot_Hero_Tidehunter {
public:

private:

	int m_nActivityDeath;  // +0x86d0
	bool m_bHasSeenEnemy;  // +0x86d4
	CDOTA_TutorialBot_Hero_Tidehunter(CDOTA_TutorialBot_Hero_Tidehunter &);
	CDOTA_TutorialBot_Hero_Tidehunter(CDOTA_TutorialBot_Hero_Tidehunter &);
	CDOTA_TutorialBot_Hero_Tidehunter(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual bool IsTutorial();
	virtual bool IsTutorialBotBoss();
	virtual int TranslateActivity(int);
	virtual void SetDeathActivity(int);
	virtual DOTA_BOT_MODE GetInitialMode();
	virtual CDOTA_BotMode * CreateMode(int);
	virtual void Think();
	virtual ~CDOTA_TutorialBot_Hero_Tidehunter();

	// vtable[27] IsTutorial
	// vtable[28] IsTutorialBotBoss
	// vtable[7] TranslateActivity
	// vtable[6] SetDeathActivity
	// vtable[4] GetInitialMode
	// vtable[12] CreateMode
	// vtable[3] Think
	// sizeof = 34520
};
