// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_tiny.h:17
class CDOTA_Bot_Hero_Tiny : public CDOTA_Bot {
public:

private:

	float m_fAvalancheExpireTime;  // +0x86d0
	CDOTA_Bot_Hero_Tiny(CDOTA_Bot_Hero_Tiny &);
	CDOTA_Bot_Hero_Tiny(CDOTA_Bot_Hero_Tiny &);
	CDOTA_Bot_Hero_Tiny(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual bool HasLocationStun();
	virtual int GetGankDistance();
	virtual int GetMaxRoamDistance();
	virtual float GetCleavePercent();
	void SetAvalancheLocation(const Vector &);
	void SetAvalancheExpireTime(float);
	bool IsAvalancheActive();
	bool GetAvalancheLocation(Vector *);
	virtual ~CDOTA_Bot_Hero_Tiny();

	// vtable[12] CreateMode
	// vtable[17] HasLocationStun
	// vtable[18] GetGankDistance
	// vtable[19] GetMaxRoamDistance
	// vtable[14] GetCleavePercent
	// sizeof = 34528
};

// src/game/server/dota/bot/dota_bot_hero_tiny.h:51
class CDOTA_BotMode_Attack_Tiny : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_Tiny(CDOTA_BotMode_Attack_Tiny &);
	CDOTA_BotMode_Attack_Tiny(const CDOTA_BotMode_Attack_Tiny &);
	CDOTA_BotMode_Attack_Tiny(CDOTA_Bot *);
	virtual float GetDesire();
	virtual void Think();
	virtual ~CDOTA_BotMode_Attack_Tiny();

	// vtable[10] GetDesire
	// vtable[5] Think
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_tiny.h:64
class CDOTA_Bot_AbilityUsage_Tiny_Avalanche : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tiny> {
public:

private:

	CDOTA_Bot_AbilityUsage_Tiny_Avalanche(CDOTA_Bot_AbilityUsage_Tiny_Avalanche &);
	CDOTA_Bot_AbilityUsage_Tiny_Avalanche(const CDOTA_Bot_AbilityUsage_Tiny_Avalanche &);
	CDOTA_Bot_AbilityUsage_Tiny_Avalanche(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	virtual ~CDOTA_Bot_AbilityUsage_Tiny_Avalanche();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_tiny.h:83
class CDOTA_Bot_AbilityUsage_Tiny_Toss : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tiny> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Tiny_Toss(CDOTA_Bot_AbilityUsage_Tiny_Toss &);
	CDOTA_Bot_AbilityUsage_Tiny_Toss(const CDOTA_Bot_AbilityUsage_Tiny_Toss &);
	CDOTA_Bot_AbilityUsage_Tiny_Toss(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Tiny_Toss();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
