// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_earthshaker.h:17
class CDOTA_Bot_Hero_Earthshaker : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Earthshaker(CDOTA_Bot_Hero_Earthshaker &);
	CDOTA_Bot_Hero_Earthshaker(CDOTA_Bot_Hero_Earthshaker &);
	CDOTA_Bot_Hero_Earthshaker(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual bool HasLocationStun();
	virtual int GetGankDistance();
	virtual int GetMaxRoamDistance();
	virtual float GetAggressionFactor();
	virtual ~CDOTA_Bot_Hero_Earthshaker();

	// vtable[12] CreateMode
	// vtable[17] HasLocationStun
	// vtable[18] GetGankDistance
	// vtable[19] GetMaxRoamDistance
	// vtable[5] GetAggressionFactor
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_earthshaker.h:40
class CDOTA_BotMode_Attack_Earthshaker : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_Earthshaker(CDOTA_BotMode_Attack_Earthshaker &);
	CDOTA_BotMode_Attack_Earthshaker(const CDOTA_BotMode_Attack_Earthshaker &);
	CDOTA_BotMode_Attack_Earthshaker(CDOTA_Bot *);
	virtual Vector CalculateDesiredLocation();
	virtual ~CDOTA_BotMode_Attack_Earthshaker();

	// vtable[15] CalculateDesiredLocation
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_earthshaker.h:51
class CDOTA_Bot_AbilityUsage_Earthshaker_Fissure : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Earthshaker> {
public:

private:

	CDOTA_Bot_AbilityUsage_Earthshaker_Fissure(CDOTA_Bot_AbilityUsage_Earthshaker_Fissure &);
	CDOTA_Bot_AbilityUsage_Earthshaker_Fissure(const CDOTA_Bot_AbilityUsage_Earthshaker_Fissure &);
	CDOTA_Bot_AbilityUsage_Earthshaker_Fissure(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	bool FindMultiTargetFissureLocation(Vector *, int);
	bool FindBestFissureLaningLocation(EHANDLE *, Vector *);
	bool FindBestFissureGankLocation(EHANDLE *, Vector *);
	virtual ~CDOTA_Bot_AbilityUsage_Earthshaker_Fissure();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_earthshaker.h:74
class CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Earthshaker> {
public:

	CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem(CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem &);
	CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem(const CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem &);
	CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_earthshaker.h:87
class CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Earthshaker> {
public:

private:

	CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam(CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam &);
	CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam(const CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam &);
	CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Earthshaker_EchoSlam();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};
