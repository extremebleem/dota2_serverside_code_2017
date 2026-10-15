// Reconstructed from DWARF by pahole; not original source.

// src/game/server/entitydissolve.cpp:66
class C_CEntityDissolve_MapInstall {
	C_CEntityDissolve_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityDissolve::GetDataDescMap  (line 42, @0x00000000021baf00, libserver.so)
// globals: CEntityDissolve::m_DataMap
datamap_t *__fastcall CEntityDissolve::GetDataDescMap(CEntityDissolve *const this)
{
  return &CEntityDissolve::m_DataMap;
}


// CEntityDissolve::AddDatadescMetadataKeys  (line 42, @0x00000000021ce4e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEntityDissolve::GetEntityClass(void)
void __fastcall CEntityDissolve::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEntityDissolve::GetEntityClass);
}


// CEntityDissolve::GetBaseMap  (line 42, @0x00000000021ce500, libserver.so)
datamap_t *__cdecl CEntityDissolve::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CEntityDissolve>  (line 42, @0x00000000021d96e0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEntityDissolve"
// globals: `guard variable for'DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder, `guard variable for'DataMapInit<CEntityDissolve>(CEntityDissolve *)::dataDesc, CEntityDissolve::GetEntityClass(void), CEntityDissolve::m_DataMap, DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEntityDissolve>(CEntityDissolve *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder) != 0 )
  {
    DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_pszBase = "CEntityDissolve";
    DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder,
      &_dso_handle);
  }
  CEntityDissolve::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEntityDissolve>(CEntityDissolve *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEntityDissolve>(CEntityDissolve *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_nLenBase + 14);
    strcpy(stpcpy(v2, DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_pszBase), "DissolveThink");
    m_Size = DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Size == DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CEntityDissolve>(CEntityDissolve *)::dataDesc[11].fieldName = v2;
    v6 = operator new[](DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_nLenBase + 17);
    strcpy(stpcpy(v6, DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_pszBase), "ElectrocuteThink");
    v7 = DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Size == DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CEntityDissolve>(CEntityDissolve *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CEntityDissolve>(CEntityDissolve *)::dataDesc[12].fieldName = v6;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEntityDissolve>(CEntityDissolve *)::dataDesc);
  }
  CEntityDissolve::m_DataMap.dataNumFields = 13;
  CEntityDissolve::m_DataMap.dataDesc = &DataMapInit<CEntityDissolve>(CEntityDissolve *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEntityDissolve::m_DataMap, CEntityDissolve::GetEntityClass);
  return &CEntityDissolve::m_DataMap;
}


// CEntityDissolve::YouForgotToImplementOrDeclareServerClass  (line 66, @0x00000000021baf10, libserver.so)
int __fastcall CEntityDissolve::YouForgotToImplementOrDeclareServerClass(CEntityDissolve *const this)
{
  return 0;
}


// CEntityDissolve::GetServerClass  (line 66, @0x00000000021c49d0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEntityDissolve::GetServerClass(CEntityDissolve *const this)
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


// CEntityDissolve::CEntityDissolve  (line 72, @0x00000000021ce510, libserver.so)  // inlines: CNetworkVarBase, CNetworkVectorBase, EnsureValidValue, EnsureValidValue<EntityDisolveType_t>, EnsureValidValue<float>, EnsureValidValue<unsigned int>, NetworkStateChanged, Set, Zero, operator=<int>
// calls: CBaseModelEntity::CBaseModelEntity, CBaseEntity::NetworkStateChanged, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CEntityDissolve::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CEntityDissolve::CEntityDissolve(CEntityDissolve *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->_vptr_IHandleEntity = &off_4023350;
  this->m_flStartTime.m_Value = 0.0;
  this->m_flFadeInStart.m_Value = 0.0;
  this->m_flFadeInLength.m_Value = 0.0;
  this->m_flFadeOutModelStart.m_Value = 0.0;
  this->m_flFadeOutModelLength.m_Value = 0.0;
  this->m_flFadeOutStart.m_Value = 0.0;
  this->m_flFadeOutLength.m_Value = 0.0;
  this->m_nDissolveType.m_Value = EntityDisolveType_t::ENTITY_DISSOLVE_NORMAL;
  this->m_vDissolverOrigin.m_Value.z = 0.0;
  this->m_vDissolverOrigin.m_Value.y = 0.0;
  this->m_vDissolverOrigin.m_Value.x = 0.0;
  this->m_nMagnitude.m_Value = 0;
  CBaseEntity::NetworkStateChanged(this, 0x4ACu, -1, -1);
  this->m_nMagnitude.m_Value = 250;
}


