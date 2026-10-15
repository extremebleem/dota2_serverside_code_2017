// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/customnettablemanager.h:25
class CCustomNetTableManager : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	typedef CAutoGameSystem BaseClass;
	CCustomNetTableManager(const CCustomNetTableManager &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CCustomNetTableManager *);
	CCustomNetTableManager();
	virtual ~CCustomNetTableManager();
	void GetCustomStringTableDefs(CUtlVector<StringTableDef_t, CUtlMemory<StringTableDef_t, int> > &);
	bool GetTableValue(const char *, const char *, KeyValues *);
	int GetTableValueCount(const char *);
	bool GetTableValueByIndex(const char *, int, CUtlString *, KeyValues *);
	bool Script_SetTableValue(const char *, const char *, HSCRIPT);
	HSCRIPT Script_GetTableValue(const char *, const char *);

private:

	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// sizeof = 48
};
