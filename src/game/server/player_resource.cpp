// Reconstructed from DWARF by pahole; not original source.

// src/game/server/player_resource.cpp:16
class C_CPlayerResource_MapInstall {
	C_CPlayerResource_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPlayerResource::YouForgotToImplementOrDeclareServerClass  (line 16, @0x000000000231eba0, libserver.so)
int __fastcall CPlayerResource::YouForgotToImplementOrDeclareServerClass(CPlayerResource *const this)
{
  return 0;
}


// CPlayerResource::GetServerClass  (line 16, @0x0000000002324190, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPlayerResource::GetServerClass(CPlayerResource *const this)
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


// CPlayerResource::GetDataDescMap  (line 19, @0x000000000231ebb0, libserver.so)
// globals: CPlayerResource::m_DataMap
datamap_t *__fastcall CPlayerResource::GetDataDescMap(CPlayerResource *const this)
{
  return &CPlayerResource::m_DataMap;
}


// CPlayerResource::AddDatadescMetadataKeys  (line 19, @0x00000000023253a0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPlayerResource::GetEntityClass(void)
void __fastcall CPlayerResource::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPlayerResource::GetEntityClass);
}


// CPlayerResource::GetBaseMap  (line 19, @0x00000000023253c0, libserver.so)
datamap_t *__cdecl CPlayerResource::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CPlayerResource>  (line 19, @0x0000000002333b00, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "CPlayerResource"
// globals: `guard variable for'DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder, `guard variable for'DataMapInit<CPlayerResource>(CPlayerResource *)::dataDesc, CPlayerResource::GetEntityClass(void), CPlayerResource::m_DataMap, DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPlayerResource>(CPlayerResource *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder) != 0 )
  {
    DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder.m_pszBase = "CPlayerResource";
    DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder,
      &_dso_handle);
  }
  CPlayerResource::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPlayerResource>(CPlayerResource *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPlayerResource>(CPlayerResource *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder.m_nLenBase + 14);
    strcpy(stpcpy(v2, DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder.m_pszBase), "ResourceThink");
    m_Size = DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder.m_Names.m_Size == DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CPlayerResource>(CPlayerResource *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CPlayerResource>(CPlayerResource *)::dataDesc[9].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPlayerResource>(CPlayerResource *)::dataDesc);
  }
  CPlayerResource::m_DataMap.dataNumFields = 9;
  CPlayerResource::m_DataMap.dataDesc = &DataMapInit<CPlayerResource>(CPlayerResource *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPlayerResource::m_DataMap, CPlayerResource::GetEntityClass);
  return &CPlayerResource::m_DataMap;
}


// CPlayerResource::CEntityInstanceEntityClass::InitOptionalTables  (line 36, @0x0000000002334410, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, GetEntityClassInternal, SetClassInfo, SetFlag, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPlayerResource::SetupEntClassInputs, CPlayerResource::SetupEntClassComponentOverrides, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort (13 total)
// strings: "CPlayerResource"
// globals: `guard variable for'CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass, CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPlayerResource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo, CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo
bool __cdecl CPlayerResource::CEntityInstanceEntityClass::InitOptionalTables()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass) != 0 )
  {
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_designerName.u.m_Id = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass._vptr_CEntityClass = off_3F79390;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_ComponentOffsets.m_Size = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_AllHelpers.m_Size = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_classInputs.m_Size = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_classOutputs.m_Size = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_requiredEHandle.m_Index = -1;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_hNetworkSerializer = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pBaseClassInfo = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pClassInfo = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_flags = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_nAllHelpersFlags = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pScriptClassDesc = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pInputs = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_nInputCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pOutputs = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_nOutputCount = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pGameClass = 0;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass._vptr_CEntityClass = off_3FDE6B0;
    __cxa_guard_release(&`guard variable for'CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass);
    __cxa_atexit(
      CPlayerResource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass,
      &_dso_handle);
  }
  if ( g_pEntityCPlayerResourceClass == 0 )
  {
    if ( `guard variable for'CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo,
        "CPlayerResource",
        "player_manager",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo);
    }
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pClassInfo = &CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pBaseClassInfo = CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo.m_pBaseClassInfo;
    g_pEntityCPlayerResourceClass = &CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass;
    CPlayerResource::GetEntityClassInfo(void)::g_EntityCPlayerResourceClassInfo.m_pClass = &CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass;
    CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
    CPlayerResource::SetupEntClassInputs(g_pEntityCPlayerResourceClass);
    CPlayerResource::SetupEntClassComponentOverrides(g_pEntityCPlayerResourceClass);
  }
  CPlayerResource::GetEntityClassInternal(void)::g_EntityCPlayerResourceClass.m_flags |= 4u;
  return 1;
}


