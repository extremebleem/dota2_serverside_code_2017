
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPhysBox::~CPhysBox  (line 49, @0x000000000231b320, libserver.so)  // inlines: Purge, ~CBreakable, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CPhysBox::RecentlyTouchedEntity_t, CUtlMemory<CPhysBox::RecentlyTouchedEntity_t, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CPhysBox::RecentlyTouchedEntity_t, int>::Purge
void __fastcall CPhysBox::~CPhysBox(CPhysBox *const this)
{
  this->_vptr_IHandleEntity = &off_4082310;
  this->_vptr_IBreakableWithPropData = off_4082B00;
  this->_vptr_IPlayerPickupVPhysics = &off_4082C18;
  CUtlVectorBase<CPhysBox::RecentlyTouchedEntity_t,CUtlMemory<CPhysBox::RecentlyTouchedEntity_t,int>>::RemoveAll(&this->m_RecentlyTouchedEntities);
  if ( (this->m_RecentlyTouchedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CPhysBox::RecentlyTouchedEntity_t,int>::Purge(&this->m_RecentlyTouchedEntities.m_Memory);
    if ( (this->m_RecentlyTouchedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CPhysBox::RecentlyTouchedEntity_t,int>::Purge(&this->m_RecentlyTouchedEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40417B0;
  this->_vptr_IBreakableWithPropData = off_4041F90;
  this->_vptr_IPlayerPickupVPhysics = &off_40420A8;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPhysBox::~CPhysBox  (line 49, @0x000000000231b3d0, libserver.so)  // inlines: Purge, ~CBreakable, ~CPhysBox, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CPhysBox::RecentlyTouchedEntity_t, CUtlMemory<CPhysBox::RecentlyTouchedEntity_t, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CPhysBox::RecentlyTouchedEntity_t, int>::Purge
void __fastcall CPhysBox::~CPhysBox(CPhysBox *const this)
{
  this->_vptr_IHandleEntity = &off_4082310;
  this->_vptr_IBreakableWithPropData = off_4082B00;
  this->_vptr_IPlayerPickupVPhysics = &off_4082C18;
  CUtlVectorBase<CPhysBox::RecentlyTouchedEntity_t,CUtlMemory<CPhysBox::RecentlyTouchedEntity_t,int>>::RemoveAll(&this->m_RecentlyTouchedEntities);
  if ( (this->m_RecentlyTouchedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CPhysBox::RecentlyTouchedEntity_t,int>::Purge(&this->m_RecentlyTouchedEntities.m_Memory);
    if ( (this->m_RecentlyTouchedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CPhysBox::RecentlyTouchedEntity_t,int>::Purge(&this->m_RecentlyTouchedEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40417B0;
  this->_vptr_IBreakableWithPropData = off_4041F90;
  this->_vptr_IPlayerPickupVPhysics = &off_40420A8;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysBox::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 51, @0x00000000020027c0, libserver.so)
// globals: CPhysBox::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysBox::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysBox::CEntityInstanceEntityClass *const this)
{
  return CPhysBox::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysBox::CEntityInstanceEntityClass::DestructInstance  (line 51, @0x00000000020027d0, libserver.so)  // inlines: Destruct<CPhysBox>
void __fastcall CPhysBox::CEntityInstanceEntityClass::DestructInstance(
        CPhysBox::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysBox::CEntityInstanceEntityClass::FreeInstance  (line 51, @0x00000000020027f0, libserver.so)
void __fastcall CPhysBox::CEntityInstanceEntityClass::FreeInstance(
        CPhysBox::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysBox::CEntityInstanceEntityClass::CanAllocate  (line 51, @0x0000000002002810, libserver.so)
bool __fastcall CPhysBox::CEntityInstanceEntityClass::CanAllocate(
        const CPhysBox::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysBox::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 51, @0x0000000002002820, libserver.so)
// globals: CPhysBox::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysBox::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysBox::CEntityInstanceEntityClass *const this)
{
  return CPhysBox::s_pSchemaBinding;
}


// CPhysBox::CEntityInstanceEntityClass::AllocateInstance  (line 51, @0x0000000002004c30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysBox::CEntityInstanceEntityClass::AllocateInstance(
        CPhysBox::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1688);
  memset(v1, 0, 0x698u);
  return v1;
}


// CPhysBox::CEntityInstanceEntityClass::ConstructInstance  (line 51, @0x0000000002006200, libserver.so)  // inlines: CBreakable, CEntityHandle, CEntityIOOutput, CEntityOutputTemplate, CHandle, CPhysBox, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Construct<CPhysBox>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CPhysBox::CEntityInstanceEntityClass::ConstructInstance(
        CPhysBox::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 293) = -1;
    *(p + 158) = off_3F7C190;
    *(p + 161) = off_3FD2290;
    *(p + 150) = 0;
    *(p + 151) = 0;
    *(p + 155) = 0;
    *(p + 156) = 0;
    *p = &off_4082310;
    *(p + 145) = &off_4082C18;
    *(p + 167) = 0;
    *(p + 168) = 0;
    *(p + 171) = 0;
    *(p + 347) = -1;
    *(p + 144) = off_4082B00;
    *(p + 180) = off_3F7C190;
    *(p + 183) = off_3F7C190;
    *(p + 186) = off_3F7C190;
    *(p + 189) = off_3F7C190;
    *(p + 192) = off_3F7C190;
    *(p + 195) = off_3F7C190;
    *(p + 198) = off_3F7C190;
    *(p + 201) = off_3F7C190;
    *(p + 204) = off_3F7C190;
    *(p + 414) = -1;
    *(p + 416) = 0;
    *(p + 209) = 0;
    *(p + 420) = 0;
    *(p + 421) = 0;
  }
  return p;
}


// CPhysBox::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 51, @0x00000000020071d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysBox::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysBox::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysBox::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 51, @0x00000000020071f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysBox::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysBox::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysBox::GetEntityClassInternal  (line 51, @0x00000000020108f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "func_physbox", "CPhysBox", "func_breakable", "CBreakable"
// globals: `guard variable for'CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass, CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysBox::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo, CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo, `guard variable for'CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo (9 total)
CEntityClass *__cdecl CPhysBox::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass) != 0 )
  {
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_designerName.u.m_Id = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass._vptr_CEntityClass = off_3F79390;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_ComponentOffsets.m_Size = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_AllHelpers.m_Size = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_classInputs.m_Size = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_classOutputs.m_Size = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_requiredEHandle.m_Index = -1;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_hNetworkSerializer = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_pBaseClassInfo = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_pClassInfo = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_flags = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_nAllHelpersFlags = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_pScriptClassDesc = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_pInputs = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_nInputCount = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_pOutputs = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_nOutputCount = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_pGameClass = 0;
    CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass._vptr_CEntityClass = off_3FDEFD0;
    __cxa_guard_release(&`guard variable for'CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass);
    __cxa_atexit(
      CPhysBox::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysBoxClass != 0 )
    return &CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass;
  if ( `guard variable for'CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo) != 0 )
  {
    if ( `guard variable for'CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo,
        "CBreakable",
        "func_breakable",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo,
      "CPhysBox",
      "func_physbox",
      0,
      &CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo);
  }
  CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_pClassInfo = &CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo;
  CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_pBaseClassInfo = CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysBoxClass = &CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass;
  CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo.m_pClass = &CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass;
  CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCPhysBoxClass->m_pComponentOverrides = 0;
  return &CPhysBox::GetEntityClassInternal(void)::g_EntityCPhysBoxClass;
}


// CPhysBox::GetEntityClass  (line 51, @0x00000000023042c0, libserver.so)
CEntityClass *__cdecl CPhysBox::GetEntityClass()
{
  return g_pEntityCPhysBoxClass;
}


// CPhysBox::Schema_DynamicBinding  (line 51, @0x00000000023074c0, libserver.so)
// calls: CPhysBox::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPhysBox::Schema_DynamicBinding(const CPhysBox *const this)
{
  CPhysBox::Schema_VerifyBindingIsRegistered();
  return CPhysBox::s_pSchemaBinding;
}


// CPhysBox::GetEntityClassInfo  (line 51, @0x0000000002377ce0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CPhysBoxMultiplayer::GetEntityClassInternal
// strings: "func_physbox", "CPhysBox", "func_breakable", "CBreakable"
// globals: `guard variable for'CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo, CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo, `guard variable for'CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo, CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo
CEntityClassInfo *__cdecl CPhysBox::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo != 0 )
    return &CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo) == 0 )
    return &CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo;
  if ( `guard variable for'CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo,
      "CBreakable",
      "func_breakable",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo,
    "CPhysBox",
    "func_physbox",
    0,
    &CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo);
  __cxa_guard_release(&`guard variable for'CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo);
  return &CPhysBox::GetEntityClassInfo(void)::g_EntityCPhysBoxClassInfo;
}


// CPhysBox::PreferredCarryAngles  (line 84, @0x00000000023042d0, libserver.so)
QAngle __fastcall CPhysBox::PreferredCarryAngles(CPhysBox *const this)
{
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_angPreferredCarryAngles.x;
  result.z = this->m_angPreferredCarryAngles.z;
  return result;
}


// CPhysExplosion::~CPhysExplosion  (line 151, @0x0000000002306910, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysExplosion::~CPhysExplosion(CPhysExplosion *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysExplosion::~CPhysExplosion  (line 151, @0x0000000002306930, libserver.so)  // inlines: ~CPhysExplosion, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysExplosion::~CPhysExplosion(CPhysExplosion *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysExplosion::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 153, @0x0000000002002830, libserver.so)
// globals: CPhysExplosion::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysExplosion::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysExplosion::CEntityInstanceEntityClass *const this)
{
  return CPhysExplosion::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysExplosion::CEntityInstanceEntityClass::DestructInstance  (line 153, @0x0000000002002840, libserver.so)  // inlines: Destruct<CPhysExplosion>
void __fastcall CPhysExplosion::CEntityInstanceEntityClass::DestructInstance(
        CPhysExplosion::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysExplosion::CEntityInstanceEntityClass::FreeInstance  (line 153, @0x0000000002002860, libserver.so)
void __fastcall CPhysExplosion::CEntityInstanceEntityClass::FreeInstance(
        CPhysExplosion::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysExplosion::CEntityInstanceEntityClass::CanAllocate  (line 153, @0x0000000002002880, libserver.so)
bool __fastcall CPhysExplosion::CEntityInstanceEntityClass::CanAllocate(
        const CPhysExplosion::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysExplosion::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 153, @0x0000000002002890, libserver.so)
// globals: CPhysExplosion::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysExplosion::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysExplosion::CEntityInstanceEntityClass *const this)
{
  return CPhysExplosion::s_pSchemaBinding;
}


// CPhysExplosion::CEntityInstanceEntityClass::AllocateInstance  (line 153, @0x0000000002004c70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysExplosion::CEntityInstanceEntityClass::AllocateInstance(
        CPhysExplosion::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 832);
  memset(v1, 0, 0x340u);
  return v1;
}


// CPhysExplosion::CEntityInstanceEntityClass::ConstructInstance  (line 153, @0x0000000002004fb0, libserver.so)  // inlines: CEntityIOOutput, CPhysExplosion, CPointEntity, CUtlSymbolLarge, Construct<CPhysExplosion>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPhysExplosion::CEntityInstanceEntityClass::ConstructInstance(
        CPhysExplosion::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 99) = 0;
    *p = &off_4082C90;
    *(p + 101) = off_3F7C190;
  }
  return p;
}


// CPhysExplosion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 153, @0x0000000002007040, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysExplosion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysExplosion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysExplosion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 153, @0x0000000002007060, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysExplosion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysExplosion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysExplosion::GetEntityClassInternal  (line 153, @0x0000000002010c80, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "env_physexplosion", "CPhysExplosion"
// globals: `guard variable for'CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass, CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysExplosion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysExplosion::GetEntityClassInfo(void)::g_EntityCPhysExplosionClassInfo, CPhysExplosion::GetEntityClassInfo(void)::g_EntityCPhysExplosionClassInfo
CEntityClass *__cdecl CPhysExplosion::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass) != 0 )
  {
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_designerName.u.m_Id = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass._vptr_CEntityClass = off_3F79390;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_ComponentOffsets.m_Size = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_AllHelpers.m_Size = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_classInputs.m_Size = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_classOutputs.m_Size = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_requiredEHandle.m_Index = -1;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_hNetworkSerializer = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_pBaseClassInfo = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_pClassInfo = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_flags = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_nAllHelpersFlags = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_pScriptClassDesc = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_pInputs = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_nInputCount = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_pOutputs = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_nOutputCount = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_pGameClass = 0;
    CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass._vptr_CEntityClass = off_3FDF050;
    __cxa_guard_release(&`guard variable for'CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass);
    __cxa_atexit(
      CPhysExplosion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysExplosionClass != 0 )
    return &CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass;
  if ( `guard variable for'CPhysExplosion::GetEntityClassInfo(void)::g_EntityCPhysExplosionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysExplosion::GetEntityClassInfo(void)::g_EntityCPhysExplosionClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysExplosion::GetEntityClassInfo(void)::g_EntityCPhysExplosionClassInfo,
      "CPhysExplosion",
      "env_physexplosion",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysExplosion::GetEntityClassInfo(void)::g_EntityCPhysExplosionClassInfo);
  }
  CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_pClassInfo = &CPhysExplosion::GetEntityClassInfo(void)::g_EntityCPhysExplosionClassInfo;
  CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_pBaseClassInfo = CPhysExplosion::GetEntityClassInfo(void)::g_EntityCPhysExplosionClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysExplosionClass = &CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass;
  CPhysExplosion::GetEntityClassInfo(void)::g_EntityCPhysExplosionClassInfo.m_pClass = &CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass;
  CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysExplosionClass->m_pComponentOverrides = 0;
  return &CPhysExplosion::GetEntityClassInternal(void)::g_EntityCPhysExplosionClass;
}


// CPhysExplosion::GetEntityClass  (line 153, @0x0000000002304300, libserver.so)
CEntityClass *__cdecl CPhysExplosion::GetEntityClass()
{
  return g_pEntityCPhysExplosionClass;
}


// CPhysExplosion::Schema_DynamicBinding  (line 153, @0x00000000023074e0, libserver.so)
// calls: CPhysExplosion::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPhysExplosion::Schema_DynamicBinding(const CPhysExplosion *const this)
{
  CPhysExplosion::Schema_VerifyBindingIsRegistered();
  return CPhysExplosion::s_pSchemaBinding;
}


// CPhysImpact::~CPhysImpact  (line 189, @0x0000000002306960, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysImpact::~CPhysImpact(CPhysImpact *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysImpact::~CPhysImpact  (line 189, @0x0000000002306980, libserver.so)  // inlines: ~CPhysImpact, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysImpact::~CPhysImpact(CPhysImpact *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysImpact::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 191, @0x00000000020028a0, libserver.so)
// globals: CPhysImpact::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysImpact::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysImpact::CEntityInstanceEntityClass *const this)
{
  return CPhysImpact::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysImpact::CEntityInstanceEntityClass::DestructInstance  (line 191, @0x00000000020028b0, libserver.so)  // inlines: Destruct<CPhysImpact>
void __fastcall CPhysImpact::CEntityInstanceEntityClass::DestructInstance(
        CPhysImpact::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysImpact::CEntityInstanceEntityClass::FreeInstance  (line 191, @0x00000000020028d0, libserver.so)
void __fastcall CPhysImpact::CEntityInstanceEntityClass::FreeInstance(
        CPhysImpact::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysImpact::CEntityInstanceEntityClass::CanAllocate  (line 191, @0x00000000020028f0, libserver.so)
bool __fastcall CPhysImpact::CEntityInstanceEntityClass::CanAllocate(
        const CPhysImpact::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysImpact::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 191, @0x0000000002002900, libserver.so)
// globals: CPhysImpact::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysImpact::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysImpact::CEntityInstanceEntityClass *const this)
{
  return CPhysImpact::s_pSchemaBinding;
}


// CPhysImpact::CEntityInstanceEntityClass::AllocateInstance  (line 191, @0x0000000002004cb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysImpact::CEntityInstanceEntityClass::AllocateInstance(
        CPhysImpact::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CPhysImpact::CEntityInstanceEntityClass::ConstructInstance  (line 191, @0x0000000002005000, libserver.so)  // inlines: CPhysImpact, CPointEntity, CUtlSymbolLarge, Construct<CPhysImpact>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPhysImpact::CEntityInstanceEntityClass::ConstructInstance(
        CPhysImpact::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = 0;
    *p = &off_4083330;
  }
  return p;
}


// CPhysImpact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 191, @0x0000000002007090, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysImpact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysImpact::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysImpact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 191, @0x00000000020070b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysImpact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysImpact::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysImpact::GetEntityClassInternal  (line 191, @0x000000000200dd20, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "env_physimpact", "CPhysImpact"
// globals: `guard variable for'CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass, CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysImpact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysImpact::GetEntityClassInfo(void)::g_EntityCPhysImpactClassInfo, CPhysImpact::GetEntityClassInfo(void)::g_EntityCPhysImpactClassInfo
CEntityClass *__cdecl CPhysImpact::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass) != 0 )
  {
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_designerName.u.m_Id = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass._vptr_CEntityClass = off_3F79390;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_ComponentOffsets.m_Size = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_AllHelpers.m_Size = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_classInputs.m_Size = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_classOutputs.m_Size = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_requiredEHandle.m_Index = -1;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_hNetworkSerializer = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_pBaseClassInfo = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_pClassInfo = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_flags = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_nAllHelpersFlags = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_pScriptClassDesc = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_pInputs = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_nInputCount = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_pOutputs = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_nOutputCount = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_pGameClass = 0;
    CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass._vptr_CEntityClass = off_3FDF0D0;
    __cxa_guard_release(&`guard variable for'CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass);
    __cxa_atexit(
      CPhysImpact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysImpactClass != 0 )
    return &CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass;
  if ( `guard variable for'CPhysImpact::GetEntityClassInfo(void)::g_EntityCPhysImpactClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysImpact::GetEntityClassInfo(void)::g_EntityCPhysImpactClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysImpact::GetEntityClassInfo(void)::g_EntityCPhysImpactClassInfo,
      "CPhysImpact",
      "env_physimpact",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysImpact::GetEntityClassInfo(void)::g_EntityCPhysImpactClassInfo);
  }
  CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_pClassInfo = &CPhysImpact::GetEntityClassInfo(void)::g_EntityCPhysImpactClassInfo;
  CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_pBaseClassInfo = CPhysImpact::GetEntityClassInfo(void)::g_EntityCPhysImpactClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysImpactClass = &CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass;
  CPhysImpact::GetEntityClassInfo(void)::g_EntityCPhysImpactClassInfo.m_pClass = &CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass;
  CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysImpactClass->m_pComponentOverrides = 0;
  return &CPhysImpact::GetEntityClassInternal(void)::g_EntityCPhysImpactClass;
}


// CPhysImpact::GetEntityClass  (line 191, @0x0000000002304310, libserver.so)
CEntityClass *__cdecl CPhysImpact::GetEntityClass()
{
  return g_pEntityCPhysImpactClass;
}


// CPhysImpact::Schema_DynamicBinding  (line 191, @0x0000000002307500, libserver.so)
// calls: CPhysImpact::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPhysImpact::Schema_DynamicBinding(const CPhysImpact *const this)
{
  CPhysImpact::Schema_VerifyBindingIsRegistered();
  return CPhysImpact::s_pSchemaBinding;
}


// CPhysMagnet::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 226, @0x0000000002002910, libserver.so)
// globals: CPhysMagnet::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysMagnet::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysMagnet::CEntityInstanceEntityClass *const this)
{
  return CPhysMagnet::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysMagnet::CEntityInstanceEntityClass::DestructInstance  (line 226, @0x0000000002002920, libserver.so)  // inlines: Destruct<CPhysMagnet>
void __fastcall CPhysMagnet::CEntityInstanceEntityClass::DestructInstance(
        CPhysMagnet::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysMagnet::CEntityInstanceEntityClass::FreeInstance  (line 226, @0x0000000002002940, libserver.so)
void __fastcall CPhysMagnet::CEntityInstanceEntityClass::FreeInstance(
        CPhysMagnet::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysMagnet::CEntityInstanceEntityClass::CanAllocate  (line 226, @0x0000000002002960, libserver.so)
bool __fastcall CPhysMagnet::CEntityInstanceEntityClass::CanAllocate(
        const CPhysMagnet::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysMagnet::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 226, @0x0000000002002970, libserver.so)
// globals: CPhysMagnet::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysMagnet::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysMagnet::CEntityInstanceEntityClass *const this)
{
  return CPhysMagnet::s_pSchemaBinding;
}


// CPhysMagnet::CEntityInstanceEntityClass::AllocateInstance  (line 226, @0x0000000002004cf0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysMagnet::CEntityInstanceEntityClass::AllocateInstance(
        CPhysMagnet::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1328);
  memset(v1, 0, 0x530u);
  return v1;
}


// CPhysMagnet::CEntityInstanceEntityClass::ConstructInstance  (line 226, @0x00000000020051d0, libserver.so)  // inlines: Construct<CPhysMagnet>
// calls: CPhysMagnet::CPhysMagnet
CEntityInstance *__fastcall CPhysMagnet::CEntityInstanceEntityClass::ConstructInstance(
        CPhysMagnet::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPhysMagnet::CPhysMagnet(p);
  return p;
}


// CPhysMagnet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 226, @0x0000000002007180, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysMagnet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysMagnet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysMagnet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 226, @0x00000000020071a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysMagnet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysMagnet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysMagnet::GetEntityClassInternal  (line 226, @0x000000000200edb0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_04.cpp
// strings: "phys_magnet", "CPhysMagnet"
// globals: `guard variable for'CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass, CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysMagnet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysMagnet::GetEntityClassInfo(void)::g_EntityCPhysMagnetClassInfo, CPhysMagnet::GetEntityClassInfo(void)::g_EntityCPhysMagnetClassInfo
CEntityClass *__cdecl CPhysMagnet::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass) != 0 )
  {
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_designerName.u.m_Id = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass._vptr_CEntityClass = off_3F79390;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_ComponentOffsets.m_Size = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_AllHelpers.m_Size = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_classInputs.m_Size = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_classOutputs.m_Size = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_requiredEHandle.m_Index = -1;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_hNetworkSerializer = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_pBaseClassInfo = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_pClassInfo = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_flags = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_nAllHelpersFlags = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_pScriptClassDesc = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_pInputs = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_nInputCount = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_pOutputs = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_nOutputCount = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_pGameClass = 0;
    CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass._vptr_CEntityClass = off_3FDF150;
    __cxa_guard_release(&`guard variable for'CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass);
    __cxa_atexit(
      CPhysMagnet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysMagnetClass != 0 )
    return &CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass;
  if ( `guard variable for'CPhysMagnet::GetEntityClassInfo(void)::g_EntityCPhysMagnetClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysMagnet::GetEntityClassInfo(void)::g_EntityCPhysMagnetClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysMagnet::GetEntityClassInfo(void)::g_EntityCPhysMagnetClassInfo,
      "CPhysMagnet",
      "phys_magnet",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysMagnet::GetEntityClassInfo(void)::g_EntityCPhysMagnetClassInfo);
  }
  CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_pClassInfo = &CPhysMagnet::GetEntityClassInfo(void)::g_EntityCPhysMagnetClassInfo;
  CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_pBaseClassInfo = CPhysMagnet::GetEntityClassInfo(void)::g_EntityCPhysMagnetClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysMagnetClass = &CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass;
  CPhysMagnet::GetEntityClassInfo(void)::g_EntityCPhysMagnetClassInfo.m_pClass = &CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass;
  CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCPhysMagnetClass->m_pComponentOverrides = 0;
  return &CPhysMagnet::GetEntityClassInternal(void)::g_EntityCPhysMagnetClass;
}


// CPhysMagnet::GetEntityClass  (line 226, @0x0000000002304320, libserver.so)
CEntityClass *__cdecl CPhysMagnet::GetEntityClass()
{
  return g_pEntityCPhysMagnetClass;
}


// CPhysMagnet::Schema_DynamicBinding  (line 226, @0x0000000002307520, libserver.so)
// calls: CPhysMagnet::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CPhysMagnet::Schema_DynamicBinding(const CPhysMagnet *const this)
{
  CPhysMagnet::Schema_VerifyBindingIsRegistered();
  return CPhysMagnet::s_pSchemaBinding;
}


