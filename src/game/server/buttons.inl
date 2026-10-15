
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseButton::~CBaseButton  (line 12, @0x00000000021b2770, libserver.so)  // inlines: ~CBaseToggle
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CBaseButton::~CBaseButton(CBaseButton *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CBaseButton::~CBaseButton  (line 12, @0x00000000021b2790, libserver.so)  // inlines: ~CBaseButton, ~CBaseToggle
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CBaseButton::~CBaseButton(CBaseButton *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CBaseButton::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 14, @0x0000000001fb78e0, libserver.so)
// globals: CBaseButton::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseButton::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseButton::CEntityInstanceEntityClass *const this)
{
  return CBaseButton::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseButton::CEntityInstanceEntityClass::DestructInstance  (line 14, @0x0000000001fb78f0, libserver.so)  // inlines: Destruct<CBaseButton>
void __fastcall CBaseButton::CEntityInstanceEntityClass::DestructInstance(
        CBaseButton::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseButton::CEntityInstanceEntityClass::FreeInstance  (line 14, @0x0000000001fb7910, libserver.so)
void __fastcall CBaseButton::CEntityInstanceEntityClass::FreeInstance(
        CBaseButton::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseButton::CEntityInstanceEntityClass::CanAllocate  (line 14, @0x0000000001fb7930, libserver.so)
bool __fastcall CBaseButton::CEntityInstanceEntityClass::CanAllocate(
        const CBaseButton::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseButton::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 14, @0x0000000001fb7940, libserver.so)
// globals: CBaseButton::s_pSchemaBinding
const ISchemaBinding *__fastcall CBaseButton::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseButton::CEntityInstanceEntityClass *const this)
{
  return CBaseButton::s_pSchemaBinding;
}


// CBaseButton::CEntityInstanceEntityClass::AllocateInstance  (line 14, @0x0000000001fb9ae0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseButton::CEntityInstanceEntityClass::AllocateInstance(
        CBaseButton::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1544);
  memset(v1, 0, 0x608u);
  return v1;
}


// CBaseButton::CEntityInstanceEntityClass::ConstructInstance  (line 14, @0x0000000001fbc640, libserver.so)  // inlines: CBaseButton, CEntityHandle, CEntityIOOutput, CNetworkHandleBase, CNetworkVarBase, CUtlSymbolLarge, Construct<CBaseButton>, EnsureValidValue<bool>, locksound_t
// calls: CBaseToggle::CBaseToggle
CEntityInstance *__fastcall CBaseButton::CEntityInstanceEntityClass::ConstructInstance(
        CBaseButton::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseToggle::CBaseToggle(p);
    *(p + 163) = 0;
    *(p + 164) = 0;
    *(p + 165) = 0;
    *(p + 166) = 0;
    *(p + 173) = 0;
    *p = &off_400E670;
    *(p + 162) = &off_3FD2260;
    *(p + 174) = off_3F7C190;
    *(p + 177) = off_3F7C190;
    *(p + 180) = off_3F7C190;
    *(p + 183) = off_3F7C190;
    *(p + 186) = off_3F7C190;
    *(p + 190) = 0;
    *(p + 382) = -1;
    *(p + 1532) = 0;
    *(p + 192) = 0;
  }
  return p;
}


// CBaseButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 14, @0x0000000001fbd7b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseButton::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBaseButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 14, @0x0000000001fbd7d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseButton::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseButton::GetEntityClassInfo  (line 14, @0x0000000001fc4fe0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CRotButton::GetEntityClassInternal, CButtonTimed::GetEntityClassInternal
// strings: "func_button", "CBaseButton", "CBaseToggle"
// globals: `guard variable for'CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo, CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo, `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo, CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo
CEntityClassInfo *__cdecl CBaseButton::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo != 0 )
    return &CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo) == 0 )
    return &CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo;
  if ( `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo,
      "CBaseToggle",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo,
    "CBaseButton",
    "func_button",
    0,
    &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
  __cxa_guard_release(&`guard variable for'CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo);
  return &CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo;
}


