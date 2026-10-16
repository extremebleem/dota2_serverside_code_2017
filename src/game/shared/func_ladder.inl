
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CInfoLadderDismount::~CInfoLadderDismount  (line 19, @0x0000000002246d50, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoLadderDismount::~CInfoLadderDismount(CInfoLadderDismount *const this)
{
  this->_vptr_IHandleEntity = &off_4046310;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoLadderDismount::~CInfoLadderDismount  (line 19, @0x0000000002246d70, libserver.so)  // inlines: ~CInfoLadderDismount
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoLadderDismount::~CInfoLadderDismount(CInfoLadderDismount *const this)
{
  this->_vptr_IHandleEntity = &off_4046310;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoLadderDismount::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 21, @0x0000000001f0f2b0, libserver.so)
// globals: CInfoLadderDismount::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoLadderDismount::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoLadderDismount::CEntityInstanceEntityClass *const this)
{
  return CInfoLadderDismount::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoLadderDismount::CEntityInstanceEntityClass::DestructInstance  (line 21, @0x0000000001f0f2c0, libserver.so)  // inlines: Destruct<CInfoLadderDismount>
void __fastcall CInfoLadderDismount::CEntityInstanceEntityClass::DestructInstance(
        CInfoLadderDismount::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoLadderDismount::CEntityInstanceEntityClass::FreeInstance  (line 21, @0x0000000001f0f2e0, libserver.so)
void __fastcall CInfoLadderDismount::CEntityInstanceEntityClass::FreeInstance(
        CInfoLadderDismount::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoLadderDismount::CEntityInstanceEntityClass::CanAllocate  (line 21, @0x0000000001f0f300, libserver.so)
bool __fastcall CInfoLadderDismount::CEntityInstanceEntityClass::CanAllocate(
        const CInfoLadderDismount::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoLadderDismount::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 21, @0x0000000001f0f310, libserver.so)
// globals: CInfoLadderDismount::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoLadderDismount::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoLadderDismount::CEntityInstanceEntityClass *const this)
{
  return CInfoLadderDismount::s_pSchemaBinding;
}


// CInfoLadderDismount::CEntityInstanceEntityClass::AllocateInstance  (line 21, @0x0000000001f10e50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoLadderDismount::CEntityInstanceEntityClass::AllocateInstance(
        CInfoLadderDismount::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CInfoLadderDismount::CEntityInstanceEntityClass::ConstructInstance  (line 21, @0x0000000001f11010, libserver.so)  // inlines: CInfoLadderDismount, Construct<CInfoLadderDismount>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CInfoLadderDismount::CEntityInstanceEntityClass::ConstructInstance(
        CInfoLadderDismount::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4046310;
  }
  return p;
}


// CInfoLadderDismount::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x0000000001f12c70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoLadderDismount::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoLadderDismount::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CInfoLadderDismount::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x0000000001f12c90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoLadderDismount::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoLadderDismount::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoLadderDismount::GetEntityClassInternal  (line 21, @0x0000000001f18ce0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_game_shared_header_files_01.cpp
// strings: "info_ladder_dismount", "CInfoLadderDismount"
// globals: `guard variable for'CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass, CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoLadderDismount::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoLadderDismount::GetEntityClassInfo(void)::g_EntityCInfoLadderDismountClassInfo, CInfoLadderDismount::GetEntityClassInfo(void)::g_EntityCInfoLadderDismountClassInfo
CEntityClass *__cdecl CInfoLadderDismount::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass) != 0 )
  {
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_designerName.u.m_Id = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass._vptr_CEntityClass = off_3F79390;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_ComponentOffsets.m_Size = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_AllHelpers.m_Size = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_instanceUnserializer.m_atomicFields,
      4);
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_classInputs.m_Size = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_classOutputs.m_Size = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_requiredEHandle.m_Index = -1;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_hNetworkSerializer = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_pBaseClassInfo = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_pClassInfo = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_flags = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_nAllHelpersFlags = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_pScriptClassDesc = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_pInputs = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_nInputCount = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_pOutputs = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_nOutputCount = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_pGameClass = 0;
    CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass._vptr_CEntityClass = off_3FC5F90;
    __cxa_guard_release(&`guard variable for'CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass);
    __cxa_atexit(
      CInfoLadderDismount::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoLadderDismountClass != 0 )
    return &CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass;
  if ( `guard variable for'CInfoLadderDismount::GetEntityClassInfo(void)::g_EntityCInfoLadderDismountClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoLadderDismount::GetEntityClassInfo(void)::g_EntityCInfoLadderDismountClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoLadderDismount::GetEntityClassInfo(void)::g_EntityCInfoLadderDismountClassInfo,
      "CInfoLadderDismount",
      "info_ladder_dismount",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoLadderDismount::GetEntityClassInfo(void)::g_EntityCInfoLadderDismountClassInfo);
  }
  CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_pClassInfo = &CInfoLadderDismount::GetEntityClassInfo(void)::g_EntityCInfoLadderDismountClassInfo;
  CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_pBaseClassInfo = CInfoLadderDismount::GetEntityClassInfo(void)::g_EntityCInfoLadderDismountClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoLadderDismountClass = &CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass;
  CInfoLadderDismount::GetEntityClassInfo(void)::g_EntityCInfoLadderDismountClassInfo.m_pClass = &CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass;
  CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoLadderDismountClass->m_pComponentOverrides = 0;
  return &CInfoLadderDismount::GetEntityClassInternal(void)::g_EntityCInfoLadderDismountClass;
}


