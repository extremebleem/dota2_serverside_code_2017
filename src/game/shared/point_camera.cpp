// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/point_camera.cpp:36
class C_CPointCamera_MapInstall {
	C_CPointCamera_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetPointCameraList  (line 26, @0x0000000001edf830, libserver.so)
// globals: CEntityClassList<CPointCamera>::m_pClassList
CPointCamera *__cdecl GetPointCameraList()
{
  return CEntityClassList<CPointCamera>::m_pClassList;
}


// CPointCamera::YouForgotToImplementOrDeclareServerClass  (line 36, @0x0000000001ecc0c0, libserver.so)
int __fastcall CPointCamera::YouForgotToImplementOrDeclareServerClass(CPointCamera *const this)
{
  return 0;
}


// CPointCamera::GetServerClass  (line 36, @0x0000000001ed1220, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPointCamera::GetServerClass(CPointCamera *const this)
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


// CPointCamera::CPointCamera  (line 41, @0x0000000001edf840, libserver.so)  // inlines: CNetworkColorBase, CNetworkVarBase, Color, EnsureValidValue<bool>, EnsureValidValue<float>, Init, NetworkStateChanged, Set, SetAlpha, SetBlue, SetComponent, SetGreen, SetVal, operator=<bool>, operator=<float>
// calls: CBaseEntity::CBaseEntity, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CPointCamera::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPointCamera::CPointCamera(CPointCamera *const this)
{
  bool v2; // zf

  CBaseEntity::CBaseEntity(this);
  this->m_FogColor = 0;
  v2 = this->m_FogColor.m_Value._color[1] == 0;
  this->_vptr_IHandleEntity = &off_3FC1830;
  this->m_FOV.m_Value = 0.0;
  this->m_Resolution.m_Value = 0.0;
  this->m_bFogEnable.m_Value = 0;
  if ( !v2 )
  {
    CBaseEntity::NetworkStateChanged(this, 0x311u, -1, -1);
    this->m_FogColor.m_Value._color[1] = 0;
  }
  if ( this->m_FogColor.m_Value._color[2] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 785, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_FogColor.m_Value._color[2] = 0;
  }
  if ( this->m_FogColor.m_Value._color[3] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 785, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_FogColor.m_Value._color[3] = 0;
  }
  v2 = !this->m_bFogEnable.m_Value;
  this->m_flFogStart.m_Value = 0.0;
  this->m_flFogEnd.m_Value = 0.0;
  this->m_flFogMaxDensity.m_Value = 0.0;
  this->m_bActive.m_Value = 0;
  this->m_bUseScreenAspectRatio.m_Value = 0;
  this->m_flAspectRatio.m_Value = 0.0;
  this->m_bNoSky.m_Value = 0;
  this->m_fBrightness.m_Value = 0.0;
  this->m_flZFar.m_Value = 0.0;
  this->m_flZNear.m_Value = 0.0;
  this->m_flOverrideShadowFarZ.m_Value = 0.0;
  this->m_bIsOn = 0;
  if ( v2
    || ((*(this->_vptr_IHandleEntity + 22))(this, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL),
        this->m_bFogEnable.m_Value = 0,
        this->m_fBrightness.m_Value != -1.0) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 816, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fBrightness.m_Value = -1.0;
  }
}


// CPointCamera::Spawn  (line 54, @0x0000000001ecf4b0, libserver.so)  // inlines: GetSpawnGroupHandle, Insert, NetworkStateChanged, Set, operator=<bool>
// calls: CBaseEntity::Spawn, CEntityInstance::IsAuthoritative, IsSpawnGroupAssociatedWithPrimaryMap
// globals: CEntityClassList<CPointCamera>::m_pClassList
void __fastcall CPointCamera::Spawn(CPointCamera *const this, const CEntityKeyValues *pKeyValues)
{
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // edi
  CPointCamera *v5; // rax
  bool m_Value; // zf

  CBaseEntity::Spawn(this, pKeyValues);
  if ( CEntityInstance::IsAuthoritative(this) )
  {
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
    {
      this->m_bIsOn = 0;
    }
    else
    {
      m_Value = this->m_bActive.m_Value;
      this->m_bIsOn = 1;
      if ( !m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 804, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_bActive.m_Value = 1;
      }
    }
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
      m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
    else
      m_hSpawnGroup = 0;
    if ( IsSpawnGroupAssociatedWithPrimaryMap(m_hSpawnGroup) )
    {
      v5 = CEntityClassList<CPointCamera>::m_pClassList;
      CEntityClassList<CPointCamera>::m_pClassList = this;
      this->m_pNext = v5;
    }
  }
}


// CPointCamera::UpdateOnRemove  (line 79, @0x0000000001ecdcc0, libserver.so)  // inlines: GetSpawnGroupHandle, Remove
// calls: CBaseEntity::UpdateOnRemove, IsSpawnGroupAssociatedWithPrimaryMap
// globals: CEntityClassList<CPointCamera>::m_pClassList
void __fastcall CPointCamera::UpdateOnRemove(CPointCamera *const this)
{
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // edi
  CPointCamera *v4; // rdx
  CPointCamera **p_m_pNext; // rdx
  CPointCamera *m_pNext; // rax

  CBaseEntity::UpdateOnRemove(this);
  m_pEntity = this->m_pEntity;
  if ( m_pEntity != 0 )
    m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
  else
    m_hSpawnGroup = 0;
  if ( IsSpawnGroupAssociatedWithPrimaryMap(m_hSpawnGroup) )
  {
    v4 = CEntityClassList<CPointCamera>::m_pClassList;
    if ( CEntityClassList<CPointCamera>::m_pClassList != 0 )
    {
      if ( this == CEntityClassList<CPointCamera>::m_pClassList )
      {
        p_m_pNext = &CEntityClassList<CPointCamera>::m_pClassList;
        m_pNext = this;
LABEL_12:
        *p_m_pNext = m_pNext->m_pNext;
      }
      else
      {
        while ( 1 )
        {
          m_pNext = v4->m_pNext;
          if ( m_pNext == 0 )
            break;
          if ( this == m_pNext )
          {
            p_m_pNext = &v4->m_pNext;
            goto LABEL_12;
          }
          v4 = v4->m_pNext;
        }
      }
    }
  }
}


// CPointCamera::UpdateTransmitState  (line 93, @0x0000000001ecdc90, libserver.so)  // inlines: SetTransmitState
// calls: CNetworkTransmitComponent::SetTransmitState
int __fastcall CPointCamera::UpdateTransmitState(CPointCamera *const this)
{
  if ( this->m_bActive.m_Value )
    return CNetworkTransmitComponent::SetTransmitState(&this->m_NetworkTransmitComponent, 4);
  else
    return CNetworkTransmitComponent::SetTransmitState(&this->m_NetworkTransmitComponent, 8);
}


// CPointCamera::ShouldDraw  (line 105, @0x0000000001ecc0d0, libserver.so)
bool __fastcall CPointCamera::ShouldDraw(CPointCamera *const this)
{
  return 0;
}


// CPointCamera::SetActive  (line 114, @0x0000000001edf9f0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// calls: CEntityInstance::IsAuthoritative, CBaseEntity::DispatchUpdateTransmitState
// callers: CPointCamera::InputSetOff, CPointCamera::InputSetOnAndTurnOthersOff, CPointCamera::InputForceInactive
void __fastcall CPointCamera::SetActive(CPointCamera *const this, bool bActive)
{
  if ( CEntityInstance::IsAuthoritative(this) )
  {
    if ( !this->m_bIsOn )
      bActive = 0;
    if ( bActive != this->m_bActive.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 804, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bActive.m_Value = bActive;
      CBaseEntity::DispatchUpdateTransmitState(this);
    }
  }
}


// CPointCamera::GetFOV  (line 136, @0x0000000001edfb10, libserver.so)
float __fastcall CPointCamera::GetFOV(CPointCamera *const this)
{
  return this->m_FOV.m_Value;
}


// CPointCamera::GetResolution  (line 141, @0x0000000001edfb20, libserver.so)
float __fastcall CPointCamera::GetResolution(CPointCamera *const this)
{
  return this->m_Resolution.m_Value;
}


// CPointCamera::IsFogEnabled  (line 146, @0x0000000001edfb30, libserver.so)
bool __fastcall CPointCamera::IsFogEnabled(CPointCamera *const this)
{
  return this->m_bFogEnable.m_Value;
}


// CPointCamera::GetFogColor  (line 151, @0x0000000001edfb40, libserver.so)
void __fastcall CPointCamera::GetFogColor(
        CPointCamera *const this,
        unsigned __int8 *const r,
        unsigned __int8 *const g,
        unsigned __int8 *const b)
{
  *r = this->m_FogColor.m_Value._color[0];
  *g = this->m_FogColor.m_Value._color[1];
  *b = this->m_FogColor.m_Value._color[2];
}


// CPointCamera::GetFogStart  (line 158, @0x0000000001edfb70, libserver.so)
float __fastcall CPointCamera::GetFogStart(CPointCamera *const this)
{
  return this->m_flFogStart.m_Value;
}


// CPointCamera::GetFogEnd  (line 163, @0x0000000001edfb80, libserver.so)
float __fastcall CPointCamera::GetFogEnd(CPointCamera *const this)
{
  return this->m_flFogEnd.m_Value;
}


// CPointCamera::GetFogMaxDensity  (line 168, @0x0000000001edfb90, libserver.so)
float __fastcall CPointCamera::GetFogMaxDensity(CPointCamera *const this)
{
  return this->m_flFogMaxDensity.m_Value;
}


// CPointCamera::GetZNear  (line 173, @0x0000000001edfba0, libserver.so)
float __fastcall CPointCamera::GetZNear(const CPointCamera *const this)
{
  return this->m_flZNear.m_Value;
}


// CPointCamera::GetZFar  (line 178, @0x0000000001edfbb0, libserver.so)
float __fastcall CPointCamera::GetZFar(const CPointCamera *const this)
{
  return this->m_flZFar.m_Value;
}


// CPointCamera::GetOverrideShadowFarZ  (line 184, @0x0000000001edfbc0, libserver.so)
float __fastcall CPointCamera::GetOverrideShadowFarZ(const CPointCamera *const this)
{
  return this->m_flOverrideShadowFarZ.m_Value;
}


// CPointCamera::CalcFrustum  (line 192, @0x0000000001edfbd0, libserver.so)  // inlines: CalcAbsolutePosition, GetAbsAngles, GetAbsOrigin, Load, SetCameraAspect, SetCameraFOV, SetCameraNearFarPlanes
// calls: CFrustum::SetCameraPositionAndAngles, CFrustum::UpdateProjectionFromCamera, CFrustum::CalcViewProj, CGameSceneNode::CalcAbsolutePositionWhenDirty
void __fastcall CPointCamera::CalcFrustum(const CPointCamera *const this, CFrustum *const frustum)
{
  CGameSceneNode *m_pGameSceneNode; // r13
  const QAngle *p_m_angAbsRotation; // rdx
  CGameSceneNode *v6; // r13
  float m_Value; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  bool v11; // zf
  const QAngle *v12; // [rsp+8h] [rbp-28h]

  m_pGameSceneNode = this->m_pGameSceneNode;
  if ( m_pGameSceneNode->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pGameSceneNode);
  p_m_angAbsRotation = &m_pGameSceneNode->m_angAbsRotation;
  v6 = this->m_pGameSceneNode;
  if ( v6->m_bDirtyAbsTransform.m_value )
  {
    v12 = p_m_angAbsRotation;
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pGameSceneNode);
    p_m_angAbsRotation = v12;
  }
  CFrustum::SetCameraPositionAndAngles(frustum, &v6->m_vecAbsOrigin, p_m_angAbsRotation);
  m_Value = this->m_FOV.m_Value;
  if ( m_Value != frustum->m_camera.m_flFOVX )
  {
    frustum->m_camera.m_flFOVX = m_Value;
    CFrustum::UpdateProjectionFromCamera(frustum);
  }
  v8 = this->m_flZNear.m_Value;
  v9 = this->m_flZFar.m_Value;
  if ( v8 == frustum->m_camera.m_flZNear && v9 == frustum->m_camera.m_flZFar )
  {
    v10 = this->m_flAspectRatio.m_Value;
    v11 = v10 == frustum->m_camera.m_flAspect;
  }
  else
  {
    frustum->m_camera.m_flZNear = v8;
    frustum->m_camera.m_flZFar = v9;
    CFrustum::UpdateProjectionFromCamera(frustum);
    v10 = this->m_flAspectRatio.m_Value;
    v11 = v10 == frustum->m_camera.m_flAspect;
  }
  if ( !v11 )
  {
    frustum->m_camera.m_flAspect = v10;
    CFrustum::UpdateProjectionFromCamera(frustum);
  }
  CFrustum::CalcViewProj(frustum);
}


