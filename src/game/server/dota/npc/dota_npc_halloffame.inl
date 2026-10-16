
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BaseNPC_HallofFame::~CDOTA_BaseNPC_HallofFame  (line 9, @0x0000000002985100, libserver.so)  // inlines: StopListeningForAllEvents, ~CDOTA_BaseNPC_Building, ~CGameEventListener, ~CNetworkVarBase, ~CStrongHandle, ~IGameEventListener2
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_HallofFame::~CDOTA_BaseNPC_HallofFame(CDOTA_BaseNPC_HallofFame *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_42F4A10;
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_INextBotEventResponder = &off_42F5988;
  this->_vptr_CObstructionObject = &off_42F5CB8;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  this->_vptr_IHandleEntity = &off_42DB1F0;
  this->_vptr_INextBotEventResponder = &off_42DC150;
  this->_vptr_CObstructionObject = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndexDestruction.m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_HallofFame::~CDOTA_BaseNPC_HallofFame  (line 9, @0x0000000002985370, libserver.so)  // inlines: StopListeningForAllEvents, ~CDOTA_BaseNPC_Building, ~CDOTA_BaseNPC_HallofFame, ~CGameEventListener, ~CNetworkVarBase, ~CStrongHandle, ~IGameEventListener2
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_HallofFame::~CDOTA_BaseNPC_HallofFame(CDOTA_BaseNPC_HallofFame *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_42F4A10;
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_INextBotEventResponder = &off_42F5988;
  this->_vptr_CObstructionObject = &off_42F5CB8;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  this->_vptr_IHandleEntity = &off_42DB1F0;
  this->_vptr_INextBotEventResponder = &off_42DC150;
  this->_vptr_CObstructionObject = &off_42DC480;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndexDestruction.m_Value);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_nFXIndex.m_Value);
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_HallofFame::Schema_DynamicBinding  (line 11, @0x0000000002967870, libserver.so)
// globals: CDOTA_BaseNPC_HallofFame::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_HallofFame::Schema_DynamicBinding(
        const CDOTA_BaseNPC_HallofFame *const this)
{
  return CDOTA_BaseNPC_HallofFame::s_pSchemaBinding;
}


// CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 11, @0x00000000029678a0, libserver.so)
// globals: CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::DestructInstance  (line 11, @0x00000000029678b0, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_HallofFame>
void __fastcall CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::FreeInstance  (line 11, @0x00000000029678d0, libserver.so)
void __fastcall CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::CanAllocate  (line 11, @0x00000000029678f0, libserver.so)
bool __fastcall CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 11, @0x0000000002967900, libserver.so)
// globals: CDOTA_BaseNPC_HallofFame::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_HallofFame::s_pSchemaBinding;
}


// CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::AllocateInstance  (line 11, @0x000000000296ad10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4736);
  memset(v1, 0, 0x1280u);
  return v1;
}


// CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 11, @0x000000000296fde0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 11, @0x0000000002970060, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::ConstructInstance  (line 11, @0x00000000029834f0, libserver.so)  // inlines: Construct<CDOTA_BaseNPC_HallofFame>
// calls: CDOTA_BaseNPC_HallofFame::CDOTA_BaseNPC_HallofFame
CEntityInstance *__fastcall CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_BaseNPC_HallofFame::CDOTA_BaseNPC_HallofFame(p);
  return p;
}


// CDOTA_BaseNPC_HallofFame::GetEntityClassInternal  (line 11, @0x000000000298a8e0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC_Building>, CDOTA_BaseNPC_Building::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "ent_dota_halloffame", "CDOTA_BaseNPC_HallofFame"
// globals: `guard variable for'CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass, CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_HallofFame::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HallofFameClassInfo, CDOTA_BaseNPC_HallofFame::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HallofFameClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_HallofFame::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass) != 0 )
  {
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_flags = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_pInputs = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_nInputCount = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_pOutputs = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_pGameClass = 0;
    CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass._vptr_CEntityClass = off_42F4990;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass);
    __cxa_atexit(
      CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_HallofFameClass != 0 )
    return &CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass;
  if ( `guard variable for'CDOTA_BaseNPC_HallofFame::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HallofFameClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_HallofFame::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HallofFameClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Building::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_HallofFame::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HallofFameClassInfo,
      "CDOTA_BaseNPC_HallofFame",
      "ent_dota_halloffame",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_HallofFame::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HallofFameClassInfo);
  }
  CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_pClassInfo = &CDOTA_BaseNPC_HallofFame::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HallofFameClassInfo;
  CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_pBaseClassInfo = CDOTA_BaseNPC_HallofFame::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HallofFameClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_HallofFameClass = &CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass;
  CDOTA_BaseNPC_HallofFame::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_HallofFameClassInfo.m_pClass = &CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass;
  CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC_Building>(0);
  g_pEntityCDOTA_BaseNPC_HallofFameClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_HallofFame::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_HallofFameClass;
}


// CDOTA_BaseNPC_HallofFame::IsControllableByAnyPlayer  (line 18, @0x0000000002967910, libserver.so)
bool __fastcall CDOTA_BaseNPC_HallofFame::IsControllableByAnyPlayer(CDOTA_BaseNPC_HallofFame *const this)
{
  return 0;
}


// CDOTA_BaseNPC_HallofFame::IsControllableByPlayer  (line 19, @0x0000000002967920, libserver.so)
bool __fastcall CDOTA_BaseNPC_HallofFame::IsControllableByPlayer(CDOTA_BaseNPC_HallofFame *const this, int iIndex)
{
  return 0;
}


// CDOTA_BaseNPC_HallofFame::UpdateTransmitState  (line 21, @0x000000000296b010, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CDOTA_BaseNPC_HallofFame::UpdateTransmitState(CDOTA_BaseNPC_HallofFame *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CDOTA_BaseNPC_HallofFame::OnSaveState  (line 26, @0x0000000002967930, libserver.so)
bool __fastcall CDOTA_BaseNPC_HallofFame::OnSaveState(CDOTA_BaseNPC_HallofFame *const this, KeyValues *pKV)
{
  return 0;
}


