// Reconstructed from DWARF by pahole; not original source.

// src/public/engine2/isource2serverconfig.h:39
class ISource2ServerConfig : public IAppSystem {
public:

	ISource2ServerConfig(ISource2ServerConfig &);
	ISource2ServerConfig(const ISource2ServerConfig &);
	ISource2ServerConfig();
	virtual const char * GetGameDescription();
	virtual int GetNetworkVersion();
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
	virtual bool AllowSaveRestore();

	// vtable[11] GetGameDescription
	// vtable[12] GetNetworkVersion
	// vtable[13] GetTickInterval
	// vtable[14] GetPlayerLimits
	// vtable[15] GetMaxSplitscreenPlayers
	// vtable[16] GetMaxHumanPlayers
	// vtable[17] ShouldNotifyLocalClientConnectionStateChanges
	// vtable[18] AllowPlayerToTakeOverBots
	// vtable[19] OnClientFullyConnect
	// vtable[20] GetHostStateLoopModeInfo
	// vtable[21] AllowDedicatedServers
	// vtable[22] GetConVarPrefixesToResetToDefaults
	// vtable[23] AllowSaveRestore
	// sizeof = 8
};
