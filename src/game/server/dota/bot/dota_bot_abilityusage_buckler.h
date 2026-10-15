// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_buckler.h:15
class CDOTA_Bot_AbilityUsage_Buckler : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

	CDOTA_Bot_AbilityUsage_Buckler(CDOTA_Bot_AbilityUsage_Buckler &);
	CDOTA_Bot_AbilityUsage_Buckler(const CDOTA_Bot_AbilityUsage_Buckler &);
	CDOTA_Bot_AbilityUsage_Buckler(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Buckler();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
