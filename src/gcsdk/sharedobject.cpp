
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_sharedobject.cpp  (line 0, @0x0000000001a6e640, libserver.so)  // inlines: CUtlMemory, CUtlSortVector, CUtlVector, CUtlVectorBase, Color, SetColor, __static_initialization_and_destruction_0
// calls: __cxa_atexit
// globals: __dso_handle, UNSPECIFIED_LOGGING_COLOR, GCSDK::CSharedObject::sm_vecFactories, CUtlSortVector<GCSDK::CSharedObject::SharedObjectInfo_t,GCSDK::CSharedObject::CCompareSharedObject,CUtlVector<GCSDK::CSharedObject::SharedObjectInfo_t,CUtlMemor
void __cdecl GLOBAL__sub_I_sharedobject_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  GCSDK::CSharedObject::sm_vecFactories.m_Size = 0;
  GCSDK::CSharedObject::sm_vecFactories.m_Memory.m_pMemory = 0;
  GCSDK::CSharedObject::sm_vecFactories.m_Memory.m_nAllocationCount = 0;
  GCSDK::CSharedObject::sm_vecFactories.m_Memory.m_nGrowSize = 0;
  GCSDK::CSharedObject::sm_vecFactories.m_pLessContext = 0;
  GCSDK::CSharedObject::sm_vecFactories.m_bNeedsSort = 0;
  __cxa_atexit(
    CUtlSortVector<GCSDK::CSharedObject::SharedObjectInfo_t,GCSDK::CSharedObject::CCompareSharedObject,CUtlVector<GCSDK::CSharedObject::SharedObjectInfo_t,CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t,int>>>::~CUtlSortVector,
    &GCSDK::CSharedObject::sm_vecFactories,
    &_dso_handle);
}


// GCSDK::CSharedObject::FindSharedObjectInfo  (line 21, @0x0000000003238a10, libserver.so)  // inlines: Element, Find<int>, operator[]
// calls: AssertMsg_ConditionFailed
// callers: CGCClientSystem::LoadSerializedSOCache, GCSDK::CSharedObject::Create, GCSDK::CSharedObject::GetTypeFlags, GCSDK::CSharedObject::PchClassName, GCSDK::CSharedObject::PchClassBuildCacheNodeName, GCSDK::CSharedObject::PchClassCreateNodeName, GCSDK::CSharedObject::PchClassUpdateNodeName
// globals: GCSDK::CSharedObject::sm_vecFactories, CUtlSortVector<GCSDK::CSharedObject::SharedObjectInfo_t,GCSDK::CSharedObject::CCompareSharedObject,CUtlVector<GCSDK::CSharedObject::SharedObjectInfo_t,CUtlMemor
const GCSDK::CSharedObject::SharedObjectInfo_t *__fastcall GCSDK::CSharedObject::FindSharedObjectInfo(int nTypeID)
{
  int v2; // esi
  int v3; // ecx
  int v4; // edx
  const GCSDK::CSharedObject::SharedObjectInfo_t *result; // rax

  if ( GCSDK::CSharedObject::sm_vecFactories.m_bNeedsSort
    && AssertMsg_ConditionFailed(
         &CUtlSortVector<GCSDK::CSharedObject::SharedObjectInfo_t,GCSDK::CSharedObject::CCompareSharedObject,CUtlVector<GCSDK::CSharedObject::SharedObjectInfo_t,CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t,int>>>::Find<int>(int const&)const::_assertionConstants,
         0) != 0 )
  {
    __debugbreak();
  }
  v2 = GCSDK::CSharedObject::sm_vecFactories.m_Size - 1;
  if ( GCSDK::CSharedObject::sm_vecFactories.m_Size - 1 < 0 )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = (v3 + v2) >> 1;
      if ( GCSDK::CSharedObject::sm_vecFactories.m_Memory.m_pMemory[v4].m_nID >= nTypeID )
        break;
      v3 = v4 + 1;
      if ( v2 < v4 + 1 )
        return 0;
    }
    if ( GCSDK::CSharedObject::sm_vecFactories.m_Memory.m_pMemory[v4].m_nID <= nTypeID )
      break;
    v2 = v4 - 1;
    if ( v4 - 1 < v3 )
      return 0;
  }
  result = 0;
  if ( v4 != -1 )
    return &GCSDK::CSharedObject::sm_vecFactories.m_Memory.m_pMemory[v4];
  return result;
}


