
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFlexExpresserShim::~CFlexExpresserShim  (line 19, @0x0000000002ec4bc0, libserver.so)  // inlines: ~CFlexCycler
// calls: CBaseFlex::~CBaseFlex
void __fastcall CFlexExpresserShim::~CFlexExpresserShim(CFlexExpresserShim *const this)
{
  this->_vptr_IHandleEntity = &off_403CAF0;
  CBaseFlex::~CBaseFlex(this);
}


// CFlexExpresserShim::~CFlexExpresserShim  (line 19, @0x0000000002ec4be0, libserver.so)  // inlines: ~CFlexCycler, ~CFlexExpresserShim
// calls: CBaseFlex::~CBaseFlex, CBaseEntity::operator delete
void __fastcall CFlexExpresserShim::~CFlexExpresserShim(CFlexExpresserShim *const this)
{
  this->_vptr_IHandleEntity = &off_403CAF0;
  CBaseFlex::~CBaseFlex(this);
  CBaseEntity::operator delete(this);
}


// CFlexExpresserShim::Schema_DynamicBinding  (line 21, @0x0000000002ec4780, libserver.so)
// globals: CFlexExpresserShim::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFlexExpresserShim::Schema_DynamicBinding(
        const CFlexExpresserShim *const this)
{
  return CFlexExpresserShim::s_pSchemaBinding;
}


// CFlexExpresserShim::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 21, @0x0000000002ec4790, libserver.so)
// globals: CFlexExpresserShim::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFlexExpresserShim::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFlexExpresserShim::CEntityInstanceEntityClass *const this)
{
  return CFlexExpresserShim::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFlexExpresserShim::CEntityInstanceEntityClass::DestructInstance  (line 21, @0x0000000002ec47a0, libserver.so)  // inlines: Destruct<CFlexExpresserShim>
void __fastcall CFlexExpresserShim::CEntityInstanceEntityClass::DestructInstance(
        CFlexExpresserShim::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFlexExpresserShim::CEntityInstanceEntityClass::FreeInstance  (line 21, @0x0000000002ec47c0, libserver.so)
void __fastcall CFlexExpresserShim::CEntityInstanceEntityClass::FreeInstance(
        CFlexExpresserShim::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFlexExpresserShim::CEntityInstanceEntityClass::CanAllocate  (line 21, @0x0000000002ec47e0, libserver.so)
bool __fastcall CFlexExpresserShim::CEntityInstanceEntityClass::CanAllocate(
        const CFlexExpresserShim::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFlexExpresserShim::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 21, @0x0000000002ec47f0, libserver.so)
// globals: CFlexExpresserShim::s_pSchemaBinding
const ISchemaBinding *__fastcall CFlexExpresserShim::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFlexExpresserShim::CEntityInstanceEntityClass *const this)
{
  return CFlexExpresserShim::s_pSchemaBinding;
}


// CFlexExpresserShim::CEntityInstanceEntityClass::AllocateInstance  (line 21, @0x0000000002ec4a20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFlexExpresserShim::CEntityInstanceEntityClass::AllocateInstance(
        CFlexExpresserShim::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 9616);
  memset(v1, 0, 0x2590u);
  return v1;
}


// CFlexExpresserShim::CEntityInstanceEntityClass::ConstructInstance  (line 21, @0x0000000002ec4b70, libserver.so)  // inlines: CFlexCycler, CFlexExpresserShim, CUtlSymbolLarge, Construct<CFlexExpresserShim>
// calls: CBaseFlex::CBaseFlex
CEntityInstance *__fastcall CFlexExpresserShim::CEntityInstanceEntityClass::ConstructInstance(
        CFlexExpresserShim::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseFlex::CBaseFlex(p);
    *(p + 1199) = 0;
    *(p + 2400) = 0;
    *(p + 2397) = 0;
    *p = &off_47AB210;
  }
  return p;
}


