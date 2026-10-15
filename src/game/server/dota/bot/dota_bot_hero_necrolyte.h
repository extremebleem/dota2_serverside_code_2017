// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_necrolyte.h:17
class CDOTA_Bot_Hero_Necrolyte : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Necrolyte(CDOTA_Bot_Hero_Necrolyte &);
	CDOTA_Bot_Hero_Necrolyte(CDOTA_Bot_Hero_Necrolyte &);
	CDOTA_Bot_Hero_Necrolyte(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot_Hero_Necrolyte();

	// sizeof = 34504
};

// src/game/server/dota/bot/dota_bot_hero_necrolyte.h:31
class CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Necrolyte> {
public:

	CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse(CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse &);
	CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse(const CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse &);
	CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Necrolyte_DeathPulse();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_necrolyte.h:44
class CDOTA_Bot_AbilityUsage_Necrolyte_Scythe : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Necrolyte> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Necrolyte_Scythe(CDOTA_Bot_AbilityUsage_Necrolyte_Scythe &);
	CDOTA_Bot_AbilityUsage_Necrolyte_Scythe(const CDOTA_Bot_AbilityUsage_Necrolyte_Scythe &);
	CDOTA_Bot_AbilityUsage_Necrolyte_Scythe(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Necrolyte_Scythe();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
