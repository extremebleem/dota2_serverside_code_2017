
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlSortVector<GCSDK::CSharedObject::SharedObjectInfo_t, GCSDK::CSharedObject::CCompareSharedObject, CUtlVector<GCSDK::CSharedObject::SharedObjectInfo_t, CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t, int> > >::~CUtlSortVector  (line 38, @0x0000000003238ce0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t, int>::Purge
void __fastcall CUtlSortVector<GCSDK::CSharedObject::SharedObjectInfo_t,GCSDK::CSharedObject::CCompareSharedObject,CUtlVector<GCSDK::CSharedObject::SharedObjectInfo_t,CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t,int>>>::~CUtlSortVector(
        CUtlSortVector<GCSDK::CSharedObject::SharedObjectInfo_t,GCSDK::CSharedObject::CCompareSharedObject,CUtlVector<GCSDK::CSharedObject::SharedObjectInfo_t,CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t,int> > > *const this)
{
  bool v2; // zf
  CUtlVectorBase<GCSDK::CSharedObject::SharedObjectInfo_t,CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_Memory;
    CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t,int>::Purge(&this->m_Memory);
    if ( (this->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t,int>::Purge(p_m_Memory);
  }
}


// CUtlSortVector<CaptionLookup_t, CCaptionLookupLess, CUtlVector<CaptionLookup_t, CUtlMemory<CaptionLookup_t, int> > >::CompareHelper  (line 116, @0x000000000241ddd0, libserver.so)
int __fastcall CUtlSortVector<CaptionLookup_t,CCaptionLookupLess,CUtlVector<CaptionLookup_t,CUtlMemory<CaptionLookup_t,int>>>::CompareHelper(
        void *context,
        const CaptionLookup_t *lhs,
        const CaptionLookup_t *rhs)
{
  int result; // eax

  result = -1;
  if ( lhs->hash >= rhs->hash )
    return lhs->hash > rhs->hash;
  return result;
}


// CUtlSortVector<CEconItemView*, CInventoryListLess, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > >::CompareHelper  (line 116, @0x0000000002ea2000, libserver.so)  // inlines: Less
int __fastcall CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::CompareHelper(
        void *context,
        CEconItemView *const *lhs,
        CEconItemView *const *rhs)
{
  CEconItemView *v5; // rbx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // edx
  CEconItemView *v10; // rbx
  unsigned __int64 v11; // r12

  v5 = *lhs;
  v6 = (*(**rhs + 112LL))(*rhs);
  v7 = (*(v5->_vptr_IEconItemInterface + 14))(v5);
  v9 = -1;
  if ( v7 >= v6 )
  {
    v10 = *rhs;
    v11 = (*(**lhs + 112LL))(*lhs, v8, 0xFFFFFFFFLL);
    return (*(v10->_vptr_IEconItemInterface + 14))(v10) < v11;
  }
  return v9;
}


// CUtlSortVector<CBaseEntity*, CSortedEntityList::CEntityReportLess, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int> > >::Insert  (line 165, @0x0000000002115960, libserver.so)  // inlines: CopyConstruct<CBaseEntity*>, Element, FindLessOrEqual<CBaseEntity*>, InsertBefore, operator[]
// calls: CSortedEntityList::CEntityReportLess::Less, CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::GrowVector, CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::ShiftElementsRight, AssertMsg_ConditionFailed
// callers: CSortedEntityList::AddEntityToList, report_entities
// globals: CUtlSortVector<CBaseEntity *,CSortedEntityList::CEntityReportLess,CUtlVector<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>>::Insert(CBaseEntity * const&)::_asser, CUtlSortVector<CBaseEntity *,CSortedEntityList::CEntityReportLess,CUtlVector<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>>::FindLessOrEqual<CBaseEntity *>(CBase
int __fastcall CUtlSortVector<CBaseEntity *,CSortedEntityList::CEntityReportLess,CUtlVector<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>>::Insert(
        CUtlSortVector<CBaseEntity*,CSortedEntityList::CEntityReportLess,CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > > *const this,
        CBaseEntity *const *const src)
{
  int v3; // r15d
  int v4; // r13d
  int v5; // ebx
  int v6; // r8d
  int v7; // ebx
  CBaseEntity **v8; // rax
  CSortedEntityList::CEntityReportLess v11[49]; // [rsp+1Fh] [rbp-31h] BYREF

  if ( this->m_bNeedsSort )
  {
    if ( AssertMsg_ConditionFailed(
           &CUtlSortVector<CBaseEntity *,CSortedEntityList::CEntityReportLess,CUtlVector<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>>::Insert(CBaseEntity * const&)::_assertionConstants,
           0) != 0 )
      __debugbreak();
    if ( this->m_bNeedsSort
      && AssertMsg_ConditionFailed(
           &CUtlSortVector<CBaseEntity *,CSortedEntityList::CEntityReportLess,CUtlVector<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>>::FindLessOrEqual<CBaseEntity *>(CBaseEntity * const&,bool *)const::_assertionConstants,
           0) != 0 )
    {
      __debugbreak();
    }
  }
  v3 = this->m_Size - 1;
  if ( v3 < 0 )
  {
LABEL_8:
    v6 = v3;
  }
  else
  {
    v4 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = (v4 + v3) >> 1;
        if ( !CSortedEntityList::CEntityReportLess::Less(v11, &this->m_Memory.m_pMemory[v5], src, this->m_pLessContext) )
          break;
        v4 = v5 + 1;
        if ( v3 < v5 + 1 )
          goto LABEL_8;
      }
      if ( !CSortedEntityList::CEntityReportLess::Less(v11, src, &this->m_Memory.m_pMemory[v5], this->m_pLessContext) )
        break;
      v3 = v5 - 1;
      if ( v5 - 1 < v4 )
        goto LABEL_8;
    }
    v6 = (v4 + v3) >> 1;
  }
  v7 = v6 + 1;
  CUtlVectorBase<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>::GrowVector(this, 1);
  CUtlVectorBase<CBaseEntity *,CUtlMemory<CBaseEntity *,int>>::ShiftElementsRight(this, v7, 1);
  v8 = &this->m_Memory.m_pMemory[v7];
  if ( v8 != 0 )
    *v8 = *src;
  return v7;
}


// CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > >::Insert  (line 165, @0x00000000023b3040, libserver.so)  // inlines: CopyConstruct<unsigned int>, Element, FindLessOrEqual<unsigned int>, GrowMemory, GrowVector, InsertBefore, ShiftElementsRight, V_memmove, memmove, operator[]
// calls: CUtlMemory<unsigned int, int>::Grow, AssertMsg_ConditionFailed, memmove
// callers: CSceneCache::PrecacheSceneEvent, CSceneCache::Restore
// globals: CUtlSortVector<uint,CUtlSortVectorDefaultLess<uint>,CUtlVector<uint,CUtlMemory<uint,int>>>::Insert(uint const&)::_assertionConstants, CUtlSortVector<uint,CUtlSortVectorDefaultLess<uint>,CUtlVector<uint,CUtlMemory<uint,int>>>::FindLessOrEqual<uint>(uint const&,bool *)::_assertionConstants
int __fastcall CUtlSortVector<unsigned int,CUtlSortVectorDefaultLess<unsigned int>,CUtlVector<unsigned int,CUtlMemory<unsigned int,int>>>::Insert(
        CUtlSortVector<unsigned int,CUtlSortVectorDefaultLess<unsigned int>,CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > > *const this,
        const unsigned int *const src)
{
  int v4; // edx
  unsigned int *m_pMemory; // r10
  int v6; // ecx
  unsigned int v7; // r9d
  int v8; // eax
  int m_nAllocationCount; // eax
  int v10; // r14d
  int v11; // r12d
  int v12; // eax
  __int64 v13; // r12
  unsigned int *v14; // r12

  if ( this->m_bNeedsSort )
  {
    if ( AssertMsg_ConditionFailed(
           &CUtlSortVector<unsigned int,CUtlSortVectorDefaultLess<unsigned int>,CUtlVector<unsigned int,CUtlMemory<unsigned int,int>>>::Insert(unsigned int const&)::_assertionConstants,
           0) != 0 )
      __debugbreak();
    if ( this->m_bNeedsSort
      && AssertMsg_ConditionFailed(
           &CUtlSortVector<unsigned int,CUtlSortVectorDefaultLess<unsigned int>,CUtlVector<unsigned int,CUtlMemory<unsigned int,int>>>::FindLessOrEqual<unsigned int>(unsigned int const&,bool *)const::_assertionConstants,
           0) != 0 )
    {
      __debugbreak();
    }
  }
  v4 = this->m_Size - 1;
  if ( v4 >= 0 )
  {
    m_pMemory = this->m_Memory.m_pMemory;
    v6 = 0;
    v7 = *src;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = (v6 + v4) >> 1;
        if ( m_pMemory[v8] >= v7 )
          break;
        v6 = v8 + 1;
        if ( v4 < v8 + 1 )
          goto LABEL_8;
      }
      if ( m_pMemory[v8] <= v7 )
        break;
      v4 = v8 - 1;
      if ( v8 - 1 < v6 )
        goto LABEL_8;
    }
    v4 = (v6 + v4) >> 1;
  }