// CFlexExpresserShim::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x0000000002ec4f80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFlexExpresserShim::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFlexExpresserShim::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFlexExpresserShim::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x0000000002ec4fa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFlexExpresserShim::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFlexExpresserShim::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFlexExpresserShim::GetEntityClassInternal  (line 21, @0x0000000002ec5b30, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseFlex::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseFlex::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_misc_required_files_01.cpp
// strings: "CFlexExpresserShim", "CFlexCycler"
// globals: `guard variable for'CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass, CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFlexExpresserShim::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFlexExpresserShim::GetEntityClassInfo(void)::g_EntityCFlexExpresserShimClassInfo, CFlexExpresserShim::GetEntityClassInfo(void)::g_EntityCFlexExpresserShimClassInfo, `guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo (9 total)
CEntityClass *__cdecl CFlexExpresserShim::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass) != 0 )
  {
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_designerName.u.m_Id = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass._vptr_CEntityClass = off_3F79390;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_ComponentOffsets.m_Size = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_AllHelpers.m_Size = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_classInputs.m_Size = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_classOutputs.m_Size = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_requiredEHandle.m_Index = -1;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_hNetworkSerializer = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_pBaseClassInfo = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_pClassInfo = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_flags = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_nAllHelpersFlags = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_pScriptClassDesc = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_pInputs = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_nInputCount = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_pOutputs = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_nOutputCount = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_pGameClass = 0;
    CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass._vptr_CEntityClass = off_47AB190;
    __cxa_guard_release(&`guard variable for'CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass);
    __cxa_atexit(
      CFlexExpresserShim::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass,
      &_dso_handle);
  }
  if ( g_pEntityCFlexExpresserShimClass != 0 )
    return &CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass;
  if ( `guard variable for'CFlexExpresserShim::GetEntityClassInfo(void)::g_EntityCFlexExpresserShimClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFlexExpresserShim::GetEntityClassInfo(void)::g_EntityCFlexExpresserShimClassInfo) != 0 )
  {
    if ( `guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo) != 0 )
    {
      EntityClassInfo = CBaseFlex::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo,
        "CFlexCycler",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFlexExpresserShim::GetEntityClassInfo(void)::g_EntityCFlexExpresserShimClassInfo,
      "CFlexExpresserShim",
      0,
      0,
      &CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo);
    __cxa_guard_release(&`guard variable for'CFlexExpresserShim::GetEntityClassInfo(void)::g_EntityCFlexExpresserShimClassInfo);
  }
  CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_pClassInfo = &CFlexExpresserShim::GetEntityClassInfo(void)::g_EntityCFlexExpresserShimClassInfo;
  CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_pBaseClassInfo = CFlexExpresserShim::GetEntityClassInfo(void)::g_EntityCFlexExpresserShimClassInfo.m_pBaseClassInfo;
  g_pEntityCFlexExpresserShimClass = &CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass;
  CFlexExpresserShim::GetEntityClassInfo(void)::g_EntityCFlexExpresserShimClassInfo.m_pClass = &CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass;
  CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass.m_pScriptClassDesc = CBaseFlex::InitScriptDesc();
  g_pEntityCFlexExpresserShimClass->m_pComponentOverrides = 0;
  return &CFlexExpresserShim::GetEntityClassInternal(void)::g_EntityCFlexExpresserShimClass;
}


// CFlexExpresser::GetEntityClass  (line 39, @0x0000000002ec4800, libserver.so)
CEntityClass *__cdecl CFlexExpresser::GetEntityClass()
{
  return g_pEntityCFlexExpresserClass;
}


// CFlexExpresser::Schema_DynamicBinding  (line 39, @0x0000000002ec4810, libserver.so)
// globals: CFlexExpresser::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFlexExpresser::Schema_DynamicBinding(const CFlexExpresser *const this)
{
  return CFlexExpresser::s_pSchemaBinding;
}


// CFlexExpresser::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002ec4820, libserver.so)
// globals: CFlexExpresser::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFlexExpresser::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFlexExpresser::CEntityInstanceEntityClass *const this)
{
  return CFlexExpresser::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFlexExpresser::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002ec4830, libserver.so)  // inlines: Destruct<CFlexExpresser>
void __fastcall CFlexExpresser::CEntityInstanceEntityClass::DestructInstance(
        CFlexExpresser::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFlexExpresser::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002ec4850, libserver.so)
void __fastcall CFlexExpresser::CEntityInstanceEntityClass::FreeInstance(
        CFlexExpresser::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFlexExpresser::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002ec4870, libserver.so)
bool __fastcall CFlexExpresser::CEntityInstanceEntityClass::CanAllocate(
        const CFlexExpresser::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFlexExpresser::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002ec4880, libserver.so)
// globals: CFlexExpresser::s_pSchemaBinding
const ISchemaBinding *__fastcall CFlexExpresser::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFlexExpresser::CEntityInstanceEntityClass *const this)
{
  return CFlexExpresser::s_pSchemaBinding;
}


// CFlexExpresser::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002ec4a60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFlexExpresser::CEntityInstanceEntityClass::AllocateInstance(
        CFlexExpresser::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 9632);
  memset(v1, 0, 0x25A0u);
  return v1;
}


