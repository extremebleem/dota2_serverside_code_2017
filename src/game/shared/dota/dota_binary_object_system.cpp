
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BinaryObjectSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 29, @0x000000000246b6e0, libserver.so)
void __cdecl CDOTA_BinaryObjectSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CDOTA_BinaryObject::CEntityInstanceEntityClass::InitOptionalTables  (line 36, @0x00000000024783f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, GetEntityClassInternal, SetClassInfo, SetFlag, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// strings: "CDOTA_BinaryObject"
// globals: `guard variable for'CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass, CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BinaryObject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo, CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo
bool __cdecl CDOTA_BinaryObject::CEntityInstanceEntityClass::InitOptionalTables()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass) != 0 )
  {
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_designerName.u.m_Id = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_AllHelpers.m_Size = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_classInputs.m_Size = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_classOutputs.m_Size = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_hNetworkSerializer = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pBaseClassInfo = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pClassInfo = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_flags = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_nAllHelpersFlags = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pScriptClassDesc = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pInputs = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_nInputCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pOutputs = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_nOutputCount = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pGameClass = 0;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass._vptr_CEntityClass = off_40DC9D0;
    __cxa_guard_release(&`guard variable for'CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass);
    __cxa_atexit(
      CDOTA_BinaryObject::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BinaryObjectClass == 0 )
  {
    if ( `guard variable for'CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo,
        "CDOTA_BinaryObject",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo);
    }
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pClassInfo = &CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pBaseClassInfo = CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo.m_pBaseClassInfo;
    g_pEntityCDOTA_BinaryObjectClass = &CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass;
    CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo.m_pClass = &CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass;
    CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
    g_pEntityCDOTA_BinaryObjectClass->m_pComponentOverrides = 0;
  }
  CDOTA_BinaryObject::GetEntityClassInternal(void)::g_EntityCDOTA_BinaryObjectClass.m_flags |= 1u;
  return 1;
}


// CDOTA_BinaryObject::CDOTA_BinaryObject  (line 46, @0x000000000246b6f0, libserver.so)
// calls: CBaseEntity::CBaseEntity
// callers: CDOTA_MapTree::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTA_BinaryObject::CDOTA_BinaryObject(CDOTA_BinaryObject *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_bActive = 0;
  this->_vptr_IHandleEntity = &off_40DD8F0;
  this->m_nBinaryID = -1;
}


// CDOTA_BinaryObject::Spawn  (line 61, @0x000000000247eda0, libserver.so)
// calls: CDOTA_BinaryObjectSystem::RegisterServerObject, CBaseEntity::Spawn
// callers: CDOTA_MapTree::Spawn
// globals: g_CDOTA_BinaryObjectSystem
void __fastcall CDOTA_BinaryObject::Spawn(CDOTA_BinaryObject *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTA_BinaryObjectSystem::RegisterServerObject(&g_CDOTA_BinaryObjectSystem, this);
  this->m_bActive = 1;
  CBaseEntity::Spawn(this, pKeyValues);
}


// CDOTA_BinaryObject::UpdateOnRemove  (line 73, @0x000000000246b7b0, libserver.so)
// calls: CBaseEntity::UpdateOnRemove, CDOTA_BinaryObjectSystem::RemoveServerObject
// callers: CDOTA_MapTree::UpdateOnRemove
// globals: g_CDOTA_BinaryObjectSystem
void __fastcall CDOTA_BinaryObject::UpdateOnRemove(CDOTA_BinaryObject *const this)
{
  CBaseEntity::UpdateOnRemove(this);
  CDOTA_BinaryObjectSystem::RemoveServerObject(&g_CDOTA_BinaryObjectSystem, this);
}


// CDOTA_BinaryObject::SetActive  (line 86, @0x0000000002462ce0, libserver.so)
// calls: CDOTA_PlayerResource::SetWorldTreeState
// callers: CDOTA_MapTree::CutDownEx, CDOTA_MapTree::GrowBack
void __fastcall CDOTA_BinaryObject::SetActive(CDOTA_BinaryObject *const this, bool bActive, int nTeamNumberKnownTo)
{
  this->m_bActive = bActive;
  CDOTA_PlayerResource::SetWorldTreeState(g_pDOTAPlayerResource, this->m_nBinaryID, bActive, 1, 0, nTeamNumberKnownTo);
}


