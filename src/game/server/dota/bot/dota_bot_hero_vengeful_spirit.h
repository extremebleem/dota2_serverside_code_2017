// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_vengeful_spirit.h:17
class CDOTA_Bot_Hero_VengefulSpirit : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_VengefulSpirit(CDOTA_Bot_Hero_VengefulSpirit &);
	CDOTA_Bot_Hero_VengefulSpirit(CDOTA_Bot_Hero_VengefulSpirit &);
	CDOTA_Bot_Hero_VengefulSpirit(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual int GetMaxRoamDistance();
	virtual ~CDOTA_Bot_Hero_VengefulSpirit();

	// vtable[19] GetMaxRoamDistance
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_vengeful_spirit.h:46
class CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_VengefulSpirit> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile(CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile &);
	CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile(const CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile &);
	CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_VengefulSpirit_MagicMissile();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_vengeful_spirit.h:63
class CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_VengefulSpirit> {
public:

private:

	CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror(CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror &);
	CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror(const CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror &);
	CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_VengefulSpirit_WaveOfTerror();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_vengeful_spirit.h:80
class CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_VengefulSpirit> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap(CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap &);
	CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap(const CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap &);
	CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_vengeful_spirit.h:101
class CDOTA_TutorialBot_Hero_VengefulSpirit : public CDOTA_Bot_Hero_VengefulSpirit {
public:

private:

	bool m_bHasSeenEnemy;  // +0x86d0
	CDOTA_TutorialBot_Hero_VengefulSpirit(CDOTA_TutorialBot_Hero_VengefulSpirit &);
	CDOTA_TutorialBot_Hero_VengefulSpirit(CDOTA_TutorialBot_Hero_VengefulSpirit &);
	CDOTA_TutorialBot_Hero_VengefulSpirit(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual bool IsTutorial();
	virtual void Think();
	virtual ~CDOTA_TutorialBot_Hero_VengefulSpirit();

	// vtable[27] IsTutorial
	// vtable[3] Think
	// sizeof = 34520
};
