
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseViewModel::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 74, @0x0000000001f0f080, libserver.so)
// globals: CBaseViewModel::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseViewModel::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseViewModel::CEntityInstanceEntityClass *const this)
{
  return CBaseViewModel::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseViewModel::CEntityInstanceEntityClass::DestructInstance  (line 74, @0x0000000001f0f090, libserver.so)  // inlines: Destruct<CBaseViewModel>
void __fastcall CBaseViewModel::CEntityInstanceEntityClass::DestructInstance(
        CBaseViewModel::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseViewModel::CEntityInstanceEntityClass::FreeInstance  (line 74, @0x0000000001f0f0b0, libserver.so)
void __fastcall CBaseViewModel::CEntityInstanceEntityClass::FreeInstance(
        CBaseViewModel::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseViewModel::CEntityInstanceEntityClass::CanAllocate  (line 74, @0x0000000001f0f0d0, libserver.so)
bool __fastcall CBaseViewModel::CEntityInstanceEntityClass::CanAllocate(
        const CBaseViewModel::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseViewModel::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 74, @0x0000000001f0f0e0, libserver.so)
// globals: CBaseViewModel::s_pSchemaBinding
const ISchemaBinding *__fastcall CBaseViewModel::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseViewModel::CEntityInstanceEntityClass *const this)
{
  return CBaseViewModel::s_pSchemaBinding;
}


// CBaseViewModel::CEntityInstanceEntityClass::AllocateInstance  (line 74, @0x0000000001f10d10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseViewModel::CEntityInstanceEntityClass::AllocateInstance(
        CBaseViewModel::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1328);
  memset(v1, 0, 0x530u);
  return v1;
}


// CBaseViewModel::CEntityInstanceEntityClass::ConstructInstance  (line 74, @0x0000000001f110c0, libserver.so)  // inlines: Construct<CBaseViewModel>
// calls: CBaseViewModel::CBaseViewModel
CEntityInstance *__fastcall CBaseViewModel::CEntityInstanceEntityClass::ConstructInstance(
        CBaseViewModel::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CBaseViewModel::CBaseViewModel(p);
  return p;
}


// CBaseViewModel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 74, @0x0000000001f129a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseViewModel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseViewModel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CBaseViewModel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 74, @0x0000000001f129c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseViewModel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseViewModel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseViewModel::GetEntityClassInternal  (line 74, @0x0000000001f19ae0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_game_shared_header_files_01.cpp
// strings: "CBaseViewModel", "baseanimating_overlay", "CBaseAnimatingOverlay", "baseanimating", "CBaseAnimating", "basemodelentity" (7 total)
// globals: `guard variable for'CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass, CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CBaseViewModel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseViewModel::GetEntityClassInfo(void)::g_EntityCBaseViewModelClassInfo, CBaseViewModel::GetEntityClassInfo(void)::g_EntityCBaseViewModelClassInfo, `guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo (13 total)
CEntityClass *__cdecl CBaseViewModel::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass) != 0 )
  {
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_designerName.u.m_Id = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass._vptr_CEntityClass = off_3F79390;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_ComponentOffsets.m_Size = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_AllHelpers.m_Size = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_instanceUnserializer.m_atomicFields,
      4);
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_classInputs.m_Size = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_classInputs.m_Memory.m_pMemory = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_classOutputs.m_Size = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_requiredEHandle.m_Index = -1;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_hNetworkSerializer = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_pBaseClassInfo = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_pClassInfo = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_flags = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_nAllHelpersFlags = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_pScriptClassDesc = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_pInputs = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_nInputCount = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_pOutputs = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_nOutputCount = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_pGameClass = 0;
    CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass._vptr_CEntityClass = off_3FC5190;
    __cxa_guard_release(&`guard variable for'CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass);
    __cxa_atexit(
      CBaseViewModel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseViewModelClass != 0 )
    return &CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass;
  if ( `guard variable for'CBaseViewModel::GetEntityClassInfo(void)::g_EntityCBaseViewModelClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseViewModel::GetEntityClassInfo(void)::g_EntityCBaseViewModelClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo) != 0 )
    {
      if ( `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo) != 0 )
      {
        if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
          && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
        {
          EntityClassInfo = CBaseEntity::GetEntityClassInfo();
          CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
            &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
            "CBaseModelEntity",
            "basemodelentity",
            0,
            EntityClassInfo);
          __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
        }
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo,
          "CBaseAnimating",
          "baseanimating",
          0,
          &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
        __cxa_guard_release(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo,
        "CBaseAnimatingOverlay",
        "baseanimating_overlay",
        0,
        &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseViewModel::GetEntityClassInfo(void)::g_EntityCBaseViewModelClassInfo,
      "CBaseViewModel",
      "viewmodel",
      0,
      &CBaseAnimatingOverlay::GetEntityClassInfo(void)::g_EntityCBaseAnimatingOverlayClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseViewModel::GetEntityClassInfo(void)::g_EntityCBaseViewModelClassInfo);
  }
  CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_pClassInfo = &CBaseViewModel::GetEntityClassInfo(void)::g_EntityCBaseViewModelClassInfo;
  CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_pBaseClassInfo = CBaseViewModel::GetEntityClassInfo(void)::g_EntityCBaseViewModelClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseViewModelClass = &CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass;
  CBaseViewModel::GetEntityClassInfo(void)::g_EntityCBaseViewModelClassInfo.m_pClass = &CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass;
  CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCBaseViewModelClass->m_pComponentOverrides = 0;
  return &CBaseViewModel::GetEntityClassInternal(void)::g_EntityCBaseViewModelClass;
}


// CBaseViewModel::GetEntityClass  (line 74, @0x00000000021b0c30, libserver.so)
CEntityClass *__cdecl CBaseViewModel::GetEntityClass()
{
  return g_pEntityCBaseViewModelClass;
}


// CBaseViewModel::Schema_DynamicBinding  (line 74, @0x00000000021b2590, libserver.so)
// calls: CBaseViewModel::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseViewModel::Schema_DynamicBinding(const CBaseViewModel *const this)
{
  CBaseViewModel::Schema_VerifyBindingIsRegistered();
  return CBaseViewModel::s_pSchemaBinding;
}


// CBaseViewModel::HackToMakeAVTable  (line 79, @0x00000000021b0c40, libserver.so)
void __fastcall CBaseViewModel::HackToMakeAVTable(const CBaseViewModel *const this)
{
  ;
}


// CBaseViewModel::IsViewable  (line 92, @0x00000000021b0c50, libserver.so)
bool __fastcall CBaseViewModel::IsViewable(CBaseViewModel *const this)
{
  return 0;
}


// CBaseViewModel::GetOwner  (line 122, @0x00000000021b36e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CBaseViewModel::GetOwner(CBaseViewModel *const this)
{
  CBaseEntity *result; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  result = 0;
  m_Index = this->m_hOwner.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hOwner.m_Value.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hOwner.m_Value.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        return v4->m_pInstance;
    }
  }
  return result;
}


// CBaseViewModel::IsViewModel  (line 136, @0x00000000021b0c60, libserver.so)
bool __fastcall CBaseViewModel::IsViewModel(const CBaseViewModel *const this)
{
  return 1;
}


// CBaseViewModel::IsViewModelOrAttachment  (line 137, @0x00000000021b0c70, libserver.so)
bool __fastcall CBaseViewModel::IsViewModelOrAttachment(const CBaseViewModel *const this)
{
  return 1;
}


