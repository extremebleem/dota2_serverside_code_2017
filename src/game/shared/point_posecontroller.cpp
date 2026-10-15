// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/point_posecontroller.cpp:57
class C_CPoseController_MapInstall {
	C_CPoseController_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPoseController::GetDataDescMap  (line 25, @0x000000000231ec80, libserver.so)
// globals: CPoseController::m_DataMap
datamap_t *__fastcall CPoseController::GetDataDescMap(CPoseController *const this)
{
  return &CPoseController::m_DataMap;
}


// CPoseController::AddDatadescMetadataKeys  (line 25, @0x0000000002327f40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPoseController::GetEntityClass(void)
void __fastcall CPoseController::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPoseController::GetEntityClass);
}


// CPoseController::GetBaseMap  (line 25, @0x0000000002327f60, libserver.so)
datamap_t *__cdecl CPoseController::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CPoseController>  (line 25, @0x0000000002333cc0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "CPoseController"
// globals: `guard variable for'DataMapInit<CPoseController>(CPoseController *)::nameHolder, `guard variable for'DataMapInit<CPoseController>(CPoseController *)::dataDesc, CPoseController::GetEntityClass(void), CPoseController::m_DataMap, DataMapInit<CPoseController>(CPoseController *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPoseController>(CPoseController *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CPoseController>(CPoseController *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPoseController>(CPoseController *)::nameHolder) != 0 )
  {
    DataMapInit<CPoseController>(CPoseController *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPoseController>(CPoseController *)::nameHolder.m_pszBase = "CPoseController";
    DataMapInit<CPoseController>(CPoseController *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPoseController>(CPoseController *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPoseController>(CPoseController *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPoseController>(CPoseController *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPoseController>(CPoseController *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPoseController>(CPoseController *)::nameHolder,
      &_dso_handle);
  }
  CPoseController::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPoseController>(CPoseController *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPoseController>(CPoseController *)::dataDesc) != 0 )
  {
    DataMapInit<CPoseController>(CPoseController *)::dataDesc[2].fieldSize = 4;
    DataMapInit<CPoseController>(CPoseController *)::dataDesc[1].fieldSize = 4;
    v2 = operator new[](DataMapInit<CPoseController>(CPoseController *)::nameHolder.m_nLenBase + 6);
    strcpy(stpcpy(v2, DataMapInit<CPoseController>(CPoseController *)::nameHolder.m_pszBase), "Think");
    m_Size = DataMapInit<CPoseController>(CPoseController *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CPoseController>(CPoseController *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CPoseController>(CPoseController *)::nameHolder.m_Names.m_Size == DataMapInit<CPoseController>(CPoseController *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CPoseController>(CPoseController *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CPoseController>(CPoseController *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CPoseController>(CPoseController *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CPoseController>(CPoseController *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CPoseController>(CPoseController *)::dataDesc[15].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPoseController>(CPoseController *)::dataDesc);
  }
  CPoseController::m_DataMap.dataNumFields = 25;
  CPoseController::m_DataMap.dataDesc = &DataMapInit<CPoseController>(CPoseController *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPoseController::m_DataMap, CPoseController::GetEntityClass);
  return &CPoseController::m_DataMap;
}


// CPoseController::YouForgotToImplementOrDeclareServerClass  (line 57, @0x000000000231ec90, libserver.so)
int __fastcall CPoseController::YouForgotToImplementOrDeclareServerClass(CPoseController *const this)
{
  return 0;
}


// CPoseController::GetServerClass  (line 57, @0x00000000023241d0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPoseController::GetServerClass(CPoseController *const this)
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


// CPoseController::Spawn  (line 61, @0x0000000002320850, libserver.so)  // inlines: AddEFlags, curtime
// calls: CBaseEntity::Spawn, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
void __fastcall CPoseController::Spawn(CPoseController *const this, const CEntityKeyValues *pKeyValues)
{
  double v3; // xmm1_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseEntity::Spawn(this, pKeyValues);
  this->m_iEFlags |= 0x80u;
  CBaseEntity::DispatchUpdateTransmitState(this);
  CBaseEntity::ThinkSet(this, 0x3A9uLL, 0.0, 0, 0);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v4->m_flCurrentTime + 1.0)), v3, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1065353216), v3, 0);
  }
}


// CPoseController::Think  (line 74, @0x0000000002328ee0, libserver.so)  // inlines: curtime
// calls: CPoseController::BuildPropList, CPoseController::SetCurrentPose, CBaseEntity::SetNextThink
void __fastcall CPoseController::Think(CPoseController *const this)
{
  float v2; // xmm1_4
  double v3; // xmm1_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v6; // xmm0_8

  if ( !this->m_bDisablePropLookup )
  {
    CPoseController::BuildPropList(this);
    CPoseController::SetCurrentPose(this, this->m_fPoseValue.m_Value, v2);
    this->m_bDisablePropLookup = 1;
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v6) = 0;
      *&v6 = v4->m_flCurrentTime + 1.0;
    }
    else
    {
      *&v6 = 1065353216;
    }
    CBaseEntity::SetNextThink(this, v6, v3, 0);
  }
}


// CPoseController::BuildPropList  (line 90, @0x0000000002327fd0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlSymbolLarge, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, String, ToCStr, operator CEntityInstance*, operator!=, operator!=<CBaseEntity>, operator=
// calls: CGameEntitySystem::FindEntityByName, memcmp, CBaseAnimating::LookupPoseParameter, CPoseController::SetPoseIndex, __dynamic_cast, CDynamicProp::PropSetSequence, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink
// callers: CPoseController::SetPropName, CPoseController::Think
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPoseController::BuildPropList(CPoseController *const this)
{
  int v2; // ebx
  CBaseEntity *EntityByName; // r14
  CEntityIdentity *m_pEntity; // rax
  int v5; // edx
  __int16 v6; // cx
  const char *m_pAsString; // rsi
  int v8; // eax
  int v9; // esi
  CBaseEntity *v10; // rax
  const CBaseAnimating *v11; // rax
  const CBaseAnimating *v12; // r13
  CDynamicProp *v13; // rax
  CHandle<CBaseEntity> *v14; // r15
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CHandle<CBaseEntity> *v17; // r13
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  __int64 v20; // rdx
  double v21; // xmm0_8
  double v22; // xmm1_8
  CNetworkArrayBase<CHandle<CBaseEntity>,4,CPoseController::NetworkVar_m_hProps> *p_m_hProps; // [rsp+10h] [rbp-50h]
  string_t iszName; // [rsp+20h] [rbp-40h] BYREF

  v2 = 0;
  iszName.u.m_Id = this->m_iszPropName.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  if ( EntityByName == 0 )
    goto LABEL_24;
  p_m_hProps = &this->m_hProps;
  do
  {
    v11 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0);
    v12 = v11;
    if ( v11 != 0 )
    {
      v13 = __dynamic_cast(v11, &`typeinfo for'CBaseAnimating, &`typeinfo for'CDynamicProp, 0);
      if ( v13 != 0 )
        CDynamicProp::PropSetSequence(v13, 0);
      v14 = &p_m_hProps->m_Value[v2];
      if ( v14->m_Index + 2 <= 1
        || (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Index) >> 9) & 0x3F]) == 0
        || (v16 = &v15[v14->m_Index & 0x1FF]) == 0
        || v14->m_Index != v16->m_EHandle.m_Index
        || v12 != v16->m_pInstance )
      {
        LODWORD(iszName.u.m_Id) = -1;
        m_pEntity = v12->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v6 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(iszName.u.m_Id) = v6 | iszName.u.m_Id & 0x8000;
          LODWORD(iszName.u.m_Id) = (v5 << 15) | iszName.u.m_Id & 0x7FFF;
        }
        if ( memcmp(&p_m_hProps->m_Value[v2], &iszName, 4u) != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 812, v2, 0xFFFFFFFFLL);
          v14->m_Index = iszName.u.m_Id;
        }
      }
      m_pAsString = "";
      if ( this->m_iszPoseParameterName.u.m_Id != 0 )
        m_pAsString = this->m_iszPoseParameterName.u.m_pAsString;
      v8 = CBaseAnimating::LookupPoseParameter(v12, m_pAsString);
      v9 = v2++;
      CPoseController::SetPoseIndex(this, v9, v8);
    }
    iszName.u.m_Id = this->m_iszPropName.u.m_Id;
    v10 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, EntityByName, &iszName, this, 0, 0, 0);
    EntityByName = v10;
  }
  while ( v2 <= 3 && v10 != 0 );
  if ( v2 <= 3 )
  {
LABEL_24:
    v17 = &this->m_hProps.m_Value[v2];
    do
    {
      while ( 1 )
      {
        if ( v17->m_Index + 2 > 1 )
        {
          v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v17->m_Index) >> 9) & 0x3F];
          if ( v18 != 0 )
          {
            v19 = &v18[v17->m_Index & 0x1FF];
            if ( v19 != 0 && v17->m_Index == v19->m_EHandle.m_Index && v19->m_pInstance != 0 )
            {
              LODWORD(iszName.u.m_Id) = -1;
              if ( memcmp(v17, &iszName, 4u) != 0 )
                break;
            }
          }
        }
        ++v2;
        ++v17;
        if ( v2 > 3 )
          goto LABEL_33;
      }
      v20 = v2++;
      ++v17;
      (*(this->_vptr_IHandleEntity + 22))(this, 812, v20, 0xFFFFFFFFLL);
      v17[-1].m_Index = iszName.u.m_Id;
    }
    while ( v2 <= 3 );
  }
