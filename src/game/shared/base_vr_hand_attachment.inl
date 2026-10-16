
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseVRHandAttachment::~CBaseVRHandAttachment  (line 12, @0x000000000217b4c0, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CBaseVRHandAttachment::~CBaseVRHandAttachment(CBaseVRHandAttachment *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CBaseVRHandAttachment::~CBaseVRHandAttachment  (line 12, @0x000000000217b500, libserver.so)  // inlines: operator delete, ~CBaseAnimating, ~CBaseVRHandAttachment
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CBaseVRHandAttachment::~CBaseVRHandAttachment(CBaseVRHandAttachment *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this);
}


// CBaseVRHandAttachment::GetEntityClass  (line 14, @0x000000000217a590, libserver.so)
CEntityClass *__cdecl CBaseVRHandAttachment::GetEntityClass()
{
  return g_pEntityCBaseVRHandAttachmentClass;
}


// CBaseVRHandAttachment::Schema_DynamicBinding  (line 14, @0x000000000217a5a0, libserver.so)
// globals: CBaseVRHandAttachment::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseVRHandAttachment::Schema_DynamicBinding(
        const CBaseVRHandAttachment *const this)
{
  return CBaseVRHandAttachment::s_pSchemaBinding;
}


// CBaseVRHandAttachment::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 14, @0x000000000217a5b0, libserver.so)
// globals: CBaseVRHandAttachment::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseVRHandAttachment::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseVRHandAttachment::CEntityInstanceEntityClass *const this)
{
  return CBaseVRHandAttachment::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseVRHandAttachment::CEntityInstanceEntityClass::DestructInstance  (line 14, @0x000000000217a5c0, libserver.so)  // inlines: Destruct<CBaseVRHandAttachment>
void __fastcall CBaseVRHandAttachment::CEntityInstanceEntityClass::DestructInstance(
        CBaseVRHandAttachment::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseVRHandAttachment::CEntityInstanceEntityClass::FreeInstance  (line 14, @0x000000000217a5e0, libserver.so)
void __fastcall CBaseVRHandAttachment::CEntityInstanceEntityClass::FreeInstance(
        CBaseVRHandAttachment::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseVRHandAttachment::CEntityInstanceEntityClass::CanAllocate  (line 14, @0x000000000217a600, libserver.so)
bool __fastcall CBaseVRHandAttachment::CEntityInstanceEntityClass::CanAllocate(
        const CBaseVRHandAttachment::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseVRHandAttachment::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 14, @0x000000000217a610, libserver.so)
// globals: CBaseVRHandAttachment::s_pSchemaBinding
const ISchemaBinding *__fastcall CBaseVRHandAttachment::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseVRHandAttachment::CEntityInstanceEntityClass *const this)
{
  return CBaseVRHandAttachment::s_pSchemaBinding;
}


// CBaseVRHandAttachment::CEntityInstanceEntityClass::AllocateInstance  (line 14, @0x000000000217b260, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseVRHandAttachment::CEntityInstanceEntityClass::AllocateInstance(
        CBaseVRHandAttachment::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1224);
  memset(v1, 0, 0x4C8u);
  return v1;
}


// CBaseVRHandAttachment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 14, @0x000000000217c980, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseVRHandAttachment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseVRHandAttachment::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CBaseVRHandAttachment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 14, @0x000000000217c9a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseVRHandAttachment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseVRHandAttachment::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseVRHandAttachment::CEntityInstanceEntityClass::ConstructInstance  (line 14, @0x000000000217dc00, libserver.so)  // inlines: Construct<CBaseVRHandAttachment>
// calls: CBaseVRHandAttachment::CBaseVRHandAttachment
CEntityInstance *__fastcall CBaseVRHandAttachment::CEntityInstanceEntityClass::ConstructInstance(
        CBaseVRHandAttachment::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBaseVRHandAttachment::CBaseVRHandAttachment(p);
  return p;
}


