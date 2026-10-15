// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_luna.h:18
class CDOTA_Bot_Hero_Luna : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Luna(CDOTA_Bot_Hero_Luna &);
	CDOTA_Bot_Hero_Luna(CDOTA_Bot_Hero_Luna &);
	CDOTA_Bot_Hero_Luna(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual float GetAggressionFactor();
	virtual ~CDOTA_Bot_Hero_Luna();

	// vtable[5] GetAggressionFactor
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_luna.h:35
class CDOTA_Bot_AbilityUsage_Luna_LucentBeam : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Luna> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Luna_LucentBeam(CDOTA_Bot_AbilityUsage_Luna_LucentBeam &);
	CDOTA_Bot_AbilityUsage_Luna_LucentBeam(const CDOTA_Bot_AbilityUsage_Luna_LucentBeam &);
	CDOTA_Bot_AbilityUsage_Luna_LucentBeam(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Luna_LucentBeam();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_luna.h:52
class CDOTA_Bot_AbilityUsage_Luna_Eclipse : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Luna> {
public:

private:

	EHANDLE m_hTargetUnit;  // +0x20
	CDOTA_Bot_AbilityUsage_Luna_Eclipse(CDOTA_Bot_AbilityUsage_Luna_Eclipse &);
	CDOTA_Bot_AbilityUsage_Luna_Eclipse(const CDOTA_Bot_AbilityUsage_Luna_Eclipse &);
	CDOTA_Bot_AbilityUsage_Luna_Eclipse(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	int GetLocationScore(const Vector &);
	virtual ~CDOTA_Bot_AbilityUsage_Luna_Eclipse();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};
