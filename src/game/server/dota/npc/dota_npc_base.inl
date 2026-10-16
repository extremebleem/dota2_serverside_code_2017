
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BaseNPC::CEntityInstanceEntityClass::DestructInstance  (line 157, @0x0000000002624360, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC>
void __fastcall CDOTA_BaseNPC::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC::CEntityInstanceEntityClass::FreeInstance  (line 157, @0x0000000002624380, libserver.so)
void __fastcall CDOTA_BaseNPC::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC::CEntityInstanceEntityClass::CanAllocate  (line 157, @0x00000000026243a0, libserver.so)
bool __fastcall CDOTA_BaseNPC::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC::CEntityInstanceEntityClass::AllocateInstance  (line 157, @0x000000000262dbc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4504);
  memset(v1, 0, 0x1198u);
  return v1;
}


// CDOTA_BaseNPC::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 157, @0x000000000262ef10, libserver.so)  // inlines: Schema_StaticBinding
// calls: CDOTA_BaseNPC::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CDOTA_BaseNPC::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC::CEntityInstanceEntityClass *const this)
{
  CDOTA_BaseNPC::Schema_VerifyBindingIsRegistered();
  return CDOTA_BaseNPC::s_pSchemaBinding;
}


// CDOTA_BaseNPC::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 157, @0x000000000262ef30, libserver.so)
// calls: CDOTA_BaseNPC::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC::CEntityInstanceEntityClass *const this)
{
  CDOTA_BaseNPC::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CDOTA_BaseNPC::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC::CEntityInstanceEntityClass::ConstructInstance  (line 157, @0x000000000262ef50, libserver.so)  // inlines: Construct<CDOTA_BaseNPC>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
  return p;
}


// CDOTA_BaseNPC::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 157, @0x0000000002634460, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 157, @0x0000000002634480, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC::GetEntityClass  (line 157, @0x00000000029658e0, libserver.so)
CEntityClass *__cdecl CDOTA_BaseNPC::GetEntityClass()
{
  return g_pEntityCDOTA_BaseNPCClass;
}


// CDOTA_BaseNPC::Schema_DynamicBinding  (line 157, @0x00000000029658f0, libserver.so)
// globals: CDOTA_BaseNPC::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC::Schema_DynamicBinding(const CDOTA_BaseNPC *const this)
{
  return CDOTA_BaseNPC::s_pSchemaBinding;
}


// CDOTA_BaseNPC::GetEntityClassInfo  (line 157, @0x0000000002975e90, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseCombatCharacter::GetEntityClassInfo
// callers: CDOTA_BaseNPC_Creep::GetEntityClassInfo, CDOTA_BaseNPC_Creep_Lane::GetEntityClassInfo, CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo, CDOTA_BaseNPC_Additive::GetEntityClassInternal, CDOTA_BaseNPC_Creep::GetEntityClassInternal, CDOTA_BaseNPC_Pet::GetEntityClassInternal, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CDOTA_Unit_Announcer::GetEntityClassInternal, CDOTA_Unit_Announcer_Killing_Spree::GetEntityClassInternal, CDOTA_Unit_Fountain::GetEntityClassInternal, CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal, CDOTA_Wisp_Spirit::GetEntityClassInternal (14 total)
// strings: "npc_dota_base", "CDOTA_BaseNPC", "NextBotCombatCharacter"
// globals: `guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo, CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo, `guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo, NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo
CEntityClassInfo *__cdecl CDOTA_BaseNPC::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo != 0 )
    return &CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo) == 0 )
    return &CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo;
  if ( `guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo) != 0 )
  {
    EntityClassInfo = CBaseCombatCharacter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo,
      "NextBotCombatCharacter",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo,
    "CDOTA_BaseNPC",
    "npc_dota_base",
    0,
    &NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo);
  return &CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo;
}


// CDOTA_BaseNPC::GetEntityClassInternal  (line 157, @0x0000000002985b60, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseCombatCharacter::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_base", "CDOTA_BaseNPC", "NextBotCombatCharacter"
// globals: `guard variable for'CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass, CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo, CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo, `guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo (9 total)
CEntityClass *__cdecl CDOTA_BaseNPC::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass) != 0 )
  {
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_pClassInfo = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_flags = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_pInputs = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_nInputCount = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_pOutputs = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_nOutputCount = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_pGameClass = 0;
    CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass._vptr_CEntityClass = off_4116210;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass);
    __cxa_atexit(
      CDOTA_BaseNPC::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPCClass != 0 )
    return &CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass;
  if ( `guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo) != 0 )
  {
    if ( `guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo) != 0 )
    {
      EntityClassInfo = CBaseCombatCharacter::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo,
        "NextBotCombatCharacter",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo,
      "CDOTA_BaseNPC",
      "npc_dota_base",
      0,
      &NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo);
  }
  CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_pClassInfo = &CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo;
  CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_pBaseClassInfo = CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPCClass = &CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass;
  CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo.m_pClass = &CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass;
  CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC>(0);
  g_pEntityCDOTA_BaseNPCClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPCClass;
}


// CDOTA_BaseNPC::GetIntentionInterface  (line 223, @0x00000000026243b0, libserver.so)
IIntention *__fastcall CDOTA_BaseNPC::GetIntentionInterface(const CDOTA_BaseNPC *const this)
{
  return this->m_intention;
}


// CDOTA_BaseNPC::CDOTA_BaseNPCIntention::GetName  (line 223, @0x0000000002965920, libserver.so)
// strings: "CDOTA_BaseNPCIntention"
const char *__fastcall CDOTA_BaseNPC::CDOTA_BaseNPCIntention::GetName(
        CDOTA_BaseNPC::CDOTA_BaseNPCIntention *const this)
{
  return "CDOTA_BaseNPCIntention";
}


// CDOTA_BaseNPC::CDOTA_BaseNPCIntention::FirstContainedResponder  (line 223, @0x0000000002965930, libserver.so)
INextBotEventResponder *__fastcall CDOTA_BaseNPC::CDOTA_BaseNPCIntention::FirstContainedResponder(
        const CDOTA_BaseNPC::CDOTA_BaseNPCIntention *const this)
{
  return this->m_behavior;
}


// CDOTA_BaseNPC::CDOTA_BaseNPCIntention::NextContainedResponder  (line 223, @0x0000000002965940, libserver.so)
INextBotEventResponder *__fastcall CDOTA_BaseNPC::CDOTA_BaseNPCIntention::NextContainedResponder(
        const CDOTA_BaseNPC::CDOTA_BaseNPCIntention *const this,
        INextBotEventResponder *current)
{
  return 0;
}


// CDOTA_BaseNPC::GetLocomotionInterface  (line 225, @0x00000000026243d0, libserver.so)
CDOTALocomotor *__fastcall CDOTA_BaseNPC::GetLocomotionInterface(const CDOTA_BaseNPC *const this)
{
  return this->m_locomotor;
}


// CDOTA_BaseNPC::GetBodyInterface  (line 226, @0x00000000026243f0, libserver.so)
CDOTABody *__fastcall CDOTA_BaseNPC::GetBodyInterface(const CDOTA_BaseNPC *const this)
{
  return this->m_body;
}


// CDOTA_BaseNPC::SetNeverMoveToClearSpace  (line 227, @0x0000000002965950, libserver.so)
void __fastcall CDOTA_BaseNPC::SetNeverMoveToClearSpace(CDOTA_BaseNPC *const this, bool neverMoveToClearSpace)
{
  this->m_bNeverMoveToClearSpace = neverMoveToClearSpace;
}


// CDOTA_BaseNPC::GetNeverMoveToClearSpace  (line 228, @0x0000000002965960, libserver.so)
bool __fastcall CDOTA_BaseNPC::GetNeverMoveToClearSpace(CDOTA_BaseNPC *const this)
{
  return this->m_bNeverMoveToClearSpace;
}


// CDOTA_BaseNPC::OnIdleChanged  (line 231, @0x0000000002624410, libserver.so)
void __fastcall CDOTA_BaseNPC::OnIdleChanged(CDOTA_BaseNPC *const this)
{
  ;
}


// CDOTA_BaseNPC::IsIdle  (line 232, @0x0000000002965970, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsIdle(CDOTA_BaseNPC *const this)
{
  return this->m_bIsIdle;
}


// CDOTA_BaseNPC::GetLastIdleChangeTime  (line 233, @0x0000000002965980, libserver.so)
float __fastcall CDOTA_BaseNPC::GetLastIdleChangeTime(CDOTA_BaseNPC *const this)
{
  return this->m_flLastIdleChangeTime;
}


// CDOTA_BaseNPC::IsPartOfFOWSystem  (line 235, @0x0000000002624420, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsPartOfFOWSystem(CDOTA_BaseNPC *const this)
{
  return 1;
}


// CDOTA_BaseNPC::UsesConstantGesture  (line 259, @0x0000000002624430, libserver.so)
bool __fastcall CDOTA_BaseNPC::UsesConstantGesture(CDOTA_BaseNPC *const this, bool bPortrait)
{
  return this->m_bUsesConstantGesture;
}


// CDOTA_BaseNPC::GetConstantGestureWeight  (line 260, @0x0000000002624440, libserver.so)
float __fastcall CDOTA_BaseNPC::GetConstantGestureWeight(CDOTA_BaseNPC *const this, double a2, float flCurrentWeight)
{
  return 1.0;
}


// CDOTA_BaseNPC::GetConstantGestureCycle  (line 261, @0x0000000002624450, libserver.so)
void __fastcall CDOTA_BaseNPC::GetConstantGestureCycle(CDOTA_BaseNPC *const this, double a2, float flCycle)
{
  ;
}


// CDOTA_BaseNPC::GestureCycleComplete  (line 263, @0x0000000002624460, libserver.so)
void __fastcall CDOTA_BaseNPC::GestureCycleComplete(
        CDOTA_BaseNPC *const this,
        Activity activity,
        int iGestureSlot,
        bool bLooping)
{
  ;
}


// CDOTA_BaseNPC::GetLevel  (line 283, @0x0000000002965990, libserver.so)
int __fastcall CDOTA_BaseNPC::GetLevel(CDOTA_BaseNPC *const this)
{
  return this->m_iCurrentLevel.m_Value;
}


// CDOTA_BaseNPC::IsAncient  (line 285, @0x00000000029659a0, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsAncient(CDOTA_BaseNPC *const this)
{
  return this->m_bIsAncient.m_Value;
}


// CDOTA_BaseNPC::IsNeutralUnitType  (line 286, @0x00000000029659b0, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsNeutralUnitType(CDOTA_BaseNPC *const this)
{
  return this->m_bIsNeutralUnitType.m_Value;
}


// CDOTA_BaseNPC::IsSummoned  (line 288, @0x00000000029659c0, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsSummoned(CDOTA_BaseNPC *const this)
{
  return this->m_bIsSummoned.m_Value;
}


// CDOTA_BaseNPC::IsClone  (line 296, @0x00000000029659d0, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsClone(CDOTA_BaseNPC *const this)
{
  return (*(this->_vptr_IHandleEntity + 390))(this) != 0;
}


// CDOTA_BaseNPC::CanAcceptTargetToAttack  (line 310, @0x0000000002624470, libserver.so)
bool __fastcall CDOTA_BaseNPC::CanAcceptTargetToAttack(CDOTA_BaseNPC *const this, CDOTA_BaseNPC *pTargetNPC)
{
  return 1;
}


// CDOTA_BaseNPC::MyNPCPointer  (line 322, @0x0000000002624480, libserver.so)
CAI_BaseNPC *__fastcall CDOTA_BaseNPC::MyNPCPointer(CDOTA_BaseNPC *const this)
{
  return 0;
}


