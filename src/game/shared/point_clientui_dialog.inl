
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointClientUIDialog::~CPointClientUIDialog  (line 21, @0x0000000001b55dd0, libserver.so)
// calls: CBaseClientUIEntity::~CBaseClientUIEntity
void __fastcall CPointClientUIDialog::~CPointClientUIDialog(CPointClientUIDialog *const this)
{
  this->_vptr_IHandleEntity = &off_3F7DBF0;
  CBaseClientUIEntity::~CBaseClientUIEntity(this);
}


// CPointClientUIDialog::~CPointClientUIDialog  (line 21, @0x0000000001b55df0, libserver.so)  // inlines: ~CPointClientUIDialog
// calls: CBaseClientUIEntity::~CBaseClientUIEntity, CBaseEntity::operator delete
void __fastcall CPointClientUIDialog::~CPointClientUIDialog(CPointClientUIDialog *const this)
{
  this->_vptr_IHandleEntity = &off_3F7DBF0;
  CBaseClientUIEntity::~CBaseClientUIEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointClientUIDialog::Schema_DynamicBinding  (line 23, @0x0000000001b55db0, libserver.so)
// calls: CPointClientUIDialog::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPointClientUIDialog::Schema_DynamicBinding(
        const CPointClientUIDialog *const this)
{
  CPointClientUIDialog::Schema_VerifyBindingIsRegistered();
  return CPointClientUIDialog::s_pSchemaBinding;
}


// CPointClientUIDialog::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 23, @0x0000000001ead7c0, libserver.so)
// globals: CPointClientUIDialog::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointClientUIDialog::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointClientUIDialog::CEntityInstanceEntityClass *const this)
{
  return CPointClientUIDialog::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointClientUIDialog::CEntityInstanceEntityClass::DestructInstance  (line 23, @0x0000000001ead7d0, libserver.so)  // inlines: Destruct<CPointClientUIDialog>
void __fastcall CPointClientUIDialog::CEntityInstanceEntityClass::DestructInstance(
        CPointClientUIDialog::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointClientUIDialog::CEntityInstanceEntityClass::FreeInstance  (line 23, @0x0000000001ead7f0, libserver.so)
void __fastcall CPointClientUIDialog::CEntityInstanceEntityClass::FreeInstance(
        CPointClientUIDialog::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointClientUIDialog::CEntityInstanceEntityClass::CanAllocate  (line 23, @0x0000000001ead810, libserver.so)
bool __fastcall CPointClientUIDialog::CEntityInstanceEntityClass::CanAllocate(
        const CPointClientUIDialog::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointClientUIDialog::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 23, @0x0000000001ead820, libserver.so)
// globals: CPointClientUIDialog::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointClientUIDialog::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointClientUIDialog::CEntityInstanceEntityClass *const this)
{
  return CPointClientUIDialog::s_pSchemaBinding;
}


// CPointClientUIDialog::CEntityInstanceEntityClass::AllocateInstance  (line 23, @0x0000000001ead880, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointClientUIDialog::CEntityInstanceEntityClass::AllocateInstance(
        CPointClientUIDialog::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1424);
  memset(v1, 0, 0x590u);
  return v1;
}


// CPointClientUIDialog::CEntityInstanceEntityClass::ConstructInstance  (line 23, @0x0000000001ead8c0, libserver.so)  // inlines: Construct<CPointClientUIDialog>
// calls: CPointClientUIDialog::CPointClientUIDialog
CEntityInstance *__fastcall CPointClientUIDialog::CEntityInstanceEntityClass::ConstructInstance(
        CPointClientUIDialog::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPointClientUIDialog::CPointClientUIDialog(p);
  return p;
}


// CPointClientUIDialog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x0000000001ead8f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointClientUIDialog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointClientUIDialog::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPointClientUIDialog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x0000000001ead910, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointClientUIDialog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointClientUIDialog::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointClientUIDialog::GetEntityClassInternal  (line 23, @0x0000000001eadb80, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, Purge, RemoveAll, SetClassInfo, SetupEntClassComponentOverrides, ThreadInterlockedExchange, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: __cxa_guard_acquire, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume, CUtlMemory<CEntityClass::ComponentHelper_t, int>::Purge, CUtlMemory<CEntityClass::ComponentOffsets_t, int>::Purge
// callers: _GLOBAL__sub_I_point_clientui_dialog_h_schema.gen_cpp
// strings: "point_clientui_dialog", "CPointClientUIDialog", "CBaseClientUIEntity"
// globals: `guard variable for'CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass, CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointClientUIDialog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointClientUIDialog::GetEntityClassInfo(void)::g_EntityCPointClientUIDialogClassInfo, CPointClientUIDialog::GetEntityClassInfo(void)::g_EntityCPointClientUIDialogClassInfo, `guard variable for'CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo (9 total)
CEntityClass *__cdecl CPointClientUIDialog::GetEntityClassInternal()
{
  CPointClientUIDialog::CEntityInstanceEntityClass *v1; // rax
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass) != 0 )
  {
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass._vptr_CEntityClass = off_3F79390;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_designerName.u.m_Id = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_ComponentOffsets.m_Size = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_AllHelpers.m_Size = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v1 = &CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass;
    do
    {
      v1->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v1 = (v1 + 16);
      v1->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v1 != &CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_classInputs.m_Size = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_classOutputs.m_Size = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_requiredEHandle.m_Index = -1;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_hNetworkSerializer = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_pBaseClassInfo = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_pClassInfo = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_flags = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_nAllHelpersFlags = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_pScriptClassDesc = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_pInputs = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_nInputCount = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_pOutputs = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_nOutputCount = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_pGameClass = 0;
    CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass._vptr_CEntityClass = off_3FB2D70;
    __cxa_guard_release(&`guard variable for'CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass);
    __cxa_atexit(
      CPointClientUIDialog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointClientUIDialogClass != 0 )
    return &CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass;
  if ( `guard variable for'CPointClientUIDialog::GetEntityClassInfo(void)::g_EntityCPointClientUIDialogClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointClientUIDialog::GetEntityClassInfo(void)::g_EntityCPointClientUIDialogClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo,
        "CBaseClientUIEntity",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointClientUIDialog::GetEntityClassInfo(void)::g_EntityCPointClientUIDialogClassInfo,
      "CPointClientUIDialog",
      "point_clientui_dialog",
      0,
      &CBaseClientUIEntity::GetEntityClassInfo(void)::g_EntityCBaseClientUIEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointClientUIDialog::GetEntityClassInfo(void)::g_EntityCPointClientUIDialogClassInfo);
  }
  CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_pClassInfo = &CPointClientUIDialog::GetEntityClassInfo(void)::g_EntityCPointClientUIDialogClassInfo;
  CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_pBaseClassInfo = CPointClientUIDialog::GetEntityClassInfo(void)::g_EntityCPointClientUIDialogClassInfo.m_pBaseClassInfo;
  g_pEntityCPointClientUIDialogClass = &CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass;
  CPointClientUIDialog::GetEntityClassInfo(void)::g_EntityCPointClientUIDialogClassInfo.m_pClass = &CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass;
  CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCPointClientUIDialogClass->m_pComponentOverrides = 0;
  return &CPointClientUIDialog::GetEntityClassInternal(void)::g_EntityCPointClientUIDialogClass;
}


