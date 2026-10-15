// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_tango.h:15
class CDOTA_Bot_AbilityUsage_Tango : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	int m_iTree;  // +0x20
	CDOTA_Bot_AbilityUsage_Tango(CDOTA_Bot_AbilityUsage_Tango &);
	CDOTA_Bot_AbilityUsage_Tango(const CDOTA_Bot_AbilityUsage_Tango &);
	CDOTA_Bot_AbilityUsage_Tango(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Tango();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
