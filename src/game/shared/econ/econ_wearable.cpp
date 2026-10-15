// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_wearable.cpp:27
class C_CEconWearable_MapInstall {
	C_CEconWearable_MapInstall();

	// sizeof = 1
};

// src/game/shared/econ/econ_wearable.cpp:41
class C_CTFWearableItem_MapInstall {
	C_CTFWearableItem_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEconWearable::YouForgotToImplementOrDeclareServerClass  (line 27, @0x0000000002e695c0, libserver.so)
int __fastcall CEconWearable::YouForgotToImplementOrDeclareServerClass(CEconWearable *const this)
{
  return 0;
}


// CEconWearable::GetServerClass  (line 27, @0x0000000002e6c390, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEconWearable::GetServerClass(CEconWearable *const this)
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


// CEconWearable::GetDataDescMap  (line 35, @0x0000000002e695d0, libserver.so)
// globals: CEconWearable::m_DataMap
datamap_t *__fastcall CEconWearable::GetDataDescMap(CEconWearable *const this)
{
  return &CEconWearable::m_DataMap;
}


// CEconWearable::AddDatadescMetadataKeys  (line 35, @0x0000000002e71550, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEconWearable::GetEntityClass(void)
void __fastcall CEconWearable::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEconWearable::GetEntityClass);
}


// CEconWearable::GetBaseMap  (line 35, @0x0000000002e71570, libserver.so)
datamap_t *__cdecl CEconWearable::GetBaseMap()
{
  return &CEconEntity::m_DataMap;
}