LABEL_33:
  *&v21 = CGlobalVarsBase::curtime(gpGlobals, 0) + 1.0;
  CBaseEntity::SetNextThink(this, v21, v22, 0);
}


// CPoseController::BuildPoseIndexList  (line 133, @0x0000000002328300, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, operator CEntityInstance*
// calls: __dynamic_cast, CBaseAnimating::LookupPoseParameter, CPoseController::SetPoseIndex
// callers: CPoseController::SetPoseParameterName
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPoseController::BuildPoseIndexList(CPoseController *const this)
{
  CNetworkArrayBase<CHandle<CBaseEntity>,4,CPoseController::NetworkVar_m_hProps> *p_m_hProps; // r12
  int i; // ebx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  const CBaseAnimating *v6; // rax
  const char *m_pAsString; // rsi
  int v8; // eax

  p_m_hProps = &this->m_hProps;
  for ( i = 0; i != 4; ++i )
  {
    if ( p_m_hProps->m_Value[0].m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hProps->m_Value[0].m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[p_m_hProps->m_Value[0].m_Index & 0x1FF];
        if ( v5 != 0 && p_m_hProps->m_Value[0].m_Index == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
        {
          v6 = __dynamic_cast(v5->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0);
          if ( v6 != 0 )
          {
            m_pAsString = "";
            if ( this->m_iszPoseParameterName.u.m_Id != 0 )
              m_pAsString = this->m_iszPoseParameterName.u.m_pAsString;
            v8 = CBaseAnimating::LookupPoseParameter(v6, m_pAsString);
            CPoseController::SetPoseIndex(this, i, v8);
          }
        }
      }
    }
    p_m_hProps = (p_m_hProps + 4);
  }
}