// CEntityDissolve::~CEntityDissolve  (line 78, @0x00000000021bb2e0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CEntityDissolve::~CEntityDissolve(CEntityDissolve *const this)
{
  this->_vptr_IHandleEntity = &off_4023350;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CEntityDissolve::~CEntityDissolve  (line 78, @0x00000000021bb300, libserver.so)  // inlines: ~CEntityDissolve
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CEntityDissolve::~CEntityDissolve(CEntityDissolve *const this)
{
  this->_vptr_IHandleEntity = &off_4023350;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CEntityDissolve::Precache  (line 86, @0x00000000021de140, libserver.so)  // inlines: GetModelNameFromKeyValues, Precache
// calls: CEntityInstance::Precache, GetModelNameFromKeyValues, PrecacheMaterial
// strings: "materials/sprites/blueglow1.vmat"
void __fastcall CEntityDissolve::Precache(CEntityDissolve *const this, const CEntityPrecacheContext *pContext)
{
  const char *ModelNameFromKeyValues; // rax

  CEntityInstance::Precache(this, pContext);
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pContext->m_pKeyValues, "");
  if ( *ModelNameFromKeyValues != 0 )
    PrecacheMaterial(ModelNameFromKeyValues, pContext);
  else
    PrecacheMaterial("materials/sprites/blueglow1.vmat", pContext);
}


// CEntityDissolve::Spawn  (line 106, @0x00000000021c1f50, libserver.so)  // inlines: GetModelNameFromKeyValues, Init, NetworkStateChanged, Set, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetVal, a, curtime, operator=<RenderFx_t>, operator=<RenderMode_t>, operator=<float>
// calls: CBaseEntity::Spawn, GetModelNameFromKeyValues, CBaseModelEntity::SetRenderAlpha, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseEntity::GetMoveParent, __dynamic_cast, CGlobalVarsBase::curtime, CEntityDissolve::DissolveThink
// globals: CEntityDissolve::DissolveThink(void), s_pElectroThinkContext, CEntityDissolve::ElectrocuteThink(void)
void __fastcall CEntityDissolve::Spawn(CEntityDissolve *const this, const CEntityKeyValues *pKeyValues)
{
  double v4; // xmm1_8
  bool v5; // zf
  double v6; // xmm0_8
  double v7; // xmm2_8
  unsigned __int8 v8; // r12
  double v9; // xmm1_8
  CGlobalVars *v10; // r12
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v12; // r12
  double v13; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v15; // rax
  CBaseEntity *MoveParent; // rax
  float v17; // xmm0_4
  double v18; // xmm3_8
  float m_Value; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm0_4

  CBaseEntity::Spawn(this, pKeyValues);
  GetModelNameFromKeyValues(pKeyValues, "");
  if ( (this->m_nDissolveType.m_Value - 1) <= 1
    && (MoveParent = CBaseEntity::GetMoveParent(this)) != 0
    && __dynamic_cast(MoveParent, &`typeinfo for'CBaseEntity, &`typeinfo for'CRagdollProp, 0) != 0 )
  {
    v17 = CGlobalVarsBase::curtime(gpGlobals, 0);
    CBaseEntity::ThinkSet(this, CEntityDissolve::ElectrocuteThink, v17 + 0.0099999998, s_pElectroThinkContext, 0);
    v4 = 0.0;
    v5 = this->m_flFadeInStart.m_Value == 0.0;
  }
  else
  {
    v4 = 0.0;
    v5 = this->m_flFadeInStart.m_Value == 0.0;
  }
  if ( !v5 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1156, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFadeInStart.m_Value = 0.0;
  }
  if ( this->m_flFadeInLength.m_Value != 1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1.0);
    this->m_flFadeInLength.m_Value = 1.0;
  }
  if ( this->m_flFadeOutModelStart.m_Value != 1.9 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFadeOutModelStart.m_Value = 1.9;
  }
  if ( this->m_flFadeOutModelLength.m_Value != 0.10000002 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFadeOutModelLength.m_Value = 0.10000002;
  }
  *&v6 = LODWORD(this->m_flFadeOutStart.m_Value);
  if ( *&v6 != 2.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1172, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFadeOutStart.m_Value = 2.0;
  }
  v7 = 0.0;
  if ( this->m_flFadeOutLength.m_Value == 0.0 )
  {
    if ( this->m_nDissolveType.m_Value != EntityDisolveType_t::ENTITY_DISSOLVE_CORE )
      goto LABEL_15;
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v6, v4, 0.0);
    v5 = this->m_nDissolveType.m_Value == EntityDisolveType_t::ENTITY_DISSOLVE_CORE;
    this->m_flFadeOutLength.m_Value = 0.0;
    if ( !v5 )
      goto LABEL_15;
  }
  v18 = 0.0;
  if ( this->m_flFadeInStart.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1156, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v6, v4, v7, 0.0);
    this->m_flFadeInStart.m_Value = 0.0;
  }
  m_Value = this->m_flFadeOutStart.m_Value;
  if ( m_Value != 0.2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1172, 0xFFFFFFFFLL, 0xFFFFFFFFLL, m_Value, v4, v7, v18);
    this->m_flFadeOutStart.m_Value = 0.2;
  }
  v20 = this->m_flFadeOutModelStart.m_Value;
  if ( v20 != 0.1 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v20, v4, v7, v18);
    this->m_flFadeOutModelStart.m_Value = 0.1;
  }
  v21 = this->m_flFadeOutModelLength.m_Value;
  if ( v21 != 0.050000001 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v21, v4, v7, v18);
    this->m_flFadeOutModelLength.m_Value = 0.050000001;
  }
  *&v6 = LODWORD(this->m_flFadeInLength.m_Value);
  if ( *&v6 != 0.1 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v6, v4, v7, v18);
    this->m_flFadeInLength.m_Value = 0.1;
  }
