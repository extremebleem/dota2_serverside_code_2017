// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_bane.h:17
class CDOTA_Bot_Hero_Bane : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Bane(CDOTA_Bot_Hero_Bane &);
	CDOTA_Bot_Hero_Bane(CDOTA_Bot_Hero_Bane &);
	CDOTA_Bot_Hero_Bane(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual int GetMaxRoamDistance();
	virtual ~CDOTA_Bot_Hero_Bane();

	// vtable[12] CreateMode
	// vtable[19] GetMaxRoamDistance
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_bane.h:36
class CDOTA_BotMode_Attack_Bane : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_Bane(CDOTA_BotMode_Attack_Bane &);
	CDOTA_BotMode_Attack_Bane(const CDOTA_BotMode_Attack_Bane &);
	CDOTA_BotMode_Attack_Bane(CDOTA_Bot *);
	virtual float GetDesire();
	virtual ~CDOTA_BotMode_Attack_Bane();

	// vtable[10] GetDesire
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_bane.h:47
class CDOTA_Bot_AbilityUsage_Bane_Enfeeble : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bane> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Bane_Enfeeble(CDOTA_Bot_AbilityUsage_Bane_Enfeeble &);
	CDOTA_Bot_AbilityUsage_Bane_Enfeeble(const CDOTA_Bot_AbilityUsage_Bane_Enfeeble &);
	CDOTA_Bot_AbilityUsage_Bane_Enfeeble(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Bane_Enfeeble();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_bane.h:64
class CDOTA_Bot_AbilityUsage_Bane_BrainSap : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bane> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Bane_BrainSap(CDOTA_Bot_AbilityUsage_Bane_BrainSap &);
	CDOTA_Bot_AbilityUsage_Bane_BrainSap(const CDOTA_Bot_AbilityUsage_Bane_BrainSap &);
	CDOTA_Bot_AbilityUsage_Bane_BrainSap(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Bane_BrainSap();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_bane.h:81
class CDOTA_Bot_AbilityUsage_Bane_Nightmare : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bane> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Bane_Nightmare(CDOTA_Bot_AbilityUsage_Bane_Nightmare &);
	CDOTA_Bot_AbilityUsage_Bane_Nightmare(const CDOTA_Bot_AbilityUsage_Bane_Nightmare &);
	CDOTA_Bot_AbilityUsage_Bane_Nightmare(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Bane_Nightmare();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_bane.h:98
class CDOTA_Bot_AbilityUsage_Bane_FiendsGrip : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bane> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Bane_FiendsGrip(CDOTA_Bot_AbilityUsage_Bane_FiendsGrip &);
	CDOTA_Bot_AbilityUsage_Bane_FiendsGrip(const CDOTA_Bot_AbilityUsage_Bane_FiendsGrip &);
	CDOTA_Bot_AbilityUsage_Bane_FiendsGrip(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Bane_FiendsGrip();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
