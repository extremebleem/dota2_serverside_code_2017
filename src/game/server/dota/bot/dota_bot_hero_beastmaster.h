// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_beastmaster.h:17
class CDOTA_Bot_Hero_Beastmaster : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Beastmaster(CDOTA_Bot_Hero_Beastmaster &);
	CDOTA_Bot_Hero_Beastmaster(CDOTA_Bot_Hero_Beastmaster &);
	CDOTA_Bot_Hero_Beastmaster(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual int GetGankDistance();
	virtual ~CDOTA_Bot_Hero_Beastmaster();

	// vtable[18] GetGankDistance
	// sizeof = 34504
};

// src/game/server/dota/bot/dota_bot_hero_beastmaster.h:33
class CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Beastmaster> {
public:

private:

	CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes(CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes &);
	CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes(const CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes &);
	CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Beastmaster_WildAxes();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_beastmaster.h:50
class CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Beastmaster> {
public:

	CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild(CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild &);
	CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild(const CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild &);
	CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Beastmaster_CallOfTheWild();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_beastmaster.h:64
class CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Beastmaster> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar(CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar &);
	CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar(const CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar &);
	CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Beastmaster_PrimalRoar();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
