// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_dagon.h:15
class CDOTA_Bot_AbilityUsage_Dagon : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	int m_iDamage;  // +0x20
	EHANDLE m_hTarget;  // +0x24
	CDOTA_Bot_AbilityUsage_Dagon(CDOTA_Bot_AbilityUsage_Dagon &);
	CDOTA_Bot_AbilityUsage_Dagon(const CDOTA_Bot_AbilityUsage_Dagon &);
	CDOTA_Bot_AbilityUsage_Dagon(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Dagon();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