// CPlayerResource::Spawn  (line 45, @0x0000000002321260, libserver.so)  // inlines: NetworkStateChanged, Set
// calls: CBaseEntity::Spawn, memcmp, CBaseEntity::ThinkSet, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink
void __fastcall CPlayerResource::Spawn(CPlayerResource *const this, const CEntityKeyValues *pKeyValues)
{
  CPlayerResource *v3; // r13
  CNetworkArrayBase<unsigned int,66,CPlayerResource::NetworkVar_m_iPing> *p_m_iPing; // rbx
  unsigned int v5; // r15d
  double v6; // xmm0_8
  double v7; // xmm1_8
  CNetworkArrayBase<int,66,CPlayerResource::NetworkVar_m_iScore> *p_m_iScore; // [rsp+8h] [rbp-48h]
  _DWORD s2[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v3 = this;
  CBaseEntity::Spawn(this, pKeyValues);
  p_m_iPing = &this->m_iPing;
  p_m_iScore = &this->m_iScore;
  do
  {
    while ( 1 )
    {
      s2[0] = 0;
      v5 = v3 - this;
      if ( memcmp(p_m_iPing, s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 776, v5, 0xFFFFFFFFLL);
        p_m_iPing->m_Value[0] = 0;
      }
      s2[0] = 0;
      if ( memcmp(&p_m_iPing[1], s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1040, v5, 0xFFFFFFFFLL);
        p_m_iPing[1].m_Value[0] = 0;
      }
      s2[0] = 0;
      if ( memcmp(&p_m_iPing[2], s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1304, v5, 0xFFFFFFFFLL);
        p_m_iPing[2].m_Value[0] = 0;
      }
      if ( v3->m_bConnected.m_Value[0] )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1568, v5, 0xFFFFFFFFLL);
        v3->m_bConnected.m_Value[0] = 0;
      }
      s2[0] = 0;
      if ( memcmp(&p_m_iPing[3].m_Value[17], s2, 4u) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1636, v5, 0xFFFFFFFFLL);
        p_m_iPing[3].m_Value[17] = 0;
      }
      if ( v3->m_bAlive.m_Value[0] )
        break;
      p_m_iPing = (p_m_iPing + 4);
      v3 = (v3 + 1);
      if ( p_m_iPing == p_m_iScore )
        goto LABEL_15;
    }
    p_m_iPing = (p_m_iPing + 4);
    v3 = (v3 + 1);
    (*(this->_vptr_IHandleEntity + 22))(this, 1900, v5, 0xFFFFFFFFLL);
    HIBYTE(v3->m_iTeam.m_Value[65]) = 0;
  }
  while ( p_m_iPing != p_m_iScore );
LABEL_15:
  CBaseEntity::ThinkSet(this, 0x679uLL, 0.0, 0, 0);
  *&v6 = CGlobalVarsBase::curtime(gpGlobals, 0);
  CBaseEntity::SetNextThink(this, v6, v7, 0);
  this->m_nUpdateCounter = 0;
}