// CDOTA_BinaryObjectSystem::CDOTA_BinaryObjectSystem  (line 152, @0x000000000246b730, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: _GLOBAL__sub_I__unity_dota_02.cpp
void __fastcall CDOTA_BinaryObjectSystem::CDOTA_BinaryObjectSystem(CDOTA_BinaryObjectSystem *const this)
{
  this->_vptr_IGameSystem = &off_40DDF90;
  this->m_BinaryObjects.m_Size = 0;
  this->m_BinaryObjects.m_Memory.m_pMemory = 0;
  this->m_BinaryObjects.m_Memory.m_nAllocationCount = 0;
  this->m_BinaryObjects.m_Memory.m_nGrowSize = 0;
  this->m_PendingActivates.m_Size = 0;
  this->m_PendingActivates.m_Memory.m_pMemory = 0;
  this->m_PendingActivates.m_Memory.m_nAllocationCount = 0;
  this->m_PendingActivates.m_Memory.m_nGrowSize = 0;
}


// CDOTA_BinaryObjectSystem::Init  (line 162, @0x0000000002462580, libserver.so)
bool __fastcall CDOTA_BinaryObjectSystem::Init(CDOTA_BinaryObjectSystem *const this)
{
  return 1;
}


// CDOTA_BinaryObjectSystem::GameInit  (line 172, @0x0000000002462ac0, libserver.so)  // inlines: EnsureCapacity, RemoveAll, memcpy
// calls: memcpy
void __fastcall CDOTA_BinaryObjectSystem::GameInit(
        CDOTA_BinaryObjectSystem *const this,
        const EventGameInit_t *const msg)
{
  bool v3; // cc
  uint32 m_nGrowSize; // eax
  CDOTA_BinaryObject **v5; // rsi
  __int64 v6; // rax
  CDOTA_BinaryObject **m_pMemory; // r12
  CDOTA_BinaryObject **v8; // rax

  v3 = this->m_BinaryObjects.m_Memory.m_nAllocationCount <= 0x1FFF;
  this->m_nNextID = 0;
  this->m_BinaryObjects.m_Size = 0;
  if ( v3 )
  {
    m_nGrowSize = this->m_BinaryObjects.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_BinaryObjects.m_Memory.m_pMemory;
        v8 = (**g_pMemAlloc)(g_pMemAlloc, 0x10000);
        this->m_BinaryObjects.m_Memory.m_pMemory = v8;
        if ( m_pMemory != 0 )
          memcpy(v8, m_pMemory, 8LL * this->m_BinaryObjects.m_Memory.m_nAllocationCount);
        this->m_BinaryObjects.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v5 = this->m_BinaryObjects.m_Memory.m_pMemory;
        v6 = *g_pMemAlloc;
        if ( v5 != 0 )
          this->m_BinaryObjects.m_Memory.m_pMemory = (*(v6 + 8))(g_pMemAlloc, v5, 0x10000);
        else
          this->m_BinaryObjects.m_Memory.m_pMemory = (*v6)(g_pMemAlloc, 0x10000);
      }
      this->m_BinaryObjects.m_Memory.m_nAllocationCount = 0x2000;
    }
  }
}


// CDOTA_BinaryObjectSystem::AllocateEntryInList  (line 183, @0x000000000247ec40, libserver.so)  // inlines: AddToTail, CopyConstruct<CDOTA_BinaryObject*>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CDOTA_BinaryObject*, int>::Grow
// callers: CDOTA_BinaryObjectSystem::RegisterServerObject
int __fastcall CDOTA_BinaryObjectSystem::AllocateEntryInList(CDOTA_BinaryObjectSystem *const this, int nBinaryId)
{
  int m_nNextID; // r15d
  int m_Size; // r13d
  __int64 v5; // r12
  CDOTA_BinaryObject **v6; // rdx
  int v7; // edx

  m_nNextID = nBinaryId;
  if ( nBinaryId < 0 )
  {
    m_nNextID = this->m_nNextID;
    if ( m_nNextID < 0 )
      return -1;
    this->m_nNextID = m_nNextID + 1;
  }
  else
  {
    if ( this->m_nNextID > 0 )
      return -1;
    this->m_nNextID = -1;
  }
  if ( m_nNextID <= 0x1FFF )
  {
    m_Size = this->m_BinaryObjects.m_Size;
    v5 = m_Size;
    if ( m_nNextID >= m_Size )
    {
      while ( 1 )
      {
        v7 = v5;
        if ( this->m_BinaryObjects.m_Memory.m_nAllocationCount == v5 )
        {
          CUtlMemory<CDOTA_BinaryObject *,int>::Grow(&this->m_BinaryObjects.m_Memory, 1);
          v7 = this->m_BinaryObjects.m_Size;
        }
        this->m_BinaryObjects.m_Size = v7 + 1;
        v6 = &this->m_BinaryObjects.m_Memory.m_pMemory[v5];
        if ( v6 != 0 )
          *v6 = 0;
        if ( m_nNextID < ++m_Size )
          break;
        v5 = this->m_BinaryObjects.m_Size;
      }
    }
    if ( this->m_BinaryObjects.m_Memory.m_pMemory[m_nNextID] == 0 )
      return m_nNextID;
  }
  return -1;
}


