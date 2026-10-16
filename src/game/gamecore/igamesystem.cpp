// Reconstructed from DWARF by pahole; not original source.

// src/game/gamecore/igamesystem.cpp:30
struct AddedGameSystem_t {
	int m_nPriority;  // +0x8
	int32 m_nInsertionOrder;  // +0xc

	// sizeof = 16
};

// src/game/gamecore/igamesystem.cpp:75
class CGameSystemEventDispatcher : public IGameSystemEventDispatcher {
public:

	const CUtlVector<CUtlVector<IGameSystem*, CUtlMemory<IGameSystem*, int> >, CUtlMemory<CUtlVector<IGameSystem*, CUtlMemory<IGame m_funcListeners;  // +0x8
	CGameSystemEventDispatcher(CGameSystemEventDispatcher &);
	CGameSystemEventDispatcher(const CGameSystemEventDispatcher &);
	CGameSystemEventDispatcher(CUtlVector<CUtlVector<IGameSystem*, CUtlMemory<IGameSystem*, int> >, CUtlMemory<CUtlVector<IGameSystem*, CUtlMemory<IGame);
	virtual void RegisterListener(GameSystemEventId_t, IGameSystem *);
	virtual void UnregisterListener(IGameSystem *);

	// vtable[0] RegisterListener
	// vtable[1] UnregisterListener
	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseGameSystemFactory::CBaseGameSystemFactory  (line 48, @0x0000000001f01130, libserver.so)
// callers: _GLOBAL__sub_I_base_clientui_ent.cpp, _GLOBAL__sub_I__unity_achievements_01.cpp, _GLOBAL__sub_I__unity_entities_01.cpp, _GLOBAL__sub_I__unity_entities_02.cpp, __static_initialization_and_destruction_0, _GLOBAL__sub_I__unity_source_1_entities_01.cpp, _GLOBAL__sub_I__unity_source_files_02.cpp, _GLOBAL__sub_I__unity_source_files_04.cpp, _GLOBAL__sub_I__unity_base_01.cpp, _GLOBAL__sub_I__unity_base_02.cpp, _GLOBAL__sub_I__unity_base_03.cpp, _GLOBAL__sub_I__unity_base_05.cpp (34 total)
// globals: CBaseGameSystemFactory::sm_pFirst
void __fastcall CBaseGameSystemFactory::CBaseGameSystemFactory(CBaseGameSystemFactory *const this, const char *pName)
{
  CBaseGameSystemFactory *v2; // rax

  this->_vptr_IGameSystemFactory = &off_3FC3FF0;
  v2 = CBaseGameSystemFactory::sm_pFirst;
  this->m_pName = pName;
  CBaseGameSystemFactory::sm_pFirst = this;
  this->m_pNext = v2;
}


// CGameSystemEventDispatcher::RegisterListener  (line 80, @0x0000000001f05ef0, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CUtlVector<IGameSystem*> >, CopyConstruct<IGameSystem*>, Element, EnsureCount, GrowMemory, GrowVector, InsertMultipleBefore, operator[]
// calls: CUtlMemory<CUtlVector<IGameSystem*, CUtlMemory<IGameSystem*, int> >, int>::Grow, CUtlMemory<IGameSystem*, int>::Grow
void __fastcall CGameSystemEventDispatcher::RegisterListener(
        CGameSystemEventDispatcher *const this,
        GameSystemEventId_t id,
        IGameSystem *pSystem)
{
  __int64 v4; // r13
  int v5; // r12d
  CUtlVector<CUtlVector<IGameSystem*,CUtlMemory<IGameSystem*,int> >,CUtlMemory<CUtlVector<IGameSystem*,CUtlMemory<IGameSystem*,int> >,int> > *m_funcListeners; // rbx
  __int64 m_Size; // r14
  CUtlVector<IGameSystem*,CUtlMemory<IGameSystem*,int> > *v8; // rbx
  __int64 v9; // r12
  int v10; // eax
  IGameSystem **v11; // rax
  int v12; // r9d
  int m_nAllocationCount; // eax
  int v14; // r8d
  __int64 v15; // rax
  CUtlVector<IGameSystem*,CUtlMemory<IGameSystem*,int> > *v16; // rcx
  IGameSystem *pSystema; // [rsp+0h] [rbp-40h]
  IGameSystem *v18; // [rsp+8h] [rbp-38h]

  v4 = id;
  v5 = id + 1;
  m_funcListeners = this->m_funcListeners;
  m_Size = m_funcListeners->m_Size;
  if ( id + 1 > m_Size )
  {
    v12 = v5 - m_Size;
    if ( v5 != m_Size )
    {
      m_nAllocationCount = m_funcListeners->m_Memory.m_nAllocationCount;
      if ( v5 > m_nAllocationCount )
      {
        pSystema = pSystem;
        CUtlMemory<CUtlVector<IGameSystem *,CUtlMemory<IGameSystem *,int>>,int>::Grow(
          &m_funcListeners->m_Memory,
          v5 - m_nAllocationCount);
        pSystem = pSystema;
        v12 = v5 - m_Size;
      }
      m_funcListeners->m_Size = v5;
      if ( v12 > 0 )
      {
        v14 = 0;
        v15 = m_Size;
        do
        {
          v16 = &m_funcListeners->m_Memory.m_pMemory[v15];
          if ( v16 != 0 )
          {
            v16->m_Size = 0;
            v16->m_Memory.m_pMemory = 0;
            v16->m_Memory.m_nAllocationCount = 0;
            v16->m_Memory.m_nGrowSize = 0;
          }
          ++v14;
          ++v15;
        }
        while ( v12 > v14 );
      }
      m_funcListeners = this->m_funcListeners;
    }
  }
  v8 = &m_funcListeners->m_Memory.m_pMemory[v4];
  v9 = v8->m_Size;
  v10 = v8->m_Size;
  if ( v9 == v8->m_Memory.m_nAllocationCount )
  {
    v18 = pSystem;
    CUtlMemory<IGameSystem *,int>::Grow(&v8->m_Memory, 1);
    v10 = v8->m_Size;
    pSystem = v18;
  }
  v8->m_Size = v10 + 1;
  v11 = &v8->m_Memory.m_pMemory[v9];
  if ( v11 != 0 )
    *v11 = pSystem;
}


// CGameSystemEventDispatcher::UnregisterListener  (line 86, @0x0000000001f04180, libserver.so)  // inlines: Element, Find, FindAndRemove, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove
void __fastcall CGameSystemEventDispatcher::UnregisterListener(
        CGameSystemEventDispatcher *const this,
        IGameSystem *pSystem)
{
  CUtlVector<CUtlVector<IGameSystem*,CUtlMemory<IGameSystem*,int> >,CUtlMemory<CUtlVector<IGameSystem*,CUtlMemory<IGameSystem*,int> >,int> > *m_funcListeners; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // r15
  CUtlVector<IGameSystem*,CUtlMemory<IGameSystem*,int> > *v7; // r13
  int m_Size; // ecx
  IGameSystem **m_pMemory; // r8
  IGameSystem **v10; // rdx
  int v11; // eax

  m_funcListeners = this->m_funcListeners;
  if ( m_funcListeners->m_Size > 0 )
  {
    v5 = 0;
    v6 = 8 * (3LL * (m_funcListeners->m_Size - 1) + 3);
    while ( 1 )
    {
      v7 = &m_funcListeners->m_Memory.m_pMemory[v5 / 0x18];
      m_Size = v7->m_Size;
      if ( v7->m_Size <= 0 )
        goto LABEL_8;
      m_pMemory = v7->m_Memory.m_pMemory;
      if ( *m_pMemory != pSystem )
        break;
      v11 = 0;
LABEL_11:
      if ( m_Size - v11 - 1 > 0 )
      {
        memmove(&m_pMemory[v11], &m_pMemory[v11 + 1], 8LL * (m_Size - v11 - 1));
        m_Size = v7->m_Size;
      }
      v5 += 24LL;
      v7->m_Size = m_Size - 1;
      if ( v5 == v6 )
        return;
LABEL_9:
      m_funcListeners = this->m_funcListeners;
    }
    v10 = m_pMemory + 1;
    v11 = 0;
    while ( ++v11 != m_Size )
    {
      if ( *v10++ == pSystem )
      {
        if ( v11 == -1 )
          break;
        goto LABEL_11;
      }
    }
LABEL_8:
    v5 += 24LL;
    if ( v5 == v6 )
      return;
    goto LABEL_9;
  }
}


// RegisterMessageHandlerIfOverridden<EventOutOfGameFrameBoundary_t>  (line 101, @0x0000000001f04510, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventOutOfGameFrameBoundary_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::InitAllSystems
// globals: EventOutOfGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameS, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventOutOf
void __fastcall RegisterMessageHandlerIfOverridden<EventOutOfGameFrameBoundary_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventOutOfGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventOutOfGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventOutOfGameFrameBoundary_t const&))::ppVTableNew
          + 240))(&v9);
    v2 = pGameSystemb;
    EventOutOfGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventBuildGameSessionManifest_t>  (line 101, @0x0000000001f045d0, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventBuildGameSessionManifest_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventBuildGameSessionManifest_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGam, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventBui
void __fastcall RegisterMessageHandlerIfOverridden<EventBuildGameSessionManifest_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventBuildGameSessionManifest_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventBuildGameSessionManifest_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventBuildGameSessionManifest_t const&))::ppVTableNew
          + 56))(&v9);
    v2 = pGameSystemb;
    EventBuildGameSessionManifest_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventClientFullySignedOn_t>  (line 101, @0x0000000001f04690, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventClientFullySignedOn_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventClientFullySignedOn_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientFullySignedOn_t const&)>(CDontUseThisGameSystem &,void (IGameSyst, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientFullySignedOn_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientFu
void __fastcall RegisterMessageHandlerIfOverridden<EventClientFullySignedOn_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  int v4; // esi
  int v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventClientFullySignedOn_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventClientFullySignedOn_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientFullySignedOn_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientFullySignedOn_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientFullySignedOn_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientFullySignedOn_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientFullySignedOn_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientFullySignedOn_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientFullySignedOn_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientFullySignedOn_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientFullySignedOn_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientFullySignedOn_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientFullySignedOn_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientFullySignedOn_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientFullySignedOn_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientFullySignedOn_t const&))::ppVTableNew
          + 72))(&v9);
    v2 = pGameSystemb;
    EventClientFullySignedOn_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventClientDisconnect_t>  (line 101, @0x0000000001f04750, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventDisconnect_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventClientDisconnect_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventDisconnect_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(Ev, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventDisconnect_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventDisconnect_t cons
void __fastcall RegisterMessageHandlerIfOverridden<EventClientDisconnect_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  int v4; // esi
  int v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventClientDisconnect_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventClientDisconnect_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventDisconnect_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventDisconnect_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventDisconnect_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventDisconnect_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventDisconnect_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventDisconnect_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventDisconnect_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventDisconnect_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventDisconnect_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventDisconnect_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventDisconnect_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventDisconnect_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventDisconnect_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventDisconnect_t const&))::ppVTableNew
          + 80))(&v9);
    v2 = pGameSystemb;
    EventClientDisconnect_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventSaveGame_t>  (line 101, @0x0000000001f04810, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventSaveGame_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventSaveGame_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(Even, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSaveGame_t const&))
