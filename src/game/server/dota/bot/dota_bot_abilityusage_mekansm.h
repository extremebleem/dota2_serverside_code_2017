// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_mekansm.h:15
class CDOTA_Bot_AbilityUsage_Mekansm : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	int m_iHealAmount;  // +0x20
	int m_iRadius;  // +0x24
	CDOTA_Bot_AbilityUsage_Mekansm(CDOTA_Bot_AbilityUsage_Mekansm &);
	CDOTA_Bot_AbilityUsage_Mekansm(const CDOTA_Bot_AbilityUsage_Mekansm &);
	CDOTA_Bot_AbilityUsage_Mekansm(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Mekansm();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