LABEL_15:
  if ( this->m_nRenderMode.m_Value != RenderMode_t::kRenderTransColor )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v6, v4, v7);
    this->m_nRenderMode.m_Value = RenderMode_t::kRenderTransColor;
  }
  v8 = this->m_clrRender.m_Value._color[3];
  if ( this->m_clrRender.m_Value._color[0] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v6, v4, v7);
    this->m_clrRender.m_Value._color[0] = -1;
  }
  if ( this->m_clrRender.m_Value._color[1] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v6, v4, v7);
    this->m_clrRender.m_Value._color[1] = -1;
  }
  if ( this->m_clrRender.m_Value._color[2] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v6, v4, v7);
    this->m_clrRender.m_Value._color[2] = -1;
  }
  if ( v8 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v6, v4, v7);
    this->m_clrRender.m_Value._color[3] = v8;
  }
  CBaseModelEntity::SetRenderAlpha(this, 0xFFu);
  if ( this->m_nRenderFX.m_Value != RenderFx_t::kRenderFxNone )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 814, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nRenderFX.m_Value = RenderFx_t::kRenderFxNone;
  }
  CBaseEntity::ThinkSet(this, CEntityDissolve::DissolveThink, 0.0, 0, 0);
  v10 = gpGlobals;
  m_flCurrentTime = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v10->m_flCurrentTime;
  }
  if ( m_flCurrentTime > this->m_flStartTime.m_Value )
  {
    CEntityDissolve::DissolveThink(this);
  }
  else
  {
    v12 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v15 = gpGlobals->m_pfnWarningFunc;
        if ( v15 != 0 )
          v15(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v13) = 0;
      *&v13 = v12->m_flCurrentTime + 0.0099999998;
    }
    else
    {
      *&v13 = 1008981770;
    }
    CBaseEntity::SetNextThink(this, v13, v9, 0);
  }
}


// CEntityDissolve::InputDissolve  (line 166, @0x00000000021c0640, libserver.so)  // inlines: AssignTo, String, StringID, TempString, ToCStr, ToString, VariantFieldTypeName, curtime, operator=
// calls: MakeEntitySystemString, CGameEntitySystem::FindEntityGeneric, CBaseEntity::GetAbsOrigin, V_snprintf, Warning
// strings: "%g %g %g %g", "js_array", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false" (23 total)
// globals: jpt_21C067C, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_21C09C1
void __fastcall CEntityDissolve::InputDissolve(CEntityDissolve *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  CBaseEntity *EntityGeneric; // r15
  const char *m_pAsString; // rdx
  __int64 v8; // rax
  __int64 v9; // r14
  void (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64, __int64, double, double, float); // r12
  const Vector *AbsOrigin; // rax
  double v12; // xmm0_8
  __int64 v13; // rcx
  __int64 v14; // r8
  CGlobalVars *v15; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rsi
  const char *v17; // rsi
  const char *v18; // rcx
  double m_float; // xmm0_8
  CGlobalVars *v20; // [rsp+8h] [rbp-58h]
  const Vector *v21; // [rsp+10h] [rbp-50h]
  EntityDisolveType_t v22; // [rsp+18h] [rbp-48h]
  unsigned int m_Value; // [rsp+1Ch] [rbp-44h]
  string_t strTarget; // [rsp+20h] [rbp-40h]

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
        goto LABEL_23;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_34;
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
        v18 = "true";
        if ( inputdata->value.m_char == 0 )
          v18 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v18);
        goto LABEL_30;
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
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_30;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_30:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_34:
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
        switch ( m_type )
        {
          case 0:
            v17 = "void";
            break;
          case 1:
            v17 = "float";
            break;
          case 3:
            v17 = "vector";
            break;
          case 4:
            v17 = "quaternion";
            break;
          case 5:
            v17 = "integer";
            break;
          case 6:
            v17 = "boolean";
            break;
          case 8:
            v17 = "character";
            break;
          case 9:
            v17 = "color";
            break;
          case 13:
            v17 = "ehandle";
            break;
          case 25:
            v17 = "vector2d";
            break;
          case 26:
            v17 = "int64";
            break;
          case 27:
            v17 = "vector4d";
            break;
          case 28:
            v17 = "resourcehandle";
            break;
          case 31:
            v17 = "hscript";
            break;
          case 32:
            v17 = "variant";
            break;
          case 33:
            v17 = "uint64";
            break;
          case 34:
            v17 = "float64";
            break;
          case 37:
            v17 = "unsigned";
            break;
          case 38:
            v17 = "utlstringtoken";
            break;
          case 39:
            v17 = "qangle";
            break;
          case 48:
            v17 = "hscript_lightbinding";
            break;
          case 49:
            v17 = "js_value";
            break;
          case 50:
            v17 = "js_object";
            break;
          case 51:
            v17 = "js_array";
            break;
          case 52:
            v17 = "js_raw_args";
            break;
          default:
            v17 = "unknown_variant_type";
            break;
        }
        Warning("No conversion from %s to string at the moment!\n", v17);
LABEL_23:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  if ( strTarget.u.m_Id == 0 )
    strTarget.u.m_Id = this->m_target.u.m_Id;
  EntityGeneric = 0;
  while ( 1 )
  {
    m_pAsString = "";
    if ( strTarget.u.m_Id != 0 )
      m_pAsString = strTarget.u.m_pAsString;
    EntityGeneric = CGameEntitySystem::FindEntityGeneric(
                      g_pGameEntitySystem,
                      EntityGeneric,
                      m_pAsString,
                      this,
                      inputdata->pActivator,
                      0);
    if ( EntityGeneric == 0 )
      break;
    v8 = (*(EntityGeneric->_vptr_IHandleEntity + 43))(EntityGeneric);
    v9 = v8;
    if ( v8 != 0 )
    {
      m_Value = this->m_nMagnitude.m_Value;
      v10 = *(*v8 + 1944LL);
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      v12 = 0.0;
      v13 = this->m_nDissolveType.m_Value;
      v14 = m_Value;
      v15 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
          {
            v20 = gpGlobals;
            v22 = this->m_nDissolveType.m_Value;
            v21 = AbsOrigin;
            (m_pfnWarningFunc)(1, 0.0);
            v15 = v20;
            v13 = v22;
            AbsOrigin = v21;
            v14 = m_Value;
          }
        }
        *&v12 = LODWORD(v15->m_flCurrentTime);
      }
      v10(v9, 0, 0, v13, v14, v12, *&AbsOrigin->x, AbsOrigin->z);
    }
  }
}


