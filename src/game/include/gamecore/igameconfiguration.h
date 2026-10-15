// Reconstructed from DWARF by pahole; not original source.

// src/game/include/gamecore/igameconfiguration.h:30
class IGameConfiguration : public ISource2ClientConfig, public ISource2ServerConfig {
public:

	IGameConfiguration(IGameConfiguration &);
	IGameConfiguration(const IGameConfiguration &);
	IGameConfiguration();
	virtual const unsigned char * GetEncryptionKey();
	virtual CEntityInstance * FindProceduralEntity(const char *);
	virtual bool SetupGameSessionConfiguration(KeyValues *, GameSessionConfiguration_t *);
	virtual bool InitGameSession(const GameSessionConfiguration_t &);
	virtual void ShutdownGameSession();
	virtual const char * GetModName();
	virtual bool ShouldPreserveEntityForRespawn(const char *);
	virtual bool LoopPostInitAllGameSystems(const GameSessionConfiguration_t &, ILoopModePrerequisiteRegistry *);
	virtual void RegisterGameActivities();
	virtual void ExecuteURL(const char *);
	virtual void GetBugReportLaunchURLParameters(KeyValues *);
	virtual void GetStringTableDefs(CUtlVector<StringTableDef_t, CUtlMemory<StringTableDef_t, int> > &);
	virtual bool IsUserMessage(int);
	virtual KeyValues * GetCurrentGameSessionConfigKeyValues();

	// vtable[18] GetEncryptionKey
	// vtable[19] FindProceduralEntity
	// vtable[20] SetupGameSessionConfiguration
	// vtable[21] InitGameSession
	// vtable[22] ShutdownGameSession
	// vtable[23] GetModName
	// vtable[24] ShouldPreserveEntityForRespawn
	// vtable[25] LoopPostInitAllGameSystems
	// vtable[26] RegisterGameActivities
	// vtable[27] ExecuteURL
	// vtable[28] GetBugReportLaunchURLParameters
	// vtable[29] GetStringTableDefs
	// vtable[30] IsUserMessage
	// vtable[31] GetCurrentGameSessionConfigKeyValues
	// sizeof = 16
};