// GCSDK::CSharedObject::RegisterFactory  (line 33, @0x0000000003238c00, libserver.so)  // inlines: Element, FindLessOrEqual<GCSDK::CSharedObject::SharedObjectInfo_t>, InsertIfNotFound, operator[]
// calls: CUtlVectorBase<GCSDK::CSharedObject::SharedObjectInfo_t, CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t, int> >::InsertBefore, AssertMsg_ConditionFailed
// callers: CDOTAGCServerSystem::Init, CInventoryManager::Init
// globals: GCSDK::CSharedObject::sm_vecFactories, CUtlSortVector<GCSDK::CSharedObject::SharedObjectInfo_t,GCSDK::CSharedObject::CCompareSharedObject,CUtlVector<GCSDK::CSharedObject::SharedObjectInfo_t,CUtlMemor
void __fastcall GCSDK::CSharedObject::RegisterFactory(
        int nTypeID,
        GCSDK::SOCreationFunc_t fnFactory,
        uint32 unFlags,
        const char *pchClassName,
        const char *pszBuildCacheName,
        const char *pszCreateName,
        const char *pszUpdateName)
{
  int v7; // esi
  int v8; // ecx
  int v9; // eax
  int info; // [rsp+0h] [rbp-30h] BYREF
  uint32 v11; // [rsp+4h] [rbp-2Ch]
  GCSDK::SOCreationFunc_t fnFactorya; // [rsp+8h] [rbp-28h]
  const char *v13; // [rsp+10h] [rbp-20h]
  const char *v14; // [rsp+18h] [rbp-18h]
  const char *v15; // [rsp+20h] [rbp-10h]
  const char *v16; // [rsp+28h] [rbp-8h]

  info = nTypeID;
  fnFactorya = fnFactory;
  v11 = unFlags;
  v13 = pchClassName;
  v14 = pszBuildCacheName;
  v16 = pszCreateName;
  v15 = pszUpdateName;
  if ( GCSDK::CSharedObject::sm_vecFactories.m_bNeedsSort )
  {
    if ( AssertMsg_ConditionFailed(
           &CUtlSortVector<GCSDK::CSharedObject::SharedObjectInfo_t,GCSDK::CSharedObject::CCompareSharedObject,CUtlVector<GCSDK::CSharedObject::SharedObjectInfo_t,CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t,int>>>::InsertIfNotFound(GCSDK::CSharedObject::SharedObjectInfo_t const&)::_assertionConstants,
           0) != 0 )
      __debugbreak();
    if ( GCSDK::CSharedObject::sm_vecFactories.m_bNeedsSort
      && AssertMsg_ConditionFailed(
           &CUtlSortVector<GCSDK::CSharedObject::SharedObjectInfo_t,GCSDK::CSharedObject::CCompareSharedObject,CUtlVector<GCSDK::CSharedObject::SharedObjectInfo_t,CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t,int>>>::FindLessOrEqual<GCSDK::CSharedObject::SharedObjectInfo_t>(GCSDK::CSharedObject::SharedObjectInfo_t const&,bool *)const::_assertionConstants,
           0) != 0 )
    {
      __debugbreak();
    }
  }
  v7 = GCSDK::CSharedObject::sm_vecFactories.m_Size - 1;
  if ( GCSDK::CSharedObject::sm_vecFactories.m_Size - 1 < 0 )
  {
LABEL_8:
    CUtlVectorBase<GCSDK::CSharedObject::SharedObjectInfo_t,CUtlMemory<GCSDK::CSharedObject::SharedObjectInfo_t,int>>::InsertBefore(
      &GCSDK::CSharedObject::sm_vecFactories,
      v7 + 1,
      &info);
  }
  else
  {
    v8 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = (v8 + v7) >> 1;
        if ( GCSDK::CSharedObject::sm_vecFactories.m_Memory.m_pMemory[v9].m_nID >= info )
          break;
        v8 = v9 + 1;
        if ( v7 < v9 + 1 )
          goto LABEL_8;
      }
      if ( GCSDK::CSharedObject::sm_vecFactories.m_Memory.m_pMemory[v9].m_nID <= info )
        break;
      v7 = v9 - 1;
      if ( v9 - 1 < v8 )
        goto LABEL_8;
    }
  }
}


// GCSDK::CSharedObject::Create  (line 52, @0x0000000003238aa0, libserver.so)
// calls: GCSDK::CSharedObject::FindSharedObjectInfo, GCSDK::EmitError
// callers: CGCClientSystem::LoadSerializedSOCache, GCSDK::CGCClientSharedObjectTypeCache::BCreateFromMsg, GCSDK::CGCClientSharedObjectTypeCache::BDestroyFromMsg, GCSDK::CGCClientSharedObjectTypeCache::BUpdateFromMsg
// strings: "Probably failed to set object type (%d) on the server/client.\n"
GCSDK::CSharedObject *__fastcall GCSDK::CSharedObject::Create(int nTypeID)
{
  const GCSDK::CSharedObject::SharedObjectInfo_t *SharedObjectInfo; // rax

  SharedObjectInfo = GCSDK::CSharedObject::FindSharedObjectInfo(nTypeID);
  if ( SharedObjectInfo != 0 )
    return SharedObjectInfo->m_pFactoryFunction();
  GCSDK::EmitError(&GCSDK::SPEW_SHAREDOBJ, "Probably failed to set object type (%d) on the server/client.\n", nTypeID);
  return 0;
}


