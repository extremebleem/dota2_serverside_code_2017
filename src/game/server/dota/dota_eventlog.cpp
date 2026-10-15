// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_eventlog.cpp:15
class CDOTAEventLog : public CEventLog {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CEventLog BaseClass;
	CDOTAEventLog();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTAEventLog *);
	virtual ~CDOTAEventLog();
	virtual bool PrintEvent(IGameEvent *);
	bool PrintDOTAEvent(IGameEvent *);

	// vtable[3] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[4] DoesGameSystemReallocate
	// vtable[5] SetGameSystemGlobalPtrs
	// vtable[8] PrintEvent
	// sizeof = 40
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAEventLog::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 17, @0x0000000002552520, libserver.so)
void __fastcall CDOTAEventLog::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CDOTAEventLog *const this)
{
  ;
}


// CDOTAEventLog::DoesGameSystemReallocate  (line 17, @0x0000000002552540, libserver.so)
// globals: CDOTAEventLog::sm_Factory
bool __fastcall CDOTAEventLog::DoesGameSystemReallocate(const CDOTAEventLog *const this)
{
  return (*(CDOTAEventLog::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTAEventLog::sm_Factory);
}


// CDOTAEventLog::SetGameSystemGlobalPtrs  (line 17, @0x0000000002558150, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTAEventLog::sm_Factory
void __fastcall CDOTAEventLog::SetGameSystemGlobalPtrs(CDOTAEventLog *const this, void *pValue)
{
  if ( CEventLog::sm_Factory != 0 )
    (*(CEventLog::sm_Factory->_vptr_IGameSystemFactory + 7))(CEventLog::sm_Factory);
  if ( CDOTAEventLog::sm_Factory != 0 )
    (*(CDOTAEventLog::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTAEventLog::sm_Factory, pValue);
}


// CDOTAEventLog::~CDOTAEventLog  (line 20, @0x0000000002555ac0, libserver.so)
// calls: CEventLog::~CEventLog
void __fastcall CDOTAEventLog::~CDOTAEventLog(CDOTAEventLog *const this)
{
  this->_vptr_IGameEventListener2 = off_40F69D0;
  this->_vptr_IGameSystem = off_40F6A48;
  CEventLog::~CEventLog(this);
}


// CDOTAEventLog::~CDOTAEventLog  (line 20, @0x0000000002555af0, libserver.so)  // inlines: ~CDOTAEventLog
// calls: CEventLog::~CEventLog, operator delete
void __fastcall CDOTAEventLog::~CDOTAEventLog(CDOTAEventLog *const this)
{
  this->_vptr_IGameEventListener2 = off_40F69D0;
  this->_vptr_IGameSystem = off_40F6A48;
  CEventLog::~CEventLog(this);
  operator delete(this);
}


// CDOTAEventLog::PrintEvent  (line 22, @0x0000000002593520, libserver.so)
// calls: CEventLog::PrintEvent
bool __fastcall CDOTAEventLog::PrintEvent(CDOTAEventLog *const this, IGameEvent *event)
{
  bool v3; // bl

  v3 = CEventLog::PrintEvent(this, event);
  if ( !v3 )
    (*(event->_vptr_IGameEvent + 2))(event);
  return v3;
}


// CDOTAEventLog::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 49, @0x00000000024c02a0, libserver.so)
void __cdecl CDOTAEventLog::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


