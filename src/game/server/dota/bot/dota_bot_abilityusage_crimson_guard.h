// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_crimson_guard.h:15
class CDOTA_Bot_AbilityUsage_CrimsonGuard : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	int m_iRadius;  // +0x20
	CDOTA_Bot_AbilityUsage_CrimsonGuard(CDOTA_Bot_AbilityUsage_CrimsonGuard &);
	CDOTA_Bot_AbilityUsage_CrimsonGuard(const CDOTA_Bot_AbilityUsage_CrimsonGuard &);
	CDOTA_Bot_AbilityUsage_CrimsonGuard(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_CrimsonGuard();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
