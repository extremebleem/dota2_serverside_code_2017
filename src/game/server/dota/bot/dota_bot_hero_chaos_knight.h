// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_chaos_knight.h:17
class CDOTA_Bot_Hero_ChaosKnight : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_ChaosKnight(CDOTA_Bot_Hero_ChaosKnight &);
	CDOTA_Bot_Hero_ChaosKnight(CDOTA_Bot_Hero_ChaosKnight &);
	CDOTA_Bot_Hero_ChaosKnight(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot_Hero_ChaosKnight();

	// sizeof = 34504
};

// src/game/server/dota/bot/dota_bot_hero_chaos_knight.h:31
class CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_ChaosKnight> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt(CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt &);
	CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt(const CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt &);
	CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_chaos_knight.h:48
class CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_ChaosKnight> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift(CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift &);
	CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift(const CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift &);
	CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_chaos_knight.h:65
class CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_ChaosKnight> {
public:

	CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm(CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm &);
	CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm(const CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm &);
	CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_ChaosKnight_Phantasm();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
