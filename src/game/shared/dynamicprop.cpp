// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dynamicprop.cpp:73
class C_CDynamicProp_MapInstall {
	C_CDynamicProp_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDynamicProp::GetDataDescMap  (line 19, @0x00000000020592c0, libserver.so)
// globals: CDynamicProp::m_DataMap
datamap_t *__fastcall CDynamicProp::GetDataDescMap(CDynamicProp *const this)
{
  return &CDynamicProp::m_DataMap;
}


// CDynamicProp::AddDatadescMetadataKeys  (line 19, @0x0000000002071ab0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDynamicProp::GetEntityClass(void)
void __fastcall CDynamicProp::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDynamicProp::GetEntityClass);
}


// CDynamicProp::GetBaseMap  (line 19, @0x0000000002071ad0, libserver.so)
// globals: CBreakableProp::m_DataMap
datamap_t *__cdecl CDynamicProp::GetBaseMap()
{
  return &CBreakableProp::m_DataMap;
}


// DataMapInit<CDynamicProp>  (line 19, @0x000000000207e700, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "CDynamicProp"
// globals: `guard variable for'DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder, `guard variable for'DataMapInit<CDynamicProp>(CDynamicProp *)::dataDesc, CBreakableProp::m_DataMap, CDynamicProp::GetEntityClass(void), CDynamicProp::m_DataMap, DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDynamicProp>(CDynamicProp *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder) != 0 )
  {
    DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder.m_pszBase = "CDynamicProp";
    DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder,
      &_dso_handle);
  }
  CDynamicProp::m_DataMap.baseMap = &CBreakableProp::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CDynamicProp>(CDynamicProp *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDynamicProp>(CDynamicProp *)::dataDesc) != 0 )
  {
    DataMapInit<CDynamicProp>(CDynamicProp *)::dataDesc[35].pSaveRestoreOps = eventFuncs;
    DataMapInit<CDynamicProp>(CDynamicProp *)::dataDesc[36].pSaveRestoreOps = eventFuncs;
    DataMapInit<CDynamicProp>(CDynamicProp *)::dataDesc[37].pSaveRestoreOps = eventFuncs;
    v2 = operator new[](DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v2, DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder.m_pszBase), "AnimThink");
    m_Size = DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder.m_Names.m_Size == DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CDynamicProp>(CDynamicProp *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CDynamicProp>(CDynamicProp *)::dataDesc[38].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDynamicProp>(CDynamicProp *)::dataDesc);
  }
  CDynamicProp::m_DataMap.dataNumFields = 40;
  CDynamicProp::m_DataMap.dataDesc = &DataMapInit<CDynamicProp>(CDynamicProp *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDynamicProp::m_DataMap, CDynamicProp::GetEntityClass);
  return &CDynamicProp::m_DataMap;
}


// CDynamicProp::YouForgotToImplementOrDeclareServerClass  (line 73, @0x00000000020592d0, libserver.so)
int __fastcall CDynamicProp::YouForgotToImplementOrDeclareServerClass(CDynamicProp *const this)
{
  return 0;
}


// CDynamicProp::GetServerClass  (line 73, @0x000000000205e030, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDynamicProp::GetServerClass(CDynamicProp *const this)
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


// CDynamicProp::CDynamicProp  (line 78, @0x0000000002071ae0, libserver.so)  // inlines: CEntityIOOutput, CNetworkVarBase, CUtlSymbolLarge, Color, EnsureValidValue<bool>, HSequence
// calls: CBreakableProp::CBreakableProp
// callers: CDynamicProp::CEntityInstanceEntityClass::ConstructInstance, CDevtestHierarchyChild::CEntityInstanceEntityClass::ConstructInstance, CDevtestHierarchy::CDevtestHierarchy, CDynamicPropAlias_dynamic_prop::CEntityInstanceEntityClass::ConstructInstance, CDynamicPropAlias_prop_dynamic_override::CEntityInstanceEntityClass::ConstructInstance, COrnamentProp::CEntityInstanceEntityClass::ConstructInstance, CBasePropDoor::CBasePropDoor, CDOTAPropCustomTexture::CEntityInstanceEntityClass::ConstructInstance, CAdditionalWearable::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDynamicProp::CDynamicProp(CDynamicProp *const this)
{
  CBreakableProp::CBreakableProp(this);
  this->m_iszDefaultAnim.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_3FF1170;
  this->_vptr_IBreakableWithPropData = off_3FF1AC0;
  this->_vptr_IPlayerPickupVPhysics = &off_3FF1BD8;
  this->m_pOutputAnimBegun._vptr_CEntityIOOutput = off_3F7C190;
  this->m_pOutputAnimOver._vptr_CEntityIOOutput = off_3F7C190;
  this->m_pOutputAnimLoopCycleOver._vptr_CEntityIOOutput = off_3F7C190;
  this->m_hGoalSequence.m_Data = -1;
  this->m_hPendingSequence.m_Data = -1;
  this->m_bUseHitboxesForRenderBox.m_Value = 0;
  this->m_glowColor = 0;
  this->m_bCreateNonSolid = 0;
  this->m_bIsOverrideProp = 0;
  this->m_bScriptedMovement = 0;
  this->m_iInitialGlowState = 0;
  this->m_nGlowRangeMin = 0;
}


// CDynamicProp::Spawn  (line 97, @0x0000000002080550, libserver.so)
// calls: CEntityInstance::IsAuthoritative, CBreakableProp::Spawn, CDynamicProp::SpawnServerSide
// callers: CDevtestHierarchy::Spawn, CBasePropDoor::Spawn, COrnamentProp::Spawn, CDOTAPropCustomTexture::Spawn
void __fastcall CDynamicProp::Spawn(CDynamicProp *const this, const CEntityKeyValues *pKeyValues)
{
  if ( CEntityInstance::IsAuthoritative(this) || this->m_bAnimateOnServer )
    CDynamicProp::SpawnServerSide(this, pKeyValues);
  else
    CBreakableProp::Spawn(this, pKeyValues);
}