// CEntityDissolve::Create  (line 192, @0x00000000021dad30, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddEFlags, AddKeyValue<char const*>, AddKeyValue<float>, AddKeyValue<int>, AddToTail, Allocate, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CVProfScope, CopyData, Element, EnterScope, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTimebaseRegister, InTargetThread, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, NetworkStateChanged, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetArmorValue, SetValue, SetValue<float>, SetValue<int>, Spawn, V_strlen, memcpy, operator CEntityDissolve*, operator CEntityInstance*, operator!, operator(), operator=, operator=<int>, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CUtlString::FreeMemoryBlock, CEntityKeyValues::SetValue, CVProfile::ExitScope, ThreadGetCurrentId (32 total)
// callers: CBaseAnimating::Dissolve, CEntityDissolve::Create
// strings: "materials/sprites/blueglow1.vmat", "Attempted to set attribute %s as if it was a non-attribute key!\n", "TLK_DISSOLVESCREAM", "Spawn", "Server Simulation", "TLK_ELECTROCUTESCREAM"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
CEntityDissolve *__fastcall CEntityDissolve::Create(
        CBaseEntity *pTarget,
        const char *pMaterialName,
        float flStartTime,
        int nDissolveType,
        bool *pRagdollCreated)
{
  const char *v5; // r15
  CUtlScratchMemoryPool *v7; // rax
  CEntitySystem *v8; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rdi
  const CEntityKeyValues *v13; // rbx
  int m_enabled; // edx
  vec_t y; // ebx
  const char *v16; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v18; // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v20; // si
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  char *v23; // rax
  _QWORD *v24; // rdi
  CEntityIdentity *v25; // rax
  CEntityIdentity *v26; // rax
  CEntityDissolve *m_pInstance; // rbx
  CUtlScratchMemoryPool *v28; // rdi
  CEntityKeyValues *v29; // r13
  const char *v32; // rdx
  unsigned __int64 v33; // rbx
  ThreadId_t m_TargetThreadId; // r15
  uint64 m_numTimeBaseTicks; // rcx
  uint64 v36; // rcx
  int v37; // esi
  __int16 v38; // cx
  __int64 v39; // rax
  __int64 v40; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  int Health; // eax
  __int16 v43; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v46; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v47; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // esi
  __int16 v54; // cx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int16 v57; // dx
  unsigned __int64 v58; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v59; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v60; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v61; // rax
  uint16 v62; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rcx
  int v67; // esi
  __int16 v68; // cx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int16 v71; // dx
  unsigned __int64 v72; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v73; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v74; // rax
  uint16 v75; // ax
  void *v76; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rbx
  int (**vptr_IHandleEntity)(...); // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v83; // rax
  __int16 v84; // ax
  __int16 v85; // ax
  __int16 v86; // ax
  void *v87; // rax
  __int64 v88; // [rsp+20h] [rbp-110h]
  bool v89; // [rsp+28h] [rbp-108h]
  __int64 v90; // [rsp+28h] [rbp-108h]
  __int64 v91; // [rsp+28h] [rbp-108h]
  signed int v92; // [rsp+28h] [rbp-108h]
  __int64 flStartTimeb; // [rsp+38h] [rbp-F8h]
  __int64 flStartTimec; // [rsp+38h] [rbp-F8h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *flStartTimed; // [rsp+38h] [rbp-F8h]
  signed int flStartTimee; // [rsp+38h] [rbp-F8h]
  int v99; // [rsp+40h] [rbp-F0h]
  _QWORD v100[2]; // [rsp+50h] [rbp-E0h] BYREF
  CTakeDamageInfo info; // [rsp+60h] [rbp-D0h] BYREF
  __int64 v102; // [rsp+F0h] [rbp-40h]

  v5 = pMaterialName;
  if ( pRagdollCreated != 0 )
    *pRagdollCreated = 0;
  if ( pMaterialName == 0 )
    v5 = "materials/sprites/blueglow1.vmat";
  if ( (*(pTarget->_vptr_IHandleEntity + 140))() == 0 )
  {
    *&info.m_vecDamageForce.z = 0;
    *&info.m_vecDamagePosition.y = 0;
    CEntityKeyValuesModifyScope::BeginModify(&info.m_vecDamageForce.z, 0);
    info._vptr_CTakeDamageInfo = off_4023A30;
    v7 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    *&info.m_vecReportedPosition.z = 0;
    *&info.m_nDotaDamageCategory = 0;
    v8 = g_pEntitySystem;
    v102 = 0;
    ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    *&info.m_flStabilityDamage = v7;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v8->m_entitySpawnerData;
    LODWORD(info.m_vecDamageDirection.z) = CEntitySystem::GetActiveSpawnGroupHandle(v8);
    SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
    *&info.m_hWeapon.m_Index = *&SpawnOriginOffset->m_flMatVal[0][0];
    *&info.m_flMaxDamage = *&SpawnOriginOffset->m_flMatVal[0][2];
    *&info.m_bitsDamageType = *&SpawnOriginOffset->m_flMatVal[1][0];
    *&info.m_iAmmoType = *&SpawnOriginOffset->m_flMatVal[1][2];
    info.m_hBodyPart = *&SpawnOriginOffset->m_flMatVal[2][0];
    v10 = *&SpawnOriginOffset->m_flMatVal[2][2];
    *&info.m_vecDamageForce.x = 0;
    *&info.m_bCanHeadshot = v10;
    *&info.m_vecReportedPosition.x = g_pEntityCEntityDissolveClass;
    if ( g_pApplication != 0 )
      v11 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
    else
      v11 = 0;
    LOBYTE(info.m_nDamageTaken) = v11;
    info.m_vecDamageDirection.y = 0.0;
    (*info._vptr_CTakeDamageInfo)(&info);
    v13 = *&info.m_vecDamageForce.x;
    if ( *(*&info.m_vecDamageForce.x + 82LL) > 0 )
      goto LABEL_9;
    v37 = **&info.m_vecDamageForce.x;
    if ( v37 <= 0 )
    {
LABEL_60:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(*&info.m_vecDamageForce.x);
      v43 = v13->m_keyHashes.m_nCount - 1;
      m_nAllocated = v13->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&v13->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = v13->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      m_pElements[(v13->m_keyHashes.m_nCount - 1)] = -912394812;
      v90 = v43;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v13->m_keyValues);
      if ( v13->m_keyValues.m_nAllocated != 0 )
        v46 = v13->m_keyValues.m_pElements;
      else
        v46 = 0;
      v47 = &v46[v90];
      m_flags = v47->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v47->m_value.m_flags = m_flags & 0xFFFE;
      v47->m_value.m_uint64 = 0;
      v47->m_value.m_type = 5;
      v47->m_value.m_int = nDissolveType;
      if ( v13->m_keyValues.m_nAllocated != 0 )
        v49 = v13->m_keyValues.m_pElements;
      else
        v49 = 0;
      v49[v90].m_pAttributeName = 0;
    }
    else
    {
      v38 = *(*&info.m_vecDamageForce.x + 2LL);
      v39 = 0;
      v12 = v38;
      while ( 1 )
      {
        if ( v38 != 0 )
        {
          v40 = *&info.m_vecDamageForce.x + 4LL;
          if ( v38 > 9 )
            v40 = *(*&info.m_vecDamageForce.x + 8LL);
        }
        else
        {
          v40 = 0;
        }
        if ( *(v40 + 4 * v39) == -912394812 )
          break;
        if ( v37 <= ++v39 )
          goto LABEL_60;
      }
      if ( *(*&info.m_vecDamageForce.x + 42LL) != 0 )
      {
        v50 = *(*&info.m_vecDamageForce.x + 48LL);
        v51 = 24 * v39;
        v52 = v50 + v51;
        if ( *(v50 + v51 + 16) != 0 )
        {
LABEL_72:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", *(v50 + v51 + 16));
          goto LABEL_73;
        }
      }
      else
      {
        v51 = 24 * v39;
        v50 = 0;
        v52 = v51;
        if ( *(v51 + 16) != 0 )
          goto LABEL_72;
      }
      v84 = *(v52 + 10);
      if ( (v84 & 1) != 0 )
        *(v52 + 10) = v84 & 0xFFFE;
      *v52 = 0;
      *(v52 + 8) = 5;
      *v52 = nDissolveType;
    }
LABEL_73:
    v13 = *&info.m_vecDamageForce.x;
    if ( *(*&info.m_vecDamageForce.x + 82LL) > 0 )
      goto LABEL_9;
    v53 = **&info.m_vecDamageForce.x;
    if ( v53 <= 0 )
    {
LABEL_82:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(*&info.m_vecDamageForce.x);
      v57 = v13->m_keyHashes.m_nCount - 1;
      v58 = v13->m_keyHashes.m_nAllocated;
      if ( v58 != 0 )
      {
        if ( v58 <= 9 )
          v59 = (&v13->m_keyHashes.m_nAllocAllocated + 1);
        else
          v59 = v13->m_keyHashes.m_pElements;
      }
      else
      {
        v59 = 0;
      }
      v59[(v13->m_keyHashes.m_nCount - 1)] = 2003235393;
      v91 = v57;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v13->m_keyValues);
      if ( v13->m_keyValues.m_nAllocated != 0 )
        v60 = v13->m_keyValues.m_pElements;
      else
        v60 = 0;
      v61 = &v60[v91];
      v62 = v61->m_value.m_flags;
      if ( (v62 & 1) != 0 )
        v61->m_value.m_flags = v62 & 0xFFFE;
      v61->m_value.m_uint64 = 0;
      v61->m_value.m_type = 1;
      v61->m_value.m_float = flStartTime;
      if ( v13->m_keyValues.m_nAllocated != 0 )
        v63 = v13->m_keyValues.m_pElements;
      else
        v63 = 0;
      v63[v91].m_pAttributeName = 0;
    }
    else
    {
      v54 = *(*&info.m_vecDamageForce.x + 2LL);
      v55 = 0;
      while ( 1 )
      {
        if ( v54 != 0 )
        {
          v56 = *&info.m_vecDamageForce.x + 4LL;
          if ( v54 > 9 )
            v56 = *(*&info.m_vecDamageForce.x + 8LL);
        }
        else
        {
          v56 = 0;
        }
        if ( *(v56 + 4 * v55) == 2003235393 )
          break;
        if ( v53 <= ++v55 )
          goto LABEL_82;
      }
      if ( *(*&info.m_vecDamageForce.x + 42LL) != 0 )
      {
        v64 = *(*&info.m_vecDamageForce.x + 48LL);
        v65 = 24 * v55;
        v66 = v64 + v65;
        if ( *(v64 + v65 + 16) != 0 )
        {
LABEL_94:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", *(v64 + v65 + 16));
          goto LABEL_95;
        }
      }
      else
      {
        v65 = 24 * v55;
        v64 = 0;
        v66 = v65;
        if ( *(v65 + 16) != 0 )
          goto LABEL_94;
      }
      v85 = *(v66 + 10);
      if ( (v85 & 1) != 0 )
        *(v66 + 10) = v85 & 0xFFFE;
      v12 = 1;
      *v66 = 0;
      *(v66 + 8) = 1;
      *v66 = flStartTime;
    }
