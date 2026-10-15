// Reconstructed from DWARF by pahole; not original source.

// src/game/server/colorcorrection.cpp:53
class C_CColorCorrection_MapInstall {
	C_CColorCorrection_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CColorCorrection::GetDataDescMap  (line 19, @0x00000000021877a0, libserver.so)
// globals: CColorCorrection::m_DataMap
datamap_t *__fastcall CColorCorrection::GetDataDescMap(CColorCorrection *const this)
{
  return &CColorCorrection::m_DataMap;
}


// CColorCorrection::AddDatadescMetadataKeys  (line 19, @0x000000000219d820, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CColorCorrection::GetEntityClass(void)
void __fastcall CColorCorrection::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CColorCorrection::GetEntityClass);
}


// CColorCorrection::GetBaseMap  (line 19, @0x000000000219d840, libserver.so)
datamap_t *__cdecl CColorCorrection::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CColorCorrection>  (line 19, @0x00000000021adc70, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CColorCorrection"
// globals: `guard variable for'DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder, `guard variable for'DataMapInit<CColorCorrection>(CColorCorrection *)::dataDesc, CColorCorrection::GetEntityClass(void), CColorCorrection::m_DataMap, DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CColorCorrection>(CColorCorrection *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder) != 0 )
  {
    DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_pszBase = "CColorCorrection";
    DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder,
      &_dso_handle);
  }
  CColorCorrection::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CColorCorrection>(CColorCorrection *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CColorCorrection>(CColorCorrection *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v2, DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_pszBase), "FadeInThink");
    m_Size = DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Size == DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CColorCorrection>(CColorCorrection *)::dataDesc[1].fieldName = v2;
    v6 = operator new[](DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v6, DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_pszBase), "FadeOutThink");
    v7 = DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Size == DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CColorCorrection>(CColorCorrection *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CColorCorrection>(CColorCorrection *)::dataDesc[2].fieldName = v6;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CColorCorrection>(CColorCorrection *)::dataDesc);
  }
  CColorCorrection::m_DataMap.dataNumFields = 23;
  CColorCorrection::m_DataMap.dataDesc = &DataMapInit<CColorCorrection>(CColorCorrection *)::dataDesc[1];
  AddDatadescMetadataKeys(&CColorCorrection::m_DataMap, CColorCorrection::GetEntityClass);
  return &CColorCorrection::m_DataMap;
}


// CColorCorrection::YouForgotToImplementOrDeclareServerClass  (line 53, @0x00000000021877b0, libserver.so)
int __fastcall CColorCorrection::YouForgotToImplementOrDeclareServerClass(CColorCorrection *const this)
{
  return 0;
}


// CColorCorrection::GetServerClass  (line 53, @0x000000000218f140, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CColorCorrection::GetServerClass(CColorCorrection *const this)
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