// CDynamicProp::SpawnServerSide  (line 120, @0x000000000207fd80, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<int>, GetSolid, GetValue, GetValue<bool>, GetValue<int>, GetValueString, HasSpawnFlags, Min<long long unsigned int>, Min<unsigned int>, NetworkStateChanged, Set, String, TempString, ToCStr, Vector, _V_strcmp, atoi, operator=<bool>, operator[]
// calls: V_stricmp_fast, CBreakableProp::Spawn, CBaseAnimating::UseClientSideAnimation, CBaseEntity::AddFlag, CBaseEntity::VPhysicsGetAggregate, CGlowProperty::SetGlowState, CGlowProperty::SetGlowRange, CGlowProperty::SetGlowRangeMin, CGlowProperty::SetGlowColorOverride, CBaseAnimating::GetModelPtr, CEntityKeyValues::HasValue, CBaseEntity::RemoveFlag (26 total)
// callers: CDynamicProp::Spawn
// strings: "prop_dynamic_override", "prop_dynamic", "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n" (7 total)
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_20801CF, jpt_20803DD, CDynamicProp::AnimThink(void)
void __fastcall CDynamicProp::SpawnServerSide(CDynamicProp *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  uint64 m_uint64; // r13
  CEntityVariant *p_m_value; // rax
  bool v11; // al
  CCollisionProperty *m_pCollision; // rdi
  char v13; // al
  IPhysAggregateInstance *Aggregate; // rax
  unsigned int v15; // esi
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v19; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rcx
  CEntityVariant *v21; // rdx
  __int64 m_char; // rcx
  unsigned int m_Value; // eax
  bool v24; // r13
  const char *m_pAsString; // rsi
  int v26; // esi
  void (__fastcall *v27)(CDynamicProp *const, unsigned __int64); // r14
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v28; // cx
  __int64 v29; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v30; // rdx
  const char *ValueString; // rax
  HSequence v32; // eax
  const char *v33; // rdx
  bool v34; // zf
  char *v35; // rdi
  const char *v36; // rsi
  const char *v37; // rdi
  const char *v38; // rsi
  const char *v39; // rdi
  const char *v40; // rsi
  const char *v41; // rax
  CEntityVariant *v42; // rax
  int16 m_type; // dx
  unsigned __int64 m_float; // rsi
  unsigned int m_int; // eax
  const char *v46; // rax
  __int64 v47; // rax
  const char *v48; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v49; // rdx
  float v50; // xmm0_4
  CGlobalVars *v51; // rdi
  float v52; // xmm0_4
  double v53; // xmm1_8
  float v54; // [rsp+Ch] [rbp-34h]
  Vector vTraceDelta; // [rsp+10h] [rbp-30h] BYREF

  if ( g_pGameRules != 0 && (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) != 0 && !this->m_bAnimateOnServer )
    CBaseAnimating::UseClientSideAnimation(this, 1);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_15:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_14;
    goto LABEL_16;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == -971301790 )
      goto LABEL_11;
LABEL_8:
    if ( m_nCount <= ++v6 )
      goto LABEL_15;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != -971301790 )
    goto LABEL_8;
LABEL_11:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  m_uint64 = 0;
  p_m_value = &v8[v6].m_value;
  if ( p_m_value->m_type == 30 )
LABEL_14:
    m_uint64 = p_m_value->m_uint64;
