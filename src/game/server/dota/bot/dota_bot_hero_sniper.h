// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_sniper.h:18
class CDOTA_Bot_Hero_Sniper : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Sniper(CDOTA_Bot_Hero_Sniper &);
	CDOTA_Bot_Hero_Sniper(CDOTA_Bot_Hero_Sniper &);
	CDOTA_Bot_Hero_Sniper(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual int GetMaxRoamDistance();
	virtual ~CDOTA_Bot_Hero_Sniper();

	// vtable[19] GetMaxRoamDistance
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_sniper.h:35
class CDOTA_Bot_AbilityUsage_Sniper_Shrapnel : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sniper> {
public:

private:

	float m_flLastUsage;  // +0x2c
	CDOTA_Bot_AbilityUsage_Sniper_Shrapnel(CDOTA_Bot_AbilityUsage_Sniper_Shrapnel &);
	CDOTA_Bot_AbilityUsage_Sniper_Shrapnel(const CDOTA_Bot_AbilityUsage_Sniper_Shrapnel &);
	CDOTA_Bot_AbilityUsage_Sniper_Shrapnel(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Sniper_Shrapnel();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_sniper.h:53
class CDOTA_Bot_AbilityUsage_Sniper_Assassinate : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sniper> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Sniper_Assassinate(CDOTA_Bot_AbilityUsage_Sniper_Assassinate &);
	CDOTA_Bot_AbilityUsage_Sniper_Assassinate(const CDOTA_Bot_AbilityUsage_Sniper_Assassinate &);
	CDOTA_Bot_AbilityUsage_Sniper_Assassinate(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Sniper_Assassinate();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
