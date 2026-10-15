// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/physics_main_shared.cpp:62
struct watcher_t {
	EHANDLE hWatcher;  // +0x0

	watcher_t();
	watcher_t(const watcher_t &);

	// sizeof = 16
};

// src/game/shared/physics_main_shared.cpp:96
class CPortalTouchScope {
	static int m_nDepth;
	static CCallQueue m_CallQueue;
	CPortalTouchScope();
	~CPortalTouchScope();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Physics_TraceEntity  (line 36, @0x00000000022d3a20, libserver.so)  // inlines: GameRules
// calls: UTIL_TraceEntity
// callers: CBaseEntity::PhysicsTestEntityPosition, CBaseEntity::PhysicsPushEntity, CBaseEntity::PhysicsTryMove, CBaseEntity::PhysicsStep
void __fastcall Physics_TraceEntity(
        CBaseEntity *pBaseEntity,
        const Vector *const vAbsStart,
        const Vector *const vAbsEnd,
        uint64 nMask,
        trace_t *pTraceOut)
{
  if ( (*(pBaseEntity->_vptr_IHandleEntity + 161))(pBaseEntity) != 0 )
    (*(g_pGameRules->_vptr_CGameRules + 129))(g_pGameRules, pBaseEntity, vAbsStart, vAbsEnd, nMask, pTraceOut);
  else
    UTIL_TraceEntity(pBaseEntity, vAbsStart, vAbsEnd, nMask, pTraceOut);
}


// GetPortalCallQueue  (line 110, @0x00000000022d3b70, libserver.so)
// globals: CPortalTouchScope::m_nDepth, CPortalTouchScope::m_CallQueue
CCallQueue *__cdecl GetPortalCallQueue()
{
  CCallQueue *result; // rax

  result = 0;
  if ( CPortalTouchScope::m_nDepth > 0 )
    return &CPortalTouchScope::m_CallQueue;
  return result;
}


// CPortalTouchScope::CPortalTouchScope  (line 115, @0x00000000022d3b90, libserver.so)
// globals: CPortalTouchScope::m_nDepth
void __fastcall CPortalTouchScope::CPortalTouchScope(CPortalTouchScope *const this)
{
  ++CPortalTouchScope::m_nDepth;
}


// CPortalTouchScope::~CPortalTouchScope  (line 120, @0x00000000022d3ba0, libserver.so)  // inlines: CallQueued, CopyConstruct<CFunctor*>, Count, FinishPush, FreeNode, InterlockedCompareExchangeNode, InterlockedCompareExchangeNodeLink, Pop, PopItem, Push, PushItem, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedCompareExchange64, ThreadInterlockedCompareExchangePointer, ThreadInterlockedDecrement, ThreadInterlockedIncrement, ThreadPause, operator int, operator++, operator--
// calls: AssertMsg_ConditionFailed, operator new
// strings: "CTSQueue corruption"
// globals: CPortalTouchScope::m_nDepth, CPortalTouchScope::m_CallQueue, CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants
void __fastcall CPortalTouchScope::~CPortalTouchScope(CPortalTouchScope *const this)
{
  unsigned __int64 v1; // r13
  unsigned __int64 v2; // rcx
  TSLHead_t m_Head; // rax
  _QWORD *p_Next; // r12
  TSLHead_t v5; // rt0
  intp sequence; // rdx
  signed __int64 *pNode; // rsi
  __int128 v8; // rt0
  __int128 v9; // rt0
  CTSQueue<CFunctor*,false>::Node_t *v10; // r10
  CCallQueue *pNext; // rsi
  CFunctor *v12; // r14
  CTSQueue<CFunctor*,false>::NodeLink_t v13; // rt0
  TSLHead_t v14; // rax
  __int64 v15; // rdx
  TSLHead_t v16; // rt0
  unsigned __int8 v17; // tt
  __int128 v18; // rt0
  int v19; // [rsp-5Ch] [rbp-5Ch]

  if ( --CPortalTouchScope::m_nDepth == 0 && CPortalTouchScope::m_CallQueue.m_queue.m_Count.m_value != 0 )
  {
    v2 = 0;
    m_Head = CPortalTouchScope::m_CallQueue.m_queue.m_FreeNodes.m_Head;
    p_Next = &CPortalTouchScope::m_CallQueue.m_queue.m_FreeNodes.m_Head.value.Next->Next;
    if ( CPortalTouchScope::m_CallQueue.m_queue.m_FreeNodes.m_Head.value.Next != 0 )
    {
      while ( 1 )
      {
        v2 = (m_Head.value32.DepthAndSequence - 1) | v2 & 0xFFFFFFFF00000000LL;
        v5 = m_Head;
        if ( _InterlockedCompareExchange128(
               &CPortalTouchScope::m_CallQueue.m_queue.m_FreeNodes.m_Head.value.Next,
               v2,
               m_Head.value.Next->Next,
               &v5) != 0 )
          break;
        _mm_pause();
        m_Head = CPortalTouchScope::m_CallQueue.m_queue.m_FreeNodes.m_Head;
        p_Next = &CPortalTouchScope::m_CallQueue.m_queue.m_FreeNodes.m_Head.value.Next->Next;
        if ( CPortalTouchScope::m_CallQueue.m_queue.m_FreeNodes.m_Head.value.Next == 0 )
          goto LABEL_26;
      }
    }
    else
    {
LABEL_26:
      p_Next = operator new(0x10u);
    }
    if ( p_Next != -8LL )
      p_Next[1] = 0;
    v19 = 0;
    *p_Next = &CPortalTouchScope::m_CallQueue;
    while ( 1 )
    {
      sequence = CPortalTouchScope::m_CallQueue.m_queue.m_Tail.value.sequence;
      pNode = CPortalTouchScope::m_CallQueue.m_queue.m_Tail.value.pNode;
      if ( _InterlockedCompareExchange64(
             CPortalTouchScope::m_CallQueue.m_queue.m_Tail.value.pNode,
             p_Next,
             &CPortalTouchScope::m_CallQueue) == &CPortalTouchScope::m_CallQueue )
        break;
      *&v8 = pNode;
      *(&v8 + 1) = sequence;
      _InterlockedCompareExchange128(
        &CPortalTouchScope::m_CallQueue.m_queue.m_Tail.value.pNode,
        sequence + 1,
        *pNode,
        &v8);
      if ( ++v19 > 9999999
        && AssertMsg_ConditionFailed(
             &CTSQueue<CFunctor *,false>::Push(CTSQueue<CFunctor *,false>::Node_t *)::_assertionConstants,
             "CTSQueue corruption") != 0 )
      {
        __debugbreak();
      }
    }
    *&v9 = pNode;
    *(&v9 + 1) = sequence;
    _InterlockedCompareExchange128(
      &CPortalTouchScope::m_CallQueue.m_queue.m_Tail.value.pNode,
      sequence + 1,
      p_Next,
      &v9);
    _InterlockedAdd(&CPortalTouchScope::m_CallQueue.m_queue.m_Count.m_value, 1u);
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            v10 = CPortalTouchScope::m_CallQueue.m_queue.m_Head.value.pNode;
            pNext = CPortalTouchScope::m_CallQueue.m_queue.m_Head.value.pNode->pNext;
          }
          while ( CPortalTouchScope::m_CallQueue.m_queue.m_Head.value.pNode->pNext == 0 );
          if ( CPortalTouchScope::m_CallQueue.m_queue.m_Head.value.pNode != CPortalTouchScope::m_CallQueue.m_queue.m_Tail.value.pNode )
            break;
          if ( pNext == &CPortalTouchScope::m_CallQueue )
            return;
          *&v18 = CPortalTouchScope::m_CallQueue.m_queue.m_Head.value.pNode;
          *(&v18 + 1) = CPortalTouchScope::m_CallQueue.m_queue.m_Tail.value.sequence;
          _InterlockedCompareExchange128(
            &CPortalTouchScope::m_CallQueue.m_queue.m_Tail.value.pNode,
            *(&v18 + 1) + 1LL,
            pNext,
            &v18);
        }
        if ( pNext != &CPortalTouchScope::m_CallQueue )
        {
          v12 = pNext->m_queue.m_Head.value.sequence;
          v13 = CPortalTouchScope::m_CallQueue.m_queue.m_Head;
          if ( _InterlockedCompareExchange128(
                 &CPortalTouchScope::m_CallQueue,
                 CPortalTouchScope::m_CallQueue.m_queue.m_Head.value.sequence + 1,
                 pNext,
                 &v13) != 0 )
            break;
        }
      }
      _InterlockedSub(&CPortalTouchScope::m_CallQueue.m_queue.m_Count.m_value, 1u);
      v10->elem = v12;
      v1 = v1;
      while ( 1 )
      {
        v14 = CPortalTouchScope::m_CallQueue.m_queue.m_FreeNodes.m_Head;
        v1 = (CPortalTouchScope::m_CallQueue.m_queue.m_FreeNodes.m_Head.value32.DepthAndSequence + 65537)
           | v1 & 0xFFFFFFFF00000000LL;
        v10->pNext = CPortalTouchScope::m_CallQueue.m_queue.m_FreeNodes.m_Head.value.Next;
        v16 = v14;
        v17 = _InterlockedCompareExchange128(
                &CPortalTouchScope::m_CallQueue.m_queue.m_FreeNodes.m_Head.value.Next,
                v1,
                v10,
                &v16);
        v15 = *(&v16.value64x128 + 1);
        if ( v17 != 0 )
          break;
        _mm_pause();
      }
      if ( v12 == 0 )
        break;
      (*(v12->_vptr_IRefCounted + 2))(v12, pNext, v15, v1, &CPortalTouchScope::m_CallQueue);
      (*(v12->_vptr_IRefCounted + 1))(v12);
    }
  }
}


// CWatcherList::Init  (line 134, @0x0000000002301830, libserver.so)
// calls: CUtlMultiList<watcher_t, short unsigned int>::CreateList
// globals: g_WatcherList
void __fastcall CWatcherList::Init(CWatcherList *const this)
{
  this->m_list = CUtlMultiList<watcher_t,unsigned short>::CreateList(&g_WatcherList);
}


// CWatcherList::~CWatcherList  (line 139, @0x00000000022ff9f0, libserver.so)  // inlines: DestroyList, Free, Head, InternalElement, Next, Remove, RemoveAll, operator[]
// calls: CUtlMultiList<watcher_t, short unsigned int>::Remove, CUtlLinkedList<CUtlMultiList<watcher_t, short unsigned int>::List_t, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t, short unsigned int>::List_t, short unsigned int>, short unsigned int> >::Unlink
// callers: CEntityDataInstantiator<CWatcherList>::DestroyDataObject
// globals: g_WatcherList
void __fastcall CWatcherList::~CWatcherList(CWatcherList *const this)
{
  CUtlMultiList<watcher_t,short unsigned int>::ListHandle_t m_list; // r12
  __int64 v2; // r13
  unsigned __int16 m_Head; // dx
  unsigned __int16 m_Next; // r14

  m_list = this->m_list;
  v2 = this->m_list;
  m_Head = g_WatcherList.m_List.m_Memory.m_pMemory[v2].m_Element.m_Head;
  if ( m_Head != 0xFFFF )
  {
    while ( 1 )
    {
      m_Next = g_WatcherList.m_Memory.m_pMemory[m_Head].m_Next;
      CUtlMultiList<watcher_t,unsigned short>::Remove(&g_WatcherList, m_list, m_Head);
      if ( m_Next == 0xFFFF )
        break;
      m_Head = m_Next;
    }
  }
  CUtlLinkedList<CUtlMultiList<watcher_t,unsigned short>::List_t,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CUtlMultiList<watcher_t,unsigned short>::List_t,unsigned short>,unsigned short>>::Unlink(
    &g_WatcherList.m_List,
    m_list);
  g_WatcherList.m_List.m_Memory.m_pMemory[v2].m_Next = g_WatcherList.m_List.m_FirstFree;
  g_WatcherList.m_List.m_FirstFree = m_list;
}


// CWatcherList::GetCallbackObjects  (line 144, @0x00000000022f2e40, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, Head, IndexToIdentity, InternalElement, IsValid, LookupEntity, Next, operator CEntityInstance*, operator[]
// calls: CUtlMultiList<watcher_t, short unsigned int>::Remove
// callers: CWatcherList::NotifyPositionChanged, CWatcherList::NotifyVPhysicsStateChanged, CWatcherList::NotifyMotionState
// globals: g_WatcherList, CEntityHandle::gm_pEntityList
int __fastcall CWatcherList::GetCallbackObjects(CWatcherList *const this, IWatcherCallback **pList, int listMax)
{
  unsigned __int16 m_Head; // r9
  int v7; // ebx
  CUtlMultiList<watcher_t,short unsigned int>::ListElem_t *v8; // rcx
  unsigned __int16 m_Next; // r12
  CEntityIdentity *v10; // r8
  CEntityIdentity *v11; // r8
  __int64 v12; // rax

  m_Head = g_WatcherList.m_List.m_Memory.m_pMemory[this->m_list].m_Element.m_Head;
  if ( m_Head != 0xFFFF )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = &g_WatcherList.m_Memory.m_pMemory[m_Head];
      m_Next = v8->m_Next;
      if ( v8->m_Element.hWatcher.m_Index + 2 > 1
        && (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Element.hWatcher.m_Index) >> 9) & 0x3F]) != 0
        && (v11 = &v10[v8->m_Element.hWatcher.m_Index & 0x1FF]) != 0
        && v8->m_Element.hWatcher.m_Index == v11->m_EHandle.m_Index
        && v11->m_pInstance != 0 )
      {
        v12 = v7++;
        pList[v12] = v8->m_Element.pWatcherCallback;
        if ( v7 >= listMax )
          return v7;
      }
      else
      {
        CUtlMultiList<watcher_t,unsigned short>::Remove(&g_WatcherList, this->m_list, m_Head);
      }
      if ( m_Next == 0xFFFF )
        return v7;
      m_Head = m_Next;
    }
  }
  return 0;
}


// CWatcherList::NotifyPositionChanged  (line 170, @0x00000000022f2f50, libserver.so)
// calls: CWatcherList::GetCallbackObjects
// callers: ReportPositionChanged
void __fastcall CWatcherList::NotifyPositionChanged(CWatcherList *const this, CBaseEntity *pEntity)
{
  IWatcherCallback **v3; // rbx
  int CallbackObjects; // eax
  IWatcherCallback **v5; // r12
  IWatcherCallback *pCallbacks[1024]; // [rsp+0h] [rbp-2020h] BYREF

  v3 = pCallbacks;
  CallbackObjects = CWatcherList::GetCallbackObjects(this, pCallbacks, 1024);
  if ( CallbackObjects > 0 )
  {
    v5 = &pCallbacks[(CallbackObjects - 1) + 1];
    do
    {
      if ( *v3 != 0 )
        (*((*v3)->_vptr_IWatcherCallback + 2))(*v3, pEntity);
      ++v3;
    }
    while ( v3 != v5 );
  }
}


// CWatcherList::NotifyVPhysicsStateChanged  (line 184, @0x00000000022f2ff0, libserver.so)
// calls: CWatcherList::GetCallbackObjects
// callers: ReportVPhysicsStateChanged
void __fastcall CWatcherList::NotifyVPhysicsStateChanged(
        CWatcherList *const this,
        IPhysicsObject *pPhysics,
        CBaseEntity *pEntity,
        bool bAwake)
{
  _BOOL4 v4; // r15d
  IWatcherCallback **v7; // rbx
  int CallbackObjects; // eax
  IWatcherCallback **v9; // r12
  IWatcherCallback *pCallbacks[1024]; // [rsp+0h] [rbp-2030h] BYREF

  v4 = bAwake;
  v7 = pCallbacks;
  CallbackObjects = CWatcherList::GetCallbackObjects(this, pCallbacks, 1024);
  if ( CallbackObjects > 0 )
  {
    v9 = &pCallbacks[(CallbackObjects - 1) + 1];
    do
    {
      if ( *v7 != 0 )
        (*((*v7)->_vptr_IWatcherCallback + 2))(*v7, pPhysics, pEntity, v4);
      ++v7;
    }
    while ( v7 != v9 );
  }
}


// CWatcherList::NotifyMotionState  (line 198, @0x00000000022f30d0, libserver.so)
// calls: CWatcherList::GetCallbackObjects
// callers: CBaseEntity::PhysicsEnableMotion
void __fastcall CWatcherList::NotifyMotionState(CWatcherList *const this, CBaseEntity *pEntity, bool bMotionEnabled)
{
  _BOOL4 v3; // r14d
  IWatcherCallback **v5; // rbx
  int CallbackObjects; // eax
  IWatcherCallback **v7; // r12
  IWatcherCallback *pCallbacks[1024]; // [rsp+0h] [rbp-2020h] BYREF

  v3 = bMotionEnabled;
  v5 = pCallbacks;
  CallbackObjects = CWatcherList::GetCallbackObjects(this, pCallbacks, 1024);
  if ( CallbackObjects > 0 )
  {
    v7 = &pCallbacks[(CallbackObjects - 1) + 1];
    do
    {
      if ( *v5 != 0 )
        (*((*v5)->_vptr_IWatcherCallback + 3))(*v5, pEntity, v3);
      ++v5;
    }
    while ( v5 != v7 );
  }
}


// CWatcherList::Find  (line 212, @0x00000000022d3e10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, Head, IndexToIdentity, InternalElement, IsValid, LookupEntity, Next, operator CEntityInstance*, operator[]
// callers: CWatcherList::RemoveWatcher, CWatcherList::AddToList
// globals: g_WatcherList, CEntityHandle::gm_pEntityList
unsigned __int16 __fastcall CWatcherList::Find(CWatcherList *const this, CBaseEntity *pEntity)
{
  unsigned __int16 m_Head; // di
  unsigned __int16 result; // ax
  CBaseEntity *m_pInstance; // r8
  CUtlMultiList<watcher_t,short unsigned int>::ListElem_t *v5; // rdx
  uint32 m_Index; // ecx
  __int16 v7; // r9
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  m_Head = g_WatcherList.m_List.m_Memory.m_pMemory[this->m_list].m_Element.m_Head;
  result = -1;
  if ( m_Head != 0xFFFF )
  {
    while ( 1 )
    {
      m_pInstance = 0;
      v5 = &g_WatcherList.m_Memory.m_pMemory[m_Head];
      m_Index = v5->m_Element.hWatcher.m_Index;
      result = v5->m_Next;
      if ( v5->m_Element.hWatcher.m_Index + 2 > 1 )
      {
        v7 = v5->m_Element.hWatcher.m_Index;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Element.hWatcher.m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
            m_pInstance = v9->m_pInstance;
        }
      }
      if ( pEntity == m_pInstance )
        break;
      if ( result == 0xFFFF )
        return result;
      m_Head = result;
    }
    return m_Head;
  }
  return result;
}


// CWatcherList::RemoveWatcher  (line 227, @0x00000000022f3140, libserver.so)
// calls: CWatcherList::Find, CUtlMultiList<watcher_t, short unsigned int>::Remove
// callers: RemoveVPhysicsStateWatcher, RemovePositionWatcher
// globals: g_WatcherList
void __fastcall CWatcherList::RemoveWatcher(CWatcherList *const this, CBaseEntity *pEntity)
{
  unsigned __int16 v3; // ax

  v3 = CWatcherList::Find(this, pEntity);
  if ( v3 != 0xFFFF )
    CUtlMultiList<watcher_t,unsigned short>::Remove(&g_WatcherList, this->m_list, v3);
}


// CWatcherList::AddToList  (line 237, @0x00000000022ffa90, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<watcher_t>, GetEHandle, GetEntryIndex, GetSerialNumber, InsertBefore, InternalElement, LinkBefore, Set, operator=, operator[], watcher_t
// calls: CWatcherList::Find, __dynamic_cast, CUtlMultiList<watcher_t, short unsigned int>::Alloc, CUtlMultiList<watcher_t, short unsigned int>::Unlink
// callers: AddWatcherToEntity
// globals: `typeinfo for'IWatcherCallback, g_WatcherList
void __fastcall CWatcherList::AddToList(CWatcherList *const this, CBaseEntity *pWatcher)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // cx
  IWatcherCallback *v6; // r13
  CUtlMultiList<watcher_t,short unsigned int>::ListHandle_t m_list; // r12
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // bx
  __int64 v10; // rax
  CUtlMultiList<watcher_t,short unsigned int>::ListElem_t *v11; // rcx
  __int64 m_Previous; // rcx
  CUtlMultiList<watcher_t,short unsigned int>::ListElem_t *v13; // rdx
  int watcher; // [rsp+0h] [rbp-30h]

  if ( CWatcherList::Find(this, pWatcher) == 0xFFFF )
  {
    watcher = -1;
    if ( pWatcher != 0 )
    {
      m_pEntity = pWatcher->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v5 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        watcher = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
      }
      v6 = __dynamic_cast(pWatcher, &`typeinfo for'CBaseEntity, &`typeinfo for'IWatcherCallback, -2);
      if ( v6 != 0 )
      {
        m_list = this->m_list;
        v8 = CUtlMultiList<watcher_t,unsigned short>::Alloc(&g_WatcherList);
        v9 = v8;
        if ( v8 != 0xFFFF )
        {
          CUtlMultiList<watcher_t,unsigned short>::Unlink(&g_WatcherList, m_list, v8);
          v10 = m_list;
          v11 = &g_WatcherList.m_Memory.m_pMemory[v9];
          v11->m_Next = -1;
          v11->m_Previous = g_WatcherList.m_List.m_Memory.m_pMemory[v10].m_Element.m_Tail;
          g_WatcherList.m_List.m_Memory.m_pMemory[v10].m_Element.m_Tail = v9;
          m_Previous = v11->m_Previous;
          if ( m_Previous == 0xFFFF )
            g_WatcherList.m_List.m_Memory.m_pMemory[m_list].m_Element.m_Head = v9;
          else
            g_WatcherList.m_Memory.m_pMemory[m_Previous].m_Next = v9;
          ++g_WatcherList.m_List.m_Memory.m_pMemory[v10].m_Element.m_Count;
          if ( g_WatcherList.m_pElementList != 0 )
            g_WatcherList.m_pElementList[v9] = m_list;
          v13 = &g_WatcherList.m_Memory.m_pMemory[v9];
          if ( v13 != 0 )
          {
            v13->m_Element.pWatcherCallback = v6;
            v13->m_Element.hWatcher.m_Index = watcher;
          }
        }
      }
    }
  }
}