// CColorCorrection::CColorCorrection  (line 57, @0x000000000219d850, libserver.so)  // inlines: CNetworkVarBase, CUtlSymbolLarge, EnsureValidValue<bool>, EnsureValidValue<float>, GetForModify, NetworkStateChanged, Set, operator=, operator=<bool>, operator=<float>
// calls: CBaseEntity::CBaseEntity, CBaseEntity::NetworkStateChanged, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CColorCorrection::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CColorCorrection::CColorCorrection(CColorCorrection *const this)
{
  double v2; // xmm1_8
  bool v3; // zf
  __int64 v4; // xmm0_8
  double v5; // xmm2_8
  double v6; // xmm3_8
  double v7; // xmm4_8
  int (**vptr_IHandleEntity)(...); // rax

  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_40106B0;
  this->m_flFadeInDuration.m_Value = 0.0;
  this->m_flFadeOutDuration.m_Value = 0.0;
  this->m_flMaxWeight.m_Value = 0.0;
  this->m_bEnabled.m_Value = 0;
  this->m_bMaster.m_Value = 0;
  this->m_bClientSide.m_Value = 0;
  this->m_bExclusive.m_Value = 0;
  this->m_MinFalloff.m_Value = 0.0;
  this->m_MaxFalloff.m_Value = 0.0;
  this->m_flCurWeight.m_Value = 0.0;
  this->m_lookupFilename.u.m_Id = 0;
  CBaseEntity::NetworkStateChanged(this, 0x325u, -1, -1);
  v2 = 0.0;
  v3 = this->m_MinFalloff.m_Value == 0.0;
  this->m_bEnabled.m_Value = 1;
  if ( !v3 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_MinFalloff.m_Value = 0.0;
  }
  if ( this->m_MaxFalloff.m_Value != 1000.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 816, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_MaxFalloff.m_Value = 1000.0;
  }
  v4 = 1065353216;
  if ( this->m_flMaxWeight.m_Value != 1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1.0);
    this->m_flMaxWeight.m_Value = 1.0;
  }
  v5 = 0.0;
  if ( this->m_flCurWeight.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 820, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v4, v2, 0.0);
    this->m_flCurWeight.m_Value = 0.0;
  }
  v6 = 0.0;
  if ( this->m_flFadeInDuration.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v4, v2, v5, 0.0);
    this->m_flFadeInDuration.m_Value = 0.0;
  }
  v7 = 0.0;
  if ( this->m_flFadeOutDuration.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v4, v2, v5, v6, 0.0);
    this->m_flFadeOutDuration.m_Value = 0.0;
  }
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_flStartFadeInWeight = 0.0;
  this->m_flStartFadeOutWeight = 0.0;
  this->m_flTimeStartFadeIn = 0.0;
  this->m_flTimeStartFadeOut = 0.0;
  vptr_IHandleEntity[22](this, 824, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v4, v2, v5, v6, v7);
  v3 = !this->m_bMaster.m_Value;
  this->m_netlookupFilename.m_Value[0] = 0;
  this->m_lookupFilename.u.m_Id = 0;
  if ( !v3 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 806, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bMaster.m_Value = 0;
  }
  if ( this->m_bClientSide.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 807, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bClientSide.m_Value = 0;
  }
  if ( this->m_bExclusive.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 808, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bExclusive.m_Value = 0;
  }
}


// CColorCorrection::UpdateTransmitState  (line 81, @0x0000000002187c30, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CColorCorrection::UpdateTransmitState(CColorCorrection *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CColorCorrection::Spawn  (line 90, @0x000000000218a8c0, libserver.so)  // inlines: AddEFlags, HasSpawnFlags, IsClientSide, IsMaster, NetworkStateChanged, Set, operator=<bool>, operator=<float>
// calls: CBaseEntity::Spawn, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::ThinkSet
// globals: s_pFadeInContextThink, CColorCorrection::FadeInThink(void), s_pFadeOutContextThink, CColorCorrection::FadeOutThink(void)
void __fastcall CColorCorrection::Spawn(CColorCorrection *const this, const CEntityKeyValues *pKeyValues)
{
  bool v3; // zf
  unsigned int m_Value; // eax
  bool v5; // r13
  bool v6; // r12

  CBaseEntity::Spawn(this, pKeyValues);
  this->m_iEFlags |= 0x80u;
  CBaseEntity::DispatchUpdateTransmitState(this);
  CBaseEntity::ThinkSet(this, CColorCorrection::FadeInThink, -1.0, s_pFadeInContextThink, 0);
  CBaseEntity::ThinkSet(this, CColorCorrection::FadeOutThink, -1.0, s_pFadeOutContextThink, 0);
  if ( this->m_bStartDisabled )
  {
    if ( this->m_bEnabled.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 805, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v3 = this->m_flCurWeight.m_Value == 0.0;
      this->m_bEnabled.m_Value = 0;
    }
    else
    {
      v3 = this->m_flCurWeight.m_Value == 0.0;
    }
    if ( !v3 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flCurWeight.m_Value = 0.0;
    }
  }
  else
  {
    if ( !this->m_bEnabled.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 805, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bEnabled.m_Value = 1;
    }
    if ( this->m_flCurWeight.m_Value != 1.0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 820, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1.0);
      this->m_flCurWeight.m_Value = 1.0;
    }
  }
  m_Value = this->m_spawnflags.m_Value;
  v5 = m_Value & 1;
  if ( (this->m_spawnflags.m_Value & 1) != this->m_bMaster.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 806, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_Value = this->m_spawnflags.m_Value;
    this->m_bMaster.m_Value = v5;
  }
  v6 = (m_Value & 2) != 0;
  if ( v6 != this->m_bClientSide.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 807, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bClientSide.m_Value = v6;
  }
}