// CBaseVRHandAttachment::GetEntityClassInternal  (line 14, @0x0000000002180060, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "base_vr_hand_attachment", "CBaseVRHandAttachment"
// globals: `guard variable for'CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass, CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CBaseVRHandAttachment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseVRHandAttachment::GetEntityClassInfo(void)::g_EntityCBaseVRHandAttachmentClassInfo, CBaseVRHandAttachment::GetEntityClassInfo(void)::g_EntityCBaseVRHandAttachmentClassInfo
CEntityClass *__cdecl CBaseVRHandAttachment::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass) != 0 )
  {
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_designerName.u.m_Id = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass._vptr_CEntityClass = off_3F79390;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_ComponentOffsets.m_Size = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_AllHelpers.m_Size = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_instanceUnserializer.m_atomicFields,
      4);
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_classInputs.m_Size = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_classInputs.m_Memory.m_pMemory = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_classOutputs.m_Size = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_requiredEHandle.m_Index = -1;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_hNetworkSerializer = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_pBaseClassInfo = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_pClassInfo = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_flags = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_nAllHelpersFlags = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_pScriptClassDesc = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_pInputs = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_nInputCount = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_pOutputs = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_nOutputCount = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_pGameClass = 0;
    CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass._vptr_CEntityClass = off_40024D0;
    __cxa_guard_release(&`guard variable for'CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass);
    __cxa_atexit(
      CBaseVRHandAttachment::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseVRHandAttachmentClass != 0 )
    return &CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass;
  if ( `guard variable for'CBaseVRHandAttachment::GetEntityClassInfo(void)::g_EntityCBaseVRHandAttachmentClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseVRHandAttachment::GetEntityClassInfo(void)::g_EntityCBaseVRHandAttachmentClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseVRHandAttachment::GetEntityClassInfo(void)::g_EntityCBaseVRHandAttachmentClassInfo,
      "CBaseVRHandAttachment",
      "base_vr_hand_attachment",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseVRHandAttachment::GetEntityClassInfo(void)::g_EntityCBaseVRHandAttachmentClassInfo);
  }
  CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_pClassInfo = &CBaseVRHandAttachment::GetEntityClassInfo(void)::g_EntityCBaseVRHandAttachmentClassInfo;
  CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_pBaseClassInfo = CBaseVRHandAttachment::GetEntityClassInfo(void)::g_EntityCBaseVRHandAttachmentClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseVRHandAttachmentClass = &CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass;
  CBaseVRHandAttachment::GetEntityClassInfo(void)::g_EntityCBaseVRHandAttachmentClassInfo.m_pClass = &CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass;
  CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCBaseVRHandAttachmentClass->m_pComponentOverrides = 0;
  return &CBaseVRHandAttachment::GetEntityClassInternal(void)::g_EntityCBaseVRHandAttachmentClass;
}


// CBaseVRHandAttachment::OnIsActiveAttachmentChanged  (line 28, @0x000000000217a620, libserver.so)
void __fastcall CBaseVRHandAttachment::OnIsActiveAttachmentChanged(CBaseVRHandAttachment *const this, bool bActive)
{
  ;
}


// CBaseVRHandAttachment::GetDesiredHandActivity  (line 38, @0x000000000217a630, libserver.so)
bool __fastcall CBaseVRHandAttachment::GetDesiredHandActivity(
        CBaseVRHandAttachment *const this,
        Activity *pDesiredActivity)
{
  return 0;
}


// CBaseVRHandAttachment::PostUpdatePose  (line 40, @0x000000000217a640, libserver.so)
void __fastcall CBaseVRHandAttachment::PostUpdatePose(CBaseVRHandAttachment *const this)
{
  ;
}


// CBaseVRHandAttachment::ShouldUpdatePose  (line 41, @0x000000000217a650, libserver.so)
bool __fastcall CBaseVRHandAttachment::ShouldUpdatePose(CBaseVRHandAttachment *const this)
{
  return 1;
}


// CBaseVRHandAttachment::CanBecomeActive  (line 54, @0x000000000217a660, libserver.so)
bool __fastcall CBaseVRHandAttachment::CanBecomeActive(CBaseVRHandAttachment *const this)
{
  return 1;
}


// CBaseVRHandAttachment::DropOnDeath  (line 55, @0x000000000217b730, libserver.so)
// calls: UTIL_Remove
void __fastcall CBaseVRHandAttachment::DropOnDeath(CBaseVRHandAttachment *const this)
{
  UTIL_Remove(this);
}


// CBaseVRHandAttachment::ShouldFollowLogicalHandSwaps  (line 57, @0x000000000217a670, libserver.so)
bool __fastcall CBaseVRHandAttachment::ShouldFollowLogicalHandSwaps(CBaseVRHandAttachment *const this)
{
  return 1;
}


// CBaseVRHandAttachment::IsDefaultActiveAttachment  (line 58, @0x000000000217a680, libserver.so)
bool __fastcall CBaseVRHandAttachment::IsDefaultActiveAttachment(CBaseVRHandAttachment *const this)
{
  return 0;
}