// AddWatcherToEntity  (line 254, @0x0000000002301860, libserver.so)  // inlines: CreateDataObject, GetDataObject, Init
// calls: CEntityIdentity::GetDataObject, CWatcherList::AddToList, CEntityIdentity::CreateDataObject, CUtlMultiList<watcher_t, short unsigned int>::CreateList
// callers: WatchPositionChanges, WatchVPhysicsStateChanges
// globals: g_WatcherList
void __fastcall AddWatcherToEntity(CBaseEntity *pWatcher, CBaseEntity *pEntity, int watcherType)
{
  CWatcherList *DataObject; // rbx

  DataObject = CEntityIdentity::GetDataObject(pEntity->m_pEntity, watcherType);
  if ( DataObject == 0 )
  {
    DataObject = CEntityIdentity::CreateDataObject(pEntity->m_pEntity, watcherType);
    DataObject->m_list = CUtlMultiList<watcher_t,unsigned short>::CreateList(&g_WatcherList);
  }
  CWatcherList::AddToList(DataObject, pWatcher);
}


// WatchPositionChanges  (line 275, @0x00000000023018c0, libserver.so)
// calls: AddWatcherToEntity
// callers: CRopeKeyframe::EndpointsChanged, CDOTA_Item_Physical::Spawn
void __fastcall WatchPositionChanges(CBaseEntity *pWatcher, CBaseEntity *pMovingEntity)
{
  AddWatcherToEntity(pWatcher, pMovingEntity, 4);
}


// RemovePositionWatcher  (line 280, @0x00000000022f31c0, libserver.so)  // inlines: GetDataObject, RemoveWatcherFromEntity
// calls: CEntityIdentity::GetDataObject, CWatcherList::RemoveWatcher
void __fastcall RemovePositionWatcher(CBaseEntity *pWatcher, CBaseEntity *pMovingEntity)
{
  CWatcherList *DataObject; // rax

  DataObject = CEntityIdentity::GetDataObject(pMovingEntity->m_pEntity, 4);
  if ( DataObject != 0 )
    CWatcherList::RemoveWatcher(DataObject, pWatcher);
}


// ReportPositionChanged  (line 285, @0x00000000022f2fb0, libserver.so)  // inlines: GetDataObject
// calls: CEntityIdentity::GetDataObject, CWatcherList::NotifyPositionChanged
// callers: CGameSceneNode::PerformPostInvalidatePhysicsWork
void __fastcall ReportPositionChanged(CBaseEntity *pMovedEntity)
{
  CWatcherList *DataObject; // rax

  DataObject = CEntityIdentity::GetDataObject(pMovedEntity->m_pEntity, 4);
  if ( DataObject != 0 )
    CWatcherList::NotifyPositionChanged(DataObject, pMovedEntity);
}


// WatchVPhysicsStateChanges  (line 294, @0x00000000023018d0, libserver.so)
// calls: AddWatcherToEntity
void __fastcall WatchVPhysicsStateChanges(CBaseEntity *pWatcher, CBaseEntity *pPhysicsEntity)
{
  AddWatcherToEntity(pWatcher, pPhysicsEntity, 7);
}


// RemoveVPhysicsStateWatcher  (line 299, @0x00000000022f3180, libserver.so)  // inlines: GetDataObject, RemoveWatcherFromEntity
// calls: CEntityIdentity::GetDataObject, CWatcherList::RemoveWatcher
void __fastcall RemoveVPhysicsStateWatcher(CBaseEntity *pWatcher, CBaseEntity *pPhysicsEntity)
{
  CWatcherList *DataObject; // rax

  DataObject = CEntityIdentity::GetDataObject(pPhysicsEntity->m_pEntity, 7);
  if ( DataObject != 0 )
    CWatcherList::RemoveWatcher(DataObject, pWatcher);
}


// ReportVPhysicsStateChanged  (line 304, @0x00000000022f3070, libserver.so)  // inlines: GetDataObject
// calls: CEntityIdentity::GetDataObject, CWatcherList::NotifyVPhysicsStateChanged
void __fastcall ReportVPhysicsStateChanged(IPhysicsObject *pPhysics, CBaseEntity *pEntity, bool bAwake)
{
  CWatcherList *DataObject; // rax

  DataObject = CEntityIdentity::GetDataObject(pEntity->m_pEntity, 7);
  if ( DataObject != 0 )
    CWatcherList::NotifyVPhysicsStateChanged(DataObject, pPhysics, pEntity, bAwake);
}


// SpewLinks  (line 319, @0x00000000022d3ed0, libserver.so)  // inlines: FirstEnt, Get, GetClassNameAsCStr, GetClassname, GetDataObject, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsDormant, IsValid, LookupEntity, String, entindex, operator CEntityInstance*, operator->
// calls: CGameEntitySystem::NextEnt, CEntityIdentity::GetDataObject, CEntityInstance::GetEntityIndex, Msg
// strings: "[%d] (%d) Link %d (%s) -> %d (%s)\n"
// globals: CEntityHandle::gm_pEntityList
void __cdecl SpewLinks()
{
  int v0; // r12d
  CBaseEntity *i; // rbx
  unsigned __int16 *DataObject; // rax
  unsigned __int16 *v3; // r14
  unsigned __int16 *v4; // r15
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // r13
  CEntityIndex v7; // eax
  const char *v8; // r8
  int32 m_Data; // r9d
  CEntityIdentity *v10; // rax
  CEntityIndex v11; // eax
  const CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  const char *v15; // [rsp+10h] [rbp-40h]
  int32 v16; // [rsp+1Ch] [rbp-34h]

  v0 = 0;
  for ( i = CGameEntitySystem::NextEnt(g_pGameEntitySystem, 0);
        i != 0;
        i = CGameEntitySystem::NextEnt(g_pGameEntitySystem, i) )
  {
    DataObject = CEntityIdentity::GetDataObject(i->m_pEntity, 1);
    v3 = DataObject;
    if ( DataObject != 0 )
    {
      v4 = *(DataObject + 1);
      if ( v4 != DataObject )
      {
        do
        {
          ++v0;
          m_pInstance = 0;
          if ( (*v4 + 2) > 1 )
          {
            v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v4 >> 9) & 0x3F];
            if ( v13 != 0 )
            {
              v14 = &v13[*v4 & 0x1FF];
              if ( v14 != 0 && *v4 == v14->m_EHandle.m_Index )
                m_pInstance = v14->m_pInstance;
            }
          }
          m_pEntity = m_pInstance->m_pEntity;
          m_pAsString = "";
          if ( m_pEntity->m_designerName.u.m_Id != 0 )
            m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
          v7.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
          v8 = "";
          m_Data = v7.m_Data;
          v10 = i->m_pEntity;
          if ( v10->m_designerName.u.m_Id != 0 )
            v8 = v10->m_designerName.u.m_pAsString;
          v15 = v8;
          v16 = m_Data;
          v11.m_Data = CEntityInstance::GetEntityIndex(i).m_Data;
          Msg(
            "[%d] (%d) Link %d (%s) -> %d (%s)\n",
            v0,
            (i->m_pEntity->m_flags & 0x80) != 0,
            v11.m_Data,
            v15,
            v16,
            m_pAsString);
          v4 = *(v4 + 1);
        }
        while ( v4 != v3 );
      }
    }
  }
}


// CBaseEntity::PhysicsNone  (line 466, @0x00000000022d6110, libserver.so)  // inlines: PhysicsRunThink
// calls: CBaseEntity::PhysicsRunThink
void __fastcall CBaseEntity::PhysicsNone(CBaseEntity *const this)
{
  if ( (this->m_iEFlags & 0x400000) == 0 )
    CBaseEntity::PhysicsRunThink(this, CBaseEntity::thinkmethods_t::THINK_FIRE_ALL_FUNCTIONS);
}


// CBaseEntity::PhysicsPusher  (line 480, @0x00000000022fa870, libserver.so)  // inlines: GetMoveDoneTime, PhysicsRunThink
// calls: CBaseEntity::PerformPush, CBaseEntity::PhysicsRunThink
// callers: CBaseEntity::PhysicsSimulate
void __fastcall CBaseEntity::PhysicsPusher(CBaseEntity *const this)
{
  float m_flMoveDoneTime; // xmm1_4
  float m_flLocalTime; // xmm0_4
  float v4; // xmm1_4

  if ( (this->m_iEFlags & 0x400000) != 0
    || CBaseEntity::PhysicsRunThink(this, CBaseEntity::thinkmethods_t::THINK_FIRE_ALL_FUNCTIONS) )
  {
    m_flMoveDoneTime = this->m_flMoveDoneTime;
    m_flLocalTime = this->m_flLocalTime;
    this->m_flVPhysicsUpdateLocalTime = m_flLocalTime;
    if ( m_flMoveDoneTime < 0.0 )
      v4 = -1.0;
    else
      v4 = m_flMoveDoneTime - m_flLocalTime;
    CBaseEntity::PerformPush(this, fminf(gpGlobals->frametime, v4), v4);
  }
}


// CBaseEntity::PhysicsNoclip  (line 511, @0x00000000022d6130, libserver.so)  // inlines: PhysicsRunThink, VectorMA
// calls: CBaseEntity::SimulateAngles, CBaseEntity::GetLocalOrigin, CBaseEntity::SetLocalOrigin, CBaseEntity::PhysicsRunThink
// callers: CBaseEntity::PhysicsSimulate
void __fastcall CBaseEntity::PhysicsNoclip(CBaseEntity *const this)
{
  float v1; // xmm1_4
  const Vector *LocalOrigin; // rax
  vec_t v4; // xmm0_4
  float frametime; // [rsp+Ch] [rbp-24h]
  Vector vOrigin; // [rsp+10h] [rbp-20h] BYREF

  if ( (this->m_iEFlags & 0x400000) != 0
    || CBaseEntity::PhysicsRunThink(this, CBaseEntity::thinkmethods_t::THINK_FIRE_ALL_FUNCTIONS) )
  {
    CBaseEntity::SimulateAngles(this, gpGlobals->frametime, v1);
    frametime = gpGlobals->frametime;
    LocalOrigin = CBaseEntity::GetLocalOrigin(this);
    vOrigin.x = (this->m_vecVelocity.m_Value.x * frametime) + LocalOrigin->x;
    v4 = (frametime * this->m_vecVelocity.m_Value.z) + LocalOrigin->z;
    vOrigin.y = (this->m_vecVelocity.m_Value.y * frametime) + LocalOrigin->y;
    vOrigin.z = v4;
    CBaseEntity::SetLocalOrigin(this, &vOrigin);
  }
}


// CBaseEntity::PerformCustomPhysics  (line 534, @0x00000000022b7a00, libserver.so)
void __fastcall CBaseEntity::PerformCustomPhysics(
        CBaseEntity *const this,
        Vector *pNewPosition,
        Vector *pNewVelocity,
        QAngle *pNewAngles,
        QAngle *pNewAngVelocity)
{
  ;
}


// CBaseEntity::PhysicsCustom  (line 542, @0x00000000022d7d80, libserver.so)  // inlines: CEntityHandle, CGameTrace, Get, GetAbsVelocity, GetEntryIndex, GetGroundEntity, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LengthSqr, LookupEntity, PhysicsRunThink, RnCollisionAttr_t, VectorSubtract
// calls: CBaseEntity::SetGroundEntity, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles, CBaseEntity::SetAbsVelocity, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::PhysicsRunThink, CGameTrace::Init, CBaseEntity::PhysicsPushEntity, CBaseEntity::PhysicsCheckVelocity, CBaseEntity::CalcAbsoluteVelocity, CBaseEntity::PhysicsCheckWaterTransition (13 total)
// callers: CBaseEntity::PhysicsSimulate
void __fastcall CBaseEntity::PhysicsCustom(CBaseEntity *const this)
{
  Vector *AbsOrigin; // rax
  bool v3; // zf
  const Vector *v4; // rax
  vec_t v5; // xmm2_4
  vec_t v6; // xmm1_4
  unsigned __int16 v7; // dx
  int v8; // esi
  vec_t v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  Vector vNewPosition; // [rsp+0h] [rbp-120h] BYREF
  Vector vNewVelocity; // [rsp+10h] [rbp-110h] BYREF
  QAngle angNewAngles; // [rsp+20h] [rbp-100h] BYREF
  QAngle angNewAngVelocity; // [rsp+30h] [rbp-F0h] BYREF
  Vector vMove; // [rsp+40h] [rbp-E0h] BYREF
  trace_t trace; // [rsp+50h] [rbp-D0h] BYREF

  if ( (this->m_iEFlags & 0x400000) != 0
    || CBaseEntity::PhysicsRunThink(this, CBaseEntity::thinkmethods_t::THINK_FIRE_ALL_FUNCTIONS) )
  {
    if ( this->m_vecVelocity.m_Value.z > 0.0
      || (this->m_hGroundEntity.m_Value.m_Index == -1
        ? (v7 = 0x7FFF, v8 = 0x7FFF)
        : (v7 = this->m_hGroundEntity.m_Value.m_Index & 0x7FFF, v8 = v7),
          (LODWORD(v9) = (this->m_hGroundEntity.m_Value.m_Index >> 15 << 15) | v7 & 0x7FFF,
           trace.startpos.x = v9,
           (LODWORD(v9) + 2) <= 1)
       || (v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9]) == 0
       || (v11 = &v10[v8 & 0x1FF]) == 0
       || LODWORD(v9) != v11->m_EHandle.m_Index
       || v11->m_pInstance == 0
       || !CBaseEntity::IsStandable(v11->m_pInstance)) )
    {
      CBaseEntity::SetGroundEntity(this, 0);
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v3 = (this->m_iEFlags & 0x1000) == 0;
    vNewPosition = *AbsOrigin;
    if ( !v3 )
      CBaseEntity::CalcAbsoluteVelocity(this);
    vNewVelocity = this->m_vecAbsVelocity;
    angNewAngles = *CBaseEntity::GetAbsAngles(this);
    angNewAngVelocity = this->m_vecAngVelocity;
    (*(this->_vptr_IHandleEntity + 192))(this, &vNewPosition, &vNewVelocity, &angNewAngles, &angNewAngVelocity);
    CBaseEntity::SetAbsAngles(this, &angNewAngles);
    CBaseEntity::SetAbsVelocity(this, &vNewVelocity);
    CBaseEntity::SetLocalAngularVelocity(this, &angNewAngVelocity);
    v4 = CBaseEntity::GetAbsOrigin(this);
    v5 = vNewPosition.y - v4->y;
    vMove.x = vNewPosition.x - v4->x;
    v6 = vNewPosition.z - v4->z;
    vMove.y = v5;
    vMove.z = v6;
    if ( (((vMove.x * vMove.x) + (v5 * v5)) + (v6 * v6)) > 0.000001 )
    {
      memset(&trace.m_ShapeAttributes, 0, 31);
      trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&trace);
      CBaseEntity::PhysicsPushEntity(this, &vMove, &trace);
      CBaseEntity::PhysicsCheckVelocity(this);
      if ( (this->m_pEntity->m_flags & 0x200) != 0 )
        return;
    }
    else if ( (this->m_pEntity->m_flags & 0x200) != 0 )
    {
      return;
    }
    CBaseEntity::PhysicsCheckWaterTransition(this);
  }
}


// CBaseEntity::PhysicsStep  (line 614, @0x00000000022d88b0, libserver.so)  // inlines: CGameTrace, DestroyDataObject, GetBool, GetDataObject, GetInt, GetParent, LengthSqr, PhysicsRunThink, RnCollisionAttr_t, VectorCompare, VectorSubtract, curtime, operator-, operator==
// calls: CBaseEntity::SetSimulationTime, CBaseEntity::GetNextThinkTick, CBaseEntity::PhysicsStepRunTimestep, CBaseEntity::PhysicsCheckWaterTransition, CBaseEntity::SetLastThink, CBaseEntity::PhysicsRelinkChildren, CBaseEntity::GetAbsOrigin, CGlobalVarsBase::curtime, CBaseEntity::GetLastThink, CBaseEntity::StepSimulationThink, CBaseEntity::VPhysicsGetObject, CBaseEntity::PhysicsRunThink (19 total)
// callers: CBaseEntity::PhysicsSimulate
void __fastcall CBaseEntity::PhysicsStep(CBaseEntity *const this)
{
  double v1; // xmm1_8
  CGlobalVars *v3; // r13
  double v4; // xmm0_8
  float v5; // r15d
  int NextThinkTick; // eax
  float v7; // xmm1_4
  CGlobalVars *v8; // r13
  int v9; // r14d
  float v10; // xmm2_4
  FnGlobalVarsWarningFunc v11; // rax
  float v12; // xmm1_4
  CGlobalVars *v13; // r13
  float m_flCurrentTime; // xmm0_4
  float v15; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v17; // rax
  const Vector *AbsOrigin; // rax
  CEntityIdentity *m_pEntity; // rdi
  float v20; // xmm2_4
  int m_nValue; // r15d
  float v22; // xmm0_4
  float v23; // xmm2_4
  float LastThink; // xmm0_4
  __m128i v25; // xmm2
  unsigned int v26; // r12d
  float v27; // xmm1_4
  float v28; // xmm1_4
  const Vector *v29; // rax
  IPhysicsObject *v30; // r14
  void (__fastcall *v31)(IPhysicsObject *, const Vector *, const QAngle *, _BOOL4, double); // r15
  _BOOL4 v32; // r13d
  const Vector *v33; // rax
  float *DataObject; // r13
  float v35; // xmm0_4
  IPhysicsObject *Object; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  IPhysicsObject *v39; // rax
  const Vector *v40; // rax
  IPhysicsObject *v41; // rax
  __int64 v42; // rax
  IPhysicsObject *v43; // rax
  __int64 v44; // rax
  uint64 v45; // r15
  const Vector *v46; // rax
  float pTraceOut; // [rsp+0h] [rbp-110h]
  float v48; // [rsp+8h] [rbp-108h]
  float z; // [rsp+Ch] [rbp-104h]
  float y; // [rsp+10h] [rbp-100h]
  float x; // [rsp+14h] [rbp-FCh]
  float thinktimec; // [rsp+18h] [rbp-F8h]
  float thinktime; // [rsp+18h] [rbp-F8h]
  float thinktimed; // [rsp+18h] [rbp-F8h]
  float thinktimee; // [rsp+18h] [rbp-F8h]
  float thinktimef; // [rsp+18h] [rbp-F8h]
  float thinktimea; // [rsp+18h] [rbp-F8h]
  float thinktimeb; // [rsp+18h] [rbp-F8h]
  float thinktimeg; // [rsp+18h] [rbp-F8h]
  const Vector *thinktimeh; // [rsp+18h] [rbp-F8h]
  Vector position; // [rsp+20h] [rbp-F0h] BYREF
  float tr; // [rsp+30h] [rbp-E0h] BYREF
  bool updateFromVPhysics; // [rsp+68h] [rbp-A8h]
  __int64 v64; // [rsp+98h] [rbp-78h]
  __int64 v65; // [rsp+A0h] [rbp-70h]
  __int64 v66; // [rsp+A8h] [rbp-68h]
  int v67; // [rsp+B0h] [rbp-60h]
  __int16 v68; // [rsp+B4h] [rbp-5Ch]
  char v69; // [rsp+B6h] [rbp-5Ah]
  char v70; // [rsp+B7h] [rbp-59h]

  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    *&v4 = LODWORD(v3->m_flCurrentTime);
    v5 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
  }
  else
  {
    v1 = 0.0;
    v5 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    v4 = 0.0;
  }
  CBaseEntity::SetSimulationTime(this, v4, v1);
  if ( (this->m_iEFlags & 0x400000) == 0 )
    CBaseEntity::PhysicsRunThink(this, CBaseEntity::thinkmethods_t::THINK_FIRE_ALL_BUT_BASE);
  NextThinkTick = CBaseEntity::GetNextThinkTick(this, 0);
  v8 = gpGlobals;
  v9 = NextThinkTick;
  v10 = NextThinkTick * gpGlobals->interval_per_tick;
  if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
  {
    v11 = gpGlobals->m_pfnWarningFunc;
    if ( v11 != 0 )
    {
      thinktimec = v10;
      v11(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      v10 = thinktimec;
    }
  }
  if ( v5 >= v10 || (v10 - v8->m_flCurrentTime) > 0.5 )
  {
    CBaseEntity::PhysicsStepRunTimestep(this, gpGlobals->frametime, v7);
    CBaseEntity::PhysicsCheckWaterTransition(this);
    v13 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v17 = gpGlobals->m_pfnWarningFunc;
        if ( v17 != 0 )
          v17(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      m_flCurrentTime = v13->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = v5;
    }
    CBaseEntity::SetLastThink(this, -1, m_flCurrentTime, v12);
    (*(this->_vptr_IHandleEntity + 59))(this, gpGlobals->frametime);
    CBaseEntity::PhysicsRelinkChildren(this, gpGlobals->frametime, v15);
    return;
  }
  thinktime = v10;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  m_pEntity = this->m_pEntity;
  x = AbsOrigin->x;
  y = AbsOrigin->y;
  z = AbsOrigin->z;
  v20 = thinktime;
  m_nValue = npc_vphysics.m_pParent->m_Value.m_nValue;
  if ( (m_pEntity->m_fDataObjectTypes & 0x40) != 0 )
  {
    pTraceOut = thinktime;
    DataObject = CEntityIdentity::GetDataObject(m_pEntity, 6);
    thinktimef = DataObject[1];
    v35 = CGlobalVarsBase::curtime(gpGlobals, 0);
    v20 = pTraceOut;
    if ( thinktimef > v35 )
    {
LABEL_35:
      thinktimea = v20;
      Object = CBaseEntity::VPhysicsGetObject(this);
      v20 = thinktimea;
      if ( Object != 0 )
      {
        m_pParent = this->m_pGameSceneNode->m_pParent;
        if ( m_pParent == 0
          || (OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent), v20 = thinktimea, OwnerEntity == 0) )
        {
          thinktimeb = v20;
          v39 = CBaseEntity::VPhysicsGetObject(this);
          (*(*v39 + 1856LL))(v39, &position, 0);
          v40 = CBaseEntity::GetAbsOrigin(this);
          v20 = thinktimeb;
          if ( ((((v40->x - position.x) * (v40->x - position.x)) + ((v40->y - position.y) * (v40->y - position.y)))
              + ((v40->z - position.z) * (v40->z - position.z))) >= 1.0 )
            goto LABEL_39;
          v69 = 0;
          v48 = thinktimeb;
          v68 = 0;
          v64 = 0;
          v65 = 0;
          v66 = 0;
          v70 = 7;
          v67 = 0;
          CGameTrace::Init(&tr);
          v45 = (*(this->_vptr_IHandleEntity + 123))(this);
          thinktimeh = CBaseEntity::GetAbsOrigin(this);
          v46 = CBaseEntity::GetAbsOrigin(this);
          Physics_TraceEntity(this, v46, thinktimeh, v45, &tr);
          v20 = v48;
          if ( updateFromVPhysics )
          {
LABEL_39:
            thinktimeg = v20;
            CBaseEntity::SetAbsOrigin(this, &position);
            CBaseEntity::PhysicsTouchTriggers(this, 0);
            v20 = thinktimeg;
          }
        }
      }
      goto LABEL_25;
    }
    v41 = CBaseEntity::VPhysicsGetObject(this);
    v42 = (*(*v41 + 536LL))(v41);
    (*(*v42 + 120LL))(v42, 0, &tr);
    v43 = CBaseEntity::VPhysicsGetObject(this);
    v44 = (*(*v43 + 536LL))(v43);
    (*(*v44 + 24LL))(v44, DataObject[2], tr);
    CEntityIdentity::DestroyDataObject(this->m_pEntity, 6);
    v20 = pTraceOut;
  }
  if ( m_nValue != 0 )
    goto LABEL_35;
