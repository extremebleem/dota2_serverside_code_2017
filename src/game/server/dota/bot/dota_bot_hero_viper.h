// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_hero_viper.h:18
class CDOTA_Bot_Hero_Viper : public CDOTA_Bot {
public:

	CDOTA_Bot_Hero_Viper(CDOTA_Bot_Hero_Viper &);
	CDOTA_Bot_Hero_Viper(CDOTA_Bot_Hero_Viper &);
	CDOTA_Bot_Hero_Viper(CDOTAPlayer *, CDOTA_BaseNPC *, CDOTA_TeamCommander *);
	virtual CDOTABaseAbility * GetAggroFreeAttackAbility();
	virtual ~CDOTA_Bot_Hero_Viper();

	// vtable[11] GetAggroFreeAttackAbility
	// sizeof = 34504
};

// src/game/server/dota/bot/dota_bot_hero_viper.h:34
class CDOTA_Bot_AbilityUsage_Viper_PoisonAttack : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Viper> {
public:

	CDOTA_Bot_AbilityUsage_Viper_PoisonAttack(CDOTA_Bot_AbilityUsage_Viper_PoisonAttack &);
	CDOTA_Bot_AbilityUsage_Viper_PoisonAttack(const CDOTA_Bot_AbilityUsage_Viper_PoisonAttack &);
	CDOTA_Bot_AbilityUsage_Viper_PoisonAttack(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Viper_PoisonAttack();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_hero_viper.h:47
class CDOTA_Bot_AbilityUsage_Viper_ViperStrike : public CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Viper> {
public:

private:

	EHANDLE m_hDesiredTarget;  // +0x20
	CDOTA_Bot_AbilityUsage_Viper_ViperStrike(CDOTA_Bot_AbilityUsage_Viper_ViperStrike &);
	CDOTA_Bot_AbilityUsage_Viper_ViperStrike(const CDOTA_Bot_AbilityUsage_Viper_ViperStrike &);
	CDOTA_Bot_AbilityUsage_Viper_ViperStrike(CDOTA_Bot *, CDOTABaseAbility *);
	virtual int GetCurrentUsageDesire();
	virtual void UseAbility();
	virtual ~CDOTA_Bot_AbilityUsage_Viper_ViperStrike();

	// vtable[5] GetCurrentUsageDesire
	// vtable[6] UseAbility
	// sizeof = 40
};