// CDOTA_BaseNPC::GetHullRadius  (line 324, @0x00000000029659f0, libserver.so)
float __fastcall CDOTA_BaseNPC::GetHullRadius(CDOTA_BaseNPC *const this)
{
  return this->m_flHullRadius;
}


// CDOTA_BaseNPC::GetCollisionPadding  (line 325, @0x0000000002965a00, libserver.so)
float __fastcall CDOTA_BaseNPC::GetCollisionPadding(CDOTA_BaseNPC *const this)
{
  return this->m_flCollisionPadding;
}


// CDOTA_BaseNPC::GetPaddedCollisionRadius  (line 326, @0x0000000002965a10, libserver.so)
float __fastcall CDOTA_BaseNPC::GetPaddedCollisionRadius(CDOTA_BaseNPC *const this)
{
  return this->m_flHullRadius + this->m_flCollisionPadding;
}


// CDOTA_BaseNPC::SetHullRadius  (line 328, @0x0000000002965a30, libserver.so)
void __fastcall CDOTA_BaseNPC::SetHullRadius(CDOTA_BaseNPC *const this, float a2, float flHullRadius)
{
  this->m_flHullRadius = a2;
}


// CDOTA_BaseNPC::GetHealthPercent  (line 332, @0x00000000028275e0, libserver.so)
// calls: CBaseEntity::GetHealth
// callers: CDOTA_BotMode_Retreat::GetDesire
int __fastcall CDOTA_BaseNPC::GetHealthPercent(CDOTA_BaseNPC *const this)
{
  __int64 v2; // r12
  int v3; // eax
  __int64 v4; // rcx

  v2 = 100LL * CBaseEntity::GetHealth(this);
  v3 = (*(this->_vptr_IHandleEntity + 156))(this);
  v4 = 1;
  if ( v3 > 0 )
    v4 = v3;
  return v2 / v4;
}


// CDOTA_BaseNPC::GetHealthDeficit  (line 333, @0x000000000296b290, libserver.so)
// calls: CBaseEntity::GetHealth
int __fastcall CDOTA_BaseNPC::GetHealthDeficit(CDOTA_BaseNPC *const this)
{
  int v2; // r12d

  v2 = (*(this->_vptr_IHandleEntity + 156))(this);
  return v2 - CBaseEntity::GetHealth(this);
}


// CDOTA_BaseNPC::SpendGold  (line 382, @0x0000000002624490, libserver.so)
void __fastcall CDOTA_BaseNPC::SpendGold(CDOTA_BaseNPC *const this, int iCost)
{
  ;
}


// CDOTA_BaseNPC::GetGold  (line 383, @0x00000000026244a0, libserver.so)
int __fastcall CDOTA_BaseNPC::GetGold(const CDOTA_BaseNPC *const this)
{
  return 0;
}


// CDOTA_BaseNPC::SetCanSellItems  (line 397, @0x0000000002965a40, libserver.so)
void __fastcall CDOTA_BaseNPC::SetCanSellItems(CDOTA_BaseNPC *const this, bool bCanSell)
{
  this->m_bCanSellItems = bCanSell;
}


// CDOTA_BaseNPC::CanSellItems  (line 398, @0x0000000002965a50, libserver.so)
bool __fastcall CDOTA_BaseNPC::CanSellItems(CDOTA_BaseNPC *const this)
{
  return this->m_bCanSellItems;
}


// CDOTA_BaseNPC::SetBaseMaxHealth  (line 417, @0x0000000002965a60, libserver.so)
void __fastcall CDOTA_BaseNPC::SetBaseMaxHealth(CDOTA_BaseNPC *const this, float a2, float flBaseMaxHealth)
{
  this->m_flBaseMaxHealth = a2;
}


// CDOTA_BaseNPC::GetBaseMaxHealth  (line 418, @0x0000000002965a70, libserver.so)
float __fastcall CDOTA_BaseNPC::GetBaseMaxHealth(CDOTA_BaseNPC *const this)
{
  return this->m_flBaseMaxHealth;
}


// CDOTA_BaseNPC::GetMana  (line 429, @0x0000000002965a80, libserver.so)
float __fastcall CDOTA_BaseNPC::GetMana(const CDOTA_BaseNPC *const this)
{
  return this->m_flMana.m_Value;
}


// CDOTA_BaseNPC::GetMaxMana  (line 431, @0x0000000002965a90, libserver.so)
float __fastcall CDOTA_BaseNPC::GetMaxMana(const CDOTA_BaseNPC *const this)
{
  return this->m_flMaxMana.m_Value;
}


// CDOTA_BaseNPC::GetManaPercent  (line 432, @0x0000000002965aa0, libserver.so)
int __fastcall CDOTA_BaseNPC::GetManaPercent(const CDOTA_BaseNPC *const this)
{
  return ((100.0 * this->m_flMana.m_Value) / this->m_flMaxMana.m_Value);
}


// CDOTA_BaseNPC::GetAcquisitionRange  (line 446, @0x0000000002965ad0, libserver.so)
float __fastcall CDOTA_BaseNPC::GetAcquisitionRange(const CDOTA_BaseNPC *const this)
{
  return this->m_iAcquisitionRange;
}


// CDOTA_BaseNPC::SetAcquisitionRange  (line 447, @0x0000000002965ae0, libserver.so)
void __fastcall CDOTA_BaseNPC::SetAcquisitionRange(CDOTA_BaseNPC *const this, int nRange)
{
  this->m_iAcquisitionRange = nRange;
}


// CDOTA_BaseNPC::GetAttackRange  (line 450, @0x0000000002567750, libserver.so)  // inlines: GetModifier_Constant_Additive, GetModifier_Constant_Highest, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
// callers: DOTA_ExecuteOrders, CDOTA_Bot::FindEstimatedAttackLocation, CDOTA_Bot::CanKillUnit, CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BotMode_DefendTower::Think, CDOTA_Bot::DoCreepAttackAndDeny, CDOTA_BotMode_EvasiveManeuvers::Think, CDOTA_BotMode_PushTower::WillingToBeInTowerRange, CDOTA_BotMode_Laning::Think, CDOTA_BotMode_PushTower::Think, CDOTA_TeamCommander::UpdateAvoidanceGrid, CDOTA_TeamCommander::DoCreepHealthAnalysis (42 total)
float __fastcall CDOTA_BaseNPC::GetAttackRange(CDOTA_BaseNPC *const this)
{
  float Modifier_Constant_Highest_Internal; // xmm2_4
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r12
  __int64 v4; // rax
  __int64 v5; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_iAttackRange; // xmm3_4
  __int64 v8; // rax
  float v9; // xmm3_4
  float v10; // xmm0_4
  __int64 v11; // rax
  float v12; // xmm0_4
  float v13; // xmm1_4
  __int64 v14; // rax
  float v15; // xmm1_4
  float v16; // xmm0_4
  __int64 v18; // rax
  float v19; // [rsp-18h] [rbp-20h]
  float v20; // [rsp-18h] [rbp-20h]
  float v21; // [rsp-14h] [rbp-1Ch]
  float v22; // [rsp-14h] [rbp-1Ch]
  float v23; // [rsp-14h] [rbp-1Ch]
  float v24; // [rsp-14h] [rbp-1Ch]

  Modifier_Constant_Highest_Internal = 0.0;
  p_m_ModifierManager = &this->m_ModifierManager;
  v4 = this->m_ModifierManager.m_buffsForModifiers[71];
  if ( v4 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v4].m_Size > 0 )
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           &this->m_ModifierManager,
                                           modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                           &CModifierParams::s_Default);
  v5 = this->m_ModifierManager.m_buffsForModifiers[69];
  Modifier_Constant_Additive_Internal = 0.0;
  m_iAttackRange = this->m_iAttackRange;
  if ( v5 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v5].m_Size > 0 )
  {
    v19 = Modifier_Constant_Highest_Internal;
    v21 = this->m_iAttackRange;
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            p_m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v19;
    m_iAttackRange = v21;
  }
  v8 = this->m_ModifierManager.m_buffsForModifiers[70];
  v9 = m_iAttackRange + Modifier_Constant_Additive_Internal;
  v10 = 0.0;
  if ( v8 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v8].m_Size > 0 )
  {
    v20 = Modifier_Constant_Highest_Internal;
    v22 = v9;
    v10 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            p_m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v20;
    v9 = v22;
  }
  if ( Modifier_Constant_Highest_Internal > (v9 + v10) )
  {
    v18 = this->m_ModifierManager.m_buffsForModifiers[71];
    if ( v18 == 0xFF || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v18].m_Size <= 0 )
      return 0.0;
    else
      return CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
               p_m_ModifierManager,
               modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
               &CModifierParams::s_Default);
  }
  else
  {
    v11 = this->m_ModifierManager.m_buffsForModifiers[69];
    v12 = 0.0;
    v13 = this->m_iAttackRange;
    if ( v11 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v11].m_Size > 0 )
    {
      v23 = this->m_iAttackRange;
      v12 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              p_m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
              &CModifierParams::s_Default);
      v13 = v23;
    }
    v14 = this->m_ModifierManager.m_buffsForModifiers[70];
    v15 = v13 + v12;
    v16 = 0.0;
    if ( v14 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v14].m_Size > 0 )
    {
      v24 = v15;
      v16 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              p_m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      v15 = v24;
    }
    return v16 + v15;
  }
}


// CDOTA_BaseNPC::GetAttackRangeBuffer  (line 452, @0x0000000002965af0, libserver.so)
float __fastcall CDOTA_BaseNPC::GetAttackRangeBuffer(CDOTA_BaseNPC *const this)
{
  return this->m_iAttackRangeBuffer;
}


// CDOTA_BaseNPC::IsHero  (line 491, @0x0000000002965b00, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsHero(const CDOTA_BaseNPC *const this)
{
  return this->m_iUnitType & 1;
}


// CDOTA_BaseNPC::IsRealHero  (line 492, @0x0000000002965b10, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsRealHero(const CDOTA_BaseNPC *const this)
{
  bool result; // al

  result = 0;
  if ( (this->m_iUnitType & 1) != 0 )
    return !this->m_bIsIllusion.m_Value;
  return result;
}


// CDOTA_BaseNPC::IsConsideredHero  (line 493, @0x0000000002965b30, libserver.so)  // inlines: IsHero
bool __fastcall CDOTA_BaseNPC::IsConsideredHero(CDOTA_BaseNPC *const this)
{
  bool result; // al

  result = 1;
  if ( (this->m_iUnitType & 1) == 0 )
    return (this->m_iUnitType & 2) != 0;
  return result;
}


// CDOTA_BaseNPC::IsOther  (line 495, @0x0000000002965b50, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsOther(const CDOTA_BaseNPC *const this)
{
  return (this->m_iUnitType & 0x193) == 0;
}


// CDOTA_BaseNPC::IsTower  (line 496, @0x0000000002965b70, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsTower(const CDOTA_BaseNPC *const this)
{
  return (this->m_iUnitType & 4) != 0;
}


// CDOTA_BaseNPC::IsBuilding  (line 497, @0x0000000002965b90, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsBuilding(const CDOTA_BaseNPC *const this)
{
  return (this->m_iUnitType & 0x10) != 0;
}


// CDOTA_BaseNPC::IsFort  (line 498, @0x0000000002965bb0, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsFort(const CDOTA_BaseNPC *const this)
{
  return (this->m_iUnitType & 0x20) != 0;
}


// CDOTA_BaseNPC::IsBarracks  (line 499, @0x0000000002965bd0, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsBarracks(const CDOTA_BaseNPC *const this)
{
  return (this->m_iUnitType & 0x40) != 0;
}


