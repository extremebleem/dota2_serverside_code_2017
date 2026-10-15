// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage_teleport_scroll.h:15
class CDOTA_Bot_AbilityUsage_TeleportScroll : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> {
public:

private:

	CDOTA_Bot_AbilityUsage_TeleportScroll(CDOTA_Bot_AbilityUsage_TeleportScroll &);
	CDOTA_Bot_AbilityUsage_TeleportScroll(const CDOTA_Bot_AbilityUsage_TeleportScroll &);
	CDOTA_Bot_AbilityUsage_TeleportScroll(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	CDOTA_BaseNPC * FindTeleportTarget(const Vector &, float);
	virtual ~CDOTA_Bot_AbilityUsage_TeleportScroll();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};
