// Reconstructed from DWARF by pahole; not original source.

// src/game/server/env_dof_controller.cpp:44
class C_CEnvDOFController_MapInstall {
	C_CEnvDOFController_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvDOFController::GetDataDescMap  (line 17, @0x00000000021baf70, libserver.so)
// globals: CEnvDOFController::m_DataMap
datamap_t *__fastcall CEnvDOFController::GetDataDescMap(CEnvDOFController *const this)
{
  return &CEnvDOFController::m_DataMap;
}


// CEnvDOFController::AddDatadescMetadataKeys  (line 17, @0x00000000021cf770, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvDOFController::GetEntityClass(void)
void __fastcall CEnvDOFController::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvDOFController::GetEntityClass);
}


// CEnvDOFController::GetBaseMap  (line 17, @0x00000000021cf790, libserver.so)
datamap_t *__cdecl CEnvDOFController::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvDOFController>  (line 17, @0x00000000021d7d70, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvDOFController"
// globals: `guard variable for'DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder, `guard variable for'DataMapInit<CEnvDOFController>(CEnvDOFController *)::dataDesc, CEnvDOFController::GetEntityClass(void), CEnvDOFController::m_DataMap, DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvDOFController>(CEnvDOFController *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder.m_pszBase = "CEnvDOFController";
    DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder,
      &_dso_handle);
  }
  CEnvDOFController::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvDOFController>(CEnvDOFController *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvDOFController>(CEnvDOFController *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder.m_nLenBase + 17);
    strcpy(stpcpy(v2, DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder.m_pszBase), "UpdateParamBlend");
    m_Size = DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder.m_Names.m_Size == DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CEnvDOFController>(CEnvDOFController *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CEnvDOFController>(CEnvDOFController *)::dataDesc[11].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvDOFController>(CEnvDOFController *)::dataDesc);
  }
  CEnvDOFController::m_DataMap.dataNumFields = 19;
  CEnvDOFController::m_DataMap.dataDesc = &DataMapInit<CEnvDOFController>(CEnvDOFController *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvDOFController::m_DataMap, CEnvDOFController::GetEntityClass);
  return &CEnvDOFController::m_DataMap;
}


// CEnvDOFController::YouForgotToImplementOrDeclareServerClass  (line 44, @0x00000000021baf80, libserver.so)
int __fastcall CEnvDOFController::YouForgotToImplementOrDeclareServerClass(CEnvDOFController *const this)
{
  return 0;
}


// CEnvDOFController::GetServerClass  (line 44, @0x00000000021c4930, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEnvDOFController::GetServerClass(CEnvDOFController *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CEnvDOFController::Spawn  (line 49, @0x00000000021bb6c0, libserver.so)
// calls: CPointEntity::Spawn, CBaseEntity::SetMoveType
void __fastcall CEnvDOFController::Spawn(CEnvDOFController *const this, const CEntityKeyValues *pKeyValues)
{
  CPointEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
}


