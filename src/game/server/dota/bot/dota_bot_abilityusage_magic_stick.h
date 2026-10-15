// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_magic_stick.h:15
class CDOTA_Bot_AbilityUsage_MagicStick : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

	CDOTA_Bot_AbilityUsage_MagicStick(CDOTA_Bot_AbilityUsage_MagicStick &);
	CDOTA_Bot_AbilityUsage_MagicStick(const CDOTA_Bot_AbilityUsage_MagicStick &);
	CDOTA_Bot_AbilityUsage_MagicStick(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_MagicStick();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
