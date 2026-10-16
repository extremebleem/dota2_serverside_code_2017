// Reconstructed from DWARF by pahole; not original source.

// src/game/server/globalstate.cpp:104
class CGlobalState : public CAutoGameSystem {
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

	bool m_disableStateUpdates;  // +0x80
	bool m_bLevelLoaded;  // +0x81

	static int s_nGlobalsSerial;
	typedef CAutoGameSystem BaseClass;
	CGlobalState(CGlobalState &);
	CGlobalState(const CGlobalState &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CGlobalState *);
	CGlobalState();
	virtual void GameInit(const EventGameInit_t &);
	virtual void PreSpawnGroupLoad(const EventPreSpawnGroupLoad_t &);
	virtual void PostSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	virtual void PreSpawnGroupUnload(const EventPreSpawnGroupUnload_t &);
	virtual void PostSpawnGroupUnload(const EventPostSpawnGroupUnload_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	void EnableStateUpdates(bool);
	void SetState(int, GLOBALESTATE);
	GLOBALESTATE GetState(int);
	void SetCounter(int, int);
	int AddToCounter(int, int);
	int GetCounter(int);
	void SetMap(int, string_t);
	const char * GetMap(int);
	const char * GetName(int);
	int GetIndex(const char *);
	int AddEntity(const char *, const char *, GLOBALESTATE);
	int GetNumGlobals();
	void Reset();
	int GetGlobalsSerial();
	virtual ~CGlobalState();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[14] PreSpawnGroupLoad
	// vtable[15] PostSpawnGroupLoad
	// vtable[16] PreSpawnGroupUnload
	// vtable[17] PostSpawnGroupUnload
	// vtable[4] GameShutdown
	// sizeof = 136
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// globalentitydatabase_t::Save  (line 22, @0x0000000002274e20, libserver.so)  // inlines: SetSymbolTable
// calls: globalentitydatabase_t::DumpGlobals
// callers: SaveGlobalState
// strings: "GLOBAL"
// globals: globalentitydatabase_t::m_DataMap
int __fastcall globalentitydatabase_t::Save(globalentitydatabase_t *const this, ISave *const save)
{
  int result; // eax

  g_GlobalSymbolDataOps.m_pSymbolTable = &this->m_nameList;
  result = (*(save->_vptr_ISave + 6))(
             save,
             "GLOBAL",
             this,
             0,
             globalentitydatabase_t::m_DataMap.dataDesc,
             globalentitydatabase_t::m_DataMap.dataNumFields);
  if ( result != 0 )
  {
    globalentitydatabase_t::DumpGlobals(this, 1);
    return 1;
  }
  return result;
}


// globalentitydatabase_t::Restore  (line 39, @0x0000000002274e80, libserver.so)  // inlines: SetSymbolTable
// calls: globalentitydatabase_t::DumpGlobals
// callers: SkipGlobalState, RestoreGlobalState
// strings: "GLOBAL"
// globals: globalentitydatabase_t::m_DataMap
int __fastcall globalentitydatabase_t::Restore(
        globalentitydatabase_t *const this,
        IRestore *const restore,
        bool bSkipping)
{
  int result; // eax

  g_GlobalSymbolDataOps.m_pSymbolTable = &this->m_nameList;
  result = (*(restore->_vptr_IRestore + 3))(
             restore,
             "GLOBAL",
             this,
             0,
             globalentitydatabase_t::m_DataMap.dataDesc,
             globalentitydatabase_t::m_DataMap.dataNumFields);
  if ( result != 0 )
  {
    result = 1;
    if ( !bSkipping )
    {
      globalentitydatabase_t::DumpGlobals(this, 1);
      return 1;
    }
  }
  return result;
}


// globalentitydatabase_t::DumpGlobals  (line 57, @0x0000000002274a80, libserver.so)  // inlines: AddToTail, AddToTailGetPtr, CUtlMemory, CUtlString, CUtlSymbol, CUtlVector, CUtlVectorBase, Construct<CUtlString>, CopyConstruct<CUtlString>, Destruct<CUtlString>, Element, GrowMemory, Purge, RemoveAll, String, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::Set, CUtlString::Get, CUtlString::FreeMemoryBlock, CUtlSymbolTable::String, CUtlString::Format, CUtlMemory<CUtlString, int>::Grow, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CUtlMemory<CUtlString, int>::Purge, _Unwind_Resume
// callers: globalentitydatabase_t::Save, globalentitydatabase_t::Restore, dump_globals
// strings: "-- Globals --\n", "%32.32s: %4.4s, counter % 4d, level %s\n"
// globals: globalentitydatabase_t::DumpGlobals(bool)::estates, LOG_GLOBALSTATE
void __fastcall globalentitydatabase_t::DumpGlobals(globalentitydatabase_t *const this, bool bDetailed)
{
  __int64 m_Size; // r12
  int v4; // eax
  CUtlString *v5; // r12
  const char *v6; // rax
  __int64 v7; // r12
  int v8; // r13d
  __int64 v9; // r14
  const char *v10; // r15
  globalentity_t *v11; // rax
  int counter; // r14d
  const char *v13; // rdx
  const char *v14; // rax
  __int64 v15; // r14
  int v16; // eax
  int v17; // r13d
  __int64 v18; // r12
  int v19; // ebx
  const CUtlString *v20; // r13
  const char *v21; // rax
  __int64 i; // rbx
  const char *v23; // rax
  CUtlString *v25; // [rsp+20h] [rbp-80h]
  const char *v26; // [rsp+28h] [rbp-78h]
  UtlSymId_t m_Id; // [rsp+30h] [rbp-70h] BYREF
  CUtlString v28; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > globals; // [rsp+50h] [rbp-50h] BYREF

  globals.m_Size = 0;
  globals.m_Memory.m_pMemory = 0;
  globals.m_Memory.m_nAllocationCount = 0;
  globals.m_Memory.m_nGrowSize = 0;
  v28.m_pString = 0;
  CUtlString::Set(&v28, "-- Globals --\n");
  m_Size = globals.m_Size;
  v4 = globals.m_Size;
  if ( globals.m_Size == globals.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CUtlString,int>::Grow(&globals.m_Memory, 1);
    v4 = globals.m_Size;
  }
  globals.m_Size = v4 + 1;
  v5 = &globals.m_Memory.m_pMemory[m_Size];
  if ( v5 != 0 )
  {
    v5->m_pString = 0;
    v6 = CUtlString::Get(&v28);
    CUtlString::Set(v5, v6);
  }
  if ( v28.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&v28);
  if ( this->m_list.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v15 = globals.m_Size;
      v16 = globals.m_Size;
      if ( globals.m_Size == globals.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&globals.m_Memory, 1);
        v16 = globals.m_Size;
      }
      v9 = v15;
      globals.m_Size = v16 + 1;
      if ( &globals.m_Memory.m_pMemory[v9] != 0 )
      {
        globals.m_Memory.m_pMemory[v9].m_pString = 0;
        v25 = &globals.m_Memory.m_pMemory[v9];
      }
      else
      {
        v25 = 0;
      }
      LOWORD(v28.m_pString) = this->m_list.m_Memory.m_pMemory[v7].levelName.m_Id;
      v10 = CUtlSymbolTable::String(&this->m_nameList, &v28);
      v11 = &this->m_list.m_Memory.m_pMemory[v7];
      counter = v11->counter;
      v13 = globalentitydatabase_t::DumpGlobals(bool)::estates[v11->state];
      m_Id = v11->name.m_Id;
      v26 = v13;
      v14 = CUtlSymbolTable::String(&this->m_nameList, &m_Id);
      CUtlString::Format(v25, "%32.32s: %4.4s, counter % 4d, level %s\n", v14, v26, counter, v10);
      ++v8;
      ++v7;
    }
    while ( this->m_list.m_Size > v8 );
  }
  v17 = globals.m_Size;
  if ( globals.m_Size > 0 )
  {
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      v20 = &globals.m_Memory.m_pMemory[v18];
      if ( bDetailed )
        break;
      if ( LoggingSystem_IsChannelEnabled(LOG_GLOBALSTATE, 1) != 0 )
      {
        v21 = CUtlString::Get(v20);
        LoggingSystem_Log(LOG_GLOBALSTATE, 1, "%s", v21);
        v17 = globals.m_Size;
        ++v19;
        ++v18;
        if ( globals.m_Size <= v19 )
          goto LABEL_23;
      }
      else
      {
LABEL_19:
        v17 = globals.m_Size;
        ++v19;
        ++v18;
        if ( globals.m_Size <= v19 )
          goto LABEL_23;
      }
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_GLOBALSTATE, 0) != 0 )
    {
      v23 = CUtlString::Get(v20);
      LoggingSystem_Log(LOG_GLOBALSTATE, 0, "%s", v23);
    }
    goto LABEL_19;
  }
