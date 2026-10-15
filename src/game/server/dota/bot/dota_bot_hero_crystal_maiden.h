// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_crystal_maiden.h:17
class CDOTA_Bot_Hero_CrystalMaiden : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_CrystalMaiden(CDOTA_Bot_Hero_CrystalMaiden &);
	CDOTA_Bot_Hero_CrystalMaiden(CDOTA_Bot_Hero_CrystalMaiden &);
	CDOTA_Bot_Hero_CrystalMaiden(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTA_BotMode * CreateMode(int);
	virtual int GetMaxRoamDistance();
	virtual ~CDOTA_Bot_Hero_CrystalMaiden();

	// vtable[12] CreateMode
	// vtable[19] GetMaxRoamDistance
	// sizeof = 34512
};

// src/game/server/dota/bot/dota_bot_hero_crystal_maiden.h:36
class CDOTA_BotMode_Attack_CrystalMaiden : public CDOTA_BotMode_Attack {
public:

	CDOTA_BotMode_Attack_CrystalMaiden(CDOTA_BotMode_Attack_CrystalMaiden &);
	CDOTA_BotMode_Attack_CrystalMaiden(const CDOTA_BotMode_Attack_CrystalMaiden &);
	CDOTA_BotMode_Attack_CrystalMaiden(CDOTA_Bot *);
	virtual float GetDesire();
	virtual ~CDOTA_BotMode_Attack_CrystalMaiden();

	// vtable[10] GetDesire
	// sizeof = 232
};

// src/game/server/dota/bot/dota_bot_hero_crystal_maiden.h:47
class CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_CrystalMaiden> {
public:

private:

	CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova(CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova &);
	CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova(const CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova &);
	CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual bool FindFilter(EHANDLE);
	virtual ~CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// vtable[7] FindFilter
	// sizeof = 48
};

// src/game/server/dota/bot/dota_bot_hero_crystal_maiden.h:66
class CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_CrystalMaiden> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite(CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite &);
	CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite(const CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite &);
	CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};

// src/game/server/dota/bot/dota_bot_hero_crystal_maiden.h:83
class CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_CrystalMaiden> {
public:

	CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField(CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField &);
	CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField(const CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField &);
	CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};
