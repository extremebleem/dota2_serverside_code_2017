// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_drow.h:16
class CDOTA_Bot_Hero_Drow : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Drow(CDOTA_Bot_Hero_Drow &);
	CDOTA_Bot_Hero_Drow(CDOTA_Bot_Hero_Drow &);
	CDOTA_Bot_Hero_Drow(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTABaseAbility * GetAggroFreeAttackAbility();
	virtual ~CDOTA_Bot_Hero_Drow();

	// vtable[11] GetAggroFreeAttackAbility
	// sizeof = 34496
};

// src/game/server/dota/bot/dota_bot_hero_drow.h:31
class CDOTA_Bot_AbilityUsage_Drow_FrostArrows : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Drow> {
public:

	CDOTA_Bot_AbilityUsage_Drow_FrostArrows(CDOTA_Bot_AbilityUsage_Drow_FrostArrows &);
	CDOTA_Bot_AbilityUsage_Drow_FrostArrows(const CDOTA_Bot_AbilityUsage_Drow_FrostArrows &);
	CDOTA_Bot_AbilityUsage_Drow_FrostArrows(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Drow_FrostArrows();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_drow.h:44
class CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Drow> {
public:

private:

	CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence(CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence &);
	CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence(const CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence &);
	CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	virtual ~CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};
