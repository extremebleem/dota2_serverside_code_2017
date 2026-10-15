
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// NextBotCombatCharacter::CEntityInstanceEntityClass::DestructInstance  (line 33, @0x0000000002624170, libserver.so)  // inlines: Destruct<NextBotCombatCharacter>
void __fastcall NextBotCombatCharacter::CEntityInstanceEntityClass::DestructInstance(
        NextBotCombatCharacter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// NextBotCombatCharacter::CEntityInstanceEntityClass::FreeInstance  (line 33, @0x0000000002624190, libserver.so)
void __fastcall NextBotCombatCharacter::CEntityInstanceEntityClass::FreeInstance(
        NextBotCombatCharacter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// NextBotCombatCharacter::CEntityInstanceEntityClass::CanAllocate  (line 33, @0x00000000026241b0, libserver.so)
bool __fastcall NextBotCombatCharacter::CEntityInstanceEntityClass::CanAllocate(
        const NextBotCombatCharacter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// NextBotCombatCharacter::CEntityInstanceEntityClass::AllocateInstance  (line 33, @0x000000000262db80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall NextBotCombatCharacter::CEntityInstanceEntityClass::AllocateInstance(
        NextBotCombatCharacter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2056);
  memset(v1, 0, 0x808u);
  return v1;
}


// NextBotCombatCharacter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 33, @0x000000000262ee80, libserver.so)  // inlines: Schema_StaticBinding
// calls: NextBotCombatCharacter::Schema_VerifyBindingIsRegistered
const ISchemaBinding *__fastcall NextBotCombatCharacter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        NextBotCombatCharacter::CEntityInstanceEntityClass *const this)
{
  NextBotCombatCharacter::Schema_VerifyBindingIsRegistered();
  return NextBotCombatCharacter::s_pSchemaBinding;
}


// NextBotCombatCharacter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 33, @0x000000000262eea0, libserver.so)
// calls: NextBotCombatCharacter::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall NextBotCombatCharacter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const NextBotCombatCharacter::CEntityInstanceEntityClass *const this)
{
  NextBotCombatCharacter::CEntityInstanceEntityClass::Schema_VerifyBindingIsRegistered();
  return NextBotCombatCharacter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// NextBotCombatCharacter::CEntityInstanceEntityClass::ConstructInstance  (line 33, @0x000000000262eec0, libserver.so)  // inlines: Construct<NextBotCombatCharacter>
// calls: NextBotCombatCharacter::NextBotCombatCharacter
CEntityInstance *__fastcall NextBotCombatCharacter::CEntityInstanceEntityClass::ConstructInstance(
        NextBotCombatCharacter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    NextBotCombatCharacter::NextBotCombatCharacter(p);
  return p;
}


// NextBotCombatCharacter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002634410, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall NextBotCombatCharacter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        NextBotCombatCharacter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// NextBotCombatCharacter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002634430, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall NextBotCombatCharacter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        NextBotCombatCharacter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// NextBotCombatCharacter::GetEntityClassInfo  (line 33, @0x000000000263b460, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseFlex::GetEntityClassInfo
// callers: CDOTA_BaseNPC_Additive::GetEntityClassInfo, CDOTA_BaseNPC_Thinker::GetEntityClassInternal, CSimpleBot::GetEntityClassInternal
// strings: "NextBotCombatCharacter", "CBaseCombatCharacter"
// globals: `guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo, NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo, `guard variable for'CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo, CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo
CEntityClassInfo *__cdecl NextBotCombatCharacter::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo != 0 )
    return &NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo) == 0 )
    return &NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo;
  if ( `guard variable for'CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFlex::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo,
      "CBaseCombatCharacter",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo,
    "NextBotCombatCharacter",
    0,
    0,
    &CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo);
  __cxa_guard_release(&`guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo);
  return &NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo;
}


// NextBotCombatCharacter::GetEntityClass  (line 33, @0x0000000002f1d980, libserver.so)
CEntityClass *__cdecl NextBotCombatCharacter::GetEntityClass()
{
  return g_pEntityNextBotCombatCharacterClass;
}


// NextBotCombatCharacter::Schema_DynamicBinding  (line 33, @0x0000000002f1d990, libserver.so)
// globals: NextBotCombatCharacter::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall NextBotCombatCharacter::Schema_DynamicBinding(
        const NextBotCombatCharacter *const this)
{
  return NextBotCombatCharacter::s_pSchemaBinding;
}