LABEL_25:
  if ( v9 <= gpGlobals->tickcount )
  {
    thinktimed = v20;
    v22 = CGlobalVarsBase::curtime(gpGlobals, 0);
    v23 = thinktimed;
    if ( v22 > thinktimed )
      v23 = CGlobalVarsBase::curtime(gpGlobals, 0);
    thinktimee = v23;
    LastThink = CBaseEntity::GetLastThink(this, 0);
    v25 = LODWORD(thinktimee);
    *v25.m128i_i32 = thinktimee - LastThink;
    v26 = _mm_cvtsi128_si32(v25);
    CBaseEntity::StepSimulationThink(this, thinktimee - LastThink, v27);
    CBaseEntity::PhysicsCheckWaterTransition(this);
    if ( CBaseEntity::VPhysicsGetObject(this) != 0 )
    {
      v29 = CBaseEntity::GetAbsOrigin(this);
      if ( x != v29->x || y != v29->y || z != v29->z )
      {
        v30 = CBaseEntity::VPhysicsGetObject(this);
        v31 = *(*v30 + 1840LL);
        v32 = (this->m_fFlags.m_Value & 0x400) != 0;
        v33 = CBaseEntity::GetAbsOrigin(this);
        v31(v30, v33, &vec3_angle, v32, *_mm_cvtsi32_si128(v26).m128i_i64);
      }
    }
    CBaseEntity::PhysicsRelinkChildren(this, *&v26, v28);
  }
}


// CBaseEntity::PhysicsPushEntity  (line 729, @0x00000000022d52a0, libserver.so)  // inlines: IsSolid, VectorAdd, VectorCopy
// calls: CBaseEntity::GetAbsOrigin, Physics_TraceEntity, CBaseEntity::PhysicsTouchTriggers, CBaseEntity::PhysicsImpact, CBaseEntity::SetAbsOrigin
// callers: CBaseEntity::ResolveFlyCollisionBounce, CBaseEntity::ResolveFlyCollisionSlide, CBaseEntity::PhysicsCustom, CBaseEntity::PerformFlyCollisionResolution, CBaseEntity::PhysicsToss
void __fastcall CBaseEntity::PhysicsPushEntity(CBaseEntity *const this, const Vector *const vPush, trace_t *pTrace)
{
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  uint64 v9; // r14
  vec_t v10; // xmm0_4
  CCollisionProperty *m_pCollision; // r13
  CBaseEntity *m_pEnt; // rsi
  Vector vPrevOrigin; // [rsp+0h] [rbp-40h] BYREF
  Vector vAbsEnd; // [rsp+10h] [rbp-30h] BYREF

  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  vPrevOrigin.x = AbsOrigin->x;
  vPrevOrigin.y = AbsOrigin->y;
  z = AbsOrigin->z;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  vPrevOrigin.z = z;
  v9 = (vptr_IHandleEntity[123])(this);
  vAbsEnd.x = vPrevOrigin.x + vPush->x;
  vAbsEnd.y = vPrevOrigin.y + vPush->y;
  v10 = vPrevOrigin.z + vPush->z;
  m_pCollision = this->m_pCollision;
  vAbsEnd.z = v10;
  if ( m_pCollision == 0
    || (*((*(m_pCollision->_vptr_ICollideable + 13))(m_pCollision) + 31) & 1) == 0
    && (*((*(m_pCollision->_vptr_ICollideable + 13))(m_pCollision) + 31) & 2) == 0
    || m_pCollision->m_nSolidType.m_Value == SolidType_t::SOLID_NONE )
  {
    v9 &= ~0x80000uLL;
  }
  Physics_TraceEntity(this, &vPrevOrigin, &vAbsEnd, v9, pTrace);
  if ( pTrace->fraction != 0.0 )
    CBaseEntity::SetAbsOrigin(this, &pTrace->endpos);
  CBaseEntity::PhysicsTouchTriggers(this, &vPrevOrigin);
  m_pEnt = pTrace->m_pEnt;
  if ( m_pEnt != 0 )
    CBaseEntity::PhysicsImpact(this, m_pEnt, pTrace);
}


// CBaseEntity::IsCurrentlyTouching  (line 781, @0x00000000022d4040, libserver.so)
// callers: CCollisionProperty::CheckForUntouch
bool __fastcall CBaseEntity::IsCurrentlyTouching(const CBaseEntity *const this)
{
  return (this->m_pEntity->m_fDataObjectTypes & 2) != 0;
}


// CBaseEntity::PhysicsCheckForEntityUntouch  (line 798, @0x00000000022d43d0, libserver.so)  // inlines: DestroyDataObject, Get, GetDataObject, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CEntityIdentity::GetDataObject, CBaseEntity::PhysicsNotifyOtherOfUntouch, CBaseEntity::PhysicsRemoveToucher, CBaseEntity::SetCheckUntouch, CEntityIdentity::DestroyDataObject
// callers: CEntityTouchManager::FrameUpdatePostEntityThink
// globals: g_bCleanupDatObject, CEntityHandle::gm_pEntityList, g_pNextLink
void __fastcall CBaseEntity::PhysicsCheckForEntityUntouch(CBaseEntity *const this)
{
  touchlink_t *DataObject; // rax
  touchlink_t *v3; // r13
  touchlink_t *nextLink; // rbx
  bool v5; // r14
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  touchlink_t *v9; // rdx
  bool v10; // zf

  DataObject = CEntityIdentity::GetDataObject(this->m_pEntity, 1);
  v3 = DataObject;
  if ( DataObject == 0 )
    goto LABEL_13;
  nextLink = DataObject->nextLink;
  v5 = g_bCleanupDatObject;
  g_bCleanupDatObject = 0;
  if ( nextLink == DataObject )
  {
    g_bCleanupDatObject = v5;
LABEL_14:
    if ( nextLink == nextLink->prevLink )
      CEntityIdentity::DestroyDataObject(this->m_pEntity, 1);
    goto LABEL_13;
  }
  do
  {
    while ( 1 )
    {
      v9 = nextLink->nextLink;
      v10 = nextLink->touchStamp == this->touchStamp;
      g_pNextLink = v9;
      if ( !v10 )
        break;
      nextLink = v9;
      if ( v3 == v9 )
        goto LABEL_12;
    }
    m_pInstance = 0;
    if ( nextLink->entityTouched.m_Index + 2 > 1 )
    {
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(nextLink->entityTouched.m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[nextLink->entityTouched.m_Index & 0x1FF];
        if ( v8 != 0 && nextLink->entityTouched.m_Index == v8->m_EHandle.m_Index )
          m_pInstance = v8->m_pInstance;
      }
    }
    CBaseEntity::PhysicsNotifyOtherOfUntouch(this, m_pInstance);
    CBaseEntity::PhysicsRemoveToucher(this, nextLink);
    nextLink = g_pNextLink;
  }
  while ( v3 != g_pNextLink );
LABEL_12:
  nextLink = v3->nextLink;
  g_bCleanupDatObject = v5;
  if ( v3 == nextLink )
    goto LABEL_14;
LABEL_13:
  g_pNextLink = 0;
  CBaseEntity::SetCheckUntouch(this, 0);
}


// CBaseEntity::PhysicsNotifyOtherOfUntouch  (line 851, @0x00000000022d42d0, libserver.so)  // inlines: DestroyDataObject, Get, GetDataObject, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==
// calls: CEntityIdentity::GetDataObject, CBaseEntity::PhysicsRemoveToucher, CEntityIdentity::DestroyDataObject
// callers: CBaseEntity::PhysicsCheckForEntityUntouch, CBaseEntity::PhysicsMarkEntitiesAsTouching, CBaseEntity::PhysicsRemoveTouchedList
// globals: CEntityHandle::gm_pEntityList, g_bCleanupDatObject
void __fastcall CBaseEntity::PhysicsNotifyOtherOfUntouch(CBaseEntity *ent, CBaseEntity *other)
{
  touchlink_t *DataObject; // rax
  touchlink_t *v5; // rbx
  touchlink_t *nextLink; // rdx
  CBaseEntity *m_pInstance; // r9
  CEntityIdentity *v8; // r8
  CEntityIdentity *v9; // r8

  if ( other != 0 )
  {
    DataObject = CEntityIdentity::GetDataObject(other->m_pEntity, 1);
    v5 = DataObject;
    if ( DataObject != 0 )
    {
      nextLink = DataObject->nextLink;
      if ( nextLink != DataObject )
      {
        while ( 1 )
        {
          m_pInstance = 0;
          if ( nextLink->entityTouched.m_Index + 2 > 1 )
          {
            v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(nextLink->entityTouched.m_Index) >> 9) & 0x3F];
            if ( v8 != 0 )
            {
              v9 = &v8[nextLink->entityTouched.m_Index & 0x1FF];
              if ( v9 != 0 && nextLink->entityTouched.m_Index == v9->m_EHandle.m_Index )
                m_pInstance = v9->m_pInstance;
            }
          }
          if ( ent == m_pInstance )
            break;
          nextLink = nextLink->nextLink;
          if ( nextLink == DataObject )
            return;
        }
        CBaseEntity::PhysicsRemoveToucher(other, nextLink);
        if ( g_bCleanupDatObject && v5->nextLink == v5 && v5 == v5->prevLink )
          CEntityIdentity::DestroyDataObject(other->m_pEntity, 1);
      }
    }
  }
}


// CBaseEntity::PhysicsRemoveToucher  (line 887, @0x00000000022d4060, libserver.so)  // inlines: Free, FreeTouchLink, Get, GetBool, GetDebugName, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, IndexToIdentity, IsValid, LookupEntity, PeakCount, Set, entindex, operator CEntityInstance*, operator delete, operator int, operator!=<CBaseEntity>, operator->, operator=
// calls: CUtlMemoryPoolBase::Free, CEntityInstance::GetEntityIndex, CEntityIdentity::GetDebugName, Msg
// callers: CBaseEntity::PhysicsNotifyOtherOfUntouch, CBaseEntity::PhysicsCheckForEntityUntouch
// strings: "remove 0x%p: %s-%s (%d-%d) [%d in play, %d max]\n"
// globals: CEntityHandle::gm_pEntityList, g_pNextLink, linksallocated, touchlink_t::s_Allocator
void __fastcall CBaseEntity::PhysicsRemoveToucher(CBaseEntity *otherEntity, touchlink_t *link)
{
  CEntityInstance *m_pInstance; // rbx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  volatile int m_value; // r15d
  int v8; // r14d
  CEntityIndex v9; // eax
  const CEntityInstance *v10; // rdi
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  const char *DebugName; // rax
  CEntityInstance *v14; // rsi
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  const char *v17; // rax
  const char *v18; // [rsp+10h] [rbp-40h]
  int32 m_Data; // [rsp+18h] [rbp-38h]
  CEntityIndex v20; // [rsp+1Ch] [rbp-34h]

  m_pInstance = 0;
  if ( (link->flags & 1) != 0 && link->entityTouched.m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(link->entityTouched.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[link->entityTouched.m_Index & 0x1FF];
      if ( v6 != 0 && link->entityTouched.m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 && otherEntity == 0 )
          m_pInstance = 0;
      }
    }
  }
  link->nextLink->prevLink = link->prevLink;
  link->prevLink->nextLink = link->nextLink;
  if ( debug_touchlinks.m_pParent->m_Value.m_nValue == 0 )
  {
    if ( link != g_pNextLink )
      goto LABEL_8;
    goto LABEL_21;
  }
  m_value = touchlink_t::s_Allocator.m_PeakAlloc.m_value;
  v8 = linksallocated;
  v9.m_Data = CEntityInstance::GetEntityIndex(otherEntity).m_Data;
  v10 = 0;
  m_Data = v9.m_Data;
  if ( link->entityTouched.m_Index + 2 > 1 )
  {
    v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(link->entityTouched.m_Index) >> 9) & 0x3F];
    if ( v11 != 0 )
    {
      v12 = &v11[link->entityTouched.m_Index & 0x1FF];
      if ( v12 != 0 && link->entityTouched.m_Index == v12->m_EHandle.m_Index )
        v10 = v12->m_pInstance;
    }
  }
  v20.m_Data = CEntityInstance::GetEntityIndex(v10).m_Data;
  DebugName = CEntityIdentity::GetDebugName(otherEntity->m_pEntity);
  v14 = 0;
  if ( link->entityTouched.m_Index + 2 > 1 )
  {
    v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(link->entityTouched.m_Index) >> 9) & 0x3F];
    if ( v15 != 0 )
    {
      v16 = &v15[link->entityTouched.m_Index & 0x1FF];
      if ( v16 != 0 && link->entityTouched.m_Index == v16->m_EHandle.m_Index )
        v14 = v16->m_pInstance;
    }
  }
  v18 = DebugName;
  v17 = CEntityIdentity::GetDebugName(v14->m_pEntity);
  Msg("remove 0x%p: %s-%s (%d-%d) [%d in play, %d max]\n", link, v17, v18, v20.m_Data, m_Data, v8, m_value);
  if ( link == g_pNextLink )
LABEL_21:
    g_pNextLink = link->nextLink;
LABEL_8:
  --linksallocated;
  link->nextLink = 0;
  link->prevLink = 0;
  link->entityTouched.m_Index = -1;
  CUtlMemoryPoolBase::Free(&touchlink_t::s_Allocator, link);
  if ( m_pInstance != 0 )
    (*(otherEntity->_vptr_IHandleEntity + 113))(otherEntity, m_pInstance);
}


// CBaseEntity::PhysicsRemoveTouchedList  (line 915, @0x00000000022f8740, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<CBaseEntity*>, DestroyDataObject, Element, Free, FreeTouchLink, Get, GetBool, GetDataObject, GetDebugName, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GrowMemory, IndexToIdentity, IsExternallyAllocated, IsValid, LookupEntity, PeakCount, Purge, Purge_FixedGrowable, RemoveAll, Set, entindex, operator CBaseEntity*, operator CEntityInstance*, operator delete, operator int, operator->, operator=, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CEntityIdentity::GetDataObject, CEntityInstance::GetEntityIndex, CEntityIdentity::GetDebugName, Msg, CUtlMemoryPoolBase::Free, CUtlMemory<CBaseEntity*, int>::Grow, CEntityIdentity::DestroyDataObject, CBaseEntity::PhysicsNotifyOtherOfUntouch, CUtlMemory<CBaseEntity*, int>::Purge, CUtlVectorBase<CBaseEntity*, CUtlMemoryFixedGrowable<CBaseEntity*, 32ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: FreeContainingEntity, CBaseEntity::UpdateOnRemove, CSource2GameClients::ClientDisconnect, CPhysicsPropRespawnable::Event_Killed
// strings: "remove 0x%p: %s-%s (%d-%d) [%d in play, %d max]\n"
// globals: g_bCleanupDatObject, linksallocated, CEntityHandle::gm_pEntityList, g_pNextLink, touchlink_t::s_Allocator
void __fastcall CBaseEntity::PhysicsRemoveTouchedList(CBaseEntity *ent)
{
  CEntityIdentity *m_pEntity; // rdi
  touchlink_t *nextLink; // rbx
  bool v4; // al
  __int64 m_Size; // r14
  int v6; // eax
  CBaseEntity **v7; // rax
  const CEntityInstance *v8; // rdi
  volatile int m_value; // r15d
  int v10; // r14d
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *v13; // rcx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  const char *v16; // rax
  CBaseEntity *m_pInstance; // r15
  touchlink_t *v18; // r12
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdi
  __int64 v22; // r12
  int v23; // ebx
  int m_nAllocationCount; // r11d
  uint32 v25; // eax
  bool saveCleanup; // [rsp+17h] [rbp-179h]
  const char *DebugName; // [rsp+28h] [rbp-168h]
  CEntityIndex v28; // [rsp+30h] [rbp-160h]
  CEntityIndex v29; // [rsp+34h] [rbp-15Ch]
  touchlink_t *root; // [rsp+38h] [rbp-158h]
  CUtlVectorFixedGrowable<CBaseEntity*,32ul> untouchList; // [rsp+40h] [rbp-150h] BYREF
  unsigned __int64 v32; // [rsp+158h] [rbp-38h]

  untouchList.m_Size = 0;
  v32 = __readfsqword(0x28u);
  m_pEntity = ent->m_pEntity;
  untouchList.m_Memory.m_nAllocationCount = 32;
  untouchList.m_Memory.m_nGrowSize = 0x80000000;
  untouchList.m_Memory.m_pMemory = &untouchList.m_Memory.m_FixedMemory;
  root = CEntityIdentity::GetDataObject(m_pEntity, 1);
  if ( root != 0 )
  {
    nextLink = root->nextLink;
    v4 = g_bCleanupDatObject;
    g_bCleanupDatObject = 0;
    saveCleanup = v4;
    while ( nextLink != root && nextLink != 0 )
    {
      m_pInstance = 0;
      v18 = nextLink->nextLink;
      if ( nextLink->entityTouched.m_Index + 2 > 1 )
      {
        v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(nextLink->entityTouched.m_Index) >> 9) & 0x3F];
        if ( v19 != 0 )
        {
          v20 = &v19[nextLink->entityTouched.m_Index & 0x1FF];
          if ( v20 != 0 && nextLink->entityTouched.m_Index == v20->m_EHandle.m_Index )
            m_pInstance = v20->m_pInstance;
        }
      }
      m_Size = untouchList.m_Size;
      v6 = untouchList.m_Size;
      if ( untouchList.m_Size == untouchList.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CBaseEntity *,int>::Grow(&untouchList.m_Memory, 1);
        v6 = untouchList.m_Size;
      }
      untouchList.m_Size = v6 + 1;
      v7 = &untouchList.m_Memory.m_pMemory[m_Size];
      if ( v7 != 0 )
        *v7 = m_pInstance;
      if ( debug_touchlinks.m_pParent->m_Value.m_nValue != 0 )
      {
        v8 = 0;
        m_value = touchlink_t::s_Allocator.m_PeakAlloc.m_value;
        v10 = linksallocated;
        if ( nextLink->entityTouched.m_Index + 2 > 1 )
        {
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(nextLink->entityTouched.m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[nextLink->entityTouched.m_Index & 0x1FF];
            if ( v12 != 0 && nextLink->entityTouched.m_Index == v12->m_EHandle.m_Index )
              v8 = v12->m_pInstance;
          }
        }
        v28.m_Data = CEntityInstance::GetEntityIndex(v8).m_Data;
        v29.m_Data = CEntityInstance::GetEntityIndex(ent).m_Data;
        v13 = 0;
        if ( nextLink->entityTouched.m_Index + 2 > 1 )
        {
          v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(nextLink->entityTouched.m_Index) >> 9) & 0x3F];
          if ( v14 != 0 )
          {
            v15 = &v14[nextLink->entityTouched.m_Index & 0x1FF];
            if ( v15 != 0 && nextLink->entityTouched.m_Index == v15->m_EHandle.m_Index )
              v13 = v15->m_pInstance;
          }
        }
        DebugName = CEntityIdentity::GetDebugName(v13->m_pEntity);
        v16 = CEntityIdentity::GetDebugName(ent->m_pEntity);
        Msg(
          "remove 0x%p: %s-%s (%d-%d) [%d in play, %d max]\n",
          nextLink,
          v16,
          DebugName,
          v29.m_Data,
          v28.m_Data,
          v10,
          m_value);
      }
      if ( nextLink == g_pNextLink )
        g_pNextLink = nextLink->nextLink;
      --linksallocated;
      nextLink->nextLink = 0;
      nextLink->prevLink = 0;
      nextLink->entityTouched.m_Index = -1;
      CUtlMemoryPoolBase::Free(&touchlink_t::s_Allocator, nextLink);
      nextLink = v18;
    }
    v21 = ent->m_pEntity;
    g_bCleanupDatObject = saveCleanup;
    CEntityIdentity::DestroyDataObject(v21, 1);
    if ( untouchList.m_Size > 0 )
    {
      v22 = 0;
      v23 = 0;
      do
      {
        CBaseEntity::PhysicsNotifyOtherOfUntouch(ent, untouchList.m_Memory.m_pMemory[v22]);
        ++v23;
        ++v22;
      }
      while ( untouchList.m_Size > v23 );
    }
  }
  m_nAllocationCount = untouchList.m_Memory.m_nAllocationCount;
  ent->touchStamp = 0;
  if ( m_nAllocationCount < 0 )
  {
    v25 = untouchList.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v25 = untouchList.m_Memory.m_nGrowSize & 0xC0000000;
    if ( untouchList.m_Memory.m_pMemory != &untouchList.m_Memory.m_FixedMemory )
    {
      if ( untouchList.m_Memory.m_pMemory != 0 && v25 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return;
    }
  }
  if ( v25 == 0 )
    CUtlMemory<CBaseEntity *,int>::Purge(&untouchList.m_Memory);
}


