// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_lina.h:17
class CDOTA_Bot_Hero_Lina : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Lina(CDOTA_Bot_Hero_Lina &);
	CDOTA_Bot_Hero_Lina(CDOTA_Bot_Hero_Lina &);
	CDOTA_Bot_Hero_Lina(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual bool HasLocationStun();
	virtual int GetGankDistance();
	virtual int GetMaxRoamDistance();
	virtual ~CDOTA_Bot_Hero_Lina();

	// vtable[12] CreateMode
	// vtable[17] HasLocationStun
	// vtable[18] GetGankDistance
	// vtable[19] GetMaxRoamDistance
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_lina.h:39
class CDOTA_BotMode_Attack_Lina : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_Lina(CDOTA_BotMode_Attack_Lina &);
	CDOTA_BotMode_Attack_Lina(const CDOTA_BotMode_Attack_Lina &);
	CDOTA_BotMode_Attack_Lina(CDOTA_Bot *);
	virtual void Think();
	virtual ~CDOTA_BotMode_Attack_Lina();

	// vtable[5] Think
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_lina.h:50
class CDOTA_Bot_AbilityUsage_Lina_LightStrikearray : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lina> {
public:

private:

	CDOTA_Bot_AbilityUsage_Lina_LightStrikearray(CDOTA_Bot_AbilityUsage_Lina_LightStrikearray &);
	CDOTA_Bot_AbilityUsage_Lina_LightStrikearray(const CDOTA_Bot_AbilityUsage_Lina_LightStrikearray &);
	CDOTA_Bot_AbilityUsage_Lina_LightStrikearray(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	virtual ~CDOTA_Bot_AbilityUsage_Lina_LightStrikearray();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_lina.h:69
class CDOTA_Bot_AbilityUsage_Lina_DragonSlave : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lina> {
public:

private:

	CDOTA_Bot_AbilityUsage_Lina_DragonSlave(CDOTA_Bot_AbilityUsage_Lina_DragonSlave &);
	CDOTA_Bot_AbilityUsage_Lina_DragonSlave(const CDOTA_Bot_AbilityUsage_Lina_DragonSlave &);
	CDOTA_Bot_AbilityUsage_Lina_DragonSlave(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	virtual ~CDOTA_Bot_AbilityUsage_Lina_DragonSlave();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_lina.h:88
class CDOTA_Bot_AbilityUsage_Lina_LagunaBlade : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lina> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Lina_LagunaBlade(CDOTA_Bot_AbilityUsage_Lina_LagunaBlade &);
	CDOTA_Bot_AbilityUsage_Lina_LagunaBlade(const CDOTA_Bot_AbilityUsage_Lina_LagunaBlade &);
	CDOTA_Bot_AbilityUsage_Lina_LagunaBlade(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Lina_LagunaBlade();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
