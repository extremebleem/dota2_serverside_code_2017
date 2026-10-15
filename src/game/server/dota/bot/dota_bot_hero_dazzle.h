// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_dazzle.h:18
class CDOTA_Bot_Hero_Dazzle : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Dazzle(CDOTA_Bot_Hero_Dazzle &);
	CDOTA_Bot_Hero_Dazzle(CDOTA_Bot_Hero_Dazzle &);
	CDOTA_Bot_Hero_Dazzle(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot_Hero_Dazzle();

	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_dazzle.h:33
class CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Dazzle> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch(CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch &);
	CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch(const CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch &);
	CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_dazzle.h:50
class CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Dazzle> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave(CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave &);
	CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave(const CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave &);
	CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Dazzle_ShallowGrave();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_dazzle.h:67
class CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Dazzle> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave(CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave &);
	CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave(const CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave &);
	CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_dazzle.h:83
class CDOTA_Bot_AbilityUsage_Dazzle_Weave : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Dazzle> {
public:

private:

	CDOTA_Bot_AbilityUsage_Dazzle_Weave(CDOTA_Bot_AbilityUsage_Dazzle_Weave &);
	CDOTA_Bot_AbilityUsage_Dazzle_Weave(const CDOTA_Bot_AbilityUsage_Dazzle_Weave &);
	CDOTA_Bot_AbilityUsage_Dazzle_Weave(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Dazzle_Weave();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};