// CBaseEntity::AddEntityToGroundList  (line 960, @0x00000000022d4540, libserver.so)  // inlines: Alloc, AllocGroundLink, CEntityHandle, CHandle, CreateDataObject, Get, GetDataObject, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, groundlink_t, operator CEntityInstance*, operator new, operator=, operator==
// calls: CEntityIdentity::GetDataObject, CEntityIdentity::CreateDataObject, CUtlMemoryPoolBase::Alloc, CBaseEntity::PhysicsStartGroundContact, DevMsg(char const*,...)
// callers: CBaseEntity::Restore, CBaseEntity::SetGroundEntity
// strings: "AllocGroundLink: failed to allocate groundlink_t.!!!\n"
// globals: CEntityHandle::gm_pEntityList, groundlink_t::s_Allocator, groundlinksallocated
groundlink_t *__fastcall CBaseEntity::AddEntityToGroundList(CBaseEntity *const this, CBaseEntity *other)
{
  groundlink_t *DataObject; // rax
  groundlink_t *v5; // rbx
  groundlink_t *nextLink; // rdx
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  groundlink_t *v9; // r14
  groundlink_t *v10; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v12; // eax
  __int16 v13; // cx
  groundlink_t *v14; // rax

  if ( this != other && (other->m_pEntity->m_flags & 0x200) == 0 )
  {
    DataObject = CEntityIdentity::GetDataObject(this->m_pEntity, 0);
    v5 = DataObject;
    if ( DataObject != 0 )
    {
      nextLink = DataObject->nextLink;
      if ( nextLink != DataObject )
      {
        do
        {
          if ( nextLink->entity.m_Index + 2 > 1 )
          {
            v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(nextLink->entity.m_Index) >> 9) & 0x3F];
            if ( v7 != 0 )
            {
              v8 = &v7[nextLink->entity.m_Index & 0x1FF];
              if ( v8 != 0 && nextLink->entity.m_Index == v8->m_EHandle.m_Index && other == v8->m_pInstance )
                return nextLink;
            }
          }
          nextLink = nextLink->nextLink;
        }
        while ( nextLink != v5 );
      }
    }
    else
    {
      v5 = CEntityIdentity::CreateDataObject(this->m_pEntity, 0);
      v5->nextLink = v5;
      v5->prevLink = v5;
    }
    v10 = CUtlMemoryPoolBase::Alloc(&groundlink_t::s_Allocator);
    v9 = v10;
    if ( v10 != 0 )
    {
      v10->entity.m_Index = -1;
      m_pEntity = other->m_pEntity;
      ++groundlinksallocated;
      if ( m_pEntity != 0 )
      {
        v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v13 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v9->entity.m_Index) = v13 | v9->entity.m_Index & 0x8000;
        v9->entity.m_Index = (v12 << 15) | v9->entity.m_Index & 0x7FFF;
      }
      else
      {
        v10->entity.m_Index = -1;
      }
      v14 = v5->nextLink;
      v9->prevLink = v5;
      v9->nextLink = v14;
      v5->nextLink = v9;
      v9->nextLink->prevLink = v9;
      CBaseEntity::PhysicsStartGroundContact(this, other);
    }
    else
    {
      DevMsg("AllocGroundLink: failed to allocate groundlink_t.!!!\n");
    }
    return v9;
  }
  return 0;
}


// CBaseEntity::PhysicsStartGroundContact  (line 1015, @0x00000000022d4500, libserver.so)  // inlines: StartGroundContact
// calls: CBaseEntity::AddFlag
// callers: CBaseEntity::AddEntityToGroundList
void __fastcall CBaseEntity::PhysicsStartGroundContact(CBaseEntity *const this, CBaseEntity *pentOther)
{
  if ( pentOther != 0 && (this->m_pEntity->m_flags & 0x200) == 0 && (pentOther->m_pEntity->m_flags & 0x200) == 0 )
    CBaseEntity::AddFlag(pentOther, 1);
}


// CBaseEntity::PhysicsNotifyOtherOfGroundRemoval  (line 1030, @0x00000000022d47c0, libserver.so)  // inlines: DestroyDataObject, Get, GetDataObject, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==
// calls: CEntityIdentity::GetDataObject, CBaseEntity::PhysicsRemoveGround, CEntityIdentity::DestroyDataObject
// callers: CBaseEntity::PhysicsRemoveGroundList, CBaseEntity::SetGroundEntity
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseEntity::PhysicsNotifyOtherOfGroundRemoval(CBaseEntity *ent, CBaseEntity *other)
{
  groundlink_t *DataObject; // rax
  groundlink_t *v5; // rbx
  groundlink_t *nextLink; // rdx
  CBaseEntity *m_pInstance; // r9
  CEntityIdentity *v8; // r8
  CEntityIdentity *v9; // r8

  if ( other != 0 )
  {
    DataObject = CEntityIdentity::GetDataObject(other->m_pEntity, 0);
    v5 = DataObject;
    if ( DataObject != 0 )
    {
      nextLink = DataObject->nextLink;
      if ( nextLink != DataObject && nextLink != 0 )
      {
        while ( 1 )
        {
          m_pInstance = 0;
          if ( nextLink->entity.m_Index + 2 > 1 )
          {
            v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(nextLink->entity.m_Index) >> 9) & 0x3F];
            if ( v8 != 0 )
            {
              v9 = &v8[nextLink->entity.m_Index & 0x1FF];
              if ( v9 != 0 && nextLink->entity.m_Index == v9->m_EHandle.m_Index )
                m_pInstance = v9->m_pInstance;
            }
          }
          if ( ent == m_pInstance )
            break;
          nextLink = nextLink->nextLink;
          if ( nextLink == DataObject || nextLink == 0 )
            return;
        }
        CBaseEntity::PhysicsRemoveGround(other, nextLink);
        if ( v5->nextLink == v5 && v5 == v5->prevLink )
          CEntityIdentity::DestroyDataObject(other->m_pEntity, 0);
      }
    }
  }
}


// CBaseEntity::PhysicsRemoveGround  (line 1064, @0x00000000022d4700, libserver.so)  // inlines: EndGroundContact, Free, FreeGroundLink, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator delete, operator!=<CBaseEntity>
// calls: CUtlMemoryPoolBase::Free, CBaseEntity::RemoveFlag
// callers: CBaseEntity::PhysicsNotifyOtherOfGroundRemoval
// globals: CEntityHandle::gm_pEntityList, groundlink_t::s_Allocator, groundlinksallocated
void __fastcall CBaseEntity::PhysicsRemoveGround(CBaseEntity *other, groundlink_t *link)
{
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  groundlink_t *nextLink; // rax
  groundlink_t *prevLink; // rdx

  if ( link->entity.m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(link->entity.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[link->entity.m_Index & 0x1FF];
      if ( v4 != 0 && link->entity.m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 && other != 0 )
        CBaseEntity::RemoveFlag(v4->m_pInstance, 1);
    }
  }
  nextLink = link->nextLink;
  prevLink = link->prevLink;
  --groundlinksallocated;
  nextLink->prevLink = prevLink;
  link->prevLink->nextLink = link->nextLink;
  CUtlMemoryPoolBase::Free(&groundlink_t::s_Allocator, link);
}


// CBaseEntity::PhysicsRemoveGroundList  (line 1086, @0x00000000022d48c0, libserver.so)  // inlines: DestroyDataObject, Free, FreeGroundLink, Get, GetDataObject, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, operator delete
// calls: CEntityIdentity::GetDataObject, CBaseEntity::PhysicsNotifyOtherOfGroundRemoval, CUtlMemoryPoolBase::Free, CEntityIdentity::DestroyDataObject
// callers: FreeContainingEntity, CBaseEntity::UpdateOnRemove, CSource2GameClients::ClientDisconnect, CBaseEntity::WakeRestingObjects, CPhysicsPropRespawnable::Event_Killed
// globals: groundlink_t::s_Allocator, groundlinksallocated, CEntityHandle::gm_pEntityList
void __fastcall CBaseEntity::PhysicsRemoveGroundList(CBaseEntity *ent)
{
  unsigned __int16 *DataObject; // rax
  unsigned __int16 *v3; // r13
  unsigned __int16 *i; // rbx
  CBaseEntity *m_pInstance; // rsi
  unsigned __int16 *v6; // r12
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax

  DataObject = CEntityIdentity::GetDataObject(ent->m_pEntity, 0);
  v3 = DataObject;
  if ( DataObject != 0 )
  {
    for ( i = *(DataObject + 1); i != v3 && i != 0; i = v6 )
    {
      m_pInstance = 0;
      v6 = *(i + 1);
      if ( (*i + 2) > 1 )
      {
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*i >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[*i & 0x1FF];
          if ( v8 != 0 && *i == v8->m_EHandle.m_Index )
            m_pInstance = v8->m_pInstance;
        }
      }
      CBaseEntity::PhysicsNotifyOtherOfGroundRemoval(ent, m_pInstance);
      --groundlinksallocated;
      CUtlMemoryPoolBase::Free(&groundlink_t::s_Allocator, i);
    }
    CEntityIdentity::DestroyDataObject(ent->m_pEntity, 0);
  }
}


// CBaseEntity::PhysicsTouch  (line 1115, @0x00000000022d49b0, libserver.so)
// callers: CPhysicsGameSystem::DispatchCallbacks, CBaseEntity::PhysicsMarkEntityAsTouched
void __fastcall CBaseEntity::PhysicsTouch(CBaseEntity *const this, CBaseEntity *pentOther)
{
  if ( pentOther != 0 && (this->m_pEntity->m_flags & 0x200) == 0 && (pentOther->m_pEntity->m_flags & 0x200) == 0 )
    (*(this->_vptr_IHandleEntity + 112))(this);
}


// CBaseEntity::PhysicsStartTouch  (line 1130, @0x00000000022d49f0, libserver.so)
// callers: CBaseEntity::PhysicsMarkEntityAsTouched, CBaseEntity::VPhysicsStartTouch
void __fastcall CBaseEntity::PhysicsStartTouch(CBaseEntity *const this, CBaseEntity *pentOther)
{
  if ( pentOther != 0 && (this->m_pEntity->m_flags & 0x200) == 0 && (pentOther->m_pEntity->m_flags & 0x200) == 0 )
  {
    (*(this->_vptr_IHandleEntity + 111))(this);
    (*(this->_vptr_IHandleEntity + 112))(this, pentOther);
  }
}


// CBaseEntity::PhysicsMarkEntityAsTouched  (line 1151, @0x00000000022d4a50, libserver.so)  // inlines: Alloc, AllocTouchLink, CEntityHandle, CHandle, CreateDataObject, Get, GetBool, GetDataObject, GetDebugName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, IsSolid, IsTriggerCollisionGroup, IsValid, LookupEntity, PeakCount, Set, entindex, operator CEntityInstance*, operator int, operator new, operator=, operator==, touchlink_t
// calls: CBaseEntity::GetMoveParent, CCollisionProperty::IsTriggerCollisionGroup, CEntityIdentity::GetDataObject, CEntityIdentity::CreateDataObject, CUtlMemoryPoolBase::Alloc, CBaseEntity::PhysicsStartTouch, CEntityInstance::GetEntityIndex, CEntityIdentity::GetDebugName, Msg, CBaseEntity::PhysicsTouch, DevWarning(char const*,...)
// callers: CBaseEntity::PhysicsMarkEntitiesAsTouching
// strings: "add 0x%p: %s-%s (%d-%d) [%d in play, %d max]\n", "AllocTouchLink: failed to allocate touchlink_t.\n"
// globals: CEntityHandle::gm_pEntityList, touchlink_t::s_Allocator, linksallocated
touchlink_t *__fastcall CBaseEntity::PhysicsMarkEntityAsTouched(CBaseEntity *const this, CBaseEntity *other)
{
  CCollisionProperty *m_pCollision; // rdi
  CCollisionProperty *v5; // rdi
  CCollisionProperty *v6; // rbx
  CEntityIdentity *m_pEntity; // rdi
  unsigned __int16 *DataObject; // rax
  touchlink_t *v9; // r12
  unsigned __int16 *v10; // rbx
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  touchlink_t *v13; // r15
  touchlink_t *v15; // rax
  touchlink_t *v16; // rax
  CEntityIdentity *v17; // rax
  int v18; // edx
  __int16 v19; // cx
  touchlink_t *nextLink; // rax
  CCollisionProperty *v21; // rbx
  CCollisionProperty *v22; // rdi
  CCollisionProperty *v23; // rbx
  int v24; // ebx
  const char *v25; // rax
  CCollisionProperty *v26; // rdi
  volatile int m_value; // [rsp+1Ch] [rbp-44h]
  CEntityIndex v28; // [rsp+20h] [rbp-40h]
  CEntityIndex v29; // [rsp+24h] [rbp-3Ch]
  const char *DebugName; // [rsp+28h] [rbp-38h]

  if ( this == other
    || other == CBaseEntity::GetMoveParent(this)
    || this == CBaseEntity::GetMoveParent(other)
    || ((other->m_fFlags.m_Value | this->m_fFlags.m_Value) & 0x400000) != 0 )
  {
    return 0;
  }
  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 && CCollisionProperty::IsTriggerCollisionGroup(m_pCollision) )
  {
    v5 = other->m_pCollision;
    if ( v5 != 0
      && CCollisionProperty::IsTriggerCollisionGroup(v5)
      && ((v6 = this->m_pCollision) == 0
       || (*((*(v6->_vptr_ICollideable + 13))(this->m_pCollision) + 31) & 1) == 0
       && (*((*(v6->_vptr_ICollideable + 13))(v6) + 31) & 2) == 0
       || v6->m_nSolidType.m_Value == SolidType_t::SOLID_NONE) )
    {
      v23 = other->m_pCollision;
      if ( v23 == 0
        || (*((*(v23->_vptr_ICollideable + 13))(other->m_pCollision) + 31) & 1) == 0
        && (*((*(v23->_vptr_ICollideable + 13))(v23) + 31) & 2) == 0 )
      {
        return 0;
      }
      if ( v23->m_nSolidType.m_Value == SolidType_t::SOLID_NONE )
        return 0;
    }
  }
  if ( (other->m_pEntity->m_flags & 0x200) != 0 )
    return 0;
  m_pEntity = this->m_pEntity;
  if ( (m_pEntity->m_flags & 0x200) != 0 )
    return 0;
  DataObject = CEntityIdentity::GetDataObject(m_pEntity, 1);
  v9 = DataObject;
  if ( DataObject == 0 )
  {
    v15 = CEntityIdentity::CreateDataObject(this->m_pEntity, 1);
    v9 = v15;
    if ( v15 == 0 )
      return 0;
    v15->prevLink = v15;
    v15->nextLink = v15;
LABEL_31:
    v16 = CUtlMemoryPoolBase::Alloc(&touchlink_t::s_Allocator);
    v13 = v16;
    if ( v16 != 0 )
    {
      v16->entityTouched.m_Index = -1;
      ++linksallocated;
    }
    else
    {
      DevWarning("AllocTouchLink: failed to allocate touchlink_t.\n");
    }
    if ( debug_touchlinks.m_pParent->m_Value.m_nValue != 0 )
    {
      v24 = linksallocated;
      m_value = touchlink_t::s_Allocator.m_PeakAlloc.m_value;
      v28.m_Data = CEntityInstance::GetEntityIndex(other).m_Data;
      v29.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      DebugName = CEntityIdentity::GetDebugName(other->m_pEntity);
      v25 = CEntityIdentity::GetDebugName(this->m_pEntity);
      Msg("add 0x%p: %s-%s (%d-%d) [%d in play, %d max]\n", v13, v25, DebugName, v29.m_Data, v28.m_Data, v24, m_value);
    }
    if ( v13 != 0 )
    {
      v13->touchStamp = this->touchStamp;
      v17 = other->m_pEntity;
      if ( v17 != 0 )
      {
        v18 = (v17->m_EHandle.m_Index >> 15) - (v17->m_flags & 1);
        v19 = 0x7FFF;
        if ( v17->m_EHandle.m_Index != -1 )
          v19 = v17->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v13->entityTouched.m_Index) = v19 | v13->entityTouched.m_Index & 0x8000;
        v13->entityTouched.m_Index = (v18 << 15) | v13->entityTouched.m_Index & 0x7FFF;
      }
      else
      {
        v13->entityTouched.m_Index = -1;
      }
      v13->flags = 0;
      nextLink = v9->nextLink;
      v13->prevLink = v9;
      v13->nextLink = nextLink;
      v9->nextLink = v13;
      v13->nextLink->prevLink = v13;
      v21 = this->m_pCollision;
      if ( v21 == 0 )
        return v13;
      if ( (*((*(v21->_vptr_ICollideable + 13))(this->m_pCollision) + 31) & 1) == 0
        && (*((*(v21->_vptr_ICollideable + 13))(v21) + 31) & 2) == 0
        || v21->m_nSolidType.m_Value == SolidType_t::SOLID_NONE )
      {
        v26 = this->m_pCollision;
        if ( v26 == 0 || !CCollisionProperty::IsTriggerCollisionGroup(v26) )
          return v13;
      }
      v22 = other->m_pCollision;
      if ( v22 != 0 && CCollisionProperty::IsTriggerCollisionGroup(v22) )
        return v13;
      v13->flags |= 1u;
      if ( CBaseEntity::sm_bDisableTouchFuncs )
        return v13;
      CBaseEntity::PhysicsStartTouch(this, other);
      if ( (this->m_pEntity->m_flags & 0x200) == 0 && (other->m_pEntity->m_flags & 0x200) == 0 )
        return v13;
    }
    return 0;
  }
  v10 = *(DataObject + 1);
  if ( v10 == DataObject )
    goto LABEL_31;
  while ( 1 )
  {
    if ( (*v10 + 2) > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v10 >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[*v10 & 0x1FF];
        if ( v12 != 0 && *v10 == v12->m_EHandle.m_Index && other == v12->m_pInstance )
          break;
      }
    }
    v10 = *(v10 + 1);
    if ( v10 == v9 )
      goto LABEL_31;
  }
  *(v10 + 6) = this->touchStamp;
  if ( !CBaseEntity::sm_bDisableTouchFuncs )
    CBaseEntity::PhysicsTouch(this, other);
  if ( (this->m_pEntity->m_flags & 0x200) != 0 )
    return 0;
  v13 = v10;
  if ( (other->m_pEntity->m_flags & 0x200) != 0 )
    return 0;
  return v13;
}


// CBaseEntity::GetTouchTrace  (line 1262, @0x00000000022d4ea0, libserver.so)
// callers: NextBotCombatCharacter::Touch
// globals: g_TouchTrace
const trace_t *__cdecl CBaseEntity::GetTouchTrace()
{
  return &g_TouchTrace;
}


