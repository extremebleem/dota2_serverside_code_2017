
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAPlayer::Schema_DynamicBinding  (line 36, @0x000000000269cfb0, libserver.so)
// globals: CDOTAPlayer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAPlayer::Schema_DynamicBinding(const CDOTAPlayer *const this)
{
  return CDOTAPlayer::s_pSchemaBinding;
}


// CDOTAPlayer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 36, @0x000000000269cfc0, libserver.so)
// globals: CDOTAPlayer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAPlayer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTAPlayer::CEntityInstanceEntityClass *const this)
{
  return CDOTAPlayer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTAPlayer::CEntityInstanceEntityClass::DestructInstance  (line 36, @0x000000000269cfd0, libserver.so)  // inlines: Destruct<CDOTAPlayer>
void __fastcall CDOTAPlayer::CEntityInstanceEntityClass::DestructInstance(
        CDOTAPlayer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTAPlayer::CEntityInstanceEntityClass::FreeInstance  (line 36, @0x000000000269cff0, libserver.so)
void __fastcall CDOTAPlayer::CEntityInstanceEntityClass::FreeInstance(
        CDOTAPlayer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTAPlayer::CEntityInstanceEntityClass::CanAllocate  (line 36, @0x000000000269d010, libserver.so)
bool __fastcall CDOTAPlayer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTAPlayer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTAPlayer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 36, @0x000000000269d020, libserver.so)
// globals: CDOTAPlayer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTAPlayer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTAPlayer::CEntityInstanceEntityClass *const this)
{
  return CDOTAPlayer::s_pSchemaBinding;
}


// CDOTAPlayer::CEntityInstanceEntityClass::AllocateInstance  (line 36, @0x00000000026a0300, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTAPlayer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTAPlayer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4944);
  memset(v1, 0, 0x1350u);
  return v1;
}


// CDOTAPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x00000000026a5dc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTAPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAPlayer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTAPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x00000000026a6170, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTAPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAPlayer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTAPlayer::CEntityInstanceEntityClass::ConstructInstance  (line 36, @0x00000000026b1d10, libserver.so)  // inlines: Construct<CDOTAPlayer>
// calls: CDOTAPlayer::CDOTAPlayer
CEntityInstance *__fastcall CDOTAPlayer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTAPlayer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTAPlayer::CDOTAPlayer(p);
  return p;
}


// CDOTAPlayer::GetEntityClassInternal  (line 36, @0x00000000026b1dd0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTAPlayer>, CBaseMultiplayerPlayer::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_06.cpp
// strings: "CDOTAPlayer"
// globals: `guard variable for'CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass, CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTAPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTAPlayer::GetEntityClassInfo(void)::g_EntityCDOTAPlayerClassInfo, CDOTAPlayer::GetEntityClassInfo(void)::g_EntityCDOTAPlayerClassInfo
CEntityClass *__cdecl CDOTAPlayer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass) != 0 )
  {
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_designerName.u.m_Id = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass._vptr_CEntityClass = off_3F79390;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_ComponentOffsets.m_Size = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_AllHelpers.m_Size = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_classInputs.m_Size = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_classOutputs.m_Size = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_requiredEHandle.m_Index = -1;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_hNetworkSerializer = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_pBaseClassInfo = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_pClassInfo = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_flags = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_nAllHelpersFlags = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_pScriptClassDesc = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_pInputs = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_nInputCount = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_pOutputs = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_nOutputCount = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_pGameClass = 0;
    CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass._vptr_CEntityClass = off_416DCB0;
    __cxa_guard_release(&`guard variable for'CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass);
    __cxa_atexit(
      CDOTAPlayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTAPlayerClass != 0 )
    return &CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass;
  if ( `guard variable for'CDOTAPlayer::GetEntityClassInfo(void)::g_EntityCDOTAPlayerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAPlayer::GetEntityClassInfo(void)::g_EntityCDOTAPlayerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseMultiplayerPlayer::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTAPlayer::GetEntityClassInfo(void)::g_EntityCDOTAPlayerClassInfo,
      "CDOTAPlayer",
      "player",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTAPlayer::GetEntityClassInfo(void)::g_EntityCDOTAPlayerClassInfo);
  }
  CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_pClassInfo = &CDOTAPlayer::GetEntityClassInfo(void)::g_EntityCDOTAPlayerClassInfo;
  CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_pBaseClassInfo = CDOTAPlayer::GetEntityClassInfo(void)::g_EntityCDOTAPlayerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTAPlayerClass = &CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass;
  CDOTAPlayer::GetEntityClassInfo(void)::g_EntityCDOTAPlayerClassInfo.m_pClass = &CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass;
  CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass.m_pScriptClassDesc = GetScriptDesc<CDOTAPlayer>(0);
  g_pEntityCDOTAPlayerClass->m_pComponentOverrides = 0;
  return &CDOTAPlayer::GetEntityClassInternal(void)::g_EntityCDOTAPlayerClass;
}


// CDOTAPlayer::HackToMakeAVTable  (line 63, @0x000000000269d030, libserver.so)
void __fastcall CDOTAPlayer::HackToMakeAVTable(const CDOTAPlayer *const this)
{
  ;
}