LABEL_95:
    v13 = *&info.m_vecDamageForce.x;
    if ( *(*&info.m_vecDamageForce.x + 82LL) <= 0 )
    {
      v67 = **&info.m_vecDamageForce.x;
      if ( v67 <= 0 )
      {
LABEL_104:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(*&info.m_vecDamageForce.x);
        v71 = v13->m_keyHashes.m_nCount - 1;
        v72 = v13->m_keyHashes.m_nAllocated;
        if ( v72 != 0 )
        {
          if ( v72 <= 9 )
            v73 = (&v13->m_keyHashes.m_nAllocAllocated + 1);
          else
            v73 = v13->m_keyHashes.m_pElements;
        }
        else
        {
          v73 = 0;
        }
        v73[(v13->m_keyHashes.m_nCount - 1)] = -926958586;
        flStartTimec = v71;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v13->m_keyValues);
        if ( v13->m_keyValues.m_nAllocated != 0 )
          v74 = v13->m_keyValues.m_pElements;
        else
          v74 = 0;
        v88 = flStartTimec;
        flStartTimed = &v74[flStartTimec];
        v75 = flStartTimed->m_value.m_flags;
        if ( (v75 & 1) != 0 )
          flStartTimed->m_value.m_flags = v75 & 0xFFFE;
        flStartTimed->m_value.m_uint64 = 0;
        flStartTimed->m_value.m_type = 30;
        v92 = strlen(v5) + 1;
        v76 = CEntityVariantAllocator::Allocate(v92);
        flStartTimed->m_value.m_uint64 = v76;
        memcpy(v76, v5, v92);
        flStartTimed->m_value.m_flags |= 1u;
        if ( v13->m_keyValues.m_nAllocated != 0 )
          v77 = v13->m_keyValues.m_pElements;
        else
          v77 = 0;
        v77[v88].m_pAttributeName = 0;
        v13 = *&info.m_vecDamageForce.x;
LABEL_118:
        v99 = -1;
        if ( v13 == 0 )
          goto LABEL_31;
        goto LABEL_10;
      }
      v68 = *(*&info.m_vecDamageForce.x + 2LL);
      v69 = 0;
      while ( 1 )
      {
        if ( v68 != 0 )
        {
          v70 = *&info.m_vecDamageForce.x + 4LL;
          if ( v68 > 9 )
            v70 = *(*&info.m_vecDamageForce.x + 8LL);
        }
        else
        {
          v70 = 0;
        }
        if ( *(v70 + 4 * v69) == -926958586 )
          break;
        if ( v67 <= ++v69 )
          goto LABEL_104;
      }
      if ( *(*&info.m_vecDamageForce.x + 42LL) != 0 )
      {
        v78 = *(*&info.m_vecDamageForce.x + 48LL);
        v79 = 24 * v69;
        v80 = v78 + v79;
        if ( *(v78 + v79 + 16) != 0 )
        {
LABEL_116:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", *(v78 + v79 + 16));
LABEL_117:
          v13 = *&info.m_vecDamageForce.x;
          goto LABEL_118;
        }
      }
      else
      {
        v79 = 24 * v69;
        v78 = 0;
        v80 = v79;
        if ( *(v79 + 16) != 0 )
          goto LABEL_116;
      }
      v86 = *(v80 + 10);
      if ( (v86 & 1) != 0 )
        *(v80 + 10) = v86 & 0xFFFE;
      *v80 = 0;
      *(v80 + 8) = 30;
      flStartTimee = strlen(v5) + 1;
      v87 = CEntityVariantAllocator::Allocate(flStartTimee);
      *v80 = v87;
      memcpy(v87, v5, flStartTimee);
      *(v80 + 10) |= 1u;
      goto LABEL_117;
    }
