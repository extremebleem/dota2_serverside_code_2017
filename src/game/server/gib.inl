
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGib::~CGib  (line 30, @0x000000000227c350, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CGib::~CGib(CGib *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = &off_4051EE8;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CGib::~CGib  (line 30, @0x000000000227ccc0, libserver.so)  // inlines: ~CBaseAnimating, ~CGib
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CGib::~CGib(CGib *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = &off_4051EE8;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CGib::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 33, @0x0000000001fea7e0, libserver.so)
// globals: CGib::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGib::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGib::CEntityInstanceEntityClass *const this)
{
  return CGib::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGib::CEntityInstanceEntityClass::DestructInstance  (line 33, @0x0000000001fea7f0, libserver.so)  // inlines: Destruct<CGib>
void __fastcall CGib::CEntityInstanceEntityClass::DestructInstance(
        CGib::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CGib::CEntityInstanceEntityClass::FreeInstance  (line 33, @0x0000000001fea810, libserver.so)
void __fastcall CGib::CEntityInstanceEntityClass::FreeInstance(CGib::CEntityInstanceEntityClass *const this, void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CGib::CEntityInstanceEntityClass::CanAllocate  (line 33, @0x0000000001fea830, libserver.so)
bool __fastcall CGib::CEntityInstanceEntityClass::CanAllocate(const CGib::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CGib::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 33, @0x0000000001fea840, libserver.so)
// globals: CGib::s_pSchemaBinding
const ISchemaBinding *__fastcall CGib::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGib::CEntityInstanceEntityClass *const this)
{
  return CGib::s_pSchemaBinding;
}


// CGib::CEntityInstanceEntityClass::AllocateInstance  (line 33, @0x0000000001febca0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CGib::CEntityInstanceEntityClass::AllocateInstance(CGib::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1264);
  memset(v1, 0, 0x4F0u);
  return v1;
}


// CGib::CEntityInstanceEntityClass::ConstructInstance  (line 33, @0x0000000001fec140, libserver.so)  // inlines: CEntityHandle, CGib, CHandle, Construct<CGib>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CGib::CEntityInstanceEntityClass::ConstructInstance(
        CGib::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *(p + 310) = -1;
    *(p + 313) = -1;
    *(p + 314) = -1;
    *p = &off_40516F0;
    *(p + 152) = &off_4051EE8;
  }
  return p;
}


// CGib::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000001fecdb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGib::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGib::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CGib::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000001fecdd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGib::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGib::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGib::GetEntityClassInternal  (line 33, @0x0000000001ff5a40, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "CGib"
// globals: `guard variable for'CGib::GetEntityClassInternal(void)::g_EntityCGibClass, CGib::GetEntityClassInternal(void)::g_EntityCGibClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CGib::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGib::GetEntityClassInfo(void)::g_EntityCGibClassInfo, CGib::GetEntityClassInfo(void)::g_EntityCGibClassInfo
CEntityClass *__cdecl CGib::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CGib::GetEntityClassInternal(void)::g_EntityCGibClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGib::GetEntityClassInternal(void)::g_EntityCGibClass) != 0 )
  {
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_designerName.u.m_Id = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass._vptr_CEntityClass = off_3F79390;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_ComponentOffsets.m_Size = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_AllHelpers.m_Size = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_instanceUnserializer.m_atomicFields,
      4);
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CGib::GetEntityClassInternal(void)::g_EntityCGibClass;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_classInputs.m_Size = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_classInputs.m_Memory.m_pMemory = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_classOutputs.m_Size = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_requiredEHandle.m_Index = -1;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_hNetworkSerializer = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_pBaseClassInfo = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_pClassInfo = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_flags = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_nAllHelpersFlags = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_pScriptClassDesc = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_pInputs = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_nInputCount = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_pOutputs = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_nOutputCount = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_pGameClass = 0;
    CGib::GetEntityClassInternal(void)::g_EntityCGibClass._vptr_CEntityClass = off_3FDAA30;
    __cxa_guard_release(&`guard variable for'CGib::GetEntityClassInternal(void)::g_EntityCGibClass);
    __cxa_atexit(
      CGib::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGib::GetEntityClassInternal(void)::g_EntityCGibClass,
      &_dso_handle);
  }
  if ( g_pEntityCGibClass != 0 )
    return &CGib::GetEntityClassInternal(void)::g_EntityCGibClass;
  if ( `guard variable for'CGib::GetEntityClassInfo(void)::g_EntityCGibClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGib::GetEntityClassInfo(void)::g_EntityCGibClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGib::GetEntityClassInfo(void)::g_EntityCGibClassInfo,
      "CGib",
      "gib",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CGib::GetEntityClassInfo(void)::g_EntityCGibClassInfo);
  }
  CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_pClassInfo = &CGib::GetEntityClassInfo(void)::g_EntityCGibClassInfo;
  CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_pBaseClassInfo = CGib::GetEntityClassInfo(void)::g_EntityCGibClassInfo.m_pBaseClassInfo;
  g_pEntityCGibClass = &CGib::GetEntityClassInternal(void)::g_EntityCGibClass;
  CGib::GetEntityClassInfo(void)::g_EntityCGibClassInfo.m_pClass = &CGib::GetEntityClassInternal(void)::g_EntityCGibClass;
  CGib::GetEntityClassInternal(void)::g_EntityCGibClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCGibClass->m_pComponentOverrides = 0;
  return &CGib::GetEntityClassInternal(void)::g_EntityCGibClass;
}


// CGib::GetEntityClass  (line 33, @0x000000000227b1c0, libserver.so)
CEntityClass *__cdecl CGib::GetEntityClass()
{
  return g_pEntityCGibClass;
}