// CPointCamera::InputChangeFOV  (line 205, @0x0000000001ee78f0, libserver.so)  // inlines: TempString, ToString, V_strncpy<long unsigned int>, atof, curtime
// calls: CVariantBase<CVariantDefaultAllocator>::AssignTo, _V_strncpy, strtok, strtod, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, __stack_chk_fail
// globals: CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, CPointCamera::ChangeFOVThink(void)
void __fastcall CPointCamera::InputChangeFOV(CPointCamera *const this, inputdata_t *const inputdata)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  const char *m_pszString; // rsi
  char *v6; // rax
  double v7; // xmm0_8
  float v8; // xmm1_4
  float v9; // xmm0_4
  char *v10; // rax
  float v11; // xmm0_4
  double v12; // xmm1_8
  double v13; // xmm0_8
  CGlobalVars *v14; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  char parseString[264]; // [rsp+0h] [rbp-120h] BYREF
  unsigned __int64 v17; // [rsp+108h] [rbp-18h]

  v17 = __readfsqword(0x28u);
  if ( inputdata->value.m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    CVariantBase<CVariantDefaultAllocator>::AssignTo(
      &inputdata->value,
      &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
      0x200u);
    m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
  }
  _V_strncpy(parseString, m_pszString, 255, v2, v3);
  v6 = strtok(parseString, " ");
  if ( v6 != 0 )
  {
    v7 = strtod(v6, 0);
    v8 = 180.0;
    v9 = v7;
    if ( v9 <= 180.0 )
      v8 = fmaxf(0.0, v9);
    this->m_TargetFOV = v8;
  }
  else
  {
    this->m_TargetFOV = this->m_FOV.m_Value;
  }
  v10 = strtok(0, " ");
  if ( v10 != 0 )
  {
    v11 = strtod(v10, 0);
    if ( v11 <= 0.05 )
      v11 = 0.050000001;
  }
  else
  {
    v11 = 1.0;
  }
  this->m_DegreesPerSecond = (this->m_TargetFOV - this->m_FOV.m_Value) / v11;
  CBaseEntity::ThinkSet(this, CPointCamera::ChangeFOVThink, 0.0, 0, 0);
  v13 = 0.0;
  v14 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v13 = LODWORD(v14->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v13, v12, 0);
}