LABEL_16:
  v11 = V_stricmp_fast(m_uint64, "prop_dynamic_override") == 0;
  this->m_bIsOverrideProp = v11;
  if ( v11 && CEntityKeyValues::HasValue(pKeyValues, -1700328872) )
  {
    v26 = pKeyValues->m_keyHashes.m_nCount;
    v27 = *(this->_vptr_IHandleEntity + 157);
    if ( v26 <= 0 )
    {
LABEL_102:
      v42 = &CEntityKeyValues::sm_EmptyVariant;
    }
    else
    {
      v28 = pKeyValues->m_keyHashes.m_nAllocated;
      v29 = 0;
      while ( 1 )
      {
        if ( v28 != 0 )
        {
          v30 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v28 > 9 )
            v30 = pKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v30 = 0;
        }
        if ( v30[v29] == -1700328872 )
          break;
        if ( v26 <= ++v29 )
          goto LABEL_102;
      }
      if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
        v49 = pKeyValues->m_keyValues.m_pElements;
      else
        v49 = 0;
      v42 = &v49[v29].m_value;
    }
    m_type = v42->m_type;
    switch ( m_type )
    {
      case 0:
        m_float = 0;
        break;
      case 1:
        m_float = v42->m_float;
        break;
      case 5:
        m_float = v42->m_uint;
        break;
      case 6:
        m_float = v42->m_char;
        break;
      case 26:
        v47 = v42->m_uint64;
        m_float = 0x7FFFFFFF;
        if ( v47 <= 0x7FFFFFFF )
        {
          m_float = 0xFFFFFFFF80000000LL;
          if ( v47 >= 0xFFFFFFFF80000000LL )
            m_float = v47;
        }
        break;
      case 30:
        m_float = strtol(v42->m_pszString, 0, 10);
        break;
      case 33:
        v46 = v42->m_uint64;
        m_float = 0x7FFFFFFF;
        if ( v46 <= 0x7FFFFFFE )
          m_float = v46;
        break;
      case 34:
        m_float = v42->m_float64;
        break;
      case 37:
        m_int = v42->m_int;
        m_float = 0x7FFFFFFF;
        if ( m_int <= 0x7FFFFFFE )
          m_float = m_int;
        break;
      default:
        v48 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v48);
        m_float = 0;
        break;
    }
    v27(this, m_float);
  }
  CBreakableProp::Spawn(this, pKeyValues);
  if ( this->m_bScriptedMovement )
    CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NOCLIP, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  if ( (this->m_pEntity->m_flags & 0x200) != 0 )
    return;
  CBaseEntity::AddFlag(this, 0x40000);
  if ( this->m_bRandomAnimator || this->m_iszDefaultAnim.u.m_Id != 0 )
  {
    CBaseEntity::RemoveFlag(this, 0x40000);
    if ( this->m_bRandomAnimator )
    {
      CBaseEntity::ThinkSet(this, CDynamicProp::AnimThink, 0.0, 0, 0);
      v54 = CGlobalVarsBase::curtime(gpGlobals, 0);
      v50 = (*(*random_valve + 8LL))(random_valve, this->m_flMinRandAnimTime, this->m_flMaxRandAnimTime);
      v51 = gpGlobals;
      this->m_flNextRandAnim = v50 + v54;
      v52 = CGlobalVarsBase::curtime(v51, 0);
      CBaseEntity::SetNextThink(this, (v52 + this->m_flNextRandAnim) + 0.1, v53, 0);
    }
    else
    {
      m_pAsString = "";
      if ( this->m_iszDefaultAnim.u.m_Id != 0 )
        m_pAsString = this->m_iszDefaultAnim.u.m_pAsString;
      CDynamicProp::PropSetAnim(this, m_pAsString);
    }
  }
  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 && (*(m_pCollision->_vptr_ICollideable + 7))(m_pCollision) != 0 )
  {
    v13 = 0;
  }
  else
  {
    v13 = 1;
    if ( !this->m_bIsOverrideProp )
      v13 = V_stricmp_fast(m_uint64, "prop_dynamic") == 0;
  }
  this->m_bCreateNonSolid = v13;
  (*(this->_vptr_IHandleEntity + 49))(this);
  Aggregate = CBaseEntity::VPhysicsGetAggregate(this);
  if ( Aggregate == 0 )
    goto LABEL_40;
  v17 = pKeyValues->m_keyHashes.m_nCount;
  if ( v17 <= 0 )
  {
LABEL_68:
    v21 = &CEntityKeyValues::sm_EmptyVariant;
    m_char = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_char == 0 )
      goto LABEL_40;
    goto LABEL_69;
  }
  v15 = pKeyValues->m_keyHashes.m_nAllocated;
  v18 = 0;
  v16 = v15;
  while ( 2 )
  {
    if ( v15 == 0 )
    {
      if ( *(4 * v18) == 1522596209 )
        break;
      goto LABEL_34;
    }
    v19 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v15 > 9 )
      v19 = pKeyValues->m_keyHashes.m_pElements;
    if ( v19[v18] != 1522596209 )
    {
LABEL_34:
      if ( v17 <= ++v18 )
        goto LABEL_68;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v20 = pKeyValues->m_keyValues.m_pElements;
  else
    v20 = 0;
  v21 = &v20[v18].m_value;
  m_char = v21->m_type;
  if ( m_char == 0 )
    goto LABEL_40;
LABEL_69:
  switch ( m_char )
  {
    case 1:
      m_char = 1;
      LOBYTE(v15) = 0;
      if ( v21->m_float == 0.0 )
        m_char = v15;
      goto LABEL_74;
    case 5:
    case 37:
      LOBYTE(m_char) = v21->m_int != 0;
      goto LABEL_74;
    case 6:
      m_char = v21->m_char;
      goto LABEL_74;
    case 26:
    case 33:
      LOBYTE(m_char) = v21->m_uint64 != 0;
      goto LABEL_74;
    case 30:
      v33 = v21->m_uint64;
      if ( strcmp(v33, "0") == 0 )
        break;
      if ( strcmp(v33, "false") == 0 )
        break;
      v34 = strcmp(v33, "no") == 0;
      if ( v34 )
        break;
      v35 = "1";
      m_char = 2;
      v36 = v33;
      do
      {
        if ( m_char == 0 )
          break;
        v34 = *v36++ == *v35++;
        --m_char;
      }
      while ( v34 );
      if ( v34 )
        goto LABEL_75;
      v37 = "true";
      m_char = 5;
      v38 = v33;
      do
      {
        if ( m_char == 0 )
          break;
        v34 = *v38++ == *v37++;
        --m_char;
      }
      while ( v34 );
      if ( v34 )
        goto LABEL_75;
      v39 = "yes";
      m_char = 4;
      v40 = v33;
      do
      {
        if ( m_char == 0 )
          break;
        v34 = *v40++ == *v39++;
        --m_char;
      }
      while ( v34 );
      if ( v34 )
        goto LABEL_75;
      Warning("Invalid conversion : CString '%s' to bool\n", v33);
      break;
    case 34:
      m_char = 1;
      LOBYTE(v15) = 0;
      if ( v21->m_float64 == 0.0 )
        m_char = v15;
LABEL_74:
      if ( m_char != 0 )
      {
LABEL_75:
        vTraceDelta.x = 0.0;
        vTraceDelta.y = 0.0;
        vTraceDelta.z = -1200.0;
        (*(Aggregate->_vptr_IPhysAggregateInstance + 39))(
          Aggregate,
          &vTraceDelta,
          Aggregate->_vptr_IPhysAggregateInstance,
          m_char,
          v17,
          v16);
      }
      break;
    default:
      v41 = VariantFieldTypeName(m_char);
      Warning("No conversion from %s to bool now\n", v41);
      break;
  }
LABEL_40:
  if ( this->m_bStartDisabled )
    CBaseEntity::AddEffects(this, 32);
  if ( !this->m_bBlockLOSSetByPropData )
    CBaseProp::CalculateBlockLOS(this);
  m_Value = this->m_spawnflags.m_Value;
  v24 = (m_Value & 0x40) != 0;
  if ( v24 != this->m_bUseHitboxesForRenderBox.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1727, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_Value = this->m_spawnflags.m_Value;
    this->m_bUseHitboxesForRenderBox.m_Value = v24;
  }
  if ( (m_Value & 0x100) != 0 )
    (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  CGlowProperty::SetGlowState(&this->m_Glow, this->m_iInitialGlowState);
  CGlowProperty::SetGlowRange(&this->m_Glow, this->m_nGlowRange);
  CGlowProperty::SetGlowRangeMin(&this->m_Glow, this->m_nGlowRangeMin);
  CGlowProperty::SetGlowColorOverride(&this->m_Glow, this->m_glowColor);
  if ( this->m_iInitialGlowState != 0 )
    CGlowProperty::StartGlowing(&this->m_Glow);
  if ( CBaseAnimating::GetModelPtr(this) != 0 && CEntityKeyValues::HasValue(pKeyValues, -1618663357) )
  {
    ValueString = CEntityKeyValues::GetValueString(pKeyValues, -1618663357, 0);
    if ( ValueString != 0 )
    {
      v32.m_Data = CBaseAnimating::LookupSequence(this, ValueString).m_Data;
      if ( v32.m_Data != -1 )
        CBaseAnimating::ResetSequence(this, v32);
    }
  }
  (*(this->_vptr_IHandleEntity + 219))(this);
}


// CDynamicProp::CreateVPhysics  (line 372, @0x000000000205ab60, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel, CCollisionProperty::SetupPhysicsFromUnscaledOBB
bool __fastcall CDynamicProp::CreateVPhysics(CDynamicProp *const this)
{
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // edx
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  const Vector *v6; // r13
  const Vector *v7; // rax

  if ( this->m_bCreateNonSolid )
  {
    p_m_Collision = &this->m_Collision;
    v6 = (*(this->m_Collision._vptr_ICollideable + 2))(&this->m_Collision);
    v7 = (*(this->m_Collision._vptr_ICollideable + 1))(p_m_Collision);
    CCollisionProperty::SetupPhysicsFromUnscaledOBB(
      p_m_Collision,
      VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
      4,
      v7,
      v6);
    (*(this->m_Collision._vptr_ICollideable + 16))(p_m_Collision);
    return 1;
  }
  else
  {
    m_pCollision = this->m_pCollision;
    if ( m_pCollision != 0 )
      m_Value = m_pCollision->m_CollisionGroup.m_Value;
    else
      m_Value = 4;
    CCollisionProperty::SetupPhysicsFromUnscaledModel(
      &this->m_Collision,
      VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
      m_Value,
      0);
    return 1;
  }
}


// CDynamicProp::HandleAnimEvent  (line 390, @0x0000000002078150, libserver.so)  // inlines: CVariantBase, Free, ~CVariantBase
// calls: CEntityInstance::AcceptInput, CBaseEntity::EmitSound, CBaseAnimating::HandleAnimEvent, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CBasePropDoor::HandleAnimEvent
void __fastcall CDynamicProp::HandleAnimEvent(CDynamicProp *const this, animevent_t *pEvent)
{
  const char *options; // rsi
  variant_t emptyVariant; // [rsp+0h] [rbp-30h] BYREF

  if ( pEvent->event == 17 )
  {
    CBaseEntity::EmitSound(this, pEvent->options, 0.0, 0);
    goto LABEL_6;
  }
  if ( pEvent->event != 99 )
  {
LABEL_6:
    CBaseAnimating::HandleAnimEvent(this, pEvent);
    return;
  }
  options = pEvent->options;
  emptyVariant.m_type = 0;
  emptyVariant.m_flags = 0;
  emptyVariant.m_uint64 = 0;
  CEntityInstance::AcceptInput(this, options, this, this, &emptyVariant, 0);
  if ( (emptyVariant.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyVariant.m_uint64);
}


// CDynamicProp::AnimThink  (line 419, @0x000000000207bda0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetBaseAnimatingController, GetCycle, GetPrevCycle, GetSequence, GetSkeletonInstance, ResetSequence, curtime, ~CVariantBase
// calls: CDynamicProp::FinishSetSequence, CBaseAnimating::SequenceLoops, CDynamicProp::PropSetSequence, CBaseEntity::SetNextThink, CBaseAnimating::StudioFrameAdvance, CBaseAnimating::DispatchAnimEvents, CBaseEntity::FirstMoveChild, CBaseEntity::PhysicsTouchTriggers, CBaseEntity::NextMovePeer, CEntityIOOutput::FireOutputInternal, CBaseAnimating::SelectWeightedSequence, CDynamicProp::PropSetAnim (15 total)
void __fastcall CDynamicProp::AnimThink(CDynamicProp *const this)
{
  double v1; // xmm1_8
  int m_iTransitionDirection; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  float v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  CGlobalVars *v13; // r12
  double v14; // xmm0_8
  CBaseEntity *i; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  float m_flNextRandAnim; // xmm0_4
  CGlobalVars *v21; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  HSequence v23; // r12d
  __int64 v24; // rax
  __int64 v25; // rdi
  CGlobalVars *v26; // r12
  FnGlobalVarsWarningFunc v27; // rax
  FnGlobalVarsWarningFunc v28; // rax
  double v29; // xmm0_8
  double v30; // xmm1_8
  __int64 v31; // rax
  __int64 v32; // rax
  float v33; // xmm0_4
  double v34; // xmm1_8
  float v35; // [rsp+Ch] [rbp-34h]
  float v36; // [rsp+Ch] [rbp-34h]
  float m_flCurrentTime; // [rsp+Ch] [rbp-34h]
  CVariant value; // [rsp+10h] [rbp-30h] BYREF

  if ( this->m_hPendingSequence.m_Data != -1 )
  {
    CDynamicProp::FinishSetSequence(this, this->m_hPendingSequence);
    this->m_hPendingSequence.m_Data = -1;
  }
  if ( this->m_bRandomAnimator )
  {
    v1 = 0.0;
    m_flNextRandAnim = this->m_flNextRandAnim;
    v21 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v36 = this->m_flNextRandAnim;
          (m_pfnWarningFunc)(1, m_flNextRandAnim, 0.0);
          m_flNextRandAnim = v36;
        }
      }
      *&v1 = LODWORD(v21->m_flCurrentTime);
    }
    if ( *&v1 > m_flNextRandAnim )
    {
      v23.m_Data = CBaseAnimating::SelectWeightedSequence(this, 1).m_Data;
      v24 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
      v25 = 0;
      if ( v24 != 0 )
        v25 = *(v24 + 736);
      (*(*v25 + 184LL))(v25, v23.m_Data, 1);
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_pOutputAnimBegun, 0, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      v26 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v27 = gpGlobals->m_pfnWarningFunc;
          if ( v27 != 0 )
            v27(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        m_flCurrentTime = v26->m_flCurrentTime;
      }
      else
      {
        m_flCurrentTime = 0.0;
      }
      this->m_flNextRandAnim = (*(*random_valve + 8LL))(
                                 random_valve,
                                 this->m_flMinRandAnimTime,
                                 this->m_flMaxRandAnimTime)
                             + m_flCurrentTime;
    }
  }
  m_iTransitionDirection = this->m_iTransitionDirection;
  if ( m_iTransitionDirection > 0 )
  {
    v4 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
    if ( v4 != 0 )
      v5 = *(v4 + 736);
    else
      v5 = 0;
    v6 = *(v5 + 36);
    v7 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
    if ( v7 != 0 )
      v8 = *(v7 + 736);
    else
      v8 = 0;
    if ( v6 > *(v8 + 40) )
    {
LABEL_37:
      if ( CBaseAnimating::SequenceLoops(this) )
      {
        value.m_type = 0;
        value.m_flags = 0;
        value.m_uint64 = 0;
        CEntityIOOutput::FireOutputInternal(&this->m_pOutputAnimLoopCycleOver, 0, this, &value, 0.0);
        if ( (value.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      }
      goto LABEL_40;
    }
    m_iTransitionDirection = this->m_iTransitionDirection;
  }
  if ( m_iTransitionDirection >= 0 )
    goto LABEL_12;
  v16 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v16 != 0 )
    v17 = *(v16 + 736);
  else
    v17 = 0;
  v35 = *(v17 + 36);
  v18 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v18 != 0 )
    v19 = *(v18 + 736);
  else
    v19 = 0;
  if ( *(v19 + 40) > v35 )
    goto LABEL_37;