LABEL_23:
  for ( i = 8LL * v17 - 8; --v17 >= 0; i -= 8 )
  {
    if ( *(&globals.m_Memory.m_pMemory->m_pString + i) != 0 )
      CUtlString::FreeMemoryBlock((globals.m_Memory.m_pMemory + i));
  }
  globals.m_Size = 0;
  if ( (globals.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlString,int>::Purge(&globals.m_Memory);
    if ( (globals.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&globals.m_Memory);
  }
}


// globalentity_t::AddDatadescMetadataKeys  (line 90, @0x0000000002266430, libserver.so)
void __fastcall globalentity_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// globalentity_t::GetBaseMap  (line 90, @0x0000000002266440, libserver.so)
datamap_t *__cdecl globalentity_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<globalentity_t>  (line 90, @0x0000000002266450, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "globalentity_t"
// globals: `guard variable for'DataMapInit<globalentity_t>(globalentity_t *)::nameHolder, globalentity_t::m_DataMap, DataMapInit<globalentity_t>(globalentity_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<globalentity_t>(globalentity_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<globalentity_t>(globalentity_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<globalentity_t>(globalentity_t *)::nameHolder) != 0 )
  {
    DataMapInit<globalentity_t>(globalentity_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<globalentity_t>(globalentity_t *)::nameHolder.m_pszBase = "globalentity_t";
    DataMapInit<globalentity_t>(globalentity_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<globalentity_t>(globalentity_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<globalentity_t>(globalentity_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<globalentity_t>(globalentity_t *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<globalentity_t>(globalentity_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<globalentity_t>(globalentity_t *)::nameHolder,
      &_dso_handle);
  }
  globalentity_t::m_DataMap.baseMap = 0;
  globalentity_t::m_DataMap.dataDesc = &DataMapInit<globalentity_t>(globalentity_t *)::dataDesc[1];
  globalentity_t::m_DataMap.dataNumFields = 4;
  return &globalentity_t::m_DataMap;
}


// globalentitydatabase_t::AddDatadescMetadataKeys  (line 99, @0x0000000002266510, libserver.so)
void __fastcall globalentitydatabase_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// globalentitydatabase_t::GetBaseMap  (line 99, @0x0000000002266520, libserver.so)
datamap_t *__cdecl globalentitydatabase_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<globalentitydatabase_t>  (line 99, @0x0000000002266530, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CUtlVector<globalentity_t> >
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "globalentitydatabase_t"
// globals: `guard variable for'DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::nameHolder, `guard variable for'DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::dataDesc, globalentitydatabase_t::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>>>(CUtlVector<globalentity_t,CUtlMemor, CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>>>(CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int, DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::nameHolder) != 0 )
  {
    DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::nameHolder.m_pszBase = "globalentitydatabase_t";
    DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::nameHolder.m_nLenBase = 22;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::nameHolder,
      &_dso_handle);
  }
  globalentitydatabase_t::m_DataMap.baseMap = 0;
  if ( `guard variable for'datamap_t * DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>>>(CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>>>(CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>>>(CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>> *)::ops = off_4056B50;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>>>(CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>> *)::ops);
    }
    DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::dataDesc[1].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>>>(CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>> *)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::dataDesc);
  }
  globalentitydatabase_t::m_DataMap.dataNumFields = 2;
  globalentitydatabase_t::m_DataMap.dataDesc = &DataMapInit<globalentitydatabase_t>(globalentitydatabase_t *)::dataDesc[1];
  return &globalentitydatabase_t::m_DataMap;
}


// CGlobalState::~CGlobalState  (line 104, @0x000000000227cc50, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~globalentitydatabase_t
// calls: CUtlSymbolTable::~CUtlSymbolTable, IGameSystem::~IGameSystem, CUtlMemory<globalentity_t, int>::Purge
void __fastcall CGlobalState::~CGlobalState(CGlobalState *const this)
{
  bool v2; // zf
  CUtlVectorBase<globalentity_t,CUtlMemory<globalentity_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_database.m_list.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_4051FD0;  // vptr: CGlobalState
  this->m_database.m_list.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_database.m_list.m_Memory;
    CUtlMemory<globalentity_t,int>::Purge(&this->m_database.m_list.m_Memory);
    if ( (this->m_database.m_list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<globalentity_t,int>::Purge(p_m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_database.m_nameList);
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CGlobalState::~CGlobalState  (line 104, @0x000000000227cd70, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CGlobalState, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~globalentitydatabase_t
// calls: CUtlSymbolTable::~CUtlSymbolTable, IGameSystem::~IGameSystem, operator delete, CUtlMemory<globalentity_t, int>::Purge
void __fastcall CGlobalState::~CGlobalState(CGlobalState *const this)
{
  bool v2; // zf
  CUtlVectorBase<globalentity_t,CUtlMemory<globalentity_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_database.m_list.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_4051FD0;  // vptr: CGlobalState
  this->m_database.m_list.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_database.m_list.m_Memory;
    CUtlMemory<globalentity_t,int>::Purge(&this->m_database.m_list.m_Memory);
    if ( (this->m_database.m_list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<globalentity_t,int>::Purge(p_m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_database.m_nameList);
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CGlobalState::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 106, @0x000000000227b200, libserver.so)
void __fastcall CGlobalState::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CGlobalState *const this)
{
  ;
}


// CGlobalState::DoesGameSystemReallocate  (line 106, @0x000000000227b210, libserver.so)
// globals: CGlobalState::sm_Factory
bool __fastcall CGlobalState::DoesGameSystemReallocate(const CGlobalState *const this)
{
  return (*(CGlobalState::sm_Factory->_vptr_IGameSystemFactory + 8))(CGlobalState::sm_Factory);
}


// CGlobalState::SetGameSystemGlobalPtrs  (line 106, @0x000000000227b230, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CGlobalState::sm_Factory
void __fastcall CGlobalState::SetGameSystemGlobalPtrs(CGlobalState *const this, void *pValue)
{
  if ( CGlobalState::sm_Factory != 0 )
    (*(CGlobalState::sm_Factory->_vptr_IGameSystemFactory + 7))(CGlobalState::sm_Factory, pValue);
}


// CGlobalState::GameInit  (line 114, @0x000000000227b260, libserver.so)
// globals: CGlobalState::s_nGlobalsSerial
void __fastcall CGlobalState::GameInit(CGlobalState *const this, const EventGameInit_t *const msg)
{
  ++CGlobalState::s_nGlobalsSerial;
  this->m_disableStateUpdates = 0;
}


// CGlobalState::PreSpawnGroupLoad  (line 120, @0x000000000227b280, libserver.so)
void __fastcall CGlobalState::PreSpawnGroupLoad(CGlobalState *const this, const EventPreSpawnGroupLoad_t *const msg)
{
  this->m_disableStateUpdates = 0;
}


// CGlobalState::PostSpawnGroupLoad  (line 126, @0x000000000227b290, libserver.so)
void __fastcall CGlobalState::PostSpawnGroupLoad(CGlobalState *const this, const EventPostSpawnGroupLoad_t *const msg)
{
  this->m_bLevelLoaded = 1;
}


// CGlobalState::PreSpawnGroupUnload  (line 133, @0x000000000227b2a0, libserver.so)
void __fastcall CGlobalState::PreSpawnGroupUnload(
        CGlobalState *const this,
        const EventPreSpawnGroupUnload_t *const msg)
{
  this->m_disableStateUpdates = 1;
}


// CGlobalState::PostSpawnGroupUnload  (line 143, @0x000000000227b2b0, libserver.so)
void __fastcall CGlobalState::PostSpawnGroupUnload(
        CGlobalState *const this,
        const EventPostSpawnGroupUnload_t *const msg)
{
  this->m_disableStateUpdates = 0;
}


// CGlobalState::GameShutdown  (line 151, @0x000000000227b2c0, libserver.so)
void __fastcall CGlobalState::GameShutdown(CGlobalState *const this, const EventGameShutdown_t *const msg)
{
  ;
}


// CGlobalState::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 275, @0x0000000002266680, libserver.so)
void __cdecl CGlobalState::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GlobalEntity_GetGlobalsSerial  (line 277, @0x0000000002266690, libserver.so)
// callers: CBasePlayer::PostThink
// globals: CGlobalState::s_nGlobalsSerial
int __cdecl GlobalEntity_GetGlobalsSerial()
{
  return CGlobalState::s_nGlobalsSerial;
}


// GlobalEntity_SetState  (line 282, @0x00000000022666a0, libserver.so)  // inlines: IsValidIndex, SetState, operator[]
// callers: CBaseEntity::UpdateOnRemove, CC_Global_Set, CEnvGlobal::InputToggle, CEnvGlobal::InputRemove, CEnvGlobal::InputTurnOn, CEnvGlobal::InputTurnOff, RegenerationForceOnChangeCallback
void __fastcall GlobalEntity_SetState(int globalIndex, GLOBALESTATE state)
{
  if ( !gGlobalState.m_disableStateUpdates && globalIndex >= 0 && globalIndex < gGlobalState.m_database.m_list.m_Size )
    gGlobalState.m_database.m_list.m_Memory.m_pMemory[globalIndex].state = state;
}


// GlobalEntity_SetCounter  (line 287, @0x00000000022666e0, libserver.so)  // inlines: IsValidIndex, SetCounter, operator[]
// callers: CEnvGlobal::InputSetCounter, CEnvGlobal::Spawn
void __fastcall GlobalEntity_SetCounter(int globalIndex, int counter)
{
  if ( !gGlobalState.m_disableStateUpdates && globalIndex >= 0 && globalIndex < gGlobalState.m_database.m_list.m_Size )
    gGlobalState.m_database.m_list.m_Memory.m_pMemory[globalIndex].counter = counter;
}


// GlobalEntity_AddToCounter  (line 292, @0x0000000002266710, libserver.so)  // inlines: AddToCounter, IsValidIndex, operator[]
// callers: CEnvGlobal::InputAddToCounter
int __fastcall GlobalEntity_AddToCounter(int globalIndex, int delta)
{
  int result; // eax
  globalentity_t *v3; // rdx

  result = 0;
  if ( !gGlobalState.m_disableStateUpdates && globalIndex >= 0 && globalIndex < gGlobalState.m_database.m_list.m_Size )
  {
    v3 = &gGlobalState.m_database.m_list.m_Memory.m_pMemory[globalIndex];
    result = delta + v3->counter;
    v3->counter = result;
  }
  return result;
}


// GlobalEntity_EnableStateUpdates  (line 297, @0x0000000002266750, libserver.so)  // inlines: EnableStateUpdates
// callers: CRespawnAllEntitiesSystem::FrameUpdatePostEntityThink
void __fastcall GlobalEntity_EnableStateUpdates(bool bEnable)
{
  gGlobalState.m_disableStateUpdates = !bEnable;
}


// GlobalEntity_SetMap  (line 302, @0x0000000002266760, libserver.so)  // inlines: IsValidIndex, SetMap, String, ToCStr, operator=
// calls: MakeEntitySystemString, CUtlSymbolTable::AddString
// callers: CEntitySaveRestoreBlockHandler::RestoreGlobalEntity
void __fastcall GlobalEntity_SetMap(int globalIndex, const char *pMapName)
{
  __int64 v2; // rbx
  const char *v3; // rdx
  UtlSymId_t v4; // [rsp+0h] [rbp-30h]
  char *pString; // [rsp+10h] [rbp-20h]

  v2 = globalIndex;
  MakeEntitySystemString(pMapName);
  if ( v2 >= 0 && v2 < gGlobalState.m_database.m_list.m_Size )
  {
    v3 = "";
    if ( pString != 0 )
      v3 = pString;
    CUtlSymbolTable::AddString(&gGlobalState.m_database.m_nameList, v3);
    gGlobalState.m_database.m_list.m_Memory.m_pMemory[v2].levelName.m_Id = v4;
  }
}


// GlobalEntity_Add  (line 307, @0x0000000002275f40, libserver.so)  // inlines: AddEntity, AddToTail, CUtlSymbol, CopyConstruct<globalentity_t>, Element, GetIndex, GrowMemory, IsValid, globalentity_t, operator=, operator[]
// calls: CUtlSymbolTable::AddString, CUtlSymbolTable::String, CUtlSymbolTable::Find, CUtlMemory<globalentity_t, int>::Grow
// callers: EntityPostSpawnDelegate, CEntitySaveRestoreBlockHandler::RestoreEntity, CC_Global_Set, CEnvGlobal::InputSetCounter, CEnvGlobal::InputAddToCounter, CEnvGlobal::Spawn, CEnvGlobal::InputToggle, CEnvGlobal::InputRemove, CEnvGlobal::InputTurnOn, CEnvGlobal::InputTurnOff, CEnvGlobal::InputGetCounter, RegenerationForceOnChangeCallback
// globals: CGlobalState::s_nGlobalsSerial
int __fastcall GlobalEntity_Add(const char *pGlobalname, const char *pMapName, GLOBALESTATE state)
{
  UtlSymId_t v5; // bx
  UtlSymId_t v6; // r12
  const char *v7; // rax
  int result; // eax
  __int64 v9; // rcx
  globalentity_t *v10; // rcx
  int m_Size; // r14d
  int v12; // edx
  globalentity_t *v13; // rdx
  CUtlSymbol id; // [rsp+0h] [rbp-40h] BYREF
  UtlSymId_t v15; // [rsp+10h] [rbp-30h]

  CUtlSymbolTable::AddString(&gGlobalState.m_database.m_nameList, pGlobalname);
  v5 = v15;
  CUtlSymbolTable::AddString(&gGlobalState.m_database.m_nameList, pMapName);
  v6 = v15;
  id.m_Id = v15;
  v7 = CUtlSymbolTable::String(&gGlobalState.m_database.m_nameList, &id);
  CUtlSymbolTable::Find(&gGlobalState.m_database.m_nameList, v7);
  if ( v15 == 0xFFFF )
  {
    m_Size = gGlobalState.m_database.m_list.m_Size;
  }
  else
  {
    result = gGlobalState.m_database.m_list.m_Size - 1;
    if ( gGlobalState.m_database.m_list.m_Size - 1 >= 0 )
    {
      v9 = result;
      if ( v15 == gGlobalState.m_database.m_list.m_Memory.m_pMemory[v9].name.m_Id )
        return result;
      v10 = &gGlobalState.m_database.m_list.m_Memory.m_pMemory[v9 - 1];
      while ( --result != -1 )
      {
        --v10;
        if ( v15 == v10[1].name.m_Id )
          return result;
      }
    }
    m_Size = gGlobalState.m_database.m_list.m_Size;
  }
  ++CGlobalState::s_nGlobalsSerial;
  if ( gGlobalState.m_database.m_list.m_Memory.m_nAllocationCount == m_Size )
  {
    CUtlMemory<globalentity_t,int>::Grow(&gGlobalState.m_database.m_list.m_Memory, 1);
    v12 = gGlobalState.m_database.m_list.m_Size;
  }
  else
  {
    v12 = m_Size;
  }
  gGlobalState.m_database.m_list.m_Size = v12 + 1;
  v13 = &gGlobalState.m_database.m_list.m_Memory.m_pMemory[m_Size];
  if ( v13 != 0 )
  {
    v13->name.m_Id = v5;
    v13->levelName.m_Id = v6;
    v13->state = state;
    v13->counter = 0;
  }
  return m_Size;
}


// GlobalEntity_GetIndex  (line 312, @0x00000000022667c0, libserver.so)  // inlines: GetIndex, IsValid, operator[]
// calls: CUtlSymbolTable::Find
// callers: EntityPostSpawnDelegate, CEntitySaveRestoreBlockHandler::RestoreEntity, CEntitySaveRestoreBlockHandler::RestoreGlobalEntity, CBaseEntity::UpdateOnRemove, CEnvGlobal::DrawDebugTextOverlays, CC_Global_Set, CEnvGlobal::InputSetCounter, CEnvGlobal::InputAddToCounter, CEnvGlobal::Spawn, CMultiSource::IsTriggered, CEnvGlobal::InputToggle, CEnvGlobal::InputRemove (18 total)
int __fastcall GlobalEntity_GetIndex(const char *pGlobalname)
{
  int result; // eax
  int v2; // edx
  __int64 v3; // rax
  globalentity_t *v4; // rax
  __int16 v5; // [rsp+0h] [rbp-10h]

  CUtlSymbolTable::Find(&gGlobalState.m_database.m_nameList, pGlobalname);
  result = -1;
  if ( v5 != -1 )
  {
    v2 = gGlobalState.m_database.m_list.m_Size - 1;
    if ( gGlobalState.m_database.m_list.m_Size - 1 >= 0 )
    {
      v3 = v2;
      if ( v5 != gGlobalState.m_database.m_list.m_Memory.m_pMemory[v3].name.m_Id )
      {
        v4 = &gGlobalState.m_database.m_list.m_Memory.m_pMemory[v3 - 1];
        do
        {
          if ( --v2 == -1 )
            break;
          --v4;
        }
        while ( v5 != v4[1].name.m_Id );
      }
      return v2;
    }
  }
  return result;
}


// GlobalEntity_GetState  (line 317, @0x0000000002266830, libserver.so)  // inlines: GetState, IsValidIndex, operator[]
// callers: CBaseEntity::ModifyOrAppendCriteria, EntityPostSpawnDelegate, CEntitySaveRestoreBlockHandler::RestoreEntity, CEnvGlobal::DrawDebugTextOverlays, CMultiSource::IsTriggered, CEnvGlobal::InputToggle, CLogicAuto::Think, CBasePlayer::PostThink
GLOBALESTATE __fastcall GlobalEntity_GetState(int globalIndex)
{
  GLOBALESTATE result; // al

  result = GLOBALESTATE::GLOBAL_OFF;
  if ( globalIndex >= 0 && globalIndex < gGlobalState.m_database.m_list.m_Size )
    return gGlobalState.m_database.m_list.m_Memory.m_pMemory[globalIndex].state;
  return result;
}


// GlobalEntity_GetCounter  (line 322, @0x0000000002266860, libserver.so)  // inlines: GetCounter, IsValidIndex, operator[]
// callers: CEnvGlobal::InputGetCounter
int __fastcall GlobalEntity_GetCounter(int globalIndex)
{
  int result; // eax

  result = 0;
  if ( globalIndex >= 0 && globalIndex < gGlobalState.m_database.m_list.m_Size )
    return gGlobalState.m_database.m_list.m_Memory.m_pMemory[globalIndex].counter;
  return result;
}


// GlobalEntity_GetMap  (line 327, @0x0000000002266890, libserver.so)  // inlines: CUtlSymbol, GetMap, IsValidIndex, operator[]
// calls: CUtlSymbolTable::String
// callers: EntityPostSpawnDelegate, CEntitySaveRestoreBlockHandler::RestoreEntity, CEntitySaveRestoreBlockHandler::RestoreGlobalEntity
const char *__fastcall GlobalEntity_GetMap(int globalIndex)
{
  __int64 v1; // rbp
  const char *result; // rax
  UtlSymId_t m_Id; // [rsp-18h] [rbp-18h] BYREF
  __int64 v4; // [rsp-8h] [rbp-8h]

  result = 0;
  if ( globalIndex >= 0 && globalIndex < gGlobalState.m_database.m_list.m_Size )
  {
    v4 = v1;
    m_Id = gGlobalState.m_database.m_list.m_Memory.m_pMemory[globalIndex].levelName.m_Id;
    return CUtlSymbolTable::String(&gGlobalState.m_database.m_nameList, &m_Id);
  }
  return result;
}


// GlobalEntity_GetName  (line 332, @0x00000000022668e0, libserver.so)  // inlines: CUtlSymbol, GetName, IsValidIndex, operator[]
// calls: CUtlSymbolTable::String
// callers: CBaseEntity::ModifyOrAppendCriteria
const char *__fastcall GlobalEntity_GetName(int globalIndex)
{
  __int64 v1; // rbp
  const char *result; // rax
  UtlSymId_t m_Id; // [rsp-18h] [rbp-18h] BYREF
  __int64 v4; // [rsp-8h] [rbp-8h]

  result = 0;
  if ( globalIndex >= 0 && globalIndex < gGlobalState.m_database.m_list.m_Size )
  {
    v4 = v1;
    m_Id = gGlobalState.m_database.m_list.m_Memory.m_pMemory[globalIndex].name.m_Id;
    return CUtlSymbolTable::String(&gGlobalState.m_database.m_nameList, &m_Id);
  }
  return result;
}


// GlobalEntity_GetNumGlobals  (line 337, @0x0000000002266930, libserver.so)
// callers: CBaseEntity::ModifyOrAppendCriteria
int __cdecl GlobalEntity_GetNumGlobals()
{
  return gGlobalState.m_database.m_list.m_Size;
}


// dump_globals  (line 342, @0x0000000002274fc0, libserver.so)
// calls: globalentitydatabase_t::DumpGlobals
void __fastcall dump_globals(const CCommandContext *const ctx, const CCommand *const args)
{
  globalentitydatabase_t::DumpGlobals(&gGlobalState.m_database, 0);
}


// CGlobalState::Reset  (line 347, @0x0000000002266940, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlMemory<globalentity_t, int>::Purge, CUtlSymbolTable::RemoveAll
// callers: ResetGlobalState, RestoreGlobalState
// globals: CGlobalState::s_nGlobalsSerial
void __fastcall CGlobalState::Reset(CGlobalState *const this)
{
  this->m_database.m_list.m_Size = 0;
  if ( (this->m_database.m_list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<globalentity_t,int>::Purge(&this->m_database.m_list.m_Memory);
  CUtlSymbolTable::RemoveAll(&this->m_database.m_nameList);
  ++CGlobalState::s_nGlobalsSerial;
}


// SaveGlobalState  (line 354, @0x0000000002279e70, libserver.so)
// calls: CSave::CSave, globalentitydatabase_t::Save, CSave::~CSave, _Unwind_Resume
// callers: CEntity2SaveRestore::SaveGame_Finalize
void __fastcall SaveGlobalState(CSaveRestoreData *pSaveData)
{
  CSave saveHelper; // [rsp+0h] [rbp-60h] BYREF

  CSave::CSave(&saveHelper, pSaveData);
  globalentitydatabase_t::Save(&gGlobalState.m_database, &saveHelper);
  CSave::~CSave(&saveHelper);
}


// RestoreGlobalState  (line 360, @0x0000000002274f00, libserver.so)  // inlines: Purge, RemoveAll, ~CRestore, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGlobalState::Reset, CRestore::CRestore, globalentitydatabase_t::Restore, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CEntity2SaveRestore::SaveReadHeaderAndSpawnGroupList
// globals: gGlobalState
void __fastcall RestoreGlobalState(CSaveRestoreData *pSaveData)
{
  CRestore restoreHelper; // [rsp+0h] [rbp-50h] BYREF

  CGlobalState::Reset(&gGlobalState);
  CRestore::CRestore(&restoreHelper, pSaveData);
  globalentitydatabase_t::Restore(&gGlobalState.m_database, &restoreHelper, 0);
  restoreHelper.m_BlockEndStack.m_Size = 0;
  restoreHelper._vptr_IRestore = &off_3FF5F30;
  if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
    if ( (restoreHelper.m_BlockEndStack.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&restoreHelper.m_BlockEndStack.m_Memory);
  }
}


// ResetGlobalState  (line 372, @0x0000000002266980, libserver.so)
// calls: CGlobalState::Reset
// callers: CSource1GameConfiguration::InitGameSession
// globals: gGlobalState
void __cdecl ResetGlobalState()
{
  CGlobalState::Reset(&gGlobalState);
}


// ShowServerGameTime  (line 378, @0x00000000022669a0, libserver.so)  // inlines: curtime
// calls: Msg
// callers: server_game_time
// strings: "Server game time: %f\n"
void __cdecl ShowServerGameTime()
{
  double m_flCurrentTime; // xmm0_8
  CGlobalVars *v1; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  v1 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v1->m_flCurrentTime;
  }
  Msg("Server game time: %f\n", m_flCurrentTime);
}


// server_game_time  (line 383, @0x0000000002266a00, libserver.so)
// calls: ShowServerGameTime
void __fastcall server_game_time(const CCommandContext *const ctx, const CCommand *const args)
{
  ShowServerGameTime();
}


// GetGordonPrecriminalState  (line 391, @0x0000000002266a10, libserver.so)  // inlines: CStaticGlobalEntityQuery, GetGlobalsSerial, GetIndex, GetState, GlobalEntity_GetGlobalsSerial, GlobalEntity_GetIndex, GlobalEntity_GetState, IsValid, IsValidIndex, operator[]
// calls: CUtlSymbolTable::Find, __cxa_guard_acquire, __cxa_guard_release
// strings: "gordon_precriminal"
// globals: `guard variable for'GetGordonPrecriminalState(void)::s_GordonPrecriminal, CGlobalState::s_nGlobalsSerial, GetGordonPrecriminalState(void)::s_GordonPrecriminal
GLOBALESTATE __cdecl GetGordonPrecriminalState()
{
  int v0; // ebx
  __int64 m_nIndex; // rdx
  int v2; // eax
  __int64 v3; // rdx
  globalentity_t *v4; // rdx
  GLOBALESTATE result; // al
  __int16 v6; // [rsp+0h] [rbp-20h]

  if ( `guard variable for'GetGordonPrecriminalState(void)::s_GordonPrecriminal != 0
    || __cxa_guard_acquire(&`guard variable for'GetGordonPrecriminalState(void)::s_GordonPrecriminal) == 0 )
  {
    v0 = CGlobalState::s_nGlobalsSerial;
    if ( CGlobalState::s_nGlobalsSerial == GetGordonPrecriminalState(void)::s_GordonPrecriminal.m_nGlobalSerial )
    {
LABEL_17:
      m_nIndex = GetGordonPrecriminalState(void)::s_GordonPrecriminal.m_nIndex;
      goto LABEL_11;
    }
  }
  else
  {
    GetGordonPrecriminalState(void)::s_GordonPrecriminal.m_nGlobalSerial = -1;
    GetGordonPrecriminalState(void)::s_GordonPrecriminal.m_pGlobalName = "gordon_precriminal";
    GetGordonPrecriminalState(void)::s_GordonPrecriminal.m_nIndex = -1;
    __cxa_guard_release(&`guard variable for'GetGordonPrecriminalState(void)::s_GordonPrecriminal);
    v0 = CGlobalState::s_nGlobalsSerial;
    if ( CGlobalState::s_nGlobalsSerial == GetGordonPrecriminalState(void)::s_GordonPrecriminal.m_nGlobalSerial )
      goto LABEL_17;
  }
  CUtlSymbolTable::Find(
    &gGlobalState.m_database.m_nameList,
    GetGordonPrecriminalState(void)::s_GordonPrecriminal.m_pGlobalName);
  m_nIndex = -1;
  if ( v6 != -1 )
  {
    v2 = gGlobalState.m_database.m_list.m_Size - 1;
    if ( gGlobalState.m_database.m_list.m_Size - 1 >= 0 )
    {
      v3 = v2;
      if ( v6 != gGlobalState.m_database.m_list.m_Memory.m_pMemory[v3].name.m_Id )
      {
        v4 = &gGlobalState.m_database.m_list.m_Memory.m_pMemory[v3 - 1];
        do
        {
          if ( --v2 == -1 )
            break;
          --v4;
        }
        while ( v6 != v4[1].name.m_Id );
      }
      m_nIndex = v2;
    }
  }
  GetGordonPrecriminalState(void)::s_GordonPrecriminal.m_nIndex = m_nIndex;
  GetGordonPrecriminalState(void)::s_GordonPrecriminal.m_nGlobalSerial = v0;
LABEL_11:
  result = GLOBALESTATE::GLOBAL_OFF;
  if ( m_nIndex >= 0 && m_nIndex < gGlobalState.m_database.m_list.m_Size )
    return gGlobalState.m_database.m_list.m_Memory.m_pMemory[m_nIndex].state;
  return result;
}


