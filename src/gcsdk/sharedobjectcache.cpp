
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_sharedobjectcache.cpp  (line 0, @0x0000000001a6e6c0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_sharedobjectcache_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// GCSDK::CSharedObjectTypeCache::CSharedObjectTypeCache  (line 24, @0x00000000032393e0, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, Purge, ~CUtlMemory, ~CUtlMemoryFixedGrowable_Base
// calls: Plat_IsInDebugSessionRaw, CUtlMemory<GCSDK::CSharedObject*, int>::Purge, _Unwind_Resume
// callers: GCSDK::CGCClientSharedObjectCache::AllocateTypeCache, GCSDK::CGCClientSharedObjectTypeCache::CGCClientSharedObjectTypeCache
void __fastcall GCSDK::CSharedObjectTypeCache::CSharedObjectTypeCache(
        GCSDK::CSharedObjectTypeCache *const this,
        int nTypeID)
{
  GCSDK::CSharedObject **p_m_FixedMemory; // r12

  p_m_FixedMemory = &this->m_vecObjects.m_Memory.m_FixedMemory;
  this->_vptr_CSharedObjectTypeCache = off_47D0A10;
  this->m_vecObjects.m_Size = 0;
  this->m_vecObjects.m_Memory.m_pMemory = 0;
  this->m_vecObjects.m_Memory.m_nAllocationCount = 1;
  this->m_vecObjects.m_Memory.m_nGrowSize = 0x80000000;
  if ( ((this + 32) & 7) != 0 && Plat_IsInDebugSessionRaw() != 0 )
    __debugbreak();
  this->m_vecObjects.m_Memory.m_pMemory = p_m_FixedMemory;
  this->m_nTypeID = nTypeID;
}


// GCSDK::CSharedObjectTypeCache::~CSharedObjectTypeCache  (line 34, @0x0000000003239830, libserver.so)  // inlines: Purge, Purge_FixedGrowable, RemoveAll, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlMemory<GCSDK::CSharedObject*, int>::ConvertToExternalMemory, CUtlMemory<GCSDK::CSharedObject*, int>::Purge
// callers: GCSDK::CSharedObjectTypeCache::~CSharedObjectTypeCache, GCSDK::CGCClientSharedObjectTypeCache::~CGCClientSharedObjectTypeCache
void __fastcall GCSDK::CSharedObjectTypeCache::~CSharedObjectTypeCache(GCSDK::CSharedObjectTypeCache *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  GCSDK::CSharedObject **v4; // rdx
  GCSDK::CSharedObject *v5; // rdi

  v2 = 0;
  v3 = 0;
  for ( this->_vptr_CSharedObjectTypeCache = off_47D0A10; this->m_vecObjects.m_Size > v3; ++v2 )
  {
    v4 = &this->m_vecObjects.m_Memory.m_pMemory[v2];
    v5 = *v4;
    *v4 = 0;
    if ( v5 != 0 )
      (*(v5->_vptr_CSharedObject + 1))(v5);
    ++v3;
  }
  this->m_vecObjects.m_Size = 0;
  CUtlMemory<GCSDK::CSharedObject *,int>::ConvertToExternalMemory(
    &this->m_vecObjects.m_Memory,
    &this->m_vecObjects.m_Memory.m_FixedMemory,
    1,
    0,
    1,
    0x3FFFFFFFu);
  this->m_vecObjects.m_Size = 0;
  CUtlMemory<GCSDK::CSharedObject *,int>::ConvertToExternalMemory(
    &this->m_vecObjects.m_Memory,
    &this->m_vecObjects.m_Memory.m_FixedMemory,
    1,
    0,
    1,
    0x3FFFFFFFu);
  if ( (this->m_vecObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<GCSDK::CSharedObject *,int>::Purge(&this->m_vecObjects.m_Memory);
}


// GCSDK::CSharedObjectTypeCache::~CSharedObjectTypeCache  (line 34, @0x0000000003239910, libserver.so)
// calls: GCSDK::CSharedObjectTypeCache::~CSharedObjectTypeCache, operator delete
void __fastcall GCSDK::CSharedObjectTypeCache::~CSharedObjectTypeCache(GCSDK::CSharedObjectTypeCache *const this)
{
  GCSDK::CSharedObjectTypeCache::~CSharedObjectTypeCache(this);
  operator delete(this);
}


// GCSDK::CSharedObjectTypeCache::AddObject  (line 52, @0x0000000003239720, libserver.so)  // inlines: AddToTail, CopyConstruct<GCSDK::CSharedObject*>, Element, Find, GrowMemory, HasElement, operator[]
// calls: CUtlMemory<GCSDK::CSharedObject*, int>::Grow
bool __fastcall GCSDK::CSharedObjectTypeCache::AddObject(
        GCSDK::CSharedObjectTypeCache *const this,
        GCSDK::CSharedObject *pObject)
{
  __int64 m_Size; // rbx
  GCSDK::CSharedObject **m_pMemory; // rdx
  GCSDK::CSharedObject **v6; // rdx
  int v7; // eax
  int v8; // eax
  GCSDK::CSharedObject **v9; // rax

  m_Size = this->m_vecObjects.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_vecObjects.m_Memory.m_pMemory;
    if ( *m_pMemory == pObject )
      return 0;
    v6 = m_pMemory + 1;
    v7 = 0;
    while ( ++v7 != m_Size )
    {
      if ( *v6++ == pObject )
      {
        if ( v7 < 0 )
          break;
        return 0;
      }
    }
  }
  v8 = this->m_vecObjects.m_Size;
  if ( m_Size == this->m_vecObjects.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<GCSDK::CSharedObject *,int>::Grow(&this->m_vecObjects.m_Memory, 1);
    v8 = this->m_vecObjects.m_Size;
  }
  this->m_vecObjects.m_Size = v8 + 1;
  v9 = &this->m_vecObjects.m_Memory.m_pMemory[m_Size];
  if ( v9 != 0 )
    *v9 = pObject;
  return 1;
}


// GCSDK::CSharedObjectTypeCache::AddObjectClean  (line 68, @0x00000000032397c0, libserver.so)  // inlines: AddToTail, CopyConstruct<GCSDK::CSharedObject*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<GCSDK::CSharedObject*, int>::Grow
bool __fastcall GCSDK::CSharedObjectTypeCache::AddObjectClean(
        GCSDK::CSharedObjectTypeCache *const this,
        GCSDK::CSharedObject *pObject)
{
  __int64 m_Size; // r12
  int v5; // eax
  GCSDK::CSharedObject **v6; // rax

  m_Size = this->m_vecObjects.m_Size;
  v5 = this->m_vecObjects.m_Size;
  if ( m_Size == this->m_vecObjects.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<GCSDK::CSharedObject *,int>::Grow(&this->m_vecObjects.m_Memory, 1);
    v5 = this->m_vecObjects.m_Size;
  }
  this->m_vecObjects.m_Size = v5 + 1;
  v6 = &this->m_vecObjects.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = pObject;
  return 1;
}


// GCSDK::CSharedObjectTypeCache::RemoveObject  (line 80, @0x0000000003239560, libserver.so)  // inlines: IsValidIndex
// calls: GCSDK::CSharedObjectTypeCache::FindSharedObjectIndex, GCSDK::CSharedObjectTypeCache::RemoveObjectByIndex
GCSDK::CSharedObject *__fastcall GCSDK::CSharedObjectTypeCache::RemoveObject(
        GCSDK::CSharedObjectTypeCache *const this,
        const GCSDK::CSharedObject *const soIndex)
{
  signed int SharedObjectIndex; // eax

  SharedObjectIndex = GCSDK::CSharedObjectTypeCache::FindSharedObjectIndex(this, soIndex);
  if ( SharedObjectIndex < 0 || SharedObjectIndex >= this->m_vecObjects.m_Size )
    return 0;
  else
    return GCSDK::CSharedObjectTypeCache::RemoveObjectByIndex(this, SharedObjectIndex);
}


// GCSDK::CSharedObjectTypeCache::RemoveObjectByIndex  (line 93, @0x0000000003239470, libserver.so)  // inlines: Element, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove
// callers: GCSDK::CSharedObjectTypeCache::RemoveObject, GCSDK::CGCClientSharedObjectTypeCache::RemoveAllObjects
GCSDK::CSharedObject *__fastcall GCSDK::CSharedObjectTypeCache::RemoveObjectByIndex(
        GCSDK::CSharedObjectTypeCache *const this,
        uint32 nObj)
{
  __int64 v2; // r8
  int m_Size; // ecx
  GCSDK::CSharedObject **m_pMemory; // r9
  signed int v6; // edx
  GCSDK::CSharedObject *v7; // r12

  v2 = nObj;
  m_Size = this->m_vecObjects.m_Size;
  m_pMemory = this->m_vecObjects.m_Memory.m_pMemory;
  v6 = m_Size - nObj - 1;
  v7 = m_pMemory[v2];
  if ( v6 > 0 )
  {
    memmove(&m_pMemory[v2], &m_pMemory[v2 + 1], 8LL * v6);
    m_Size = this->m_vecObjects.m_Size;
  }
  this->m_vecObjects.m_Size = m_Size - 1;
  return v7;
}


// GCSDK::CSharedObjectTypeCache::RemoveAllObjectsWithoutDeleting  (line 104, @0x0000000003238f20, libserver.so)  // inlines: RemoveAll
void __fastcall GCSDK::CSharedObjectTypeCache::RemoveAllObjectsWithoutDeleting(
        GCSDK::CSharedObjectTypeCache *const this)
{
  this->m_vecObjects.m_Size = 0;
}


// GCSDK::CSharedObjectTypeCache::EnsureCapacity  (line 114, @0x0000000003239320, libserver.so)  // inlines: EnsureCapacity, memcpy
// calls: memcpy
void __fastcall GCSDK::CSharedObjectTypeCache::EnsureCapacity(GCSDK::CSharedObjectTypeCache *const this, uint32 nItems)
{
  uint32 m_nGrowSize; // eax
  GCSDK::CSharedObject **v5; // rsi
  __int64 v6; // rax
  GCSDK::CSharedObject **m_pMemory; // r13
  GCSDK::CSharedObject **v8; // rax

  if ( nItems > this->m_vecObjects.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = this->m_vecObjects.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_vecObjects.m_Memory.m_pMemory;
        v8 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * nItems);
        this->m_vecObjects.m_Memory.m_pMemory = v8;
        if ( m_pMemory != 0 )
          memcpy(v8, m_pMemory, 8LL * this->m_vecObjects.m_Memory.m_nAllocationCount);
        this->m_vecObjects.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v5 = this->m_vecObjects.m_Memory.m_pMemory;
        v6 = *g_pMemAlloc;
        if ( v5 != 0 )
          this->m_vecObjects.m_Memory.m_pMemory = (*(v6 + 8))(g_pMemAlloc, v5, 8LL * nItems);
        else
          this->m_vecObjects.m_Memory.m_pMemory = (*v6)(g_pMemAlloc, 8LL * nItems);
      }
      this->m_vecObjects.m_Memory.m_nAllocationCount = nItems;
    }
  }
}


