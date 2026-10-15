
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDotaTutorialNPCBlocker::~CDotaTutorialNPCBlocker  (line 14, @0x00000000027cf6f0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDotaTutorialNPCBlocker::~CDotaTutorialNPCBlocker(CDotaTutorialNPCBlocker *const this)
{
  this->_vptr_IHandleEntity = &off_42B2D90;
  CBaseEntity::~CBaseEntity(this);
}


// CDotaTutorialNPCBlocker::~CDotaTutorialNPCBlocker  (line 14, @0x00000000027cf710, libserver.so)  // inlines: ~CDotaTutorialNPCBlocker
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDotaTutorialNPCBlocker::~CDotaTutorialNPCBlocker(CDotaTutorialNPCBlocker *const this)
{
  this->_vptr_IHandleEntity = &off_42B2D90;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDotaTutorialNPCBlocker::GetEntityClass  (line 16, @0x00000000027ce7b0, libserver.so)
CEntityClass *__cdecl CDotaTutorialNPCBlocker::GetEntityClass()
{
  return g_pEntityCDotaTutorialNPCBlockerClass;
}


// CDotaTutorialNPCBlocker::Schema_DynamicBinding  (line 16, @0x00000000027ce7c0, libserver.so)
// globals: CDotaTutorialNPCBlocker::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaTutorialNPCBlocker::Schema_DynamicBinding(
        const CDotaTutorialNPCBlocker *const this)
{
  return CDotaTutorialNPCBlocker::s_pSchemaBinding;
}


// CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 16, @0x00000000027ce7d0, libserver.so)
// globals: CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDotaTutorialNPCBlocker::CEntityInstanceEntityClass *const this)
{
  return CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::DestructInstance  (line 16, @0x00000000027ce7e0, libserver.so)  // inlines: Destruct<CDotaTutorialNPCBlocker>
void __fastcall CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::DestructInstance(
        CDotaTutorialNPCBlocker::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::FreeInstance  (line 16, @0x00000000027ce800, libserver.so)
void __fastcall CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::FreeInstance(
        CDotaTutorialNPCBlocker::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::CanAllocate  (line 16, @0x00000000027ce820, libserver.so)
bool __fastcall CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::CanAllocate(
        const CDotaTutorialNPCBlocker::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 16, @0x00000000027ce830, libserver.so)
// globals: CDotaTutorialNPCBlocker::s_pSchemaBinding
const ISchemaBinding *__fastcall CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDotaTutorialNPCBlocker::CEntityInstanceEntityClass *const this)
{
  return CDotaTutorialNPCBlocker::s_pSchemaBinding;
}


// CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::AllocateInstance  (line 16, @0x00000000027cf580, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::AllocateInstance(
        CDotaTutorialNPCBlocker::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 800);
  memset(v1, 0, 0x320u);
  return v1;
}


// CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::ConstructInstance  (line 16, @0x00000000027cf640, libserver.so)  // inlines: CDotaTutorialNPCBlocker, CEntityHandle, CHandle, CUtlSymbolLarge, Construct<CDotaTutorialNPCBlocker>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::ConstructInstance(
        CDotaTutorialNPCBlocker::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = -1;
    *p = &off_42B2D90;
    *(p + 98) = 0;
    *(p + 198) = -1;
  }
  return p;
}


// CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 16, @0x00000000027d19a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaTutorialNPCBlocker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 16, @0x00000000027d19c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaTutorialNPCBlocker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDotaTutorialNPCBlocker::GetEntityClassInternal  (line 16, @0x00000000027dce50, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_08.cpp
// strings: "tutorial_npc_blocker", "CDotaTutorialNPCBlocker"
// globals: `guard variable for'CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass, CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDotaTutorialNPCBlocker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNPCBlockerClassInfo, CDotaTutorialNPCBlocker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNPCBlockerClassInfo
CEntityClass *__cdecl CDotaTutorialNPCBlocker::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass) != 0 )
  {
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_designerName.u.m_Id = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass._vptr_CEntityClass = off_3F79390;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_ComponentOffsets.m_Size = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_AllHelpers.m_Size = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_classInputs.m_Size = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_classOutputs.m_Size = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_requiredEHandle.m_Index = -1;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_hNetworkSerializer = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_pBaseClassInfo = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_pClassInfo = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_flags = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_nAllHelpersFlags = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_pScriptClassDesc = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_pInputs = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_nInputCount = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_pOutputs = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_nOutputCount = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_pGameClass = 0;
    CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass._vptr_CEntityClass = off_42B2D10;
    __cxa_guard_release(&`guard variable for'CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass);
    __cxa_atexit(
      CDotaTutorialNPCBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDotaTutorialNPCBlockerClass != 0 )
    return &CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass;
  if ( `guard variable for'CDotaTutorialNPCBlocker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNPCBlockerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaTutorialNPCBlocker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNPCBlockerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDotaTutorialNPCBlocker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNPCBlockerClassInfo,
      "CDotaTutorialNPCBlocker",
      "tutorial_npc_blocker",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDotaTutorialNPCBlocker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNPCBlockerClassInfo);
  }
  CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_pClassInfo = &CDotaTutorialNPCBlocker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNPCBlockerClassInfo;
  CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_pBaseClassInfo = CDotaTutorialNPCBlocker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNPCBlockerClassInfo.m_pBaseClassInfo;
  g_pEntityCDotaTutorialNPCBlockerClass = &CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass;
  CDotaTutorialNPCBlocker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNPCBlockerClassInfo.m_pClass = &CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass;
  CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDotaTutorialNPCBlockerClass->m_pComponentOverrides = 0;
  return &CDotaTutorialNPCBlocker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNPCBlockerClass;
}


// CDotaTutorialNPCBlocker::UpdateTransmitState  (line 21, @0x00000000027cf690, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CDotaTutorialNPCBlocker::UpdateTransmitState(CDotaTutorialNPCBlocker *const this)
{
  return CBaseEntity::SetTransmitState(this, 8);
}


