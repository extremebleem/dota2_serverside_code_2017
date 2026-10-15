// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot_abilityusage.h:77
class CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> : public CDOTA_Bot_AbilityUsage {
public:

private:

	CDOTA_Bot_AbilityUsageSpecific(CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> &);
	CDOTA_Bot_AbilityUsageSpecific(const CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot> &);
	CDOTA_Bot_AbilityUsageSpecific(CDOTA_Bot *, CDOTABaseAbility *);
	CDOTA_Bot * GetBot();
	CDOTA_BaseNPC * GetUnit();
	CDOTA_TeamCommander * GetTeamCommander();
	CDOTA_TeamCommander * GetOpposingTeamCommander();
	int GetGenericStunDesire(bool, EHANDLE *, float);
	virtual ~CDOTA_Bot_AbilityUsageSpecific();

	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_abilityusage.h:77
class CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Brewmaster> : public CDOTA_Bot_AbilityUsage {
public:

private:

	CDOTA_Bot_AbilityUsageSpecific(CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Brewmaster> &);
	CDOTA_Bot_AbilityUsageSpecific(const CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Brewmaster> &);
	CDOTA_Bot_AbilityUsageSpecific(CDOTA_Bot *, CDOTABaseAbility *);
	CDOTA_Bot_Hero_Brewmaster * GetBot();
	CDOTA_BaseNPC * GetUnit();
	CDOTA_TeamCommander * GetTeamCommander();
	CDOTA_TeamCommander * GetOpposingTeamCommander();
	int GetGenericStunDesire(bool, EHANDLE *, float);
	virtual ~CDOTA_Bot_AbilityUsageSpecific();

	// sizeof = 32
};

// src/game/server/dota/bot/dota_bot_abilityusage.h:77
class CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_BountyHunter> : public CDOTA_Bot_AbilityUsage {
public:

private:

	CDOTA_Bot_AbilityUsageSpecific(CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_BountyHunter> &);
	CDOTA_Bot_AbilityUsageSpecific(const CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_BountyHunter> &);
	CDOTA_Bot_AbilityUsageSpecific(CDOTA_Bot *, CDOTABaseAbility *);
	CDOTA_Bot_Hero_BountyHunter * GetBot();
	CDOTA_BaseNPC * GetUnit();
	CDOTA_TeamCommander * GetTeamCommander();
	CDOTA_TeamCommander * GetOpposingTeamCommander();
	int GetGenericStunDesire(bool, EHANDLE *, float);
	virtual ~CDOTA_Bot_AbilityUsageSpecific();

	// sizeof = 32
};

// CDOTA_Bot_AbilityUsageSpecific: 48 more instantiations (full list in INDEX.tsv)
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bloodseeker>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Beastmaster>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Batrider>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bane>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Axe>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Antimage>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_AncientApparition>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Alchemist>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Drow>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DragonKnight>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_DeathProphet>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Dazzle>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_CrystalMaiden>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Clinkz>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Chen>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_ChaosKnight>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Broodmother>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Bristleback>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Necrolyte>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Luna>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lina>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lich>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Kunkka>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Keeper_Of_The_Light>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Juggernaut>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Jakiro>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Earthshaker>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkywrathMage>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SkeletonKing>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_SandKing>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Riki>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Razor>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Pudge>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_PhantomAssassin>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Oracle>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Omniknight>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Nevermore>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_WitchDoctor>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Windrunner>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Warlock>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Viper>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_VengefulSpirit>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tiny>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Tidehunter>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sven>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Sniper>
//   CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Zuus>