// CInfoLadderDismount::Schema_DynamicBinding  (line 21, @0x0000000002247320, libserver.so)
// calls: CInfoLadderDismount::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CInfoLadderDismount::Schema_DynamicBinding(
        const CInfoLadderDismount *const this)
{
  CInfoLadderDismount::Schema_VerifyBindingIsRegistered();
  return CInfoLadderDismount::s_pSchemaBinding;
}


// CFuncLadder::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 38, @0x0000000001f0f320, libserver.so)
// globals: CFuncLadder::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncLadder::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncLadder::CEntityInstanceEntityClass *const this)
{
  return CFuncLadder::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncLadder::CEntityInstanceEntityClass::DestructInstance  (line 38, @0x0000000001f0f330, libserver.so)  // inlines: Destruct<CFuncLadder>
void __fastcall CFuncLadder::CEntityInstanceEntityClass::DestructInstance(
        CFuncLadder::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncLadder::CEntityInstanceEntityClass::FreeInstance  (line 38, @0x0000000001f0f350, libserver.so)
void __fastcall CFuncLadder::CEntityInstanceEntityClass::FreeInstance(
        CFuncLadder::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncLadder::CEntityInstanceEntityClass::CanAllocate  (line 38, @0x0000000001f0f370, libserver.so)
bool __fastcall CFuncLadder::CEntityInstanceEntityClass::CanAllocate(
        const CFuncLadder::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncLadder::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 38, @0x0000000001f0f380, libserver.so)
// globals: CFuncLadder::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncLadder::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncLadder::CEntityInstanceEntityClass *const this)
{
  return CFuncLadder::s_pSchemaBinding;
}


// CFuncLadder::CEntityInstanceEntityClass::AllocateInstance  (line 38, @0x0000000001f10e90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncLadder::CEntityInstanceEntityClass::AllocateInstance(
        CFuncLadder::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1296);
  memset(v1, 0, 0x510u);
  return v1;
}


// CFuncLadder::CEntityInstanceEntityClass::ConstructInstance  (line 38, @0x0000000001f11180, libserver.so)  // inlines: Construct<CFuncLadder>
// calls: CFuncLadder::CFuncLadder
CEntityInstance *__fastcall CFuncLadder::CEntityInstanceEntityClass::ConstructInstance(
        CFuncLadder::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFuncLadder::CFuncLadder(p);
  return p;
}


// CFuncLadder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 38, @0x0000000001f12b30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncLadder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncLadder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFuncLadder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 38, @0x0000000001f12b50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncLadder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncLadder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncLadder::GetEntityClassInternal  (line 38, @0x0000000001f196c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_game_shared_header_files_01.cpp
// strings: "func_ladder", "CFuncLadder", "basemodelentity", "CBaseModelEntity", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass, CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncLadder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo, CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo (13 total)
CEntityClass *__cdecl CFuncLadder::GetEntityClassInternal()
{
  if ( `guard variable for'CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass) != 0 )
  {
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_designerName.u.m_Id = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass._vptr_CEntityClass = off_3F79390;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_ComponentOffsets.m_Size = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_AllHelpers.m_Size = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_classInputs.m_Size = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_classOutputs.m_Size = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_requiredEHandle.m_Index = -1;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_hNetworkSerializer = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_pBaseClassInfo = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_pClassInfo = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_flags = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_nAllHelpersFlags = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_pScriptClassDesc = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_pInputs = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_nInputCount = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_pOutputs = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_nOutputCount = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_pGameClass = 0;
    CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass._vptr_CEntityClass = off_3FC6010;
    __cxa_guard_release(&`guard variable for'CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass);
    __cxa_atexit(
      CFuncLadder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncLadderClass != 0 )
    return &CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass;
  if ( `guard variable for'CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
      {
        if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
          && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
        {
          CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
            &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
            "CGameEntity",
            0,
            0,
            &g_EntityRootClassInfo);
          __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
        }
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
          "CBaseEntity",
          0,
          0,
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
        __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
        "CBaseModelEntity",
        "basemodelentity",
        0,
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo,
      "CFuncLadder",
      "func_ladder",
      0,
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo);
  }
  CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_pClassInfo = &CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo;
  CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_pBaseClassInfo = CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncLadderClass = &CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass;
  CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo.m_pClass = &CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass;
  CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncLadderClass->m_pComponentOverrides = 0;
  return &CFuncLadder::GetEntityClassInternal(void)::g_EntityCFuncLadderClass;
}


// CFuncLadder::GetEntityClass  (line 38, @0x00000000022457e0, libserver.so)
CEntityClass *__cdecl CFuncLadder::GetEntityClass()
{
  return g_pEntityCFuncLadderClass;
}


// CFuncLadder::Schema_DynamicBinding  (line 38, @0x0000000002247340, libserver.so)
// calls: CFuncLadder::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFuncLadder::Schema_DynamicBinding(const CFuncLadder *const this)
{
  CFuncLadder::Schema_VerifyBindingIsRegistered();
  return CFuncLadder::s_pSchemaBinding;
}


// CFuncLadder::GetEntityClassInfo  (line 38, @0x000000000224b810, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CFuncLadderAlias_func_useableladder::GetEntityClassInternal, CFuncLadderAlias_func_useableladder::CEntityInstanceEntityClass::InitOptionalTables
// strings: "func_ladder", "CFuncLadder", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo, CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo
CEntityClassInfo *__cdecl CFuncLadder::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo != 0 )
    return &CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo) == 0 )
    return &CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo;
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
    &CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo,
    "CFuncLadder",
    "func_ladder",
    0,
    &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo);
  return &CFuncLadder::GetEntityClassInfo(void)::g_EntityCFuncLadderClassInfo;
}