void __fastcall RegisterMessageHandlerIfOverridden<EventSaveGame_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventSaveGame_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventSaveGame_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSaveGame_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSaveGame_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSaveGame_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSaveGame_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSaveGame_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSaveGame_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSaveGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSaveGame_t const&))::ppVTableNew
          + 248))(&v9);
    v2 = pGameSystemb;
    EventSaveGame_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventRestoreGame_t>  (line 101, @0x0000000001f048d0, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventRestoreGame_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventRestoreGame_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(E, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventRestoreGame_t co
void __fastcall RegisterMessageHandlerIfOverridden<EventRestoreGame_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventRestoreGame_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventRestoreGame_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventRestoreGame_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventRestoreGame_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventRestoreGame_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventRestoreGame_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventRestoreGame_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventRestoreGame_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventRestoreGame_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventRestoreGame_t const&))::ppVTableNew
          + 256))(&v9);
    v2 = pGameSystemb;
    EventRestoreGame_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventActiveSpawnGroupChanged_t>  (line 101, @0x0000000001f04990, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventActiveSpawnGroupChanged_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventActiveSpawnGroupChanged_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGame, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventActi
void __fastcall RegisterMessageHandlerIfOverridden<EventActiveSpawnGroupChanged_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventActiveSpawnGroupChanged_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventActiveSpawnGroupChanged_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventActiveSpawnGroupChanged_t const&))::ppVTableNew
          + 144))(&v9);
    v2 = pGameSystemb;
    EventActiveSpawnGroupChanged_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventServerPreEntityThink_t>  (line 101, @0x0000000001f04a50, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventServerPreEntityThink_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventServerPreEntityThink_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSys, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerP
void __fastcall RegisterMessageHandlerIfOverridden<EventServerPreEntityThink_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventServerPreEntityThink_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventServerPreEntityThink_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreEntityThink_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreEntityThink_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreEntityThink_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreEntityThink_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreEntityThink_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreEntityThink_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreEntityThink_t const&))::ppVTableNew
          + 192))(&v9);
    v2 = pGameSystemb;
    EventServerPreEntityThink_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventServerPostEntityThink_t>  (line 101, @0x0000000001f04b10, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventServerPostEntityThink_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventServerPostEntityThink_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPostEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSy, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPostEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServer
void __fastcall RegisterMessageHandlerIfOverridden<EventServerPostEntityThink_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventServerPostEntityThink_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventServerPostEntityThink_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPostEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPostEntityThink_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPostEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPostEntityThink_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPostEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPostEntityThink_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPostEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPostEntityThink_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPostEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPostEntityThink_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPostEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPostEntityThink_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPostEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPostEntityThink_t const&))::ppVTableNew
          + 200))(&v9);
    v2 = pGameSystemb;
    EventServerPostEntityThink_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventClientPreEntityThink_t>  (line 101, @0x0000000001f04bd0, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventClientPreEntityThink_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventClientPreEntityThink_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSys, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientP
void __fastcall RegisterMessageHandlerIfOverridden<EventClientPreEntityThink_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  int v4; // esi
  int v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventClientPreEntityThink_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventClientPreEntityThink_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPreEntityThink_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPreEntityThink_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPreEntityThink_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPreEntityThink_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPreEntityThink_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPreEntityThink_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreEntityThink_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPreEntityThink_t const&))::ppVTableNew
          + 168))(&v9);
    v2 = pGameSystemb;
    EventClientPreEntityThink_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventClientUpdate_t>  (line 101, @0x0000000001f04c90, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventClientUpdate_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventClientUpdate_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientUpdate_t 
void __fastcall RegisterMessageHandlerIfOverridden<EventClientUpdate_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  int v4; // esi
  int v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventClientUpdate_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventClientUpdate_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientUpdate_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientUpdate_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientUpdate_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientUpdate_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientUpdate_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientUpdate_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientUpdate_t const&))::ppVTableNew
          + 176))(&v9);
    v2 = pGameSystemb;
    EventClientUpdate_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventClientPostDataUpdate_t>  (line 101, @0x0000000001f04d50, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventClientPostDataUpdate_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventClientPostDataUpdate_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSys, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientP
void __fastcall RegisterMessageHandlerIfOverridden<EventClientPostDataUpdate_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventClientPostDataUpdate_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventClientPostDataUpdate_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostDataUpdate_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostDataUpdate_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostDataUpdate_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostDataUpdate_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostDataUpdate_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostDataUpdate_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostDataUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostDataUpdate_t const&))::ppVTableNew
          + 152))(&v9);
    v2 = pGameSystemb;
    EventClientPostDataUpdate_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventServerPreClientUpdate_t>  (line 101, @0x0000000001f04e10, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventServerPreClientUpdate_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventServerPreClientUpdate_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSy, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServer
void __fastcall RegisterMessageHandlerIfOverridden<EventServerPreClientUpdate_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventServerPreClientUpdate_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventServerPreClientUpdate_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreClientUpdate_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreClientUpdate_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreClientUpdate_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreClientUpdate_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreClientUpdate_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreClientUpdate_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerPreClientUpdate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerPreClientUpdate_t const&))::ppVTableNew
          + 208))(&v9);
    v2 = pGameSystemb;
    EventServerPreClientUpdate_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventSpawnGroupPrecache_t>  (line 101, @0x0000000001f04ed0, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventSpawnGroupPrecache_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventSpawnGroupPrecache_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSyste, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGrou
void __fastcall RegisterMessageHandlerIfOverridden<EventSpawnGroupPrecache_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventSpawnGroupPrecache_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventSpawnGroupPrecache_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupPrecache_t const&))::ppVTableNew
          + 96))(&v9);
    v2 = pGameSystemb;
    EventSpawnGroupPrecache_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventSpawnGroupUncache_t>  (line 101, @0x0000000001f04f90, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventSpawnGroupUncache_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventSpawnGroupUncache_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroup
void __fastcall RegisterMessageHandlerIfOverridden<EventSpawnGroupUncache_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventSpawnGroupUncache_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventSpawnGroupUncache_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupUncache_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupUncache_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupUncache_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupUncache_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupUncache_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupUncache_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventSpawnGroupUncache_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventSpawnGroupUncache_t const&))::ppVTableNew
          + 104))(&v9);
    v2 = pGameSystemb;
    EventSpawnGroupUncache_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventPreSpawnGroupLoad_t>  (line 101, @0x0000000001f05050, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventPreSpawnGroupLoad_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventPreSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGr
void __fastcall RegisterMessageHandlerIfOverridden<EventPreSpawnGroupLoad_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventPreSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventPreSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupLoad_t const&))::ppVTableNew
          + 112))(&v9);
    v2 = pGameSystemb;
    EventPreSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventPostSpawnGroupLoad_t>  (line 101, @0x0000000001f05110, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventPostSpawnGroupLoad_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventPostSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSyste, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawn
void __fastcall RegisterMessageHandlerIfOverridden<EventPostSpawnGroupLoad_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventPostSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventPostSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupLoad_t const&))::ppVTableNew
          + 120))(&v9);
    v2 = pGameSystemb;
    EventPostSpawnGroupLoad_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventPreSpawnGroupUnload_t>  (line 101, @0x0000000001f051d0, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventPreSpawnGroupUnload_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventPreSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSyst, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawn
void __fastcall RegisterMessageHandlerIfOverridden<EventPreSpawnGroupUnload_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventPreSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventPreSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPreSpawnGroupUnload_t const&))::ppVTableNew
          + 128))(&v9);
    v2 = pGameSystemb;
    EventPreSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventPostSpawnGroupUnload_t>  (line 101, @0x0000000001f05290, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventPostSpawnGroupUnload_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventPostSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSys, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpa
void __fastcall RegisterMessageHandlerIfOverridden<EventPostSpawnGroupUnload_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventPostSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventPostSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventPostSpawnGroupUnload_t const&))::ppVTableNew
          + 136))(&v9);
    v2 = pGameSystemb;
    EventPostSpawnGroupUnload_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventClientPreRender_t>  (line 101, @0x0000000001f05350, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventClientPreRender_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventClientPreRender_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPreRen
void __fastcall RegisterMessageHandlerIfOverridden<EventClientPreRender_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  int v4; // esi
  int v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventClientPreRender_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventClientPreRender_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPreRender_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPreRender_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPreRender_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPreRender_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPreRender_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPreRender_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPreRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPreRender_t const&))::ppVTableNew
          + 160))(&v9);
    v2 = pGameSystemb;
    EventClientPreRender_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventClientPostRender_t>  (line 101, @0x0000000001f05410, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventClientPostRender_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventClientPostRender_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem:, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostR
void __fastcall RegisterMessageHandlerIfOverridden<EventClientPostRender_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  int v4; // esi
  int v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventClientPostRender_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventClientPostRender_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostRender_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostRender_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostRender_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostRender_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostRender_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostRender_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientPostRender_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientPostRender_t const&))::ppVTableNew
          + 184))(&v9);
    v2 = pGameSystemb;
    EventClientPostRender_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventServerGamePostSimulate_t>  (line 101, @0x0000000001f054d0, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventServerGamePostSimulate_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventServerGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameS, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServe
void __fastcall RegisterMessageHandlerIfOverridden<EventServerGamePostSimulate_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventServerGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventServerGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerGamePostSimulate_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerGamePostSimulate_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerGamePostSimulate_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerGamePostSimulate_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerGamePostSimulate_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerGamePostSimulate_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventServerGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventServerGamePostSimulate_t const&))::ppVTableNew
          + 216))(&v9);
    v2 = pGameSystemb;
    EventServerGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventClientGamePostSimulate_t>  (line 101, @0x0000000001f05590, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventClientGamePostSimulate_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventClientGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameS, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClien
void __fastcall RegisterMessageHandlerIfOverridden<EventClientGamePostSimulate_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventClientGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventClientGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientGamePostSimulate_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientGamePostSimulate_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientGamePostSimulate_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientGamePostSimulate_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientGamePostSimulate_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientGamePostSimulate_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventClientGamePostSimulate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventClientGamePostSimulate_t const&))::ppVTableNew
          + 224))(&v9);
    v2 = pGameSystemb;
    EventClientGamePostSimulate_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// RegisterMessageHandlerIfOverridden<EventGameFrameBoundary_t>  (line 101, @0x0000000001f05650, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventGameFrameBoundary_t&)>, GetVTableIndex
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: IGameSystem::LoopInitAllSystems
// globals: EventGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameFrameB
void __fastcall RegisterMessageHandlerIfOverridden<EventGameFrameBoundary_t>(
        IGameSystem *pGameSystem,
        IGameSystemEventDispatcher *pDispatcher)
{
  IGameSystem *v2; // rdx
  GameSystemEventId_t v4; // esi
  GameSystemEventId_t v5; // eax
  int v6; // eax
  IGameSystem *pGameSystemb; // [rsp+8h] [rbp-28h]
  __int64 (__fastcall **v9)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  v2 = pGameSystem;
  v4 = EventGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex;
  if ( EventGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v9 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameFrameBoundary_t const&))::ppVTableNew == 0 )
    {
      v6 = __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameFrameBoundary_t const&))::ppVTableNew);
      v2 = pGameSystem;
      if ( v6 != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameFrameBoundary_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameFrameBoundary_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameFrameBoundary_t const&))::ppVTableNew);
        v2 = pGameSystem;
      }
    }
    pGameSystemb = v2;
    v9 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameFrameBoundary_t const&))::ppVTableNew;
    v5 = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameFrameBoundary_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameFrameBoundary_t const&))::ppVTableNew
          + 232))(&v9);
    v2 = pGameSystemb;
    EventGameFrameBoundary_t::GetVTableIndex(void)::s_nComputedIndex = v5;
    v4 = v5;
  }
  if ( off_3FC3E30[v4] != v2->_vptr_IGameSystem[v4] )
    (*pDispatcher->_vptr_IGameSystemEventDispatcher)(pDispatcher);
}


