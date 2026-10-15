// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/particle_system.cpp:21
class C_CParticleSystem_MapInstall {
	C_CParticleSystem_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CParticleSystem::YouForgotToImplementOrDeclareServerClass  (line 21, @0x000000000209c770, libserver.so)
int __fastcall CParticleSystem::YouForgotToImplementOrDeclareServerClass(CParticleSystem *const this)
{
  return 0;
}


// CParticleSystem::GetServerClass  (line 21, @0x00000000020a12c0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CParticleSystem::GetServerClass(CParticleSystem *const this)
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


// CParticleSystem::GetDataDescMap  (line 24, @0x000000000209c780, libserver.so)
// globals: CParticleSystem::m_DataMap
datamap_t *__fastcall CParticleSystem::GetDataDescMap(CParticleSystem *const this)
{
  return &CParticleSystem::m_DataMap;
}


// CParticleSystem::AddDatadescMetadataKeys  (line 24, @0x00000000020b2a50, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CParticleSystem::GetEntityClass(void)
void __fastcall CParticleSystem::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CParticleSystem::GetEntityClass);
}


// CParticleSystem::GetBaseMap  (line 24, @0x00000000020b2a70, libserver.so)
datamap_t *__cdecl CParticleSystem::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CParticleSystem>  (line 24, @0x00000000020d3fb0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: __static_initialization_and_destruction_0
// strings: "CParticleSystem"
// globals: `guard variable for'DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder, `guard variable for'DataMapInit<CParticleSystem>(CParticleSystem *)::dataDesc, CParticleSystem::GetEntityClass(void), CParticleSystem::m_DataMap, DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CParticleSystem>(CParticleSystem *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder) != 0 )
  {
    DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder.m_pszBase = "CParticleSystem";
    DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder,
      &_dso_handle);
  }
  CParticleSystem::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CParticleSystem>(CParticleSystem *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CParticleSystem>(CParticleSystem *)::dataDesc) != 0 )
  {
    DataMapInit<CParticleSystem>(CParticleSystem *)::dataDesc[10].fieldSize = 260;
    DataMapInit<CParticleSystem>(CParticleSystem *)::dataDesc[11].fieldSize = 64;
    DataMapInit<CParticleSystem>(CParticleSystem *)::dataDesc[12].fieldSize = 64;
    DataMapInit<CParticleSystem>(CParticleSystem *)::dataDesc[13].fieldSize = 64;
    v2 = operator new[](DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder.m_nLenBase + 25);
    strcpy(
      stpcpy(v2, DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder.m_pszBase),
      "StartParticleSystemThink");
    m_Size = DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder.m_Names.m_Size == DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CParticleSystem>(CParticleSystem *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CParticleSystem>(CParticleSystem *)::dataDesc[19].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CParticleSystem>(CParticleSystem *)::dataDesc);
  }
  CParticleSystem::m_DataMap.dataNumFields = 19;
  CParticleSystem::m_DataMap.dataDesc = &DataMapInit<CParticleSystem>(CParticleSystem *)::dataDesc[1];
  AddDatadescMetadataKeys(&CParticleSystem::m_DataMap, CParticleSystem::GetEntityClass);
  return &CParticleSystem::m_DataMap;
}


// CParticleSystem::CParticleSystem  (line 52, @0x00000000020d3540, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkArrayBase, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, GetForModify, NetworkStateChanged, Set, operator=, ~CNetworkVarBase, ~CStrongHandle
// calls: CBaseModelEntity::CBaseModelEntity, CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CParticleSystem::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CParticleSystem::CParticleSystem(CParticleSystem *const this)
{
  CParticleSystem *p_m_hControlPointEnts; // rax
  CParticleSystem *m_iszControlPointNames; // rax
  CNetworkArrayBase<unsigned char,4,CParticleSystem::NetworkVar_m_iServerControlPointAssignments> *p_m_iServerControlPointAssignments; // r13
  unsigned int v5; // r12d

  CBaseModelEntity::CBaseModelEntity(this);
  this->m_bActive.m_Value = 0;
  this->_vptr_IHandleEntity = &off_3FFB9B0;
  this->m_nStopType.m_Value = 0;
  p_m_hControlPointEnts = &this->m_hControlPointEnts;
  this->m_iEffectIndex.m_Value.m_pBinding = 0;
  this->m_flStartTime.m_Value = 0.0;
  do
  {
    LODWORD(p_m_hControlPointEnts->_vptr_IHandleEntity) = -1;
    p_m_hControlPointEnts = (p_m_hControlPointEnts + 4);
  }
  while ( p_m_hControlPointEnts != &this->m_iControlPointParents );
  this->m_bNoSave = 0;
  m_iszControlPointNames = this->m_iszControlPointNames;
  this->m_iszEffectName.u.m_Id = 0;
  do
  {
    m_iszControlPointNames->_vptr_IHandleEntity = 0;
    m_iszControlPointNames = (m_iszControlPointNames + 8);
  }
  while ( m_iszControlPointNames != this + 1 );
  (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_szSnapshotFileName.m_Value[0] = 0;
  p_m_iServerControlPointAssignments = &this->m_iServerControlPointAssignments;
  v5 = 0;
  this->m_iszEffectName.u.m_Id = 0;
  do
  {
    if ( p_m_iServerControlPointAssignments->m_Value[0] != 0xFF )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1484, v5, 0xFFFFFFFFLL);
      p_m_iServerControlPointAssignments->m_Value[0] = -1;
    }
    ++v5;
    p_m_iServerControlPointAssignments = (p_m_iServerControlPointAssignments + 1);
  }
  while ( v5 != 4 );
}


