// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_travel_boots.h:15
class CDOTA_Bot_AbilityUsage_TravelBoots : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	CDOTA_Bot_AbilityUsage_TravelBoots(CDOTA_Bot_AbilityUsage_TravelBoots &);
	CDOTA_Bot_AbilityUsage_TravelBoots(const CDOTA_Bot_AbilityUsage_TravelBoots &);
	CDOTA_Bot_AbilityUsage_TravelBoots(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_TravelBoots();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};