// IGameSystem::~IGameSystem  (line 117, @0x0000000001f00590, libserver.so)
// callers: CAutoGameSystem::~CAutoGameSystem, CClientUIDialogManager::~CClientUIDialogManager, CServerAchievementManager::~CServerAchievementManager, CFogSystem::~CFogSystem, CResourcePrecacherGameSystem::~CResourcePrecacherGameSystem, CStepSimulationHook::~CStepSimulationHook, CSimThinkHook::~CSimThinkHook, CLightQueryGameSystem::~CLightQueryGameSystem, CStartupHookGameSystem<GameToolEventToolEvent_SFMRecordingStateChanged_tInternal, 0>::~CStartupHookGameSystem, GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem::~GameToolEventToolEvent_SFMRecordingStateChanged_tHookupGameSystem, CNotifyManager::~CNotifyManager, CBodyGameSystem::~CBodyGameSystem (177 total)
void __fastcall IGameSystem::~IGameSystem(IGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FC4070;  // vptr: IGameSystem
}


// IGameSystem::~IGameSystem  (line 117, @0x0000000001f005d0, libserver.so)  // inlines: ~IGameSystem
// calls: operator delete
void __fastcall IGameSystem::~IGameSystem(IGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FC4070;  // vptr: IGameSystem
  operator delete(this);
}


// IGameSystem::Add  (line 127, @0x0000000001f03400, libserver.so)
// calls: IGameSystem::Add
// callers: CLoopModeGame::AddModIndependentGameSystems
void __fastcall IGameSystem::Add(IGameSystem *pStaticSystem)
{
  const char *v1; // rax

  v1 = (*(pStaticSystem->_vptr_IGameSystem + 33))(pStaticSystem);
  IGameSystem::Add(v1);
}


// IGameSystem::Add  (line 137, @0x0000000001f03260, libserver.so)  // inlines: AddToTail, CUtlSymbol, Find, GrowMemory, LeafCodeInfo_t, String, operator const UtlSymId_t, operator[]
// calls: CUtlSymbolTable::Find, CUtlSymbolTable::String, IGameSystem::CreateGameSystem, CUtlMemory<AddedGameSystem_t, int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: IGameSystem::Add, CLoopModeGame::AddModIndependentGameSystems, CDOTAGameConfiguration::InitGameSession
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/gamecore/igamesy, "Add", "Tried to add game system %s twice!\n", "Tried to add unknown game system %s!\n"
// globals: s_GameSystems
void __fastcall IGameSystem::Add(const char *pGameSystemName)
{
  IGameSystem::FactoryInfo_t *v2; // rbx
  const char *v3; // rax
  IGameSystem *GameSystem; // r12
  int v5; // eax
  int32 m_Size; // ebx
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  int nPriority; // [rsp+Ch] [rbp-44h]
  LeafCodeInfo_t id[2]; // [rsp+10h] [rbp-40h] BYREF

  CUtlSymbolTable::Find(&IGameSystem::sm_GameSystemFactories.m_SymbolTable, pGameSystemName);
  if ( LOWORD(id[0].m_szFile) == 0xFFFF )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      id[0].m_nLine = 142;
      id[0].m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/gamecore/igamesystem.cpp";
      id[0].m_szFunction = "Add";
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        id,
        "Tried to add unknown game system %s!\n",
        pGameSystemName);
    }
    goto LABEL_8;
  }
  v2 = &IGameSystem::sm_GameSystemFactories.m_Vector.m_Memory.m_pMemory[LOWORD(id[0].m_szFile)];
  if ( v2->m_bHasBeenAdded )
  {
    while ( 1 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        id[0].m_nLine = 148;
        id[0].m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/gamecore/igamesystem.cpp";
        id[0].m_szFunction = "Add";
        LoggingSystem_Log(
          LOG_GENERAL,
          LoggingSeverity_t::LS_ERROR,
          id,
          "Tried to add game system %s twice!\n",
          pGameSystemName);
      }
LABEL_8:
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v11, v12, v9, v10) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
    }
  }
  v3 = CUtlSymbolTable::String(&IGameSystem::sm_GameSystemFactories.m_SymbolTable, id);
  GameSystem = IGameSystem::CreateGameSystem(v3, v2);
  v5 = (*(v2->m_pFactory->_vptr_IGameSystemFactory + 6))(v2->m_pFactory);
  m_Size = s_GameSystems.m_Size;
  v7 = s_GameSystems.m_Size;
  if ( s_GameSystems.m_Size == s_GameSystems.m_Memory.m_nAllocationCount )
  {
    nPriority = v5;
    CUtlMemory<AddedGameSystem_t,int>::Grow(&s_GameSystems.m_Memory, 1);
    v7 = s_GameSystems.m_Size;
    v5 = nPriority;
  }
  s_GameSystems.m_Size = v7 + 1;
  v8 = m_Size;
  s_GameSystems.m_Memory.m_pMemory[v8].m_pGameSystem = GameSystem;
  s_GameSystems.m_Memory.m_pMemory[v8].m_nPriority = v5;
  s_GameSystems.m_Memory.m_pMemory[v8].m_nInsertionOrder = m_Size;
}


// IGameSystem::IsAllocatingGameSystems  (line 164, @0x0000000001f01160, libserver.so)
// globals: IGameSystem::sm_bIsAllocatingGameSystems
bool __cdecl IGameSystem::IsAllocatingGameSystems()
{
  return IGameSystem::sm_bIsAllocatingGameSystems;
}


// IGameSystem::IsDeallocatingGameSystems  (line 169, @0x0000000001f01170, libserver.so)
// globals: IGameSystem::sm_bIsDeallocatingGameSystems
bool __cdecl IGameSystem::IsDeallocatingGameSystems()
{
  return IGameSystem::sm_bIsDeallocatingGameSystems;
}


// IGameSystem::SortLessFunc  (line 174, @0x0000000001f00b40, libserver.so)  // inlines: operator[]
bool __fastcall IGameSystem::SortLessFunc(const int *const left, const int *const right)
{
  CBaseGameSystemFactory *m_pFactory; // rdi
  int v4; // ebx

  m_pFactory = IGameSystem::sm_GameSystemFactories.m_Vector.m_Memory.m_pMemory[*left].m_pFactory;
  v4 = (*(m_pFactory->_vptr_IGameSystemFactory + 6))(m_pFactory);
  return v4 >= (*(IGameSystem::sm_GameSystemFactories.m_Vector.m_Memory.m_pMemory[*right].m_pFactory->_vptr_IGameSystemFactory
                + 6))(IGameSystem::sm_GameSystemFactories.m_Vector.m_Memory.m_pMemory[*right].m_pFactory);
}


// IGameSystem::ForwardCallsToHost  (line 181, @0x0000000001f01180, libserver.so)
// callers: CLoopModeGame::LoopInit
// globals: IGameSystem::sm_bForwardToHost
void __fastcall IGameSystem::ForwardCallsToHost(bool bEnable)
{
  if ( g_pGameSystem2HostHook == 0 )
    bEnable = 0;
  IGameSystem::sm_bForwardToHost = bEnable;
}