// CEnvDOFController::Activate  (line 59, @0x00000000021bfe00, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntityIdentity, GetEntryIndex, GetSerialNumber, IndexToIdentity, LookupEntity, Set, curtime, operator bool, operator=
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CEntityHandle::gm_pEntityList, CEnvDOFController::UpdateParamBlend(void)
void __fastcall CEnvDOFController::Activate(CEnvDOFController *const this, ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // cx
  CConcreteEntityList *v7; // rsi
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  double v11; // xmm1_8
  double v12; // xmm0_8
  CGlobalVars *v13; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  CBaseEntity::Activate(this, activateType);
  iszName.u.m_Id = this->m_strFocusTargetName.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
  {
    v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v7 = CEntityHandle::gm_pEntityList;
    LOWORD(this->m_hFocusTarget.m_Index) = v6 | this->m_hFocusTarget.m_Index & 0x8000;
    v8 = (v5 << 15) | this->m_hFocusTarget.m_Index & 0x7FFF;
    this->m_hFocusTarget.m_Index = v8;
    if ( v8 + 2 > 1 )
    {
      v9 = v7->m_pIdentityChunks[(LOWORD(this->m_hFocusTarget.m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[this->m_hFocusTarget.m_Index & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        {
          CBaseEntity::ThinkSet(this, CEnvDOFController::UpdateParamBlend, 0.0, 0, 0);
          v12 = 0.0;
          v13 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                (m_pfnWarningFunc)(1, 0.0);
            }
            *&v12 = LODWORD(v13->m_flCurrentTime);
          }
          *&v12 = *&v12 + 0.1;
          CBaseEntity::SetNextThink(this, v12, v11, 0);
        }
      }
    }
  }
  else
  {
    this->m_hFocusTarget.m_Index = -1;
  }
}


// CEnvDOFController::UpdateTransmitState  (line 77, @0x00000000021bb160, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CEnvDOFController::UpdateTransmitState(CEnvDOFController *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CEnvDOFController::InputSetNearBlurDepth  (line 85, @0x00000000021be540, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CEnvDOFController::InputSetNearBlurDepth(CEnvDOFController *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flNearBlurDepth.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flNearBlurDepth.m_Value = v4;
  }
}


// CEnvDOFController::InputSetNearFocusDepth  (line 93, @0x00000000021be5c0, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CEnvDOFController::InputSetNearFocusDepth(CEnvDOFController *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flNearFocusDepth.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 804, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flNearFocusDepth.m_Value = v4;
  }
}


// CEnvDOFController::InputSetFarFocusDepth  (line 101, @0x00000000021be780, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CEnvDOFController::InputSetFarFocusDepth(CEnvDOFController *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flFarFocusDepth.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 808, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFarFocusDepth.m_Value = v4;
  }
}


// CEnvDOFController::InputSetFarBlurDepth  (line 109, @0x00000000021be700, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CEnvDOFController::InputSetFarBlurDepth(CEnvDOFController *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flFarBlurDepth.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFarBlurDepth.m_Value = v4;
  }
}


// CEnvDOFController::InputSetNearBlurRadius  (line 117, @0x00000000021be8f0, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<bool>, operator=<float>
void __fastcall CEnvDOFController::InputSetNearBlurRadius(CEnvDOFController *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm1_4
  float m_Value; // xmm0_4
  char v5; // r12
  float v6; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  m_Value = this->m_flNearBlurRadius.m_Value;
  if ( m_float64 == m_Value )
  {
    v5 = 1;
    if ( m_Value > 0.0 )
      goto LABEL_5;
  }
  else
  {
    v6 = m_float64;
    v5 = 1;
    (*(this->_vptr_IHandleEntity + 22))(this, 816, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flNearBlurRadius.m_Value = v6;
    if ( v6 > 0.0 )
      goto LABEL_5;
  }
  v5 = this->m_flFarBlurRadius.m_Value > 0.0;
LABEL_5:
  if ( v5 != this->m_bDOFEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bDOFEnabled.m_Value = v5;
  }
}


// CEnvDOFController::InputSetFarBlurRadius  (line 126, @0x00000000021be800, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<bool>, operator=<float>
void __fastcall CEnvDOFController::InputSetFarBlurRadius(CEnvDOFController *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  char v4; // r12
  float v5; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flFarBlurRadius.m_Value )
  {
    v5 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFarBlurRadius.m_Value = v5;
  }
  v4 = 1;
  if ( this->m_flNearBlurRadius.m_Value <= 0.0 )
    v4 = this->m_flFarBlurRadius.m_Value > 0.0;
  if ( v4 != this->m_bDOFEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bDOFEnabled.m_Value = v4;
  }
}