LABEL_9:
    v99 = -1;
LABEL_10:
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v89 = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      v33 = __rdtsc();
      m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
      if ( m_TargetThreadId == ThreadGetCurrentId(v12) )
      {
        m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
        if ( m_pCurNode->m_pszName != "Spawn" )
        {
          m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
          g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
        }
        v83 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
        v83->m_BudgetFlags |= 4u;
        CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
        g_VProfCurrentProfile.m_fAtRoot = 0;
      }
      m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      v36 = m_numTimeBaseTicks - v33;
      v13 = *&info.m_vecDamageForce.x;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v36 + __rdtsc();
    }
    if ( !CEntityKeyValues::HasValue(v13, -971301790) )
    {
      v32 = **(*&info.m_vecReportedPosition.x + 56LL);
      if ( v32 != 0 )
        CEntityKeyValues::SetValue(*&info.m_vecDamageForce.x, -971301790, v32);
    }
    CEntityKeyValuesModifyScope::Release(&info.m_vecDamageForce.z);
    y = info.m_vecDamageDirection.y;
    v16 = CUtlString::Get(&info.m_vecReportedPosition.z);
    Entity = CEntitySystem::CreateEntity(
               g_pEntitySystem,
               LODWORD(info.m_vecDamageDirection.z),
               *&info.m_vecReportedPosition.x,
               v16,
               SLODWORD(y),
               -1,
               -1,
               0,
               0);
    v18 = Entity;
    if ( Entity != 0 )
    {
      m_pEntity = Entity->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v20 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v99 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v20 & 0x7FFF;
      }
      v100[0] = m_pEntity;
      v100[1] = *&info.m_vecDamageForce.x;
      (*(*g_pGameResourceService + 280LL))(
        g_pGameResourceService,
        LODWORD(info.m_vecDamageDirection.z),
        1,
        v100,
        &info.m_hWeapon);
      CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v18, *&info.m_vecDamageForce.x);
      if ( v102 == 0 )
        CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      v21 = *&info.m_nDotaDamageCategory;
      for ( flStartTimeb = *&info.m_vecDamageForce.x; v21 != 0; v21 = v21[14] )
      {
        v22 = v21[16];
        v23 = v21[17];
        if ( v22 != 0 || v23 != 0 )
        {
          v24 = (v22 + v21[18]);
          if ( (v23 & 1) != 0 )
            v23 = *&v23[*v24 - 1];
          (v23)(v24, v18, flStartTimeb);
        }
      }
    }
    if ( v89 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
    if ( (v99 + 2) > 1 )
    {
      v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v99 >> 9) & 0x3F];
      if ( v25 != 0 )
      {
        v26 = &v25[v99 & 0x1FF];
        if ( v26 != 0 && v26->m_EHandle.m_Index == v99 )
        {
          m_pInstance = v26->m_pInstance;
          if ( v26->m_pInstance != 0 )
          {
            CEntityDissolve::AttachToEntity(v26->m_pInstance, pTarget);
            m_pInstance->m_iEFlags |= 0x80u;
            CBaseEntity::DispatchUpdateTransmitState(m_pInstance);
            vptr_IHandleEntity = pTarget->_vptr_IHandleEntity;
            if ( (nDissolveType - 1) <= 1 )
              vptr_IHandleEntity[74](pTarget, "TLK_ELECTROCUTESCREAM", 0);
            else
              vptr_IHandleEntity[74](pTarget, "TLK_DISSOLVESCREAM", 0);
            goto LABEL_32;
          }
        }
      }
    }