// CColorCorrection::Activate  (line 115, @0x000000000218a4b0, libserver.so)  // inlines: GetForModify, NetworkStateChanged, String, ToCStr, V_strncpy<int>
// calls: CBaseEntity::Activate, _V_strncpy
void __fastcall CColorCorrection::Activate(CColorCorrection *const this, ActivateType_t activateType)
{
  const char *m_pAsString; // r12

  m_pAsString = "";
  CBaseEntity::Activate(this, activateType);
  if ( this->m_lookupFilename.u.m_Id != 0 )
    m_pAsString = this->m_lookupFilename.u.m_pAsString;
  (*(this->_vptr_IHandleEntity + 22))(this, 824, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  _V_strncpy(&this->m_netlookupFilename, m_pAsString, 260);
}


// CColorCorrection::FadeIn  (line 125, @0x000000000219dbb0, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator=<bool>
// calls: CBaseEntity::SetNextThink
// callers: CColorCorrection::InputEnable
// globals: s_pFadeInContextThink
void __fastcall CColorCorrection::FadeIn(CColorCorrection *const this)
{
  double v1; // xmm1_8
  CGlobalVars *v3; // r12
  CGlobalVars *v4; // rax
  CGlobalVars *v5; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  bool v7; // zf
  CGlobalVars *v8; // rax
  void (__fastcall *v9)(__int64); // rax
  double v10; // xmm0_8

  if ( !this->m_bClientSide.m_Value )
  {
    if ( this->m_bEnabled.m_Value )
    {
      if ( this->m_flCurWeight.m_Value >= this->m_flMaxWeight.m_Value )
        return;
    }
    else
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 805, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bEnabled.m_Value = 1;
    }
    v3 = gpGlobals;
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v5 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        v5 = gpGlobals;
        if ( m_pfnWarningFunc != 0 )
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v5 = gpGlobals;
          v4 = gpGlobals;
        }
      }
      v7 = v4 == 0;
      v8 = v5;
      this->m_flTimeStartFadeIn = v3->m_flCurrentTime;
      this->m_flStartFadeInWeight = this->m_flCurWeight.m_Value;
      if ( v7 )
      {
        v10 = 0.0;
      }
      else
      {
        if ( !v5->m_bEnableAssertions && !v5->m_bInSimulation )
        {
          v9 = v5->m_pfnWarningFunc;
          if ( v9 != 0 )
          {
            v9(1);
            v8 = gpGlobals;
          }
          else
          {
            v8 = v5;
          }
        }
        *&v10 = LODWORD(v5->m_flCurrentTime);
      }
    }
    else
    {
      *&v1 = LODWORD(this->m_flCurWeight.m_Value);
      v10 = 0.0;
      v8 = 0;
      this->m_flTimeStartFadeIn = 0.0;
      this->m_flStartFadeInWeight = *&v1;
    }
    *&v10 = *&v10 + v8->interval_per_tick;
    CBaseEntity::SetNextThink(this, v10, v1, s_pFadeInContextThink);
  }
}