// GCSDK::CSharedObjectTypeCache::FindSharedObject  (line 124, @0x0000000003239520, libserver.so)  // inlines: IsValidIndex
// calls: GCSDK::CSharedObjectTypeCache::FindSharedObjectIndex
// callers: GCSDK::CSharedObjectTypeCache::FindSharedObject, GCSDK::CSharedObjectCache::FindSharedObject, GCSDK::CGCClientSharedObjectTypeCache::BCreateFromMsg, GCSDK::CGCClientSharedObjectTypeCache::BUpdateFromMsg
GCSDK::CSharedObject *__fastcall GCSDK::CSharedObjectTypeCache::FindSharedObject(
        GCSDK::CSharedObjectTypeCache *const this,
        const GCSDK::CSharedObject *const soIndex)
{
  __int64 SharedObjectIndex; // rdx
  GCSDK::CSharedObject *result; // rax

  SharedObjectIndex = GCSDK::CSharedObjectTypeCache::FindSharedObjectIndex(this, soIndex);
  result = 0;
  if ( SharedObjectIndex >= 0 && SharedObjectIndex < this->m_vecObjects.m_Size )
    return this->m_vecObjects.m_Memory.m_pMemory[SharedObjectIndex];
  return result;
}


// GCSDK::CSharedObjectTypeCache::FindSharedObject  (line 133, @0x0000000003239550, libserver.so)
// calls: GCSDK::CSharedObjectTypeCache::FindSharedObject
const GCSDK::CSharedObject *__fastcall GCSDK::CSharedObjectTypeCache::FindSharedObject(
        const GCSDK::CSharedObjectTypeCache *const this,
        const GCSDK::CSharedObject *const soIndex)
{
  return GCSDK::CSharedObjectTypeCache::FindSharedObject(this, soIndex);
}