// CDOTA_BaseNPC::IsCreep  (line 500, @0x0000000002965bf0, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsCreep(const CDOTA_BaseNPC *const this)
{
  return (this->m_iUnitType & 0x80) != 0;
}


// CDOTA_BaseNPC::IsCourier  (line 501, @0x0000000002965c10, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsCourier(const CDOTA_BaseNPC *const this)
{
  return (this->m_iUnitType & 0x100) != 0;
}


// CDOTA_BaseNPC::IsBoss  (line 504, @0x0000000002965c30, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsBoss(const CDOTA_BaseNPC *const this)
{
  return (this->m_iUnitType & 0x800) != 0;
}


// CDOTA_BaseNPC::IsCreature  (line 505, @0x0000000002965c50, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsCreature(const CDOTA_BaseNPC *const this)
{
  return HIWORD(this->m_iUnitType) & 1;
}


// CDOTA_BaseNPC::IsShrine  (line 507, @0x00000000026244b0, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsShrine(const CDOTA_BaseNPC *const this)
{
  return 0;
}


// CDOTA_BaseNPC::IsAnnouncer  (line 508, @0x00000000026244c0, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsAnnouncer(const CDOTA_BaseNPC *const this)
{
  return 0;
}


// CDOTA_BaseNPC::IsDemon  (line 513, @0x00000000026244d0, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsDemon(const CDOTA_BaseNPC *const this)
{
  return 0;
}


// CDOTA_BaseNPC::IsRoshan  (line 514, @0x00000000026244e0, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsRoshan(const CDOTA_BaseNPC *const this)
{
  return 0;
}


// CDOTA_BaseNPC::IsPet  (line 517, @0x00000000026244f0, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsPet(CDOTA_BaseNPC *const this)
{
  return 0;
}


// CDOTA_BaseNPC::IsPhantom  (line 528, @0x0000000002965c60, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsPhantom(CDOTA_BaseNPC *const this)
{
  return this->m_bIsPhantom.m_Value;
}


// CDOTA_BaseNPC::IsZombie  (line 533, @0x0000000002624500, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsZombie(CDOTA_BaseNPC *const this)
{
  return 0;
}


// CDOTA_BaseNPC::IsFountain  (line 534, @0x0000000002624510, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsFountain(CDOTA_BaseNPC *const this)
{
  return 0;
}


// CDOTA_BaseNPC::GetBaseDayTimeVisionRange  (line 563, @0x0000000002965c70, libserver.so)
int __fastcall CDOTA_BaseNPC::GetBaseDayTimeVisionRange(CDOTA_BaseNPC *const this)
{
  return this->m_iDayTimeVisionRange.m_Value;
}


// CDOTA_BaseNPC::SetDayTimeVisionRange  (line 564, @0x000000000296ca50, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
void __fastcall CDOTA_BaseNPC::SetDayTimeVisionRange(CDOTA_BaseNPC *const this, int iRange)
{
  if ( this->m_iDayTimeVisionRange.m_Value != iRange )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2396, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iDayTimeVisionRange.m_Value = iRange;
  }
}


// CDOTA_BaseNPC::GetBaseNightTimeVisionRange  (line 567, @0x0000000002965c80, libserver.so)
int __fastcall CDOTA_BaseNPC::GetBaseNightTimeVisionRange(CDOTA_BaseNPC *const this)
{
  return this->m_iNightTimeVisionRange.m_Value;
}


// CDOTA_BaseNPC::SetNightTimeVisionRange  (line 568, @0x000000000296c9d0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
void __fastcall CDOTA_BaseNPC::SetNightTimeVisionRange(CDOTA_BaseNPC *const this, int iRange)
{
  if ( this->m_iNightTimeVisionRange.m_Value != iRange )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2400, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iNightTimeVisionRange.m_Value = iRange;
  }
}


// CDOTA_BaseNPC::SetDeathXP  (line 579, @0x0000000002965c90, libserver.so)
void __fastcall CDOTA_BaseNPC::SetDeathXP(CDOTA_BaseNPC *const this, int iXPBounty)
{
  this->m_iXPBounty = iXPBounty;
}


// CDOTA_BaseNPC::GetDeathXP  (line 581, @0x0000000002624520, libserver.so)
int __fastcall CDOTA_BaseNPC::GetDeathXP(CDOTA_BaseNPC *const this)
{
  return this->m_iXPBountyExtra + this->m_iXPBounty;
}


// CDOTA_BaseNPC::SetMinimumGoldBounty  (line 584, @0x0000000002965ca0, libserver.so)
void __fastcall CDOTA_BaseNPC::SetMinimumGoldBounty(CDOTA_BaseNPC *const this, int iGoldBountyMin)
{
  this->m_iGoldBountyMin = iGoldBountyMin;
}


// CDOTA_BaseNPC::GetMinimumGoldBounty  (line 585, @0x0000000002965cb0, libserver.so)
int __fastcall CDOTA_BaseNPC::GetMinimumGoldBounty(CDOTA_BaseNPC *const this)
{
  return this->m_iGoldBountyMin;
}


// CDOTA_BaseNPC::SetMaximumGoldBounty  (line 586, @0x0000000002965cc0, libserver.so)
void __fastcall CDOTA_BaseNPC::SetMaximumGoldBounty(CDOTA_BaseNPC *const this, int iGoldBountyMax)
{
  this->m_iGoldBountyMax = iGoldBountyMax;
}


// CDOTA_BaseNPC::GetMaximumGoldBounty  (line 587, @0x0000000002965cd0, libserver.so)
int __fastcall CDOTA_BaseNPC::GetMaximumGoldBounty(CDOTA_BaseNPC *const this)
{
  return this->m_iGoldBountyMax;
}


// CDOTA_BaseNPC::IsControllableByAnyPlayer  (line 599, @0x0000000002965ce0, libserver.so)  // inlines: operator><int>
bool __fastcall CDOTA_BaseNPC::IsControllableByAnyPlayer(const CDOTA_BaseNPC *const this)
{
  return this->m_iIsControllableByPlayer64.m_Value != 0;
}


// CDOTA_BaseNPC::IsOwnedByAnyPlayer  (line 602, @0x000000000296dba0, libserver.so)  // inlines: IsHero
bool __fastcall CDOTA_BaseNPC::IsOwnedByAnyPlayer(CDOTA_BaseNPC *const this)
{
  _BOOL4 v1; // eax

  LOBYTE(v1) = 1;
  if ( this->m_iIsControllableByPlayer64.m_Value == 0 )
    return this->m_iUnitType & 1;
  return v1;
}


// CDOTA_BaseNPC::GetMainControllingPlayer  (line 607, @0x0000000002965d00, libserver.so)
int __fastcall CDOTA_BaseNPC::GetMainControllingPlayer(CDOTA_BaseNPC *const this)
{
  return this->m_nControllingPlayerID;
}


// CDOTA_BaseNPC::CanPreventTreeRegrow  (line 619, @0x0000000002624540, libserver.so)
bool __fastcall CDOTA_BaseNPC::CanPreventTreeRegrow(const CDOTA_BaseNPC *const this)
{
  return 1;
}


// CDOTA_BaseNPC::GetBaseDamageMin  (line 640, @0x000000000263d7c0, libserver.so)  // inlines: GetModifier_Constant_Additive, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
// globals: CModifierParams::s_Default
int __fastcall CDOTA_BaseNPC::GetBaseDamageMin(CDOTA_BaseNPC *const this)
{
  __int64 v1; // rax
  float m_iBaseDamageMin; // xmm1_4

  v1 = this->m_ModifierManager.m_buffsForModifiers[3];
  m_iBaseDamageMin = this->m_iBaseDamageMin;
  if ( v1 == 0xFF || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v1].m_Size <= 0 )
    return (m_iBaseDamageMin + 0.0);
  else
    return (m_iBaseDamageMin
          + CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &this->m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_BASEATTACK_BONUSDAMAGE,
              &CModifierParams::s_Default));
}


// CDOTA_BaseNPC::GetBaseDamageMax  (line 644, @0x000000000263d830, libserver.so)  // inlines: GetModifier_Constant_Additive, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
// globals: CModifierParams::s_Default
int __fastcall CDOTA_BaseNPC::GetBaseDamageMax(CDOTA_BaseNPC *const this)
{
  __int64 v1; // rax
  float m_iBaseDamageMax; // xmm1_4

  v1 = this->m_ModifierManager.m_buffsForModifiers[3];
  m_iBaseDamageMax = this->m_iBaseDamageMax;
  if ( v1 == 0xFF || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v1].m_Size <= 0 )
    return (m_iBaseDamageMax + 0.0);
  else
    return (m_iBaseDamageMax
          + CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &this->m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_BASEATTACK_BONUSDAMAGE,
              &CModifierParams::s_Default));
}


// CDOTA_BaseNPC::SetBaseDamageMin  (line 649, @0x0000000002965d10, libserver.so)
void __fastcall CDOTA_BaseNPC::SetBaseDamageMin(CDOTA_BaseNPC *const this, int nMin)
{
  this->m_iBaseDamageMin = nMin;
}


// CDOTA_BaseNPC::SetBaseDamageMax  (line 650, @0x0000000002965d20, libserver.so)
void __fastcall CDOTA_BaseNPC::SetBaseDamageMax(CDOTA_BaseNPC *const this, int nMax)
{
  this->m_iBaseDamageMax = nMax;
}


// CDOTA_BaseNPC::SetPhysicalArmorBaseValue  (line 665, @0x000000000296da50, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CDOTA_BaseNPC::SetPhysicalArmorBaseValue(
        CDOTA_BaseNPC *const this,
        double a2,
        float flPhysicalArmorValue)
{
  float flPhysicalArmorValuea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flPhysicalArmorValue.m_Value )
  {
    flPhysicalArmorValuea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 2424, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flPhysicalArmorValue);
    this->m_flPhysicalArmorValue.m_Value = flPhysicalArmorValuea;
  }
}


// CDOTA_BaseNPC::SetBaseMagicalResistanceValue  (line 668, @0x000000000296d9f0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CDOTA_BaseNPC::SetBaseMagicalResistanceValue(
        CDOTA_BaseNPC *const this,
        double a2,
        float flMagicalResistanceValue)
{
  float flMagicalResistanceValuea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flMagicalResistanceValue.m_Value )
  {
    flMagicalResistanceValuea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 2428, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flMagicalResistanceValue);
    this->m_flMagicalResistanceValue.m_Value = flMagicalResistanceValuea;
  }
}


// CDOTA_BaseNPC::GetStatsBasedManaRegen  (line 672, @0x0000000002624550, libserver.so)
float __fastcall CDOTA_BaseNPC::GetStatsBasedManaRegen(CDOTA_BaseNPC *const this)
{
  return 0.0;
}


// CDOTA_BaseNPC::SetBaseHealthRegen  (line 678, @0x0000000002965d30, libserver.so)
void __fastcall CDOTA_BaseNPC::SetBaseHealthRegen(CDOTA_BaseNPC *const this, float a2, float flHealthRegen)
{
  this->m_flHealthRegen = a2;
}


// CDOTA_BaseNPC::GetBaseHealthRegen  (line 679, @0x0000000002624560, libserver.so)
float __fastcall CDOTA_BaseNPC::GetBaseHealthRegen(CDOTA_BaseNPC *const this)
{
  return this->m_flHealthRegen;
}


// CDOTA_BaseNPC::SetBaseManaRegen  (line 683, @0x0000000002965d40, libserver.so)
void __fastcall CDOTA_BaseNPC::SetBaseManaRegen(CDOTA_BaseNPC *const this, float a2, float flManaRegen)
{
  this->m_flManaRegen = a2;
}


