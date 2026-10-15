// Reconstructed from DWARF by pahole; not original source.

// src/game/server/gameinterface.h:27
class CSource2GameClients : public CGameAppSystem<ISource2GameClients, 0> {
public:

	CSource2GameClients(CSource2GameClients &);
	CSource2GameClients(const CSource2GameClients &);
	CSource2GameClients();
	virtual bool ClientConnect(CEntityIndex, uint64, const char *, const char *, char *, int);
	virtual void OnClientConnected(CEntityIndex, int, const char *, uint64, const char *, const char *, bool);
	virtual void ClientActive(CEntityIndex, bool, bool);
	virtual void ClientDisconnect(CEntityIndex, int, ENetworkDisconnectionReason, const char *, uint64, const char *);
	virtual void ClientPutInServer(CEntityIndex, const char *, bool);
	virtual void ClientFullyConnect(CEntityIndex, CPlayerSlot);
	virtual void ClientCommand(CEntityIndex, const CCommand &);
	virtual void ClientSettingsChanged(CEntityIndex);
	virtual void ClientSetupVisibility(CEntityIndex, CEntityIndex, vis_info_t *);
	virtual void ProcessUsercmds(CEntityIndex, bf_read *, int, int, int, bool, bool);
	virtual void PostClientMessagesSent_DEPRECIATED();
	virtual void SetCommandClient(CPlayerSlot);
	virtual bool IsPlayerAlive(CEntityIndex);
	virtual int GetPlayerScore(CEntityIndex);
	virtual void ClientEarPosition(CEntityIndex, Vector *);
	virtual void GetBugReportInfo(char *, int);
	virtual void ClientVoice(CEntityIndex);
	virtual void NetworkIDValidated(const char *, const char *);
	virtual void ClientCommandKeyValues(CEntityIndex, KeyValues *);
	virtual bool ClientCanPause(CEntityIndex);
	virtual void HLTVClientFullyConnect(int, const CSteamID &);
	virtual bool CanHLTVClientConnect(int, const CSteamID &, ENetworkDisconnectionReason *);
	virtual void StartHLTVServer(CEntityIndex);
	virtual void SendHLTVStatusMessage(IHLTVServer *, bool, bool, const char *, int, int, int);
	virtual IHLTVDirector * GetHLTVDirector();
	~CSource2GameClients();

	// vtable[11] ClientConnect
	// vtable[12] OnClientConnected
	// vtable[14] ClientActive
	// vtable[16] ClientDisconnect
	// vtable[13] ClientPutInServer
	// vtable[15] ClientFullyConnect
	// vtable[18] ClientCommand
	// vtable[19] ClientSettingsChanged
	// vtable[20] ClientSetupVisibility
	// vtable[21] ProcessUsercmds
	// vtable[22] PostClientMessagesSent_DEPRECIATED
	// vtable[17] SetCommandClient
	// vtable[23] IsPlayerAlive
	// vtable[24] GetPlayerScore
	// vtable[25] ClientEarPosition
	// vtable[26] GetBugReportInfo
	// vtable[27] ClientVoice
	// vtable[28] NetworkIDValidated
	// vtable[29] ClientCommandKeyValues
	// vtable[30] ClientCanPause
	// vtable[31] HLTVClientFullyConnect
	// vtable[32] CanHLTVClientConnect
	// vtable[33] StartHLTVServer
	// vtable[34] SendHLTVStatusMessage
	// vtable[35] GetHLTVDirector
	// sizeof = 40
};

// src/game/server/gameinterface.h:76
class CSource2Server : public CGameAppSystem<ISource2Server, 0>, public IStreamEntitiesFromFileCompletion {
public:

	CreateInterfaceFn m_appSystemFactory;  // +0x30
	float m_fAutoSaveDangerousTime;  // +0x38
	float m_fAutoSaveDangerousMinHealthToCommit;  // +0x3c
	bool m_bIsHibernating;  // +0x40