// CPointCamera::ChangeFOVThink  (line 248, @0x0000000001ee7ad0, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator=<float>
// calls: CBaseEntity::SetNextThink, CBaseEntity::ThinkSet
void __fastcall CPointCamera::ChangeFOVThink(CPointCamera *const this)
{
  double v1; // xmm1_8
  CGlobalVars *v3; // r12
  double v4; // xmm0_8
  float m_DegreesPerSecond; // xmm2_4
  __m128 v6; // xmm4
  __m128d v7; // xmm0
  bool v8; // cc
  float v9; // xmm1_4
  float m_TargetFOV; // xmm2_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float newFOV; // [rsp+8h] [rbp-18h]
  float newFOVa; // [rsp+8h] [rbp-18h]

  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v4 = v3->m_flCurrentTime + 0.05;
  }
  else
  {
    *&v4 = 1028443341;
  }
  CBaseEntity::SetNextThink(this, v4, v1, 0);
  m_DegreesPerSecond = this->m_DegreesPerSecond;
  v6 = _mm_unpacklo_ps(LODWORD(this->m_FOV.m_Value), LODWORD(this->m_FOV.m_Value));
  v7 = _mm_cvtps_pd(v6);
  v7.m128d_f64[0] = v7.m128d_f64[0] + m_DegreesPerSecond * 0.05;
  v8 = m_DegreesPerSecond >= 0.0;
  v9 = _mm_movedup_pd(v7).m128d_f64[0];
  m_TargetFOV = this->m_TargetFOV;
  if ( v8 )
  {
    if ( v9 < m_TargetFOV )
      goto LABEL_6;
  }
  else if ( m_TargetFOV < v9 )
  {
    goto LABEL_6;
  }
  newFOVa = this->m_TargetFOV;
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  v6.m128_i32[0] = LODWORD(this->m_FOV.m_Value);
  v9 = newFOVa;
