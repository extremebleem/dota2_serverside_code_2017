
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPathCorner::~CPathCorner  (line 10, @0x00000000023067d0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPathCorner::~CPathCorner(CPathCorner *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPathCorner::~CPathCorner  (line 10, @0x00000000023067f0, libserver.so)  // inlines: ~CPathCorner, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPathCorner::~CPathCorner(CPathCorner *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPathCorner::GetEntityClass  (line 12, @0x0000000002303060, libserver.so)
CEntityClass *__cdecl CPathCorner::GetEntityClass()
{
  return g_pEntityCPathCornerClass;
}


// CPathCorner::Schema_DynamicBinding  (line 12, @0x0000000002303070, libserver.so)
// globals: CPathCorner::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPathCorner::Schema_DynamicBinding(const CPathCorner *const this)
{
  return CPathCorner::s_pSchemaBinding;
}


// CPathCorner::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 12, @0x0000000002303080, libserver.so)
// globals: CPathCorner::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPathCorner::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPathCorner::CEntityInstanceEntityClass *const this)
{
  return CPathCorner::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPathCorner::CEntityInstanceEntityClass::DestructInstance  (line 12, @0x0000000002303090, libserver.so)  // inlines: Destruct<CPathCorner>
void __fastcall CPathCorner::CEntityInstanceEntityClass::DestructInstance(
        CPathCorner::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPathCorner::CEntityInstanceEntityClass::FreeInstance  (line 12, @0x00000000023030b0, libserver.so)
void __fastcall CPathCorner::CEntityInstanceEntityClass::FreeInstance(
        CPathCorner::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPathCorner::CEntityInstanceEntityClass::CanAllocate  (line 12, @0x00000000023030d0, libserver.so)
bool __fastcall CPathCorner::CEntityInstanceEntityClass::CanAllocate(
        const CPathCorner::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPathCorner::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 12, @0x00000000023030e0, libserver.so)
// globals: CPathCorner::s_pSchemaBinding
const ISchemaBinding *__fastcall CPathCorner::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPathCorner::CEntityInstanceEntityClass *const this)
{
  return CPathCorner::s_pSchemaBinding;
}


// CPathCorner::CEntityInstanceEntityClass::AllocateInstance  (line 12, @0x00000000023058e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPathCorner::CEntityInstanceEntityClass::AllocateInstance(
        CPathCorner::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 816);
  memset(v1, 0, 0x330u);
  return v1;
}


// CPathCorner::CEntityInstanceEntityClass::ConstructInstance  (line 12, @0x0000000002305fe0, libserver.so)  // inlines: CEntityIOOutput, CPathCorner, CPointEntity, CUtlSymbolLarge, Construct<CPathCorner>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPathCorner::CEntityInstanceEntityClass::ConstructInstance(
        CPathCorner::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = 0;
    *p = &off_4074B90;
    *(p + 195) = -1082130432;
    *(p + 98) = off_3F7C190;
    *(p + 101) = 0;
  }
  return p;
}


// CPathCorner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 12, @0x0000000002308ef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPathCorner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPathCorner::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPathCorner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 12, @0x0000000002308f10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPathCorner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPathCorner::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPathCorner::GetEntityClassInfo  (line 12, @0x000000000230ce50, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CPathCornerCrash::GetEntityClassInternal
// strings: "path_corner", "CPathCorner", "CPointEntity"
// globals: `guard variable for'CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo, CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo, `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo, CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo
CEntityClassInfo *__cdecl CPathCorner::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo != 0 )
    return &CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo) == 0 )
    return &CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo;
  if ( `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo,
      "CPointEntity",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo,
    "CPathCorner",
    "path_corner",
    0,
    &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo);
  return &CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo;
}


// CPathCorner::GetEntityClassInternal  (line 12, @0x0000000002312600, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "path_corner", "CPathCorner"
// globals: `guard variable for'CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass, CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPathCorner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo, CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo
CEntityClass *__cdecl CPathCorner::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass) != 0 )
  {
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_designerName.u.m_Id = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass._vptr_CEntityClass = off_3F79390;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_ComponentOffsets.m_Size = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_AllHelpers.m_Size = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_classInputs.m_Size = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_classOutputs.m_Size = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_requiredEHandle.m_Index = -1;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_hNetworkSerializer = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_pBaseClassInfo = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_pClassInfo = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_flags = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_nAllHelpersFlags = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_pScriptClassDesc = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_pInputs = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_nInputCount = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_pOutputs = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_nOutputCount = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_pGameClass = 0;
    CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass._vptr_CEntityClass = off_40743F0;
    __cxa_guard_release(&`guard variable for'CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass);
    __cxa_atexit(
      CPathCorner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass,
      &_dso_handle);
  }
  if ( g_pEntityCPathCornerClass != 0 )
    return &CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass;
  if ( `guard variable for'CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo,
      "CPathCorner",
      "path_corner",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo);
  }
  CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_pClassInfo = &CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo;
  CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_pBaseClassInfo = CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo.m_pBaseClassInfo;
  g_pEntityCPathCornerClass = &CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass;
  CPathCorner::GetEntityClassInfo(void)::g_EntityCPathCornerClassInfo.m_pClass = &CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass;
  CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPathCornerClass->m_pComponentOverrides = 0;
  return &CPathCorner::GetEntityClassInternal(void)::g_EntityCPathCornerClass;
}


// CPathCorner::GetDelay  (line 19, @0x00000000023030f0, libserver.so)
float __fastcall CPathCorner::GetDelay(CPathCorner *const this)
{
  return this->m_flWait;
}


// CPathCorner::GetAutoAimRadius  (line 20, @0x0000000002303100, libserver.so)
float __fastcall CPathCorner::GetAutoAimRadius(CPathCorner *const this)
{
  return this->m_flRadius;
}