// CColorCorrection::FadeOut  (line 139, @0x000000000219ddc0, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator=<bool>
// calls: CBaseEntity::SetNextThink
// callers: CColorCorrection::InputDisable
// globals: s_pFadeOutContextThink
void __fastcall CColorCorrection::FadeOut(CColorCorrection *const this)
{
  double v1; // xmm1_8
  CGlobalVars *v3; // r12
  CGlobalVars *v4; // rax
  CGlobalVars *v5; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  bool v7; // zf
  CGlobalVars *v8; // rax
  void (__fastcall *v9)(__int64); // rax
  double v10; // xmm0_8

  if ( !this->m_bClientSide.m_Value )
  {
    if ( this->m_bEnabled.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 805, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bEnabled.m_Value = 0;
    }
    else if ( this->m_flCurWeight.m_Value <= 0.0 )
    {
      return;
    }
    v3 = gpGlobals;
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v5 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        v5 = gpGlobals;
        if ( m_pfnWarningFunc != 0 )
        {
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v5 = gpGlobals;
          v4 = gpGlobals;
        }
      }
      v7 = v4 == 0;
      v8 = v5;
      this->m_flTimeStartFadeOut = v3->m_flCurrentTime;
      this->m_flStartFadeOutWeight = this->m_flCurWeight.m_Value;
      if ( v7 )
      {
        v10 = 0.0;
      }
      else
      {
        if ( !v5->m_bEnableAssertions && !v5->m_bInSimulation )
        {
          v9 = v5->m_pfnWarningFunc;
          if ( v9 != 0 )
          {
            v9(1);
            v8 = gpGlobals;
          }
          else
          {
            v8 = v5;
          }
        }
        *&v10 = LODWORD(v5->m_flCurrentTime);
      }
    }
    else
    {
      *&v1 = LODWORD(this->m_flCurWeight.m_Value);
      v10 = 0.0;
      v8 = 0;
      this->m_flTimeStartFadeOut = 0.0;
      this->m_flStartFadeOutWeight = *&v1;
    }
    *&v10 = *&v10 + v8->interval_per_tick;
    CBaseEntity::SetNextThink(this, v10, v1, s_pFadeOutContextThink);
  }
}


// CColorCorrection::FadeInThink  (line 153, @0x000000000218cd20, libserver.so)  // inlines: Lerp<float>, NetworkStateChanged, Set, curtime, operator<=<int>, operator=<float>, operator>=<CNetworkVarBase<float, CColorCorrection::NetworkVar_m_flMaxWeight> >
// calls: CBaseEntity::SetNextThink
// globals: s_pFadeInContextThink
void __fastcall CColorCorrection::FadeInThink(CColorCorrection *const this)
{
  unsigned __int64 v1; // xmm1_8
  __m128 v2; // xmm0
  float m_Value; // xmm3_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  uint32 m_nHashCode; // esi
  __m128 m_flStartFadeInWeight_low; // xmm5
  double v9; // xmm1_8
  float v10; // xmm6_4
  CGlobalVars *v11; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  __m128 m_flCurrentTime_low; // xmm1
  float v14; // xmm3_4
  float v15; // xmm2_4
  CGlobalVars *v16; // r12
  CGlobalVars *v17; // rax
  FnGlobalVarsWarningFunc v18; // rax
  float v19; // [rsp-24h] [rbp-2Ch]
  float v20; // [rsp-24h] [rbp-2Ch]

  v2.m128_u64[0] = 0;
  m_Value = this->m_flFadeInDuration.m_Value;
  if ( m_Value <= 0.0
    || (v5 = this->m_flCurWeight.m_Value, v6 = this->m_flMaxWeight.m_Value, v5 >= v6)
    || !this->m_bEnabled.m_Value
    || v6 == 0.0
    || (m_flStartFadeInWeight_low = LODWORD(this->m_flStartFadeInWeight), m_flStartFadeInWeight_low.m128_f32[0] >= v6) )
  {
    m_nHashCode = s_pFadeInContextThink.m_nHashCode;
    v2.m128_u64[0] = 3212836864LL;
  }
  else
  {
    if ( m_flStartFadeInWeight_low.m128_f32[0] > 0.0 )
    {
      v9 = 0.009999990463256836;
      v10 = m_flStartFadeInWeight_low.m128_f32[0] / v6;
      if ( (m_flStartFadeInWeight_low.m128_f32[0] / v6) <= 0.99000001 )
      {
        v9 = 1.0;
        if ( v10 >= 0.0 )
          v9 = 1.0 - v10;
      }
      m_Value = m_Value * v9;
    }
    v11 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v19 = m_Value;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          m_flStartFadeInWeight_low = LODWORD(this->m_flStartFadeInWeight);
          v6 = this->m_flMaxWeight.m_Value;
          v5 = this->m_flCurWeight.m_Value;
          v2.m128_u64[0] = 0;
          m_Value = v19;
        }
      }
      m_flCurrentTime_low = LODWORD(v11->m_flCurrentTime);
    }
    else
    {
      m_flCurrentTime_low = 0;
    }
    m_flCurrentTime_low.m128_f32[0] = (m_flCurrentTime_low.m128_f32[0] - this->m_flTimeStartFadeIn) / m_Value;
    v14 = 1.0;
    if ( m_flCurrentTime_low.m128_f32[0] <= 1.0 )
      v1 = m_flCurrentTime_low.m128_u64[0] & _mm_cmpge_ss(m_flCurrentTime_low, v2).m128_u64[0];
    else
      v1 = 1065353216;
    if ( m_flStartFadeInWeight_low.m128_f32[0] <= 1.0 )
      v14 = _mm_andnot_ps(_mm_cmplt_ss(m_flStartFadeInWeight_low, v2), m_flStartFadeInWeight_low).m128_f32[0];
    this->m_flStartFadeInWeight = v14;
    v15 = ((v6 - v14) * *&v1) + v14;
    if ( v15 != v5 )
    {
      v20 = v15;
      (*(this->_vptr_IHandleEntity + 22))(this, 820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v2.m128_u64[0] = 0;
      this->m_flCurWeight.m_Value = v20;
    }
    v16 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v17 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v18 = gpGlobals->m_pfnWarningFunc;
        if ( v18 != 0 )
          (v18)(1, 0.0);
        v17 = gpGlobals;
      }
      v2.m128_u64[0] = LODWORD(v16->m_flCurrentTime);
    }
    else
    {
      v17 = 0;
    }
    v2.m128_f32[0] = v2.m128_f32[0] + v17->interval_per_tick;
    m_nHashCode = s_pFadeInContextThink.m_nHashCode;
  }
  CBaseEntity::SetNextThink(this, *v2.m128_u64, *&v1, m_nHashCode);
}


