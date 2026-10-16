
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CWaterBullet::~CWaterBullet  (line 19, @0x0000000002410930, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CWaterBullet::~CWaterBullet(CWaterBullet *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CWaterBullet::~CWaterBullet  (line 19, @0x0000000002410970, libserver.so)  // inlines: ~CBaseAnimating, ~CWaterBullet
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CWaterBullet::~CWaterBullet(CWaterBullet *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CWaterBullet::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 21, @0x00000000020193f0, libserver.so)
// globals: CWaterBullet::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CWaterBullet::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CWaterBullet::CEntityInstanceEntityClass *const this)
{
  return CWaterBullet::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CWaterBullet::CEntityInstanceEntityClass::DestructInstance  (line 21, @0x0000000002019400, libserver.so)  // inlines: Destruct<CWaterBullet>
void __fastcall CWaterBullet::CEntityInstanceEntityClass::DestructInstance(
        CWaterBullet::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CWaterBullet::CEntityInstanceEntityClass::FreeInstance  (line 21, @0x0000000002019420, libserver.so)
void __fastcall CWaterBullet::CEntityInstanceEntityClass::FreeInstance(
        CWaterBullet::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CWaterBullet::CEntityInstanceEntityClass::CanAllocate  (line 21, @0x0000000002019440, libserver.so)
bool __fastcall CWaterBullet::CEntityInstanceEntityClass::CanAllocate(
        const CWaterBullet::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CWaterBullet::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 21, @0x0000000002019450, libserver.so)
// globals: CWaterBullet::s_pSchemaBinding
const ISchemaBinding *__fastcall CWaterBullet::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CWaterBullet::CEntityInstanceEntityClass *const this)
{
  return CWaterBullet::s_pSchemaBinding;
}


// CWaterBullet::CEntityInstanceEntityClass::AllocateInstance  (line 21, @0x000000000201ad80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CWaterBullet::CEntityInstanceEntityClass::AllocateInstance(
        CWaterBullet::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1216);
  memset(v1, 0, 0x4C0u);
  return v1;
}


// CWaterBullet::CEntityInstanceEntityClass::ConstructInstance  (line 21, @0x000000000201ae20, libserver.so)  // inlines: CWaterBullet, Construct<CWaterBullet>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CWaterBullet::CEntityInstanceEntityClass::ConstructInstance(
        CWaterBullet::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *p = &off_40D3B30;
  }
  return p;
}


// CWaterBullet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x000000000201dc90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CWaterBullet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CWaterBullet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CWaterBullet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x000000000201dcb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CWaterBullet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CWaterBullet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CWaterBullet::GetEntityClassInternal  (line 21, @0x00000000020229a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_05.cpp
// strings: "waterbullet", "CWaterBullet"
// globals: `guard variable for'CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass, CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CWaterBullet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CWaterBullet::GetEntityClassInfo(void)::g_EntityCWaterBulletClassInfo, CWaterBullet::GetEntityClassInfo(void)::g_EntityCWaterBulletClassInfo
CEntityClass *__cdecl CWaterBullet::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass == 0
    && __cxa_guard_acquire(&`guard variable for'CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass) != 0 )
  {
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_designerName.u.m_Id = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass._vptr_CEntityClass = off_3F79390;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_ComponentOffsets.m_Size = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_AllHelpers.m_Size = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_instanceUnserializer.m_atomicFields,
      4);
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_classInputs.m_Size = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_classInputs.m_Memory.m_pMemory = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_classOutputs.m_Size = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_requiredEHandle.m_Index = -1;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_hNetworkSerializer = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_pBaseClassInfo = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_pClassInfo = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_flags = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_nAllHelpersFlags = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_pScriptClassDesc = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_pInputs = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_nInputCount = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_pOutputs = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_nOutputCount = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_pGameClass = 0;
    CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass._vptr_CEntityClass = off_3FE4DD0;
    __cxa_guard_release(&`guard variable for'CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass);
    __cxa_atexit(
      CWaterBullet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass,
      &_dso_handle);
  }
  if ( g_pEntityCWaterBulletClass != 0 )
    return &CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass;
  if ( `guard variable for'CWaterBullet::GetEntityClassInfo(void)::g_EntityCWaterBulletClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CWaterBullet::GetEntityClassInfo(void)::g_EntityCWaterBulletClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CWaterBullet::GetEntityClassInfo(void)::g_EntityCWaterBulletClassInfo,
      "CWaterBullet",
      "waterbullet",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CWaterBullet::GetEntityClassInfo(void)::g_EntityCWaterBulletClassInfo);
  }
  CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_pClassInfo = &CWaterBullet::GetEntityClassInfo(void)::g_EntityCWaterBulletClassInfo;
  CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_pBaseClassInfo = CWaterBullet::GetEntityClassInfo(void)::g_EntityCWaterBulletClassInfo.m_pBaseClassInfo;
  g_pEntityCWaterBulletClass = &CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass;
  CWaterBullet::GetEntityClassInfo(void)::g_EntityCWaterBulletClassInfo.m_pClass = &CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass;
  CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCWaterBulletClass->m_pComponentOverrides = 0;
  return &CWaterBullet::GetEntityClassInternal(void)::g_EntityCWaterBulletClass;
}


// CWaterBullet::GetEntityClass  (line 21, @0x0000000002410550, libserver.so)
CEntityClass *__cdecl CWaterBullet::GetEntityClass()
{
  return g_pEntityCWaterBulletClass;
}


// CWaterBullet::Schema_DynamicBinding  (line 21, @0x0000000002410ca0, libserver.so)
// calls: CWaterBullet::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CWaterBullet::Schema_DynamicBinding(const CWaterBullet *const this)
{
  CWaterBullet::Schema_VerifyBindingIsRegistered();
  return CWaterBullet::s_pSchemaBinding;
}


