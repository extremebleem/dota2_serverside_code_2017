// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_bloodseeker.h:17
class CDOTA_Bot_Hero_Bloodseeker : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Bloodseeker(CDOTA_Bot_Hero_Bloodseeker &);
	CDOTA_Bot_Hero_Bloodseeker(CDOTA_Bot_Hero_Bloodseeker &);
	CDOTA_Bot_Hero_Bloodseeker(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual int GetGankDistance();
	virtual float GetAggressionFactor();
	virtual int CalculateAverageLifestealValue();
	virtual ~CDOTA_Bot_Hero_Bloodseeker();

	// vtable[12] CreateMode
	// vtable[18] GetGankDistance
	// vtable[5] GetAggressionFactor
	// vtable[29] CalculateAverageLifestealValue
	// sizeof = 34504
};

// src/game/server/dota/bot/dota_bot_hero_bloodseeker.h:36
class CDOTA_BotMode_Roam_Bloodseeker : public CDOTA_BotMode_Roam {
public:

	CDOTA_BotMode_Roam_Bloodseeker(CDOTA_BotMode_Roam_Bloodseeker &);
	CDOTA_BotMode_Roam_Bloodseeker(const CDOTA_BotMode_Roam_Bloodseeker &);
	CDOTA_BotMode_Roam_Bloodseeker(CDOTA_Bot *);
	virtual float GetDesire();
	virtual ~CDOTA_BotMode_Roam_Bloodseeker();

	// vtable[10] GetDesire
	// sizeof = 264
};

// src/game/server/dota/bot/dota_bot_hero_bloodseeker.h:46
class CDOTA_BotMode_Attack_Bloodseeker : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_Bloodseeker(CDOTA_BotMode_Attack_Bloodseeker &);
	CDOTA_BotMode_Attack_Bloodseeker(const CDOTA_BotMode_Attack_Bloodseeker &);
	CDOTA_BotMode_Attack_Bloodseeker(CDOTA_Bot *);
	virtual float GetDesire();
	virtual ~CDOTA_BotMode_Attack_Bloodseeker();

	// vtable[10] GetDesire
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_bloodseeker.h:56
class CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bloodseeker> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage(CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage &);
	CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage(const CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage &);
	CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	int GetBloodrageScore(CDOTA_BaseNPC *);
	virtual ~CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_bloodseeker.h:74
class CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bloodseeker> {
public:

private:

	CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite(CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite &);
	CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite(const CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite &);
	CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_bloodseeker.h:90
class CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bloodseeker> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture(CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture &);
	CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture(const CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture &);
	CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
