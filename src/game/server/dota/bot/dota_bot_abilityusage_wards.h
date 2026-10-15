// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_wards.h:15
class CDOTA_Bot_AbilityUsage_ObserverWard : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	CDOTA_Bot_AbilityUsage_ObserverWard(CDOTA_Bot_AbilityUsage_ObserverWard &);
	CDOTA_Bot_AbilityUsage_ObserverWard(const CDOTA_Bot_AbilityUsage_ObserverWard &);
	CDOTA_Bot_AbilityUsage_ObserverWard(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	int GetUnitWardUsageDesire(CDOTA_BaseNPC *, Vector &);
	virtual ~CDOTA_Bot_AbilityUsage_ObserverWard();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_abilityusage_wards.h:34
class CDOTA_Bot_AbilityUsage_WardDispenser : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	bool m_bCastObserver;  // +0x20

	float m_flLastCastTime;  // +0x30
	CDOTA_Bot_AbilityUsage_WardDispenser(CDOTA_Bot_AbilityUsage_WardDispenser &);
	CDOTA_Bot_AbilityUsage_WardDispenser(const CDOTA_Bot_AbilityUsage_WardDispenser &);
	CDOTA_Bot_AbilityUsage_WardDispenser(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_WardDispenser();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 56
};
