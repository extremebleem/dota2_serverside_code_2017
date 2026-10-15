// Reconstructed from DWARF by pahole; not original source.

// src/game/server/eventlog.h:21
class CEventLog : public CGameEventListener, public IGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	enum {
		PLAYER_LOGINFO_SIZE = 0x100,
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef IGameSystem BaseClass;
	CEventLog(const CEventLog &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CEventLog *);
	CEventLog();
	virtual ~CEventLog();
	virtual void FireGameEvent(IGameEvent *);
	virtual void GameInit(const EventGameInit_t &);
	virtual void FormatPlayer(CBaseEntity *, char *, int);
	const char * FormatPlayer(CBaseEntity *);
	virtual bool PrintEvent(IGameEvent *);
	virtual bool PrintGameEvent(IGameEvent *);
	virtual bool PrintPlayerEvent(IGameEvent *);
	virtual bool PrintTeamEvent(IGameEvent *);
	virtual bool PrintOtherEvent(IGameEvent *);

	// vtable[3] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[4] DoesGameSystemReallocate
	// vtable[5] SetGameSystemGlobalPtrs
	// vtable[2] FireGameEvent
	// vtable[6] GameInit
	// vtable[7] FormatPlayer
	// vtable[8] PrintEvent
	// vtable[9] PrintGameEvent
	// vtable[10] PrintPlayerEvent
	// vtable[11] PrintTeamEvent
	// vtable[12] PrintOtherEvent
	// sizeof = 40
};
