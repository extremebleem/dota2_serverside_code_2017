// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_dragon_knight.h:17
class CDOTA_Bot_Hero_DragonKnight : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_DragonKnight(CDOTA_Bot_Hero_DragonKnight &);
	CDOTA_Bot_Hero_DragonKnight(CDOTA_Bot_Hero_DragonKnight &);
	CDOTA_Bot_Hero_DragonKnight(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual float GetAggressionFactor();
	virtual ~CDOTA_Bot_Hero_DragonKnight();

	// vtable[5] GetAggressionFactor
	// sizeof = 34504
};

// src/game/server/dota/bot/dota_bot_hero_dragon_knight.h:33
class CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DragonKnight> {
public:

private:

	CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire(CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire &);
	CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire(const CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire &);
	CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	virtual ~CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_dragon_knight.h:52
class CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DragonKnight> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail(CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail &);
	CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail(const CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail &);
	CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_dragon_knight.h:69
class CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DragonKnight> {
public:

	CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm(CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm &);
	CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm(const CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm &);
	CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_dragon_knight.h:86
class CDOTA_TutorialBot_Hero_DragonKnight : public CDOTA_Bot_Hero_DragonKnight {
public:

private:

	bool m_bHasSeenEnemy;  // +0x86c8
	CDOTA_TutorialBot_Hero_DragonKnight(CDOTA_TutorialBot_Hero_DragonKnight &);
	CDOTA_TutorialBot_Hero_DragonKnight(CDOTA_TutorialBot_Hero_DragonKnight &);
	CDOTA_TutorialBot_Hero_DragonKnight(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual bool IsTutorial();
	virtual void Think();
	virtual ~CDOTA_TutorialBot_Hero_DragonKnight();

	// vtable[27] IsTutorial
	// vtable[3] Think
	// sizeof = 34512
};