LABEL_40:
  m_iTransitionDirection = this->m_iTransitionDirection;
LABEL_12:
  if ( m_iTransitionDirection <= 0 )
  {
LABEL_22:
    if ( m_iTransitionDirection >= 0 )
      goto LABEL_23;
    v31 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
    v32 = v31 != 0 ? *(v31 + 736) : 0LL;
    if ( *(v32 + 40) > 0.0 )
      goto LABEL_23;
    goto LABEL_16;
  }
  v9 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v9 != 0 )
    v10 = *(v9 + 736);
  else
    v10 = 0;
  if ( *(v10 + 40) < 0.99900001 )
  {
    m_iTransitionDirection = this->m_iTransitionDirection;
    goto LABEL_22;
  }
LABEL_16:
  if ( !CBaseAnimating::SequenceLoops(this) )
  {
    v11 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
    v12 = 0;
    if ( v11 != 0 )
      v12 = *(v11 + 736);
    if ( (*(*v12 + 192LL))(v12) != this->m_hGoalSequence.m_Data )
    {
      CDynamicProp::PropSetSequence(this, this->m_hGoalSequence);
      goto LABEL_27;
    }
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_pOutputAnimOver, 0, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    if ( this->m_bRandomAnimator )
    {
      v33 = CGlobalVarsBase::curtime(gpGlobals, 0);
      CBaseEntity::SetNextThink(this, (v33 + this->m_flNextRandAnim) + 0.1, v34, 0);
      goto LABEL_27;
    }
    if ( this->m_iszDefaultAnim.u.m_Id != 0 )
    {
      if ( this->m_bHoldAnimation )
        goto LABEL_71;
      CDynamicProp::PropSetAnim(this, this->m_iszDefaultAnim.u.m_pAsString);
    }
    if ( !this->m_bHoldAnimation )
      goto LABEL_27;
LABEL_71:
    *&v29 = CGlobalVarsBase::curtime(gpGlobals, 0) + 0.1;
    CBaseEntity::SetNextThink(this, v29, v30, 0);
    goto LABEL_27;
  }
