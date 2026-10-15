// Reconstructed from DWARF by pahole; not original source.

// src/entity2/entityidentity.cpp:16
class CAttributeDictSaveDataOps : public CDefSaveRestoreOps {
public:

	CAttributeDictSaveDataOps(CAttributeDictSaveDataOps &);
	CAttributeDictSaveDataOps(const CAttributeDictSaveDataOps &);
	CAttributeDictSaveDataOps();

private:

	virtual void Save(const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(const SaveRestoreFieldInfo_t &, IRestore *);
	virtual bool IsEmpty(const SaveRestoreFieldInfo_t &);
	virtual void MakeEmpty(const SaveRestoreFieldInfo_t &);

	// vtable[0] Save
	// vtable[1] Restore
	// vtable[2] IsEmpty
	// vtable[3] MakeEmpty
	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_entityidentity.cpp  (line 0, @0x0000000001a67b60, libserver.so)  // inlines: Bind, CFieldPathHuffmanEncoder, CUtlDelegate, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixed, CVariantBase, Color, Convert<FastDelegate1<NetworkSerializationMode_t, void>, void (FastDelegate1<NetworkSerializationMode_t, void>::*)(NetworkSerializationMode_t)const, void (detail::GenericClass::*)()>, FastDelegate1, Purge, RemoveAll, SetColor, UtlMakeDelegate<NetworkSerializationMode_t, void>, __static_initialization_and_destruction_0, bindmemfunc<FastDelegate1<NetworkSerializationMode_t, void>, void (FastDelegate1<NetworkSerializationMode_t, void>::*)(NetworkSerializationMode_t)const>, bindstaticfunc<FastDelegate1<NetworkSerializationMode_t, void>, void (FastDelegate1<NetworkSerializationMode_t, void>::*)(NetworkSerializationMode_t)const>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: DataMapInit<CEntityIdentity>, CNetworkInitFuncRegistry::CNetworkInitFuncRegistry, __cxa_atexit, CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup, _Unwind_Resume, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int>::Purge, CUtlMemory<int, int>::Purge
// globals: UNSPECIFIED_LOGGING_COLOR, `guard variable for'CEntityKeyValues::sm_EmptyVariant, `guard variable for'g_HuffmanEncoder, CEntityIdentity_DataDescInit::g_DataMapHolder, FastDelegate1<NetworkSerializationMode_t,void>::InvokeStaticFunction(NetworkSerializationMode_t), CEntityIdentity91FCCRegistry, InstallNetworkFieldChangeCallbacks<CEntityIdentity,91>(NetworkSerializationMode_t), __dso_handle (12 total)
void __cdecl GLOBAL__sub_I_entityidentity_cpp()
{
  CUtlDelegate<void(NetworkSerializationMode_t)> v0; // [rsp+0h] [rbp-30h]

  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  if ( `guard variable for'CEntityKeyValues::sm_EmptyVariant == 0 )
  {
    `guard variable for'CEntityKeyValues::sm_EmptyVariant = 1;
    CEntityKeyValues::sm_EmptyVariant.m_type = 0;
    CEntityKeyValues::sm_EmptyVariant.m_flags = 0;
    CEntityKeyValues::sm_EmptyVariant.m_uint64 = 0;
    __cxa_atexit(CVariantBase<CEntityVariantAllocator>::~CVariantBase, &CEntityKeyValues::sm_EmptyVariant, &_dso_handle);
  }
  if ( `guard variable for'g_HuffmanEncoder == 0 )
  {
    `guard variable for'g_HuffmanEncoder = 1;
    g_HuffmanEncoder.m_pRoot = 0;
    g_HuffmanEncoder.m_Frequencies.m_Size = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_pMemory = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_nAllocationCount = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_nGrowSize = 0;
    g_HuffmanEncoder.m_OpCodeToHuffmanLookup.m_Size = 0;
    g_HuffmanEncoder.m_FixedTree.m_Size = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_pMemory = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_nAllocationCount = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_nGrowSize = 0;
    CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup(&g_HuffmanEncoder);
    __cxa_atexit(CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder, &g_HuffmanEncoder, &_dso_handle);
  }
  v0.m_Closure.m_pFunction.__delta = 0;
  CEntityIdentity_DataDescInit::g_DataMapHolder = DataMapInit<CEntityIdentity>(0);
  v0.m_Closure.m_pFunction.__pfn = FastDelegate1<NetworkSerializationMode_t,void>::InvokeStaticFunction;
  v0.m_Closure.m_pthis = InstallNetworkFieldChangeCallbacks<CEntityIdentity,91>;
  CNetworkInitFuncRegistry::CNetworkInitFuncRegistry(&CEntityIdentity91FCCRegistry, v0);
}


// CAttributeDictSaveDataOps::Save  (line 18, @0x000000000309a600, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, ExtractDataAsVector, GrowMemory, Head, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, int>::Grow, CUtlMemory<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, int>::Purge, CUtlVectorBase<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, CUtlMemory<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CAttributeDictSaveDataOps::Save(
        CAttributeDictSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  __int64 v3; // r12
  _QWORD *v4; // r15
  __int64 v5; // r14
  int v6; // ebx
  _QWORD *v7; // r13
  unsigned int v8; // eax
  int m_Size; // edx
  __int64 v10; // r12
  int v11; // ebx
  uint32 value; // eax
  int nElems; // [rsp+24h] [rbp-5Ch] BYREF
  uint32 nKey; // [rsp+28h] [rbp-58h] BYREF
  uint32 nValue; // [rsp+2Ch] [rbp-54h] BYREF
  CUtlVector<CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod>::extractdata_t,CUtlMemory<CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod>::extractdata_t,int> > vecOut; // [rsp+30h] [rbp-50h] BYREF

  v3 = *fieldInfo->pField;
  if ( v3 != 0 )
  {
    vecOut.m_Memory.m_pMemory = 0;
    vecOut.m_Memory.m_nAllocationCount = 0;
    vecOut.m_Memory.m_nGrowSize = 0;
    v4 = *(v3 + 8);
    vecOut.m_Size = 0;
    if ( v4 != 0 )
    {
      v5 = 0;
      do
      {
        if ( *(v3 + 24) > 0 )
        {
          v6 = 0;
          do
          {
            v7 = &v4[v6];
            v8 = *(v7 + 2);
            if ( v8 != *(v3 + 20) && v8 != *(v3 + 16) )
            {
              m_Size = v5;
              if ( vecOut.m_Memory.m_nAllocationCount == v5 )
              {
                CUtlMemory<CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::extractdata_t,int>::Grow(
                  &vecOut.m_Memory,
                  1);
                v8 = *(v7 + 2);
                m_Size = vecOut.m_Size;
              }
              vecOut.m_Size = m_Size + 1;
              vecOut.m_Memory.m_pMemory[v5].key = v8;
              vecOut.m_Memory.m_pMemory[v5].value = *(v7 + 3);
              v5 = vecOut.m_Size;
            }
            ++v6;
          }
          while ( v6 < *(v3 + 24) );
        }
        v4 = *v4;
      }
      while ( v4 != 0 );
    }
    else
    {
      LODWORD(v5) = 0;
    }
    nElems = v5;
    (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
    (*(pSave->_vptr_ISave + 8))(pSave);
    if ( vecOut.m_Size > 0 )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        value = vecOut.m_Memory.m_pMemory[v10].value;
        nKey = vecOut.m_Memory.m_pMemory[v10].key;
        nValue = value;
        (*(pSave->_vptr_ISave + 12))(pSave, &nKey, 1);
        (*(pSave->_vptr_ISave + 12))(pSave, &nValue, 1);
        ++v11;
        ++v10;
      }
      while ( vecOut.m_Size > v11 );
    }
    (*(pSave->_vptr_ISave + 9))(pSave);
    vecOut.m_Size = 0;
    if ( (vecOut.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::extractdata_t,int>::Purge(&vecOut.m_Memory);
      if ( (vecOut.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::extractdata_t,int>::Purge(&vecOut.m_Memory);
    }
  }
}


// CAttributeDictSaveDataOps::Restore  (line 44, @0x000000000309a390, libserver.so)  // inlines: CThreadFastMutex, CUtlIntrusiveList, CUtlMemory, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, CUtlVector, CUtlVectorBase, GetEntityAttributes, InsertExtractedData, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod, CUtlTSOpenHashConcurrencyModelLockFree>::Insert, operator new, CUtlMemory<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, int>::Purge, CUtlVectorBase<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, CUtlMemory<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CAttributeDictSaveDataOps::Restore(
        CAttributeDictSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  int (**vptr_IRestore)(...); // rax
  int i; // r12d
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  _QWORD *pOwner; // r13
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  int nElems; // [rsp+Ch] [rbp-54h]
  CUtlVector<CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod>::extractdata_t,CUtlMemory<CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod>::extractdata_t,int> > vecIn; // [rsp+10h] [rbp-50h] BYREF

  vptr_IRestore = pRestore->_vptr_IRestore;
  vecIn.m_Memory.m_pMemory = 0;
  vecIn.m_Memory.m_nAllocationCount = 0;
  vecIn.m_Memory.m_nGrowSize = 0;
  nElems = vptr_IRestore[13](pRestore);
  (*(pRestore->_vptr_IRestore + 7))(pRestore);
  if ( nElems > 0 )
  {
    for ( i = 0; i != nElems; ++i )
    {
      v6 = (*(pRestore->_vptr_IRestore + 14))(pRestore);
      v7 = (*(pRestore->_vptr_IRestore + 14))(pRestore);
      pOwner = fieldInfo->pOwner;
      v9 = pOwner[8];
      if ( v9 == 0 )
      {
        v10 = operator new(0x38u);
        v10[1] = 0;
        v9 = v10;
        v10[4] = 0;
        *(v10 + 10) = 0;
        *(v10 + 7) = 0;
        *(v10 + 6) = 64;
        *(v10 + 4) = -1;
        *(v10 + 5) = -2;
        *v10 = 0;
        pOwner[8] = v10;
      }
      CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::Insert(
        (v9 + 1),
        v6,
        v7,
        0);
    }
  }
  (*(pRestore->_vptr_IRestore + 8))(pRestore);
  if ( (vecIn.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::extractdata_t,int>::Purge(&vecIn.m_Memory);
    if ( (vecIn.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::extractdata_t,int>::Purge(&vecIn.m_Memory);
  }
}


// CAttributeDictSaveDataOps::IsEmpty  (line 64, @0x000000000309a820, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, ExtractDataAsVector, GrowMemory, Head, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, int>::Grow, CUtlMemory<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, int>::Purge, CUtlVectorBase<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, CUtlMemory<CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod>::extractdata_t, int> >::~CUtlVectorBase, _Unwind_Resume
bool __fastcall CAttributeDictSaveDataOps::IsEmpty(
        CAttributeDictSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  __int64 v2; // r12
  _QWORD *v3; // r15
  __int64 v4; // r14
  int v5; // ebx
  _QWORD *v6; // r13
  unsigned int v7; // eax
  int m_Size; // edx
  char v9; // bl
  CUtlVector<CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod>::extractdata_t,CUtlMemory<CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod>::extractdata_t,int> > vecOut; // [rsp+10h] [rbp-50h] BYREF

  v2 = *fieldInfo->pField;
  if ( v2 == 0 )
    return 1;
  vecOut.m_Memory.m_pMemory = 0;
  vecOut.m_Memory.m_nAllocationCount = 0;
  vecOut.m_Memory.m_nGrowSize = 0;
  v3 = *(v2 + 8);
  vecOut.m_Size = 0;
  if ( v3 == 0 )
  {
    v9 = 1;
LABEL_17:
    CUtlMemory<CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::extractdata_t,int>::Purge(&vecOut.m_Memory);
    if ( (vecOut.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::extractdata_t,int>::Purge(&vecOut.m_Memory);
    return v9;
  }
  v4 = 0;
  do
  {
    if ( *(v2 + 24) > 0 )
    {
      v5 = 0;
      do
      {
        v6 = &v3[v5];
        v7 = *(v6 + 2);
        if ( v7 != *(v2 + 20) && v7 != *(v2 + 16) )
        {
          m_Size = v4;
          if ( vecOut.m_Memory.m_nAllocationCount == v4 )
          {
            CUtlMemory<CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::extractdata_t,int>::Grow(
              &vecOut.m_Memory,
              1);
            v7 = *(v6 + 2);
            m_Size = vecOut.m_Size;
          }
          vecOut.m_Size = m_Size + 1;
          vecOut.m_Memory.m_pMemory[v4].key = v7;
          vecOut.m_Memory.m_pMemory[v4].value = *(v6 + 3);
          v4 = m_Size + 1;
        }
        ++v5;
      }
      while ( v5 < *(v2 + 24) );
    }
    v3 = *v3;
  }
  while ( v3 != 0 );
  v9 = v4 == 0;
  if ( (vecOut.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    goto LABEL_17;
  return v9;
}


// CAttributeDictSaveDataOps::MakeEmpty  (line 75, @0x000000000309a320, libserver.so)
// calls: CEntityIdentity::FreeAttributes
void __fastcall CAttributeDictSaveDataOps::MakeEmpty(
        CAttributeDictSaveDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CEntityIdentity::FreeAttributes(fieldInfo->pOwner, 1);
}


// CEntityIdentity::AddDatadescMetadataKeys  (line 85, @0x0000000003098ea0, libserver.so)
void __fastcall CEntityIdentity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CEntityIdentity::GetBaseMap  (line 85, @0x0000000003098eb0, libserver.so)
datamap_t *__cdecl CEntityIdentity::GetBaseMap()
{
  return 0;
}


// DataMapInit<CEntityIdentity>  (line 85, @0x0000000003098ec0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I_entityidentity.cpp
// strings: "CEntityIdentity"
// globals: `guard variable for'DataMapInit<CEntityIdentity>(CEntityIdentity *)::nameHolder, `guard variable for'DataMapInit<CEntityIdentity>(CEntityIdentity *)::dataDesc, CEntityIdentity::m_DataMap, attributeDictFuncs, DataMapInit<CEntityIdentity>(CEntityIdentity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEntityIdentity>(CEntityIdentity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEntityIdentity>(CEntityIdentity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEntityIdentity>(CEntityIdentity *)::nameHolder) != 0 )
  {
    DataMapInit<CEntityIdentity>(CEntityIdentity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEntityIdentity>(CEntityIdentity *)::nameHolder.m_pszBase = "CEntityIdentity";
    DataMapInit<CEntityIdentity>(CEntityIdentity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEntityIdentity>(CEntityIdentity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEntityIdentity>(CEntityIdentity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEntityIdentity>(CEntityIdentity *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEntityIdentity>(CEntityIdentity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEntityIdentity>(CEntityIdentity *)::nameHolder,
      &_dso_handle);
  }
  CEntityIdentity::m_DataMap.baseMap = 0;
  if ( `guard variable for'datamap_t * DataMapInit<CEntityIdentity>(CEntityIdentity *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEntityIdentity>(CEntityIdentity *)::dataDesc) != 0 )
  {
    DataMapInit<CEntityIdentity>(CEntityIdentity *)::dataDesc[2].pSaveRestoreOps = attributeDictFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEntityIdentity>(CEntityIdentity *)::dataDesc);
  }
  CEntityIdentity::m_DataMap.dataNumFields = 2;
  CEntityIdentity::m_DataMap.dataDesc = &DataMapInit<CEntityIdentity>(CEntityIdentity *)::dataDesc[1];
  return &CEntityIdentity::m_DataMap;
}


// InstallNetworkFieldChangeCallbacks<CEntityIdentity, 91>  (line 90, @0x0000000003098de0, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate<CEntityIdentity, CEntityIdentity>, Convert<CEntityIdentity, void (CEntityIdentity::*)(CEntityInstance*, int const*), void (detail::GenericClass::*)()>, FastDelegate2<CEntityIdentity, CEntityIdentity>, RegisterNetworkFieldChangeCallback<int>, UtlMakeDelegate<CEntityIdentity, CEntityIdentity, CEntityInstance*, int const*, void>, bindmemfunc<CEntityIdentity, void (CEntityIdentity::*)(CEntityInstance*, int const*)>
// strings: "entityIdentityNameChanged"
// globals: CEntityIdentity::OnEntityNameChanged(CEntityInstance *,int const*)
void __fastcall InstallNetworkFieldChangeCallbacks<CEntityIdentity,91>(NetworkSerializationMode_t mode)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  _QWORD v3[5]; // [rsp-28h] [rbp-28h] BYREF

  if ( mode == NetworkSerializationMode_t::NET_SERIALIZATION_MODE_1 )
  {
    v3[4] = v1;
    v2 = *g_pNetworkMessages;
    v3[1] = CEntityIdentity::OnEntityNameChanged;
    v3[0] = 0;
    v3[2] = 0;
    (*(v2 + 160))(g_pNetworkMessages, "entityIdentityNameChanged", 1, v3, 1, 0x7FFFFFFF);
  }
}


// CEntityIdentity::Save  (line 94, @0x0000000003098fc0, libserver.so)
// callers: CBaseEntity::SaveDataDescBlock
// globals: CEntityIdentity::m_DataMap
int __fastcall CEntityIdentity::Save(CEntityIdentity *const this, ISave *const save)
{
  return (*(save->_vptr_ISave + 5))(save, this, &CEntityIdentity::m_DataMap);
}


// CEntityIdentity::Restore  (line 100, @0x0000000003098fe0, libserver.so)  // inlines: GetInstance, NetworkStateChanged, Set, operator=<int>
// calls: CEntitySystem::AddEntityToNameMap, CEntityIdentity::NetworkVar_m_nameStringableIndex::NetworkStateChanged, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: CBaseEntity::Restore
// strings: "CEntityIdentity::Restore called, but there is no entity name string table pointer!\n"
// globals: CEntityIdentity::m_DataMap, CEntityIdentity::s_pEntityNameStringTable
int __fastcall CEntityIdentity::Restore(CEntityIdentity *const this, IRestore *const restore)
{
  int v3; // ebx
  int32 v4; // esi
  int32 v6; // esi
  int v7; // r13d

  v3 = (*(restore->_vptr_IRestore + 2))(restore, this, &CEntityIdentity::m_DataMap);
  if ( v3 != 0 )
  {
    if ( !CEntityIdentity::s_pEntityNameStringTable.m_bServer )
    {
LABEL_3:
      CEntitySystem::AddEntityToNameMap(g_pEntitySystem, this);
      return v3;
    }
    if ( this->m_name.u.m_Id != 0 )
    {
      if ( CEntityIdentity::s_pEntityNameStringTable.m_pTable != 0 )
      {
        v7 = (*(CEntityIdentity::s_pEntityNameStringTable.m_pTable->_vptr_INetworkStringTable + 8))(
               CEntityIdentity::s_pEntityNameStringTable.m_pTable,
               1,
               this->m_name.u.m_Id,
               0xFFFFFFFFLL,
               0);
        if ( v7 != this->m_nameStringableIndex.m_Value )
        {
          CEntityIdentity::NetworkVar_m_nameStringableIndex::NetworkStateChanged(&this->m_nameStringableIndex, v6);
          this->m_nameStringableIndex.m_Value = v7;
        }
      }
      else if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
      {
        LoggingSystem_Log(
          LOG_ENTITY_SYSTEM,
          2,
          "CEntityIdentity::Restore called, but there is no entity name string table pointer!\n");
      }
      goto LABEL_3;
    }
    if ( CEntityIdentity::s_pEntityNameStringTable.m_pTable != 0 )
    {
      if ( this->m_nameStringableIndex.m_Value == -1 )
        goto LABEL_3;
      CEntityIdentity::NetworkVar_m_nameStringableIndex::NetworkStateChanged(&this->m_nameStringableIndex, v4);
    }
    else
    {
      if ( this->m_nameStringableIndex.m_Value == -1 )
        goto LABEL_3;
      if ( this->m_pInstance != 0 )
        (*(this->m_pInstance->_vptr_IHandleEntity + 22))(this->m_pInstance, 20, 0xFFFFFFFFLL, this->m_PathIndex.m_Value);
    }
    this->m_nameStringableIndex.m_Value = -1;
    goto LABEL_3;
  }
  return v3;
}


// CEntityIdentity::FreeAttributes  (line 139, @0x0000000003099120, libserver.so)  // inlines: Purge, RemoveHead, ~CUtlObjectAttributeTable, ~CUtlTSOpenHash
// calls: operator delete, ReturnAttributeObjectToPool
// callers: CAttributeDictSaveDataOps::MakeEmpty, CEntitySystem::DeallocateEntityIdentity, CEntitySystem::DeallocateForPrecache, CEntitySystem::ExecuteQueuedDeallocation, CEntitySystem::HelperExecuteQueuedSpawn, CEntitySystem::TransferEntityIntoStagingDatabase, CEntitySystem::DestroyEntityImmediate, CEntitySystem::QueueDestroyEntity, CEntitySystem::CreateEntity, CEntitySystem::AllocateForPrecache
void __fastcall CEntityIdentity::FreeAttributes(CEntityIdentity *const this, bool bDynamicOnly)
{
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *m_pAttributes; // r14
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *i; // rsi
  _QWORD *v6; // rdi
  CRenderAttributesDoubleBuffered *m_pRenderAttrs; // rdi

  m_pAttributes = this->m_pAttributes;
  if ( m_pAttributes != 0 )
  {
    for ( i = m_pAttributes->m_hashTable.m_tables.m_pHead; i != 0; i = m_pAttributes->m_hashTable.m_tables.m_pHead )
    {
      v6 = g_pMemAlloc;
      m_pAttributes->m_hashTable.m_tables.m_pHead = i->m_pNext;
      (*(*v6 + 16LL))(v6);
    }
    m_pAttributes->m_hashTable.m_nNumKeysDeleted = 0;
    m_pAttributes->m_hashTable.m_nCurrentTableSize = 64;
    operator delete(m_pAttributes);
    this->m_pAttributes = 0;
  }
  m_pRenderAttrs = this->m_pRenderAttrs;
  if ( m_pRenderAttrs != 0 && !bDynamicOnly )
  {
    ReturnAttributeObjectToPool(m_pRenderAttrs);
    this->m_pRenderAttrs = 0;
  }
}


// CEntityIdentity::SetEntityName  (line 157, @0x00000000030991b0, libserver.so)  // inlines: GetInstance, NetworkStateChanged, Set, String, operator=, operator=<int>, operator==
// calls: CEntitySystem::RemoveEntityFromNameMap, CEntitySystem::AddEntityToNameMap, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// callers: ent_setname, CBaseEntity::UpdateOnRemove, CBaseCombatWeapon::OnPickedUp, CCommentarySystem::InitCommentary, CC_CreateFlashlight, CFuncLadderEndPoint::Validate, CBreakable::Die, CWorldItem::Spawn, CPhysConvert::InputConvertTarget, CreateServerRagdoll, CreateAnnouncerForTeam, CDOTAGamerules::CreateStandardEntities (17 total)
// strings: "CEntityIdentity::SetEntityName called, but there is no entity name string table pointer!\
// globals: CEntityIdentity::s_pEntityNameStringTable
void __fastcall CEntityIdentity::SetEntityName(CEntityIdentity *const this, string_t name)
{
  const char *m_pAsString; // rdx
  int v5; // r12d
  CEntitySystem *v6; // rdi

  if ( this->m_name.u.m_Id != *name.u.m_Id )
  {
    if ( (this->m_flags & 0x4800) != 0 )
    {
      this->m_name.u.m_Id = *name.u.m_Id;
    }
    else
    {
      CEntitySystem::RemoveEntityFromNameMap(g_pEntitySystem, this);
      v6 = g_pEntitySystem;
      this->m_name.u.m_Id = *name.u.m_Id;
      CEntitySystem::AddEntityToNameMap(v6, this);
    }
    if ( CEntityIdentity::s_pEntityNameStringTable.m_bServer )
    {
      if ( *name.u.m_Id != 0 )
      {
        if ( CEntityIdentity::s_pEntityNameStringTable.m_pTable != 0 )
        {
          m_pAsString = "";
          if ( this->m_name.u.m_Id != 0 )
            m_pAsString = this->m_name.u.m_pAsString;
          v5 = (*(CEntityIdentity::s_pEntityNameStringTable.m_pTable->_vptr_INetworkStringTable + 8))(
                 CEntityIdentity::s_pEntityNameStringTable.m_pTable,
                 1,
                 m_pAsString,
                 0xFFFFFFFFLL,
                 0);
          if ( v5 != this->m_nameStringableIndex.m_Value )
          {
            if ( this->m_pInstance != 0 )
              (*(this->m_pInstance->_vptr_IHandleEntity + 22))(
                this->m_pInstance,
                20,
                0xFFFFFFFFLL,
                this->m_PathIndex.m_Value);
            this->m_nameStringableIndex.m_Value = v5;
          }
        }
        else if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
        {
          LoggingSystem_Log(
            LOG_ENTITY_SYSTEM,
            2,
            "CEntityIdentity::SetEntityName called, but there is no entity name string table pointer!\n");
        }
      }
      else if ( this->m_nameStringableIndex.m_Value != -1 )
      {
        if ( this->m_pInstance != 0 )
          (*(this->m_pInstance->_vptr_IHandleEntity + 22))(
            this->m_pInstance,
            20,
            0xFFFFFFFFLL,
            this->m_PathIndex.m_Value);
        this->m_nameStringableIndex.m_Value = -1;
      }
    }
  }
}


// OnEntityNameStringTableCreated  (line 204, @0x0000000003098b10, libserver.so)
void __fastcall OnEntityNameStringTableCreated(const char *pTableName, INetworkStringTable *pTable)
{
  ;
}


// CEntityIdentity::GetStringTableDefs  (line 233, @0x000000000309a1e0, libserver.so)  // inlines: AddToTail, CopyConstruct<StringTableDef_t>, Element, GrowMemory, operator[]
// calls: memcpy, CUtlMemory<StringTableDef_t, int>::Grow
// callers: CGameConfiguration::GetStringTableDefs
// strings: "EntityNames"
void __fastcall CEntityIdentity::GetStringTableDefs(
        bool bServer,
        CUtlVector<StringTableDef_t,CUtlMemory<StringTableDef_t,int> > *const list)
{
  __int64 m_Size; // r12
  int v4; // eax
  StringTableDef_t *v5; // rdi

  CEntityIdentity::s_pEntityNameStringTable.m_bServer = bServer;
  m_Size = list->m_Size;
  v4 = list->m_Size;
  if ( m_Size == list->m_Memory.m_nAllocationCount )
  {
    CUtlMemory<StringTableDef_t,int>::Grow(&list->m_Memory, 1);
    v4 = list->m_Size;
  }
  list->m_Size = v4 + 1;
  v5 = &list->m_Memory.m_pMemory[m_Size];
  if ( v5 != 0 )
    memcpy(
      v5,
      CEntityIdentity::GetStringTableDefs(bool,CUtlVector<StringTableDef_t,CUtlMemory<StringTableDef_t,int>> &)::s_pDefs,
      sizeof(StringTableDef_t));
}


// CEntityIdentity::OnEntityNameChanged  (line 249, @0x0000000003099350, libserver.so)  // inlines: CUtlSymbolLarge
// calls: CEntityIdentity::SetEntityName
// globals: CEntityIdentity::s_pEntityNameStringTable
void __fastcall CEntityIdentity::OnEntityNameChanged(
        CEntityIdentity *const this,
        CEntityInstance *pOwner,
        const int32 *pnNameStringIndex)
{
  __int64 v4; // rsi
  const char *v5; // rax
  string_t name; // [rsp+0h] [rbp-20h] BYREF

  v4 = *pnNameStringIndex;
  if ( v4 == -1 )
  {
    name.u.m_Id = 0;
    CEntityIdentity::SetEntityName(this, &name);
  }
  else
  {
    v5 = (*(CEntityIdentity::s_pEntityNameStringTable.m_pTable->_vptr_INetworkStringTable + 9))(
           CEntityIdentity::s_pEntityNameStringTable.m_pTable,
           v4,
           0);
    CEntityIdentity::SetEntityName(this, v5);
  }
}


// CEntityIdentity::SetEntityName  (line 264, @0x0000000003099310, libserver.so)  // inlines: CUtlSymbolLarge
// calls: CEntitySystem::AllocPooledString, CEntityIdentity::SetEntityName
// callers: CBaseCombatWeapon::MakeWeaponNameFromEntity, CDOTA_BaseNPC::InitialSpawn, CDOTA_BaseNPC::OnLoadState, CEntityIdentity::OnEntityNameChanged, CEntitySystem::HelperExecuteQueuedSpawn
void __fastcall CEntityIdentity::SetEntityName(CEntityIdentity *const this, const char *pName)
{
  string_t name; // [rsp+0h] [rbp-30h]
  string_t v4; // [rsp+10h] [rbp-20h] BYREF

  CEntitySystem::AllocPooledString(g_pEntitySystem, pName);
  v4.u.m_Id = name.u.m_Id;
  CEntityIdentity::SetEntityName(this, &v4);
}


// CEntityIdentity::NameMatches  (line 270, @0x00000000030993a0, libserver.so)  // inlines: CompareNamesWithWildcards, EntityNamesMatch, FastASCIIToLower<char>, GetEntityNameAsCStr, String
// callers: CServerAchievementManager::OnKillEvent, CServerAchievementManager::OnHurtEvent, CEntityDebugGameSystem::OnEntityCreated, CMapSpawnGroup::OnSpawnGroupLoad, GetNextCommandEntity, CFilterName::PassesFilterImpl, CLogicNavigation::OnEntitySpawned, CChangeLevel::BuildEntityTransitionList, EntityInstanceByNameIter_t::Next
bool __fastcall CEntityIdentity::NameMatches(const CEntityIdentity *const this, const char *pszNameOrWildcard)
{
  const char *m_pAsString; // rcx
  char v3; // dl
  const char *v4; // rdi
  const char *v5; // r8
  char v6; // al
  char v7; // r13
  char v8; // r12
  unsigned __int8 v9; // r10
  bool result; // al

  if ( pszNameOrWildcard != 0 && *pszNameOrWildcard == 33 )
    return (*(g_pEntitySystem->_vptr_IEntityResourceManifestBuilder + 13))(g_pEntitySystem, pszNameOrWildcard, 0, 0, 0) == this->m_pInstance;
  if ( this->m_name.u.m_Id != 0 )
  {
    m_pAsString = this->m_name.u.m_pAsString;
    result = pszNameOrWildcard == 0 && m_pAsString == 0;
    if ( result )
      return result;
  }
  else
  {
    m_pAsString = "";
  }
  v3 = *m_pAsString;
  v4 = 0;
  v5 = 0;
  v6 = *pszNameOrWildcard;
  while ( 1 )
  {
LABEL_6:
    if ( v3 == 0 )
      goto LABEL_25;
    if ( v6 != 42 )
      break;
    do
LABEL_18:
      v6 = *++pszNameOrWildcard;
    while ( *pszNameOrWildcard == 42 );
    if ( v6 == 0 )
      return 1;
    v4 = m_pAsString;
    v5 = pszNameOrWildcard;
  }
  while ( 1 )
  {
    if ( v6 == 63 || v3 == v6 )
      goto LABEL_27;
    v7 = v3;
    v8 = v6;
    v9 = v6 - 65;
    if ( (v3 - 65) <= 0x19u )
      v7 = v3 + 32;
    if ( v9 <= 0x19u )
      v8 = v6 + 32;
    if ( v7 == v8 )
    {
LABEL_27:
      v6 = pszNameOrWildcard[1];
      ++m_pAsString;
      ++pszNameOrWildcard;
      v3 = *m_pAsString;
      goto LABEL_6;
    }
    if ( v5 == 0 )
    {
      if ( v9 <= 0x19u )
        v6 += 32;
      if ( (v3 - 65) <= 0x19u )
        v3 += 32;
      return v6 == v3;
    }
    v3 = v4[1];
    m_pAsString = v4 + 1;
    pszNameOrWildcard = v5;
    v6 = *v5;
    ++v4;
    if ( v3 == 0 )
      break;
    if ( v6 == 42 )
      goto LABEL_18;
  }
LABEL_25:
  while ( v6 != 0 )
  {
    if ( v6 != 42 )
      return v6 == 0;
    v6 = *++pszNameOrWildcard;
  }
  return 1;
}


// CEntityIdentity::ClassMatches  (line 277, @0x0000000003099530, libserver.so)  // inlines: CompareNamesWithWildcards, EntityNamesMatch, FastASCIIToLower<char>, GetClassNameAsCStr, String
// callers: CServerAchievementManager::OnKillEvent, CServerAchievementManager::OnHurtEvent, CBaseEntity::FireBullets, report_touchlinks, CEntityDebugGameSystem::OnEntityCreated, CTraceFilterGroundEntities::ShouldHitEntity, CTraceFilterWalkableEntities::ShouldHitEntity, CBaseAnimating::Dissolve, CBreakableProp::FindEnableMotionFixup, CBaseProp::Spawn, CTraceFilterSkipClassname::ShouldHitEntity, CGameEntitySystem::FindEntityClassNearestFacing (76 total)
bool __fastcall CEntityIdentity::ClassMatches(const CEntityIdentity *const this, const char *pszClassNameOrWildcard)
{
  const char *m_pAsString; // rcx
  char v3; // al
  const char *v4; // rdi
  const char *v5; // r8
  char v6; // dl
  char v7; // r13
  char v8; // r12
  unsigned __int8 v9; // r10

  m_pAsString = "";
  if ( this->m_designerName.u.m_Id != 0 )
    m_pAsString = this->m_designerName.u.m_pAsString;
  v3 = *pszClassNameOrWildcard;
  v4 = 0;
  v5 = 0;
  v6 = *m_pAsString;
  while ( 1 )
  {
LABEL_4:
    if ( v6 == 0 )
      goto LABEL_21;
    if ( v3 != 42 )
      break;
    do
LABEL_16:
      v3 = *++pszClassNameOrWildcard;
    while ( *pszClassNameOrWildcard == 42 );
    if ( v3 == 0 )
      return 1;
    v4 = m_pAsString;
    v5 = pszClassNameOrWildcard;
  }
  while ( 1 )
  {
    if ( v3 == 63 || v3 == v6 )
      goto LABEL_23;
    v7 = v6;
    v8 = v3;
    v9 = v3 - 65;
    if ( (v6 - 65) <= 0x19u )
      v7 = v6 + 32;
    if ( v9 <= 0x19u )
      v8 = v3 + 32;
    if ( v7 == v8 )
    {
LABEL_23:
      v3 = pszClassNameOrWildcard[1];
      ++m_pAsString;
      ++pszClassNameOrWildcard;
      v6 = *m_pAsString;
      goto LABEL_4;
    }
    if ( v5 == 0 )
    {
      if ( v9 <= 0x19u )
        v3 += 32;
      if ( (v6 - 65) <= 0x19u )
        v6 += 32;
      return v3 == v6;
    }
    v6 = v4[1];
    m_pAsString = v4 + 1;
    pszClassNameOrWildcard = v5;
    v3 = *v5;
    ++v4;
    if ( v6 == 0 )
      break;
    if ( v3 == 42 )
      goto LABEL_16;
  }
LABEL_21:
  while ( v3 != 0 )
  {
    if ( v3 != 42 )
      return v3 == 0;
    v3 = *++pszClassNameOrWildcard;
  }
  return 1;
}


// CEntityIdentity::ClassInheritsFrom  (line 282, @0x0000000003099640, libserver.so)  // inlines: GetBaseClass
// calls: CEntityIdentity::ClassMatches, CEntityClass::ClassMatches
// callers: CEntitySystem::ServiceEntityIOEvents
bool __fastcall CEntityIdentity::ClassInheritsFrom(
        const CEntityIdentity *const this,
        const char *pszClassNameOrWildcard)
{
  bool v4; // r13
  CEntityClass *m_pClass; // rbx
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  v4 = CEntityIdentity::ClassMatches(this, pszClassNameOrWildcard);
  if ( !v4 )
  {
    m_pClass = this->m_pClass;
    if ( m_pClass == 0 )
      return v4;
    while ( !CEntityClass::ClassMatches(m_pClass, pszClassNameOrWildcard) )
    {
      m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
      if ( m_pBaseClassInfo != 0 )
      {
        m_pClass = m_pBaseClassInfo->m_pClass;
        if ( m_pClass != 0 )
          continue;
      }
      return v4;
    }
  }
  return 1;
}


// CEntityIdentity::GetDebugName  (line 301, @0x00000000030996c0, libserver.so)  // inlines: GetClassInfo, String
// callers: CBaseEntity::NetworkStateChangedLog, InputFunctionAdapterS1Var, InputFunctionAdapterS1Func, CBaseEntity::DrawInputOverlay, CBaseEntity::DrawDebugTextOverlays, CBaseEntity::PhysicsDispatchThink, ent_remove, Script_SetRenderingEnabled, CPhysicsGameSystem::PullKinematicTransformsWorker, DebugCallbackEntities, CEntityDebugGameSystem::DrawScrollingMessageLists, CBaseAnimatingController::SequenceDuration (115 total)
// strings: "<<null>>"
const char *__fastcall CEntityIdentity::GetDebugName(const CEntityIdentity *const this)
{
  if ( this == 0 )
    return "<<null>>";
  if ( this->m_name.u.m_Id != 0 )
    return this->m_name.u.m_pAsString;
  return this->m_pClass->m_pClassInfo->m_pszClassname;
}


// CEntityIdentity::GetInstanceSchemaBinding  (line 313, @0x0000000003099700, libserver.so)
// callers: CLoadingSpawnGroup::CreateEntityToSpawn
const ISchemaBinding *__fastcall CEntityIdentity::GetInstanceSchemaBinding(const CEntityIdentity *const this)
{
  return (*(this->m_pClass->_vptr_CEntityClass + 7))(this->m_pClass);
}


// CEntityIdentity::CreatePublicScriptScope  (line 323, @0x0000000003099720, libserver.so)
// calls: CEntityInstance::CreatePublicScriptScope
void __fastcall CEntityIdentity::CreatePublicScriptScope(CEntityIdentity *const this)
{
  CEntityInstance::CreatePublicScriptScope(this->m_pInstance, 0);
}


// CEntityIdentity::AcceptInput  (line 333, @0x0000000003099aa0, libserver.so)  // inlines: CUtlSymbolLarge, CVariantBase, Call<HSCRIPT__*>, Free, Get, GetClassInfo, GetComponent<CScriptComponent>, GetDebugName, GetEntityIONotify, GetInstance, GetPublicScriptScope, GetVM, String, V_strcat_safe<255ul>, _V_strcpy, operator=, operator[], strcpy, ~CVariantBase
// calls: CEntityClass::AcceptInput, CScriptComponent::AcceptInput, _V_strncat, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CEntityInstance::CreatePublicScriptScope, __stack_chk_fail, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CNotifyManager::ReportNamedEvent, CEntityInstance::AcceptInput, CEntitySystem::ServiceEntityIOEvents
// strings: "outputid", "Input %s for %s entity dropped because the entity is in stasis.\n"
__int64 __fastcall CEntityIdentity::AcceptInput(
        CEntityIdentity *const this,
        string_t inputName,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        const CVariant *const value,
        unsigned int nOutputID)
{
  UtlSymLargeId_t v8; // rax
  CEntityClass *m_pClass; // rdi
  CEntityInstance *m_pInstance; // rsi
  CEntityClass::AcceptInputRetval_t v14; // eax
  IEntityIONotify *m_pEntityIONotify; // rdi
  const char *v16; // rdx
  CEntityInstance *v18; // rax
  __int64 m_nBaseOffset; // rdx
  CScriptComponent *v20; // rdx
  bool v21; // al
  HSCRIPT m_hScope; // rax
  HSCRIPT v23; // rax
  void (__fastcall *v24)(IScriptVM *, _QWORD, const char *, string_t *); // rax
  bool v25; // zf
  const char *v26; // rsi
  CEntityInstance *v27; // rdx
  HSCRIPT v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  char v31; // cl
  const char *m_pAsString; // r8
  const char *v33; // rcx
  void (__fastcall *v34)(IScriptVM *, _QWORD, char *, string_t *); // [rsp+10h] [rbp-1B0h]
  void (__fastcall *v35)(IScriptVM *, _QWORD, const char *, string_t *); // [rsp+10h] [rbp-1B0h]
  int v36; // [rsp+10h] [rbp-1B0h]
  CScriptComponent *pScript; // [rsp+18h] [rbp-1A8h]
  CScriptComponent *pScripta; // [rsp+18h] [rbp-1A8h]
  bool bHasPrivateScriptScope; // [rsp+20h] [rbp-1A0h]
  bool bInputInvoked; // [rsp+37h] [rbp-189h]
  bool bInputInvokeda; // [rsp+37h] [rbp-189h]
  IScriptVM *pVM; // [rsp+38h] [rbp-188h]
  int v43; // [rsp+40h] [rbp-180h]
  ScriptVariant_t functionReturn; // [rsp+60h] [rbp-160h] BYREF
  string_t inputNamea; // [rsp+70h] [rbp-150h] BYREF
  __int16 v47; // [rsp+78h] [rbp-148h]
  __int16 v48; // [rsp+7Ah] [rbp-146h]
  char szScriptFunctionName[264]; // [rsp+80h] [rbp-140h] BYREF
  unsigned __int64 v50; // [rsp+188h] [rbp-38h]

  v50 = __readfsqword(0x28u);
  if ( (this->m_flags & 0x20) != 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 0) != 0 )
    {
      if ( this->m_name.u.m_Id != 0 )
        m_pAsString = this->m_name.u.m_pAsString;
      else
        m_pAsString = this->m_pClass->m_pClassInfo->m_pszClassname;
      v33 = "";
      if ( *inputName.u.m_Id != 0 )
        v33 = *inputName.u.m_pAsString;
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        0,
        "Input %s for %s entity dropped because the entity is in stasis.\n",
        v33,
        m_pAsString);
    }
    return 0;
  }
  v8 = *inputName.u.m_Id;
  m_pClass = this->m_pClass;
  m_pInstance = this->m_pInstance;
  inputNamea.u.m_Id = v8;
  v14 = CEntityClass::AcceptInput(m_pClass, m_pInstance, &inputNamea, pActivator, pCaller, value, nOutputID);
  if ( v14 != CEntityClass::AcceptInputRetval_t::ACCEPT_INPUT_UNKNOWN )
  {
    bInputInvoked = v14 == CEntityClass::AcceptInputRetval_t::ACCEPT_INPUT_KNOWN_AND_HANDLED;
  }
  else
  {
    v18 = this->m_pInstance;
    if ( this->m_pInstance != 0 )
    {
      m_nBaseOffset = this->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CScriptComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
      if ( m_nBaseOffset == 0xFFFF )
      {
        bInputInvokeda = 0;
        v20 = 0;
      }
      else
      {
        v20 = *(&v18->_vptr_IHandleEntity + m_nBaseOffset);
        bInputInvokeda = v20 != 0;
      }
      pScript = v20;
    }
    else
    {
      bInputInvokeda = 0;
      pScript = 0;
    }
    v21 = v18->m_hPrivateScope.m_hScope != 0;
    bHasPrivateScriptScope = v21;
    if ( !bInputInvokeda && !v21 )
      return 0;
    pVM = g_pScriptVM;
    (*(*g_pScriptVM + 264LL))(g_pScriptVM);
    v34 = *(*pVM + 240LL);
    if ( pActivator != 0 )
    {
      m_hScope = pActivator->m_pEntity->m_hPublicScope.m_hScope;
      if ( m_hScope == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(pActivator, 0);
        m_hScope = pActivator->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
    else
    {
      m_hScope = 0;
    }
    inputNamea.u.m_Id = m_hScope;
    v47 = 31;
    v48 = 0;
    v34(pVM, 0, "activator", &inputNamea);
    if ( (v48 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, inputNamea.u.m_Id);
    v35 = *(*pVM + 240LL);
    if ( pCaller != 0 )
    {
      v23 = pCaller->m_pEntity->m_hPublicScope.m_hScope;
      if ( v23 == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(pCaller, 0);
        v23 = pCaller->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
    else
    {
      v23 = 0;
    }
    inputNamea.u.m_Id = v23;
    v47 = 31;
    v48 = 0;
    v35(pVM, 0, "caller", &inputNamea);
    if ( (v48 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, inputNamea.u.m_Id);
    (*(*pVM + 240LL))(pVM, 0, "value", value);
    v24 = *(*pVM + 240LL);
    v48 = 0;
    v47 = 5;
    LODWORD(inputNamea.u.m_Id) = nOutputID;
    v24(pVM, 0, "outputid", &inputNamea);
    if ( (v48 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, inputNamea.u.m_Id);
    if ( bInputInvokeda )
    {
      inputNamea.u.m_Id = *inputName.u.m_Id;
      bInputInvoked = CScriptComponent::AcceptInput(pScript, &inputNamea, 0);
    }
    else
    {
      bInputInvoked = 0;
    }
    if ( bHasPrivateScriptScope )
    {
      v25 = *inputName.u.m_Id == 0;
      strcpy(szScriptFunctionName, "Input");
      v26 = "";
      if ( !v25 )
        v26 = *inputName.u.m_pAsString;
      _V_strncat(szScriptFunctionName, v26, 255, 0xFFFFFFFFLL);
      functionReturn.m_type = 0;
      v27 = this->m_pInstance;
      v48 = 0;
      v47 = 31;
      inputNamea.u.m_Id = 0;
      functionReturn.m_flags = 0;
      v28 = v27->m_hPrivateScope.m_hScope;
      functionReturn.m_uint64 = 0;
      v29 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, szScriptFunctionName, v28, 1);
      if ( v29 != 0 )
      {
        pScripta = v29;
        v36 = (*(*g_pScriptVM + 160LL))(g_pScriptVM, v29, &inputNamea, 1, &functionReturn, 0, 1);
        (*(*g_pScriptVM + 152LL))(g_pScriptVM, pScripta);
        v30 = v36;
      }
      else
      {
        v30 = -1;
      }
      if ( (v48 & 1) != 0 )
      {
        v43 = v30;
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, inputNamea.u.m_Id);
        v30 = v43;
      }
      v31 = bInputInvoked;
      if ( v30 != -1 )
        v31 = 1;
      bInputInvoked = v31;
      if ( (functionReturn.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, functionReturn.m_uint64);
    }
    (*(*pVM + 136LL))(pVM, 0);
  }
  if ( !bInputInvoked )
    return 0;
  m_pEntityIONotify = g_pEntitySystem->m_pEntityIONotify;
  if ( m_pEntityIONotify == 0 )
    return 1;
  v16 = "";
  if ( *inputName.u.m_Id != 0 )
    v16 = *inputName.u.m_pAsString;
  (*(m_pEntityIONotify->_vptr_IEntityIONotify + 1))(
    m_pEntityIONotify,
    this->m_pInstance,
    v16,
    pActivator,
    pCaller,
    value,
    nOutputID);
  return 1;
}


// CEntityIdentity::FindEntityIOOutputsByName  (line 410, @0x000000000309a250, libserver.so)  // inlines: AddToTail, CopyConstruct<CEntityIOOutput*>, Element, GetComponent<CScriptComponent>, GrowMemory, operator[]
// calls: CEntityClass::FindEntityIOOutputByName, CScriptComponent::FindEntityIOOutputsByName, CUtlMemory<CEntityIOOutput*, int>::Grow
// callers: CBaseEntity::FindNamedOutput, GetMaxOutputDelay, CEntityClass::Unserialize, CEntityInstance::FireOutputInternal, CEntityInstance::InputAddOutput, CEntityInstance::ConnectOutputToScript, CEntityInstance::DisconnectOutputFromScript
void __fastcall CEntityIdentity::FindEntityIOOutputsByName(
        CEntityIdentity *const this,
        const char *pName,
        CUtlVector<CEntityIOOutput*,CUtlMemory<CEntityIOOutput*,int> > *const outputs)
{
  CEntityIOOutput *EntityIOOutputByName; // rax
  __int64 m_Size; // r13
  int v8; // edx
  CEntityIOOutput **v9; // rdx
  __int64 m_nBaseOffset; // rdx
  CScriptComponent *v11; // rdi
  CEntityIOOutput *pOutput; // [rsp+8h] [rbp-28h]

  EntityIOOutputByName = CEntityClass::FindEntityIOOutputByName(this->m_pClass, pName, this->m_pInstance);
  if ( EntityIOOutputByName != 0 )
  {
    m_Size = outputs->m_Size;
    v8 = outputs->m_Size;
    if ( m_Size == outputs->m_Memory.m_nAllocationCount )
    {
      pOutput = EntityIOOutputByName;
      CUtlMemory<CEntityIOOutput *,int>::Grow(&outputs->m_Memory, 1);
      v8 = outputs->m_Size;
      EntityIOOutputByName = pOutput;
    }
    outputs->m_Size = v8 + 1;
    v9 = &outputs->m_Memory.m_pMemory[m_Size];
    if ( v9 != 0 )
      *v9 = EntityIOOutputByName;
  }
  if ( this->m_pInstance != 0 )
  {
    m_nBaseOffset = this->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CScriptComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF )
    {
      v11 = *(&this->m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
      if ( v11 != 0 )
        CScriptComponent::FindEntityIOOutputsByName(v11, pName, outputs);
    }
  }
}


// CEntityIdentity::GetEntityIOInputs  (line 425, @0x0000000003099730, libserver.so)  // inlines: GetComponent<CScriptComponent>, operator[]
// calls: CEntityClass::GetEntityIOInputs, CScriptComponent::GetEntityIOInputs
// callers: CLoopModeGameToolHooks::OnToolGetEntityInputs, CC_Ent_Info, CEntFireAutoCompletionFunctor::CommandCompletionCallback
void __fastcall CEntityIdentity::GetEntityIOInputs(
        CEntityIdentity *const this,
        CUtlVector<char const*,CUtlMemory<char const*,int> > *const inputs)
{
  __int64 m_nBaseOffset; // rdx
  CScriptComponent *v5; // rdi

  CEntityClass::GetEntityIOInputs(this->m_pClass, inputs);
  if ( this->m_pInstance != 0 )
  {
    m_nBaseOffset = this->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CScriptComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF )
    {
      v5 = *(&this->m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
      if ( v5 != 0 )
        CScriptComponent::GetEntityIOInputs(v5, inputs);
    }
  }
}


// CEntityIdentity::GetEntityIOOutputs  (line 436, @0x0000000003099790, libserver.so)  // inlines: GetComponent<CScriptComponent>, operator[]
// calls: CEntityClass::GetEntityIOOutputs, CScriptComponent::GetEntityIOOutputs
// callers: CBaseEntity::ValidateEntityConnections, CEntitySystem::FindEntityByOutputTarget
void __fastcall CEntityIdentity::GetEntityIOOutputs(
        CEntityIdentity *const this,
        CUtlVector<CEntityIOOutput*,CUtlMemory<CEntityIOOutput*,int> > *const outputs)
{
  __int64 m_nBaseOffset; // rdx
  CScriptComponent *v5; // rdi

  CEntityClass::GetEntityIOOutputs(this->m_pClass, this->m_pInstance, outputs);
  if ( this->m_pInstance != 0 )
  {
    m_nBaseOffset = this->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CScriptComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF )
    {
      v5 = *(&this->m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
      if ( v5 != 0 )
        CScriptComponent::GetEntityIOOutputs(v5, outputs);
    }
  }
}


// CEntityIdentity::GetEntityIOOutputs  (line 447, @0x0000000003099800, libserver.so)  // inlines: GetComponent<CScriptComponent>, operator[]
// calls: CEntityClass::GetEntityIOOutputs, CScriptComponent::GetEntityIOOutputs
// callers: CC_Ent_Info
void __fastcall CEntityIdentity::GetEntityIOOutputs(
        CEntityIdentity *const this,
        CUtlVector<const EntityIOOutputDesc_t*,CUtlMemory<const EntityIOOutputDesc_t*,int> > *const outputs)
{
  __int64 m_nBaseOffset; // rdx
  CScriptComponent *v5; // rdi

  CEntityClass::GetEntityIOOutputs(this->m_pClass, outputs);
  if ( this->m_pInstance != 0 )
  {
    m_nBaseOffset = this->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CScriptComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF )
    {
      v5 = *(&this->m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
      if ( v5 != 0 )
        CScriptComponent::GetEntityIOOutputs(v5, outputs);
    }
  }
}


// CEntityIdentity::IterComponentsNext  (line 459, @0x0000000003099860, libserver.so)  // inlines: GetComponent, operator[]
// calls: CEntitySystem::NumComponentTypes, CEntitySystem::FindComponentTypeByRuntimeIndex
// callers: CEntityDebugGameSystem::OnEntityReport
void *__fastcall CEntityIdentity::IterComponentsNext(
        CEntityIdentity *const this,
        EntityComponentIter_t *pIter,
        const EntComponentInfo_t **ppInfo)
{
  int v6; // eax
  EntityComponentIter_t v7; // rcx
  _QWORD *v8; // rbx
  CEntityInstance *m_pInstance; // rsi
  CEntityClass::ComponentOffsets_t *m_pMemory; // r9
  bool v12; // r8
  __int64 m_nBaseOffset; // rbx

  v6 = CEntitySystem::NumComponentTypes(g_pEntitySystem);
  v7 = (*pIter + 1);
  if ( v6 <= v7 )
  {
LABEL_2:
    *pIter = v7;
    if ( ppInfo != 0 )
      *ppInfo = 0;
    return 0;
  }
  m_pInstance = this->m_pInstance;
  m_pMemory = this->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory;
  v12 = this->m_pInstance == 0;
  while ( 1 )
  {
    m_nBaseOffset = m_pMemory[v7].m_nBaseOffset;
    if ( !v12 && m_nBaseOffset != 0xFFFF )
    {
      v8 = (&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
      if ( !CEntityClass::gm_fComponentsContained.m_Memory.m_pMemory[v7] )
        v8 = *v8;
      if ( v8 != 0 )
        break;
    }
    v7 = (v7 + 1);
    if ( v6 <= v7 )
      goto LABEL_2;
  }
  *pIter = v7;
  if ( ppInfo == 0 )
    return v8;
  *ppInfo = CEntitySystem::FindComponentTypeByRuntimeIndex(g_pEntitySystem, v7)->m_pInfo;
  return v8;
}


// CEntityIdentity::GetDataObject  (line 487, @0x0000000003099940, libserver.so)  // inlines: HasDataObjectType
// calls: CEntitySystem::GetDataObject
// callers: CBaseEntity::PhysicsEnableMotion, report_touchlinks, CBaseAnimating::UpdateModelScale, CBaseEntity::TransformStepData_ParentToWorld, CBaseEntity::TransformStepData_ParentToParent, CBaseEntity::TransformStepData_WorldToParent, CBaseEntity::UseStepSimulationNetworkOrigin, CBaseEntity::UseStepSimulationNetworkAngles, CBaseEntity::AddStepDiscontinuity, CBaseEntity::VPhysicsUpdatePusher, CBaseEntity::Teleport, DescribeGroundList (30 total)
void *__fastcall CEntityIdentity::GetDataObject(const CEntityIdentity *const this, EntityDataObjectType_t type)
{
  if ( ((1 << type) & this->m_fDataObjectTypes) != 0 )
    return CEntitySystem::GetDataObject(g_pEntitySystem, type, this->m_pInstance);
  else
    return 0;
}


// CEntityIdentity::CreateDataObject  (line 495, @0x0000000003099970, libserver.so)  // inlines: AddDataObjectType
// calls: CEntitySystem::CreateDataObject
// callers: CBaseAnimating::SetModelScale, CBaseEntity::CheckStepSimulationChanged, CBaseEntity::AddEntityToGroundList, CBaseEntity::PhysicsMarkEntityAsTouched, AddWatcherToEntity
void *__fastcall CEntityIdentity::CreateDataObject(CEntityIdentity *const this, EntityDataObjectType_t type)
{
  CEntityInstance *m_pInstance; // rdx

  m_pInstance = this->m_pInstance;
  this->m_fDataObjectTypes |= 1 << type;
  return CEntitySystem::CreateDataObject(g_pEntitySystem, type, m_pInstance);
}


// CEntityIdentity::DestroyDataObject  (line 502, @0x00000000030999a0, libserver.so)  // inlines: HasDataObjectType, RemoveDataObjectType
// calls: CEntitySystem::DestroyDataObject
// callers: CBaseAnimating::SetModelScale, CBaseAnimating::UpdateModelScale, CBaseEntity::VPhysicsUpdatePusher, CBaseEntity::CheckStepSimulationChanged, CBaseEntity::PhysicsNotifyOtherOfUntouch, CBaseEntity::PhysicsCheckForEntityUntouch, CBaseEntity::PhysicsNotifyOtherOfGroundRemoval, CBaseEntity::PhysicsRemoveGroundList, CBaseEntity::PhysicsStep, CBaseEntity::PhysicsRemoveTouchedList, CEntityIdentity::DestroyAllDataObjects
void __fastcall CEntityIdentity::DestroyDataObject(CEntityIdentity *const this, EntityDataObjectType_t type)
{
  int v3; // ebx

  v3 = 1 << type;
  if ( ((1 << type) & this->m_fDataObjectTypes) != 0 )
  {
    CEntitySystem::DestroyDataObject(g_pEntitySystem, type, this->m_pInstance);
    this->m_fDataObjectTypes &= ~v3;
  }
}


// CEntityIdentity::DestroyAllDataObjects  (line 511, @0x00000000030999e0, libserver.so)  // inlines: HasDataObjectType
// calls: CEntityIdentity::DestroyDataObject
// callers: CBaseEntity::~CBaseEntity, CPhysicsPropRespawnable::Event_Killed
void __fastcall CEntityIdentity::DestroyAllDataObjects(CEntityIdentity *const this)
{
  EntityDataObjectType_t i; // ebx
  EntityDataObjectType_t v3; // esi

  for ( i = 0; i != 32; ++i )
  {
    while ( ((1 << i) & this->m_fDataObjectTypes) == 0 )
    {
      if ( ++i == 32 )
        return;
    }
    v3 = i;
    CEntityIdentity::DestroyDataObject(this, v3);
  }
}


// CEntityIdentity::NetworkStateChanged  (line 523, @0x0000000003099a40, libserver.so)  // inlines: GetInstance
void __fastcall CEntityIdentity::NetworkStateChanged(CEntityIdentity *const this)
{
  CEntityInstance *m_pInstance; // rdi

  if ( this != 0 )
  {
    m_pInstance = this->m_pInstance;
    if ( m_pInstance != 0 )
      (*(m_pInstance->_vptr_IHandleEntity + 21))(m_pInstance);
  }
}


// CEntityIdentity::NetworkStateChanged  (line 531, @0x0000000003099a70, libserver.so)  // inlines: GetInstance
// callers: CConcreteEntityList::FreeEntity, CConcreteEntityList::AllocEntityChunk, CConcreteEntityList::AllocEntity, CSchemaClassBinding<CEntityIdentity>::Copy, CSchemaClassBinding<CEntityIdentity>::AllocateAndCopyConstruct, CSchemaClassBinding<CEntityIdentity>::ConstructInPlace, CSchemaClassBinding<CEntityIdentity>::Allocate
void __fastcall CEntityIdentity::NetworkStateChanged(
        CEntityIdentity *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  CEntityInstance *m_pInstance; // rdi

  if ( this != 0 )
  {
    m_pInstance = this->m_pInstance;
    if ( m_pInstance != 0 )
      (*(m_pInstance->_vptr_IHandleEntity + 22))(m_pInstance, nLocalOffset, nArrayIndex, this->m_PathIndex.m_Value);
  }
}


