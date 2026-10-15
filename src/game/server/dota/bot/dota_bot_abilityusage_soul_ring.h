// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_soul_ring.h:15
class CDOTA_Bot_AbilityUsage_SoulRing : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	int m_iHealthLoss;  // +0x20
	int m_iManaGain;  // +0x24
	CDOTA_Bot_AbilityUsage_SoulRing(CDOTA_Bot_AbilityUsage_SoulRing &);
	CDOTA_Bot_AbilityUsage_SoulRing(const CDOTA_Bot_AbilityUsage_SoulRing &);
	CDOTA_Bot_AbilityUsage_SoulRing(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_SoulRing();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
