
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTraceFilter::~CTraceFilter  (line 159, @0x00000000020327e0, libserver.so)
void __fastcall CTraceFilter::~CTraceFilter(CTraceFilter *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// CTraceFilter::~CTraceFilter  (line 159, @0x0000000002032ca0, libserver.so)  // inlines: ~CTraceFilter
// calls: operator delete
void __fastcall CTraceFilter::~CTraceFilter(CTraceFilter *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CTraceFilterEntitiesOnly::~CTraceFilterEntitiesOnly  (line 220, @0x0000000002370ac0, libserver.so)  // inlines: ~CTraceFilter
void __fastcall CTraceFilterEntitiesOnly::~CTraceFilterEntitiesOnly(CTraceFilterEntitiesOnly *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// CTraceFilterEntitiesOnly::~CTraceFilterEntitiesOnly  (line 220, @0x0000000002372240, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterEntitiesOnly
// calls: operator delete
void __fastcall CTraceFilterEntitiesOnly::~CTraceFilterEntitiesOnly(CTraceFilterEntitiesOnly *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CTraceFilterEntitiesOnly::ShouldHitEntity  (line 227, @0x00000000023704d0, libserver.so)
bool __fastcall CTraceFilterEntitiesOnly::ShouldHitEntity(
        CTraceFilterEntitiesOnly *const this,
        CBaseEntity *pServerEntity)
{
  return 1;
}


// CTraceFilterSimple::~CTraceFilterSimple  (line 233, @0x00000000020f10b0, libserver.so)  // inlines: ~CTraceFilter
void __fastcall CTraceFilterSimple::~CTraceFilterSimple(CTraceFilterSimple *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// CTraceFilterSimple::~CTraceFilterSimple  (line 233, @0x00000000020f4ad0, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple
// calls: operator delete
void __fastcall CTraceFilterSimple::~CTraceFilterSimple(CTraceFilterSimple *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CTraceFilterSimple::SetPassEntity  (line 242, @0x0000000002032e20, libserver.so)  // inlines: SetEntityToIgnore, SetIgnoreEntity
// calls: EntityIDFromBaseEntity, HierarchyIDFromBaseEntity
void __fastcall CTraceFilterSimple::SetPassEntity(CTraceFilterSimple *const this, const CBaseEntity *pPassEntity)
{
  this->m_pPassEnt = pPassEntity;
  if ( pPassEntity != 0 )
  {
    this->m_attr.m_nEntityIdToIgnore = EntityIDFromBaseEntity(pPassEntity);
    this->m_attr.m_nHierarchyId = HierarchyIDFromBaseEntity(pPassEntity);
  }
}


// CTraceFilterSkipTwoEntities::~CTraceFilterSkipTwoEntities  (line 257, @0x00000000020f1400, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple
void __fastcall CTraceFilterSkipTwoEntities::~CTraceFilterSkipTwoEntities(CTraceFilterSkipTwoEntities *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// CTraceFilterSkipTwoEntities::~CTraceFilterSkipTwoEntities  (line 257, @0x00000000020f4b50, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple, ~CTraceFilterSkipTwoEntities
// calls: operator delete
void __fastcall CTraceFilterSkipTwoEntities::~CTraceFilterSkipTwoEntities(CTraceFilterSkipTwoEntities *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CTraceFilterSkipTwoEntities::SetPassEntity2  (line 265, @0x00000000020f10a0, libserver.so)
void __fastcall CTraceFilterSkipTwoEntities::SetPassEntity2(
        CTraceFilterSkipTwoEntities *const this,
        const CBaseEntity *pPassEntity2)
{
  this->m_pPassEnt2 = pPassEntity2;
}


// CTraceFilterSimpleList::~CTraceFilterSimpleList  (line 274, @0x00000000020fc050, libserver.so)  // inlines: Purge, RemoveAll, ~CTraceFilter, ~CTraceFilterSimple, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CBaseEntity*, int>::Purge
void __fastcall CTraceFilterSimpleList::~CTraceFilterSimpleList(CTraceFilterSimpleList *const this)
{
  bool v2; // zf
  CUtlVectorBase<CBaseEntity*,CUtlMemory<CBaseEntity*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_PassEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CTraceFilter = off_3FF78D0;
  this->m_PassEntities.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_PassEntities.m_Memory,
        CUtlMemory<CBaseEntity *,int>::Purge(&this->m_PassEntities.m_Memory),
        (this->m_PassEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_CTraceFilter = off_3FE6970;
  }
  else
  {
    CUtlMemory<CBaseEntity *,int>::Purge(p_m_Memory);
    this->_vptr_CTraceFilter = off_3FE6970;
  }
}


// CTraceFilterSimpleList::~CTraceFilterSimpleList  (line 274, @0x00000000020fc5c0, libserver.so)  // inlines: Purge, RemoveAll, ~CTraceFilter, ~CTraceFilterSimple, ~CTraceFilterSimpleList, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<CBaseEntity*, int>::Purge
void __fastcall CTraceFilterSimpleList::~CTraceFilterSimpleList(CTraceFilterSimpleList *const this)
{
  bool v2; // zf
  CUtlVectorBase<CBaseEntity*,CUtlMemory<CBaseEntity*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_PassEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CTraceFilter = off_3FF78D0;
  this->m_PassEntities.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_PassEntities.m_Memory;
    CUtlMemory<CBaseEntity *,int>::Purge(&this->m_PassEntities.m_Memory);
    if ( (this->m_PassEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(p_m_Memory);
  }
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CTraceFilterNoNPCsOrPlayer::~CTraceFilterNoNPCsOrPlayer  (line 290, @0x00000000020f21f0, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple
void __fastcall CTraceFilterNoNPCsOrPlayer::~CTraceFilterNoNPCsOrPlayer(CTraceFilterNoNPCsOrPlayer *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// CTraceFilterNoNPCsOrPlayer::~CTraceFilterNoNPCsOrPlayer  (line 290, @0x00000000020f4ca0, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterNoNPCsOrPlayer, ~CTraceFilterSimple
// calls: operator delete
void __fastcall CTraceFilterNoNPCsOrPlayer::~CTraceFilterNoNPCsOrPlayer(CTraceFilterNoNPCsOrPlayer *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CTraceFilterLOS::~CTraceFilterLOS  (line 303, @0x00000000020f21e0, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple, ~CTraceFilterSkipTwoEntities
void __fastcall CTraceFilterLOS::~CTraceFilterLOS(CTraceFilterLOS *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// CTraceFilterLOS::~CTraceFilterLOS  (line 303, @0x00000000020f4c80, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterLOS, ~CTraceFilterSimple, ~CTraceFilterSkipTwoEntities
// calls: operator delete
void __fastcall CTraceFilterLOS::~CTraceFilterLOS(CTraceFilterLOS *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CTraceFilterSimpleClassnameList::~CTraceFilterSimpleClassnameList  (line 332, @0x00000000020fbde0, libserver.so)  // inlines: Purge, RemoveAll, ~CTraceFilter, ~CTraceFilterSimple, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<char const*, int>::Purge
void __fastcall CTraceFilterSimpleClassnameList::~CTraceFilterSimpleClassnameList(
        CTraceFilterSimpleClassnameList *const this)
{
  bool v2; // zf
  CUtlVectorBase<char const*,CUtlMemory<char const*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_PassClassnames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CTraceFilter = off_3FF7990;
  this->m_PassClassnames.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_PassClassnames.m_Memory,
        CUtlMemory<char const*,int>::Purge(&this->m_PassClassnames.m_Memory),
        (this->m_PassClassnames.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_CTraceFilter = off_3FE6970;
  }
  else
  {
    CUtlMemory<char const*,int>::Purge(p_m_Memory);
    this->_vptr_CTraceFilter = off_3FE6970;
  }
}


// CTraceFilterSimpleClassnameList::~CTraceFilterSimpleClassnameList  (line 332, @0x00000000020fbff0, libserver.so)  // inlines: Purge, RemoveAll, ~CTraceFilter, ~CTraceFilterSimple, ~CTraceFilterSimpleClassnameList, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<char const*, int>::Purge
void __fastcall CTraceFilterSimpleClassnameList::~CTraceFilterSimpleClassnameList(
        CTraceFilterSimpleClassnameList *const this)
{
  bool v2; // zf
  CUtlVectorBase<char const*,CUtlMemory<char const*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_PassClassnames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CTraceFilter = off_3FF7990;
  this->m_PassClassnames.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_PassClassnames.m_Memory;
    CUtlMemory<char const*,int>::Purge(&this->m_PassClassnames.m_Memory);
    if ( (this->m_PassClassnames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char const*,int>::Purge(p_m_Memory);
  }
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CTraceFilterChain::~CTraceFilterChain  (line 346, @0x00000000020f21c0, libserver.so)  // inlines: ~CTraceFilter
void __fastcall CTraceFilterChain::~CTraceFilterChain(CTraceFilterChain *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// CTraceFilterChain::~CTraceFilterChain  (line 346, @0x00000000020f4c40, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterChain
// calls: operator delete
void __fastcall CTraceFilterChain::~CTraceFilterChain(CTraceFilterChain *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CTraceFilterSkipClassname::~CTraceFilterSkipClassname  (line 361, @0x00000000020f21d0, libserver.so)  // inlines: ~CTraceFilter
void __fastcall CTraceFilterSkipClassname::~CTraceFilterSkipClassname(CTraceFilterSkipClassname *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
}


// CTraceFilterSkipClassname::~CTraceFilterSkipClassname  (line 361, @0x00000000020f4c60, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSkipClassname
// calls: operator delete
void __fastcall CTraceFilterSkipClassname::~CTraceFilterSkipClassname(CTraceFilterSkipClassname *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CGamePhysicsQueryInterface::EnumerateElementsAlongRay  (line 543, @0x0000000002115d70, libserver.so)  // inlines: CEntityHandle, CGameQueryAttributes, COverlapList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, GetEntityIdentity, GetEntryIndex, GetHitEntity, GetInstance, IndexToIdentity, Init, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetInteractsWith, operator CBaseEntity*, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CGamePhysicsQueryInterface::EntitiesAlongRay, CUtlMemory<COverlapHit, int>::Purge, CUtlVectorBase<COverlapHit, CUtlMemoryFixedGrowable<COverlapHit, 64ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: UTIL_EntitiesAlongRay, GetPushawayEnts
// globals: CEntityHandle::gm_pEntityList
void __fastcall CGamePhysicsQueryInterface::EnumerateElementsAlongRay(
        CGamePhysicsQueryInterface *const this,
        const Ray_t *const ray,
        IPartitionEnumerator *pEnum)
{
  __int64 v4; // rbx
  int v5; // r12d
  uint32 v6; // eax
  CGameQueryAttributes filter; // [rsp+10h] [rbp-1070h] BYREF
  COverlapList results; // [rsp+40h] [rbp-1040h] BYREF
  unsigned __int64 v9; // [rsp+1058h] [rbp-28h]

  filter.m_nHierarchyId = 0;
  v9 = __readfsqword(0x28u);
  results.m_list.m_Size = 0;
  results.m_list.m_Memory.m_pMemory = &results.m_list.m_Memory.m_FixedMemory;
  results.m_list.m_Memory.m_nAllocationCount = 64;
  results.m_list.m_Memory.m_nGrowSize = 0x80000000;
  filter.m_nInteractsExclude = 0;
  filter.m_nInteractsAs = 0;
  filter.m_nEntityIdToIgnore = -1;
  *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  filter.m_nObjectSetMask = 7;
  filter.m_nCollisionGroup = 3;
  filter.m_nInteractsWith = 4;
  CGamePhysicsQueryInterface::EntitiesAlongRay(this, ray, &filter, &results);
  if ( results.m_list.m_Size > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      if ( (*pEnum->_vptr_IPartitionEnumerator)(pEnum) != 0 )
        break;
      ++v5;
      v4 += 64;
    }
    while ( v5 < results.m_list.m_Size );
  }
  results.m_list.m_Size = 0;
  v6 = results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( results.m_list.m_Memory.m_nAllocationCount < 0
    || results.m_list.m_Memory.m_pMemory == &results.m_list.m_Memory.m_FixedMemory )
  {
    if ( v6 == 0 )
      CUtlMemory<COverlapHit,int>::Purge(&results.m_list.m_Memory);
  }
  else if ( results.m_list.m_Memory.m_pMemory != 0 && v6 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
}


// CGamePhysicsQueryInterface::EnumerateElementsInBox  (line 572, @0x0000000002115b60, libserver.so)  // inlines: CEntityHandle, CGameQueryAttributes, COverlapList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, GetEntityIdentity, GetEntryIndex, GetHitEntity, GetInstance, HitEntitiesOnlyByCollisionGroup, IndexToIdentity, Init, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetObjectSetMask, operator CBaseEntity*, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CGamePhysicsQueryInterface::EntitiesInBox, CUtlMemory<COverlapHit, int>::Purge, CUtlVectorBase<COverlapHit, CUtlMemoryFixedGrowable<COverlapHit, 64ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: UTIL_EntitiesInBox
// globals: CEntityHandle::gm_pEntityList
void __fastcall CGamePhysicsQueryInterface::EnumerateElementsInBox(
        CGamePhysicsQueryInterface *const this,
        const Vector *const vMins,
        const Vector *const vMaxs,
        IPartitionEnumerator *pEnum)
{
  __int64 v5; // rbx
  int v6; // r12d
  uint32 v7; // eax
  CGameQueryAttributes filter; // [rsp+10h] [rbp-1070h] BYREF
  COverlapList results; // [rsp+40h] [rbp-1040h] BYREF
  unsigned __int64 v10; // [rsp+1058h] [rbp-28h]

  filter.m_nHierarchyId = 0;
  v10 = __readfsqword(0x28u);
  results.m_list.m_Size = 0;
  results.m_list.m_Memory.m_pMemory = &results.m_list.m_Memory.m_FixedMemory;
  results.m_list.m_Memory.m_nAllocationCount = 64;
  results.m_list.m_Memory.m_nGrowSize = 0x80000000;
  memset(&filter, 0, 24);
  filter.m_nEntityIdToIgnore = -1;
  *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  filter.m_nObjectSetMask = 2;
  filter.m_nCollisionGroup = 4;
  CGamePhysicsQueryInterface::EntitiesInBox(this, vMins, vMaxs, &filter, OverlapTest_t::OVERLAP_TEST_SHAPE, &results);
  if ( results.m_list.m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      if ( (*pEnum->_vptr_IPartitionEnumerator)(pEnum) != 0 )
        break;
      ++v6;
      v5 += 64;
    }
    while ( v6 < results.m_list.m_Size );
  }
  results.m_list.m_Size = 0;
  v7 = results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( results.m_list.m_Memory.m_nAllocationCount < 0
    || results.m_list.m_Memory.m_pMemory == &results.m_list.m_Memory.m_FixedMemory )
  {
    if ( v7 == 0 )
      CUtlMemory<COverlapHit,int>::Purge(&results.m_list.m_Memory);
  }
  else if ( results.m_list.m_Memory.m_pMemory != 0 && v7 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
}


