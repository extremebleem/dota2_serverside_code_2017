// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_hand_of_midas.h:15
class CDOTA_Bot_AbilityUsage_HandOfMidas : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	EHANDLE m_hTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_HandOfMidas(CDOTA_Bot_AbilityUsage_HandOfMidas &);
	CDOTA_Bot_AbilityUsage_HandOfMidas(const CDOTA_Bot_AbilityUsage_HandOfMidas &);
	CDOTA_Bot_AbilityUsage_HandOfMidas(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_HandOfMidas();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