// CFlexExpresser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002ec4fd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFlexExpresser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFlexExpresser::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFlexExpresser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002ec4ff0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFlexExpresser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFlexExpresser::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFlexExpresser::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002ec53d0, libserver.so)  // inlines: Construct<CFlexExpresser>
// calls: CFlexExpresser::CFlexExpresser
CEntityInstance *__fastcall CFlexExpresser::CEntityInstanceEntityClass::ConstructInstance(
        CFlexExpresser::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFlexExpresser::CFlexExpresser(p);
  return p;
}


// CFlexExpresser::GetEntityClassInternal  (line 39, @0x0000000002ec5760, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseFlex::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseFlex::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_misc_required_files_01.cpp
// strings: "prop_talker", "CFlexExpresser", "CFlexExpresserShim", "CFlexCycler"
// globals: `guard variable for'CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass, CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFlexExpresser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFlexExpresser::GetEntityClassInfo(void)::g_EntityCFlexExpresserClassInfo, CFlexExpresser::GetEntityClassInfo(void)::g_EntityCFlexExpresserClassInfo, `guard variable for'CFlexExpresserShim::GetEntityClassInfo(void)::g_EntityCFlexExpresserShimClassInfo (11 total)
CEntityClass *__cdecl CFlexExpresser::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass) != 0 )
  {
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_designerName.u.m_Id = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass._vptr_CEntityClass = off_3F79390;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_ComponentOffsets.m_Size = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_AllHelpers.m_Size = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_classInputs.m_Size = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_classOutputs.m_Size = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_requiredEHandle.m_Index = -1;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_hNetworkSerializer = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_pBaseClassInfo = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_pClassInfo = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_flags = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_nAllHelpersFlags = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_pScriptClassDesc = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_pInputs = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_nInputCount = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_pOutputs = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_nOutputCount = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_pGameClass = 0;
    CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass._vptr_CEntityClass = off_47AC330;
    __cxa_guard_release(&`guard variable for'CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass);
    __cxa_atexit(
      CFlexExpresser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass,
      &_dso_handle);
  }
  if ( g_pEntityCFlexExpresserClass != 0 )
    return &CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass;
  if ( `guard variable for'CFlexExpresser::GetEntityClassInfo(void)::g_EntityCFlexExpresserClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFlexExpresser::GetEntityClassInfo(void)::g_EntityCFlexExpresserClassInfo) != 0 )
  {
    if ( `guard variable for'CFlexExpresserShim::GetEntityClassInfo(void)::g_EntityCFlexExpresserShimClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CFlexExpresserShim::GetEntityClassInfo(void)::g_EntityCFlexExpresserShimClassInfo) != 0 )
    {
      if ( `guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo) != 0 )
      {
        EntityClassInfo = CBaseFlex::GetEntityClassInfo();
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo,
          "CFlexCycler",
          0,
          0,
          EntityClassInfo);
        __cxa_guard_release(&`guard variable for'CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CFlexExpresserShim::GetEntityClassInfo(void)::g_EntityCFlexExpresserShimClassInfo,
        "CFlexExpresserShim",
        0,
        0,
        &CFlexCycler::GetEntityClassInfo(void)::g_EntityCFlexCyclerClassInfo);
      __cxa_guard_release(&`guard variable for'CFlexExpresserShim::GetEntityClassInfo(void)::g_EntityCFlexExpresserShimClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFlexExpresser::GetEntityClassInfo(void)::g_EntityCFlexExpresserClassInfo,
      "CFlexExpresser",
      "prop_talker",
      0,
      &CFlexExpresserShim::GetEntityClassInfo(void)::g_EntityCFlexExpresserShimClassInfo);
    __cxa_guard_release(&`guard variable for'CFlexExpresser::GetEntityClassInfo(void)::g_EntityCFlexExpresserClassInfo);
  }
  CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_pClassInfo = &CFlexExpresser::GetEntityClassInfo(void)::g_EntityCFlexExpresserClassInfo;
  CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_pBaseClassInfo = CFlexExpresser::GetEntityClassInfo(void)::g_EntityCFlexExpresserClassInfo.m_pBaseClassInfo;
  g_pEntityCFlexExpresserClass = &CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass;
  CFlexExpresser::GetEntityClassInfo(void)::g_EntityCFlexExpresserClassInfo.m_pClass = &CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass;
  CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass.m_pScriptClassDesc = CBaseFlex::InitScriptDesc();
  g_pEntityCFlexExpresserClass->m_pComponentOverrides = 0;
  return &CFlexExpresser::GetEntityClassInternal(void)::g_EntityCFlexExpresserClass;
}