// CBaseEntity::PhysicsMarkEntitiesAsTouching  (line 1272, @0x00000000022d4eb0, libserver.so)  // inlines: operator=
// calls: CBaseEntity::PhysicsMarkEntityAsTouched, UTIL_ClearTrace, CBaseEntity::PhysicsNotifyOtherOfUntouch
// callers: CBaseEntity::PhysicsImpact
// globals: g_TouchTrace
void __fastcall CBaseEntity::PhysicsMarkEntitiesAsTouching(
        CBaseEntity *const this,
        CBaseEntity *other,
        trace_t *const trace)
{
  uint8 type; // al
  float dist; // xmm0_4
  uint8 signbits; // al
  float fraction; // xmm0_4
  __int16 v9; // ax
  uint m_nFaceIndex; // eax
  touchlink_t *v11; // r14
  touchlink_t *v12; // rax

  type = trace->plane.type;
  g_TouchTrace.startpos = trace->startpos;
  g_TouchTrace.endpos = trace->endpos;
  g_TouchTrace.plane.normal = trace->plane.normal;
  dist = trace->plane.dist;
  g_TouchTrace.plane.type = type;
  signbits = trace->plane.signbits;
  g_TouchTrace.plane.dist = dist;
  fraction = trace->fraction;
  g_TouchTrace.plane.signbits = signbits;
  v9 = *trace->plane.pad;
  g_TouchTrace.fraction = fraction;
  *g_TouchTrace.plane.pad = v9;
  g_TouchTrace.contents = trace->contents;
  g_TouchTrace.startsolid = trace->startsolid;
  g_TouchTrace.m_pSurfaceProperties = trace->m_pSurfaceProperties;
  g_TouchTrace.m_pEnt = trace->m_pEnt;
  g_TouchTrace.m_pHitbox = trace->m_pHitbox;
  g_TouchTrace.m_hBody = trace->m_hBody;
  g_TouchTrace.m_hShape = trace->m_hShape;
  g_TouchTrace.m_ShapeAttributes = trace->m_ShapeAttributes;
  m_nFaceIndex = trace->m_nFaceIndex;
  g_TouchTrace.boneLocalPos = trace->boneLocalPos;
  g_TouchTrace.boneLocalNormal = trace->boneLocalNormal;
  g_TouchTrace.m_nFaceIndex = m_nFaceIndex;
  g_TouchTrace.hitboxBoneIndex = trace->hitboxBoneIndex;
  g_TouchTrace.unused0 = trace->unused0;
  v11 = CBaseEntity::PhysicsMarkEntityAsTouched(this, other);
  v12 = CBaseEntity::PhysicsMarkEntityAsTouched(other, this);
  if ( v12 == 0 && v11 != 0 )
  {
    CBaseEntity::PhysicsNotifyOtherOfUntouch(other, this);
    v12 = 0;
  }
  if ( v11 == 0 && v12 != 0 )
    CBaseEntity::PhysicsNotifyOtherOfUntouch(this, other);
  UTIL_ClearTrace(&g_TouchTrace);
}


// CBaseEntity::VPhysicsStartTouch  (line 1289, @0x00000000022d50f0, libserver.so)
// calls: ConvertContactToTrace, CBaseEntity::PhysicsStartTouch, UTIL_ClearTrace
// callers: CPhysicsGameSystem::DispatchCallbacks
// globals: g_TouchTrace
void __fastcall CBaseEntity::VPhysicsStartTouch(
        CBaseEntity *const this,
        CBaseEntity *pOther,
        const Manifold_t *pManifold)
{
  ConvertContactToTrace(&g_TouchTrace, pManifold);
  g_TouchTrace.m_pEnt = pOther;
  CBaseEntity::PhysicsStartTouch(this, pOther);
  CBaseEntity::PhysicsStartTouch(pOther, this);
  UTIL_ClearTrace(&g_TouchTrace);
}


// CBaseEntity::VPhysicsEndTouch  (line 1299, @0x00000000022d5140, libserver.so)
// callers: CPhysicsGameSystem::DispatchCallbacks
void __fastcall CBaseEntity::VPhysicsEndTouch(CBaseEntity *const this, CBaseEntity *pOther)
{
  (*(this->_vptr_IHandleEntity + 113))(this);
  (*(pOther->_vptr_IHandleEntity + 113))(pOther, this);
}


// CBaseEntity::PhysicsImpact  (line 1310, @0x00000000022d5170, libserver.so)
// calls: CBaseEntity::PhysicsMarkEntitiesAsTouching
// callers: CMoveHelperServer::ProcessImpacts, CPhysicsPushedEntities::FinishPush, CPhysicsPushedEntities::RegisterBlockage, CBaseEntity::PhysicsPushEntity, CBaseEntity::PhysicsTryMove
void __fastcall CBaseEntity::PhysicsImpact(CBaseEntity *const this, CBaseEntity *other, trace_t *const trace)
{
  if ( other != 0 && (this->m_pEntity->m_flags & 0x200) == 0 && (other->m_pEntity->m_flags & 0x200) == 0 )
    CBaseEntity::PhysicsMarkEntitiesAsTouching(this, other, trace);
}


// CBaseEntity::PhysicsSolidMaskForEntity  (line 1331, @0x00000000022b7a10, libserver.so)
uint64 __fastcall CBaseEntity::PhysicsSolidMaskForEntity(const CBaseEntity *const this)
{
  return 552961;
}


// CBaseEntity::UpdateWaterState  (line 1350, @0x00000000022d53d0, libserver.so)  // inlines: GetWaterContents, IsPointSized, NetworkStateChanged, NormalizedToWorldSpace, Set, SetWaterLevel, UTIL_PointContents, Vector, operator=, operator=<int>
// calls: CCollisionProperty::NormalizedToWorldSpace, CBaseEntity::SetWaterType, CGamePhysicsQueryInterface::GetPointContents, CBaseEntity::GetAbsOrigin
// callers: CBaseEntity::SetMoveType, CBaseEntity::PhysicsCheckWaterTransition
void __fastcall CBaseEntity::UpdateWaterState(CBaseEntity *const this)
{
  CCollisionProperty *m_pCollision; // rdi
  int PointContents; // eax
  CCollisionProperty *v4; // rax
  vec_t v5; // xmm1_4
  vec_t v6; // xmm1_4
  Vector point; // [rsp+0h] [rbp-50h] BYREF
  double v8; // [rsp+10h] [rbp-40h]
  vec_t v9; // [rsp+18h] [rbp-38h]
  Vector in; // [rsp+20h] [rbp-30h] BYREF

  in.x = 0.5;
  m_pCollision = this->m_pCollision;
  in.y = 0.5;
  in.z = 0.0;
  if ( m_pCollision != 0 )
    CCollisionProperty::NormalizedToWorldSpace(m_pCollision, &in, &point);
  else
    point = *CBaseEntity::GetAbsOrigin(this);
  if ( this->m_nWaterLevel.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 561, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nWaterLevel.m_Value = 0;
  }
  CBaseEntity::SetWaterType(this, 0);
  PointContents = CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, &point, 0x1C000u);
  if ( (PointContents & 0x1C000) != 0 )
  {
    CBaseEntity::SetWaterType(this, PointContents);
    if ( this->m_nWaterLevel.m_Value != 1 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 561, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nWaterLevel.m_Value = 1;
    }
    v4 = this->m_pCollision;
    if ( v4 == 0 || v4->m_flRadius == 0.0 )
      goto LABEL_15;
    v8 = (*(this->_vptr_IHandleEntity + 62))(this);
    v9 = v5;
    point.z = v5;
    if ( (CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, &point, 0x1C000u) & 0x1C000) != 0 )
    {
      if ( this->m_nWaterLevel.m_Value != 2 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 561, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_nWaterLevel.m_Value = 2;
      }
      *&in.x = (*(this->_vptr_IHandleEntity + 164))(this);
      in.z = v6;
      point.z = v6;
      if ( (CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, &point, 0x1C000u) & 0x1C000) != 0 )
      {
LABEL_15:
        if ( this->m_nWaterLevel.m_Value != 3 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 561, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_nWaterLevel.m_Value = 3;
        }
      }
    }
  }
}


// CBaseEntity::PhysicsCheckWater  (line 1402, @0x00000000022d55e0, libserver.so)  // inlines: GetWaterLevel
bool __fastcall CBaseEntity::PhysicsCheckWater(CBaseEntity *const this)
{
  return this->m_nWaterLevel.m_Value > 1u;
}


