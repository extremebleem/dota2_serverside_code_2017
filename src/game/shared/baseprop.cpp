
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseProp::GetDataDescMap  (line 30, @0x0000000002058b50, libserver.so)
// globals: CBaseProp::m_DataMap
datamap_t *__fastcall CBaseProp::GetDataDescMap(CBaseProp *const this)
{
  return &CBaseProp::m_DataMap;
}


// CBaseProp::AddDatadescMetadataKeys  (line 30, @0x000000000206ee20, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseProp::GetEntityClass(void)
void __fastcall CBaseProp::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseProp::GetEntityClass);
}


// CBaseProp::GetBaseMap  (line 30, @0x000000000206ee40, libserver.so)
// globals: CBaseAnimating::m_DataMap
datamap_t *__cdecl CBaseProp::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CBaseProp>  (line 30, @0x000000000206ee50, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "CBaseProp"
// globals: `guard variable for'DataMapInit<CBaseProp>(CBaseProp *)::nameHolder, CBaseAnimating::m_DataMap, CBaseProp::GetEntityClass(void), DataMapInit<CBaseProp>(CBaseProp *)::dataDesc, CBaseProp::m_DataMap, DataMapInit<CBaseProp>(CBaseProp *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseProp>(CBaseProp *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseProp>(CBaseProp *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseProp>(CBaseProp *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseProp>(CBaseProp *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseProp>(CBaseProp *)::nameHolder.m_pszBase = "CBaseProp";
    DataMapInit<CBaseProp>(CBaseProp *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseProp>(CBaseProp *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseProp>(CBaseProp *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseProp>(CBaseProp *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseProp>(CBaseProp *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseProp>(CBaseProp *)::nameHolder,
      &_dso_handle);
  }
  CBaseProp::m_DataMap.dataNumFields = 1;
  CBaseProp::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  CBaseProp::m_DataMap.dataDesc = DataMapInit<CBaseProp>(CBaseProp *)::dataDesc;
  AddDatadescMetadataKeys(&CBaseProp::m_DataMap, CBaseProp::GetEntityClass);
  return &CBaseProp::m_DataMap;
}


// CBaseProp::Spawn  (line 38, @0x000000000207f220, libserver.so)  // inlines: AddSpawnFlags, ClassMatches, FClassnameIs, GetBaseAnimatingController, GetBool, GetClassNameAsCStr, GetClassname, GetInt, GetModelNameFromKeyValues, GetSkeletonInstance, NetworkStateChanged, Set, SetPlaybackRate, String, ToCStr, curtime, operator|=<int>
// calls: CEntityInstance::IsAuthoritative, CBaseAnimating::GetModelPtr, CBaseAnimating::Spawn, CBaseProp::ParsePropData, __dynamic_cast, CBaseEntity::SetNextThink, CBaseEntity::SetMoveType, CBaseEntity::SetDamageOptions, CBaseEntity::SetAnimTime, CBaseAnimating::SetCycle, CBaseEntity::AddEffects, CEntityIdentity::ClassMatches (23 total)
// callers: CBreakableProp::Spawn, CSimplePhysicsProp::Spawn, CPropVehicle::Spawn
// strings: "prop_physics", "%s at %.0f %.0f %0.f uses model %s, which has no propdata which means it must be used on , "%s at (%.3f, %.3f, %.3f) has no model name!\n", "models/error.vmdl", "%s at %.0f %.0f %0.f uses model %s, which has an invalid prop_data type. DELETED.\n", " disable_dynamic_prop_loading - Skipped door '%s'\n" (7 total)
// globals: `typeinfo for'CBaseProp
void __fastcall CBaseProp::Spawn(CBaseProp *const this, const CEntityKeyValues *pKeyValues)
{
  int v4; // r12d
  double v5; // xmm1_8
  float v6; // xmm1_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  float v12; // xmm1_4
  const char *v13; // r12
  const Vector *v14; // rax
  const char *v15; // rsi
  float v16; // xmm0_4
  CEntityIdentity *v17; // rax
  double v18; // xmm0_8
  const char *ModelNameFromKeyValues; // r13
  const Vector *AbsOrigin; // rax
  const char *m_pAsString; // rsi
  float x; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  double v24; // xmm0_8
  const char *v25; // r12
  const Vector *v26; // rax
  const char *v27; // rsi
  float v28; // xmm0_4
  CEntityIdentity *v29; // rax
  double v30; // xmm0_8
  const char *v31; // r12
  const Vector *v32; // rax
  const char *v33; // rsi
  float v34; // xmm0_4
  CEntityIdentity *v35; // rax
  double v36; // xmm0_8
  unsigned int v37; // r14d
  double v38; // [rsp+0h] [rbp-40h]
  double z; // [rsp+0h] [rbp-40h]
  double v40; // [rsp+0h] [rbp-40h]
  double v41; // [rsp+0h] [rbp-40h]
  double v42; // [rsp+8h] [rbp-38h]
  double y; // [rsp+8h] [rbp-38h]
  double v44; // [rsp+8h] [rbp-38h]
  double v45; // [rsp+8h] [rbp-38h]
  _QWORD v46[6]; // [rsp+10h] [rbp-30h] BYREF

  if ( !CEntityInstance::IsAuthoritative(this) )
  {
    CBaseAnimating::Spawn(this, pKeyValues);
    return;
  }
  if ( CBaseAnimating::GetModelPtr(this) == 0 )
  {
    ModelNameFromKeyValues = GetModelNameFromKeyValues(pKeyValues, "");
    if ( disable_dynamic_prop_loading.m_pParent->m_Value.m_nValue != 0
      && V_stristr_fast(ModelNameFromKeyValues, "door") == 0 )
    {
      UTIL_Remove(this);
      Msg(" disable_dynamic_prop_loading - Skipped door '%s'\n", ModelNameFromKeyValues);
      return;
    }
    if ( CEntityKeyValues::HasValue(pKeyValues, -1396705927)
      && CEntityKeyValues::GetValue<int>(pKeyValues, -1396705927) != 0 )
    {
      v37 = this->m_spawnflags.m_Value | 0x8000;
      if ( this->m_spawnflags.m_Value != v37 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_spawnflags.m_Value = v37;
      }
    }
    if ( ModelNameFromKeyValues == 0 || *ModelNameFromKeyValues == 0 )
    {
      z = CBaseEntity::GetAbsOrigin(this)->z;
      y = CBaseEntity::GetAbsOrigin(this)->y;
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      m_pAsString = "";
      x = AbsOrigin->x;
      m_pEntity = this->m_pEntity;
      v24 = x;
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      Msg("%s at (%.3f, %.3f, %.3f) has no model name!\n", m_pAsString, v24, y, z);
      ModelNameFromKeyValues = "models/error.vmdl";
    }
    CBaseModelEntity::SetModel(this, ModelNameFromKeyValues);
  }
  CBaseAnimating::Spawn(this, pKeyValues);
  v4 = CBaseProp::ParsePropData(this);
  if ( (*(this->_vptr_IHandleEntity + 252))(this) != 0 )
    goto LABEL_8;
  if ( v4 != 3 )
  {
    if ( v4 != 2 )
    {
      if ( v4 == 0
        && __dynamic_cast(this, &`typeinfo for'CBaseProp, &`typeinfo for'CPhysicsProp, 0) == 0
        && __dynamic_cast(this, &`typeinfo for'CBaseProp, &`typeinfo for'CBasePropDoor, 0) == 0 )
      {
        CBaseEntity::GetModelName(v46, this);
        v31 = "";
        if ( v46[0] != 0 )
          v31 = v46[0];
        v41 = CBaseEntity::GetAbsOrigin(this)->z;
        v45 = CBaseEntity::GetAbsOrigin(this)->y;
        v32 = CBaseEntity::GetAbsOrigin(this);
        v33 = "";
        v34 = v32->x;
        v35 = this->m_pEntity;
        v36 = v34;
        if ( v35->m_designerName.u.m_Id != 0 )
          v33 = v35->m_designerName.u.m_pAsString;
        DevWarning(
          "%s at %.0f %.0f %0.f uses model %s, which has propdata which means that it be used on a prop_physics or prop_d"
          "oor_xxx. DELETED.\n",
          v33,
          v36,
          v45,
          v41,
          v31);
        UTIL_Remove(this);
        return;
      }
      goto LABEL_8;
    }
    if ( this != 0 && CEntityIdentity::ClassMatches(this->m_pEntity, "prop_physics") )
    {
      if ( developer.m_pParent->m_Value.m_nValue == 0 || (CBaseEntity::GetModel(v46, this), (*(v46[0] + 16LL) & 2) == 0) )
      {
        CBaseEntity::GetModelName(v46, this);
        v13 = "";
        if ( v46[0] != 0 )
          v13 = v46[0];
        v38 = CBaseEntity::GetAbsOrigin(this)->z;
        v42 = CBaseEntity::GetAbsOrigin(this)->y;
        v14 = CBaseEntity::GetAbsOrigin(this);
        v15 = "";
        v16 = v14->x;
        v17 = this->m_pEntity;
        v18 = v16;
        if ( v17->m_designerName.u.m_Id != 0 )
          v15 = v17->m_designerName.u.m_pAsString;
        DevWarning(
          "%s at %.0f %.0f %0.f uses model %s, which has no propdata which means it must be used on a prop_static. DELETED.\n",
          v15,
          v18,
          v42,
          v38,
          v13);
        UTIL_Remove(this);
        return;
      }
    }
LABEL_8:
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v5, 0);
    CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
    m_flCurrentTime = 0.0;
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v8->m_flCurrentTime;
    }
    CBaseEntity::SetAnimTime(this, m_flCurrentTime, v6, 0);
    v10 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
    if ( v10 != 0 )
      v11 = *(v10 + 736);
    else
      v11 = 0;
    (*(*v11 + 176LL))(v11, 0.0);
    CBaseAnimating::SetCycle(this, 0.0, v12);
    CBaseEntity::AddEffects(this, 16);
    return;
  }
  CBaseEntity::GetModelName(v46, this);
  v25 = "";
  if ( v46[0] != 0 )
    v25 = v46[0];
  v40 = CBaseEntity::GetAbsOrigin(this)->z;
  v44 = CBaseEntity::GetAbsOrigin(this)->y;
  v26 = CBaseEntity::GetAbsOrigin(this);
  v27 = "";
  v28 = v26->x;
  v29 = this->m_pEntity;
  v30 = v28;
  if ( v29->m_designerName.u.m_Id != 0 )
    v27 = v29->m_designerName.u.m_pAsString;
  DevWarning(
    "%s at %.0f %.0f %0.f uses model %s, which has an invalid prop_data type. DELETED.\n",
    v27,
    v30,
    v44,
    v40,
    v25);
  UTIL_Remove(this);
}


// CBaseProp::Precache  (line 145, @0x000000000208cc70, libserver.so)  // inlines: Precache
// calls: CEntityInstance::IsAuthoritative, CBaseEntity::PrecacheModelFromKeyValues, CEntityInstance::Precache
// callers: CBreakableProp::Precache, CPropVehicle::Precache, CPropVehicleDriveable::Precache
// strings: "models/error.vmdl"
void __fastcall CBaseProp::Precache(CBaseProp *const this, const CEntityPrecacheContext *pContext)
{
  if ( CEntityInstance::IsAuthoritative(this) )
    CBaseEntity::PrecacheModelFromKeyValues(this, pContext, "models/error.vmdl", 0);
  CEntityInstance::Precache(this, pContext);
}


// CBaseProp::Activate  (line 173, @0x0000000002059e20, libserver.so)  // inlines: Activate, GetClassNameAsCStr, GetClassname, String, ToCStr
// calls: CBaseEntity::Activate, CCollisionProperty::UpdateLocateHandle, CBaseEntity::GetDamageOptions, CBaseEntity::GetHealth, CBaseEntity::GetModelName, Warning
// callers: CDevtestHierarchy::Activate, COrnamentProp::Activate, CBasePropDoor::Activate
// strings: "%s has a health specified in model '%s'. Use prop_physics or prop_dynamic instead.\n"
void __fastcall CBaseProp::Activate(CBaseProp *const this, ActivateType_t activateType)
{
  CEntityIdentity *m_pEntity; // rax
  const char *v4; // rdx
  const char *m_pAsString; // rsi
  const char *v6; // [rsp+0h] [rbp-20h] BYREF

  CBaseEntity::Activate(this, activateType);
  CCollisionProperty::UpdateLocateHandle(&this->m_Collision);
  if ( CBaseEntity::GetDamageOptions(this) == DamageOptions_t::DAMAGE_NO && CBaseEntity::GetHealth(this) != 0 )
  {
    CBaseEntity::GetModelName(&v6, this);
    m_pEntity = this->m_pEntity;
    v4 = "";
    m_pAsString = "";
    if ( v6 != 0 )
      v4 = v6;
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    Warning("%s has a health specified in model '%s'. Use prop_physics or prop_dynamic instead.\n", m_pAsString, v4);
  }
}


// CBaseProp::CalculateBlockLOS  (line 188, @0x000000000206ef20, libserver.so)  // inlines: VectorSubtract, operator-
// calls: CBaseEntity::SetBlocksLOS
// callers: CDynamicProp::SpawnServerSide, CBasePropDoor::Spawn, CPhysicsProp::Spawn
void __fastcall CBaseProp::CalculateBlockLOS(CBaseProp *const this)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r13
  float *v3; // r12
  float *v4; // rax
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  bool v8; // al

  p_m_Collision = &this->m_Collision;
  v3 = (*(this->m_Collision._vptr_ICollideable + 1))(&this->m_Collision);
  v4 = (*(this->m_Collision._vptr_ICollideable + 2))(p_m_Collision);
  v5 = *v4 - *v3;
  v6 = v4[1] - v3[1];
  v7 = v4[2] - v3[2];
  if ( v5 <= 30.0 )
    goto LABEL_10;
  v8 = 1;
  if ( v6 <= 40.0 )
    v8 = v5 > 40.0;
  if ( v6 <= 30.0 )
    goto LABEL_10;
  if ( v7 > 40.0 )
  {
    if ( v7 > 30.0 )
      return;
LABEL_10:
    CBaseEntity::SetBlocksLOS(this, 0);
    return;
  }
  if ( v7 <= 30.0 || !v8 )
    goto LABEL_10;
}


// CBaseProp::ParsePropData  (line 222, @0x000000000206eff0, libserver.so)
// calls: CBaseAnimating::GetModelPtr, KeyValues::operator new, KeyValues::KeyValues, CModel::KeyValueText, CModel::name, KeyValues::LoadFromBuffer, KeyValues::FindKey, __dynamic_cast, CPropData::ParsePropFromKV, KeyValues::deleteThis, __cxa_guard_acquire, KeyValuesSystem (16 total)
// callers: CBaseProp::Spawn
// strings: "prop_data"
// globals: `guard variable for'CBaseProp::ParsePropData(void)::keyPropData, CBaseProp::ParsePropData(void)::keyPropData, `typeinfo for'IBreakableWithPropData, `typeinfo for'CBaseProp
int __fastcall CBaseProp::ParsePropData(CBaseProp *const this)
{
  const CModel *ModelPtr; // rbx
  KeyValues *v3; // r13
  const char *v4; // r14
  const char *v5; // rax
  KeyValues *Key; // rbx
  char v7; // r14
  IBreakableWithPropData *v8; // rax
  int v9; // ebx
  __int64 v11; // rax

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  if ( ModelPtr == 0 )
    return 2;
  v3 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v3, "");
  v4 = CModel::KeyValueText(ModelPtr);
  v5 = CModel::name(ModelPtr);
  if ( !KeyValues::LoadFromBuffer(v3, v5, v4, 0, 0, 0, 0) )
    goto LABEL_6;
  if ( `guard variable for'CBaseProp::ParsePropData(void)::keyPropData == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseProp::ParsePropData(void)::keyPropData) != 0 )
  {
    v11 = KeyValuesSystem();
    CBaseProp::ParsePropData(void)::keyPropData.nIndex = (*(*v11 + 16LL))(v11, "prop_data", 1);
    __cxa_guard_release(&`guard variable for'CBaseProp::ParsePropData(void)::keyPropData);
  }
  Key = KeyValues::FindKey(v3, CBaseProp::ParsePropData(void)::keyPropData);
  if ( Key != 0 )
  {
    v7 = (*(this->_vptr_IHandleEntity + 252))(this);
    v8 = __dynamic_cast(this, &`typeinfo for'CBaseProp, &`typeinfo for'IBreakableWithPropData, -2);
    v9 = CPropData::ParsePropFromKV(g_pPropDataSystem, this, v8, Key, v3, v7);
    KeyValues::deleteThis(v3);
    return v9;
  }
  else
  {
LABEL_6:
    KeyValues::deleteThis(v3);
    return 2;
  }
}


// CBaseProp::DrawEntityDebugOverlays  (line 257, @0x0000000002059eb0, libserver.so)  // inlines: RemapVal
// calls: CBaseEntity::DrawEntityDebugOverlays, CBaseEntity::GetDamageOptions, CBaseEntity::GetHealth, NDebugOverlay::EntityBounds
// callers: CPropVehicle::DrawEntityDebugOverlays
void __fastcall CBaseProp::DrawEntityDebugOverlays(CBaseProp *const this, uint64 nDebugOverlayBits)
{
  int Health; // eax
  int v5; // edx
  float v6; // xmm0_4
  int v7; // ecx
  int v8; // esi

  CBaseEntity::DrawEntityDebugOverlays(this, nDebugOverlayBits);
  if ( (nDebugOverlayBits & 0x200000000LL) != 0 )
  {
    if ( CBaseEntity::GetDamageOptions(this) != DamageOptions_t::DAMAGE_NO )
    {
      if ( CBaseEntity::GetDamageOptions(this) == DamageOptions_t::DAMAGE_EVENTS_ONLY )
      {
        v7 = 255;
        v5 = 255;
        v8 = 255;
      }
      else
      {
        Health = CBaseEntity::GetHealth(this);
        v5 = 255;
        v6 = ((Health * 191.0) / 100.0) + 64.0;
        if ( v6 <= 255.0 )
        {
          LOBYTE(v5) = 0;
          if ( v6 >= 0.0 )
            v5 = v6;
        }
        v7 = 0;
        v8 = 0;
      }
      NDebugOverlay::EntityBounds(this, v8, v5, v7, 0, 0.0);
    }
    else
    {
      NDebugOverlay::EntityBounds(this, 255, 0, 0, 0, 0.0);
    }
  }
}


// CBaseProp::SetGlowOverrideColor  (line 282, @0x000000000206f1a0, libserver.so)  // inlines: Color, SetColor
// calls: CGlowProperty::SetGlowColorOverride
// callers: CDynamicProp::InputSetGlowOverride, CPhysicsProp::InputSetGlowOverride
void __fastcall CBaseProp::SetGlowOverrideColor(CBaseProp *const this, const Vector *const vGlowCol)
{
  unsigned __int16 v2; // dx

  LOBYTE(v2) = vGlowCol->x;
  HIBYTE(v2) = vGlowCol->y;
  CGlowProperty::SetGlowColorOverride(&this->m_Glow, ((vGlowCol->z << 16) | v2 | 0xFF000000));
}


// prop_debug  (line 291, @0x000000000205a6f0, libserver.so)  // inlines: FirstEnt
// calls: CGameEntitySystem::NextEnt, __dynamic_cast, CBaseEntity::ToggleDebugBits
// globals: `typeinfo for'CBaseProp
void __fastcall prop_debug(const CCommandContext *const ctx, const CCommand *const args)
{
  CBaseEntity *i; // rbx
  CBaseEntity *v3; // rax

  for ( i = CGameEntitySystem::NextEnt(g_pGameEntitySystem, 0);
        i != 0;
        i = CGameEntitySystem::NextEnt(g_pGameEntitySystem, i) )
  {
    v3 = __dynamic_cast(i, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseProp, 0);
    if ( v3 != 0 )
      CBaseEntity::ToggleDebugBits(v3, 0x200000000uLL);
  }
}


