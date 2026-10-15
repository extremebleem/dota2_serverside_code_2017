// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_death_prophet.h:18
class CDOTA_Bot_Hero_DeathProphet : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_DeathProphet(CDOTA_Bot_Hero_DeathProphet &);
	CDOTA_Bot_Hero_DeathProphet(CDOTA_Bot_Hero_DeathProphet &);
	CDOTA_Bot_Hero_DeathProphet(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual float GetAggressionFactor();
	virtual ~CDOTA_Bot_Hero_DeathProphet();

	// vtable[5] GetAggressionFactor
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_death_prophet.h:35
class CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DeathProphet> {
public:

private:

	CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm(CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm &);
	CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm(const CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm &);
	CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	virtual ~CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_death_prophet.h:54
class CDOTA_Bot_AbilityUsage_DeathProphet_Silence : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DeathProphet> {
public:

private:

	CDOTA_Bot_AbilityUsage_DeathProphet_Silence(CDOTA_Bot_AbilityUsage_DeathProphet_Silence &);
	CDOTA_Bot_AbilityUsage_DeathProphet_Silence(const CDOTA_Bot_AbilityUsage_DeathProphet_Silence &);
	CDOTA_Bot_AbilityUsage_DeathProphet_Silence(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	virtual ~CDOTA_Bot_AbilityUsage_DeathProphet_Silence();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_death_prophet.h:73
class CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DeathProphet> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon(CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon &);
	CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon(const CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon &);
	CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_DeathProphet_SpiritSiphon();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_death_prophet.h:89
class CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DeathProphet> {
public:

	CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism(CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism &);
	CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism(const CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism &);
	CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
