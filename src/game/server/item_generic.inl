
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CItemGenericTriggerHelper::~CItemGenericTriggerHelper  (line 23, @0x000000000227c470, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CItemGenericTriggerHelper::~CItemGenericTriggerHelper(CItemGenericTriggerHelper *const this)
{
  this->_vptr_IHandleEntity = &off_40547D0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CItemGenericTriggerHelper::~CItemGenericTriggerHelper  (line 23, @0x000000000227c490, libserver.so)  // inlines: ~CItemGenericTriggerHelper
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CItemGenericTriggerHelper::~CItemGenericTriggerHelper(CItemGenericTriggerHelper *const this)
{
  this->_vptr_IHandleEntity = &off_40547D0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CItemGenericTriggerHelper::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 25, @0x0000000001fea9c0, libserver.so)
// globals: CItemGenericTriggerHelper::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CItemGenericTriggerHelper::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CItemGenericTriggerHelper::CEntityInstanceEntityClass *const this)
{
  return CItemGenericTriggerHelper::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CItemGenericTriggerHelper::CEntityInstanceEntityClass::DestructInstance  (line 25, @0x0000000001fea9d0, libserver.so)  // inlines: Destruct<CItemGenericTriggerHelper>
void __fastcall CItemGenericTriggerHelper::CEntityInstanceEntityClass::DestructInstance(
        CItemGenericTriggerHelper::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CItemGenericTriggerHelper::CEntityInstanceEntityClass::FreeInstance  (line 25, @0x0000000001fea9f0, libserver.so)
void __fastcall CItemGenericTriggerHelper::CEntityInstanceEntityClass::FreeInstance(
        CItemGenericTriggerHelper::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CItemGenericTriggerHelper::CEntityInstanceEntityClass::CanAllocate  (line 25, @0x0000000001feaa10, libserver.so)
bool __fastcall CItemGenericTriggerHelper::CEntityInstanceEntityClass::CanAllocate(
        const CItemGenericTriggerHelper::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CItemGenericTriggerHelper::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 25, @0x0000000001feaa20, libserver.so)
// globals: CItemGenericTriggerHelper::s_pSchemaBinding
const ISchemaBinding *__fastcall CItemGenericTriggerHelper::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CItemGenericTriggerHelper::CEntityInstanceEntityClass *const this)
{
  return CItemGenericTriggerHelper::s_pSchemaBinding;
}


// CItemGenericTriggerHelper::CEntityInstanceEntityClass::AllocateInstance  (line 25, @0x0000000001febda0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CItemGenericTriggerHelper::CEntityInstanceEntityClass::AllocateInstance(
        CItemGenericTriggerHelper::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1160);
  memset(v1, 0, 0x488u);
  return v1;
}


// CItemGenericTriggerHelper::CEntityInstanceEntityClass::ConstructInstance  (line 25, @0x0000000001fec320, libserver.so)  // inlines: Construct<CItemGenericTriggerHelper>
// calls: CItemGenericTriggerHelper::CItemGenericTriggerHelper
CEntityInstance *__fastcall CItemGenericTriggerHelper::CEntityInstanceEntityClass::ConstructInstance(
        CItemGenericTriggerHelper::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CItemGenericTriggerHelper::CItemGenericTriggerHelper(p);
  return p;
}


// CItemGenericTriggerHelper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 25, @0x0000000001fed030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CItemGenericTriggerHelper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CItemGenericTriggerHelper::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CItemGenericTriggerHelper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 25, @0x0000000001fed050, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CItemGenericTriggerHelper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CItemGenericTriggerHelper::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CItemGenericTriggerHelper::GetEntityClassInternal  (line 25, @0x0000000001ff4290, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "item_generic_trigger_helper", "CItemGenericTriggerHelper"
// globals: `guard variable for'CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass, CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CItemGenericTriggerHelper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CItemGenericTriggerHelper::GetEntityClassInfo(void)::g_EntityCItemGenericTriggerHelperClassInfo, CItemGenericTriggerHelper::GetEntityClassInfo(void)::g_EntityCItemGenericTriggerHelperClassInfo
CEntityClass *__cdecl CItemGenericTriggerHelper::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass == 0
    && __cxa_guard_acquire(&`guard variable for'CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass) != 0 )
  {
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_designerName.u.m_Id = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass._vptr_CEntityClass = off_3F79390;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_ComponentOffsets.m_Size = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_AllHelpers.m_Size = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_instanceUnserializer.m_atomicFields,
      4);
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_classInputs.m_Size = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_classInputs.m_Memory.m_pMemory = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_classOutputs.m_Size = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_requiredEHandle.m_Index = -1;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_hNetworkSerializer = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_pBaseClassInfo = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_pClassInfo = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_flags = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_nAllHelpersFlags = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_pScriptClassDesc = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_pInputs = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_nInputCount = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_pOutputs = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_nOutputCount = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_pGameClass = 0;
    CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass._vptr_CEntityClass = off_3FDBF30;
    __cxa_guard_release(&`guard variable for'CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass);
    __cxa_atexit(
      CItemGenericTriggerHelper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass,
      &_dso_handle);
  }
  if ( g_pEntityCItemGenericTriggerHelperClass != 0 )
    return &CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass;
  if ( `guard variable for'CItemGenericTriggerHelper::GetEntityClassInfo(void)::g_EntityCItemGenericTriggerHelperClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CItemGenericTriggerHelper::GetEntityClassInfo(void)::g_EntityCItemGenericTriggerHelperClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CItemGenericTriggerHelper::GetEntityClassInfo(void)::g_EntityCItemGenericTriggerHelperClassInfo,
      "CItemGenericTriggerHelper",
      "item_generic_trigger_helper",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CItemGenericTriggerHelper::GetEntityClassInfo(void)::g_EntityCItemGenericTriggerHelperClassInfo);
  }
  CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_pClassInfo = &CItemGenericTriggerHelper::GetEntityClassInfo(void)::g_EntityCItemGenericTriggerHelperClassInfo;
  CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_pBaseClassInfo = CItemGenericTriggerHelper::GetEntityClassInfo(void)::g_EntityCItemGenericTriggerHelperClassInfo.m_pBaseClassInfo;
  g_pEntityCItemGenericTriggerHelperClass = &CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass;
  CItemGenericTriggerHelper::GetEntityClassInfo(void)::g_EntityCItemGenericTriggerHelperClassInfo.m_pClass = &CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass;
  CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCItemGenericTriggerHelperClass->m_pComponentOverrides = 0;
  return &CItemGenericTriggerHelper::GetEntityClassInternal(void)::g_EntityCItemGenericTriggerHelperClass;
}


// CItemGenericTriggerHelper::GetEntityClass  (line 25, @0x000000000227b4c0, libserver.so)
CEntityClass *__cdecl CItemGenericTriggerHelper::GetEntityClass()
{
  return g_pEntityCItemGenericTriggerHelperClass;
}


// CItemGenericTriggerHelper::Schema_DynamicBinding  (line 25, @0x000000000227c750, libserver.so)
// calls: CItemGenericTriggerHelper::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CItemGenericTriggerHelper::Schema_DynamicBinding(
        const CItemGenericTriggerHelper *const this)
{
  CItemGenericTriggerHelper::Schema_VerifyBindingIsRegistered();
  return CItemGenericTriggerHelper::s_pSchemaBinding;
}


// CItemGeneric::~CItemGeneric  (line 46, @0x000000000227ee90, libserver.so)  // inlines: ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CItem::~CItem
void __fastcall CItemGeneric::~CItemGeneric(CItemGeneric *const this)
{
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> *p_m_hTimeoutParticleEffect; // rdi

  p_m_hTimeoutParticleEffect = &this->m_hTimeoutParticleEffect;
  p_m_hTimeoutParticleEffect[-175].m_pBinding = &off_4053EF0;
  p_m_hTimeoutParticleEffect[-23].m_pBinding = &off_4054718;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(p_m_hTimeoutParticleEffect);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_hPickupParticleEffect);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_hSpawnParticleEffect);
  CItem::~CItem(this);
}


// CItemGeneric::~CItemGeneric  (line 46, @0x000000000227eef0, libserver.so)  // inlines: ~CItemGeneric, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown, CItem::~CItem, CBaseEntity::operator delete
void __fastcall CItemGeneric::~CItemGeneric(CItemGeneric *const this)
{
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition> *p_m_hTimeoutParticleEffect; // rdi

  p_m_hTimeoutParticleEffect = &this->m_hTimeoutParticleEffect;
  p_m_hTimeoutParticleEffect[-175].m_pBinding = &off_4053EF0;
  p_m_hTimeoutParticleEffect[-23].m_pBinding = &off_4054718;
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(p_m_hTimeoutParticleEffect);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_hPickupParticleEffect);
  CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>::Shutdown(&this->m_hSpawnParticleEffect);
  CItem::~CItem(this);
  CBaseEntity::operator delete(this);
}


// CItemGeneric::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 51, @0x0000000001feaa30, libserver.so)
// globals: CItemGeneric::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CItemGeneric::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CItemGeneric::CEntityInstanceEntityClass *const this)
{
  return CItemGeneric::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CItemGeneric::CEntityInstanceEntityClass::DestructInstance  (line 51, @0x0000000001feaa40, libserver.so)  // inlines: Destruct<CItemGeneric>
void __fastcall CItemGeneric::CEntityInstanceEntityClass::DestructInstance(
        CItemGeneric::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CItemGeneric::CEntityInstanceEntityClass::FreeInstance  (line 51, @0x0000000001feaa60, libserver.so)
void __fastcall CItemGeneric::CEntityInstanceEntityClass::FreeInstance(
        CItemGeneric::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CItemGeneric::CEntityInstanceEntityClass::CanAllocate  (line 51, @0x0000000001feaa80, libserver.so)
bool __fastcall CItemGeneric::CEntityInstanceEntityClass::CanAllocate(
        const CItemGeneric::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CItemGeneric::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 51, @0x0000000001feaa90, libserver.so)
// globals: CItemGeneric::s_pSchemaBinding
const ISchemaBinding *__fastcall CItemGeneric::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CItemGeneric::CEntityInstanceEntityClass *const this)
{
  return CItemGeneric::s_pSchemaBinding;
}


// CItemGeneric::CEntityInstanceEntityClass::AllocateInstance  (line 51, @0x0000000001febde0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CItemGeneric::CEntityInstanceEntityClass::AllocateInstance(
        CItemGeneric::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1608);
  memset(v1, 0, 0x648u);
  return v1;
}


// CItemGeneric::CEntityInstanceEntityClass::ConstructInstance  (line 51, @0x0000000001fec350, libserver.so)  // inlines: Construct<CItemGeneric>
// calls: CItemGeneric::CItemGeneric
CEntityInstance *__fastcall CItemGeneric::CEntityInstanceEntityClass::ConstructInstance(
        CItemGeneric::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CItemGeneric::CItemGeneric(p);
  return p;
}


// CItemGeneric::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 51, @0x0000000001fecea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CItemGeneric::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CItemGeneric::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CItemGeneric::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 51, @0x0000000001fecec0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CItemGeneric::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CItemGeneric::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CItemGeneric::GetEntityClassInternal  (line 51, @0x0000000001ff4930, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CItem::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "item_generic", "CItemGeneric"
// globals: `guard variable for'CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass, CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CItemGeneric::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CItemGeneric::GetEntityClassInfo(void)::g_EntityCItemGenericClassInfo, CItemGeneric::GetEntityClassInfo(void)::g_EntityCItemGenericClassInfo
CEntityClass *__cdecl CItemGeneric::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass == 0
    && __cxa_guard_acquire(&`guard variable for'CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass) != 0 )
  {
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_designerName.u.m_Id = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass._vptr_CEntityClass = off_3F79390;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_ComponentOffsets.m_Size = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_AllHelpers.m_Size = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_instanceUnserializer.m_atomicFields,
      4);
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_classInputs.m_Size = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_classInputs.m_Memory.m_pMemory = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_classOutputs.m_Size = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_requiredEHandle.m_Index = -1;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_hNetworkSerializer = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_pBaseClassInfo = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_pClassInfo = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_flags = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_nAllHelpersFlags = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_pScriptClassDesc = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_pInputs = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_nInputCount = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_pOutputs = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_nOutputCount = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_pGameClass = 0;
    CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass._vptr_CEntityClass = off_3FDBFB0;
    __cxa_guard_release(&`guard variable for'CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass);
    __cxa_atexit(
      CItemGeneric::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass,
      &_dso_handle);
  }
  if ( g_pEntityCItemGenericClass != 0 )
    return &CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass;
  if ( `guard variable for'CItemGeneric::GetEntityClassInfo(void)::g_EntityCItemGenericClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CItemGeneric::GetEntityClassInfo(void)::g_EntityCItemGenericClassInfo) != 0 )
  {
    EntityClassInfo = CItem::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CItemGeneric::GetEntityClassInfo(void)::g_EntityCItemGenericClassInfo,
      "CItemGeneric",
      "item_generic",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CItemGeneric::GetEntityClassInfo(void)::g_EntityCItemGenericClassInfo);
  }
  CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_pClassInfo = &CItemGeneric::GetEntityClassInfo(void)::g_EntityCItemGenericClassInfo;
  CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_pBaseClassInfo = CItemGeneric::GetEntityClassInfo(void)::g_EntityCItemGenericClassInfo.m_pBaseClassInfo;
  g_pEntityCItemGenericClass = &CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass;
  CItemGeneric::GetEntityClassInfo(void)::g_EntityCItemGenericClassInfo.m_pClass = &CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass;
  CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCItemGenericClass->m_pComponentOverrides = 0;
  return &CItemGeneric::GetEntityClassInternal(void)::g_EntityCItemGenericClass;
}


// CItemGeneric::GetEntityClass  (line 51, @0x000000000227b4d0, libserver.so)
CEntityClass *__cdecl CItemGeneric::GetEntityClass()
{
  return g_pEntityCItemGenericClass;
}


// CItemGeneric::Schema_DynamicBinding  (line 51, @0x000000000227c770, libserver.so)
// calls: CItemGeneric::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CItemGeneric::Schema_DynamicBinding(const CItemGeneric *const this)
{
  CItemGeneric::Schema_VerifyBindingIsRegistered();
  return CItemGeneric::s_pSchemaBinding;
}


// CItemGeneric::VPhysicsIsFlesh  (line 61, @0x000000000227b4e0, libserver.so)
bool __fastcall CItemGeneric::VPhysicsIsFlesh(CItemGeneric *const this)
{
  return 0;
}


// CItemGeneric::Touch  (line 68, @0x000000000227b4f0, libserver.so)
void __fastcall CItemGeneric::Touch(CItemGeneric *const this, CBaseEntity *pOther)
{
  ;
}


