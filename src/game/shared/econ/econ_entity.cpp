// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_entity.cpp:63
class C_CEconEntity_MapInstall {
	C_CEconEntity_MapInstall();

	// sizeof = 1
};

// src/game/shared/econ/econ_entity.cpp:64
class C_CBaseAttributableItem_MapInstall {
	C_CBaseAttributableItem_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEconEntity::YouForgotToImplementOrDeclareServerClass  (line 63, @0x0000000002e30890, libserver.so)
int __fastcall CEconEntity::YouForgotToImplementOrDeclareServerClass(CEconEntity *const this)
{
  return 0;
}


// CEconEntity::GetServerClass  (line 63, @0x0000000002e34f90, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEconEntity::GetServerClass(CEconEntity *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CBaseAttributableItem::YouForgotToImplementOrDeclareServerClass  (line 64, @0x0000000002e308a0, libserver.so)
int __fastcall CBaseAttributableItem::YouForgotToImplementOrDeclareServerClass(CBaseAttributableItem *const this)
{
  return 0;
}


// CBaseAttributableItem::GetServerClass  (line 64, @0x0000000002e35010, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBaseAttributableItem::GetServerClass(CBaseAttributableItem *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CEconEntity::GetDataDescMap  (line 91, @0x0000000002e308b0, libserver.so)
// globals: CEconEntity::m_DataMap
datamap_t *__fastcall CEconEntity::GetDataDescMap(CEconEntity *const this)
{
  return &CEconEntity::m_DataMap;
}


// CEconEntity::AddDatadescMetadataKeys  (line 91, @0x0000000002e390f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEconEntity::GetEntityClass(void)
void __fastcall CEconEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEconEntity::GetEntityClass);
}


// CEconEntity::GetBaseMap  (line 91, @0x0000000002e39110, libserver.so)
datamap_t *__cdecl CEconEntity::GetBaseMap()
{
  return &CBaseFlex::m_DataMap;
}


// DataMapInit<CEconEntity>  (line 91, @0x0000000002e39120, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: __static_initialization_and_destruction_0
// strings: "CEconEntity"
// globals: `guard variable for'DataMapInit<CEconEntity>(CEconEntity *)::nameHolder, CEconEntity::GetEntityClass(void), CEconEntity::m_DataMap, DataMapInit<CEconEntity>(CEconEntity *)::dataDesc, DataMapInit<CEconEntity>(CEconEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEconEntity>(CEconEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEconEntity>(CEconEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEconEntity>(CEconEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CEconEntity>(CEconEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEconEntity>(CEconEntity *)::nameHolder.m_pszBase = "CEconEntity";
    DataMapInit<CEconEntity>(CEconEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEconEntity>(CEconEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEconEntity>(CEconEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEconEntity>(CEconEntity *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEconEntity>(CEconEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEconEntity>(CEconEntity *)::nameHolder,
      &_dso_handle);
  }
  CEconEntity::m_DataMap.dataNumFields = 1;
  CEconEntity::m_DataMap.baseMap = &CBaseFlex::m_DataMap;
  CEconEntity::m_DataMap.dataDesc = DataMapInit<CEconEntity>(CEconEntity *)::dataDesc;
  AddDatadescMetadataKeys(&CEconEntity::m_DataMap, CEconEntity::GetEntityClass);
  return &CEconEntity::m_DataMap;
}


// CBaseAttributableItem::GetDataDescMap  (line 105, @0x0000000002e308c0, libserver.so)
// globals: CBaseAttributableItem::m_DataMap
datamap_t *__fastcall CBaseAttributableItem::GetDataDescMap(CBaseAttributableItem *const this)
{
  return &CBaseAttributableItem::m_DataMap;
}


// CBaseAttributableItem::AddDatadescMetadataKeys  (line 105, @0x0000000002e391f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseAttributableItem::GetEntityClass(void)
void __fastcall CBaseAttributableItem::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseAttributableItem::GetEntityClass);
}