// CParticleSystem::Precache  (line 66, @0x00000000020f0080, libserver.so)  // inlines: CUtlSymbolLarge, GetClassNameAsCStr, GetEntityName, Precache, String, ToCStr
// calls: CEntityInstance::Precache, CEntityInstance::IsAuthoritative, Warning, PrecacheParticleSystem
// strings: "%s (%s) has no particle system name specified!\n"
void __fastcall CParticleSystem::Precache(CParticleSystem *const this, const CEntityPrecacheContext *pContext)
{
  const char *m_pAsString; // rdi
  CEntityIdentity *m_pEntity; // rax
  const char *v6; // rsi
  const char *v7; // rdx

  CEntityInstance::Precache(this, pContext);
  if ( !CEntityInstance::IsAuthoritative(this) )
    return;
  if ( this->m_iszEffectName.u.m_Id == 0 )
  {
    m_pAsString = "";
    if ( asc_32DB004[2] == 0 )
      goto LABEL_4;
LABEL_10:
    PrecacheParticleSystem(m_pAsString, pContext);
    return;
  }
  m_pAsString = this->m_iszEffectName.u.m_pAsString;
  if ( *m_pAsString != 0 )
    goto LABEL_10;
LABEL_4:
  m_pEntity = this->m_pEntity;
  v6 = "";
  v7 = m_pEntity->m_name.u.m_pAsString;
  if ( v7 == 0 )
    v7 = "";
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    v6 = m_pEntity->m_designerName.u.m_pAsString;
  Warning("%s (%s) has no particle system name specified!\n", v6, v7);
}


// CParticleSystem::Spawn  (line 88, @0x00000000020e03d0, libserver.so)  // inlines: CStrongHandle, NetworkStateChanged, Set, operator=, operator=<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> >, ~CStrongHandle
// calls: CBaseEntity::Spawn, CEntityInstance::IsAuthoritative, CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init, CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, _Unwind_Resume
void __fastcall CParticleSystem::Spawn(CParticleSystem *const this, const CEntityKeyValues *pKeyValues)
{
  bool v3; // zf
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> src; // [rsp+0h] [rbp-20h] BYREF

  CBaseEntity::Spawn(this, pKeyValues);
  if ( CEntityInstance::IsAuthoritative(this) )
  {
    v3 = this->m_iEffectIndex.m_Value.m_pBinding == 0;
    src.m_pBinding = 0;
    if ( !v3 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1424, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init(&this->m_iEffectIndex.m_Value, &src);
    }
    CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&src);
  }
}