// DataMapInit<CEconWearable>  (line 35, @0x0000000002e71580, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_economy_02.cpp
// strings: "CEconWearable"
// globals: `guard variable for'DataMapInit<CEconWearable>(CEconWearable *)::nameHolder, CEconWearable::GetEntityClass(void), CEconWearable::m_DataMap, DataMapInit<CEconWearable>(CEconWearable *)::dataDesc, DataMapInit<CEconWearable>(CEconWearable *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEconWearable>(CEconWearable *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEconWearable>(CEconWearable *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEconWearable>(CEconWearable *)::nameHolder) != 0 )
  {
    DataMapInit<CEconWearable>(CEconWearable *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEconWearable>(CEconWearable *)::nameHolder.m_pszBase = "CEconWearable";
    DataMapInit<CEconWearable>(CEconWearable *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEconWearable>(CEconWearable *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEconWearable>(CEconWearable *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEconWearable>(CEconWearable *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEconWearable>(CEconWearable *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEconWearable>(CEconWearable *)::nameHolder,
      &_dso_handle);
  }
  CEconWearable::m_DataMap.dataNumFields = 1;
  CEconWearable::m_DataMap.baseMap = &CEconEntity::m_DataMap;
  CEconWearable::m_DataMap.dataDesc = DataMapInit<CEconWearable>(CEconWearable *)::dataDesc;
  AddDatadescMetadataKeys(&CEconWearable::m_DataMap, CEconWearable::GetEntityClass);
  return &CEconWearable::m_DataMap;
}


// InitManifestDesc<wearable_item_server::CTemplateArg>  (line 39, @0x0000000002e71650, libserver.so)  // inlines: ResourceManifestEntry_t
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: _GLOBAL__sub_I__unity_economy_02.cpp
// strings: "wearable_item.ventr"
// globals: `guard variable for'InitManifestDesc<wearable_item_server::CTemplateArg>(wearable_item_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<wearable_item_server::CTemplateArg>(wearable_item_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<wearable_item_server::CTemplateArg>(wearable_item_server::CTemplateArg &)::s_Manifest, _ZGRZ16InitManifestDescIN20wearable_item_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1, _ZGRZ16InitManifestDescIN20wearable_item_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0
ResourceManifestDesc_t *__fastcall InitManifestDesc<wearable_item_server::CTemplateArg>(
        wearable_item_server::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<wearable_item_server::CTemplateArg>(wearable_item_server::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<wearable_item_server::CTemplateArg>(wearable_item_server::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    byte_4D5D1E8 = 0;
    ZGRZ16InitManifestDescIN20wearable_item_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1 = "wearable_item.ventr";
    ZGRZ16InitManifestDescIN20wearable_item_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0 = &ZGRZ16InitManifestDescIN20wearable_item_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1;
    qword_4D5D1F0 = 0;
    InitManifestDesc<wearable_item_server::CTemplateArg>(wearable_item_server::CTemplateArg &)::s_pManifestEntries._M_array = &ZGRZ16InitManifestDescIN20wearable_item_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0;
    qword_4D5D1F8 = 0;
    dword_4D5D200 = 0;
    qword_4D5D218 = 1;
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<wearable_item_server::CTemplateArg>(wearable_item_server::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<wearable_item_server::CTemplateArg>(wearable_item_server::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<wearable_item_server::CTemplateArg>(wearable_item_server::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<wearable_item_server::CTemplateArg>(wearable_item_server::CTemplateArg &)::s_Manifest;
}


// CTFWearableItem::YouForgotToImplementOrDeclareServerClass  (line 41, @0x0000000002e695e0, libserver.so)
int __fastcall CTFWearableItem::YouForgotToImplementOrDeclareServerClass(CTFWearableItem *const this)
{
  return 0;
}


// CTFWearableItem::GetServerClass  (line 41, @0x0000000002e6c3d0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CTFWearableItem::GetServerClass(CTFWearableItem *const this)
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


// CTFWearableItem::GetDataDescMap  (line 49, @0x0000000002e695f0, libserver.so)
// globals: CTFWearableItem::m_DataMap
datamap_t *__fastcall CTFWearableItem::GetDataDescMap(CTFWearableItem *const this)
{
  return &CTFWearableItem::m_DataMap;
}


// CTFWearableItem::AddDatadescMetadataKeys  (line 49, @0x0000000002e71700, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTFWearableItem::GetEntityClass(void)
void __fastcall CTFWearableItem::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTFWearableItem::GetEntityClass);
}


// CTFWearableItem::GetBaseMap  (line 49, @0x0000000002e71720, libserver.so)
// globals: CEconWearable::m_DataMap
datamap_t *__cdecl CTFWearableItem::GetBaseMap()
{
  return &CEconWearable::m_DataMap;
}


// DataMapInit<CTFWearableItem>  (line 49, @0x0000000002e71730, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_economy_02.cpp
// strings: "CTFWearableItem"
// globals: `guard variable for'DataMapInit<CTFWearableItem>(CTFWearableItem *)::nameHolder, CEconWearable::m_DataMap, CTFWearableItem::GetEntityClass(void), DataMapInit<CTFWearableItem>(CTFWearableItem *)::dataDesc, CTFWearableItem::m_DataMap, DataMapInit<CTFWearableItem>(CTFWearableItem *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTFWearableItem>(CTFWearableItem *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTFWearableItem>(CTFWearableItem *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTFWearableItem>(CTFWearableItem *)::nameHolder) != 0 )
  {
    DataMapInit<CTFWearableItem>(CTFWearableItem *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTFWearableItem>(CTFWearableItem *)::nameHolder.m_pszBase = "CTFWearableItem";
    DataMapInit<CTFWearableItem>(CTFWearableItem *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTFWearableItem>(CTFWearableItem *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTFWearableItem>(CTFWearableItem *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTFWearableItem>(CTFWearableItem *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTFWearableItem>(CTFWearableItem *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTFWearableItem>(CTFWearableItem *)::nameHolder,
      &_dso_handle);
  }
  CTFWearableItem::m_DataMap.dataNumFields = 1;
  CTFWearableItem::m_DataMap.baseMap = &CEconWearable::m_DataMap;
  CTFWearableItem::m_DataMap.dataDesc = DataMapInit<CTFWearableItem>(CTFWearableItem *)::dataDesc;
  AddDatadescMetadataKeys(&CTFWearableItem::m_DataMap, CTFWearableItem::GetEntityClass);
  return &CTFWearableItem::m_DataMap;
}


// CEconWearable::CEconWearable  (line 57, @0x0000000002e71800, libserver.so)
// calls: CEconEntity::CEconEntity
// callers: CEconWearable::CEntityInstanceEntityClass::ConstructInstance, CDOTAWearableItem::CDOTAWearableItem
void __fastcall CEconWearable::CEconWearable(CEconWearable *const this)
{
  CEconEntity::CEconEntity(this);
  this->m_bAlwaysAllow = 0;
  this->_vptr_IHandleEntity = &off_47A96B0;
  this->_vptr_IHasAttributes = &off_47A9F78;
}


// CEconWearable::Precache  (line 63, @0x0000000002e99f70, libserver.so)  // inlines: AssignTo<long long unsigned int>, Base, CopyFrom, Element, FindKeyHash, GetPtrValue, GetValue, GetValue<long long unsigned int>, Precache, SetItem, VariantFieldTypeName, operator[]
// calls: CEntityInstance::Precache, CEconItemView::GetStaticData, CEconItemView::operator=, Warning
// strings: "cstring", "uint64", "No free conversion of %s variant to %s right now\n", "js_raw_args", "variant", "resourcehandle" (20 total)
// globals: jpt_2E9A04E, CEntityKeyValues::sm_EmptyVariant, jpt_2E9A083
void __fastcall CEconWearable::Precache(CEconWearable *const this, const CEntityPrecacheContext *pContext)
{
  const CEntityKeyValues *m_pKeyValues; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::lambda::lambda v5; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // r8
  __int64 v7; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v9; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  unsigned __int64 m_int; // r13
  const GameItemDefinition_t *StaticData; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r12
  const char *v17; // rsi
  double m_float64; // xmm0_8
  float m_float; // xmm0_4

  CEntityInstance::Precache(this, pContext);
  m_pKeyValues = pContext->m_pKeyValues;
  v5 = pContext->m_pKeyValues->m_keyHashes.0;
  if ( *&v5 <= 0 )
  {
LABEL_20:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type != 0 )
      goto LABEL_12;
    return;
  }
  m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
  v7 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v7) == 1087599987 )
      goto LABEL_9;
LABEL_6:
    if ( *&v5 <= ++v7 )
      goto LABEL_20;
  }
  m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v7] != 1087599987 )
    goto LABEL_6;
LABEL_9:
  if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
    v9 = m_pKeyValues->m_keyValues.m_pElements;
  else
    v9 = 0;
  p_m_value = &v9[v7].m_value;
  m_type = p_m_value->m_type;
  if ( m_type == 0 )
    return;
LABEL_12:
  if ( m_type != 33 )
  {
    switch ( m_type )
    {
      case 3:
      case 25:
        switch ( m_type )
        {
          case 3:
            v17 = "vector";
            break;
          case 25:
            v17 = "vector2d";
            break;
        }
        break;
      case 27:
        v17 = "vector4d";
        break;
      case 39:
        v17 = "qangle";
        break;
      case 4:
        v17 = "quaternion";
        break;
      case 30:
        v17 = "cstring";
        break;
      default:
        switch ( m_type )
        {
          case 1:
            m_float = p_m_value->m_float;
            if ( p_m_value->m_float >= 9.223372e18 )
              m_int = (m_float - 9.223372e18) ^ 0x8000000000000000LL;
            else
              m_int = m_float;
            goto LABEL_24;
          case 5:
            m_int = p_m_value->m_int;
            goto LABEL_24;
          case 6:
            m_int = p_m_value->m_char;
            goto LABEL_24;
          case 8:
            m_int = p_m_value->m_char;
            goto LABEL_24;
          case 26:
            goto LABEL_23;
          case 34:
            m_float64 = p_m_value->m_float64;
            if ( p_m_value->m_float64 >= 9.223372036854776e18 )
              m_int = (m_float64 - 9.223372036854776e18) ^ 0x8000000000000000LL;
            else
              m_int = m_float64;
            goto LABEL_24;
          case 37:
            m_int = p_m_value->m_uint;
            goto LABEL_24;
          default:
            return;
        }
    }
    Warning("No free conversion of %s variant to %s right now\n", v17, "uint64");
    return;
  }
LABEL_23:
  m_int = p_m_value->m_uint64;
LABEL_24:
  if ( m_int != 0 && *(m_int + 48) != 0 )
  {
    StaticData = CEconItemView::GetStaticData(m_int);
    if ( StaticData != 0 )
      (*(StaticData->_vptr_IEconItemDefinition + 25))(StaticData, pContext);
    v14 = (*(this->_vptr_IHandleEntity + 265))(this);
    v15 = v14 + 104;
    v16 = v14;
    CEconItemView::operator=((v14 + 104), m_int);
    (*(*(v16 + 104) + 240LL))(v15);
  }
}


// CEconWearable::Spawn  (line 83, @0x0000000002e99e30, libserver.so)  // inlines: RemoveEFlags, SetCollisionGroup
// calls: CEconEntity::InitializeAttributes, CBaseAnimating::Spawn, CCollisionProperty::UpdateLocateHandle, CCollisionProperty::SetCollisionGroup, CBaseEntity::SetBlocksLOS, CEconItemView::GetPlayerDisplayModel, CBaseModelEntity::SetModel
// callers: CDOTAWearableItem::Spawn
void __fastcall CEconWearable::Spawn(CEconWearable *const this, const CEntityKeyValues *pKeyValues)
{
  __int64 v4; // rax
  const CEconItemView *v5; // r13
  CCollisionProperty *m_pCollision; // rdi
  const char *PlayerDisplayModel; // rax

  CEconEntity::InitializeAttributes(this);
  v4 = (*(this->_vptr_IHandleEntity + 265))(this);
  v5 = (v4 + 104);
  if ( v4 != -104 && *(v4 + 152) != 0 && CEconItemView::GetPlayerDisplayModel((v4 + 104), 0) != 0 )
  {
    PlayerDisplayModel = CEconItemView::GetPlayerDisplayModel(v5, 0);
    CBaseModelEntity::SetModel(this, PlayerDisplayModel);
  }
  CBaseAnimating::Spawn(this, pKeyValues);
  m_pCollision = this->m_pCollision;
  this->m_iEFlags &= ~0x40000u;
  if ( m_pCollision != 0 )
    CCollisionProperty::UpdateLocateHandle(m_pCollision);
  CCollisionProperty::SetCollisionGroup(&this->m_Collision, 14);
  CBaseEntity::SetBlocksLOS(this, 0);
}


// CEconWearable::OnNewModel  (line 120, @0x0000000002e69c30, libserver.so)  // inlines: CWeakHandle, Init, RemoveEFlags
// calls: CEconEntity::OnNewModel, CCollisionProperty::UpdateLocateHandle
void __fastcall CEconWearable::OnNewModel(CEconWearable *const this, HModel hOldModel, HModel hNewModel)
{
  CCollisionProperty *m_pCollision; // rdi
  HModel hOldModela; // [rsp+0h] [rbp-30h] BYREF
  HModel hNewModela; // [rsp+10h] [rbp-20h] BYREF

  hNewModela.m_pBinding = hNewModel.m_pBinding->m_pData;
  hOldModela.m_pBinding = hOldModel.m_pBinding->m_pData;
  CEconEntity::OnNewModel(this, &hOldModela, &hNewModela);
  m_pCollision = this->m_pCollision;
  this->m_iEFlags &= ~0x40000u;
  if ( m_pCollision != 0 )
    CCollisionProperty::UpdateLocateHandle(m_pCollision);
}


// CEconWearable::GiveTo  (line 145, @0x0000000002e69c80, libserver.so)  // inlines: ToBaseCombatCharacter
// calls: CEntityInstance::IsAuthoritative, CBaseCombatCharacter::EquipWearable
void __fastcall CEconWearable::GiveTo(CEconWearable *const this, CBaseEntity *pOther)
{
  const CEntityInstance *v3; // rax
  CBaseCombatCharacter *v4; // rbx

  if ( pOther != 0 )
  {
    v3 = (*(pOther->_vptr_IHandleEntity + 147))(pOther);
    v4 = v3;
    if ( v3 != 0 && CEntityInstance::IsAuthoritative(v3) && CEntityInstance::IsAuthoritative(this) )
      CBaseCombatCharacter::EquipWearable(v4, this);
  }
}


// CEconWearable::RemoveFrom  (line 160, @0x0000000002e69ce0, libserver.so)  // inlines: ToBaseCombatCharacter
// calls: CEntityInstance::IsAuthoritative, CBaseCombatCharacter::RemoveWearable
void __fastcall CEconWearable::RemoveFrom(CEconWearable *const this, CBaseEntity *pOther)
{
  const CEntityInstance *v3; // rax
  CBaseCombatCharacter *v4; // rbx

  if ( pOther != 0 )
  {
    v3 = (*(pOther->_vptr_IHandleEntity + 147))(pOther);
    v4 = v3;
    if ( v3 != 0 && CEntityInstance::IsAuthoritative(v3) && CEntityInstance::IsAuthoritative(this) )
      CBaseCombatCharacter::RemoveWearable(v4, this);
  }
}


// CEconWearable::Equip  (line 195, @0x0000000002e6a1c0, libserver.so)  // inlines: GetTeamNumber
// calls: CCollisionProperty::DisableTouchPersistsNotification, CBaseEntity::SetAbsVelocity, CBaseEntity::FollowEntity, CBaseAnimating::GetSkin, CBaseAnimating::SetSkin, CEconEntity::UpdateModelToClass, CEntityInstance::IsAuthoritative
// callers: CDOTAWearableItem::Equip
void __fastcall CEconWearable::Equip(CEconWearable *const this, CBaseCombatCharacter *pOwner)
{
  CUtlStringToken v4; // eax

  if ( (*(this->_vptr_IHandleEntity + 273))(this) != 0 )
  {
    CCollisionProperty::DisableTouchPersistsNotification(&this->m_Collision);
    this->m_pfnTouch.__pfn = 0;
    this->m_pfnTouch.__delta = 0;
    CBaseEntity::SetAbsVelocity(this, &vec3_origin);
    CBaseEntity::FollowEntity(this, pOwner, 1);
    (*(this->_vptr_IHandleEntity + 40))(this, pOwner);
    (*(this->_vptr_IHandleEntity + 268))(this);
    (*(this->_vptr_IHandleEntity + 70))(this, pOwner->m_iTeamNum.m_Value);
    v4.m_nHashCode = CBaseAnimating::GetSkin(this).m_nHashCode;
    CBaseAnimating::SetSkin(this, v4);
    CEconEntity::UpdateModelToClass(this);
    if ( CEntityInstance::IsAuthoritative(this) )
      (*(this->_vptr_IHandleEntity + 269))(this, pOwner, 1);
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 272))(this, pOwner);
  }
}


// CEconWearable::UnEquip  (line 228, @0x0000000002e69d40, libserver.so)
// calls: CBaseEntity::StopFollowingEntity
// callers: CDOTAWearableItem::UnEquip
void __fastcall CEconWearable::UnEquip(CEconWearable *const this, CBaseCombatCharacter *pOwner)
{
  (*(this->_vptr_IHandleEntity + 269))(this, pOwner, 0);
  CBaseEntity::StopFollowingEntity(this);
  (*(this->_vptr_IHandleEntity + 40))(this, 0);
  (*(this->_vptr_IHandleEntity + 268))(this);
}


// CEconWearable::SelectAutoStyle  (line 244, @0x0000000002e99ba0, libserver.so)
// calls: CEconEntity::GetItem, CEconItemView::SelectAutoStyle, CEconItemView::GetSkin, CBaseAnimating::SetSkin
// callers: CDOTA_BaseNPC::OnSpawnWearable, CDOTA_BaseNPC::SetAutoStyleCriteria
bool __fastcall CEconWearable::SelectAutoStyle(CEconWearable *const this, const CAutoStyleCriteria *const criteria)
{
  CEconItemView *Item; // rax
  const CEconItemView *v5; // rbx
  int Skin; // eax

  Item = CEconEntity::GetItem(this);
  v5 = Item;
  if ( Item == 0 || !CEconItemView::SelectAutoStyle(Item, criteria) )
    return 0;
  Skin = CEconItemView::GetSkin(v5);
  CBaseAnimating::SetSkin(this, Skin);
  return 1;
}


// CEconWearable::SetStyleOverride  (line 258, @0x0000000002e99c10, libserver.so)
// calls: CEconEntity::GetItem, CEconItemView::SetStyleOverride, CEconItemView::GetSkin, CBaseAnimating::SetSkin
// callers: CDOTA_BaseNPC::SetStyleOverride
bool __fastcall CEconWearable::SetStyleOverride(CEconWearable *const this, style_index_t nStyle)
{
  CEconItemView *Item; // r12
  bool v5; // al
  bool v6; // dl
  int Skin; // eax

  Item = CEconEntity::GetItem(this);
  v5 = CEconItemView::SetStyleOverride(Item, nStyle);
  v6 = 0;
  if ( v5 )
  {
    Skin = CEconItemView::GetSkin(Item);
    CBaseAnimating::SetSkin(this, Skin);
    return 1;
  }
  return v6;
}


// CEconWearable::OnWearerDeath  (line 275, @0x0000000002e69600, libserver.so)
void __fastcall CEconWearable::OnWearerDeath(CEconWearable *const this)
{
  ;
}


// CEconWearable::GetDropType  (line 285, @0x0000000002e99f40, libserver.so)
// calls: CEconItemView::GetDropType
int __fastcall CEconWearable::GetDropType(CEconWearable *const this)
{
  __int64 v1; // rax

  v1 = (*(this->_vptr_IHandleEntity + 265))(this);
  if ( v1 != 0 )
    return CEconItemView::GetDropType((v1 + 104));
  else
    return 0;
}


// CEconWearable::UpdateWearableBodyGroups  (line 301, @0x0000000002e71840, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWearable, IndexToIdentity, IsValid, LookupEntity, operator CEconWearable*, operator CEntityInstance*, operator[]
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEconWearable::UpdateWearableBodyGroups(CBaseCombatCharacter *pPlayer)
{
  __int64 v2; // r12
  int v3; // ebx
  CHandle<CEconWearable> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx

  if ( pPlayer != 0 && pPlayer->m_hMyWearables.m_Vector.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v4 = &pPlayer->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v2];
        m_Index = v4->m_Index;
        if ( v4->m_Index + 2 > 1 )
        {
          v6 = v4->m_Index;
          v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
          if ( v7 != 0 )
          {
            v8 = &v7[v6 & 0x1FF];
            if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
              break;
          }
        }
        ++v3;
        ++v2;
        if ( v3 >= pPlayer->m_hMyWearables.m_Vector.m_Size )
          return;
      }
      ++v3;
      ++v2;
      (*(v8->m_pInstance->_vptr_IHandleEntity + 269))(v8->m_pInstance, pPlayer, 1);
    }
    while ( v3 < pPlayer->m_hMyWearables.m_Vector.m_Size );
  }
}


// CTFWearableItem::CTFWearableItem  (line 329, @0x0000000002e71910, libserver.so)  // inlines: CEconWearable
// calls: CEconEntity::CEconEntity
void __fastcall CTFWearableItem::CTFWearableItem(CTFWearableItem *const this)
{
  CEconEntity::CEconEntity(this);
  this->m_bAlwaysAllow = 0;
  this->_vptr_IHandleEntity = &off_47A9FD0;
  this->_vptr_IHasAttributes = &off_47AA898;
}


// CEconWearable::OwnerModelChanged  (line 336, @0x0000000002e69610, libserver.so)
void __fastcall CEconWearable::OwnerModelChanged(CEconWearable *const this, bool bOriginalModel)
{
  ;
}