// CDOTA_BinaryObjectSystem::PreSpawnGroupUnload  (line 233, @0x0000000002464660, libserver.so)  // inlines: DOTAGameRules, IsEmpty, RemoveAll, SpawnGroupHasWorldGeomemtry
// calls: IsSpawnGroupAssociatedWithPrimaryMap
void __fastcall CDOTA_BinaryObjectSystem::PreSpawnGroupUnload(
        CDOTA_BinaryObjectSystem *const this,
        const EventPreSpawnGroupUnload_t *const msg)
{
  char *m_pString; // rax

  if ( g_pGameRules != 0 && msg->m_SpawnGroupName.m_pString != 0 && *msg->m_SpawnGroupName.m_pString != 0 )
  {
    m_pString = msg->m_EntityLumpName.m_pString;
    if ( (m_pString == 0 || *m_pString == 0) && IsSpawnGroupAssociatedWithPrimaryMap(msg->m_SpawnGroupHandle) )
      this->m_BinaryObjects.m_Size = 0;
  }
}


// CDOTA_BinaryObjectSystem::RegisterServerObject  (line 253, @0x000000000247ed30, libserver.so)  // inlines: SetBinaryID, operator[]
// calls: CDOTA_BinaryObjectSystem::AllocateEntryInList, CDOTA_PlayerResource::SetWorldTreeState
// callers: CDOTA_BinaryObject::Spawn
int __fastcall CDOTA_BinaryObjectSystem::RegisterServerObject(
        CDOTA_BinaryObjectSystem *const this,
        CDOTA_BinaryObject *pEntity)
{
  int result; // eax
  int nBinaryId; // [rsp+Ch] [rbp-14h]

  result = CDOTA_BinaryObjectSystem::AllocateEntryInList(this, pEntity->m_nBinaryID);
  pEntity->m_nBinaryID = result;
  if ( result >= 0 )
  {
    this->m_BinaryObjects.m_Memory.m_pMemory[result] = pEntity;
    if ( g_pDOTAPlayerResource != 0 )
    {
      nBinaryId = result;
      CDOTA_PlayerResource::SetWorldTreeState(g_pDOTAPlayerResource, result, 1, 0, 1, -1);
      return nBinaryId;
    }
  }
  return result;
}


// CDOTA_BinaryObjectSystem::RemoveServerObject  (line 277, @0x000000000246b780, libserver.so)
// callers: CDOTA_BinaryObject::UpdateOnRemove
void __fastcall CDOTA_BinaryObjectSystem::RemoveServerObject(
        CDOTA_BinaryObjectSystem *const this,
        CDOTA_BinaryObject *pEntity)
{
  __int64 m_nBinaryID; // rax

  if ( pEntity != 0 )
  {
    m_nBinaryID = pEntity->m_nBinaryID;
    if ( m_nBinaryID >= 0 && m_nBinaryID < this->m_BinaryObjects.m_Size )
      this->m_BinaryObjects.m_Memory.m_pMemory[m_nBinaryID] = 0;
  }
}


// CDOTA_BinaryObjectSystem::FrameUpdatePreEntityThink  (line 300, @0x0000000002466830, libserver.so)  // inlines: DOTAGameRules, Element, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, LookupEntity, Remove, ShiftElementsLeft, V_memmove, memmove, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: memmove, __dynamic_cast
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDOTA_BinaryObject
void __fastcall CDOTA_BinaryObjectSystem::FrameUpdatePreEntityThink(
        CDOTA_BinaryObjectSystem *const this,
        const EventServerPreEntityThink_t *const msg)
{
  int v3; // ebx
  float v4; // xmm1_4
  CDOTA_BinaryObjectSystem::SDOTA_PendingActivate *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  int m_Size; // eax
  int v11; // eax
  void *v12; // rax

  if ( this->m_PendingActivates.m_Size > 0 )
  {
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v4 = 0.0;
        v5 = &this->m_PendingActivates.m_Memory.m_pMemory[v3];
        if ( g_pGameRules != 0 )
          v4 = *&g_pGameRules[18].m_szQuestName[20];
        if ( v4 > v5->fTime )
          break;
        if ( ++v3 >= this->m_PendingActivates.m_Size )
          return;
      }
      m_Index = v5->hEntity.m_Index;
      if ( v5->hEntity.m_Index + 2 > 1 )
      {
        v7 = v5->hEntity.m_Index;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->hEntity.m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
          {
            v12 = __dynamic_cast(v9->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BinaryObject, 0);
            if ( v12 != 0 )
              (*(*v12 + 1656LL))(v12, 1, 0xFFFFFFFFLL);
          }
        }
      }
      m_Size = this->m_PendingActivates.m_Size;
      if ( m_Size - v3 - 1 > 0 )
      {
        memmove(
          &this->m_PendingActivates.m_Memory.m_pMemory[v3],
          &this->m_PendingActivates.m_Memory.m_pMemory[v3 + 1],
          8LL * (this->m_PendingActivates.m_Size - v3 - 1));
        m_Size = this->m_PendingActivates.m_Size;
      }
      v11 = m_Size - 1;
      this->m_PendingActivates.m_Size = v11;
    }
    while ( v3 < v11 );
  }
}


