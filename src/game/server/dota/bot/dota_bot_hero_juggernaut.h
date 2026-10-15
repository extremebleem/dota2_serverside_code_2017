// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_juggernaut.h:17
class CDOTA_Bot_Hero_Juggernaut : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Juggernaut(CDOTA_Bot_Hero_Juggernaut &);
	CDOTA_Bot_Hero_Juggernaut(CDOTA_Bot_Hero_Juggernaut &);
	CDOTA_Bot_Hero_Juggernaut(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual int GetGankDistance();
	virtual int GetMaxRoamDistance();
	virtual void DoMinionThink();
	int GetOmniSlashTotalDamage();
	virtual ~CDOTA_Bot_Hero_Juggernaut();

	// vtable[12] CreateMode
	// vtable[18] GetGankDistance
	// vtable[19] GetMaxRoamDistance
	// vtable[8] DoMinionThink
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_juggernaut.h:41
class CDOTA_BotMode_Attack_Juggernaut : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_Juggernaut(CDOTA_BotMode_Attack_Juggernaut &);
	CDOTA_BotMode_Attack_Juggernaut(const CDOTA_BotMode_Attack_Juggernaut &);
	CDOTA_BotMode_Attack_Juggernaut(CDOTA_Bot *);
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual ~CDOTA_BotMode_Attack_Juggernaut();

	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_juggernaut.h:55
class CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Juggernaut> {
public:

	CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury(CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury &);
	CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury(const CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury &);
	CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_juggernaut.h:69
class CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Juggernaut> {
public:

	CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard(CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard &);
	CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard(const CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard &);
	CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_juggernaut.h:82
class CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Juggernaut> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash(CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash &);
	CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash(const CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash &);
	CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Juggernaut_Omnislash();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_juggernaut.h:103
class CDOTA_TutorialBot_Hero_Juggernaut : public CDOTA_Bot_Hero_Juggernaut {
public:

private:

	bool m_bHasSeenEnemy;  // +0x86d0
	CDOTA_TutorialBot_Hero_Juggernaut(CDOTA_TutorialBot_Hero_Juggernaut &);
	CDOTA_TutorialBot_Hero_Juggernaut(CDOTA_TutorialBot_Hero_Juggernaut &);
	CDOTA_TutorialBot_Hero_Juggernaut(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual bool IsTutorial();
	virtual void Think();
	virtual ~CDOTA_TutorialBot_Hero_Juggernaut();

	// vtable[27] IsTutorial
	// vtable[3] Think
	// sizeof = 34520
};
