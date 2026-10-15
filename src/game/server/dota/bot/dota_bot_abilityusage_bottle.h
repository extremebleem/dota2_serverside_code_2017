// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_bottle.h:15
class CDOTA_Bot_AbilityUsage_Bottle : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

	CDOTA_Bot_AbilityUsage_Bottle(CDOTA_Bot_AbilityUsage_Bottle &);
	CDOTA_Bot_AbilityUsage_Bottle(const CDOTA_Bot_AbilityUsage_Bottle &);
	CDOTA_Bot_AbilityUsage_Bottle(CDOTA_Bot *, CDOTABaseAbility *);
	virtual bool ClearsIllusionState();
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Bottle();

	// vtable[4] ClearsIllusionState
	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
