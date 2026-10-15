// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_simple_obstruction.cpp:32
class C_CDOTA_SimpleObstruction_MapInstall {
	C_CDOTA_SimpleObstruction_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_SimpleObstruction::GetDataDescMap  (line 24, @0x00000000026540c0, libserver.so)
// globals: CDOTA_SimpleObstruction::m_DataMap
datamap_t *__fastcall CDOTA_SimpleObstruction::GetDataDescMap(CDOTA_SimpleObstruction *const this)
{
  return &CDOTA_SimpleObstruction::m_DataMap;
}


// CDOTA_SimpleObstruction::AddDatadescMetadataKeys  (line 24, @0x0000000002672d40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_SimpleObstruction::GetEntityClass(void)
void __fastcall CDOTA_SimpleObstruction::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_SimpleObstruction::GetEntityClass);
}


// CDOTA_SimpleObstruction::GetBaseMap  (line 24, @0x0000000002672d60, libserver.so)
datamap_t *__cdecl CDOTA_SimpleObstruction::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CDOTA_SimpleObstruction>  (line 24, @0x0000000002672d70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_dota_06.cpp
// strings: "CDOTA_SimpleObstruction"
// globals: `guard variable for'DataMapInit<CDOTA_SimpleObstruction>(CDOTA_SimpleObstruction *)::nameHolder, CDOTA_SimpleObstruction::GetEntityClass(void), CDOTA_SimpleObstruction::m_DataMap, DataMapInit<CDOTA_SimpleObstruction>(CDOTA_SimpleObstruction *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_SimpleObstruction>(CDOTA_SimpleObstruction *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_SimpleObstruction>(CDOTA_SimpleObstruction *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_SimpleObstruction>(CDOTA_SimpleObstruction *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_SimpleObstruction>(CDOTA_SimpleObstruction *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_SimpleObstruction>(CDOTA_SimpleObstruction *)::nameHolder.m_pszBase = "CDOTA_SimpleObstruction";
    DataMapInit<CDOTA_SimpleObstruction>(CDOTA_SimpleObstruction *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_SimpleObstruction>(CDOTA_SimpleObstruction *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_SimpleObstruction>(CDOTA_SimpleObstruction *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_SimpleObstruction>(CDOTA_SimpleObstruction *)::nameHolder.m_nLenBase = 23;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_SimpleObstruction>(CDOTA_SimpleObstruction *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_SimpleObstruction>(CDOTA_SimpleObstruction *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_SimpleObstruction::m_DataMap.dataNumFields = 3;
  CDOTA_SimpleObstruction::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CDOTA_SimpleObstruction::m_DataMap.dataDesc = &DataMapInit<CDOTA_SimpleObstruction>(CDOTA_SimpleObstruction *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDOTA_SimpleObstruction::m_DataMap, CDOTA_SimpleObstruction::GetEntityClass);
  return &CDOTA_SimpleObstruction::m_DataMap;
}


// CDOTA_SimpleObstruction::YouForgotToImplementOrDeclareServerClass  (line 32, @0x00000000026540d0, libserver.so)
int __fastcall CDOTA_SimpleObstruction::YouForgotToImplementOrDeclareServerClass(CDOTA_SimpleObstruction *const this)
{
  return 0;
}


// CDOTA_SimpleObstruction::GetServerClass  (line 32, @0x0000000002658d00, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_SimpleObstruction::GetServerClass(CDOTA_SimpleObstruction *const this)
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


// CDOTA_SimpleObstruction::CDOTA_SimpleObstruction  (line 37, @0x0000000002672e40, libserver.so)  // inlines: CNetworkVarBase, CObstructionObject, EnsureValidValue<bool>, NetworkStateChanged, Set, operator=<bool>
// calls: CBaseEntity::CBaseEntity, CBaseEntity::NetworkStateChanged, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CDOTA_SimpleObstruction::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTA_SimpleObstruction::CDOTA_SimpleObstruction(CDOTA_SimpleObstruction *const this)
{
  bool v2; // zf

  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_4177D10;
  this->m_pObstructionRecord = 0;
  this->m_nObstructionProperties = 0;
  this->_vptr_CObstructionObject = off_41783D0;
  this->m_bEnabled.m_Value = 0;
  this->m_bBlockFoW.m_Value = 0;
  CBaseEntity::NetworkStateChanged(this, 0x31Du, -1, -1);
  v2 = !this->m_bEnabled.m_Value;
  this->m_bBlockFoW.m_Value = 1;
  if ( !v2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = 0;
  }
  this->m_nOccluderIndex = 0;
  this->m_bBlockingGridNav = 0;
}


// CDOTA_SimpleObstruction::~CDOTA_SimpleObstruction  (line 48, @0x00000000026544b0, libserver.so)
// calls: C2DGridObstructionManager::RemoveObjectObstruction, CBaseEntity::~CBaseEntity, CDOTAFogOfWarSystem::GetFoW, CFoW::RemoveOccluder
// callers: CDOTA_SimpleObstruction::~CDOTA_SimpleObstruction
void __fastcall CDOTA_SimpleObstruction::~CDOTA_SimpleObstruction(CDOTA_SimpleObstruction *const this)
{
  uint32 m_nOccluderIndex; // r13d
  CFoW *FoW; // rax

  this->_vptr_IHandleEntity = &off_4177D10;
  this->_vptr_CObstructionObject = off_41783D0;
  C2DGridObstructionManager::RemoveObjectObstruction(&g_GridNav.m_ObstructionManager, &this->CObstructionObject);
  if ( this->m_nOccluderIndex != 0 && CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, 0) != 0 )
  {
    m_nOccluderIndex = this->m_nOccluderIndex;
    FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, 0);
    CFoW::RemoveOccluder(FoW, m_nOccluderIndex);
  }
  CBaseEntity::~CBaseEntity(this);
}


// CDOTA_SimpleObstruction::~CDOTA_SimpleObstruction  (line 48, @0x0000000002654550, libserver.so)
// calls: CDOTA_SimpleObstruction::~CDOTA_SimpleObstruction, CBaseEntity::operator delete
void __fastcall CDOTA_SimpleObstruction::~CDOTA_SimpleObstruction(CDOTA_SimpleObstruction *const this)
{
  CDOTA_SimpleObstruction::~CDOTA_SimpleObstruction(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_SimpleObstruction::Spawn  (line 63, @0x0000000002673470, libserver.so)  // inlines: AddObstructionProperty, AssignTo, Base, Element, FindKeyHash, GetValue, GetValue<bool>, NetworkStateChanged, Set, _V_strcmp, operator=<bool>, operator[]
// calls: CBaseEntity::Spawn, CBaseEntity::GetAbsOrigin, DOTATree_SnapLocationToGridNav, CBaseEntity::SetAbsOrigin, CDOTAFogOfWarSystem::GetFoW, CFoW::AddOccluder, CDOTA_SimpleObstruction::SetEnabled, Warning, VariantFieldTypeName
// strings: "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n"
// globals: jpt_267353B, CEntityKeyValues::sm_EmptyVariant, jpt_2673661
void __fastcall CDOTA_SimpleObstruction::Spawn(CDOTA_SimpleObstruction *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  char m_char; // r13
  ObstructionRecord_t *m_pObstructionRecord; // rdx
  int v13; // eax
  const Vector *AbsOrigin; // r13
  CFoW *FoW; // rax
  int v16; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v17; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v19; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rdx
  int v21; // r8d
  CEntityVariant *v22; // rdx
  int16 v23; // ax
  char v24; // r8
  const char *m_uint64; // rax
  bool v26; // zf
  const char *v27; // rax
  const char *v28; // rax
  Vector vTreeCenter; // [rsp+0h] [rbp-30h] BYREF

  CBaseEntity::Spawn(this, pKeyValues);
  vTreeCenter = *CBaseEntity::GetAbsOrigin(this);
  DOTATree_SnapLocationToGridNav(&vTreeCenter);
  CBaseEntity::SetAbsOrigin(this, &vTreeCenter);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; m_nCount > i; ++i )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pKeyValues->m_keyHashes.m_pElements;
        if ( m_pElements[i] == 1351787576 )
        {
LABEL_9:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v8 = pKeyValues->m_keyValues.m_pElements;
          else
            v8 = 0;
          p_m_value = &v8[i].m_value;
          m_type = p_m_value->m_type;
          if ( m_type != 0 )
            goto LABEL_12;
          goto LABEL_14;
        }
      }
      else if ( *(4 * i) == 1351787576 )
      {
        goto LABEL_9;
      }
    }
  }
  p_m_value = &CEntityKeyValues::sm_EmptyVariant;
  m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( m_type != 0 )
  {
LABEL_12:
    switch ( m_type )
    {
      case 1:
        m_char = p_m_value->m_float != 0.0;
        goto LABEL_15;
      case 5:
      case 37:
        m_char = p_m_value->m_int != 0;
        goto LABEL_15;
      case 6:
        m_char = p_m_value->m_char;
        goto LABEL_15;
      case 26:
      case 33:
        m_char = p_m_value->m_uint64 != 0;
        goto LABEL_15;
      case 30:
        if ( strcmp(p_m_value->m_pszString, "0") == 0
          || strcmp(p_m_value->m_pszString, "false") == 0
          || strcmp(p_m_value->m_pszString, "no") == 0 )
        {
          break;
        }
        if ( strcmp(p_m_value->m_pszString, "1") == 0
          || strcmp(p_m_value->m_pszString, "true") == 0
          || strcmp(p_m_value->m_pszString, "yes") == 0 )
        {
          m_char = 1;
          goto LABEL_15;
        }
        Warning("Invalid conversion : CString '%s' to bool\n", p_m_value->m_pszString);
        break;
      case 34:
        m_char = p_m_value->m_float64 != 0.0;
        goto LABEL_15;
      default:
        v28 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to bool now\n", v28);
        break;
    }
  }
LABEL_14:
  m_char = 0;
LABEL_15:
  if ( this->m_bBlockFoW.m_Value != m_char )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 797, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bBlockFoW.m_Value = m_char;
  }
  m_pObstructionRecord = this->m_pObstructionRecord;
  v13 = this->m_nObstructionProperties | 8;
  this->m_nObstructionProperties = v13;
  if ( m_pObstructionRecord != 0 )
    m_pObstructionRecord->m_ObjectProperties = v13;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, 0);
  this->m_nOccluderIndex = CFoW::AddOccluder(FoW, AbsOrigin);
  v16 = pKeyValues->m_keyHashes.m_nCount;
  if ( v16 > 0 )
  {
    v17 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( j = 0; v16 > j; ++j )
    {
      if ( v17 != 0 )
      {
        v19 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v17 > 9 )
          v19 = pKeyValues->m_keyHashes.m_pElements;
        if ( v19[j] == -1517872836 )
        {
LABEL_27:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v20 = pKeyValues->m_keyValues.m_pElements;
          else
            v20 = 0;
          LOBYTE(v21) = 1;
          v22 = &v20[j].m_value;
          v23 = v22->m_type;
          if ( v23 != 0 )
            goto LABEL_30;
          goto LABEL_32;
        }
      }
      else if ( *(4 * j) == -1517872836 )
      {
        goto LABEL_27;
      }
    }
  }
  v22 = &CEntityKeyValues::sm_EmptyVariant;
  LOBYTE(v21) = 1;
  v23 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v23 != 0 )
  {
LABEL_30:
    switch ( v23 )
    {
      case 1:
        v24 = v22->m_float != 0.0;
        goto LABEL_36;
      case 5:
      case 37:
        v24 = v22->m_int != 0;
        goto LABEL_36;
      case 6:
        v24 = v22->m_char;
        goto LABEL_36;
      case 26:
      case 33:
        v24 = v22->m_uint64 != 0;
        goto LABEL_36;
      case 30:
        m_uint64 = v22->m_uint64;
        LOBYTE(v21) = 1;
        if ( strcmp(v22->m_pszString, "0") != 0 && strcmp(m_uint64, "false") != 0 && strcmp(m_uint64, "no") != 0 )
        {
          v21 = strcmp(m_uint64, "1") != 0;
          if ( v21 != 0 )
          {
            v21 = strcmp(m_uint64, "true") != 0;
            if ( v21 != 0 )
            {
              v26 = strcmp(m_uint64, "yes") == 0;
              LOBYTE(v21) = !v26;
              if ( !v26 )
              {
                Warning("Invalid conversion : CString '%s' to bool\n", m_uint64);
                LOBYTE(v21) = 1;
              }
            }
          }
        }
        break;
      case 34:
        v24 = v22->m_float64 != 0.0;
LABEL_36:
        LOBYTE(v21) = v24 ^ 1;
        break;
      default:
        v27 = VariantFieldTypeName(v23);
        Warning("No conversion from %s to bool now\n", v27);
        LOBYTE(v21) = 1;
        break;
    }
  }