// CDOTA_BaseNPC::GetManaRegen  (line 684, @0x0000000002624570, libserver.so)
float __fastcall CDOTA_BaseNPC::GetManaRegen(CDOTA_BaseNPC *const this)
{
  return this->m_flManaRegen;
}


// CDOTA_BaseNPC::GetManaThinkRegen  (line 685, @0x0000000002624580, libserver.so)
float __fastcall CDOTA_BaseNPC::GetManaThinkRegen(CDOTA_BaseNPC *const this)
{
  return this->m_flManaThinkRegen.m_Value;
}


// CDOTA_BaseNPC::SetBaseMoveSpeed  (line 687, @0x000000000296ca10, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
void __fastcall CDOTA_BaseNPC::SetBaseMoveSpeed(CDOTA_BaseNPC *const this, int iMoveSpeed)
{
  if ( this->m_iMoveSpeed.m_Value != iMoveSpeed )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2280, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iMoveSpeed.m_Value = iMoveSpeed;
  }
}


// CDOTA_BaseNPC::RequireFacingForActions  (line 689, @0x0000000002624590, libserver.so)
bool __fastcall CDOTA_BaseNPC::RequireFacingForActions(CDOTA_BaseNPC *const this)
{
  return 1;
}


// CDOTA_BaseNPC::SetBaseAttackTime  (line 692, @0x0000000002965d50, libserver.so)
void __fastcall CDOTA_BaseNPC::SetBaseAttackTime(CDOTA_BaseNPC *const this, float a2, float flBaseAttackTime)
{
  this->m_flBaseAttackTime = a2;
}


// CDOTA_BaseNPC::IsIllusion  (line 717, @0x0000000002965d60, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsIllusion(const CDOTA_BaseNPC *const this)
{
  return this->m_bIsIllusion.m_Value;
}


// CDOTA_BaseNPC::MakeIllusion  (line 718, @0x000000000296d9b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTA_BaseNPC::MakeIllusion(CDOTA_BaseNPC *const this)
{
  if ( !this->m_bIsIllusion.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3416, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsIllusion.m_Value = 1;
  }
}


// CDOTA_BaseNPC::IsTempestDouble  (line 721, @0x000000000296df10, libserver.so)  // inlines: GetModifier_Constant_First, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_First_Internal
bool __fastcall CDOTA_BaseNPC::IsTempestDouble(CDOTA_BaseNPC *const this)
{
  bool v1; // bl
  __int64 v2; // rax

  v1 = 0;
  v2 = this->m_ModifierManager.m_buffsForModifiers[166];
  if ( v2 != 0xFF && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v2].m_Size > 0 )
    return CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
             &this->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
             &CModifierParams::s_Default) == 1.0;
  return v1;
}


// CDOTA_BaseNPC::IsTemporaryHero  (line 723, @0x000000000263d700, libserver.so)  // inlines: GetModifier_Constant_First, IsIllusion, IsListeningToEvent, IsSpecialIllusion, IsTempestDouble
// calls: CDOTA_ModifierManager::GetModifier_Constant_First_Internal
// globals: CModifierParams::s_Default
bool __fastcall CDOTA_BaseNPC::IsTemporaryHero(CDOTA_BaseNPC *const this)
{
  CDOTA_BaseNPC::NetworkVar_m_ModifierManager *p_m_ModifierManager; // r12
  __int64 v3; // rax
  __int64 v5; // rax

  p_m_ModifierManager = &this->m_ModifierManager;
  v3 = this->m_ModifierManager.m_buffsForModifiers[108];
  if ( v3 != 0xFF
    && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v3].m_Size > 0
    && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
         &this->m_ModifierManager,
         modifierfunction::MODIFIER_PROPERTY_SUPER_ILLUSION,
         &CModifierParams::s_Default) == 1.0 )
  {
    return 1;
  }
  v5 = this->m_ModifierManager.m_buffsForModifiers[166];
  return v5 != 0xFF
      && this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v5].m_Size > 0
      && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
           p_m_ModifierManager,
           modifierfunction::MODIFIER_PROPERTY_TEMPEST_DOUBLE,
           &CModifierParams::s_Default) == 1.0
      || this->m_bIsIllusion.m_Value;
}


// CDOTA_BaseNPC::IsReincarnating  (line 727, @0x00000000026245a0, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsReincarnating(CDOTA_BaseNPC *const this)
{
  return 0;
}


// CDOTA_BaseNPC::Script_StartGesture  (line 736, @0x0000000002990280, libserver.so)
// calls: CDOTA_BaseNPC::StartGesture
void __fastcall CDOTA_BaseNPC::Script_StartGesture(CDOTA_BaseNPC *const this, int nActivity)
{
  CDOTA_BaseNPC::StartGesture(this, nActivity, 0.1, 0.1, 9, 0, 1.0);
}


// CDOTA_BaseNPC::Script_StartGestureWithPlaybackRate  (line 737, @0x0000000002990260, libserver.so)
// calls: CDOTA_BaseNPC::StartGesture
void __fastcall CDOTA_BaseNPC::Script_StartGestureWithPlaybackRate(
        CDOTA_BaseNPC *const this,
        Activity nActivity,
        float a3,
        float flRate)
{
  CDOTA_BaseNPC::StartGesture(this, nActivity, 0.1, 0.1, 9, 0, a3);
}


// CDOTA_BaseNPC::Script_RemoveGesture  (line 738, @0x000000000298db10, libserver.so)
// calls: CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_BaseNPC::Script_RemoveGesture(CDOTA_BaseNPC *const this, int nActivity)
{
  CDOTA_BaseNPC::RemoveGesture(this, nActivity);
}


// CDOTA_BaseNPC::Script_FadeGesture  (line 739, @0x000000000298db00, libserver.so)
// calls: CDOTA_BaseNPC::FadeGesture
void __fastcall CDOTA_BaseNPC::Script_FadeGesture(CDOTA_BaseNPC *const this, int nActivity)
{
  CDOTA_BaseNPC::FadeGesture(this, nActivity);
}


// CDOTA_BaseNPC::UsedGestureBasedAttackAnimation  (line 749, @0x00000000026245b0, libserver.so)
bool __fastcall CDOTA_BaseNPC::UsedGestureBasedAttackAnimation(CDOTA_BaseNPC *const this)
{
  return 0;
}


// CDOTA_BaseNPC::GetOverrideAbilityForCastAttackAnimation  (line 750, @0x00000000026245c0, libserver.so)
const char *__fastcall CDOTA_BaseNPC::GetOverrideAbilityForCastAttackAnimation(CDOTA_BaseNPC *const this)
{
  return 0;
}


// CDOTA_BaseNPC::Script_FindAbilityByName  (line 789, @0x0000000002982240, libserver.so)  // inlines: EntityToHScript, Get, GetPublicScriptScope, ToHScript
// calls: CDOTA_BaseNPC::FindAbilityByName, CEntityInstance::CreatePublicScriptScope
HSCRIPT __fastcall CDOTA_BaseNPC::Script_FindAbilityByName(CDOTA_BaseNPC *const this, const char *pAbilityName)
{
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v4; // [rsp+8h] [rbp-8h]

  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, pAbilityName, 0);
  if ( AbilityByName == 0 )
    return 0;
  if ( AbilityByName->m_pEntity->m_hPublicScope.m_hScope != 0 )
    return AbilityByName->m_pEntity->m_hPublicScope.m_hScope;
  v4 = AbilityByName;
  CEntityInstance::CreatePublicScriptScope(AbilityByName, 0);
  return v4->m_pEntity->m_hPublicScope.m_hScope;
}


// CDOTA_BaseNPC::Script_SetOrigin  (line 840, @0x000000000296b650, libserver.so)
// calls: CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_BaseNPC::Script_SetOrigin(CDOTA_BaseNPC *const this, double a2, vec_t a3)
{
  Vector vLocationa; // [rsp+0h] [rbp-10h] BYREF

  *&vLocationa.x = a2;
  vLocationa.z = a3;
  CBaseEntity::SetAbsOrigin(this, &vLocationa);
}


// CDOTA_BaseNPC::SetCursorPosition  (line 857, @0x0000000002965d70, libserver.so)  // inlines: operator=
void __fastcall CDOTA_BaseNPC::SetCursorPosition(CDOTA_BaseNPC *const this, double a2, vec_t a3)
{
  this->m_vCursorLocation.z = a3;
  *&this->m_vCursorLocation.x = a2;
}


// CDOTA_BaseNPC::SetCursorTargetingNothing  (line 858, @0x0000000002965da0, libserver.so)
void __fastcall CDOTA_BaseNPC::SetCursorTargetingNothing(CDOTA_BaseNPC *const this, bool bTargetingNothing)
{
  this->m_bCursorTargetingNothing = bTargetingNothing;
}


// CDOTA_BaseNPC::Script_GetCursorCastTarget  (line 861, @0x0000000002970270, libserver.so)  // inlines: EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_BaseNPC::Script_GetCursorCastTarget(CDOTA_BaseNPC *const this)
{
  uint32 m_Index; // edx
  HSCRIPT result; // rax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_hCursorTarget.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCursorTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hCursorTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( result == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v4->m_pInstance, 0);
            return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
  }
  return result;
}


// CDOTA_BaseNPC::GetCursorTargetingNothing  (line 863, @0x0000000002965db0, libserver.so)
bool __fastcall CDOTA_BaseNPC::GetCursorTargetingNothing(CDOTA_BaseNPC *const this)
{
  return this->m_bCursorTargetingNothing;
}


// CDOTA_BaseNPC::HasInventory  (line 870, @0x0000000002965dc0, libserver.so)
bool __fastcall CDOTA_BaseNPC::HasInventory(CDOTA_BaseNPC *const this)
{
  return this->m_bHasInventory;
}


// CDOTA_BaseNPC::SetHasInventory  (line 871, @0x0000000002965dd0, libserver.so)
void __fastcall CDOTA_BaseNPC::SetHasInventory(CDOTA_BaseNPC *const this, bool bHasInventory)
{
  this->m_bHasInventory = bHasInventory;
}


// CDOTA_BaseNPC::IsRooted  (line 890, @0x0000000002965de0, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsRooted(const CDOTA_BaseNPC *const this)
{
  return this->m_nUnitState64.m_Value & 1;
}


// CDOTA_BaseNPC::IsDisarmed  (line 891, @0x0000000002965df0, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsDisarmed(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 2) != 0;
}


// CDOTA_BaseNPC::IsAttackImmune  (line 892, @0x0000000002965e10, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsAttackImmune(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 4) != 0;
}


// CDOTA_BaseNPC::IsSilenced  (line 893, @0x0000000002965e30, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsSilenced(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 8) != 0;
}


// CDOTA_BaseNPC::IsMuted  (line 894, @0x0000000002965e50, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsMuted(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x10) != 0;
}


// CDOTA_BaseNPC::IsStunned  (line 895, @0x0000000002965e70, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsStunned(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x20) != 0;
}


// CDOTA_BaseNPC::IsHexed  (line 896, @0x0000000002965e90, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsHexed(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x40) != 0;
}


// CDOTA_BaseNPC::IsInvisible  (line 897, @0x0000000002965eb0, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsInvisible(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x80) != 0;
}


// CDOTA_BaseNPC::IsInvulnerable  (line 898, @0x000000000296db60, libserver.so)  // inlines: InState, IsWaitingToSpawn
bool __fastcall CDOTA_BaseNPC::IsInvulnerable(const CDOTA_BaseNPC *const this)
{
  bool result; // al

  result = this->m_bIsWaitingToSpawn.m_Value;
  if ( !result )
    return (this->m_nUnitState64.m_Value & 0x100) != 0;
  return result;
}


