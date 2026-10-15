// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_sven.h:17
class CDOTA_Bot_Hero_Sven : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Sven(CDOTA_Bot_Hero_Sven &);
	CDOTA_Bot_Hero_Sven(CDOTA_Bot_Hero_Sven &);
	CDOTA_Bot_Hero_Sven(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual int GetGankDistance();
	virtual int GetMaxRoamDistance();
	virtual float GetCleavePercent();
	virtual ~CDOTA_Bot_Hero_Sven();

	// vtable[12] CreateMode
	// vtable[18] GetGankDistance
	// vtable[19] GetMaxRoamDistance
	// vtable[14] GetCleavePercent
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_sven.h:39
class CDOTA_BotMode_Attack_Sven : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_Sven(CDOTA_BotMode_Attack_Sven &);
	CDOTA_BotMode_Attack_Sven(const CDOTA_BotMode_Attack_Sven &);
	CDOTA_BotMode_Attack_Sven(CDOTA_Bot *);
	virtual float GetDesire();
	virtual ~CDOTA_BotMode_Attack_Sven();

	// vtable[10] GetDesire
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_sven.h:62
class CDOTA_Bot_AbilityUsage_Sven_StormBolt : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sven> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Sven_StormBolt(CDOTA_Bot_AbilityUsage_Sven_StormBolt &);
	CDOTA_Bot_AbilityUsage_Sven_StormBolt(const CDOTA_Bot_AbilityUsage_Sven_StormBolt &);
	CDOTA_Bot_AbilityUsage_Sven_StormBolt(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Sven_StormBolt();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_sven.h:79
class CDOTA_Bot_AbilityUsage_Sven_Warcry : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sven> {
public:

	CDOTA_Bot_AbilityUsage_Sven_Warcry(CDOTA_Bot_AbilityUsage_Sven_Warcry &);
	CDOTA_Bot_AbilityUsage_Sven_Warcry(const CDOTA_Bot_AbilityUsage_Sven_Warcry &);
	CDOTA_Bot_AbilityUsage_Sven_Warcry(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Sven_Warcry();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_sven.h:92
class CDOTA_Bot_AbilityUsage_Sven_GodsStrength : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sven> {
public:

	CDOTA_Bot_AbilityUsage_Sven_GodsStrength(CDOTA_Bot_AbilityUsage_Sven_GodsStrength &);
	CDOTA_Bot_AbilityUsage_Sven_GodsStrength(const CDOTA_Bot_AbilityUsage_Sven_GodsStrength &);
	CDOTA_Bot_AbilityUsage_Sven_GodsStrength(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Sven_GodsStrength();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
