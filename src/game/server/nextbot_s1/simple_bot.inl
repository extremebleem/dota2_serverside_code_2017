
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSimpleBot::Schema_DynamicBinding  (line 20, @0x0000000002f1dda0, libserver.so)
// globals: CSimpleBot::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSimpleBot::Schema_DynamicBinding(const CSimpleBot *const this)
{
  return CSimpleBot::s_pSchemaBinding;
}


// CSimpleBot::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 20, @0x0000000002f1ddc0, libserver.so)
// globals: CSimpleBot::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSimpleBot::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CSimpleBot::CEntityInstanceEntityClass *const this)
{
  return CSimpleBot::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CSimpleBot::CEntityInstanceEntityClass::DestructInstance  (line 20, @0x0000000002f1ddd0, libserver.so)  // inlines: Destruct<CSimpleBot>
void __fastcall CSimpleBot::CEntityInstanceEntityClass::DestructInstance(
        CSimpleBot::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CSimpleBot::CEntityInstanceEntityClass::FreeInstance  (line 20, @0x0000000002f1ddf0, libserver.so)
void __fastcall CSimpleBot::CEntityInstanceEntityClass::FreeInstance(
        CSimpleBot::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CSimpleBot::CEntityInstanceEntityClass::CanAllocate  (line 20, @0x0000000002f1de10, libserver.so)
bool __fastcall CSimpleBot::CEntityInstanceEntityClass::CanAllocate(
        const CSimpleBot::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CSimpleBot::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 20, @0x0000000002f1de20, libserver.so)
// globals: CSimpleBot::s_pSchemaBinding
const ISchemaBinding *__fastcall CSimpleBot::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CSimpleBot::CEntityInstanceEntityClass *const this)
{
  return CSimpleBot::s_pSchemaBinding;
}


// CSimpleBot::CEntityInstanceEntityClass::AllocateInstance  (line 20, @0x0000000002f1f490, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CSimpleBot::CEntityInstanceEntityClass::AllocateInstance(
        CSimpleBot::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2072);
  memset(v1, 0, 0x818u);
  return v1;
}


// CSimpleBot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x0000000002f1fbd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CSimpleBot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSimpleBot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CSimpleBot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x0000000002f1fbf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CSimpleBot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSimpleBot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CSimpleBot::CEntityInstanceEntityClass::ConstructInstance  (line 20, @0x0000000002f20c10, libserver.so)  // inlines: Construct<CSimpleBot>
// calls: CSimpleBot::CSimpleBot
CEntityInstance *__fastcall CSimpleBot::CEntityInstanceEntityClass::ConstructInstance(
        CSimpleBot::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CSimpleBot::CSimpleBot(p);
  return p;
}


// CSimpleBot::GetEntityClassInternal  (line 20, @0x0000000002f210a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseCombatCharacter::InitScriptDesc, NextBotCombatCharacter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_nextbot_01.cpp
// strings: "simple_bot", "CSimpleBot"
// globals: `guard variable for'CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass, CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CSimpleBot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSimpleBot::GetEntityClassInfo(void)::g_EntityCSimpleBotClassInfo, CSimpleBot::GetEntityClassInfo(void)::g_EntityCSimpleBotClassInfo
CEntityClass *__cdecl CSimpleBot::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass) != 0 )
  {
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_designerName.u.m_Id = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass._vptr_CEntityClass = off_3F79390;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_ComponentOffsets.m_Size = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_AllHelpers.m_Size = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_instanceUnserializer.m_atomicFields,
      4);
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_classInputs.m_Size = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_classInputs.m_Memory.m_pMemory = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_classOutputs.m_Size = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_requiredEHandle.m_Index = -1;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_hNetworkSerializer = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_pBaseClassInfo = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_pClassInfo = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_flags = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_nAllHelpersFlags = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_pScriptClassDesc = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_pInputs = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_nInputCount = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_pOutputs = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_nOutputCount = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_pGameClass = 0;
    CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass._vptr_CEntityClass = off_47B2AB0;
    __cxa_guard_release(&`guard variable for'CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass);
    __cxa_atexit(
      CSimpleBot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass,
      &_dso_handle);
  }
  if ( g_pEntityCSimpleBotClass != 0 )
    return &CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass;
  if ( `guard variable for'CSimpleBot::GetEntityClassInfo(void)::g_EntityCSimpleBotClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CSimpleBot::GetEntityClassInfo(void)::g_EntityCSimpleBotClassInfo) != 0 )
  {
    EntityClassInfo = NextBotCombatCharacter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CSimpleBot::GetEntityClassInfo(void)::g_EntityCSimpleBotClassInfo,
      "CSimpleBot",
      "simple_bot",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CSimpleBot::GetEntityClassInfo(void)::g_EntityCSimpleBotClassInfo);
  }
  CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_pClassInfo = &CSimpleBot::GetEntityClassInfo(void)::g_EntityCSimpleBotClassInfo;
  CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_pBaseClassInfo = CSimpleBot::GetEntityClassInfo(void)::g_EntityCSimpleBotClassInfo.m_pBaseClassInfo;
  g_pEntityCSimpleBotClass = &CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass;
  CSimpleBot::GetEntityClassInfo(void)::g_EntityCSimpleBotClassInfo.m_pClass = &CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass;
  CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass.m_pScriptClassDesc = CBaseCombatCharacter::InitScriptDesc();
  g_pEntityCSimpleBotClass->m_pComponentOverrides = 0;
  return &CSimpleBot::GetEntityClassInternal(void)::g_EntityCSimpleBotClass;
}


