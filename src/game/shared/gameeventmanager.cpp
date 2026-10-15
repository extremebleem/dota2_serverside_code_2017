// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/gameeventmanager.cpp:1111
class CSource1LegacyGameEventGameSystem : public CAutoGameSystem, public CUtlSlot {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	class CServerSideClient_GameEventLegacyProxy : public IGameEventListener2 {
	public:

		CServerSideClient_GameEventLegacyProxy(CServerSideClient_GameEventLegacyProxy &);
		CServerSideClient_GameEventLegacyProxy(const CServerSideClient_GameEventLegacyProxy &);
		CServerSideClient_GameEventLegacyProxy();
		virtual void FireGameEvent(IGameEvent *);
		virtual ~CServerSideClient_GameEventLegacyProxy();

		// vtable[2] FireGameEvent
		// sizeof = 16
	};

private:

	bool m_bRegisteredTestScriptChatScanner;  // +0x460
	typedef CAutoGameSystem BaseClass;

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CSource1LegacyGameEventGameSystem *);
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	CSource1LegacyGameEventGameSystem();
	void DisconnectPlayer(CEntityIndex);
	CServerSideClient_GameEventLegacyProxy * GetProxyForClient(CPlayerSlot);

private:

	void DisconnectAllProxies();
	bool OnSource1LegacyGameEventListenBitsReceived(const Source1LegacyListenEvents_t &);
	bool OnSource1LegacyGameEventListReceived(const Source1LegacyGameEventList_t &);
	bool OnSource1Source1LegacyGameEvent(const Source1LegacyGameEvent_t &);
	virtual ~CSource1LegacyGameEventGameSystem();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[4] GameShutdown
	// sizeof = 1128
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameEvent::CGameEvent  (line 71, @0x00000000020a6a70, libserver.so)  // inlines: ~IGameEvent
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, _Unwind_Resume, KeyValues::operator delete
// callers: CGameEventManager::DuplicateEvent, CGameEventManager::CreateEvent
// strings: "splitscreenplayer"
void __fastcall CGameEvent::CGameEvent(CGameEvent *const this, CGameEventDescriptor *descriptor, const char *name)
{
  KeyValues *v5; // r12

  this->_vptr_IGameEvent = off_3FF7190;
  this->m_pDescriptor = descriptor;
  v5 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v5, name);
  this->m_pDataKeys = v5;
  KeyValues::SetInt(v5, "splitscreenplayer", -1);
}


// CGameEvent::~CGameEvent  (line 80, @0x000000000209d0f0, libserver.so)  // inlines: ~IGameEvent
// calls: KeyValues::deleteThis
void __fastcall CGameEvent::~CGameEvent(CGameEvent *const this)
{
  this->_vptr_IGameEvent = off_3FF7190;
  KeyValues::deleteThis(this->m_pDataKeys);
  this->_vptr_IGameEvent = off_3FF43B0;
}


// CGameEvent::~CGameEvent  (line 80, @0x000000000209d120, libserver.so)  // inlines: ~CGameEvent, ~IGameEvent
// calls: KeyValues::deleteThis, operator delete
void __fastcall CGameEvent::~CGameEvent(CGameEvent *const this)
{
  this->_vptr_IGameEvent = off_3FF7190;
  KeyValues::deleteThis(this->m_pDataKeys);
  this->_vptr_IGameEvent = off_3FF43B0;
  operator delete(this);
}


// CGameEvent::GetBool  (line 85, @0x000000000209c950, libserver.so)
// calls: KeyValues::GetInt
bool __fastcall CGameEvent::GetBool(CGameEvent *const this, const char *keyName, bool defaultValue)
{
  return KeyValues::GetInt(this->m_pDataKeys, keyName, defaultValue) != 0;
}


// CGameEvent::GetInt  (line 91, @0x000000000209c970, libserver.so)
// calls: KeyValues::GetInt
int __fastcall CGameEvent::GetInt(CGameEvent *const this, const char *keyName, int defaultValue)
{
  return KeyValues::GetInt(this->m_pDataKeys, keyName, defaultValue);
}


// CGameEvent::GetUint64  (line 97, @0x000000000209d160, libserver.so)
// calls: KeyValues::GetUint64
uint64 __fastcall CGameEvent::GetUint64(CGameEvent *const this, const char *keyName, uint64 defaultValue)
{
  return KeyValues::GetUint64(this->m_pDataKeys, keyName, defaultValue);
}


// CGameEvent::GetFloat  (line 103, @0x000000000209c980, libserver.so)
// calls: KeyValues::GetFloat
float __fastcall CGameEvent::GetFloat(CGameEvent *const this, const char *keyName, double a3, float defaultValue)
{
  return KeyValues::GetFloat(this->m_pDataKeys, keyName, defaultValue);
}


// CGameEvent::GetString  (line 109, @0x000000000209c990, libserver.so)
// calls: KeyValues::GetString
const char *__fastcall CGameEvent::GetString(CGameEvent *const this, const char *keyName, const char *defaultValue)
{
  return KeyValues::GetString(this->m_pDataKeys, keyName, defaultValue, 0, 0);
}


// CGameEvent::GetPtr  (line 115, @0x000000000209d170, libserver.so)
// calls: KeyValues::GetPtr
const void *__fastcall CGameEvent::GetPtr(CGameEvent *const this, const char *keyName)
{
  return KeyValues::GetPtr(this->m_pDataKeys, keyName, 0);
}


// CGameEvent::GetDataKeys  (line 122, @0x000000000209bf90, libserver.so)
KeyValues *__fastcall CGameEvent::GetDataKeys(CGameEvent *const this)
{
  return this->m_pDataKeys;
}


// CGameEvent::SetBool  (line 128, @0x000000000209d0c0, libserver.so)
// calls: KeyValues::SetInt
void __fastcall CGameEvent::SetBool(CGameEvent *const this, const char *keyName, bool value)
{
  KeyValues::SetInt(this->m_pDataKeys, keyName, value);
}


// CGameEvent::SetInt  (line 134, @0x000000000209d0e0, libserver.so)
// calls: KeyValues::SetInt
void __fastcall CGameEvent::SetInt(CGameEvent *const this, const char *keyName, int value)
{
  KeyValues::SetInt(this->m_pDataKeys, keyName, value);
}


// CGameEvent::SetUint64  (line 140, @0x000000000209d180, libserver.so)
// calls: KeyValues::SetUint64
void __fastcall CGameEvent::SetUint64(CGameEvent *const this, const char *keyName, uint64 value)
{
  KeyValues::SetUint64(this->m_pDataKeys, keyName, value);
}


// CGameEvent::SetFloat  (line 146, @0x000000000209d190, libserver.so)
// calls: KeyValues::SetFloat
void __fastcall CGameEvent::SetFloat(CGameEvent *const this, const char *keyName, double a3, float value)
{
  KeyValues::SetFloat(this->m_pDataKeys, keyName, value);
}


// CGameEvent::SetString  (line 152, @0x000000000209d1a0, libserver.so)
// calls: KeyValues::SetString
void __fastcall CGameEvent::SetString(CGameEvent *const this, const char *keyName, const char *value)
{
  KeyValues::SetString(this->m_pDataKeys, keyName, value);
}


// CGameEvent::SetPtr  (line 158, @0x000000000209d1b0, libserver.so)
// calls: KeyValues::SetPtr
void __fastcall CGameEvent::SetPtr(CGameEvent *const this, const char *keyName, const void *value)
{
  KeyValues::SetPtr(this->m_pDataKeys, keyName, value);
}


// CGameEvent::IsEmpty  (line 164, @0x000000000209d1c0, libserver.so)
// calls: KeyValues::IsEmpty
bool __fastcall CGameEvent::IsEmpty(CGameEvent *const this, const char *keyName)
{
  return KeyValues::IsEmpty(this->m_pDataKeys, keyName);
}


// CGameEvent::GetName  (line 170, @0x000000000209d1d0, libserver.so)
// calls: KeyValues::GetName
const char *__fastcall CGameEvent::GetName(const CGameEvent *const this)
{
  return KeyValues::GetName(this->m_pDataKeys);
}


// CGameEvent::GetID  (line 176, @0x000000000209bfa0, libserver.so)
int __fastcall CGameEvent::GetID(const CGameEvent *const this)
{
  return this->m_pDescriptor->elementIndex;
}


// CGameEvent::IsLocal  (line 181, @0x000000000209bfb0, libserver.so)
bool __fastcall CGameEvent::IsLocal(const CGameEvent *const this)
{
  return this->m_pDescriptor->local;
}


// CGameEvent::IsReliable  (line 186, @0x000000000209bfc0, libserver.so)
bool __fastcall CGameEvent::IsReliable(const CGameEvent *const this)
{
  return this->m_pDescriptor->reliable;
}


// CGameEventManager::CGameEventManager  (line 191, @0x00000000020dec80, libserver.so)  // inlines: CThreadFastMutex, CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ResetDbgInfo, SetCompareType, SetLessFunc, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IBaseInterface, ~IGameEventManager2
// calls: CUtlSymbolTable::CUtlSymbolTable, CGameEventManager::Reset, CUtlDict<int, int>::Purge, CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::~CUtlRBTree, CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::RemoveAll, CUtlSymbolTable::~CUtlSymbolTable, CUtlVectorBase<CGameEventDescriptor, CUtlMemory<CGameEventDescriptor, int> >::RemoveAll, _Unwind_Resume, CUtlMemory<CGameEventDescriptor, int>::Purge, CUtlMemory<CGameEventCallback*, int>::Purge, CUtlMemory<CUtlSymbol, int>::Purge
// callers: __static_initialization_and_destruction_0
// globals: gameeventmanager, FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall CGameEventManager::CGameEventManager(CGameEventManager *const this)
{
  bool v2; // zf

  this->_vptr_IBaseInterface = off_3FF7250;
  this->m_GameEvents.m_Size = 0;
  this->m_GameEvents.m_Memory.m_pMemory = 0;
  this->m_GameEvents.m_Memory.m_nAllocationCount = 0;
  this->m_GameEvents.m_Memory.m_nGrowSize = 0;
  this->m_Listeners.m_Size = 0;
  this->m_Listeners.m_Memory.m_pMemory = 0;
  this->m_Listeners.m_Memory.m_nAllocationCount = 0;
  this->m_Listeners.m_Memory.m_nGrowSize = 0;
  CUtlSymbolTable::CUtlSymbolTable(&this->m_EventFiles, 0, 16, 0);
  v2 = gameeventmanager == 0;
  this->m_EventFileNames.m_Size = 0;
  this->m_EventFileNames.m_Memory.m_pMemory = 0;
  this->m_EventFileNames.m_Memory.m_nAllocationCount = 0;
  this->m_EventFileNames.m_Memory.m_nGrowSize = 0;
  this->m_EventMap.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_EventMap.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_EventMap.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_EventMap.m_Elements.m_Tree.m_Root = -1;
  this->m_EventMap.m_Elements.m_Tree.m_NumElements = 0;
  this->m_EventMap.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_EventMap.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_EventMap.m_Elements.m_Tree.m_pElements = 0;
  this->m_EventMap.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_mutex.m_ownerID = 0;
  this->m_mutex.m_depth = 0;
  if ( v2 )
    gameeventmanager = this;
  CGameEventManager::Reset(this);
}