LABEL_23:
  v13 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v28 = gpGlobals->m_pfnWarningFunc;
      if ( v28 != 0 )
        v28(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v14) = 0;
    *&v14 = v13->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v14 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v14, v1, 0);
LABEL_27:
  CBaseAnimating::StudioFrameAdvance(this, AnimationAdvanceType_t::ANIM_ADVANCE_NORMAL);
  CBaseAnimating::DispatchAnimEvents(this, this);
  if ( this->m_bUpdateAttachedChildren )
  {
    for ( i = CBaseEntity::FirstMoveChild(this); i != 0; i = CBaseEntity::NextMovePeer(i) )
      CBaseEntity::PhysicsTouchTriggers(i, 0);
  }
}


// CDynamicProp::PropSetAnim  (line 498, @0x0000000002078430, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetDebugName, ~CVariantBase
// calls: CBaseAnimating::LookupSequence, CDynamicProp::PropSetSequence, CEntityIOOutput::FireOutputInternal, CEntityIdentity::GetDebugName, Warning, CBaseAnimating::SetSequence, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CDynamicProp::InputSetAnimation, CDynamicProp::InputSetAnimationNoReset, CDynamicProp::InputSetAnimationTransition, CDynamicProp::AnimThink, CDynamicProp::SpawnServerSide
// strings: "Dynamic prop %s: no sequence named:%s\n"
void __fastcall CDynamicProp::PropSetAnim(CDynamicProp *const this, const char *szAnim)
{
  HSequence v4; // eax
  const char *DebugName; // rax
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  if ( szAnim != 0 )
  {
    if ( *szAnim != 0 )
    {
      v4.m_Data = CBaseAnimating::LookupSequence(this, szAnim).m_Data;
      if ( v4.m_Data != -1 )
      {
        CDynamicProp::PropSetSequence(this, v4);
        value.m_type = 0;
        value.m_flags = 0;
        value.m_uint64 = 0;
        CEntityIOOutput::FireOutputInternal(&this->m_pOutputAnimBegun, 0, this, &value, 0.0);
        if ( (value.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
        return;
      }
      DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
      Warning("Dynamic prop %s: no sequence named:%s\n", DebugName, szAnim);
    }
    CBaseAnimating::SetSequence(this, 0, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
  }
}


// CDynamicProp::InputSetAnimation  (line 530, @0x0000000002078510, libserver.so)  // inlines: AssignTo, NetworkStateChanged, Set, SetCreateTime, TempString, ToString, curtime, operator=<float>
// calls: CDynamicProp::PropSetAnim, CDynamicProp::ShouldSetCreateTime, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_2078546, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CDynamicProp::InputSetAnimation(CDynamicProp *const this, inputdata_t *const inputdata)
{
  int16 m_type; // di
  char *m_pszString; // rsi
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v7; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const char *v9; // rax
  const char *v10; // rcx
  double m_float; // xmm0_8
  float v12; // [rsp+Ch] [rbp-14h]

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_17;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_31;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_19;
      case 6:
        v10 = "true";
        if ( inputdata->value.m_char == 0 )
          v10 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v10);
        goto LABEL_23;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_19;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_23;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_23:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_31:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_19:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v9 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v9);
LABEL_17:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  CDynamicProp::PropSetAnim(this, m_pszString);
  if ( CDynamicProp::ShouldSetCreateTime(this, inputdata) )
  {
    m_flCurrentTime = 0.0;
    v7 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v7->m_flCurrentTime;
    }
    if ( m_flCurrentTime != this->m_flCreateTime.m_Value )
    {
      v12 = m_flCurrentTime;
      (*(this->_vptr_IHandleEntity + 22))(this, 376, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flCreateTime.m_Value = v12;
    }
  }
}


// CDynamicProp::InputSetAnimationNoReset  (line 543, @0x0000000002078850, libserver.so)  // inlines: AssignTo, GetBaseAnimatingController, GetSequence, GetSkeletonInstance, TempString, ToString
// calls: CBaseAnimating::LookupSequence, CDynamicProp::PropSetAnim, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2078888, jpt_207890B, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CDynamicProp::InputSetAnimationNoReset(CDynamicProp *const this, inputdata_t *const inputdata)
{
  int16 m_type; // di
  char *m_pszString; // rsi
  HSequence v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rdi
  int16 v9; // di
  char *v10; // rsi
  const char *v11; // rax
  double m_float; // xmm0_8
  const char *v13; // rcx
  const char *v14; // rdx
  const char *v15; // rax
  const char *v16; // rcx
  const char *v17; // rdx
  double m_float64; // xmm0_8

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_14;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_20;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_26;
      case 6:
        v13 = "true";
        v14 = "%s";
        if ( inputdata->value.m_char == 0 )
          v13 = "false";
        goto LABEL_23;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_26;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        v13 = inputdata->value.m_pszString;
        v14 = "%lld";
LABEL_23:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v14, v13);
        goto LABEL_24;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_24:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_20:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_26:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v11 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v11);
