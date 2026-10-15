// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/collisionproperty.cpp:35
class CDirtySpatialPartitionEntityList : public CAutoGameSystem {
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
	CDirtySpatialPartitionEntityList(const CDirtySpatialPartitionEntityList &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDirtySpatialPartitionEntityList *);
	CDirtySpatialPartitionEntityList();
	virtual bool Init();
	virtual void Shutdown();
	virtual void GameShutdown(const EventGameShutdown_t &);
	void UpdateDirtySpatialPartitionEntities();
	void AddEntity(CBaseEntity *);
	virtual ~CDirtySpatialPartitionEntityList();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[0] Init
	// vtable[2] Shutdown
	// vtable[4] GameShutdown
	// sizeof = 80
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDirtySpatialPartitionEntityList::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 37, @0x00000000021b1150, libserver.so)
void __fastcall CDirtySpatialPartitionEntityList::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDirtySpatialPartitionEntityList *const this)
{
  ;
}


// CDirtySpatialPartitionEntityList::DoesGameSystemReallocate  (line 37, @0x00000000021b1160, libserver.so)
// globals: CDirtySpatialPartitionEntityList::sm_Factory
bool __fastcall CDirtySpatialPartitionEntityList::DoesGameSystemReallocate(
        const CDirtySpatialPartitionEntityList *const this)
{
  return (*(CDirtySpatialPartitionEntityList::sm_Factory->_vptr_IGameSystemFactory + 8))(CDirtySpatialPartitionEntityList::sm_Factory);
}