// CDOTA_BaseNPC::IsInvulnerable  (line 898, @0x0000000002b3c920, libserver.so)  // inlines: InState
// callers: CDOTA_Modifier_ForgedSpirit_MeltingStrike::OnAttacked, CDOTA_Modifier_Broodmother_IncapacitatingBite::OnAttackLanded, CDOTA_Modifier_Enchantress_Impetus::OnAttackLanded, CDOTA_Modifier_Huskar_Burning_Spear_Self::OnAttackLanded, CDOTA_Modifier_Jakiro_LiquidFire::OnAttackLanded, CDOTA_Ability_Huskar_Life_Break::OnProjectileHit, CDOTA_Modifier_Enchantress_Impetus::OnAttack, CDOTA_Modifier_Huskar_Burning_Spear_Self::OnAttack, CDOTA_Modifier_Jakiro_LiquidFire::OnAttack
bool __fastcall CDOTA_BaseNPC::IsInvulnerable(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x100) != 0;
}


// CDOTA_BaseNPC::IsMagicImmune  (line 899, @0x0000000002965ed0, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsMagicImmune(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x200) != 0;
}


// CDOTA_BaseNPC::NoUnitCollision  (line 900, @0x0000000002965ef0, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::NoUnitCollision(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x2000000) != 0;
}


// CDOTA_BaseNPC::ProvidesVision  (line 901, @0x000000000296b9c0, libserver.so)  // inlines: GetBool, GetInt
// calls: CDOTA_ModifierManager::GetHighestPriority
bool __fastcall CDOTA_BaseNPC::ProvidesVision(CDOTA_BaseNPC *const this)
{
  unsigned __int64 m_Value; // rdx
  bool result; // al

  m_Value = this->m_nUnitState64.m_Value;
  if ( dota_all_vision.m_pParent->m_Value.m_nValue != 0 || (result = 0, (m_Value & 0x400) != 0) )
  {
    result = 1;
    if ( (m_Value & 0x80) != 0 )
      return CDOTA_ModifierManager::GetHighestPriority(
               &this->m_ModifierManager,
               modifierstate::MODIFIER_STATE_INVISIBLE,
               0) != 3;
  }
  return result;
}


// CDOTA_BaseNPC::IsNightmared  (line 902, @0x0000000002965f10, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsNightmared(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x800) != 0;
}


// CDOTA_BaseNPC::IsBlockDisabled  (line 903, @0x0000000002965f30, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsBlockDisabled(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x1000) != 0;
}


// CDOTA_BaseNPC::IsEvadeDisabled  (line 904, @0x0000000002965f50, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsEvadeDisabled(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x2000) != 0;
}


// CDOTA_BaseNPC::IsUnselectable  (line 905, @0x000000000296db80, libserver.so)  // inlines: InState, IsWaitingToSpawn
bool __fastcall CDOTA_BaseNPC::IsUnselectable(const CDOTA_BaseNPC *const this)
{
  bool result; // al

  result = this->m_bIsWaitingToSpawn.m_Value;
  if ( !result )
    return (this->m_nUnitState64.m_Value & 0x4000) != 0;
  return result;
}


// CDOTA_BaseNPC::IsUnableToMiss  (line 907, @0x0000000002965f70, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsUnableToMiss(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x10000) != 0;
}


// CDOTA_BaseNPC::IsSpeciallyDeniable  (line 908, @0x0000000002965f90, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsSpeciallyDeniable(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x20000) != 0;
}


// CDOTA_BaseNPC::IsCommandRestricted  (line 909, @0x0000000002965fb0, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsCommandRestricted(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x80000) != 0;
}


// CDOTA_BaseNPC::NotOnMinimap  (line 910, @0x000000000296ba50, libserver.so)  // inlines: InState, IsWaitingToSpawn
bool __fastcall CDOTA_BaseNPC::NotOnMinimap(const CDOTA_BaseNPC *const this)
{
  bool result; // al

  result = this->m_bIsWaitingToSpawn.m_Value;
  if ( !result )
    return (this->m_nUnitState64.m_Value & 0x100000) != 0;
  return result;
}


// CDOTA_BaseNPC::NotOnMinimapForEnemies  (line 911, @0x0000000002965fd0, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::NotOnMinimapForEnemies(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x200000) != 0;
}


// CDOTA_BaseNPC::IsLowAttackPriority  (line 912, @0x0000000002965ff0, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsLowAttackPriority(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x400000) != 0;
}


// CDOTA_BaseNPC::NoHealthBar  (line 913, @0x000000000296ba30, libserver.so)  // inlines: InState, IsWaitingToSpawn
bool __fastcall CDOTA_BaseNPC::NoHealthBar(const CDOTA_BaseNPC *const this)
{
  bool result; // al

  result = this->m_bIsWaitingToSpawn.m_Value;
  if ( !result )
    return (this->m_nUnitState64.m_Value & 0x800000) != 0;
  return result;
}


// CDOTA_BaseNPC::NoTeamSelect  (line 914, @0x0000000002966010, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::NoTeamSelect(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x8000000) != 0;
}


// CDOTA_BaseNPC::PassivesDisabled  (line 915, @0x0000000002966030, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::PassivesDisabled(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x10000000) != 0;
}


// CDOTA_BaseNPC::IsDominated  (line 916, @0x0000000002966050, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsDominated(const CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x20000000) != 0;
}


// CDOTA_BaseNPC::IsBlind  (line 917, @0x000000000296ba10, libserver.so)  // inlines: InState, IsWaitingToSpawn
bool __fastcall CDOTA_BaseNPC::IsBlind(const CDOTA_BaseNPC *const this)
{
  bool result; // al

  result = this->m_bIsWaitingToSpawn.m_Value;
  if ( !result )
    return (this->m_nUnitState64.m_Value & 0x40000000) != 0;
  return result;
}


// CDOTA_BaseNPC::IsOutOfGame  (line 918, @0x0000000002966070, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsOutOfGame(CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x80000000) != 0;
}


// CDOTA_BaseNPC::IsFrozen  (line 924, @0x00000000026245d0, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::IsFrozen(CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x40000) != 0;
}


// CDOTA_BaseNPC::NoTeamMoveTo  (line 926, @0x00000000026245f0, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::NoTeamMoveTo(CDOTA_BaseNPC *const this)
{
  return (this->m_nUnitState64.m_Value & 0x4000000) != 0;
}


// CDOTA_BaseNPC::SetStolenScepter  (line 936, @0x000000000296d970, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTA_BaseNPC::SetStolenScepter(CDOTA_BaseNPC *const this, bool bStolenScepter)
{
  if ( this->m_bStolenScepter.m_Value != bStolenScepter )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4004, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bStolenScepter.m_Value = bStolenScepter;
  }
}


// CDOTA_BaseNPC::GetAttackCapability  (line 938, @0x0000000002966090, libserver.so)
int __fastcall CDOTA_BaseNPC::GetAttackCapability(CDOTA_BaseNPC *const this)
{
  return this->m_iAttackCapabilities.m_Value;
}


// CDOTA_BaseNPC::SetAttackCapability  (line 939, @0x000000000296c990, libserver.so)  // inlines: NetworkStateChanged, Set
void __fastcall CDOTA_BaseNPC::SetAttackCapability(CDOTA_BaseNPC *const this, int iAttackCapabilities)
{
  if ( this->m_iAttackCapabilities.m_Value != iAttackCapabilities )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2436, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iAttackCapabilities.m_Value = iAttackCapabilities;
  }
}


// CDOTA_BaseNPC::SetMoveCapability  (line 940, @0x00000000029660a0, libserver.so)
void __fastcall CDOTA_BaseNPC::SetMoveCapability(CDOTA_BaseNPC *const this, int iMoveCapabilities)
{
  this->m_iMoveCapabilities = iMoveCapabilities;
}


// CDOTA_BaseNPC::HasGroundMovementCapability  (line 942, @0x00000000029660b0, libserver.so)
bool __fastcall CDOTA_BaseNPC::HasGroundMovementCapability(CDOTA_BaseNPC *const this)
{
  return this->m_iMoveCapabilities & 1;
}


// CDOTA_BaseNPC::HasFlyMovementCapability  (line 943, @0x000000000296dd60, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::HasFlyMovementCapability(CDOTA_BaseNPC *const this)
{
  bool result; // al

  result = 1;
  if ( (this->m_iMoveCapabilities & 2) == 0 )
    return BYTE3(this->m_nUnitState64.m_Value) & 1 | ((this->m_nUnitState64.m_Value & 0x200000000LL) != 0);
  return result;
}


// CDOTA_BaseNPC::HasMovementCapability  (line 944, @0x0000000002567950, libserver.so)  // inlines: HasFlyMovementCapability, InState
// callers: DOTA_ExecuteOrders
bool __fastcall CDOTA_BaseNPC::HasMovementCapability(CDOTA_BaseNPC *const this)
{
  bool result; // al

  result = 1;
  if ( (this->m_iMoveCapabilities & 3) == 0 )
    return BYTE3(this->m_nUnitState64.m_Value) & 1 | ((this->m_nUnitState64.m_Value & 0x200000000LL) != 0);
  return result;
}


// CDOTA_BaseNPC::HasAttackCapability  (line 945, @0x00000000029660c0, libserver.so)
bool __fastcall CDOTA_BaseNPC::HasAttackCapability(CDOTA_BaseNPC *const this)
{
  bool result; // al

  result = 1;
  if ( (this->m_iAttackCapabilities.m_Value & 1) == 0 )
    return (this->m_iAttackCapabilities.m_Value & 2) != 0;
  return result;
}


// CDOTA_BaseNPC::HasFlyingVision  (line 949, @0x0000000002633bc0, libserver.so)  // inlines: InState
bool __fastcall CDOTA_BaseNPC::HasFlyingVision(CDOTA_BaseNPC *const this)
{
  bool result; // al

  result = 1;
  if ( (this->m_iMoveCapabilities & 2) == 0 )
    return (this->m_nUnitState64.m_Value & 0x1000000) != 0;
  return result;
}


// CDOTA_BaseNPC::OnAggressiveStanceUpdated  (line 954, @0x0000000002624610, libserver.so)
void __fastcall CDOTA_BaseNPC::OnAggressiveStanceUpdated(CDOTA_BaseNPC *const this, bool bAggressive)
{
  ;
}


// CDOTA_BaseNPC::IsRangedAttacker  (line 957, @0x00000000029660e0, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsRangedAttacker(CDOTA_BaseNPC *const this)
{
  return (this->m_iAttackCapabilities.m_Value & 2) != 0;
}


// CDOTA_BaseNPC::GetProjectileSpeed  (line 958, @0x000000000296e460, libserver.so)  // inlines: GetModifier_Constant_Additive, IsListeningToEvent
// calls: CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
int __fastcall CDOTA_BaseNPC::GetProjectileSpeed(CDOTA_BaseNPC *const this)
{
  __int64 v1; // rax
  float m_iProjectileMoveSpeed; // xmm1_4

  v1 = this->m_ModifierManager.m_buffsForModifiers[72];
  m_iProjectileMoveSpeed = this->m_iProjectileMoveSpeed;
  if ( v1 == 0xFF || this->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v1].m_Size <= 0 )
    return (m_iProjectileMoveSpeed + 0.0);
  else
    return (CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &this->m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS,
              &CModifierParams::s_Default)
          + m_iProjectileMoveSpeed);
}


// CDOTA_BaseNPC::SetRangedProjectileName  (line 960, @0x000000000296b590, libserver.so)  // inlines: operator=
// calls: MakeEntitySystemString
void __fastcall CDOTA_BaseNPC::SetRangedProjectileName(CDOTA_BaseNPC *const this, const char *pProjectileName)
{
  UtlSymLargeId_t v3; // [rsp+0h] [rbp-20h]

  MakeEntitySystemString(pProjectileName);
  this->m_iszAutoAttackRangedParticle.u.m_Id = v3;
}