LABEL_6:
  if ( v9 != v6.m128_f32[0] )
  {
    newFOV = v9;
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_FOV.m_Value = newFOV;
  }
}


// CPointCamera::InputSetOnAndTurnOthersOff  (line 279, @0x0000000001edfa80, libserver.so)  // inlines: InputSetOff, InputSetOn
// calls: CPointCamera::SetActive, CGameEntitySystem::FindEntityByClassname
// strings: "point_camera"
void __fastcall CPointCamera::InputSetOnAndTurnOthersOff(CPointCamera *const this, inputdata_t *const inputdata)
{
  CBaseEntity *v3; // rbx
  CPointCamera *EntityByClassname; // rax

  v3 = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v3, "point_camera");
    v3 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    EntityByClassname->m_bIsOn = 0;
    CPointCamera::SetActive(EntityByClassname, 0);
  }
  this->m_bIsOn = 1;
}


// CPointCamera::InputSetOn  (line 295, @0x0000000001ecc0e0, libserver.so)
void __fastcall CPointCamera::InputSetOn(CPointCamera *const this, inputdata_t *const inputdata)
{
  this->m_bIsOn = 1;
}


// CPointCamera::InputSetOff  (line 303, @0x0000000001edfa60, libserver.so)
// calls: CPointCamera::SetActive
void __fastcall CPointCamera::InputSetOff(CPointCamera *const this, inputdata_t *const inputdata)
{
  this->m_bIsOn = 0;
  CPointCamera::SetActive(this, 0);
}