// CDOTA_BinaryObjectSystem::ActivateIn  (line 325, @0x000000000247ede0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate>, DOTAGameRules, Element, GetEHandle, GetEntryIndex, GetGameTime, GetSerialNumber, GrowMemory, SDOTA_PendingActivate, Set, operator=, operator[]
// calls: CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate, int>::Grow
// callers: CDOTA_MapTree::CutDownEx, CDOTA_MapTree::GrowBack
void __fastcall CDOTA_BinaryObjectSystem::ActivateIn(
        CDOTA_BinaryObjectSystem *const this,
        CDOTA_BinaryObject *pEntity,
        float a3,
        float fTime)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  float v7; // xmm1_4
  __int64 m_Size; // r12
  float v9; // xmm0_4
  int v10; // eax
  CDOTA_BinaryObjectSystem::SDOTA_PendingActivate *v11; // rax
  float v12; // [rsp+Ch] [rbp-24h]
  int newPendingActivate; // [rsp+10h] [rbp-20h]

  newPendingActivate = -1;
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      newPendingActivate = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    }
  }
  v7 = 0.0;
  if ( g_pGameRules != 0 )
    v7 = *&g_pGameRules[18].m_szQuestName[20];
  m_Size = this->m_PendingActivates.m_Size;
  v9 = a3 + v7;
  v10 = this->m_PendingActivates.m_Size;
  if ( m_Size == this->m_PendingActivates.m_Memory.m_nAllocationCount )
  {
    v12 = v9;
    CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate,int>::Grow(&this->m_PendingActivates.m_Memory, 1);
    v10 = this->m_PendingActivates.m_Size;
    v9 = v12;
  }
  this->m_PendingActivates.m_Size = v10 + 1;
  v11 = &this->m_PendingActivates.m_Memory.m_pMemory[m_Size];
  if ( v11 != 0 )
  {
    v11->fTime = v9;
    v11->hEntity.m_Index = newPendingActivate;
  }
}


// CDOTA_BinaryObjectSystem::ClearPendingActivateList  (line 340, @0x0000000002473aa0, libserver.so)
// calls: CUtlVectorBase<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate, CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate, int> >::RemoveAll
// callers: CGridNav::RegrowAllTrees
void __fastcall CDOTA_BinaryObjectSystem::ClearPendingActivateList(CDOTA_BinaryObjectSystem *const this)
{
  CUtlVectorBase<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate,CUtlMemory<CDOTA_BinaryObjectSystem::SDOTA_PendingActivate,int>>::RemoveAll(&this->m_PendingActivates);
}


// CDOTA_BinaryObjectSystem::PostSpawnGroupLoad  (line 453, @0x0000000002465640, libserver.so)  // inlines: DOTAGameRules, IsEmpty, SpawnGroupHasWorldGeomemtry
// calls: IsSpawnGroupAssociatedWithPrimaryMap, CDOTA_PlayerResource::SetWorldTreeState
void __fastcall CDOTA_BinaryObjectSystem::PostSpawnGroupLoad(
        CDOTA_BinaryObjectSystem *const this,
        const EventPostSpawnGroupLoad_t *const msg)
{
  char *m_pString; // rax
  __int64 v4; // r12
  int v5; // ebx
  CDOTA_BinaryObject *v6; // rax

  if ( g_pGameRules != 0 && msg->m_SpawnGroupName.m_pString != 0 && *msg->m_SpawnGroupName.m_pString != 0 )
  {
    m_pString = msg->m_EntityLumpName.m_pString;
    if ( (m_pString == 0 || *m_pString == 0)
      && IsSpawnGroupAssociatedWithPrimaryMap(msg->m_SpawnGroupHandle)
      && this->m_BinaryObjects.m_Size > 0 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = this->m_BinaryObjects.m_Memory.m_pMemory[v4];
        if ( v6 != 0 )
          CDOTA_PlayerResource::SetWorldTreeState(g_pDOTAPlayerResource, v6->m_nBinaryID, v6->m_bActive, 0, 1, -1);
        ++v5;
        ++v4;
      }
      while ( v5 < this->m_BinaryObjects.m_Size );
    }
  }
}