// CEnvDOFController::SetControllerState  (line 135, @0x00000000021cf7a0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>, operator=<float>
void __fastcall CEnvDOFController::SetControllerState(CEnvDOFController *const this, DOFControlSettings_t setting)
{
  float flNearBlurRadius; // xmm0_4
  bool v4; // zf
  char v5; // r12
  float v6; // [rsp+Ch] [rbp-14h]

  if ( setting.flNearBlurDepth == this->m_flNearBlurDepth.m_Value )
  {
    flNearBlurRadius = setting.flNearBlurRadius;
    v4 = setting.flNearBlurRadius == this->m_flNearBlurRadius.m_Value;
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flNearBlurDepth.m_Value = setting.flNearBlurDepth;
    flNearBlurRadius = setting.flNearBlurRadius;
    v4 = setting.flNearBlurRadius == this->m_flNearBlurRadius.m_Value;
  }
  if ( !v4 )
  {
    v6 = flNearBlurRadius;
    (*(this->_vptr_IHandleEntity + 22))(this, 816, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flNearBlurRadius.m_Value = v6;
  }
  if ( setting.flNearFocusDistance != this->m_flNearFocusDepth.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 804, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flNearFocusDepth.m_Value = setting.flNearFocusDistance;
  }
  if ( setting.flFarBlurDepth != this->m_flFarBlurDepth.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFarBlurDepth.m_Value = setting.flFarBlurDepth;
  }
  if ( setting.flFarBlurRadius != this->m_flFarBlurRadius.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFarBlurRadius.m_Value = setting.flFarBlurRadius;
  }
  if ( setting.flFarFocusDistance != this->m_flFarFocusDepth.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 808, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFarFocusDepth.m_Value = setting.flFarFocusDistance;
  }
  v5 = 1;
  if ( this->m_flNearBlurRadius.m_Value <= 0.0 )
    v5 = this->m_flFarBlurRadius.m_Value > 0.0;
  if ( v5 != this->m_bDOFEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bDOFEnabled.m_Value = v5;
  }
}


// CEnvDOFController::UpdateParamBlend  (line 154, @0x00000000021c0420, libserver.so)  // inlines: AI_GetSinglePlayer, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetForModify, GetInstance, IndexToIdentity, IsValid, Length, LookupEntity, NetworkStateChanged, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, curtime, operator CEntityInstance*, operator bool, operator-, operator->
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, UTIL_GetLocalPlayer, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList, CEnvDOFController::UpdateParamBlend(void)
void __fastcall CEnvDOFController::UpdateParamBlend(CEnvDOFController *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  double v5; // xmm1_8
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v8; // xmm0_8
  CBasePlayer *LocalPlayer; // rdi
  const Vector *AbsOrigin; // rax
  const CBaseEntity *m_pInstance; // rdi
  float *p_x; // r12
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  const Vector *v16; // rax
  int (**vptr_IHandleEntity)(...); // rax
  float flDistToFocus; // [rsp+0h] [rbp-30h]

  m_Index = this->m_hFocusTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hFocusTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hFocusTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        LocalPlayer = 0;
        if ( gpGlobals->maxClients <= 1 )
          LocalPlayer = UTIL_GetLocalPlayer();
        AbsOrigin = CBaseEntity::GetAbsOrigin(LocalPlayer);
        m_pInstance = 0;
        p_x = &AbsOrigin->x;
        v13 = this->m_hFocusTarget.m_Index;
        if ( v13 + 2 > 1 )
        {
          v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hFocusTarget.m_Index) >> 9) & 0x3F];
          if ( v14 != 0 )
          {
            v15 = &v14[this->m_hFocusTarget.m_Index & 0x1FF];
            if ( v15 != 0 && v13 == v15->m_EHandle.m_Index )
              m_pInstance = v15->m_pInstance;
          }
        }
        v16 = CBaseEntity::GetAbsOrigin(m_pInstance);
        flDistToFocus = fsqrt(
                          (((v16->x - *p_x) * (v16->x - *p_x)) + ((v16->y - p_x[1]) * (v16->y - p_x[1])))
                        + ((v16->z - p_x[2]) * (v16->z - p_x[2])));
        (*(this->_vptr_IHandleEntity + 22))(this, 808, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        vptr_IHandleEntity = this->_vptr_IHandleEntity;
        this->m_flFarFocusDepth.m_Value = flDistToFocus + this->m_flFocusTargetRange;
        vptr_IHandleEntity[22](this, 812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_flFarBlurDepth.m_Value = this->m_flFarFocusDepth.m_Value + 500.0;
      }
    }
  }
  CBaseEntity::ThinkSet(this, CEnvDOFController::UpdateParamBlend, 0.0, 0, 0);
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v8) = 0;
    *&v8 = v6->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v8 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v8, v5, 0);
}


