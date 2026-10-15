
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncOccluder::~CFuncOccluder  (line 12, @0x0000000002246f80, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncOccluder::~CFuncOccluder(CFuncOccluder *const this)
{
  this->_vptr_IHandleEntity = &off_4049C30;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncOccluder::~CFuncOccluder  (line 12, @0x0000000002246fa0, libserver.so)  // inlines: ~CFuncOccluder
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncOccluder::~CFuncOccluder(CFuncOccluder *const this)
{
  this->_vptr_IHandleEntity = &off_4049C30;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncOccluder::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 14, @0x0000000001fea620, libserver.so)
// globals: CFuncOccluder::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncOccluder::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncOccluder::CEntityInstanceEntityClass *const this)
{
  return CFuncOccluder::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncOccluder::CEntityInstanceEntityClass::DestructInstance  (line 14, @0x0000000001fea630, libserver.so)  // inlines: Destruct<CFuncOccluder>
void __fastcall CFuncOccluder::CEntityInstanceEntityClass::DestructInstance(
        CFuncOccluder::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncOccluder::CEntityInstanceEntityClass::FreeInstance  (line 14, @0x0000000001fea650, libserver.so)
void __fastcall CFuncOccluder::CEntityInstanceEntityClass::FreeInstance(
        CFuncOccluder::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncOccluder::CEntityInstanceEntityClass::CanAllocate  (line 14, @0x0000000001fea670, libserver.so)
bool __fastcall CFuncOccluder::CEntityInstanceEntityClass::CanAllocate(
        const CFuncOccluder::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncOccluder::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 14, @0x0000000001fea680, libserver.so)
// globals: CFuncOccluder::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncOccluder::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncOccluder::CEntityInstanceEntityClass *const this)
{
  return CFuncOccluder::s_pSchemaBinding;
}


// CFuncOccluder::CEntityInstanceEntityClass::AllocateInstance  (line 14, @0x0000000001febba0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncOccluder::CEntityInstanceEntityClass::AllocateInstance(
        CFuncOccluder::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1160);
  memset(v1, 0, 0x488u);
  return v1;
}


// CFuncOccluder::CEntityInstanceEntityClass::ConstructInstance  (line 14, @0x0000000001fec220, libserver.so)  // inlines: Construct<CFuncOccluder>
// calls: CFuncOccluder::CFuncOccluder
CEntityInstance *__fastcall CFuncOccluder::CEntityInstanceEntityClass::ConstructInstance(
        CFuncOccluder::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFuncOccluder::CFuncOccluder(p);
  return p;
}


// CFuncOccluder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 14, @0x0000000001fecf40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncOccluder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncOccluder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncOccluder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 14, @0x0000000001fecf60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncOccluder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncOccluder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncOccluder::GetEntityClassInfo  (line 14, @0x0000000001feebf0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CFuncDistanceOccluder::GetEntityClassInternal
// strings: "func_occluder", "CFuncOccluder", "basemodelentity", "CBaseModelEntity", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo, CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CFuncOccluder::GetEntityClassInfo()
{
  if ( `guard variable for'CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo != 0 )
    return &CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo) == 0 )
    return &CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo;
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
    &CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo,
    "CFuncOccluder",
    "func_occluder",
    0,
    &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo);
  return &CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo;
}


// CFuncOccluder::GetEntityClassInternal  (line 14, @0x0000000001ff2490, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "func_occluder", "CFuncOccluder"
// globals: `guard variable for'CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass, CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncOccluder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo, CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo
CEntityClass *__cdecl CFuncOccluder::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass) != 0 )
  {
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_designerName.u.m_Id = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass._vptr_CEntityClass = off_3F79390;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_ComponentOffsets.m_Size = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_AllHelpers.m_Size = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_classInputs.m_Size = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_classOutputs.m_Size = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_requiredEHandle.m_Index = -1;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_hNetworkSerializer = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_pBaseClassInfo = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_pClassInfo = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_flags = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_nAllHelpersFlags = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_pScriptClassDesc = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_pInputs = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_nInputCount = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_pOutputs = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_nOutputCount = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_pGameClass = 0;
    CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass._vptr_CEntityClass = off_3FDA170;
    __cxa_guard_release(&`guard variable for'CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass);
    __cxa_atexit(
      CFuncOccluder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncOccluderClass != 0 )
    return &CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass;
  if ( `guard variable for'CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo,
      "CFuncOccluder",
      "func_occluder",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo);
  }
  CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_pClassInfo = &CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo;
  CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_pBaseClassInfo = CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncOccluderClass = &CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass;
  CFuncOccluder::GetEntityClassInfo(void)::g_EntityCFuncOccluderClassInfo.m_pClass = &CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass;
  CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncOccluderClass->m_pComponentOverrides = 0;
  return &CFuncOccluder::GetEntityClassInternal(void)::g_EntityCFuncOccluderClass;
}


// CFuncOccluder::GetEntityClass  (line 14, @0x00000000022455a0, libserver.so)
CEntityClass *__cdecl CFuncOccluder::GetEntityClass()
{
  return g_pEntityCFuncOccluderClass;
}


// CFuncOccluder::Schema_DynamicBinding  (line 14, @0x00000000022472e0, libserver.so)
// calls: CFuncOccluder::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFuncOccluder::Schema_DynamicBinding(const CFuncOccluder *const this)
{
  CFuncOccluder::Schema_VerifyBindingIsRegistered();
  return CFuncOccluder::s_pSchemaBinding;
}