LABEL_8:
  m_nAllocationCount = this->m_Memory.m_nAllocationCount;
  v10 = v4 + 1;
  v11 = this->m_Size + 1;
  if ( v11 > m_nAllocationCount )
    CUtlMemory<unsigned int,int>::Grow(&this->m_Memory, v11 - m_nAllocationCount);
  this->m_Size = v11;
  v12 = v11 - v10 - 1;
  v13 = v10;
  if ( v12 > 0 )
    memmove(&this->m_Memory.m_pMemory[v13 + 1], &this->m_Memory.m_pMemory[v13], 4LL * v12);
  v14 = &this->m_Memory.m_pMemory[v13];
  if ( v14 != 0 )
    *v14 = *src;
  return v10;
}


// CUtlSortVector<target_t, CPotentialTargetLess, CUtlVector<target_t, CUtlMemory<target_t, int> > >::Insert  (line 165, @0x00000000026b8cd0, libserver.so)  // inlines: CEntityHandle, CHandle, CopyConstruct<target_t>, Element, FindLessOrEqual<target_t>, GrowMemory, GrowVector, InsertBefore, ShiftElementsRight, V_memmove, memmove, operator[], target_t
// calls: CUtlMemory<target_t, int>::Grow, AssertMsg_ConditionFailed, memmove
// callers: CDOTA_ProjectileManager::FrameUpdatePostEntityThink
// globals: CUtlSortVector<target_t,CPotentialTargetLess,CUtlVector<target_t,CUtlMemory<target_t,int>>>::Insert(target_t const&)::_assertionConstants, CUtlSortVector<target_t,CPotentialTargetLess,CUtlVector<target_t,CUtlMemory<target_t,int>>>::FindLessOrEqual<target_t>(target_t const&,bool *)::_assertionConsta
int __fastcall CUtlSortVector<target_t,CPotentialTargetLess,CUtlVector<target_t,CUtlMemory<target_t,int>>>::Insert(
        CUtlSortVector<target_t,CPotentialTargetLess,CUtlVector<target_t,CUtlMemory<target_t,int> > > *const this,
        const target_t *const src)
{
  int v4; // ecx
  int v5; // edx
  float m_fDist; // xmm1_4
  int v7; // eax
  float v8; // xmm0_4
  int m_nAllocationCount; // eax
  int v10; // r13d
  int v11; // r12d
  int v12; // eax
  __int64 v13; // r12
  target_t *v14; // r12

  if ( this->m_bNeedsSort )
  {
    if ( AssertMsg_ConditionFailed(
           &CUtlSortVector<target_t,CPotentialTargetLess,CUtlVector<target_t,CUtlMemory<target_t,int>>>::Insert(target_t const&)::_assertionConstants,
           0) != 0 )
      __debugbreak();
    if ( this->m_bNeedsSort
      && AssertMsg_ConditionFailed(
           &CUtlSortVector<target_t,CPotentialTargetLess,CUtlVector<target_t,CUtlMemory<target_t,int>>>::FindLessOrEqual<target_t>(target_t const&,bool *)const::_assertionConstants,
           0) != 0 )
    {
      __debugbreak();
    }
  }
  v4 = this->m_Size - 1;
  if ( v4 >= 0 )
  {
    v5 = 0;
    m_fDist = src->m_fDist;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = (v5 + v4) >> 1;
        v8 = this->m_Memory.m_pMemory[v7].m_fDist;
        if ( m_fDist <= v8 )
          break;
        v5 = v7 + 1;
        if ( v4 < v7 + 1 )
          goto LABEL_8;
      }
      if ( v8 <= m_fDist )
        break;
      v4 = v7 - 1;
      if ( v7 - 1 < v5 )
        goto LABEL_8;
    }
    v4 = (v5 + v4) >> 1;
  }
