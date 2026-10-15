// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/customgameeventmanager.h:16
class CCustomGameEventManager : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	class CCustomGameEventListener {
		HSCRIPT m_hScriptCallback;  // +0x0
		int m_nListenerID;  // +0x8
		CCustomGameEventListener();
		~CCustomGameEventListener();

		// sizeof = 16
	};

	class CCustomGameEventInfo {
		CCustomGameEventInfo();
		~CCustomGameEventInfo();

		// sizeof = 24
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	int m_nNextListenerID;  // +0x80
	typedef CAutoGameSystem BaseClass;
	CCustomGameEventManager(const CCustomGameEventManager &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CCustomGameEventManager *);
	CCustomGameEventManager();
	virtual ~CCustomGameEventManager();
	int Script_RegisterListener(const char *, HSCRIPT);
	void Script_UnregisterListener(int);
	void Script_Send_ServerToAllClients(const char *, HSCRIPT);
	void Script_Send_ServerToTeam(int, const char *, HSCRIPT);
	void Script_Send_ServerToPlayer(HSCRIPT, const char *, HSCRIPT);

private:

	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	bool ReceiveClientMsgCustomGameEvent(const CClientMsg_CustomGameEvent_t &);
	CCustomGameEventInfo * FindOrCreateCustomEventInfo(const char *);
	CCustomGameEventInfo * FindCustomEventInfo(const char *);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// sizeof = 136
};