// GCSDK::CSharedObjectTypeCache::FindSharedObjectIndex  (line 144, @0x00000000032394c0, libserver.so)
// calls: GCSDK::CSharedObject::BIsKeyEqual
// callers: GCSDK::CSharedObjectTypeCache::FindSharedObject, GCSDK::CSharedObjectTypeCache::RemoveObject
int __fastcall GCSDK::CSharedObjectTypeCache::FindSharedObjectIndex(
        const GCSDK::CSharedObjectTypeCache *const this,
        const GCSDK::CSharedObject *const soIndex)
{
  __int64 v4; // rbx

  v4 = 0;
  if ( this->m_vecObjects.m_Size <= 0 )
    return -1;
  while ( !GCSDK::CSharedObject::BIsKeyEqual(this->m_vecObjects.m_Memory.m_pMemory[v4], soIndex) )
  {
    if ( this->m_vecObjects.m_Size <= ++v4 )
      return -1;
  }
  return v4;
}


// GCSDK::CSharedObjectTypeCache::Dump  (line 159, @0x0000000003239070, libserver.so)
// calls: GCSDK::CSharedObject::PchClassName, GCSDK::CGCEmitGroup::Internal_Msg
// strings: "[unknown]", "%s ID:%d (%d objects):\n"
void __fastcall GCSDK::CSharedObjectTypeCache::Dump(const GCSDK::CSharedObjectTypeCache *const this)
{
  const char *v2; // r12
  const char *v3; // rdx
  __int64 v4; // r12
  int v5; // ebx
  GCSDK::CSharedObject *v6; // rdi

  if ( this->m_vecObjects.m_Size != 0 )
  {
    v2 = GCSDK::CSharedObject::PchClassName(this->m_nTypeID);
    GCSDK::CGCEmitGroup::Internal_Msg(&GCSDK::SPEW_CONSOLE, "---------------------------------------------------\n");
    v3 = "[unknown]";
    if ( v2 != 0 )
      v3 = v2;
    GCSDK::CGCEmitGroup::Internal_Msg(
      &GCSDK::SPEW_CONSOLE,
      "%s ID:%d (%d objects):\n",
      v3,
      this->m_nTypeID,
      this->m_vecObjects.m_Size);
    GCSDK::CGCEmitGroup::Internal_Msg(&GCSDK::SPEW_CONSOLE, "---------------------------------------------------\n");
    if ( this->m_vecObjects.m_Size > 0 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        ++v5;
        v6 = this->m_vecObjects.m_Memory.m_pMemory[v4++];
        (*(v6->_vptr_CSharedObject + 7))(v6);
      }
      while ( v5 < this->m_vecObjects.m_Size );
    }
  }
}