// CParticleSystem::Activate  (line 101, @0x00000000020e0480, libserver.so)  // inlines: CStrongHandle, GetBinding, Init, NetworkStateChanged, Set, String, ThreadInterlockedIncrement, ToCStr, operator++, operator=, operator=<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> >, ~CStrongHandle
// calls: CBaseModelEntity::Activate, CEntityInstance::IsAuthoritative, GetParticleSystemIndex, CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init, CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CParticleSystem::StartParticleSystem, _Unwind_Resume
void __fastcall CParticleSystem::Activate(CParticleSystem *const this, ActivateType_t activateType)
{
  const char *m_pAsString; // rsi
  const ResourceBindingBase_t *m_pBinding; // rsi
  const ResourceBindingBase_t *v5; // rax
  __int64 v6; // [rsp+0h] [rbp-30h]
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> src; // [rsp+10h] [rbp-20h] BYREF

  CBaseModelEntity::Activate(this, activateType);
  if ( CEntityInstance::IsAuthoritative(this) )
  {
    m_pAsString = "";
    if ( this->m_iszEffectName.u.m_Id != 0 )
      m_pAsString = this->m_iszEffectName.u.m_pAsString;
    GetParticleSystemIndex(m_pAsString);
    src.m_pBinding = v6;
    if ( v6 != 0 )
    {
      m_pBinding = v6;
      if ( (*(v6 + 16) & 0x20) != 0 )
      {
        (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, v6, 2, &src);
        m_pBinding = src.m_pBinding;
      }
      _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
      v5 = src.m_pBinding;
    }
    else
    {
      v5 = 0;
    }
    if ( this->m_iEffectIndex.m_Value.m_pBinding != v5 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1424, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Init(&this->m_iEffectIndex.m_Value, &src);
    }
    CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&src);
    if ( this->m_bStartActive )
    {
      this->m_bStartActive = 0;
      CParticleSystem::StartParticleSystem(this);
    }
  }
}


// CParticleSystem::UpdateOnRemove  (line 133, @0x000000000209c9c0, libserver.so)
// calls: CBaseModelEntity::UpdateOnRemove
void __fastcall CParticleSystem::UpdateOnRemove(CParticleSystem *const this)
{
  CBaseModelEntity::UpdateOnRemove(this);
}


// CParticleSystem::StartParticleSystemThink  (line 149, @0x00000000020b2d50, libserver.so)
// calls: CEntityInstance::IsAuthoritative, CParticleSystem::StartParticleSystem
void __fastcall CParticleSystem::StartParticleSystemThink(CParticleSystem *const this)
{
  if ( CEntityInstance::IsAuthoritative(this) )
    CParticleSystem::StartParticleSystem(this);
}


// CParticleSystem::UpdateTransmitState  (line 162, @0x000000000209c9b0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CParticleSystem::UpdateTransmitState(CParticleSystem *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CParticleSystem::SetTransmit  (line 168, @0x000000000209fc90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, entindex, operator CBaseEntity*, operator CEntityInstance*
// calls: CEntityInstance::GetEntityIndex, CBaseEntity::SetTransmit
// globals: CEntityHandle::gm_pEntityList
void __fastcall CParticleSystem::SetTransmit(CParticleSystem *const this, CCheckTransmitInfo *pInfo, bool bAlways)
{
  CEntityIndex v6; // eax
  CParticleSystem *v7; // rdi
  CNetworkArrayBase<CHandle<CBaseEntity>,64,CParticleSystem::NetworkVar_m_hControlPointEnts> *p_m_hControlPointEnts; // rbx
  int v9; // r12d
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx

  v6.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  if ( ((1 << SLOBYTE(v6.m_Data)) & pInfo->m_pTransmitEdict->m_Ints[v6.m_Data >> 5]) == 0 )
  {
    v7 = this;
    p_m_hControlPointEnts = &this->m_hControlPointEnts;
    v9 = 64;
    CBaseEntity::SetTransmit(v7, pInfo, bAlways);
    do
    {
      if ( p_m_hControlPointEnts->m_Value[0].m_Index + 2 > 1 )
      {
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hControlPointEnts->m_Value[0].m_Index) >> 9)
                                                             & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[p_m_hControlPointEnts->m_Value[0].m_Index & 0x1FF];
          if ( v11 != 0 && p_m_hControlPointEnts->m_Value[0].m_Index == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
            (*(v11->m_pInstance->_vptr_IHandleEntity + 66))(v11->m_pInstance, pInfo, bAlways);
        }
      }
      p_m_hControlPointEnts = (p_m_hControlPointEnts + 4);
      --v9;
    }
    while ( v9 != 0 );
  }
}


// CParticleSystem::StartParticleSystem  (line 192, @0x00000000020b2c60, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator=<bool>, operator=<float>
// calls: CEntityInstance::IsAuthoritative, CParticleSystem::ReadControlPointEnts
// callers: CParticleSystem::StartParticleSystemThink, CParticleSystem::InputStart, CParticleSystem::Activate
void __fastcall CParticleSystem::StartParticleSystem(CParticleSystem *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v5; // [rsp+Ch] [rbp-14h]

  if ( CEntityInstance::IsAuthoritative(this) && !this->m_bActive.m_Value )
  {
    m_flCurrentTime = 0.0;
    v3 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v3->m_flCurrentTime;
    }
    if ( m_flCurrentTime != this->m_flStartTime.m_Value )
    {
      v5 = m_flCurrentTime;
      (*(this->_vptr_IHandleEntity + 22))(this, 1432, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flStartTime.m_Value = v5;
    }
    if ( !this->m_bActive.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1412, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bActive.m_Value = 1;
    }
    CParticleSystem::ReadControlPointEnts(this);
  }
}


