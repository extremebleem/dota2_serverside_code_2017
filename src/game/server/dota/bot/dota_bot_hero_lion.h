// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_lion.h:18
class CDOTA_Bot_Hero_Lion : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Lion(CDOTA_Bot_Hero_Lion &);
	CDOTA_Bot_Hero_Lion(CDOTA_Bot_Hero_Lion &);
	CDOTA_Bot_Hero_Lion(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual bool HasLocationStun();
	virtual ~CDOTA_Bot_Hero_Lion();

	// vtable[17] HasLocationStun
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_lion.h:35
class CDOTA_Bot_AbilityUsage_Lion_Impale : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Lion_Impale(CDOTA_Bot_AbilityUsage_Lion_Impale &);
	CDOTA_Bot_AbilityUsage_Lion_Impale(const CDOTA_Bot_AbilityUsage_Lion_Impale &);
	CDOTA_Bot_AbilityUsage_Lion_Impale(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Lion_Impale();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_lion.h:52
class CDOTA_Bot_AbilityUsage_Lion_Voodoo : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Lion_Voodoo(CDOTA_Bot_AbilityUsage_Lion_Voodoo &);
	CDOTA_Bot_AbilityUsage_Lion_Voodoo(const CDOTA_Bot_AbilityUsage_Lion_Voodoo &);
	CDOTA_Bot_AbilityUsage_Lion_Voodoo(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Lion_Voodoo();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_lion.h:69
class CDOTA_Bot_AbilityUsage_Lion_ManaDrain : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Lion_ManaDrain(CDOTA_Bot_AbilityUsage_Lion_ManaDrain &);
	CDOTA_Bot_AbilityUsage_Lion_ManaDrain(const CDOTA_Bot_AbilityUsage_Lion_ManaDrain &);
	CDOTA_Bot_AbilityUsage_Lion_ManaDrain(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Lion_ManaDrain();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_lion.h:86
class CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath(CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath &);
	CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath(const CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath &);
	CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