// GCSDK::CSharedObject::GetTypeFlags  (line 71, @0x0000000003238af0, libserver.so)
// calls: GCSDK::CSharedObject::FindSharedObjectInfo
uint32 __fastcall GCSDK::CSharedObject::GetTypeFlags(int nTypeID)
{
  const GCSDK::CSharedObject::SharedObjectInfo_t *SharedObjectInfo; // rax

  SharedObjectInfo = GCSDK::CSharedObject::FindSharedObjectInfo(nTypeID);
  if ( SharedObjectInfo != 0 )
    return SharedObjectInfo->m_unFlags;
  else
    return 0;
}


// GCSDK::CSharedObject::PchClassName  (line 77, @0x0000000003238b10, libserver.so)
// calls: GCSDK::CSharedObject::FindSharedObjectInfo
// callers: GCSDK::CSharedObjectTypeCache::Dump
const char *__fastcall GCSDK::CSharedObject::PchClassName(int nTypeID)
{
  const GCSDK::CSharedObject::SharedObjectInfo_t *SharedObjectInfo; // rax

  SharedObjectInfo = GCSDK::CSharedObject::FindSharedObjectInfo(nTypeID);
  if ( SharedObjectInfo != 0 )
    return SharedObjectInfo->m_pchClassName;
  else
    return 0;
}


// GCSDK::CSharedObject::PchClassBuildCacheNodeName  (line 83, @0x0000000003238b30, libserver.so)
// calls: GCSDK::CSharedObject::FindSharedObjectInfo
const char *__fastcall GCSDK::CSharedObject::PchClassBuildCacheNodeName(int nTypeID)
{
  const GCSDK::CSharedObject::SharedObjectInfo_t *SharedObjectInfo; // rax

  SharedObjectInfo = GCSDK::CSharedObject::FindSharedObjectInfo(nTypeID);
  if ( SharedObjectInfo != 0 )
    return SharedObjectInfo->m_pchBuildCacheSubNodeName;
  else
    return 0;
}


// GCSDK::CSharedObject::PchClassCreateNodeName  (line 89, @0x0000000003238b50, libserver.so)
// calls: GCSDK::CSharedObject::FindSharedObjectInfo
const char *__fastcall GCSDK::CSharedObject::PchClassCreateNodeName(int nTypeID)
{
  const GCSDK::CSharedObject::SharedObjectInfo_t *SharedObjectInfo; // rax

  SharedObjectInfo = GCSDK::CSharedObject::FindSharedObjectInfo(nTypeID);
  if ( SharedObjectInfo != 0 )
    return SharedObjectInfo->m_pchCreateNodeName;
  else
    return 0;
}


// GCSDK::CSharedObject::PchClassUpdateNodeName  (line 95, @0x0000000003238b70, libserver.so)
// calls: GCSDK::CSharedObject::FindSharedObjectInfo
const char *__fastcall GCSDK::CSharedObject::PchClassUpdateNodeName(int nTypeID)
{
  const GCSDK::CSharedObject::SharedObjectInfo_t *SharedObjectInfo; // rax

  SharedObjectInfo = GCSDK::CSharedObject::FindSharedObjectInfo(nTypeID);
  if ( SharedObjectInfo != 0 )
    return SharedObjectInfo->m_pchUpdateNodeName;
  else
    return 0;
}


// GCSDK::CSharedObject::BIsKeyEqual  (line 106, @0x0000000003238b90, libserver.so)
// callers: GCSDK::CSharedObjectTypeCache::FindSharedObjectIndex
bool __fastcall GCSDK::CSharedObject::BIsKeyEqual(
        const GCSDK::CSharedObject *const this,
        const GCSDK::CSharedObject *const soRHS)
{
  int v4; // r13d

  v4 = (*(this->_vptr_CSharedObject + 2))(this);
  if ( v4 != (*(soRHS->_vptr_CSharedObject + 2))(soRHS) || (*(this->_vptr_CSharedObject + 5))(this, soRHS) != 0 )
    return 0;
  else
    return (*(soRHS->_vptr_CSharedObject + 5))(soRHS, this) ^ 1;
}