// CGameEventManager::~CGameEventManager  (line 200, @0x00000000020deea0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~IBaseInterface, ~IGameEventManager2
// calls: CGameEventManager::Reset, CUtlDict<int, int>::Purge, CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::RemoveAll, CUtlSymbolTable::~CUtlSymbolTable, CUtlVectorBase<CGameEventDescriptor, CUtlMemory<CGameEventDescriptor, int> >::RemoveAll, CUtlMemory<CUtlSymbol, int>::Purge, CUtlMemory<CGameEventDescriptor, int>::Purge, CUtlMemory<CGameEventCallback*, int>::Purge
// callers: CGameEventManager::~CGameEventManager
// globals: gameeventmanager
void __fastcall CGameEventManager::~CGameEventManager(CGameEventManager *const this)
{
  bool v2; // zf

  this->_vptr_IBaseInterface = off_3FF7250;
  CGameEventManager::Reset(this);
  if ( this == gameeventmanager )
    gameeventmanager = 0;
  CUtlDict<int,int>::Purge(&this->m_EventMap);
  CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_EventMap.m_Elements.m_Tree);
  if ( (this->m_EventMap.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_EventMap.m_Elements.m_Tree.m_Elements);
  CUtlVectorBase<CUtlSymbol,CUtlMemory<CUtlSymbol,int>>::RemoveAll(&this->m_EventFileNames);
  if ( (this->m_EventFileNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlSymbol,int>::Purge(&this->m_EventFileNames.m_Memory);
    if ( (this->m_EventFileNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSymbol,int>::Purge(&this->m_EventFileNames.m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_EventFiles);
  v2 = (this->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Listeners.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CGameEventCallback *,int>::Purge(&this->m_Listeners.m_Memory);
    if ( (this->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CGameEventCallback *,int>::Purge(&this->m_Listeners.m_Memory);
  }
  CUtlVectorBase<CGameEventDescriptor,CUtlMemory<CGameEventDescriptor,int>>::RemoveAll(&this->m_GameEvents);
  if ( (this->m_GameEvents.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CGameEventDescriptor,int>::Purge(&this->m_GameEvents.m_Memory),
        (this->m_GameEvents.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_IBaseInterface = off_3FF3D10;
  }
  else
  {
    CUtlMemory<CGameEventDescriptor,int>::Purge(&this->m_GameEvents.m_Memory);
    this->_vptr_IBaseInterface = off_3FF3D10;
  }
}


// CGameEventManager::~CGameEventManager  (line 200, @0x00000000020defe0, libserver.so)
// calls: CGameEventManager::~CGameEventManager, operator delete
void __fastcall CGameEventManager::~CGameEventManager(CGameEventManager *const this)
{
  CGameEventManager::~CGameEventManager(this);
  operator delete(this);
}


// CGameEventManager::Init  (line 209, @0x00000000020a6ba0, libserver.so)
// callers: CSource2Server::Init
// strings: "resource/serverevents.res", "resource/gameevents.res", "resource/modevents.res", "resource/hltvevents.res", "resource/port_gameevents.res"
bool __fastcall CGameEventManager::Init(CGameEventManager *const this)
{
  (*(this->_vptr_IBaseInterface + 3))(this);
  (*(this->_vptr_IBaseInterface + 2))(this, "resource/serverevents.res");
  (*(this->_vptr_IBaseInterface + 2))(this, "resource/gameevents.res");
  (*(this->_vptr_IBaseInterface + 2))(this, "resource/modevents.res");
  (*(this->_vptr_IBaseInterface + 2))(this, "resource/hltvevents.res");
  (*(this->_vptr_IBaseInterface + 2))(this, "resource/port_gameevents.res");
  return 1;
}


// CGameEventManager::Shutdown  (line 223, @0x00000000020a6c10, libserver.so)
// callers: CSource2Server::Shutdown
void __fastcall CGameEventManager::Shutdown(CGameEventManager *const this)
{
  (*(this->_vptr_IBaseInterface + 3))(this);
}


// CGameEventManager::Reset  (line 228, @0x00000000020deaa0, libserver.so)  // inlines: CAutoLockT, Element, Lock, Purge, PurgeAndDeleteElements, RemoveAll, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator[], ~CAutoLockT
// calls: ThreadGetCurrentId, KeyValues::deleteThis, CUtlMemory<CGameEventCallback*, int>::Purge, CUtlVectorBase<CGameEventDescriptor, CUtlMemory<CGameEventDescriptor, int> >::RemoveAll, operator delete, CUtlSymbolTable::RemoveAll, CUtlVectorBase<CUtlSymbol, CUtlMemory<CUtlSymbol, int> >::RemoveAll, CUtlDict<int, int>::Purge, CThreadFastMutex::Lock(ulong long,uint), ThreadInterlockedExchange64, CUtlMemory<CGameEventDescriptor, int>::Purge, _Unwind_Resume
// callers: CGameEventManager::CGameEventManager, CGameEventManager::~CGameEventManager
void __fastcall CGameEventManager::Reset(CGameEventManager *const this)
{
  CThreadFastMutex *p_m_mutex; // r15
  signed __int64 CurrentId; // rsi
  int m_Size; // r14d
  unsigned __int64 v5; // r12
  __int64 v6; // r14
  CGameEventDescriptor *v7; // rbx
  KeyValues *keys; // rdi
  bool v9; // zf
  __int64 v10; // r12
  int i; // ebx
  CGameEventCallback *v12; // rdi
  int m_depth; // eax

  p_m_mutex = &this->m_mutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_mutex.m_ownerID && _InterlockedCompareExchange64(p_m_mutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(p_m_mutex, CurrentId, 0);
  }
  else
  {
    ++this->m_mutex.m_depth;
  }
  m_Size = this->m_GameEvents.m_Size;
  if ( m_Size > 0 )
  {
    v5 = 0;
    v6 = ((m_Size - 1) + 1LL) << 6;
    do
    {
      while ( 1 )
      {
        v7 = &this->m_GameEvents.m_Memory.m_pMemory[v5 / 0x40];
        keys = v7->keys;
        if ( keys != 0 )
        {
          KeyValues::deleteThis(keys);
          v7->keys = 0;
        }
        v9 = (v7->listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
        v7->listeners.m_Size = 0;
        if ( v9 )
          break;
        v5 += 64LL;
        if ( v5 == v6 )
          goto LABEL_11;
      }
      CUtlMemory<CGameEventCallback *,int>::Purge(&v7->listeners.m_Memory);
      v5 += 64LL;
    }
    while ( v5 != v6 );
  }
LABEL_11:
  CUtlVectorBase<CGameEventDescriptor,CUtlMemory<CGameEventDescriptor,int>>::RemoveAll(&this->m_GameEvents);
  if ( (this->m_GameEvents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CGameEventDescriptor,int>::Purge(&this->m_GameEvents.m_Memory);
  v10 = 0;
  for ( i = 0; i < this->m_Listeners.m_Size; ++i )
  {
    v12 = this->m_Listeners.m_Memory.m_pMemory[v10++];
    operator delete(v12);
  }
  v9 = (this->m_Listeners.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Listeners.m_Size = 0;
  if ( v9 )
    CUtlMemory<CGameEventCallback *,int>::Purge(&this->m_Listeners.m_Memory);
  CUtlSymbolTable::RemoveAll(&this->m_EventFiles);
  CUtlVectorBase<CUtlSymbol,CUtlMemory<CUtlSymbol,int>>::RemoveAll(&this->m_EventFileNames);
  CUtlDict<int,int>::Purge(&this->m_EventMap);
  m_depth = this->m_mutex.m_depth;
  this->m_bClientListenersChanged = 1;
  this->m_mutex.m_depth = m_depth - 1;
  if ( this->m_mutex.m_depth == 0 )
    ThreadInterlockedExchange64(p_m_mutex, 0);
}


// CGameEventManager::HasClientListenersChanged  (line 256, @0x00000000020a6c20, libserver.so)
bool __fastcall CGameEventManager::HasClientListenersChanged(CGameEventManager *const this, bool bReset)
{
  bool result; // al

  result = this->m_bClientListenersChanged;
  if ( result && bReset )
    this->m_bClientListenersChanged = 0;
  return result;
}


// CGameEventManager::WriteEventList  (line 267, @0x00000000020a6c40, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t>::TypeHandler>, Element, GetElementName, Key, New, add_descriptors, add_keys, assign, length, operator[], set_eventid, set_has_eventid, set_has_name, set_has_type, set_name, set_type
// calls: operator new, CMsgSource1LegacyGameEventList_descriptor_t::CMsgSource1LegacyGameEventList_descriptor_t, strlen, std::string::assign(char const*,ulong), KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetInt, CMsgSource1LegacyGameEventList_key_t::CMsgSource1LegacyGameEventList_key_t, KeyValues::GetName, google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), operator delete, _Unwind_Resume
// callers: CSource2Server::WriteSignonMessages
void __fastcall CGameEventManager::WriteEventList(CGameEventManager *const this, Source1LegacyGameEventList_t *msg)
{
  __int64 v2; // r14
  CGameEventDescriptor *v3; // rbx
  __int64 v4; // rax
  int v5; // edx
  int *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  const char *key; // r13
  size_t v10; // rax
  KeyValues *j; // rbx
  int Int; // r13d
  __int64 v13; // rax
  int v14; // esi
  std::string **v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  const char *Name; // rax
  const char *v19; // r13
  size_t v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase *i; // [rsp+0h] [rbp-50h]

  v2 = 0;
  for ( i = (msg + 24); this->m_GameEvents.m_Size > v2; ++v2 )
  {
    v3 = &this->m_GameEvents.m_Memory.m_pMemory[v2];
    if ( !v3->local )
    {
      v4 = *(msg + 8);
      v5 = *(msg + 9);
      if ( v4 < v5 )
      {
        v22 = *(msg + 3);
        *(msg + 8) = v4 + 1;
        v6 = *(v22 + 8 * v4);
      }
      else
      {
        if ( v5 == *(msg + 10) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(i, v5 + 1);
        v6 = operator new(0x40u);
        CMsgSource1LegacyGameEventList_descriptor_t::CMsgSource1LegacyGameEventList_descriptor_t(v6);
        v7 = *(msg + 8);
        v8 = *(msg + 3);
        ++*(msg + 9);
        *(msg + 8) = v7 + 1;
        *(v8 + 8 * v7) = v6;
      }
      key = this->m_EventMap.m_Elements.m_Tree.m_Elements.m_pMemory[v3->elementIndex].m_Data.key;
      v6[14] = v3->eventid;
      v6[4] |= 3u;
      v10 = strlen(key);
      std::string::assign(*(v6 + 3), key, v10);
      for ( j = KeyValues::GetFirstSubKey(v3->keys); j != 0; j = KeyValues::GetNextKey(j) )
      {
        Int = KeyValues::GetInt(j, 0, 0);
        if ( Int != 0 )
        {
          v13 = v6[10];
          v14 = v6[11];
          if ( v13 < v14 )
          {
            v21 = *(v6 + 4);
            v6[10] = v13 + 1;
            v15 = *(v21 + 8 * v13);
          }
          else
          {
            if ( v14 == v6[12] )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve((v6 + 8), v14 + 1);
            v15 = operator new(0x28u);
            CMsgSource1LegacyGameEventList_key_t::CMsgSource1LegacyGameEventList_key_t(v15);
            v16 = v6[10];
            v17 = *(v6 + 4);
            ++v6[11];
            v6[10] = v16 + 1;
            *(v17 + 8 * v16) = v15;
          }
          *(v15 + 4) |= 1u;
          *(v15 + 8) = Int;
          Name = KeyValues::GetName(j);
          *(v15 + 4) |= 2u;
          v19 = Name;
          v20 = strlen(Name);
          std::string::assign(v15[3], v19, v20);
        }
      }
    }
  }
}


// CGameEventManager::ParseEventList  (line 302, @0x00000000020a8310, libserver.so)  // inlines: CAutoLockT, Get, Get<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_descriptor_t>::TypeHandler>, Get<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEventList_key_t>::TypeHandler>, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, _M_data, c_str, descriptors, keys, ~CAutoLockT
// calls: ThreadGetCurrentId, CGameEventManager::GetEventDescriptor, KeyValues::deleteThis, KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetInt, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), KeyValues::operator delete, _Unwind_Resume
// strings: "descriptor"
bool __fastcall CGameEventManager::ParseEventList(
        CGameEventManager *const this,
        const Source1LegacyGameEventList_t *msg)
{
  CThreadFastMutex *p_m_mutex; // r15
  signed __int64 CurrentId; // rsi
  __int64 v5; // rdx
  int i; // eax
  int v7; // eax
  __int64 v8; // r15
  __int64 v9; // r13
  CGameEventDescriptor *EventDescriptor; // rax
  CGameEventDescriptor *v11; // r12
  KeyValues *keys; // rdi
  KeyValues *v13; // rbx
  int v14; // eax
  KeyValues *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r14
  int m_depth; // eax
  CThreadFastMutex *generated_id_305; // [rsp+0h] [rbp-50h]
  __int64 v21; // [rsp+8h] [rbp-48h]

  p_m_mutex = &this->m_mutex;
  generated_id_305 = &this->m_mutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_mutex.m_ownerID && _InterlockedCompareExchange64(p_m_mutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(generated_id_305, CurrentId, 0);
  }
  else
  {
    ++this->m_mutex.m_depth;
  }
  v5 = 0;
  for ( i = 0; this->m_GameEvents.m_Size > i; ++v5 )
  {
    ++i;
    this->m_GameEvents.m_Memory.m_pMemory[v5].eventid = -1;
  }
  v7 = *(msg + 8);
  if ( v7 > 0 )
  {
    v8 = 0;
    v21 = 8LL * (v7 - 1) + 8;
    do
    {
      v9 = *(*(msg + 3) + v8);
      EventDescriptor = CGameEventManager::GetEventDescriptor(this, **(v9 + 24), 0);
      v11 = EventDescriptor;
      if ( EventDescriptor != 0 )
      {
        keys = EventDescriptor->keys;
        EventDescriptor->eventid = *(v9 + 56);
        if ( keys != 0 )
          KeyValues::deleteThis(keys);
        v13 = KeyValues::operator new(0x14u);
        KeyValues::KeyValues(v13, "descriptor");
        v11->keys = v13;
        v14 = *(v9 + 40);
        if ( v14 > 0 )
        {
          v15 = v13;
          v16 = 0;
          v17 = 8LL * (v14 - 1) + 8;
          while ( 1 )
          {
            KeyValues::SetInt(v15, **(*(*(v9 + 32) + v16) + 24LL), *(*(*(v9 + 32) + v16) + 32LL));
            v16 += 8;
            if ( v16 == v17 )
              break;
            v15 = v11->keys;
          }
        }
      }
      v8 += 8;
    }
    while ( v8 != v21 );
  }
  m_depth = this->m_mutex.m_depth;
  this->m_bClientListenersChanged = 1;
  this->m_mutex.m_depth = m_depth - 1;
  if ( this->m_mutex.m_depth == 0 )
    ThreadInterlockedExchange64(generated_id_305, 0);
  return 1;
}


// CGameEventManager::WriteListenEventList  (line 353, @0x00000000020a6e90, libserver.so)  // inlines: Add, Bitvec_Set, CBitVec, CBitVecT, ClearAll, CopyArray, Element, GetElementName, Key, MoveArray, Reserve, Set, add_eventarraybits, memcpy, memset, operator(), operator[]
// calls: operator new [], memcpy, operator delete [], LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "CL:  client listens to event '%s' unknown by server.\n"
void __fastcall CGameEventManager::WriteListenEventList(
        CGameEventManager *const this,
        Source1LegacyListenEvents_t *msg)
{
  __int64 v4; // r13
  int v5; // r12d
  int v6; // r9d
  CGameEventDescriptor *v7; // rsi
  int m_Size; // edx
  CGameEventCallback **m_pMemory; // rax
  __int64 *v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // r15d
  unsigned int *i; // r12
  _DWORD *v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  int v18; // edx
  void *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rax
  char IsChannelEnabled; // al
  CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::KeyType_t pName; // [rsp+0h] [rbp-80h]
  int v24; // [rsp+Ch] [rbp-74h]
  CBitVec<512> EventArray; // [rsp+10h] [rbp-70h] BYREF
  _BYTE v26[48]; // [rsp+50h] [rbp-30h] BYREF

  memset(&EventArray, 0, sizeof(EventArray));
  if ( this->m_GameEvents.m_Size > 0 )
  {
    v4 = 0;
    v5 = 0;
    v6 = 1;
    while ( 1 )
    {
      v7 = &this->m_GameEvents.m_Memory.m_pMemory[v4];
      if ( v7->local )
        goto LABEL_9;
      m_Size = v7->listeners.m_Size;
      if ( m_Size <= 0 )
        goto LABEL_9;
      m_pMemory = v7->listeners.m_Memory.m_pMemory;
      if ( (*m_pMemory)->m_nListenerType != 1 )
      {
        v10 = (m_pMemory + 1);
        v11 = &v10[m_Size - 1];
        while ( v10 != v11 )
        {
          v12 = *v10++;
          if ( *(v12 + 8) == 1 )
            goto LABEL_23;
        }
        goto LABEL_9;
      }
LABEL_23:
      if ( v7->eventid == -1 )
      {
        v24 = v6;
        pName = this->m_EventMap.m_Elements.m_Tree.m_Elements.m_pMemory[v7->elementIndex].m_Data.key;
        IsChannelEnabled = LoggingSystem_IsChannelEnabled(LOG_SERVER, 0);
        v6 = v24;
        if ( IsChannelEnabled != 0 )
        {
          ++v5;
          ++v4;
          LoggingSystem_Log(LOG_SERVER, 0, "CL:  client listens to event '%s' unknown by server.\n", pName);
          v6 = v24;
          if ( this->m_GameEvents.m_Size <= v5 )
          {
LABEL_10:
            v13 = EventArray.m_Ints[0];
            goto LABEL_11;
          }
        }
        else
        {
LABEL_9:
          ++v5;
          ++v4;
          if ( this->m_GameEvents.m_Size <= v5 )
            goto LABEL_10;
        }
      }
      else
      {
        ++v5;
        ++v4;
        EventArray.m_Ints[v7->eventid >> 5] |= v6 << v7->eventid;
        if ( this->m_GameEvents.m_Size <= v5 )
          goto LABEL_10;
      }
    }
  }
  v13 = 0;
LABEL_11:
  for ( i = &EventArray.m_Ints[1]; ; ++i )
  {
    v16 = *(msg + 8);
    if ( v16 != *(msg + 9) )
    {
      v15 = *(msg + 3);
      goto LABEL_13;
    }
    v17 = v16 + 1;
    v18 = 2 * v16;
    v19 = *(msg + 3);
    if ( v17 >= v18 )
      v18 = v17;
    if ( v18 < 4 )
      v18 = 4;
    *(msg + 9) = v18;
    v15 = operator new[](4LL * v18);
    v16 = *(msg + 8);
    *(msg + 3) = v15;
    if ( v19 != 0 )
      break;
LABEL_13:
    *(msg + 8) = v16 + 1;
    v15[v16] = v13;
    if ( i == v26 )
      return;
LABEL_14:
    v13 = *i;
  }
  memcpy(v15, v19, 4 * v16);
  operator delete[](v19);
  v20 = *(msg + 8);
  v21 = *(msg + 3);
  *(msg + 8) = v20 + 1;
  *(v21 + 4 * v20) = v13;
  if ( i != v26 )
    goto LABEL_14;
}


// CGameEventManager::CreateEvent  (line 401, @0x00000000020a70a0, libserver.so)  // inlines: CAutoLockT, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, ~CAutoLockT
// calls: ThreadGetCurrentId, operator new, CGameEvent::CGameEvent, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), operator delete, _Unwind_Resume
// callers: CGameEventManager::UnserializeEvent
IGameEvent *__fastcall CGameEventManager::CreateEvent(
        CGameEventManager *const this,
        CGameEventDescriptor *descriptor,
        const char *name)
{
  CThreadFastMutex *p_m_mutex; // r13
  signed __int64 CurrentId; // rsi
  CGameEvent *v8; // r12

  p_m_mutex = &this->m_mutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_mutex.m_ownerID && _InterlockedCompareExchange64(p_m_mutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(p_m_mutex, CurrentId, 0);
  }
  else
  {
    ++this->m_mutex.m_depth;
  }
  v8 = operator new(0x18u);
  CGameEvent::CGameEvent(v8, descriptor, name);
  if ( --this->m_mutex.m_depth == 0 )
    ThreadInterlockedExchange64(p_m_mutex, 0);
  return v8;
}


// CGameEventManager::CreateEvent  (line 408, @0x00000000020a8510, libserver.so)  // inlines: CAutoLockT, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, ~CAutoLockT
// calls: ThreadGetCurrentId, CGameEventManager::GetEventDescriptor, operator new, CGameEvent::CGameEvent, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), DevMsg(char const*,...), _Unwind_Resume, operator delete
// strings: "CreateEvent: event '%s' not registered.\n"
IGameEvent *__fastcall CGameEventManager::CreateEvent(
        CGameEventManager *const this,
        const char *name,
        bool bForce,
        int *pCookie)
{
  CThreadFastMutex *p_m_mutex; // r14
  signed __int64 CurrentId; // rsi
  CGameEventDescriptor *EventDescriptor; // rax
  CGameEventDescriptor *v11; // r13
  CGameEvent *v12; // r15
  IGameEvent *v13; // r12

  p_m_mutex = &this->m_mutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_mutex.m_ownerID && _InterlockedCompareExchange64(p_m_mutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(p_m_mutex, CurrentId, 0);
  }
  else
  {
    ++this->m_mutex.m_depth;
  }
  if ( name != 0 && *name != 0 )
  {
    EventDescriptor = CGameEventManager::GetEventDescriptor(this, name, pCookie);
    v11 = EventDescriptor;
    if ( EventDescriptor != 0 )
    {
      if ( EventDescriptor->listeners.m_Size != 0 || bForce )
      {
        v12 = operator new(0x18u);
        CGameEvent::CGameEvent(v12, v11, name);
        v13 = v12;
        goto LABEL_9;
      }
    }
    else
    {
      DevMsg("CreateEvent: event '%s' not registered.\n", name);
    }
  }
  v13 = 0;
LABEL_9:
  if ( --this->m_mutex.m_depth == 0 )
    ThreadInterlockedExchange64(p_m_mutex, 0);
  return v13;
}


// CGameEventManager::FireEvent  (line 434, @0x00000000020a79f0, libserver.so)  // inlines: GetBool, GetInt
// calls: Msg, CGameEventManager::FireEventIntern
// strings: "Game Event Fired: %s\n"
bool __fastcall CGameEventManager::FireEvent(CGameEventManager *const this, IGameEvent *event, bool bServerOnly)
{
  const char *v6; // rax

  if ( display_game_events.m_pParent->m_Value.m_nValue != 0 )
  {
    v6 = (*(event->_vptr_IGameEvent + 2))(event);
    Msg("Game Event Fired: %s\n", v6);
  }
  return CGameEventManager::FireEventIntern(this, event, bServerOnly, 0);
}


// CGameEventManager::FireEventClientSide  (line 444, @0x00000000020a7a50, libserver.so)
// calls: CGameEventManager::FireEventIntern
bool __fastcall CGameEventManager::FireEventClientSide(CGameEventManager *const this, IGameEvent *event)
{
  return CGameEventManager::FireEventIntern(this, event, 0, 1);
}


// CGameEventManager::DuplicateEvent  (line 449, @0x00000000020a6af0, libserver.so)  // inlines: Element, GetElementName, Key, operator[]
// calls: __dynamic_cast, operator new, CGameEvent::CGameEvent, KeyValues::deleteThis, KeyValues::MakeCopy, operator delete, _Unwind_Resume
// globals: `typeinfo for'CGameEvent, `typeinfo for'IGameEvent
IGameEvent *__fastcall CGameEventManager::DuplicateEvent(CGameEventManager *const this, IGameEvent *event)
{
  _QWORD *v3; // rax
  _QWORD *v4; // r12
  const char *key; // r13
  CGameEvent *v6; // rbx

  if ( event == 0 )
    return 0;
  v3 = __dynamic_cast(event, &`typeinfo for'IGameEvent, &`typeinfo for'CGameEvent, 0);
  v4 = v3;
  if ( v3 == 0 )
    return 0;
  key = this->m_EventMap.m_Elements.m_Tree.m_Elements.m_pMemory[*(v3[1] + 4LL)].m_Data.key;
  v6 = operator new(0x18u);
  CGameEvent::CGameEvent(v6, v4[1], key);
  KeyValues::deleteThis(v6->m_pDataKeys);
  v6->m_pDataKeys = KeyValues::MakeCopy(v4[2]);
  return v6;
}


// CGameEventManager::ConPrintEvent  (line 469, @0x00000000020a72b0, libserver.so)
// calls: CGameEventManager::GetEventDescriptor, KeyValues::GetFirstSubKey, ConMsg(char const*,...), KeyValues::GetNextKey, KeyValues::GetName, KeyValues::GetInt
// callers: CGameEventManager::FireEventIntern
// strings: "- \"%s\" = \"%llu\"\n", "- \"%s\" = \"%s\" (local)\n", "- \"%s\" = \"%s\"\n", "- \"%s\" = \"%i\"\n", "- \"%s\" = \"%.2f\"\n"
void __fastcall CGameEventManager::ConPrintEvent(CGameEventManager *const this, IGameEvent *event)
{
  CGameEventDescriptor *EventDescriptor; // rax
  KeyValues *FirstSubKey; // rbx
  __int64 v5; // rax
  const char *Name; // r12
  int Int; // eax
  const char *v8; // rax
  const char *v9; // rax
  int v10; // eax
  double v11; // xmm0_8

  EventDescriptor = CGameEventManager::GetEventDescriptor(this, event);
  if ( EventDescriptor != 0 )
  {
    FirstSubKey = KeyValues::GetFirstSubKey(EventDescriptor->keys);
    if ( FirstSubKey != 0 )
    {
      while ( 1 )
      {
        Name = KeyValues::GetName(FirstSubKey);
        Int = KeyValues::GetInt(FirstSubKey, 0, 0);
        if ( Int == 1 )
          break;
        if ( Int > 1 )
        {
          if ( Int == 2 )
          {
            v11 = (*(event->_vptr_IGameEvent + 10))(event, Name, 0.0);
            ConMsg("- \"%s\" = \"%.2f\"\n", Name, *&v11);
            goto LABEL_7;
          }
          if ( Int != 7 )
          {
LABEL_14:
            v10 = (*(event->_vptr_IGameEvent + 8))(event, Name, 0);
            ConMsg("- \"%s\" = \"%i\"\n", Name, v10);
            goto LABEL_7;
          }
          v5 = (*(event->_vptr_IGameEvent + 9))(event, Name, 0);
          ConMsg("- \"%s\" = \"%llu\"\n", Name, v5);
LABEL_7:
          FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
          if ( FirstSubKey == 0 )
            return;
        }
        else
        {
          if ( Int != 0 )
            goto LABEL_14;
          v8 = (*(event->_vptr_IGameEvent + 11))(event, Name, "");
          ConMsg("- \"%s\" = \"%s\" (local)\n", Name, v8);
          FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
          if ( FirstSubKey == 0 )
            return;
        }
      }
      v9 = (*(event->_vptr_IGameEvent + 11))(event, Name, "");
      ConMsg("- \"%s\" = \"%s\"\n", Name, v9);
      goto LABEL_7;
    }
  }
}


// CGameEventManager::PrintEventToString  (line 496, @0x00000000020a7430, libserver.so)  // inlines: Append, CUtlStringBuilder, Construct, FreeHeap, Get, HasError, IsEmpty, Length, SetBytesLeft, SetDirect, String, memcpy, operator char const*, ~CUtlStringBuilder
// calls: CGameEventManager::GetEventDescriptor, CUtlStringBuilder::Format, KeyValues::GetFirstSubKey, CUtlStringBuilder::AppendFormat, KeyValues::GetNextKey, KeyValues::GetName, KeyValues::GetInt, CUtlStringBuilder::PrepareBuffer, CUtlString::operator=, __stack_chk_fail, _Unwind_Resume
// strings: "%s\n{\n", "\t\"%s\" \"%llu\"\n", "\t\"%s\" \"%s\" // local\n", "\t\"%s\" \"%s\"\n", "\t\"%s\" \"%i\"\n", "\t\"%s\" \"%.2f\"\n"
void __fastcall CGameEventManager::PrintEventToString(
        CGameEventManager *const this,
        IGameEvent *event,
        CUtlString *const s)
{
  CGameEventDescriptor *EventDescriptor; // rbx
  int (**vptr_IGameEvent)(...); // rax
  const char *v7; // rax
  KeyValues *i; // rax
  __int64 v9; // rax
  KeyValues *v10; // rbx
  const char *Name; // r12
  int Int; // eax
  const char *v13; // rax
  const char *v14; // rax
  int v15; // eax
  double v16; // xmm0_8
  __int64 m_nLength; // rbx
  char *v18; // rax
  CUtlStringBuilder *m_pchString; // rsi
  char *v20; // rax
  CUtlStringBuilder string; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  EventDescriptor = CGameEventManager::GetEventDescriptor(this, event);
  if ( EventDescriptor == 0 )
    return;
  vptr_IGameEvent = event->_vptr_IGameEvent;
  string.m_data.Stack.m_szString[0] = 0;
  string.m_data.Heap.sentinel = 19;
  v7 = (vptr_IGameEvent[2])(event);
  CUtlStringBuilder::Format(&string, "%s\n{\n", v7);
  for ( i = KeyValues::GetFirstSubKey(EventDescriptor->keys); ; i = KeyValues::GetNextKey(v10) )
  {
    v10 = i;
    if ( i == 0 )
      break;
    Name = KeyValues::GetName(i);
    Int = KeyValues::GetInt(v10, 0, 0);
    if ( Int == 1 )
    {
      v14 = (*(event->_vptr_IGameEvent + 11))(event, Name, "");
      CUtlStringBuilder::AppendFormat(&string, "\t\"%s\" \"%s\"\n", Name, v14);
      continue;
    }
    if ( Int <= 1 )
    {
      if ( Int == 0 )
      {
        v13 = (*(event->_vptr_IGameEvent + 11))(event, Name, "");
        CUtlStringBuilder::AppendFormat(&string, "\t\"%s\" \"%s\" // local\n", Name, v13);
        continue;
      }
      goto LABEL_13;
    }
    if ( Int != 2 )
    {
      if ( Int == 7 )
      {
        v9 = (*(event->_vptr_IGameEvent + 9))(event, Name, 0);
        CUtlStringBuilder::AppendFormat(&string, "\t\"%s\" \"%llu\"\n", Name, v9);
        continue;
      }
LABEL_13:
      v15 = (*(event->_vptr_IGameEvent + 8))(event, Name, 0);
      CUtlStringBuilder::AppendFormat(&string, "\t\"%s\" \"%i\"\n", Name, v15);
      continue;
    }
    v16 = (*(event->_vptr_IGameEvent + 10))(event, Name, 0.0);
    CUtlStringBuilder::AppendFormat(&string, "\t\"%s\" \"%.2f\"\n", Name, *&v16);
  }
  if ( string.m_data.Stack.m_szString[19] < 0 )
  {
    m_nLength = string.m_data.Heap.m_nLength;
    if ( string.m_data.Heap.m_nLength != 0 )
      goto LABEL_17;
    if ( (string.m_data.Heap.sentinel & 0x40) == 0 )
    {
      m_pchString = string.m_data.Heap.m_pchString;
      if ( string.m_data.Heap.m_pchString == 0 || string.m_data.Heap.m_pchString != "}\n" )
        goto LABEL_31;
      goto LABEL_20;
    }
LABEL_24:
    m_pchString = "";
    if ( string.m_data.Heap.m_pchString != 0 )
      m_pchString = string.m_data.Heap.m_pchString;
    goto LABEL_20;
  }
  m_nLength = 19 - string.m_data.Heap.sentinel;
  if ( string.m_data.Heap.sentinel != 19 )
  {
LABEL_17:
    v18 = CUtlStringBuilder::PrepareBuffer(&string, m_nLength + 2, 1, 0);
    if ( v18 != 0 )
      *&v18[m_nLength] = 2685;
    goto LABEL_19;
  }
LABEL_31:
  v20 = CUtlStringBuilder::PrepareBuffer(&string, 2u, 0, 0);
  if ( v20 != 0 )
    *v20 = 2685;
LABEL_19:
  m_pchString = &string;
  if ( string.m_data.Stack.m_szString[19] < 0 )
    goto LABEL_24;
LABEL_20:
  CUtlString::operator=(s, m_pchString);
  if ( string.m_data.Stack.m_szString[19] < 0 && string.m_data.Heap.m_pchString != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
}


// CGameEventManager::FireEventIntern  (line 541, @0x00000000020a7710, libserver.so)  // inlines: CAutoLockT, Element, GetElementName, GetInt, Key, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator[], ~CAutoLockT
// calls: ThreadGetCurrentId, CGameEventManager::GetEventDescriptor, ConMsg(char const*,...), CGameEventManager::ConPrintEvent, ThreadInterlockedExchange64, Warning, CThreadFastMutex::Lock(ulong long,uint), DevMsg(char const*,...), _Unwind_Resume
// callers: CGameEventManager::FireEvent, CGameEventManager::FireEventClientSide
// strings: "Server event \"%s\", Tick %i:\n", "Callback for event \"%s\" is NULL!!!\n", "Game event \"%s\", Tick %i:\n", "FireEvent: event '%s' not registered.\n"
bool __fastcall CGameEventManager::FireEventIntern(
        CGameEventManager *const this,
        IGameEvent *event,
        bool bServerOnly,
        bool bClientOnly)
{
  CThreadFastMutex *p_m_mutex; // r13
  signed __int64 CurrentId; // rsi
  CGameEventDescriptor *EventDescriptor; // r13
  int m_nValue; // eax
  const char *v12; // rbx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rbx
  int v16; // r12d
  IGameEventListener2 *m_pCallback; // rdi
  CGameEventCallback *v18; // rdx
  int m_nListenerType; // eax
  bool v20; // bl
  const char *v22; // rax
  const char *key; // rbx
  __int64 v24; // rax
  int v25; // eax
  const char *v26; // rax
  CThreadFastMutex *generated_id_543; // [rsp+8h] [rbp-48h]

  p_m_mutex = &this->m_mutex;
  generated_id_543 = &this->m_mutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_mutex.m_ownerID && _InterlockedCompareExchange64(p_m_mutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(generated_id_543, CurrentId, 0);
    if ( event != 0 )
      goto LABEL_4;
LABEL_33:
    v20 = 0;
    goto LABEL_26;
  }
  ++this->m_mutex.m_depth;
  if ( event == 0 )
    goto LABEL_33;
LABEL_4:
  EventDescriptor = CGameEventManager::GetEventDescriptor(this, event);
  if ( EventDescriptor != 0 )
  {
    m_nValue = net_showevents.m_pParent->m_Value.m_nValue;
    if ( m_nValue <= 0 )
      goto LABEL_12;
    if ( bClientOnly )
    {
      key = this->m_EventMap.m_Elements.m_Tree.m_Elements.m_pMemory[EventDescriptor->elementIndex].m_Data.key;
      v24 = (*(*g_pNetworkClientService + 200LL))(g_pNetworkClientService);
      if ( v24 != 0 )
      {
        v25 = (*(*v24 + 40LL))(v24);
        ConMsg("Game event \"%s\", Tick %i:\n", key, v25);
      }
    }
    else
    {
      if ( m_nValue == 1 )
        goto LABEL_12;
      v12 = this->m_EventMap.m_Elements.m_Tree.m_Elements.m_pMemory[EventDescriptor->elementIndex].m_Data.key;
      v13 = (*(*g_pNetworkServerService + 192LL))(g_pNetworkServerService);
      if ( v13 != 0 )
        v14 = (*(*v13 + 104LL))(v13);
      else
        v14 = 0;
      ConMsg("Server event \"%s\", Tick %i:\n", v12, v14);
    }
    CGameEventManager::ConPrintEvent(this, event);
LABEL_12:
    v15 = 0;
    v16 = 0;
    if ( EventDescriptor->listeners.m_Size <= 0 )
    {
LABEL_25:
      (*(this->_vptr_IBaseInterface + 11))(this, event);
      v20 = 1;
      goto LABEL_26;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = EventDescriptor->listeners.m_Memory.m_pMemory[v15];
        m_nListenerType = v18->m_nListenerType;
        if ( m_nListenerType != 0 )
          break;
        if ( !bClientOnly )
          goto LABEL_15;
LABEL_17:
        ++v16;
        ++v15;
        if ( EventDescriptor->listeners.m_Size <= v16 )
          goto LABEL_25;
      }
      if ( m_nListenerType == 1 )
        break;
      if ( m_nListenerType != 2 )
        goto LABEL_15;
      if ( bClientOnly || bServerOnly )
        goto LABEL_17;
      if ( !EventDescriptor->local )
      {
LABEL_15:
        m_pCallback = v18->m_pCallback;
        if ( v18->m_pCallback == 0 )
          goto LABEL_31;
LABEL_16:
        (*(m_pCallback->_vptr_IGameEventListener2 + 2))(m_pCallback, event);
        goto LABEL_17;
      }
      ++v16;
      ++v15;
      if ( EventDescriptor->listeners.m_Size <= v16 )
        goto LABEL_25;
    }
    if ( !bClientOnly )
      goto LABEL_17;
    m_pCallback = v18->m_pCallback;
    if ( v18->m_pCallback == 0 )
    {
LABEL_31:
      v22 = (*(event->_vptr_IGameEvent + 2))(event);
      Warning("Callback for event \"%s\" is NULL!!!\n", v22);
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  v26 = (*(event->_vptr_IGameEvent + 2))(event);
  DevMsg("FireEvent: event '%s' not registered.\n", v26);
  (*(this->_vptr_IBaseInterface + 11))(this, event);
  v20 = 0;
LABEL_26:
  if ( --this->m_mutex.m_depth == 0 )
    ThreadInterlockedExchange64(generated_id_543, 0);
  return v20;
}


// CGameEventManager::SerializeEvent  (line 627, @0x00000000020a7a70, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t>::TypeHandler>, CAutoLockT, Element, GetElementName, GetInt, GetNameByToken, Key, Lock, New, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, add_keys, assign, length, operator[], set_eventid, set_has_eventid, set_has_type, set_has_val_bool, set_has_val_byte, set_has_val_float, set_has_val_long, set_has_val_short, set_has_val_string, set_has_val_uint64, set_type, set_val_bool, set_val_byte, set_val_float, set_val_long, set_val_short, set_val_string, set_val_uint64, ~CAutoLockT
// calls: ThreadGetCurrentId, CGameEventManager::GetEventDescriptor, KeyValues::GetFirstSubKey, KeyValues::GetName, KeyValues::GetInt, DevMsg(char const*,...), operator new, CMsgSource1LegacyGameEvent_key_t::CMsgSource1LegacyGameEvent_key_t, KeyValues::GetNextKey, Msg, ThreadInterlockedExchange64, strlen (18 total)
// strings: " - %s (%s)\n", " took %d bits, %d bytes\n", "CGameEventManager: unkown type %i for key '%s'.\n", "Serializing event '%s' (%i):\n"
// globals: s_GameEventTypesMap, tokenset_t<int>::GetNameByToken(int)::unknown, jpt_20A7BFA
bool __fastcall CGameEventManager::SerializeEvent(
        CGameEventManager *const this,
        IGameEvent *event,
        Source1LegacyGameEvent_t *eventMsg)
{
  CThreadFastMutex *p_m_mutex; // r15
  signed __int64 CurrentId; // rsi
  int eventid; // eax
  KeyValues *FirstSubKey; // r12
  double v9; // xmm0_8
  const char *Name; // r15
  int Int; // ebx
  const tokenset_t<int> *v12; // rax
  const char *v13; // rdx
  __int64 v14; // rax
  int v15; // edx
  std::string **v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  float v22; // xmm0_4
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  const char *v27; // rax
  const char *v28; // rbx
  size_t v29; // rax
  const char *v30; // rax
  __int64 v31; // rdx
  CThreadFastMutex *generated_id_630; // [rsp+8h] [rbp-58h]
  CGameEventDescriptor *descriptor; // [rsp+10h] [rbp-50h]

  p_m_mutex = &this->m_mutex;
  generated_id_630 = &this->m_mutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_mutex.m_ownerID && _InterlockedCompareExchange64(p_m_mutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(generated_id_630, CurrentId, 0);
  }
  else
  {
    ++this->m_mutex.m_depth;
  }
  descriptor = CGameEventManager::GetEventDescriptor(this, event);
  eventid = descriptor->eventid;
  *(eventMsg + 4) |= 2u;
  *(eventMsg + 14) = eventid;
  FirstSubKey = KeyValues::GetFirstSubKey(descriptor->keys);
  if ( net_showevents.m_pParent->m_Value.m_nValue > 2 )
    DevMsg(
      "Serializing event '%s' (%i):\n",
      this->m_EventMap.m_Elements.m_Tree.m_Elements.m_pMemory[descriptor->elementIndex].m_Data.key,
      descriptor->eventid);
  for ( ; FirstSubKey != 0; FirstSubKey = KeyValues::GetNextKey(FirstSubKey) )
  {
    Name = KeyValues::GetName(FirstSubKey);
    Int = KeyValues::GetInt(FirstSubKey, 0, 0);
    if ( net_showevents.m_pParent->m_Value.m_nValue > 2 )
    {
      if ( Int != 0 )
      {
        v12 = s_GameEventTypesMap;
        while ( 1 )
        {
          ++v12;
          v13 = v12->name;
          if ( v12->name == 0 )
            break;
          if ( Int == v12->token )
            goto LABEL_13;
        }
        v13 = tokenset_t<int>::GetNameByToken(int)const::unknown[0];
      }
      else
      {
        v13 = "local";
      }
LABEL_13:
      DevMsg(" - %s (%s)\n", Name, v13);
    }
    if ( Int != 0 )
    {
      v14 = *(eventMsg + 10);
      v15 = *(eventMsg + 11);
      if ( v14 < v15 )
      {
        v31 = *(eventMsg + 4);
        *(eventMsg + 10) = v14 + 1;
        v16 = *(v31 + 8 * v14);
      }
      else
      {
        if ( v15 == *(eventMsg + 12) )
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve((eventMsg + 32), v15 + 1);
        v16 = operator new(0x40u);
        CMsgSource1LegacyGameEvent_key_t::CMsgSource1LegacyGameEvent_key_t(v16);
        v17 = *(eventMsg + 10);
        v18 = *(eventMsg + 4);
        ++*(eventMsg + 11);
        *(eventMsg + 10) = v17 + 1;
        *(v18 + 8 * v17) = v16;
      }
      *(v16 + 4) |= 1u;
      *(v16 + 8) = Int;
      switch ( Int )
      {
        case 1:
          v27 = (*(event->_vptr_IGameEvent + 11))(event, Name, "");
          *(v16 + 4) |= 2u;
          v28 = v27;
          v29 = strlen(v27);
          std::string::assign(v16[3], v28, v29);
          break;
        case 2:
          v22 = (*(event->_vptr_IGameEvent + 10))(event, Name, 0.0);
          *(v16 + 4) |= 4u;
          *(v16 + 9) = v22;
          break;
        case 3:
          v26 = (*(event->_vptr_IGameEvent + 8))(event, Name, 0);
          *(v16 + 4) |= 8u;
          *(v16 + 10) = v26;
          break;
        case 4:
          v25 = (*(event->_vptr_IGameEvent + 8))(event, Name, 0);
          *(v16 + 4) |= 0x10u;
          *(v16 + 11) = v25;
          break;
        case 5:
          v24 = (*(event->_vptr_IGameEvent + 8))(event, Name, 0);
          *(v16 + 4) |= 0x20u;
          *(v16 + 12) = v24;
          break;
        case 6:
          v23 = (*(event->_vptr_IGameEvent + 8))(event, Name, 0);
          *(v16 + 4) |= 0x40u;
          *(v16 + 52) = v23 != 0;
          break;
        case 7:
          v19 = (*(event->_vptr_IGameEvent + 9))(event, Name, 0);
          *(v16 + 4) |= 0x80u;
          v16[7] = v19;
          break;
        default:
          v30 = KeyValues::GetName(FirstSubKey);
          DevMsg(1, "CGameEventManager: unkown type %i for key '%s'.\n", Int, v30);
          break;
      }
    }
  }
  if ( net_showevents.m_pParent->m_Value.m_nValue > 2 )
  {
    v20 = (*(*eventMsg + 72LL))(eventMsg);
    *&v9 = Msg(" took %d bits, %d bytes\n", 8 * v20, v20).m128_u64[0];
  }
  ++descriptor->numSerialized;
  descriptor->totalSerializedBits += 8 * (*(*eventMsg + 72LL))(eventMsg, v9);
  if ( --this->m_mutex.m_depth == 0 )
    ThreadInterlockedExchange64(generated_id_630, 0);
  return 1;
}


// CGameEventManager::UnserializeEvent  (line 698, @0x00000000020a7ed0, libserver.so)  // inlines: CAutoLockT, Element, Get, Get<google::protobuf::RepeatedPtrField<CMsgSource1LegacyGameEvent_key_t>::TypeHandler>, GetElementName, Key, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, _M_data, c_str, keys, operator[], ~CAutoLockT
// calls: ThreadGetCurrentId, CGameEventManager::GetEventDescriptor, CGameEventManager::CreateEvent, KeyValues::GetFirstSubKey, KeyValues::GetName, DevMsg, KeyValues::GetNextKey, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), DevMsg(char const*,...), _Unwind_Resume
// strings: "CGameEventManager: unknown type %i for key '%s' [%s].\n", "CGameEventManager::UnserializeEvent:: unknown event id %i.\n", "CGameEventManager::UnserializeEvent:: failed to create event %s.\n"
// globals: jpt_20A7FE1
IGameEvent *__fastcall CGameEventManager::UnserializeEvent(
        CGameEventManager *const this,
        const Source1LegacyGameEvent_t *eventMsg)
{
  CThreadFastMutex *p_m_mutex; // r15
  signed __int64 CurrentId; // rsi
  int v5; // ebx
  IGameEvent *Event; // r15
  __int64 v7; // r12
  KeyValues *i; // rbx
  __int64 v9; // r14
  const char *Name; // rax
  int v11; // r13d
  const char *v12; // rax
  CThreadFastMutex *generated_id_700; // [rsp+0h] [rbp-60h]
  CGameEventDescriptor *descriptor; // [rsp+8h] [rbp-58h]
  CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::KeyType_t pName; // [rsp+18h] [rbp-48h]
  int nNumKeys; // [rsp+24h] [rbp-3Ch]

  p_m_mutex = &this->m_mutex;
  generated_id_700 = &this->m_mutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_mutex.m_ownerID && _InterlockedCompareExchange64(p_m_mutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(generated_id_700, CurrentId, 0);
  }
  else
  {
    ++this->m_mutex.m_depth;
  }
  v5 = *(eventMsg + 14);
  descriptor = CGameEventManager::GetEventDescriptor(this, v5);
  if ( descriptor == 0 )
  {
    DevMsg("CGameEventManager::UnserializeEvent:: unknown event id %i.\n", v5);
LABEL_24:
    Event = 0;
    goto LABEL_12;
  }
  pName = this->m_EventMap.m_Elements.m_Tree.m_Elements.m_pMemory[descriptor->elementIndex].m_Data.key;
  Event = CGameEventManager::CreateEvent(this, descriptor, pName);
  if ( Event == 0 )
  {
    DevMsg("CGameEventManager::UnserializeEvent:: failed to create event %s.\n", pName);
    goto LABEL_24;
  }
  nNumKeys = *(eventMsg + 10);
  v7 = 0;
  for ( i = KeyValues::GetFirstSubKey(descriptor->keys); nNumKeys > v7; i = KeyValues::GetNextKey(i) )
  {
    if ( i == 0 )
      break;
    v9 = *(*(eventMsg + 4) + 8 * v7);
    Name = KeyValues::GetName(i);
    v11 = *(v9 + 32);
    switch ( v11 )
    {
      case 0:
        break;
      case 1:
        (*(Event->_vptr_IGameEvent + 17))(Event, Name, **(v9 + 24));
        break;
      case 2:
        (*(Event->_vptr_IGameEvent + 16))(Event, Name, *(v9 + 36));
        break;
      case 3:
        (*(Event->_vptr_IGameEvent + 14))(Event, Name, *(v9 + 40));
        break;
      case 4:
        (*(Event->_vptr_IGameEvent + 14))(Event, Name, *(v9 + 44));
        break;
      case 5:
        (*(Event->_vptr_IGameEvent + 14))(Event, Name, *(v9 + 48));
        break;
      case 6:
        (*(Event->_vptr_IGameEvent + 14))(Event, Name, *(v9 + 52));
        break;
      case 7:
        (*(Event->_vptr_IGameEvent + 15))(Event, Name, *(v9 + 56));
        break;
      default:
        v12 = KeyValues::GetName(i);
        DevMsg(1, "CGameEventManager: unknown type %i for key '%s' [%s].\n", v11, v12, pName);
        break;
    }
    ++v7;
  }
  ++descriptor->numUnSerialized;
  descriptor->totalUnserializedBits += 8 * (*(*eventMsg + 72LL))(eventMsg);
LABEL_12:
  if ( --this->m_mutex.m_depth == 0 )
    ThreadInterlockedExchange64(generated_id_700, 0);
  return Event;
}


// CGameEventManager::FindListener  (line 757, @0x00000000020cf2c0, libserver.so)  // inlines: CAutoLockT, IsValidIndex, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, ~CAutoLockT
// calls: ThreadGetCurrentId, CGameEventManager::GetEventDescriptor, CGameEventManager::FindEventListener, CUtlVectorBase<CGameEventCallback*, CUtlMemory<CGameEventCallback*, int> >::Find, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), _Unwind_Resume
bool __fastcall CGameEventManager::FindListener(
        CGameEventManager *const this,
        IGameEventListener2 *listener,
        const char *name)
{
  CThreadFastMutex *p_m_mutex; // r14
  signed __int64 CurrentId; // rsi
  CGameEventDescriptor *EventDescriptor; // r13
  bool v9; // r12
  int v10; // eax
  CGameEventCallback *pCallback; // [rsp+8h] [rbp-28h] BYREF

  p_m_mutex = &this->m_mutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_mutex.m_ownerID && _InterlockedCompareExchange64(p_m_mutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(p_m_mutex, CurrentId, 0);
  }
  else
  {
    ++this->m_mutex.m_depth;
  }
  EventDescriptor = CGameEventManager::GetEventDescriptor(this, name, 0);
  if ( EventDescriptor != 0 && (pCallback = CGameEventManager::FindEventListener(this, listener)) != 0 )
  {
    v9 = 0;
    v10 = CUtlVectorBase<CGameEventCallback *,CUtlMemory<CGameEventCallback *,int>>::Find(
            &EventDescriptor->listeners,
            &pCallback);
    if ( v10 >= 0 )
      v9 = v10 < EventDescriptor->listeners.m_Size;
  }
  else
  {
    v9 = 0;
  }
  if ( --this->m_mutex.m_depth == 0 )
    ThreadInterlockedExchange64(p_m_mutex, 0);
  return v9;
}


// CGameEventManager::FindEventListener  (line 777, @0x00000000020a7190, libserver.so)
// callers: CGameEventManager::FindListener, CGameEventManager::RemoveListener, CGameEventManager::AddListener
CGameEventCallback *__fastcall CGameEventManager::FindEventListener(
        CGameEventManager *const this,
        IGameEventListener2 *pCallback)
{
  int m_Size; // ecx
  CGameEventCallback **m_pMemory; // rdx
  CGameEventCallback *result; // rax
  CGameEventCallback **v5; // rdx
  CGameEventCallback **v6; // rcx

  m_Size = this->m_Listeners.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_Listeners.m_Memory.m_pMemory;
    result = *m_pMemory;
    if ( (*m_pMemory)->m_pCallback == pCallback )
      return result;
    v5 = m_pMemory + 1;
    v6 = &v5[m_Size - 1];
    while ( v5 != v6 )
    {
      result = *v5++;
      if ( result->m_pCallback == pCallback )
        return result;
    }
  }
  return 0;
}


// CGameEventManager::RemoveListener  (line 792, @0x00000000020cf3e0, libserver.so)  // inlines: CAutoLockT, Element, FindAndRemove, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator[], ~CAutoLockT
// calls: ThreadGetCurrentId, CGameEventManager::FindEventListener, CUtlVectorBase<CGameEventCallback*, CUtlMemory<CGameEventCallback*, int> >::Find, CUtlVectorBase<CGameEventCallback*, CUtlMemory<CGameEventCallback*, int> >::Remove, operator delete, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint)
// callers: OnSource1GameEventsDisconnectPlayer, CSource1LegacyGameEventGameSystem::OnSource1LegacyGameEventListenBitsReceived, CSource1LegacyGameEventGameSystem::GameShutdown
void __fastcall CGameEventManager::RemoveListener(CGameEventManager *const this, IGameEventListener2 *listener)
{
  CThreadFastMutex *p_m_mutex; // r15
  signed __int64 CurrentId; // rsi
  __int64 v6; // r13
  int v7; // r12d
  CUtlVector<CGameEventCallback*,CUtlMemory<CGameEventCallback*,int> > *p_listeners; // r14
  int v9; // eax
  int v10; // eax
  CGameEventCallback *v11; // rdi
  CThreadFastMutex *generated_id_794; // [rsp+8h] [rbp-48h]
  CGameEventCallback *pCallback; // [rsp+18h] [rbp-38h] BYREF

  p_m_mutex = &this->m_mutex;
  generated_id_794 = &this->m_mutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_mutex.m_ownerID && _InterlockedCompareExchange64(p_m_mutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(generated_id_794, CurrentId, 0);
  }
  else
  {
    ++this->m_mutex.m_depth;
  }
  pCallback = CGameEventManager::FindEventListener(this, listener);
  if ( pCallback != 0 )
  {
    if ( this->m_GameEvents.m_Size > 0 )
    {
      v6 = 0;
      v7 = 0;
      do
      {
        p_listeners = &this->m_GameEvents.m_Memory.m_pMemory[v6].listeners;
        v9 = CUtlVectorBase<CGameEventCallback *,CUtlMemory<CGameEventCallback *,int>>::Find(p_listeners, &pCallback);
        if ( v9 != -1 )
          CUtlVectorBase<CGameEventCallback *,CUtlMemory<CGameEventCallback *,int>>::Remove(p_listeners, v9);
        ++v7;
        ++v6;
      }
      while ( this->m_GameEvents.m_Size > v7 );
    }
    v10 = CUtlVectorBase<CGameEventCallback *,CUtlMemory<CGameEventCallback *,int>>::Find(
            &this->m_Listeners,
            &pCallback);
    if ( v10 != -1 )
      CUtlVectorBase<CGameEventCallback *,CUtlMemory<CGameEventCallback *,int>>::Remove(&this->m_Listeners, v10);
    v11 = pCallback;
    if ( pCallback->m_nListenerType == 1 )
      this->m_bClientListenersChanged = 1;
    operator delete(v11);
    if ( --this->m_mutex.m_depth == 0 )
      ThreadInterlockedExchange64(generated_id_794, 0);
  }
  else if ( --this->m_mutex.m_depth == 0 )
  {
    ThreadInterlockedExchange64(generated_id_794, 0);
  }
}


// CGameEventManager::LoadEventsFromFile  (line 824, @0x00000000020ede40, libserver.so)  // inlines: AddToTail, CAutoLockT, CUtlSymbol, CopyConstruct<CUtlSymbol>, Element, GetBool, GetInt, GrowMemory, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator[], ~CAutoLockT
// calls: ThreadGetCurrentId, CUtlSymbolTable::Find, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::GetFirstSubKey, KeyValues::GetDataType, CGameEventManager::RegisterEvent, KeyValues::GetNextKey, KeyValues::~KeyValues, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), CUtlSymbolTable::AddString (16 total)
// strings: "Event System loaded %i events from file %s.\n"
int __fastcall CGameEventManager::LoadEventsFromFile(CGameEventManager *const this, const char *filename)
{
  CThreadFastMutex *p_m_mutex; // r15
  signed __int64 CurrentId; // rsi
  IBaseFileSystem *v6; // rsi
  KeyValues *i; // rax
  KeyValues *v8; // rbx
  int v9; // ebx
  __int64 m_Size; // rbx
  int v12; // eax
  CUtlSymbol *v13; // rax
  CUtlSymbol id; // [rsp+0h] [rbp-60h]
  KeyValues key; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-38h]

  p_m_mutex = &this->m_mutex;
  v16 = __readfsqword(0x28u);
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_mutex.m_ownerID && _InterlockedCompareExchange64(p_m_mutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(p_m_mutex, CurrentId, 0);
  }
  else
  {
    ++this->m_mutex.m_depth;
  }
  CUtlSymbolTable::Find(&this->m_EventFiles, filename);
  if ( id.m_Id == 0xFFFF )
  {
    CUtlSymbolTable::AddString(&this->m_EventFiles, filename);
    m_Size = this->m_EventFileNames.m_Size;
    v12 = this->m_EventFileNames.m_Size;
    if ( m_Size == this->m_EventFileNames.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CUtlSymbol,int>::Grow(&this->m_EventFileNames.m_Memory, 1);
      v12 = this->m_EventFileNames.m_Size;
    }
    this->m_EventFileNames.m_Size = v12 + 1;
    v13 = &this->m_EventFileNames.m_Memory.m_pMemory[m_Size];
    if ( v13 != 0 )
      v13->m_Id = -1;
  }
  KeyValues::KeyValues(&key, filename);
  v6 = 0;
  if ( g_pFullFileSystem != 0 )
    v6 = &g_pFullFileSystem->IBaseFileSystem;
  if ( KeyValues::LoadFromFile(&key, v6, filename, "GAME", 0) )
  {
    for ( i = KeyValues::GetFirstSubKey(&key); ; i = KeyValues::GetNextKey(v8) )
    {
      v8 = i;
      if ( i == 0 )
        break;
      if ( KeyValues::GetDataType(i, 0) == CKeyValues_Data::types_t::TYPE_NONE )
        CGameEventManager::RegisterEvent(this, v8);
    }
    if ( net_showevents.m_pParent->m_Value.m_nValue != 0 )
      DevMsg("Event System loaded %i events from file %s.\n", this->m_GameEvents.m_Size, filename);
    v9 = this->m_GameEvents.m_Size;
  }
  else
  {
    v9 = 0;
  }
  KeyValues::~KeyValues(&key);
  if ( --this->m_mutex.m_depth == 0 )
    ThreadInterlockedExchange64(p_m_mutex, 0);
  return v9;
}


// CGameEventManager::ReloadEventDefinitions  (line 860, @0x00000000020a71d0, libserver.so)  // inlines: CUtlSymbol
// calls: CUtlSymbolTable::String
// callers: net_reloadgameevents
void __fastcall CGameEventManager::ReloadEventDefinitions(CGameEventManager *const this)
{
  CUtlSymbolTable *p_m_EventFiles; // r14
  __int64 v3; // r12
  const char *v4; // rax
  CUtlSymbol id; // [rsp+0h] [rbp-30h] BYREF

  if ( this->m_EventFileNames.m_Size > 0 )
  {
    p_m_EventFiles = &this->m_EventFiles;
    v3 = 0;
    do
    {
      id.m_Id = this->m_EventFileNames.m_Memory.m_pMemory[v3].m_Id;
      v4 = CUtlSymbolTable::String(p_m_EventFiles, &id);
      (*(this->_vptr_IBaseInterface + 2))(this, v4);
      ++v3;
    }
    while ( v3 < this->m_EventFileNames.m_Size );
  }
}


// CGameEventManager::AddListener  (line 869, @0x00000000020d9290, libserver.so)  // inlines: CAutoLockT, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, ~CAutoLockT
// calls: ThreadGetCurrentId, CGameEventManager::GetEventDescriptor, CGameEventManager::AddListener, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), DevMsg(char const*,...), _Unwind_Resume
// strings: "CGameEventManager::AddListener: event '%s' unknown.\n"
int __fastcall CGameEventManager::AddListener(
        CGameEventManager *const this,
        IGameEventListener2 *listener,
        const char *event,
        bool bServerSide)
{
  CThreadFastMutex *p_m_mutex; // r13
  signed __int64 CurrentId; // rsi
  CGameEventDescriptor *EventDescriptor; // rax
  int v11; // r12d

  p_m_mutex = &this->m_mutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_mutex.m_ownerID && _InterlockedCompareExchange64(p_m_mutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(p_m_mutex, CurrentId, 0);
  }
  else
  {
    ++this->m_mutex.m_depth;
  }
  if ( event != 0 )
  {
    EventDescriptor = CGameEventManager::GetEventDescriptor(this, event, 0);
    if ( EventDescriptor != 0 )
    {
      v11 = CGameEventManager::AddListener(this, listener, EventDescriptor, !bServerSide);
      goto LABEL_7;
    }
    DevMsg("CGameEventManager::AddListener: event '%s' unknown.\n", event);
  }
  v11 = -1;
LABEL_7:
  if ( --this->m_mutex.m_depth == 0 )
    ThreadInterlockedExchange64(p_m_mutex, 0);
  return v11;
}


// CGameEventManager::AddListener  (line 887, @0x00000000020d9010, libserver.so)  // inlines: AddToTail, CAutoLockT, CopyConstruct<CGameEventCallback*>, Element, GetBool, GetElementName, GetInt, GetNameByToken, GrowMemory, Key, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator[], ~CAutoLockT
// calls: ThreadGetCurrentId, CGameEventManager::FindEventListener, CUtlVectorBase<CGameEventCallback*, CUtlMemory<CGameEventCallback*, int> >::Find, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), operator new, Msg, CUtlMemory<CGameEventCallback*, int>::Grow, _Unwind_Resume
// callers: CSource1LegacyGameEventGameSystem::OnSource1LegacyGameEventListenBitsReceived, CGameEventManager::AddListener, CSource2GameClients::StartHLTVServer
// strings: "[GAMEEVENT] Event '%s' (index %d) added %s listener %p\n"
// globals: s_GameListenerTypeMap, tokenset_t<int>::GetNameByToken(int)::unknown
int __fastcall CGameEventManager::AddListener(
        CGameEventManager *const this,
        IGameEventListener2 *listener,
        CGameEventDescriptor *descriptor,
        int nListenerType)
{
  CThreadFastMutex *p_m_mutex; // r14
  signed __int64 CurrentId; // rsi
  int v10; // r12d
  int m_Size; // eax
  CGameEventCallback **v13; // rax
  int v14; // eax
  CGameEventCallback **v15; // rax
  int elementIndex; // edx
  const tokenset_t<int> *v17; // rax
  const char *name; // rcx
  const char *key; // rsi
  int v20; // [rsp+4h] [rbp-4Ch]
  CGameEventCallback *v21; // [rsp+8h] [rbp-48h]
  int v22; // [rsp+8h] [rbp-48h]
  CGameEventCallback *pCallback; // [rsp+18h] [rbp-38h] BYREF

  p_m_mutex = &this->m_mutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_mutex.m_ownerID && _InterlockedCompareExchange64(p_m_mutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(p_m_mutex, CurrentId, 0);
  }
  else
  {
    ++this->m_mutex.m_depth;
  }
  if ( listener != 0 && descriptor != 0 )
  {
    pCallback = CGameEventManager::FindEventListener(this, listener);
    if ( pCallback == 0 )
    {
      v21 = operator new(0x10u);
      pCallback = v21;
      m_Size = this->m_Listeners.m_Size;
      v20 = m_Size;
      if ( m_Size == this->m_Listeners.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CGameEventCallback *,int>::Grow(&this->m_Listeners.m_Memory, 1);
        m_Size = this->m_Listeners.m_Size;
      }
      this->m_Listeners.m_Size = m_Size + 1;
      v13 = &this->m_Listeners.m_Memory.m_pMemory[v20];
      if ( v13 != 0 )
        *v13 = v21;
      v21->m_nListenerType = nListenerType;
      v21->m_pCallback = listener;
    }
    if ( CUtlVectorBase<CGameEventCallback *,CUtlMemory<CGameEventCallback *,int>>::Find(
           &descriptor->listeners,
           &pCallback) == -1 )
    {
      v14 = descriptor->listeners.m_Size;
      v22 = v14;
      if ( v14 == descriptor->listeners.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CGameEventCallback *,int>::Grow(&descriptor->listeners.m_Memory, 1);
        v14 = descriptor->listeners.m_Size;
      }
      descriptor->listeners.m_Size = v14 + 1;
      v15 = &descriptor->listeners.m_Memory.m_pMemory[v22];
      if ( v15 != 0 )
        *v15 = pCallback;
      if ( net_showeventlisteners.m_pParent->m_Value.m_nValue != 0 )
      {
        elementIndex = descriptor->elementIndex;
        if ( nListenerType != 0 )
        {
          v17 = s_GameListenerTypeMap;
          while ( 1 )
          {
            ++v17;
            name = v17->name;
            if ( v17->name == 0 )
              break;
            if ( nListenerType == v17->token )
              goto LABEL_28;
          }
          name = tokenset_t<int>::GetNameByToken(int)const::unknown[0];
        }
        else
        {
          name = "SERVERSIDE";
        }
LABEL_28:
        key = "UNKNOWN";
        if ( this->m_EventMap.m_Elements.m_Tree.m_Elements.m_pMemory[elementIndex].m_Data.key != 0 )
          key = this->m_EventMap.m_Elements.m_Tree.m_Elements.m_pMemory[elementIndex].m_Data.key;
        Msg("[GAMEEVENT] Event '%s' (index %d) added %s listener %p\n", key, elementIndex, name, listener);
      }
      if ( nListenerType == 1 )
        this->m_bClientListenersChanged = 1;
    }
    v10 = descriptor->elementIndex;
  }
  else
  {
    v10 = -1;
  }
  if ( --this->m_mutex.m_depth == 0 )
    ThreadInterlockedExchange64(p_m_mutex, 0);
  return v10;
}


// CGameEventManager::RegisterEvent  (line 935, @0x00000000020eda60, libserver.so)  // inlines: AddToTail, CAutoLockT, CGameEventDescriptor, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CGameEventDescriptor>, Element, GetToken, GrowMemory, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, _V_strcmp, operator[], ~CAutoLockT
// calls: ThreadGetCurrentId, CThreadFastMutex::Lock(ulong long,uint), KeyValues::GetName, CGameEventManager::GetEventDescriptor, KeyValues::deleteThis, KeyValues::operator new, KeyValues::KeyValues, KeyValues::GetFirstSubKey, V_atoi, KeyValues::GetNextKey, KeyValues::GetString, strcmp (20 total)
// callers: CGameEventManager::LoadEventsFromFile
// strings: "descriptor", "CGameEventManager:: unknown type '%s' for key '%s' [%s].\n", "CGameEventManager: couldn't register event '%s', limit reached (%i).\n"
// globals: s_GameEventTypesMap
bool __fastcall CGameEventManager::RegisterEvent(CGameEventManager *const this, KeyValues *event)
{
  CThreadFastMutex *p_m_mutex; // r15
  signed __int64 CurrentId; // rsi
  CGameEventDescriptor *EventDescriptor; // rax
  CGameEventDescriptor *v7; // r14
  KeyValues *v8; // r12
  KeyValues *i; // r12
  const char *v10; // r13
  const char *String; // rbx
  const tokenset_t<int> *v12; // r15
  const char *v13; // rsi
  int token; // edx
  KeyValues *keys; // rdi
  const char *v16; // rax
  bool v17; // bl
  const char *v19; // rax
  int m_Size; // r12d
  int v21; // eax
  CGameEventDescriptor *v22; // rax
  const char *v23; // rax
  CThreadFastMutex *generated_id_940; // [rsp+0h] [rbp-170h]
  const char *name; // [rsp+8h] [rbp-168h]
  int index; // [rsp+2Ch] [rbp-144h] BYREF
  char szKVStringScratch[264]; // [rsp+30h] [rbp-140h] BYREF
  unsigned __int64 v29; // [rsp+138h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  if ( event == 0 )
    return 0;
  p_m_mutex = &this->m_mutex;
  generated_id_940 = &this->m_mutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId == this->m_mutex.m_ownerID || _InterlockedCompareExchange64(p_m_mutex, CurrentId, 0) == 0 )
  {
    ++this->m_mutex.m_depth;
  }
  else
  {
    _mm_pause();
    CThreadFastMutex::Lock(generated_id_940, CurrentId, 0);
  }
  if ( this->m_GameEvents.m_Size == 512 )
  {
    v19 = KeyValues::GetName(event);
    DevMsg("CGameEventManager: couldn't register event '%s', limit reached (%i).\n", v19, 512);
    v17 = 0;
  }
  else
  {
    name = KeyValues::GetName(event);
    EventDescriptor = CGameEventManager::GetEventDescriptor(this, name, 0);
    v7 = EventDescriptor;
    if ( EventDescriptor != 0 )
    {
      KeyValues::deleteThis(EventDescriptor->keys);
    }
    else
    {
      m_Size = this->m_GameEvents.m_Size;
      v21 = m_Size;
      if ( m_Size == this->m_GameEvents.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CGameEventDescriptor,int>::Grow(&this->m_GameEvents.m_Memory, 1);
        v21 = this->m_GameEvents.m_Size;
      }
      this->m_GameEvents.m_Size = v21 + 1;
      v22 = &this->m_GameEvents.m_Memory.m_pMemory[m_Size];
      if ( v22 != 0 )
      {
        v22->listeners.m_Size = 0;
        v22->listeners.m_Memory.m_pMemory = 0;
        v22->listeners.m_Memory.m_nAllocationCount = 0;
        v22->listeners.m_Memory.m_nGrowSize = 0;
        v22->eventid = -1;
        v22->keys = 0;
        v22->local = 0;
        v22->reliable = 1;
        v22->elementIndex = -1;
        v22->numSerialized = 0;
        v22->numUnSerialized = 0;
        v22->totalSerializedBits = 0;
        v22->totalUnserializedBits = 0;
        v7 = &this->m_GameEvents.m_Memory.m_pMemory[m_Size];
      }
      index = m_Size;
      v23 = KeyValues::GetName(event);
      v7->elementIndex = CUtlDict<int,int>::Insert(&this->m_EventMap, v23, &index);
      v7->eventid = index;
    }
    v8 = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(v8, "descriptor");
    v7->keys = v8;
    for ( i = KeyValues::GetFirstSubKey(event); i != 0; i = KeyValues::GetNextKey(i) )
    {
      v10 = KeyValues::GetName(i);
      String = KeyValues::GetString(i, 0, 0, szKVStringScratch, 0x100u);
      if ( strcmp("local", v10) == 0 )
      {
        v7->local = V_atoi(String) != 0;
      }
      else if ( strcmp("reliable", v10) == 0 )
      {
        v7->reliable = V_atoi(String) != 0;
      }
      else
      {
        v12 = s_GameEventTypesMap;
        v13 = "local";
        do
        {
          if ( String != 0 && strcmp(String, v13) == 0 )
            break;
          ++v12;
          v13 = v12->name;
        }
        while ( v12->name != 0 );
        token = v12->token;
        keys = v7->keys;
        if ( token < 0 )
        {
          KeyValues::SetInt(keys, v10, 0);
          v16 = KeyValues::GetName(i);
          DevMsg("CGameEventManager:: unknown type '%s' for key '%s' [%s].\n", String, v16, name);
        }
        else
        {
          KeyValues::SetInt(keys, v10, token);
        }
      }
    }
    v17 = 1;
  }
  if ( --this->m_mutex.m_depth == 0 )
    ThreadInterlockedExchange64(generated_id_940, 0);
  return v17;
}


// CGameEventManager::GetEventDescriptor  (line 1012, @0x00000000020a7270, libserver.so)
// calls: __dynamic_cast
// callers: ScriptHelper_CreateEvent, CGameEventManager::ConPrintEvent, CGameEventManager::PrintEventToString, CGameEventManager::FireEventIntern, CGameEventManager::SerializeEvent
// globals: `typeinfo for'CGameEvent, `typeinfo for'IGameEvent
CGameEventDescriptor *__fastcall CGameEventManager::GetEventDescriptor(
        CGameEventManager *const this,
        IGameEvent *event)
{
  void *v2; // rax

  if ( event == 0 )
    return 0;
  v2 = __dynamic_cast(event, &`typeinfo for'IGameEvent, &`typeinfo for'CGameEvent, 0);
  if ( v2 != 0 )
    return *(v2 + 1);
  else
    return 0;
}


// CGameEventManager::GetEventDescriptor  (line 1022, @0x00000000020a7e80, libserver.so)  // inlines: operator[]
// callers: CGameEventManager::UnserializeEvent, CSource1LegacyGameEventGameSystem::OnSource1LegacyGameEventListenBitsReceived
CGameEventDescriptor *__fastcall CGameEventManager::GetEventDescriptor(CGameEventManager *const this, int eventid)
{
  int m_Size; // ecx
  CGameEventDescriptor *result; // rax
  CGameEventDescriptor *v4; // rdx
  CGameEventDescriptor *v5; // rcx

  if ( eventid >= 0 )
  {
    m_Size = this->m_GameEvents.m_Size;
    if ( m_Size > 0 )
    {
      result = this->m_GameEvents.m_Memory.m_pMemory;
      if ( result->eventid == eventid )
        return result;
      v4 = result + 1;
      v5 = &result[(m_Size - 1) + 1];
      while ( v4 != v5 )
      {
        result = v4++;
        if ( v4[-1].eventid == eventid )
          return result;
      }
    }
  }
  return 0;
}


// CGameEventManager::FreeEvent  (line 1038, @0x000000000209f2a0, libserver.so)  // inlines: CAutoLockT, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, ~CAutoLockT
// calls: ThreadGetCurrentId, CThreadFastMutex::Lock(ulong long,uint), ThreadInterlockedExchange64
void __fastcall CGameEventManager::FreeEvent(CGameEventManager *const this, IGameEvent *event)
{
  CThreadFastMutex *p_m_mutex; // r13
  signed __int64 CurrentId; // rsi

  p_m_mutex = &this->m_mutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId != this->m_mutex.m_ownerID && _InterlockedCompareExchange64(p_m_mutex, CurrentId, 0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(p_m_mutex, CurrentId, 0);
    if ( event != 0 )
    {
LABEL_4:
      (*(event->_vptr_IGameEvent + 1))(event);
      if ( --this->m_mutex.m_depth != 0 )
        return;
LABEL_8:
      ThreadInterlockedExchange64(p_m_mutex, 0);
      return;
    }
  }
  else
  {
    ++this->m_mutex.m_depth;
    if ( event != 0 )
      goto LABEL_4;
  }
  if ( --this->m_mutex.m_depth == 0 )
    goto LABEL_8;
}


// CGameEventManager::GetEventDescriptor  (line 1047, @0x00000000020a81b0, libserver.so)  // inlines: Element, Find, GetElementName, Key, LeftChild, RightChild, operator(), operator[]
// calls: V_stricmp_fast
// callers: CGameEventManager::ParseEventList, CGameEventManager::CreateEvent, CGameEventManager::LookupEventId, CGameEventManager::FindListener, CGameEventManager::AddListener, CGameEventManager::RegisterEvent, CSource2Server::OnHostNameChanged, CSource2GameClients::StartHLTVServer
CGameEventDescriptor *__fastcall CGameEventManager::GetEventDescriptor(
        CGameEventManager *const this,
        const char *name,
        int *pCookie)
{
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v8; // rbx
  CGameEventDescriptor *result; // rax
  CGameEventDescriptor *v10; // r12
  int v11; // edx
  __int64 elem; // rax
  _QWORD v13[8]; // [rsp+0h] [rbp-40h] BYREF

  if ( name == 0 || *name == 0 )
    return 0;
  if ( pCookie != 0 && *pCookie != 0 )
  {
    v10 = &this->m_GameEvents.m_Memory.m_pMemory[(*pCookie & 0x7FFFFFFF)];
    v11 = V_stricmp_fast(this->m_EventMap.m_Elements.m_Tree.m_Elements.m_pMemory[v10->elementIndex].m_Data.key, name);
    result = v10;
    if ( v11 == 0 )
      return result;
  }
  m_Root = this->m_EventMap.m_Elements.m_Tree.m_Root;
  v13[0] = name;
  if ( m_Root == -1 )
    return 0;
  m_pMemory = this->m_EventMap.m_Elements.m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = m_Root;
      if ( !this->m_EventMap.m_Elements.m_Tree.m_LessFunc.m_LessFunc(v13, &m_pMemory[v8].m_Data) )
        break;
      m_pMemory = this->m_EventMap.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[m_Root].m_Left;
      if ( m_Root == -1 )
        return 0;
    }
    if ( !this->m_EventMap.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &this->m_EventMap.m_Elements.m_Tree.m_Elements.m_pMemory[v8].m_Data,
            v13) )
      break;
    m_pMemory = this->m_EventMap.m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v8].m_Right;
    if ( m_Root == -1 )
      return 0;
  }
  elem = this->m_EventMap.m_Elements.m_Tree.m_Elements.m_pMemory[v8].m_Data.elem;
  if ( pCookie != 0 )
    *pCookie = elem | 0x80000000;
  return &this->m_GameEvents.m_Memory.m_pMemory[elem];
}


// CGameEventManager::LookupEventId  (line 1076, @0x00000000020a8670, libserver.so)  // inlines: CAutoLockT, Lock, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, ~CAutoLockT
// calls: ThreadGetCurrentId, CThreadFastMutex::Lock(ulong long,uint), CGameEventManager::GetEventDescriptor, ThreadInterlockedExchange64, _Unwind_Resume
int __fastcall CGameEventManager::LookupEventId(CGameEventManager *const this, const char *name)
{
  CThreadFastMutex *p_m_mutex; // r13
  signed __int64 CurrentId; // rsi
  CGameEventDescriptor *EventDescriptor; // rax
  int eventid; // r12d

  if ( name == 0 || *name == 0 )
    return -1;
  p_m_mutex = &this->m_mutex;
  CurrentId = ThreadGetCurrentId(this);
  if ( CurrentId == this->m_mutex.m_ownerID || _InterlockedCompareExchange64(p_m_mutex, CurrentId, 0) == 0 )
  {
    ++this->m_mutex.m_depth;
  }
  else
  {
    _mm_pause();
    CThreadFastMutex::Lock(p_m_mutex, CurrentId, 0);
  }
  EventDescriptor = CGameEventManager::GetEventDescriptor(this, name, 0);
  eventid = -1;
  if ( EventDescriptor != 0 )
    eventid = EventDescriptor->eventid;
  if ( --this->m_mutex.m_depth == 0 )
    ThreadInterlockedExchange64(p_m_mutex, 0);
  return eventid;
}


// CGameEventManager::UpdateListenEventList  (line 1093, @0x00000000020a8770, libserver.so)
void __fastcall CGameEventManager::UpdateListenEventList(CGameEventManager *const this, CSplitScreenSlot slot)
{
  ;
}


// net_reloadgameevents  (line 1105, @0x00000000020a7250, libserver.so)
// calls: CGameEventManager::ReloadEventDefinitions
// globals: s_GameEventManager
void __fastcall net_reloadgameevents(const CCommandContext *const ctx, const CCommand *const args)
{
  CGameEventManager::ReloadEventDefinitions(&s_GameEventManager);
}


// CSource1LegacyGameEventGameSystem::~CSource1LegacyGameEventGameSystem  (line 1111, @0x00000000021028f0, libserver.so)  // inlines: CAutoLockT, Lock, Purge, RemoveAll, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator(), ~CAutoGameSystem, ~CAutoLockT, ~CUtlMemory, ~CUtlSlot, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorMT
// calls: ThreadGetCurrentId, ThreadInterlockedExchange64, IGameSystem::~IGameSystem, CThreadFastMutex::Lock(ulong long,uint), CUtlMemory<CUtlSignaller_Base*, int>::Purge
void __fastcall CSource1LegacyGameEventGameSystem::~CSource1LegacyGameEventGameSystem(
        CSource1LegacyGameEventGameSystem *const this)
{
  CSource1LegacyGameEventGameSystem::CServerSideClient_GameEventLegacyProxy *m_Clients; // r13
  bool *p_m_bRegisteredTestScriptChatScanner; // rbx
  __int64 v4; // rdi
  signed __int64 CurrentId; // rsi
  __int64 i; // rbx
  CUtlSignaller_Base *v7; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  _QWORD *v9; // rdi
  bool v10; // zf

  m_Clients = this->m_Clients;
  p_m_bRegisteredTestScriptChatScanner = &this->m_bRegisteredTestScriptChatScanner;
  this->_vptr_IGameSystem = off_3FF7330;
  do
  {
    p_m_bRegisteredTestScriptChatScanner -= 16;
    (**p_m_bRegisteredTestScriptChatScanner)(p_m_bRegisteredTestScriptChatScanner);
  }
  while ( m_Clients != p_m_bRegisteredTestScriptChatScanner );
  CurrentId = ThreadGetCurrentId(v4);
  if ( CurrentId != this->m_ConnectedSignallers.m_ownerID
    && _InterlockedCompareExchange64(
         &this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
         CurrentId,
         0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(
      &this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
      CurrentId,
      0);
  }
  else
  {
    ++this->m_ConnectedSignallers.m_depth;
  }
  for ( i = 0; this->m_ConnectedSignallers.m_Size > i; ++i )
  {
    v7 = this->m_ConnectedSignallers.m_Memory.m_pMemory[i];
    pfn = v7->m_SlotDeletionDelegate.m_Closure.m_pFunction.__pfn;
    v9 = (v7->m_SlotDeletionDelegate.m_Closure.m_pthis + v7->m_SlotDeletionDelegate.m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v9 - 1);
    (pfn)(v9, &this->CUtlSlot);
  }
  if ( --this->m_ConnectedSignallers.m_depth == 0 )
    ThreadInterlockedExchange64(&this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>, 0);
  v10 = (this->m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ConnectedSignallers.m_Size = 0;
  if ( v10 )
  {
    CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_ConnectedSignallers.m_Memory);
    if ( (this->m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_ConnectedSignallers.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CSource1LegacyGameEventGameSystem::~CSource1LegacyGameEventGameSystem  (line 1111, @0x0000000002102a40, libserver.so)  // inlines: CAutoLockT, Lock, Purge, RemoveAll, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator(), ~CAutoGameSystem, ~CAutoLockT, ~CSource1LegacyGameEventGameSystem, ~CUtlMemory, ~CUtlSlot, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorMT
// calls: ThreadGetCurrentId, ThreadInterlockedExchange64, IGameSystem::~IGameSystem, operator delete, CThreadFastMutex::Lock(ulong long,uint), CUtlMemory<CUtlSignaller_Base*, int>::Purge
void __fastcall CSource1LegacyGameEventGameSystem::~CSource1LegacyGameEventGameSystem(
        CSource1LegacyGameEventGameSystem *const this)
{
  CSource1LegacyGameEventGameSystem::CServerSideClient_GameEventLegacyProxy *m_Clients; // r13
  bool *p_m_bRegisteredTestScriptChatScanner; // rbx
  __int64 v4; // rdi
  signed __int64 CurrentId; // rsi
  __int64 i; // rbx
  CUtlSignaller_Base *v7; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  _QWORD *v9; // rdi
  bool v10; // zf

  m_Clients = this->m_Clients;
  p_m_bRegisteredTestScriptChatScanner = &this->m_bRegisteredTestScriptChatScanner;
  this->_vptr_IGameSystem = off_3FF7330;
  do
  {
    p_m_bRegisteredTestScriptChatScanner -= 16;
    (**p_m_bRegisteredTestScriptChatScanner)(p_m_bRegisteredTestScriptChatScanner);
  }
  while ( m_Clients != p_m_bRegisteredTestScriptChatScanner );
  CurrentId = ThreadGetCurrentId(v4);
  if ( CurrentId != this->m_ConnectedSignallers.m_ownerID
    && _InterlockedCompareExchange64(
         &this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
         CurrentId,
         0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(
      &this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
      CurrentId,
      0);
  }
  else
  {
    ++this->m_ConnectedSignallers.m_depth;
  }
  for ( i = 0; this->m_ConnectedSignallers.m_Size > i; ++i )
  {
    v7 = this->m_ConnectedSignallers.m_Memory.m_pMemory[i];
    pfn = v7->m_SlotDeletionDelegate.m_Closure.m_pFunction.__pfn;
    v9 = (v7->m_SlotDeletionDelegate.m_Closure.m_pthis + v7->m_SlotDeletionDelegate.m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v9 - 1);
    (pfn)(v9, &this->CUtlSlot);
  }
  if ( --this->m_ConnectedSignallers.m_depth == 0 )
    ThreadInterlockedExchange64(&this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>, 0);
  v10 = (this->m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ConnectedSignallers.m_Size = 0;
  if ( v10 )
  {
    CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_ConnectedSignallers.m_Memory);
    if ( (this->m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_ConnectedSignallers.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CSource1LegacyGameEventGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 1113, @0x00000000020f15a0, libserver.so)
void __fastcall CSource1LegacyGameEventGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CSource1LegacyGameEventGameSystem *const this)
{
  ;
}


// CSource1LegacyGameEventGameSystem::DoesGameSystemReallocate  (line 1113, @0x00000000020f15b0, libserver.so)
// globals: CSource1LegacyGameEventGameSystem::sm_Factory
bool __fastcall CSource1LegacyGameEventGameSystem::DoesGameSystemReallocate(
        const CSource1LegacyGameEventGameSystem *const this)
{
  return (*(CSource1LegacyGameEventGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CSource1LegacyGameEventGameSystem::sm_Factory);
}


// CSource1LegacyGameEventGameSystem::SetGameSystemGlobalPtrs  (line 1113, @0x00000000020f15d0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CSource1LegacyGameEventGameSystem::sm_Factory
void __fastcall CSource1LegacyGameEventGameSystem::SetGameSystemGlobalPtrs(
        CSource1LegacyGameEventGameSystem *const this,
        void *pValue)
{
  if ( CSource1LegacyGameEventGameSystem::sm_Factory != 0 )
    (*(CSource1LegacyGameEventGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CSource1LegacyGameEventGameSystem::sm_Factory,
      pValue);
}


// CSource1LegacyGameEventGameSystem::GameInit  (line 1116, @0x0000000002115580, libserver.so)  // inlines: Bind, CUtlDelegate, CUtlDelegate<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem>, Convert<CSource1LegacyGameEventGameSystem, bool (CSource1LegacyGameEventGameSystem::*)(const Source1LegacyListenEvents_t&), void (detail::GenericClass::*)()>, Convert<FastDelegate1<const CUserMessageSayText2_t&, bool>, bool (FastDelegate1<const CUserMessageSayText2_t&, bool>::*)(const CUserMessageSayText2_t&)const, void (detail::GenericClass::*)()>, FastDelegate1, FastDelegate1<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem>, IsDedicatedServer, RegisterGameEventHandler<CUserMessageSayText2_t>, RegisterGameEventHandler<Source1LegacyListenEvents_t>, UtlMakeDelegate<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem, const Source1LegacyListenEvents_t&, bool>, UtlMakeDelegate<const CUserMessageSayText2_t&, bool>, bindmemfunc<CSource1LegacyGameEventGameSystem, bool (CSource1LegacyGameEventGameSystem::*)(const Source1LegacyListenEvents_t&)>, bindmemfunc<FastDelegate1<const CUserMessageSayText2_t&, bool>, bool (FastDelegate1<const CUserMessageSayText2_t&, bool>::*)(const CUserMessageSayText2_t&)const>, bindstaticfunc<FastDelegate1<const CUserMessageSayText2_t&, bool>, bool (FastDelegate1<const CUserMessageSayText2_t&, bool>::*)(const CUserMessageSayText2_t&)const>
// globals: CSource1LegacyGameEventGameSystem::OnSource1LegacyGameEventListenBitsReceived(Source1LegacyListenEvents_t const&), IGameEventSystem::FindOrCreateGameEvent<Source1LegacyListenEvents_t>(bool)::s_hEvent, FastDelegate1<CUserMessageSayText2_t const&,bool>::InvokeStaticFunction(CUserMessageSayText2_t const&), ScanChatMessagesForTestingCheckPoints(CUserMessageSayText2_t const&), IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayText2_t>(bool)::s_hEvent
void __fastcall CSource1LegacyGameEventGameSystem::GameInit(
        CSource1LegacyGameEventGameSystem *const this,
        const EventGameInit_t *const msg)
{
  CUtlSlot *v2; // r12
  int v4; // r15d
  IGameEventSystem *v5; // rdi
  __int64 v6; // rcx
  CSource1LegacyGameEventGameSystem *v7; // [rsp+0h] [rbp-50h] BYREF
  void *v8; // [rsp+8h] [rbp-48h]
  __int64 v9; // [rsp+10h] [rbp-40h]

  v2 = &this->CUtlSlot;
  v7 = this;
  v8 = CSource1LegacyGameEventGameSystem::OnSource1LegacyGameEventListenBitsReceived;
  v9 = 0;
  (*(*g_pGameEventSystem + 96LL))(
    g_pGameEventSystem,
    &this->CUtlSlot,
    &v7,
    IGameEventSystem::FindOrCreateGameEvent<Source1LegacyListenEvents_t>(bool)::s_hEvent,
    0);
  v4 = (*(g_pApplication->_vptr_IAppSystem + 33))(g_pApplication);
  if ( g_pTestScriptMgr != 0 && (*(*g_pTestScriptMgr + 104LL))(g_pTestScriptMgr) != 0 && v4 == 2 )
  {
    v5 = g_pGameEventSystem;
    v8 = FastDelegate1<CUserMessageSayText2_t const&,bool>::InvokeStaticFunction;
    v7 = ScanChatMessagesForTestingCheckPoints;
    v6 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayText2_t>(bool)::s_hEvent;
    this->m_bRegisteredTestScriptChatScanner = 1;
    v9 = 0;
    (*(*v5 + 96LL))(v5, v2, &v7, v6, 0);
  }
}


// CSource1LegacyGameEventGameSystem::GameShutdown  (line 1142, @0x0000000002115660, libserver.so)  // inlines: Bind, CUtlDelegate, CUtlDelegate<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem>, Convert<CSource1LegacyGameEventGameSystem, bool (CSource1LegacyGameEventGameSystem::*)(const Source1LegacyListenEvents_t&), void (detail::GenericClass::*)()>, Convert<FastDelegate1<const CUserMessageSayText2_t&, bool>, bool (FastDelegate1<const CUserMessageSayText2_t&, bool>::*)(const CUserMessageSayText2_t&)const, void (detail::GenericClass::*)()>, DisconnectAllProxies, DisconnectPlayer, FastDelegate1, FastDelegate1<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem>, UnregisterGameEventHandler<CUserMessageSayText2_t>, UnregisterGameEventHandler<Source1LegacyListenEvents_t>, UtlMakeDelegate<CSource1LegacyGameEventGameSystem, CSource1LegacyGameEventGameSystem, const Source1LegacyListenEvents_t&, bool>, UtlMakeDelegate<const CUserMessageSayText2_t&, bool>, bindmemfunc<CSource1LegacyGameEventGameSystem, bool (CSource1LegacyGameEventGameSystem::*)(const Source1LegacyListenEvents_t&)>, bindmemfunc<FastDelegate1<const CUserMessageSayText2_t&, bool>, bool (FastDelegate1<const CUserMessageSayText2_t&, bool>::*)(const CUserMessageSayText2_t&)const>, bindstaticfunc<FastDelegate1<const CUserMessageSayText2_t&, bool>, bool (FastDelegate1<const CUserMessageSayText2_t&, bool>::*)(const CUserMessageSayText2_t&)const>
// calls: CGameEventManager::RemoveListener
// globals: s_GameEventManager, CSource1LegacyGameEventGameSystem::OnSource1LegacyGameEventListenBitsReceived(Source1LegacyListenEvents_t const&), IGameEventSystem::FindOrCreateGameEvent<Source1LegacyListenEvents_t>(bool)::s_hEvent, FastDelegate1<CUserMessageSayText2_t const&,bool>::InvokeStaticFunction(CUserMessageSayText2_t const&), ScanChatMessagesForTestingCheckPoints(CUserMessageSayText2_t const&), IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayText2_t>(bool)::s_hEvent
void __fastcall CSource1LegacyGameEventGameSystem::GameShutdown(
        CSource1LegacyGameEventGameSystem *const this,
        const EventGameShutdown_t *const msg)
{
  CSource1LegacyGameEventGameSystem::CServerSideClient_GameEventLegacyProxy *m_Clients; // r12
  __int64 i; // rbx
  IGameEventListener2 *v5; // rsi
  IGameEventSystem *v6; // rdi
  CSource1LegacyGameEventGameSystem *v7; // [rsp+0h] [rbp-40h] BYREF
  void *v8; // [rsp+8h] [rbp-38h]
  __int64 v9; // [rsp+10h] [rbp-30h]

  m_Clients = this->m_Clients;
  for ( i = 0; i != 65; ++i )
  {
    v5 = &m_Clients[i];
    CGameEventManager::RemoveListener(&s_GameEventManager, v5);
  }
  v7 = this;
  v9 = 0;
  v8 = CSource1LegacyGameEventGameSystem::OnSource1LegacyGameEventListenBitsReceived;
  (*(*g_pGameEventSystem + 104LL))(
    g_pGameEventSystem,
    &this->CUtlSlot,
    &v7,
    IGameEventSystem::FindOrCreateGameEvent<Source1LegacyListenEvents_t>(bool)::s_hEvent);
  if ( this->m_bRegisteredTestScriptChatScanner )
  {
    v6 = g_pGameEventSystem;
    v8 = FastDelegate1<CUserMessageSayText2_t const&,bool>::InvokeStaticFunction;
    this->m_bRegisteredTestScriptChatScanner = 0;
    v9 = 0;
    v7 = ScanChatMessagesForTestingCheckPoints;
    (*(*v6 + 104LL))(
      v6,
      &this->CUtlSlot,
      &v7,
      IGameEventSystem::FindOrCreateGameEvent<CUserMessageSayText2_t>(bool)::s_hEvent);
  }
}


// CSource1LegacyGameEventGameSystem::CServerSideClient_GameEventLegacyProxy::~CServerSideClient_GameEventLegacyProxy  (line 1165, @0x00000000020f2200, libserver.so)  // inlines: ~IGameEventListener2
void __fastcall CSource1LegacyGameEventGameSystem::CServerSideClient_GameEventLegacyProxy::~CServerSideClient_GameEventLegacyProxy(
        CSource1LegacyGameEventGameSystem::CServerSideClient_GameEventLegacyProxy *const this)
{
  this->_vptr_IGameEventListener2 = off_3FB3150;
}


// CSource1LegacyGameEventGameSystem::CServerSideClient_GameEventLegacyProxy::~CServerSideClient_GameEventLegacyProxy  (line 1165, @0x00000000020f4cc0, libserver.so)  // inlines: ~CServerSideClient_GameEventLegacyProxy, ~IGameEventListener2
// calls: operator delete
void __fastcall CSource1LegacyGameEventGameSystem::CServerSideClient_GameEventLegacyProxy::~CServerSideClient_GameEventLegacyProxy(
        CSource1LegacyGameEventGameSystem::CServerSideClient_GameEventLegacyProxy *const this)
{
  this->_vptr_IGameEventListener2 = off_3FB3150;
  operator delete(this);
}


// CSource1LegacyGameEventGameSystem::CServerSideClient_GameEventLegacyProxy::FireGameEvent  (line 1168, @0x0000000002102750, libserver.so)  // inlines: CNetMessagePB, FindGameEvent<Source1LegacyGameEvent_t>, FindOrCreateGameEvent<Source1LegacyGameEvent_t>, GetInstance, GetRaw, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, PostEvent<Source1LegacyGameEvent_t>, Source1LegacyGameEvent_t, ToBasePlayer, ~CNetMessagePB, ~Source1LegacyGameEvent_t
// calls: CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent, CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent, _Unwind_Resume
// globals: g_pGameEntitySystem, gameeventmanager, IGameEventSystem::FindOrCreateGameEvent<Source1LegacyGameEvent_t>(bool)::s_hEvent
void __fastcall CSource1LegacyGameEventGameSystem::CServerSideClient_GameEventLegacyProxy::FireGameEvent(
        CSource1LegacyGameEventGameSystem::CServerSideClient_GameEventLegacyProxy *const this,
        IGameEvent *event)
{
  int32 m_Data; // eax
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v6; // rdx
  char v7; // al
  unsigned int v8; // r14d
  __int64 v9; // r15
  int v10; // r12d
  IGameEventSystem *v11; // r13
  void (__fastcall *v12)(IGameEventSystem *, __int64, _QWORD, _QWORD, __int64 *, __int64, _QWORD *, __int64, int); // [rsp+18h] [rbp-88h]
  __int64 v13; // [rsp+28h] [rbp-78h] BYREF
  _QWORD v14[14]; // [rsp+30h] [rbp-70h] BYREF

  m_Data = this->m_nPlayerEntity.m_Data;
  if ( m_Data <= 0x7FFE )
  {
    v4 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[m_Data >> 9];
    if ( v4 != 0 )
    {
      v6 = &v4[m_Data & 0x1FF];
      if ( v6 != 0
        && m_Data == (v6->m_EHandle.m_Index & 0x7FFF)
        && v6->m_pInstance != 0
        && (*(v6->m_pInstance->_vptr_IHandleEntity + 140))(v6->m_pInstance) != 0 )
      {
        CMsgSource1LegacyGameEvent::CMsgSource1LegacyGameEvent(v14);
        v14[0] = off_3FF70D0;
        if ( (*(gameeventmanager->_vptr_IBaseInterface + 12))(gameeventmanager, event, v14) != 0 )
        {
          v7 = (*(event->_vptr_IGameEvent + 4))(event);
          v8 = this->m_nPlayerEntity.m_Data;
          v9 = IGameEventSystem::FindOrCreateGameEvent<Source1LegacyGameEvent_t>(bool)::s_hEvent;
          v10 = v7 == 0 ? -1 : 1;
          v11 = g_pGameEventSystem;
          v13 = 1LL << (v8 - 1);
          v12 = *(*g_pGameEventSystem + 120LL);
          (*(*g_pNetworkMessages + 96LL))(
            g_pNetworkMessages,
            IGameEventSystem::FindOrCreateGameEvent<Source1LegacyGameEvent_t>(bool)::s_hEvent);
          v12(v11, 0xFFFFFFFFLL, 0, v8, &v13, v9, v14, 64, v10);
        }
        v14[0] = &off_3FF7010;
        CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent(v14);
      }
    }
  }
}


// CSource1LegacyGameEventGameSystem::OnSource1LegacyGameEventListenBitsReceived  (line 1226, @0x00000000021152d0, libserver.so)  // inlines: CBitVec, CBitVecT, ClearAll, Get, SetDWord, memset
// calls: CGameEventManager::RemoveListener, CGameEventManager::GetEventDescriptor, CGameEventManager::AddListener, DevMsg(char const*,...)
// strings: "OnSource1LegacyGameEventListenBitsReceived: game event %i not found.\n"
// globals: s_GameEventManager
bool __fastcall CSource1LegacyGameEventGameSystem::OnSource1LegacyGameEventListenBitsReceived(
        CSource1LegacyGameEventGameSystem *const this,
        const Source1LegacyListenEvents_t *const msg)
{
  CSource1LegacyGameEventGameSystem::CServerSideClient_GameEventLegacyProxy *v3; // r13
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rsi
  unsigned int v7; // edx
  unsigned int i; // ebx
  CGameEventDescriptor *EventDescriptor; // rax
  CBitVec<512> bitVec; // [rsp+0h] [rbp-60h] BYREF

  v3 = &this->m_Clients[*(msg + 10)];
  CGameEventManager::RemoveListener(&s_GameEventManager, v3);
  v4 = 0;
  memset(&bitVec, 0, sizeof(bitVec));
  v5 = *(msg + 8);
  if ( v5 <= 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = *(msg + 3);
    do
    {
      bitVec.m_Ints[v4] = *(v6 + 4 * v4);
      ++v4;
    }
    while ( v5 > v4 );
    v7 = bitVec.m_Ints[0];
  }
  for ( i = 0; ; v7 = bitVec.m_Ints[i >> 5] )
  {
    if ( ((1 << i) & v7) == 0 )
    {
      if ( ++i == 512 )
        return 1;
      continue;
    }
    EventDescriptor = CGameEventManager::GetEventDescriptor(&s_GameEventManager, i);
    if ( EventDescriptor == 0 )
      break;
    ++i;
    CGameEventManager::AddListener(&s_GameEventManager, v3, EventDescriptor, 2);
    if ( i == 512 )
      return 1;
  }
  DevMsg("OnSource1LegacyGameEventListenBitsReceived: game event %i not found.\n", i);
  return 0;
}


// CSource1LegacyGameEventGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 1294, @0x00000000020a8780, libserver.so)
void __cdecl CSource1LegacyGameEventGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GetLegacyGameEventListener  (line 1296, @0x00000000020a8790, libserver.so)
// callers: CSource2GameClients::StartHLTVServer
// globals: g_pSource1GameEvents
IGameEventListener2 *__fastcall GetLegacyGameEventListener(CEntityIndex nMasterClientEntityIndex)
{
  if ( g_pSource1GameEvents != 0 )
    return (&g_pSource1GameEvents->m_ConnectedSignallers.Mutex_t.m_depth + 4 * nMasterClientEntityIndex.m_Data);
  else
    return 0;
}


// OnSource1GameEventsDisconnectPlayer  (line 1307, @0x00000000020cf560, libserver.so)  // inlines: DisconnectPlayer
// calls: CGameEventManager::RemoveListener
// callers: CSource2GameClients::ClientDisconnect
// globals: g_pSource1GameEvents, s_GameEventManager
void __fastcall OnSource1GameEventsDisconnectPlayer(CEntityIndex nPlayerEntity)
{
  if ( g_pSource1GameEvents != 0 )
    CGameEventManager::RemoveListener(
      &s_GameEventManager,
      &g_pSource1GameEvents->m_ConnectedSignallers.Mutex_t.m_depth + 2 * nPlayerEntity.m_Data);
}


// ScanChatMessagesForTestingCheckPoints  (line 1316, @0x00000000020a87c0, libserver.so)  // inlines: V_strnicmp_fast<long unsigned int>
// calls: _V_strnicmp_fast, __stack_chk_fail
// callers: ScanChatMessagesForTestingCheckPoints, Host_Say
// local variable allocation has failed, the output may be wrong!
void __fastcall ScanChatMessagesForTestingCheckPoints(const char *szText)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _BYTE szTestString[20]; // [rsp+0h] [rbp-30h] OVERLAPPED BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-18h]

  v7 = __readfsqword(0x28u);
  if ( g_pTestScriptMgr != 0 && (*(*g_pTestScriptMgr + 104LL))(g_pTestScriptMgr) != 0 )
  {
    strcpy(szTestString, "Test_CheckPoint ");
    if ( szText != 0 && _V_strnicmp_fast(szText, szTestString, 16) == 0 )
      (*(*g_pTestScriptMgr + 96LL))(
        g_pTestScriptMgr,
        szText + 16,
        v2,
        v3,
        v4,
        v5,
        *szTestString,
        *&szTestString[8],
        *&szTestString[16],
        v7);
  }
}


// ScanChatMessagesForTestingCheckPoints  (line 1328, @0x00000000020a8860, libserver.so)  // inlines: _M_data, c_str
// calls: ScanChatMessagesForTestingCheckPoints
bool __fastcall ScanChatMessagesForTestingCheckPoints(const CUserMessageSayText2_t *const msg)
{
  ScanChatMessagesForTestingCheckPoints(**(msg + 6));
  return 1;
}