// IGameSystem::InitAllSystems  (line 200, @0x0000000001f03420, libserver.so)  // inlines: AddMultipleToTail, AddString, Defined, End, EnsureCount, GetMillisecondsF, GetNumStrings, GrowMemory, GrowVector, InsertMultipleBefore, LeafCodeInfo_t, RegisterOutOfGameEventListeners, Sample, Start, __pop_heap<int*, bool (*)(int const&, int const&)>, make_heap<int*, bool (*)(int const&, int const&)>, operator const UtlSymId_t, operator[], sort_heap<int*, bool (*)(int const&, int const&)>
// calls: CUtlSymbolTable::Find, CUtlSymbolTable::AddString, CUtlVectorBase<int, CUtlMemory<int, int> >::SetCount, std::__adjust_heap<int*, long int, int, bool (*)(int const&, int const&)>, Plat_RelativeTicks, Plat_TickDiffMilliSecF, COM_TimestampedLog, RegisterMessageHandlerIfOverridden<EventOutOfGameFrameBoundary_t>, CUtlMemory<IGameSystem::FactoryInfo_t, int>::Grow, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess (13 total)
// callers: CLoopModeGame::StaticInit
// strings: "IGameSystem::Init( %-80s ) %8.3f msec", "IGameSystem::PostInit( %-80s ) %8.3f msec", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/gamecore/igamesy, "InitAllSystems", "System %s failed to init\n", "Game System %s is defined twice!\n"
// globals: CBaseGameSystemFactory::sm_pFirst, IGameSystem::sm_GameSystemFactories, IGameSystem::sm_GameSystemSortIndex, IGameSystem::SortLessFunc(int const&,int const&), s_outOfGameEventDispatcher
bool __cdecl IGameSystem::InitAllSystems()
{
  CBaseGameSystemFactory *i; // rbx
  __int64 v1; // rax
  const char *m_pName; // r12
  __int64 m_szFile_low; // rax
  int v4; // r12d
  __int64 m_NumElements; // rbx
  int v6; // r14d
  __int64 v7; // rax
  int *m_pMemory; // r12
  int *v9; // rbx
  __int64 v10; // r15
  __int64 j; // r13
  int v12; // ecx
  unsigned __int64 v13; // r12
  __int64 v14; // r13
  CBaseGameSystemFactory *m_pFactory; // rbx
  __int64 v16; // r14
  __int64 v17; // rax
  double v18; // xmm0_8
  unsigned __int64 v19; // r12
  CBaseGameSystemFactory *v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rax
  double v23; // xmm0_8
  IGameSystem *v24; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  const char *v30; // r8
  LeafCodeInfo_t v31; // [rsp+0h] [rbp-50h] BYREF

  for ( i = CBaseGameSystemFactory::sm_pFirst; i != 0; i = i->m_pNext )
  {
    m_pName = i->m_pName;
    CUtlSymbolTable::Find(&IGameSystem::sm_GameSystemFactories.m_SymbolTable, m_pName);
    if ( LOWORD(v31.m_szFile) != 0xFFFF )
    {
      m_pFactory = &LOG_GENERAL;
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v31.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/gamecore/igamesystem.cpp";
        v31.m_szFunction = "InitAllSystems";
        v31.m_nLine = 207;
        LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v31, "Game System %s is defined twice!\n", m_pName);
      }
      goto LABEL_28;
    }
    CUtlSymbolTable::AddString(&IGameSystem::sm_GameSystemFactories.m_SymbolTable, m_pName);
    m_szFile_low = 0xFFFF;
    if ( IGameSystem::sm_GameSystemFactories.m_Vector.m_Size <= 0xFFFF )
    {
      v4 = LOWORD(v31.m_szFile) + 1;
      if ( IGameSystem::sm_GameSystemFactories.m_Vector.m_Size < v4 )
      {
        if ( v4 > IGameSystem::sm_GameSystemFactories.m_Vector.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<IGameSystem::FactoryInfo_t,int>::Grow(
            &IGameSystem::sm_GameSystemFactories.m_Vector.m_Memory,
            v4 - IGameSystem::sm_GameSystemFactories.m_Vector.m_Memory.m_nAllocationCount);
          m_szFile_low = LOWORD(v31.m_szFile);
        }
        IGameSystem::sm_GameSystemFactories.m_Vector.m_Size = LOWORD(v31.m_szFile) + 1;
      }
    }
    v1 = m_szFile_low;
    IGameSystem::sm_GameSystemFactories.m_Vector.m_Memory.m_pMemory[v1].m_pFactory = i;
    IGameSystem::sm_GameSystemFactories.m_Vector.m_Memory.m_pMemory[v1].m_bHasBeenAdded = 0;
  }
  m_NumElements = IGameSystem::sm_GameSystemFactories.m_SymbolTable.m_Lookup.m_NumElements;
  v6 = IGameSystem::sm_GameSystemFactories.m_SymbolTable.m_Lookup.m_NumElements;
  CUtlVectorBase<int,CUtlMemory<int,int>>::SetCount(
    &IGameSystem::sm_GameSystemSortIndex,
    IGameSystem::sm_GameSystemFactories.m_SymbolTable.m_Lookup.m_NumElements);
  v7 = 0;
  if ( v6 != 0 )
  {
    do
    {
      IGameSystem::sm_GameSystemSortIndex.m_Memory.m_pMemory[v7] = v7;
      ++v7;
    }
    while ( v6 > v7 );
  }
  m_pMemory = IGameSystem::sm_GameSystemSortIndex.m_Memory.m_pMemory;
  v9 = &IGameSystem::sm_GameSystemSortIndex.m_Memory.m_pMemory[m_NumElements];
  if ( v9 - IGameSystem::sm_GameSystemSortIndex.m_Memory.m_pMemory > 7 )
  {
    v10 = v9 - IGameSystem::sm_GameSystemSortIndex.m_Memory.m_pMemory;
    for ( j = (v10 - 2) >> 1; ; --j )
    {
      std::__adjust_heap<int *,long,int,bool (*)(int const&,int const&)>(
        m_pMemory,
        j,
        v10,
        m_pMemory[j],
        IGameSystem::SortLessFunc);
      if ( j == 0 )
        break;
    }
    do
    {
      v12 = *--v9;
      *v9 = *m_pMemory;
      std::__adjust_heap<int *,long,int,bool (*)(int const&,int const&)>(
        m_pMemory,
        0,
        v9 - m_pMemory,
        v12,
        IGameSystem::SortLessFunc);
    }
    while ( v9 - m_pMemory > 7 );
  }
  if ( v6 != 0 )
  {
    v13 = 0;
    v14 = 4LL * (v6 - 1) + 4;
    do
    {
      m_pFactory = IGameSystem::sm_GameSystemFactories.m_Vector.m_Memory.m_pMemory[LOWORD(IGameSystem::sm_GameSystemSortIndex.m_Memory.m_pMemory[v13 / 4])].m_pFactory;
      (*(m_pFactory->_vptr_IGameSystemFactory + 6))(m_pFactory);
      v16 = Plat_RelativeTicks();
      if ( m_pFactory->Init() == 0 )
      {
        while ( 1 )
        {
          if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          {
            v30 = m_pFactory->m_pName;
            v31.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/gamecore/igamesystem.cpp";
            v31.m_szFunction = "InitAllSystems";
            v31.m_nLine = 246;
            LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v31, "System %s failed to init\n", v30);
          }
LABEL_28:
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v28, v29, v26, v27) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
        }
      }
      v17 = Plat_RelativeTicks();
      v13 += 4LL;
      Plat_TickDiffMilliSecF(0, v17 - v16);
      COM_TimestampedLog("IGameSystem::Init( %-80s ) %8.3f msec", m_pFactory->m_pName, v18);
    }
    while ( v13 != v14 );
    v19 = 0;
    do
    {
      while ( 1 )
      {
        v20 = IGameSystem::sm_GameSystemFactories.m_Vector.m_Memory.m_pMemory[LOWORD(IGameSystem::sm_GameSystemSortIndex.m_Memory.m_pMemory[v19 / 4])].m_pFactory;
        v21 = Plat_RelativeTicks();
        (*(v20->_vptr_IGameSystemFactory + 1))(v20);
        v22 = Plat_RelativeTicks();
        Plat_TickDiffMilliSecF(0, v22 - v21);
        COM_TimestampedLog("IGameSystem::PostInit( %-80s ) %8.3f msec", v20->m_pName, v23);
        if ( (*(v20->_vptr_IGameSystemFactory + 8))(v20) == 0 )
          break;
        v19 += 4LL;
        if ( v14 == v19 )
          return 1;
      }
      v19 += 4LL;
      v24 = (*(v20->_vptr_IGameSystemFactory + 9))(v20);
      RegisterMessageHandlerIfOverridden<EventOutOfGameFrameBoundary_t>(v24, &s_outOfGameEventDispatcher);
    }
    while ( v14 != v19 );
  }
  return 1;
}


