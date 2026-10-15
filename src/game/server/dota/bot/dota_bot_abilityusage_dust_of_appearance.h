// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_dust_of_appearance.h:15
class CDOTA_Bot_AbilityUsage_Dust : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	int m_iRadius;  // +0x20
	CDOTA_Bot_AbilityUsage_Dust(CDOTA_Bot_AbilityUsage_Dust &);
	CDOTA_Bot_AbilityUsage_Dust(const CDOTA_Bot_AbilityUsage_Dust &);
	CDOTA_Bot_AbilityUsage_Dust(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Dust();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