LABEL_8:
  m_nAllocationCount = this->m_Memory.m_nAllocationCount;
  v10 = v4 + 1;
  v11 = this->m_Size + 1;
  if ( v11 > m_nAllocationCount )
    CUtlMemory<target_t,int>::Grow(&this->m_Memory, v11 - m_nAllocationCount);
  this->m_Size = v11;
  v12 = v11 - v10 - 1;
  v13 = v10;
  if ( v12 > 0 )
    memmove(&this->m_Memory.m_pMemory[v13 + 1], &this->m_Memory.m_pMemory[v13], 8LL * v12);
  v14 = &this->m_Memory.m_pMemory[v13];
  if ( v14 != 0 )
  {
    v14->m_hEntity.m_Index = src->m_hEntity.m_Index;
    v14->m_fDist = src->m_fDist;
  }
  return v10;
}


// CUtlSortVector<CEconItemView*, CInventoryListLess, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > >::Insert  (line 165, @0x0000000002eac3f0, libserver.so)  // inlines: CopyConstruct<CEconItemView*>, Element, FindLessOrEqual<CEconItemView*>, GrowMemory, GrowVector, InsertBefore, ShiftElementsRight, V_memmove, memmove, operator[]
// calls: CUtlSortVector<CEconItemView*, CInventoryListLess, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > >::FindLessOrEqual<CEconItemView*>, CUtlMemory<CEconItemView*, int>::Grow, AssertMsg_ConditionFailed, memmove
// callers: CPlayerInventory::ClearInventoryItems, CPlayerInventory::AddTestItem, CPlayerInventory::AddEconItem
// globals: CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::Insert(CEconItemView * const&)::_assertionConsta
int __fastcall CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::Insert(
        CUtlSortVector<CEconItemView*,CInventoryListLess,CUtlVector<CEconItemView*,CUtlMemory<CEconItemView*,int> > > *const this,
        CEconItemView *const *const src)
{
  int v4; // r13d
  int v5; // r12d
  int m_nAllocationCount; // eax
  int v7; // r12d
  __int64 v8; // r15
  CEconItemView **v9; // r15
  bool pFound; // [rsp+Fh] [rbp-31h] BYREF

  if ( this->m_bNeedsSort
    && AssertMsg_ConditionFailed(
         &CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::Insert(CEconItemView * const&)::_assertionConstants,
         0) != 0 )
  {
    __debugbreak();
  }
  v4 = CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::FindLessOrEqual<CEconItemView *>(
         this,
         src,
         &pFound)
     + 1;
  v5 = this->m_Size + 1;
  m_nAllocationCount = this->m_Memory.m_nAllocationCount;
  if ( v5 > m_nAllocationCount )
    CUtlMemory<CEconItemView *,int>::Grow(&this->m_Memory, v5 - m_nAllocationCount);
  this->m_Size = v5;
  v7 = v5 - v4 - 1;
  v8 = v4;
  if ( v7 > 0 )
    memmove(&this->m_Memory.m_pMemory[v8 + 1], &this->m_Memory.m_pMemory[v8], 8LL * v7);
  v9 = &this->m_Memory.m_pMemory[v8];
  if ( v9 != 0 )
    *v9 = *src;
  return v4;
}