LABEL_14:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  v6.m_Data = CBaseAnimating::LookupSequence(this, m_pszString).m_Data;
  v7 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v7 != 0 )
    v8 = *(v7 + 736);
  else
    v8 = 0;
  if ( (*(*v8 + 192LL))(v8) != v6.m_Data )
  {
    v9 = inputdata->value.m_type;
    if ( v9 == 30 )
    {
      v10 = inputdata->value.m_pszString;
    }
    else
    {
      switch ( v9 )
      {
        case 0:
          goto LABEL_36;
        case 1:
          m_float64 = inputdata->value.m_float;
          goto LABEL_43;
        case 3:
        case 39:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g %g",
            *inputdata->value.m_pszString,
            *(inputdata->value.m_uint64 + 4),
            *(inputdata->value.m_uint64 + 8));
          v10 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 4:
        case 27:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g %g %g",
            *inputdata->value.m_pszString,
            *(inputdata->value.m_uint64 + 4),
            *(inputdata->value.m_uint64 + 8),
            *(inputdata->value.m_uint64 + 12));
          v10 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 5:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%d",
            inputdata->value.m_uint);
          goto LABEL_38;
        case 6:
          v16 = "true";
          v17 = "%s";
          if ( inputdata->value.m_char == 0 )
            v16 = "false";
          goto LABEL_40;
        case 8:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%c",
            inputdata->value.m_char);
          goto LABEL_38;
        case 9:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%d %d %d %d",
            inputdata->value.m_int,
            BYTE1(inputdata->value.m_int),
            BYTE2(inputdata->value.m_int),
            HIBYTE(inputdata->value.m_int));
          v10 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 25:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g",
            *inputdata->value.m_pszString,
            *(inputdata->value.m_uint64 + 4));
          v10 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 26:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%lld",
            inputdata->value.m_uint64);
          goto LABEL_41;
        case 33:
          v16 = inputdata->value.m_pszString;
          v17 = "%llu";
LABEL_40:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v17, v16);
LABEL_41:
          v10 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 34:
          m_float64 = inputdata->value.m_float64;
LABEL_43:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
          v10 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 37:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%u",
            inputdata->value.m_uint);
LABEL_38:
          v10 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        default:
          v15 = VariantFieldTypeName(v9);
          Warning("No conversion from %s to string at the moment!\n", v15);
LABEL_36:
          CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
          v10 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
      }
    }
    CDynamicProp::PropSetAnim(this, v10);
  }
}


// CDynamicProp::InputSetAnimationTransition  (line 554, @0x0000000002078de0, libserver.so)  // inlines: AssignTo, GetBaseAnimatingController, GetPlaybackRate, GetSequence, GetSkeletonInstance, IsSequenceFinished, NetworkStateChanged, Set, SetCreateTime, SetPlaybackRate, TempString, ToString, V_strcpy_safe<512ul>, curtime, operator=<float>
// calls: _V_strncpy, V_strnchr, CBaseAnimating::LookupSequence, CDynamicProp::PropSetAnim, V_snprintf, VariantFieldTypeName, Warning, CBaseAnimating::SetPlaybackRate, __stack_chk_fail, _Unwind_Resume
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2078E27, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CDynamicProp::InputSetAnimationTransition(CDynamicProp *const this, inputdata_t *const inputdata)
{
  int16 m_type; // di
  const char *m_pszString; // rsi
  const char *v5; // rax
  HSequence v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rdi
  HSequence v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rdi
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  __int64 v15; // rax
  __int64 v16; // rax
  float v17; // xmm0_4
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  const char *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // xmm0_8
  const char *v27; // rcx
  const char *v28; // rdx
  double m_float; // xmm0_8
  float v30; // [rsp+Ch] [rbp-234h]
  float v31; // [rsp+Ch] [rbp-234h]
  char szAnimationNames[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v33; // [rsp+218h] [rbp-28h]

  v33 = __readfsqword(0x28u);
  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_35;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_47;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_50;
      case 6:
        v27 = "true";
        v28 = "%s";
        if ( inputdata->value.m_char == 0 )
          v27 = "false";
        goto LABEL_44;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_50;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        v27 = inputdata->value.m_pszString;
        v28 = "%lld";
LABEL_44:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v28, v27);
        goto LABEL_45;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_45:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_47:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_50:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v23 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v23);