// NextBotCombatCharacter::GetEntityClassInternal  (line 33, @0x0000000002f213f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseCombatCharacter::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseFlex::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_nextbot_01.cpp
// strings: "NextBotCombatCharacter", "CBaseCombatCharacter"
// globals: `guard variable for'NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass, NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, NextBotCombatCharacter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo, NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo, `guard variable for'CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo (9 total)
CEntityClass *__cdecl NextBotCombatCharacter::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass == 0
    && __cxa_guard_acquire(&`guard variable for'NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass) != 0 )
  {
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_designerName.u.m_Id = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass._vptr_CEntityClass = off_3F79390;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_ComponentOffsets.m_Size = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_AllHelpers.m_Size = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_instanceUnserializer.m_atomicFields,
      4);
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_classInputs.m_Size = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_classInputs.m_Memory.m_pMemory = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_classOutputs.m_Size = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_classOutputs.m_Memory.m_pMemory = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_requiredEHandle.m_Index = -1;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_hNetworkSerializer = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_pBaseClassInfo = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_pClassInfo = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_flags = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_nAllHelpersFlags = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_pScriptClassDesc = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_pInputs = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_nInputCount = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_pOutputs = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_nOutputCount = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_pGameClass = 0;
    NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass._vptr_CEntityClass = off_4115E10;
    __cxa_guard_release(&`guard variable for'NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass);
    __cxa_atexit(
      NextBotCombatCharacter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass,
      &_dso_handle);
  }
  if ( g_pEntityNextBotCombatCharacterClass != 0 )
    return &NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass;
  if ( `guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo) != 0 )
    {
      EntityClassInfo = CBaseFlex::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo,
        "CBaseCombatCharacter",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo,
      "NextBotCombatCharacter",
      0,
      0,
      &CBaseCombatCharacter::GetEntityClassInfo(void)::g_EntityCBaseCombatCharacterClassInfo);
    __cxa_guard_release(&`guard variable for'NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo);
  }
  NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_pClassInfo = &NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo;
  NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_pBaseClassInfo = NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo.m_pBaseClassInfo;
  g_pEntityNextBotCombatCharacterClass = &NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass;
  NextBotCombatCharacter::GetEntityClassInfo(void)::g_EntityNextBotCombatCharacterClassInfo.m_pClass = &NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass;
  NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass.m_pScriptClassDesc = CBaseCombatCharacter::InitScriptDesc();
  g_pEntityNextBotCombatCharacterClass->m_pComponentOverrides = 0;
  return &NextBotCombatCharacter::GetEntityClassInternal(void)::g_EntityNextBotCombatCharacterClass;
}


// NextBotCombatCharacter::~NextBotCombatCharacter  (line 40, @0x0000000002f1f610, libserver.so)
// calls: INextBot::~INextBot, CBaseCombatCharacter::~CBaseCombatCharacter
void __fastcall NextBotCombatCharacter::~NextBotCombatCharacter(NextBotCombatCharacter *const this)
{
  INextBot *v2; // rdi

  v2 = &this->INextBot;
  *&v2[-13].m_immobileTimer.m_timestamp.m_Value = &off_47B13F0;
  v2->_vptr_INextBotEventResponder = &off_47B1FB8;
  INextBot::~INextBot(v2);
  CBaseCombatCharacter::~CBaseCombatCharacter(this);
}


// NextBotCombatCharacter::~NextBotCombatCharacter  (line 40, @0x0000000002f1f660, libserver.so)  // inlines: ~NextBotCombatCharacter
// calls: INextBot::~INextBot, CBaseCombatCharacter::~CBaseCombatCharacter, CBaseEntity::operator delete
void __fastcall NextBotCombatCharacter::~NextBotCombatCharacter(NextBotCombatCharacter *const this)
{
  INextBot *v2; // rdi

  v2 = &this->INextBot;
  *&v2[-13].m_immobileTimer.m_timestamp.m_Value = &off_47B13F0;
  v2->_vptr_INextBotEventResponder = &off_47B1FB8;
  INextBot::~INextBot(v2);
  CBaseCombatCharacter::~CBaseCombatCharacter(this);
  CBaseEntity::operator delete(this);
}


// NextBotCombatCharacter::MyNextBotPointer  (line 44, @0x00000000026241c0, libserver.so)
INextBot *__fastcall NextBotCombatCharacter::MyNextBotPointer(NextBotCombatCharacter *const this)
{
  return &this->INextBot;
}


// NextBotCombatCharacter::GetEntity  (line 112, @0x00000000026241d0, libserver.so)
NextBotCombatCharacter *__fastcall NextBotCombatCharacter::GetEntity(const NextBotCombatCharacter *const this)
{
  return this;
}


// NextBotCombatCharacter::GetNextBotCombatCharacter  (line 119, @0x00000000026241f0, libserver.so)
NextBotCombatCharacter *__fastcall NextBotCombatCharacter::GetNextBotCombatCharacter(
        const NextBotCombatCharacter *const this)
{
  return this;
}


// NextBotCombatCharacter::GetLastAttacker  (line 126, @0x0000000002635be0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CBaseCombatCharacter *__fastcall NextBotCombatCharacter::GetLastAttacker(const NextBotCombatCharacter *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx

  m_Index = this->m_lastAttacker.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_lastAttacker.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_lastAttacker.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && v3->m_pInstance != 0 )
  {
    return (*(v3->m_pInstance->_vptr_IHandleEntity + 147))(v3->m_pInstance);
  }
  else
  {
    return 0;
  }
}