// CBaseEntity::PhysicsCheckVelocity  (line 1411, @0x00000000022d5600, libserver.so)  // inlines: GetAbsVelocity, GetClassNameAsCStr, GetClassname, GetFloat, String
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsVelocity, Msg, CBaseEntity::CalcAbsoluteVelocity
// callers: CBaseEntity::PhysicsAddHalfGravity, CBaseEntity::PhysicsAddGravityMove, CBaseEntity::PhysicsCustom, CBaseEntity::PhysicsStepRunTimestep, CBaseEntity::PhysicsToss
// strings: "Got a NaN origin on %s\n", "Got a NaN velocity on %s\n"
void __fastcall CBaseEntity::PhysicsCheckVelocity(CBaseEntity *const this)
{
  Vector *AbsOrigin; // rax
  bool v3; // zf
  __int64 v4; // rbx
  char v5; // dl
  ConVar *v6; // rcx
  float v7; // xmm1_4
  float m_fValue; // xmm0_4
  CEntityIdentity *v9; // rax
  const char *v10; // rsi
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  ConVar *v13; // [rsp+8h] [rbp-58h]
  ConVar *v14; // [rsp+8h] [rbp-58h]
  Vector origin; // [rsp+10h] [rbp-50h] BYREF
  Vector vecAbsVelocity; // [rsp+20h] [rbp-40h] BYREF

  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v3 = (this->m_iEFlags & 0x1000) == 0;
  origin = *AbsOrigin;
  if ( !v3 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  v4 = 0;
  v5 = 0;
  v6 = &sv_maxvelocity;
  vecAbsVelocity = this->m_vecAbsVelocity;
  do
  {
    if ( (*(&vecAbsVelocity.x + v4) & 0x7F800000) == 0x7F800000 )
    {
      m_pEntity = this->m_pEntity;
      m_pAsString = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      v14 = v6;
      Msg("Got a NaN velocity on %s\n", m_pAsString);
      v5 = 1;
      v6 = v14;
      *(&vecAbsVelocity.x + v4) = 0.0;
    }
    if ( (*(&origin.x + v4) & 0x7F800000) == 0x7F800000 )
    {
      v9 = this->m_pEntity;
      v10 = "";
      if ( v9->m_designerName.u.m_Id != 0 )
        v10 = v9->m_designerName.u.m_pAsString;
      v13 = v6;
      Msg("Got a NaN origin on %s\n", v10);
      v5 = 1;
      v6 = v13;
      *(&origin.x + v4) = 0.0;
    }
    v7 = *(&vecAbsVelocity.x + v4);
    m_fValue = v6->m_pParent->m_Value.m_fValue;
    if ( v7 > m_fValue || (m_fValue = -m_fValue) > v7 )
    {
      *(&vecAbsVelocity.x + v4) = m_fValue;
      v5 = 1;
    }
    v4 += 4;
  }
  while ( v4 != 12 );
  if ( v5 != 0 )
  {
    CBaseEntity::SetAbsOrigin(this, &origin);
    CBaseEntity::SetAbsVelocity(this, &vecAbsVelocity);
  }
}


// CBaseEntity::PhysicsAddGravityMove  (line 1461, @0x00000000022d5900, libserver.so)  // inlines: GetAbsVelocity, GetActualGravity, GetFloat, NetworkStateChanged, Set, SetBaseVelocity, operator!=, operator=
// calls: CBaseEntity::SetAbsVelocity, CBaseEntity::PhysicsCheckVelocity, CBaseEntity::CalcAbsoluteVelocity
// callers: CBaseEntity::PhysicsToss
void __fastcall CBaseEntity::PhysicsAddGravityMove(CBaseEntity *const this, Vector *const move)
{
  float v3; // xmm0_4
  float m_flGravity; // xmm1_4
  float frametime; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm5_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  __m128d v10; // xmm0
  vec_t x; // [rsp+0h] [rbp-30h]
  vec_t y; // [rsp+4h] [rbp-2Ch]
  float newZVelocitya; // [rsp+8h] [rbp-28h]
  Vector *newZVelocity; // [rsp+8h] [rbp-28h]
  Vector vecAbsVelocity; // [rsp+10h] [rbp-20h] BYREF

  if ( (this->m_iEFlags & 0x1000) != 0 )
  {
    newZVelocity = move;
    CBaseEntity::CalcAbsoluteVelocity(this);
    move = newZVelocity;
  }
  *&vecAbsVelocity.x = *&this->m_vecAbsVelocity.m_Value.x;
  v3 = vecAbsVelocity.x + this->m_vecBaseVelocity.m_Value.x;
  vecAbsVelocity.z = this->m_vecAbsVelocity.m_Value.z;
  move->x = v3 * gpGlobals->frametime;
  move->y = (vecAbsVelocity.y + this->m_vecBaseVelocity.m_Value.y) * gpGlobals->frametime;
  if ( (this->m_fFlags.m_Value & 1) != 0 )
  {
    move->z = this->m_vecBaseVelocity.m_Value.z * gpGlobals->frametime;
  }
  else
  {
    m_flGravity = this->m_flGravity;
    if ( m_flGravity == 0.0 )
      m_flGravity = 1.0;
    frametime = gpGlobals->frametime;
    v6 = (m_flGravity * sv_gravity.m_pParent->m_Value.m_fValue) * frametime;
    v7 = vecAbsVelocity.z - v6;
    v8 = vecAbsVelocity.z + (vecAbsVelocity.z - v6);
    v9 = vecAbsVelocity.z - v6;
    v10.m128d_f64[1] = v8;
    v10.m128d_f64[0] = (v8 * 0.5 + this->m_vecBaseVelocity.m_Value.z) * frametime;
    move->z = _mm_movedup_pd(v10).m128d_f64[0];
    if ( this->m_vecBaseVelocity.m_Value.z != 0.0 )
    {
      x = this->m_vecBaseVelocity.m_Value.x;
      y = this->m_vecBaseVelocity.m_Value.y;
      newZVelocitya = v7;
      (*(this->_vptr_IHandleEntity + 22))(this, 512, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_vecBaseVelocity.m_Value.z = 0.0;
      this->m_vecBaseVelocity.m_Value.x = x;
      v9 = newZVelocitya;
      this->m_vecBaseVelocity.m_Value.y = y;
    }
    vecAbsVelocity.z = v9;
    CBaseEntity::SetAbsVelocity(this, &vecAbsVelocity);
    CBaseEntity::PhysicsCheckVelocity(this);
  }
}


// CBaseEntity::PhysicsClipVelocity  (line 1500, @0x00000000022d5ae0, libserver.so)  // inlines: DotProduct, operator[]
// callers: CBaseEntity::PhysicsTryMove, CBaseEntity::ResolveFlyCollisionBounce, CBaseEntity::ResolveFlyCollisionSlide, CBaseEntity::PerformFlyCollisionResolution
__int64 __fastcall CBaseEntity::PhysicsClipVelocity(
        CBaseEntity *const this,
        const Vector *const in,
        const Vector *const normal,
        Vector *const out,
        float overbounce)
{
  float z; // xmm2_4
  __int64 result; // rax
  __int64 v7; // rdi
  float v8; // xmm1_4
  float v9; // xmm0_4

  z = normal->z;
  result = z > 0.0;
  if ( z == 0.0 )
    result = result | 2;
  v7 = 0;
  v8 = (((in->x * normal->x) + (in->y * normal->y)) + (z * in->z)) * overbounce;
  do
  {
    v9 = *(&in->x + v7) - (*(&normal->x + v7) * v8);
    if ( v9 <= -0.1 || v9 >= 0.1 )
      *(&out->x + v7) = v9;
    else
      *(&out->x + v7) = 0.0;
    v7 += 4;
  }
  while ( v7 != 12 );
  return result;
}


// CBaseEntity::ResolveFlyCollisionBounce  (line 1538, @0x00000000022d7550, libserver.so)  // inlines: Dot, DotProduct, GetAbsVelocity, GetActualGravity, GetFloat, VectorAdd, VectorMA, VectorMultiply, VectorScale, VectorSubtract, operator*, operator*=, operator-
// calls: CBaseEntity::PhysicsClipVelocity, CBaseEntity::SetAbsVelocity, CBaseEntity::IsStandable, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::CalcAbsoluteVelocity, VectorNormalize, CBaseEntity::PhysicsPushEntity, CBaseEntity::SetGroundEntity
void __fastcall CBaseEntity::ResolveFlyCollisionBounce(
        CBaseEntity *const this,
        trace_t *const trace,
        Vector *const vecVelocity,
        __m128 flMinTotalElasticity)
{
  __m128 v7; // xmm3
  float v8; // xmm1_4
  float v9; // xmm0_4
  cplane_t *p_plane; // rdx
  float v11; // xmm1_4
  float v12; // xmm4_4
  float y; // xmm3_4
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4
  float v16; // xmm2_4
  vec_t v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float m_flGravity; // xmm2_4
  vec_t v21; // xmm4_4
  vec_t v22; // xmm3_4
  vec_t v23; // xmm1_4
  float v24; // xmm2_4
  float z; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm6_4
  vec_t v29; // xmm5_4
  vec_t v30; // xmm4_4
  float v31; // xmm2_4
  vec_t v32; // xmm3_4
  vec_t v33; // xmm1_4
  vec_t v34; // xmm0_4
  CBaseEntity *pEntity; // [rsp+0h] [rbp-60h]
  CBaseEntity *pEntitya; // [rsp+0h] [rbp-60h]
  float pEntityb; // [rsp+0h] [rbp-60h]
  float v38; // [rsp+8h] [rbp-58h]
  float flSpeedSqr; // [rsp+Ch] [rbp-54h]
  float flSpeedSqra; // [rsp+Ch] [rbp-54h]
  float flSpeedSqrb; // [rsp+Ch] [rbp-54h]
  float flSpeedSqrc; // [rsp+Ch] [rbp-54h]
  Vector vecAbsVelocity; // [rsp+10h] [rbp-50h] BYREF
  Vector vecBaseDir; // [rsp+20h] [rbp-40h] BYREF

  v7 = _mm_cmpge_ss(0x3F666666u, flMinTotalElasticity);
  v8 = trace->m_pSurfaceProperties->m_physics.m_elasticity * this->m_flElasticity.m_Value;
  LODWORD(v9) = _mm_andnot_ps(v7, 0x3F666666u).m128_u32[0] | flMinTotalElasticity.m128_i32[0] & v7.m128_i32[0];
  if ( v8 > 0.89999998 )
  {
    p_plane = &trace->plane;
    v11 = 0.89999998;
    if ( (this->m_iEFlags & 0x1000) == 0 )
      goto LABEL_3;
  }
  else
  {
    p_plane = &trace->plane;
    v11 = fmaxf(v9, v8);
    if ( (this->m_iEFlags & 0x1000) == 0 )
      goto LABEL_3;
  }
  pEntitya = p_plane;
  flSpeedSqrb = v11;
  CBaseEntity::CalcAbsoluteVelocity(this);
  p_plane = pEntitya;
  v11 = flSpeedSqrb;
LABEL_3:
  flSpeedSqr = v11;
  CBaseEntity::PhysicsClipVelocity(this, &this->m_vecAbsVelocity.m_Value, &p_plane->normal, &vecAbsVelocity, 2.0);
  v12 = vecAbsVelocity.x * flSpeedSqr;
  v14 = flSpeedSqr * vecAbsVelocity.z;
  v15 = this->m_vecBaseVelocity.m_Value.x + (vecAbsVelocity.x * flSpeedSqr);
  vecAbsVelocity.x = vecAbsVelocity.x * flSpeedSqr;
  vecAbsVelocity.y = vecAbsVelocity.y * flSpeedSqr;
  y = vecAbsVelocity.y;
  vecVelocity->x = v15;
  v16 = this->m_vecBaseVelocity.m_Value.y;
  vecAbsVelocity.z = v14;
  v17 = v16 + y;
  vecVelocity->y = v17;
  v18 = v14 + this->m_vecBaseVelocity.m_Value.z;
  vecVelocity->z = v18;
  v19 = ((v15 * v15) + (v17 * v17)) + (v18 * v18);
  if ( trace->plane.normal.z <= 0.69999999 )
  {
    if ( v19 < 900.0 )
    {
LABEL_10:
      CBaseEntity::SetAbsVelocity(this, &vec3_origin);
      CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
      return;
    }
    CBaseEntity::SetAbsVelocity(this, &vecAbsVelocity);
  }
  else
  {
    m_flGravity = this->m_flGravity;
    pEntity = trace->m_pEnt;
    if ( m_flGravity == 0.0 )
      m_flGravity = 1.0;
    if ( ((m_flGravity * sv_gravity.m_pParent->m_Value.m_fValue) * gpGlobals->frametime) > v18 )
    {
      v21 = v12 + this->m_vecBaseVelocity.m_Value.x;
      vecAbsVelocity.z = 0.0;
      vecVelocity->x = v21;
      v22 = y + this->m_vecBaseVelocity.m_Value.y;
      vecVelocity->y = v22;
      v23 = this->m_vecBaseVelocity.m_Value.z + 0.0;
      vecVelocity->z = v23;
      v19 = ((v21 * v21) + (v22 * v22)) + (v23 * v23);
    }
    flSpeedSqra = v19;
    CBaseEntity::SetAbsVelocity(this, &vecAbsVelocity);
    if ( flSpeedSqra < 900.0 )
    {
      if ( CBaseEntity::IsStandable(pEntity) )
        CBaseEntity::SetGroundEntity(this, pEntity);
      goto LABEL_10;
    }
    v24 = this->m_vecBaseVelocity.m_Value.y;
    z = this->m_vecBaseVelocity.m_Value.z;
    vecBaseDir = this->m_vecBaseVelocity;
    v38 = vecBaseDir.x - vecAbsVelocity.x;
    pEntityb = v24 - vecAbsVelocity.y;
    flSpeedSqrc = z - vecAbsVelocity.z;
    VectorNormalize(&vecBaseDir);
    v26 = ((v38 * vecBaseDir.x) + (pEntityb * vecBaseDir.y)) + (flSpeedSqrc * vecBaseDir.z);
    v27 = (1.0 - trace->fraction) * gpGlobals->frametime;
    v28 = vecAbsVelocity.x * v27;
    v29 = vecAbsVelocity.y * v27;
    v30 = vecAbsVelocity.z * v27;
    vecVelocity->x = vecAbsVelocity.x * v27;
    vecVelocity->y = v29;
    vecVelocity->z = v30;
    v31 = (1.0 - trace->fraction) * gpGlobals->frametime;
    v32 = ((this->m_vecBaseVelocity.m_Value.y * v26) * v31) + v29;
    v33 = ((this->m_vecBaseVelocity.m_Value.z * v26) * v31) + v30;
    v34 = ((v26 * this->m_vecBaseVelocity.m_Value.x) * v31) + v28;
    vecVelocity->y = v32;
    vecVelocity->z = v33;
    vecVelocity->x = v34;
    CBaseEntity::PhysicsPushEntity(this, vecVelocity, trace);
  }
}


// CBaseEntity::ResolveFlyCollisionSlide  (line 1622, @0x00000000022d7940, libserver.so)  // inlines: DotProduct, GetAbsVelocity, GetActualGravity, GetFloat, VectorAdd, operator*=, operator+=
// calls: CBaseEntity::PhysicsClipVelocity, CBaseEntity::SetAbsVelocity, CBaseEntity::IsStandable, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::PhysicsPushEntity, CBaseEntity::CalcAbsoluteVelocity, CBaseEntity::SetGroundEntity
// callers: CBaseEntity::PerformFlyCollisionResolution
void __fastcall CBaseEntity::ResolveFlyCollisionSlide(
        CBaseEntity *const this,
        trace_t *const trace,
        Vector *const vecVelocity)
{
  cplane_t *p_plane; // rdx
  float x; // xmm6_4
  float y; // xmm5_4
  float v9; // xmm0_4
  float z; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float m_flGravity; // xmm2_4
  float v14; // xmm0_4
  vec_t v15; // xmm6_4
  vec_t v16; // xmm5_4
  vec_t v17; // xmm1_4
  float v18; // xmm0_4
  vec_t v19; // xmm3_4
  vec_t v20; // xmm1_4
  CBaseEntity *pEntity; // [rsp+8h] [rbp-58h]
  float flSurfaceFriction; // [rsp+14h] [rbp-4Ch]
  float flSpeedSqra; // [rsp+18h] [rbp-48h]
  cplane_t *flSpeedSqr; // [rsp+18h] [rbp-48h]
  Vector vecAbsVelocity; // [rsp+20h] [rbp-40h] BYREF

  p_plane = &trace->plane;
  flSurfaceFriction = trace->m_pSurfaceProperties->m_physics.m_friction;
  if ( (this->m_iEFlags & 0x1000) != 0 )
  {
    flSpeedSqr = &trace->plane;
    CBaseEntity::CalcAbsoluteVelocity(this);
    p_plane = flSpeedSqr;
  }
  CBaseEntity::PhysicsClipVelocity(this, &this->m_vecAbsVelocity.m_Value, &p_plane->normal, &vecAbsVelocity, 1.0);
  if ( trace->plane.normal.z <= 0.7 )
  {
    CBaseEntity::SetAbsVelocity(this, &vecAbsVelocity);
  }
  else
  {
    x = vecAbsVelocity.x;
    y = vecAbsVelocity.y;
    v9 = this->m_vecBaseVelocity.m_Value.x + vecAbsVelocity.x;
    z = vecAbsVelocity.z;
    vecVelocity->x = v9;
    v11 = this->m_vecBaseVelocity.m_Value.y + y;
    vecVelocity->y = v11;
    v12 = z + this->m_vecBaseVelocity.m_Value.z;
    vecVelocity->z = v12;
    m_flGravity = this->m_flGravity;
    pEntity = trace->m_pEnt;
    if ( m_flGravity == 0.0 )
      m_flGravity = 1.0;
    if ( ((m_flGravity * sv_gravity.m_pParent->m_Value.m_fValue) * gpGlobals->frametime) > v12 )
    {
      v15 = x + this->m_vecBaseVelocity.m_Value.x;
      vecAbsVelocity.z = 0.0;
      vecVelocity->x = v15;
      v16 = y + this->m_vecBaseVelocity.m_Value.y;
      vecVelocity->y = v16;
      v17 = this->m_vecBaseVelocity.m_Value.z + 0.0;
      vecVelocity->z = v17;
      v14 = ((v15 * v15) + (v16 * v16)) + (v17 * v17);
    }
    else
    {
      v14 = ((v9 * v9) + (v11 * v11)) + (v12 * v12);
    }
    flSpeedSqra = v14;
    CBaseEntity::SetAbsVelocity(this, &vecAbsVelocity);
    if ( flSpeedSqra >= 900.0 )
    {
      v18 = ((1.0 - trace->fraction) * gpGlobals->frametime) * flSurfaceFriction;
      v19 = (vecAbsVelocity.x + this->m_vecBaseVelocity.m_Value.x) * v18;
      v20 = (vecAbsVelocity.z + this->m_vecBaseVelocity.m_Value.z) * v18;
      vecAbsVelocity.y = (vecAbsVelocity.y + this->m_vecBaseVelocity.m_Value.y) * v18;
      vecAbsVelocity.x = v19;
      vecAbsVelocity.z = v20;
      CBaseEntity::PhysicsPushEntity(this, &vecAbsVelocity, trace);
    }
    else
    {
      if ( CBaseEntity::IsStandable(pEntity) )
        CBaseEntity::SetGroundEntity(this, pEntity);
      CBaseEntity::SetAbsVelocity(this, &vec3_origin);
      CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
    }
  }
}


// CBaseEntity::ResolveFlyCollisionCustom  (line 1682, @0x00000000022d7bf0, libserver.so)  // inlines: GetAbsVelocity, GetActualGravity, GetFloat, VectorAdd
// calls: CBaseEntity::SetAbsVelocity, CBaseEntity::IsStandable, CBaseEntity::SetGroundEntity, CBaseEntity::CalcAbsoluteVelocity
void __fastcall CBaseEntity::ResolveFlyCollisionCustom(
        CBaseEntity *const this,
        trace_t *const trace,
        Vector *const vecVelocity)
{
  float v4; // xmm0_4
  float m_flGravity; // xmm1_4
  CBaseEntity *m_pEnt; // r12
  __int64 v7; // rax
  Vector *v8; // [rsp-18h] [rbp-38h]
  trace_t *v9; // [rsp-10h] [rbp-30h]
  __int64 v10; // [rsp-8h] [rbp-28h] BYREF
  Vector vecAbsVelocity; // [rsp+0h] [rbp-20h]

  if ( trace->plane.normal.z > 0.7 )
  {
    if ( (this->m_iEFlags & 0x1000) != 0 )
    {
      v8 = vecVelocity;
      v9 = trace;
      CBaseEntity::CalcAbsoluteVelocity(this);
      vecVelocity = v8;
      trace = v9;
    }
    vecVelocity->x = this->m_vecAbsVelocity.m_Value.x + this->m_vecBaseVelocity.m_Value.x;
    vecVelocity->y = this->m_vecAbsVelocity.m_Value.y + this->m_vecBaseVelocity.m_Value.y;
    v4 = this->m_vecAbsVelocity.m_Value.z + this->m_vecBaseVelocity.m_Value.z;
    vecVelocity->z = v4;
    m_flGravity = this->m_flGravity;
    m_pEnt = trace->m_pEnt;
    if ( m_flGravity == 0.0 )
      m_flGravity = 1.0;
    if ( ((m_flGravity * sv_gravity.m_pParent->m_Value.m_fValue) * gpGlobals->frametime) > v4 )
    {
      if ( (this->m_iEFlags & 0x1000) != 0 )
        CBaseEntity::CalcAbsoluteVelocity(this);
      v7 = *&this->m_vecAbsVelocity.m_Value.x;
      vecAbsVelocity.x = 0.0;
      v10 = v7;
      CBaseEntity::SetAbsVelocity(this, &v10);
    }
    if ( CBaseEntity::IsStandable(m_pEnt) )
      CBaseEntity::SetGroundEntity(this, m_pEnt);
  }
}


// CBaseEntity::PerformFlyCollisionResolution  (line 1712, @0x00000000022d9370, libserver.so)  // inlines: Dot, DotProduct, GetAbsVelocity, GetActualGravity, GetFloat, ResolveFlyCollisionBounce, VectorAdd, VectorMA, VectorMultiply, VectorScale, VectorSubtract, operator*, operator*=, operator-
// calls: CBaseEntity::ResolveFlyCollisionSlide, CBaseEntity::PhysicsClipVelocity, CBaseEntity::SetAbsVelocity, CBaseEntity::IsStandable, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::CalcAbsoluteVelocity, CBaseEntity::SetGroundEntity, VectorNormalize, CBaseEntity::PhysicsPushEntity
// callers: CBaseEntity::PhysicsToss
void __fastcall CBaseEntity::PerformFlyCollisionResolution(
        CBaseEntity *const this,
        trace_t *const trace,
        Vector *const move)
{
  MoveCollide_t m_Value; // al
  float v7; // xmm1_4
  float v8; // xmm1_4
  cplane_t *p_plane; // rdx
  float v10; // xmm4_4
  float y; // xmm3_4
  vec_t v12; // xmm1_4
  vec_t v13; // xmm0_4
  float v14; // xmm2_4
  vec_t v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float m_flGravity; // xmm2_4
  vec_t v19; // xmm4_4
  vec_t v20; // xmm3_4
  vec_t v21; // xmm1_4
  float v22; // xmm2_4
  float z; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm6_4
  vec_t v27; // xmm5_4
  vec_t v28; // xmm4_4
  float v29; // xmm2_4
  vec_t v30; // xmm3_4
  vec_t v31; // xmm1_4
  vec_t v32; // xmm0_4
  CBaseEntity *ground; // [rsp+0h] [rbp-60h]
  float grounda; // [rsp+0h] [rbp-60h]
  float v35; // [rsp+8h] [rbp-58h]
  float v36; // [rsp+Ch] [rbp-54h]
  float v37; // [rsp+Ch] [rbp-54h]
  float v38; // [rsp+Ch] [rbp-54h]
  float v39; // [rsp+Ch] [rbp-54h]
  Vector out; // [rsp+10h] [rbp-50h] BYREF
  Vector vec; // [rsp+20h] [rbp-40h] BYREF

  m_Value = this->m_MoveCollide.m_Value;
  switch ( m_Value )
  {
    case MoveCollide_t::MOVECOLLIDE_FLY_BOUNCE:
      v7 = trace->m_pSurfaceProperties->m_physics.m_elasticity * this->m_flElasticity.m_Value;
      if ( v7 > 0.89999998 )
        v8 = 0.89999998;
      else
        v8 = fmaxf(0.0, v7);
      p_plane = &trace->plane;
      if ( (this->m_iEFlags & 0x1000) != 0 )
      {
        v38 = v8;
        CBaseEntity::CalcAbsoluteVelocity(this);
        p_plane = &trace->plane;
        v8 = v38;
      }
      v36 = v8;
      CBaseEntity::PhysicsClipVelocity(this, &this->m_vecAbsVelocity.m_Value, &p_plane->normal, &out, 2.0);
      v10 = out.x * v36;
      v12 = v36 * out.z;
      v13 = this->m_vecBaseVelocity.m_Value.x + (out.x * v36);
      out.x = out.x * v36;
      out.y = out.y * v36;
      y = out.y;
      move->x = v13;
      v14 = this->m_vecBaseVelocity.m_Value.y;
      out.z = v12;
      v15 = v14 + y;
      move->y = v15;
      v16 = v12 + this->m_vecBaseVelocity.m_Value.z;
      move->z = v16;
      v17 = ((v13 * v13) + (v15 * v15)) + (v16 * v16);
      if ( trace->plane.normal.z <= 0.69999999 )
      {
        if ( v17 >= 900.0 )
        {
          CBaseEntity::SetAbsVelocity(this, &out);
          return;
        }
      }
      else
      {
        m_flGravity = this->m_flGravity;
        ground = trace->m_pEnt;
        if ( m_flGravity == 0.0 )
          m_flGravity = 1.0;
        if ( ((m_flGravity * sv_gravity.m_pParent->m_Value.m_fValue) * gpGlobals->frametime) > v16 )
        {
          v19 = v10 + this->m_vecBaseVelocity.m_Value.x;
          out.z = 0.0;
          move->x = v19;
          v20 = y + this->m_vecBaseVelocity.m_Value.y;
          move->y = v20;
          v21 = this->m_vecBaseVelocity.m_Value.z + 0.0;
          move->z = v21;
          v17 = ((v19 * v19) + (v20 * v20)) + (v21 * v21);
        }
        v37 = v17;
        CBaseEntity::SetAbsVelocity(this, &out);
        if ( v37 >= 900.0 )
        {
          v22 = this->m_vecBaseVelocity.m_Value.y;
          z = this->m_vecBaseVelocity.m_Value.z;
          vec = this->m_vecBaseVelocity;
          v35 = vec.x - out.x;
          grounda = v22 - out.y;
          v39 = z - out.z;
          VectorNormalize(&vec);
          v24 = ((v35 * vec.x) + (grounda * vec.y)) + (v39 * vec.z);
          v25 = (1.0 - trace->fraction) * gpGlobals->frametime;
          v26 = out.x * v25;
          v27 = out.y * v25;
          v28 = out.z * v25;
          move->x = out.x * v25;
          move->y = v27;
          move->z = v28;
          v29 = (1.0 - trace->fraction) * gpGlobals->frametime;
          v30 = ((this->m_vecBaseVelocity.m_Value.y * v24) * v29) + v27;
          v31 = ((this->m_vecBaseVelocity.m_Value.z * v24) * v29) + v28;
          v32 = ((v24 * this->m_vecBaseVelocity.m_Value.x) * v29) + v26;
          move->y = v30;
          move->z = v31;
          move->x = v32;
          CBaseEntity::PhysicsPushEntity(this, move, trace);
          return;
        }
        if ( CBaseEntity::IsStandable(ground) )
          CBaseEntity::SetGroundEntity(this, ground);
      }
      CBaseEntity::SetAbsVelocity(this, &vec3_origin);
      CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
      return;
    case MoveCollide_t::MOVECOLLIDE_DEFAULT:
      goto LABEL_7;
    case MoveCollide_t::MOVECOLLIDE_FLY_CUSTOM:
      (*(this->_vptr_IHandleEntity + 126))(this);
      return;
    case MoveCollide_t::MOVECOLLIDE_FLY_SLIDE:
LABEL_7:
      CBaseEntity::ResolveFlyCollisionSlide(this, trace, move);
      break;
    default:
      break;
  }
}


// CBaseEntity::PhysicsCheckWaterTransition  (line 1748, @0x00000000022d5b80, libserver.so)  // inlines: GetAbsVelocity
// calls: CBaseEntity::GetWaterType, CBaseEntity::UpdateWaterState, CBaseEntity::GetMoveParent, CBaseEntity::EmitSound, CBaseEntity::CalcAbsoluteVelocity, CBaseEntity::SetAbsVelocity
// callers: CBaseEntity::PhysicsCustom, CBaseEntity::PhysicsStep, CBaseEntity::PhysicsToss
// strings: "BaseEntity.EnterWater", "BaseEntity.ExitWater"
void __fastcall CBaseEntity::PhysicsCheckWaterTransition(CBaseEntity *const this)
{
  uint64 WaterType; // r12
  uint64 v3; // r13
  int m_iEFlags; // eax
  Vector vecAbsVelocity; // [rsp+0h] [rbp-30h] BYREF

  WaterType = CBaseEntity::GetWaterType(this);
  CBaseEntity::UpdateWaterState(this);
  v3 = CBaseEntity::GetWaterType(this);
  if ( CBaseEntity::GetMoveParent(this) == 0 )
  {
    if ( (v3 & 0x1C000) != 0 )
    {
      if ( WaterType == 0 )
      {
        (*(this->_vptr_IHandleEntity + 184))(this);
        CBaseEntity::EmitSound(this, "BaseEntity.EnterWater", 0.0, 0);
        m_iEFlags = this->m_iEFlags;
        if ( (m_iEFlags & 0x20000000) == 0 )
        {
          if ( (m_iEFlags & 0x1000) != 0 )
            CBaseEntity::CalcAbsoluteVelocity(this);
          *&vecAbsVelocity.x = *&this->m_vecAbsVelocity.m_Value.x;
          vecAbsVelocity.z = 0.5 * this->m_vecAbsVelocity.m_Value.z;
          CBaseEntity::SetAbsVelocity(this, &vecAbsVelocity);
        }
      }
    }
    else if ( WaterType != 0 )
    {
      CBaseEntity::EmitSound(this, "BaseEntity.ExitWater", 0.0, 0);
    }
  }
}


// CBaseEntity::SimulateAngles  (line 1790, @0x00000000022d5c80, libserver.so)  // inlines: VectorMA
// calls: CBaseEntity::GetLocalAngles, CBaseEntity::SetLocalAngles
// callers: CBaseEntity::PhysicsNoclip, CBaseEntity::PhysicsStepRunTimestep, CBaseEntity::PhysicsToss
void __fastcall CBaseEntity::SimulateAngles(CBaseEntity *const this, float a2, float flFrameTime)
{
  const QAngle *LocalAngles; // rax
  vec_t v5; // xmm0_4
  QAngle angles; // [rsp+10h] [rbp-20h] BYREF

  LocalAngles = CBaseEntity::GetLocalAngles(this);
  angles.x = (this->m_vecAngVelocity.x * a2) + LocalAngles->x;
  v5 = (a2 * this->m_vecAngVelocity.z) + LocalAngles->z;
  angles.y = (this->m_vecAngVelocity.y * a2) + LocalAngles->y;
  angles.z = v5;
  CBaseEntity::SetLocalAngles(this, &angles);
}


// CBaseEntity::PhysicsToss  (line 1802, @0x00000000022d9780, libserver.so)  // inlines: CGameTrace, Get, GetAbsVelocity, GetGroundEntity, PhysicsRunThink, RnCollisionAttr_t, VectorCompare, VectorMultiply, VectorScale, operator+=, operator==
// calls: CGameTrace::Init, CBaseEntity::SetGroundEntity, CBaseEntity::PhysicsCheckVelocity, CBaseEntity::SimulateAngles, CBaseEntity::PhysicsPushEntity, CBaseEntity::VPhysicsGetObject, CBaseEntity::GetAbsOrigin, CBaseEntity::PhysicsCheckWaterTransition, CBaseEntity::PhysicsRunThink, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::CalcAbsoluteVelocity, CEntityHandle::GetHandleEntity (16 total)
// callers: CBaseEntity::PhysicsSimulate
void __fastcall CBaseEntity::PhysicsToss(CBaseEntity *const this)
{
  int m_iEFlags; // eax
  float frametime; // xmm3_4
  vec_t v4; // xmm1_4
  vec_t v5; // xmm0_4
  float v6; // xmm1_4
  IPhysicsObject *Object; // r15
  const Vector *AbsOrigin; // rax
  const CBaseEntity *HandleEntity; // rax
  void (__fastcall *v10)(IPhysicsObject *, const Vector *, const QAngle *, __int64, float); // [rsp+0h] [rbp-100h]
  float y; // [rsp+0h] [rbp-100h]
  float v12; // [rsp+Ch] [rbp-F4h]
  float x; // [rsp+Ch] [rbp-F4h]
  Vector move; // [rsp+10h] [rbp-F0h] BYREF
  trace_t trace; // [rsp+20h] [rbp-E0h] BYREF

  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  m_iEFlags = this->m_iEFlags;
  if ( (m_iEFlags & 0x400000) == 0 )
  {
    if ( !CBaseEntity::PhysicsRunThink(this, CBaseEntity::thinkmethods_t::THINK_FIRE_ALL_FUNCTIONS) )
      return;
    m_iEFlags = this->m_iEFlags;
  }
  if ( (m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  if ( this->m_vecAbsVelocity.m_Value.z > 0.0
    || (HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hGroundEntity.m_Value)) == 0
    || !CBaseEntity::IsStandable(HandleEntity) )
  {
    CBaseEntity::SetGroundEntity(this, 0);
  }
  if ( (this->m_fFlags.m_Value & 1) == 0 )
    goto LABEL_10;
  if ( (this->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  if ( vec3_origin.x != this->m_vecAbsVelocity.m_Value.x
    || vec3_origin.y != this->m_vecAbsVelocity.m_Value.y
    || vec3_origin.z != this->m_vecAbsVelocity.m_Value.z
    || (y = vec3_origin.y,
        x = vec3_origin.x,
        CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle),
        x != this->m_vecBaseVelocity.m_Value.x)
    || y != this->m_vecBaseVelocity.m_Value.y
    || vec3_origin.z != this->m_vecBaseVelocity.m_Value.z )
  {
LABEL_10:
    CBaseEntity::PhysicsCheckVelocity(this);
    if ( this->m_MoveType.m_Value != MoveType_t::MOVETYPE_FLYGRAVITY || (this->m_fFlags.m_Value & 0x400) != 0 )
    {
      if ( (this->m_iEFlags & 0x1000) != 0 )
        CBaseEntity::CalcAbsoluteVelocity(this);
      frametime = gpGlobals->frametime;
      v4 = (this->m_vecAbsVelocity.m_Value.y + this->m_vecBaseVelocity.m_Value.y) * frametime;
      v5 = (this->m_vecBaseVelocity.m_Value.z + this->m_vecAbsVelocity.m_Value.z) * frametime;
      move.x = (this->m_vecAbsVelocity.m_Value.x + this->m_vecBaseVelocity.m_Value.x) * frametime;
      move.y = v4;
      move.z = v5;
      CBaseEntity::PhysicsCheckVelocity(this);
    }
    else
    {
      CBaseEntity::PhysicsAddGravityMove(this, &move);
    }
    CBaseEntity::SimulateAngles(this, gpGlobals->frametime, v6);
    CBaseEntity::PhysicsPushEntity(this, &move, &trace);
    if ( CBaseEntity::VPhysicsGetObject(this) != 0 )
    {
      Object = CBaseEntity::VPhysicsGetObject(this);
      v10 = *(*Object + 1840LL);
      v12 = gpGlobals->frametime;
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      v10(Object, AbsOrigin, &vec3_angle, 1, v12);
    }
    CBaseEntity::PhysicsCheckVelocity(this);
    if ( trace.startsolid )
    {
      CBaseEntity::SetAbsVelocity(this, &vec3_origin);
      CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
    }
    else if ( (this->m_pEntity->m_flags & 0x200) == 0 )
    {
      if ( trace.fraction != 1.0 )
        CBaseEntity::PerformFlyCollisionResolution(this, &trace, &move);
      CBaseEntity::PhysicsCheckWaterTransition(this);
    }
  }
}


// CBaseEntity::PhysicsRigidChild  (line 1886, @0x00000000022d61f0, libserver.so)  // inlines: GetSolid, PhysicsRunThink
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::PhysicsTouchTriggers, CBaseEntity::VPhysicsGetObject, CBaseEntity::PhysicsRunThink, CBaseEntity::GetAbsAngles
// callers: CBaseEntity::PhysicsSimulate
void __fastcall CBaseEntity::PhysicsRigidChild(CBaseEntity *const this)
{
  Vector *AbsOrigin; // rax
  bool v3; // zf
  CCollisionProperty *m_pCollision; // rdi
  char v5; // r14
  IPhysicsObject *Object; // r12
  void (__fastcall *v7)(IPhysicsObject *, const Vector *, const QAngle *, __int64, float); // r13
  float frametime; // xmm0_4
  const QAngle *v9; // r14
  const Vector *v10; // rax
  const QAngle *AbsAngles; // rax
  float v12; // [rsp+Ch] [rbp-34h]
  float v13; // [rsp+Ch] [rbp-34h]
  Vector vecPrevOrigin; // [rsp+10h] [rbp-30h] BYREF

  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v3 = (this->m_iEFlags & 0x400000) == 0;
  vecPrevOrigin = *AbsOrigin;
  if ( !v3 || CBaseEntity::PhysicsRunThink(this, CBaseEntity::thinkmethods_t::THINK_FIRE_ALL_FUNCTIONS) )
  {
    CBaseEntity::PhysicsTouchTriggers(this, &vecPrevOrigin);
    if ( CBaseEntity::VPhysicsGetObject(this) != 0 )
    {
      m_pCollision = this->m_pCollision;
      if ( m_pCollision != 0 )
      {
        v5 = (*(m_pCollision->_vptr_ICollideable + 7))(m_pCollision);
        Object = CBaseEntity::VPhysicsGetObject(this);
        v7 = *(*Object + 1840LL);
        frametime = gpGlobals->frametime;
        if ( (v5 & 0xFD) != 0 )
        {
          v13 = gpGlobals->frametime;
          AbsAngles = CBaseEntity::GetAbsAngles(this);
          frametime = v13;
          v9 = AbsAngles;
        }
        else
        {
          v9 = &vec3_angle;
        }
      }
      else
      {
        v9 = &vec3_angle;
        Object = CBaseEntity::VPhysicsGetObject(this);
        v7 = *(*Object + 1840LL);
        frametime = gpGlobals->frametime;
      }
      v12 = frametime;
      v10 = CBaseEntity::GetAbsOrigin(this);
      v7(Object, v10, v9, 1, v12);
    }
  }
}


// CBaseEntity::UpdateBaseVelocity  (line 1921, @0x00000000022d5cf0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetGroundEntity, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, SetBaseVelocity, operator!=, operator+=, operator=
// calls: CBaseEntity::AddFlag
// callers: CBaseEntity::PhysicsSimulate
void __fastcall CBaseEntity::UpdateBaseVelocity(CBaseEntity *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  vec_t v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rdi
  double v8; // xmm0_8
  Vector vecNewBaseVelocity; // [rsp+0h] [rbp-20h] BYREF

  if ( (this->m_fFlags.m_Value & 1) != 0 )
  {
    if ( this->m_hGroundEntity.m_Value.m_Index == -1 )
    {
      v2 = 0x7FFF;
      v3 = 0x7FFF;
    }
    else
    {
      v2 = this->m_hGroundEntity.m_Value.m_Index & 0x7FFF;
      v3 = v2;
    }
    LODWORD(v4) = (this->m_hGroundEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
    vecNewBaseVelocity.x = v4;
    if ( (LODWORD(v4) + 2) > 1 )
    {
      v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
      if ( v5 != 0 )
      {
        v6 = &v5[v3 & 0x1FF];
        if ( v6 != 0 && LODWORD(v4) == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && (BYTE1(m_pInstance[9].m_pEntity) & 0x10) != 0 )
          {
            (*(m_pInstance->_vptr_IHandleEntity + 176))(m_pInstance, &vecNewBaseVelocity);
            if ( (this->m_fFlags.m_Value & 0x800000) != 0 )
            {
              vecNewBaseVelocity.x = vecNewBaseVelocity.x + this->m_vecBaseVelocity.m_Value.x;
              vecNewBaseVelocity.y = vecNewBaseVelocity.y + this->m_vecBaseVelocity.m_Value.y;
              vecNewBaseVelocity.z = vecNewBaseVelocity.z + this->m_vecBaseVelocity.m_Value.z;
            }
            CBaseEntity::AddFlag(this, 0x800000);
            *&v8 = LODWORD(vecNewBaseVelocity.x);
            if ( vecNewBaseVelocity.x != this->m_vecBaseVelocity.m_Value.x
              || (*&v8 = LODWORD(vecNewBaseVelocity.y), vecNewBaseVelocity.y != this->m_vecBaseVelocity.m_Value.y)
              || (*&v8 = LODWORD(vecNewBaseVelocity.z), vecNewBaseVelocity.z != this->m_vecBaseVelocity.m_Value.z) )
            {
              (*(this->_vptr_IHandleEntity + 22))(this, 512, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v8);
              this->m_vecBaseVelocity.m_Value = vecNewBaseVelocity;
            }
          }
        }
      }
    }
  }
}


// CBaseEntity::SimulateThinkInternal  (line 1953, @0x00000000022c5d60, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, GetClassInfo, GetElapsed, GetTimebaseRegister, InTargetThread, IsEnabled, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: ThreadGetCurrentId, CVProfNode::ExitScope(void), CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CVProfile::ExitScope, _Unwind_Resume, std::terminate(void)
// strings: "Physics_SimulateEntity", "Server Game"
void __fastcall CBaseEntity::SimulateThinkInternal(CBaseEntity *const this)
{
  const char *m_pszClassname; // r14
  int m_enabled; // eax
  bool v4; // r13
  __int64 v5; // rdi
  unsigned __int64 v6; // r12
  ThreadId_t v7; // r13
  uint64 v8; // rcx
  unsigned __int64 v9; // r15
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v13; // rax
  ThreadId_t m_TargetThreadId; // [rsp+8h] [rbp-38h]

  m_pszClassname = "Physics_SimulateEntity";
  if ( vprof_scope_entity_gamephys.m_pParent->m_Value.m_nValue != 0 )
    m_pszClassname = this->m_pEntity->m_pClass->m_pClassInfo->m_pszClassname;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v4 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v9 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pszClassname != m_pCurNode->m_pszName )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, m_pszClassname, 0, "Server Game", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v13 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v13->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v9 + __rdtsc();
  }
  (*(this->_vptr_IHandleEntity + 121))(this);
  (*(this->_vptr_IHandleEntity + 119))(this);
  if ( v4 )
  {
    v6 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v7 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v7 == ThreadGetCurrentId(v5) )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v8 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v8 - v6 + __rdtsc();
  }
}


// CBaseEntity::PhysicsSimulate  (line 1975, @0x00000000022fa900, libserver.so)  // inlines: CEntityHandle, DOTAGameRules, Get, GetAbsVelocity, GetEntryIndex, GetGameMode, GetGroundEntity, GetHandleEntity, GetMoveType, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, PhysicsNone, PhysicsRunThink, Set, SetBaseVelocity, VectorMA, operator!=, operator=
// calls: CBaseEntity::GetMoveParent, CBaseEntity::RemoveFlag, CBaseEntity::PhysicsRunThink, CBaseEntity::PhysicsNoclip, CBaseEntity::PhysicsPusher, CBaseEntity::PhysicsToss, CBaseEntity::PhysicsStep, CBaseEntity::PhysicsRigidChild, CBaseEntity::PhysicsCustom, CBaseEntity::UpdateBaseVelocity, CBaseEntity::CalcAbsoluteVelocity, CBaseEntity::SetAbsVelocity
// globals: jpt_22FAA5C
void __fastcall CBaseEntity::PhysicsSimulate(CBaseEntity *const this)
{
  int tickcount; // eax
  int v3; // eax
  CBaseEntity *MoveParent; // rax
  MoveType_t m_Value; // dl
  unsigned __int16 v6; // si
  int v7; // edi
  vec_t v8; // edx
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  float x; // xmm1_4
  float v12; // xmm0_4
  vec_t v13; // xmm1_4
  vec_t v14; // xmm0_4
  CBaseEntity *pMoveParent; // [rsp+8h] [rbp-38h]
  float pMoveParenta; // [rsp+8h] [rbp-38h]
  Vector vecAbsVelocity; // [rsp+10h] [rbp-30h] BYREF

  tickcount = gpGlobals->tickcount;
  if ( this->m_nSimulationTick == tickcount )
    return;
  this->m_nSimulationTick = tickcount;
  if ( g_pGameRules == 0 )
    goto LABEL_5;
  v3 = *&g_pGameRules[6].m_szQuestName[68];
  if ( v3 != 15 && v3 != 19 )
    goto LABEL_5;
  MoveParent = CBaseEntity::GetMoveParent(this);
  m_Value = this->m_MoveType.m_Value;
  if ( m_Value == MoveType_t::MOVETYPE_NONE )
  {
    if ( MoveParent != 0 )
      goto LABEL_9;
LABEL_5:
    if ( (this->m_iEFlags & 0x400000) == 0 )
      CBaseEntity::PhysicsRunThink(this, CBaseEntity::thinkmethods_t::THINK_FIRE_ALL_FUNCTIONS);
    return;
  }
  if ( m_Value == MoveType_t::MOVETYPE_VPHYSICS )
    goto LABEL_5;
LABEL_9:
  if ( this->m_hGroundEntity.m_Value.m_Index == -1 )
  {
    v6 = 0x7FFF;
    v7 = 0x7FFF;
  }
  else
  {
    v6 = this->m_hGroundEntity.m_Value.m_Index & 0x7FFF;
    v7 = v6;
  }
  LODWORD(v8) = (this->m_hGroundEntity.m_Value.m_Index >> 15 << 15) | v6 & 0x7FFF;
  vecAbsVelocity.x = v8;
  if ( (LODWORD(v8) + 2) <= 1
    || (v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9]) == 0
    || (v10 = &v9[v7 & 0x1FF]) == 0
    || LODWORD(v8) != v10->m_EHandle.m_Index
    || v10->m_pInstance == 0 )
  {
    pMoveParent = MoveParent;
    CBaseEntity::RemoveFlag(this, 1);
    MoveParent = pMoveParent;
  }
  if ( MoveParent != 0 )
  {
    (*(MoveParent->_vptr_IHandleEntity + 120))(MoveParent);
  }
  else
  {
    CBaseEntity::UpdateBaseVelocity(this);
    if ( (this->m_fFlags.m_Value & 0x800000) == 0 )
    {
      x = this->m_vecBaseVelocity.m_Value.x;
      if ( x != vec3_origin.x
        || vec3_origin.y != this->m_vecBaseVelocity.m_Value.y
        || vec3_origin.z != this->m_vecBaseVelocity.m_Value.z )
      {
        v12 = gpGlobals->frametime * 0.5 + 1.0;
        if ( (this->m_iEFlags & 0x1000) != 0 )
        {
          pMoveParenta = gpGlobals->frametime * 0.5 + 1.0;
          CBaseEntity::CalcAbsoluteVelocity(this);
          x = this->m_vecBaseVelocity.m_Value.x;
          v12 = pMoveParenta;
        }
        vecAbsVelocity.x = (x * v12) + this->m_vecAbsVelocity.m_Value.x;
        v13 = (this->m_vecBaseVelocity.m_Value.y * v12) + this->m_vecAbsVelocity.m_Value.y;
        v14 = (v12 * this->m_vecBaseVelocity.m_Value.z) + this->m_vecAbsVelocity.m_Value.z;
        vecAbsVelocity.y = v13;
        vecAbsVelocity.z = v14;
        CBaseEntity::SetAbsVelocity(this, &vecAbsVelocity);
        if ( vec3_origin.x != this->m_vecBaseVelocity.m_Value.x
          || vec3_origin.y != this->m_vecBaseVelocity.m_Value.y
          || vec3_origin.z != this->m_vecBaseVelocity.m_Value.z )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 512, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_vecBaseVelocity.m_Value = vec3_origin;
        }
      }
    }
    CBaseEntity::RemoveFlag(this, 0x800000);
  }
  switch ( this->m_MoveType.m_Value )
  {
    case MoveType_t::MOVETYPE_NONE:
      CBaseEntity::PhysicsRigidChild(this);
      break;
    case MoveType_t::MOVETYPE_STEP:
      CBaseEntity::PhysicsStep(this);
      break;
    case MoveType_t::MOVETYPE_FLY:
    case MoveType_t::MOVETYPE_FLYGRAVITY:
      CBaseEntity::PhysicsToss(this);
      break;
    case MoveType_t::MOVETYPE_PUSH:
      CBaseEntity::PhysicsPusher(this);
      break;
    case MoveType_t::MOVETYPE_NOCLIP:
      CBaseEntity::PhysicsNoclip(this);
      break;
    case MoveType_t::MOVETYPE_CUSTOM:
      CBaseEntity::PhysicsCustom(this);
      break;
    default:
      return;
  }
}


