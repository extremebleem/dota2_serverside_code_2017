// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_abyssal_blade.h:15
class CDOTA_Bot_AbilityUsage_AbyssalBlade : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	EHANDLE m_hTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_AbyssalBlade(CDOTA_Bot_AbilityUsage_AbyssalBlade &);
	CDOTA_Bot_AbilityUsage_AbyssalBlade(const CDOTA_Bot_AbilityUsage_AbyssalBlade &);
	CDOTA_Bot_AbilityUsage_AbyssalBlade(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_AbyssalBlade();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
