// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_clinkz.h:17
class CDOTA_Bot_Hero_Clinkz : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Clinkz(CDOTA_Bot_Hero_Clinkz &);
	CDOTA_Bot_Hero_Clinkz(CDOTA_Bot_Hero_Clinkz &);
	CDOTA_Bot_Hero_Clinkz(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);

private:

	float GetAttacksPerSecondWithBonus(float);
	virtual ~CDOTA_Bot_Hero_Clinkz();

	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_clinkz.h:36
class CDOTA_Bot_AbilityUsage_Clinkz_Strafe : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Clinkz> {
public:

	CDOTA_Bot_AbilityUsage_Clinkz_Strafe(CDOTA_Bot_AbilityUsage_Clinkz_Strafe &);
	CDOTA_Bot_AbilityUsage_Clinkz_Strafe(const CDOTA_Bot_AbilityUsage_Clinkz_Strafe &);
	CDOTA_Bot_AbilityUsage_Clinkz_Strafe(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Clinkz_Strafe();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_clinkz.h:49
class CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Clinkz> {
public:

	CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows(CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows &);
	CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows(const CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows &);
	CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Clinkz_SearingArrows();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_clinkz.h:62
class CDOTA_Bot_AbilityUsage_Clinkz_Windwalk : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Clinkz> {
public:

	CDOTA_Bot_AbilityUsage_Clinkz_Windwalk(CDOTA_Bot_AbilityUsage_Clinkz_Windwalk &);
	CDOTA_Bot_AbilityUsage_Clinkz_Windwalk(const CDOTA_Bot_AbilityUsage_Clinkz_Windwalk &);
	CDOTA_Bot_AbilityUsage_Clinkz_Windwalk(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Clinkz_Windwalk();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_clinkz.h:75
class CDOTA_Bot_AbilityUsage_Clinkz_DeathPact : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Clinkz> {
public:

	CDOTA_Bot_AbilityUsage_Clinkz_DeathPact(CDOTA_Bot_AbilityUsage_Clinkz_DeathPact &);
	CDOTA_Bot_AbilityUsage_Clinkz_DeathPact(const CDOTA_Bot_AbilityUsage_Clinkz_DeathPact &);
	CDOTA_Bot_AbilityUsage_Clinkz_DeathPact(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Clinkz_DeathPact();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