// IGameSystem::ShutdownAllSystems  (line 278, @0x0000000001f011a0, libserver.so)  // inlines: Destruct<CUtlVector<IGameSystem*> >, Element, GetNumStrings, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<IGameSystem*, int>::Purge, CUtlMemory<CUtlVector<IGameSystem*, CUtlMemory<IGameSystem*, int> >, int>::Purge
// callers: CLoopModeFactory<CLoopModeGame>::Shutdown, CLoopModeGame::StaticShutdown
// globals: sm_outOfGameFuncListeners
void __cdecl IGameSystem::ShutdownAllSystems()
{
  int m_Size; // r12d
  __int64 i; // r13
  char *v2; // rbx
  bool v3; // zf
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rax

  m_Size = sm_outOfGameFuncListeners.m_Size;
  for ( i = 24LL * sm_outOfGameFuncListeners.m_Size - 24; --m_Size >= 0; i -= 24 )
  {
    v2 = sm_outOfGameFuncListeners.m_Memory.m_pMemory + i;
    v3 = (*(&sm_outOfGameFuncListeners.m_Memory.m_pMemory->m_Memory.m_nGrowSize + i) & 0xC0000000) == 0;
    *(&sm_outOfGameFuncListeners.m_Memory.m_pMemory->CUtlVectorBase<CUtlVector<IGameSystem*,CUtlMemory<IGameSystem*,int> >,CUtlMemory<CUtlVector<IGameSystem*,CUtlMemory<IGameSystem*,int> >,int> >::m_Size
    + i) = 0;
    if ( v3 )
    {
      CUtlMemory<IGameSystem *,int>::Purge((v2 + 8));
      if ( (*(v2 + 5) & 0xC0000000) == 0 )
        CUtlMemory<IGameSystem *,int>::Purge((v2 + 8));
    }
  }
  sm_outOfGameFuncListeners.m_Size = 0;
  if ( (sm_outOfGameFuncListeners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlVector<IGameSystem *,CUtlMemory<IGameSystem *,int>>,int>::Purge(&sm_outOfGameFuncListeners.m_Memory);
  v4 = IGameSystem::sm_GameSystemFactories.m_SymbolTable.m_Lookup.m_NumElements - 1;
  if ( IGameSystem::sm_GameSystemFactories.m_SymbolTable.m_Lookup.m_NumElements != 0 )
  {
    v5 = 4LL * v4;
    v6 = 4 * (v4 - v4) - 4;
    do
    {
      v7 = LOWORD(IGameSystem::sm_GameSystemSortIndex.m_Memory.m_pMemory[v5 / 4]);
      v5 -= 4LL;
      (*(IGameSystem::sm_GameSystemFactories.m_Vector.m_Memory.m_pMemory[v7].m_pFactory->_vptr_IGameSystemFactory + 2))(IGameSystem::sm_GameSystemFactories.m_Vector.m_Memory.m_pMemory[v7].m_pFactory);
    }
    while ( v5 != v6 );
  }
}


// IGameSystem::CreateGameSystem  (line 293, @0x0000000001f012a0, libserver.so)
// callers: IGameSystem::LoopInitAllSystems, IGameSystem::Add
// globals: IGameSystem::sm_bIsAllocatingGameSystems
IGameSystem *__fastcall IGameSystem::CreateGameSystem(const char *pName, IGameSystem::FactoryInfo_t *const info)
{
  __int64 v4; // rax
  IGameSystem *v5; // r12

  IGameSystem::sm_bIsAllocatingGameSystems = 1;
  v4 = (*(info->m_pFactory->_vptr_IGameSystemFactory + 3))(info->m_pFactory);
  IGameSystem::sm_bIsAllocatingGameSystems = 0;
  v5 = v4;
  if ( (*(info->m_pFactory->_vptr_IGameSystemFactory + 8))(info->m_pFactory) != 0 )
    (*(v5->_vptr_IGameSystem + 35))(v5, pName);
  info->m_bHasBeenAdded = 1;
  return v5;
}


// IGameSystem::DestroyGameSystem  (line 307, @0x0000000001f01300, libserver.so)  // inlines: Find, operator[]
// calls: CUtlSymbolTable::Find
// callers: IGameSystem::GameInitDestroyQueuedGameSystems, IGameSystem::LoopDestroyAllSystems
// globals: IGameSystem::sm_bIsDeallocatingGameSystems
void __fastcall IGameSystem::DestroyGameSystem(IGameSystem *pSystem)
{
  const char *v2; // rax
  IGameSystem::FactoryInfo_t *v3; // rbx
  unsigned __int16 v4; // [rsp+0h] [rbp-20h]

  v2 = (*(pSystem->_vptr_IGameSystem + 33))(pSystem);
  CUtlSymbolTable::Find(&IGameSystem::sm_GameSystemFactories.m_SymbolTable, v2);
  IGameSystem::sm_bIsDeallocatingGameSystems = 1;
  v3 = &IGameSystem::sm_GameSystemFactories.m_Vector.m_Memory.m_pMemory[v4];
  (*(v3->m_pFactory->_vptr_IGameSystemFactory + 4))(v3->m_pFactory, pSystem);
  v3->m_bHasBeenAdded = 0;
  IGameSystem::sm_bIsDeallocatingGameSystems = 0;
}


// GSLessFunc  (line 328, @0x0000000001f005a0, libserver.so)
bool __fastcall GSLessFunc(const AddedGameSystem_t *const left, const AddedGameSystem_t *const right)
{
  int m_nPriority; // eax

  m_nPriority = right->m_nPriority;
  if ( left->m_nPriority == m_nPriority )
    return left->m_nInsertionOrder < right->m_nInsertionOrder;
  else
    return left->m_nPriority > m_nPriority;
}


// IGameSystem::LoopInitAllSystems  (line 370, @0x0000000001f02a30, libserver.so)  // inlines: AddToTail, CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventGameActivate_t&)>, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventGameDeactivate_t&)>, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventGameInit_t&)>, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventGamePostInit_t&)>, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventGamePreShutdown_t&)>, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventGameShutdown_t&)>, DispatchEvent<EventGameInit_t>, GetNumStrings, GetVTableIndex, GrowMemory, RegisterEventListeners, RegisterMessageHandlerIfOverridden<EventGameActivate_t>, RegisterMessageHandlerIfOverridden<EventGameDeactivate_t>, RegisterMessageHandlerIfOverridden<EventGameInit_t>, RegisterMessageHandlerIfOverridden<EventGamePostInit_t>, RegisterMessageHandlerIfOverridden<EventGamePreShutdown_t>, RegisterMessageHandlerIfOverridden<EventGameShutdown_t>, String, __pop_heap<AddedGameSystem_t*, bool (*)(const AddedGameSystem_t&, const AddedGameSystem_t&)>, make_heap<AddedGameSystem_t*, bool (*)(const AddedGameSystem_t&, const AddedGameSystem_t&)>, operator[], sort_heap<AddedGameSystem_t*, bool (*)(const AddedGameSystem_t&, const AddedGameSystem_t&)>
// calls: COM_TimestampedLog, CUtlSymbolTable::String, IGameSystem::CreateGameSystem, std::__adjust_heap<AddedGameSystem_t*, long int, AddedGameSystem_t, bool (*)(const AddedGameSystem_t&, const AddedGameSystem_t&)>, RegisterMessageHandlerIfOverridden<EventBuildGameSessionManifest_t>, RegisterMessageHandlerIfOverridden<EventClientFullySignedOn_t>, RegisterMessageHandlerIfOverridden<EventClientDisconnect_t>, RegisterMessageHandlerIfOverridden<EventSaveGame_t>, RegisterMessageHandlerIfOverridden<EventRestoreGame_t>, RegisterMessageHandlerIfOverridden<EventActiveSpawnGroupChanged_t>, RegisterMessageHandlerIfOverridden<EventServerPreEntityThink_t>, RegisterMessageHandlerIfOverridden<EventServerPostEntityThink_t> (32 total)
// callers: CLoopModeGame::ReceivedServerInfo, CLoopModeGame::LoopInit
// strings: "%s:  IGameSystem::LoopInitAllSystems(start)", "SV", "%s:  IGameSystem::LoopInitAllSystems(finish)"
// globals: s_GameSystems, GSLessFunc(AddedGameSystem_t const&,AddedGameSystem_t const&), s_eventDispatcher, IGameSystem::sm_pEventDispatcher, EventGameShutdown_t::GetVTableIndex(void)::s_nComputedIndex, EventGamePostInit_t::GetVTableIndex(void)::s_nComputedIndex, EventGamePreShutdown_t::GetVTableIndex(void)::s_nComputedIndex, EventGameActivate_t::GetVTableIndex(void)::s_nComputedIndex (25 total)
bool __fastcall IGameSystem::LoopInitAllSystems(
        const GameSessionConfiguration_t *const config,
        ILoopModePrerequisiteRegistry *pRegistry)
{
  __int64 v2; // r12
  int m_NumElements; // r14d
  IGameSystem::FactoryInfo_t *v4; // rbx
  const char *v5; // rax
  IGameSystem *GameSystem; // rax
  __int64 m_Size; // r15
  int v8; // edx
  __int64 v9; // r15
  AddedGameSystem_t *v10; // r13
  AddedGameSystem_t *m_pMemory; // r13
  AddedGameSystem_t *v12; // rbx
  __int64 v13; // r12
  __int64 v14; // r12
  __int64 v15; // r14
  AddedGameSystem_t *v16; // r15
  IGameSystem *m_pGameSystem; // rax
  __int64 v18; // r14
  CGameSystemEventDispatcher *i; // r12
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rsi
  IGameSystem *v26; // rbx
  GameSystemEventId_t v27; // edi
  bool v28; // bl
  IGameSystem *pSystem; // [rsp+0h] [rbp-70h]
  int id; // [rsp+18h] [rbp-58h]
  EventGameInit_t msg; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v35[8]; // [rsp+30h] [rbp-40h] BYREF
  AddedGameSystem_t v36; // 0:rcx.8,8:r8.8
  AddedGameSystem_t v37; // 0:rcx.8,8:r8.8

  v2 = 0;
  COM_TimestampedLog("%s:  IGameSystem::LoopInitAllSystems(start)", "SV");
  m_NumElements = IGameSystem::sm_GameSystemFactories.m_SymbolTable.m_Lookup.m_NumElements;
  if ( IGameSystem::sm_GameSystemFactories.m_SymbolTable.m_Lookup.m_NumElements != 0 )
  {
    do
    {
      while ( 1 )
      {
        v4 = &IGameSystem::sm_GameSystemFactories.m_Vector.m_Memory.m_pMemory[v2];
        if ( !v4->m_bHasBeenAdded && (*(v4->m_pFactory->_vptr_IGameSystemFactory + 5))(v4->m_pFactory) != 0 )
          break;
        if ( m_NumElements <= ++v2 )
          goto LABEL_9;
      }
      LOWORD(v35[0]) = v2;
      v5 = CUtlSymbolTable::String(&IGameSystem::sm_GameSystemFactories.m_SymbolTable, v35);
      GameSystem = IGameSystem::CreateGameSystem(v5, v4);
      m_Size = s_GameSystems.m_Size;
      v8 = s_GameSystems.m_Size;
      if ( s_GameSystems.m_Size == s_GameSystems.m_Memory.m_nAllocationCount )
      {
        pSystem = GameSystem;
        CUtlMemory<AddedGameSystem_t,int>::Grow(&s_GameSystems.m_Memory, 1);
        v8 = s_GameSystems.m_Size;
        GameSystem = pSystem;
      }
      v9 = m_Size;
      ++v2;
      s_GameSystems.m_Size = v8 + 1;
      s_GameSystems.m_Memory.m_pMemory[v9].m_pGameSystem = GameSystem;
      v10 = &s_GameSystems.m_Memory.m_pMemory[v9];
      v10->m_nPriority = (*(v4->m_pFactory->_vptr_IGameSystemFactory + 6))(v4->m_pFactory);
      s_GameSystems.m_Memory.m_pMemory[v9].m_nInsertionOrder = 0x7FFFFFFF;
    }
    while ( m_NumElements > v2 );
  }
LABEL_9:
  m_pMemory = s_GameSystems.m_Memory.m_pMemory;
  id = s_GameSystems.m_Size;
  v12 = &s_GameSystems.m_Memory.m_pMemory[s_GameSystems.m_Size];
  v13 = 16LL * s_GameSystems.m_Size;
  if ( v13 > 31 )
  {
    v14 = v13 >> 4;
    v15 = (v14 - 2) >> 1;
    v16 = &s_GameSystems.m_Memory.m_pMemory[v15];
    while ( 1 )
    {
      v36 = *v16--;
      std::__adjust_heap<AddedGameSystem_t *,long,AddedGameSystem_t,bool (*)(AddedGameSystem_t const&,AddedGameSystem_t const&)>(
        m_pMemory,
        v15,
        v14,
        v36,
        GSLessFunc);
      if ( v15 == 0 )
        break;
      --v15;
    }
    do
    {
      --v12;
      m_pGameSystem = m_pMemory->m_pGameSystem;
      v37 = *v12;
      *&v12->m_nPriority = *&m_pMemory->m_nPriority;
      v12->m_pGameSystem = m_pGameSystem;
      std::__adjust_heap<AddedGameSystem_t *,long,AddedGameSystem_t,bool (*)(AddedGameSystem_t const&,AddedGameSystem_t const&)>(
        m_pMemory,
        0,
        v12 - m_pMemory,
        v37,
        GSLessFunc);
    }
    while ( v12 - m_pMemory > 31 );
  }
  IGameSystem::sm_pEventDispatcher = &s_eventDispatcher;
  if ( id > 0 )
  {
    v18 = 0;
    for ( i = &s_eventDispatcher; ; i = IGameSystem::sm_pEventDispatcher )
    {
      v25 = EventGameInit_t::GetVTableIndex(void)::s_nComputedIndex;
      v26 = s_GameSystems.m_Memory.m_pMemory[v18].m_pGameSystem;
      if ( EventGameInit_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
      {
        v35[0] = off_3FC3E30;
        if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameInit_t const&))::ppVTableNew == 0
          && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameInit_t const&))::ppVTableNew) != 0 )
        {
          ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameInit_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameInit_t const&))::calculator;
          __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameInit_t const&))::ppVTableNew);
        }
        v35[0] = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameInit_t const&))::ppVTableNew;
        EventGameInit_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameInit_t const&))::ppVTableNew
                                                                   + 24))(v35);
        v25 = EventGameInit_t::GetVTableIndex(void)::s_nComputedIndex;
      }
      if ( off_3FC3E30[v25] != v26->_vptr_IGameSystem[v25] )
        i->RegisterListener(v25, v26);
      v20 = EventGameShutdown_t::GetVTableIndex(void)::s_nComputedIndex;
      if ( EventGameShutdown_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
      {
        v35[0] = off_3FC3E30;
        if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameShutdown_t const&))::ppVTableNew == 0
          && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameShutdown_t const&))::ppVTableNew) != 0 )
        {
          ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameShutdown_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameShutdown_t const&))::calculator;
          __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameShutdown_t const&))::ppVTableNew);
        }
        v35[0] = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameShutdown_t const&))::ppVTableNew;
        EventGameShutdown_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameShutdown_t const&))::ppVTableNew
                                                                       + 32))(v35);
        v20 = EventGameShutdown_t::GetVTableIndex(void)::s_nComputedIndex;
      }
      if ( off_3FC3E30[v20] != v26->_vptr_IGameSystem[v20] )
        i->RegisterListener(v20, v26);
      v21 = EventGamePostInit_t::GetVTableIndex(void)::s_nComputedIndex;
      if ( EventGamePostInit_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
      {
        v35[0] = off_3FC3E30;
        if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePostInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePostInit_t const&))::ppVTableNew == 0
          && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePostInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePostInit_t const&))::ppVTableNew) != 0 )
        {
          ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePostInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePostInit_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePostInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePostInit_t const&))::calculator;
          __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePostInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePostInit_t const&))::ppVTableNew);
        }
        v35[0] = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePostInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePostInit_t const&))::ppVTableNew;
        EventGamePostInit_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePostInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePostInit_t const&))::ppVTableNew
                                                                       + 40))(v35);
        v21 = EventGamePostInit_t::GetVTableIndex(void)::s_nComputedIndex;
      }
      if ( off_3FC3E30[v21] != v26->_vptr_IGameSystem[v21] )
        i->RegisterListener(v21, v26);
      v22 = EventGamePreShutdown_t::GetVTableIndex(void)::s_nComputedIndex;
      if ( EventGamePreShutdown_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
      {
        v35[0] = off_3FC3E30;
        if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePreShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePreShutdown_t const&))::ppVTableNew == 0
          && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePreShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePreShutdown_t const&))::ppVTableNew) != 0 )
        {
          ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePreShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePreShutdown_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePreShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePreShutdown_t const&))::calculator;
          __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePreShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePreShutdown_t const&))::ppVTableNew);
        }
        v35[0] = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePreShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePreShutdown_t const&))::ppVTableNew;
        EventGamePreShutdown_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePreShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePreShutdown_t const&))::ppVTableNew
                                                                          + 48))(v35);
        v22 = EventGamePreShutdown_t::GetVTableIndex(void)::s_nComputedIndex;
      }
      if ( off_3FC3E30[v22] != v26->_vptr_IGameSystem[v22] )
        i->RegisterListener(v22, v26);
      RegisterMessageHandlerIfOverridden<EventBuildGameSessionManifest_t>(v26, i);
      v23 = EventGameActivate_t::GetVTableIndex(void)::s_nComputedIndex;
      if ( EventGameActivate_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
      {
        v35[0] = off_3FC3E30;
        if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameActivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameActivate_t const&))::ppVTableNew == 0
          && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameActivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameActivate_t const&))::ppVTableNew) != 0 )
        {
          ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameActivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameActivate_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameActivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameActivate_t const&))::calculator;
          __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameActivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameActivate_t const&))::ppVTableNew);
        }
        v35[0] = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameActivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameActivate_t const&))::ppVTableNew;
        EventGameActivate_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameActivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameActivate_t const&))::ppVTableNew
                                                                       + 64))(v35);
        v23 = EventGameActivate_t::GetVTableIndex(void)::s_nComputedIndex;
      }
      if ( off_3FC3E30[v23] != v26->_vptr_IGameSystem[v23] )
        i->RegisterListener(v23, v26);
      v24 = EventGameDeactivate_t::GetVTableIndex(void)::s_nComputedIndex;
      if ( EventGameDeactivate_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
      {
        v35[0] = off_3FC3E30;
        if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameDeactivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameDeactivate_t const&))::ppVTableNew == 0
          && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameDeactivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameDeactivate_t const&))::ppVTableNew) != 0 )
        {
          ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameDeactivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameDeactivate_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameDeactivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameDeactivate_t const&))::calculator;
          __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameDeactivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameDeactivate_t const&))::ppVTableNew);
        }
        v35[0] = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameDeactivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameDeactivate_t const&))::ppVTableNew;
        EventGameDeactivate_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameDeactivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameDeactivate_t const&))::ppVTableNew
                                                                         + 88))(v35);
        v24 = EventGameDeactivate_t::GetVTableIndex(void)::s_nComputedIndex;
      }
      if ( off_3FC3E30[v24] != v26->_vptr_IGameSystem[v24] )
        i->RegisterListener(v24, v26);
      ++v18;
      RegisterMessageHandlerIfOverridden<EventClientFullySignedOn_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventClientDisconnect_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventSaveGame_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventRestoreGame_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventActiveSpawnGroupChanged_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventServerPreEntityThink_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventServerPostEntityThink_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventClientPreEntityThink_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventClientUpdate_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventClientPostDataUpdate_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventServerPreClientUpdate_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventSpawnGroupPrecache_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventSpawnGroupUncache_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventPreSpawnGroupLoad_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventPostSpawnGroupLoad_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventPreSpawnGroupUnload_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventPostSpawnGroupUnload_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventClientPreRender_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventClientPostRender_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventServerGamePostSimulate_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventClientGamePostSimulate_t>(v26, i);
      RegisterMessageHandlerIfOverridden<EventGameFrameBoundary_t>(v26, i);
      if ( v18 == (id - 1) + 1LL )
        break;
    }
  }
  if ( IGameSystem::sm_bForwardToHost )
    (*(*g_pGameSystem2HostHook + 88LL))(g_pGameSystem2HostHook, config, pRegistry, IGameSystem::sm_pEventDispatcher);
  IGameSystem::sm_bGameInitFailed = 0;
  v27 = EventGameInit_t::GetVTableIndex(void)::s_nComputedIndex;
  s_bInGameInit = 1;
  msg.m_pConfig = config;
  msg.m_pRegistry = pRegistry;
  if ( EventGameInit_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v35[0] = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameInit_t const&))::ppVTableNew == 0
      && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameInit_t const&))::ppVTableNew) != 0 )
    {
      ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameInit_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameInit_t const&))::calculator;
      __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameInit_t const&))::ppVTableNew);
    }
    v35[0] = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameInit_t const&))::ppVTableNew;
    EventGameInit_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameInit_t const&))::ppVTableNew
                                                               + 24))(v35);
    v27 = EventGameInit_t::GetVTableIndex(void)::s_nComputedIndex;
  }
  IGameSystem::DispatchEventInternal(v27, 0x19uLL, &msg);
  s_bInGameInit = 0;
  IGameSystem::GameInitDestroyQueuedGameSystems();
  v28 = IGameSystem::sm_bGameInitFailed;
  IGameSystem::sm_bGameInitFailed = 0;
  COM_TimestampedLog("%s:  IGameSystem::LoopInitAllSystems(finish)", "SV");
  return !v28;
}


