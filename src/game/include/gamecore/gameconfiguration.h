// Reconstructed from DWARF by pahole; not original source.

// src/game/include/gamecore/gameconfiguration.h:14
struct URLArgument_t {
	URLArgument_t();
	~URLArgument_t();

	// sizeof = 16
};

// src/game/include/gamecore/gameconfiguration.h:24
class CGameConfiguration : public CTier4AppSystem<IGameConfiguration, 0> {
public:

protected:

	float m_flTickIntervalOverride;  // +0x2c
	CGameConfiguration(const CGameConfiguration &);
	CGameConfiguration();
	~CGameConfiguration();
	virtual InitReturnVal_t Init();
	virtual void * QueryInterface(const char *);
	virtual const char * GetGameDescription();
	virtual int GetNetworkVersion();
	virtual bool ValidateNetworkVersion(int);
	virtual float GetTickInterval();
	virtual void GetPlayerLimits(int &, int &, int &, bool &);
	virtual int GetMaxSplitscreenPlayers();
	virtual int GetMaxHumanPlayers();
	virtual bool ShouldNotifyLocalClientConnectionStateChanges();
	virtual bool AllowPlayerToTakeOverBots();
	virtual void OnClientFullyConnect(CEntityIndex);
	virtual void GetHostStateLoopModeInfo(HostStateLoopModeType_t, CUtlString &, KeyValues * *);
	virtual bool AllowDedicatedServers(EUniverse);
	virtual void GetConVarPrefixesToResetToDefaults(CUtlString &);
	virtual const char * ChangeWorldMountNameByNetworkVersion(const char *, int);
	virtual bool AllowSaveRestore();
	virtual const unsigned char * GetEncryptionKey();
	virtual CEntityInstance * FindProceduralEntity(const char *);
	virtual bool SetupGameSessionConfiguration(KeyValues *, GameSessionConfiguration_t *);
	virtual bool InitGameSession(const GameSessionConfiguration_t &);
	virtual void ShutdownGameSession();
	virtual const char * GetModName();
	virtual bool ShouldPreserveEntityForRespawn(const char *);
	virtual void AllocateScratchRenderTargets(SwapChainHandle_t, const RenderDeviceInfo_t &, RenderMultisampleType_t);
	virtual CUtlStringToken GetDesiredRenderingPipeline();
	virtual bool LoopPostInitAllGameSystems(const GameSessionConfiguration_t &, ILoopModePrerequisiteRegistry *);
	virtual void ExecuteURL(const char *);
	virtual void GetBugReportLaunchURLParameters(KeyValues *);
	virtual void GetStringTableDefs(CUtlVector<StringTableDef_t, CUtlMemory<StringTableDef_t, int> > &);
	virtual bool IsUserMessage(int);
	virtual KeyValues * GetCurrentGameSessionConfigKeyValues();
	virtual void ExecuteURL(int, const URLArgument_t *);
	void ComputeMaxClients(GameSessionConfiguration_t *);
	bool HasTickIntervalOverride();

	// vtable[3] Init
	// vtable[2] QueryInterface
	// vtable[32] GetGameDescription
	// vtable[33] GetNetworkVersion
	// vtable[16] ValidateNetworkVersion
	// vtable[34] GetTickInterval
	// vtable[35] GetPlayerLimits
	// vtable[11] GetMaxSplitscreenPlayers
	// vtable[36] GetMaxHumanPlayers
	// vtable[37] ShouldNotifyLocalClientConnectionStateChanges
	// vtable[38] AllowPlayerToTakeOverBots
	// vtable[39] OnClientFullyConnect
	// vtable[40] GetHostStateLoopModeInfo
	// vtable[41] AllowDedicatedServers
	// vtable[42] GetConVarPrefixesToResetToDefaults
	// vtable[17] ChangeWorldMountNameByNetworkVersion
	// vtable[43] AllowSaveRestore
	// vtable[18] GetEncryptionKey
	// vtable[19] FindProceduralEntity
	// vtable[20] SetupGameSessionConfiguration
	// vtable[21] InitGameSession
	// vtable[22] ShutdownGameSession
	// vtable[23] GetModName
	// vtable[24] ShouldPreserveEntityForRespawn
	// vtable[12] AllocateScratchRenderTargets
	// vtable[13] GetDesiredRenderingPipeline
	// vtable[25] LoopPostInitAllGameSystems
	// vtable[27] ExecuteURL
	// vtable[28] GetBugReportLaunchURLParameters
	// vtable[29] GetStringTableDefs
	// vtable[30] IsUserMessage
	// vtable[31] GetCurrentGameSessionConfigKeyValues
	// vtable[44] ExecuteURL
	// sizeof = 56
};