// CDOTA_BaseNPC::Script_GetRangedProjectileName  (line 963, @0x0000000002966100, libserver.so)  // inlines: String, ToCStr
const char *__fastcall CDOTA_BaseNPC::Script_GetRangedProjectileName(CDOTA_BaseNPC *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_iszAutoAttackRangedParticle.u.m_Id != 0 )
    return this->m_iszAutoAttackRangedParticle.u.m_pAsString;
  return result;
}


// CDOTA_BaseNPC::GetUnitName  (line 968, @0x0000000002966120, libserver.so)  // inlines: String, ToCStr
const char *__fastcall CDOTA_BaseNPC::GetUnitName(const CDOTA_BaseNPC *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
    return this->m_iszUnitName.m_Value.u.m_pAsString;
  return result;
}


// CDOTA_BaseNPC::GetUnitLabel  (line 973, @0x000000000296a570, libserver.so)  // inlines: operator char const*
// calls: CUtlString::Get
const char *__fastcall CDOTA_BaseNPC::GetUnitLabel(CDOTA_BaseNPC *const this)
{
  return CUtlString::Get(&this->m_szUnitLabel);
}


// CDOTA_BaseNPC::GetLastAttackTime  (line 984, @0x0000000002966140, libserver.so)
float __fastcall CDOTA_BaseNPC::GetLastAttackTime(CDOTA_BaseNPC *const this)
{
  return this->m_flLastAttackTime;
}


// CDOTA_BaseNPC::Script_IsAttackingEntity  (line 996, @0x0000000002970a50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, HScriptToEntity<CBaseEntity>, IndexToIdentity, IsValid, LookupEntity, ToEnt, operator CEntityInstance*
// calls: GetScriptDesc<CEntityInstance>
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BaseNPC::Script_IsAttackingEntity(CDOTA_BaseNPC *const this, HSCRIPT hEntity)
{
  CEntityInstance *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  __int64 (__fastcall *v7)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v9; // rax

  m_pInstance = 0;
  m_Index = this->m_hAttackTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttackTarget.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hAttackTarget.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( hEntity != 0 )
  {
    v7 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v9 = v7(g_pScriptVM, hEntity, Script);
  }
  else
  {
    v9 = 0;
  }
  return m_pInstance == v9;
}


// CDOTA_BaseNPC::IsAttacking  (line 997, @0x0000000002970770, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_BaseNPC::IsAttacking(CDOTA_BaseNPC *const this)
{
  bool result; // al
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  result = 0;
  m_Index = this->m_hAttackTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttackTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hAttackTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        return v4->m_pInstance != 0;
    }
  }
  return result;
}


// CDOTA_BaseNPC::SetAttacking  (line 998, @0x0000000002624620, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
void __fastcall CDOTA_BaseNPC::SetAttacking(CDOTA_BaseNPC *const this, CBaseEntity *pAttackTarget)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx

  if ( pAttackTarget != 0 && (m_pEntity = pAttackTarget->m_pEntity) != 0 )
  {
    v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v4 = 0x7FFF;
    else
      v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hAttackTarget.m_Index) = v4 | this->m_hAttackTarget.m_Index & 0x8000;
    this->m_hAttackTarget.m_Index = (v3 << 15) | this->m_hAttackTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hAttackTarget.m_Index = -1;
  }
}


// CDOTA_BaseNPC::Script_SetAttacking  (line 999, @0x0000000002970300, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, HScriptToEntity<CBaseEntity>, Set, ToEnt, operator=
// calls: GetScriptDesc<CEntityInstance>
void __fastcall CDOTA_BaseNPC::Script_SetAttacking(CDOTA_BaseNPC *const this, HSCRIPT hAttackTarget)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int16 v9; // cx

  if ( hAttackTarget != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hAttackTarget, Script)) != 0)
    && (v7 = *(v6 + 8)) != 0 )
  {
    v8 = (*(v7 + 16) >> 15) - (*(v7 + 48) & 1);
    if ( *(v7 + 16) == -1 )
      v9 = 0x7FFF;
    else
      v9 = *(v7 + 16) & 0x7FFF;
    LOWORD(this->m_hAttackTarget.m_Index) = v9 | this->m_hAttackTarget.m_Index & 0x8000;
    this->m_hAttackTarget.m_Index = (v8 << 15) | this->m_hAttackTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hAttackTarget.m_Index = -1;
  }
}


// CDOTA_BaseNPC::Script_GetAttackTarget  (line 1001, @0x00000000029707d0, libserver.so)  // inlines: EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_BaseNPC::Script_GetAttackTarget(CDOTA_BaseNPC *const this)
{
  uint32 m_Index; // edx
  HSCRIPT result; // rax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_hAttackTarget.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttackTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hAttackTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( result == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v4->m_pInstance, 0);
            return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
  }
  return result;
}


// CDOTA_BaseNPC::Script_GetAggroTarget  (line 1004, @0x00000000029708f0, libserver.so)  // inlines: EntityToHScript, Get, GetAggroTarget, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToHScript, operator CBaseEntity*, operator CEntityInstance*
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_BaseNPC::Script_GetAggroTarget(CDOTA_BaseNPC *const this)
{
  uint32 m_Index; // edx
  HSCRIPT result; // rax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_hAggroTarget.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAggroTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hAggroTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( result == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v4->m_pInstance, 0);
            return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
  }
  return result;
}


// CDOTA_BaseNPC::Script_SetAggroTarget  (line 1006, @0x00000000029773e0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CDOTA_BaseNPC::SetAggroTarget
void __fastcall CDOTA_BaseNPC::Script_SetAggroTarget(CDOTA_BaseNPC *const this, HSCRIPT hAggroTarget)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v6; // rax

  if ( hAggroTarget != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hAggroTarget, Script)) != 0)
    && v6->m_bIsDOTANPC )
  {
    CDOTA_BaseNPC::SetAggroTarget(this, v6);
  }
  else
  {
    CDOTA_BaseNPC::SetAggroTarget(this, 0);
  }
}


// CDOTA_BaseNPC::GetAdditionalBattleMusicWeight  (line 1023, @0x0000000002966150, libserver.so)
float __fastcall CDOTA_BaseNPC::GetAdditionalBattleMusicWeight(const CDOTA_BaseNPC *const this)
{
  return this->m_flAdditionalBattleMusicWeight;
}


// CDOTA_BaseNPC::SetAdditionalBattleMusicWeight  (line 1024, @0x0000000002966160, libserver.so)
void __fastcall CDOTA_BaseNPC::SetAdditionalBattleMusicWeight(CDOTA_BaseNPC *const this, float a2, float flWeight)
{
  this->m_flAdditionalBattleMusicWeight = a2 + this->m_flAdditionalBattleMusicWeight;
}


// CDOTA_BaseNPC::Script_GetForceAttackTarget  (line 1028, @0x00000000029701e0, libserver.so)  // inlines: EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_BaseNPC::Script_GetForceAttackTarget(CDOTA_BaseNPC *const this)
{
  uint32 m_Index; // edx
  HSCRIPT result; // rax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_hForceAttackTarget.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hForceAttackTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hForceAttackTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( result == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v4->m_pInstance, 0);
            return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
  }
  return result;
}


// CDOTA_BaseNPC::Script_SetForceAttackTarget  (line 1030, @0x00000000029767b0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, HScriptToEntity<CBaseEntity>, Set, ToEnt, operator=
// calls: GetScriptDesc<CEntityInstance>, CDOTA_BaseNPC::UpdatePseudoQueuedOrder
void __fastcall CDOTA_BaseNPC::Script_SetForceAttackTarget(CDOTA_BaseNPC *const this, HSCRIPT hNPC)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int16 v9; // cx

  if ( hNPC != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hNPC, Script)) != 0)
    && (v7 = *(v6 + 8)) != 0 )
  {
    v8 = (*(v7 + 16) >> 15) - (*(v7 + 48) & 1);
    if ( *(v7 + 16) == -1 )
      v9 = 0x7FFF;
    else
      v9 = *(v7 + 16) & 0x7FFF;
    LOWORD(this->m_hForceAttackTarget.m_Index) = v9 | this->m_hForceAttackTarget.m_Index & 0x8000;
    this->m_hForceAttackTarget.m_Index = (v8 << 15) | this->m_hForceAttackTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hForceAttackTarget.m_Index = -1;
  }
  CDOTA_BaseNPC::UpdatePseudoQueuedOrder(this, 1);
}


// CDOTA_BaseNPC::Script_GetRangeToUnit  (line 1047, @0x0000000002970570, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToDOTABaseNPC, ToEnt
// calls: GetScriptDesc<CEntityInstance>, CDOTA_BaseNPC::GetRangeToUnit
float __fastcall CDOTA_BaseNPC::Script_GetRangeToUnit(CDOTA_BaseNPC *const this, HSCRIPT hNPC)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  CDOTA_BaseNPC *v6; // rax

  if ( hNPC != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hNPC, Script)) != 0)
    && v6->m_bIsDOTANPC )
  {
    return CDOTA_BaseNPC::GetRangeToUnit(this, v6);
  }
  else
  {
    return CDOTA_BaseNPC::GetRangeToUnit(this, 0);
  }
}


// CDOTA_BaseNPC::ShouldIdleAcquire  (line 1082, @0x0000000002966180, libserver.so)
bool __fastcall CDOTA_BaseNPC::ShouldIdleAcquire(CDOTA_BaseNPC *const this)
{
  return this->m_bIdleAcquire;
}


// CDOTA_BaseNPC::SetIdleAcquire  (line 1083, @0x0000000002966190, libserver.so)
void __fastcall CDOTA_BaseNPC::SetIdleAcquire(CDOTA_BaseNPC *const this, bool bIdleAcquire)
{
  this->m_bIdleAcquire = bIdleAcquire;
}


// CDOTA_BaseNPC::AlwaysAutoAttack  (line 1084, @0x00000000026246a0, libserver.so)
bool __fastcall CDOTA_BaseNPC::AlwaysAutoAttack(CDOTA_BaseNPC *const this)
{
  return 0;
}


// CDOTA_BaseNPC::Script_FindModifierByName  (line 1101, @0x000000000296e4e0, libserver.so)  // inlines: FindModifierByName
// calls: ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, ToHScript
HSCRIPT __fastcall CDOTA_BaseNPC::Script_FindModifierByName(CDOTA_BaseNPC *const this, const char *pszScriptName)
{
  CModifieractoryDictionary *v4; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax

  v4 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v4, pszScriptName);
  ModifierByName = CDOTA_ModifierManager::FindModifierByName(&this->m_ModifierManager, Factory, pszScriptName, 0);
  return ToHScript(ModifierByName);
}


// CDOTA_BaseNPC::Script_FindModifierByNameAndCaster  (line 1102, @0x00000000029706d0, libserver.so)  // inlines: FindModifierByName, HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, ToHScript
HSCRIPT __fastcall CDOTA_BaseNPC::Script_FindModifierByNameAndCaster(
        CDOTA_BaseNPC *const this,
        const char *pszScriptName,
        HSCRIPT hCaster)
{
  __int64 (__fastcall *v6)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  CBaseEntity *v8; // r12
  CModifieractoryDictionary *v9; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax

  if ( hCaster != 0 )
  {
    v6 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v8 = v6(g_pScriptVM, hCaster, Script);
  }
  else
  {
    v8 = 0;
  }
  v9 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v9, pszScriptName);
  ModifierByName = CDOTA_ModifierManager::FindModifierByName(&this->m_ModifierManager, Factory, pszScriptName, v8);
  return ToHScript(ModifierByName);
}