LABEL_31:
    m_pInstance = 0;
LABEL_32:
    v28 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    info._vptr_CTakeDamageInfo = off_4023A10;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = *&info.m_flStabilityDamage;
    if ( v28 == &g_pEntitySystem->m_entitySpawnerData )
    {
      m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
      g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
      if ( m_nEntitySpawnerDataUseCount == 1 )
        CUtlScratchMemoryPool::FreeAll(v28);
    }
    if ( *&info.m_vecDamageForce.x != 0 )
    {
      CEntityKeyValuesModifyScope::Release(&info.m_vecDamageForce.z);
      v29 = *&info.m_vecDamageForce.x;
      if ( --*(*&info.m_vecDamageForce.x + 80LL) <= 0 )
      {
        CEntityKeyValues::~CEntityKeyValues(v29);
        operator delete(v29);
      }
    }
    if ( *&info.m_vecReportedPosition.z != 0 )
      CUtlString::FreeMemoryBlock(&info.m_vecReportedPosition.z);
    CEntityKeyValuesModifyScope::Release(&info.m_vecDamageForce.z);
    return m_pInstance;
  }
  if ( *&pTarget[3].m_bNetworkQuantizeOriginAndAngles != 0 )
  {
    (*(pTarget->_vptr_IHandleEntity + 22))(pTarget, 3084, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&pTarget[3].m_bNetworkQuantizeOriginAndAngles = 0;
  }
  Health = CBaseEntity::GetHealth(pTarget);
  CTakeDamageInfo::CTakeDamageInfo(&info, pTarget, pTarget, Health, &stru_400800, 0);
  CBaseEntity::TakeDamage(pTarget, &info);
  m_pInstance = 0;
  CTakeDamageInfo::~CTakeDamageInfo(&info);
  return m_pInstance;
}


// CEntityDissolve::Create  (line 273, @0x00000000021dba00, libserver.so)  // inlines: String, ToCStr
// calls: CBaseEntity::FirstMoveChild, CBaseEntity::NextMovePeer, __dynamic_cast, CBaseEntity::GetModelName, CEntityDissolve::Create
// callers: CBaseAnimating::TransferDissolveFrom
// globals: `typeinfo for'CEntityDissolve
CEntityDissolve *__fastcall CEntityDissolve::Create(CBaseEntity *pTarget, CBaseEntity *pSource)
{
  CBaseEntity *MoveChild; // rbx
  const CBaseEntity *v4; // rax
  int m_Value; // ebx
  char *v6; // rsi
  float flStartTime; // [rsp+Ch] [rbp-34h]
  char *pMaterialName; // [rsp+10h] [rbp-30h] BYREF

  MoveChild = CBaseEntity::FirstMoveChild(pSource);
  if ( MoveChild == 0 )
    return 0;
  while ( 1 )
  {
    v4 = __dynamic_cast(MoveChild, &`typeinfo for'CBaseEntity, &`typeinfo for'CEntityDissolve, 0);
    if ( v4 != 0 )
      break;
    MoveChild = CBaseEntity::NextMovePeer(MoveChild);
    if ( MoveChild == 0 )
      return 0;
  }
  m_Value = v4[1].m_spawnflags.m_Value;
  flStartTime = v4[1].m_flCreateTime.m_Value;
  CBaseEntity::GetModelName(&pMaterialName, v4);
  v6 = "";
  if ( pMaterialName != 0 )
    v6 = pMaterialName;
  return CEntityDissolve::Create(pTarget, v6, flStartTime, m_Value, 0);
}


// CEntityDissolve::AttachToEntity  (line 293, @0x00000000021ce5e0, libserver.so)
// calls: CBaseEntity::SetParent, CBaseEntity::SetLocalOrigin, CBaseEntity::SetLocalAngles
// callers: CEntityDissolve::Create
void __fastcall CEntityDissolve::AttachToEntity(CEntityDissolve *const this, CBaseEntity *pTarget)
{
  CBaseEntity::SetParent(this, pTarget, 0, 0);
  CBaseEntity::SetLocalOrigin(this, &vec3_origin);
  CBaseEntity::SetLocalAngles(this, &vec3_angle);
}


// CEntityDissolve::SetStartTime  (line 306, @0x00000000021ce620, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CEntityDissolve::SetStartTime(CEntityDissolve *const this, double a2, float flStartTime)
{
  float flStartTimea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flStartTime.m_Value )
  {
    flStartTimea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flStartTime);
    this->m_flStartTime.m_Value = flStartTimea;
  }
}


