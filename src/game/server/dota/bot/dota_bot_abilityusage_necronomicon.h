// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_necronomicon.h:15
class CDOTA_Bot_AbilityUsage_Necronomicon : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

	CDOTA_Bot_AbilityUsage_Necronomicon(CDOTA_Bot_AbilityUsage_Necronomicon &);
	CDOTA_Bot_AbilityUsage_Necronomicon(const CDOTA_Bot_AbilityUsage_Necronomicon &);
	CDOTA_Bot_AbilityUsage_Necronomicon(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Necronomicon();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