// CColorCorrection::FadeOutThink  (line 188, @0x000000000218cac0, libserver.so)  // inlines: Lerp<float>, NetworkStateChanged, Set, curtime, operator<=<float>, operator<=<int>, operator=<float>, operator==<float>
// calls: CBaseEntity::SetNextThink
// globals: s_pFadeOutContextThink
void __fastcall CColorCorrection::FadeOutThink(CColorCorrection *const this)
{
  unsigned __int64 m_Value_low; // xmm1_8
  __m128 v2; // xmm0
  float m_Value; // xmm2_4
  float v5; // xmm5_4
  uint32 m_nHashCode; // esi
  __m128 m_flStartFadeOutWeight_low; // xmm6
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm3_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  CGlobalVars *v13; // r12
  CGlobalVars *v14; // rax
  FnGlobalVarsWarningFunc v15; // rax
  float v16; // xmm1_4
  float v17; // [rsp-24h] [rbp-2Ch]
  float v18; // [rsp-24h] [rbp-2Ch]

  v2.m128_u64[0] = 0;
  m_Value = this->m_flFadeOutDuration.m_Value;
  if ( m_Value <= 0.0
    || (v5 = this->m_flCurWeight.m_Value) <= 0.0
    || this->m_bEnabled.m_Value
    || (m_Value_low = LODWORD(this->m_flMaxWeight.m_Value), *&m_Value_low == 0.0)
    || (m_flStartFadeOutWeight_low = LODWORD(this->m_flStartFadeOutWeight), m_flStartFadeOutWeight_low.m128_f32[0] <= 0.0) )
  {
    m_nHashCode = s_pFadeOutContextThink.m_nHashCode;
    v2.m128_u64[0] = 3212836864LL;
  }
  else
  {
    if ( *&m_Value_low > m_flStartFadeOutWeight_low.m128_f32[0] )
    {
      if ( (m_flStartFadeOutWeight_low.m128_f32[0] / *&m_Value_low) <= 1.0 )
        v16 = fmaxf(0.0099999998, m_flStartFadeOutWeight_low.m128_f32[0] / *&m_Value_low);
      else
        v16 = 1.0;
      m_Value = m_Value * v16;
    }
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v17 = m_Value;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          m_flStartFadeOutWeight_low = LODWORD(this->m_flStartFadeOutWeight);
          v5 = this->m_flCurWeight.m_Value;
          v2.m128_u64[0] = 0;
          m_Value = v17;
        }
      }
      m_flCurrentTime = v8->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    v11 = (m_flCurrentTime - this->m_flTimeStartFadeOut) / m_Value;
    v12 = 0.0;
    if ( v11 <= 1.0 )
    {
      v12 = 1.0;
      if ( v11 >= 0.0 )
        v12 = 1.0 - v11;
    }
    m_Value_low = 1065353216;
    if ( m_flStartFadeOutWeight_low.m128_f32[0] <= 1.0 )
      m_Value_low = _mm_andnot_ps(_mm_cmplt_ss(m_flStartFadeOutWeight_low, v2), m_flStartFadeOutWeight_low).m128_u64[0];
    LODWORD(this->m_flStartFadeOutWeight) = m_Value_low;
    *&m_Value_low = (*&m_Value_low * v12) + 0.0;
    if ( *&m_Value_low != v5 )
    {
      v18 = *&m_Value_low;
      (*(this->_vptr_IHandleEntity + 22))(this, 820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      m_Value_low = LODWORD(v18);
      v2.m128_u64[0] = 0;
      this->m_flCurWeight.m_Value = v18;
    }
    v13 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v14 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v15 = gpGlobals->m_pfnWarningFunc;
        if ( v15 != 0 )
          v15(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v14 = gpGlobals;
      }
      v2.m128_u64[0] = LODWORD(v13->m_flCurrentTime);
    }
    else
    {
      v14 = 0;
    }
    v2.m128_f32[0] = v2.m128_f32[0] + v14->interval_per_tick;
    m_nHashCode = s_pFadeOutContextThink.m_nHashCode;
  }
  CBaseEntity::SetNextThink(this, *v2.m128_u64, *&m_Value_low, m_nHashCode);
}


