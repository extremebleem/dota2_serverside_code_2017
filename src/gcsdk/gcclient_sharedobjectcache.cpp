
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_gcclient_sharedobjectcache.cpp  (line 0, @0x0000000001a6e6f0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_gcclient_sharedobjectcache_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// GCSDK::CGCClientSharedObjectTypeCache::CGCClientSharedObjectTypeCache  (line 19, @0x000000000323a370, libserver.so)
// calls: GCSDK::CSharedObjectTypeCache::CSharedObjectTypeCache
void __fastcall GCSDK::CGCClientSharedObjectTypeCache::CGCClientSharedObjectTypeCache(
        GCSDK::CGCClientSharedObjectTypeCache *const this,
        int nTypeID)
{
  GCSDK::CSharedObjectTypeCache::CSharedObjectTypeCache(this, nTypeID);
  this->m_nServiceID = 0;
  this->_vptr_CSharedObjectTypeCache = off_47D0B10;
}


// GCSDK::CGCClientSharedObjectTypeCache::~CGCClientSharedObjectTypeCache  (line 30, @0x000000000323a250, libserver.so)
// calls: GCSDK::CSharedObjectTypeCache::~CSharedObjectTypeCache
void __fastcall GCSDK::CGCClientSharedObjectTypeCache::~CGCClientSharedObjectTypeCache(
        GCSDK::CGCClientSharedObjectTypeCache *const this)
{
  this->_vptr_CSharedObjectTypeCache = off_47D0B10;
  GCSDK::CSharedObjectTypeCache::~CSharedObjectTypeCache(this);
}


// GCSDK::CGCClientSharedObjectTypeCache::~CGCClientSharedObjectTypeCache  (line 30, @0x000000000323a270, libserver.so)  // inlines: ~CGCClientSharedObjectTypeCache
// calls: GCSDK::CSharedObjectTypeCache::~CSharedObjectTypeCache, operator delete
void __fastcall GCSDK::CGCClientSharedObjectTypeCache::~CGCClientSharedObjectTypeCache(
        GCSDK::CGCClientSharedObjectTypeCache *const this)
{
  this->_vptr_CSharedObjectTypeCache = off_47D0B10;
  GCSDK::CSharedObjectTypeCache::~CSharedObjectTypeCache(this);
  operator delete(this);
}


// GCSDK::CGCClientSharedObjectTypeCache::BParseCacheSubscribedMsg  (line 37, @0x000000000323ad60, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<GCSDK::CSharedObject*>, Element, Find, Get, Get<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, GetObject, GrowMemory, Purge, Purge_FixedGrowable, RemoveAll, _M_data, _M_rep, object_data, operator[], size, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlMemory<GCSDK::CSharedObject*, int>::Grow, GCSDK::CGCClientSharedObjectTypeCache::BCreateFromMsg, GCSDK::EmitError, CUtlMemory<GCSDK::CSharedObject*, int>::Purge, __stack_chk_fail, CUtlVectorBase<GCSDK::CSharedObject*, CUtlMemoryFixedGrowable<GCSDK::CSharedObject*, 1ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg
// strings: "Failed to create/update SO\n"
bool __fastcall GCSDK::CGCClientSharedObjectTypeCache::BParseCacheSubscribedMsg(
        GCSDK::CGCClientSharedObjectTypeCache *const this,
        const CMsgSOCacheSubscribed_SubscribedType *const msg,
        CUtlVector<GCSDK::CSharedObject*,CUtlMemory<GCSDK::CSharedObject*,int> > *const vecCreatedObjects,
        CUtlVector<GCSDK::CSharedObject*,CUtlMemory<GCSDK::CSharedObject*,int> > *const vecUpdatedObjects,
        CUtlVector<GCSDK::CSharedObject*,CUtlMemory<GCSDK::CSharedObject*,int> > *const vecObjectsToDestroy)
{
  __int64 v7; // r12
  int v8; // ebx
  __int64 m_nAllocationCount; // rdx
  int m_Size; // eax
  GCSDK::CSharedObject **v11; // rax
  GCSDK::CSharedObject *v12; // r15
  int v13; // eax
  unsigned __int16 v14; // r12
  __int64 v15; // rax
  GCSDK::CSharedObject *v16; // rax
  GCSDK::CSharedObject *v17; // rbx
  GCSDK::CSharedObject **m_pMemory; // rsi
  GCSDK::CSharedObject **v19; // rax
  __int64 v20; // r15
  int v21; // eax
  CUtlVector<GCSDK::CSharedObject*,CUtlMemory<GCSDK::CSharedObject*,int> > *v22; // rdi
  int v23; // eax
  GCSDK::CSharedObject **v24; // rax
  __int64 i; // rbx
  uint32 v26; // edx
  GCSDK::CSharedObject **v28; // rax
  GCSDK::CSharedObject *v29; // rsi
  __int64 v30; // r14
  __int64 v31; // r12
  int v32; // eax
  int v33; // eax
  bool bUpdatedExisting; // [rsp+4Fh] [rbp-61h] BYREF
  GCSDK::CSharedObjectVec vecUntouchedObjects; // [rsp+50h] [rbp-60h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-38h]

  v7 = 0;
  v8 = 0;
  m_nAllocationCount = 1;
  v39 = __readfsqword(0x28u);
  vecUntouchedObjects.m_Memory.m_pMemory = &vecUntouchedObjects.m_Memory.m_FixedMemory;
  m_Size = this->m_vecObjects.m_Size;
  vecUntouchedObjects.m_Size = 0;
  vecUntouchedObjects.m_Memory.m_nAllocationCount = 1;
  vecUntouchedObjects.m_Memory.m_nGrowSize = 0x80000000;
  if ( m_Size != 0 )
  {
    while ( 1 )
    {
      v12 = this->m_vecObjects.m_Memory.m_pMemory[v8];
      v13 = v7;
      if ( v7 == m_nAllocationCount )
      {
        CUtlMemory<GCSDK::CSharedObject *,int>::Grow(&vecUntouchedObjects.m_Memory, 1);
        v13 = vecUntouchedObjects.m_Size;
      }
      vecUntouchedObjects.m_Size = v13 + 1;
      v11 = &vecUntouchedObjects.m_Memory.m_pMemory[v7];
      if ( v11 != 0 )
        *v11 = v12;
      if ( ++v8 >= this->m_vecObjects.m_Size )
        break;
      v7 = vecUntouchedObjects.m_Size;
      m_nAllocationCount = vecUntouchedObjects.m_Memory.m_nAllocationCount;
    }
  }
  if ( *(msg + 8) > 0 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = *(msg + 3);
      bUpdatedExisting = 0;
      v16 = GCSDK::CGCClientSharedObjectTypeCache::BCreateFromMsg(
              this,
              **(v15 + 8LL * v14),
              *(**(v15 + 8LL * v14) - 24LL),
              &bUpdatedExisting);
      v17 = v16;
      if ( v16 == 0 )
      {
        GCSDK::EmitError(&GCSDK::SPEW_SHAREDOBJ, "Failed to create/update SO\n");
        goto LABEL_25;
      }
      if ( !bUpdatedExisting )
      {
        v20 = vecCreatedObjects->m_Size;
        v33 = vecCreatedObjects->m_Size;
        if ( v20 == vecCreatedObjects->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<GCSDK::CSharedObject *,int>::Grow(&vecCreatedObjects->m_Memory, 1);
          v33 = vecCreatedObjects->m_Size;
        }
        v23 = v33 + 1;
        v22 = vecCreatedObjects;
        goto LABEL_20;
      }
      if ( vecUntouchedObjects.m_Size <= 0 )
        goto LABEL_18;
      m_pMemory = vecUntouchedObjects.m_Memory.m_pMemory;
      if ( v16 != *vecUntouchedObjects.m_Memory.m_pMemory )
        break;
LABEL_42:
      *m_pMemory = 0;
      v20 = vecUpdatedObjects->m_Size;
      v21 = vecUpdatedObjects->m_Size;
      if ( v20 == vecUpdatedObjects->m_Memory.m_nAllocationCount )
      {
LABEL_43:
        CUtlMemory<GCSDK::CSharedObject *,int>::Grow(&vecUpdatedObjects->m_Memory, 1);
        v21 = vecUpdatedObjects->m_Size;
      }
LABEL_19:
      v22 = vecUpdatedObjects;
      v23 = v21 + 1;
LABEL_20:
      v22->m_Size = v23;
      v24 = &v22->m_Memory.m_pMemory[v20];
      if ( v24 != 0 )
        *v24 = v17;
      if ( ++v14 >= *(msg + 8) )
        goto LABEL_23;
    }
    v19 = vecUntouchedObjects.m_Memory.m_pMemory + 1;
    LODWORD(m_nAllocationCount) = 0;
    while ( 1 )
    {
      m_nAllocationCount = (m_nAllocationCount + 1);
      if ( m_nAllocationCount == vecUntouchedObjects.m_Size )
        break;
      m_pMemory = v19++;
      if ( v17 == *(v19 - 1) )
      {
        if ( m_nAllocationCount == -1 )
          break;
        goto LABEL_42;
      }
    }
LABEL_18:
    v20 = vecUpdatedObjects->m_Size;
    v21 = vecUpdatedObjects->m_Size;
    if ( v20 == vecUpdatedObjects->m_Memory.m_nAllocationCount )
      goto LABEL_43;
    goto LABEL_19;
  }
LABEL_23:
  for ( i = 0; vecUntouchedObjects.m_Size > i; ++i )
  {
    v29 = vecUntouchedObjects.m_Memory.m_pMemory[i];
    if ( v29 != 0 )
    {
      v30 = (*(this->_vptr_CSharedObjectTypeCache + 4))(this, v29, m_nAllocationCount);
      if ( v30 != 0 )
      {
        v31 = vecObjectsToDestroy->m_Size;
        v32 = vecObjectsToDestroy->m_Size;
        if ( v31 == vecObjectsToDestroy->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<GCSDK::CSharedObject *,int>::Grow(&vecObjectsToDestroy->m_Memory, 1);
          v32 = vecObjectsToDestroy->m_Size;
        }
        vecObjectsToDestroy->m_Size = v32 + 1;
        v28 = &vecObjectsToDestroy->m_Memory.m_pMemory[v31];
        if ( v28 != 0 )
          *v28 = v30;
      }
    }
  }
  LOBYTE(v17) = 1;
LABEL_25:
  vecUntouchedObjects.m_Size = 0;
  v26 = vecUntouchedObjects.m_Memory.m_nGrowSize & 0xC0000000;
  if ( vecUntouchedObjects.m_Memory.m_nAllocationCount < 0
    || vecUntouchedObjects.m_Memory.m_pMemory == &vecUntouchedObjects.m_Memory.m_FixedMemory )
  {
    if ( v26 == 0 )
      CUtlMemory<GCSDK::CSharedObject *,int>::Purge(&vecUntouchedObjects.m_Memory);
  }
  else if ( vecUntouchedObjects.m_Memory.m_pMemory != 0 && v26 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return v17;
}


// GCSDK::CGCClientSharedObjectTypeCache::RemoveAllObjects  (line 90, @0x000000000323acd0, libserver.so)  // inlines: AddToTail, CopyConstruct<GCSDK::CSharedObject*>, Element, GrowMemory, operator[]
// calls: GCSDK::CSharedObjectTypeCache::RemoveObjectByIndex, CUtlMemory<GCSDK::CSharedObject*, int>::Grow
// callers: GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg
void __fastcall GCSDK::CGCClientSharedObjectTypeCache::RemoveAllObjects(
        GCSDK::CGCClientSharedObjectTypeCache *const this,
        CUtlVector<GCSDK::CSharedObject*,CUtlMemory<GCSDK::CSharedObject*,int> > *const vecObjects)
{
  CUtlVectorBase<GCSDK::CSharedObject*,CUtlMemory<GCSDK::CSharedObject*,int> >::CAllocator *p_m_Memory; // r15
  signed int m_Size; // ebx
  GCSDK::CSharedObject *v6; // rax
  __int64 v7; // r13
  int v8; // edx
  GCSDK::CSharedObject **v9; // rdx
  GCSDK::CSharedObject *pObject; // [rsp+8h] [rbp-38h]

  p_m_Memory = &vecObjects->m_Memory;
  m_Size = this->m_vecObjects.m_Size;
  while ( --m_Size >= 0 )
  {
    while ( 1 )
    {
      v6 = GCSDK::CSharedObjectTypeCache::RemoveObjectByIndex(this, m_Size);
      if ( v6 == 0 )
        break;
      v7 = vecObjects->m_Size;
      v8 = vecObjects->m_Size;
      if ( v7 == vecObjects->m_Memory.m_nAllocationCount )
      {
        pObject = v6;
        CUtlMemory<GCSDK::CSharedObject *,int>::Grow(p_m_Memory, 1);
        v8 = vecObjects->m_Size;
        v6 = pObject;
      }
      vecObjects->m_Size = v8 + 1;
      v9 = &vecObjects->m_Memory.m_pMemory[v7];
      if ( v9 == 0 )
        break;
      --m_Size;
      *v9 = v6;
      if ( m_Size < 0 )
        return;
    }
  }
}


// GCSDK::CGCClientSharedObjectTypeCache::BCreateFromMsg  (line 108, @0x000000000323a800, libserver.so)  // inlines: ~CUtlBuffer, ~CUtlMemory
// calls: CUtlBuffer::CUtlBuffer, GCSDK::CSharedObject::Create, CUtlMemory<unsigned char, int>::Purge, GCSDK::CSharedObjectTypeCache::FindSharedObject, GCSDK::EmitError, _Unwind_Resume
// callers: GCSDK::CGCClientSharedObjectCache::BCreateFromMsg, GCSDK::CGCClientSharedObjectTypeCache::BParseCacheSubscribedMsg
// strings: "Unable to create object of type %d\n"
GCSDK::CSharedObject *__fastcall GCSDK::CGCClientSharedObjectTypeCache::BCreateFromMsg(
        GCSDK::CGCClientSharedObjectTypeCache *const this,
        const void *pvData,
        uint32 unSize,
        bool *bUpdatedExisting)
{
  GCSDK::CSharedObject *v6; // rax
  GCSDK::CSharedObject *v7; // rbx
  GCSDK::CSharedObject v8; // rax
  GCSDK::CSharedObject *v9; // rdi
  GCSDK::CSharedObject *SharedObject; // rax
  GCSDK::CSharedObject *v12; // r15
  CUtlBuffer bufCreate; // [rsp+0h] [rbp-80h] BYREF

  CUtlBuffer::CUtlBuffer(&bufCreate, pvData, unSize, 8);
  v6 = GCSDK::CSharedObject::Create(this->m_nTypeID);
  v7 = v6;
  if ( v6 != 0 )
  {
    if ( (*(v6->_vptr_CSharedObject + 3))(v6, &bufCreate) != 0 )
    {
      SharedObject = GCSDK::CSharedObjectTypeCache::FindSharedObject(this, v7);
      v12 = SharedObject;
      if ( SharedObject != 0 )
      {
        (*(SharedObject->_vptr_CSharedObject + 6))(SharedObject, v7);
        (*(v7->_vptr_CSharedObject + 1))(v7);
        if ( bUpdatedExisting != 0 )
          *bUpdatedExisting = 1;
        v7 = v12;
      }
      else
      {
        (*(this->_vptr_CSharedObjectTypeCache + 2))(this, v7);
        if ( bUpdatedExisting != 0 )
          *bUpdatedExisting = 0;
      }
    }
    else
    {
      v8._vptr_CSharedObject = v7->_vptr_CSharedObject;
      v9 = v7;
      v7 = 0;
      (*(v8._vptr_CSharedObject + 1))(v9);
    }
  }
  else
  {
    GCSDK::EmitError(&GCSDK::SPEW_SHAREDOBJ, "Unable to create object of type %d\n", this->m_nTypeID);
    v7 = 0;
  }
  CUtlMemory<unsigned char,int>::Purge(&bufCreate.m_Memory);
  return v7;
}


// GCSDK::CGCClientSharedObjectTypeCache::BDestroyFromMsg  (line 154, @0x000000000323a9f0, libserver.so)  // inlines: ~CUtlBuffer, ~CUtlMemory
// calls: CUtlBuffer::CUtlBuffer, GCSDK::CSharedObject::Create, CUtlMemory<unsigned char, int>::Purge, GCSDK::CGCClient::DispatchSODestroyed, _Unwind_Resume
// callers: GCSDK::CGCClientSharedObjectCache::BDestroyFromMsg
__int64 __fastcall GCSDK::CGCClientSharedObjectTypeCache::BDestroyFromMsg(
        GCSDK::CGCClientSharedObjectTypeCache *const this,
        GCSDK::SOID_t owner,
        GCSDK::CGCClient *const client,
        const void *pvData,
        int unSize)
{
  GCSDK::SOID_t::ID_t m_id; // r15
  GCSDK::CSharedObject *v7; // rax
  GCSDK::CSharedObject *v8; // rbx
  unsigned int v9; // r13d
  const GCSDK::CSharedObject *v11; // rax
  const GCSDK::CSharedObject *v12; // r14
  __int64 ownera; // [rsp+8h] [rbp-88h]
  CUtlBuffer bufDestroy; // [rsp+10h] [rbp-80h] BYREF
  GCSDK::SOID_t v16; // 0:rsi.8,8:rdx.8

  m_id = owner.m_id;
  ownera = *&owner.m_type;
  CUtlBuffer::CUtlBuffer(&bufDestroy, pvData, unSize, 8);
  v7 = GCSDK::CSharedObject::Create(this->m_nTypeID);
  v8 = v7;
  if ( v7 != 0 )
  {
    v9 = (*(v7->_vptr_CSharedObject + 3))(v7, &bufDestroy);
    if ( v9 != 0 )
    {
      v11 = (*(this->_vptr_CSharedObjectTypeCache + 4))(this, v8);
      v12 = v11;
      if ( v11 != 0 )
      {
        *&v16.m_type = ownera;
        v16.m_id = m_id;
        GCSDK::CGCClient::DispatchSODestroyed(client, v16, v11, 4u);
        (*(v12->_vptr_CSharedObject + 1))(v12);
      }
    }
    (*(v8->_vptr_CSharedObject + 1))(v8);
  }
  else
  {
    v9 = 0;
  }
  CUtlMemory<unsigned char,int>::Purge(&bufDestroy.m_Memory);
  return v9;
}


// GCSDK::CGCClientSharedObjectTypeCache::BUpdateFromMsg  (line 183, @0x000000000323ab40, libserver.so)  // inlines: ~CUtlBuffer, ~CUtlMemory
// calls: CUtlBuffer::CUtlBuffer, GCSDK::CSharedObject::Create, CUtlMemory<unsigned char, int>::Purge, GCSDK::CSharedObjectTypeCache::FindSharedObject, CUtlBuffer::SeekGet, GCSDK::CGCClient::DispatchSOUpdated, _Unwind_Resume
// callers: GCSDK::CGCClientSharedObjectCache::BUpdateFromMsg
__int64 __fastcall GCSDK::CGCClientSharedObjectTypeCache::BUpdateFromMsg(
        GCSDK::CGCClientSharedObjectTypeCache *const this,
        GCSDK::SOID_t owner,
        GCSDK::CGCClient *const client,
        const void *pvData,
        int unSize)
{
  GCSDK::SOID_t::ID_t m_id; // r15
  __int64 v6; // r14
  GCSDK::CSharedObject *v8; // rax
  const GCSDK::CSharedObject *v9; // rbx
  unsigned int v10; // eax
  GCSDK::CSharedObject *SharedObject; // r13
  unsigned __int8 v13; // al
  unsigned int bRet; // [rsp+Ch] [rbp-84h]
  unsigned int bRetb; // [rsp+Ch] [rbp-84h]
  unsigned __int8 bReta; // [rsp+Ch] [rbp-84h]
  CUtlBuffer bufUpdate; // [rsp+10h] [rbp-80h] BYREF
  GCSDK::SOID_t v19; // 0:rsi.8,8:rdx.8

  m_id = owner.m_id;
  v6 = *&owner.m_type;
  CUtlBuffer::CUtlBuffer(&bufUpdate, pvData, unSize, 8);
  v8 = GCSDK::CSharedObject::Create(this->m_nTypeID);
  v9 = v8;
  if ( v8 != 0 )
  {
    bRet = (*(v8->_vptr_CSharedObject + 3))(v8, &bufUpdate);
    if ( bRet != 0 )
    {
      SharedObject = GCSDK::CSharedObjectTypeCache::FindSharedObject(this, v9);
      if ( SharedObject != 0 )
      {
        CUtlBuffer::SeekGet(&bufUpdate, CUtlBuffer::SeekType_t::SEEK_HEAD, 0);
        v13 = (*(SharedObject->_vptr_CSharedObject + 4))(SharedObject, v9);
        v19.m_id = m_id;
        *&v19.m_type = v6;
        bReta = v13;
        GCSDK::CGCClient::DispatchSOUpdated(client, v19, SharedObject, 4u);
      }
      else
      {
        bReta = 0;
      }
      (*(v9->_vptr_CSharedObject + 1))(v9);
      v10 = bReta;
    }
    else
    {
      (*(v9->_vptr_CSharedObject + 1))(v9);
      v10 = bRet;
    }
  }
  else
  {
    v10 = 0;
  }
  bRetb = v10;
  CUtlMemory<unsigned char,int>::Purge(&bufUpdate.m_Memory);
  return bRetb;
}


// GCSDK::CGCClientSharedObjectCache::CGCClientSharedObjectCache  (line 214, @0x000000000323a3a0, libserver.so)
// calls: GCSDK::CSharedObjectCache::CSharedObjectCache
// callers: GCSDK::CGCClient::FindOrAddSOCache
void __fastcall GCSDK::CGCClientSharedObjectCache::CGCClientSharedObjectCache(
        GCSDK::CGCClientSharedObjectCache *const this,
        GCSDK::SOID_t ID)
{
  __int64 v2; // r13
  GCSDK::SOID_t::ID_t m_id; // r12

  v2 = *&ID.m_type;
  m_id = ID.m_id;
  GCSDK::CSharedObjectCache::CSharedObjectCache(this);
  this->m_IDOwner.m_id = m_id;
  *&this->m_IDOwner.m_type = v2;
  this->_vptr_CSharedObjectCache = off_47D0B70;
  this->m_bInitialized = 0;
  this->m_bSubscribed = 0;
}


// GCSDK::CGCClientSharedObjectCache::~CGCClientSharedObjectCache  (line 226, @0x000000000323a2a0, libserver.so)
// calls: GCSDK::CSharedObjectCache::~CSharedObjectCache
void __fastcall GCSDK::CGCClientSharedObjectCache::~CGCClientSharedObjectCache(
        GCSDK::CGCClientSharedObjectCache *const this)
{
  this->_vptr_CSharedObjectCache = off_47D0B70;
  GCSDK::CSharedObjectCache::~CSharedObjectCache(this);
}


// GCSDK::CGCClientSharedObjectCache::~CGCClientSharedObjectCache  (line 226, @0x000000000323a2c0, libserver.so)  // inlines: ~CGCClientSharedObjectCache
// calls: GCSDK::CSharedObjectCache::~CSharedObjectCache, operator delete
void __fastcall GCSDK::CGCClientSharedObjectCache::~CGCClientSharedObjectCache(
        GCSDK::CGCClientSharedObjectCache *const this)
{
  this->_vptr_CSharedObjectCache = off_47D0B70;
  GCSDK::CSharedObjectCache::~CSharedObjectCache(this);
  operator delete(this);
}


// GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg  (line 234, @0x000000000323b9d0, libserver.so)
// calls: GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg
// callers: GCSDK::CGCClient::ProcessSOCacheSubscribedMsg
bool __fastcall GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg(
        GCSDK::CGCClientSharedObjectCache *const this,
        GCSDK::CGCClient *const client,
        const CMsgSOCacheSubscribed *const msg)
{
  const CMsgSOCacheSubscribed *pMsg; // [rsp+8h] [rbp-8h] BYREF

  pMsg = msg;
  return GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg(this, client, 1u, &pMsg, 0, 0);
}


// GCSDK::CGCClientSharedObjectCache::CreateTypeCache  (line 240, @0x000000000323a3e0, libserver.so)
// calls: GCSDK::CSharedObjectCache::CreateBaseTypeCache
// callers: CGCClientSystem::LoadSerializedSOCache
GCSDK::CGCClientSharedObjectTypeCache *__fastcall GCSDK::CGCClientSharedObjectCache::CreateTypeCache(
        GCSDK::CGCClientSharedObjectCache *const this,
        int nClassID,
        uint32 nServiceID)
{
  GCSDK::CGCClientSharedObjectTypeCache *result; // rax

  result = GCSDK::CSharedObjectCache::CreateBaseTypeCache(this, nClassID);
  result->m_nServiceID = nServiceID;
  return result;
}


// GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg  (line 247, @0x000000000323b120, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, CreateTypeCache, Element, FastRemove, FindAndFastRemove, Get, Get<google::protobuf::RepeatedPtrField<CMsgSOCacheSubscribed_SubscribedType>::TypeHandler>, GetTypeCacheByIndex, GrowMemory, HasElement, IsValidIndex, NextTypeCacheIndex, Purge, RemoveAll, memcpy, objects, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::Find, GCSDK::CSharedObjectCache::CreateBaseTypeCache, GCSDK::CGCClientSharedObjectTypeCache::BParseCacheSubscribedMsg, GCSDK::CGCClientSharedObjectTypeCache::RemoveAllObjects, GCSDK::CGCClient::SetSOCacheVersion, GCSDK::CGCClient::DispatchSOCacheSubscribed, GCSDK::CGCClient::DispatchSODestroyed, GCSDK::CGCClient::DispatchSOUpdated, GCSDK::CGCClient::DispatchSOCreated, CUtlMemory<int, int>::Grow, CUtlMemory<int, int>::Purge, CUtlMemory<GCSDK::CSharedObject*, int>::Purge (14 total)
// callers: GCSDK::CGCClient::PartialHandleCompletedCache, GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg
// local variable allocation has failed, the output may be wrong!
bool __fastcall GCSDK::CGCClientSharedObjectCache::BParseCacheSubscribedMsg(
        GCSDK::CGCClientSharedObjectCache *const this,
        GCSDK::CGCClient *const client,
        uint32 nNumMsgs,
        const CMsgSOCacheSubscribed **pMsgs,
        uint32 nNumUpToDate,
        const uint32 *pUpToDateServices)
{
  int m_Size; // ecx
  __int64 v8; // r15
  int v9; // r12d
  const uint32 *v10; // rbx
  int v11; // edx
  CUtlVector<GCSDK::CSharedObject*,CUtlMemory<GCSDK::CSharedObject*,int> > *v12; // rax
  __int64 v13; // r13
  int *v14; // rax
  __int64 v15; // rdx
  const CMsgSOCacheSubscribed *v16; // r12
  __int64 v17; // r14
  int v18; // r13d
  int *v19; // rbx
  int v20; // r15d
  int v21; // eax
  int v22; // esi
  int v23; // edx
  uint32 v24; // r15d
  GCSDK::CGCClientSharedObjectTypeCache *BaseTypeCache; // rax
  bool v26; // zf
  bool v27; // al
  __int64 v28; // r12
  int v29; // ebx
  GCSDK::CGCClientSharedObjectTypeCache *v30; // r14
  unsigned int v31; // ebx
  const CMsgSOCacheSubscribed **v32; // r12
  int (**vptr_CSharedObjectCache)(...); // rax
  __int64 v34; // r12
  int i; // r13d
  const GCSDK::CSharedObject *v36; // r14
  GCSDK::CSharedObject *v37; // rdi
  __int64 v38; // r13
  int j; // r12d
  const GCSDK::CSharedObject *v40; // r14
  __int64 v41; // r13
  int k; // r12d
  const GCSDK::CSharedObject *v43; // r14
  const CMsgSOCacheSubscribed **v47; // [rsp+18h] [rbp-118h]
  GCSDK::CGCClient *clienta; // [rsp+20h] [rbp-110h]
  int v49; // [rsp+50h] [rbp-E0h]
  CUtlVector<GCSDK::CSharedObject*,CUtlMemory<GCSDK::CSharedObject*,int> > *v51; // [rsp+60h] [rbp-D0h]
  bool bResulta; // [rsp+68h] [rbp-C8h]
  int m_nTypeID; // [rsp+7Ch] [rbp-B4h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vecUntouchedTypes; // [rsp+80h] [rbp-B0h] BYREF
  CUtlVector<GCSDK::CSharedObject*,CUtlMemory<GCSDK::CSharedObject*,int> > vecCreatedObjects; // [rsp+A0h] [rbp-90h] BYREF
  CUtlVector<GCSDK::CSharedObject*,CUtlMemory<GCSDK::CSharedObject*,int> > vecUpdatedObjects; // [rsp+C0h] [rbp-70h] BYREF
  CUtlVector<GCSDK::CSharedObject*,CUtlMemory<GCSDK::CSharedObject*,int> > vecObjectsToDestroy; // [rsp+E0h] [rbp-50h] BYREF
  GCSDK::SOID_t v59; // 0:rsi.8,8:rdx.8
  GCSDK::SOID_t v60; // 0:rsi.8,8:rdx.8
  GCSDK::SOID_t v61; // 0:rsi.8,8:rdx.8
  GCSDK::SOID_t v62; // 0:rsi.8,8:rdx.8

  m_Size = this->m_CacheObjects.m_Size;
  clienta = client;
  vecUntouchedTypes.m_Size = 0;
  vecUntouchedTypes.m_Memory.m_pMemory = 0;
  vecUntouchedTypes.m_Memory.m_nAllocationCount = 0;
  vecUntouchedTypes.m_Memory.m_nGrowSize = 0;
  if ( m_Size > 0 )
  {
    v8 = 0;
    v9 = 0;
    v51 = (pUpToDateServices + 1);
    v10 = &pUpToDateServices[nNumUpToDate];
    while ( 1 )
    {
      if ( v9 >= 0 && v9 < m_Size )
      {
        client = this->m_CacheObjects.m_Memory.m_pMemory[v8];
        if ( client != 0 )
        {
          if ( nNumUpToDate == 0 )
            goto LABEL_11;
          v11 = *(client + 11);
          if ( *pUpToDateServices != v11 )
            break;
        }
      }
LABEL_16:
      if ( ++v9 < m_Size )
      {
        ++v8;
        if ( v9 != -1 )
          continue;
      }
      goto LABEL_18;
    }
    v12 = v51;
    while ( v12 != v10 )
    {
      v12 = (v12 + 4);
      if ( v12[-1].m_Memory.m_nGrowSize == v11 )
        goto LABEL_16;
    }
LABEL_11:
    v13 = vecUntouchedTypes.m_Size;
    v49 = *(client + 10);
    if ( vecUntouchedTypes.m_Size == vecUntouchedTypes.m_Memory.m_nAllocationCount )
      CUtlMemory<int,int>::Grow(&vecUntouchedTypes.m_Memory, 1);
    ++vecUntouchedTypes.m_Size;
    v14 = &vecUntouchedTypes.m_Memory.m_pMemory[v13];
    if ( v14 != 0 )
      *v14 = v49;
    m_Size = this->m_CacheObjects.m_Size;
    goto LABEL_16;
  }
LABEL_18:
  v15 = nNumMsgs;
  vecCreatedObjects.m_Size = 0;
  vecCreatedObjects.m_Memory.m_pMemory = 0;
  vecCreatedObjects.m_Memory.m_nAllocationCount = 0;
  vecCreatedObjects.m_Memory.m_nGrowSize = 0;
  vecUpdatedObjects.m_Size = 0;
  vecUpdatedObjects.m_Memory.m_pMemory = 0;
  vecUpdatedObjects.m_Memory.m_nAllocationCount = 0;
  vecUpdatedObjects.m_Memory.m_nGrowSize = 0;
  vecObjectsToDestroy.m_Size = 0;
  vecObjectsToDestroy.m_Memory.m_pMemory = 0;
  vecObjectsToDestroy.m_Memory.m_nAllocationCount = 0;
  vecObjectsToDestroy.m_Memory.m_nGrowSize = 0;
  if ( nNumMsgs != 0 )
  {
    bResulta = 1;
    v47 = pMsgs;
    do
    {
      v16 = *v47;
      if ( *(*v47 + 8) > 0 )
      {
        v17 = 0;
        v18 = 0;
        do
        {
          v19 = *(*(v16 + 3) + v17);
          m_nTypeID = v19[12];
          v20 = m_nTypeID;
          v21 = CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&vecUntouchedTypes, &m_nTypeID);
          v22 = v20;
          if ( v21 != -1 && vecUntouchedTypes.m_Size > 0 )
          {
            v23 = vecUntouchedTypes.m_Size - 1;
            if ( v21 != vecUntouchedTypes.m_Size - 1 )
            {
              vecUntouchedTypes.m_Memory.m_pMemory[v21] = vecUntouchedTypes.m_Memory.m_pMemory[v23];
              v22 = v19[12];
              v23 = vecUntouchedTypes.m_Size - 1;
            }
            vecUntouchedTypes.m_Size = v23;
          }
          v24 = *(v16 + 22);
          BaseTypeCache = GCSDK::CSharedObjectCache::CreateBaseTypeCache(this, v22);
          BaseTypeCache->m_nServiceID = v24;
          v26 = !GCSDK::CGCClientSharedObjectTypeCache::BParseCacheSubscribedMsg(
                   BaseTypeCache,
                   v19,
                   &vecCreatedObjects,
                   &vecUpdatedObjects,
                   &vecObjectsToDestroy);
          v27 = bResulta;
          if ( v26 )
            v27 = 0;
          ++v18;
          v17 += 8;
          bResulta = v27;
        }
        while ( v18 < *(v16 + 8) );
      }
      ++v47;
    }
    while ( v47 != &pMsgs[nNumMsgs] );
  }
  else
  {
    bResulta = 1;
  }
  if ( this->m_CacheObjects.m_Size > 0 )
  {
    v28 = 0;
    v29 = 0;
    do
    {
      v30 = 0;
      if ( v29 >= 0 && this->m_CacheObjects.m_Size > v29 )
        v30 = this->m_CacheObjects.m_Memory.m_pMemory[v28];
      m_nTypeID = v30->m_nTypeID;
      if ( CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&vecUntouchedTypes, &m_nTypeID) >= 0 )
        GCSDK::CGCClientSharedObjectTypeCache::RemoveAllObjects(v30, &vecObjectsToDestroy);
      if ( ++v29 >= this->m_CacheObjects.m_Size )
        break;
      ++v28;
    }
    while ( v29 != -1 );
  }
  v31 = !this->m_bSubscribed ? 1 : 3;
  if ( bResulta && nNumMsgs != 0 )
  {
    v32 = pMsgs;
    do
    {
      GCSDK::CGCClient::SetSOCacheVersion(clienta, this, *(*v32 + 22), *(*v32 + 6), 0);
      ++v32;
    }
    while ( v32 != &pMsgs[nNumMsgs] );
  }
  vptr_CSharedObjectCache = this->_vptr_CSharedObjectCache;
  this->m_bInitialized = 1;
  this->m_bSubscribed = 1;
  v59.m_id = (vptr_CSharedObjectCache[2])(this, client, v15, &vecCreatedObjects, *&nNumUpToDate);
  GCSDK::CGCClient::DispatchSOCacheSubscribed(clienta, v59, v31);
  v34 = 0;
  for ( i = 0; vecObjectsToDestroy.m_Size > i; ++v34 )
  {
    v36 = vecObjectsToDestroy.m_Memory.m_pMemory[v34];
    v60.m_id = (*(this->_vptr_CSharedObjectCache + 2))(this);
    GCSDK::CGCClient::DispatchSODestroyed(clienta, v60, v36, v31);
    v37 = vecObjectsToDestroy.m_Memory.m_pMemory[v34];
    if ( v37 != 0 )
      (*(v37->_vptr_CSharedObject + 1))(v37);
    ++i;
  }
  v38 = 0;
  for ( j = 0; vecUpdatedObjects.m_Size > j; ++v38 )
  {
    v40 = vecUpdatedObjects.m_Memory.m_pMemory[v38];
    v61.m_id = (*(this->_vptr_CSharedObjectCache + 2))(this);
    GCSDK::CGCClient::DispatchSOUpdated(clienta, v61, v40, v31);
    ++j;
  }
  v41 = 0;
  for ( k = 0; vecCreatedObjects.m_Size > k; ++v41 )
  {
    v43 = vecCreatedObjects.m_Memory.m_pMemory[v41];
    v62.m_id = (*(this->_vptr_CSharedObjectCache + 2))(this);
    GCSDK::CGCClient::DispatchSOCreated(clienta, v62, v43, v31);
    ++k;
  }
  vecObjectsToDestroy.m_Size = 0;
  if ( (vecObjectsToDestroy.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<GCSDK::CSharedObject *,int>::Purge(&vecObjectsToDestroy.m_Memory);
    if ( (vecObjectsToDestroy.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<GCSDK::CSharedObject *,int>::Purge(&vecObjectsToDestroy.m_Memory);
  }
  vecUpdatedObjects.m_Size = 0;
  if ( (vecUpdatedObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<GCSDK::CSharedObject *,int>::Purge(&vecUpdatedObjects.m_Memory);
    if ( (vecUpdatedObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<GCSDK::CSharedObject *,int>::Purge(&vecUpdatedObjects.m_Memory);
  }
  vecCreatedObjects.m_Size = 0;
  if ( (vecCreatedObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<GCSDK::CSharedObject *,int>::Purge(&vecCreatedObjects.m_Memory);
    if ( (vecCreatedObjects.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<GCSDK::CSharedObject *,int>::Purge(&vecCreatedObjects.m_Memory);
  }
  vecUntouchedTypes.m_Size = 0;
  if ( (vecUntouchedTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&vecUntouchedTypes.m_Memory);
    if ( (vecUntouchedTypes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&vecUntouchedTypes.m_Memory);
  }
  return bResulta;
}


// GCSDK::CGCClientSharedObjectCache::BuildCacheSubscribedMsg  (line 356, @0x000000000323a400, libserver.so)  // inlines: Add, Add<google::protobuf::RepeatedPtrField<CMsgSOCacheSubscribed_SubscribedType>::TypeHandler>, Add<google::protobuf::RepeatedPtrField<std::basic_string<char> >::TypeHandler>, GetObject, GetTypeCacheByIndex, New, add_object_data, add_objects, mutable_owner_soid, operator[], set_has_owner_soid, set_has_type_id, set_has_version, set_type_id, set_version
// calls: GCSDK::SOID_t::ToMsgSOIDOwner, operator new, CMsgSOCacheSubscribed_SubscribedType::CMsgSOCacheSubscribed_SubscribedType, google::protobuf::internal::StringTypeHandlerBase::New(void), google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int), CMsgSOIDOwner::CMsgSOIDOwner, operator delete, _Unwind_Resume
void __fastcall GCSDK::CGCClientSharedObjectCache::BuildCacheSubscribedMsg(
        const GCSDK::CGCClientSharedObjectCache *const this,
        CMsgSOCacheSubscribed *const msg)
{
  CMsgSOIDOwner *v2; // rbx
  __int64 v3; // rdx
  uint64 m_ulVersion; // rax
  GCSDK::CSharedObjectTypeCache *v5; // r12
  __int64 v6; // rax
  int v7; // edx
  CMsgSOCacheSubscribed_SubscribedType *v8; // rbx
  google::protobuf::internal::StringTypeHandlerBase *v9; // rdi
  CMsgSOCacheSubscribed_SubscribedType *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  int m_nTypeID; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  int v18; // esi
  GCSDK::CSharedObject *v19; // r15
  void (__fastcall *v20)(GCSDK::CSharedObject *, __int64); // r13
  __int64 v21; // rax
  __int64 v22; // rsi
  int v23; // eax
  __int64 v24; // rdx
  __int64 nTypeIndex; // [rsp+28h] [rbp-48h]
  GCSDK::SOID_t v28; // [rsp+30h] [rbp-40h] BYREF

  v2 = *(msg + 7);
  *(msg + 4) |= 4u;
  if ( v2 == 0 )
  {
    v2 = operator new(0x28u);
    CMsgSOIDOwner::CMsgSOIDOwner(v2);
    *(msg + 7) = v2;
  }
  v28.m_id = (*(this->_vptr_CSharedObjectCache + 2))(this);
  *&v28.m_type = v3;
  GCSDK::SOID_t::ToMsgSOIDOwner(&v28, v2);
  nTypeIndex = 0;
  m_ulVersion = this->m_ulVersion;
  *(msg + 4) |= 2u;
  *(msg + 6) = m_ulVersion;
  if ( this->m_CacheObjects.m_Size > 0 )
  {
    do
    {
      v5 = this->m_CacheObjects.m_Memory.m_pMemory[nTypeIndex];
      if ( v5 != 0 && v5->m_vecObjects.m_Size != 0 )
      {
        v6 = *(msg + 8);
        v7 = *(msg + 9);
        if ( v6 < v7 )
        {
          v9 = msg;
          v24 = *(msg + 3);
          *(msg + 8) = v6 + 1;
          v10 = *(v24 + 8 * v6);
        }
        else
        {
          if ( v7 == *(msg + 10) )
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(msg + 1, v7 + 1);
          v8 = operator new(0x38u);
          CMsgSOCacheSubscribed_SubscribedType::CMsgSOCacheSubscribed_SubscribedType(v8);
          v9 = msg;
          v10 = v8;
          v11 = *(msg + 8);
          v12 = *(msg + 3);
          ++*(msg + 9);
          *(msg + 8) = v11 + 1;
          *(v12 + 8 * v11) = v8;
        }
        m_nTypeID = v5->m_nTypeID;
        *(v10 + 4) |= 1u;
        *(v10 + 12) = m_nTypeID;
        if ( v5->m_vecObjects.m_Size != 0 )
        {
          v14 = 0;
          do
          {
            while ( 1 )
            {
              v18 = *(v10 + 9);
              v19 = v5->m_vecObjects.m_Memory.m_pMemory[v14];
              v20 = *(v19->_vptr_CSharedObject + 8);
              v21 = *(v10 + 8);
              if ( v21 >= v18 )
                break;
              v22 = *(v10 + 3);
              ++v14;
              *(v10 + 8) = v21 + 1;
              v20(v19, *(v22 + 8 * v21));
              if ( v14 >= v5->m_vecObjects.m_Size )
                goto LABEL_17;
            }
            if ( v18 == *(v10 + 10) )
              google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v10 + 1, v18 + 1);
            v15 = google::protobuf::internal::StringTypeHandlerBase::New(v9);
            v16 = *(v10 + 8);
            ++v14;
            v17 = *(v10 + 3);
            ++*(v10 + 9);
            *(v10 + 8) = v16 + 1;
            *(v17 + 8 * v16) = v15;
            v20(v19, v15);
          }
          while ( v14 < v5->m_vecObjects.m_Size );
        }
      }
LABEL_17:
      v23 = nTypeIndex++;
    }
    while ( this->m_CacheObjects.m_Size > v23 + 1 );
  }
}


// GCSDK::CGCClientSharedObjectCache::BCreateFromMsg  (line 380, @0x000000000323a920, libserver.so)  // inlines: CreateTypeCache
// calls: GCSDK::CSharedObjectCache::CreateBaseTypeCache, GCSDK::CGCClientSharedObjectTypeCache::BCreateFromMsg, GCSDK::CGCClient::DispatchSOCreated, GCSDK::CGCClient::DispatchSOUpdated
// callers: GCSDK::CGCClient::SOCacheCreateMsg, GCSDK::CGCClient::SOCacheUpdateMultipleMsg
bool __fastcall GCSDK::CGCClientSharedObjectCache::BCreateFromMsg(
        GCSDK::CGCClientSharedObjectCache *const this,
        GCSDK::CGCClient *const client,
        uint32 nServiceID,
        int nTypeID,
        const void *pvData,
        uint32 unSize)
{
  GCSDK::CGCClientSharedObjectTypeCache *BaseTypeCache; // rax
  GCSDK::CSharedObject *v12; // r12
  int (**vptr_CSharedObjectCache)(...); // rax
  bool bUpdatedExisting; // [rsp+Fh] [rbp-31h] BYREF
  GCSDK::SOID_t v16; // 0:rsi.8,8:rdx.8
  GCSDK::SOID_t v17; // 0:rsi.8,8:rdx.8

  BaseTypeCache = GCSDK::CSharedObjectCache::CreateBaseTypeCache(this, nTypeID);
  BaseTypeCache->m_nServiceID = nServiceID;
  bUpdatedExisting = 0;
  v12 = GCSDK::CGCClientSharedObjectTypeCache::BCreateFromMsg(BaseTypeCache, pvData, unSize, &bUpdatedExisting);
  if ( v12 == 0 )
    return 0;
  vptr_CSharedObjectCache = this->_vptr_CSharedObjectCache;
  if ( bUpdatedExisting )
  {
    v17.m_id = (vptr_CSharedObjectCache[2])(this);
    GCSDK::CGCClient::DispatchSOUpdated(client, v17, v12, 4u);
  }
  else
  {
    v16.m_id = (vptr_CSharedObjectCache[2])(this);
    GCSDK::CGCClient::DispatchSOCreated(client, v16, v12, 4u);
  }
  return 1;
}


// GCSDK::CGCClientSharedObjectCache::BDestroyFromMsg  (line 420, @0x000000000323aae0, libserver.so)  // inlines: FindTypeCache
// calls: GCSDK::CSharedObjectCache::FindBaseTypeCache, GCSDK::CGCClientSharedObjectTypeCache::BDestroyFromMsg
// callers: GCSDK::CGCClient::SOCacheDestroyMsg, GCSDK::CGCClient::SOCacheUpdateMultipleMsg
bool __fastcall GCSDK::CGCClientSharedObjectCache::BDestroyFromMsg(
        GCSDK::CGCClientSharedObjectCache *const this,
        GCSDK::CGCClient *const client,
        int nTypeID,
        const void *pvData,
        uint32 unSize)
{
  GCSDK::CGCClientSharedObjectTypeCache *BaseTypeCache; // r12
  bool result; // al
  GCSDK::SOID_t v11; // 0:rsi.8,8:rdx.8

  BaseTypeCache = GCSDK::CSharedObjectCache::FindBaseTypeCache(this, nTypeID);
  result = 0;
  if ( BaseTypeCache != 0 )
  {
    v11.m_id = (*(this->_vptr_CSharedObjectCache + 2))(this);
    return GCSDK::CGCClientSharedObjectTypeCache::BDestroyFromMsg(BaseTypeCache, v11, client, pvData, unSize);
  }
  return result;
}


// GCSDK::CGCClientSharedObjectCache::BUpdateFromMsg  (line 436, @0x000000000323ac70, libserver.so)  // inlines: FindTypeCache
// calls: GCSDK::CSharedObjectCache::FindBaseTypeCache, GCSDK::CGCClientSharedObjectTypeCache::BUpdateFromMsg
// callers: GCSDK::CGCClient::SOCacheUpdateMsg, GCSDK::CGCClient::SOCacheUpdateMultipleMsg
bool __fastcall GCSDK::CGCClientSharedObjectCache::BUpdateFromMsg(
        GCSDK::CGCClientSharedObjectCache *const this,
        GCSDK::CGCClient *const client,
        int nTypeID,
        const void *pvData,
        uint32 unSize)
{
  GCSDK::CGCClientSharedObjectTypeCache *BaseTypeCache; // r12
  bool result; // al
  GCSDK::SOID_t v11; // 0:rsi.8,8:rdx.8

  BaseTypeCache = GCSDK::CSharedObjectCache::FindBaseTypeCache(this, nTypeID);
  result = 0;
  if ( BaseTypeCache != 0 )
  {
    v11.m_id = (*(this->_vptr_CSharedObjectCache + 2))(this);
    return GCSDK::CGCClientSharedObjectTypeCache::BUpdateFromMsg(BaseTypeCache, v11, client, pvData, unSize);
  }
  return result;
}


// GCSDK::CGCClientSharedObjectCache::NotifyObjectsCreated  (line 454, @0x000000000323a650, libserver.so)  // inlines: GetObject, GetTypeCacheByIndex, IsValidIndex, NextTypeCacheIndex, operator[]
// callers: GCSDK::CGCClient::AddSOCacheListener
void __fastcall GCSDK::CGCClientSharedObjectCache::NotifyObjectsCreated(
        GCSDK::CGCClientSharedObjectCache *const this,
        GCSDK::ISharedObjectListener *const context,
        GCSDK::ESOCacheEvent eEvent)
{
  GCSDK::CSharedObjectTypeCache *v5; // r14
  int v6; // ebx
  __int64 v7; // rdx
  int (*v8)(...); // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-48h]
  int i; // [rsp+10h] [rbp-40h]
  GCSDK::CSharedObject *pObject; // [rsp+18h] [rbp-38h]

  v11 = 0;
  i = 0;
  if ( this->m_CacheObjects.m_Size > 0 )
  {
    do
    {
      v5 = 0;
      if ( i >= 0 && i < this->m_CacheObjects.m_Size )
        v5 = this->m_CacheObjects.m_Memory.m_pMemory[v11];
      v6 = 0;
      while ( v6 < v5->m_vecObjects.m_Size )
      {
        v7 = v6++;
        pObject = v5->m_vecObjects.m_Memory.m_pMemory[v7];
        v8 = *context->_vptr_ISharedObjectListener;
        v9 = (*(this->_vptr_CSharedObjectCache + 2))(this);
        v8(context, v9, v10, pObject, eEvent);
      }
      if ( ++i >= this->m_CacheObjects.m_Size )
        break;
      ++v11;
    }
    while ( i != -1 );
  }
}


// GCSDK::CGCClientSharedObjectCache::NotifyObjectsDestroyed  (line 467, @0x000000000323a720, libserver.so)  // inlines: GetObject, GetTypeCacheByIndex, IsValidIndex, NextTypeCacheIndex, operator[]
// callers: GCSDK::CGCClient::NotifySOCacheUnsubscribed
void __fastcall GCSDK::CGCClientSharedObjectCache::NotifyObjectsDestroyed(
        GCSDK::CGCClientSharedObjectCache *const this,
        GCSDK::ISharedObjectListener *const context,
        GCSDK::ESOCacheEvent eEvent)
{
  GCSDK::CSharedObjectTypeCache *v5; // r14
  int v6; // ebx
  __int64 v7; // rdx
  void (__fastcall *v8)(GCSDK::ISharedObjectListener *const, __int64, __int64, GCSDK::CSharedObject *, _QWORD); // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-48h]
  int i; // [rsp+10h] [rbp-40h]
  GCSDK::CSharedObject *pObject; // [rsp+18h] [rbp-38h]

  v11 = 0;
  i = 0;
  if ( this->m_CacheObjects.m_Size > 0 )
  {
    do
    {
      v5 = 0;
      if ( i >= 0 && i < this->m_CacheObjects.m_Size )
        v5 = this->m_CacheObjects.m_Memory.m_pMemory[v11];
      v6 = 0;
      while ( v6 < v5->m_vecObjects.m_Size )
      {
        v7 = v6++;
        pObject = v5->m_vecObjects.m_Memory.m_pMemory[v7];
        v8 = *(context->_vptr_ISharedObjectListener + 2);
        v9 = (*(this->_vptr_CSharedObjectCache + 2))(this);
        v8(context, v9, v10, pObject, eEvent);
      }
      if ( ++i >= this->m_CacheObjects.m_Size )
        break;
      ++v11;
    }
    while ( i != -1 );
  }
}


