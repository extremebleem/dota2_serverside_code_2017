// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_blade_mail.h:15
class CDOTA_Bot_AbilityUsage_BladeMail : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

	CDOTA_Bot_AbilityUsage_BladeMail(CDOTA_Bot_AbilityUsage_BladeMail &);
	CDOTA_Bot_AbilityUsage_BladeMail(const CDOTA_Bot_AbilityUsage_BladeMail &);
	CDOTA_Bot_AbilityUsage_BladeMail(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_BladeMail();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