// IGameSystem::GameInitDestroyGameSystem  (line 449, @0x0000000001f027d0, libserver.so)  // inlines: AddToTail, CopyConstruct<IGameSystem*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<IGameSystem*, int>::Grow
// callers: CDefaultResponseSystem::GameInit, CDOTA_AutoSaveGameSystem::GameInit
// globals: s_initingSystemsToDestroy
void __fastcall IGameSystem::GameInitDestroyGameSystem(IGameSystem *pGameSystemToDestroy)
{
  __int64 m_Size; // rbx
  int v3; // eax
  IGameSystem **v4; // rax

  m_Size = s_initingSystemsToDestroy.m_Size;
  v3 = s_initingSystemsToDestroy.m_Size;
  if ( s_initingSystemsToDestroy.m_Size == s_initingSystemsToDestroy.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<IGameSystem *,int>::Grow(&s_initingSystemsToDestroy.m_Memory, 1);
    v3 = s_initingSystemsToDestroy.m_Size;
  }
  s_initingSystemsToDestroy.m_Size = v3 + 1;
  v4 = &s_initingSystemsToDestroy.m_Memory.m_pMemory[m_Size];
  if ( v4 != 0 )
    *v4 = pGameSystemToDestroy;
}


// IGameSystem::GameInitDestroyQueuedGameSystems  (line 457, @0x0000000001f01360, libserver.so)  // inlines: Element, Purge, Remove, RemoveAll, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: IGameSystem::DestroyGameSystem, memmove, CUtlMemory<IGameSystem*, int>::Purge
// callers: IGameSystem::LoopInitAllSystems
// globals: s_initingSystemsToDestroy, s_GameSystems, IGameSystem::sm_pEventDispatcher
void __cdecl IGameSystem::GameInitDestroyQueuedGameSystems()
{
  unsigned __int64 v0; // r13
  __int64 m_Size; // rbx
  IGameSystem *v2; // r14
  AddedGameSystem_t *v3; // rax
  AddedGameSystem_t *v4; // r15
  signed __int64 v5; // r15
  int v6; // eax
  __int64 v7; // [rsp+8h] [rbp-38h]

  if ( s_initingSystemsToDestroy.m_Size > 0 )
  {
    v0 = 0;
    v7 = 8LL * (s_initingSystemsToDestroy.m_Size - 1) + 8;
LABEL_3:
    while ( 2 )
    {
      m_Size = s_GameSystems.m_Size;
      v2 = s_initingSystemsToDestroy.m_Memory.m_pMemory[v0 / 8];
      v3 = &s_GameSystems.m_Memory.m_pMemory[s_GameSystems.m_Size - 1];
      while ( 1 )
      {
        if ( m_Size - 1 < 0 )
        {
          v0 += 8LL;
          if ( v0 != v7 )
            goto LABEL_3;
          goto LABEL_8;
        }
        v4 = v3--;
        v5 = v4 - s_GameSystems.m_Memory.m_pMemory;
        if ( v3[1].m_pGameSystem == v2 )
          break;
        m_Size = m_Size - 1;
      }
      (*(IGameSystem::sm_pEventDispatcher->_vptr_IGameSystemEventDispatcher + 1))(
        IGameSystem::sm_pEventDispatcher,
        s_initingSystemsToDestroy.m_Memory.m_pMemory[v0 / 8]);
      IGameSystem::DestroyGameSystem(v2);
      v6 = s_GameSystems.m_Size;
      if ( s_GameSystems.m_Size - m_Size > 0 )
      {
        memmove(
          s_GameSystems.m_Memory.m_pMemory + v5,
          &s_GameSystems.m_Memory.m_pMemory[m_Size],
          16LL * (s_GameSystems.m_Size - m_Size));
        v6 = s_GameSystems.m_Size;
      }
      v0 += 8LL;
      s_GameSystems.m_Size = v6 - 1;
      if ( v0 != v7 )
        continue;
      break;
    }
  }
LABEL_8:
  s_initingSystemsToDestroy.m_Size = 0;
  if ( (s_initingSystemsToDestroy.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<IGameSystem *,int>::Purge(&s_initingSystemsToDestroy.m_Memory);
}


// IGameSystem::DispatchEventInternal  (line 483, @0x0000000001f014a0, libserver.so)  // inlines: operator[]
// callers: IGameSystem::LoopPostInitAllSystems, IGameSystem::LoopActivateAllSystems, IGameSystem::LoopInitAllSystems, CSpawnGroupMgrGameSystem::SpawnGroupInit, CSpawnGroupMgrGameSystem::SetActiveSpawnGroup, CSpawnGroupMgrGameSystem::SpawnGroupActuallyShutdown, CSpawnGroupMgrGameSystem::SpawnGroupShutdown, CSpawnGroupMgrGameSystem::SpawnGroupActuallySpawnEntities, CLoopModeGame::OnServerPostSimulate, CLoopModeGame::OnFrameBoundary, CLoopModeGame::OnPostDataUpdate, CLoopModeGame::OnClientPostSimulate (17 total)
// globals: IGameSystem::sm_pEventDispatcher, sm_funcListeners
void __fastcall IGameSystem::DispatchEventInternal(
        GameSystemEventId_t id,
        GameSystemEventFunc_t func,
        const GameSystemGenericEventType_t *const msg)
{
  CUtlVector<IGameSystem*,CUtlMemory<IGameSystem*,int> > *v3; // r12
  void (*pfn)(IGameSystem *, const GameSystemGenericEventType_t *); // rbx
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  void (*v8)(IGameSystem *, const GameSystemGenericEventType_t *); // rdx
  IGameSystem *v9; // rdi
  __int64 v10; // [rsp+0h] [rbp-40h]
  __int64 delta; // [rsp+8h] [rbp-38h]

  delta = func.__delta;
  if ( IGameSystem::sm_pEventDispatcher != 0 && sm_funcListeners.m_Size > id )
  {
    v3 = &sm_funcListeners.m_Memory.m_pMemory[id];
    if ( v3->m_Size > 0 )
    {
      pfn = func.__pfn;
      v6 = func.__pfn & 1;
      v10 = 8LL * (v3->m_Size - 1) + 8;
      v7 = 0;
      do
      {
        v8 = pfn;
        v9 = (v3->m_Memory.m_pMemory[v7 / 8] + delta);
        if ( v6 != 0 )
          v8 = *(v9->_vptr_IGameSystem + pfn - 1);
        v7 += 8LL;
        v8(v9, msg);
      }
      while ( v7 != v10 );
    }
  }
}


// IGameSystem::DispatchEventReverseOrderInternal  (line 501, @0x0000000001f01560, libserver.so)  // inlines: operator[]
// callers: IGameSystem::LoopShutdownAllSystems, IGameSystem::LoopPreShutdownAllSystems, IGameSystem::LoopDeactivateAllSystems
// globals: IGameSystem::sm_pEventDispatcher, sm_funcListeners
void __fastcall IGameSystem::DispatchEventReverseOrderInternal(
        GameSystemEventId_t id,
        GameSystemEventFunc_t func,
        const GameSystemGenericEventType_t *const msg)
{
  CUtlVector<IGameSystem*,CUtlMemory<IGameSystem*,int> > *v3; // r12
  int v4; // edx
  void (*pfn)(IGameSystem *, const GameSystemGenericEventType_t *); // rbx
  __int64 v7; // r15
  __int64 v8; // r14
  void (*v9)(IGameSystem *, const GameSystemGenericEventType_t *); // rdx
  IGameSystem *v10; // rdi
  unsigned __int64 v11; // [rsp+0h] [rbp-40h]
  __int64 delta; // [rsp+8h] [rbp-38h]

  delta = func.__delta;
  if ( IGameSystem::sm_pEventDispatcher != 0 && sm_funcListeners.m_Size > id )
  {
    v3 = &sm_funcListeners.m_Memory.m_pMemory[id];
    v4 = v3->m_Size - 1;
    if ( v4 >= 0 )
    {
      pfn = func.__pfn;
      v7 = func.__pfn & 1;
      v8 = 8LL * v4;
      v11 = 8 * (v4 - v4) - 8;
      do
      {
        v9 = pfn;
        v10 = (v3->m_Memory.m_pMemory[v8 / 8] + delta);
        if ( v7 != 0 )
          v9 = *(v10->_vptr_IGameSystem + pfn - 1);
        v8 -= 8;
        v9(v10, msg);
      }
      while ( v8 != v11 );
    }
  }
}


// IGameSystem::DispatchOutOfGameEventInternal  (line 519, @0x0000000001f01630, libserver.so)  // inlines: operator[]
// callers: CSource2Server::UpdateWhenNotInGame
// globals: IGameSystem::sm_pEventDispatcher, sm_outOfGameFuncListeners
__int64 __fastcall IGameSystem::DispatchOutOfGameEventInternal(int a1, char *a2, __int64 a3, __int64 a4)
{
  CUtlVector<IGameSystem*,CUtlMemory<IGameSystem*,int> > *v6; // r14
  unsigned __int64 v8; // rbx
  __int64 (__fastcall *v9)(_QWORD *, __int64); // rdx
  _QWORD *v10; // rdi
  __int64 result; // rax
  __int64 v12; // [rsp-48h] [rbp-48h]
  __int64 v13; // [rsp-40h] [rbp-40h]

  if ( IGameSystem::sm_pEventDispatcher == 0 && sm_outOfGameFuncListeners.m_Size > a1 )
  {
    v6 = &sm_outOfGameFuncListeners.m_Memory.m_pMemory[a1];
    if ( v6->m_Size > 0 )
    {
      v8 = 0;
      v12 = a2 & 1;
      v13 = 8LL * (v6->m_Size - 1) + 8;
      do
      {
        v9 = a2;
        v10 = (&v6->m_Memory.m_pMemory[v8 / 8]->_vptr_IGameSystem + a3);
        if ( v12 != 0 )
          v9 = *&a2[*v10 - 1];
        v8 += 8LL;
        result = v9(v10, a4);
      }
      while ( v8 != v13 );
    }
  }
  return result;
}


// IGameSystem::LoopShutdownAllSystems  (line 537, @0x0000000001f016e0, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventGameShutdown_t&)>, DispatchEventReverseOrder<EventGameShutdown_t>, GetVTableIndex
// calls: IGameSystem::DispatchEventReverseOrderInternal, __cxa_guard_acquire, __cxa_guard_release
// callers: CLoopModeGame::LoopShutdown
// globals: IGameSystem::sm_pEventDispatcher, EventGameShutdown_t::GetVTableIndex(void)::s_nComputedIndex, IGameSystem::sm_bForwardToHost, s_GameSystems, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameShutdown_t 
void __cdecl IGameSystem::LoopShutdownAllSystems()
{
  GameSystemEventId_t v0; // edi
  int v1; // ebx
  __int64 v2; // r12
  IGameSystem *m_pGameSystem; // rsi
  __int64 (__fastcall **v4)(IGameSystem *__hidden); // [rsp-8h] [rbp-28h] BYREF

  if ( IGameSystem::sm_pEventDispatcher != 0 )
  {
    v0 = EventGameShutdown_t::GetVTableIndex(void)::s_nComputedIndex;
    if ( EventGameShutdown_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
    {
      v4 = off_3FC3E30;
      if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameShutdown_t const&))::ppVTableNew == 0
        && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameShutdown_t const&))::ppVTableNew) != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameShutdown_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameShutdown_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameShutdown_t const&))::ppVTableNew);
      }
      v4 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameShutdown_t const&))::ppVTableNew;
      EventGameShutdown_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameShutdown_t const&))::ppVTableNew
                                                                     + 32))(&v4);
      v0 = EventGameShutdown_t::GetVTableIndex(void)::s_nComputedIndex;
    }
    IGameSystem::DispatchEventReverseOrderInternal(v0, 0x21uLL, &v4);
    if ( IGameSystem::sm_bForwardToHost )
      (*(*g_pGameSystem2HostHook + 96LL))(g_pGameSystem2HostHook);
    v1 = s_GameSystems.m_Size - 1;
    v2 = s_GameSystems.m_Size - 1;
    if ( s_GameSystems.m_Size - 1 >= 0 )
    {
      do
      {
        --v1;
        m_pGameSystem = s_GameSystems.m_Memory.m_pMemory[v2--].m_pGameSystem;
        (*(IGameSystem::sm_pEventDispatcher->_vptr_IGameSystemEventDispatcher + 1))(
          IGameSystem::sm_pEventDispatcher,
          m_pGameSystem);
      }
      while ( v1 != -1 );
    }
    IGameSystem::sm_pEventDispatcher = 0;
    IGameSystem::sm_bForwardToHost = 0;
  }
}


