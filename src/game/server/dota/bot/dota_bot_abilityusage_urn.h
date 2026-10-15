// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_urn.h:15
class CDOTA_Bot_AbilityUsage_Urn : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	int m_iHeal;  // +0x20
	int m_iDamage;  // +0x24
	EHANDLE m_hTarget;  // +0x28
	CDOTA_Bot_AbilityUsage_Urn(CDOTA_Bot_AbilityUsage_Urn &);
	CDOTA_Bot_AbilityUsage_Urn(const CDOTA_Bot_AbilityUsage_Urn &);
	CDOTA_Bot_AbilityUsage_Urn(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Urn();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};