// CDOTA_BaseNPC::IsPhantomBlocker  (line 1141, @0x00000000029661a0, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsPhantomBlocker(CDOTA_BaseNPC *const this)
{
  return this->m_bIsPhantomBlocker;
}


// CDOTA_BaseNPC::GetObstructionRadius  (line 1143, @0x00000000026246b0, libserver.so)
float __fastcall CDOTA_BaseNPC::GetObstructionRadius(CDOTA_BaseNPC *const this)
{
  return this->m_flHullRadius;
}


// CDOTA_BaseNPC::GetObstructionCollisionPadding  (line 1144, @0x00000000026246d0, libserver.so)
float __fastcall CDOTA_BaseNPC::GetObstructionCollisionPadding(CDOTA_BaseNPC *const this)
{
  return this->m_flCollisionPadding;
}


// CDOTA_BaseNPC::GetObstructionRelationshipClass  (line 1145, @0x00000000026246f0, libserver.so)
ObstructionRelationshipClass_t __fastcall CDOTA_BaseNPC::GetObstructionRelationshipClass(CDOTA_BaseNPC *const this)
{
  return this->m_ObstructionRelationshipClass;
}


// CDOTA_BaseNPC::GetObstructionName  (line 1146, @0x0000000002624710, libserver.so)  // inlines: GetUnitName, String, ToCStr
const char *__fastcall CDOTA_BaseNPC::GetObstructionName(CDOTA_BaseNPC *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_iszUnitName.m_Value.u.m_Id != 0 )
    return this->m_iszUnitName.m_Value.u.m_pAsString;
  return result;
}


// CDOTA_BaseNPC::GetObstructionBaseEntity  (line 1147, @0x0000000002624740, libserver.so)
CBaseEntity *__fastcall CDOTA_BaseNPC::GetObstructionBaseEntity(CDOTA_BaseNPC *const this)
{
  return this;
}


// CDOTA_BaseNPC::GetObstructionType  (line 1148, @0x0000000002624760, libserver.so)
ObstructionType_t __fastcall CDOTA_BaseNPC::GetObstructionType(CDOTA_BaseNPC *const this)
{
  return ObstructionType_t::cObstructionTypeCircle;
}


// CDOTA_BaseNPC::GetObstructionQuerySetClass  (line 1149, @0x0000000002624780, libserver.so)
ObstructionQuerySetClass_t __fastcall CDOTA_BaseNPC::GetObstructionQuerySetClass(CDOTA_BaseNPC *const this)
{
  return ObstructionQuerySetClass_t::DOTA_OBSTRUCTION_QUERY_DYNAMIC;
}


// CDOTA_BaseNPC::Script_SetOriginalModel  (line 1154, @0x000000000296b5c0, libserver.so)  // inlines: SetOriginalModel, operator=
// calls: MakeEntitySystemString
void __fastcall CDOTA_BaseNPC::Script_SetOriginalModel(CDOTA_BaseNPC *const this, const char *pszModelName)
{
  UtlSymLargeId_t v3; // [rsp+0h] [rbp-20h]

  MakeEntitySystemString(pszModelName);
  this->m_iszOriginalModel.u.m_Id = v3;
}


// CDOTA_BaseNPC::CanSpeak  (line 1166, @0x00000000026247a0, libserver.so)
bool __fastcall CDOTA_BaseNPC::CanSpeak(CDOTA_BaseNPC *const this, int iConcept)
{
  return 1;
}


// CDOTA_BaseNPC::AddCustomVisibility  (line 1193, @0x00000000026247b0, libserver.so)
void __fastcall CDOTA_BaseNPC::AddCustomVisibility(CDOTA_BaseNPC *const this)
{
  ;
}


// CDOTA_BaseNPC::PerformTaunt  (line 1195, @0x00000000026247c0, libserver.so)
void __fastcall CDOTA_BaseNPC::PerformTaunt(CDOTA_BaseNPC *const this)
{
  ;
}


// CDOTA_BaseNPC::OnHealthChanged  (line 1205, @0x00000000026247d0, libserver.so)
void __fastcall CDOTA_BaseNPC::OnHealthChanged(CDOTA_BaseNPC *const this)
{
  ;
}


// CDOTA_BaseNPC::WantsToSaveWithLifetime  (line 1212, @0x00000000026247e0, libserver.so)
bool __fastcall CDOTA_BaseNPC::WantsToSaveWithLifetime(CDOTA_BaseNPC *const this)
{
  return 0;
}


// CDOTA_BaseNPC::OnDying  (line 1216, @0x00000000026247f0, libserver.so)
void __fastcall CDOTA_BaseNPC::OnDying(CDOTA_BaseNPC *const this)
{
  ;
}


// CDOTA_BaseNPC::OnDeath  (line 1217, @0x0000000002624800, libserver.so)
void __fastcall CDOTA_BaseNPC::OnDeath(CDOTA_BaseNPC *const this)
{
  ;
}


// CDOTA_BaseNPC::OnAlive  (line 1218, @0x0000000002624810, libserver.so)
void __fastcall CDOTA_BaseNPC::OnAlive(CDOTA_BaseNPC *const this)
{
  ;
}


// CDOTA_BaseNPC::AttachAmbientEffects  (line 1219, @0x0000000002624820, libserver.so)
void __fastcall CDOTA_BaseNPC::AttachAmbientEffects(CDOTA_BaseNPC *const this)
{
  ;
}


// CDOTA_BaseNPC::ShouldPerformLean  (line 1225, @0x0000000002624830, libserver.so)
bool __fastcall CDOTA_BaseNPC::ShouldPerformLean(CDOTA_BaseNPC *const this)
{
  return this->m_nPoseParameterTurn != -1;
}


// CDOTA_BaseNPC::UnitCanRespawn  (line 1242, @0x0000000002624840, libserver.so)
bool __fastcall CDOTA_BaseNPC::UnitCanRespawn(CDOTA_BaseNPC *const this)
{
  return this->m_bCanRespawn;
}


// CDOTA_BaseNPC::SetUnitCanRespawn  (line 1243, @0x00000000029661b0, libserver.so)
void __fastcall CDOTA_BaseNPC::SetUnitCanRespawn(CDOTA_BaseNPC *const this, bool bCanRespawn)
{
  this->m_bCanRespawn = bCanRespawn;
}


// CDOTA_BaseNPC::GetCreationTime  (line 1258, @0x00000000029661c0, libserver.so)
float __fastcall CDOTA_BaseNPC::GetCreationTime(CDOTA_BaseNPC *const this)
{
  return this->m_flCreationTime;
}


// CDOTA_BaseNPC::AddNoDraw  (line 1271, @0x000000000296b5f0, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CDOTA_BaseNPC::AddNoDraw(CDOTA_BaseNPC *const this)
{
  CBaseEntity::AddEffects(this, 32);
}


// CDOTA_BaseNPC::RemoveNoDraw  (line 1272, @0x000000000296dd90, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CBaseEntity::DispatchUpdateTransmitState
void __fastcall CDOTA_BaseNPC::RemoveNoDraw(CDOTA_BaseNPC *const this)
{
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(this);
}


// CDOTA_BaseNPC::IsInventoryEnabled  (line 1276, @0x0000000002624850, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsInventoryEnabled(CDOTA_BaseNPC *const this)
{
  return 0;
}


// CDOTA_BaseNPC::UseServerSideAnimation  (line 1297, @0x0000000002624860, libserver.so)  // inlines: IsHero
bool __fastcall CDOTA_BaseNPC::UseServerSideAnimation(const CDOTA_BaseNPC *const this)
{
  return this->m_iUnitType & 1;
}


// CDOTA_BaseNPC::IsMoving  (line 1311, @0x0000000002624870, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsMoving(CDOTA_BaseNPC *const this)
{
  return this->m_bIsMoving.m_Value;
}


// CDOTA_BaseNPC::UpdateNonCacheableWearableData  (line 1334, @0x0000000002624880, libserver.so)
void __fastcall CDOTA_BaseNPC::UpdateNonCacheableWearableData(
        CDOTA_BaseNPC *const this,
        CEntitySpawnerContextBase *pSpawnContext)
{
  ;
}


// CDOTA_BaseNPC::Script_SetCursorCastTarget  (line 1351, @0x00000000029704a0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, HScriptToEntity<CBaseEntity>, Set, SetCursorCastTarget, ToEnt, operator=
// calls: GetScriptDesc<CEntityInstance>
void __fastcall CDOTA_BaseNPC::Script_SetCursorCastTarget(CDOTA_BaseNPC *const this, HSCRIPT hEntity)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int16 v9; // cx

  if ( hEntity != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hEntity, Script)) != 0)
    && (v7 = *(v6 + 8)) != 0 )
  {
    v8 = (*(v7 + 16) >> 15) - (*(v7 + 48) & 1);
    if ( *(v7 + 16) == -1 )
      v9 = 0x7FFF;
    else
      v9 = *(v7 + 16) & 0x7FFF;
    LOWORD(this->m_hCursorTarget.m_Index) = v9 | this->m_hCursorTarget.m_Index & 0x8000;
    this->m_hCursorTarget.m_Index = (v8 << 15) | this->m_hCursorTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hCursorTarget.m_Index = -1;
  }
}


// CDOTA_BaseNPC::ComputeOverriddenGeneratingItem  (line 1362, @0x0000000002624890, libserver.so)
CEconItemView *__fastcall CDOTA_BaseNPC::ComputeOverriddenGeneratingItem(
        CDOTA_BaseNPC *const this,
        const CEntityKeyValues *pKeyValues)
{
  return 0;
}


// CDOTA_BaseNPC::GetEconSpecifyingPlayerOverrideID  (line 1364, @0x00000000026248a0, libserver.so)
int __fastcall CDOTA_BaseNPC::GetEconSpecifyingPlayerOverrideID(CDOTA_BaseNPC *const this)
{
  return -1;
}


// CDOTA_BaseNPC::NetworkVar_m_ModifierManager::NetworkStateChanged  (line 1586, @0x00000000029661d0, libserver.so)  // inlines: DispatchNetworkStateChanged<CDOTA_BaseNPC>
void __fastcall CDOTA_BaseNPC::NetworkVar_m_ModifierManager::NetworkStateChanged(
        CDOTA_BaseNPC::NetworkVar_m_ModifierManager *const this)
{
  (*(*(this - 388) + 168LL))(this - 3104);
}


// CDOTA_BaseNPC::NetworkVar_m_ModifierManager::NetworkStateChangedLog  (line 1586, @0x00000000029661f0, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CDOTA_BaseNPC>
void __fastcall CDOTA_BaseNPC::NetworkVar_m_ModifierManager::NetworkStateChangedLog(
        const CDOTA_BaseNPC::NetworkVar_m_ModifierManager *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 388) + 184LL))(this - 3104, pVarName, pMsg);
}


// CDOTA_BaseNPC::NetworkVar_m_ModifierManager::NetworkStateChanged  (line 1586, @0x0000000002966210, libserver.so)  // inlines: DispatchNetworkStateChanged<CDOTA_BaseNPC>
void __fastcall CDOTA_BaseNPC::NetworkVar_m_ModifierManager::NetworkStateChanged(
        CDOTA_BaseNPC::NetworkVar_m_ModifierManager *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 388) + 176LL))(this - 3104, nLocalOffset + 3104, nArrayIndex, nPathIndex.m_Value);
}


// CDOTA_BaseNPC::NetworkVar_m_Inventory::NetworkStateChanged  (line 1627, @0x0000000002966240, libserver.so)  // inlines: DispatchNetworkStateChanged<CDOTA_BaseNPC>
void __fastcall CDOTA_BaseNPC::NetworkVar_m_Inventory::NetworkStateChanged(
        CDOTA_BaseNPC::NetworkVar_m_Inventory *const this)
{
  (*(*(this - 459) + 168LL))(this - 3672);
}