// GCSDK::CSharedObjectCache::CSharedObjectCache  (line 181, @0x00000000032395a0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: GCSDK::CGCClientSharedObjectCache::CGCClientSharedObjectCache
void __fastcall GCSDK::CSharedObjectCache::CSharedObjectCache(GCSDK::CSharedObjectCache *const this)
{
  this->_vptr_CSharedObjectCache = off_47D0A70;
  this->m_ulVersion = 0;
  this->m_CacheObjects.m_Size = 0;
  this->m_CacheObjects.m_Memory.m_pMemory = 0;
  this->m_CacheObjects.m_Memory.m_nAllocationCount = 0;
  this->m_CacheObjects.m_Memory.m_nGrowSize = 0;
}


// GCSDK::CSharedObjectCache::~CSharedObjectCache  (line 191, @0x00000000032391a0, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CSharedObjectCache, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<GCSDK::CSharedObjectTypeCache*, int>::Purge
void __fastcall GCSDK::CSharedObjectCache::~CSharedObjectCache(GCSDK::CSharedObjectCache *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  GCSDK::CSharedObjectTypeCache *v4; // rdi
  bool v5; // zf

  v2 = 0;
  v3 = 0;
  for ( this->_vptr_CSharedObjectCache = off_47D0A70; v3 < this->m_CacheObjects.m_Size; ++v2 )
  {
    v4 = this->m_CacheObjects.m_Memory.m_pMemory[v2];
    if ( v4 != 0 )
      (*(v4->_vptr_CSharedObjectTypeCache + 1))(v4);
    ++v3;
  }
  v5 = (this->m_CacheObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_CacheObjects.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<GCSDK::CSharedObjectTypeCache *,int>::Purge(&this->m_CacheObjects.m_Memory);
    v5 = (this->m_CacheObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_CacheObjects.m_Size = 0;
    if ( v5 )
    {
      CUtlMemory<GCSDK::CSharedObjectTypeCache *,int>::Purge(&this->m_CacheObjects.m_Memory);
      if ( (this->m_CacheObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<GCSDK::CSharedObjectTypeCache *,int>::Purge(&this->m_CacheObjects.m_Memory);
    }
  }
  else
  {
    this->m_CacheObjects.m_Size = 0;
  }
  operator delete(this);
}


// GCSDK::CSharedObjectCache::~CSharedObjectCache  (line 191, @0x0000000003239260, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<GCSDK::CSharedObjectTypeCache*, int>::Purge
// callers: GCSDK::CGCClientSharedObjectCache::~CGCClientSharedObjectCache
void __fastcall GCSDK::CSharedObjectCache::~CSharedObjectCache(GCSDK::CSharedObjectCache *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  GCSDK::CSharedObjectTypeCache *v4; // rdi
  bool v5; // zf

  v2 = 0;
  v3 = 0;
  for ( this->_vptr_CSharedObjectCache = off_47D0A70; v3 < this->m_CacheObjects.m_Size; ++v2 )
  {
    v4 = this->m_CacheObjects.m_Memory.m_pMemory[v2];
    if ( v4 != 0 )
      (*(v4->_vptr_CSharedObjectTypeCache + 1))(v4);
    ++v3;
  }
  v5 = (this->m_CacheObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_CacheObjects.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<GCSDK::CSharedObjectTypeCache *,int>::Purge(&this->m_CacheObjects.m_Memory);
    v5 = (this->m_CacheObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_CacheObjects.m_Size = 0;
    if ( v5 )
    {
      CUtlMemory<GCSDK::CSharedObjectTypeCache *,int>::Purge(&this->m_CacheObjects.m_Memory);
      if ( (this->m_CacheObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<GCSDK::CSharedObjectTypeCache *,int>::Purge(&this->m_CacheObjects.m_Memory);
    }
  }
  else
  {
    this->m_CacheObjects.m_Size = 0;
  }
}


// GCSDK::SortCacheByTypeID  (line 203, @0x0000000003238f30, libserver.so)
bool __fastcall GCSDK::SortCacheByTypeID(
        const GCSDK::CSharedObjectTypeCache *pLhs,
        const GCSDK::CSharedObjectTypeCache *pRhs)
{
  return pLhs->m_nTypeID < pRhs->m_nTypeID;
}


// GCSDK::CSharedObjectCache::FindBaseTypeCache  (line 221, @0x00000000032395e0, libserver.so)  // inlines: __advance<GCSDK::CSharedObjectTypeCache**, long int>, __distance<GCSDK::CSharedObjectTypeCache**>, advance<GCSDK::CSharedObjectTypeCache**, long int>, distance<GCSDK::CSharedObjectTypeCache**>, end, lower_bound<GCSDK::CSharedObjectTypeCache**, int, GCSDK::FindSharedCache_t>
// callers: CDOTAGamerules::UpdateAndDisplayPlayerBoosterState, CDOTAGamerules::BroadcastItemDropBonusStatus, GetFrostyBoostAmount, GetGoldFrostyBoostAmount, CIngameEvent_WM2016::GenerateWeeklyAndDailyChallenges, GetDOTAPlayerChallenge, GetDOTAPlayerQuestChallenge, CDOTAPlayerInventory::GetMaxItemCount, CInventoryManager::FindItemInSOCache, CPlayerInventory::SOCacheSubscribed, GCSDK::CSharedObjectCache::RemoveObject, GCSDK::CSharedObjectCache::FindBaseTypeCache (16 total)
GCSDK::CSharedObjectTypeCache *__fastcall GCSDK::CSharedObjectCache::FindBaseTypeCache(
        GCSDK::CSharedObjectCache *const this,
        int nClassID)
{
  GCSDK::CSharedObjectTypeCache **m_pMemory; // r8
  __int64 m_Size; // rdi
  GCSDK::CSharedObjectTypeCache **v4; // r9
  __int64 v5; // rax
  GCSDK::CSharedObjectTypeCache **v6; // rcx
  GCSDK::CSharedObjectTypeCache *result; // rax
  __int64 v8; // rdx

  m_pMemory = this->m_CacheObjects.m_Memory.m_pMemory;
  m_Size = this->m_CacheObjects.m_Size;
  v4 = &m_pMemory[m_Size];
  while ( m_Size > 0 )
  {
    v5 = m_Size >> 1;
    v6 = &m_pMemory[m_Size >> 1];
    if ( nClassID <= (*v6)->m_nTypeID )
    {
      while ( v5 != 0 )
      {
        v8 = v5 >> 1;
        v6 = &m_pMemory[v5 >> 1];
        if ( (*v6)->m_nTypeID < nClassID )
          goto LABEL_12;
        v5 >>= 1;
      }
      break;
    }
    v8 = m_Size >> 1;
    v5 = m_Size;
LABEL_12:
    m_pMemory = v6 + 1;
    m_Size = v5 - v8 - 1;
  }
  if ( v4 == m_pMemory )
    return 0;
  result = *m_pMemory;
  if ( (*m_pMemory)->m_nTypeID != nClassID )
    return 0;
  return result;
}


// GCSDK::CSharedObjectCache::FindBaseTypeCache  (line 239, @0x00000000032396c0, libserver.so)
// calls: GCSDK::CSharedObjectCache::FindBaseTypeCache
// callers: CGCClientSystem::SaveSerializedSOCache
const GCSDK::CSharedObjectTypeCache *__fastcall GCSDK::CSharedObjectCache::FindBaseTypeCache(
        const GCSDK::CSharedObjectCache *const this,
        int nClassID)
{
  return GCSDK::CSharedObjectCache::FindBaseTypeCache(this, nClassID);
}


// GCSDK::CSharedObjectCache::CreateBaseTypeCache  (line 244, @0x0000000003239930, libserver.so)  // inlines: AddToTail, CopyConstruct<GCSDK::CSharedObjectTypeCache*>, Element, GrowMemory, __final_insertion_sort<GCSDK::CSharedObjectTypeCache**, bool (*)(const GCSDK::CSharedObjectTypeCache*, const GCSDK::CSharedObjectTypeCache*)>, __lg, __unguarded_insertion_sort<GCSDK::CSharedObjectTypeCache**, bool (*)(const GCSDK::CSharedObjectTypeCache*, const GCSDK::CSharedObjectTypeCache*)>, end, operator[], sort<GCSDK::CSharedObjectTypeCache**, bool (*)(const GCSDK::CSharedObjectTypeCache*, const GCSDK::CSharedObjectTypeCache*)>
// calls: GCSDK::CSharedObjectCache::FindBaseTypeCache, std::__introsort_loop<GCSDK::CSharedObjectTypeCache**, long int, bool (*)(const GCSDK::CSharedObjectTypeCache*, const GCSDK::CSharedObjectTypeCache*)>, std::__insertion_sort<GCSDK::CSharedObjectTypeCache**, bool (*)(const GCSDK::CSharedObjectTypeCache*, const GCSDK::CSharedObjectTypeCache*)>, std::__unguarded_linear_insert<GCSDK::CSharedObjectTypeCache**, bool (*)(const GCSDK::CSharedObjectTypeCache*, const GCSDK::CSharedObjectTypeCache*)>, CUtlMemory<GCSDK::CSharedObjectTypeCache*, int>::Grow
// callers: GCSDK::CSharedObjectCache::AddObject, GCSDK::CSharedObjectCache::AddObjectClean, GCSDK::CGCClientSharedObjectCache::CreateTypeCache, GCSDK::CGCClientSharedObjectCache::BCreateFromMsg, GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg
// globals: GCSDK::SortCacheByTypeID(GCSDK::CSharedObjectTypeCache const*,GCSDK::CSharedObjectTypeCache const*)
GCSDK::CSharedObjectTypeCache *__fastcall GCSDK::CSharedObjectCache::CreateBaseTypeCache(
        GCSDK::CSharedObjectCache *const this,
        int nClassID)
{
  GCSDK::CSharedObjectTypeCache *result; // rax
  __int64 v5; // rax
  __int64 m_Size; // r12
  GCSDK::CSharedObjectTypeCache *v7; // r14
  int v8; // eax
  GCSDK::CSharedObjectTypeCache **m_pMemory; // r13
  int v10; // edx
  GCSDK::CSharedObjectTypeCache **v11; // rax
  GCSDK::CSharedObjectTypeCache **v12; // r12
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  GCSDK::CSharedObjectTypeCache **v15; // rbx
  GCSDK::CSharedObjectTypeCache **v16; // rdi

  result = GCSDK::CSharedObjectCache::FindBaseTypeCache(this, nClassID);
  if ( result == 0 )
  {
    v5 = (*(this->_vptr_CSharedObjectCache + 9))(this, nClassID);
    m_Size = this->m_CacheObjects.m_Size;
    v7 = v5;
    v8 = this->m_CacheObjects.m_Size;
    if ( m_Size == this->m_CacheObjects.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<GCSDK::CSharedObjectTypeCache *,int>::Grow(&this->m_CacheObjects.m_Memory, 1);
      v8 = this->m_CacheObjects.m_Size;
    }
    m_pMemory = this->m_CacheObjects.m_Memory.m_pMemory;
    v10 = v8 + 1;
    this->m_CacheObjects.m_Size = v8 + 1;
    v11 = &m_pMemory[m_Size];
    if ( v11 != 0 )
    {
      *v11 = v7;
      m_pMemory = this->m_CacheObjects.m_Memory.m_pMemory;
      v10 = this->m_CacheObjects.m_Size;
    }
    v12 = &m_pMemory[v10];
    if ( v12 != m_pMemory )
    {
      v13 = 8LL * v10;
      _BitScanReverse64(&v14, v13 >> 3);
      std::__introsort_loop<GCSDK::CSharedObjectTypeCache **,long,bool (*)(GCSDK::CSharedObjectTypeCache const*,GCSDK::CSharedObjectTypeCache const*)>(
        m_pMemory,
        &m_pMemory[v13 / 8],
        2 * (63LL - (v14 ^ 0x3F)),
        GCSDK::SortCacheByTypeID);
      if ( v13 <= 135 )
      {
        std::__insertion_sort<GCSDK::CSharedObjectTypeCache **,bool (*)(GCSDK::CSharedObjectTypeCache const*,GCSDK::CSharedObjectTypeCache const*)>(
          m_pMemory,
          v12,
          GCSDK::SortCacheByTypeID);
      }
      else
      {
        v15 = m_pMemory + 16;
        std::__insertion_sort<GCSDK::CSharedObjectTypeCache **,bool (*)(GCSDK::CSharedObjectTypeCache const*,GCSDK::CSharedObjectTypeCache const*)>(
          m_pMemory,
          m_pMemory + 16,
          GCSDK::SortCacheByTypeID);
        if ( v12 != m_pMemory + 16 )
        {
          do
          {
            v16 = v15++;
            std::__unguarded_linear_insert<GCSDK::CSharedObjectTypeCache **,bool (*)(GCSDK::CSharedObjectTypeCache const*,GCSDK::CSharedObjectTypeCache const*)>(
              v16,
              GCSDK::SortCacheByTypeID);
          }
          while ( v12 != v15 );
        }
      }
    }
    return v7;
  }
  return result;
}


// GCSDK::CSharedObjectCache::AddObject  (line 263, @0x0000000003239a60, libserver.so)
// calls: GCSDK::CSharedObjectCache::CreateBaseTypeCache
bool __fastcall GCSDK::CSharedObjectCache::AddObject(
        GCSDK::CSharedObjectCache *const this,
        GCSDK::CSharedObject *pSharedObject)
{
  int v4; // eax
  GCSDK::CSharedObjectTypeCache *BaseTypeCache; // rax
  bool result; // al
  bool v7; // [rsp+Ch] [rbp-14h]

  v4 = (*(pSharedObject->_vptr_CSharedObject + 2))(pSharedObject);
  BaseTypeCache = GCSDK::CSharedObjectCache::CreateBaseTypeCache(this, v4);
  result = (*(BaseTypeCache->_vptr_CSharedObjectTypeCache + 2))(BaseTypeCache, pSharedObject);
  if ( result )
  {
    v7 = result;
    (*(this->_vptr_CSharedObjectCache + 7))(this);
    return v7;
  }
  return result;
}


// GCSDK::CSharedObjectCache::AddObjectClean  (line 279, @0x0000000003239ab0, libserver.so)
// calls: GCSDK::CSharedObjectCache::CreateBaseTypeCache
bool __fastcall GCSDK::CSharedObjectCache::AddObjectClean(
        GCSDK::CSharedObjectCache *const this,
        GCSDK::CSharedObject *pSharedObject)
{
  int v4; // eax
  GCSDK::CSharedObjectTypeCache *BaseTypeCache; // rax

  v4 = (*(pSharedObject->_vptr_CSharedObject + 2))(pSharedObject);
  BaseTypeCache = GCSDK::CSharedObjectCache::CreateBaseTypeCache(this, v4);
  return (*(BaseTypeCache->_vptr_CSharedObjectTypeCache + 3))(BaseTypeCache, pSharedObject);
}


// GCSDK::CSharedObjectCache::RemoveObject  (line 290, @0x0000000003239660, libserver.so)
// calls: GCSDK::CSharedObjectCache::FindBaseTypeCache
GCSDK::CSharedObject *__fastcall GCSDK::CSharedObjectCache::RemoveObject(
        GCSDK::CSharedObjectCache *const this,
        const GCSDK::CSharedObject *const soIndex)
{
  int v4; // eax
  GCSDK::CSharedObjectTypeCache *BaseTypeCache; // rax
  GCSDK::CSharedObject *v6; // rbx
  GCSDK::CSharedObject *result; // rax

  v4 = (*(soIndex->_vptr_CSharedObject + 2))(soIndex);
  BaseTypeCache = GCSDK::CSharedObjectCache::FindBaseTypeCache(this, v4);
  if ( BaseTypeCache == 0 )
    return 0;
  v6 = (*(BaseTypeCache->_vptr_CSharedObjectTypeCache + 4))(BaseTypeCache, soIndex);
  result = 0;
  if ( v6 != 0 )
  {
    (*(this->_vptr_CSharedObjectCache + 7))(this);
    return v6;
  }
  return result;
}


// GCSDK::CSharedObjectCache::RemoveAllObjectsWithoutDeleting  (line 309, @0x0000000003239130, libserver.so)
bool __fastcall GCSDK::CSharedObjectCache::RemoveAllObjectsWithoutDeleting(GCSDK::CSharedObjectCache *const this)
{
  int v1; // r13d
  __int64 v3; // rbx
  GCSDK::CSharedObjectTypeCache *v4; // rdi

  v1 = 0;
  v3 = 0;
  if ( this->m_CacheObjects.m_Size <= 0 )
    return 0;
  do
  {
    v4 = this->m_CacheObjects.m_Memory.m_pMemory[v3];
    v1 += v4->m_vecObjects.m_Size;
    (*(v4->_vptr_CSharedObjectTypeCache + 5))();
    ++v3;
  }
  while ( this->m_CacheObjects.m_Size > v3 );
  if ( v1 <= 0 )
    return 0;
  (*(this->_vptr_CSharedObjectCache + 7))(this);
  return 1;
}


// GCSDK::CSharedObjectCache::FindSharedObject  (line 332, @0x00000000032396d0, libserver.so)
// calls: GCSDK::CSharedObjectCache::FindBaseTypeCache, GCSDK::CSharedObjectTypeCache::FindSharedObject
// callers: CPlayerInventory::GetSOCDataForItem, GCSDK::CGCClient::FindSharedObject, GCSDK::CSharedObjectCache::FindSharedObject
GCSDK::CSharedObject *__fastcall GCSDK::CSharedObjectCache::FindSharedObject(
        GCSDK::CSharedObjectCache *const this,
        const GCSDK::CSharedObject *const soIndex)
{
  int v4; // eax
  GCSDK::CSharedObjectTypeCache *BaseTypeCache; // rax

  v4 = (*(soIndex->_vptr_CSharedObject + 2))(soIndex);
  BaseTypeCache = GCSDK::CSharedObjectCache::FindBaseTypeCache(this, v4);
  if ( BaseTypeCache != 0 )
    return GCSDK::CSharedObjectTypeCache::FindSharedObject(BaseTypeCache, soIndex);
  else
    return 0;
}


// GCSDK::CSharedObjectCache::FindSharedObject  (line 341, @0x0000000003239710, libserver.so)
// calls: GCSDK::CSharedObjectCache::FindSharedObject
const GCSDK::CSharedObject *__fastcall GCSDK::CSharedObjectCache::FindSharedObject(
        const GCSDK::CSharedObjectCache *const this,
        const GCSDK::CSharedObject *const soIndex)
{
  return GCSDK::CSharedObjectCache::FindSharedObject(this, soIndex);
}


// GCSDK::CSharedObjectCache::Dump  (line 350, @0x0000000003238f40, libserver.so)
// calls: GCSDK::SOIDRender_t::SOIDRender_t, GCSDK::CGCEmitGroup::Internal_Msg, __stack_chk_fail
// strings: "SharedObjectCache for %s (%d types):\n"
void __fastcall GCSDK::CSharedObjectCache::Dump(const GCSDK::CSharedObjectCache *const this)
{
  int m_Size; // r12d
  int v3; // ecx
  __int64 v4; // r12
  int v5; // ebx
  GCSDK::CSharedObjectTypeCache *v6; // rdi
  GCSDK::SOIDRender_t v7; // [rsp+0h] [rbp-B0h] BYREF
  unsigned __int64 v8; // [rsp+88h] [rbp-28h]
  GCSDK::SOID_t v9; // 0:rsi.8,8:rdx.8

  v8 = __readfsqword(0x28u);
  m_Size = this->m_CacheObjects.m_Size;
  v9.m_id = (*(this->_vptr_CSharedObjectCache + 2))();
  GCSDK::SOIDRender_t::SOIDRender_t(&v7, v9);
  v3 = m_Size;
  v4 = 0;
  v5 = 0;
  GCSDK::CGCEmitGroup::Internal_Msg(&GCSDK::SPEW_CONSOLE, "SharedObjectCache for %s (%d types):\n", v7.m_buf, v3);
  if ( this->m_CacheObjects.m_Size > 0 )
  {
    do
    {
      ++v5;
      v6 = this->m_CacheObjects.m_Memory.m_pMemory[v4++];
      (*(v6->_vptr_CSharedObjectTypeCache + 7))(v6);
    }
    while ( this->m_CacheObjects.m_Size > v5 );
  }
}


