// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_sheepstick.h:15
class CDOTA_Bot_AbilityUsage_Sheepstick : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	EHANDLE m_hTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Sheepstick(CDOTA_Bot_AbilityUsage_Sheepstick &);
	CDOTA_Bot_AbilityUsage_Sheepstick(const CDOTA_Bot_AbilityUsage_Sheepstick &);
	CDOTA_Bot_AbilityUsage_Sheepstick(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Sheepstick();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