// CDirtySpatialPartitionEntityList::SetGameSystemGlobalPtrs  (line 37, @0x00000000021b1180, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDirtySpatialPartitionEntityList::sm_Factory
void __fastcall CDirtySpatialPartitionEntityList::SetGameSystemGlobalPtrs(
        CDirtySpatialPartitionEntityList *const this,
        void *pValue)
{
  if ( CDirtySpatialPartitionEntityList::sm_Factory != 0 )
    (*(CDirtySpatialPartitionEntityList::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CDirtySpatialPartitionEntityList::sm_Factory,
      pValue);
}


// CDirtySpatialPartitionEntityList::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 67, @0x00000000021962e0, libserver.so)
void __cdecl CDirtySpatialPartitionEntityList::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// UpdateDirtySpatialPartitionEntities  (line 73, @0x000000000219d570, libserver.so)
// calls: CDirtySpatialPartitionEntityList::UpdateDirtySpatialPartitionEntities
// callers: CPhysicsGameSystem::PullKinematicTransformsWorker, CPhysicsGameSystem::OnSimulate, CGamePhysicsQueryInterface::SweepBodyMultiple, CGamePhysicsQueryInterface::SweepShapeMultiple, CGamePhysicsQueryInterface::CheckOverlap, CGamePhysicsQueryInterface::SweepBody, CGamePhysicsQueryInterface::SweepShape, CGamePhysicsQueryInterface::LinearCast, CGamePhysicsQueryInterface::CheckShapeOverlapAgainstEntity, CGamePhysicsQueryInterface::CollideShape, CGamePhysicsQueryInterface::UpdateEntitiesBeforeQuery, CGamePhysicsQueryInterface::TraceRay (26 total)
// globals: s_DirtyKDTree
void __cdecl UpdateDirtySpatialPartitionEntities()
{
  CDirtySpatialPartitionEntityList::UpdateDirtySpatialPartitionEntities(&s_DirtyKDTree);
}


// CDirtySpatialPartitionEntityList::CDirtySpatialPartitionEntityList  (line 82, @0x00000000021962f0, libserver.so)  // inlines: CTSItemList, CTSListBase, CThreadFastMutex, Detach, Purge, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadPause
// calls: operator delete
void __fastcall CDirtySpatialPartitionEntityList::CDirtySpatialPartitionEntityList(
        CDirtySpatialPartitionEntityList *const this)
{
  unsigned __int64 v2; // rcx
  TSLNodeBase_t *Next; // rdi
  TSLHead_t m_Head; // rt0
  TSLNodeBase_t *v5; // rbx

  this->_vptr_IGameSystem = &off_4010430;
  this->m_DirtyEntities.m_Head.value64x128 = 0u;
  this->m_DirtyEntities.m_FreeList.m_Head.value64x128 = 0u;
  this->m_partitionMutex.m_ownerID = 0;
  this->m_partitionMutex.m_depth = 0;
  _mm_pause();
  v2 = 0;
  while ( 1 )
  {
    _mm_pause();
    Next = this->m_DirtyEntities.m_FreeList.m_Head.value.Next;
    if ( Next == 0 )
      break;
    v2 = *(&this->m_DirtyEntities.m_FreeList.m_Head.value64x128 + 1) & 0xFFFF0000LL | v2 & 0xFFFFFFFF00000000LL;
    m_Head = this->m_DirtyEntities.m_FreeList.m_Head;
    if ( _InterlockedCompareExchange128(&this->m_DirtyEntities.m_FreeList, v2, 0, &m_Head) != 0 )
    {
      while ( 1 )
      {
        v5 = Next->Next;
        operator delete(Next);
        if ( v5 == 0 )
          break;
        Next = v5;
      }
      return;
    }
  }
}


// CDirtySpatialPartitionEntityList::~CDirtySpatialPartitionEntityList  (line 90, @0x000000000218c780, libserver.so)  // inlines: Detach, Purge, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadPause, ~CAutoGameSystem, ~CTSItemList, ~CTSListBase
// calls: operator delete, IGameSystem::~IGameSystem
// callers: CDirtySpatialPartitionEntityList::~CDirtySpatialPartitionEntityList
void __fastcall CDirtySpatialPartitionEntityList::~CDirtySpatialPartitionEntityList(
        CDirtySpatialPartitionEntityList *const this)
{
  unsigned __int64 v1; // rcx
  TSLNodeBase_t *Next; // rdi
  TSLHead_t m_Head; // rt0
  TSLNodeBase_t *v5; // r12
  unsigned __int64 v6; // rcx
  TSLNodeBase_t *v7; // rdi
  TSLHead_t v8; // rt0
  TSLNodeBase_t *v9; // r12
  unsigned __int64 v10; // rcx
  TSLNodeBase_t *v11; // rdi
  TSLHead_t v12; // rt0
  TSLNodeBase_t *v13; // r12
  unsigned __int64 v14; // rcx
  TSLNodeBase_t *v15; // rdi
  TSLHead_t v16; // rax
  TSLHead_t v17; // rt0
  TSLNodeBase_t *v18; // r12
  unsigned __int64 v19; // rcx
  TSLHead_t v20; // rt0
  unsigned __int64 v21; // rcx
  TSLHead_t v22; // rt0

  v1 = 0;
  this->_vptr_IGameSystem = &off_4010430;
  while ( 1 )
  {
    _mm_pause();
    Next = this->m_DirtyEntities.m_Head.value.Next;
    if ( Next == 0 )
      break;
    v1 = *(&this->m_DirtyEntities.m_Head.value64x128 + 1) & 0xFFFF0000LL | v1 & 0xFFFFFFFF00000000LL;
    m_Head = this->m_DirtyEntities.m_Head;
    if ( _InterlockedCompareExchange128(&this->m_DirtyEntities, v1, 0, &m_Head) != 0 )
    {
      while ( 1 )
      {
        v5 = Next->Next;
        operator delete(Next);
        if ( v5 == 0 )
          break;
        Next = v5;
      }
      break;
    }
  }
  v6 = 0;
  while ( 1 )
  {
    _mm_pause();
    v7 = this->m_DirtyEntities.m_FreeList.m_Head.value.Next;
    if ( v7 == 0 )
      break;
    v6 = *(&this->m_DirtyEntities.m_FreeList.m_Head.value64x128 + 1) & 0xFFFF0000LL | v6 & 0xFFFFFFFF00000000LL;
    v8 = this->m_DirtyEntities.m_FreeList.m_Head;
    if ( _InterlockedCompareExchange128(&this->m_DirtyEntities.m_FreeList, v6, 0, &v8) != 0 )
    {
      while ( 1 )
      {
        v9 = v7->Next;
        operator delete(v7);
        if ( v9 == 0 )
          break;
        v7 = v9;
      }
      break;
    }
  }
  v10 = 0;
  while ( 1 )
  {
    _mm_pause();
    v11 = this->m_DirtyEntities.m_Head.value.Next;
    if ( v11 == 0 )
      break;
    v10 = *(&this->m_DirtyEntities.m_Head.value64x128 + 1) & 0xFFFF0000LL | v10 & 0xFFFFFFFF00000000LL;
    v12 = this->m_DirtyEntities.m_Head;
    if ( _InterlockedCompareExchange128(&this->m_DirtyEntities, v10, 0, &v12) != 0 )
    {
      while ( 1 )
      {
        v13 = v11->Next;
        operator delete(v11);
        if ( v13 == 0 )
          break;
        v11 = v13;
      }
      break;
    }
  }
  v14 = 0;
  do
  {
    _mm_pause();
    v15 = this->m_DirtyEntities.m_FreeList.m_Head.value.Next;
    *(&v16.value64x128 + 1) = *(&this->m_DirtyEntities.m_FreeList.m_Head.value64x128 + 1);
    if ( v15 == 0 )
    {
      v16.value.Next = 0;
      goto LABEL_26;
    }
    v14 = *(&this->m_DirtyEntities.m_FreeList.m_Head.value64x128 + 1) & 0xFFFF0000LL | v14 & 0xFFFFFFFF00000000LL;
    v17 = this->m_DirtyEntities.m_FreeList.m_Head;
  }
  while ( _InterlockedCompareExchange128(&this->m_DirtyEntities.m_FreeList, v14, 0, &v17) == 0 );
  while ( 1 )
  {
    v18 = v15->Next;
    operator delete(v15);
    if ( v18 == 0 )
      break;
    v15 = v18;
  }
  v16 = this->m_DirtyEntities.m_FreeList.m_Head;
LABEL_26:
  v19 = 0;
  while ( 1 )
  {
    _mm_pause();
    if ( v16.value.Next == 0 )
      break;
    v19 = v16.value32.DepthAndSequence & 0xFFFF0000 | v19 & 0xFFFFFFFF00000000LL;
    v20 = v16;
    if ( _InterlockedCompareExchange128(&this->m_DirtyEntities.m_FreeList, v19, 0, &v20) != 0 )
      break;
    v16 = this->m_DirtyEntities.m_FreeList.m_Head;
  }
  v21 = 0;
  do
  {
    _mm_pause();
    if ( this->m_DirtyEntities.m_Head.value.Next == 0 )
      break;
    v21 = *(&this->m_DirtyEntities.m_Head.value64x128 + 1) & 0xFFFF0000LL | v21 & 0xFFFFFFFF00000000LL;
    v22 = this->m_DirtyEntities.m_Head;
  }
  while ( _InterlockedCompareExchange128(&this->m_DirtyEntities, v21, 0, &v22) == 0 );
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CDirtySpatialPartitionEntityList::~CDirtySpatialPartitionEntityList  (line 90, @0x000000000218c990, libserver.so)
// calls: CDirtySpatialPartitionEntityList::~CDirtySpatialPartitionEntityList, operator delete
void __fastcall CDirtySpatialPartitionEntityList::~CDirtySpatialPartitionEntityList(
        CDirtySpatialPartitionEntityList *const this)
{
  CDirtySpatialPartitionEntityList::~CDirtySpatialPartitionEntityList(this);
  operator delete(this);
}


// CDirtySpatialPartitionEntityList::Init  (line 98, @0x0000000002187730, libserver.so)
bool __fastcall CDirtySpatialPartitionEntityList::Init(CDirtySpatialPartitionEntityList *const this)
{
  return 1;
}


// CDirtySpatialPartitionEntityList::Shutdown  (line 103, @0x0000000002187740, libserver.so)
void __fastcall CDirtySpatialPartitionEntityList::Shutdown(CDirtySpatialPartitionEntityList *const this)
{
  ;
}


// CDirtySpatialPartitionEntityList::AddEntity  (line 111, @0x00000000021963f0, libserver.so)  // inlines: CEntityHandle, Node_t, Pop, Push, PushItem, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadPause
// calls: operator new
// callers: CCollisionProperty::MarkPartitionHandleDirty
void __fastcall CDirtySpatialPartitionEntityList::AddEntity(
        CDirtySpatialPartitionEntityList *const this,
        CBaseEntity *pEntity)
{
  CTSListBase value64x128; // rax
  unsigned __int64 v4; // rcx
  _DWORD *Next; // r9
  TSLHead_t m_Head; // rt0
  unsigned __int64 v7; // rcx
  TSLHead_t v8; // rax
  TSLHead_t v9; // rt0
  _DWORD v10[8]; // [rsp+0h] [rbp-20h] BYREF

  (*(pEntity->_vptr_IHandleEntity + 3))(v10);
  value64x128 = this->m_DirtyEntities.m_FreeList.m_Head.value64x128;
  v4 = 0;
  if ( value64x128.m_Head.value.Next != 0 )
  {
    Next = this->m_DirtyEntities.m_FreeList.m_Head.value.Next;
    while ( 1 )
    {
      v4 = (value64x128.m_Head.value32.DepthAndSequence - 1) | v4 & 0xFFFFFFFF00000000LL;
      m_Head = value64x128.m_Head;
      if ( _InterlockedCompareExchange128(
             &this->m_DirtyEntities.m_FreeList,
             v4,
             value64x128.m_Head.value.Next->Next,
             &m_Head) != 0 )
        break;
      _mm_pause();
      value64x128 = this->m_DirtyEntities.m_FreeList.m_Head.value64x128;
      Next = value64x128.m_Head.value.Next;
      if ( value64x128.m_Head.value.Next == 0 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    Next = operator new(0x20u);
    Next[4] = -1;
  }
  v7 = 0;
  Next[4] = v10[0];
  while ( 1 )
  {
    v8 = this->m_DirtyEntities.m_Head;
    v7 = (v8.value32.DepthAndSequence + 65537) | v7 & 0xFFFFFFFF00000000LL;
    *Next = v8.value.Next;
    v9 = v8;
    if ( _InterlockedCompareExchange128(&this->m_DirtyEntities, v7, Next, &v9) != 0 )
      break;
    _mm_pause();
  }
}


// CDirtySpatialPartitionEntityList::GameShutdown  (line 120, @0x000000000218bdc0, libserver.so)  // inlines: Detach, Push, RemoveAll, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadPause
void __fastcall CDirtySpatialPartitionEntityList::GameShutdown(
        CDirtySpatialPartitionEntityList *const this,
        const EventGameShutdown_t *const msg)
{
  unsigned __int64 v2; // rcx
  TSLNodeBase_t *Next; // r11
  TSLHead_t m_Head; // rt0
  TSLNodeBase_t *v5; // r8
  TSLHead_t v6; // rax
  TSLHead_t v7; // rt0

  v2 = 0;
  while ( 1 )
  {
    _mm_pause();
    Next = this->m_DirtyEntities.m_Head.value.Next;
    if ( Next == 0 )
      break;
    v2 = *(&this->m_DirtyEntities.m_Head.value64x128 + 1) & 0xFFFF0000LL | v2 & 0xFFFFFFFF00000000LL;
    m_Head = this->m_DirtyEntities.m_Head;
    if ( _InterlockedCompareExchange128(&this->m_DirtyEntities, v2, 0, &m_Head) != 0 )
    {
      while ( 1 )
      {
        v5 = Next->Next;
        msg = msg;
        while ( 1 )
        {
          v6 = this->m_DirtyEntities.m_FreeList.m_Head;
          msg = ((v6.value32.DepthAndSequence + 65537) | msg & 0xFFFFFFFF00000000LL);
          Next->Next = v6.value.Next;
          v7 = v6;
          if ( _InterlockedCompareExchange128(&this->m_DirtyEntities.m_FreeList, msg, Next, &v7) != 0 )
            break;
          _mm_pause();
        }
        if ( v5 == 0 )
          break;
        Next = v5;
      }
      return;
    }
  }
}


// CDirtySpatialPartitionEntityList::UpdateDirtySpatialPartitionEntities  (line 131, @0x000000000219d370, libserver.so)  // inlines: Add, CAutoLockT, CEntityHandle, CMicroProfilerGuardWithCount, CMicroProfilerSample, Detach, FreeNode, GetElapsed, GetTimebaseRegister, Lock, PLAT_CPU_TIME, Push, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64, ThreadInterlockedAssignIf64x128, ThreadPause, TryLockInline, Unlock, ~CAutoLockT, ~CMicroProfilerGuardWithCount
// calls: ThreadGetCurrentId, CGameEntitySystem::GetBaseEntity, CCollisionProperty::UpdatePartition, ThreadInterlockedExchange64, CThreadFastMutex::Lock(ulong long,uint), _Unwind_Resume
// callers: UpdateDirtySpatialPartitionEntities
// globals: miniprofiler_UpdateDirtySpatialPartitionEntities
void __fastcall CDirtySpatialPartitionEntityList::UpdateDirtySpatialPartitionEntities(
        CDirtySpatialPartitionEntityList *const this)
{
  unsigned __int64 v1; // r12
  int16 Depth; // bx
  CThreadFastMutex *p_m_partitionMutex; // r15
  signed __int64 CurrentId; // rsi
  unsigned __int64 v6; // rcx
  TSLNodeBase_t *Next; // rsi
  TSLHead_t m_Head; // rt0
  CBaseEntity *BaseEntity; // rax
  CCollisionProperty *m_pCollision; // rdi
  int v11; // edi
  TSLNodeBase_t *v12; // r13
  TSLHead_t v13; // rax
  TSLHead_t v14; // rt0
  unsigned __int64 v15; // rdx
  int m_depth; // eax
  unsigned __int64 v17; // [rsp+10h] [rbp-60h]
  CThreadFastMutex *generated_id_135; // [rsp+18h] [rbp-58h]
  unsigned int v19; // [rsp+20h] [rbp-50h]
  _DWORD v20[16]; // [rsp+30h] [rbp-40h] BYREF

  Depth = this->m_DirtyEntities.m_Head.value.Depth;
  if ( Depth != 0 )
  {
    p_m_partitionMutex = &this->m_partitionMutex;
    generated_id_135 = &this->m_partitionMutex;
    CurrentId = ThreadGetCurrentId(this);
    if ( CurrentId != this->m_partitionMutex.m_ownerID
      && _InterlockedCompareExchange64(p_m_partitionMutex, CurrentId, 0) != 0 )
    {
      _mm_pause();
      CThreadFastMutex::Lock(generated_id_135, CurrentId, 0);
    }
    else
    {
      ++this->m_partitionMutex.m_depth;
    }
    v17 = __rdtsc();
LABEL_7:
    v6 = v19;
    while ( 1 )
    {
      _mm_pause();
      Next = this->m_DirtyEntities.m_Head.value.Next;
      if ( Next == 0 )
        break;
      v6 = *(&this->m_DirtyEntities.m_Head.value64x128 + 1) & 0xFFFF0000LL | v6 & 0xFFFFFFFF00000000LL;
      m_Head = this->m_DirtyEntities.m_Head;
      if ( _InterlockedCompareExchange128(&this->m_DirtyEntities, v6, 0, &m_Head) != 0 )
      {
        v19 = v6;
        while ( 1 )
        {
          v11 = Next[1].Next;
          v1 = v1;
          v12 = Next->Next;
          while ( 1 )
          {
            v13 = this->m_DirtyEntities.m_FreeList.m_Head;
            v1 = (v13.value32.DepthAndSequence + 65537) | v1 & 0xFFFFFFFF00000000LL;
            Next->Next = v13.value.Next;
            v14 = v13;
            if ( _InterlockedCompareExchange128(&this->m_DirtyEntities.m_FreeList, v1, Next, &v14) != 0 )
              break;
            _mm_pause();
          }
          v20[0] = v11;
          BaseEntity = CGameEntitySystem::GetBaseEntity(g_pGameEntitySystem, v20);
          if ( BaseEntity != 0 )
          {
            m_pCollision = BaseEntity->m_pCollision;
            if ( m_pCollision != 0 )
              CCollisionProperty::UpdatePartition(m_pCollision);
          }
          if ( v12 == 0 )
            break;
          Next = v12;
        }
        goto LABEL_7;
      }
    }
    v15 = __rdtsc();
    miniprofiler_UpdateDirtySpatialPartitionEntities.m_numCalls += Depth;
    m_depth = this->m_partitionMutex.m_depth;
    miniprofiler_UpdateDirtySpatialPartitionEntities.m_numTimeBaseTicks = miniprofiler_UpdateDirtySpatialPartitionEntities.m_numTimeBaseTicks
                                                                        - v17
                                                                        + v15;
    this->m_partitionMutex.m_depth = m_depth - 1;
    if ( this->m_partitionMutex.m_depth == 0 )
      ThreadInterlockedExchange64(generated_id_135, 0);
  }
}


// VPhysicsCollisionAttribute_t::AddDatadescMetadataKeys  (line 168, @0x0000000002196500, libserver.so)
void __fastcall VPhysicsCollisionAttribute_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// VPhysicsCollisionAttribute_t::GetBaseMap  (line 168, @0x0000000002196510, libserver.so)
datamap_t *__cdecl VPhysicsCollisionAttribute_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<VPhysicsCollisionAttribute_t>  (line 168, @0x0000000002196520, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "VPhysicsCollisionAttribute_t"
// globals: `guard variable for'DataMapInit<VPhysicsCollisionAttribute_t>(VPhysicsCollisionAttribute_t *)::nameHolder, VPhysicsCollisionAttribute_t::m_DataMap, DataMapInit<VPhysicsCollisionAttribute_t>(VPhysicsCollisionAttribute_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<VPhysicsCollisionAttribute_t>(VPhysicsCollisionAttribute_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<VPhysicsCollisionAttribute_t>(VPhysicsCollisionAttribute_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<VPhysicsCollisionAttribute_t>(VPhysicsCollisionAttribute_t *)::nameHolder) != 0 )
  {
    DataMapInit<VPhysicsCollisionAttribute_t>(VPhysicsCollisionAttribute_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<VPhysicsCollisionAttribute_t>(VPhysicsCollisionAttribute_t *)::nameHolder.m_pszBase = "VPhysicsCollisionAttribute_t";
    DataMapInit<VPhysicsCollisionAttribute_t>(VPhysicsCollisionAttribute_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<VPhysicsCollisionAttribute_t>(VPhysicsCollisionAttribute_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<VPhysicsCollisionAttribute_t>(VPhysicsCollisionAttribute_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<VPhysicsCollisionAttribute_t>(VPhysicsCollisionAttribute_t *)::nameHolder.m_nLenBase = 28;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<VPhysicsCollisionAttribute_t>(VPhysicsCollisionAttribute_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<VPhysicsCollisionAttribute_t>(VPhysicsCollisionAttribute_t *)::nameHolder,
      &_dso_handle);
  }
  VPhysicsCollisionAttribute_t::m_DataMap.baseMap = 0;
  VPhysicsCollisionAttribute_t::m_DataMap.dataDesc = &DataMapInit<VPhysicsCollisionAttribute_t>(VPhysicsCollisionAttribute_t *)::dataDesc[1];
  VPhysicsCollisionAttribute_t::m_DataMap.dataNumFields = 7;
  return &VPhysicsCollisionAttribute_t::m_DataMap;
}


// CCollisionProperty::AddDatadescMetadataKeys  (line 178, @0x00000000021965e0, libserver.so)
void __fastcall CCollisionProperty::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CCollisionProperty::GetBaseMap  (line 178, @0x00000000021965f0, libserver.so)
datamap_t *__cdecl CCollisionProperty::GetBaseMap()
{
  return 0;
}


// DataMapInit<CCollisionProperty>  (line 178, @0x0000000002196600, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CCollisionProperty"
// globals: `guard variable for'DataMapInit<CCollisionProperty>(CCollisionProperty *)::nameHolder, CCollisionProperty::m_DataMap, DataMapInit<CCollisionProperty>(CCollisionProperty *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CCollisionProperty>(CCollisionProperty *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CCollisionProperty>(CCollisionProperty *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CCollisionProperty>(CCollisionProperty *)::nameHolder) != 0 )
  {
    DataMapInit<CCollisionProperty>(CCollisionProperty *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CCollisionProperty>(CCollisionProperty *)::nameHolder.m_pszBase = "CCollisionProperty";
    DataMapInit<CCollisionProperty>(CCollisionProperty *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CCollisionProperty>(CCollisionProperty *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CCollisionProperty>(CCollisionProperty *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CCollisionProperty>(CCollisionProperty *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CCollisionProperty>(CCollisionProperty *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CCollisionProperty>(CCollisionProperty *)::nameHolder,
      &_dso_handle);
  }
  CCollisionProperty::m_DataMap.baseMap = 0;
  CCollisionProperty::m_DataMap.dataDesc = &DataMapInit<CCollisionProperty>(CCollisionProperty *)::dataDesc[1];
  CCollisionProperty::m_DataMap.dataNumFields = 18;
  return &CCollisionProperty::m_DataMap;
}


// CCollisionProperty::OnUpdateOBB  (line 231, @0x00000000021966c0, libserver.so)  // inlines: FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// callers: CCollisionProperty::SetCollisionBounds
void __fastcall CCollisionProperty::OnUpdateOBB(CCollisionProperty *const this)
{
  float v1; // xmm0_4
  int (**vptr_ICollideable)(...); // rax

  v1 = this->m_vecMaxs.m_Value.x - this->m_vecMins.m_Value.x;
  vptr_ICollideable = this->_vptr_ICollideable;
  this->m_flRadius = fsqrt(
                       ((v1 * v1)
                      + ((this->m_vecMaxs.m_Value.y - this->m_vecMins.m_Value.y)
                       * (this->m_vecMaxs.m_Value.y - this->m_vecMins.m_Value.y)))
                     + ((this->m_vecMaxs.m_Value.z - this->m_vecMins.m_Value.z)
                      * (this->m_vecMaxs.m_Value.z - this->m_vecMins.m_Value.z)))
                   * 0.5;
  vptr_ICollideable[25]();
}


// CCollisionProperty::OnUpdateSolidType  (line 243, @0x0000000002196720, libserver.so)
void __fastcall CCollisionProperty::OnUpdateSolidType(
        CCollisionProperty *const this,
        CEntityInstance *pInstance,
        const SolidType_t *pNewSolidType)
{
  (*(this->_vptr_ICollideable + 26))(this, *pNewSolidType);
}


// CCollisionProperty::OnUpdateSolidFlags  (line 248, @0x0000000002199eb0, libserver.so)
// calls: CCollisionProperty::SetSolidFlags
void __fastcall CCollisionProperty::OnUpdateSolidFlags(
        CCollisionProperty *const this,
        CEntityInstance *pInstance,
        const SolidFlags_t *pNewSolidFlags)
{
  CCollisionProperty::SetSolidFlags(this, *pNewSolidFlags);
}


// SetupAndConnectPhysics  (line 263, @0x0000000002196740, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::SetupPhysics
// callers: CCollisionProperty::SetupPhysicsFromUnscaledModel, CCollisionProperty::SetupPhysicsFromUnscaledAABB, CCollisionProperty::SetupPhysicsFromUnscaledOBB, CCollisionProperty::SetupPhysicsFromUnscaledCapsule
IPhysAggregateInstance *__fastcall SetupAndConnectPhysics(CBodyComponent *pBody, CBaseEntity *pEntity)
{
  CSkeletonInstance *v2; // rbx
  IPhysAggregateInstance *m_pVPhysicsAggregate; // rbx

  if ( pBody != 0
    && (v2 = (*(pBody->m_pSceneNode->_vptr_CGameSceneNode + 9))(pBody->m_pSceneNode, pEntity),
        CSkeletonInstance::SetupPhysics(v2),
        (m_pVPhysicsAggregate = v2->m_modelState.m_pVPhysicsAggregate) != 0)
    && (*(m_pVPhysicsAggregate->_vptr_IPhysAggregateInstance + 9))(m_pVPhysicsAggregate) != 0 )
  {
    return m_pVPhysicsAggregate;
  }
  else
  {
    return 0;
  }
}


// CCollisionProperty::SetupPhysicsAsPoint  (line 280, @0x000000000219d100, libserver.so)
// calls: CCollisionProperty::UpdateLocateHandle
void __fastcall CCollisionProperty::SetupPhysicsAsPoint(CCollisionProperty *const this, int nCollisionGroup)
{
  (*(this->m_pOuter->_vptr_IHandleEntity + 51))(this->m_pOuter, nCollisionGroup);
  (*(this->_vptr_ICollideable + 26))(this, 0);
  CCollisionProperty::UpdateLocateHandle(this);
}


// CCollisionProperty::SetupPhysicsFromUnscaledCapsule  (line 289, @0x000000000219b520, libserver.so)  // inlines: CheckMovementType, GetComponent<CBodyComponent>, operator[]
// calls: CCollisionProperty::SetCapsule, CCollisionProperty::SetCollisionGroup, CCollisionProperty::CollisionGroupChanged, CBaseEntity::SetMoveType, CBodyComponent::SetMotionType, SetupAndConnectPhysics, CBaseEntity::GetMoveParent
IPhysAggregateInstance *__fastcall CCollisionProperty::SetupPhysicsFromUnscaledCapsule(
        CCollisionProperty *const this,
        VPhysicsMotionType_t nMovement,
        int nCollisionGroup,
        const RnCapsule_t *const capsule)
{
  CBodyComponent *v7; // r12
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax

  CCollisionProperty::SetCapsule(this, capsule);
  (*(this->m_pOuter->_vptr_IHandleEntity + 51))(this->m_pOuter);
  if ( nMovement == VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_FIXED )
  {
    CBaseEntity::GetMoveParent(this->m_pOuter);
    CCollisionProperty::SetCollisionGroup(this, nCollisionGroup);
    CCollisionProperty::CollisionGroupChanged(this);
    (*(this->_vptr_ICollideable + 26))(this, 7);
  }
  else
  {
    CCollisionProperty::SetCollisionGroup(this, nCollisionGroup);
    CCollisionProperty::CollisionGroupChanged(this);
    (*(this->_vptr_ICollideable + 26))(this, 7);
    if ( nMovement == VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC )
      return 0;
  }
  v7 = 0;
  CBaseEntity::SetMoveType(this->m_pOuter, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  m_pEntity = this->m_pOuter->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF )
      v7 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  }
  CBodyComponent::SetMotionType(v7, VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED);
  return SetupAndConnectPhysics(v7, this->m_pOuter);
}


// CCollisionProperty::SetupPhysicsFromUnscaledAABB  (line 315, @0x000000000219afe0, libserver.so)  // inlines: CheckMovementType, GetComponent<CBodyComponent>, SetCollisionBounds, SetSize, operator[]
// calls: CCollisionProperty::SetCollisionBounds, CCollisionProperty::SetCollisionGroup, CCollisionProperty::CollisionGroupChanged, CBaseEntity::SetMoveType, CBodyComponent::SetMotionType, SetupAndConnectPhysics, CBaseEntity::GetMoveParent
// callers: CreateTriggerInternal, CEntityBlocker::Create, CFish::Spawn, CItem::CreateItemVPhysicsObject, CItemGenericTriggerHelper::InitTriggerHelper, CBasePlayer::SetOrResetInitialState, CDOTA_BaseNPC::Spawn, NextBotCombatCharacter::Spawn
IPhysAggregateInstance *__fastcall CCollisionProperty::SetupPhysicsFromUnscaledAABB(
        CCollisionProperty *const this,
        VPhysicsMotionType_t nMovement,
        int nCollisionGroup,
        const Vector *const vMins,
        const Vector *const vMaxs)
{
  CBaseModelEntity *m_pOuter; // rdi
  CBodyComponent *v11; // r12
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax

  (*(this->m_pOuter->_vptr_IHandleEntity + 51))(this->m_pOuter);
  m_pOuter = this->m_pOuter;
  if ( nMovement == VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_FIXED )
  {
    CBaseEntity::GetMoveParent(m_pOuter);
    CCollisionProperty::SetCollisionBounds(&this->m_pOuter->m_Collision, vMins, vMaxs);
    CCollisionProperty::SetCollisionGroup(this, nCollisionGroup);
    CCollisionProperty::CollisionGroupChanged(this);
    (*(this->_vptr_ICollideable + 26))(this, 2);
  }
  else
  {
    CCollisionProperty::SetCollisionBounds(&m_pOuter->m_Collision, vMins, vMaxs);
    CCollisionProperty::SetCollisionGroup(this, nCollisionGroup);
    CCollisionProperty::CollisionGroupChanged(this);
    (*(this->_vptr_ICollideable + 26))(this, 2);
    if ( nMovement == VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC )
      return 0;
  }
  v11 = 0;
  CBaseEntity::SetMoveType(this->m_pOuter, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  m_pEntity = this->m_pOuter->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF )
      v11 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  }
  CBodyComponent::SetMotionType(v11, VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED);
  return SetupAndConnectPhysics(v11, this->m_pOuter);
}


// CCollisionProperty::SetupPhysicsFromUnscaledOBB  (line 339, @0x000000000219b130, libserver.so)  // inlines: CheckMovementType, GetComponent<CBodyComponent>, operator[]
// calls: CCollisionProperty::SetCollisionBounds, CCollisionProperty::SetCollisionGroup, CCollisionProperty::CollisionGroupChanged, CBaseEntity::SetMoveType, CBodyComponent::SetMotionType, SetupAndConnectPhysics, CBaseEntity::GetMoveParent
// callers: CDynamicProp::CreateVPhysics, CMarkupVolume::Spawn, CTriggerCallback::Spawn, CScriptTriggerHurt::Spawn, CScriptTriggerMultiple::Spawn, CScriptTriggerOnce::Spawn, CScriptTriggerPush::Spawn
IPhysAggregateInstance *__fastcall CCollisionProperty::SetupPhysicsFromUnscaledOBB(
        CCollisionProperty *const this,
        VPhysicsMotionType_t nMovement,
        int nCollisionGroup,
        const Vector *const vMins,
        const Vector *const vMaxs)
{
  MoveType_t v10; // si
  CBaseModelEntity *m_pOuter; // rax
  CEntityIdentity *m_pEntity; // rdx
  CEntityInstance *m_pInstance; // rcx
  CBodyComponent *v14; // rdi
  __int64 m_nBaseOffset; // rdx
  CBodyComponent *v16; // r13

  (*(this->m_pOuter->_vptr_IHandleEntity + 51))(this->m_pOuter);
  if ( nMovement == VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_FIXED )
  {
    if ( CBaseEntity::GetMoveParent(this->m_pOuter) != 0 )
    {
      CCollisionProperty::SetCollisionBounds(this, vMins, vMaxs);
      CCollisionProperty::SetCollisionGroup(this, nCollisionGroup);
      nMovement = VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED;
    }
    else
    {
      CCollisionProperty::SetCollisionBounds(this, vMins, vMaxs);
      CCollisionProperty::SetCollisionGroup(this, nCollisionGroup);
      nMovement = VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_FIXED;
    }
    CCollisionProperty::CollisionGroupChanged(this);
    (*(this->_vptr_ICollideable + 26))(this, 3);
    v10 = MoveType_t::MOVETYPE_PUSH;
  }
  else
  {
    CCollisionProperty::SetCollisionBounds(this, vMins, vMaxs);
    CCollisionProperty::SetCollisionGroup(this, nCollisionGroup);
    CCollisionProperty::CollisionGroupChanged(this);
    (*(this->_vptr_ICollideable + 26))(this, 3);
    v10 = (nMovement != VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC) + 6;
  }
  CBaseEntity::SetMoveType(this->m_pOuter, v10, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  m_pOuter = this->m_pOuter;
  m_pEntity = m_pOuter->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    v14 = 0;
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF )
    {
      v16 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
      if ( v16 != 0 )
      {
        CBodyComponent::SetMotionType(*(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset), nMovement);
        m_pOuter = this->m_pOuter;
        v14 = v16;
      }
    }
  }
  else
  {
    v14 = 0;
  }
  return SetupAndConnectPhysics(v14, m_pOuter);
}


// CCollisionProperty::SetupPhysicsFromUnscaledModel  (line 359, @0x0000000002198f30, libserver.so)  // inlines: CheckMovementType, GetComponent<CBodyComponent>, operator[]
// calls: CCollisionProperty::SetCollisionGroup, CCollisionProperty::CollisionGroupChanged, CBodyComponent::SetMotionType, CBaseEntity::SetMoveType, SetupAndConnectPhysics, CBaseEntity::GetMoveParent
// callers: CPointClientUIDialog::Spawn, CDynamicProp::CreateVPhysics, CBaseCombatWeapon::FallInit, CFuncWall::CreateVPhysics, CFuncVehicleClip::CreateVPhysics, CFuncRotating::CreateVPhysics, CFuncVPhysicsClip::CreateVPhysics, CFuncInteractionLayerClip::CreateVPhysics, CBaseButton::CreateVPhysics, CColorCorrectionVolume::Spawn, CRotDoor::CreateVPhysics, CBaseDoor::CreateVPhysics (37 total)
IPhysAggregateInstance *__fastcall CCollisionProperty::SetupPhysicsFromUnscaledModel(
        CCollisionProperty *const this,
        VPhysicsMotionType_t nMovement,
        int nCollisionGroup,
        bool bCreateAsleep)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  CBodyComponent *v10; // r14
  __int64 m_nBaseOffset; // rax
  IPhysAggregateInstance *result; // rax
  IPhysAggregateInstance *pAgg; // [rsp+8h] [rbp-38h]

  (*(this->m_pOuter->_vptr_IHandleEntity + 51))(this->m_pOuter);
  if ( nMovement == VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_FIXED && CBaseEntity::GetMoveParent(this->m_pOuter) != 0 )
    LOBYTE(nMovement) = 3;
  CCollisionProperty::SetCollisionGroup(this, nCollisionGroup);
  CCollisionProperty::CollisionGroupChanged(this);
  m_pEntity = this->m_pOuter->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    v10 = 0;
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF && *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset) != 0 )
    {
      v10 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
      CBodyComponent::SetMotionType(v10, nMovement);
    }
  }
  else
  {
    v10 = 0;
  }
  (*(this->_vptr_ICollideable + 26))(this, 6);
  CBaseEntity::SetMoveType(
    this->m_pOuter,
    ((nMovement != VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC) + 6),
    MoveCollide_t::MOVECOLLIDE_DEFAULT);
  result = SetupAndConnectPhysics(v10, this->m_pOuter);
  if ( result != 0 && bCreateAsleep )
  {
    pAgg = result;
    (*(result->_vptr_IPhysAggregateInstance + 30))(result);
    return pAgg;
  }
  return result;
}


// CCollisionProperty::SetupPhysicsAsNoCollision  (line 402, @0x00000000021999d0, libserver.so)
// calls: CCollisionProperty::SetCollisionGroup, CCollisionProperty::DisableTouchEvents, CCollisionProperty::DisableTraceAndQueries, CCollisionProperty::CollisionGroupChanged
// callers: CCommentaryViewPosition::Spawn, CFunc_Dust::Spawn, CFuncLadder::FirstSetup, CFogVolume::Spawn
void __fastcall CCollisionProperty::SetupPhysicsAsNoCollision(CCollisionProperty *const this, int nCollisionGroup)
{
  (*(this->_vptr_ICollideable + 26))(this, 0);
  CCollisionProperty::SetCollisionGroup(this, nCollisionGroup);
  (*(this->_vptr_ICollideable + 18))(this);
  CCollisionProperty::DisableTouchEvents(this);
  CCollisionProperty::DisableTraceAndQueries(this);
  CCollisionProperty::CollisionGroupChanged(this);
}


// CCollisionProperty::GetCapsule  (line 414, @0x00000000021967a0, libserver.so)  // inlines: VectorMultiply, operator*, operator=
// callers: Physics_GetAggregateData, CGamePhysicsQueryInterface::SweepCollideable
CCollisionProperty *__fastcall CCollisionProperty::GetCapsule(CCollisionProperty *this, float a2, float *a3)
{
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm5_4
  float v7; // xmm1_4
  float v8; // xmm6_4
  float v9; // xmm7_4

  v4 = a3[39] * a2;
  v5 = a3[40] * a2;
  v6 = a3[37];
  v7 = a3[41] * a2;
  v8 = a3[36] * a2;
  *(&this->m_pOuter + 1) = a3[38] * a2;
  v9 = a3[35];
  *&this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t = v4;
  *(&this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 1) = v5;
  *&this->m_collisionAttribute.m_nInteractsAs.m_Value = v7;
  *(&this->_vptr_ICollideable + 1) = v8;
  *&this->m_pOuter = v6 * a2;
  *&this->_vptr_ICollideable = v9 * a2;
  return this;
}


// CCollisionProperty::SetCapsule  (line 425, @0x000000000219b2c0, libserver.so)  // inlines: GetBbox, Init, Max<float>, Min<float>, NetworkStateChanged, Set, SetCollisionBounds, SetSize, operator!=, operator=, operator=<float>
// calls: CCollisionProperty::SetCollisionBounds
// callers: CCollisionProperty::SetupPhysicsFromUnscaledCapsule
void __fastcall CCollisionProperty::SetCapsule(CCollisionProperty *const this, const RnCapsule_t *const capsule)
{
  bool v4; // zf
  float m_flRadius; // xmm0_4
  bool v6; // zf
  float z; // xmm9_4
  float y; // xmm8_4
  float x; // xmm7_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // rdi
  vec_t v13; // xmm5_4
  vec_t v14; // xmm6_4
  vec_t v15; // xmm2_4
  float v16; // [rsp+Ch] [rbp-34h]
  AABB_t aabb; // [rsp+10h] [rbp-30h] BYREF

  if ( capsule->m_vCenter[0].x == this->m_vCapsuleCenter1.m_Value.x
    && capsule->m_vCenter[0].y == this->m_vCapsuleCenter1.m_Value.y
    && capsule->m_vCenter[0].z == this->m_vCapsuleCenter1.m_Value.z )
  {
    v4 = capsule->m_vCenter[1].x == this->m_vCapsuleCenter2.m_Value.x;
  }
  else
  {
    (*(this->_vptr_ICollideable + 31))(this, 140, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vCapsuleCenter1.m_Value.x = capsule->m_vCenter[0].x;
    this->m_vCapsuleCenter1.m_Value.y = capsule->m_vCenter[0].y;
    this->m_vCapsuleCenter1.m_Value.z = capsule->m_vCenter[0].z;
    v4 = capsule->m_vCenter[1].x == this->m_vCapsuleCenter2.m_Value.x;
  }
  if ( v4
    && capsule->m_vCenter[1].y == this->m_vCapsuleCenter2.m_Value.y
    && capsule->m_vCenter[1].z == this->m_vCapsuleCenter2.m_Value.z )
  {
    m_flRadius = capsule->m_flRadius;
    v6 = m_flRadius == this->m_flCapsuleRadius.m_Value;
  }
  else
  {
    (*(this->_vptr_ICollideable + 31))(this, 152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vCapsuleCenter2.m_Value.x = capsule->m_vCenter[1].x;
    this->m_vCapsuleCenter2.m_Value.y = capsule->m_vCenter[1].y;
    this->m_vCapsuleCenter2.m_Value.z = capsule->m_vCenter[1].z;
    m_flRadius = capsule->m_flRadius;
    v6 = m_flRadius == this->m_flCapsuleRadius.m_Value;
  }
  if ( !v6 )
  {
    v16 = m_flRadius;
    (*(this->_vptr_ICollideable + 31))(this, 164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flCapsuleRadius.m_Value = v16;
    m_flRadius = capsule->m_flRadius;
  }
  z = capsule->m_vCenter[1].z;
  y = capsule->m_vCenter[1].y;
  x = capsule->m_vCenter[1].x;
  v10 = fmaxf(capsule->m_vCenter[0].y, y);
  v11 = fmaxf(capsule->m_vCenter[0].x, x);
  p_m_Collision = &this->m_pOuter->m_Collision;
  v13 = fminf(capsule->m_vCenter[0].y, y) - m_flRadius;
  v14 = fminf(capsule->m_vCenter[0].x, x) - m_flRadius;
  v15 = fmaxf(capsule->m_vCenter[0].z, z) + m_flRadius;
  aabb.m_vMinBounds.z = fminf(capsule->m_vCenter[0].z, z) - m_flRadius;
  aabb.m_vMinBounds.y = v13;
  aabb.m_vMinBounds.x = v14;
  aabb.m_vMaxBounds.z = v15;
  aabb.m_vMaxBounds.y = v10 + m_flRadius;
  aabb.m_vMaxBounds.x = v11 + m_flRadius;
  CCollisionProperty::SetCollisionBounds(p_m_Collision, &aabb.m_vMinBounds, &aabb.m_vMaxBounds);
}


// CCollisionProperty::EnableAllCollisions  (line 436, @0x000000000218f920, libserver.so)  // inlines: AddCollisionFunctionMask, CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
bool __fastcall CCollisionProperty::EnableAllCollisions(CCollisionProperty *const this)
{
  bool v2; // r12
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-50h] BYREF

  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  if ( (writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value & 7) == 7 )
  {
    v2 = 0;
  }
  else
  {
    writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value |= 7u;
    CBaseEntity::CollisionRulesChanged(this->m_pOuter);
    v2 = 1;
  }
  if ( writer.m_bReleased )
    return v2;
  writer.m_bReleased = 1;
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value == writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
    return v2;
  (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
    &writer.m_pCollisionProp->m_collisionAttribute,
    39,
    0xFFFFFFFFLL,
    0xFFFFFFFFLL);
  return v2;
}


// CCollisionProperty::DisableAllCollisions  (line 450, @0x000000000218fb00, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, RemoveCollisionFunctionMask, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
bool __fastcall CCollisionProperty::DisableAllCollisions(CCollisionProperty *const this)
{
  unsigned __int8 m_Value; // dl
  bool v3; // r12
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-50h] BYREF

  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  m_Value = writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  if ( (m_Value & 7) != 0 )
  {
    writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value = m_Value & 0xF8;
    CBaseEntity::CollisionRulesChanged(this->m_pOuter);
    v3 = 1;
    if ( writer.m_bReleased )
      return v3;
  }
  else
  {
    v3 = 0;
    if ( writer.m_bReleased )
      return v3;
  }
  writer.m_bReleased = 1;
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value == writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
    return v3;
  (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
    &writer.m_pCollisionProp->m_collisionAttribute,
    39,
    0xFFFFFFFFLL,
    0xFFFFFFFFLL);
  return v3;
}


// CCollisionProperty::EnableSolidCollisions  (line 465, @0x000000000218fcd0, libserver.so)  // inlines: AddCollisionFunctionMask, CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
bool __fastcall CCollisionProperty::EnableSolidCollisions(CCollisionProperty *const this)
{
  unsigned __int8 m_Value; // dl
  bool v3; // r12
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-50h] BYREF

  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  m_Value = writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  if ( (m_Value & 1) != 0 )
  {
    v3 = 0;
  }
  else
  {
    writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value = m_Value | 1;
    CBaseEntity::CollisionRulesChanged(this->m_pOuter);
    v3 = 1;
  }
  if ( writer.m_bReleased )
    return v3;
  writer.m_bReleased = 1;
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value == writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
    return v3;
  (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
    &writer.m_pCollisionProp->m_collisionAttribute,
    39,
    0xFFFFFFFFLL,
    0xFFFFFFFFLL);
  return v3;
}


// CCollisionProperty::DisableSolidCollisions  (line 477, @0x000000000218feb0, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, RemoveCollisionFunctionMask, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
bool __fastcall CCollisionProperty::DisableSolidCollisions(CCollisionProperty *const this)
{
  unsigned __int8 m_Value; // dl
  bool v3; // r12
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-50h] BYREF

  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  m_Value = writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  if ( (m_Value & 1) != 0 )
  {
    writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value = m_Value & 0xFE;
    CBaseEntity::CollisionRulesChanged(this->m_pOuter);
    v3 = 1;
    if ( writer.m_bReleased )
      return v3;
  }
  else
  {
    v3 = 0;
    if ( writer.m_bReleased )
      return v3;
  }
  writer.m_bReleased = 1;
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value == writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
    return v3;
  (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
    &writer.m_pCollisionProp->m_collisionAttribute,
    39,
    0xFFFFFFFFLL,
    0xFFFFFFFFLL);
  return v3;
}


// CCollisionProperty::EnableInteractsAsMask  (line 489, @0x0000000002196820, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
// callers: CBaseVRHandAttachment::Spawn, CItem::Spawn, CPropVRTrackedObject::PostSetModel, CPropHMDAvatar::Spawn, CDOTA_Item_Rune::Spawn, CDOTA_BaseNPC::Spawn
void __fastcall CCollisionProperty::EnableInteractsAsMask(CCollisionProperty *const this, uint64 nLayerMask)
{
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-60h] BYREF

  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value |= nLayerMask;
  CBaseEntity::CollisionRulesChanged(this->m_pOuter);
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
}


// CCollisionProperty::EnableInteractsWithMask  (line 498, @0x00000000021969e0, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
void __fastcall CCollisionProperty::EnableInteractsWithMask(CCollisionProperty *const this, uint64 nLayerMask)
{
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-60h] BYREF

  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value |= nLayerMask;
  CBaseEntity::CollisionRulesChanged(this->m_pOuter);
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
}


// CCollisionProperty::EnableInteractsExcludeMask  (line 506, @0x0000000002196ba0, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
// callers: CBaseVRHandAttachment::Spawn, CPhysicsProp::CreateVPhysics, CPropVRTrackedObject::VRFly_OnBegin, CPropVRTrackedObject::PostSetModel, CPropVRTrackedObject::AddOrRemoveBlockedByStaticLevel, CBaseTrigger::Spawn
void __fastcall CCollisionProperty::EnableInteractsExcludeMask(CCollisionProperty *const this, uint64 nLayerMask)
{
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-60h] BYREF

  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value |= nLayerMask;
  CBaseEntity::CollisionRulesChanged(this->m_pOuter);
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
}


// CCollisionProperty::EnableTouchEvents  (line 515, @0x0000000002196d60, libserver.so)  // inlines: AddCollisionFunctionMask, CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
// callers: CBaseEntity::Teleport, CDOTA_BaseNPC::Spawn
bool __fastcall CCollisionProperty::EnableTouchEvents(CCollisionProperty *const this)
{
  unsigned __int8 m_Value; // dl
  bool v3; // r12
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-50h] BYREF

  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  m_Value = writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  if ( (m_Value & 4) != 0 )
  {
    v3 = 0;
  }
  else
  {
    writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value = m_Value | 4;
    CBaseEntity::CollisionRulesChanged(this->m_pOuter);
    v3 = 1;
  }
  if ( writer.m_bReleased )
    return v3;
  writer.m_bReleased = 1;
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value == writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
    return v3;
  (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
    &writer.m_pCollisionProp->m_collisionAttribute,
    39,
    0xFFFFFFFFLL,
    0xFFFFFFFFLL);
  return v3;
}


