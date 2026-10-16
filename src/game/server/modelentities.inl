
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncBrush::~CFuncBrush  (line 23, @0x00000000022a9e60, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncBrush::~CFuncBrush(CFuncBrush *const this)
{
  this->_vptr_IHandleEntity = &off_406EE90;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncBrush::~CFuncBrush  (line 23, @0x00000000022a9e80, libserver.so)  // inlines: ~CFuncBrush
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncBrush::~CFuncBrush(CFuncBrush *const this)
{
  this->_vptr_IHandleEntity = &off_406EE90;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncBrush::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 25, @0x0000000001feacd0, libserver.so)
// globals: CFuncBrush::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncBrush::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncBrush::CEntityInstanceEntityClass *const this)
{
  return CFuncBrush::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncBrush::CEntityInstanceEntityClass::DestructInstance  (line 25, @0x0000000001feace0, libserver.so)  // inlines: Destruct<CFuncBrush>
void __fastcall CFuncBrush::CEntityInstanceEntityClass::DestructInstance(
        CFuncBrush::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncBrush::CEntityInstanceEntityClass::FreeInstance  (line 25, @0x0000000001fead00, libserver.so)
void __fastcall CFuncBrush::CEntityInstanceEntityClass::FreeInstance(
        CFuncBrush::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncBrush::CEntityInstanceEntityClass::CanAllocate  (line 25, @0x0000000001fead20, libserver.so)
bool __fastcall CFuncBrush::CEntityInstanceEntityClass::CanAllocate(
        const CFuncBrush::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncBrush::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 25, @0x0000000001fead30, libserver.so)
// globals: CFuncBrush::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncBrush::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncBrush::CEntityInstanceEntityClass *const this)
{
  return CFuncBrush::s_pSchemaBinding;
}


// CFuncBrush::CEntityInstanceEntityClass::AllocateInstance  (line 25, @0x0000000001febf60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncBrush::CEntityInstanceEntityClass::AllocateInstance(
        CFuncBrush::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1184);
  memset(v1, 0, 0x4A0u);
  return v1;
}


// CFuncBrush::CEntityInstanceEntityClass::ConstructInstance  (line 25, @0x0000000001fec3e0, libserver.so)  // inlines: Construct<CFuncBrush>
// calls: CFuncBrush::CFuncBrush
CEntityInstance *__fastcall CFuncBrush::CEntityInstanceEntityClass::ConstructInstance(
        CFuncBrush::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFuncBrush::CFuncBrush(p);
  return p;
}


// CFuncBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 25, @0x0000000001fed120, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncBrush::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFuncBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 25, @0x0000000001fed140, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncBrush::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncBrush::GetEntityClassInternal  (line 25, @0x0000000001ff45e0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "func_brush", "CFuncBrush"
// globals: `guard variable for'CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass, CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncBrush::GetEntityClassInfo(void)::g_EntityCFuncBrushClassInfo, CFuncBrush::GetEntityClassInfo(void)::g_EntityCFuncBrushClassInfo
CEntityClass *__cdecl CFuncBrush::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass) != 0 )
  {
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_designerName.u.m_Id = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass._vptr_CEntityClass = off_3F79390;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_ComponentOffsets.m_Size = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_AllHelpers.m_Size = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_classInputs.m_Size = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_classOutputs.m_Size = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_requiredEHandle.m_Index = -1;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_hNetworkSerializer = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_pBaseClassInfo = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_pClassInfo = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_flags = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_nAllHelpersFlags = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_pScriptClassDesc = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_pInputs = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_nInputCount = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_pOutputs = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_nOutputCount = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_pGameClass = 0;
    CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass._vptr_CEntityClass = off_3FDCD50;
    __cxa_guard_release(&`guard variable for'CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass);
    __cxa_atexit(
      CFuncBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncBrushClass != 0 )
    return &CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass;
  if ( `guard variable for'CFuncBrush::GetEntityClassInfo(void)::g_EntityCFuncBrushClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncBrush::GetEntityClassInfo(void)::g_EntityCFuncBrushClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncBrush::GetEntityClassInfo(void)::g_EntityCFuncBrushClassInfo,
      "CFuncBrush",
      "func_brush",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncBrush::GetEntityClassInfo(void)::g_EntityCFuncBrushClassInfo);
  }
  CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_pClassInfo = &CFuncBrush::GetEntityClassInfo(void)::g_EntityCFuncBrushClassInfo;
  CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_pBaseClassInfo = CFuncBrush::GetEntityClassInfo(void)::g_EntityCFuncBrushClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncBrushClass = &CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass;
  CFuncBrush::GetEntityClassInfo(void)::g_EntityCFuncBrushClassInfo.m_pClass = &CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass;
  CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncBrushClass->m_pComponentOverrides = 0;
  return &CFuncBrush::GetEntityClassInternal(void)::g_EntityCFuncBrushClass;
}


// CFuncBrush::GetEntityClass  (line 25, @0x00000000022a69d0, libserver.so)
CEntityClass *__cdecl CFuncBrush::GetEntityClass()
{
  return g_pEntityCFuncBrushClass;
}


// CFuncBrush::Schema_DynamicBinding  (line 25, @0x00000000022a9fa0, libserver.so)
// calls: CFuncBrush::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFuncBrush::Schema_DynamicBinding(const CFuncBrush *const this)
{
  CFuncBrush::Schema_VerifyBindingIsRegistered();
  return CFuncBrush::s_pSchemaBinding;
}


// CFuncBrush::ObjectCaps  (line 47, @0x0000000002248060, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CFuncBrush::ObjectCaps(CFuncBrush *const this)
{
  if ( (this->m_spawnflags.m_Value & 2) != 0 )
    return CBaseEntity::ObjectCaps(this);
  else
    return CBaseEntity::ObjectCaps(this) | 1;
}