// CPoseController::SetPoseIndex  (line 147, @0x0000000002327f70, libserver.so)  // inlines: NetworkStateChanged, Set
// callers: CPoseController::BuildPropList, CPoseController::BuildPoseIndexList, CPoseController::SetProp
void __fastcall CPoseController::SetPoseIndex(CPoseController *const this, int i, int iValue)
{
  __int64 v3; // r13
  int v5; // ebx
  unsigned __int8 v6; // al

  v3 = i;
  v5 = iValue;
  if ( iValue == -1 )
    v5 = 24;
  v6 = this->m_chPoseIndex.m_Value[i];
  if ( v5 != v6 && v6 != v5 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, i, 0xFFFFFFFFLL);
    this->m_chPoseIndex.m_Value[v3] = v5;
  }
}


// CPoseController::GetPoseValue  (line 162, @0x00000000023283d0, libserver.so)
float __fastcall CPoseController::GetPoseValue(CPoseController *const this)
{
  return this->m_fPoseValue.m_Value;
}


// CPoseController::SetProp  (line 167, @0x00000000023283e0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, String, ToCStr, operator CEntityInstance*, operator!=, operator!=<CBaseEntity>, operator=
// calls: memcmp, CBaseAnimating::LookupPoseParameter, CPoseController::SetPoseIndex
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPoseController::SetProp(CPoseController *const this, CBaseAnimating *pProp)
{
  CBaseAnimating *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v9; // cx
  const char *m_pAsString; // rsi
  unsigned int v11; // r12d
  int v12; // eax
  CHandle<CBaseEntity> *v13; // rbx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  _DWORD s2[12]; // [rsp+0h] [rbp-30h] BYREF

  m_pInstance = 0;
  m_Index = this->m_hProps.m_Value[0].m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hProps.m_Value[0].m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hProps.m_Value[0].m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( pProp != m_pInstance )
  {
    s2[0] = -1;
    if ( pProp != 0 )
    {
      m_pEntity = pProp->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v9 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        s2[0] = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
      }
    }
    if ( memcmp(&this->m_hProps, s2, 4u) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 812, 0, 0xFFFFFFFFLL);
      this->m_hProps.m_Value[0].m_Index = s2[0];
    }
  }
  m_pAsString = "";
  if ( this->m_iszPoseParameterName.u.m_Id != 0 )
    m_pAsString = this->m_iszPoseParameterName.u.m_pAsString;
  v11 = 1;
  v12 = CBaseAnimating::LookupPoseParameter(pProp, m_pAsString);
  v13 = &this->m_hProps.m_Value[1];
  CPoseController::SetPoseIndex(this, 0, v12);
  do
  {
    if ( v13->m_Index + 2 > 1 )
    {
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[v13->m_Index & 0x1FF];
        if ( v15 != 0 && v13->m_Index == v15->m_EHandle.m_Index && v15->m_pInstance != 0 )
        {
          s2[0] = -1;
          if ( memcmp(v13, s2, 4u) != 0 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 812, v11, 0xFFFFFFFFLL);
            v13->m_Index = s2[0];
          }
        }
      }
    }
    ++v11;
    ++v13;
  }
  while ( v11 != 4 );
  this->m_bDisablePropLookup = 0;
}