// CParticleSystem::OnActivityChanged  (line 208, @0x00000000020b2a80, libserver.so)
void __fastcall CParticleSystem::OnActivityChanged(CParticleSystem *const this)
{
  ;
}


// CParticleSystem::StopParticleSystem  (line 240, @0x00000000020b2a90, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>, operator=<int>
// calls: CEntityInstance::IsAuthoritative
// callers: CParticleSystem::InputStop, CParticleSystem::InputDestroy, CParticleSystem::InputStopEndCap
void __fastcall CParticleSystem::StopParticleSystem(CParticleSystem *const this, int nStopType)
{
  bool v4; // zf

  if ( CEntityInstance::IsAuthoritative(this) )
  {
    if ( this->m_bActive.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1412, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v4 = nStopType == this->m_nStopType.m_Value;
      this->m_bActive.m_Value = 0;
      if ( v4 )
        return;
    }
    else if ( nStopType == this->m_nStopType.m_Value )
    {
      return;
    }
    (*(this->_vptr_IHandleEntity + 22))(this, 1416, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nStopType.m_Value = nStopType;
  }
}


// CParticleSystem::InputStart  (line 254, @0x00000000020b2d80, libserver.so)
// calls: CParticleSystem::StartParticleSystem
void __fastcall CParticleSystem::InputStart(CParticleSystem *const this, inputdata_t *const inputdata)
{
  CParticleSystem::StartParticleSystem(this);
}


// CParticleSystem::InputStop  (line 262, @0x00000000020b2b10, libserver.so)
// calls: CParticleSystem::StopParticleSystem
void __fastcall CParticleSystem::InputStop(CParticleSystem *const this, inputdata_t *const inputdata)
{
  CParticleSystem::StopParticleSystem(this, 0);
}


// CParticleSystem::InputDestroy  (line 267, @0x00000000020b2b20, libserver.so)
// calls: CParticleSystem::StopParticleSystem
void __fastcall CParticleSystem::InputDestroy(CParticleSystem *const this, inputdata_t *const inputdata)
{
  CParticleSystem::StopParticleSystem(this, 1);
}


// CParticleSystem::InputStopEndCap  (line 272, @0x00000000020b2b30, libserver.so)
// calls: CParticleSystem::StopParticleSystem
void __fastcall CParticleSystem::InputStopEndCap(CParticleSystem *const this, inputdata_t *const inputdata)
{
  CParticleSystem::StopParticleSystem(this, 2);
}


// CParticleSystem::InputSetControlPoint  (line 277, @0x00000000020b2f10, libserver.so)  // inlines: AssignTo, TempString, ToString
// calls: sscanf, V_snprintf, VariantFieldTypeName, Warning, CParticleSystem::SetControlPointValue
// strings: "%d: %f %f %f", "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_20B2F43, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CParticleSystem::InputSetControlPoint(CParticleSystem *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rdi
  const char *v5; // rax
  double m_float; // xmm0_8
  const char *v7; // rcx
  const char *v8; // rdx
  int nControlPoint; // [rsp+1Ch] [rbp-24h] BYREF
  Vector vValue; // [rsp+20h] [rbp-20h] BYREF

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
        goto LABEL_10;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_14;
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
        goto LABEL_16;
      case 6:
        v7 = "true";
        v8 = "%s";
        if ( inputdata->value.m_char == 0 )
          v7 = "false";
        goto LABEL_18;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_16;
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
        v7 = inputdata->value.m_pszString;
        v8 = "%lld";
LABEL_18:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v8, v7);
        goto LABEL_19;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_19:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_14:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_16:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_10:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  if ( m_pszString != 0 )
  {
    nControlPoint = 0;
    if ( sscanf(m_pszString, "%d: %f %f %f", &nControlPoint, &vValue, &vValue.y, &vValue.z) > 3 )
      CParticleSystem::SetControlPointValue(this, nControlPoint, &vValue);
  }
}


