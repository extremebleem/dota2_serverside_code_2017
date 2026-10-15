// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_nevermore.h:16
class CDOTA_Bot_Hero_Nevermore : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Nevermore(CDOTA_Bot_Hero_Nevermore &);
	CDOTA_Bot_Hero_Nevermore(CDOTA_Bot_Hero_Nevermore &);
	CDOTA_Bot_Hero_Nevermore(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual int GetGankDistance();
	virtual ~CDOTA_Bot_Hero_Nevermore();

	// vtable[12] CreateMode
	// vtable[18] GetGankDistance
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_nevermore.h:35
class CDOTA_BotMode_Attack_Nevermore : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_Nevermore(CDOTA_BotMode_Attack_Nevermore &);
	CDOTA_BotMode_Attack_Nevermore(const CDOTA_BotMode_Attack_Nevermore &);
	CDOTA_BotMode_Attack_Nevermore(CDOTA_Bot *);
	virtual Vector CalculateDesiredLocation();
	virtual ~CDOTA_BotMode_Attack_Nevermore();

	// vtable[15] CalculateDesiredLocation
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_nevermore.h:46
class CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Nevermore> {
public:

private:

	int m_iShadowrazeLevel;  // +0x20
	CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze(CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze &);
	CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze(const CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze &);
	CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze(CDOTA_Bot *, CDOTABaseAbility *, int);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Nevermore_Shadowraze();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_nevermore.h:62
class CDOTA_Bot_AbilityUsage_Nevermore_Requiem : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Nevermore> {
public:

	CDOTA_Bot_AbilityUsage_Nevermore_Requiem(CDOTA_Bot_AbilityUsage_Nevermore_Requiem &);
	CDOTA_Bot_AbilityUsage_Nevermore_Requiem(const CDOTA_Bot_AbilityUsage_Nevermore_Requiem &);
	CDOTA_Bot_AbilityUsage_Nevermore_Requiem(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	int EstimateTargetLinesHit(CDOTA_BaseNPC *);
	virtual ~CDOTA_Bot_AbilityUsage_Nevermore_Requiem();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
