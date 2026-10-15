// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gamerules.h:98
class CGameRulesProxy : public CBaseEntity {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CGameRulesProxy(CGameRulesProxy &);
	CGameRulesProxy(CGameRulesProxy &);
	CGameRulesProxy();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual int ObjectCaps();
	virtual int UpdateTransmitState();
	virtual ~CGameRulesProxy();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[19] ObjectCaps
	// vtable[64] UpdateTransmitState
	// sizeof = 776
};

// src/game/shared/gamerules.h:114
class CGameRules {
	int ()() * * _vptr.CGameRules;  // +0x0
private:

	char m_szQuestName[128];  // +0x8
	int m_nQuestPhase;  // +0x88
	CGameRules(const CGameRules &);
	CGameRules & operator=(const CGameRules &);

protected:

	virtual void PostInit();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GamePostInit(const EventGamePostInit_t &);
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void SpawnGroupPrecache(const EventSpawnGroupPrecache_t &);
	virtual void PreSpawnGroupLoad(const EventPreSpawnGroupLoad_t &);
	virtual void PostSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	virtual void PreSpawnGroupUnload(const EventPreSpawnGroupUnload_t &);
	virtual void PostSpawnGroupUnload(const EventPostSpawnGroupUnload_t &);
	virtual void ActiveSpawnGroupChanged(const EventActiveSpawnGroupChanged_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void SaveGame(const EventSaveGame_t &);
	virtual void RestoreGame(const EventRestoreGame_t &);
	virtual void BuildGameSessionManifest(const EventBuildGameSessionManifest_t &);
	virtual void FrameUpdatePreEntityThink(const EventServerPreEntityThink_t &);
	virtual void PreClientUpdate(const EventServerPreClientUpdate_t &);
	void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	CGameRules();
	virtual ~CGameRules();
	virtual bool Init();
	virtual void Shutdown();
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
	virtual bool SwitchToNextBestWeapon(CBaseCombatCharacter *, CBaseCombatWeapon *);
	virtual CBaseCombatWeapon * GetNextBestWeapon(CBaseCombatCharacter *, CBaseCombatWeapon *);
	bool ShouldCollide(int, int);
	virtual void InitializeGameSpecificCollisionGroups(IPhysIntersectionController *);
	virtual int DefaultFOV();
	virtual const CViewVectors * GetViewVectors();
	virtual float GetAmmoDamage(CBaseEntity *, CBaseEntity *, int);
	virtual float GetDamageMultiplier();
	virtual bool IsMultiplayer();
	virtual bool InRoundRestart();
	virtual void RegisterScriptFunctions();
	virtual CEntityPrivateScriptScope GetPrivateScriptScope();
	virtual void ClientCommandKeyValues(CBaseEntity *, KeyValues *);
	virtual bool CheckAchievementsEnabled(int);
	virtual void PrintStatus(CEntityIndex, CUtlString *);
	virtual void GetTaggedConVarList(KeyValues *);
	virtual void OnBeginChangeLevel(const char *);
	virtual void LevelShutdown();
	virtual void RefreshSkillData(bool);
	virtual void Think();
	virtual bool IsAllowedToSpawn(CBaseEntity *);
	virtual void EndGameFrame();
	virtual bool IsSkillLevel(int);
	virtual int GetSkillLevel();
	virtual void OnSkillLevelChanged(int);
	virtual void SetSkillLevel(int);
	virtual bool FAllowFlashlight();
	virtual bool FShouldSwitchWeapon(CBasePlayer *, CBaseCombatWeapon *);
	virtual bool IsDeathmatch();
	virtual bool IsTeamplay();
	virtual bool IsCoOp();
	virtual const char * GetGameDescription();
	virtual bool ClientConnected(CEntityIndex, const char *, const char *, char *, int);
	virtual void InitHUD(CBasePlayer *);
	virtual void ClientDisconnected(CEntityIndex, ENetworkDisconnectionReason);
	virtual bool ShouldTimeoutClient(int, float);
	virtual float FlPlayerFallDamage(CBasePlayer *);
	virtual bool FPlayerCanTakeDamage(CBasePlayer *, CBaseEntity *);
	virtual bool ShouldAutoAim(CBasePlayer *, CBaseEntity *);
	virtual float GetAutoAimScale(CBasePlayer *);
	virtual int GetAutoAimMode();
	virtual bool ShouldUseRobustRadiusDamage(CBaseEntity *);
	virtual void RadiusDamage(const CTakeDamageInfo &, const Vector &, float, int, CBaseEntity *, CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > *);
	virtual bool FlPlayerFallDeathDoesScreenFade(CBasePlayer *);
	virtual bool AllowDamage(CBaseEntity *, const CTakeDamageInfo &);
	virtual void PlayerSpawn(CBasePlayer *);
	virtual void PlayerThink(CBasePlayer *);
	virtual bool FPlayerCanRespawn(CBasePlayer *);
	virtual float FlPlayerSpawnTime(CBasePlayer *);
	virtual CBaseEntity * GetPlayerSpawnSpot(CBasePlayer *);
	virtual bool IsSpawnPointValid(CBaseEntity *, CBasePlayer *);
	virtual bool AllowAutoTargetCrosshair();
	virtual bool ClientCommand(CBaseEntity *, const CCommand &);
	virtual void ClientSettingsChanged(CBasePlayer *);
	virtual int IPointsForKill(CBasePlayer *, CBasePlayer *);
	virtual void PlayerKilled(CBasePlayer *, const CTakeDamageInfo &);
	virtual void DeathNotice(CBasePlayer *, const CTakeDamageInfo &);
	virtual const char * GetDamageCustomString(const CTakeDamageInfo &);
	virtual float AdjustPlayerDamageInflicted(float);
	virtual void AdjustPlayerDamageTaken(CTakeDamageInfo *);
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
	virtual bool CanHaveAmmo(CBaseCombatCharacter *, int);
	virtual bool CanHaveAmmo(CBaseCombatCharacter *, const char *);
	virtual void PlayerGotAmmo(CBaseCombatCharacter *, char *, int);
	virtual float GetAmmoQuantityScale(int);
	virtual void InitDefaultAIRelationships();
	virtual const char * AIClassText(int);
	virtual int NumEntityClasses();
	virtual int NumFactions();
	virtual float FlHealthChargerRechargeTime();
	virtual float FlHEVChargerRechargeTime();
	virtual int DeadPlayerWeapons(CBasePlayer *);
	virtual int DeadPlayerAmmo(CBasePlayer *);
	virtual int PlayerRelationship(CBaseEntity *, CBaseEntity *);
	virtual bool PlayerCanHearChat(CBasePlayer *, CBasePlayer *, int);
	virtual void CheckChatText(CBasePlayer *, char *);
	virtual void OnPlayerChatted(CBasePlayer *, int, const char *, const char *);
	virtual int GetTeamIndex(const char *);
	virtual const char * GetIndexedTeamName(int);
	virtual bool IsValidTeam(const char *);
	virtual void ChangePlayerTeam(CBasePlayer *, const char *, bool, bool);
	virtual const char * SetDefaultPlayerTeam(CBasePlayer *);
	virtual void UpdateClientData(CBasePlayer *);
	virtual bool PlayTextureSounds();
	virtual bool PlayFootstepSounds(CBasePlayer *);
	virtual bool AllowSoundscapes();
	virtual bool FAllowNPCs();
	virtual void EndMultiplayerGame();
	virtual void WeaponTraceEntity(CBaseEntity *, const Vector &, const Vector &, uint64, trace_t *);
	virtual void CreateStandardEntities();
	virtual void DestroyStandardEntities();
	virtual const char * GetChatPrefix(bool, CBasePlayer *);
	virtual const char * GetChatLocation(bool, CBasePlayer *);
	virtual const char * GetChatFormat(bool, CBasePlayer *, int);
	virtual bool ShouldBurningPropsEmitLight();
	virtual bool CanEntityBeUsePushed(CBaseEntity *);
	virtual void CreateCustomNetworkStringTables();
	virtual void MarkAchievement(IRecipientFilter &, const char *);
	virtual void ResetMapCycleTimeStamp();
	virtual void OnNavMeshLoad();
	virtual void UpdateGameplayStatsFromSteam();
	virtual CBaseEntity * DoFindClientInPVS(CBaseEntity *, const vis_info_t *);
	virtual void PreFatalShutdown();
	virtual const char * GetGameTypeName();
	virtual int GetGameType();
	virtual bool ForceSplitScreenPlayersOnToSameTeam();
	virtual bool IsTopDown();
	virtual const QAngle & GetTopDownMovementAxis();
	virtual int GetMaxHumanPlayers();
	virtual bool CanUnloadSpawnGroup(SpawnGroupHandle_t);
	virtual bool ShouldPlayerReceiveStringTableUserData(CEntityIndex, const INetworkStringTable *, int);
	virtual CBasePlayer * GetPlayerForActivator(CBaseEntity *);
	virtual CBaseEntity * FindEntityByUnitType(CBaseEntity *, const char *, CBaseEntity *, CBaseEntity *, CBaseEntity *);
	virtual CBaseEntity * FindEntityByUnitTypeWithin(CBaseEntity *, const char *, const Vector &, float, CBaseEntity *, CBaseEntity *, CBaseEntity *);
	virtual CBaseEntity * FindEntityByUnitTypeNearest(const char *, const Vector &, float, CBaseEntity *, CBaseEntity *, CBaseEntity *);
	void SetQuestName(const char *);
	const char * GetQuestName();
	void SetQuestPhase(int);
	int GetQuestPhase();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] PostInit
	// vtable[2] GameInit
	// vtable[3] GamePostInit
	// vtable[4] GameActivate
	// vtable[5] SpawnGroupPrecache
	// vtable[6] PreSpawnGroupLoad
	// vtable[7] PostSpawnGroupLoad
	// vtable[8] PreSpawnGroupUnload
	// vtable[9] PostSpawnGroupUnload
	// vtable[10] ActiveSpawnGroupChanged
	// vtable[11] GameDeactivate
	// vtable[12] GameShutdown
	// vtable[13] SaveGame
	// vtable[14] RestoreGame
	// vtable[15] BuildGameSessionManifest
	// vtable[16] FrameUpdatePreEntityThink
	// vtable[17] PreClientUpdate
	// vtable[20] Init
	// vtable[21] Shutdown
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
	// vtable[32] SwitchToNextBestWeapon
	// vtable[33] GetNextBestWeapon
	// vtable[34] InitializeGameSpecificCollisionGroups
	// vtable[35] DefaultFOV
	// vtable[36] GetViewVectors
	// vtable[37] GetAmmoDamage
	// vtable[38] GetDamageMultiplier
	// vtable[39] IsMultiplayer
	// vtable[40] InRoundRestart
	// vtable[41] RegisterScriptFunctions
	// vtable[42] GetPrivateScriptScope
	// vtable[43] ClientCommandKeyValues
	// vtable[44] CheckAchievementsEnabled
	// vtable[45] PrintStatus
	// vtable[46] GetTaggedConVarList
	// vtable[47] OnBeginChangeLevel
	// vtable[48] LevelShutdown
	// vtable[49] RefreshSkillData
	// vtable[50] Think
	// vtable[51] IsAllowedToSpawn
	// vtable[52] EndGameFrame
	// vtable[53] IsSkillLevel
	// vtable[54] GetSkillLevel
	// vtable[55] OnSkillLevelChanged
	// vtable[56] SetSkillLevel
	// vtable[57] FAllowFlashlight
	// vtable[58] FShouldSwitchWeapon
	// vtable[59] IsDeathmatch
	// vtable[60] IsTeamplay
	// vtable[61] IsCoOp
	// vtable[62] GetGameDescription
	// vtable[63] ClientConnected
	// vtable[64] InitHUD
	// vtable[65] ClientDisconnected
	// vtable[66] ShouldTimeoutClient
	// vtable[67] FlPlayerFallDamage
	// vtable[68] FPlayerCanTakeDamage
	// vtable[69] ShouldAutoAim
	// vtable[70] GetAutoAimScale
	// vtable[71] GetAutoAimMode
	// vtable[72] ShouldUseRobustRadiusDamage
	// vtable[73] RadiusDamage
	// vtable[74] FlPlayerFallDeathDoesScreenFade
	// vtable[75] AllowDamage
	// vtable[76] PlayerSpawn
	// vtable[77] PlayerThink
	// vtable[78] FPlayerCanRespawn
	// vtable[79] FlPlayerSpawnTime
	// vtable[80] GetPlayerSpawnSpot
	// vtable[81] IsSpawnPointValid
	// vtable[82] AllowAutoTargetCrosshair
	// vtable[83] ClientCommand
	// vtable[84] ClientSettingsChanged
	// vtable[85] IPointsForKill
	// vtable[86] PlayerKilled
	// vtable[87] DeathNotice
	// vtable[88] GetDamageCustomString
	// vtable[89] AdjustPlayerDamageInflicted
	// vtable[90] AdjustPlayerDamageTaken
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
	// vtable[102] CanHaveAmmo
	// vtable[103] CanHaveAmmo
	// vtable[104] PlayerGotAmmo
	// vtable[105] GetAmmoQuantityScale
	// vtable[106] InitDefaultAIRelationships
	// vtable[107] AIClassText
	// vtable[108] NumEntityClasses
	// vtable[109] NumFactions
	// vtable[110] FlHealthChargerRechargeTime
	// vtable[111] FlHEVChargerRechargeTime
	// vtable[112] DeadPlayerWeapons
	// vtable[113] DeadPlayerAmmo
	// vtable[114] PlayerRelationship
	// vtable[115] PlayerCanHearChat
	// vtable[116] CheckChatText
	// vtable[117] OnPlayerChatted
	// vtable[118] GetTeamIndex
	// vtable[119] GetIndexedTeamName
	// vtable[120] IsValidTeam
	// vtable[121] ChangePlayerTeam
	// vtable[122] SetDefaultPlayerTeam
	// vtable[123] UpdateClientData
	// vtable[124] PlayTextureSounds
	// vtable[125] PlayFootstepSounds
	// vtable[126] AllowSoundscapes
	// vtable[127] FAllowNPCs
	// vtable[128] EndMultiplayerGame
	// vtable[129] WeaponTraceEntity
	// vtable[130] CreateStandardEntities
	// vtable[131] DestroyStandardEntities
	// vtable[132] GetChatPrefix
	// vtable[133] GetChatLocation
	// vtable[134] GetChatFormat
	// vtable[135] ShouldBurningPropsEmitLight
	// vtable[136] CanEntityBeUsePushed
	// vtable[137] CreateCustomNetworkStringTables
	// vtable[138] MarkAchievement
	// vtable[139] ResetMapCycleTimeStamp
	// vtable[140] OnNavMeshLoad
	// vtable[141] UpdateGameplayStatsFromSteam
	// vtable[142] DoFindClientInPVS
	// vtable[143] PreFatalShutdown
	// vtable[144] GetGameTypeName
	// vtable[145] GetGameType
	// vtable[146] ForceSplitScreenPlayersOnToSameTeam
	// vtable[147] IsTopDown
	// vtable[148] GetTopDownMovementAxis
	// vtable[149] GetMaxHumanPlayers
	// vtable[150] CanUnloadSpawnGroup
	// vtable[151] ShouldPlayerReceiveStringTableUserData
	// vtable[152] GetPlayerForActivator
	// vtable[153] FindEntityByUnitType
	// vtable[154] FindEntityByUnitTypeWithin
	// vtable[155] FindEntityByUnitTypeNearest
	// sizeof = 144
};