// CPlayerResource::UpdateTransmitState  (line 71, @0x000000000231ee20, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CPlayerResource::UpdateTransmitState(CPlayerResource *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CPlayerResource::ResourceThink  (line 80, @0x00000000023206c0, libserver.so)  // inlines: curtime
// calls: CBaseEntity::SetNextThink
void __fastcall CPlayerResource::ResourceThink(CPlayerResource *const this)
{
  double v2; // xmm1_8
  CGlobalVars *v3; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  ++this->m_nUpdateCounter;
  (*(this->_vptr_IHandleEntity + 208))(this);
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v3->m_flCurrentTime + 0.1)), v2, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1036831949), v2, 0);
  }
}


// CPlayerResource::UpdatePlayerData  (line 92, @0x0000000002320140, libserver.so)  // inlines: GetTeamNumber, NetworkStateChanged, Set
// calls: memcmp, CBaseEntity::GetHealth, UTIL_PlayerByIndex, UTIL_GetPlayerConnectionInfo
void __fastcall CPlayerResource::UpdatePlayerData(CPlayerResource *const this)
{
  unsigned int *v1; // r14
  bool *v2; // r13
  unsigned int v4; // ebx
  int Health; // eax
  int v6; // r9d
  CBasePlayer *v7; // rax
  const CBaseEntity *v8; // r15
  int v9; // r15d
  int m_Value; // [rsp+10h] [rbp-50h]
  char v11; // [rsp+10h] [rbp-50h]
  unsigned int v12; // [rsp+10h] [rbp-50h]
  int *v13; // [rsp+10h] [rbp-50h]
  int ping; // [rsp+24h] [rbp-3Ch] BYREF
  int packetloss; // [rsp+28h] [rbp-38h] BYREF
  _DWORD v16[13]; // [rsp+2Ch] [rbp-34h] BYREF

  v1 = &this->m_iHealth.m_Value[1];
  v2 = &this->m_bConnected.m_Value[1];
  v4 = 1;
  if ( gpGlobals->maxClients > 0 )
  {
    do
    {
      v7 = UTIL_PlayerByIndex(v4);
      v8 = v7;
      if ( v7 != 0 && v7->m_iConnected != PlayerConnectedState::PlayerDisconnected )
      {
        if ( !*v2 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1568, v4, 0xFFFFFFFFLL);
          this->m_bConnected.m_Value[v4] = 1;
        }
        m_Value = v8->m_iTeamNum.m_Value;
        v16[0] = m_Value;
        if ( memcmp(v1 - 83, v16, 4u) != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1636, v4, 0xFFFFFFFFLL);
          this->m_iTeam.m_Value[v4] = m_Value;
        }
        v11 = (*(v8->_vptr_IHandleEntity + 139))(v8);
        if ( v2[332] != v11 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1900, v4, 0xFFFFFFFFLL);
          this->m_bAlive.m_Value[v4] = v11;
        }
        Health = CBaseEntity::GetHealth(v8);
        v6 = 0;
        if ( Health >= 0 )
          v6 = CBaseEntity::GetHealth(v8);
        v16[0] = v6;
        v12 = v6;
        if ( memcmp(v1, v16, 4u) != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1968, v4, 0xFFFFFFFFLL);
          this->m_iHealth.m_Value[v4] = v12;
        }
        if ( this->m_nUpdateCounter == 20 * (this->m_nUpdateCounter / 20) )
        {
          UTIL_GetPlayerConnectionInfo(v4, &ping, &packetloss);
          v13 = (this + 4 * v4);
          v9 = ((v13[194] * 0.80000001) + (ping * 0.2));
          ping = v9;
          v16[0] = v9;
          if ( memcmp(v1 - 298, v16, 4u) != 0 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 776, v4, 0xFFFFFFFFLL);
            v13[194] = v9;
          }
        }
      }
      else if ( *v2 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1568, v4, 0xFFFFFFFFLL);
        this->m_bConnected.m_Value[v4] = 0;
      }
      ++v4;
      ++v2;
      ++v1;
    }
    while ( gpGlobals->maxClients >= v4 );
  }
}