// CDOTA_BaseNPC::NetworkVar_m_Inventory::NetworkStateChangedLog  (line 1627, @0x0000000002966260, libserver.so)  // inlines: DispatchNetworkStateChangedLog<CDOTA_BaseNPC>
void __fastcall CDOTA_BaseNPC::NetworkVar_m_Inventory::NetworkStateChangedLog(
        const CDOTA_BaseNPC::NetworkVar_m_Inventory *const this,
        const char *pVarName,
        const char *pMsg)
{
  (*(*(this - 459) + 184LL))(this - 3672, pVarName, pMsg);
}


// CDOTA_BaseNPC::NetworkVar_m_Inventory::NetworkStateChanged  (line 1627, @0x0000000002966280, libserver.so)  // inlines: DispatchNetworkStateChanged<CDOTA_BaseNPC>
void __fastcall CDOTA_BaseNPC::NetworkVar_m_Inventory::NetworkStateChanged(
        CDOTA_BaseNPC::NetworkVar_m_Inventory *const this,
        uint32 nLocalOffset,
        int32 nArrayIndex,
        ChangeAccessorFieldPathIndex_t nPathIndex)
{
  (*(*(this - 459) + 176LL))(this - 3672, nLocalOffset + 3672, nArrayIndex, nPathIndex.m_Value);
}


// CDOTA_BaseNPC::ShouldDoFlyHeightVisual  (line 1717, @0x00000000026248b0, libserver.so)
bool __fastcall CDOTA_BaseNPC::ShouldDoFlyHeightVisual(CDOTA_BaseNPC *const this)
{
  return this->m_bShouldDoFlyHeightVisual.m_Value;
}


// CDOTA_BaseNPC::IsFlyingVisually  (line 1719, @0x0000000002631600, libserver.so)
bool __fastcall CDOTA_BaseNPC::IsFlyingVisually(CDOTA_BaseNPC *const this)
{
  return (*(this->_vptr_IHandleEntity + 488))(this) != 0 && (*(this->_vptr_IHandleEntity + 445))(this);
}


// CDOTA_BaseNPC::SetCustomHealthLabel  (line 1726, @0x000000000296dab0, libserver.so)  // inlines: Color, NetworkStateChanged, Set, SetColor, SetRawColor, V_strcpy_safe<256ul>, operator=
// calls: _V_strncpy
void __fastcall CDOTA_BaseNPC::SetCustomHealthLabel(CDOTA_BaseNPC *const this, const char *pLabel, int r, int g, int b)
{
  char v5; // r14
  unsigned __int8 v6; // r13
  int v8; // ebx
  unsigned int v9; // ebx

  v5 = g;
  v6 = b;
  v8 = r;
  _V_strncpy(&this->m_CustomHealthLabel, pLabel, 256);
  (*(this->_vptr_IHandleEntity + 22))(this, 4204, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  BYTE1(v8) = v5;
  v9 = (v6 << 16) | v8 & 0xFF00FFFF | 0xFF000000;
  if ( *&this->m_CustomHealthLabelColor != v9 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4460, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_CustomHealthLabelColor = v9;
  }
}


// CDOTA_BaseNPC::SetMustReachEachGoalEntity  (line 2046, @0x00000000029662b0, libserver.so)
void __fastcall CDOTA_BaseNPC::SetMustReachEachGoalEntity(CDOTA_BaseNPC *const this, bool must)
{
  this->m_bMustReachEachGoalEntity = must;
}


// CDOTA_BaseNPC::GetMustReachEachGoalEntity  (line 2051, @0x00000000029662c0, libserver.so)
bool __fastcall CDOTA_BaseNPC::GetMustReachEachGoalEntity(const CDOTA_BaseNPC *const this)
{
  return this->m_bMustReachEachGoalEntity;
}


// CDOTA_BaseNPC::Script_SetInitialGoalEntity  (line 2056, @0x00000000029703d0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, HScriptToEntity<CBaseEntity>, Set, SetInitialGoalEntity, ToEnt, operator=
// calls: GetScriptDesc<CEntityInstance>
void __fastcall CDOTA_BaseNPC::Script_SetInitialGoalEntity(CDOTA_BaseNPC *const this, HSCRIPT hGoal)
{
  __int64 (__fastcall *v4)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r14
  ScriptClassDesc_t *Script; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int16 v9; // cx

  if ( hGoal != 0
    && (v4 = *(*g_pScriptVM + 208LL),
        Script = GetScriptDesc<CEntityInstance>(0),
        (v6 = v4(g_pScriptVM, hGoal, Script)) != 0)
    && (v7 = *(v6 + 8)) != 0 )
  {
    v8 = (*(v7 + 16) >> 15) - (*(v7 + 48) & 1);
    if ( *(v7 + 16) == -1 )
      v9 = 0x7FFF;
    else
      v9 = *(v7 + 16) & 0x7FFF;
    LOWORD(this->m_initialGoalEntity.m_Index) = v9 | this->m_initialGoalEntity.m_Index & 0x8000;
    this->m_initialGoalEntity.m_Index = (v8 << 15) | this->m_initialGoalEntity.m_Index & 0x7FFF;
  }
  else
  {
    this->m_initialGoalEntity.m_Index = -1;
  }
}


// CDOTA_BaseNPC::Script_GetInitialGoalEntity  (line 2061, @0x0000000002970860, libserver.so)  // inlines: EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInitialGoalEntity, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CBaseEntity*, operator CEntityInstance*
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CDOTA_BaseNPC::Script_GetInitialGoalEntity(CDOTA_BaseNPC *const this)
{
  uint32 m_Index; // edx
  HSCRIPT result; // rax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_initialGoalEntity.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_initialGoalEntity.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_initialGoalEntity.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( result == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v4->m_pInstance, 0);
            return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
  }
  return result;
}


// CDOTA_BaseNPC_Additive::~CDOTA_BaseNPC_Additive  (line 2152, @0x00000000029830e0, libserver.so)
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Additive::~CDOTA_BaseNPC_Additive(CDOTA_BaseNPC_Additive *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Additive::~CDOTA_BaseNPC_Additive  (line 2152, @0x0000000002983120, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Additive::~CDOTA_BaseNPC_Additive(CDOTA_BaseNPC_Additive *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::DestructInstance  (line 2154, @0x00000000026248c0, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Additive>
void __fastcall CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::FreeInstance  (line 2154, @0x00000000026248e0, libserver.so)
void __fastcall CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::CanAllocate  (line 2154, @0x0000000002624900, libserver.so)
bool __fastcall CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::AllocateInstance  (line 2154, @0x000000000262dc00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4504);
  memset(v1, 0, 0x1198u);
  return v1;
}


// CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2154, @0x000000000262ef80, libserver.so)  // inlines: Schema_StaticBinding
// calls: CDOTA_BaseNPC_Additive::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass *const this)
{
  CDOTA_BaseNPC_Additive::Schema_VerifyBindingIsRegistered();
  return CDOTA_BaseNPC_Additive::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2154, @0x000000000262efa0, libserver.so)
// calls: CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass *const this)
{
  CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::ConstructInstance  (line 2154, @0x000000000262efc0, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, Construct<CDOTA_BaseNPC_Additive>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_42D9310;
    *(p + 236) = &off_42DA270;
    *(p + 257) = &off_42DA5A0;
  }
  return p;
}


// CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2154, @0x00000000026344b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2154, @0x0000000002635a30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Additive::GetEntityClassInfo  (line 2154, @0x000000000263b520, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, NextBotCombatCharacter::GetEntityClassInfo
// callers: CDOTA_NPC_DataDriven::GetEntityClassInternal, CDOTA_BaseNPC_Hero::GetEntityClassInternal, CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal, CDOTA_Unit_ZeusCloud::GetEntityClassInternal, CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInfo, CDOTA_Unit_Hero_Beastmaster_Beasts::GetEntityClassInternal, CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal, CDOTA_Unit_Courier::GetEntityClassInternal, CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal, CDOTA_NPC_WitchDoctor_Ward::GetEntityClassInternal, CDOTA_Unit_LoopingSound::GetEntityClassInternal, CDOTA_Unit_Nian_Attachment::GetEntityClassInternal (22 total)
// strings: "npc_dota_base_additive", "CDOTA_BaseNPC_Additive", "npc_dota_base", "CDOTA_BaseNPC"
// globals: `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo, CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo, `guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo, CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo
CEntityClassInfo *__cdecl CDOTA_BaseNPC_Additive::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo != 0 )
    return &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo) == 0 )
    return &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo;
  if ( `guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo) != 0 )
  {
    EntityClassInfo = NextBotCombatCharacter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo,
      "CDOTA_BaseNPC",
      "npc_dota_base",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo,
    "CDOTA_BaseNPC_Additive",
    "npc_dota_base_additive",
    0,
    &CDOTA_BaseNPC::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPCClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo);
  return &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo;
}


// CDOTA_BaseNPC_Additive::Schema_DynamicBinding  (line 2154, @0x00000000029662d0, libserver.so)
// globals: CDOTA_BaseNPC_Additive::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Additive::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Additive *const this)
{
  return CDOTA_BaseNPC_Additive::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Additive::GetEntityClassInternal  (line 2154, @0x0000000002985ef0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_BaseNPC>, CDOTA_BaseNPC::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "npc_dota_base_additive", "CDOTA_BaseNPC_Additive"
// globals: `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass, CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo, CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Additive::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass) != 0 )
  {
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_flags = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_pInputs = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass._vptr_CEntityClass = off_4116290;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Additive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_AdditiveClass != 0 )
    return &CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass;
  if ( `guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo,
      "CDOTA_BaseNPC_Additive",
      "npc_dota_base_additive",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo);
  }
  CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_pClassInfo = &CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo;
  CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_pBaseClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_AdditiveClass = &CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass;
  CDOTA_BaseNPC_Additive::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_AdditiveClassInfo.m_pClass = &CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass;
  CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_BaseNPC>(0);
  g_pEntityCDOTA_BaseNPC_AdditiveClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Additive::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_AdditiveClass;
}


// CDOTAPASFilter::~CDOTAPASFilter  (line 2161, @0x0000000002736cf0, libserver.so)  // inlines: ~CPASFilter
// calls: CRecipientFilter::~CRecipientFilter
void __fastcall CDOTAPASFilter::~CDOTAPASFilter(CDOTAPASFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(this);
}


// CDOTAPASFilter::~CDOTAPASFilter  (line 2161, @0x0000000002736d10, libserver.so)  // inlines: ~CDOTAPASFilter, ~CPASFilter
// calls: CRecipientFilter::~CRecipientFilter, operator delete
void __fastcall CDOTAPASFilter::~CDOTAPASFilter(CDOTAPASFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(this);
  operator delete(this);
}


// CDOTAPVSFilter::~CDOTAPVSFilter  (line 2173, @0x00000000027cf6a0, libserver.so)
// calls: CRecipientFilter::~CRecipientFilter
void __fastcall CDOTAPVSFilter::~CDOTAPVSFilter(CDOTAPVSFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_42B2CB0;
  CRecipientFilter::~CRecipientFilter(this);
}


// CDOTAPVSFilter::~CDOTAPVSFilter  (line 2173, @0x00000000027cf6c0, libserver.so)  // inlines: ~CDOTAPVSFilter
// calls: CRecipientFilter::~CRecipientFilter, operator delete
void __fastcall CDOTAPVSFilter::~CDOTAPVSFilter(CDOTAPVSFilter *const this)
{
  this->_vptr_IRecipientFilter = &off_42B2CB0;
  CRecipientFilter::~CRecipientFilter(this);
  operator delete(this);
}