// CPoseController::SetPropName  (line 189, @0x00000000023285e0, libserver.so)  // inlines: operator=
// calls: MakeEntitySystemString, CPoseController::BuildPropList
void __fastcall CPoseController::SetPropName(CPoseController *const this, const char *pName)
{
  UtlSymLargeId_t v3; // [rsp+0h] [rbp-20h]

  MakeEntitySystemString(pName);
  this->m_iszPropName.u.m_Id = v3;
  CPoseController::BuildPropList(this);
}


// CPoseController::SetPoseParameterName  (line 196, @0x0000000002328610, libserver.so)  // inlines: operator=
// calls: MakeEntitySystemString, CPoseController::BuildPoseIndexList
// callers: CPoseController::InputSetPoseParameterName
void __fastcall CPoseController::SetPoseParameterName(CPoseController *const this, const char *pName)
{
  UtlSymLargeId_t v3; // [rsp+0h] [rbp-20h]

  MakeEntitySystemString(pName);
  this->m_iszPoseParameterName.u.m_Id = v3;
  CPoseController::BuildPoseIndexList(this);
}


// CPoseController::SetPoseValue  (line 203, @0x0000000002328f80, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>, operator=<float>
// calls: CPoseController::SetCurrentPose
// callers: CPoseController::InputSetPoseValue
void __fastcall CPoseController::SetPoseValue(CPoseController *const this, float a2, float fValue)
{
  float v4; // xmm1_4
  bool v5; // r12
  float v6; // [rsp+Ch] [rbp-14h]

  v4 = 1.0;
  if ( a2 <= 1.0 )
    v4 = fmaxf(0.0, a2);
  if ( v4 != this->m_fPoseValue.m_Value )
  {
    v6 = v4;
    (*(this->_vptr_IHandleEntity + 22))(this, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4 = v6;
    this->m_fPoseValue.m_Value = v6;
  }
  v5 = !this->m_bPoseValueParity.m_Value;
  if ( this->m_bPoseValueParity.m_Value != v5 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bPoseValueParity.m_Value = v5;
  }
  CPoseController::SetCurrentPose(this, this->m_fPoseValue.m_Value, v4);
}


// CPoseController::SetInterpolationTime  (line 213, @0x00000000023288e0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CPoseController::InputSetInterpolationTime
void __fastcall CPoseController::SetInterpolationTime(CPoseController *const this, float a2, float fValue)
{
  float v4; // xmm1_4
  float v5; // [rsp+Ch] [rbp-14h]

  v4 = 10.0;
  if ( a2 <= 10.0 )
    v4 = fmaxf(0.0, a2);
  if ( v4 != this->m_fInterpolationTime.m_Value )
  {
    v5 = v4;
    (*(this->_vptr_IHandleEntity + 22))(this, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fInterpolationTime.m_Value = v5;
  }
}


// CPoseController::SetInterpolationWrap  (line 218, @0x0000000002328980, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CPoseController::SetInterpolationWrap(CPoseController *const this, bool bWrap)
{
  if ( this->m_bInterpolationWrap.m_Value != bWrap )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bInterpolationWrap.m_Value = bWrap;
  }
}


// CPoseController::SetCycleFrequency  (line 223, @0x00000000023289c0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CPoseController::InputSetCycleFrequency
void __fastcall CPoseController::SetCycleFrequency(CPoseController *const this, float a2, float fValue)
{
  float v4; // xmm1_4
  float v5; // [rsp+Ch] [rbp-14h]

  v4 = 10.0;
  if ( a2 <= 10.0 )
    v4 = fmaxf(-10.0, a2);
  if ( v4 != this->m_fCycleFrequency.m_Value )
  {
    v5 = v4;
    (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fCycleFrequency.m_Value = v5;
  }
}


// CPoseController::SetFModType  (line 228, @0x0000000002328a70, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<PoseController_FModType_t>
// callers: CPoseController::InputSetFModType, CPoseController::RandomizeFMod
void __fastcall CPoseController::SetFModType(CPoseController *const this, int nType)
{
  if ( nType <= 5 && nType != this->m_nFModType.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nFModType.m_Value = nType;
  }
}


// CPoseController::SetFModTimeOffset  (line 236, @0x0000000002328af0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CPoseController::InputSetFModTimeOffset, CPoseController::RandomizeFMod
void __fastcall CPoseController::SetFModTimeOffset(CPoseController *const this, float a2, float fValue)
{
  float v4; // xmm1_4
  float v5; // [rsp+Ch] [rbp-14h]

  v4 = 1.0;
  if ( a2 <= 1.0 )
    v4 = fmaxf(-1.0, a2);
  if ( v4 != this->m_fFModTimeOffset.m_Value )
  {
    v5 = v4;
    (*(this->_vptr_IHandleEntity + 22))(this, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fFModTimeOffset.m_Value = v5;
  }
}


// CPoseController::SetFModRate  (line 241, @0x0000000002328ba0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CPoseController::InputSetFModRate, CPoseController::RandomizeFMod
void __fastcall CPoseController::SetFModRate(CPoseController *const this, float a2, float fValue)
{
  float v4; // xmm1_4
  float v5; // [rsp+Ch] [rbp-14h]

  v4 = 10.0;
  if ( a2 <= 10.0 )
    v4 = fmaxf(-10.0, a2);
  if ( v4 != this->m_fFModRate.m_Value )
  {
    v5 = v4;
    (*(this->_vptr_IHandleEntity + 22))(this, 804, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fFModRate.m_Value = v5;
  }
}


// CPoseController::SetFModAmplitude  (line 246, @0x0000000002328c50, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CPoseController::InputSetFModAmplitude, CPoseController::RandomizeFMod
void __fastcall CPoseController::SetFModAmplitude(CPoseController *const this, float a2, float fValue)
{
  float v4; // xmm1_4
  float v5; // [rsp+Ch] [rbp-14h]

  v4 = 10.0;
  if ( a2 <= 10.0 )
    v4 = fmaxf(0.0, a2);
  if ( v4 != this->m_fFModAmplitude.m_Value )
  {
    v5 = v4;
    (*(this->_vptr_IHandleEntity + 22))(this, 808, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fFModAmplitude.m_Value = v5;
  }
}


// CPoseController::RandomizeFMod  (line 251, @0x0000000002328cf0, libserver.so)
// calls: RandomInt, CPoseController::SetFModType, RandomFloat, CPoseController::SetFModTimeOffset, CPoseController::SetFModRate, CPoseController::SetFModAmplitude
// callers: CPoseController::InputRandomizeFMod
void __fastcall CPoseController::RandomizeFMod(CPoseController *const this, float a2, float fExtremeness)
{
  float v5; // xmm0_4
  int v6; // eax
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float fExtremenessa; // [rsp+Ch] [rbp-14h]
  float fExtremenessb; // [rsp+Ch] [rbp-14h]

  v5 = 1.0;
  if ( a2 <= 1.0 )
    v5 = fmaxf(0.0, a2);
  fExtremenessa = v5;
  v6 = RandomInt(1, 5);
  CPoseController::SetFModType(this, v6);
  v7 = RandomFloat(-1.0, 1.0);
  CPoseController::SetFModTimeOffset(this, v7, v8);
  v9 = fExtremenessa * -10.0;
  fExtremenessb = 10.0 * fExtremenessa;
  v10 = RandomFloat(v9, fExtremenessb);
  CPoseController::SetFModRate(this, v10, v11);
  v12 = RandomFloat(0.0, fExtremenessb);
  CPoseController::SetFModAmplitude(this, v12, v13);
}


// CPoseController::InputSetPoseParameterName  (line 261, @0x0000000002328640, libserver.so)  // inlines: AssignTo, TempString, ToString
// calls: CPoseController::SetPoseParameterName, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2328671, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CPoseController::InputSetPoseParameterName(CPoseController *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8

  m_type = inputdata->value.m_type;
  if ( m_type != 30 )
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_8;
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
        goto LABEL_4;
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
        goto LABEL_4;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_11;
      case 6:
        v6 = "true";
        if ( inputdata->value.m_char == 0 )
          v6 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v6);
        goto LABEL_11;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_11;
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
        goto LABEL_4;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_11;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
        goto LABEL_11;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_11:
        CPoseController::SetPoseParameterName(this, &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf);
        return;
      default:
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
    }
  }
  m_pszString = inputdata->value.m_pszString;
LABEL_4:
  CPoseController::SetPoseParameterName(this, m_pszString);
}


// CPoseController::InputSetPoseValue  (line 266, @0x0000000002329050, libserver.so)  // inlines: Float, operator float
// calls: CPoseController::SetPoseValue
void __fastcall CPoseController::InputSetPoseValue(CPoseController *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
  {
    m_float64 = inputdata->value.m_float64;
    CPoseController::SetPoseValue(this, m_float64, v2);
  }
  else
  {
    CPoseController::SetPoseValue(this, inputdata->value.m_float, v2);
  }
}


// CPoseController::InputSetInterpolationTime  (line 271, @0x0000000002328950, libserver.so)  // inlines: Float, operator float
// calls: CPoseController::SetInterpolationTime
void __fastcall CPoseController::InputSetInterpolationTime(CPoseController *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
  {
    m_float64 = inputdata->value.m_float64;
    CPoseController::SetInterpolationTime(this, m_float64, v2);
  }
  else
  {
    CPoseController::SetInterpolationTime(this, inputdata->value.m_float, v2);
  }
}


// CPoseController::InputSetCycleFrequency  (line 276, @0x0000000002328a40, libserver.so)  // inlines: Float, operator float
// calls: CPoseController::SetCycleFrequency
void __fastcall CPoseController::InputSetCycleFrequency(CPoseController *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
  {
    m_float64 = inputdata->value.m_float64;
    CPoseController::SetCycleFrequency(this, m_float64, v2);
  }
  else
  {
    CPoseController::SetCycleFrequency(this, inputdata->value.m_float, v2);
  }
}


// CPoseController::InputSetFModType  (line 281, @0x0000000002328ab0, libserver.so)  // inlines: Int, operator int
// calls: CPoseController::SetFModType
void __fastcall CPoseController::InputSetFModType(CPoseController *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    CPoseController::SetFModType(this, inputdata->value.m_float);
  }
  else if ( m_type == 34 )
  {
    CPoseController::SetFModType(this, inputdata->value.m_float64);
  }
  else
  {
    CPoseController::SetFModType(this, inputdata->value.m_int);
  }
}