// CCollisionProperty::DisableInteractsAsMask  (line 527, @0x0000000002196f40, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
void __fastcall CCollisionProperty::DisableInteractsAsMask(CCollisionProperty *const this, uint64 nLayerMask)
{
  uint64 v2; // r13
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-60h] BYREF

  v2 = ~nLayerMask;
  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value &= v2;
  CBaseEntity::CollisionRulesChanged(this->m_pOuter);
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
}


// CCollisionProperty::DisableInteractsExcludeMask  (line 535, @0x0000000002197100, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
// callers: CPropVRTrackedObject::VRFly_OnEnd, CPropVRTrackedObject::AddOrRemoveBlockedByStaticLevel
void __fastcall CCollisionProperty::DisableInteractsExcludeMask(CCollisionProperty *const this, uint64 nLayerMask)
{
  uint64 v2; // r13
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-60h] BYREF

  v2 = ~nLayerMask;
  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value &= v2;
  CBaseEntity::CollisionRulesChanged(this->m_pOuter);
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
}


// CCollisionProperty::DisableTouchEvents  (line 543, @0x00000000021972c0, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, RemoveCollisionFunctionMask, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
// callers: CBaseEntity::OnSetDormant, CBaseEntity::RemoveDeferred, CBaseEntity::Teleport, CCollisionProperty::SetupPhysicsAsNoCollision, CChangeLevel::Activate, CDOTA_BaseNPC::DeathComplete
bool __fastcall CCollisionProperty::DisableTouchEvents(CCollisionProperty *const this)
{
  unsigned __int8 m_Value; // dl
  bool v3; // r12
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-50h] BYREF

  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  m_Value = writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  if ( (m_Value & 4) != 0 )
  {
    writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value = m_Value & 0xFB;
    CBaseEntity::CollisionRulesChanged(this->m_pOuter);
    v3 = 1;
    if ( writer.m_bReleased )
      return v3;
  }
  else
  {
    v3 = 0;
    if ( writer.m_bReleased )
      return v3;
  }
  writer.m_bReleased = 1;
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value == writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
    return v3;
  (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
    &writer.m_pCollisionProp->m_collisionAttribute,
    39,
    0xFFFFFFFFLL,
    0xFFFFFFFFLL);
  return v3;
}


// CCollisionProperty::EnableTraceAndQueries  (line 556, @0x00000000021974a0, libserver.so)  // inlines: AddCollisionFunctionMask, CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
bool __fastcall CCollisionProperty::EnableTraceAndQueries(CCollisionProperty *const this)
{
  unsigned __int8 m_Value; // dl
  bool v3; // r12
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-50h] BYREF

  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  m_Value = writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  if ( (m_Value & 2) != 0 )
  {
    v3 = 0;
  }
  else
  {
    writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value = m_Value | 2;
    CBaseEntity::CollisionRulesChanged(this->m_pOuter);
    v3 = 1;
  }
  if ( writer.m_bReleased )
    return v3;
  writer.m_bReleased = 1;
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value == writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
    return v3;
  (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
    &writer.m_pCollisionProp->m_collisionAttribute,
    39,
    0xFFFFFFFFLL,
    0xFFFFFFFFLL);
  return v3;
}


// CCollisionProperty::DisableTraceAndQueries  (line 568, @0x0000000002197680, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, RemoveCollisionFunctionMask, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
// callers: CBaseEntity::OnSetDormant, CCollisionProperty::SetupPhysicsAsNoCollision
bool __fastcall CCollisionProperty::DisableTraceAndQueries(CCollisionProperty *const this)
{
  unsigned __int8 m_Value; // dl
  bool v3; // r12
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-50h] BYREF

  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  m_Value = writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  if ( (m_Value & 2) != 0 )
  {
    writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value = m_Value & 0xFD;
    CBaseEntity::CollisionRulesChanged(this->m_pOuter);
    v3 = 1;
    if ( writer.m_bReleased )
      return v3;
  }
  else
  {
    v3 = 0;
    if ( writer.m_bReleased )
      return v3;
  }
  writer.m_bReleased = 1;
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value == writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
    return v3;
  (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
    &writer.m_pCollisionProp->m_collisionAttribute,
    39,
    0xFFFFFFFFLL,
    0xFFFFFFFFLL);
  return v3;
}


// CCollisionProperty::EnableSelfCollisions  (line 581, @0x0000000002197860, libserver.so)  // inlines: AddCollisionFunctionMask, CCollisionAttributeWriter, CNetworkVarBase, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=
// callers: CRagdollProp::Spawn
bool __fastcall CCollisionProperty::EnableSelfCollisions(CCollisionProperty *const this)
{
  bool v1; // r12
  unsigned __int8 m_Value; // al
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-50h] BYREF

  v1 = 0;
  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  m_Value = writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  if ( (m_Value & 8) == 0 )
  {
    v1 = 1;
    writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value = m_Value | 8;
  }
  if ( writer.m_bReleased )
    return v1;
  writer.m_bReleased = 1;
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value == writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
    return v1;
  (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
    &writer.m_pCollisionProp->m_collisionAttribute,
    39,
    0xFFFFFFFFLL,
    0xFFFFFFFFLL);
  return v1;
}


