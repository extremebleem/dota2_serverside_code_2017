// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_zuus.h:15
class CDOTA_Bot_Hero_Zuus : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Zuus(CDOTA_Bot_Hero_Zuus &);
	CDOTA_Bot_Hero_Zuus(CDOTA_Bot_Hero_Zuus &);
	CDOTA_Bot_Hero_Zuus(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual int GetGankDistance();
	virtual ~CDOTA_Bot_Hero_Zuus();

	// vtable[18] GetGankDistance
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_zuus.h:32
class CDOTA_Bot_AbilityUsage_Zuus_ArcLightning : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Zuus> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Zuus_ArcLightning(CDOTA_Bot_AbilityUsage_Zuus_ArcLightning &);
	CDOTA_Bot_AbilityUsage_Zuus_ArcLightning(const CDOTA_Bot_AbilityUsage_Zuus_ArcLightning &);
	CDOTA_Bot_AbilityUsage_Zuus_ArcLightning(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Zuus_ArcLightning();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_zuus.h:49
class CDOTA_Bot_AbilityUsage_Zuus_LightningBolt : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Zuus> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Zuus_LightningBolt(CDOTA_Bot_AbilityUsage_Zuus_LightningBolt &);
	CDOTA_Bot_AbilityUsage_Zuus_LightningBolt(const CDOTA_Bot_AbilityUsage_Zuus_LightningBolt &);
	CDOTA_Bot_AbilityUsage_Zuus_LightningBolt(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Zuus_LightningBolt();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_zuus.h:66
class CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Zuus> {
public:

	CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath(CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath &);
	CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath(const CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath &);
	CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Zuus_ThundergodsWrath();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