// IGameSystem::LoopDestroyAllSystems  (line 567, @0x0000000001f01810, libserver.so)  // inlines: Destruct<CUtlVector<IGameSystem*> >, Element, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: IGameSystem::DestroyGameSystem, CUtlMemory<IGameSystem*, int>::Purge, CUtlMemory<CUtlVector<IGameSystem*, CUtlMemory<IGameSystem*, int> >, int>::Purge
// callers: CLoopModeGame::LoopShutdown
// globals: s_GameSystems, sm_funcListeners
void __cdecl IGameSystem::LoopDestroyAllSystems()
{
  int v0; // ebx
  __int64 v1; // r12
  IGameSystem *m_pGameSystem; // rdi
  int m_Size; // r12d
  __int64 i; // r13
  char *v5; // rbx
  bool v6; // zf

  v0 = s_GameSystems.m_Size - 1;
  v1 = s_GameSystems.m_Size - 1;
  if ( s_GameSystems.m_Size - 1 >= 0 )
  {
    do
    {
      --v0;
      m_pGameSystem = s_GameSystems.m_Memory.m_pMemory[v1--].m_pGameSystem;
      IGameSystem::DestroyGameSystem(m_pGameSystem);
    }
    while ( v0 != -1 );
  }
  m_Size = sm_funcListeners.m_Size;
  s_GameSystems.m_Size = 0;
  for ( i = 24LL * sm_funcListeners.m_Size - 24; --m_Size >= 0; i -= 24 )
  {
    v5 = sm_funcListeners.m_Memory.m_pMemory + i;
    v6 = (*(&sm_funcListeners.m_Memory.m_pMemory->m_Memory.m_nGrowSize + i) & 0xC0000000) == 0;
    *(&sm_funcListeners.m_Memory.m_pMemory->CUtlVectorBase<CUtlVector<IGameSystem*,CUtlMemory<IGameSystem*,int> >,CUtlMemory<CUtlVector<IGameSystem*,CUtlMemory<IGameSystem*,int> >,int> >::m_Size
    + i) = 0;
    if ( v6 )
    {
      CUtlMemory<IGameSystem *,int>::Purge((v5 + 8));
      if ( (*(v5 + 5) & 0xC0000000) == 0 )
        CUtlMemory<IGameSystem *,int>::Purge((v5 + 8));
    }
  }
  sm_funcListeners.m_Size = 0;
  if ( (sm_funcListeners.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlVector<IGameSystem *,CUtlMemory<IGameSystem *,int>>,int>::Purge(&sm_funcListeners.m_Memory);
}


// IGameSystem::LoopPostInitAllSystems  (line 580, @0x0000000001f01900, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventGamePostInit_t&)>, DispatchEvent<EventGamePostInit_t>, GetVTableIndex
// calls: COM_TimestampedLog, IGameSystem::DispatchEventInternal, __cxa_guard_acquire, __cxa_guard_release
// callers: CLoopModeGame::ReceivedServerInfo, CLoopModeGame::LoopInit
// strings: "%s:  IGameSystem::LoopPostInitAllSystems(start)\n", "SV", "%s:  IGameSystem::LoopPostInitAllSystems(finish)\n"
// globals: EventGamePostInit_t::GetVTableIndex(void)::s_nComputedIndex, IGameSystem::sm_bGameInitFailed, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePostInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePostInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePostInit_t 
bool __fastcall IGameSystem::LoopPostInitAllSystems(
        const GameSessionConfiguration_t *const config,
        ILoopModePrerequisiteRegistry *pRegistry)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  GameSystemEventId_t v9; // edi
  bool v10; // bl
  EventGamePostInit_t msg; // [rsp+0h] [rbp-30h] BYREF
  __int64 (__fastcall **v13)(IGameSystem *__hidden); // [rsp+10h] [rbp-20h] BYREF

  COM_TimestampedLog("%s:  IGameSystem::LoopPostInitAllSystems(start)\n", "SV");
  v9 = EventGamePostInit_t::GetVTableIndex(void)::s_nComputedIndex;
  msg.m_pConfig = config;
  IGameSystem::sm_bGameInitFailed = 0;
  msg.m_pRegistry = pRegistry;
  if ( EventGamePostInit_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    v13 = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePostInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePostInit_t const&))::ppVTableNew == 0
      && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePostInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePostInit_t const&))::ppVTableNew) != 0 )
    {
      ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePostInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePostInit_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePostInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePostInit_t const&))::calculator;
      __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePostInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePostInit_t const&))::ppVTableNew);
    }
    v13 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePostInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePostInit_t const&))::ppVTableNew;
    EventGamePostInit_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePostInit_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePostInit_t const&))::ppVTableNew
                                                                   + 40))(
                                                                    &v13,
                                                                    v6,
                                                                    v4,
                                                                    v5,
                                                                    v7,
                                                                    v8,
                                                                    msg.m_pConfig,
                                                                    msg.m_pRegistry);
    v9 = EventGamePostInit_t::GetVTableIndex(void)::s_nComputedIndex;
  }
  IGameSystem::DispatchEventInternal(v9, 0x29uLL, &msg);
  v10 = IGameSystem::sm_bGameInitFailed;
  IGameSystem::sm_bGameInitFailed = 0;
  COM_TimestampedLog("%s:  IGameSystem::LoopPostInitAllSystems(finish)\n", "SV");
  return !v10;
}


