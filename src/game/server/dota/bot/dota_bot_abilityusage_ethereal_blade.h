// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_ethereal_blade.h:15
class CDOTA_Bot_AbilityUsage_EtherealBlade : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	int m_iDamageBase;  // +0x20
	float m_fBlastAgilityMultiplier;  // +0x24
	int m_iEtherealDamageBonus;  // +0x28
	EHANDLE m_hTarget;  // +0x2c
	CDOTA_Bot_AbilityUsage_EtherealBlade(CDOTA_Bot_AbilityUsage_EtherealBlade &);
	CDOTA_Bot_AbilityUsage_EtherealBlade(const CDOTA_Bot_AbilityUsage_EtherealBlade &);
	CDOTA_Bot_AbilityUsage_EtherealBlade(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_EtherealBlade();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};
