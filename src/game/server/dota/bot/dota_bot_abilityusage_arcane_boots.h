// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_arcane_boots.h:15
class CDOTA_Bot_AbilityUsage_ArcaneBoots : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	int m_iManaAmount;  // +0x20
	int m_iRadius;  // +0x24
	CDOTA_Bot_AbilityUsage_ArcaneBoots(CDOTA_Bot_AbilityUsage_ArcaneBoots &);
	CDOTA_Bot_AbilityUsage_ArcaneBoots(const CDOTA_Bot_AbilityUsage_ArcaneBoots &);
	CDOTA_Bot_AbilityUsage_ArcaneBoots(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_ArcaneBoots();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
