// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_force_staff.h:15
class CDOTA_Bot_AbilityUsage_ForceStaff : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	int m_iPushLength;  // +0x20
	EHANDLE m_hTarget;  // +0x24
	CDOTA_Bot_AbilityUsage_ForceStaff(CDOTA_Bot_AbilityUsage_ForceStaff &);
	CDOTA_Bot_AbilityUsage_ForceStaff(const CDOTA_Bot_AbilityUsage_ForceStaff &);
	CDOTA_Bot_AbilityUsage_ForceStaff(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_ForceStaff();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