// CGib::Schema_DynamicBinding  (line 33, @0x000000000227c5d0, libserver.so)
// calls: CGib::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CGib::Schema_DynamicBinding(const CGib *const this)
{
  CGib::Schema_VerifyBindingIsRegistered();
  return CGib::s_pSchemaBinding;
}


// CGib::ObjectCaps  (line 53, @0x000000000227c060, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CGib::ObjectCaps(CGib *const this)
{
  return CBaseEntity::ObjectCaps(this) & 0x7FFFFF7E | 0x80000001;
}


// CRagGib::~CRagGib  (line 107, @0x0000000001fec1a0, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CRagGib::~CRagGib(CRagGib *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CRagGib::~CRagGib  (line 107, @0x0000000001fec1e0, libserver.so)  // inlines: ~CBaseAnimating, ~CRagGib
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CRagGib::~CRagGib(CRagGib *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CRagGib::Schema_DynamicBinding  (line 109, @0x0000000001fea850, libserver.so)
// globals: CRagGib::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRagGib::Schema_DynamicBinding(const CRagGib *const this)
{
  return CRagGib::s_pSchemaBinding;
}


// CRagGib::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 109, @0x0000000001fea860, libserver.so)
// globals: CRagGib::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRagGib::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CRagGib::CEntityInstanceEntityClass *const this)
{
  return CRagGib::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CRagGib::CEntityInstanceEntityClass::DestructInstance  (line 109, @0x0000000001fea870, libserver.so)  // inlines: Destruct<CRagGib>
void __fastcall CRagGib::CEntityInstanceEntityClass::DestructInstance(
        CRagGib::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CRagGib::CEntityInstanceEntityClass::FreeInstance  (line 109, @0x0000000001fea890, libserver.so)
void __fastcall CRagGib::CEntityInstanceEntityClass::FreeInstance(
        CRagGib::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRagGib::CEntityInstanceEntityClass::CanAllocate  (line 109, @0x0000000001fea8b0, libserver.so)
bool __fastcall CRagGib::CEntityInstanceEntityClass::CanAllocate(const CRagGib::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CRagGib::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 109, @0x0000000001fea8c0, libserver.so)
// globals: CRagGib::s_pSchemaBinding
const ISchemaBinding *__fastcall CRagGib::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CRagGib::CEntityInstanceEntityClass *const this)
{
  return CRagGib::s_pSchemaBinding;
}


// CRagGib::CEntityInstanceEntityClass::AllocateInstance  (line 109, @0x0000000001febce0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CRagGib::CEntityInstanceEntityClass::AllocateInstance(CRagGib::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1216);
  memset(v1, 0, 0x4C0u);
  return v1;
}


// CRagGib::CEntityInstanceEntityClass::ConstructInstance  (line 109, @0x0000000001fec110, libserver.so)  // inlines: CRagGib, Construct<CRagGib>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CRagGib::CEntityInstanceEntityClass::ConstructInstance(
        CRagGib::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *p = &off_3FDAB30;
  }
  return p;
}


// CRagGib::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 109, @0x0000000001fece00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CRagGib::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRagGib::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CRagGib::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 109, @0x0000000001fece20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CRagGib::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRagGib::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CRagGib::GetEntityClassInternal  (line 109, @0x0000000001ff31c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "raggib", "CRagGib"
// globals: `guard variable for'CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass, CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CRagGib::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CRagGib::GetEntityClassInfo(void)::g_EntityCRagGibClassInfo, CRagGib::GetEntityClassInfo(void)::g_EntityCRagGibClassInfo
CEntityClass *__cdecl CRagGib::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass == 0
    && __cxa_guard_acquire(&`guard variable for'CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass) != 0 )
  {
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_designerName.u.m_Id = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass._vptr_CEntityClass = off_3F79390;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_ComponentOffsets.m_Size = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_AllHelpers.m_Size = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_instanceUnserializer.m_atomicFields,
      4);
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_classInputs.m_Size = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_classInputs.m_Memory.m_pMemory = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_classOutputs.m_Size = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_requiredEHandle.m_Index = -1;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_hNetworkSerializer = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_pBaseClassInfo = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_pClassInfo = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_flags = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_nAllHelpersFlags = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_pScriptClassDesc = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_pInputs = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_nInputCount = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_pOutputs = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_nOutputCount = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_pGameClass = 0;
    CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass._vptr_CEntityClass = off_3FDAAB0;
    __cxa_guard_release(&`guard variable for'CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass);
    __cxa_atexit(
      CRagGib::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass,
      &_dso_handle);
  }
  if ( g_pEntityCRagGibClass != 0 )
    return &CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass;
  if ( `guard variable for'CRagGib::GetEntityClassInfo(void)::g_EntityCRagGibClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRagGib::GetEntityClassInfo(void)::g_EntityCRagGibClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRagGib::GetEntityClassInfo(void)::g_EntityCRagGibClassInfo,
      "CRagGib",
      "raggib",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRagGib::GetEntityClassInfo(void)::g_EntityCRagGibClassInfo);
  }
  CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_pClassInfo = &CRagGib::GetEntityClassInfo(void)::g_EntityCRagGibClassInfo;
  CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_pBaseClassInfo = CRagGib::GetEntityClassInfo(void)::g_EntityCRagGibClassInfo.m_pBaseClassInfo;
  g_pEntityCRagGibClass = &CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass;
  CRagGib::GetEntityClassInfo(void)::g_EntityCRagGibClassInfo.m_pClass = &CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass;
  CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCRagGibClass->m_pComponentOverrides = 0;
  return &CRagGib::GetEntityClassInternal(void)::g_EntityCRagGibClass;
}