// CCollisionProperty::DisableSelfCollisions  (line 588, @0x0000000002197a00, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, RemoveCollisionFunctionMask, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=
bool __fastcall CCollisionProperty::DisableSelfCollisions(CCollisionProperty *const this)
{
  bool v1; // r12
  unsigned __int8 m_Value; // al
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-50h] BYREF

  v1 = 0;
  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  m_Value = writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  if ( (m_Value & 8) != 0 )
  {
    v1 = 1;
    writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value = m_Value & 0xF7;
  }
  if ( writer.m_bReleased )
    return v1;
  writer.m_bReleased = 1;
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value == writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
    return v1;
  (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
    &writer.m_pCollisionProp->m_collisionAttribute,
    39,
    0xFFFFFFFFLL,
    0xFFFFFFFFLL);
  return v1;
}


// CCollisionProperty::EnableTouchPersistsNotification  (line 595, @0x0000000002197ba0, libserver.so)  // inlines: AddCollisionFunctionMask, CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
// callers: CBreakableProp::Spawn, CBaseCombatWeapon::SetPickupTouch, CBaseDoor::Spawn, CFish::Spawn, CItem::SetupTouchFunction, CGamePlayerEquip::Spawn, CPhysMagnet::Spawn, CBasePlayer::Spawn, CPlatTrigger::Spawn, CTriggerRemove::Spawn, CTriggerHurt::Spawn, CTriggerSndSosOpvar::Spawn (20 total)
bool __fastcall CCollisionProperty::EnableTouchPersistsNotification(CCollisionProperty *const this)
{
  unsigned __int8 m_Value; // dl
  bool v3; // r12
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-50h] BYREF

  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  m_Value = writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  if ( (m_Value & 0x20) != 0 )
  {
    v3 = 0;
  }
  else
  {
    writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value = m_Value | 0x20;
    CBaseEntity::CollisionRulesChanged(this->m_pOuter);
    v3 = 1;
  }
  if ( writer.m_bReleased )
    return v3;
  writer.m_bReleased = 1;
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value == writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
    return v3;
  (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
    &writer.m_pCollisionProp->m_collisionAttribute,
    39,
    0xFFFFFFFFLL,
    0xFFFFFFFFLL);
  return v3;
}


// CCollisionProperty::DisableTouchPersistsNotification  (line 607, @0x0000000002197d80, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, RemoveCollisionFunctionMask, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
// callers: CBaseCombatWeapon::Equip, CBaseCombatWeapon::Drop, CChangeLevel::ChangeLevelNow, CEconWearable::Equip
bool __fastcall CCollisionProperty::DisableTouchPersistsNotification(CCollisionProperty *const this)
{
  unsigned __int8 m_Value; // dl
  bool v3; // r12
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-50h] BYREF

  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  m_Value = writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  if ( (m_Value & 0x20) != 0 )
  {
    writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value = m_Value & 0xDF;
    CBaseEntity::CollisionRulesChanged(this->m_pOuter);
    v3 = 1;
    if ( writer.m_bReleased )
      return v3;
  }
  else
  {
    v3 = 0;
    if ( writer.m_bReleased )
      return v3;
  }
  writer.m_bReleased = 1;
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value == writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
    return v3;
  (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
    &writer.m_pCollisionProp->m_collisionAttribute,
    39,
    0xFFFFFFFFLL,
    0xFFFFFFFFLL);
  return v3;
}


