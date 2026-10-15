
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGlowProperty::CGlowProperty  (line 21, @0x000000000226f340, libserver.so)  // inlines: CNetworkColorBase, CNetworkVarBase, CSceneObjectAutoPtrBase, Color, EnsureValidValue<bool>, EnsureValidValue<int>, Init, NetworkStateChanged, SetAlpha, SetBlue, SetComponent, SetGreen, SetVal, ~CSceneObjectAutoPtrBase
// calls: CGlowProperty::Init, CSceneObjectAutoPtrBase<CGlowHelperSceneObject>::Delete, _Unwind_Resume
// callers: CSchemaClassBinding<CGlowProperty>::Allocate, CSchemaClassBinding<CGlowProperty>::ConstructInPlace, CSchemaClassBinding<CGlowProperty>::AllocateAndCopyConstruct, CBaseModelEntity::CBaseModelEntity
void __fastcall CGlowProperty::CGlowProperty(CGlowProperty *const this)
{
  bool v2; // zf

  this->m_glowColorOverride = 0;
  v2 = this->m_glowColorOverride.m_Value._color[1] == 0;
  this->_vptr_CGlowProperty = off_404EE70;
  this->m_pDepthStencilSceneObject.m_p = 0;
  this->m_pGlowSceneObject.m_p = 0;
  this->m_iGlowType.m_Value = 0;
  this->m_nGlowRange.m_Value = 0;
  this->m_nGlowRangeMin.m_Value = 0;
  if ( !v2 )
    this->m_glowColorOverride.m_Value._color[1] = 0;
  if ( this->m_glowColorOverride.m_Value._color[2] != 0 )
  {
    (*(this->_vptr_CGlowProperty + 2))(this, 60, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_glowColorOverride.m_Value._color[2] = 0;
  }
  if ( this->m_glowColorOverride.m_Value._color[3] != 0 )
  {
    (*(this->_vptr_CGlowProperty + 2))(this, 60, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_glowColorOverride.m_Value._color[3] = 0;
  }
  this->m_bFlashing.m_Value = 0;
  CGlowProperty::Init(this, 0);
}


// CGlowProperty::Init  (line 28, @0x0000000002266b50, libserver.so)  // inlines: Color, NetworkStateChanged, Set, SetColor, SetRawColor, operator=, operator=<<anonymous enum> >, operator=<bool>, operator=<int>
// callers: CBaseModelEntity::CBaseModelEntity, CBaseAnimating::CBaseAnimating, CGlowProperty::Reset, CGlowProperty::CGlowProperty
void __fastcall CGlowProperty::Init(CGlowProperty *const this, CBaseModelEntity *pEntity)
{
  int m_Value; // r11d
  bool v4; // zf

  m_Value = this->m_iGlowType.m_Value;
  this->m_pOuter = pEntity;
  if ( m_Value != 0 )
  {
    (*(this->_vptr_CGlowProperty + 2))(this, 48, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iGlowType.m_Value = 0;
  }
  if ( this->m_nGlowRange.m_Value != 0 )
  {
    (*(this->_vptr_CGlowProperty + 2))(this, 52, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nGlowRange.m_Value = 0;
  }
  if ( this->m_nGlowRangeMin.m_Value != 0 )
  {
    (*(this->_vptr_CGlowProperty + 2))(this, 56, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nGlowRangeMin.m_Value = 0;
  }
  this->m_iGlowTeam = -1;
  if ( *&this->m_glowColorOverride != -16777216 )
  {
    (*(this->_vptr_CGlowProperty + 2))(this, 60, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_glowColorOverride = -16777216;
  }
  v4 = !this->m_bFlashing.m_Value;
  this->m_bGlowing = 0;
  if ( !v4 )
  {
    (*(this->_vptr_CGlowProperty + 2))(this, 64, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bFlashing.m_Value = 0;
  }
}


// CGlowProperty::Reset  (line 41, @0x0000000002266c60, libserver.so)
// calls: CGlowProperty::Init
// callers: CBaseAnimating::UpdateOnRemove
void __fastcall CGlowProperty::Reset(CGlowProperty *const this)
{
  CGlowProperty::Init(this, 0);
}


// CGlowProperty::SetGlowState  (line 51, @0x0000000002266c70, libserver.so)  // inlines: NetworkStateChanged, Set, StopGlowing, operator=<int>
// callers: CDynamicProp::InputStartGlowing, CDynamicProp::InputStopGlowing, CDynamicProp::SpawnServerSide, CGlowProperty::OnGlowTypeChanged, CItemGeneric::UpdateDerivedGlowState, CPhysicsProp::InputStartGlowing, CPhysicsProp::InputStopGlowing, CPhysicsProp::Spawn
void __fastcall CGlowProperty::SetGlowState(CGlowProperty *const this, int iGlowtype)
{
  if ( this->m_iGlowType.m_Value != iGlowtype )
  {
    (*(this->_vptr_CGlowProperty + 2))(this, 48, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iGlowType.m_Value = iGlowtype;
  }
  if ( iGlowtype == 0 )
    this->m_bGlowing = 0;
}


// CGlowProperty::SetGlowRange  (line 72, @0x0000000002266cb0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CDynamicProp::InputSetGlowRange, CDynamicProp::SpawnServerSide, CItemGeneric::UpdateDerivedGlowState, CPhysicsProp::InputSetGlowRange, CPhysicsProp::Spawn
void __fastcall CGlowProperty::SetGlowRange(CGlowProperty *const this, int nRange)
{
  if ( this->m_nGlowRange.m_Value != nRange )
  {
    (*(this->_vptr_CGlowProperty + 2))(this, 52, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nGlowRange.m_Value = nRange;
  }
}


// CGlowProperty::SetGlowRangeMin  (line 79, @0x0000000002266ce0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CDynamicProp::SpawnServerSide, CItemGeneric::UpdateDerivedGlowState, CPhysicsProp::Spawn
void __fastcall CGlowProperty::SetGlowRangeMin(CGlowProperty *const this, int nRangeMin)
{
  if ( this->m_nGlowRangeMin.m_Value != nRangeMin )
  {
    (*(this->_vptr_CGlowProperty + 2))(this, 56, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nGlowRangeMin.m_Value = nRangeMin;
  }
}


// CGlowProperty::SetGlowTeam  (line 86, @0x0000000002266d10, libserver.so)
void __fastcall CGlowProperty::SetGlowTeam(CGlowProperty *const this, int iTeam)
{
  this->m_iGlowTeam = iTeam;
}


// CGlowProperty::SetGlowColorOverride  (line 93, @0x0000000002266d20, libserver.so)  // inlines: NetworkStateChanged, Set, SetRawColor, operator=
// callers: CBaseProp::SetGlowOverrideColor, CDynamicProp::SpawnServerSide, CPhysicsProp::Spawn
void __fastcall CGlowProperty::SetGlowColorOverride(CGlowProperty *const this, Color color)
{
  if ( *&this->m_glowColorOverride != color )
  {
    (*(this->_vptr_CGlowProperty + 2))(this, 60, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_glowColorOverride.m_Value = color;
  }
}


// CGlowProperty::GetGlowRange  (line 100, @0x0000000002266d50, libserver.so)
int __fastcall CGlowProperty::GetGlowRange(const CGlowProperty *const this)
{
  return this->m_nGlowRange.m_Value;
}


// CGlowProperty::GetGlowRangeMin  (line 106, @0x0000000002266d60, libserver.so)
int __fastcall CGlowProperty::GetGlowRangeMin(const CGlowProperty *const this)
{
  return this->m_nGlowRangeMin.m_Value;
}


// CGlowProperty::GetGlowTeam  (line 113, @0x0000000002266d70, libserver.so)
int __fastcall CGlowProperty::GetGlowTeam(const CGlowProperty *const this)
{
  return this->m_iGlowTeam;
}


// CGlowProperty::GetGlowColorOverride  (line 119, @0x0000000002266d80, libserver.so)  // inlines: curtime
// calls: sin
void __fastcall CGlowProperty::GetGlowColorOverride(
        const CGlowProperty *const this,
        unsigned __int8 *r,
        unsigned __int8 *g,
        unsigned __int8 *b)
{
  CGlobalVars *v7; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v9; // xmm0_4

  if ( *&this->m_glowColorOverride != -16777216 )
  {
    *r = this->m_glowColorOverride.m_Value._color[0];
    *g = this->m_glowColorOverride.m_Value._color[1];
    *b = this->m_glowColorOverride.m_Value._color[2];
  }
  if ( this->m_bFlashing.m_Value )
  {
    v7 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v9 = sin((20.0 * v7->m_flCurrentTime)) * 0.300000011920929 + 0.699999988079071;
    }
    else
    {
      v9 = 0.69999999;
    }
    *r = (*r * v9);
    *g = (*g * v9);
    *b = (*b * v9);
  }
}


// CGlowProperty::GetGlowColorOverrideNormalized  (line 138, @0x0000000002266e80, libserver.so)  // inlines: curtime
// calls: sin
void __fastcall CGlowProperty::GetGlowColorOverrideNormalized(
        const CGlowProperty *const this,
        float *r,
        float *g,
        float *b)
{
  __m128d v4; // xmm0
  CGlobalVars *v8; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v10; // xmm0_4

  if ( *&this->m_glowColorOverride != -16777216 )
  {
    v4.m128d_f64[0] = this->m_glowColorOverride.m_Value._color[0] * 0.00392156862745098;
    *r = _mm_movedup_pd(v4).m128d_f64[0];
    v4.m128d_f64[0] = this->m_glowColorOverride.m_Value._color[1] * 0.00392156862745098;
    *g = _mm_movedup_pd(v4).m128d_f64[0];
    v4.m128d_f64[0] = this->m_glowColorOverride.m_Value._color[2] * 0.00392156862745098;
    *b = _mm_movedup_pd(v4).m128d_f64[0];
  }
  if ( this->m_bFlashing.m_Value )
  {
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v10 = sin((20.0 * v8->m_flCurrentTime)) * 0.300000011920929 + 0.699999988079071;
    }
    else
    {
      v10 = 0.69999999;
    }
    *r = *r * v10;
    *g = *g * v10;
    *b = v10 * *b;
  }
}


// CGlowProperty::GetGlowState  (line 157, @0x0000000002266fb0, libserver.so)
int __fastcall CGlowProperty::GetGlowState(const CGlowProperty *const this)
{
  return this->m_iGlowType.m_Value;
}


// CGlowProperty::AddToGlowList  (line 166, @0x0000000002266fc0, libserver.so)
void __fastcall CGlowProperty::AddToGlowList(CGlowProperty *const this)
{
  ;
}


// CGlowProperty::RemoveFromGlowList  (line 176, @0x0000000002266fd0, libserver.so)
void __fastcall CGlowProperty::RemoveFromGlowList(CGlowProperty *const this)
{
  ;
}


// CGlowProperty::StartGlowing  (line 186, @0x0000000002266fe0, libserver.so)
// callers: CDynamicProp::SpawnServerSide
void __fastcall CGlowProperty::StartGlowing(CGlowProperty *const this)
{
  this->m_bGlowing = 1;
}


// CGlowProperty::StopGlowing  (line 195, @0x0000000002266ff0, libserver.so)
void __fastcall CGlowProperty::StopGlowing(CGlowProperty *const this)
{
  this->m_bGlowing = 0;
}


// CGlowProperty::MarkOwnerDirty  (line 201, @0x0000000002267000, libserver.so)
void __fastcall CGlowProperty::MarkOwnerDirty(CGlowProperty *const this)
{
  ;
}


// CGlowProperty::IsGlowing  (line 212, @0x0000000002267010, libserver.so)
bool __fastcall CGlowProperty::IsGlowing(const CGlowProperty *const this)
{
  return this->m_bGlowing;
}


// CGlowProperty::OnGlowTypeChanged  (line 217, @0x0000000002267020, libserver.so)
// calls: CGlowProperty::SetGlowState
void __fastcall CGlowProperty::OnGlowTypeChanged(CGlowProperty *const this)
{
  CGlowProperty::SetGlowState(this, this->m_iGlowType.m_Value);
}


// CGlowProperty::OnGlowColorChanged  (line 222, @0x0000000002267030, libserver.so)
void __fastcall CGlowProperty::OnGlowColorChanged(CGlowProperty *const this)
{
  ;
}


// CGlowProperty::~CGlowProperty  (line 228, @0x0000000002267040, libserver.so)  // inlines: Delete, Detach, ~CSceneObjectAutoPtrBase
// callers: CSchemaClassBinding<CGlowProperty>::Deallocate, CSchemaClassBinding<CGlowProperty>::DestructInPlace, CBaseModelEntity::~CBaseModelEntity, CBaseModelEntity::CBaseModelEntity
void __fastcall CGlowProperty::~CGlowProperty(CGlowProperty *const this)
{
  CGlowHelperSceneObject *m_p; // rsi
  CGlowHelperSceneObject *v3; // rsi

  this->_vptr_CGlowProperty = off_404EE70;
  if ( this->m_bGlowing )
    this->m_bGlowing = 0;
  m_p = this->m_pGlowSceneObject.m_p;
  this->m_pGlowSceneObject.m_p = 0;
  if ( m_p != 0 )
    (*(*g_pSceneSystem + 136LL))(g_pSceneSystem);
  v3 = this->m_pDepthStencilSceneObject.m_p;
  this->m_pDepthStencilSceneObject.m_p = 0;
  if ( v3 != 0 )
    (*(*g_pSceneSystem + 136LL))(g_pSceneSystem);
}


// CGlowProperty::AddDatadescMetadataKeys  (line 239, @0x00000000022670c0, libserver.so)
void __fastcall CGlowProperty::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CGlowProperty::GetBaseMap  (line 239, @0x00000000022670d0, libserver.so)
datamap_t *__cdecl CGlowProperty::GetBaseMap()
{
  return 0;
}


// DataMapInit<CGlowProperty>  (line 239, @0x00000000022670e0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "CGlowProperty"
// globals: `guard variable for'DataMapInit<CGlowProperty>(CGlowProperty *)::nameHolder, CGlowProperty::m_DataMap, DataMapInit<CGlowProperty>(CGlowProperty *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CGlowProperty>(CGlowProperty *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CGlowProperty>(CGlowProperty *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGlowProperty>(CGlowProperty *)::nameHolder) != 0 )
  {
    DataMapInit<CGlowProperty>(CGlowProperty *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CGlowProperty>(CGlowProperty *)::nameHolder.m_pszBase = "CGlowProperty";
    DataMapInit<CGlowProperty>(CGlowProperty *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CGlowProperty>(CGlowProperty *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CGlowProperty>(CGlowProperty *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CGlowProperty>(CGlowProperty *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGlowProperty>(CGlowProperty *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CGlowProperty>(CGlowProperty *)::nameHolder,
      &_dso_handle);
  }
  CGlowProperty::m_DataMap.baseMap = 0;
  CGlowProperty::m_DataMap.dataDesc = &DataMapInit<CGlowProperty>(CGlowProperty *)::dataDesc[1];
  CGlowProperty::m_DataMap.dataNumFields = 8;
  return &CGlowProperty::m_DataMap;
}