LABEL_32:
  CDOTA_SimpleObstruction::SetEnabled(this, v21, 1);
}


// CDOTA_SimpleObstruction::SetGridNavBlocked  (line 91, @0x0000000002672f10, libserver.so)
// calls: CGridNav::SetSimpleObstructionBlocked
void __fastcall CDOTA_SimpleObstruction::SetGridNavBlocked(CDOTA_SimpleObstruction *const this, bool bBlocked)
{
  if ( this->m_bBlockingGridNav != bBlocked )
  {
    CGridNav::SetSimpleObstructionBlocked(&g_GridNav, this, bBlocked);
    this->m_bBlockingGridNav = bBlocked;
  }
}


// CDOTA_SimpleObstruction::UpdateOnRemove  (line 103, @0x0000000002673930, libserver.so)
// calls: CBaseEntity::UpdateOnRemove, CDOTA_SimpleObstruction::SetEnabled
void __fastcall CDOTA_SimpleObstruction::UpdateOnRemove(CDOTA_SimpleObstruction *const this)
{
  CBaseEntity::UpdateOnRemove(this);
  CDOTA_SimpleObstruction::SetEnabled(this, 0, 1);
}


// CDOTA_SimpleObstruction::InputToggle  (line 119, @0x0000000002673960, libserver.so)
// calls: CDOTA_SimpleObstruction::SetEnabled
void __fastcall CDOTA_SimpleObstruction::InputToggle(CDOTA_SimpleObstruction *const this, inputdata_t *const inputdata)
{
  CDOTA_SimpleObstruction::SetEnabled(this, !this->m_bEnabled.m_Value, 0);
}