// CBaseAttributableItem::GetBaseMap  (line 105, @0x0000000002e39210, libserver.so)
// globals: CEconEntity::m_DataMap
datamap_t *__cdecl CBaseAttributableItem::GetBaseMap()
{
  return &CEconEntity::m_DataMap;
}


// DataMapInit<CBaseAttributableItem>  (line 105, @0x0000000002e39220, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: __static_initialization_and_destruction_0
// strings: "CBaseAttributableItem"
// globals: `guard variable for'DataMapInit<CBaseAttributableItem>(CBaseAttributableItem *)::nameHolder, CEconEntity::m_DataMap, CBaseAttributableItem::GetEntityClass(void), DataMapInit<CBaseAttributableItem>(CBaseAttributableItem *)::dataDesc, CBaseAttributableItem::m_DataMap, DataMapInit<CBaseAttributableItem>(CBaseAttributableItem *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseAttributableItem>(CBaseAttributableItem *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseAttributableItem>(CBaseAttributableItem *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseAttributableItem>(CBaseAttributableItem *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseAttributableItem>(CBaseAttributableItem *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseAttributableItem>(CBaseAttributableItem *)::nameHolder.m_pszBase = "CBaseAttributableItem";
    DataMapInit<CBaseAttributableItem>(CBaseAttributableItem *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseAttributableItem>(CBaseAttributableItem *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseAttributableItem>(CBaseAttributableItem *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseAttributableItem>(CBaseAttributableItem *)::nameHolder.m_nLenBase = 21;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseAttributableItem>(CBaseAttributableItem *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseAttributableItem>(CBaseAttributableItem *)::nameHolder,
      &_dso_handle);
  }
  CBaseAttributableItem::m_DataMap.dataNumFields = 1;
  CBaseAttributableItem::m_DataMap.baseMap = &CEconEntity::m_DataMap;
  CBaseAttributableItem::m_DataMap.dataDesc = DataMapInit<CBaseAttributableItem>(CBaseAttributableItem *)::dataDesc;
  AddDatadescMetadataKeys(&CBaseAttributableItem::m_DataMap, CBaseAttributableItem::GetEntityClass);
  return &CBaseAttributableItem::m_DataMap;
}


// CEconEntity::CEconEntity  (line 158, @0x0000000002e3c460, libserver.so)  // inlines: CAttributeContainer, CEntityHandle, CHandle, NetworkVar_m_AttributeManager, NetworkVar_m_Item
// calls: CBaseFlex::CBaseFlex, CAttributeManager::CAttributeManager, CEconItemView::CEconItemView, CAttributeManager::~CAttributeManager, CBaseFlex::~CBaseFlex, _Unwind_Resume
// callers: CEconEntity::CEntityInstanceEntityClass::ConstructInstance, CBaseAttributableItem::CBaseAttributableItem, CBaseAttributableItem::CEntityInstanceEntityClass::ConstructInstance, CTFWearableItem::CEntityInstanceEntityClass::ConstructInstance, CEconWearable::CEconWearable, CTFWearableItem::CTFWearableItem
void __fastcall CEconEntity::CEconEntity(CEconEntity *const this)
{
  CEconEntity::NetworkVar_m_AttributeManager *p_m_AttributeManager; // r12

  p_m_AttributeManager = &this->m_AttributeManager;
  CBaseFlex::CBaseFlex(this);
  this->_vptr_IHandleEntity = &off_47A27D0;
  this->_vptr_IHasAttributes = off_47A3058;
  CAttributeManager::CAttributeManager(p_m_AttributeManager);
  this->m_AttributeManager._vptr_CAttributeManager = &off_479F550;
  CEconItemView::CEconItemView(&this->m_AttributeManager.m_Item);
  this->m_hOldProvidee.m_Index = -1;
  this->m_AttributeManager.m_Item._vptr_IEconItemInterface = &off_479F2B0;
  this->m_AttributeManager._vptr_CAttributeManager = &off_479F3D0;
  this->m_iOldOwnerClass = 0;
}


// CEconEntity::~CEconEntity  (line 178, @0x0000000002e33c90, libserver.so)  // inlines: Purge, RemoveAll, ~CAttributeContainer, ~CAttributeManager, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NetworkVar_m_AttributeManager, ~NetworkVar_m_Item
// calls: CEconItemView::~CEconItemView, CBaseFlex::~CBaseFlex, CUtlMemory<CAttributeManager::cached_attribute_float_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
// callers: CDOTA_Tiny_ScepterTree::~CDOTA_Tiny_ScepterTree, CTFWearableItem::~CTFWearableItem
void __fastcall CEconEntity::~CEconEntity(CEconEntity *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_47A27D0;
  this->_vptr_IHasAttributes = off_47A3058;
  this->m_AttributeManager._vptr_CAttributeManager = &off_479F550;
  this->m_AttributeManager.m_Item._vptr_IEconItemInterface = &off_479F2B0;
  CEconItemView::~CEconItemView(&this->m_AttributeManager.m_Item);
  v2 = (this->m_AttributeManager.m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager._vptr_CAttributeManager = off_479F4D0;
  this->m_AttributeManager.m_CachedResults.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_AttributeManager.m_CachedResults.m_Memory);
    if ( (this->m_AttributeManager.m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_AttributeManager.m_CachedResults.m_Memory);
  }
  v2 = (this->m_AttributeManager.m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager.m_Receivers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Receivers.m_Memory);
    if ( (this->m_AttributeManager.m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Receivers.m_Memory);
  }
  v2 = (this->m_AttributeManager.m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager.m_Providers.m_Size = 0;
  if ( !v2
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Providers.m_Memory),
        (this->m_AttributeManager.m_Providers.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseFlex::~CBaseFlex(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Providers.m_Memory);
    CBaseFlex::~CBaseFlex(this);
  }
}


// CEconEntity::~CEconEntity  (line 178, @0x0000000002e33dd0, libserver.so)  // inlines: Purge, RemoveAll, ~CAttributeContainer, ~CAttributeManager, ~CEconEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NetworkVar_m_AttributeManager, ~NetworkVar_m_Item
// calls: CEconItemView::~CEconItemView, CBaseFlex::~CBaseFlex, CBaseEntity::operator delete, CUtlMemory<CAttributeManager::cached_attribute_float_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CEconEntity::~CEconEntity(CEconEntity *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_47A27D0;
  this->_vptr_IHasAttributes = off_47A3058;
  this->m_AttributeManager._vptr_CAttributeManager = &off_479F550;
  this->m_AttributeManager.m_Item._vptr_IEconItemInterface = &off_479F2B0;
  CEconItemView::~CEconItemView(&this->m_AttributeManager.m_Item);
  v2 = (this->m_AttributeManager.m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager._vptr_CAttributeManager = off_479F4D0;
  this->m_AttributeManager.m_CachedResults.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_AttributeManager.m_CachedResults.m_Memory);
    if ( (this->m_AttributeManager.m_CachedResults.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAttributeManager::cached_attribute_float_t,int>::Purge(&this->m_AttributeManager.m_CachedResults.m_Memory);
  }
  v2 = (this->m_AttributeManager.m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager.m_Receivers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Receivers.m_Memory);
    if ( (this->m_AttributeManager.m_Receivers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Receivers.m_Memory);
  }
  v2 = (this->m_AttributeManager.m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AttributeManager.m_Providers.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Providers.m_Memory);
    if ( (this->m_AttributeManager.m_Providers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AttributeManager.m_Providers.m_Memory);
  }
  CBaseFlex::~CBaseFlex(this);
  CBaseEntity::operator delete(this);
}


// CEconEntity::OnNewModel  (line 189, @0x0000000002e4dc60, libserver.so)  // inlines: CWeakHandle, Init
// calls: CBaseFlex::OnNewModel
// callers: CEconWearable::OnNewModel
void __fastcall CEconEntity::OnNewModel(CEconEntity *const this, HModel hOldModel, HModel hNewModel)
{
  HModel hOldModela; // [rsp+0h] [rbp-20h] BYREF
  HModel hNewModela; // [rsp+10h] [rbp-10h] BYREF

  hNewModela.m_pBinding = hNewModel.m_pBinding->m_pData;
  hOldModela.m_pBinding = hOldModel.m_pBinding->m_pData;
  CBaseFlex::OnNewModel(this, &hOldModela, &hNewModela);
}


// CEconEntity::AddedToEntityDatabase  (line 217, @0x0000000002e30d00, libserver.so)
// calls: CBaseAnimating::AddedToEntityDatabase
void __fastcall CEconEntity::AddedToEntityDatabase(CEconEntity *const this)
{
  CBaseAnimating::AddedToEntityDatabase(this);
}


// CEconEntity::InitializeAttributes  (line 229, @0x0000000002e392f0, libserver.so)  // inlines: NetworkStateChanged, Set, SetProviderType, operator=<attributeprovidertypes_t>
// callers: CEconWearable::Spawn
void __fastcall CEconEntity::InitializeAttributes(CEconEntity *const this)
{
  CEconEntity::NetworkVar_m_AttributeManager *p_m_AttributeManager; // r12

  p_m_AttributeManager = &this->m_AttributeManager;
  (*(this->m_AttributeManager._vptr_CAttributeManager + 7))(&this->m_AttributeManager, this);
  if ( this->m_AttributeManager.m_ProviderType.m_Value != attributeprovidertypes_t::PROVIDER_WEAPON )
  {
    (*(this->m_AttributeManager._vptr_CAttributeManager + 3))(p_m_AttributeManager, 68, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_AttributeManager.m_ProviderType.m_Value = attributeprovidertypes_t::PROVIDER_WEAPON;
  }
}


// CEconEntity::DebugDescribe  (line 243, @0x0000000002e3bb30, libserver.so)
// calls: Msg, EconQuality_GetQualityString, __stack_chk_fail
// strings: "============================================\n", "[unknown]", "%s \"%s\" (level %d)\n", "\n============================================\n"
void __fastcall CEconEntity::DebugDescribe(CEconEntity *const this)
{
  __int64 v1; // rax
  __int64 v2; // r13
  __int64 v3; // rbx
  const char *QualityString; // r12
  int v5; // eax
  const char *v6; // rsi
  char tempstr[1032]; // [rsp+0h] [rbp-430h] BYREF
  unsigned __int64 v8; // [rsp+408h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  v1 = (*(this->_vptr_IHandleEntity + 265))(this);
  v2 = v1 + 104;
  v3 = v1;
  Msg("============================================\n");
  QualityString = EconQuality_GetQualityString(*(v3 + 116));
  v5 = (*(*(v3 + 104) + 160LL))(v2);
  v6 = "[unknown]";
  if ( QualityString != 0 )
    v6 = QualityString;
  Msg("%s \"%s\" (level %d)\n", v6, tempstr, v5);
  Msg("%s", tempstr);
  Msg("\n============================================\n");
}


// CEconEntity::UpdateOnRemove  (line 260, @0x0000000002e30d10, libserver.so)
// calls: CBaseAnimating::UpdateOnRemove
// callers: CDOTAWearableItem::UpdateOnRemove
void __fastcall CEconEntity::UpdateOnRemove(CEconEntity *const this)
{
  (*(this->_vptr_IHandleEntity + 40))(this, 0);
  (*(this->_vptr_IHandleEntity + 268))(this);
  CBaseAnimating::UpdateOnRemove(this);
}


// CEconEntity::ReapplyProvision  (line 277, @0x0000000002e42df0, libserver.so)  // inlines: CEntityHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, Set, operator CEntityInstance*, operator=
// calls: CAttributeManager::ProvideTo, CAttributeManager::StopProvidingTo
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEconEntity::ReapplyProvision(CEconEntity *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  CBaseEntity *m_pInstance; // r12
  uint32 v5; // eax
  unsigned __int64 m_Index_low; // rcx
  CEntityIdentity *v7; // rdx
  __int64 v8; // rsi
  CEntityIdentity *v9; // rdx
  uint32 m_Index; // eax
  CConcreteEntityList *v11; // rsi
  CEntityIdentity *v12; // rdx
  unsigned __int64 v13; // rcx
  CAttributeManager *v14; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  CBaseEntity *v18; // r13
  CAttributeManager *v19; // rax

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  m_pInstance = 0;
  v5 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  m_Index_low = g_pEntitySystem;
  if ( v5 + 2 > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v7 != 0 )
    {
      v8 = v3 & 0x1FF;
      m_Index_low = 8 * v8;
      v9 = &v7[v8];
      if ( v9 != 0 && v5 == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  m_Index = this->m_hOldProvidee.m_Index;
  v11 = CEntityHandle::gm_pEntityList;
  v12 = (m_Index + 2);
  if ( v12 > 1
    && (m_Index_low = LOWORD(this->m_hOldProvidee.m_Index),
        (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0)
    && (v13 = m_Index_low & 0x1FF, v11 = (8 * v13), m_Index_low = 120 * v13, (v12 = (v12 + m_Index_low)) != 0)
    && m_Index == v12->m_EHandle.m_Index )
  {
    v18 = v12->m_pInstance;
    if ( m_pInstance == v12->m_pInstance )
      return;
    if ( v18 != 0 )
    {
      v19 = (*(this->_vptr_IHandleEntity + 264))(this);
      CAttributeManager::StopProvidingTo(v19, v18);
    }
    if ( m_pInstance == 0 )
    {
LABEL_23:
      this->m_hOldProvidee.m_Index = -1;
      return;
    }
  }
  else if ( m_pInstance == 0 )
  {
    return;
  }
  v14 = (*(this->_vptr_IHandleEntity + 264))(this, v11, v12, m_Index_low);
  CAttributeManager::ProvideTo(v14, m_pInstance);
  m_pEntity = m_pInstance->m_pEntity;
  if ( m_pEntity == 0 )
    goto LABEL_23;
  v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index == -1 )
    v17 = 0x7FFF;
  else
    v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  LOWORD(this->m_hOldProvidee.m_Index) = v17 | this->m_hOldProvidee.m_Index & 0x8000;
  this->m_hOldProvidee.m_Index = (v16 << 15) | this->m_hOldProvidee.m_Index & 0x7FFF;
}


// CEconEntity::TranslateViewmodelHandActivity  (line 305, @0x0000000002e39350, libserver.so)
// calls: CEconItemView::GetStaticData
Activity __fastcall CEconEntity::TranslateViewmodelHandActivity(CEconEntity *const this, Activity actBase)
{
  __int64 v4; // rax
  const GameItemDefinition_t *StaticData; // rax

  v4 = (*(this->_vptr_IHandleEntity + 265))(this);
  if ( v4 != -104
    && *(v4 + 152) != 0
    && (StaticData = CEconItemView::GetStaticData((v4 + 104))) != 0
    && (*(&StaticData->CEconItemDefinition + 274) & 0x10) != 0 )
  {
    return (*(this->_vptr_IHandleEntity + 270))(this, actBase);
  }
  else
  {
    return actBase;
  }
}


// CEconEntity::GetItem  (line 320, @0x0000000002e393b0, libserver.so)
// callers: CDOTA_BaseNPC::FindWearableItemForSlotType, CDOTA_BaseNPC::ComputeGeneratingItem, CDOTA_Modifier_MudGolem_RockDestroy::OnDeath, CDOTAGCServerSystem::WriteMatchMetadataTeamPlayer, CDOTA_Unit_Courier::AddCourierWearables, CEconEntity::GetItemName, CEconWearable::SelectAutoStyle, CEconWearable::SetStyleOverride
CEconItemView *__fastcall CEconEntity::GetItem(CEconEntity *const this)
{
  if ( (*(this->_vptr_IHandleEntity + 265))(this) != 0 )
    return ((*(this->_vptr_IHandleEntity + 265))(this) + 104);
  else
    return 0;
}


// CEconEntity::GetItemName  (line 328, @0x0000000002e393f0, libserver.so)  // inlines: GetDefinitionName, GetWithNull, String
// calls: CEconEntity::GetItem
// strings: "<unknown item>", "<null>"
const char *__fastcall CEconEntity::GetItemName(CEconEntity *const this)
{
  CEconItemView *Item; // rdi
  const char *result; // rax
  __int64 v3; // rax
  bool v4; // zf

  Item = CEconEntity::GetItem(this);
  result = "<unknown item>";
  if ( Item != 0 )
  {
    v3 = (*(Item->_vptr_IEconItemInterface + 12))(Item);
    v4 = *(v3 + 256) == 0;
    if ( *(v3 + 256) != 0 )
    {
      result = *(v3 + 256);
      if ( v4 )
        return "<null>";
    }
    else
    {
      return "<null>";
    }
  }
  return result;
}


// CEconEntity::ShowAmbientParticles  (line 343, @0x0000000002e39440, libserver.so)
// callers: CDOTA_BaseNPC::ShowAmbientParticles
void __fastcall CEconEntity::ShowAmbientParticles(CEconEntity *const this)
{
  ;
}


// CEconEntity::HideAmbientParticles  (line 353, @0x0000000002e39450, libserver.so)
// callers: CDOTA_BaseNPC::HideAmbientParticles
void __fastcall CEconEntity::HideAmbientParticles(CEconEntity *const this)
{
  ;
}


// CEconEntity::OnOwnerClassChange  (line 368, @0x0000000002e39460, libserver.so)
void __fastcall CEconEntity::OnOwnerClassChange(CEconEntity *const this)
{
  ;
}


// CEconEntity::CalculateVisibleClassFor  (line 383, @0x0000000002e308d0, libserver.so)
int __fastcall CEconEntity::CalculateVisibleClassFor(CEconEntity *const this, CBaseCombatCharacter *pPlayer)
{
  return 0;
}


// CEconEntity::UpdateModelToClass  (line 396, @0x0000000002e39470, libserver.so)
// callers: CEconWearable::Equip
void __fastcall CEconEntity::UpdateModelToClass(CEconEntity *const this)
{
  ;
}


// CEconEntity::HasCustomParticleSystems  (line 1404, @0x0000000002e39480, libserver.so)
// calls: CEconItemView::HasAttachedParticles
bool __fastcall CEconEntity::HasCustomParticleSystems(CEconEntity *const this)
{
  return CEconItemView::HasAttachedParticles(&this->m_AttributeManager.m_Item);
}


// CEconEntity::UpdateBodygroups  (line 1412, @0x0000000002e308e0, libserver.so)
bool __fastcall CEconEntity::UpdateBodygroups(CEconEntity *const this, CBaseCombatCharacter *pOwner, int iState)
{
  return 0;
}


// CBaseAttributableItem::CBaseAttributableItem  (line 1420, @0x0000000002e3c510, libserver.so)
// calls: CEconEntity::CEconEntity
void __fastcall CBaseAttributableItem::CBaseAttributableItem(CBaseAttributableItem *const this)
{
  CEconEntity::CEconEntity(this);
  this->_vptr_IHandleEntity = &off_47A30B0;
  this->_vptr_IHasAttributes = &off_47A3938;
}