// CPoseController::InputSetFModTimeOffset  (line 286, @0x0000000002328b70, libserver.so)  // inlines: Float, operator float
// calls: CPoseController::SetFModTimeOffset
void __fastcall CPoseController::InputSetFModTimeOffset(CPoseController *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
  {
    m_float64 = inputdata->value.m_float64;
    CPoseController::SetFModTimeOffset(this, m_float64, v2);
  }
  else
  {
    CPoseController::SetFModTimeOffset(this, inputdata->value.m_float, v2);
  }
}


// CPoseController::InputSetFModRate  (line 291, @0x0000000002328c20, libserver.so)  // inlines: Float, operator float
// calls: CPoseController::SetFModRate
void __fastcall CPoseController::InputSetFModRate(CPoseController *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
  {
    m_float64 = inputdata->value.m_float64;
    CPoseController::SetFModRate(this, m_float64, v2);
  }
  else
  {
    CPoseController::SetFModRate(this, inputdata->value.m_float, v2);
  }
}


// CPoseController::InputSetFModAmplitude  (line 296, @0x0000000002328cc0, libserver.so)  // inlines: Float, operator float
// calls: CPoseController::SetFModAmplitude
void __fastcall CPoseController::InputSetFModAmplitude(CPoseController *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
  {
    m_float64 = inputdata->value.m_float64;
    CPoseController::SetFModAmplitude(this, m_float64, v2);
  }
  else
  {
    CPoseController::SetFModAmplitude(this, inputdata->value.m_float, v2);
  }
}


