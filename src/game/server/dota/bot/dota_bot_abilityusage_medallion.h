// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_medallion.h:15
class CDOTA_Bot_AbilityUsage_MedallionOfCourage : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	EHANDLE m_hTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_MedallionOfCourage(CDOTA_Bot_AbilityUsage_MedallionOfCourage &);
	CDOTA_Bot_AbilityUsage_MedallionOfCourage(const CDOTA_Bot_AbilityUsage_MedallionOfCourage &);
	CDOTA_Bot_AbilityUsage_MedallionOfCourage(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_MedallionOfCourage();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