	CSource2Server(CSource2Server &);
	CSource2Server(const CSource2Server &);
	CSource2Server();
	virtual bool Connect(CreateInterfaceFn);
	virtual void Disconnect();
	virtual const AppSystemInfo_t * GetDependencies();
	virtual void * QueryInterface(const char *);
	virtual InitReturnVal_t Init();
	virtual void Shutdown();
	void OnSaveSessionPersisters();
	void OnLoadSessionPersisters();
	virtual void WriteSignonMessages(bf_write &);
	virtual void GameFrame(bool, bool, bool);
	virtual void PreWorldUpdate(bool);
	virtual ServerClass * GetAllServerClasses();
	virtual void GameCreateNetworkStringTables();
	virtual void ExtractResourcesFromSaveGame(CCompressedResourceManifest *, ILoadingSpawnGroup *);
	virtual void AppendTransitionResources(CCompressedResourceManifest *, ILoadingSpawnGroup *);
	virtual bool SaveGame_CalcFileName(const char *, char *, int);
	virtual void ClearInstancedBaselineFromServerClasses();
	virtual void ClearSaveDirectory();
	virtual void GetLevelsFromSaveFile(const char *, CUtlVector<CCreateGameServerLoadInfo, CUtlMemory<CCreateGameServerLoadInfo, int> > &, bool, SaveFileLevelsType_t);
	virtual void PreSaveGameLoaded(const char *, bool);
	virtual bool ShouldHideFromMasterServer(bool);
	virtual void ApplyGameSettings(KeyValues *);
	virtual void GetMatchmakingTags(char *, size_t);
	virtual void ServerHibernationUpdate(bool);
	virtual IServerGCLobby * GetServerGCLobby();
	virtual void PrintStatus(CEntityIndex, CUtlString *);
	virtual uint32 GetServerGameDLLFlags();
	virtual void GetMatchmakingGameData(char *, size_t);
	virtual bool ShouldTimeoutClient(int, float);
	virtual void GetTaggedConVarList(KeyValues *);
	virtual const CUtlMap<int, Entity2Networkable_t, short unsigned int, bool (*)(int const&, int const&)> & GetEntity2Networkables();
	virtual bool GetEntity2Networkable(CEntityIndex, Entity2Networkable_t &);
	virtual void SetGlobals(CGlobalVars *);
	virtual const char * GetActiveWorldName();
	virtual bool IsPaused();
	virtual bool GetNavMeshData(CNavData *);
	virtual void SetNavMeshData(const CNavData &);
	virtual bool RegisterNavListener(INavListener *);
	virtual void UnregisterNavListener(INavListener *);
	virtual ISpawnDebugInterface * GetSpawnDebugInterface();
	virtual void FilterPlayerCounts(int *, int *, int *);
	void LoadMessageOfTheDay();
	virtual void GetAnimationActivityList(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual void GetAnimationEventList(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual void PreFatalShutdown();
	virtual void GameServerSteamAPIActivated();
	virtual void GameServerSteamAPIDeactivated();
	virtual void OnHostNameChanged(const char *);
	void WriteNetDebugInfo();
	void SampleNetDebugInfo();
	virtual void UpdateWhenNotInGame(float);
	virtual void GetEconItemNamesForModel(const char *, bool, bool, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual void GetEconItemNamesForCharacter(const char *, bool, bool, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual void GetEconItemsInfoForModel(const char *, const char *, bool, bool, bool, CUtlVector<EconItemInfo_t, CUtlMemory<EconItemInfo_t, int> > &);
	virtual void GetEconItemsInfoForCharacter(const char *, const char *, bool, bool, bool, CUtlVector<EconItemInfo_t, CUtlMemory<EconItemInfo_t, int> > &);
	virtual int GetEconLoadoutSlotType(const char *);
	virtual float GetDefaultScaleForModel(const char *, bool);
	virtual float GetDefaultScaleForCharacter(const char *, bool);
	virtual bool GetDefaultControlPointAutoUpdates(const char *, CUtlVector<EconControlPointInfo_t, CUtlMemory<EconControlPointInfo_t, int> > &);
	virtual void GetCharacterNameForModel(const char *, bool, char *, int);
	virtual bool GetModelNameForCharacter(const char *, int, char *, int);
	virtual void GetCharacterList(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual void GetDefaultChoreoDirForModel(const char *, char *, int);
	virtual IEconItemSystem * GetEconItemSystem();
	virtual void ServerConVarChanged(const char *, const char *);
	virtual void OnStreamEntitiesFromFileCompleted(CUtlVector<CEntityHandle, CUtlMemory<CEntityHandle, int> > &);

private:

	KeyValues * FindUnitDataByModelNameCheckModelModifiers(const char *, bool, const CEconItemDefinition * *, bool *);
	~CSource2Server();

	// vtable[0] Connect
	// vtable[1] Disconnect
	// vtable[6] GetDependencies
	// vtable[2] QueryInterface
	// vtable[3] Init
	// vtable[4] Shutdown
	// vtable[13] WriteSignonMessages
	// vtable[21] GameFrame
	// vtable[14] PreWorldUpdate
	// vtable[32] GetAllServerClasses
	// vtable[12] GameCreateNetworkStringTables
	// vtable[62] ExtractResourcesFromSaveGame
	// vtable[63] AppendTransitionResources
	// vtable[64] SaveGame_CalcFileName
	// vtable[17] ClearInstancedBaselineFromServerClasses
	// vtable[19] ClearSaveDirectory
	// vtable[18] GetLevelsFromSaveFile
	// vtable[22] PreSaveGameLoaded
	// vtable[23] ShouldHideFromMasterServer
	// vtable[20] ApplyGameSettings
	// vtable[24] GetMatchmakingTags
	// vtable[25] ServerHibernationUpdate
	// vtable[26] GetServerGCLobby
	// vtable[29] PrintStatus
	// vtable[30] GetServerGameDLLFlags
	// vtable[27] GetMatchmakingGameData
	// vtable[28] ShouldTimeoutClient
	// vtable[31] GetTaggedConVarList
	// vtable[15] GetEntity2Networkables
	// vtable[16] GetEntity2Networkable
	// vtable[11] SetGlobals
	// vtable[33] GetActiveWorldName
	// vtable[34] IsPaused
	// vtable[35] GetNavMeshData
	// vtable[36] SetNavMeshData
	// vtable[37] RegisterNavListener
	// vtable[38] UnregisterNavListener
	// vtable[39] GetSpawnDebugInterface
	// vtable[42] FilterPlayerCounts
	// vtable[40] GetAnimationActivityList
	// vtable[41] GetAnimationEventList
	// vtable[46] PreFatalShutdown
	// vtable[43] GameServerSteamAPIActivated
	// vtable[44] GameServerSteamAPIDeactivated
	// vtable[45] OnHostNameChanged
	// vtable[47] UpdateWhenNotInGame
	// vtable[48] GetEconItemNamesForModel
	// vtable[49] GetEconItemNamesForCharacter
	// vtable[50] GetEconItemsInfoForModel
	// vtable[51] GetEconItemsInfoForCharacter
	// vtable[52] GetEconLoadoutSlotType
	// vtable[53] GetDefaultScaleForModel
	// vtable[54] GetDefaultScaleForCharacter
	// vtable[55] GetDefaultControlPointAutoUpdates
	// vtable[56] GetCharacterNameForModel
	// vtable[57] GetModelNameForCharacter
	// vtable[58] GetCharacterList
	// vtable[59] GetDefaultChoreoDirForModel
	// vtable[60] GetEconItemSystem
	// vtable[61] ServerConVarChanged
	// vtable[65] OnStreamEntitiesFromFileCompleted
	// sizeof = 80
};

// src/game/server/gameinterface.h:229
class CSteam3ServerGameS1 : public CSteamGameServerAPIContext {
public:

private:

	bool m_bInitialized;  // +0x48
	CSteam3ServerGameS1();
	void Shutdown();
	bool CheckInitialized();

	// sizeof = 80
};