// CDOTA_SimpleObstruction::InputEnable  (line 127, @0x0000000002673980, libserver.so)
// calls: CDOTA_SimpleObstruction::SetEnabled
void __fastcall CDOTA_SimpleObstruction::InputEnable(CDOTA_SimpleObstruction *const this, inputdata_t *const inputdata)
{
  CDOTA_SimpleObstruction::SetEnabled(this, 1, 0);
}


// CDOTA_SimpleObstruction::InputDisable  (line 135, @0x00000000026739a0, libserver.so)
// calls: CDOTA_SimpleObstruction::SetEnabled
void __fastcall CDOTA_SimpleObstruction::InputDisable(
        CDOTA_SimpleObstruction *const this,
        inputdata_t *const inputdata)
{
  CDOTA_SimpleObstruction::SetEnabled(this, 0, 0);
}


// CDOTA_SimpleObstruction::IsEnabled  (line 143, @0x00000000026540e0, libserver.so)
bool __fastcall CDOTA_SimpleObstruction::IsEnabled(CDOTA_SimpleObstruction *const this)
{
  return this->m_bEnabled.m_Value;
}


// CDOTA_SimpleObstruction::SetEnabled  (line 151, @0x00000000026731a0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, IsExternallyAllocated, NetworkStateChanged, Purge, Purge_FixedGrowable, RemoveAll, Set, SetGridNavBlocked, operator=<bool>, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CGridNav::PrepareObstructionManager, CBaseEntity::GetAbsOrigin, CGridNav::CheckForCollisions, FindClearSpaceForUnit, CDOTAFogOfWarSystem::GetFoW, CFoW::EnableOccluder, CUtlMemory<IntersectionRecord_t, int>::Purge, CGridNav::SetSimpleObstructionBlocked, __stack_chk_fail, CUtlVectorBase<IntersectionRecord_t, CUtlMemoryFixedGrowable<IntersectionRecord_t, 16ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_SimpleObstruction::Spawn, CDOTA_SimpleObstruction::UpdateOnRemove, CDOTA_SimpleObstruction::InputToggle, CDOTA_SimpleObstruction::InputEnable, CDOTA_SimpleObstruction::InputDisable
void __fastcall CDOTA_SimpleObstruction::SetEnabled(CDOTA_SimpleObstruction *const this, bool bEnabled, bool bForce)
{
  const Vector *AbsOrigin; // rax
  __int64 v6; // rbx
  int i; // r12d
  CObstructionObject *m_pObstructionObject; // r13
  CBaseEntity *p_m_pObstructionRecord; // r13
  uint32 v10; // eax
  bool v11; // bl
  uint32 m_nOccluderIndex; // r12d
  CFoW *FoW; // rax
  EHANDLE ignoreHandle; // [rsp+10h] [rbp-1E0h] BYREF
  CollisionResultList_t intersectionResults; // [rsp+20h] [rbp-1D0h] BYREF
  unsigned __int64 v16; // [rsp+1B8h] [rbp-38h]
  Vector v17; // 0:xmm0_8.8,8:xmm1_4.4

  v16 = __readfsqword(0x28u);
  if ( this->m_bEnabled.m_Value == bEnabled && !bForce )
    return;
  if ( !bEnabled )
  {
    if ( this->m_bBlockingGridNav )
    {
      CGridNav::SetSimpleObstructionBlocked(&g_GridNav, this, 0);
      this->m_bBlockingGridNav = 0;
    }
    goto LABEL_17;
  }
  if ( !this->m_bBlockingGridNav )
  {
    CGridNav::SetSimpleObstructionBlocked(&g_GridNav, this, 1);
    this->m_bBlockingGridNav = 1;
  }
  CGridNav::PrepareObstructionManager(
    &g_GridNav,
    1.414 * g_GridNav.m_flEdgeSize,
    0x10u,
    0x40u,
    ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE,
    0.0);
  intersectionResults.m_Size = 0;
  intersectionResults.m_Memory.m_nAllocationCount = 16;
  intersectionResults.m_Memory.m_nGrowSize = 0x80000000;
  intersectionResults.m_Memory.m_pMemory = &intersectionResults.m_Memory.m_FixedMemory;
  ignoreHandle.m_Index = -2;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  CGridNav::CheckForCollisions(&g_GridNav, AbsOrigin, &intersectionResults, &ignoreHandle.m_Index, 0);
  v6 = 0;
  for ( i = 0; intersectionResults.m_Size > i; ++v6 )
  {
    m_pObstructionObject = intersectionResults.m_Memory.m_pMemory[v6].m_pObsRec->m_pObstructionObject;
    if ( m_pObstructionObject != 0 )
    {
      p_m_pObstructionRecord = &m_pObstructionObject[-86].m_pObstructionRecord;
      if ( p_m_pObstructionRecord != 0 )
      {
        v17 = *CBaseEntity::GetAbsOrigin(p_m_pObstructionRecord);
        FindClearSpaceForUnit(p_m_pObstructionRecord, v17, 0);
      }
    }
    ++i;
  }
  intersectionResults.m_Size = 0;
  if ( intersectionResults.m_Memory.m_nAllocationCount < 0 )
  {
    v10 = intersectionResults.m_Memory.m_nGrowSize & 0xC0000000;
LABEL_25:
    if ( v10 == 0 )
      CUtlMemory<IntersectionRecord_t,int>::Purge(&intersectionResults.m_Memory);
    goto LABEL_17;
  }
  v10 = intersectionResults.m_Memory.m_nGrowSize & 0xC0000000;
  if ( intersectionResults.m_Memory.m_pMemory == &intersectionResults.m_Memory.m_FixedMemory )
    goto LABEL_25;
  if ( intersectionResults.m_Memory.m_pMemory != 0 && v10 == 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
LABEL_17:
  v11 = 0;
  m_nOccluderIndex = this->m_nOccluderIndex;
  if ( this->m_bBlockFoW.m_Value )
    v11 = bEnabled;
  FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, 0);
  CFoW::EnableOccluder(FoW, m_nOccluderIndex, v11);
  if ( this->m_bEnabled.m_Value != bEnabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = bEnabled;
  }
}


// CDOTA_SimpleObstruction::GetObstructionRadius  (line 193, @0x00000000026540f0, libserver.so)
float __fastcall CDOTA_SimpleObstruction::GetObstructionRadius(CDOTA_SimpleObstruction *const this)
{
  return g_GridNav.m_flEdgeSize;
}


