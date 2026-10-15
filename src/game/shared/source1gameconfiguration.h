// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/source1gameconfiguration.h:16
class CSource1GameConfiguration : public CGameConfiguration {
public:

	~CSource1GameConfiguration();
	CSource1GameConfiguration(CSource1GameConfiguration &);
	CSource1GameConfiguration(const CSource1GameConfiguration &);
	CSource1GameConfiguration();
	virtual InitReturnVal_t Init();
	virtual bool InitGameSession(const GameSessionConfiguration_t &);
	virtual void ShutdownGameSession();
	virtual void RegisterGameActivities();
	virtual void GetStringTableDefs(CUtlVector<StringTableDef_t, CUtlMemory<StringTableDef_t, int> > &);
	virtual bool IsUserMessage(int);
	virtual bool InstantReplayShouldSkipMessage(int);
	virtual bool InstantReplayShouldIgnoreMessage(int);

	// vtable[3] Init
	// vtable[21] InitGameSession
	// vtable[22] ShutdownGameSession
	// vtable[26] RegisterGameActivities
	// vtable[29] GetStringTableDefs
	// vtable[30] IsUserMessage
	// vtable[14] InstantReplayShouldSkipMessage
	// vtable[15] InstantReplayShouldIgnoreMessage
	// sizeof = 56
};