// CBaseEntity::PhysicsRunThink  (line 2138, @0x00000000022d6050, libserver.so)
// calls: CBaseEntity::PhysicsRunSpecificThink
// callers: CBaseEntity::PhysicsRunThink, CBaseEntity::PhysicsNone, CBaseEntity::PhysicsNoclip, CBaseEntity::PhysicsRigidChild, CBaseEntity::PhysicsCustom, CBaseEntity::StepSimulationThink, CBaseEntity::PhysicsStep, CBaseEntity::PhysicsToss, CPlayerMove::RunPreThink, CBaseEntity::PhysicsPusher, CBaseEntity::PhysicsSimulate
bool __fastcall CBaseEntity::PhysicsRunThink(CBaseEntity *const this, CBaseEntity::thinkmethods_t thinkMethod)
{
  __int64 v5; // r13
  int v6; // ebx

  if ( thinkMethod != CBaseEntity::thinkmethods_t::THINK_FIRE_ALL_BUT_BASE )
  {
    if ( !CBaseEntity::PhysicsRunSpecificThink(this, -1, 0x3A9uLL) )
      return 0;
    if ( thinkMethod == CBaseEntity::thinkmethods_t::THINK_FIRE_BASE_ONLY )
      return 1;
  }
  v5 = 0;
  v6 = 0;
  if ( this->m_aThinkFunctions.m_Size <= 0 )
    return 1;
  while ( CBaseEntity::PhysicsRunSpecificThink(this, v6, this->m_aThinkFunctions.m_Memory.m_pMemory[v5].m_think) )
  {
    ++v6;
    ++v5;
    if ( v6 >= this->m_aThinkFunctions.m_Size )
      return 1;
  }
  return 0;
}


// CBaseEntity::PhysicsRunThink  (line 2138, @0x00000000022d60f0, libserver.so)
// calls: CBaseEntity::PhysicsRunThink
// callers: CDOTAPlayer::PhysicsSimulate
bool __fastcall CBaseEntity::PhysicsRunThink(CBaseEntity *const this, CBaseEntity::thinkmethods_t thinkMethod)
{
  return (this->m_iEFlags & 0x400000) != 0 || CBaseEntity::PhysicsRunThink(this, thinkMethod);
}


// CBaseEntity::PhysicsRunSpecificThink  (line 2183, @0x00000000022d5e90, libserver.so)  // inlines: curtime
// calls: CBaseEntity::GetNextThinkTick, CBaseEntity::SetNextThink, CBaseEntity::PhysicsDispatchThink, CBaseEntity::SetLastThink
// callers: CBaseEntity::PhysicsRunThink
bool __fastcall CBaseEntity::PhysicsRunSpecificThink(CBaseEntity *const this, int nContextIndex, BASEPTR thinkFunc)
{
  int NextThinkTick; // esi
  bool result; // al
  void (*pfn)(CGameEntity *); // rdx
  __int64 delta; // rcx
  CGlobalVars *v9; // r14
  float v10; // xmm0_4
  double v11; // xmm1_8
  float v12; // xmm1_4
  CGlobalVars *v13; // r13
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc v15; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v17; // rax
  void (*v18)(CGameEntity *); // [rsp+0h] [rbp-40h]
  BASEPTR thinktimea; // [rsp+10h] [rbp-30h]
  void (*thinktimeb)(CGameEntity *); // [rsp+10h] [rbp-30h]
  __int64 thinkFunca; // [rsp+18h] [rbp-28h]

  NextThinkTick = CBaseEntity::GetNextThinkTick(this, nContextIndex);
  if ( NextThinkTick <= 0 )
    return 1;
  result = 1;
  pfn = thinkFunc.__pfn;
  delta = thinkFunc.__delta;
  v9 = gpGlobals;
  if ( NextThinkTick <= gpGlobals->tickcount )
  {
    v10 = NextThinkTick * gpGlobals->interval_per_tick;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v18 = thinkFunc.__pfn;
        *&thinkFunc.__pfn = NextThinkTick * gpGlobals->interval_per_tick;
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        pfn = v18;
        delta = thinkFunc.__delta;
        v10 = *&thinkFunc.__pfn;
      }
    }
    *&v11 = LODWORD(v9->m_flCurrentTime);
    if ( *&v11 > v10 && gpGlobals != 0 && !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v17 = gpGlobals->m_pfnWarningFunc;
      if ( v17 != 0 )
      {
        thinktimeb = pfn;
        thinkFunca = delta;
        v17(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        pfn = thinktimeb;
        delta = thinkFunca;
      }
    }
    thinktimea = __PAIR128__(delta, pfn);
    CBaseEntity::SetNextThink(this, nContextIndex, COERCE_DOUBLE(3212836864LL), v11);
    CBaseEntity::PhysicsDispatchThink(this, nContextIndex, thinktimea);
    v13 = gpGlobals;
    m_flCurrentTime = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v15 = gpGlobals->m_pfnWarningFunc;
        if ( v15 != 0 )
          (v15)(1, 0.0);
      }
      m_flCurrentTime = v13->m_flCurrentTime;
    }
    CBaseEntity::SetLastThink(this, nContextIndex, m_flCurrentTime, v12);
    return ((this->m_pEntity->m_flags >> 9) ^ 1) & 1;
  }
  return result;
}


// CBaseEntity::SetGroundEntity  (line 2210, @0x00000000022d6330, libserver.so)  // inlines: CEntityHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, ToBasePlayer, operator!=, operator=
// calls: CBaseEntity::PhysicsNotifyOtherOfGroundRemoval, CBaseEntity::RemoveFlag, CBaseEntity::VPhysicsGetObject, CBaseEntity::AddEntityToGroundList, CBaseEntity::AddFlag
// callers: CBaseCombatWeapon::Drop, CBaseEntity::UpdateOnRemove, CBaseEntity::Teleport, CShower::Think, CBreakable::ResetOnGroundFlags, CGameMovement::SetGroundEntity, CBaseEntity::PhysicsTryMove, CBaseEntity::PhysicsStepRecheckGround, CBaseEntity::ResolveFlyCollisionBounce, CBaseEntity::ResolveFlyCollisionSlide, CBaseEntity::ResolveFlyCollisionCustom, CBasePlayer::ForceRespawn (28 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseEntity::SetGroundEntity(CBaseEntity *const this, CBaseEntity *ground)
{
  __int64 m_Index; // rcx
  __int64 v5; // rsi
  unsigned __int16 v6; // dx
  int v7; // edi
  CBaseEntity *m_pInstance; // r8
  int v9; // eax
  CEntitySystem *v10; // r9
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  uint32 v13; // edx
  unsigned __int16 v14; // cx
  int v15; // edi
  int v16; // eax
  CEntityIdentity *v17; // rcx
  CBaseEntity *v18; // r13
  bool v19; // r14
  CEntityIdentity *v20; // rcx
  CBaseEntity *v21; // rcx
  CEntityIdentity *v22; // rax
  CEntityIdentity *v23; // rax
  bool v24; // r15
  IPhysicsObject *Object; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v27; // eax
  __int16 v28; // cx

  m_Index = this->m_hGroundEntity.m_Value.m_Index;
  v5 = this->m_hGroundEntity.m_Value.m_Index >> 15;
  if ( m_Index == -1 )
  {
    v6 = 0x7FFF;
    v7 = 0x7FFF;
  }
  else
  {
    v6 = this->m_hGroundEntity.m_Value.m_Index & 0x7FFF;
    v7 = v6;
  }
  m_pInstance = 0;
  v9 = (v5 << 15) | v6 & 0x7FFF;
  v10 = g_pEntitySystem;
  if ( (v9 + 2) > 1 )
  {
    v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
    if ( v11 != 0 )
    {
      v12 = &v11[v7 & 0x1FF];
      if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
        m_pInstance = v12->m_pInstance;
    }
  }
  if ( ground != m_pInstance )
  {
    v13 = m_Index;
    if ( ground == 0 )
      goto LABEL_12;
    if ( (*(this->_vptr_IHandleEntity + 140))(this, v5, m_Index, m_Index, m_pInstance, g_pEntitySystem) != 0
      && ground->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS )
    {
      if ( (*(this->_vptr_IHandleEntity + 140))(this) == 0 )
      {
        CBaseEntity::VPhysicsGetObject(ground);
        v13 = this->m_hGroundEntity.m_Value.m_Index;
        v10 = g_pEntitySystem;
        LODWORD(v5) = v13 >> 15;
LABEL_12:
        if ( v13 == -1 )
        {
          v14 = 0x7FFF;
          v15 = 0x7FFF;
        }
        else
        {
          v14 = this->m_hGroundEntity.m_Value.m_Index & 0x7FFF;
          v15 = v14;
        }
        v16 = (v5 << 15) | v14 & 0x7FFF;
        if ( (v16 + 2) > 1 && (v17 = v10->m_EntityList.m_pIdentityChunks[v15 >> 9]) != 0 )
        {
          v18 = 0;
          v19 = 1;
          v20 = &v17[v15 & 0x1FF];
          if ( v20 != 0 && v16 == v20->m_EHandle.m_Index )
          {
            v18 = v20->m_pInstance;
            v19 = v20->m_pInstance == 0;
          }
        }
        else
        {
          v19 = 1;
          v18 = 0;
        }
        v21 = 0;
        if ( v13 + 2 > 1 )
        {
          v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hGroundEntity.m_Value.m_Index) >> 9)
                                                               & 0x3F];
          if ( v22 != 0 )
          {
            v23 = &v22[this->m_hGroundEntity.m_Value.m_Index & 0x1FF];
            if ( v23 != 0 && v23->m_EHandle.m_Index == v13 )
              v21 = v23->m_pInstance;
          }
        }
        if ( ground != v21 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 548, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          if ( ground != 0 )
          {
            m_pEntity = ground->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v27 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              if ( m_pEntity->m_EHandle.m_Index == -1 )
                v28 = 0x7FFF;
              else
                v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LOWORD(this->m_hGroundEntity.m_Value.m_Index) = v28 | this->m_hGroundEntity.m_Value.m_Index & 0x8000;
              v24 = ground != 0;
              this->m_hGroundEntity.m_Value.m_Index = (v27 << 15) | this->m_hGroundEntity.m_Value.m_Index & 0x7FFF;
              if ( v19 )
              {
LABEL_44:
                if ( v24 )
                {
                  CBaseEntity::AddEntityToGroundList(ground, this);
                  goto LABEL_37;
                }
              }
LABEL_26:
              if ( v18 != 0 && ground == 0 )
              {
                CBaseEntity::PhysicsNotifyOtherOfGroundRemoval(this, v18);
LABEL_29:
                CBaseEntity::RemoveFlag(this, 1);
LABEL_30:
                (*(this->_vptr_IHandleEntity + 175))(this, v18, ground);
                return;
              }
              CBaseEntity::PhysicsNotifyOtherOfGroundRemoval(this, v18);
              CBaseEntity::AddEntityToGroundList(ground, this);
              if ( !v24 )
                goto LABEL_29;
LABEL_37:
              CBaseEntity::AddFlag(this, 1);
              goto LABEL_30;
            }
          }
          this->m_hGroundEntity.m_Value.m_Index = -1;
        }
        v24 = ground != 0;
        if ( !v19 )
          goto LABEL_26;
        goto LABEL_44;
      }
      Object = CBaseEntity::VPhysicsGetObject(ground);
      if ( Object != 0 && ((*(*Object + 1296LL))(Object) & 4) != 0 )
        (*(this->_vptr_IHandleEntity + 480))(this, ground);
    }
    v13 = this->m_hGroundEntity.m_Value.m_Index;
    v10 = g_pEntitySystem;
    LODWORD(v5) = v13 >> 15;
    goto LABEL_12;
  }
}


