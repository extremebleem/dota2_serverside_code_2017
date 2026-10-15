// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_blink_dagger.h:15
class CDOTA_Bot_AbilityUsage_BlinkDagger : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	int m_iBlinkWaypoint;  // +0x20
	int m_iBlinkRange;  // +0x24
	CDOTA_Bot_AbilityUsage_BlinkDagger(CDOTA_Bot_AbilityUsage_BlinkDagger &);
	CDOTA_Bot_AbilityUsage_BlinkDagger(const CDOTA_Bot_AbilityUsage_BlinkDagger &);
	CDOTA_Bot_AbilityUsage_BlinkDagger(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_BlinkDagger();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 56
};