// CDOTAPlayer::ShouldPredict  (line 82, @0x000000000269d040, libserver.so)
bool __fastcall CDOTAPlayer::ShouldPredict(CDOTAPlayer *const this)
{
  return 0;
}


// CDOTAPlayer::IsPlayer  (line 85, @0x000000000269d050, libserver.so)
bool __fastcall CDOTAPlayer::IsPlayer(const CDOTAPlayer *const this)
{
  return 1;
}


// CDOTAPlayer::GetPlayerID  (line 95, @0x000000000269d060, libserver.so)
int __fastcall CDOTAPlayer::GetPlayerID(const CDOTAPlayer *const this)
{
  return this->m_iPlayerID.m_Value;
}


// CDOTAPlayer::GetAssignedHero  (line 105, @0x0000000002459d50, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// callers: CDOTABaseAbility::CastAbility, TimePathBuilding, DOTA_ExecuteOrders, CDOTAGamerules::ClientDisconnected, CDOTAPlayer::SendChatWheelMessage, CDOTAPlayer::ClientCommand, CDOTA_Tutorial::UpdateTutorialState, CDOTA_Tutorial::GetNPCByName, CDOTA_Tutorial::ParseLessonKeys, HeroMaxLevel, dota_dev, Playtesting_MoveToOtherTeam (16 total)
CDOTA_BaseNPC_Hero *__fastcall CDOTAPlayer::GetAssignedHero(CDOTAPlayer *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC_Hero *result; // rax
  CEntityInstance *m_pInstance; // rdx

  if ( this->m_hAssignedHero.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 <= 1 )
    return 0;
  v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[v2 & 0x1FF];
  if ( v5 == 0 )
    return 0;
  if ( v3 != v5->m_EHandle.m_Index )
    return 0;
  m_pInstance = v5->m_pInstance;
  if ( m_pInstance == 0 || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 0;
  result = 0;
  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    return m_pInstance;
  return result;
}


// CDOTAPlayer::Script_GetAssignedHero  (line 106, @0x00000000026a61d0, libserver.so)  // inlines: CEntityHandle, EntityToHScript, Get, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetPublicScriptScope, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToHScript, operator CBaseEntity*
// calls: CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CDOTAPlayer::Script_GetAssignedHero(CDOTAPlayer *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  HSCRIPT result; // rax
  CEntityInstance *m_pInstance; // rbx

  if ( this->m_hAssignedHero.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 <= 1 )
    return 0;
  v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[v2 & 0x1FF];
  if ( v5 == 0 )
    return 0;
  if ( v3 != v5->m_EHandle.m_Index )
    return 0;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    return 0;
  }
  result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
  if ( result == 0 )
  {
    CEntityInstance::CreatePublicScriptScope(v5->m_pInstance, 0);
    return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
  }
  return result;
}


// CDOTAPlayer::UpdatePlayerSound  (line 113, @0x000000000269d070, libserver.so)
void __fastcall CDOTAPlayer::UpdatePlayerSound(CDOTAPlayer *const this)
{
  ;
}


// CDOTAPlayer::RumbleEffect  (line 135, @0x000000000269d080, libserver.so)
void __fastcall CDOTAPlayer::RumbleEffect(
        CDOTAPlayer *const this,
        unsigned __int8 index,
        unsigned __int8 rumbleData,
        unsigned __int8 rumbleFlags)
{
  ;
}


// CDOTAPlayer::CheckTrainUpdate  (line 136, @0x000000000269d090, libserver.so)
void __fastcall CDOTAPlayer::CheckTrainUpdate(CDOTAPlayer *const this)
{
  ;
}


// CDOTAPlayer::Script_SetKillCamUnit  (line 178, @0x00000000026a6360, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, HScriptToEntity<CBaseEntity>, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, ToEnt, operator!=, operator=
// calls: GetScriptDesc<CEntityInstance>
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAPlayer::Script_SetKillCamUnit(CDOTAPlayer *const this, HSCRIPT hEntity)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // r12
  uint32 m_Index; // edx
  CEntityInstance *m_pInstance; // rcx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int16 v13; // cx

  if ( hEntity != 0 )
  {
    v4 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v6 = v4(g_pScriptVM, hEntity, Script);
  }
  else
  {
    v6 = 0;
  }
  m_Index = this->m_hKillCamUnit.m_Value.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hKillCamUnit.m_Value.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[this->m_hKillCamUnit.m_Value.m_Index & 0x1FF];
      if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  if ( v6 != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( v6 != 0 && (v11 = *(v6 + 8)) != 0 )
    {
      v12 = (*(v11 + 16) >> 15) - (*(v11 + 48) & 1);
      if ( *(v11 + 16) == -1 )
        v13 = 0x7FFF;
      else
        v13 = *(v11 + 16) & 0x7FFF;
      LOWORD(this->m_hKillCamUnit.m_Value.m_Index) = v13 | this->m_hKillCamUnit.m_Value.m_Index & 0x8000;
      this->m_hKillCamUnit.m_Value.m_Index = (v12 << 15) | this->m_hKillCamUnit.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hKillCamUnit.m_Value.m_Index = -1;
    }
  }
}