// IGameSystem::LoopPreShutdownAllSystems  (line 598, @0x0000000001f019e0, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventGamePreShutdown_t&)>, DispatchEventReverseOrder<EventGamePreShutdown_t>, GetVTableIndex
// calls: IGameSystem::DispatchEventReverseOrderInternal, __cxa_guard_acquire, __cxa_guard_release
// callers: CLoopModeGame::LoopShutdown
// globals: EventGamePreShutdown_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePreShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePreShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePreShutd
// local variable allocation has failed, the output may be wrong!
void __cdecl IGameSystem::LoopPreShutdownAllSystems()
{
  __int64 (__fastcall **msg)(IGameSystem *__hidden); // [rsp+10h] [rbp-10h] OVERLAPPED BYREF

  if ( EventGamePreShutdown_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
  {
    msg = off_3FC3E30;
    if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePreShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePreShutdown_t const&))::ppVTableNew == 0
      && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePreShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePreShutdown_t const&))::ppVTableNew) != 0 )
    {
      ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePreShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePreShutdown_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePreShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePreShutdown_t const&))::calculator;
      __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePreShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePreShutdown_t const&))::ppVTableNew);
    }
    msg = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePreShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePreShutdown_t const&))::ppVTableNew;
    EventGamePreShutdown_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGamePreShutdown_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGamePreShutdown_t const&))::ppVTableNew
                                                                      + 48))(&msg);
    IGameSystem::DispatchEventReverseOrderInternal(
      EventGamePreShutdown_t::GetVTableIndex(void)::s_nComputedIndex,
      0x31uLL,
      &msg);
  }
  else
  {
    IGameSystem::DispatchEventReverseOrderInternal(
      EventGamePreShutdown_t::GetVTableIndex(void)::s_nComputedIndex,
      0x31uLL,
      &msg);
  }
}


// IGameSystem::LoopActivateAllSystems  (line 604, @0x0000000001f02830, libserver.so)  // inlines: AddToTail, CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventGameActivate_t&)>, CopyConstruct<IGameSystem*>, DispatchEvent<EventGameActivate_t>, Element, GetVTableIndex, GrowMemory, operator[]
// calls: LoggingSystem_IsChannelEnabled, CUtlMemory<IGameSystem*, int>::Grow, LoggingSystem_Log, IGameSystem::DispatchEventInternal, __cxa_guard_acquire, __cxa_guard_release
// callers: CLoopModeGame::OnLoopActivate
// strings: "true ", "false", "SV", "%s:  EventGameActivate_t: background map %s\n", "%s:  IGameSystem::LoopActivateAllSystems\n"
// globals: IGameSystem::sm_bHasActivated, s_GameSystems, s_ActiveGameSystems, IGameSystem::sm_bForwardToHost, EventGameActivate_t::GetVTableIndex(void)::s_nComputedIndex, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameActivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameActivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameActivate_t 
void __fastcall IGameSystem::LoopActivateAllSystems(const EngineLoopState_t *const state, bool bBackgroundMap)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r13
  IGameSystem **v6; // rax
  __int64 m_Size; // r12
  IGameSystem *m_pGameSystem; // rcx
  int v9; // eax
  const char *v10; // r8
  GameSystemEventId_t v11; // edi
  IGameSystem *pSystem; // [rsp+8h] [rbp-58h]
  EventGameActivate_t msg; // [rsp+10h] [rbp-50h] BYREF
  __int64 (__fastcall **v14)(IGameSystem *__hidden); // [rsp+20h] [rbp-40h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    LoggingSystem_Log(LOG_SERVER, 1, "%s:  IGameSystem::LoopActivateAllSystems\n", "SV");
  if ( !IGameSystem::sm_bHasActivated )
  {
    IGameSystem::sm_bHasActivated = 1;
    if ( s_GameSystems.m_Size > 0 )
    {
      v4 = 0;
      v5 = 16 * ((s_GameSystems.m_Size - 1) + 1LL);
      do
      {
        m_Size = s_ActiveGameSystems.m_Size;
        m_pGameSystem = s_GameSystems.m_Memory.m_pMemory[v4 / 0x10].m_pGameSystem;
        v9 = s_ActiveGameSystems.m_Size;
        if ( s_ActiveGameSystems.m_Size == s_ActiveGameSystems.m_Memory.m_nAllocationCount )
        {
          pSystem = s_GameSystems.m_Memory.m_pMemory[v4 / 0x10].m_pGameSystem;
          CUtlMemory<IGameSystem *,int>::Grow(&s_ActiveGameSystems.m_Memory, 1);
          v9 = s_ActiveGameSystems.m_Size;
          m_pGameSystem = pSystem;
        }
        s_ActiveGameSystems.m_Size = v9 + 1;
        v6 = &s_ActiveGameSystems.m_Memory.m_pMemory[m_Size];
        if ( v6 != 0 )
          *v6 = m_pGameSystem;
        v4 += 16LL;
      }
      while ( v4 != v5 );
    }
    if ( IGameSystem::sm_bForwardToHost )
      (*(*g_pGameSystem2HostHook + 104LL))(g_pGameSystem2HostHook, state, bBackgroundMap);
    msg.m_pState = state;
    msg.m_bBackgroundMap = bBackgroundMap;
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
    {
      v10 = "false";
      if ( bBackgroundMap )
        v10 = "true ";
      LoggingSystem_Log(LOG_SERVER, 0, "%s:  EventGameActivate_t: background map %s\n", "SV", v10);
    }
    v11 = EventGameActivate_t::GetVTableIndex(void)::s_nComputedIndex;
    if ( EventGameActivate_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
    {
      v14 = off_3FC3E30;
      if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameActivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameActivate_t const&))::ppVTableNew == 0
        && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameActivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameActivate_t const&))::ppVTableNew) != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameActivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameActivate_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameActivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameActivate_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameActivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameActivate_t const&))::ppVTableNew);
      }
      v14 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameActivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameActivate_t const&))::ppVTableNew;
      EventGameActivate_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameActivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameActivate_t const&))::ppVTableNew
                                                                     + 64))(&v14);
      v11 = EventGameActivate_t::GetVTableIndex(void)::s_nComputedIndex;
    }
    IGameSystem::DispatchEventInternal(v11, 0x41uLL, &msg);
  }
}


// IGameSystem::LoopDeactivateAllSystems  (line 634, @0x0000000001f01a80, libserver.so)  // inlines: CDontUseThisGameSystem, ComputeVTableIndex<CDontUseThisGameSystem, void (IGameSystem::*)(const EventGameDeactivate_t&)>, DispatchEventReverseOrder<EventGameDeactivate_t>, GetVTableIndex, RemoveAll
// calls: LoggingSystem_IsChannelEnabled, IGameSystem::DispatchEventReverseOrderInternal, LoggingSystem_Log, __cxa_guard_acquire, __cxa_guard_release
// callers: CLoopModeGame::OnLoopDeactivate
// strings: "SV", "%s:  IGameSystem::LoopDeactivateAllSystems\n", "true ", "false", "%s:  EventGameDeactivate_t: background map %s\n"
// globals: IGameSystem::sm_bHasActivated, EventGameDeactivate_t::GetVTableIndex(void)::s_nComputedIndex, IGameSystem::sm_bForwardToHost, s_ActiveGameSystems, `guard variable for'ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameDeactivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*, ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameDeactivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameDeactivat
void __fastcall IGameSystem::LoopDeactivateAllSystems(const EngineLoopState_t *const state, bool bBackgroundMap)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  GameSystemEventId_t v9; // edi
  const char *v10; // r8
  EventGameDeactivate_t msg; // [rsp+0h] [rbp-40h] BYREF
  __int64 (__fastcall **v12)(IGameSystem *__hidden); // [rsp+10h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    LoggingSystem_Log(LOG_SERVER, 1, "%s:  IGameSystem::LoopDeactivateAllSystems\n", "SV");
  if ( IGameSystem::sm_bHasActivated )
  {
    IGameSystem::sm_bHasActivated = 0;
    msg.m_pState = state;
    msg.m_bBackgroundMap = bBackgroundMap;
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 0) != 0 )
    {
      v10 = "false";
      if ( bBackgroundMap )
        v10 = "true ";
      LoggingSystem_Log(LOG_SERVER, 0, "%s:  EventGameDeactivate_t: background map %s\n", "SV", v10);
    }
    v9 = EventGameDeactivate_t::GetVTableIndex(void)::s_nComputedIndex;
    if ( EventGameDeactivate_t::GetVTableIndex(void)::s_nComputedIndex < 0 )
    {
      v12 = off_3FC3E30;
      if ( `guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameDeactivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameDeactivate_t const&))::ppVTableNew == 0
        && __cxa_guard_acquire(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameDeactivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameDeactivate_t const&))::ppVTableNew) != 0 )
      {
        ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameDeactivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameDeactivate_t const&))::ppVTableNew = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameDeactivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameDeactivate_t const&))::calculator;
        __cxa_guard_release(&`guard variable for'int ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameDeactivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameDeactivate_t const&))::ppVTableNew);
      }
      v12 = ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameDeactivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameDeactivate_t const&))::ppVTableNew;
      EventGameDeactivate_t::GetVTableIndex(void)::s_nComputedIndex = (*(ComputeVTableIndex<CDontUseThisGameSystem,void (IGameSystem::*)(EventGameDeactivate_t const&)>(CDontUseThisGameSystem &,void (IGameSystem::*)(EventGameDeactivate_t const&))::ppVTableNew
                                                                       + 88))(
                                                                        &v12,
                                                                        v6,
                                                                        v4,
                                                                        v5,
                                                                        v7,
                                                                        v8,
                                                                        msg.m_pState,
                                                                        *&msg.m_bBackgroundMap);
      v9 = EventGameDeactivate_t::GetVTableIndex(void)::s_nComputedIndex;
    }
    IGameSystem::DispatchEventReverseOrderInternal(v9, 0x59uLL, &msg);
    if ( IGameSystem::sm_bForwardToHost )
      (*(*g_pGameSystem2HostHook + 112LL))(g_pGameSystem2HostHook, state, bBackgroundMap);
    s_ActiveGameSystems.m_Size = 0;
  }
}