// CParticleSystem::ReadControlPointEnts  (line 301, @0x00000000020b2b40, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, NetworkStateChanged, Set, operator=
// calls: CGameEntitySystem::FindEntityGeneric, memcmp
// callers: CParticleSystem::StartParticleSystem
// globals: g_pGameEntitySystem
void __fastcall CParticleSystem::ReadControlPointEnts(CParticleSystem *const this)
{
  CNetworkArrayBase<CHandle<CBaseEntity>,64,CParticleSystem::NetworkVar_m_hControlPointEnts> *p_m_hControlPointEnts; // r12
  __int64 i; // rbx
  CBaseEntity *EntityGeneric; // rax
  CEntityIdentity *m_pEntity; // rax
  int v6; // edx
  __int16 v7; // cx
  int s2[16]; // [rsp+0h] [rbp-40h] BYREF

  p_m_hControlPointEnts = &this->m_hControlPointEnts;
  for ( i = 0; i != 64; ++i )
  {
    if ( this->m_iszControlPointNames[i].u.m_Id != 0 )
    {
      EntityGeneric = CGameEntitySystem::FindEntityGeneric(
                        g_pGameEntitySystem,
                        0,
                        this->m_iszControlPointNames[i].u.m_pAsString,
                        this,
                        0,
                        0);
      if ( EntityGeneric != 0 )
      {
        m_pEntity = EntityGeneric->m_pEntity;
        s2[0] = -1;
        if ( m_pEntity != 0 )
        {
          v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v7 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(s2[0]) = v7 | s2[0] & 0x8000;
          s2[0] = (v6 << 15) | s2[0] & 0x7FFF;
        }
        if ( memcmp(p_m_hControlPointEnts, s2, 4u) != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1488, i, 0xFFFFFFFFLL);
          p_m_hControlPointEnts->m_Value[0].m_Index = s2[0];
        }
      }
    }
    p_m_hControlPointEnts = (p_m_hControlPointEnts + 4);
  }
}


// CParticleSystem::SetControlPointValue  (line 324, @0x00000000020b2d90, libserver.so)  // inlines: NetworkStateChanged, Set, operator=
// calls: CEntityInstance::IsAuthoritative, Warning, memcmp
// callers: CParticleSystem::InputSetControlPoint
// strings: "No free server controlled control points.\n"
bool __fastcall CParticleSystem::SetControlPointValue(
        CParticleSystem *const this,
        int iControlPoint,
        const Vector *const vValue)
{
  __int64 v6; // rdx
  bool IsAuthoritative; // r12
  CNetworkArrayBase<unsigned char,4,CParticleSystem::NetworkVar_m_iServerControlPointAssignments> *p_m_iServerControlPointAssignments; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rax
  vec_t *p_x; // rbx
  unsigned int v15; // [rsp+Ch] [rbp-34h]

  IsAuthoritative = CEntityInstance::IsAuthoritative(this);
  if ( IsAuthoritative )
  {
    p_m_iServerControlPointAssignments = &this->m_iServerControlPointAssignments;
    v9 = 0;
    while ( 1 )
    {
      v10 = p_m_iServerControlPointAssignments->m_Value[v9];
      v11 = v9;
      if ( v10 == iControlPoint )
        break;
      if ( v10 == 0xFF )
      {
        v13 = v9;
        if ( iControlPoint != 0xFF )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1484, v9, 0xFFFFFFFFLL);
          v13 = v9;
          LODWORD(v11) = v9;
          this->m_iServerControlPointAssignments.m_Value[v9] = iControlPoint;
        }
        p_x = &this->m_vServerControlPoints.m_Value[v13].x;
        v15 = v11;
        if ( memcmp(p_x, vValue, 0xCu) != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1436, v15, 0xFFFFFFFFLL);
          *p_x = vValue->x;
          p_x[1] = vValue->y;
          p_x[2] = vValue->z;
        }
        return IsAuthoritative;
      }
      if ( ++v9 == 4 )
      {
        IsAuthoritative = 0;
        Warning("No free server controlled control points.\n", p_m_iServerControlPointAssignments, v6, v10, v11);
        return IsAuthoritative;
      }
    }
    if ( memcmp(&this->m_vServerControlPoints.m_Value[v9], vValue, 0xCu) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1436, v9, 0xFFFFFFFFLL);
      this->m_vServerControlPoints.m_Value[v9].x = vValue->x;
      this->m_vServerControlPoints.m_Value[v9].y = vValue->y;
      this->m_vServerControlPoints.m_Value[v9].z = vValue->z;
    }
  }
  return IsAuthoritative;
}


// CParticleSystem::ObjectCaps  (line 363, @0x000000000209c920, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CParticleSystem::ObjectCaps(CParticleSystem *const this)
{
  int v1; // ebx

  v1 = -!this->m_bNoSave;
  return ~v1 & 0x80000000 | CBaseEntity::ObjectCaps(this);
}


