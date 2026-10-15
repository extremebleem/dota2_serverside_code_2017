// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_bristleback.h:17
class CDOTA_Bot_Hero_Bristleback : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Bristleback(CDOTA_Bot_Hero_Bristleback &);
	CDOTA_Bot_Hero_Bristleback(CDOTA_Bot_Hero_Bristleback &);
	CDOTA_Bot_Hero_Bristleback(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual int GetGankDistance();
	virtual float GetAggressionFactor();
	virtual ~CDOTA_Bot_Hero_Bristleback();

	// vtable[18] GetGankDistance
	// vtable[5] GetAggressionFactor
	// sizeof = 34504
};

// src/game/server/dota/bot/dota_bot_hero_bristleback.h:34
class CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bristleback> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo(CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo &);
	CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo(const CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo &);
	CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Bristleback_ViscousNasalGoo();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_bristleback.h:50
class CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bristleback> {
public:

	CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray(CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray &);
	CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray(const CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray &);
	CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();

private:

	int CountValidTargets(const CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > &);
	virtual ~CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