// CColorCorrection::InputEnable  (line 223, @0x000000000219dd10, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<CNetworkVarBase<float, CColorCorrection::NetworkVar_m_flMaxWeight> >, operator=<bool>
// calls: CColorCorrection::FadeIn
void __fastcall CColorCorrection::InputEnable(CColorCorrection *const this, inputdata_t *const inputdata)
{
  float m_Value; // [rsp+Ch] [rbp-14h]

  if ( !this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 805, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = 1;
  }
  if ( this->m_flFadeInDuration.m_Value > 0.0 )
  {
    CColorCorrection::FadeIn(this);
  }
  else if ( this->m_flMaxWeight.m_Value != this->m_flCurWeight.m_Value )
  {
    m_Value = this->m_flMaxWeight.m_Value;
    (*(this->_vptr_IHandleEntity + 22))(this, 820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flCurWeight.m_Value = m_Value;
  }
}


// CColorCorrection::InputDisable  (line 238, @0x000000000219df10, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>, operator=<float>
// calls: CColorCorrection::FadeOut
void __fastcall CColorCorrection::InputDisable(CColorCorrection *const this, inputdata_t *const inputdata)
{
  if ( this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 805, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = 0;
  }
  if ( this->m_flFadeOutDuration.m_Value > 0.0 )
  {
    CColorCorrection::FadeOut(this);
  }
  else if ( this->m_flCurWeight.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flCurWeight.m_Value = 0.0;
  }
}


// CColorCorrection::InputSetFadeInDuration  (line 253, @0x000000000218a170, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CColorCorrection::InputSetFadeInDuration(CColorCorrection *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flFadeInDuration.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFadeInDuration.m_Value = v4;
  }
}


// CColorCorrection::InputSetFadeOutDuration  (line 258, @0x000000000218a1f0, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CColorCorrection::InputSetFadeOutDuration(CColorCorrection *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flFadeOutDuration.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFadeOutDuration.m_Value = v4;
  }
}


// CColorCorrectionSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 269, @0x000000000219dfc0, libserver.so)
void __cdecl CColorCorrectionSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// ColorCorrectionSystem  (line 274, @0x000000000219dfd0, libserver.so)
// callers: CBasePlayer::InitColorCorrectionController, CBasePlayer::UpdateFXVolume
// globals: g_pColorCorrectionSystem
CColorCorrectionSystem *__cdecl ColorCorrectionSystem()
{
  return g_pColorCorrectionSystem;
}


// CColorCorrectionSystem::GameInit  (line 283, @0x00000000021877c0, libserver.so)  // inlines: ListenForGameEvent, Set, operator=
void __fastcall CColorCorrectionSystem::GameInit(CColorCorrectionSystem *const this, const EventGameInit_t *const msg)
{
  this->m_hMasterController.m_Index = -1;
  this->m_bRegisteredForEvents = 1;
  (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, &this->CGameEventListener, "round_start", 1);
}


