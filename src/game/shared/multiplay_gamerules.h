// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/multiplay_gamerules.h:66
class CSameTeamGroup {
	int ()() * * _vptr.CSameTeamGroup;  // +0x0
protected:

	int m_nScore;  // +0x20
	CSameTeamGroup();
	CSameTeamGroup(const CSameTeamGroup &);
	virtual void Build(CGameRules *, CBasePlayer *);
	virtual void MaybeAddPlayer(CBasePlayer *);
	CBasePlayer * GetPlayer(int);
	int Count();
	int Score();
	bool Less(const CSameTeamGroup &, const CSameTeamGroup &);

	// vtable[0] Build
	// vtable[1] MaybeAddPlayer
	// sizeof = 40
};

// src/game/shared/multiplay_gamerules.h:93
class CMultiplayRules : public CGameRules, public CMemZeroOnNew {
	struct ResponseRules_t {
		ResponseRules_t();
		~ResponseRules_t();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

protected:

	float m_flIntermissionEndTime;  // +0xa8

	static int m_nMapCycleTimeStamp;
	static int m_nMapCycleindex;
	static CUtlStringList m_MapList;
private:

	CMultiplayRules(const CMultiplayRules &);
	CMultiplayRules & operator=(const CMultiplayRules &);

	virtual bool IsMultiplayer();
	virtual bool Init();
	virtual bool Damage_IsTimeBased(int);
	virtual bool Damage_ShouldGibCorpse(int);
	virtual bool Damage_ShowOnHUD(int);
	virtual bool Damage_NoPhysicsForce(int);
	virtual bool Damage_ShouldNotBleed(int);
	virtual int Damage_GetTimeBased();
	virtual int Damage_GetShouldGibCorpse();
	virtual int Damage_GetShowOnHud();
	virtual int Damage_GetNoPhysicsForce();
	virtual int Damage_GetShouldNotBleed();
	CMultiplayRules();
	virtual ~CMultiplayRules();
	void LoadVoiceCommandScript();
	virtual void Think();
	virtual void RefreshSkillData(bool);
	virtual bool IsAllowedToSpawn(CBaseEntity *);
	virtual bool FAllowFlashlight();
	virtual bool FShouldSwitchWeapon(CBasePlayer *, CBaseCombatWeapon *);
	virtual CBaseCombatWeapon * GetNextBestWeapon(CBaseCombatCharacter *, CBaseCombatWeapon *);
	virtual bool SwitchToNextBestWeapon(CBaseCombatCharacter *, CBaseCombatWeapon *);
	virtual bool IsDeathmatch();
	virtual bool IsCoOp();
	virtual bool ClientConnected(CEntityIndex, const char *, const char *, char *, int);
	virtual void InitHUD(CBasePlayer *);
	virtual void ClientDisconnected(CEntityIndex, ENetworkDisconnectionReason);
	virtual float FlPlayerFallDamage(CBasePlayer *);
	virtual bool FPlayerCanTakeDamage(CBasePlayer *, CBaseEntity *);
	virtual bool AllowDamage(CBaseEntity *, const CTakeDamageInfo &);
	virtual void PlayerSpawn(CBasePlayer *);
	virtual void PlayerThink(CBasePlayer *);
	virtual bool FPlayerCanRespawn(CBasePlayer *);
	virtual float FlPlayerSpawnTime(CBasePlayer *);
	virtual CBaseEntity * GetPlayerSpawnSpot(CBasePlayer *);
	virtual bool AllowAutoTargetCrosshair();
	virtual int IPointsForKill(CBasePlayer *, CBasePlayer *);
	virtual void PlayerKilled(CBasePlayer *, const CTakeDamageInfo &);
	virtual void DeathNotice(CBasePlayer *, const CTakeDamageInfo &);
	CBasePlayer * GetDeathScorer(CBaseEntity *, CBaseEntity *);
	virtual CBasePlayer * GetDeathScorer(CBaseEntity *, CBaseEntity *, CBaseEntity *);
	virtual bool CanHavePlayerItem(CBasePlayer *, CBaseCombatWeapon *);
	virtual int WeaponShouldRespawn(CBaseCombatWeapon *);
	virtual float FlWeaponRespawnTime(CBaseCombatWeapon *);
	virtual float FlWeaponTryRespawn(CBaseCombatWeapon *);
	virtual Vector VecWeaponRespawnSpot(CBaseCombatWeapon *);
	virtual bool CanHaveItem(CBasePlayer *, CItem *);
	virtual void PlayerGotItem(CBasePlayer *, CItem *);
	virtual int ItemShouldRespawn(CItem *);
	virtual float FlItemRespawnTime(CItem *);
	virtual Vector VecItemRespawnSpot(CItem *);
	virtual QAngle VecItemRespawnAngles(CItem *);
	virtual void PlayerGotAmmo(CBaseCombatCharacter *, char *, int);
	virtual float FlHealthChargerRechargeTime();
	virtual float FlHEVChargerRechargeTime();
	virtual int DeadPlayerWeapons(CBasePlayer *);
	virtual int DeadPlayerAmmo(CBasePlayer *);
	virtual int PlayerRelationship(CBaseEntity *, CBaseEntity *);
	virtual bool PlayerCanHearChat(CBasePlayer *, CBasePlayer *, int);
	virtual bool PlayTextureSounds();
	virtual bool PlayFootstepSounds(CBasePlayer *);
	virtual bool FAllowNPCs();
	virtual void EndMultiplayerGame();
	virtual bool ClientCommand(CBaseEntity *, const CCommand &);
	virtual VoiceCommandMenuItem_t * VoiceCommand(CBaseMultiplayerPlayer *, int, int);
	bool IsLoadingBugBaitReport();
	virtual void ResetMapCycleTimeStamp();
	virtual void HandleTimeLimitChange();
	void IncrementMapCycleIndex();
	void HaveAllPlayersSpeakConceptIfAllowed(int);
	virtual void GetTaggedConVarList(KeyValues *);
	virtual void InitCustomResponseRulesDicts();
	virtual void ShutdownCustomResponseRulesDicts();

protected:

	virtual bool UseSuicidePenalty();
	virtual void GetNextLevelName(char *, int, bool);
	virtual void ChangeLevel();
	virtual void GoToIntermission();

	// vtable[0] Schema_DynamicBinding
	// vtable[39] IsMultiplayer
	// vtable[20] Init
	// vtable[22] Damage_IsTimeBased
	// vtable[23] Damage_ShouldGibCorpse
	// vtable[24] Damage_ShowOnHUD
	// vtable[25] Damage_NoPhysicsForce
	// vtable[26] Damage_ShouldNotBleed
	// vtable[27] Damage_GetTimeBased
	// vtable[28] Damage_GetShouldGibCorpse
	// vtable[29] Damage_GetShowOnHud
	// vtable[30] Damage_GetNoPhysicsForce
	// vtable[31] Damage_GetShouldNotBleed
	// vtable[50] Think
	// vtable[49] RefreshSkillData
	// vtable[51] IsAllowedToSpawn
	// vtable[57] FAllowFlashlight
	// vtable[58] FShouldSwitchWeapon
	// vtable[33] GetNextBestWeapon
	// vtable[32] SwitchToNextBestWeapon
	// vtable[59] IsDeathmatch
	// vtable[61] IsCoOp
	// vtable[63] ClientConnected
	// vtable[64] InitHUD
	// vtable[65] ClientDisconnected
	// vtable[67] FlPlayerFallDamage
	// vtable[68] FPlayerCanTakeDamage
	// vtable[75] AllowDamage
	// vtable[76] PlayerSpawn
	// vtable[77] PlayerThink
	// vtable[78] FPlayerCanRespawn
	// vtable[79] FlPlayerSpawnTime
	// vtable[80] GetPlayerSpawnSpot
	// vtable[82] AllowAutoTargetCrosshair
	// vtable[85] IPointsForKill
	// vtable[86] PlayerKilled
	// vtable[87] DeathNotice
	// vtable[156] GetDeathScorer
	// vtable[91] CanHavePlayerItem
	// vtable[92] WeaponShouldRespawn
	// vtable[93] FlWeaponRespawnTime
	// vtable[94] FlWeaponTryRespawn
	// vtable[95] VecWeaponRespawnSpot
	// vtable[96] CanHaveItem
	// vtable[97] PlayerGotItem
	// vtable[98] ItemShouldRespawn
	// vtable[99] FlItemRespawnTime
	// vtable[100] VecItemRespawnSpot
	// vtable[101] VecItemRespawnAngles
	// vtable[104] PlayerGotAmmo
	// vtable[110] FlHealthChargerRechargeTime
	// vtable[111] FlHEVChargerRechargeTime
	// vtable[112] DeadPlayerWeapons
	// vtable[113] DeadPlayerAmmo
	// vtable[114] PlayerRelationship
	// vtable[115] PlayerCanHearChat
	// vtable[124] PlayTextureSounds
	// vtable[125] PlayFootstepSounds
	// vtable[127] FAllowNPCs
	// vtable[128] EndMultiplayerGame
	// vtable[83] ClientCommand
	// vtable[157] VoiceCommand
	// vtable[139] ResetMapCycleTimeStamp
	// vtable[158] HandleTimeLimitChange
	// vtable[46] GetTaggedConVarList
	// vtable[159] InitCustomResponseRulesDicts
	// vtable[160] ShutdownCustomResponseRulesDicts
	// vtable[161] UseSuicidePenalty
	// vtable[162] GetNextLevelName
	// vtable[163] ChangeLevel
	// vtable[164] GoToIntermission
	// sizeof = 200
};
