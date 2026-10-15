// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_cyclone.h:15
class CDOTA_Bot_AbilityUsage_Cyclone : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	EHANDLE m_hTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Cyclone(CDOTA_Bot_AbilityUsage_Cyclone &);
	CDOTA_Bot_AbilityUsage_Cyclone(const CDOTA_Bot_AbilityUsage_Cyclone &);
	CDOTA_Bot_AbilityUsage_Cyclone(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Cyclone();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
