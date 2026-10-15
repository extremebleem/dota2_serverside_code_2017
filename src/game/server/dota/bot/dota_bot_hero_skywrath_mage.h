// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_skywrath_mage.h:15
class CDOTA_Bot_Hero_SkywrathMage : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_SkywrathMage(CDOTA_Bot_Hero_SkywrathMage &);
	CDOTA_Bot_Hero_SkywrathMage(CDOTA_Bot_Hero_SkywrathMage &);
	CDOTA_Bot_Hero_SkywrathMage(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual int GetGankDistance();
	virtual bool IsWillingToSpendMana(int);
	virtual ~CDOTA_Bot_Hero_SkywrathMage();

	// vtable[18] GetGankDistance
	// vtable[10] IsWillingToSpendMana
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_skywrath_mage.h:33
class CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkywrathMage> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt(CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt &);
	CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt(const CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt &);
	CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool UseOnIllusionState(DOTA_BOT_ILLUSION_STATE);
	virtual ~CDOTA_Bot_AbilityUsage_SkywrathMage_ArcaneBolt();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[2] UseOnIllusionState
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_skywrath_mage.h:50
class CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkywrathMage> {
public:

	CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot(CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot &);
	CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot(const CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot &);
	CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_SkywrathMage_ConcussiveShot();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_skywrath_mage.h:63
class CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkywrathMage> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal(CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal &);
	CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal(const CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal &);
	CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_SkywrathMage_AncientSeal();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_skywrath_mage.h:79
class CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkywrathMage> {
public:

private:

	CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare(CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare &);
	CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare(const CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare &);
	CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_SkywrathMage_MysticFlare();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};