// CBaseButton::GetEntityClassInternal  (line 14, @0x0000000001fcc060, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseModelEntity>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "func_button", "CBaseButton", "CBaseToggle"
// globals: `guard variable for'CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass, CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CBaseButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo, CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo, `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo (9 total)
CEntityClass *__cdecl CBaseButton::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass) != 0 )
  {
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_designerName.u.m_Id = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass._vptr_CEntityClass = off_3F79390;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_ComponentOffsets.m_Size = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_AllHelpers.m_Size = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_instanceUnserializer.m_atomicFields,
      4);
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_classInputs.m_Size = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_classInputs.m_Memory.m_pMemory = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_classOutputs.m_Size = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_requiredEHandle.m_Index = -1;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_hNetworkSerializer = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_pBaseClassInfo = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_pClassInfo = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_flags = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_nAllHelpersFlags = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_pScriptClassDesc = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_pInputs = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_nInputCount = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_pOutputs = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_nOutputCount = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_pGameClass = 0;
    CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass._vptr_CEntityClass = off_3FD2770;
    __cxa_guard_release(&`guard variable for'CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass);
    __cxa_atexit(
      CBaseButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseButtonClass != 0 )
    return &CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass;
  if ( `guard variable for'CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo,
        "CBaseToggle",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo,
      "CBaseButton",
      "func_button",
      0,
      &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo);
  }
  CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_pClassInfo = &CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo;
  CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_pBaseClassInfo = CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseButtonClass = &CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass;
  CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo.m_pClass = &CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass;
  CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass.m_pScriptClassDesc = GetScriptDesc<CBaseModelEntity>(0);
  g_pEntityCBaseButtonClass->m_pComponentOverrides = 0;
  return &CBaseButton::GetEntityClassInternal(void)::g_EntityCBaseButtonClass;
}


// CBaseButton::GetEntityClass  (line 14, @0x00000000021b10b0, libserver.so)
CEntityClass *__cdecl CBaseButton::GetEntityClass()
{
  return g_pEntityCBaseButtonClass;
}


// CBaseButton::Schema_DynamicBinding  (line 14, @0x00000000021b2b70, libserver.so)
// calls: CBaseButton::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseButton::Schema_DynamicBinding(const CBaseButton *const this)
{
  CBaseButton::Schema_VerifyBindingIsRegistered();
  return CBaseButton::s_pSchemaBinding;
}


// CRotButton::~CRotButton  (line 112, @0x00000000021b27c0, libserver.so)  // inlines: ~CBaseButton, ~CBaseToggle
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CRotButton::~CRotButton(CRotButton *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CRotButton::~CRotButton  (line 112, @0x00000000021b27e0, libserver.so)  // inlines: ~CBaseButton, ~CBaseToggle, ~CRotButton
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CRotButton::~CRotButton(CRotButton *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CRotButton::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 114, @0x0000000001fb7950, libserver.so)
// globals: CRotButton::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRotButton::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CRotButton::CEntityInstanceEntityClass *const this)
{
  return CRotButton::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CRotButton::CEntityInstanceEntityClass::DestructInstance  (line 114, @0x0000000001fb7960, libserver.so)  // inlines: Destruct<CRotButton>
void __fastcall CRotButton::CEntityInstanceEntityClass::DestructInstance(
        CRotButton::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CRotButton::CEntityInstanceEntityClass::FreeInstance  (line 114, @0x0000000001fb7980, libserver.so)
void __fastcall CRotButton::CEntityInstanceEntityClass::FreeInstance(
        CRotButton::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRotButton::CEntityInstanceEntityClass::CanAllocate  (line 114, @0x0000000001fb79a0, libserver.so)
bool __fastcall CRotButton::CEntityInstanceEntityClass::CanAllocate(
        const CRotButton::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CRotButton::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 114, @0x0000000001fb79b0, libserver.so)
// globals: CRotButton::s_pSchemaBinding
const ISchemaBinding *__fastcall CRotButton::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CRotButton::CEntityInstanceEntityClass *const this)
{
  return CRotButton::s_pSchemaBinding;
}


// CRotButton::CEntityInstanceEntityClass::AllocateInstance  (line 114, @0x0000000001fb9b20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CRotButton::CEntityInstanceEntityClass::AllocateInstance(
        CRotButton::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1544);
  memset(v1, 0, 0x608u);
  return v1;
}


// CRotButton::CEntityInstanceEntityClass::ConstructInstance  (line 114, @0x0000000001fbc570, libserver.so)  // inlines: CBaseButton, CEntityHandle, CEntityIOOutput, CNetworkHandleBase, CNetworkVarBase, CRotButton, CUtlSymbolLarge, Construct<CRotButton>, EnsureValidValue<bool>, locksound_t
// calls: CBaseToggle::CBaseToggle
CEntityInstance *__fastcall CRotButton::CEntityInstanceEntityClass::ConstructInstance(
        CRotButton::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseToggle::CBaseToggle(p);
    *(p + 163) = 0;
    *(p + 162) = &off_3FD2260;
    *(p + 174) = off_3F7C190;
    *(p + 177) = off_3F7C190;
    *(p + 180) = off_3F7C190;
    *(p + 183) = off_3F7C190;
    *(p + 186) = off_3F7C190;
    *(p + 164) = 0;
    *(p + 165) = 0;
    *(p + 166) = 0;
    *(p + 173) = 0;
    *(p + 190) = 0;
    *(p + 382) = -1;
    *(p + 1532) = 0;
    *(p + 192) = 0;
    *p = &off_400ED50;
  }
  return p;
}


// CRotButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 114, @0x0000000001fbd800, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CRotButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRotButton::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CRotButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 114, @0x0000000001fbd820, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CRotButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRotButton::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CRotButton::GetEntityClassInfo  (line 114, @0x0000000001fc50a0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CMomentaryRotButton::GetEntityClassInternal
// strings: "func_rot_button", "CRotButton", "func_button", "CBaseButton", "CBaseToggle"
// globals: `guard variable for'CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo, CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo, `guard variable for'CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo, CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo, `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo, CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo
CEntityClassInfo *__cdecl CRotButton::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo != 0 )
    return &CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo) == 0 )
    return &CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo;
  if ( `guard variable for'CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo,
        "CBaseToggle",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo,
      "CBaseButton",
      "func_button",
      0,
      &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo,
    "CRotButton",
    "func_rot_button",
    0,
    &CBaseButton::GetEntityClassInfo(void)::g_EntityCBaseButtonClassInfo);
  __cxa_guard_release(&`guard variable for'CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo);
  return &CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo;
}


// CRotButton::GetEntityClassInternal  (line 114, @0x0000000001fcc3f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseModelEntity>, CBaseButton::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "func_rot_button", "CRotButton"
// globals: `guard variable for'CRotButton::GetEntityClassInternal(void)::g_EntityCRotButtonClass, CRotButton::GetEntityClassInternal(void)::g_EntityCRotButtonClass, __dso_handle, CRotButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo, CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo
CEntityClass *__cdecl CRotButton::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRotButton::GetEntityClassInternal(void)::g_EntityCRotButtonClass == 0
    && __cxa_guard_acquire(&`guard variable for'CRotButton::GetEntityClassInternal(void)::g_EntityCRotButtonClass) != 0 )
  {
    CEntityClass::CEntityClass(&CRotButton::GetEntityClassInternal(void)::g_EntityCRotButtonClass);
    CRotButton::GetEntityClassInternal(void)::g_EntityCRotButtonClass._vptr_CEntityClass = off_3FD27F0;
    __cxa_guard_release(&`guard variable for'CRotButton::GetEntityClassInternal(void)::g_EntityCRotButtonClass);
    __cxa_atexit(
      CRotButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CRotButton::GetEntityClassInternal(void)::g_EntityCRotButtonClass,
      &_dso_handle);
  }
  if ( g_pEntityCRotButtonClass != 0 )
    return &CRotButton::GetEntityClassInternal(void)::g_EntityCRotButtonClass;
  if ( `guard variable for'CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo) != 0 )
  {
    EntityClassInfo = CBaseButton::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo,
      "CRotButton",
      "func_rot_button",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo);
  }
  CRotButton::GetEntityClassInternal(void)::g_EntityCRotButtonClass.m_pClassInfo = &CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo;
  CRotButton::GetEntityClassInternal(void)::g_EntityCRotButtonClass.m_pBaseClassInfo = CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo.m_pBaseClassInfo;
  g_pEntityCRotButtonClass = &CRotButton::GetEntityClassInternal(void)::g_EntityCRotButtonClass;
  CRotButton::GetEntityClassInfo(void)::g_EntityCRotButtonClassInfo.m_pClass = &CRotButton::GetEntityClassInternal(void)::g_EntityCRotButtonClass;
  CRotButton::GetEntityClassInternal(void)::g_EntityCRotButtonClass.m_pScriptClassDesc = GetScriptDesc<CBaseModelEntity>(0);
  g_pEntityCRotButtonClass->m_pComponentOverrides = 0;
  return &CRotButton::GetEntityClassInternal(void)::g_EntityCRotButtonClass;
}


// CRotButton::GetEntityClass  (line 114, @0x00000000021b10c0, libserver.so)
CEntityClass *__cdecl CRotButton::GetEntityClass()
{
  return g_pEntityCRotButtonClass;
}


// CRotButton::Schema_DynamicBinding  (line 114, @0x00000000021b2b90, libserver.so)
// calls: CRotButton::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CRotButton::Schema_DynamicBinding(const CRotButton *const this)
{
  CRotButton::Schema_VerifyBindingIsRegistered();
  return CRotButton::s_pSchemaBinding;
}


// CMomentaryRotButton::~CMomentaryRotButton  (line 122, @0x00000000021b2810, libserver.so)  // inlines: ~CBaseButton, ~CBaseToggle, ~CRotButton
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CMomentaryRotButton::~CMomentaryRotButton(CMomentaryRotButton *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CMomentaryRotButton::~CMomentaryRotButton  (line 122, @0x00000000021b2830, libserver.so)  // inlines: ~CBaseButton, ~CBaseToggle, ~CMomentaryRotButton, ~CRotButton
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CMomentaryRotButton::~CMomentaryRotButton(CMomentaryRotButton *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CMomentaryRotButton::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 124, @0x0000000001fb79c0, libserver.so)
// globals: CMomentaryRotButton::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMomentaryRotButton::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CMomentaryRotButton::CEntityInstanceEntityClass *const this)
{
  return CMomentaryRotButton::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CMomentaryRotButton::CEntityInstanceEntityClass::DestructInstance  (line 124, @0x0000000001fb79d0, libserver.so)  // inlines: Destruct<CMomentaryRotButton>
void __fastcall CMomentaryRotButton::CEntityInstanceEntityClass::DestructInstance(
        CMomentaryRotButton::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CMomentaryRotButton::CEntityInstanceEntityClass::FreeInstance  (line 124, @0x0000000001fb79f0, libserver.so)
void __fastcall CMomentaryRotButton::CEntityInstanceEntityClass::FreeInstance(
        CMomentaryRotButton::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CMomentaryRotButton::CEntityInstanceEntityClass::CanAllocate  (line 124, @0x0000000001fb7a10, libserver.so)
bool __fastcall CMomentaryRotButton::CEntityInstanceEntityClass::CanAllocate(
        const CMomentaryRotButton::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CMomentaryRotButton::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 124, @0x0000000001fb7a20, libserver.so)
// globals: CMomentaryRotButton::s_pSchemaBinding
const ISchemaBinding *__fastcall CMomentaryRotButton::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CMomentaryRotButton::CEntityInstanceEntityClass *const this)
{
  return CMomentaryRotButton::s_pSchemaBinding;
}


// CMomentaryRotButton::CEntityInstanceEntityClass::AllocateInstance  (line 124, @0x0000000001fb9b60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CMomentaryRotButton::CEntityInstanceEntityClass::AllocateInstance(
        CMomentaryRotButton::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1736);
  memset(v1, 0, 0x6C8u);
  return v1;
}


// CMomentaryRotButton::CEntityInstanceEntityClass::ConstructInstance  (line 124, @0x0000000001fbc710, libserver.so)  // inlines: CBaseButton, CEntityHandle, CEntityIOOutput, CEntityOutputTemplate, CMomentaryRotButton, CNetworkHandleBase, CNetworkVarBase, CRotButton, CUtlSymbolLarge, Construct<CMomentaryRotButton>, EnsureValidValue<bool>, locksound_t
// calls: CBaseToggle::CBaseToggle
CEntityInstance *__fastcall CMomentaryRotButton::CEntityInstanceEntityClass::ConstructInstance(
        CMomentaryRotButton::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseToggle::CBaseToggle(p);
    *(p + 163) = 0;
    *(p + 162) = &off_3FD2260;
    *(p + 174) = off_3F7C190;
    *(p + 177) = off_3F7C190;
    *(p + 180) = off_3F7C190;
    *(p + 183) = off_3F7C190;
    *(p + 186) = off_3F7C190;
    *(p + 164) = 0;
    *(p + 165) = 0;
    *(p + 166) = 0;
    *(p + 173) = 0;
    *p = &off_400F430;
    *(p + 194) = off_3FD2290;
    *(p + 190) = 0;
    *(p + 382) = -1;
    *(p + 1532) = 0;
    *(p + 192) = 0;
    *(p + 198) = off_3F7C190;
    *(p + 201) = off_3F7C190;
    *(p + 204) = off_3F7C190;
    *(p + 207) = off_3F7C190;
    *(p + 214) = 0;
  }
  return p;
}


// CMomentaryRotButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 124, @0x0000000001fbd850, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CMomentaryRotButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMomentaryRotButton::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CMomentaryRotButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 124, @0x0000000001fbd870, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CMomentaryRotButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMomentaryRotButton::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CMomentaryRotButton::GetEntityClassInternal  (line 124, @0x0000000001fcc540, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseModelEntity>, CRotButton::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "momentary_rot_button", "CMomentaryRotButton"
// globals: `guard variable for'CMomentaryRotButton::GetEntityClassInternal(void)::g_EntityCMomentaryRotButtonClass, CMomentaryRotButton::GetEntityClassInternal(void)::g_EntityCMomentaryRotButtonClass, __dso_handle, CMomentaryRotButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CMomentaryRotButton::GetEntityClassInfo(void)::g_EntityCMomentaryRotButtonClassInfo, CMomentaryRotButton::GetEntityClassInfo(void)::g_EntityCMomentaryRotButtonClassInfo
CEntityClass *__cdecl CMomentaryRotButton::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMomentaryRotButton::GetEntityClassInternal(void)::g_EntityCMomentaryRotButtonClass == 0
    && __cxa_guard_acquire(&`guard variable for'CMomentaryRotButton::GetEntityClassInternal(void)::g_EntityCMomentaryRotButtonClass) != 0 )
  {
    CEntityClass::CEntityClass(&CMomentaryRotButton::GetEntityClassInternal(void)::g_EntityCMomentaryRotButtonClass);
    CMomentaryRotButton::GetEntityClassInternal(void)::g_EntityCMomentaryRotButtonClass._vptr_CEntityClass = off_3FD2870;
    __cxa_guard_release(&`guard variable for'CMomentaryRotButton::GetEntityClassInternal(void)::g_EntityCMomentaryRotButtonClass);
    __cxa_atexit(
      CMomentaryRotButton::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CMomentaryRotButton::GetEntityClassInternal(void)::g_EntityCMomentaryRotButtonClass,
      &_dso_handle);
  }
  if ( g_pEntityCMomentaryRotButtonClass != 0 )
    return &CMomentaryRotButton::GetEntityClassInternal(void)::g_EntityCMomentaryRotButtonClass;
  if ( `guard variable for'CMomentaryRotButton::GetEntityClassInfo(void)::g_EntityCMomentaryRotButtonClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMomentaryRotButton::GetEntityClassInfo(void)::g_EntityCMomentaryRotButtonClassInfo) != 0 )
  {
    EntityClassInfo = CRotButton::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMomentaryRotButton::GetEntityClassInfo(void)::g_EntityCMomentaryRotButtonClassInfo,
      "CMomentaryRotButton",
      "momentary_rot_button",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMomentaryRotButton::GetEntityClassInfo(void)::g_EntityCMomentaryRotButtonClassInfo);
  }
  CMomentaryRotButton::GetEntityClassInternal(void)::g_EntityCMomentaryRotButtonClass.m_pClassInfo = &CMomentaryRotButton::GetEntityClassInfo(void)::g_EntityCMomentaryRotButtonClassInfo;
  CMomentaryRotButton::GetEntityClassInternal(void)::g_EntityCMomentaryRotButtonClass.m_pBaseClassInfo = CMomentaryRotButton::GetEntityClassInfo(void)::g_EntityCMomentaryRotButtonClassInfo.m_pBaseClassInfo;
  g_pEntityCMomentaryRotButtonClass = &CMomentaryRotButton::GetEntityClassInternal(void)::g_EntityCMomentaryRotButtonClass;
  CMomentaryRotButton::GetEntityClassInfo(void)::g_EntityCMomentaryRotButtonClassInfo.m_pClass = &CMomentaryRotButton::GetEntityClassInternal(void)::g_EntityCMomentaryRotButtonClass;
  CMomentaryRotButton::GetEntityClassInternal(void)::g_EntityCMomentaryRotButtonClass.m_pScriptClassDesc = GetScriptDesc<CBaseModelEntity>(0);
  g_pEntityCMomentaryRotButtonClass->m_pComponentOverrides = 0;
  return &CMomentaryRotButton::GetEntityClassInternal(void)::g_EntityCMomentaryRotButtonClass;
}


// CMomentaryRotButton::GetEntityClass  (line 124, @0x00000000021b10d0, libserver.so)
CEntityClass *__cdecl CMomentaryRotButton::GetEntityClass()
{
  return g_pEntityCMomentaryRotButtonClass;
}


// CMomentaryRotButton::Schema_DynamicBinding  (line 124, @0x00000000021b2bb0, libserver.so)
// calls: CMomentaryRotButton::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CMomentaryRotButton::Schema_DynamicBinding(
        const CMomentaryRotButton *const this)
{
  CMomentaryRotButton::Schema_VerifyBindingIsRegistered();
  return CMomentaryRotButton::s_pSchemaBinding;
}


// CButtonTimed::~CButtonTimed  (line 198, @0x00000000021b2860, libserver.so)  // inlines: ~CBaseButton, ~CBaseToggle
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CButtonTimed::~CButtonTimed(CButtonTimed *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CButtonTimed::~CButtonTimed  (line 198, @0x00000000021b2880, libserver.so)  // inlines: ~CBaseButton, ~CBaseToggle, ~CButtonTimed
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CButtonTimed::~CButtonTimed(CButtonTimed *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CButtonTimed::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 200, @0x0000000001fb7a30, libserver.so)
// globals: CButtonTimed::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CButtonTimed::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CButtonTimed::CEntityInstanceEntityClass *const this)
{
  return CButtonTimed::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CButtonTimed::CEntityInstanceEntityClass::DestructInstance  (line 200, @0x0000000001fb7a40, libserver.so)  // inlines: Destruct<CButtonTimed>
void __fastcall CButtonTimed::CEntityInstanceEntityClass::DestructInstance(
        CButtonTimed::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CButtonTimed::CEntityInstanceEntityClass::FreeInstance  (line 200, @0x0000000001fb7a60, libserver.so)
void __fastcall CButtonTimed::CEntityInstanceEntityClass::FreeInstance(
        CButtonTimed::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CButtonTimed::CEntityInstanceEntityClass::CanAllocate  (line 200, @0x0000000001fb7a80, libserver.so)
bool __fastcall CButtonTimed::CEntityInstanceEntityClass::CanAllocate(
        const CButtonTimed::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CButtonTimed::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 200, @0x0000000001fb7a90, libserver.so)
// globals: CButtonTimed::s_pSchemaBinding
const ISchemaBinding *__fastcall CButtonTimed::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CButtonTimed::CEntityInstanceEntityClass *const this)
{
  return CButtonTimed::s_pSchemaBinding;
}


// CButtonTimed::CEntityInstanceEntityClass::AllocateInstance  (line 200, @0x0000000001fb9ba0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CButtonTimed::CEntityInstanceEntityClass::AllocateInstance(
        CButtonTimed::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1624);
  memset(v1, 0, 0x658u);
  return v1;
}


// CButtonTimed::CEntityInstanceEntityClass::ConstructInstance  (line 200, @0x0000000001fba330, libserver.so)  // inlines: Construct<CButtonTimed>
// calls: CButtonTimed::CButtonTimed
CEntityInstance *__fastcall CButtonTimed::CEntityInstanceEntityClass::ConstructInstance(
        CButtonTimed::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CButtonTimed::CButtonTimed(p);
  return p;
}


// CButtonTimed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 200, @0x0000000001fbd8a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CButtonTimed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CButtonTimed::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CButtonTimed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 200, @0x0000000001fbd8c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CButtonTimed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CButtonTimed::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CButtonTimed::GetEntityClassInternal  (line 200, @0x0000000001fcc690, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseModelEntity>, CBaseButton::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "func_button_timed", "CButtonTimed"
// globals: `guard variable for'CButtonTimed::GetEntityClassInternal(void)::g_EntityCButtonTimedClass, CButtonTimed::GetEntityClassInternal(void)::g_EntityCButtonTimedClass, __dso_handle, CButtonTimed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CButtonTimed::GetEntityClassInfo(void)::g_EntityCButtonTimedClassInfo, CButtonTimed::GetEntityClassInfo(void)::g_EntityCButtonTimedClassInfo
CEntityClass *__cdecl CButtonTimed::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CButtonTimed::GetEntityClassInternal(void)::g_EntityCButtonTimedClass == 0
    && __cxa_guard_acquire(&`guard variable for'CButtonTimed::GetEntityClassInternal(void)::g_EntityCButtonTimedClass) != 0 )
  {
    CEntityClass::CEntityClass(&CButtonTimed::GetEntityClassInternal(void)::g_EntityCButtonTimedClass);
    CButtonTimed::GetEntityClassInternal(void)::g_EntityCButtonTimedClass._vptr_CEntityClass = off_3FD28F0;
    __cxa_guard_release(&`guard variable for'CButtonTimed::GetEntityClassInternal(void)::g_EntityCButtonTimedClass);
    __cxa_atexit(
      CButtonTimed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CButtonTimed::GetEntityClassInternal(void)::g_EntityCButtonTimedClass,
      &_dso_handle);
  }
  if ( g_pEntityCButtonTimedClass != 0 )
    return &CButtonTimed::GetEntityClassInternal(void)::g_EntityCButtonTimedClass;
  if ( `guard variable for'CButtonTimed::GetEntityClassInfo(void)::g_EntityCButtonTimedClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CButtonTimed::GetEntityClassInfo(void)::g_EntityCButtonTimedClassInfo) != 0 )
  {
    EntityClassInfo = CBaseButton::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CButtonTimed::GetEntityClassInfo(void)::g_EntityCButtonTimedClassInfo,
      "CButtonTimed",
      "func_button_timed",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CButtonTimed::GetEntityClassInfo(void)::g_EntityCButtonTimedClassInfo);
  }
  CButtonTimed::GetEntityClassInternal(void)::g_EntityCButtonTimedClass.m_pClassInfo = &CButtonTimed::GetEntityClassInfo(void)::g_EntityCButtonTimedClassInfo;
  CButtonTimed::GetEntityClassInternal(void)::g_EntityCButtonTimedClass.m_pBaseClassInfo = CButtonTimed::GetEntityClassInfo(void)::g_EntityCButtonTimedClassInfo.m_pBaseClassInfo;
  g_pEntityCButtonTimedClass = &CButtonTimed::GetEntityClassInternal(void)::g_EntityCButtonTimedClass;
  CButtonTimed::GetEntityClassInfo(void)::g_EntityCButtonTimedClassInfo.m_pClass = &CButtonTimed::GetEntityClassInternal(void)::g_EntityCButtonTimedClass;
  CButtonTimed::GetEntityClassInternal(void)::g_EntityCButtonTimedClass.m_pScriptClassDesc = GetScriptDesc<CBaseModelEntity>(0);
  g_pEntityCButtonTimedClass->m_pComponentOverrides = 0;
  return &CButtonTimed::GetEntityClassInternal(void)::g_EntityCButtonTimedClass;
}


// CButtonTimed::GetEntityClass  (line 200, @0x00000000021b10e0, libserver.so)
CEntityClass *__cdecl CButtonTimed::GetEntityClass()
{
  return g_pEntityCButtonTimedClass;
}


// CButtonTimed::Schema_DynamicBinding  (line 200, @0x00000000021b2bd0, libserver.so)
// calls: CButtonTimed::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CButtonTimed::Schema_DynamicBinding(const CButtonTimed *const this)
{
  CButtonTimed::Schema_VerifyBindingIsRegistered();
  return CButtonTimed::s_pSchemaBinding;
}


// CButtonTimed::ObjectCaps  (line 211, @0x00000000021b2340, libserver.so)
// calls: CBaseButton::ObjectCaps
int __fastcall CButtonTimed::ObjectCaps(CButtonTimed *const this)
{
  return CBaseButton::ObjectCaps(this) | 0x22;
}