LABEL_35:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  _V_strncpy(szAnimationNames, m_pszString, 512);
  v5 = V_strnchr(szAnimationNames, 32, 512);
  if ( v5 != 0 )
  {
    *v5 = 0;
    v6.m_Data = CBaseAnimating::LookupSequence(this, v5 + 1).m_Data;
    v7 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
    if ( v7 != 0 )
      v8 = *(v7 + 736);
    else
      v8 = 0;
    if ( v6.m_Data != (*(*v8 + 192LL))(v8)
      || ((v18 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode)) == 0
        ? (v19 = 0)
        : (v19 = *(v18 + 736)),
          (*(*v19 + 152LL))(v19) != 0) )
    {
      v9.m_Data = CBaseAnimating::LookupSequence(this, szAnimationNames).m_Data;
      v10 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
      v11 = 0;
      if ( v10 != 0 )
        v11 = *(v10 + 736);
      if ( v9.m_Data == (*(*v11 + 192LL))(v11) )
      {
        v24 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
        if ( v24 != 0 )
          v25 = *(v24 + 736);
        else
          v25 = 0;
        v26 = *(v25 + 80);
        if ( *&v26 < 0.0 )
          CBaseAnimating::SetPlaybackRate(this, COERCE_DOUBLE(v26 ^ 0x80000000LL), -0.0);
      }
      else
      {
        CDynamicProp::PropSetAnim(this, szAnimationNames);
        v12 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          }
          m_flCurrentTime = v12->m_flCurrentTime;
        }
        else
        {
          m_flCurrentTime = 0.0;
        }
        if ( m_flCurrentTime != this->m_flCreateTime.m_Value )
        {
          v30 = m_flCurrentTime;
          (*(this->_vptr_IHandleEntity + 22))(this, 376, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_flCreateTime.m_Value = v30;
        }
        v15 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
        if ( v15 != 0 )
          v16 = *(v15 + 736);
        else
          v16 = 0;
        v17 = *(v16 + 80);
        if ( v17 < 0.0 )
          goto LABEL_31;
      }
    }
    else
    {
      v20 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
      if ( v20 != 0 )
        v20 = *(v20 + 736);
      v17 = *(v20 + 80);
      if ( v17 > 0.0 )
      {
LABEL_31:
        v31 = -v17;
        v21 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
        if ( v21 != 0 )
          v22 = *(v21 + 736);
        else
          v22 = 0;
        (*(*v22 + 176LL))(v22, COERCE_DOUBLE(LODWORD(v31)));
      }
    }
  }
}


// CDynamicProp::InputSetGlowOverride  (line 605, @0x000000000206f1f0, libserver.so)  // inlines: AssignTo, VariantFieldTypeName, Vector3D, operator=
// calls: CBaseProp::SetGlowOverrideColor, V_sscanf, Warning
// strings: "No free conversion of %s variant to Vector right now\n", "js_raw_args", "js_array", "js_object", "js_value", "hscript_lightbinding" (20 total)
// globals: jpt_206F2E0
void __fastcall CDynamicProp::InputSetGlowOverride(CDynamicProp *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  Vector *m_pszString; // rax
  const char *v5; // rsi
  Vector tmpColor; // [rsp+0h] [rbp-20h] BYREF

  m_type = inputdata->value.m_type;
  if ( m_type == 3 )
    goto LABEL_5;
  if ( m_type <= 3 )
  {
    if ( m_type == 0 )
    {
      m_pszString = &vec3_origin;
      goto LABEL_6;
    }
LABEL_12:
    switch ( m_type )
    {
      case 1:
        v5 = "float";
        break;
      case 4:
        v5 = "quaternion";
        break;
      case 5:
        v5 = "integer";
        break;
      case 6:
        v5 = "boolean";
        break;
      case 8:
        v5 = "character";
        break;
      case 9:
        v5 = "color";
        break;
      case 13:
        v5 = "ehandle";
        break;
      case 25:
        v5 = "vector2d";
        break;
      case 26:
        v5 = "int64";
        break;
      case 27:
        v5 = "vector4d";
        break;
      case 28:
        v5 = "resourcehandle";
        break;
      case 31:
        v5 = "hscript";
        break;
      case 32:
        v5 = "variant";
        break;
      case 33:
        v5 = "uint64";
        break;
      case 34:
        v5 = "float64";
        break;
      case 37:
        v5 = "unsigned";
        break;
      case 38:
        v5 = "utlstringtoken";
        break;
      case 48:
        v5 = "hscript_lightbinding";
        break;
      case 49:
        v5 = "js_value";
        break;
      case 50:
        v5 = "js_object";
        break;
      case 51:
        v5 = "js_array";
        break;
      case 52:
        v5 = "js_raw_args";
        break;
      default:
        v5 = "unknown_variant_type";
        break;
    }
    Warning("No free conversion of %s variant to Vector right now\n", v5);
    goto LABEL_7;
  }
  if ( m_type != 30 )
  {
    if ( m_type == 39 )
    {
LABEL_5:
      m_pszString = inputdata->value.m_pszString;
LABEL_6:
      tmpColor = *m_pszString;
      goto LABEL_7;
    }
    goto LABEL_12;
  }
  if ( V_sscanf(inputdata->value.m_uint64, "%g %g %g", &tmpColor, &tmpColor.y, &tmpColor.z) != 3 )
    tmpColor = vec3_origin;
LABEL_7:
  CBaseProp::SetGlowOverrideColor(this, &tmpColor);
}


// CDynamicProp::InputSetGlowRange  (line 615, @0x000000000205a2f0, libserver.so)  // inlines: Int, SetGlowRange, operator int
// calls: CGlowProperty::SetGlowRange
void __fastcall CDynamicProp::InputSetGlowRange(CDynamicProp *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    CGlowProperty::SetGlowRange(&this->m_Glow, inputdata->value.m_float);
  }
  else if ( m_type == 34 )
  {
    CGlowProperty::SetGlowRange(&this->m_Glow, inputdata->value.m_float64);
  }
  else
  {
    CGlowProperty::SetGlowRange(&this->m_Glow, inputdata->value.m_int);
  }
}