// CUtlSortVector<CEconItemView*, CInventoryListLess, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > >::QuickSort  (line 227, @0x0000000002e6b080, libserver.so)
// calls: V_qsort_s
// callers: CPlayerInventory::SOCacheSubscribed, CPlayerInventory::SOUpdated
// globals: CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::CompareHelper(void *,CEconItemView * const*,CEco
void __fastcall CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::QuickSort(
        CUtlSortVector<CEconItemView*,CInventoryListLess,CUtlVector<CEconItemView*,CUtlMemory<CEconItemView*,int> > > *const this,
        CInventoryListLess *const less,
        int nLower,
        int nUpper)
{
  __int64 v4; // rbp
  int m_Size; // eax
  void *m_pLessContext; // rdx
  CEconItemView **m_pMemory; // rdi
  CUtlSortVector<CEconItemView*,CInventoryListLess,CUtlVector<CEconItemView*,CUtlMemory<CEconItemView*,int> > >::QSortContext_t ctx; // [rsp+0h] [rbp-18h] BYREF
  __int64 v9; // [rsp+10h] [rbp-8h]

  m_Size = this->m_Size;
  if ( this->m_Size > 1 )
  {
    v9 = v4;
    m_pLessContext = this->m_pLessContext;
    ctx.m_pLessFunc = less;
    m_pMemory = this->m_Memory.m_pMemory;
    ctx.m_pLessContext = m_pLessContext;
    V_qsort_s(
      m_pMemory,
      m_Size,
      8,
      CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::CompareHelper,
      &ctx);
  }
}


// CUtlSortVector<unsigned int, CUtlSortVectorDefaultLess<unsigned int>, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > >::Find<unsigned int>  (line 256, @0x00000000023af630, libserver.so)  // inlines: Element, operator[]
// calls: AssertMsg_ConditionFailed
// callers: CSceneCache::PrecacheSceneEvent, CSceneCache::Restore
// globals: CUtlSortVector<uint,CUtlSortVectorDefaultLess<uint>,CUtlVector<uint,CUtlMemory<uint,int>>>::Find<uint>(uint const&)::_assertionConstants
int __fastcall CUtlSortVector<unsigned int,CUtlSortVectorDefaultLess<unsigned int>,CUtlVector<unsigned int,CUtlMemory<unsigned int,int>>>::Find<unsigned int>(
        const CUtlSortVector<unsigned int,CUtlSortVectorDefaultLess<unsigned int>,CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > > *const this,
        const unsigned int *const src)
{
  int result; // eax
  int v5; // ecx
  unsigned int v6; // r8d
  int v7; // edx
  unsigned int *m_pMemory; // rdi

  if ( this->m_bNeedsSort
    && AssertMsg_ConditionFailed(
         &CUtlSortVector<unsigned int,CUtlSortVectorDefaultLess<unsigned int>,CUtlVector<unsigned int,CUtlMemory<unsigned int,int>>>::Find<unsigned int>(unsigned int const&)const::_assertionConstants,
         0) != 0 )
  {
    __debugbreak();
  }
  result = -1;
  v5 = this->m_Size - 1;
  if ( v5 >= 0 )
  {
    v6 = *src;
    v7 = 0;
    m_pMemory = this->m_Memory.m_pMemory;
    do
    {
      while ( 1 )
      {
        result = (v7 + v5) >> 1;
        if ( m_pMemory[result] >= v6 )
          break;
        v7 = result + 1;
        if ( v5 < result + 1 )
          return -1;
      }
      if ( m_pMemory[result] <= v6 )
        return result;
      v5 = result - 1;
    }
    while ( result - 1 >= v7 );
    return -1;
  }
  return result;
}