// CCollisionProperty::EnableHitboxes  (line 619, @0x0000000002197f50, libserver.so)  // inlines: AddCollisionFunctionMask, CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, Set, VPhysicsCollisionAttribute_t, operator=<bool>, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
// callers: CBasePlayer::SetOrResetInitialState
void __fastcall CCollisionProperty::EnableHitboxes(CCollisionProperty *const this)
{
  unsigned __int8 m_Value; // dl
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-50h] BYREF

  if ( !this->m_bHitboxEnabled.m_Value )
  {
    (*(this->_vptr_ICollideable + 31))(this, 87, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bHitboxEnabled.m_Value = 1;
  }
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  m_Value = this->m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  if ( (m_Value & 0x10) == 0 )
  {
    this->m_collisionAttribute.m_nCollisionFunctionMask.m_Value = m_Value | 0x10;
    CBaseEntity::CollisionRulesChanged(this->m_pOuter);
  }
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    if ( this->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
}


// CCollisionProperty::DisableHitboxes  (line 630, @0x0000000002198130, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, RemoveCollisionFunctionMask, Set, VPhysicsCollisionAttribute_t, operator=<bool>, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
void __fastcall CCollisionProperty::DisableHitboxes(CCollisionProperty *const this)
{
  unsigned __int8 m_Value; // dl
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-50h] BYREF

  if ( this->m_bHitboxEnabled.m_Value )
  {
    (*(this->_vptr_ICollideable + 31))(this, 87, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bHitboxEnabled.m_Value = 0;
  }
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  m_Value = this->m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
  if ( (m_Value & 0x10) != 0 )
  {
    this->m_collisionAttribute.m_nCollisionFunctionMask.m_Value = m_Value & 0xEF;
    CBaseEntity::CollisionRulesChanged(this->m_pOuter);
  }
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    if ( this->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
}


// CCollisionProperty::CollisionAttributeChanged  (line 643, @0x0000000002198320, libserver.so)  // inlines: CollisionRulesChanged
// calls: CBaseEntity::CollisionRulesChanged
// callers: CBaseModelEntity::SpawnShared
void __fastcall CCollisionProperty::CollisionAttributeChanged(CCollisionProperty *const this)
{
  CBaseEntity::CollisionRulesChanged(this->m_pOuter);
}


// CCollisionProperty::EnableAutoSleeping  (line 650, @0x0000000002198330, libserver.so)
// calls: CBaseEntity::VPhysicsGetAggregate
void __fastcall CCollisionProperty::EnableAutoSleeping(CCollisionProperty *const this)
{
  IPhysAggregateInstance *Aggregate; // rax

  Aggregate = CBaseEntity::VPhysicsGetAggregate(this->m_pOuter);
  if ( Aggregate != 0 )
    (*(Aggregate->_vptr_IPhysAggregateInstance + 27))(Aggregate);
}


// CCollisionProperty::DisableAutoSleeping  (line 660, @0x0000000002198360, libserver.so)
// calls: CBaseEntity::VPhysicsGetAggregate
// callers: CBasePlayer::SetOrResetInitialState
void __fastcall CCollisionProperty::DisableAutoSleeping(CCollisionProperty *const this)
{
  IPhysAggregateInstance *Aggregate; // rax

  Aggregate = CBaseEntity::VPhysicsGetAggregate(this->m_pOuter);
  if ( Aggregate != 0 )
    (*(Aggregate->_vptr_IPhysAggregateInstance + 28))(Aggregate);
}


// CCollisionProperty::CCollisionProperty  (line 686, @0x0000000002198760, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, CNetworkVectorBase, Compare, Construct<RnCollisionAttr_t>, EnsureValidValue, EnsureValidValue<SolidType_t>, EnsureValidValue<SurroundingBoundsType_t>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, NetworkVar_m_collisionAttribute, Release, RnCollisionAttr_t, VPhysicsCollisionAttribute_t, Zero, locatehandle_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CCollisionProperty::Init, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
// callers: CSchemaClassBinding<CCollisionProperty>::Allocate, CSchemaClassBinding<CCollisionProperty>::ConstructInPlace, CSchemaClassBinding<CCollisionProperty>::AllocateAndCopyConstruct, CBaseModelEntity::CBaseModelEntity
void __fastcall CCollisionProperty::CCollisionProperty(CCollisionProperty *const this)
{
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-60h] BYREF

  this->_vptr_ICollideable = off_4010590;
  this->m_collisionAttribute.m_nInteractsAs.m_Value = 0;
  this->m_collisionAttribute.m_nInteractsWith.m_Value = 0;
  this->m_collisionAttribute.m_nInteractsExclude.m_Value = 0;
  this->m_collisionAttribute.m_nEntityId.m_Value = 0;
  this->m_collisionAttribute.m_nHierarchyId.m_Value = 0;
  this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t = &off_4009450;
  this->m_hLocateHandle.m_Data = -1;
  this->m_collisionAttribute.m_nCollisionGroup.m_Value = 0;
  this->m_collisionAttribute.m_nCollisionFunctionMask.m_Value = 0;
  this->m_vecMins.m_Value.z = 0.0;
  this->m_vecMins.m_Value.y = 0.0;
  this->m_vecMins.m_Value.x = 0.0;
  this->m_vecMaxs.m_Value.z = 0.0;
  this->m_vecMaxs.m_Value.y = 0.0;
  this->m_vecMaxs.m_Value.x = 0.0;
  this->m_usSolidFlags.m_Value = 0;
  this->m_nSolidType.m_Value = SolidType_t::SOLID_NONE;
  this->m_triggerBloat.m_Value = 0;
  this->m_nSurroundType.m_Value = SurroundingBoundsType_t::USE_OBB_COLLISION_BOUNDS;
  this->m_CollisionGroup.m_Value = 0;
  this->m_bHitboxEnabled.m_Value = 0;
  this->m_vecSpecifiedSurroundingMins.m_Value.z = 0.0;
  this->m_vecSpecifiedSurroundingMins.m_Value.y = 0.0;
  this->m_vecSpecifiedSurroundingMins.m_Value.x = 0.0;
  this->m_vecSpecifiedSurroundingMaxs.m_Value.z = 0.0;
  this->m_vecSpecifiedSurroundingMaxs.m_Value.y = 0.0;
  this->m_vecSpecifiedSurroundingMaxs.m_Value.x = 0.0;
  this->m_vCapsuleCenter1.m_Value.z = 0.0;
  this->m_vCapsuleCenter1.m_Value.y = 0.0;
  this->m_vCapsuleCenter1.m_Value.x = 0.0;
  this->m_vCapsuleCenter2.m_Value.z = 0.0;
  this->m_vCapsuleCenter2.m_Value.y = 0.0;
  this->m_vCapsuleCenter2.m_Value.x = 0.0;
  this->m_flCapsuleRadius.m_Value = 0.0;
  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  if ( writer.m_pCollisionProp != -24LL )
  {
    writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value = 0;
    writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value = 0;
    writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value = 0;
    writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value = 0;
    writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value = 7;
    writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value = 0;
    writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value = 0;
  }
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
  CCollisionProperty::Init(this, 0);
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
}


// CCollisionProperty::~CCollisionProperty  (line 702, @0x0000000002198390, libserver.so)
// callers: CSchemaClassBinding<CCollisionProperty>::Deallocate, CSchemaClassBinding<CCollisionProperty>::DestructInPlace, CBaseModelEntity::~CBaseModelEntity, CBaseModelEntity::CBaseModelEntity
void __fastcall CCollisionProperty::~CCollisionProperty(CCollisionProperty *const this)
{
  this->_vptr_ICollideable = off_4010590;
}


// CCollisionProperty::Init  (line 710, @0x00000000021983a0, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, Compare, EnableInteractsAs, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, Init, NetworkStateChanged, Release, Set, SetCollisionGroup, VPhysicsCollisionAttribute_t, operator=, operator=<SolidType_t>, operator=<StandardCollisionGroups_t>, operator=<SurroundingBoundsType_t>, operator=<bool>, operator=<int>, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=
// callers: CBaseModelEntity::CBaseModelEntity, CCollisionProperty::CCollisionProperty
void __fastcall CCollisionProperty::Init(CCollisionProperty *const this, CBaseModelEntity *pEntity)
{
  int (**vptr_ICollideable)(...); // rax
  bool v4; // zf
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  int (**v8)(...); // rax
  int (**v9)(...); // rax
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-50h] BYREF

  this->m_pOuter = pEntity;
  (*(this->_vptr_ICollideable + 31))(this, 56, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  vptr_ICollideable = this->_vptr_ICollideable;
  this->m_vecMins.m_Value.x = 0.0;
  this->m_vecMins.m_Value.y = 0.0;
  this->m_vecMins.m_Value.z = 0.0;
  vptr_ICollideable[31](this, 68, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v4 = this->m_triggerBloat.m_Value == 0;
  this->m_vecMaxs.m_Value.x = 0.0;
  this->m_vecMaxs.m_Value.y = 0.0;
  this->m_vecMaxs.m_Value.z = 0.0;
  this->m_flRadius = 0.0;
  if ( !v4 )
  {
    (*(this->_vptr_ICollideable + 31))(this, 84, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_triggerBloat.m_Value = 0;
  }
  if ( this->m_usSolidFlags.m_Value != 0 )
  {
    (*(this->_vptr_ICollideable + 31))(this, 82, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_usSolidFlags.m_Value = 0;
  }
  if ( this->m_nSolidType.m_Value != SolidType_t::SOLID_NONE )
  {
    (*(this->_vptr_ICollideable + 31))(this, 83, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nSolidType.m_Value = SolidType_t::SOLID_NONE;
  }
  v4 = this->m_CollisionGroup.m_Value == 4;
  this->m_hLocateHandle.m_Data = -1;
  if ( !v4 )
  {
    (*(this->_vptr_ICollideable + 31))(this, 86, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_CollisionGroup.m_Value = 4;
  }
  if ( this->m_nSurroundType.m_Value != SurroundingBoundsType_t::USE_OBB_COLLISION_BOUNDS )
  {
    (*(this->_vptr_ICollideable + 31))(this, 85, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nSurroundType.m_Value = SurroundingBoundsType_t::USE_OBB_COLLISION_BOUNDS;
  }
  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  this->m_vecSurroundingMins.x = vec3_origin.x;
  v8 = this->_vptr_ICollideable;
  this->m_vecSurroundingMins.y = y;
  this->m_vecSurroundingMins.z = z;
  this->m_vecSurroundingMaxs.x = x;
  this->m_vecSurroundingMaxs.y = y;
  this->m_vecSurroundingMaxs.z = z;
  v8[31](this, 92, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v9 = this->_vptr_ICollideable;
  this->m_vecSpecifiedSurroundingMins.m_Value.x = 0.0;
  this->m_vecSpecifiedSurroundingMins.m_Value.y = 0.0;
  this->m_vecSpecifiedSurroundingMins.m_Value.z = 0.0;
  v9[31](this, 104, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v4 = !this->m_bHitboxEnabled.m_Value;
  this->m_vecSpecifiedSurroundingMaxs.m_Value.x = 0.0;
  this->m_vecSpecifiedSurroundingMaxs.m_Value.y = 0.0;
  this->m_vecSpecifiedSurroundingMaxs.m_Value.z = 0.0;
  if ( !v4 )
  {
    (*(this->_vptr_ICollideable + 31))(this, 87, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bHitboxEnabled.m_Value = 0;
  }
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  this->m_collisionAttribute.m_nInteractsAs.m_Value |= 0x20000u;
  this->m_collisionAttribute.m_nCollisionGroup.m_Value = 4;
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    if ( this->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(this->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
}


// CCollisionProperty::Shutdown  (line 736, @0x0000000002198b70, libserver.so)
// calls: CGamePhysicsQueryInterface::RemoveLocatableEntity
// callers: CBaseEntity::UpdateOnRemove
void __fastcall CCollisionProperty::Shutdown(CCollisionProperty *const this)
{
  (*(this->_vptr_ICollideable + 16))(this);
  if ( this->m_hLocateHandle.m_Data == 0xFFFF )
  {
    CGamePhysicsQueryInterface::RemoveLocatableEntity(g_pPhysicsQuery, -1, this->m_pOuter);
    this->m_hLocateHandle.m_Data = -1;
  }
}


// CCollisionProperty::GetEntity  (line 750, @0x0000000002187750, libserver.so)
CBaseEntity *__fastcall CCollisionProperty::GetEntity(const CCollisionProperty *const this)
{
  return this->m_pOuter;
}


// CCollisionProperty::GetCollisionGroup  (line 759, @0x0000000002187760, libserver.so)  // inlines: GetCollisionGroup_Inline
int __fastcall CCollisionProperty::GetCollisionGroup(const CCollisionProperty *const this)
{
  return this->m_CollisionGroup.m_Value;
}


// CCollisionProperty::SetCollisionGroup  (line 764, @0x0000000002198ee0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// calls: CCollisionProperty::CollisionGroupChanged
// callers: CBaseEntity::VPhysicsUpdate, CBaseModelEntity::CBaseModelEntity, CBreakableProp::StickAtPosition, CBaseCombatWeapon::Spawn, CCollisionProperty::SetupPhysicsFromUnscaledModel, CCollisionProperty::SetupPhysicsAsNoCollision, CCollisionProperty::SetupPhysicsFromUnscaledAABB, CCollisionProperty::SetupPhysicsFromUnscaledOBB, CCollisionProperty::SetupPhysicsFromUnscaledCapsule, CCollisionProperty::SetTriggerCollisionGroup, CCollisionProperty::RemoveTriggerCollisionGroup, CBaseDoor::Spawn (42 total)
void __fastcall CCollisionProperty::SetCollisionGroup(CCollisionProperty *const this, int nCollisionGroup)
{
  unsigned __int8 v2; // r12
  unsigned __int8 m_Value; // al

  v2 = nCollisionGroup;
  m_Value = this->m_CollisionGroup.m_Value;
  if ( m_Value != nCollisionGroup )
  {
    if ( m_Value != nCollisionGroup )
    {
      (*(this->_vptr_ICollideable + 31))(this, 86, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_CollisionGroup.m_Value = v2;
    }
    CCollisionProperty::CollisionGroupChanged(this);
  }
}


// CCollisionProperty::CollisionGroupChanged  (line 775, @0x0000000002198bd0, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, CollisionRulesChanged, Compare, DisableInteractsAs, EnableInteractsAs, EnableInteractsWith, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetBool, GetCollisionGroup_Inline, GetFlags, GetForModify, GetInt, IsTriggerCollisionGroup, NetworkStateChanged, Release, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CBaseEntity::CollisionRulesChanged, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
// callers: CCollisionProperty::SetCollisionGroup, CCollisionProperty::SetupPhysicsFromUnscaledModel, CCollisionProperty::SetupPhysicsAsNoCollision, CCollisionProperty::SetupPhysicsFromUnscaledAABB, CCollisionProperty::SetupPhysicsFromUnscaledOBB, CCollisionProperty::SetupPhysicsFromUnscaledCapsule
void __fastcall CCollisionProperty::CollisionGroupChanged(CCollisionProperty *const this)
{
  unsigned __int8 m_Value; // al
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  CBaseModelEntity *m_pOuter; // rdx
  unsigned __int8 v8; // dl
  unsigned int v9; // ecx
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-60h] BYREF

  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value = this->m_CollisionGroup.m_Value;
  m_Value = this->m_CollisionGroup.m_Value;
  if ( m_Value == 14 || m_Value == 2 )
  {
    v5 = writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value & 0xFFFFFFFFFFFDFFFFLL;
    writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value = v5;
    if ( phys_optimize.m_pParent->m_Value.m_nValue != 0 )
    {
      m_pOuter = this->m_pOuter;
      v9 = m_pOuter->m_spawnflags.m_Value;
      if ( (v9 & 0x40) != 0 )
      {
        writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value |= 0x20000u;
        m_pOuter = this->m_pOuter;
        v9 = m_pOuter->m_spawnflags.m_Value;
      }
      if ( (v9 & 8) != 0 )
      {
        writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value |= 0x200000u;
        m_pOuter = this->m_pOuter;
      }
    }
    else
    {
      writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value |= 0x20000u;
      m_pOuter = this->m_pOuter;
    }
  }
  else
  {
    if ( m_Value != 5 )
    {
      v3 = writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value;
      if ( (this->m_pOuter->m_fFlags.m_Value & 0x1000000) != 0 )
        v4 = v3 & 0xFFFFFFFFFFFDFFFFLL;
      else
        v4 = v3 | 0x20000;
      v5 = v4 & 0xFFFFFFFFFFEFFFFFLL;
      writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value = v5;
      if ( this->m_pOuter->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS )
        goto LABEL_7;
LABEL_11:
      v6 = v5 & 0xFFFFFFFFFFDFFFFFLL;
      writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value = v6;
      goto LABEL_12;
    }
    v5 = writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value & 0xFFFFFFFFFFEDFFFFLL | 0x100000;
    writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value = v5;
    m_pOuter = this->m_pOuter;
  }
  if ( m_pOuter->m_MoveType.m_Value != MoveType_t::MOVETYPE_VPHYSICS )
    goto LABEL_11;
LABEL_7:
  v6 = v5 | 0x200000;
  writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value = v6;
LABEL_12:
  if ( (v6 & 0xFFFFFFFFFFFDFFFFLL) == 0 )
  {
    v8 = writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value;
    if ( v8 == 4 || v8 == 14 || v8 == 24 )
      writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value = v6 | 1;
  }
  writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value |= (*(this->m_pOuter->_vptr_IHandleEntity + 123))(this->m_pOuter);
  CBaseEntity::CollisionRulesChanged(this->m_pOuter);
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
}


// CCollisionProperty::ForceTouchTriggers  (line 852, @0x0000000002199a20, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, Compare, EnableInteractsAs, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=
// callers: CPhysicsProp::Spawn
void __fastcall CCollisionProperty::ForceTouchTriggers(CCollisionProperty *const this)
{
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-50h] BYREF

  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value |= 0x20000u;
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
}


// CCollisionProperty::ShouldTouchTrigger  (line 859, @0x00000000021893b0, libserver.so)  // inlines: GetCollisionGroup_Inline, HasInteractsWith, IsTriggerCollisionGroup
bool __fastcall CCollisionProperty::ShouldTouchTrigger(
        const CCollisionProperty *const this,
        const RnCollisionAttr_t *const triggerAttributes)
{
  int m_Value; // eax
  bool v6; // zf
  uint64 m_nInteractsWith; // rax

  if ( (*(this->_vptr_ICollideable + 9))(this) == 5 )
    return (triggerAttributes->m_nInteractsWith & 0x100000) != 0;
  m_Value = this->m_CollisionGroup.m_Value;
  if ( m_Value == 14 || m_Value == 2 )
    return 0;
  v6 = (*(this->_vptr_ICollideable + 9))(this) == 8;
  m_nInteractsWith = triggerAttributes->m_nInteractsWith;
  return v6 && (m_nInteractsWith & 0x40000) != 0 || (m_nInteractsWith & 0x20000) != 0;
}


// CCollisionProperty::GetVPhysicsObject  (line 881, @0x0000000002188620, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject
IPhysicsObject *__fastcall CCollisionProperty::GetVPhysicsObject(const CCollisionProperty *const this)
{
  return CBaseEntity::VPhysicsGetObject(this->m_pOuter);
}


// CCollisionProperty::CheckForUntouch  (line 890, @0x0000000002199ba0, libserver.so)  // inlines: GetCollisionGroup_Inline, IsSolid, IsTriggerCollisionGroup
// calls: CBaseEntity::IsCurrentlyTouching, CBaseEntity::SetCheckUntouch
// callers: CCollisionProperty::UpdateCollisionAttributes, CCollisionProperty::SetSolid
void __fastcall CCollisionProperty::CheckForUntouch(CCollisionProperty *const this)
{
  int m_Value; // eax

  if ( (*((*(this->_vptr_ICollideable + 13))(this) + 31) & 1) == 0
    && (*((*(this->_vptr_ICollideable + 13))(this) + 31) & 2) == 0
    || this->m_nSolidType.m_Value == SolidType_t::SOLID_NONE )
  {
    m_Value = this->m_CollisionGroup.m_Value;
    if ( m_Value != 14 && m_Value != 2 && CBaseEntity::IsCurrentlyTouching(this->m_pOuter) )
      CBaseEntity::SetCheckUntouch(this->m_pOuter, 1);
  }
}


// CCollisionProperty::SetSolid  (line 910, @0x000000000219d140, libserver.so)  // inlines: CollisionRulesChanged, GetSolid, IsSolid, NetworkStateChanged, Set, operator=<SolidType_t>
// calls: CBaseEntity::CollisionRulesChanged, CCollisionProperty::CheckForUntouch, CCollisionProperty::UpdateLocateHandle, CBaseEntity::GetMoveParent, CBaseEntity::GetRootMoveParent
void __fastcall CCollisionProperty::SetSolid(CCollisionProperty *const this, SolidType_t val)
{
  SolidType_t v4; // r13
  char v5; // r14
  char v6; // al
  CCollisionProperty *m_pCollision; // rdi

  if ( this->m_nSolidType.m_Value != val )
  {
    v4 = val;
    v5 = ((*((*(this->_vptr_ICollideable + 13))(this) + 31) & 1) != 0
       || (*((*(this->_vptr_ICollideable + 13))(this) + 31) & 2) != 0)
      && this->m_nSolidType.m_Value != SolidType_t::SOLID_NONE;
    (*(this->_vptr_ICollideable + 25))(this);
    if ( val == SolidType_t::SOLID_BSP && CBaseEntity::GetMoveParent(this->m_pOuter) != 0 )
    {
      m_pCollision = CBaseEntity::GetRootMoveParent(this->m_pOuter)->m_pCollision;
      if ( m_pCollision == 0 || (*(m_pCollision->_vptr_ICollideable + 7))(m_pCollision) != 1 )
        v4 = SolidType_t::SOLID_VPHYSICS;
    }
    if ( this->m_nSolidType.m_Value != v4 )
    {
      (*(this->_vptr_ICollideable + 31))(this, 83, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nSolidType.m_Value = v4;
    }
    CBaseEntity::CollisionRulesChanged(this->m_pOuter);
    v6 = ((*((*(this->_vptr_ICollideable + 13))(this) + 31) & 1) != 0
       || (*((*(this->_vptr_ICollideable + 13))(this) + 31) & 2) != 0)
      && this->m_nSolidType.m_Value != SolidType_t::SOLID_NONE;
    if ( v5 != v6 )
      CCollisionProperty::CheckForUntouch(this);
    CCollisionProperty::UpdateLocateHandle(this);
  }
}


// CCollisionProperty::GetSolid  (line 947, @0x0000000002187770, libserver.so)
SolidType_t __fastcall CCollisionProperty::GetSolid(const CCollisionProperty *const this)
{
  return this->m_nSolidType.m_Value;
}


// CCollisionProperty::SetSolidFlags  (line 956, @0x0000000002199e40, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<short unsigned int>
// callers: CBaseModelEntity::CBaseModelEntity, CBasePlayer::SharedSpawn, CCollisionProperty::OnUpdateSolidFlags, CCollisionProperty::UseTriggerBounds, CFish::Spawn, CFlexCycler::Spawn, CItem::CreateItemVPhysicsObject, CGib::Init, CRagGib::Init, CDOTA_Item_Rune::Spawn, CDOTA_Item_Physical::Spawn, CDOTA_TempTree::Spawn (18 total)
void __fastcall CCollisionProperty::SetSolidFlags(CCollisionProperty *const this, int flags)
{
  unsigned __int8 v2; // r12
  unsigned __int8 m_Value; // r13

  v2 = flags;
  m_Value = this->m_usSolidFlags.m_Value;
  if ( m_Value != flags )
  {
    (*(this->_vptr_ICollideable + 31))(this, 82, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_usSolidFlags.m_Value = v2;
    if ( ((m_Value ^ v2) & 2) != 0 )
      (*(this->_vptr_ICollideable + 25))(this);
  }
}


// CCollisionProperty::GetCollisionOrigin  (line 973, @0x0000000002187950, libserver.so)
// calls: CBaseEntity::GetAbsOrigin
const Vector *__fastcall CCollisionProperty::GetCollisionOrigin(const CCollisionProperty *const this)
{
  return CBaseEntity::GetAbsOrigin(this->m_pOuter);
}


// CCollisionProperty::GetCollisionAngles  (line 978, @0x0000000002189430, libserver.so)  // inlines: IsBoundsDefinedInEntitySpace
// calls: CBaseEntity::GetAbsAngles
const QAngle *__fastcall CCollisionProperty::GetCollisionAngles(const CCollisionProperty *const this)
{
  if ( (this->m_nSolidType.m_Value & 0xFD) != 0 )
    return CBaseEntity::GetAbsAngles(this->m_pOuter);
  else
    return &vec3_angle;
}


// CCollisionProperty::GetCollisionScale  (line 988, @0x00000000021886a0, libserver.so)
// calls: CBaseEntity::GetAbsScale
float __fastcall CCollisionProperty::GetCollisionScale(const CCollisionProperty *const this)
{
  return CBaseEntity::GetAbsScale(this->m_pOuter);
}


// CCollisionProperty::CollisionToWorldTransform  (line 993, @0x00000000021886b0, libserver.so)  // inlines: IsBoundsDefinedInEntitySpace, SetOrigin, SetScaleMatrix
// calls: CBaseEntity::EntityToWorldTransform, SetScaleMatrix, __cxa_guard_acquire, __cxa_guard_release
// globals: `guard variable for'CCollisionProperty::CollisionToWorldTransform(void)::s_matTemp, CCollisionProperty::CollisionToWorldTransform(void)::s_nIndex, CCollisionProperty::CollisionToWorldTransform(void)::s_matTemp
const matrix3x4_t *__fastcall CCollisionProperty::CollisionToWorldTransform(const CCollisionProperty *const this)
{
  __int64 v2; // rdx
  bool v3; // zf
  matrix3x4_t *v5; // r12
  float v6; // xmm0_4
  float v7; // xmm3_4
  float *v8; // rax

  if ( `guard variable for'CCollisionProperty::CollisionToWorldTransform(void)::s_matTemp == 0
    && __cxa_guard_acquire(&`guard variable for'CCollisionProperty::CollisionToWorldTransform(void)::s_matTemp) != 0 )
  {
    __cxa_guard_release(&`guard variable for'CCollisionProperty::CollisionToWorldTransform(void)::s_matTemp);
  }
  v2 = CCollisionProperty::CollisionToWorldTransform(void)const::s_nIndex;
  v3 = (this->m_nSolidType.m_Value & 0xFD) == 0;
  CCollisionProperty::CollisionToWorldTransform(void)const::s_nIndex = (CCollisionProperty::CollisionToWorldTransform(void)const::s_nIndex
                                                                      + 1)
                                                                     & 3;
  if ( !v3 )
    return CBaseEntity::EntityToWorldTransform(this->m_pOuter);
  v5 = &CCollisionProperty::CollisionToWorldTransform(void)const::s_matTemp[v2];
  v6 = (*(this->_vptr_ICollideable + 27))(this);
  SetScaleMatrix(v6, v6, v7, v5);
  v8 = (*(this->_vptr_ICollideable + 4))(this);
  v5->m_flMatVal[0][3] = *v8;
  v5->m_flMatVal[1][3] = v8[1];
  v5->m_flMatVal[2][3] = v8[2];
  return v5;
}


// CCollisionProperty::SetCollisionBounds  (line 1015, @0x0000000002199ec0, libserver.so)  // inlines: NetworkStateChanged, Set, operator!=, operator=, operator==
// calls: CCollisionProperty::OnUpdateOBB
// callers: CBaseModelEntity::ScriptSetSize, CBaseAnimating::SetSequenceBox, CBaseModelEntity::SetCollisionBoundsFromCurrentModel, CBaseModelEntity::CBaseModelEntity, CBaseModelEntity::SpawnShared, CBasePlayer::UpdateCollisionBounds, CBasePlayer::SharedSpawn, CBaseViewModel::Spawn, CBeam::RelinkBeam, CCollisionProperty::SetupPhysicsFromUnscaledAABB, CCollisionProperty::SetupPhysicsFromUnscaledOBB, CCollisionProperty::SetCapsule (27 total)
void __fastcall CCollisionProperty::SetCollisionBounds(
        CCollisionProperty *const this,
        const Vector *const mins,
        const Vector *const maxs)
{
  float y; // xmm1_4
  float z; // xmm2_4
  bool v8; // zf

  y = mins->y;
  z = mins->z;
  if ( mins->x != this->m_vecMins.m_Value.x )
    goto LABEL_2;
  if ( y == this->m_vecMins.m_Value.y
    && z == this->m_vecMins.m_Value.z
    && this->m_vecMaxs.m_Value.x == maxs->x
    && maxs->y == this->m_vecMaxs.m_Value.y
    && maxs->z == this->m_vecMaxs.m_Value.z )
  {
    return;
  }
  if ( y == this->m_vecMins.m_Value.y && z == this->m_vecMins.m_Value.z )
  {
    v8 = maxs->x == this->m_vecMaxs.m_Value.x;
  }
  else
  {
LABEL_2:
    (*(this->_vptr_ICollideable + 31))(this, 56, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vecMins.m_Value.x = mins->x;
    this->m_vecMins.m_Value.y = mins->y;
    this->m_vecMins.m_Value.z = mins->z;
    v8 = maxs->x == this->m_vecMaxs.m_Value.x;
  }
  if ( !v8 || maxs->y != this->m_vecMaxs.m_Value.y || maxs->z != this->m_vecMaxs.m_Value.z )
  {
    (*(this->_vptr_ICollideable + 31))(this, 68, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vecMaxs.m_Value.x = maxs->x;
    this->m_vecMaxs.m_Value.y = maxs->y;
    this->m_vecMaxs.m_Value.z = maxs->z;
  }
  CCollisionProperty::OnUpdateOBB(this);
}


// CCollisionProperty::BoundingRadius2D  (line 1040, @0x000000000219b630, libserver.so)  // inlines: FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// callers: CDOTA_BaseNPC::BoundingRadius2D
float __fastcall CCollisionProperty::BoundingRadius2D(const CCollisionProperty *const this)
{
  float v1; // xmm0_4

  v1 = this->m_vecMaxs.m_Value.x - this->m_vecMins.m_Value.x;
  return fsqrt(
           ((v1 * v1)
          + ((this->m_vecMaxs.m_Value.y - this->m_vecMins.m_Value.y)
           * (this->m_vecMaxs.m_Value.y - this->m_vecMins.m_Value.y)))
         + 0.0)
       * 0.5;
}


// CCollisionProperty::OBBMins  (line 1053, @0x0000000002187780, libserver.so)
const Vector *__fastcall CCollisionProperty::OBBMins(const CCollisionProperty *const this)
{
  return &this->m_vecMins.m_Value;
}


// CCollisionProperty::OBBMaxs  (line 1058, @0x0000000002187790, libserver.so)
const Vector *__fastcall CCollisionProperty::OBBMaxs(const CCollisionProperty *const this)
{
  return &this->m_vecMaxs.m_Value;
}


// CCollisionProperty::WorldSpaceTriggerBounds  (line 1067, @0x000000000219bcd0, libserver.so)  // inlines: WorldSpaceAABB
// calls: CCollisionProperty::CollisionAABBToWorldAABB
void __fastcall CCollisionProperty::WorldSpaceTriggerBounds(
        const CCollisionProperty *const this,
        Vector *pVecWorldMins,
        Vector *pVecWorldMaxs)
{
  CCollisionProperty::CollisionAABBToWorldAABB(
    this,
    &this->m_vecMins.m_Value,
    &this->m_vecMaxs.m_Value,
    pVecWorldMins,
    pVecWorldMaxs);
  if ( ((*(this->_vptr_ICollideable + 8))(this) & 2) != 0 )
  {
    pVecWorldMins->x = pVecWorldMins->x - this->m_triggerBloat.m_Value;
    pVecWorldMins->y = pVecWorldMins->y - this->m_triggerBloat.m_Value;
    pVecWorldMaxs->x = this->m_triggerBloat.m_Value + pVecWorldMaxs->x;
    pVecWorldMaxs->y = this->m_triggerBloat.m_Value + pVecWorldMaxs->y;
    pVecWorldMaxs->z = (this->m_triggerBloat.m_Value * 0.5) + pVecWorldMaxs->z;
  }
}


// CCollisionProperty::UseTriggerBounds  (line 1082, @0x000000000219b680, libserver.so)  // inlines: AddSolidFlags, NetworkStateChanged, RemoveSolidFlags, Set, operator=<char>
// calls: CCollisionProperty::SetSolidFlags
// callers: CBaseCombatWeapon::PreFirstNetworkUpdate, CBaseCombatWeapon::Spawn, CItem::OnPhysGunDrop, CItem::Spawn, CItem::OnPhysGunPickup
void __fastcall CCollisionProperty::UseTriggerBounds(
        CCollisionProperty *const this,
        bool bEnable,
        double a3,
        float flBloat)
{
  int v5; // r12d
  int v7; // esi

  v5 = *&a3;
  if ( *&a3 != this->m_triggerBloat.m_Value )
  {
    (*(this->_vptr_ICollideable + 31))(this, 84, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a3, flBloat);
    this->m_triggerBloat.m_Value = v5;
  }
  if ( bEnable )
    v7 = this->m_usSolidFlags.m_Value | 2;
  else
    v7 = this->m_usSolidFlags.m_Value & 0xFD;
  CCollisionProperty::SetSolidFlags(this, v7);
}


// CCollisionProperty::NormalizedToCollisionSpace  (line 1101, @0x000000000219b6f0, libserver.so)  // inlines: Lerp<float>
const Vector *__fastcall CCollisionProperty::NormalizedToCollisionSpace(
        const CCollisionProperty *const this,
        const Vector *const in,
        Vector *pResult)
{
  pResult->x = ((this->m_vecMaxs.m_Value.x - this->m_vecMins.m_Value.x) * in->x) + this->m_vecMins.m_Value.x;
  pResult->y = ((this->m_vecMaxs.m_Value.y - this->m_vecMins.m_Value.y) * in->y) + this->m_vecMins.m_Value.y;
  pResult->z = ((this->m_vecMaxs.m_Value.z - this->m_vecMins.m_Value.z) * in->z) + this->m_vecMins.m_Value.z;
  return pResult;
}


// CCollisionProperty::CollisionToNormalizedSpace  (line 1115, @0x000000000219b750, libserver.so)  // inlines: OBBSize, VectorSubtract, operator-
// callers: CCollisionProperty::WorldToNormalizedSpace
const Vector *__fastcall CCollisionProperty::CollisionToNormalizedSpace(
        const CCollisionProperty *const this,
        const Vector *const in,
        Vector *pResult)
{
  float x; // xmm5_4
  const Vector *result; // rax
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm4_4

  x = this->m_vecMins.m_Value.x;
  result = pResult;
  v5 = this->m_vecMaxs.m_Value.x - x;
  v6 = this->m_vecMaxs.m_Value.y - this->m_vecMins.m_Value.y;
  v7 = this->m_vecMaxs.m_Value.z - this->m_vecMins.m_Value.z;
  if ( v5 == 0.0 )
    v8 = 0.5;
  else
    v8 = (in->x - x) / v5;
  pResult->x = v8;
  if ( v6 == 0.0 )
    pResult->y = 0.5;
  else
    pResult->y = (in->y - this->m_vecMins.m_Value.y) / v6;
  if ( v7 == 0.0 )
    pResult->z = 0.5;
  else
    pResult->z = (in->z - this->m_vecMins.m_Value.z) / v7;
  return result;
}


// CCollisionProperty::NormalizedToWorldSpace  (line 1129, @0x000000000219b800, libserver.so)  // inlines: CollisionToWorldSpace, IsBoundsDefinedInEntitySpace, Lerp<float>, NormalizedToCollisionSpace, VectorMA, VectorTransform, operator==
// calls: VectorTransform
// callers: CAI_Expresser::SpeakDispatchResponse, CCollisionProperty::RandomPointInBounds, CBaseEntity::UpdateWaterState
const Vector *__fastcall CCollisionProperty::NormalizedToWorldSpace(
        const CCollisionProperty *const this,
        const Vector *const in,
        Vector *pResult)
{
  bool v5; // zf
  float y; // xmm1_4
  vec_t v7; // xmm0_4
  float z; // xmm1_4
  float *v9; // rax
  double v10; // xmm0_8
  const matrix3x4_t *v11; // rax
  float *v13; // rax
  float v14; // xmm0_4
  vec_t v15; // xmm0_4
  float v16; // [rsp+Ch] [rbp-24h]
  Vector vecCollisionSpace; // [rsp+10h] [rbp-20h] BYREF

  v5 = (this->m_nSolidType.m_Value & 0xFD) == 0;
  y = this->m_vecMins.m_Value.y;
  vecCollisionSpace.x = ((this->m_vecMaxs.m_Value.x - this->m_vecMins.m_Value.x) * in->x) + this->m_vecMins.m_Value.x;
  v7 = ((this->m_vecMaxs.m_Value.y - y) * in->y) + y;
  z = this->m_vecMins.m_Value.z;
  vecCollisionSpace.y = v7;
  vecCollisionSpace.z = ((this->m_vecMaxs.m_Value.z - z) * in->z) + z;
  if ( v5
    || (v9 = (*(this->_vptr_ICollideable + 5))(this), *&v10 = LODWORD(vec3_angle.x), vec3_angle.x == *v9)
    && (*&v10 = LODWORD(vec3_angle.y), *&v10 == v9[1])
    && (*&v10 = LODWORD(vec3_angle.z), *&v10 == v9[2]) )
  {
    v16 = (*(this->_vptr_ICollideable + 27))(this);
    v13 = (*(this->_vptr_ICollideable + 4))(this);
    pResult->x = (vecCollisionSpace.x * v16) + *v13;
    v14 = v16 * vecCollisionSpace.z;
    pResult->y = (vecCollisionSpace.y * v16) + v13[1];
    v15 = v14 + v13[2];
    pResult->z = v15;
    return pResult;
  }
  else
  {
    v11 = (*(this->_vptr_ICollideable + 6))(this, v10);
    VectorTransform(&vecCollisionSpace.x, v11, &pResult->x);
    return pResult;
  }
}


// CCollisionProperty::WorldToNormalizedSpace  (line 1141, @0x000000000219b940, libserver.so)  // inlines: IsBoundsDefinedInEntitySpace, VectorITransform, VectorSubtract, WorldToCollisionSpace, operator/=, operator=, operator==
// calls: CCollisionProperty::CollisionToNormalizedSpace, VectorITransform
// callers: CTriggerSndSosOpvar::CalcOpvarValue, CTriggerSndSosOpvar::Spawn
const Vector *__fastcall CCollisionProperty::WorldToNormalizedSpace(
        const CCollisionProperty *const this,
        const Vector *const in,
        Vector *pResult)
{
  float v6; // xmm0_4
  float *v7; // rax
  vec_t v8; // xmm3_4
  vec_t v9; // xmm1_4
  float *v11; // rax
  double v12; // xmm1_8
  const matrix3x4_t *v13; // rax
  float v14; // xmm1_4
  float v15; // [rsp+Ch] [rbp-34h]
  float v16; // [rsp+Ch] [rbp-34h]
  Vector vecCollisionSpace; // [rsp+10h] [rbp-30h] BYREF

  v6 = (*(this->_vptr_ICollideable + 27))(this);
  if ( v6 == 0.0 )
  {
    vecCollisionSpace = vec3_origin;
  }
  else if ( (this->m_nSolidType.m_Value & 0xFD) == 0
         || (v16 = v6,
             v11 = (*(this->_vptr_ICollideable + 5))(this),
             v6 = v16,
             *&v12 = LODWORD(vec3_angle.x),
             vec3_angle.x == *v11)
         && (*&v12 = LODWORD(vec3_angle.y), *&v12 == v11[1])
         && (*&v12 = LODWORD(vec3_angle.z), *&v12 == v11[2]) )
  {
    v15 = v6;
    v7 = (*(this->_vptr_ICollideable + 4))(this);
    v8 = (in->y - v7[1]) * (1.0 / v15);
    v9 = (in->z - v7[2]) * (1.0 / v15);
    vecCollisionSpace.x = (in->x - *v7) * (1.0 / v15);
    vecCollisionSpace.y = v8;
    vecCollisionSpace.z = v9;
  }
  else
  {
    v13 = (*(this->_vptr_ICollideable + 6))(this, COERCE_DOUBLE(LODWORD(v16)), v12);
    VectorITransform(&in->x, v13, &vecCollisionSpace.x);
    v14 = 1.0 / (v16 * v16);
    vecCollisionSpace.x = vecCollisionSpace.x * v14;
    vecCollisionSpace.y = vecCollisionSpace.y * v14;
    vecCollisionSpace.z = v14 * vecCollisionSpace.z;
  }
  CCollisionProperty::CollisionToNormalizedSpace(this, &vecCollisionSpace, pResult);
  return pResult;
}


// CCollisionProperty::RandomPointInBounds  (line 1153, @0x000000000219bae0, libserver.so)
// calls: CCollisionProperty::NormalizedToWorldSpace
// callers: CreatePiecesFromPropData, CreateGibsFromList, CBaseCombatCharacter::DropWeaponForWeaponStrip, CGib::InitGib
void __fastcall CCollisionProperty::RandomPointInBounds(
        const CCollisionProperty *const this,
        const Vector *const vecNormalizedMins,
        const Vector *const vecNormalizedMaxs,
        Vector *pPoint)
{
  Vector vecNormalizedSpace; // [rsp+0h] [rbp-40h] BYREF

  vecNormalizedSpace.x = (*(*random_valve + 8LL))(random_valve, vecNormalizedMins->x, vecNormalizedMaxs->x);
  vecNormalizedSpace.y = (*(*random_valve + 8LL))(random_valve, vecNormalizedMins->y, vecNormalizedMaxs->y);
  vecNormalizedSpace.z = (*(*random_valve + 8LL))(random_valve, vecNormalizedMins->z, vecNormalizedMaxs->z);
  CCollisionProperty::NormalizedToWorldSpace(this, &vecNormalizedSpace, pPoint);
}


// CCollisionProperty::CollisionAABBToWorldAABB  (line 1166, @0x000000000219bb70, libserver.so)  // inlines: IsBoundsDefinedInEntitySpace, VectorMA, operator==
// calls: TransformAABB
// callers: CLoopModeGameToolHooks::OnToolGetEntityInfo, CGameEntitySystem::FindEntityByClassnameWithin, UTIL_FindClosestPassableSpace, CBaseCombatCharacter::GetGroundSurface, CBasePlayer::FindUseEntity, CBaseCombatCharacter::CheckTraceHullAttack, CCollisionProperty::WorldSpaceTriggerBounds, CEnvEntityMaker::OnEntitiesSpawned, CFire::Update, CBreakable::ResetOnGroundFlags, CPhysicsPushedEntities::ComputeRotationalPushDirection, CPhysicsPushedEntities::GenerateBlockingEntityList (23 total)
void __fastcall CCollisionProperty::CollisionAABBToWorldAABB(
        const CCollisionProperty *const this,
        const Vector *const entityMins,
        const Vector *const entityMaxs,
        Vector *pWorldMins,
        Vector *pWorldMaxs)
{
  float *v10; // rax
  double v11; // xmm0_8
  const matrix3x4_t *v12; // rax
  float *v13; // rax
  float *v14; // rax
  float v15; // [rsp+Ch] [rbp-34h]
  float v16; // [rsp+Ch] [rbp-34h]

  if ( (this->m_nSolidType.m_Value & 0xFD) == 0
    || (v10 = (*(this->_vptr_ICollideable + 5))(this), *&v11 = LODWORD(vec3_angle.x), vec3_angle.x == *v10)
    && (*&v11 = LODWORD(vec3_angle.y), *&v11 == v10[1])
    && (*&v11 = LODWORD(vec3_angle.z), *&v11 == v10[2]) )
  {
    v15 = (*(this->_vptr_ICollideable + 27))(this);
    v13 = (*(this->_vptr_ICollideable + 4))(this);
    pWorldMins->x = (entityMins->x * v15) + *v13;
    pWorldMins->y = (entityMins->y * v15) + v13[1];
    pWorldMins->z = (v15 * entityMins->z) + v13[2];
    v16 = (*(this->_vptr_ICollideable + 27))(this);
    v14 = (*(this->_vptr_ICollideable + 4))(this);
    pWorldMaxs->x = (entityMaxs->x * v16) + *v14;
    pWorldMaxs->y = (entityMaxs->y * v16) + v14[1];
    pWorldMaxs->z = (v16 * entityMaxs->z) + v14[2];
  }
  else
  {
    v12 = (*(this->_vptr_ICollideable + 6))(this, v11);
    TransformAABB(v12, entityMins, entityMaxs, pWorldMins, pWorldMaxs);
  }
}


// CCollisionProperty::IsPointInBounds  (line 1199, @0x000000000219bd90, libserver.so)  // inlines: IsBoundsDefinedInEntitySpace, VectorITransform, VectorSubtract, WorldToCollisionSpace, operator/=, operator=, operator==
// calls: VectorITransform
// callers: AvoidPushawayProps
bool __fastcall CCollisionProperty::IsPointInBounds(
        const CCollisionProperty *const this,
        const Vector *const vecWorldPt)
{
  float v4; // xmm0_4
  float *v5; // rax
  vec_t v6; // xmm2_4
  float x; // xmm0_4
  float *v9; // rax
  double v10; // xmm1_8
  const matrix3x4_t *v11; // rax
  float v12; // xmm1_4
  float v13; // [rsp+Ch] [rbp-24h]
  float v14; // [rsp+Ch] [rbp-24h]
  Vector vecLocalSpace; // [rsp+10h] [rbp-20h] BYREF

  v4 = (*(this->_vptr_ICollideable + 27))(this);
  if ( v4 == 0.0 )
  {
    x = vec3_origin.x;
    vecLocalSpace.y = vec3_origin.y;
    vecLocalSpace.z = vec3_origin.z;
  }
  else if ( (this->m_nSolidType.m_Value & 0xFD) == 0
         || (v14 = v4,
             v9 = (*(this->_vptr_ICollideable + 5))(this),
             v4 = v14,
             *&v10 = LODWORD(vec3_angle.x),
             vec3_angle.x == *v9)
         && (*&v10 = LODWORD(vec3_angle.y), *&v10 == v9[1])
         && (*&v10 = LODWORD(vec3_angle.z), *&v10 == v9[2]) )
  {
    v13 = v4;
    v5 = (*(this->_vptr_ICollideable + 4))(this);
    v6 = (vecWorldPt->z - v5[2]) * (1.0 / v13);
    x = (vecWorldPt->x - *v5) * (1.0 / v13);
    vecLocalSpace.y = (vecWorldPt->y - v5[1]) * (1.0 / v13);
    vecLocalSpace.z = v6;
  }
  else
  {
    v11 = (*(this->_vptr_ICollideable + 6))(this, COERCE_DOUBLE(LODWORD(v14)), v10);
    VectorITransform(&vecWorldPt->x, v11, &vecLocalSpace.x);
    v12 = 1.0 / (v14 * v14);
    x = vecLocalSpace.x * v12;
    vecLocalSpace.y = vecLocalSpace.y * v12;
    vecLocalSpace.z = v12 * vecLocalSpace.z;
  }
  return x >= this->m_vecMins.m_Value.x
      && this->m_vecMaxs.m_Value.x >= x
      && vecLocalSpace.y >= this->m_vecMins.m_Value.y
      && this->m_vecMaxs.m_Value.y >= vecLocalSpace.y
      && vecLocalSpace.z >= this->m_vecMins.m_Value.z
      && this->m_vecMaxs.m_Value.z >= vecLocalSpace.z;
}


// CCollisionProperty::CalcNearestPoint  (line 1215, @0x000000000219bf40, libserver.so)  // inlines: CollisionToWorldSpace, IsBoundsDefinedInEntitySpace, VectorITransform, VectorMA, VectorSubtract, VectorTransform, WorldToCollisionSpace, operator/=, operator=, operator==
// calls: CalcClosestPointOnAABB, VectorTransform, VectorITransform
// callers: CBasePlayer::FindUseEntity, CBaseDoor::DoorGoUp, CInteractionManager::LookForInteractions, CItemGeneric::OnHelperTrigger, AvoidPushawayProps, CTriggerHurt::HurtEntity, NextBotManager::GetBotUnderCrosshair, INextBot::GetRangeSquaredTo, INextBot::GetRangeTo, INextBot::IsRangeLessThan, INextBot::IsRangeGreaterThan
void __fastcall CCollisionProperty::CalcNearestPoint(
        const CCollisionProperty *const this,
        const Vector *const vecWorldPt,
        Vector *pVecNearestWorldPt)
{
  float v6; // xmm0_4
  float *v7; // rax
  vec_t v8; // xmm3_4
  vec_t v9; // xmm1_4
  float *v10; // rax
  double v11; // xmm0_8
  const matrix3x4_t *v12; // rax
  float *v13; // rax
  double v14; // xmm1_8
  const matrix3x4_t *v15; // rax
  float v16; // xmm1_4
  float *v17; // rax
  float v18; // xmm0_4
  float v19; // [rsp+Ch] [rbp-44h]
  float v20; // [rsp+Ch] [rbp-44h]
  float v21; // [rsp+Ch] [rbp-44h]
  Vector localPt; // [rsp+10h] [rbp-40h] BYREF
  Vector localClosestPt; // [rsp+20h] [rbp-30h] BYREF

  v6 = (*(this->_vptr_ICollideable + 27))(this);
  if ( v6 == 0.0 )
  {
    localPt = vec3_origin;
  }
  else if ( (this->m_nSolidType.m_Value & 0xFD) == 0
         || (v20 = v6,
             v13 = (*(this->_vptr_ICollideable + 5))(this),
             v6 = v20,
             *&v14 = LODWORD(vec3_angle.x),
             vec3_angle.x == *v13)
         && (*&v14 = LODWORD(vec3_angle.y), *&v14 == v13[1])
         && (*&v14 = LODWORD(vec3_angle.z), *&v14 == v13[2]) )
  {
    v19 = v6;
    v7 = (*(this->_vptr_ICollideable + 4))(this);
    v8 = (vecWorldPt->y - v7[1]) * (1.0 / v19);
    v9 = (vecWorldPt->z - v7[2]) * (1.0 / v19);
    localPt.x = (vecWorldPt->x - *v7) * (1.0 / v19);
    localPt.y = v8;
    localPt.z = v9;
  }
  else
  {
    v15 = (*(this->_vptr_ICollideable + 6))(this, COERCE_DOUBLE(LODWORD(v20)), v14);
    VectorITransform(&vecWorldPt->x, v15, &localPt.x);
    v16 = 1.0 / (v20 * v20);
    localPt.x = localPt.x * v16;
    localPt.y = localPt.y * v16;
    localPt.z = v16 * localPt.z;
  }
  CalcClosestPointOnAABB(&this->m_vecMins.m_Value, &this->m_vecMaxs.m_Value, &localPt, &localClosestPt);
  if ( (this->m_nSolidType.m_Value & 0xFD) == 0
    || (v10 = (*(this->_vptr_ICollideable + 5))(this), *&v11 = LODWORD(vec3_angle.x), vec3_angle.x == *v10)
    && (*&v11 = LODWORD(vec3_angle.y), *&v11 == v10[1])
    && (*&v11 = LODWORD(vec3_angle.z), *&v11 == v10[2]) )
  {
    v21 = (*(this->_vptr_ICollideable + 27))(this);
    v17 = (*(this->_vptr_ICollideable + 4))(this);
    pVecNearestWorldPt->x = (localClosestPt.x * v21) + *v17;
    v18 = v21 * localClosestPt.z;
    pVecNearestWorldPt->y = (localClosestPt.y * v21) + v17[1];
    pVecNearestWorldPt->z = v18 + v17[2];
  }
  else
  {
    v12 = (*(this->_vptr_ICollideable + 6))(this, v11);
    VectorTransform(&localClosestPt.x, v12, &pVecNearestWorldPt->x);
  }
}


// CCollisionProperty::CalcDistanceFromPoint  (line 1231, @0x000000000219c1c0, libserver.so)  // inlines: DistTo, FastSqrt, IsBoundsDefinedInEntitySpace, Length, VectorITransform, VectorLength, VectorSubtract, WorldToCollisionSpace, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator/=, operator=, operator==
// calls: CalcClosestPointOnAABB, VectorITransform
// callers: CFuncAreaPortalWindow::IsWindowOpen, CTriggerHurt::RadiationThink, INextBot::GetRangeSquaredTo, INextBot::GetRangeTo, INextBot::IsRangeLessThan, INextBot::IsRangeGreaterThan
float __fastcall CCollisionProperty::CalcDistanceFromPoint(
        const CCollisionProperty *const this,
        const Vector *const vecWorldPt)
{
  float v4; // xmm0_4
  float *v5; // rax
  vec_t v6; // xmm3_4
  vec_t v7; // xmm1_4
  float *v9; // rax
  double v10; // xmm1_8
  const matrix3x4_t *v11; // rax
  float v12; // xmm1_4
  float flDista; // [rsp+0h] [rbp-50h]
  float flDistb; // [rsp+0h] [rbp-50h]
  float flDist; // [rsp+0h] [rbp-50h]
  Vector localPt; // [rsp+10h] [rbp-40h] BYREF
  Vector localClosestPt; // [rsp+20h] [rbp-30h] BYREF

  v4 = (*(this->_vptr_ICollideable + 27))(this);
  if ( v4 == 0.0 )
  {
    localPt = vec3_origin;
  }
  else if ( (this->m_nSolidType.m_Value & 0xFD) == 0
         || (flDist = v4,
             v9 = (*(this->_vptr_ICollideable + 5))(this),
             v4 = flDist,
             *&v10 = LODWORD(vec3_angle.x),
             vec3_angle.x == *v9)
         && (*&v10 = LODWORD(vec3_angle.y), *&v10 == v9[1])
         && (*&v10 = LODWORD(vec3_angle.z), *&v10 == v9[2]) )
  {
    flDista = v4;
    v5 = (*(this->_vptr_ICollideable + 4))(this);
    v6 = (vecWorldPt->y - v5[1]) * (1.0 / flDista);
    v7 = (vecWorldPt->z - v5[2]) * (1.0 / flDista);
    localPt.x = (vecWorldPt->x - *v5) * (1.0 / flDista);
    localPt.y = v6;
    localPt.z = v7;
  }
  else
  {
    v11 = (*(this->_vptr_ICollideable + 6))(this, COERCE_DOUBLE(LODWORD(flDist)), v10);
    VectorITransform(&vecWorldPt->x, v11, &localPt.x);
    v12 = 1.0 / (flDist * flDist);
    localPt.x = localPt.x * v12;
    localPt.y = localPt.y * v12;
    localPt.z = v12 * localPt.z;
  }
  CalcClosestPointOnAABB(&this->m_vecMins.m_Value, &this->m_vecMaxs.m_Value, &localPt, &localClosestPt);
  flDistb = fsqrt(
              (((localPt.x - localClosestPt.x) * (localPt.x - localClosestPt.x))
             + ((localPt.y - localClosestPt.y) * (localPt.y - localClosestPt.y)))
            + ((localPt.z - localClosestPt.z) * (localPt.z - localClosestPt.z)));
  return (*(this->_vptr_ICollideable + 27))(this) * flDistb;
}


// CCollisionProperty::CalcSqrDistanceFromPoint  (line 1248, @0x000000000219c3c0, libserver.so)  // inlines: DistToSqr, IsBoundsDefinedInEntitySpace, LengthSqr, VectorITransform, VectorSubtract, WorldToCollisionSpace, operator/=, operator=, operator==
// calls: CalcClosestPointOnAABB, VectorITransform
float __fastcall CCollisionProperty::CalcSqrDistanceFromPoint(
        const CCollisionProperty *const this,
        const Vector *const vecWorldPt)
{
  float v4; // xmm0_4
  float *v5; // rax
  vec_t v6; // xmm3_4
  vec_t v7; // xmm1_4
  float v8; // xmm0_4
  float *v10; // rax
  double v11; // xmm1_8
  const matrix3x4_t *v12; // rax
  float v13; // xmm1_4
  float flDistSqra; // [rsp+Ch] [rbp-44h]
  float flDistSqrb; // [rsp+Ch] [rbp-44h]
  float flDistSqr; // [rsp+Ch] [rbp-44h]
  Vector localPt; // [rsp+10h] [rbp-40h] BYREF
  Vector localClosestPt; // [rsp+20h] [rbp-30h] BYREF

  v4 = (*(this->_vptr_ICollideable + 27))(this);
  if ( v4 == 0.0 )
  {
    localPt = vec3_origin;
  }
  else if ( (this->m_nSolidType.m_Value & 0xFD) == 0
         || (flDistSqr = v4,
             v10 = (*(this->_vptr_ICollideable + 5))(this),
             v4 = flDistSqr,
             *&v11 = LODWORD(vec3_angle.x),
             vec3_angle.x == *v10)
         && (*&v11 = LODWORD(vec3_angle.y), *&v11 == v10[1])
         && (*&v11 = LODWORD(vec3_angle.z), *&v11 == v10[2]) )
  {
    flDistSqra = v4;
    v5 = (*(this->_vptr_ICollideable + 4))(this);
    v6 = (vecWorldPt->y - v5[1]) * (1.0 / flDistSqra);
    v7 = (vecWorldPt->z - v5[2]) * (1.0 / flDistSqra);
    localPt.x = (vecWorldPt->x - *v5) * (1.0 / flDistSqra);
    localPt.y = v6;
    localPt.z = v7;
  }
  else
  {
    v12 = (*(this->_vptr_ICollideable + 6))(this, COERCE_DOUBLE(LODWORD(flDistSqr)), v11);
    VectorITransform(&vecWorldPt->x, v12, &localPt.x);
    v13 = 1.0 / (flDistSqr * flDistSqr);
    localPt.x = localPt.x * v13;
    localPt.y = localPt.y * v13;
    localPt.z = v13 * localPt.z;
  }
  CalcClosestPointOnAABB(&this->m_vecMins.m_Value, &this->m_vecMaxs.m_Value, &localPt, &localClosestPt);
  flDistSqrb = (((localPt.x - localClosestPt.x) * (localPt.x - localClosestPt.x))
              + ((localPt.y - localClosestPt.y) * (localPt.y - localClosestPt.y)))
             + ((localPt.z - localClosestPt.z) * (localPt.z - localClosestPt.z));
  v8 = (*(this->_vptr_ICollideable + 27))(this);
  return (flDistSqrb * v8) * v8;
}


// CCollisionProperty::ComputeVPhysicsSurroundingBox  (line 1266, @0x000000000219c5b0, libserver.so)  // inlines: VectorMax, VectorMin, fpmax, fpmin, operator=
// calls: CBaseEntity::VPhysicsGetAggregate
// callers: CCollisionProperty::ComputeCollisionSurroundingBox
void __fastcall CCollisionProperty::ComputeVPhysicsSurroundingBox(
        const CCollisionProperty *const this,
        Vector *pVecWorldMins,
        Vector *pVecWorldMaxs)
{
  IPhysAggregateInstance *Aggregate; // rax
  vec_t *v7; // rax
  vec_t v8; // xmm0_4
  Vector vecWorldTriggerMins; // [rsp+0h] [rbp-50h] BYREF
  Vector vecWorldTriggerMaxs; // [rsp+10h] [rbp-40h] BYREF
  vec_t v11; // [rsp+1Ch] [rbp-34h]
  vec_t v12; // [rsp+20h] [rbp-30h]
  vec_t v13; // [rsp+24h] [rbp-2Ch]

  Aggregate = CBaseEntity::VPhysicsGetAggregate(this->m_pOuter);
  if ( Aggregate != 0 )
  {
    (*(Aggregate->_vptr_IPhysAggregateInstance + 43))(Aggregate, &vecWorldTriggerMaxs);
    *pVecWorldMins = vecWorldTriggerMaxs;
    pVecWorldMaxs->x = v11;
    pVecWorldMaxs->y = v12;
    pVecWorldMaxs->z = v13;
  }
  else
  {
    v7 = (*(this->_vptr_ICollideable + 4))(this);
    v8 = *v7;
    pVecWorldMins->x = *v7;
    pVecWorldMins->y = v7[1];
    pVecWorldMins->z = v7[2];
    pVecWorldMaxs->x = v8;
    pVecWorldMaxs->y = pVecWorldMins->y;
    pVecWorldMaxs->z = pVecWorldMins->z;
  }
  if ( (this->m_usSolidFlags.m_Value & 2) != 0 )
  {
    (*(this->_vptr_ICollideable + 3))(this, &vecWorldTriggerMins, &vecWorldTriggerMaxs);
    pVecWorldMins->x = fminf(vecWorldTriggerMins.x, pVecWorldMins->x);
    pVecWorldMins->y = fminf(vecWorldTriggerMins.y, pVecWorldMins->y);
    pVecWorldMins->z = fminf(vecWorldTriggerMins.z, pVecWorldMins->z);
    pVecWorldMaxs->x = fmaxf(vecWorldTriggerMaxs.x, pVecWorldMaxs->x);
    pVecWorldMaxs->y = fmaxf(vecWorldTriggerMaxs.y, pVecWorldMaxs->y);
    pVecWorldMaxs->z = fmaxf(vecWorldTriggerMaxs.z, pVecWorldMaxs->z);
  }
}


// CCollisionProperty::ComputeHitboxSurroundingBox  (line 1298, @0x000000000219c700, libserver.so)
// calls: CBaseAnimating::ComputeHitboxSurroundingBox
// callers: CCollisionProperty::ComputeSurroundingBox
bool __fastcall CCollisionProperty::ComputeHitboxSurroundingBox(
        const CCollisionProperty *const this,
        Vector *pVecWorldMins,
        Vector *pVecWorldMaxs)
{
  CBaseAnimating *v5; // rax

  v5 = (*(this->m_pOuter->_vptr_IHandleEntity + 43))(this->m_pOuter);
  return v5 != 0 && CBaseAnimating::ComputeHitboxSurroundingBox(v5, pVecWorldMins, pVecWorldMaxs);
}


// CCollisionProperty::ComputeOBBBounds  (line 1313, @0x000000000219c910, libserver.so)
// calls: CCollisionProperty::ComputeCollisionSurroundingBox, CBaseEntity::VPhysicsGetObject
// callers: CCollisionProperty::ComputeRotationExpandedSequenceBounds, CCollisionProperty::ComputeSurroundingBox
void __fastcall CCollisionProperty::ComputeOBBBounds(
        const CCollisionProperty *const this,
        Vector *pVecWorldMins,
        Vector *pVecWorldMaxs)
{
  char v6; // si
  CBaseModelEntity *m_pOuter; // rdi
  IPhysicsObject *Object; // rdi

  if ( (*(this->_vptr_ICollideable + 7))(this) == 6
    && (m_pOuter = this->m_pOuter)->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS
    && (Object = CBaseEntity::VPhysicsGetObject(m_pOuter)) != 0 )
  {
    v6 = (*(*Object + 1464LL))(Object);
  }
  else
  {
    v6 = 0;
  }
  CCollisionProperty::ComputeCollisionSurroundingBox(this, v6, pVecWorldMins, pVecWorldMaxs);
}


// CCollisionProperty::ComputeRotationExpandedSequenceBounds  (line 1329, @0x000000000219c980, libserver.so)  // inlines: GetSequence, VectorAdd, VectorMax, VectorMin, fpmax, fpmin
// calls: CBaseAnimating::GetModelPtr, CBaseAnimating::GetBaseAnimatingController, CModel::GetSequenceBounds, CBaseEntity::EntityToWorldTransform, RotateAABB, CCollisionProperty::ComputeOBBBounds
// callers: CCollisionProperty::ComputeSurroundingBox
void __fastcall CCollisionProperty::ComputeRotationExpandedSequenceBounds(
        const CCollisionProperty *const this,
        Vector *pVecWorldMins,
        Vector *pVecWorldMaxs)
{
  const CBaseAnimating *v6; // rax
  CBaseAnimating *v7; // r12
  const CBaseAnimatingController *BaseAnimatingController; // rax
  const CModel *ModelPtr; // rax
  matrix3x4_t *v10; // rax
  int (**vptr_ICollideable)(...); // rax
  float *v12; // rax
  float *v13; // rax
  HSequence hSequence; // [rsp+4h] [rbp-7Ch]
  Vector refMins; // [rsp+10h] [rbp-70h] BYREF
  Vector refMaxs; // [rsp+20h] [rbp-60h] BYREF
  Vector mins; // [rsp+30h] [rbp-50h] BYREF
  Vector maxs; // [rsp+40h] [rbp-40h] BYREF

  v6 = (*(this->m_pOuter->_vptr_IHandleEntity + 43))(this->m_pOuter);
  v7 = v6;
  if ( v6 != 0 && CBaseAnimating::GetModelPtr(v6) != 0 )
  {
    BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v7);
    hSequence.m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
    ModelPtr = CBaseAnimating::GetModelPtr(v7);
    CModel::GetSequenceBounds(ModelPtr, hSequence, &refMins, &refMaxs);
    v10 = CBaseEntity::EntityToWorldTransform(v7);
    RotateAABB(v10, &refMins, &refMaxs, &mins, &maxs);
    vptr_ICollideable = this->_vptr_ICollideable;
    mins.x = fminf(mins.x, this->m_vecMins.m_Value.x);
    mins.y = fminf(mins.y, this->m_vecMins.m_Value.y);
    mins.z = fminf(mins.z, this->m_vecMins.m_Value.z);
    maxs.x = fmaxf(maxs.x, this->m_vecMaxs.m_Value.x);
    maxs.y = fmaxf(maxs.y, this->m_vecMaxs.m_Value.y);
    maxs.z = fmaxf(maxs.z, this->m_vecMaxs.m_Value.z);
    v12 = (vptr_ICollideable[4])(this);
    pVecWorldMins->x = mins.x + *v12;
    pVecWorldMins->y = mins.y + v12[1];
    pVecWorldMins->z = mins.z + v12[2];
    v13 = (*(this->_vptr_ICollideable + 4))(this);
    pVecWorldMaxs->x = maxs.x + *v13;
    pVecWorldMaxs->y = maxs.y + v13[1];
    pVecWorldMaxs->z = maxs.z + v13[2];
  }
  else
  {
    CCollisionProperty::ComputeOBBBounds(this, pVecWorldMins, pVecWorldMaxs);
  }
}


// CCollisionProperty::ComputeEntitySpaceHitboxSurroundingBox  (line 1370, @0x000000000219c740, libserver.so)
// calls: CBaseAnimating::ComputeEntitySpaceHitboxSurroundingBox
bool __fastcall CCollisionProperty::ComputeEntitySpaceHitboxSurroundingBox(
        const CCollisionProperty *const this,
        Vector *pVecWorldMins,
        Vector *pVecWorldMaxs)
{
  CBaseAnimating *v5; // rax

  v5 = (*(this->m_pOuter->_vptr_IHandleEntity + 43))(this->m_pOuter);
  return v5 != 0 && CBaseAnimating::ComputeEntitySpaceHitboxSurroundingBox(v5, pVecWorldMins, pVecWorldMaxs);
}


// CCollisionProperty::ComputeRotationExpandedBounds  (line 1384, @0x000000000219c780, libserver.so)  // inlines: FloatMakePositive, IsBoundsDefinedInEntitySpace, operator*=, operator=
// callers: CCollisionProperty::ComputeSurroundingBox
void __fastcall CCollisionProperty::ComputeRotationExpandedBounds(
        const CCollisionProperty *const this,
        Vector *pVecWorldMins,
        Vector *pVecWorldMaxs)
{
  vec_t v5; // xmm2_4
  vec_t v6; // xmm3_4
  vec_t v7; // xmm3_4
  float v8; // xmm0_4
  vec_t v9; // xmm1_4
  vec_t v10; // xmm0_4

  if ( (this->m_nSolidType.m_Value & 0xFD) != 0 )
  {
    v5 = fmaxf(fabs(this->m_vecMins.m_Value.x), fabs(this->m_vecMaxs.m_Value.x));
    pVecWorldMins->x = -v5;
    pVecWorldMaxs->x = v5;
    v6 = fmaxf(fabs(this->m_vecMins.m_Value.y), fabs(this->m_vecMaxs.m_Value.y));
    pVecWorldMins->y = -v6;
    pVecWorldMaxs->y = v6;
    v7 = fmaxf(fabs(this->m_vecMins.m_Value.z), fabs(this->m_vecMaxs.m_Value.z));
    pVecWorldMins->z = -v7;
    pVecWorldMaxs->z = v7;
  }
  else
  {
    *pVecWorldMins = this->m_vecMins.m_Value;
    *pVecWorldMaxs = this->m_vecMaxs.m_Value;
  }
  v8 = (*(this->_vptr_ICollideable + 27))(this);
  if ( v8 != 1.0 )
  {
    pVecWorldMins->x = pVecWorldMins->x * v8;
    pVecWorldMins->y = pVecWorldMins->y * v8;
    pVecWorldMins->z = pVecWorldMins->z * v8;
    pVecWorldMaxs->x = pVecWorldMaxs->x * v8;
    v9 = pVecWorldMaxs->y * v8;
    v10 = v8 * pVecWorldMaxs->z;
    pVecWorldMaxs->y = v9;
    pVecWorldMaxs->z = v10;
  }
}


// CCollisionProperty::ComputeCollisionSurroundingBox  (line 1422, @0x000000000219c8e0, libserver.so)
// calls: CCollisionProperty::ComputeVPhysicsSurroundingBox
// callers: CCollisionProperty::ComputeOBBBounds, CCollisionProperty::ComputeSurroundingBox
void __fastcall CCollisionProperty::ComputeCollisionSurroundingBox(
        const CCollisionProperty *const this,
        bool bUseVPhysics,
        Vector *pVecWorldMins,
        Vector *pVecWorldMaxs)
{
  if ( bUseVPhysics )
    CCollisionProperty::ComputeVPhysicsSurroundingBox(this, pVecWorldMins, pVecWorldMaxs);
  else
    (*(this->_vptr_ICollideable + 3))(this, pVecWorldMins, pVecWorldMaxs);
}


// CCollisionProperty::ComputeSurroundingBox  (line 1454, @0x000000000219cb20, libserver.so)  // inlines: ComputeCollisionSurroundingBox, VectorMA
// calls: CCollisionProperty::ComputeRotationExpandedSequenceBounds, CCollisionProperty::ComputeOBBBounds, CCollisionProperty::ComputeCollisionSurroundingBox, CCollisionProperty::ComputeHitboxSurroundingBox, CCollisionProperty::ComputeRotationExpandedBounds
// callers: CCollisionProperty::WorldSpaceSurroundingBounds
// globals: jpt_219CB48
void __fastcall CCollisionProperty::ComputeSurroundingBox(
        const CCollisionProperty *const this,
        Vector *pVecWorldMins,
        Vector *pVecWorldMaxs)
{
  float *v4; // rax
  float *v5; // rax
  char v6; // al
  float v10; // [rsp+18h] [rbp-18h]
  float v11; // [rsp+18h] [rbp-18h]

  switch ( this->m_nSurroundType.m_Value )
  {
    case SurroundingBoundsType_t::USE_OBB_COLLISION_BOUNDS:
      CCollisionProperty::ComputeOBBBounds(this, pVecWorldMins, pVecWorldMaxs);
      break;
    case SurroundingBoundsType_t::USE_BEST_COLLISION_BOUNDS:
      v6 = (*(this->_vptr_ICollideable + 7))(this);
      CCollisionProperty::ComputeCollisionSurroundingBox(this, v6 == 6, pVecWorldMins, pVecWorldMaxs);
      break;
    case SurroundingBoundsType_t::USE_HITBOXES:
      CCollisionProperty::ComputeHitboxSurroundingBox(this, pVecWorldMins, pVecWorldMaxs);
      break;
    case SurroundingBoundsType_t::USE_SPECIFIED_BOUNDS:
      v10 = (*(this->_vptr_ICollideable + 27))(this);
      v4 = (*(this->_vptr_ICollideable + 4))(this);
      pVecWorldMins->x = (this->m_vecSpecifiedSurroundingMins.m_Value.x * v10) + *v4;
      pVecWorldMins->y = (this->m_vecSpecifiedSurroundingMins.m_Value.y * v10) + v4[1];
      pVecWorldMins->z = (v10 * this->m_vecSpecifiedSurroundingMins.m_Value.z) + v4[2];
      v11 = (*(this->_vptr_ICollideable + 27))(this);
      v5 = (*(this->_vptr_ICollideable + 4))(this);
      pVecWorldMaxs->x = (this->m_vecSpecifiedSurroundingMaxs.m_Value.x * v11) + *v5;
      pVecWorldMaxs->y = (this->m_vecSpecifiedSurroundingMaxs.m_Value.y * v11) + v5[1];
      pVecWorldMaxs->z = (v11 * this->m_vecSpecifiedSurroundingMaxs.m_Value.z) + v5[2];
      break;
    case SurroundingBoundsType_t::USE_GAME_CODE:
      (*(this->m_pOuter->_vptr_IHandleEntity + 63))(this->m_pOuter, pVecWorldMins, pVecWorldMaxs);
      break;
    case SurroundingBoundsType_t::USE_ROTATION_EXPANDED_BOUNDS:
      CCollisionProperty::ComputeRotationExpandedBounds(this, pVecWorldMins, pVecWorldMaxs);
      break;
    case SurroundingBoundsType_t::USE_COLLISION_BOUNDS_NEVER_VPHYSICS:
      (*(this->_vptr_ICollideable + 3))(this, pVecWorldMins, pVecWorldMaxs);
      break;
    case SurroundingBoundsType_t::USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS:
      CCollisionProperty::ComputeRotationExpandedSequenceBounds(this, pVecWorldMins, pVecWorldMaxs);
      break;
    default:
      return;
  }
}


// CCollisionProperty::SetSurroundingBoundsType  (line 1546, @0x000000000219ccb0, libserver.so)  // inlines: NetworkStateChanged, Set, operator!=, operator=, operator=<SurroundingBoundsType_t>
// callers: CRagdollProp::VPhysicsUpdate, CRagdollProp::CalcRagdollSize, CRagdollProp::RagdollPostActivate, CSprite::PreFirstNetworkUpdate, CSprite::Spawn
void __fastcall CCollisionProperty::SetSurroundingBoundsType(
        CCollisionProperty *const this,
        SurroundingBoundsType_t type,
        const Vector *pMins,
        const Vector *pMaxs)
{
  bool v8; // zf

  if ( this->m_nSurroundType.m_Value != type )
  {
    (*(this->_vptr_ICollideable + 31))(this, 85, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nSurroundType.m_Value = type;
  }
  if ( type == SurroundingBoundsType_t::USE_SPECIFIED_BOUNDS )
  {
    if ( pMins->x == this->m_vecSpecifiedSurroundingMins.m_Value.x
      && pMins->y == this->m_vecSpecifiedSurroundingMins.m_Value.y
      && pMins->z == this->m_vecSpecifiedSurroundingMins.m_Value.z )
    {
      v8 = pMaxs->x == this->m_vecSpecifiedSurroundingMaxs.m_Value.x;
    }
    else
    {
      (*(this->_vptr_ICollideable + 31))(this, 92, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_vecSpecifiedSurroundingMins.m_Value.x = pMins->x;
      this->m_vecSpecifiedSurroundingMins.m_Value.y = pMins->y;
      this->m_vecSpecifiedSurroundingMins.m_Value.z = pMins->z;
      v8 = pMaxs->x == this->m_vecSpecifiedSurroundingMaxs.m_Value.x;
    }
    if ( !v8
      || pMaxs->y != this->m_vecSpecifiedSurroundingMaxs.m_Value.y
      || pMaxs->z != this->m_vecSpecifiedSurroundingMaxs.m_Value.z )
    {
      (*(this->_vptr_ICollideable + 31))(this, 104, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_vecSpecifiedSurroundingMaxs.m_Value.x = pMaxs->x;
      this->m_vecSpecifiedSurroundingMaxs.m_Value.y = pMaxs->y;
      this->m_vecSpecifiedSurroundingMaxs.m_Value.z = pMaxs->z;
    }
    this->m_vecSurroundingMins.x = pMins->x;
    this->m_vecSurroundingMins.y = pMins->y;
    this->m_vecSurroundingMins.z = pMins->z;
    this->m_vecSurroundingMaxs.x = pMaxs->x;
    this->m_vecSurroundingMaxs.y = pMaxs->y;
    this->m_vecSurroundingMaxs.z = pMaxs->z;
  }
  else
  {
    (*(this->_vptr_ICollideable + 25))(this);
  }
}


// CCollisionProperty::MarkSurroundingBoundsDirty  (line 1573, @0x0000000002189280, libserver.so)  // inlines: AddEFlags, MarkPVSInformationDirty
void __fastcall CCollisionProperty::MarkSurroundingBoundsDirty(CCollisionProperty *const this)
{
  if ( (*(this->m_pOuter->_vptr_IHandleEntity + 143))(this->m_pOuter) == 0 )
  {
    this->m_pOuter->m_iEFlags |= 0x4000u;
    (*(this->_vptr_ICollideable + 21))(this);
    this->m_pOuter->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  }
}


// CCollisionProperty::DoesVPhysicsInvalidateSurroundingBox  (line 1593, @0x0000000002189460, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject
bool __fastcall CCollisionProperty::DoesVPhysicsInvalidateSurroundingBox(const CCollisionProperty *const this)
{
  __int64 v1; // rsi
  bool result; // al
  SurroundingBoundsType_t m_Value; // cl
  __int64 v5; // rdx
  CBaseModelEntity *m_pOuter; // rdi

  result = 1;
  m_Value = this->m_nSurroundType.m_Value;
  if ( m_Value <= SurroundingBoundsType_t::USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS )
  {
    result = 0;
    if ( ((1LL << m_Value) & 0xEC) == 0 )
    {
      v5 = (1LL << m_Value) & 1;
      result = 1;
      if ( v5 != 0 )
        return (*(this->_vptr_ICollideable + 7))(this, v1, v5) == 6
            && (m_pOuter = this->m_pOuter)->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS
            && CBaseEntity::VPhysicsGetObject(m_pOuter) != 0;
    }
  }
  return result;
}


// CCollisionProperty::WorldSpaceSurroundingBounds  (line 1624, @0x000000000219cf80, libserver.so)  // inlines: RemoveEFlags, VectorAdd, VectorSubtract, operator=
// calls: CCollisionProperty::ComputeSurroundingBox
void __fastcall CCollisionProperty::WorldSpaceSurroundingBounds(
        const CCollisionProperty *const this,
        Vector *pVecMins,
        Vector *pVecMaxs)
{
  float *v6; // rax
  CBaseModelEntity *m_pOuter; // rdx
  int m_iEFlags; // ecx
  vec_t x; // xmm0_4
  vec_t z; // xmm1_4
  const Vector *vecAbsOrigin; // [rsp+8h] [rbp-28h]

  v6 = (*(this->_vptr_ICollideable + 4))(this);
  m_pOuter = this->m_pOuter;
  m_iEFlags = m_pOuter->m_iEFlags;
  if ( (m_iEFlags & 0x4000) != 0 )
  {
    BYTE1(m_iEFlags) &= ~0x40u;
    m_pOuter->m_iEFlags = m_iEFlags;
    vecAbsOrigin = v6;
    x = vec3_origin.x;
    pVecMaxs->y = vec3_origin.y;
    z = vec3_origin.z;
    pVecMaxs->x = x;
    pVecMaxs->z = z;
    pVecMins->x = x;
    pVecMins->y = pVecMaxs->y;
    pVecMins->z = pVecMaxs->z;
    CCollisionProperty::ComputeSurroundingBox(this, pVecMins, pVecMaxs);
    this->m_vecSurroundingMins.x = pVecMins->x - vecAbsOrigin->x;
    this->m_vecSurroundingMins.y = pVecMins->y - vecAbsOrigin->y;
    this->m_vecSurroundingMins.z = pVecMins->z - vecAbsOrigin->z;
    this->m_vecSurroundingMaxs.x = pVecMaxs->x - vecAbsOrigin->x;
    this->m_vecSurroundingMaxs.y = pVecMaxs->y - vecAbsOrigin->y;
    this->m_vecSurroundingMaxs.z = pVecMaxs->z - vecAbsOrigin->z;
  }
  else
  {
    pVecMins->x = this->m_vecSurroundingMins.x + *v6;
    pVecMins->y = this->m_vecSurroundingMins.y + v6[1];
    pVecMins->z = this->m_vecSurroundingMins.z + v6[2];
    pVecMaxs->x = this->m_vecSurroundingMaxs.x + *v6;
    pVecMaxs->y = this->m_vecSurroundingMaxs.y + v6[1];
    pVecMaxs->z = this->m_vecSurroundingMaxs.z + v6[2];
  }
}


// CCollisionProperty::SetTriggerCollisionGroup  (line 1648, @0x000000000219ce90, libserver.so)  // inlines: GetCollisionGroup_Inline
// calls: CCollisionProperty::SetCollisionGroup
// callers: CBaseCombatWeapon::Materialize, CItemSoda::CanThink, CItem::ComeToRest, CItem::Respawn, CTriggerBrush::Spawn, CBaseTrigger::InputToggle, CPlatTrigger::SpawnInsideTrigger
void __fastcall CCollisionProperty::SetTriggerCollisionGroup(CCollisionProperty *const this)
{
  int m_Value; // eax

  m_Value = this->m_CollisionGroup.m_Value;
  if ( m_Value != 2 && m_Value != 14 )
    CCollisionProperty::SetCollisionGroup(this, 2);
}


// CCollisionProperty::RemoveTriggerCollisionGroup  (line 1662, @0x000000000219ceb0, libserver.so)
// calls: CCollisionProperty::SetCollisionGroup
// callers: CBaseCombatCharacter::Weapon_DropAll, CBaseCombatWeapon::Equip, CItem::ActivateWhenAtRest, CBaseTrigger::InputToggle
void __fastcall CCollisionProperty::RemoveTriggerCollisionGroup(CCollisionProperty *const this)
{
  CCollisionProperty::SetCollisionGroup(this, 4);
}


// CCollisionProperty::IsTriggerCollisionGroup  (line 1669, @0x000000000219cec0, libserver.so)  // inlines: GetCollisionGroup_Inline
// callers: CBaseEntity::PhysicsTouchTriggers, CBaseEntity::OnTakeDamage, CBaseEntity::PhysicsRelinkChildren, CBasePlayer::Touch, CBasePlayer::OnTakeDamage_Alive, CBaseEntity::PhysicsMarkEntityAsTouched, CBaseTrigger::InputToggle
bool __fastcall CCollisionProperty::IsTriggerCollisionGroup(const CCollisionProperty *const this)
{
  return this->m_CollisionGroup.m_Value == 2 || this->m_CollisionGroup.m_Value == 14;
}


// CCollisionProperty::MarkPartitionHandleDirty  (line 1679, @0x00000000021964c0, libserver.so)  // inlines: AddEFlags
// calls: CDirtySpatialPartitionEntityList::AddEntity
// globals: s_DirtyKDTree
void __fastcall CCollisionProperty::MarkPartitionHandleDirty(CCollisionProperty *const this)
{
  CBaseModelEntity *m_pOuter; // rsi

  m_pOuter = this->m_pOuter;
  if ( (m_pOuter->m_iEFlags & 0x8000) == 0 )
  {
    CDirtySpatialPartitionEntityList::AddEntity(&s_DirtyKDTree, m_pOuter);
    this->m_pOuter->m_iEFlags |= 0x8000u;
  }
}


// CCollisionProperty::UpdatePartition  (line 1704, @0x000000000219d280, libserver.so)  // inlines: GetComponent<CBodyComponent>, GetComponent<CHitboxComponent>, GetSkeletonInstance, RemoveEFlags, operator[]
// calls: CPhysicsGameSystem::ForceUpdateIfKeyframed, CCollisionProperty::UpdateLocateHandle, CHitboxComponent::UpdateHitboxes
// callers: CBaseModelEntity::OnRestore, CDirtySpatialPartitionEntityList::UpdateDirtySpatialPartitionEntities
void __fastcall CCollisionProperty::UpdatePartition(CCollisionProperty *const this)
{
  CBaseModelEntity *m_pOuter; // rax
  int m_iEFlags; // edx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  CEntityClass::ComponentOffsets_t *m_pMemory; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  CSkeletonInstance *v9; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int64 m_nBaseOffset; // rdi
  CHitboxComponent *v12; // rdi

  m_pOuter = this->m_pOuter;
  m_iEFlags = m_pOuter->m_iEFlags;
  if ( (m_iEFlags & 0x8000u) != 0 )
  {
    BYTE1(m_iEFlags) &= ~0x80u;
    m_pOuter->m_iEFlags = m_iEFlags;
    if ( this->m_bHitboxEnabled.m_Value )
    {
      m_pEntity = this->m_pOuter->m_pEntity;
      m_pInstance = m_pEntity->m_pInstance;
      if ( m_pEntity->m_pInstance == 0 )
        goto LABEL_9;
      m_pMemory = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory;
      m_nBaseOffset = m_pMemory[CHitboxComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
      if ( m_nBaseOffset == 0xFFFF || (v12 = (m_pInstance + m_nBaseOffset)) == 0 )
      {
LABEL_5:
        v7 = m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
        if ( v7 != 0xFFFF )
        {
          v8 = *(&m_pInstance->_vptr_IHandleEntity + v7);
          if ( v8 != 0 )
          {
            v9 = (*(**(v8 + 8) + 72LL))(*(v8 + 8));
            if ( v9 != 0 )
              CPhysicsGameSystem::ForceUpdateIfKeyframed(
                g_pPhysicsGameSystem,
                v9,
                CPhysicsGameSystem::anim_update_t::DEFER_ANIMATED_OBJECTS,
                0);
          }
        }
        goto LABEL_9;
      }
      CHitboxComponent::UpdateHitboxes(v12, this);
    }
    v4 = this->m_pOuter->m_pEntity;
    m_pInstance = v4->m_pInstance;
    if ( v4->m_pInstance != 0 )
    {
      m_pMemory = v4->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory;
      goto LABEL_5;
    }
LABEL_9:
    CCollisionProperty::UpdateLocateHandle(this);
  }
}


// CCollisionProperty::UpdateLocateHandle  (line 1729, @0x000000000219cee0, libserver.so)
// calls: CGamePhysicsQueryInterface::RemoveLocatableEntity, CGamePhysicsQueryInterface::UpdateLocatableEntity, CGamePhysicsQueryInterface::AddLocatableEntity
// callers: CBaseModelEntity::Activate, CBaseAnimating::Activate, CBaseProp::Activate, CBaseCombatWeapon::PreFirstNetworkUpdate, CBaseCombatWeapon::Spawn, CCollisionProperty::SetupPhysicsAsPoint, CCollisionProperty::SetSolid, CCollisionProperty::UpdatePartition, CDOTABaseAbility::Spawn, CDOTA_Item::Spawn, CEconWearable::OnNewModel, CEconWearable::Spawn
void __fastcall CCollisionProperty::UpdateLocateHandle(CCollisionProperty *const this)
{
  if ( (this->m_pOuter->m_iEFlags & 0x40000) == 0 || (*(this->_vptr_ICollideable + 7))(this) != 0 )
  {
    if ( this->m_hLocateHandle.m_Data != 0xFFFF )
    {
      CGamePhysicsQueryInterface::RemoveLocatableEntity(g_pPhysicsQuery, this->m_hLocateHandle, this->m_pOuter);
      this->m_hLocateHandle.m_Data = -1;
    }
  }
  else if ( this->m_hLocateHandle.m_Data == 0xFFFF )
  {
    this->m_hLocateHandle = CGamePhysicsQueryInterface::AddLocatableEntity(g_pPhysicsQuery, this->m_pOuter);
  }
  else
  {
    CGamePhysicsQueryInterface::UpdateLocatableEntity(g_pPhysicsQuery, this->m_hLocateHandle, this->m_pOuter);
  }
}


// CCollisionProperty::UpdateCollisionAttributes  (line 1756, @0x0000000002199c20, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetCollisionGroup_Inline, GetForModify, IsTriggerCollisionGroup, NetworkStateChanged, Release, VPhysicsCollisionAttribute_t, entindex, ~CCollisionAttributeWriter
// calls: VPhysicsCollisionAttribute_t::operator=, CCollisionProperty::CheckForUntouch, CBaseEntity::GetRootMoveParent, CEntityInstance::GetEntityIndex, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
const RnCollisionAttr_t *__fastcall CCollisionProperty::UpdateCollisionAttributes(CCollisionProperty *const this)
{
  unsigned __int8 m_Value; // al
  CBaseEntity *RootMoveParent; // rax
  CEntityIndex v4; // eax
  unsigned __int16 m_Data; // dx
  bool v6; // zf
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-60h] BYREF

  writer.m_pCollisionProp = this;
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_collisionAttribute);
  m_Value = this->m_CollisionGroup.m_Value;
  if ( m_Value == 14 || m_Value == 2 )
  {
    if ( m_Value == 4 )
    {
      writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value = 2;
    }
    else if ( m_Value == 14 )
    {
      writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value = 14;
    }
  }
  else
  {
    writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value = m_Value;
  }
  CCollisionProperty::CheckForUntouch(this);
  RootMoveParent = CBaseEntity::GetRootMoveParent(this->m_pOuter);
  v4.m_Data = CEntityInstance::GetEntityIndex(RootMoveParent).m_Data;
  m_Data = 0;
  if ( v4.m_Data >= 0 )
    m_Data = v4.m_Data;
  v6 = !writer.m_bReleased;
  writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value = m_Data;
  if ( !v6 )
    return &writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs;
  writer.m_bReleased = 1;
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
    (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &writer.m_pCollisionProp->m_collisionAttribute,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( writer.m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value == writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
    return &writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs;
  (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
    &writer.m_pCollisionProp->m_collisionAttribute,
    39,
    0xFFFFFFFFLL,
    0xFFFFFFFFLL);
  return &writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs;
}


// CCollisionProperty::IsCollisionEnabled  (line 1798, @0x000000000218a870, libserver.so)  // inlines: IsSolid
bool __fastcall CCollisionProperty::IsCollisionEnabled(const CCollisionProperty *const this)
{
  return ((*((*(this->_vptr_ICollideable + 13))(this) + 31) & 1) != 0
       || (*((*(this->_vptr_ICollideable + 13))(this) + 31) & 2) != 0)
      && this->m_nSolidType.m_Value != SolidType_t::SOLID_NONE;
}


