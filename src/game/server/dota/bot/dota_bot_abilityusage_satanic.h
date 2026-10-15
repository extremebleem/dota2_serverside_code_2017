// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_satanic.h:15
class CDOTA_Bot_AbilityUsage_Satanic : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

	CDOTA_Bot_AbilityUsage_Satanic(CDOTA_Bot_AbilityUsage_Satanic &);
	CDOTA_Bot_AbilityUsage_Satanic(const CDOTA_Bot_AbilityUsage_Satanic &);
	CDOTA_Bot_AbilityUsage_Satanic(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Satanic();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