// CUtlSortVector<CEconItemView*, CInventoryListLess, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > >::Find<CEconItemView*>  (line 256, @0x0000000002ea82a0, libserver.so)  // inlines: Element, Less, operator[]
// calls: AssertMsg_ConditionFailed
// callers: CPlayerInventory::GetInventoryItemByItemID
// globals: CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::Find<CEconItemView *>(CEconItemView * const&)::_
int __fastcall CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::Find<CEconItemView *>(
        const CUtlSortVector<CEconItemView*,CInventoryListLess,CUtlVector<CEconItemView*,CUtlMemory<CEconItemView*,int> > > *const this,
        CEconItemView *const *const src)
{
  int v4; // ebx
  CEconItemView *v5; // r13
  CEconItemView *v6; // rdi
  CEconItemView *v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 v10; // [rsp+0h] [rbp-40h]
  int endi; // [rsp+8h] [rbp-38h]
  int start; // [rsp+Ch] [rbp-34h]

  if ( this->m_bNeedsSort
    && AssertMsg_ConditionFailed(
         &CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::Find<CEconItemView *>(CEconItemView * const&)const::_assertionConstants,
         0) != 0 )
  {
    __debugbreak();
  }
  start = 0;
  endi = this->m_Size - 1;
  if ( endi < 0 )
    return -1;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = (endi + start) >> 1;
      v5 = this->m_Memory.m_pMemory[v4];
      v10 = (*(**src + 112LL))(*src);
      if ( (*(v5->_vptr_IEconItemInterface + 14))(v5) >= v10 )
        break;
      start = v4 + 1;
      if ( v4 + 1 > endi )
        return -1;
    }
    v6 = this->m_Memory.m_pMemory[v4];
    v7 = *src;
    v8 = (*(v6->_vptr_IEconItemInterface + 14))(v6);
    if ( (*(v7->_vptr_IEconItemInterface + 14))(v7) >= v8 )
      break;
    endi = v4 - 1;
    if ( start > v4 - 1 )
      return -1;
  }
  return (endi + start) >> 1;
}


// CUtlSortVector<CEconItemView*, CInventoryListLess, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > >::FindLessOrEqual<CEconItemView*>  (line 310, @0x0000000002eac2e0, libserver.so)  // inlines: Element, Less, operator[]
// calls: AssertMsg_ConditionFailed
// callers: CUtlSortVector<CEconItemView*, CInventoryListLess, CUtlVector<CEconItemView*, CUtlMemory<CEconItemView*, int> > >::Insert
// globals: CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::FindLessOrEqual<CEconItemView *>(CEconItemView *
int __fastcall CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::FindLessOrEqual<CEconItemView *>(
        const CUtlSortVector<CEconItemView*,CInventoryListLess,CUtlVector<CEconItemView*,CUtlMemory<CEconItemView*,int> > > *const this,
        CEconItemView *const *const src,
        bool *pFound)
{
  int v5; // ecx
  int v6; // r12d
  int v7; // ebx
  CEconItemView *v8; // rdi
  CEconItemView *v9; // r13
  int endi; // [rsp+Ch] [rbp-44h]
  CEconItemView *v13; // [rsp+10h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-38h]
  unsigned __int64 v15; // [rsp+18h] [rbp-38h]

  if ( this->m_bNeedsSort
    && AssertMsg_ConditionFailed(
         &CUtlSortVector<CEconItemView *,CInventoryListLess,CUtlVector<CEconItemView *,CUtlMemory<CEconItemView *,int>>>::FindLessOrEqual<CEconItemView *>(CEconItemView * const&,bool *)const::_assertionConstants,
         0) != 0 )
  {
    __debugbreak();
  }
  v5 = this->m_Size - 1;
  if ( v5 < 0 )
  {
LABEL_8:
    *pFound = 0;
    return v5;
  }
  else
  {
    v6 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        endi = v5;
        v7 = (v6 + v5) >> 1;
        v13 = this->m_Memory.m_pMemory[v7];
        v14 = (*(**src + 112LL))(*src);
        if ( (*(v13->_vptr_IEconItemInterface + 14))(v13) >= v14 )
          break;
        v5 = endi;
        v6 = v7 + 1;
        if ( endi < v7 + 1 )
          goto LABEL_8;
      }
      v8 = this->m_Memory.m_pMemory[v7];
      v9 = *src;
      v15 = (*(v8->_vptr_IEconItemInterface + 14))(v8);
      if ( (*(v9->_vptr_IEconItemInterface + 14))(v9) >= v15 )
        break;
      v5 = v7 - 1;
      if ( v7 - 1 < v6 )
        goto LABEL_8;
    }
    *pFound = 1;
    return v7;
  }
}


