
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTeam::~CTeam  (line 17, @0x00000000023e99d0, libserver.so)  // inlines: Purge, RemoveAll, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CUtlMemory<CHandle<CBasePlayer>, int>::Purge, CUtlMemory<CTeamSpawnPoint*, int>::Purge
// callers: CDOTATeam::CDOTATeam
void __fastcall CTeam::~CTeam(CTeam *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBasePlayer>,CNetworkUtlVector_MemoryType<CHandle<CBasePlayer>,-1> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_aPlayers.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40B6DF0;
  this->m_aPlayers.m_Vector.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_aPlayers.m_Vector.m_Memory;
    CUtlMemory<CHandle<CBasePlayer>,int>::Purge(&this->m_aPlayers.m_Vector.m_Memory);
    if ( (this->m_aPlayers.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBasePlayer>,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_aSpawnPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_aSpawnPoints.m_Size = 0;
  if ( !v2
    || (CUtlMemory<CTeamSpawnPoint *,int>::Purge(&this->m_aSpawnPoints.m_Memory),
        (this->m_aSpawnPoints.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseEntity::~CBaseEntity(this);
  }
  else
  {
    CUtlMemory<CTeamSpawnPoint *,int>::Purge(&this->m_aSpawnPoints.m_Memory);
    CBaseEntity::~CBaseEntity(this);
  }
}


// CTeam::~CTeam  (line 17, @0x00000000023e9a80, libserver.so)  // inlines: Purge, RemoveAll, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CTeam, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBasePlayer>, int>::Purge, CUtlMemory<CTeamSpawnPoint*, int>::Purge
void __fastcall CTeam::~CTeam(CTeam *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBasePlayer>,CNetworkUtlVector_MemoryType<CHandle<CBasePlayer>,-1> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_aPlayers.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40B6DF0;
  this->m_aPlayers.m_Vector.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_aPlayers.m_Vector.m_Memory;
    CUtlMemory<CHandle<CBasePlayer>,int>::Purge(&this->m_aPlayers.m_Vector.m_Memory);
    if ( (this->m_aPlayers.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBasePlayer>,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_aSpawnPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_aSpawnPoints.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CTeamSpawnPoint *,int>::Purge(&this->m_aSpawnPoints.m_Memory);
    if ( (this->m_aSpawnPoints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CTeamSpawnPoint *,int>::Purge(&this->m_aSpawnPoints.m_Memory);
  }
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CTeam::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 19, @0x0000000002002d00, libserver.so)
// globals: CTeam::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTeam::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTeam::CEntityInstanceEntityClass *const this)
{
  return CTeam::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTeam::CEntityInstanceEntityClass::DestructInstance  (line 19, @0x0000000002002d10, libserver.so)  // inlines: Destruct<CTeam>
void __fastcall CTeam::CEntityInstanceEntityClass::DestructInstance(
        CTeam::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTeam::CEntityInstanceEntityClass::FreeInstance  (line 19, @0x0000000002002d30, libserver.so)
void __fastcall CTeam::CEntityInstanceEntityClass::FreeInstance(CTeam::CEntityInstanceEntityClass *const this, void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTeam::CEntityInstanceEntityClass::CanAllocate  (line 19, @0x0000000002002d50, libserver.so)
bool __fastcall CTeam::CEntityInstanceEntityClass::CanAllocate(const CTeam::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 19, @0x0000000002002d60, libserver.so)
// globals: CTeam::s_pSchemaBinding
const ISchemaBinding *__fastcall CTeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTeam::CEntityInstanceEntityClass *const this)
{
  return CTeam::s_pSchemaBinding;
}


// CTeam::CEntityInstanceEntityClass::AllocateInstance  (line 19, @0x0000000002004f30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTeam::CEntityInstanceEntityClass::AllocateInstance(CTeam::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 976);
  memset(v1, 0, 0x3D0u);
  return v1;
}


// CTeam::CEntityInstanceEntityClass::ConstructInstance  (line 19, @0x0000000002005350, libserver.so)  // inlines: Construct<CTeam>
// calls: CTeam::CTeam
CEntityInstance *__fastcall CTeam::CEntityInstanceEntityClass::ConstructInstance(
        CTeam::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CTeam::CTeam(p);
  return p;
}


// CTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x00000000020073b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x00000000020073d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTeam::GetEntityClassInternal  (line 19, @0x000000000200f450, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp, _GLOBAL__sub_I__unity_base_12.cpp
// strings: "team_manager"
// globals: `guard variable for'CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass, CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo, CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo
CEntityClass *__cdecl CTeam::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass) != 0 )
  {
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_designerName.u.m_Id = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass._vptr_CEntityClass = off_3F79390;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_ComponentOffsets.m_Size = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_AllHelpers.m_Size = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_instanceUnserializer.m_atomicFields,
      4);
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_classInputs.m_Size = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_classInputs.m_Memory.m_pMemory = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_classOutputs.m_Size = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_requiredEHandle.m_Index = -1;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_hNetworkSerializer = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_pBaseClassInfo = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_pClassInfo = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_flags = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_nAllHelpersFlags = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_pScriptClassDesc = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_pInputs = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_nInputCount = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_pOutputs = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_nOutputCount = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_pGameClass = 0;
    CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass._vptr_CEntityClass = off_3FE1370;
    __cxa_guard_release(&`guard variable for'CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass);
    __cxa_atexit(
      CTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass,
      &_dso_handle);
  }
  if ( g_pEntityCTeamClass != 0 )
    return &CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass;
  if ( `guard variable for'CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo,
      "CTeam",
      "team_manager",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo);
  }
  CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_pClassInfo = &CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo;
  CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_pBaseClassInfo = CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo.m_pBaseClassInfo;
  g_pEntityCTeamClass = &CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass;
  CTeam::GetEntityClassInfo(void)::g_EntityCTeamClassInfo.m_pClass = &CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass;
  CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCTeamClass->m_pComponentOverrides = 0;
  return &CTeam::GetEntityClassInternal(void)::g_EntityCTeamClass;
}


// CTeam::Schema_DynamicBinding  (line 19, @0x00000000023e95e0, libserver.so)
// calls: CTeam::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CTeam::Schema_DynamicBinding(const CTeam *const this)
{
  CTeam::Schema_VerifyBindingIsRegistered();
  return CTeam::s_pSchemaBinding;
}


// CTeam::GetRoundsWon  (line 71, @0x00000000023e58b0, libserver.so)
int __fastcall CTeam::GetRoundsWon(CTeam *const this)
{
  return this->m_iRoundsWon.m_Value;
}


// CTeam::SetRoundsWon  (line 72, @0x00000000023e96c0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
void __fastcall CTeam::SetRoundsWon(CTeam *const this, int iRounds)
{
  if ( this->m_iRoundsWon.m_Value != iRounds )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iRoundsWon.m_Value = iRounds;
  }
}


// CTeam::IncrementRoundsWon  (line 73, @0x00000000023e9680, libserver.so)  // inlines: NetworkStateChanged, Set, operator++, operator+=<int>
void __fastcall CTeam::IncrementRoundsWon(CTeam *const this)
{
  int v2; // r12d

  v2 = this->m_iRoundsWon.m_Value + 1;
  (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_iRoundsWon.m_Value = v2;
}