// CBaseEntity::GetGroundEntity  (line 2268, @0x00000000022d9b50, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// callers: CBreakableProp::BreakablePropTouch, CBaseAnimatingController::UpdateStepOrigin, CBaseCombatCharacter::VPhysicsShadowCollision, CBasePlayer::SmoothViewOnStairs, CBasePlayer::FindUseEntity, CBasePlayer::PlayerUse, DescribeGroundList, CBreakable::BreakTouch, CGameMovement::WaterMove, CGameMovement::Friction, CGameMovement::HandleDuckingSpeedCrop, CGameMovement::CheckJumpButton (34 total)
CBaseEntity *__fastcall CBaseEntity::GetGroundEntity(CBaseEntity *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // edx
  CBaseEntity *result; // rax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx

  if ( this->m_hGroundEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hGroundEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hGroundEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  result = 0;
  if ( v3 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v2 & 0x1FF];
      if ( v6 != 0 && v3 == v6->m_EHandle.m_Index )
        return v6->m_pInstance;
    }
  }
  return result;
}


// CBaseEntity::StartGroundContact  (line 2273, @0x00000000022d9c00, libserver.so)
// calls: CBaseEntity::AddFlag
void __fastcall CBaseEntity::StartGroundContact(CBaseEntity *const this, CBaseEntity *ground)
{
  CBaseEntity::AddFlag(this, 1);
}


// CBaseEntity::EndGroundContact  (line 2279, @0x00000000022d9c10, libserver.so)
// calls: CBaseEntity::RemoveFlag
void __fastcall CBaseEntity::EndGroundContact(CBaseEntity *const this, CBaseEntity *ground)
{
  CBaseEntity::RemoveFlag(this, 1);
}


// CBaseEntity::SetGroundChangeTime  (line 2286, @0x00000000022d9c20, libserver.so)
void __fastcall CBaseEntity::SetGroundChangeTime(CBaseEntity *const this, float a2, float flTime)
{
  this->m_flGroundChangeTime = a2;
}


// CBaseEntity::GetGroundChangeTime  (line 2291, @0x00000000022d9c30, libserver.so)
float __fastcall CBaseEntity::GetGroundChangeTime(CBaseEntity *const this)
{
  return this->m_flGroundChangeTime;
}


// CBaseEntity::WakeRestingObjects  (line 2302, @0x00000000022d9c40, libserver.so)
// calls: CBaseEntity::PhysicsRemoveGroundList
void __fastcall CBaseEntity::WakeRestingObjects(CBaseEntity *const this)
{
  CBaseEntity::PhysicsRemoveGroundList(this);
}


// CBaseEntity::HasNPCsOnIt  (line 2313, @0x00000000022d9c50, libserver.so)  // inlines: Get, GetDataObject, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator bool, operator->
// calls: CEntityIdentity::GetDataObject
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBaseEntity::HasNPCsOnIt(CBaseEntity *const this)
{
  unsigned __int16 *DataObject; // rax
  unsigned __int16 *v2; // r12
  unsigned __int16 *v3; // rbx
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx

  DataObject = CEntityIdentity::GetDataObject(this->m_pEntity, 0);
  v2 = DataObject;
  if ( DataObject == 0 )
    return 0;
  v3 = *(DataObject + 1);
  if ( v3 == DataObject )
    return 0;
  while ( 1 )
  {
    if ( (*v3 + 2) > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v3 >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[*v3 & 0x1FF];
        if ( v5 != 0
          && *v3 == v5->m_EHandle.m_Index
          && (*(v5->m_pInstance->_vptr_IHandleEntity + 144))(v5->m_pInstance) != 0 )
        {
          break;
        }
      }
    }
    v3 = *(v3 + 1);
    if ( v3 == v2 )
      return 0;
  }
  return 1;
}


// Physics_UpdateStepSimulation  (line 2372, @0x00000000022ee300, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CellFromCoord, CellInCoord, ConvertToExternalMemory, Float2Int, GetDataObject, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetStepSimulationAngles, GetStepSimulationOrigin, IndexToIdentity, Init, IsExternallyAllocated, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, Set, V_memcpy, memcpy, operator CBaseEntity*, operator!=, operator=, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CEntityIdentity::GetDataObject, CBaseEntity::ComputeStepSimulationNetwork, CBaseEntity::UseStepSimulationNetworkOrigin, CBaseEntity::UseStepSimulationNetworkAngles, CGameSceneNode::MarkNetworkStateChangedForOrigin, CGameSceneNode::MarkNetworkStateChangedForLocalAngles, CUtlMemory<CEntityInstance*, int>::Purge, CUtlVectorBase<CEntityInstance*, CUtlMemoryFixedGrowable<CEntityInstance*, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: Physics_RunThinkFunctions
// globals: CEntityHandle::gm_pEntityList
void __cdecl Physics_UpdateStepSimulation()
{
  int v0; // eax
  unsigned __int64 v1; // r12
  CEntityIdentity *m_pEntity; // rax
  int v3; // edx
  unsigned __int64 m_Index_low; // rcx
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CBaseEntity *m_pInstance; // r14
  void *DataObject; // rax
  float *v10; // rbx
  float v11; // xmm6_4
  float v12; // xmm7_4
  double v13; // kr00_8
  int v14; // eax
  float x; // xmm0_4
  vec_t v16; // xmm1_4
  __int64 v17; // rbx
  int v18; // esi
  bool v19; // zf
  CGameSceneNode *m_pSceneNode; // r15
  uint32 v21; // eax
  float v22; // xmm1_4
  double v23; // xmm0_8
  __int64 v24; // rax
  vec_t v25; // xmm1_4
  int v26; // edx
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // [rsp+8h] [rbp-4E8h]
  float v32; // [rsp+Ch] [rbp-4E4h]
  __int64 v33; // [rsp+10h] [rbp-4E0h]
  float v34; // [rsp+18h] [rbp-4D8h]
  float z; // [rsp+1Ch] [rbp-4D4h]
  unsigned __int16 prevCell[3]; // [rsp+30h] [rbp-4C0h]
  uint16 postCell[8]; // [rsp+40h] [rbp-4B0h] BYREF
  Vector *out_v; // [rsp+50h] [rbp-4A0h] BYREF
  QAngle *out_a; // [rsp+58h] [rbp-498h] BYREF
  Vector vPrevStepSimulationOrigin; // [rsp+60h] [rbp-490h]
  Vector vPostStepSimulationOrigin; // [rsp+70h] [rbp-480h]
  double v42; // [rsp+80h] [rbp-470h]
  vec_t v43; // [rsp+88h] [rbp-468h]
  double v44; // [rsp+90h] [rbp-460h]
  float v45; // [rsp+98h] [rbp-458h]
  CStepSimulationEntityList list; // [rsp+A0h] [rbp-450h] BYREF
  unsigned __int64 v47; // [rsp+4B8h] [rbp-38h]

  list.m_Size = 0;
  v47 = __readfsqword(0x28u);
  list.m_Memory.m_nAllocationCount = 128;
  list.m_Memory.m_pMemory = &list.m_Memory.m_FixedMemory;
  list.m_Memory.m_nGrowSize = 0x80000000;
  v0 = (*g_pStepSimulationManager->_vptr_IStepSimulationManager)(g_pStepSimulationManager, &list);
  if ( v0 > 0 )
  {
    v1 = 0;
    v33 = 8LL * (v0 - 1) + 8;
    while ( 1 )
    {
      m_pEntity = list.m_Memory.m_pMemory[v1 / 8]->m_pEntity;
      if ( m_pEntity == 0 )
        goto LABEL_3;
      v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      m_Index_low = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
      {
        m_Index_low = LOWORD(m_pEntity->m_EHandle.m_Index);
        LOWORD(m_Index_low) = m_Index_low & 0x7FFF;
      }
      LOWORD(v44) = m_Index_low | LOWORD(v44) & 0x8000;
      v5 = (v3 << 15) | LOWORD(v44) & 0x7FFF;
      LODWORD(v44) = v5;
      if ( (v5 + 2) <= 1 )
        goto LABEL_3;
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
      if ( v6 == 0 )
        goto LABEL_3;
      v7 = &v6[m_Index_low & 0x1FF];
      if ( v7 == 0 )
        goto LABEL_3;
      if ( v5 != v7->m_EHandle.m_Index )
        goto LABEL_3;
      m_pInstance = v7->m_pInstance;
      if ( v7->m_pInstance == 0 )
        goto LABEL_3;
      DataObject = CEntityIdentity::GetDataObject(m_pInstance->m_pEntity, 2);
      v10 = DataObject;
      if ( DataObject == 0 )
        goto LABEL_3;
      v11 = *(DataObject + 49);
      v12 = *(DataObject + 50);
      v34 = *(DataObject + 48);
      vPrevStepSimulationOrigin = *(DataObject + 15);
      v32 = v11;
      v31 = v12;
      *prevCell = *(DataObject + 51);
      prevCell[2] = *(DataObject + 104);
      CBaseEntity::ComputeStepSimulationNetwork(m_pInstance, DataObject);
      if ( CBaseEntity::UseStepSimulationNetworkOrigin(m_pInstance, &out_v, postCell) )
      {
        vPostStepSimulationOrigin = *out_v;
      }
      else
      {
        v23 = (*(m_pInstance->_vptr_IHandleEntity + 193))(m_pInstance);
        v42 = v23;
        v24 = 0;
        v43 = v25;
        vPostStepSimulationOrigin.z = v25;
        *&vPostStepSimulationOrigin.x = v23;
        if ( *&v23 >= 0.0 )
        {
LABEL_41:
          LOWORD(v26) = *&v23 / 256 + 64;
          goto LABEL_42;
        }
        while ( 1 )
        {
          v26 = (*&v23 + 16384.0) / 256;
LABEL_42:
          postCell[v24] = v26;
          v27 = *(&vPostStepSimulationOrigin.x + 1 * v24);
          v28 = abs32((v26 << 8) - 0x4000);
          if ( v27 < 0.0 )
            v29 = v28 + v27;
          else
            v29 = v27 - v28;
          v30 = 256.0;
          if ( v29 <= 256.0 )
            v30 = fmaxf(0.0, v29);
          *(&vPostStepSimulationOrigin.x + 1 * v24++) = v30;
          if ( v24 == 3 )
            break;
          *&v23 = *(&vPostStepSimulationOrigin.x + 1 * v24);
          if ( *&v23 >= 0.0 )
            goto LABEL_41;
        }
      }
      if ( CBaseEntity::UseStepSimulationNetworkAngles(m_pInstance, &out_a) )
      {
        z = out_a->z;
        v13 = *&out_a->x;
      }
      else
      {
        v44 = (*(m_pInstance->_vptr_IHandleEntity + 194))(m_pInstance);
        v45 = v22;
        z = v22;
        v13 = v44;
      }
      v14 = *postCell;
      x = vPostStepSimulationOrigin.x;
      v10[46] = vPostStepSimulationOrigin.y;
      *(v10 + 51) = v14;
      v16 = vPostStepSimulationOrigin.z;
      LOWORD(v14) = postCell[2];
      v10[45] = x;
      v10[47] = v16;
      *(v10 + 104) = v14;
      *(v10 + 24) = v13;
      v10[50] = z;
      v17 = 0;
      v18 = 0;
      v19 = x == vPrevStepSimulationOrigin.x;
      m_pSceneNode = m_pInstance->m_CBodyComponent->m_pSceneNode;
      while ( !v19 )
      {
        CGameSceneNode::MarkNetworkStateChangedForOrigin(m_pSceneNode, v18);
        if ( ++v17 == 3 )
          goto LABEL_35;
LABEL_22:
        v18 = v17;
        v19 = *(&vPostStepSimulationOrigin.x + v17) == *(&vPrevStepSimulationOrigin.x + v17);
      }
      if ( postCell[v17] != prevCell[v17] )
        CGameSceneNode::MarkNetworkStateChangedForOrigin(m_pSceneNode, v17);
      if ( ++v17 != 3 )
        goto LABEL_22;
LABEL_35:
      if ( *&v13 != v34 || *(&v13 + 1) != v32 || z != v31 )
      {
        CGameSceneNode::MarkNetworkStateChangedForLocalAngles(m_pSceneNode);
        v1 += 8LL;
        if ( v1 == v33 )
          break;
      }
      else
      {
LABEL_3:
        v1 += 8LL;
        if ( v1 == v33 )
          break;
      }
    }
  }
  list.m_Size = 0;
  if ( list.m_Memory.m_nAllocationCount < 0 )
  {
    v21 = list.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v21 = list.m_Memory.m_nGrowSize & 0xC0000000;
    if ( list.m_Memory.m_pMemory != &list.m_Memory.m_FixedMemory )
    {
      if ( list.m_Memory.m_pMemory != 0 && v21 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return;
    }
  }
  if ( v21 == 0 )
    CUtlMemory<CEntityInstance *,int>::Purge(&list.m_Memory);
}


// Physics_RunThinkFunctions  (line 2432, @0x00000000022ee8f0, libserver.so)  // inlines: BitVec_FindNextSetBit<int, false>, CBitVec, CBitVecT, CEntityHandle, ClearAll, FindNextSetBit, FirstBitInWord, FirstBitInWordThatIsKnownToBeNonZero, GetEHandle, GetEndMask, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetStartBitMask, IndexToIdentity, Init, LookupEntity, LookupEntityByIndexUnsafe, curtime, memset, operator CBaseEntity*, setcurtime
// calls: CGameEntitySystem::CleanupDeleteList, CEntitySystem::SuppressDestroyImmediate, memset, Physics_UpdateStepSimulation
// callers: CSource2Server::GameFrame
// globals: CEntityHandle::gm_pEntityList, GetEndMask(int)::bitStringEndMasks, GetStartBitMask(int)::g_StartMask
void __fastcall Physics_RunThinkFunctions(bool simulating)
{
  CGlobalVars *v2; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  __int64 v4; // r9
  int v5; // r15d
  CEntitySystem **v6; // r8
  CEntityIdentity *v7; // rcx
  unsigned __int16 v8; // ax
  int v9; // edx
  __int64 v10; // rcx
  CEntityIdentity *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  CEntityIdentity *v15; // rax
  int v16; // r15d
  __int64 v17; // rax
  unsigned int *v18; // rsi
  unsigned int v19; // ecx
  CSimThinkEntityList *v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // ecx
  CEntityInstance *m_pInstance; // rdi
  CEntitySystem **v24; // [rsp+0h] [rbp-1050h]
  float m_flCurrentTime; // [rsp+Ch] [rbp-1044h]
  int nFirstSetBit; // [rsp+18h] [rbp-1038h] BYREF
  int nLastSetBit; // [rsp+1Ch] [rbp-1034h] BYREF
  CSimThinkEntityList list; // [rsp+20h] [rbp-1030h] BYREF

  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    m_flCurrentTime = v2->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  CGameEntitySystem::CleanupDeleteList(g_pGameEntitySystem);
  CEntitySystem::SuppressDestroyImmediate(g_pGameEntitySystem, 1);
  if ( simulating )
  {
    memset(&list, 0, sizeof(list));
    (*g_pSimThinkManager->_vptr_ISimulationThinkManager)(g_pSimThinkManager, &list, &nFirstSetBit, &nLastSetBit);
    v5 = nFirstSetBit;
    if ( nFirstSetBit > nLastSetBit )
    {
LABEL_31:
      Physics_UpdateStepSimulation();
      goto LABEL_5;
    }
    v6 = &g_pEntitySystem;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v7 = 0;
              if ( (v5 >> 9) <= 0x3F )
              {
                v7 = (*v6)->m_EntityList.m_pIdentityChunks[v5 >> 9];
                if ( v7 != 0 )
                  v7 += v5 & 0x1FF;
              }
              if ( v7->m_EHandle.m_Index == -1 )
              {
                v8 = 0x7FFF;
                v9 = 0x7FFF;
              }
              else
              {
                v8 = v7->m_EHandle.m_Index & 0x7FFF;
                v9 = v8;
              }
              v10 = (((v7->m_EHandle.m_Index >> 15) - (v7->m_flags & 1)) << 15) | v8 & 0x7FFF;
              if ( (v10 + 2) > 1 )
              {
                v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v9 >> 9];
                if ( v11 != 0 )
                {
                  v12 = v9 & 0x1FF;
                  v13 = 8 * v12;
                  v14 = v12;
                  v15 = &v11[v14];
                  if ( v15 != 0 && v10 == v15->m_EHandle.m_Index )
                  {
                    m_pInstance = v15->m_pInstance;
                    if ( v15->m_pInstance != 0 && (m_pInstance->m_pEntity->m_flags & 0x200) == 0 )
                    {
                      v24 = v6;
                      gpGlobals->m_flCurrentTime = m_flCurrentTime;
                      (*(m_pInstance->_vptr_IHandleEntity + 120))(m_pInstance, v13, v14 * 120, v10, v6, v4);
                      v6 = v24;
                    }
                  }
                }
              }
              if ( v5 >= nLastSetBit )
                goto LABEL_31;
              v16 = v5 + 1;
              v4 = GetEndMask(int)::bitStringEndMasks[0];
              if ( v16 <= 0x7FFF )
                break;
              v5 = -1;
            }
            v17 = v16 >> 5;
            v18 = &list.m_Ints[v17];
            v19 = GetStartBitMask(int)::g_StartMask[v16 & 0x1F] & *v18;
            if ( v18 != &list.m_Ints[1023] )
              break;
            v22 = GetEndMask(int)::bitStringEndMasks[0] & v19;
            v5 = -1;
            if ( v22 != 0 )
            {
              _BitScanForward(&v22, v22);
              v5 = v22 + 32736;
            }
          }
          if ( v19 == 0 )
            break;
          _BitScanForward(&v19, v19);
          v5 = v19 + 32 * v17;
        }
        v20 = (v18 + 1);
        if ( v18 + 1 != &list.m_Ints[1023] )
          break;
LABEL_29:
        v4 = list.m_Ints[1023] & GetEndMask(int)::bitStringEndMasks[0];
        v5 = -1;
        if ( v4 != 0 )
        {
          _BitScanForward(&v4, v4);
          v4 = v4;
          v5 = v4 + 32736;
        }
      }
      v21 = v18[1];
      if ( v21 == 0 )
      {
        do
        {
          v20 = (v20 + 4);
          if ( v20 == &list.m_Ints[1023] )
            goto LABEL_29;
          v21 = v20->m_Ints[0];
        }
        while ( v20->m_Ints[0] == 0 );
      }
      _BitScanForward(&v21, v21);
      v5 = v21 + 32 * ((v20 - &list) >> 2);
    }
  }
LABEL_5:
  CEntitySystem::SuppressDestroyImmediate(g_pGameEntitySystem, 0);
  gpGlobals->m_flCurrentTime = m_flCurrentTime;
}