// CPoseController::InputRandomizeFMod  (line 301, @0x0000000002328db0, libserver.so)  // inlines: Float, operator float
// calls: CPoseController::RandomizeFMod
void __fastcall CPoseController::InputRandomizeFMod(CPoseController *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
  {
    m_float64 = inputdata->value.m_float64;
    CPoseController::RandomizeFMod(this, m_float64, v2);
  }
  else
  {
    CPoseController::RandomizeFMod(this, inputdata->value.m_float, v2);
  }
}


// CPoseController::InputGetFMod  (line 306, @0x000000000231eec0, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName
// calls: DevMsg(char const*,...)
// strings: "FMod values for pose controller %s\nTYPE: %i\nTIME OFFSET: %f\nRATE: %f\nAMPLITUDE: %f\n"
void __fastcall CPoseController::InputGetFMod(CPoseController *const this, inputdata_t *const inputdata)
{
  const char *m_pAsString; // rsi

  m_pAsString = "";
  if ( this->m_pEntity->m_name.u.m_Id != 0 )
    m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
  DevMsg(
    "FMod values for pose controller %s\nTYPE: %i\nTIME OFFSET: %f\nRATE: %f\nAMPLITUDE: %f\n",
    m_pAsString,
    this->m_nFModType.m_Value,
    this->m_fFModTimeOffset.m_Value,
    this->m_fFModRate.m_Value,
    this->m_fFModAmplitude.m_Value);
}


