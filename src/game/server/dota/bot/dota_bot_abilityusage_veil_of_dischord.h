// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_veil_of_dischord.h:15
class CDOTA_Bot_AbilityUsage_VeilOfDischord : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	CDOTA_Bot_AbilityUsage_VeilOfDischord(CDOTA_Bot_AbilityUsage_VeilOfDischord &);
	CDOTA_Bot_AbilityUsage_VeilOfDischord(const CDOTA_Bot_AbilityUsage_VeilOfDischord &);
	CDOTA_Bot_AbilityUsage_VeilOfDischord(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	virtual ~CDOTA_Bot_AbilityUsage_VeilOfDischord();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};
