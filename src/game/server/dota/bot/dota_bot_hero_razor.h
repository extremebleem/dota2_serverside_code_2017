// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_razor.h:17
class CDOTA_Bot_Hero_Razor : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Razor(CDOTA_Bot_Hero_Razor &);
	CDOTA_Bot_Hero_Razor(CDOTA_Bot_Hero_Razor &);
	CDOTA_Bot_Hero_Razor(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot_Hero_Razor();

	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_razor.h:32
class CDOTA_Bot_AbilityUsage_Razor_PlasmaField : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Razor> {
public:

	CDOTA_Bot_AbilityUsage_Razor_PlasmaField(CDOTA_Bot_AbilityUsage_Razor_PlasmaField &);
	CDOTA_Bot_AbilityUsage_Razor_PlasmaField(const CDOTA_Bot_AbilityUsage_Razor_PlasmaField &);
	CDOTA_Bot_AbilityUsage_Razor_PlasmaField(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Razor_PlasmaField();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_razor.h:45
class CDOTA_Bot_AbilityUsage_Razor_StaticLink : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Razor> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Razor_StaticLink(CDOTA_Bot_AbilityUsage_Razor_StaticLink &);
	CDOTA_Bot_AbilityUsage_Razor_StaticLink(const CDOTA_Bot_AbilityUsage_Razor_StaticLink &);
	CDOTA_Bot_AbilityUsage_Razor_StaticLink(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Razor_StaticLink();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_razor.h:62
class CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Razor> {
public:

	CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm(CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm &);
	CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm(const CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm &);
	CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Razor_EyeOfTheStorm();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_razor.h:78
class CDOTA_TutorialBot_Hero_Razor : public CDOTA_Bot_Hero_Razor {
public:

private:

	bool m_bHasSeenEnemy;  // +0x86d0
	CDOTA_TutorialBot_Hero_Razor(CDOTA_TutorialBot_Hero_Razor &);
	CDOTA_TutorialBot_Hero_Razor(CDOTA_TutorialBot_Hero_Razor &);
	CDOTA_TutorialBot_Hero_Razor(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual bool IsTutorial();
	virtual DOTA_BOT_MODE GetInitialMode();
	virtual CDOTA_BotMode * CreateMode(int);
	virtual void Think();
	virtual ~CDOTA_TutorialBot_Hero_Razor();

	// vtable[27] IsTutorial
	// vtable[4] GetInitialMode
	// vtable[12] CreateMode
	// vtable[3] Think
	// sizeof = 34520
};