// CPoseController::SetCurrentPose  (line 508, @0x0000000002328de0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: __dynamic_cast, CBaseAnimating::GetPoseParameterRange, CBaseAnimating::SetPoseParameter
// callers: CPoseController::Think, CPoseController::SetPoseValue
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPoseController::SetCurrentPose(CPoseController *const this, float a2, float fCurrentPoseValue)
{
  int v3; // r13d
  CNetworkArrayBase<unsigned char,4,CPoseController::NetworkVar_m_chPoseIndex> *p_m_chPoseIndex; // r12
  CNetworkArrayBase<CHandle<CBaseEntity>,4,CPoseController::NetworkVar_m_hProps> *p_m_hProps; // rbx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const CBaseAnimating *v8; // rax
  CBaseAnimating *v9; // r14
  double v10; // xmm0_8
  float fPoseValueMin; // [rsp+18h] [rbp-38h] BYREF
  unsigned int fPoseValueMax[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v3 = 4;
  p_m_chPoseIndex = &this->m_chPoseIndex;
  p_m_hProps = &this->m_hProps;
  do
  {
    if ( p_m_hProps->m_Value[0].m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p_m_hProps->m_Value[0].m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[p_m_hProps->m_Value[0].m_Index & 0x1FF];
        if ( v7 != 0 && p_m_hProps->m_Value[0].m_Index == v7->m_EHandle.m_Index && v7->m_pInstance != 0 )
        {
          v8 = __dynamic_cast(v7->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0);
          v9 = v8;
          if ( v8 != 0 )
          {
            CBaseAnimating::GetPoseParameterRange(v8, p_m_chPoseIndex->m_Value[0], &fPoseValueMin, fPoseValueMax);
            *&v10 = fPoseValueMax[0];
            *&v10 = ((*fPoseValueMax - fPoseValueMin) * a2) + fPoseValueMin;
            CBaseAnimating::SetPoseParameter(v9, p_m_chPoseIndex->m_Value[0], v10, fPoseValueMin);
          }
        }
      }
    }
    p_m_hProps = (p_m_hProps + 4);
    p_m_chPoseIndex = (p_m_chPoseIndex + 1);
    --v3;
  }
  while ( v3 != 0 );
}


