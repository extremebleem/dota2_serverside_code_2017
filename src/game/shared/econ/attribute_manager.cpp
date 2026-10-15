// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/attribute_manager.cpp:509
class CEconItemAttributeIterator_ApplyAttributeFloat : public CEconItemSpecificAttributeIterator {
public:

private:

	float m_flValue;  // +0x10

	string_t m_iszAttribHook;  // +0x18
	CEconItemAttributeIterator_ApplyAttributeFloat(CEconItemAttributeIterator_ApplyAttributeFloat &);
	CEconItemAttributeIterator_ApplyAttributeFloat(const CEconItemAttributeIterator_ApplyAttributeFloat &);
	CEconItemAttributeIterator_ApplyAttributeFloat(CBaseEntity *, float, string_t, CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int> > *);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, attrib_value_t);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_String &);
	float GetResultValue();
	virtual ~CEconItemAttributeIterator_ApplyAttributeFloat();

	// vtable[2] OnIterateAttributeValue
	// vtable[5] OnIterateAttributeValue
	// sizeof = 40
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CAttributeManager::CAttributeManager  (line 20, @0x0000000002e3c3d0, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkVarBase, CUtlMemory, CUtlVector, CUtlVectorBase, EnsureValidValue<attributeprovidertypes_t>, EnsureValidValue<int>
// callers: CSchemaClassBinding<CAttributeManager>::Allocate, CSchemaClassBinding<CAttributeManager>::ConstructInPlace, CSchemaClassBinding<CAttributeContainer>::ConstructInPlace, CSchemaClassBinding<CAttributeContainer>::Allocate, CEconEntity::CEconEntity, CSchemaClassBinding<CAttributeContainer>::AllocateAndCopyConstruct, CSchemaClassBinding<CAttributeManager>::AllocateAndCopyConstruct
void __fastcall CAttributeManager::CAttributeManager(CAttributeManager *const this)
{
  this->_vptr_CAttributeManager = off_479F4D0;
  this->m_Providers.m_Size = 0;
  this->m_Providers.m_Memory.m_pMemory = 0;
  this->m_Providers.m_Memory.m_nAllocationCount = 0;
  this->m_Providers.m_Memory.m_nGrowSize = 0;
  this->m_Receivers.m_Size = 0;
  this->m_Receivers.m_Memory.m_pMemory = 0;
  this->m_Receivers.m_Memory.m_nAllocationCount = 0;
  this->m_Receivers.m_Memory.m_nGrowSize = 0;
  this->m_iReapplyProvisionParity.m_Value = 0;
  this->m_hOuter.m_Value.m_Index = -1;
  this->m_ProviderType.m_Value = attributeprovidertypes_t::PROVIDER_GENERIC;
  this->m_CachedResults.m_Size = 0;
  this->m_CachedResults.m_Memory.m_pMemory = 0;
  this->m_CachedResults.m_Memory.m_nAllocationCount = 0;
  this->m_CachedResults.m_Memory.m_nGrowSize = 0;
  this->m_bPreventLoopback = 0;
  this->m_iOldReapplyProvisionParity = 0;
}


// CAttributeManager::GetDataDescMap  (line 31, @0x0000000002e30560, libserver.so)
// globals: CAttributeManager::m_DataMap
datamap_t *__fastcall CAttributeManager::GetDataDescMap(CAttributeManager *const this)
{
  return &CAttributeManager::m_DataMap;
}


// CAttributeManager::AddDatadescMetadataKeys  (line 31, @0x0000000002e35050, libserver.so)
void __fastcall CAttributeManager::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CAttributeManager::GetBaseMap  (line 31, @0x0000000002e35060, libserver.so)
datamap_t *__cdecl CAttributeManager::GetBaseMap()
{
  return 0;
}


// DataMapInit<CAttributeManager>  (line 31, @0x0000000002e35070, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CUtlVector<CHandle<CBaseEntity> > >
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: __static_initialization_and_destruction_0
// strings: "CAttributeManager"
// globals: `guard variable for'DataMapInit<CAttributeManager>(CAttributeManager *)::nameHolder, `guard variable for'DataMapInit<CAttributeManager>(CAttributeManager *)::dataDesc, CAttributeManager::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBas, CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<, DataMapInit<CAttributeManager>(CAttributeManager *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CAttributeManager>(CAttributeManager *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CAttributeManager>(CAttributeManager *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CAttributeManager>(CAttributeManager *)::nameHolder) != 0 )
  {
    DataMapInit<CAttributeManager>(CAttributeManager *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CAttributeManager>(CAttributeManager *)::nameHolder.m_pszBase = "CAttributeManager";
    DataMapInit<CAttributeManager>(CAttributeManager *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CAttributeManager>(CAttributeManager *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CAttributeManager>(CAttributeManager *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CAttributeManager>(CAttributeManager *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CAttributeManager>(CAttributeManager *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CAttributeManager>(CAttributeManager *)::nameHolder,
      &_dso_handle);
  }
  CAttributeManager::m_DataMap.baseMap = 0;
  if ( `guard variable for'datamap_t * DataMapInit<CAttributeManager>(CAttributeManager *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CAttributeManager>(CAttributeManager *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops != 0 )
    {
      DataMapInit<CAttributeManager>(CAttributeManager *)::dataDesc[1].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops;
    }
    else
    {
      if ( __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops) != 0 )
      {
        CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops = off_4008550;
        __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops);
      }
      DataMapInit<CAttributeManager>(CAttributeManager *)::dataDesc[1].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops;
      if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops == 0
        && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops) != 0 )
      {
        CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops = off_4008550;
        __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops);
      }
    }
    DataMapInit<CAttributeManager>(CAttributeManager *)::dataDesc[2].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CAttributeManager>(CAttributeManager *)::dataDesc);
  }
  CAttributeManager::m_DataMap.dataNumFields = 5;
  CAttributeManager::m_DataMap.dataDesc = &DataMapInit<CAttributeManager>(CAttributeManager *)::dataDesc[1];
  return &CAttributeManager::m_DataMap;
}


// CAttributeContainer::AddDatadescMetadataKeys  (line 40, @0x0000000002e35220, libserver.so)
void __fastcall CAttributeContainer::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CAttributeContainer::GetBaseMap  (line 40, @0x0000000002e35230, libserver.so)
datamap_t *__cdecl CAttributeContainer::GetBaseMap()
{
  return 0;
}


// DataMapInit<CAttributeContainer>  (line 40, @0x0000000002e35240, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: __static_initialization_and_destruction_0
// strings: "CAttributeContainer"
// globals: `guard variable for'DataMapInit<CAttributeContainer>(CAttributeContainer *)::nameHolder, CAttributeContainer::m_DataMap, DataMapInit<CAttributeContainer>(CAttributeContainer *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CAttributeContainer>(CAttributeContainer *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CAttributeContainer>(CAttributeContainer *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CAttributeContainer>(CAttributeContainer *)::nameHolder) != 0 )
  {
    DataMapInit<CAttributeContainer>(CAttributeContainer *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CAttributeContainer>(CAttributeContainer *)::nameHolder.m_pszBase = "CAttributeContainer";
    DataMapInit<CAttributeContainer>(CAttributeContainer *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CAttributeContainer>(CAttributeContainer *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CAttributeContainer>(CAttributeContainer *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CAttributeContainer>(CAttributeContainer *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CAttributeContainer>(CAttributeContainer *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CAttributeContainer>(CAttributeContainer *)::nameHolder,
      &_dso_handle);
  }
  CAttributeContainer::m_DataMap.baseMap = 0;
  CAttributeContainer::m_DataMap.dataDesc = &DataMapInit<CAttributeContainer>(CAttributeContainer *)::dataDesc[1];
  CAttributeContainer::m_DataMap.dataNumFields = 1;
  return &CAttributeContainer::m_DataMap;
}


// AttributeConvertFromFloat<float>  (line 107, @0x0000000002e35300, libserver.so)
void __fastcall AttributeConvertFromFloat<float>(double a1, float flValue)
{
  ;
}


// AttributeConvertFromFloat<int>  (line 112, @0x0000000002e35310, libserver.so)  // inlines: RoundFloatToInt_NoSSE
// calls: floorf, ceilf
__int64 __fastcall AttributeConvertFromFloat<int>(float a1, float flValue)
{
  if ( a1 <= 0.0 )
    return ceilf(a1 - 0.5);
  else
    return floorf(a1 + 0.5);
}


// CAttributeManager::InitializeAttributes  (line 150, @0x0000000002e42a30, libserver.so)  // inlines: NetworkStateChanged, Set, operator=, operator=<CBaseEntity*>
// calls: CHandle<CBaseEntity>::CHandle, operator!=<CBaseEntity>
// callers: CAttributeContainer::InitializeAttributes
void __fastcall CAttributeManager::InitializeAttributes(CAttributeManager *const this, CBaseEntity *pEntity)
{
  CHandle<CBaseEntity> b; // [rsp+0h] [rbp-20h] BYREF

  CHandle<CBaseEntity>::CHandle(&b, pEntity);
  if ( operator!=<CBaseEntity>(&this->m_hOuter.m_Value, &b) )
  {
    (*(this->_vptr_CAttributeManager + 3))(this, 60, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_hOuter.m_Value = b;
  }
  this->m_bPreventLoopback = 0;
}


// CAttributeManager::ProvideTo  (line 163, @0x0000000002e42d00, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CBaseEntity*, operator CEntityInstance*, operator=<int>
// calls: __dynamic_cast, CAttributeManager::AddProvider
// callers: CEconEntity::ReapplyProvision
// globals: `typeinfo for'IHasAttributes, CEntityHandle::gm_pEntityList
void __fastcall CAttributeManager::ProvideTo(CAttributeManager *const this, CBaseEntity *pProvider)
{
  void *v3; // rax
  uint32 m_Index; // edx
  CBaseEntity *m_pInstance; // r12
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CAttributeManager *v8; // rax
  int m_Value; // eax
  int v10; // r12d

  if ( pProvider != 0 )
  {
    v3 = __dynamic_cast(pProvider, &`typeinfo for'CBaseEntity, &`typeinfo for'IHasAttributes, -2);
    if ( v3 != 0 )
    {
      m_Index = this->m_hOuter.m_Value.m_Index;
      m_pInstance = 0;
      if ( m_Index + 2 > 1 )
      {
        v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOuter.m_Value.m_Index) >> 9) & 0x3F];
        if ( v6 != 0 )
        {
          v7 = &v6[this->m_hOuter.m_Value.m_Index & 0x1FF];
          if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
            m_pInstance = v7->m_pInstance;
        }
      }
      v8 = (*(*v3 + 8LL))(v3);
      CAttributeManager::AddProvider(v8, m_pInstance);
      m_Value = this->m_iReapplyProvisionParity.m_Value;
      v10 = (m_Value + 1) & 0x3F;
      if ( m_Value != v10 )
      {
        (*(this->_vptr_CAttributeManager + 3))(this, 56, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_iReapplyProvisionParity.m_Value = v10;
      }
      (*(this->_vptr_CAttributeManager + 2))(this);
    }
  }
}


// CAttributeManager::StopProvidingTo  (line 180, @0x0000000002e3d090, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// calls: __dynamic_cast, CAttributeManager::RemoveProvider
// callers: CEconEntity::ReapplyProvision
// globals: `typeinfo for'IHasAttributes
void __fastcall CAttributeManager::StopProvidingTo(CAttributeManager *const this, CBaseEntity *pProvider)
{
  void *v4; // rax
  CAttributeManager *v5; // rax
  int m_Value; // eax
  int v7; // r12d

  if ( pProvider != 0 )
  {
    v4 = __dynamic_cast(pProvider, &`typeinfo for'CBaseEntity, &`typeinfo for'IHasAttributes, -2);
    if ( v4 != 0 )
    {
      v5 = (*(*v4 + 8LL))(v4);
      CAttributeManager::RemoveProvider(v5, pProvider);
      m_Value = this->m_iReapplyProvisionParity.m_Value;
      v7 = (m_Value + 1) & 0x3F;
      if ( m_Value != v7 )
      {
        (*(this->_vptr_CAttributeManager + 3))(this, 56, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_iReapplyProvisionParity.m_Value = v7;
      }
      (*(this->_vptr_CAttributeManager + 2))(this);
    }
  }
}


// CAttributeManager::AddProvider  (line 196, @0x0000000002e42ad0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, ClearCache, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetOuter, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Set, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: __dynamic_cast, CAttributeManager::ClearCache, CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// callers: CAttributeManager::ProvideTo
// globals: `typeinfo for'IHasAttributes, CEntityHandle::gm_pEntityList
void __fastcall CAttributeManager::AddProvider(CAttributeManager *const this, CBaseEntity *pProvider)
{
  void *v4; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int16 v6; // si
  __int64 m_Size; // r12
  int v8; // edx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // edx
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r12
  int v15; // edx
  int *v16; // rax
  CEntityIdentity *v17; // rcx
  __int16 v18; // si
  void *v19; // [rsp+8h] [rbp-28h]
  __int64 v20; // [rsp+8h] [rbp-28h]
  int v21; // [rsp+10h] [rbp-20h]
  int v22; // [rsp+10h] [rbp-20h]

  if ( pProvider == 0 )
  {
    m_Size = this->m_Providers.m_Size;
    v4 = 0;
    v21 = -1;
    v8 = m_Size;
    if ( m_Size != this->m_Providers.m_Memory.m_nAllocationCount )
      goto LABEL_7;
    goto LABEL_21;
  }
  v4 = __dynamic_cast(pProvider, &`typeinfo for'CBaseEntity, &`typeinfo for'IHasAttributes, -2);
  m_pEntity = pProvider->m_pEntity;
  v21 = -1;
  if ( m_pEntity != 0 )
  {
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v21 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
  }
  m_Size = this->m_Providers.m_Size;
  v8 = this->m_Providers.m_Size;
  if ( m_Size == this->m_Providers.m_Memory.m_nAllocationCount )
  {
LABEL_21:
    v19 = v4;
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_Providers.m_Memory, 1);
    v8 = this->m_Providers.m_Size;
    v4 = v19;
  }
LABEL_7:
  this->m_Providers.m_Size = v8 + 1;
  v9 = &this->m_Providers.m_Memory.m_pMemory[m_Size];
  if ( v9 != 0 )
    v9->m_Index = v21;
  m_Index = this->m_hOuter.m_Value.m_Index;
  if ( m_Index + 2 > 1
    && (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOuter.m_Value.m_Index) >> 9) & 0x3F]) != 0
    && (v12 = &v11[this->m_hOuter.m_Value.m_Index & 0x1FF]) != 0
    && m_Index == v12->m_EHandle.m_Index )
  {
    v22 = -1;
    if ( v12->m_pInstance != 0 )
    {
      v17 = v12->m_pInstance->m_pEntity;
      if ( v17 != 0 )
      {
        v18 = 0x7FFF;
        if ( v17->m_EHandle.m_Index != -1 )
          v18 = v17->m_EHandle.m_Index & 0x7FFF;
        v22 = (((v17->m_EHandle.m_Index >> 15) - (v17->m_flags & 1)) << 15) | v18 & 0x7FFF;
      }
    }
  }
  else
  {
    v22 = -1;
  }
  v13 = (*(*v4 + 8LL))(v4);
  v14 = *(v13 + 32);
  v15 = *(v13 + 32);
  if ( v14 == *(v13 + 48) )
  {
    v20 = v13;
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow((v13 + 40), 1);
    v13 = v20;
    v15 = *(v20 + 32);
  }
  *(v13 + 32) = v15 + 1;
  v16 = (*(v13 + 40) + 4 * v14);
  if ( v16 != 0 )
    *v16 = v22;
  if ( !this->m_bPreventLoopback )
    CAttributeManager::ClearCache(this);
}


// CAttributeManager::RemoveProvider  (line 215, @0x0000000002e3ced0, libserver.so)  // inlines: CEntityHandle, CHandle, ClearCache, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetOuter, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, operator CBaseEntity*, operator CEntityInstance*
// calls: __dynamic_cast, CAttributeManager::IsBeingProvidedToBy, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndFastRemove, CAttributeManager::ClearCache
// callers: CAttributeManager::StopProvidingTo
// globals: `typeinfo for'IHasAttributes, CEntityHandle::gm_pEntityList
void __fastcall CAttributeManager::RemoveProvider(CAttributeManager *const this, CBaseEntity *pProvider)
{
  void *v4; // r13
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  uint32 m_Index; // eax
  CConcreteEntityList *v8; // rsi
  CEntityIdentity *v9; // rdx
  __int64 v10; // rcx
  CEntityIdentity *v11; // rdx
  __int64 v12; // rax
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *v14; // rax
  int v15; // edx
  __int16 v16; // cx
  CHandle<CBaseEntity> src; // [rsp+0h] [rbp-30h] BYREF

  if ( pProvider != 0 )
    v4 = __dynamic_cast(pProvider, &`typeinfo for'CBaseEntity, &`typeinfo for'IHasAttributes, -2);
  else
    v4 = 0;
  if ( CAttributeManager::IsBeingProvidedToBy(this, pProvider) )
  {
    src.m_Index = -1;
    if ( pProvider != 0 )
    {
      m_pEntity = pProvider->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v6 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndFastRemove(
      &this->m_Providers,
      &src);
    m_Index = this->m_hOuter.m_Value.m_Index;
    v8 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 > 1
      && (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOuter.m_Value.m_Index) >> 9) & 0x3F]) != 0
      && (v10 = this->m_hOuter.m_Value.m_Index & 0x1FF, v8 = (8 * v10), (v11 = &v9[v10]) != 0)
      && m_Index == v11->m_EHandle.m_Index )
    {
      m_pInstance = v11->m_pInstance;
      src.m_Index = -1;
      if ( m_pInstance != 0 )
      {
        v14 = m_pInstance->m_pEntity;
        if ( v14 != 0 )
        {
          v15 = (v14->m_EHandle.m_Index >> 15) - (v14->m_flags & 1);
          v16 = 0x7FFF;
          if ( v14->m_EHandle.m_Index != -1 )
            v16 = v14->m_EHandle.m_Index & 0x7FFF;
          LOWORD(src.m_Index) = v16 | src.m_Index & 0x8000;
          src.m_Index = (v15 << 15) | src.m_Index & 0x7FFF;
        }
      }
    }
    else
    {
      src.m_Index = -1;
    }
    v12 = (*(*v4 + 8LL))(v4, v8);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndFastRemove((v12 + 32), &src);
    if ( !this->m_bPreventLoopback )
      CAttributeManager::ClearCache(this);
  }
}


// CAttributeManager::ClearCache  (line 237, @0x0000000002e35350, libserver.so)
// calls: CAttributeManager::ClearCache
// callers: CAttributeManager::ClearCache
void __fastcall CAttributeManager::ClearCache(CAttributeManager *const this)
{
  if ( !this->m_bPreventLoopback )
    CAttributeManager::ClearCache(this);
}


// CAttributeManager::ClearCache  (line 237, @0x0000000002e35370, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Purge, RemoveAll, Set, operator CEntityInstance*, operator=<int>, operator[]
// calls: CUtlMemory<CAttributeManager::cached_attribute_float_t, int>::Purge, __dynamic_cast, CAttributeManager::ClearCache
// callers: CAttributeManager::ClearCache, CAttributeManager::OnAttributeValuesChanged, CAttributeContainer::OnAttributeValuesChanged, CAttributeManager::RemoveProvider, CAttributeManager::AddProvider
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'IHasAttributes
void __fastcall CAttributeManager::ClearCache(CAttributeManager *const this)
{
  bool v2; // zf
  int m_Size; // r12d
  CConcreteEntityList *v4; // r14
  __int64 v5; // r13
  int v6; // r12d
  CHandle<CBaseEntity> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  void *v12; // rax
  CAttributeManager *v13; // rax
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  int m_Value; // eax
  int v18; // r12d
  void *v19; // rax
  CAttributeManager *v20; // rax

  v2 = (this->m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_CachedResults.m_Size = 0;
  if ( v2 )
    CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_CachedResults.m_Memory);
  m_Size = this->m_Receivers.m_Size;
  this->m_bPreventLoopback = 1;
  v4 = CEntityHandle::gm_pEntityList;
  if ( m_Size > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = &this->m_Receivers.m_Memory.m_pMemory[v5];
        m_Index = v7->m_Index;
        if ( v7->m_Index + 2 > 1 )
        {
          v9 = v7->m_Index;
          v10 = v4->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
          if ( v10 != 0 )
          {
            v11 = &v10[v9 & 0x1FF];
            if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
            {
              v12 = __dynamic_cast(v11->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'IHasAttributes, -2);
              if ( v12 != 0 )
                break;
            }
          }
        }
        ++v6;
        ++v5;
        if ( v6 >= this->m_Receivers.m_Size )
          goto LABEL_13;
      }
      ++v6;
      ++v5;
      v13 = (*(*v12 + 8LL))(v12);
      CAttributeManager::ClearCache(v13);
      v4 = CEntityHandle::gm_pEntityList;
    }
    while ( v6 < this->m_Receivers.m_Size );
  }
LABEL_13:
  v14 = this->m_hOuter.m_Value.m_Index;
  if ( v14 + 2 > 1 )
  {
    v15 = v4->m_pIdentityChunks[(LOWORD(this->m_hOuter.m_Value.m_Index) >> 9) & 0x3F];
    if ( v15 != 0 )
    {
      v16 = &v15[this->m_hOuter.m_Value.m_Index & 0x1FF];
      if ( v16 != 0 && v14 == v16->m_EHandle.m_Index && v16->m_pInstance != 0 )
      {
        v19 = __dynamic_cast(v16->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'IHasAttributes, -2);
        if ( v19 != 0 )
        {
          v20 = (*(*v19 + 8LL))(v19);
          CAttributeManager::ClearCache(v20);
        }
      }
    }
  }
  m_Value = this->m_iReapplyProvisionParity.m_Value;
  this->m_bPreventLoopback = 0;
  v18 = (m_Value + 1) & 0x3F;
  if ( m_Value != v18 )
  {
    (*(this->_vptr_CAttributeManager + 3))(this, 56, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iReapplyProvisionParity.m_Value = v18;
  }
  (*(this->_vptr_CAttributeManager + 2))(this);
}


// CAttributeManager::IsProvidingTo  (line 275, @0x0000000002e3ce20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetOuter, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: __dynamic_cast, CAttributeManager::IsBeingProvidedToBy
// globals: `typeinfo for'IHasAttributes, CEntityHandle::gm_pEntityList
bool __fastcall CAttributeManager::IsProvidingTo(const CAttributeManager *const this, CBaseEntity *pEntity)
{
  void *v3; // rax
  uint32 m_Index; // edx
  CBaseEntity *m_pInstance; // r12
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  const CAttributeManager *v8; // rax

  if ( pEntity == 0 )
    return 0;
  v3 = __dynamic_cast(pEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'IHasAttributes, -2);
  if ( v3 == 0 )
    return 0;
  m_Index = this->m_hOuter.m_Value.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOuter.m_Value.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hOuter.m_Value.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  v8 = (*(*v3 + 8LL))(v3);
  return CAttributeManager::IsBeingProvidedToBy(v8, m_pInstance);
}


// CAttributeManager::IsBeingProvidedToBy  (line 290, @0x0000000002e3cda0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find
// callers: CAttributeManager::IsProvidingTo, CAttributeManager::RemoveProvider
bool __fastcall CAttributeManager::IsBeingProvidedToBy(const CAttributeManager *const this, CBaseEntity *pEntity)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx
  CHandle<CBaseEntity> src; // [rsp+0h] [rbp-10h] BYREF

  src.m_Index = -1;
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v3 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
    }
  }
  return CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&this->m_Providers, &src) != -1;
}


// CAttributeManager::ApplyAttributeFloatWrapper  (line 302, @0x0000000002e43290, libserver.so)  // inlines: AddToTail, CUtlSymbolLarge, Construct<CAttributeManager::cached_attribute_float_t>, Element, GrowMemory, Remove, cached_attribute_float_t, operator=, operator==, operator[]
// calls: CUtlVectorBase<CAttributeManager::cached_attribute_float_t, CUtlMemory<CAttributeManager::cached_attribute_float_t, int> >::ShiftElementsLeft, CUtlMemory<CAttributeManager::cached_attribute_float_t, int>::Grow
float __fastcall CAttributeManager::ApplyAttributeFloatWrapper(
        CAttributeManager *const this,
        double flValue,
        CBaseEntity *pInitiator,
        string_t iszAttribHook,
        CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *pItemList)
{
  double v5; // xmm1_8
  int v9; // r8d
  CAttributeManager::cached_attribute_float_t *m_pMemory; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  float *p_flIn; // r11
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r10
  int (**vptr_CAttributeManager)(...); // rax
  float result; // xmm0_4
  __int64 m_Size; // rbx
  float v20; // xmm1_4
  int v21; // eax
  __int64 v22; // rax
  CAttributeManager::cached_attribute_float_t *v23; // rdx
  CAttributeManager::cached_attribute_float_t *v24; // rdx
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *pItemListb; // [rsp+0h] [rbp-40h]
  float pItemLista; // [rsp+0h] [rbp-40h]
  float flResult; // [rsp+Ch] [rbp-34h]
  unsigned int flResultb; // [rsp+Ch] [rbp-34h]
  float flResulta; // [rsp+Ch] [rbp-34h]
  __int64 v30[6]; // [rsp+10h] [rbp-30h] BYREF

  v5 = flValue;
  v9 = this->m_CachedResults.m_Size - 1;
  if ( v9 < 0 )
  {
    v11 = *iszAttribHook.u.m_Id;
  }
  else
  {
    m_pMemory = this->m_CachedResults.m_Memory.m_pMemory;
    v11 = *iszAttribHook.u.m_Id;
    v12 = v9;
    p_flIn = &m_pMemory[v12].flIn;
    if ( m_pMemory[v12].iAttribHook.u.m_Id == *iszAttribHook.u.m_Id )
    {
LABEL_13:
      if ( *&flValue == *p_flIn )
        return p_flIn[4];
      pItemListb = pItemList;
      flResultb = LODWORD(flValue);
      CUtlVectorBase<CAttributeManager::cached_attribute_float_t,CUtlMemory<CAttributeManager::cached_attribute_float_t,int>>::ShiftElementsLeft(
        &this->m_CachedResults,
        v9,
        1);
      *&v5 = flResultb;
      --this->m_CachedResults.m_Size;
      pItemList = pItemListb;
      v11 = *iszAttribHook.u.m_Id;
    }
    else
    {
      v14 = &m_pMemory[v12 - 1];
      v15 = v14 + 8;
      v16 = -24LL * v9 - m_pMemory;
      while ( --v9 != -1 )
      {
        p_flIn = v14;
        v14 -= 24;
        if ( *(v16 + v14 + v15 + 48) == v11 )
          goto LABEL_13;
      }
    }
  }
  vptr_CAttributeManager = this->_vptr_CAttributeManager;
  v30[0] = v11;
  flResult = *&v5;
  vptr_CAttributeManager[8](this, pInitiator, v30, pItemList, v5);
  m_Size = this->m_CachedResults.m_Size;
  v20 = flResult;
  v21 = this->m_CachedResults.m_Size;
  if ( m_Size == this->m_CachedResults.m_Memory.m_nAllocationCount )
  {
    pItemLista = flResult;
    flResulta = result;
    CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Grow(&this->m_CachedResults.m_Memory, 1);
    v21 = this->m_CachedResults.m_Size;
    v20 = pItemLista;
    result = flResulta;
  }
  this->m_CachedResults.m_Size = v21 + 1;
  v22 = m_Size;
  v23 = &this->m_CachedResults.m_Memory.m_pMemory[m_Size];
  if ( v23 != 0 )
  {
    v23->iAttribHook.u.m_Id = 0;
    v24 = &this->m_CachedResults.m_Memory.m_pMemory[v22];
  }
  else
  {
    v24 = 0;
  }
  v24->flIn = v20;
  this->m_CachedResults.m_Memory.m_pMemory[v22].flOut = result;
  this->m_CachedResults.m_Memory.m_pMemory[v22].iAttribHook.u.m_Id = *iszAttribHook.u.m_Id;
  return result;
}


// CAttributeManager::ApplyAttributeFloat  (line 334, @0x0000000002e346a0, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetOuter, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: __dynamic_cast
// callers: CAttributeContainer::ApplyAttributeFloat
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'IHasAttributes
float __fastcall CAttributeManager::ApplyAttributeFloat(
        CAttributeManager *const this,
        float flValue,
        CBaseEntity *pInitiator,
        string_t iszAttribHook,
        CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *pItemList)
{
  __int64 m_Index; // r8
  CConcreteEntityList *v7; // r9
  unsigned __int64 m_Index_low; // rbx
  CEntityIdentity *v9; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  CEntityIdentity *v13; // rax
  IHasAttributes *v15; // rax
  CConcreteEntityList *v16; // rsi
  __int64 v17; // rbx
  CHandle<CBaseEntity> *v18; // rdx
  uint32 v19; // eax
  CEntityIdentity *v20; // rdx
  char *v21; // rdx
  CBaseEntity *v22; // rdi
  void *v23; // rax
  void *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  void (__fastcall *v27)(__int64, CBaseEntity *, _QWORD *, CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *, float); // r8
  uint32 v28; // eax
  void *v29; // rbx
  CEntityIdentity *v30; // rdx
  __int64 v31; // rbx
  bool v32; // zf
  __int64 v33; // rax
  const void *v34; // rax
  void *v35; // rax
  __int64 v36; // rax
  void (__fastcall *v37)(__int64, CBaseEntity *, _QWORD *, CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *, float); // r8
  __int64 v38; // rax
  void *v39; // rax
  float flValuea; // [rsp+Ch] [rbp-64h]
  unsigned int v41; // [rsp+10h] [rbp-60h]
  IHasAttributes *pInitiatorAttribInterface; // [rsp+18h] [rbp-58h]
  CConcreteEntityList *v44; // [rsp+28h] [rbp-48h]
  float v45; // [rsp+28h] [rbp-48h]
  float v46; // [rsp+28h] [rbp-48h]
  float v47; // [rsp+28h] [rbp-48h]
  float v48; // [rsp+28h] [rbp-48h]
  _QWORD v49[8]; // [rsp+30h] [rbp-40h] BYREF

  if ( this->m_bPreventLoopback )
    return flValue;
  m_Index = this->m_hOuter.m_Value.m_Index;
  v7 = CEntityHandle::gm_pEntityList;
  if ( (m_Index + 2) <= 1 )
    return flValue;
  m_Index_low = LOWORD(this->m_hOuter.m_Value.m_Index);
  v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
  if ( v9 == 0 )
    return flValue;
  v11 = m_Index_low & 0x1FF;
  v12 = 8 * v11;
  v13 = &v9[v11];
  if ( v13 == 0 || m_Index != v13->m_EHandle.m_Index || v13->m_pInstance == 0 )
    return flValue;
  this->m_bPreventLoopback = 1;
  if ( pInitiator != 0 )
  {
    flValuea = flValue;
    v41 = m_Index;
    v44 = v7;
    v15 = __dynamic_cast(pInitiator, &`typeinfo for'CBaseEntity, &`typeinfo for'IHasAttributes, -2);
    v7 = v44;
    m_Index = v41;
    pInitiatorAttribInterface = v15;
    flValue = flValuea;
  }
  else
  {
    pInitiatorAttribInterface = 0;
  }
  v16 = v7;
  if ( this->m_Providers.m_Size <= 0 )
  {
    v28 = m_Index;
    goto LABEL_24;
  }
  v17 = 0;
  do
  {
    while ( 1 )
    {
      v18 = &this->m_Providers.m_Memory.m_pMemory[v17];
      v19 = v18->m_Index;
      v12 = v18->m_Index + 2;
      if ( v12 > 1 )
      {
        v12 = LOWORD(v18->m_Index);
        v20 = v16->m_pIdentityChunks[(v12 >> 9) & 0x3F];
        if ( v20 == 0 )
          goto LABEL_12;
        v12 = 120 * (v12 & 0x1FF);
        v21 = v20 + v12;
        if ( v21 == 0 )
          goto LABEL_12;
        if ( v19 != *(v21 + 4) )
          goto LABEL_12;
        v22 = *v21;
        if ( *v21 == 0 || pInitiator == v22 )
          goto LABEL_12;
        v45 = flValue;
        v23 = __dynamic_cast(v22, &`typeinfo for'CBaseEntity, &`typeinfo for'IHasAttributes, -2);
        v24 = v23;
        flValue = v45;
        if ( pInitiatorAttribInterface == 0 )
          break;
        v25 = (*(*v23 + 8LL))(v23, v45);
        flValue = v45;
        if ( *(v25 + 68) != 1 )
          break;
        v38 = (*(pInitiatorAttribInterface->_vptr_IHasAttributes + 1))(pInitiatorAttribInterface, v45);
        flValue = v45;
        if ( *(v38 + 68) != 1 )
          break;
        v16 = CEntityHandle::gm_pEntityList;
      }
LABEL_12:
      if ( this->m_Providers.m_Size <= ++v17 )
        goto LABEL_22;
    }
    v46 = flValue;
    v26 = (*(*v24 + 8LL))(v24);
    v27 = *(*v26 + 64LL);
    v49[0] = *iszAttribHook.u.m_Id;
    v27(v26, pInitiator, v49, pItemList, v46);
    ++v17;
    v16 = CEntityHandle::gm_pEntityList;
  }
  while ( this->m_Providers.m_Size > v17 );
LABEL_22:
  v28 = this->m_hOuter.m_Value.m_Index;
  v29 = 0;
  v30 = (v28 + 2);
  if ( v30 > 1 )
  {
    m_Index_low = LOWORD(this->m_hOuter.m_Value.m_Index);
LABEL_24:
    v30 = v16->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v30 != 0 )
    {
      v31 = m_Index_low & 0x1FF;
      v12 = 8 * v31;
      v31 *= 120;
      v32 = (v30 + v31) == 0;
      v30 = (v30 + v31);
      v29 = 0;
      if ( !v32 && v30->m_EHandle.m_Index == v28 && v30->m_pInstance != 0 )
      {
        v48 = flValue;
        v39 = __dynamic_cast(v30->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'IHasAttributes, -2);
        flValue = v48;
        v29 = v39;
      }
    }
    else
    {
      v29 = 0;
    }
  }
  v47 = flValue;
  v33 = (*(*v29 + 24LL))(v29, v16, v30, v12, m_Index);
  flValue = v47;
  if ( v33 != 0 )
  {
    v34 = (*(*v29 + 24LL))(v29, v47);
    flValue = v47;
    if ( v34 != 0 )
    {
      v35 = __dynamic_cast(v34, &`typeinfo for'CBaseEntity, &`typeinfo for'IHasAttributes, -2);
      flValue = v47;
      if ( v35 != 0 )
      {
        v36 = (*(*v35 + 8LL))(v35, v47);
        v37 = *(*v36 + 64LL);
        v49[0] = *iszAttribHook.u.m_Id;
        v37(v36, pInitiator, v49, pItemList, v47);
      }
    }
  }
  this->m_bPreventLoopback = 0;
  return flValue;
}


// CAttributeContainer::InitializeAttributes  (line 395, @0x0000000002e42a90, libserver.so)
// calls: CAttributeManager::InitializeAttributes, CAttributeList::SetManager
void __fastcall CAttributeContainer::InitializeAttributes(CAttributeContainer *const this, CBaseEntity *pEntity)
{
  CAttributeManager::InitializeAttributes(this, pEntity);
  CAttributeList::SetManager(&this->m_Item.m_AttributeList, this);
  (*(this->_vptr_CAttributeManager + 9))(this);
}


// ApplyAttribute  (line 413, @0x0000000002e31690, libserver.so)
// callers: CollateAttributeValues, CEconItemAttributeIterator_ApplyAttributeFloat::OnIterateAttributeValue
void __fastcall ApplyAttribute(
        const CEconItemAttributeDefinition *pAttributeDef,
        float *const flValue,
        float a3,
        const float flValueModifier)
{
  unsigned int m_iDescriptionFormat; // ecx
  __int64 v5; // rax

  m_iDescriptionFormat = pAttributeDef->m_iDescriptionFormat;
  if ( m_iDescriptionFormat <= 9 )
  {
    v5 = 1LL << m_iDescriptionFormat;
    if ( ((1LL << m_iDescriptionFormat) & 0x28C) != 0 )
    {
      *flValue = a3 + *flValue;
    }
    else if ( (v5 & 0x10) != 0 )
    {
      *flValue = (a3 | *flValue);
    }
    else if ( (v5 & 3) != 0 )
    {
      *flValue = a3 * *flValue;
    }
  }
}


// CollateAttributeValues  (line 462, @0x0000000002e35530, libserver.so)
// calls: ApplyAttribute
float __fastcall CollateAttributeValues(
        const CEconItemAttributeDefinition *pAttrDef1,
        float a2,
        float flAttribValue1,
        const CEconItemAttributeDefinition *pAttrDef2,
        const float flAttribValue2)
{
  float flValue[5]; // [rsp+14h] [rbp-14h] BYREF

  if ( pAttrDef1->m_iDescriptionFormat > 1u )
    flValue[0] = 0.0;
  else
    flValue[0] = 1.0;
  ApplyAttribute(pAttrDef1, flValue, a2, flAttribValue1);
  ApplyAttribute(pAttrDef2, flValue, flAttribValue1, flAttribValue1);
  return flValue[0];
}


// CEconItemAttributeIterator_ApplyAttributeFloat::~CEconItemAttributeIterator_ApplyAttributeFloat  (line 509, @0x0000000002e4f1c0, libserver.so)  // inlines: ~CEconItemSpecificAttributeIterator, ~IEconItemAttributeIterator
void __fastcall CEconItemAttributeIterator_ApplyAttributeFloat::~CEconItemAttributeIterator_ApplyAttributeFloat(
        CEconItemAttributeIterator_ApplyAttributeFloat *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;
}


// CEconItemAttributeIterator_ApplyAttributeFloat::~CEconItemAttributeIterator_ApplyAttributeFloat  (line 509, @0x0000000002e4fb70, libserver.so)  // inlines: ~CEconItemAttributeIterator_ApplyAttributeFloat, ~CEconItemSpecificAttributeIterator, ~IEconItemAttributeIterator
// calls: operator delete
void __fastcall CEconItemAttributeIterator_ApplyAttributeFloat::~CEconItemAttributeIterator_ApplyAttributeFloat(
        CEconItemAttributeIterator_ApplyAttributeFloat *const this)
{
  this->_vptr_IEconItemAttributeIterator = off_40DB570;
  operator delete(this);
}


// CEconItemAttributeIterator_ApplyAttributeFloat::OnIterateAttributeValue  (line 521, @0x0000000002e5ead0, libserver.so)  // inlines: AddToTail, CopyConstruct<CBaseEntity*>, Element, Find, GetCachedClass, GrowMemory, HasElement, operator=, operator==, operator[]
// calls: AllocPooledString, ApplyAttribute, CUtlMemory<CBaseEntity*, int>::Grow
bool __fastcall CEconItemAttributeIterator_ApplyAttributeFloat::OnIterateAttributeValue(
        CEconItemAttributeIterator_ApplyAttributeFloat *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        attrib_value_t value)
{
  float v3; // xmm1_4
  UtlSymLargeId_t m_Id; // rax
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *m_pItemList; // r14
  __int64 m_Size; // rbx
  CBaseEntity **m_pMemory; // rcx
  CBaseEntity *m_pOuter; // r8
  _QWORD *v12; // rcx
  int v13; // eax
  int v14; // eax
  CBaseEntity **v15; // rax
  attrib_value_t valuea; // [rsp+Ch] [rbp-34h]
  attrib_value_t valueb; // [rsp+Ch] [rbp-34h]
  UtlSymLargeId_t v18; // [rsp+10h] [rbp-30h]

  m_Id = pAttrDef->m_iszAttributeClass.u.m_Id;
  if ( m_Id == 0 && pAttrDef->m_symAttributeClass.u.m_Id != 0 )
  {
    valuea = value;
    AllocPooledString(pAttrDef->m_symAttributeClass.u.m_pAsString);
    value = valuea;
    pAttrDef->m_iszAttributeClass.u.m_Id = v18;
    if ( this->m_iszAttribHook.u.m_Id != v18 )
      return 1;
LABEL_6:
    m_pItemList = this->m_pItemList;
    if ( m_pItemList != 0 )
    {
      m_Size = m_pItemList->m_Size;
      if ( m_Size <= 0 )
      {
LABEL_12:
        if ( m_Size == m_pItemList->m_Memory.m_nAllocationCount )
        {
          valueb = value;
          CUtlMemory<CBaseEntity *,int>::Grow(&m_pItemList->m_Memory, 1);
          v14 = m_pItemList->m_Size;
          value = valueb;
        }
        else
        {
          v14 = m_pItemList->m_Size;
        }
        m_pItemList->m_Size = v14 + 1;
        v15 = &m_pItemList->m_Memory.m_pMemory[m_Size];
        if ( v15 != 0 )
          *v15 = this->m_pOuter;
        goto LABEL_18;
      }
      m_pMemory = m_pItemList->m_Memory.m_pMemory;
      m_pOuter = this->m_pOuter;
      if ( *m_pMemory != m_pOuter )
      {
        v12 = m_pMemory + 1;
        v13 = 0;
        while ( ++v13 != m_Size )
        {
          if ( *v12++ == m_pOuter )
          {
            if ( v13 < 0 )
              goto LABEL_12;
            goto LABEL_18;
          }
        }
        goto LABEL_12;
      }
    }
LABEL_18:
    ApplyAttribute(pAttrDef, &this->m_flValue, *&value, v3);
    return 1;
  }
  if ( this->m_iszAttribHook.u.m_Id == m_Id )
    goto LABEL_6;
  return 1;
}


// CEconItemAttributeIterator_ApplyAttributeFloat::OnIterateAttributeValue  (line 542, @0x0000000002e4ef30, libserver.so)
bool __fastcall CEconItemAttributeIterator_ApplyAttributeFloat::OnIterateAttributeValue(
        CEconItemAttributeIterator_ApplyAttributeFloat *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const CAttribute_String *const value)
{
  return 1;
}


// CAttributeContainer::ApplyAttributeFloat  (line 566, @0x0000000002e34a00, libserver.so)  // inlines: CEconItemAttributeIterator_ApplyAttributeFloat, CUtlSymbolLarge, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetOuter, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CAttributeManager::ApplyAttributeFloat
// globals: CEntityHandle::gm_pEntityList
float __fastcall CAttributeContainer::ApplyAttributeFloat(
        CAttributeContainer *const this,
        float flValue,
        CBaseEntity *pInitiator,
        string_t iszAttribHook,
        CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > *pItemList)
{
  uint32 m_Index; // eax
  unsigned __int16 v8; // si
  char *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  UtlSymLargeId_t v15; // rdi
  CBaseEntity *v16; // r8
  __int64 v17; // rsi
  int (**vptr_IEconItemInterface)(...); // rax
  string_t iszAttribHooka; // [rsp+10h] [rbp-60h] BYREF
  CEconItemAttributeIterator_ApplyAttributeFloat it; // [rsp+20h] [rbp-50h] BYREF

  if ( !this->m_bPreventLoopback )
  {
    m_Index = this->m_hOuter.m_Value.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v8 = this->m_hOuter.m_Value.m_Index;
      v10 = &CEntityHandle::gm_pEntityList->m_Lock.gap0 + ((v8 >> 6) & 0x1F8);
      v11 = *(v10 + 1);
      if ( v11 != 0 )
      {
        v12 = 120LL * (v8 & 0x1FF);
        v13 = v12 + v11;
        if ( v13 != 0 && m_Index == *(v13 + 16) && *v13 != 0 )
        {
          this->m_bPreventLoopback = 1;
          v14 = *(v10 + 1);
          v15 = *iszAttribHook.u.m_Id;
          if ( v14 != 0 )
          {
            v16 = 0;
            v17 = v14 + v12;
            if ( v17 != 0 && m_Index == *(v17 + 16) )
              v16 = *v17;
          }
          else
          {
            v16 = 0;
          }
          it.m_pOuter = v16;
          it._vptr_IEconItemAttributeIterator = off_479F5D0;
          vptr_IEconItemInterface = this->m_Item._vptr_IEconItemInterface;
          it.m_flValue = flValue;
          it.m_iszAttribHook.u.m_Id = v15;
          it.m_pItemList = pItemList;
          vptr_IEconItemInterface[28](&this->m_Item, &it);
          this->m_bPreventLoopback = 0;
          iszAttribHooka.u.m_Id = *iszAttribHook.u.m_Id;
          return CAttributeManager::ApplyAttributeFloat(this, it.m_flValue, pInitiator, &iszAttribHooka, pItemList);
        }
      }
    }
  }
  return flValue;
}


