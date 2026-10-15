
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointWorldText::~CPointWorldText  (line 93, @0x000000000233b960, libserver.so)  // inlines: ~CModelPointEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CPointWorldText::~CPointWorldText(CPointWorldText *const this)
{
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPointWorldText::~CPointWorldText  (line 93, @0x000000000233b980, libserver.so)  // inlines: ~CModelPointEntity, ~CPointWorldText
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CPointWorldText::~CPointWorldText(CPointWorldText *const this)
{
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointWorldText::GetEntityClass  (line 95, @0x0000000002339ef0, libserver.so)
CEntityClass *__cdecl CPointWorldText::GetEntityClass()
{
  return g_pEntityCPointWorldTextClass;
}


// CPointWorldText::Schema_DynamicBinding  (line 95, @0x0000000002339f00, libserver.so)
// globals: CPointWorldText::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointWorldText::Schema_DynamicBinding(const CPointWorldText *const this)
{
  return CPointWorldText::s_pSchemaBinding;
}


// CPointWorldText::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 95, @0x0000000002339f10, libserver.so)
// globals: CPointWorldText::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointWorldText::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointWorldText::CEntityInstanceEntityClass *const this)
{
  return CPointWorldText::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointWorldText::CEntityInstanceEntityClass::DestructInstance  (line 95, @0x0000000002339f20, libserver.so)  // inlines: Destruct<CPointWorldText>
void __fastcall CPointWorldText::CEntityInstanceEntityClass::DestructInstance(
        CPointWorldText::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointWorldText::CEntityInstanceEntityClass::FreeInstance  (line 95, @0x0000000002339f40, libserver.so)
void __fastcall CPointWorldText::CEntityInstanceEntityClass::FreeInstance(
        CPointWorldText::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointWorldText::CEntityInstanceEntityClass::CanAllocate  (line 95, @0x0000000002339f60, libserver.so)
bool __fastcall CPointWorldText::CEntityInstanceEntityClass::CanAllocate(
        const CPointWorldText::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointWorldText::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 95, @0x0000000002339f70, libserver.so)
// globals: CPointWorldText::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointWorldText::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointWorldText::CEntityInstanceEntityClass *const this)
{
  return CPointWorldText::s_pSchemaBinding;
}


// CPointWorldText::CEntityInstanceEntityClass::AllocateInstance  (line 95, @0x000000000233b260, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointWorldText::CEntityInstanceEntityClass::AllocateInstance(
        CPointWorldText::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1760);
  memset(v1, 0, 0x6E0u);
  return v1;
}


// CPointWorldText::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 95, @0x000000000233ca80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointWorldText::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointWorldText::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPointWorldText::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 95, @0x000000000233caa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointWorldText::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointWorldText::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointWorldText::CEntityInstanceEntityClass::ConstructInstance  (line 95, @0x000000000233ef40, libserver.so)  // inlines: Construct<CPointWorldText>
// calls: CPointWorldText::CPointWorldText
CEntityInstance *__fastcall CPointWorldText::CEntityInstanceEntityClass::ConstructInstance(
        CPointWorldText::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPointWorldText::CPointWorldText(p);
  return p;
}


// CPointWorldText::GetEntityClassInternal  (line 95, @0x0000000002345240, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CPointWorldText>, CModelPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "point_worldtext", "CPointWorldText"
// globals: `guard variable for'CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass, CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointWorldText::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointWorldText::GetEntityClassInfo(void)::g_EntityCPointWorldTextClassInfo, CPointWorldText::GetEntityClassInfo(void)::g_EntityCPointWorldTextClassInfo
CEntityClass *__cdecl CPointWorldText::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass) != 0 )
  {
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_designerName.u.m_Id = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass._vptr_CEntityClass = off_3F79390;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_ComponentOffsets.m_Size = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_AllHelpers.m_Size = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_classInputs.m_Size = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_classOutputs.m_Size = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_requiredEHandle.m_Index = -1;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_hNetworkSerializer = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_pBaseClassInfo = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_pClassInfo = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_flags = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_nAllHelpersFlags = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_pScriptClassDesc = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_pInputs = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_nInputCount = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_pOutputs = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_nOutputCount = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_pGameClass = 0;
    CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass._vptr_CEntityClass = off_4090210;
    __cxa_guard_release(&`guard variable for'CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass);
    __cxa_atexit(
      CPointWorldText::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointWorldTextClass != 0 )
    return &CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass;
  if ( `guard variable for'CPointWorldText::GetEntityClassInfo(void)::g_EntityCPointWorldTextClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointWorldText::GetEntityClassInfo(void)::g_EntityCPointWorldTextClassInfo) != 0 )
  {
    EntityClassInfo = CModelPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointWorldText::GetEntityClassInfo(void)::g_EntityCPointWorldTextClassInfo,
      "CPointWorldText",
      "point_worldtext",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointWorldText::GetEntityClassInfo(void)::g_EntityCPointWorldTextClassInfo);
  }
  CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_pClassInfo = &CPointWorldText::GetEntityClassInfo(void)::g_EntityCPointWorldTextClassInfo;
  CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_pBaseClassInfo = CPointWorldText::GetEntityClassInfo(void)::g_EntityCPointWorldTextClassInfo.m_pBaseClassInfo;
  g_pEntityCPointWorldTextClass = &CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass;
  CPointWorldText::GetEntityClassInfo(void)::g_EntityCPointWorldTextClassInfo.m_pClass = &CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass;
  CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass.m_pScriptClassDesc = GetScriptDesc<CPointWorldText>(0);
  g_pEntityCPointWorldTextClass->m_pComponentOverrides = 0;
  return &CPointWorldText::GetEntityClassInternal(void)::g_EntityCPointWorldTextClass;
}


// CPointWorldText::ShouldDraw  (line 119, @0x0000000002339f80, libserver.so)
bool __fastcall CPointWorldText::ShouldDraw(CPointWorldText *const this)
{
  return 1;
}


