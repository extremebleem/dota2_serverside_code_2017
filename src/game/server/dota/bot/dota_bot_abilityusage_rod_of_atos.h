// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_rod_of_atos.h:15
class CDOTA_Bot_AbilityUsage_RodOfAtos : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	EHANDLE m_hTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_RodOfAtos(CDOTA_Bot_AbilityUsage_RodOfAtos &);
	CDOTA_Bot_AbilityUsage_RodOfAtos(const CDOTA_Bot_AbilityUsage_RodOfAtos &);
	CDOTA_Bot_AbilityUsage_RodOfAtos(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_RodOfAtos();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