// CEnvDOFController::InputSetFocusTarget  (line 173, @0x00000000021c3e30, libserver.so)  // inlines: AssignTo, GetEHandle, GetEntityIdentity, GetEntryIndex, GetSerialNumber, IndexToIdentity, LookupEntity, Set, TempString, ToString, curtime, operator bool, operator=
// calls: CGameEntitySystem::FindEntityByName, V_snprintf, VariantFieldTypeName, Warning, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_21C3E63, CEntityHandle::gm_pEntityList, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, CEnvDOFController::UpdateParamBlend(void)
void __fastcall CEnvDOFController::InputSetFocusTarget(CEnvDOFController *const this, inputdata_t *const inputdata)
{
  int16 m_type; // di
  char *m_pszString; // rdx
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx
  CConcreteEntityList *v9; // rsi
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  const char *v13; // rax
  double m_float; // xmm0_8
  const char *v15; // rcx
  const char *v16; // rdx
  double v17; // xmm1_8
  double v18; // xmm0_8
  CGlobalVars *v19; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

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
        goto LABEL_16;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_19;
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
        goto LABEL_24;
      case 6:
        v15 = "true";
        v16 = "%s";
        if ( inputdata->value.m_char == 0 )
          v15 = "false";
        goto LABEL_21;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_24;
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
        goto LABEL_22;
      case 33:
        v15 = inputdata->value.m_pszString;
        v16 = "%llu";
LABEL_21:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v16, v15);
LABEL_22:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_24:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v13 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v13);
LABEL_16:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, m_pszString, this, 0, 0, 0);
  if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
  {
    v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v8 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v9 = CEntityHandle::gm_pEntityList;
    LOWORD(this->m_hFocusTarget.m_Index) = v8 | this->m_hFocusTarget.m_Index & 0x8000;
    v10 = (v7 << 15) | this->m_hFocusTarget.m_Index & 0x7FFF;
    this->m_hFocusTarget.m_Index = v10;
    if ( v10 + 2 > 1 )
    {
      v11 = v9->m_pIdentityChunks[(LOWORD(this->m_hFocusTarget.m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[this->m_hFocusTarget.m_Index & 0x1FF];
        if ( v12 != 0 && v12->m_EHandle.m_Index == v10 )
        {
          CBaseEntity::ThinkSet(this, CEnvDOFController::UpdateParamBlend, 0.0, 0, 0);
          v18 = 0.0;
          v19 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                (m_pfnWarningFunc)(1, 0.0);
            }
            *&v18 = LODWORD(v19->m_flCurrentTime);
          }
          *&v18 = *&v18 + 0.1;
          CBaseEntity::SetNextThink(this, v18, v17, 0);
        }
      }
    }
  }
  else
  {
    this->m_hFocusTarget.m_Index = -1;
  }
}


// CEnvDOFController::InputSetFocusTargetRange  (line 189, @0x00000000021baf90, libserver.so)  // inlines: Float, operator float
void __fastcall CEnvDOFController::InputSetFocusTargetRange(
        CEnvDOFController *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_flFocusTargetRange = m_float64;
}