// CColorCorrectionSystem::InitMasterController  (line 293, @0x000000000219dfe0, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Next, Set, TypedEntityInstanceByClassIter_t, operator CEntityInstance*, operator=
// calls: EntityInstanceByClassIter_t::EntityInstanceByClassIter_t, EntityInstanceByClassIter_t::Next
// callers: CColorCorrectionSystem::FireGameEvent, CColorCorrectionSystem::PostSpawnGroupLoad
// strings: "color_correction"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CColorCorrectionSystem::InitMasterController(CColorCorrectionSystem *const this)
{
  CEntityInstance *v2; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx
  TypedEntityInstanceByClassIter_t<CColorCorrection> iter; // [rsp+0h] [rbp-40h] BYREF

  EntityInstanceByClassIter_t::EntityInstanceByClassIter_t(
    &iter,
    "color_correction",
    0,
    EntityIterType_t::ENTITY_ENUM_ITERATE_NON_DORMANT_ONLY);
LABEL_2:
  while ( 1 )
  {
    v2 = EntityInstanceByClassIter_t::Next(&iter);
    if ( v2 == 0 )
      break;
    while ( 1 )
    {
      m_Index = this->m_hMasterController.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hMasterController.m_Index) >> 9) & 0x3F];
        if ( v4 != 0 )
        {
          v5 = &v4[this->m_hMasterController.m_Index & 0x1FF];
          if ( v5 != 0
            && m_Index == v5->m_EHandle.m_Index
            && v5->m_pInstance != 0
            && (BYTE4(v2[8].m_hPrivateScope.m_hScope) & 1) == 0 )
          {
            break;
          }
        }
      }
      m_pEntity = v2->m_pEntity;
      if ( m_pEntity == 0 )
      {
        this->m_hMasterController.m_Index = -1;
        goto LABEL_2;
      }
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hMasterController.m_Index) = v8 | this->m_hMasterController.m_Index & 0x8000;
      this->m_hMasterController.m_Index = (v7 << 15) | this->m_hMasterController.m_Index & 0x7FFF;
      v2 = EntityInstanceByClassIter_t::Next(&iter);
      if ( v2 == 0 )
        return;
    }
  }
}


// CColorCorrectionSystem::FireGameEvent  (line 315, @0x000000000219e0f0, libserver.so)
// calls: CColorCorrectionSystem::InitMasterController
void __fastcall CColorCorrectionSystem::FireGameEvent(CColorCorrectionSystem *const this, IGameEvent *pEvent)
{
  CColorCorrectionSystem::InitMasterController(this);
}


// CColorCorrectionSystem::PostSpawnGroupLoad  (line 326, @0x000000000219e110, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CColorCorrectionSystem::InitMasterController, UTIL_GetLocalPlayer, CBasePlayer::InitColorCorrectionController
void __fastcall CColorCorrectionSystem::PostSpawnGroupLoad(
        CColorCorrectionSystem *const this,
        const EventPostSpawnGroupLoad_t *const msg)
{
  CBasePlayer *LocalPlayer; // rax
  unsigned __int16 v3; // cx
  int v4; // edi
  int v5; // edx
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  CColorCorrectionSystem::InitMasterController(this);
  if ( gpGlobals->maxClients == 1 )
  {
    LocalPlayer = UTIL_GetLocalPlayer();
    if ( LocalPlayer != 0 )
    {
      if ( LocalPlayer->m_hColorCorrectionCtrl.m_Value.m_Index == -1 )
      {
        v3 = 0x7FFF;
        v4 = 0x7FFF;
      }
      else
      {
        v3 = LocalPlayer->m_hColorCorrectionCtrl.m_Value.m_Index & 0x7FFF;
        v4 = v3;
      }
      v5 = (LocalPlayer->m_hColorCorrectionCtrl.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
      if ( (v5 + 2) <= 1
        || (v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9]) == 0
        || (v7 = &v6[v4 & 0x1FF]) == 0
        || v5 != v7->m_EHandle.m_Index
        || v7->m_pInstance == 0 )
      {
        CBasePlayer::InitColorCorrectionController(LocalPlayer);
      }
    }
  }
}