// CSimpleBot::CSimpleBotIntention::GetName  (line 31, @0x0000000002f1de30, libserver.so)
// strings: "CSimpleBotIntention"
const char *__fastcall CSimpleBot::CSimpleBotIntention::GetName(CSimpleBot::CSimpleBotIntention *const this)
{
  return "CSimpleBotIntention";
}


// CSimpleBot::CSimpleBotIntention::FirstContainedResponder  (line 31, @0x0000000002f1de40, libserver.so)
INextBotEventResponder *__fastcall CSimpleBot::CSimpleBotIntention::FirstContainedResponder(
        const CSimpleBot::CSimpleBotIntention *const this)
{
  return this->m_behavior;
}


// CSimpleBot::CSimpleBotIntention::NextContainedResponder  (line 31, @0x0000000002f1de50, libserver.so)
INextBotEventResponder *__fastcall CSimpleBot::CSimpleBotIntention::NextContainedResponder(
        const CSimpleBot::CSimpleBotIntention *const this,
        INextBotEventResponder *current)
{
  return 0;
}


// CSimpleBot::GetIntentionInterface  (line 31, @0x0000000002f1de60, libserver.so)
IIntention *__fastcall CSimpleBot::GetIntentionInterface(const CSimpleBot *const this)
{
  return this->m_intention;
}


// CSimpleBot::GetLocomotionInterface  (line 33, @0x0000000002f1de80, libserver.so)
NextBotGroundLocomotion *__fastcall CSimpleBot::GetLocomotionInterface(const CSimpleBot *const this)
{
  return this->m_locomotor;
}


// CSimpleBotPathCost::~CSimpleBotPathCost  (line 46, @0x0000000002f1e220, libserver.so)  // inlines: ~CNavShortestPathCost, ~CPathCostBase
void __fastcall CSimpleBotPathCost::~CSimpleBotPathCost(CSimpleBotPathCost *const this)
{
  this->_vptr_CPathCostBase = off_47AE0B0;
}


// CSimpleBotPathCost::~CSimpleBotPathCost  (line 46, @0x0000000002f1f3c0, libserver.so)  // inlines: ~CNavShortestPathCost, ~CPathCostBase, ~CSimpleBotPathCost
// calls: operator delete
void __fastcall CSimpleBotPathCost::~CSimpleBotPathCost(CSimpleBotPathCost *const this)
{
  this->_vptr_CPathCostBase = off_47AE0B0;
  operator delete(this);
}


// CSimpleBotPathCost::IsToAreaTraversable  (line 59, @0x0000000002f1dea0, libserver.so)
bool __fastcall CSimpleBotPathCost::IsToAreaTraversable(
        const CSimpleBotPathCost *const this,
        const CNavArea *const rToArea,
        const CNavArea *const rFromArea)
{
  __int64 v4; // rax

  v4 = (*(this->m_pMe->_vptr_IHandleEntity + 376))(this->m_pMe, rToArea, rFromArea);
  return (*(*v4 + 856LL))(v4, rToArea);
}


// CSimpleBotPathCost::FloorAreaCost  (line 64, @0x0000000002f1dee0, libserver.so)
float __fastcall CSimpleBotPathCost::FloorAreaCost(
        const CSimpleBotPathCost *const this,
        const CNavArea *const rToArea,
        const CNavArea *const rFromArea,
        float flLength,
        float flEdgeDeltaZ)
{
  __int64 v6; // rax
  float v7; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  __int64 v9; // rax
  __int64 v11; // rax
  double v12; // xmm0_8

  v6 = (*(this->m_pMe->_vptr_IHandleEntity + 376))(this->m_pMe, rToArea, rFromArea);
  v7 = (*(*v6 + 792LL))(v6);
  vptr_IHandleEntity = this->m_pMe->_vptr_IHandleEntity;
  if ( flEdgeDeltaZ < v7 )
  {
    v11 = (vptr_IHandleEntity[376])();
    v12 = (*(*v11 + 808LL))(v11);
    if ( -*&v12 <= flEdgeDeltaZ )
      return flLength;
  }
  else
  {
    v9 = (vptr_IHandleEntity[376])();
    if ( flEdgeDeltaZ < (*(*v9 + 800LL))(v9) )
      return (5.0 * flLength) + flLength;
  }
  return -1.0;
}


