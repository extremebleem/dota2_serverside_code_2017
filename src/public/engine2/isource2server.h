// Reconstructed from DWARF by pahole; not original source.

// src/public/engine2/isource2server.h:90
class CCheckTransmitInfo {
	uint8 * m_PVS;  // +0x0
	CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> > m_LoadedSpawnGroups;  // +0x18

	int m_AreasNetworked;  // +0x5c
	int m_Areas[8];  // +0x60
	bool m_bFullUpdate;  // +0x80
	CCheckTransmitInfo(uint32);
	~CCheckTransmitInfo();
	bool IsAlreadyMarkedForTransmission(CEntityIndex);

	// sizeof = 136
};

// src/public/engine2/isource2server.h:138
class CEdictChangeInfo {
	uint32 m_nChangeOffsets;  // +0xa0
	CEdictChangeInfo();

	// sizeof = 168
};

// src/public/engine2/isource2server.h:148
class CSharedEdictChangeInfo {
	short unsigned int m_iSerialNumber;  // +0x0

	short unsigned int m_nChangeInfos;  // +0x41a8
	CSharedEdictChangeInfo();

	// sizeof = 16816
};

// src/public/engine2/isource2server.h:390
class ISource2Server : public IAppSystem {
public:

	ISource2Server(ISource2Server &);
	ISource2Server(const ISource2Server &);
	ISource2Server();
	virtual void SetGlobals(CGlobalVars *);
	virtual void GameCreateNetworkStringTables();
	virtual void WriteSignonMessages(bf_write &);
	virtual void PreWorldUpdate(bool);
	virtual const CUtlMap<int, Entity2Networkable_t, short unsigned int, bool (*)(int const&, int const&)> & GetEntity2Networkables();
	virtual bool GetEntity2Networkable(CEntityIndex, Entity2Networkable_t &);
	virtual void ClearInstancedBaselineFromServerClasses();
	virtual void GetLevelsFromSaveFile(const char *, CUtlVector<CCreateGameServerLoadInfo, CUtlMemory<CCreateGameServerLoadInfo, int> > &, bool, SaveFileLevelsType_t);
	virtual void ClearSaveDirectory();
	virtual void ApplyGameSettings(KeyValues *);
	virtual void GameFrame(bool, bool, bool);
	virtual void PreSaveGameLoaded(const char *, bool);
	virtual bool ShouldHideFromMasterServer(bool);
	virtual void GetMatchmakingTags(char *, size_t);
	virtual void ServerHibernationUpdate(bool);
	virtual IServerGCLobby * GetServerGCLobby();
	virtual void GetMatchmakingGameData(char *, size_t);
	virtual bool ShouldTimeoutClient(int, float);
	virtual void PrintStatus(CEntityIndex, CUtlString *);
	virtual uint32 GetServerGameDLLFlags();
	virtual void GetTaggedConVarList(KeyValues *);
	virtual ServerClass * GetAllServerClasses();
	virtual const char * GetActiveWorldName();
	virtual bool IsPaused();
	virtual bool GetNavMeshData(CNavData *);
	virtual void SetNavMeshData(const CNavData &);
	virtual bool RegisterNavListener(INavListener *);
	virtual void UnregisterNavListener(INavListener *);
	virtual ISpawnDebugInterface * GetSpawnDebugInterface();
	virtual void GetAnimationActivityList(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual void GetAnimationEventList(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);
	virtual void FilterPlayerCounts(int *, int *, int *);
	virtual void GameServerSteamAPIActivated();
	virtual void GameServerSteamAPIDeactivated();
	virtual void OnHostNameChanged(const char *);
	virtual void PreFatalShutdown();
	bool ShouldPreferSteamAuth();
	bool ShouldHideServer();
	bool SupportsRandomMaps();
	bool DisallowNameChanges();
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
	virtual void ExtractResourcesFromSaveGame(CCompressedResourceManifest *, ILoadingSpawnGroup *);
	virtual void AppendTransitionResources(CCompressedResourceManifest *, ILoadingSpawnGroup *);
	virtual bool SaveGame_CalcFileName(const char *, char *, int);

	// vtable[11] SetGlobals
	// vtable[12] GameCreateNetworkStringTables
	// vtable[13] WriteSignonMessages
	// vtable[14] PreWorldUpdate
	// vtable[15] GetEntity2Networkables
	// vtable[16] GetEntity2Networkable
	// vtable[17] ClearInstancedBaselineFromServerClasses
	// vtable[18] GetLevelsFromSaveFile
	// vtable[19] ClearSaveDirectory
	// vtable[20] ApplyGameSettings
	// vtable[21] GameFrame
	// vtable[22] PreSaveGameLoaded
	// vtable[23] ShouldHideFromMasterServer
	// vtable[24] GetMatchmakingTags
	// vtable[25] ServerHibernationUpdate
	// vtable[26] GetServerGCLobby
	// vtable[27] GetMatchmakingGameData
	// vtable[28] ShouldTimeoutClient
	// vtable[29] PrintStatus
	// vtable[30] GetServerGameDLLFlags
	// vtable[31] GetTaggedConVarList
	// vtable[32] GetAllServerClasses
	// vtable[33] GetActiveWorldName
	// vtable[34] IsPaused
	// vtable[35] GetNavMeshData
	// vtable[36] SetNavMeshData
	// vtable[37] RegisterNavListener
	// vtable[38] UnregisterNavListener
	// vtable[39] GetSpawnDebugInterface
	// vtable[40] GetAnimationActivityList
	// vtable[41] GetAnimationEventList
	// vtable[42] FilterPlayerCounts
	// vtable[43] GameServerSteamAPIActivated
	// vtable[44] GameServerSteamAPIDeactivated
	// vtable[45] OnHostNameChanged
	// vtable[46] PreFatalShutdown
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
	// vtable[62] ExtractResourcesFromSaveGame
	// vtable[63] AppendTransitionResources
	// vtable[64] SaveGame_CalcFileName
	// sizeof = 8
};

// src/public/engine2/isource2server.h:517
class ISource2GameClients : public IAppSystem {
public:

	ISource2GameClients(ISource2GameClients &);
	ISource2GameClients(const ISource2GameClients &);
	ISource2GameClients();
	virtual bool ClientConnect(CEntityIndex, uint64, const char *, const char *, char *, int);
	virtual void OnClientConnected(CEntityIndex, int, const char *, uint64, const char *, const char *, bool);
	virtual void ClientPutInServer(CEntityIndex, const char *, bool);
	virtual void ClientActive(CEntityIndex, bool, bool);
	virtual void ClientFullyConnect(CEntityIndex, CPlayerSlot);
	virtual void ClientDisconnect(CEntityIndex, int, ENetworkDisconnectionReason, const char *, uint64, const char *);
	virtual void SetCommandClient(CPlayerSlot);
	virtual void ClientCommand(CEntityIndex, const CCommand &);
	virtual void ClientSettingsChanged(CEntityIndex);
	virtual void ClientSetupVisibility(CEntityIndex, CEntityIndex, vis_info_t *);
	virtual void ProcessUsercmds(CEntityIndex, bf_read *, int, int, int, bool, bool);
	virtual void PostClientMessagesSent_DEPRECIATED();
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

	// vtable[11] ClientConnect
	// vtable[12] OnClientConnected
	// vtable[13] ClientPutInServer
	// vtable[14] ClientActive
	// vtable[15] ClientFullyConnect
	// vtable[16] ClientDisconnect
	// vtable[17] SetCommandClient
	// vtable[18] ClientCommand
	// vtable[19] ClientSettingsChanged
	// vtable[20] ClientSetupVisibility
	// vtable[21] ProcessUsercmds
	// vtable[22] PostClientMessagesSent_DEPRECIATED
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
	// sizeof = 8
};

// src/public/engine2/isource2server.h:598
class ISource2GameEntities : public IAppSystem {
public:

	ISource2GameEntities();
	virtual ~ISource2GameEntities();
	virtual void CheckTransmit(CCheckTransmitInfo * *, int, CBitVec<16384> &, const Entity2Networkable_t * *, const short unsigned int *, int);
	virtual void PrepareForFullUpdate(CEntityIndex);
	virtual void FreeContainingEntity(CEntityIndex);
	virtual bool GetWorldspaceCenter(CEntityIndex, Vector *);
	virtual bool ShouldClientReceiveStringTableUserData(const INetworkStringTable *, int, const CCheckTransmitInfo *);
	virtual void ResetChangeAccessorsSerialNumbersToZero();

	// vtable[13] CheckTransmit
	// vtable[14] PrepareForFullUpdate
	// vtable[15] FreeContainingEntity
	// vtable[16] GetWorldspaceCenter
	// vtable[17] ShouldClientReceiveStringTableUserData
	// vtable[18] ResetChangeAccessorsSerialNumbersToZero
	// sizeof = 8
};

// src/public/engine2/isource2server.h:633
class IServerGCLobby {
	int ()() * * _vptr.IServerGCLobby;  // +0x0
	IServerGCLobby(IServerGCLobby &);
	IServerGCLobby(const IServerGCLobby &);
	~IServerGCLobby();
	IServerGCLobby();
	virtual bool HasLobby();
	virtual bool SteamIDAllowedToConnect(const CSteamID &);
	virtual void UpdateServerDetails();
	virtual bool ShouldHibernate();
	virtual bool SteamIDAllowedToP2PConnect(const CSteamID &);
	virtual bool LobbyAllowsCheats();

	// vtable[0] HasLobby
	// vtable[1] SteamIDAllowedToConnect
	// vtable[2] UpdateServerDetails
	// vtable[3] ShouldHibernate
	// vtable[4] SteamIDAllowedToP2PConnect
	// vtable[5] LobbyAllowsCheats
	// sizeof = 8
};