// CEntityDissolve::DissolveThink  (line 314, @0x00000000021c1760, libserver.so)  // inlines: SetCollisionGroup, curtime
// calls: CBaseEntity::GetMoveParent, CBaseEntity::GetModelName, CCollisionProperty::SetCollisionGroup, CBaseModelEntity::SetRenderAlpha, UTIL_PlayerByIndex, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, UTIL_Remove, CTakeDamageInfo::~CTakeDamageInfo, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, _Unwind_Resume
// callers: CEntityDissolve::Spawn
void __fastcall CEntityDissolve::DissolveThink(CEntityDissolve *const this)
{
  CBaseEntity *MoveParent; // rax
  __int64 v3; // r12
  double v4; // xmm0_8
  double v5; // xmm1_8
  CGlobalVars *v6; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_Value; // xmm2_4
  double v9; // xmm0_8
  CBasePlayer *v10; // r13
  int v11; // eax
  double v12; // xmm0_8
  double v13; // xmm1_8
  CTakeDamageInfo info; // [rsp+0h] [rbp-C0h] BYREF

  if ( CBaseEntity::GetMoveParent(this) == 0 )
  {
    CBaseEntity::GetModelName(&info, this);
    if ( info._vptr_CTakeDamageInfo == 0 )
      return;
    goto LABEL_19;
  }
  MoveParent = CBaseEntity::GetMoveParent(this);
  v3 = (*(MoveParent->_vptr_IHandleEntity + 43))(MoveParent);
  CBaseEntity::GetModelName(&info, this);
  if ( info._vptr_CTakeDamageInfo == 0 )
  {
    if ( v3 == 0 )
      return;
    goto LABEL_4;
  }
  if ( v3 == 0 )
  {
LABEL_19:
    UTIL_Remove(this);
    return;
  }
LABEL_4:
  CCollisionProperty::SetCollisionGroup((v3 + 840), 19);
  if ( (*(v3 + 443) & 0x20) != 0 )
    CBaseModelEntity::SetRenderAlpha(this, 0);
  v5 = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, v4, 0.0);
    }
    *&v5 = LODWORD(v6->m_flCurrentTime);
  }
  m_Value = this->m_flStartTime.m_Value;
  *&v9 = LODWORD(this->m_flFadeInStart.m_Value);
  *&v5 = *&v5 - m_Value;
  if ( *&v9 > *&v5 )
  {
    *&v9 = *&v9 + m_Value;
    CBaseEntity::SetNextThink(this, v9, v5, 0);
  }
  else if ( *&v5 < (this->m_flFadeOutStart.m_Value + this->m_flFadeOutLength.m_Value) )
  {
    *&v12 = CGlobalVarsBase::curtime(gpGlobals, 0) + gpGlobals->interval_per_tick;
    CBaseEntity::SetNextThink(this, v12, v13, 0);
  }
  else
  {
    v10 = UTIL_PlayerByIndex(1);
    v11 = (*(g_pGameRules->_vptr_CGameRules + 30))(g_pGameRules);
    CTakeDamageInfo::CTakeDamageInfo(&info, v10, v10, 10000.0, v11 | 0x400000, 0);
    CBaseEntity::TakeDamage(v3, &info);
    if ( v3 != v10 )
      UTIL_Remove(v3);
    UTIL_Remove(this);
    CTakeDamageInfo::~CTakeDamageInfo(&info);
  }
}


// CEntityDissolve::ElectrocuteThink  (line 371, @0x00000000021c0f90, libserver.so)  // inlines: RandomVector
// calls: CBaseEntity::GetMoveParent, __dynamic_cast, CBaseEntity::VPhysicsGetAggregate, Vector::Random, CGlobalVarsBase::curtime, CBaseEntity::ThinkSet
// globals: s_pElectroThinkContext, CEntityDissolve::ElectrocuteThink(void)
void __fastcall CEntityDissolve::ElectrocuteThink(CEntityDissolve *const this)
{
  CBaseEntity *MoveParent; // rax
  const CBaseEntity *v3; // rax
  int v4; // r12d
  IPhysAggregateInstance *Aggregate; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  vec_t v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // [rsp+Ch] [rbp-34h]
  Vector vecForce; // [rsp+10h] [rbp-30h] BYREF

  MoveParent = CBaseEntity::GetMoveParent(this);
  if ( MoveParent != 0 )
  {
    v3 = __dynamic_cast(MoveParent, &`typeinfo for'CBaseEntity, &`typeinfo for'CRagdollProp, 0);
    if ( v3 != 0 )
    {
      v4 = 0;
      Aggregate = CBaseEntity::VPhysicsGetAggregate(v3);
      while ( v4 < (*(Aggregate->_vptr_IPhysAggregateInstance + 9))(Aggregate) )
      {
        Vector::Random(&vecForce, 2400.0, v8);
        v6 = v4++;
        v7 = (*(Aggregate->_vptr_IPhysAggregateInstance + 10))(Aggregate, v6);
        (*(*v7 + 640LL))(v7, &vecForce);
      }
      v10 = CGlobalVarsBase::curtime(gpGlobals, 0);
      v9 = (*(*random_valve + 8LL))(random_valve, 0.1, 0.2);
      CBaseEntity::ThinkSet(this, CEntityDissolve::ElectrocuteThink, v9 + v10, s_pElectroThinkContext, 0);
    }
  }
}


