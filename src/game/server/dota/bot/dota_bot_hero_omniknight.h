// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_omniknight.h:18
class CDOTA_Bot_Hero_Omniknight : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Omniknight(CDOTA_Bot_Hero_Omniknight &);
	CDOTA_Bot_Hero_Omniknight(CDOTA_Bot_Hero_Omniknight &);
	CDOTA_Bot_Hero_Omniknight(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual ~CDOTA_Bot_Hero_Omniknight();

	// sizeof = 34504
};

// src/game/server/dota/bot/dota_bot_hero_omniknight.h:32
class CDOTA_Bot_AbilityUsage_Omniknight_Purification : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Omniknight> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Omniknight_Purification(CDOTA_Bot_AbilityUsage_Omniknight_Purification &);
	CDOTA_Bot_AbilityUsage_Omniknight_Purification(const CDOTA_Bot_AbilityUsage_Omniknight_Purification &);
	CDOTA_Bot_AbilityUsage_Omniknight_Purification(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Omniknight_Purification();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_omniknight.h:49
class CDOTA_Bot_AbilityUsage_Omniknight_Repel : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Omniknight> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Omniknight_Repel(CDOTA_Bot_AbilityUsage_Omniknight_Repel &);
	CDOTA_Bot_AbilityUsage_Omniknight_Repel(const CDOTA_Bot_AbilityUsage_Omniknight_Repel &);
	CDOTA_Bot_AbilityUsage_Omniknight_Repel(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Omniknight_Repel();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_omniknight.h:66
class CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Omniknight> {
public:

	CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel(CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel &);
	CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel(const CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel &);
	CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Omniknight_GuardianAngel();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
