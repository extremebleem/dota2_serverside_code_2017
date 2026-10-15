
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CItem::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 49, @0x0000000001fea950, libserver.so)
// globals: CItem::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CItem::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CItem::CEntityInstanceEntityClass *const this)
{
  return CItem::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CItem::CEntityInstanceEntityClass::DestructInstance  (line 49, @0x0000000001fea960, libserver.so)  // inlines: Destruct<CItem>
void __fastcall CItem::CEntityInstanceEntityClass::DestructInstance(
        CItem::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CItem::CEntityInstanceEntityClass::FreeInstance  (line 49, @0x0000000001fea980, libserver.so)
void __fastcall CItem::CEntityInstanceEntityClass::FreeInstance(CItem::CEntityInstanceEntityClass *const this, void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CItem::CEntityInstanceEntityClass::CanAllocate  (line 49, @0x0000000001fea9a0, libserver.so)
bool __fastcall CItem::CEntityInstanceEntityClass::CanAllocate(const CItem::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CItem::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 49, @0x0000000001fea9b0, libserver.so)
// globals: CItem::s_pSchemaBinding
const ISchemaBinding *__fastcall CItem::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CItem::CEntityInstanceEntityClass *const this)
{
  return CItem::s_pSchemaBinding;
}


// CItem::CEntityInstanceEntityClass::AllocateInstance  (line 49, @0x0000000001febd60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CItem::CEntityInstanceEntityClass::AllocateInstance(CItem::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1312);
  memset(v1, 0, 0x520u);
  return v1;
}


// CItem::CEntityInstanceEntityClass::ConstructInstance  (line 49, @0x0000000001fec2f0, libserver.so)  // inlines: Construct<CItem>
// calls: CItem::CItem
CEntityInstance *__fastcall CItem::CEntityInstanceEntityClass::ConstructInstance(
        CItem::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CItem::CItem(p);
  return p;
}


// CItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 49, @0x0000000001fece50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CItem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 49, @0x0000000001fece70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CItem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CItem::GetEntityClassInfo  (line 49, @0x0000000001fef6a0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CItemGeneric::GetEntityClassInternal
// strings: "CItem", "baseanimating", "CBaseAnimating"
// globals: `guard variable for'CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo, CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo, `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo, CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo
CEntityClassInfo *__cdecl CItem::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo != 0 )
    return &CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo) == 0 )
    return &CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo;
  if ( `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo,
      "CBaseAnimating",
      "baseanimating",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo,
    "CItem",
    0,
    0,
    &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
  __cxa_guard_release(&`guard variable for'CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo);
  return &CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo;
}


// CItem::GetEntityClassInternal  (line 49, @0x0000000001ff2b30, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "CItem"
// globals: `guard variable for'CItem::GetEntityClassInternal(void)::g_EntityCItemClass, CItem::GetEntityClassInternal(void)::g_EntityCItemClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo, CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo
CEntityClass *__cdecl CItem::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CItem::GetEntityClassInternal(void)::g_EntityCItemClass == 0
    && __cxa_guard_acquire(&`guard variable for'CItem::GetEntityClassInternal(void)::g_EntityCItemClass) != 0 )
  {
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_designerName.u.m_Id = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass._vptr_CEntityClass = off_3F79390;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_ComponentOffsets.m_Size = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_AllHelpers.m_Size = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_instanceUnserializer.m_atomicFields,
      4);
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CItem::GetEntityClassInternal(void)::g_EntityCItemClass;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_classInputs.m_Size = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_classInputs.m_Memory.m_pMemory = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_classOutputs.m_Size = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_requiredEHandle.m_Index = -1;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_hNetworkSerializer = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_pBaseClassInfo = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_pClassInfo = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_flags = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_nAllHelpersFlags = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_pScriptClassDesc = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_pInputs = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_nInputCount = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_pOutputs = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_nOutputCount = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_pGameClass = 0;
    CItem::GetEntityClassInternal(void)::g_EntityCItemClass._vptr_CEntityClass = off_3FDBEB0;
    __cxa_guard_release(&`guard variable for'CItem::GetEntityClassInternal(void)::g_EntityCItemClass);
    __cxa_atexit(
      CItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CItem::GetEntityClassInternal(void)::g_EntityCItemClass,
      &_dso_handle);
  }
  if ( g_pEntityCItemClass != 0 )
    return &CItem::GetEntityClassInternal(void)::g_EntityCItemClass;
  if ( `guard variable for'CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo,
      "CItem",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo);
  }
  CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_pClassInfo = &CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo;
  CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_pBaseClassInfo = CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo.m_pBaseClassInfo;
  g_pEntityCItemClass = &CItem::GetEntityClassInternal(void)::g_EntityCItemClass;
  CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo.m_pClass = &CItem::GetEntityClassInternal(void)::g_EntityCItemClass;
  CItem::GetEntityClassInternal(void)::g_EntityCItemClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCItemClass->m_pComponentOverrides = 0;
  return &CItem::GetEntityClassInternal(void)::g_EntityCItemClass;
}


// CItem::GetEntityClass  (line 49, @0x000000000227b490, libserver.so)
CEntityClass *__cdecl CItem::GetEntityClass()
{
  return g_pEntityCItemClass;
}


// CItem::Schema_DynamicBinding  (line 49, @0x000000000227c730, libserver.so)
// calls: CItem::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CItem::Schema_DynamicBinding(const CItem *const this)
{
  CItem::Schema_VerifyBindingIsRegistered();
  return CItem::s_pSchemaBinding;
}


// CItem::HasBloatedCollision  (line 62, @0x000000000227b4a0, libserver.so)
bool __fastcall CItem::HasBloatedCollision(const CItem *const this)
{
  return 1;
}


// CItem::MyTouch  (line 68, @0x000000000227b4b0, libserver.so)
bool __fastcall CItem::MyTouch(CItem *const this, CBasePlayer *pPlayer)
{
  return 0;
}


// CItem::ObjectCaps  (line 81, @0x000000000227c080, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CItem::ObjectCaps(CItem *const this)
{
  return CBaseEntity::ObjectCaps(this) | 0x40000821;
}