// CPointCamera::InputForceActive  (line 312, @0x0000000001ecf0f0, libserver.so)  // inlines: InputSetOn, NetworkStateChanged, Set, operator=<bool>
// calls: CGameEntitySystem::FindEntityByClassname
// strings: "point_camera"
void __fastcall CPointCamera::InputForceActive(CPointCamera *const this, inputdata_t *const inputdata)
{
  CBaseEntity *EntityByClassname; // rax
  bool m_Value; // zf
  CPointCamera *pCamera; // [rsp+8h] [rbp-18h]

  EntityByClassname = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, EntityByClassname, "point_camera");
    if ( EntityByClassname == 0 )
      break;
    if ( BYTE4(EntityByClassname[1].m_iszPrivateVScripts.u.m_pAsString) != 0 )
    {
      pCamera = EntityByClassname;
      (*(EntityByClassname->_vptr_IHandleEntity + 22))(EntityByClassname, 804, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      EntityByClassname = pCamera;
      pCamera->m_bActive.m_Value = 0;
    }
  }
  m_Value = this->m_bActive.m_Value;
  this->m_bIsOn = 1;
  if ( !m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 804, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bActive.m_Value = 1;
  }
  (*(this->_vptr_IHandleEntity + 64))(this);
}


// CPointCamera::InputForceInactive  (line 332, @0x0000000001edfae0, libserver.so)
// calls: CPointCamera::SetActive
void __fastcall CPointCamera::InputForceInactive(CPointCamera *const this, inputdata_t *const inputdata)
{
  this->m_bIsOn = 0;
  CPointCamera::SetActive(this, 0);
  (*(this->_vptr_IHandleEntity + 64))(this);
}


// CPointCamera::GetDataDescMap  (line 339, @0x0000000001ecc0f0, libserver.so)
// globals: CPointCamera::m_DataMap
datamap_t *__fastcall CPointCamera::GetDataDescMap(CPointCamera *const this)
{
  return &CPointCamera::m_DataMap;
}


// CPointCamera::AddDatadescMetadataKeys  (line 339, @0x0000000001edfd10, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointCamera::GetEntityClass(void)
void __fastcall CPointCamera::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointCamera::GetEntityClass);
}


// CPointCamera::GetBaseMap  (line 339, @0x0000000001edfd30, libserver.so)
datamap_t *__cdecl CPointCamera::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CPointCamera>  (line 339, @0x0000000001edfd40, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "CPointCamera"
// globals: `guard variable for'DataMapInit<CPointCamera>(CPointCamera *)::nameHolder, CPointCamera::GetEntityClass(void), CPointCamera::m_DataMap, DataMapInit<CPointCamera>(CPointCamera *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointCamera>(CPointCamera *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPointCamera>(CPointCamera *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointCamera>(CPointCamera *)::nameHolder) != 0 )
  {
    DataMapInit<CPointCamera>(CPointCamera *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointCamera>(CPointCamera *)::nameHolder.m_pszBase = "CPointCamera";
    DataMapInit<CPointCamera>(CPointCamera *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointCamera>(CPointCamera *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointCamera>(CPointCamera *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointCamera>(CPointCamera *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointCamera>(CPointCamera *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointCamera>(CPointCamera *)::nameHolder,
      &_dso_handle);
  }
  CPointCamera::m_DataMap.dataNumFields = 25;
  CPointCamera::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CPointCamera::m_DataMap.dataDesc = &DataMapInit<CPointCamera>(CPointCamera *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointCamera::m_DataMap, CPointCamera::GetEntityClass);
  return &CPointCamera::m_DataMap;
}