// CDynamicProp::FinishSetSequence  (line 624, @0x0000000002071ba0, libserver.so)  // inlines: GetBaseAnimatingController, GetSkeletonInstance, ResetSequence, SetPlaybackRate, curtime
// calls: CBaseEntity::SetAnimTime, CBaseEntity::RemoveFlag, CBaseAnimating::SetCycle, RandomFloat
// callers: CDynamicProp::PropSetSequence, CDynamicProp::AnimThink
void __fastcall CDynamicProp::FinishSetSequence(CDynamicProp *const this, HSequence hSequence)
{
  float v2; // xmm1_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // xmm0_4
  __int64 v10; // rax
  __int64 v11; // rdi
  float v12; // xmm1_4
  __int64 v13; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v15; // xmm0_8
  float v16; // xmm1_4
  int v17; // [rsp-24h] [rbp-2Ch]

  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  CBaseEntity::SetAnimTime(this, m_flCurrentTime, v2, 0);
  v7 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v7 != 0 )
    v8 = *(v7 + 736);
  else
    v8 = 0;
  (*(*v8 + 184LL))(v8, hSequence.m_Data, 1);
  CBaseEntity::RemoveFlag(this, 0x40000);
  if ( this->m_iTransitionDirection <= 0 )
    v9 = -1082130432;
  else
    v9 = 1065353216;
  v17 = v9;
  v10 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
  if ( v10 != 0 )
    v11 = *(v10 + 736);
  else
    v11 = 0;
  (*(*v11 + 176LL))(v11, COERCE_DOUBLE(v17));
  if ( this->m_bRandomizeCycle )
  {
    *&v15 = RandomFloat(0.0, 1.0);
    CBaseAnimating::SetCycle(this, v15, v16);
    this->m_bRandomizeCycle = 0;
  }
  else
  {
    v13 = 0;
    if ( this->m_iTransitionDirection <= 0 )
      v13 = 1065336439;
    CBaseAnimating::SetCycle(this, *&v13, v12);
  }
}


// CDynamicProp::PropSetSequence  (line 650, @0x0000000002071d30, libserver.so)  // inlines: GetBaseAnimatingController, GetCycle, GetPlaybackRate, GetSequence, GetSkeletonInstance, HSequence, curtime
// calls: CBaseAnimating::GotoSequence, CBaseEntity::ThinkSet, CBaseEntity::GetNextThink, CBaseEntity::SetNextThink, CDynamicProp::FinishSetSequence
// callers: CDynamicProp::PropSetAnim, CDynamicProp::AnimThink, CPoseController::BuildPropList
// globals: CDynamicProp::AnimThink(void)
void __fastcall CDynamicProp::PropSetSequence(CDynamicProp *const this, HSequence hSequence)
{
  int *p_m_iTransitionDirection; // r12
  CGameSceneNode *m_pGameSceneNode; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  float v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rax
  float v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rdi
  HSequence v13; // eax
  float NextThink; // xmm0_4
  double v15; // xmm1_8
  CGlobalVars *v16; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v18; // r12
  FnGlobalVarsWarningFunc v19; // rax
  double v20; // xmm0_8
  float v21; // [rsp+Ch] [rbp-34h]
  HSequence hNextSequence; // [rsp+10h] [rbp-30h] BYREF
  float nextCycle[9]; // [rsp+1Ch] [rbp-24h] BYREF

  p_m_iTransitionDirection = &this->m_iTransitionDirection;
  this->m_hGoalSequence = hSequence;
  m_pGameSceneNode = this->m_pGameSceneNode;
  hNextSequence.m_Data = -1;
  v5 = (*(m_pGameSceneNode->_vptr_CGameSceneNode + 10))(m_pGameSceneNode);
  if ( v5 != 0 )
    v6 = *(v5 + 736);
  else
    v6 = 0;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(*(v6 + 80)));
  v8 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v8 != 0 )
    v9 = *(v8 + 736);
  else
    v9 = 0;
  v10 = COERCE_FLOAT(_mm_cvtsi128_si32(*(v9 + 40)));
  v11 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 10))(this->m_pGameSceneNode);
  if ( v11 != 0 )
    v12 = *(v11 + 736);
  else
    v12 = 0;
  v13.m_Data = (*(*v12 + 192LL))(v12);
  if ( CBaseAnimating::GotoSequence(
         this,
         v13,
         v10,
         v7,
         this->m_hGoalSequence,
         &hNextSequence,
         nextCycle,
         p_m_iTransitionDirection) )
  {
    CDynamicProp::FinishSetSequence(this, hNextSequence);
  }
  CBaseEntity::ThinkSet(this, CDynamicProp::AnimThink, 0.0, 0, 0);
  NextThink = CBaseEntity::GetNextThink(this, 0);
  v15 = 0.0;
  v16 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v21 = NextThink;
        (m_pfnWarningFunc)(1, NextThink, 0.0);
        NextThink = v21;
      }
    }
    *&v15 = LODWORD(v16->m_flCurrentTime);
  }
  if ( *&v15 >= NextThink )
  {
    v18 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v19 = gpGlobals->m_pfnWarningFunc;
        if ( v19 != 0 )
          v19(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v20) = 0;
      *&v20 = v18->m_flCurrentTime + 0.1;
    }
    else
    {
      *&v20 = 1036831949;
    }
    CBaseEntity::SetNextThink(this, v20, v15, 0);
  }
}


// CDynamicProp::ShouldSetCreateTime  (line 676, @0x0000000002071f30, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String, _V_strstr, strstr
// calls: V_stricmp_fast, CBaseAnimating::GetModelPtr, CModel::name, strstr
// callers: CDynamicProp::InputSetAnimation
// strings: "l4d_airport05_runway", "airliner"
bool __fastcall CDynamicProp::ShouldSetCreateTime(CDynamicProp *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pCaller; // rax
  CEntityIdentity *m_pEntity; // rax
  const CModel *ModelPtr; // rax
  const char *v8; // rax

  if ( V_stricmp_fast(gpGlobals->mapname, "l4d_airport05_runway") != 0 )
    return 0;
  pCaller = inputdata->pCaller;
  if ( pCaller == 0 )
    return 0;
  m_pEntity = pCaller->m_pEntity;
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
  {
    if ( V_stricmp_fast(m_pEntity->m_designerName.u.m_Id, "logic_relay") != 0 )
      return 0;
  }
  else if ( V_stricmp_fast("", "logic_relay") != 0 )
  {
    return 0;
  }
  ModelPtr = CBaseAnimating::GetModelPtr(this);
  if ( ModelPtr == 0 )
    return 0;
  v8 = CModel::name(ModelPtr);
  return strstr(v8, "airliner") != 0;
}


