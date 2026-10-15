// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_witch_doctor.h:17
class CDOTA_Bot_Hero_WitchDoctor : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_WitchDoctor(CDOTA_Bot_Hero_WitchDoctor &);
	CDOTA_Bot_Hero_WitchDoctor(CDOTA_Bot_Hero_WitchDoctor &);
	CDOTA_Bot_Hero_WitchDoctor(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual ~CDOTA_Bot_Hero_WitchDoctor();

	// vtable[12] CreateMode
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_witch_doctor.h:34
class CDOTA_BotMode_Attack_WitchDoctor : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_WitchDoctor(CDOTA_BotMode_Attack_WitchDoctor &);
	CDOTA_BotMode_Attack_WitchDoctor(const CDOTA_BotMode_Attack_WitchDoctor &);
	CDOTA_BotMode_Attack_WitchDoctor(CDOTA_Bot *);
	virtual void Think();
	virtual ~CDOTA_BotMode_Attack_WitchDoctor();

	// vtable[5] Think
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_witch_doctor.h:45
class CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_WitchDoctor> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask(CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask &);
	CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask(const CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask &);
	CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_WitchDoctor_ParalyzingCask();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_witch_doctor.h:62
class CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_WitchDoctor> {
public:

	CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration(CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration &);
	CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration(const CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration &);
	CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_WitchDoctor_VoodooRestoration();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_witch_doctor.h:75
class CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_WitchDoctor> {
public:

private:

	CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict(CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict &);
	CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict(const CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict &);
	CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	virtual ~CDOTA_Bot_AbilityUsage_WitchDoctor_Maledict();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_witch_doctor.h:94
class CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_WitchDoctor> {
public:

private:

	CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard(CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard &);
	CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard(const CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard &);
	CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	virtual ~CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_witch_doctor.h:113
class CDOTA_Bot_Unit_WitchDoctor_DeathWard : public CDOTA_Bot {
public:

	CDOTA_Bot_Unit_WitchDoctor_DeathWard(CDOTA_Bot_Unit_WitchDoctor_DeathWard &);
	CDOTA_Bot_Unit_WitchDoctor_DeathWard(CDOTA_Bot_Unit_WitchDoctor_DeathWard &);
	CDOTA_Bot_Unit_WitchDoctor_DeathWard(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual DOTA_BOT_MODE GetInitialMode();
	virtual CDOTA_BotMode * CreateMode(int);
	virtual ~CDOTA_Bot_Unit_WitchDoctor_DeathWard();

	// vtable[4] GetInitialMode
	// vtable[12] CreateMode
	// sizeof = 34480
};

// src/game/server/dota/bot/dota_bot_hero_witch_doctor.h:128
class CDOTA_BotMode_Attack_WitchDoctor_DeathWard : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_WitchDoctor_DeathWard(CDOTA_BotMode_Attack_WitchDoctor_DeathWard &);
	CDOTA_BotMode_Attack_WitchDoctor_DeathWard(const CDOTA_BotMode_Attack_WitchDoctor_DeathWard &);
	CDOTA_BotMode_Attack_WitchDoctor_DeathWard(CDOTA_Bot *);
	virtual void Think();
	virtual float GetDesire();
	virtual Vector CalculateDesiredLocation();
	virtual ~CDOTA_BotMode_Attack_WitchDoctor_DeathWard();

	// vtable[5] Think
	// vtable[10] GetDesire
	// vtable[15] CalculateDesiredLocation
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_witch_doctor.h:146
class CDOTA_TutorialBot_Hero_WitchDoctor : public CDOTA_Bot_Hero_WitchDoctor {
public:

private:

	bool m_bHasSeenEnemy;  // +0x86d0
	CDOTA_TutorialBot_Hero_WitchDoctor(CDOTA_TutorialBot_Hero_WitchDoctor &);
	CDOTA_TutorialBot_Hero_WitchDoctor(CDOTA_TutorialBot_Hero_WitchDoctor &);
	CDOTA_TutorialBot_Hero_WitchDoctor(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual bool IsTutorial();
	virtual void Think();
	virtual ~CDOTA_TutorialBot_Hero_WitchDoctor();

	// vtable[27] IsTutorial
	// vtable[3] Think
	// sizeof = 34520
};
