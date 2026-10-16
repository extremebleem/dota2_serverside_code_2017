
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CMarkupVolume::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 22, @0x0000000001feabf0, libserver.so)
// globals: CMarkupVolume::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMarkupVolume::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CMarkupVolume::CEntityInstanceEntityClass *const this)
{
  return CMarkupVolume::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CMarkupVolume::CEntityInstanceEntityClass::DestructInstance  (line 22, @0x0000000001feac00, libserver.so)  // inlines: Destruct<CMarkupVolume>
void __fastcall CMarkupVolume::CEntityInstanceEntityClass::DestructInstance(
        CMarkupVolume::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CMarkupVolume::CEntityInstanceEntityClass::FreeInstance  (line 22, @0x0000000001feac20, libserver.so)
void __fastcall CMarkupVolume::CEntityInstanceEntityClass::FreeInstance(
        CMarkupVolume::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CMarkupVolume::CEntityInstanceEntityClass::CanAllocate  (line 22, @0x0000000001feac40, libserver.so)
bool __fastcall CMarkupVolume::CEntityInstanceEntityClass::CanAllocate(
        const CMarkupVolume::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CMarkupVolume::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 22, @0x0000000001feac50, libserver.so)
// globals: CMarkupVolume::s_pSchemaBinding
const ISchemaBinding *__fastcall CMarkupVolume::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CMarkupVolume::CEntityInstanceEntityClass *const this)
{
  return CMarkupVolume::s_pSchemaBinding;
}


// CMarkupVolume::CEntityInstanceEntityClass::AllocateInstance  (line 22, @0x0000000001febee0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CMarkupVolume::CEntityInstanceEntityClass::AllocateInstance(
        CMarkupVolume::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1152);
  memset(v1, 0, 0x480u);
  return v1;
}


// CMarkupVolume::CEntityInstanceEntityClass::ConstructInstance  (line 22, @0x0000000001fec0a0, libserver.so)  // inlines: CMarkupVolume, Construct<CMarkupVolume>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CMarkupVolume::CEntityInstanceEntityClass::ConstructInstance(
        CMarkupVolume::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_406D210;
  }
  return p;
}


// CMarkupVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x0000000001fed080, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CMarkupVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMarkupVolume::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CMarkupVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 22, @0x0000000001fed0a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CMarkupVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMarkupVolume::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CMarkupVolume::GetEntityClassInfo  (line 22, @0x0000000001fefd00, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CMarkupVolumeTagged::GetEntityClassInternal
// strings: "markup_volume", "CMarkupVolume", "basemodelentity", "CBaseModelEntity", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo, CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CMarkupVolume::GetEntityClassInfo()
{
  if ( `guard variable for'CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo != 0 )
    return &CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo) == 0 )
    return &CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo;
  if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
      {
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
          "CGameEntity",
          0,
          0,
          &g_EntityRootClassInfo);
        __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
        "CBaseEntity",
        0,
        0,
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
      "CBaseModelEntity",
      "basemodelentity",
      0,
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo,
    "CMarkupVolume",
    "markup_volume",
    0,
    &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo);
  return &CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo;
}


// CMarkupVolume::GetEntityClassInternal  (line 22, @0x0000000001ff27e0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "markup_volume", "CMarkupVolume"
// globals: `guard variable for'CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass, CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CMarkupVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo, CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo
CEntityClass *__cdecl CMarkupVolume::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass) != 0 )
  {
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_designerName.u.m_Id = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass._vptr_CEntityClass = off_3F79390;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_ComponentOffsets.m_Size = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_AllHelpers.m_Size = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_classInputs.m_Size = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_classOutputs.m_Size = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_requiredEHandle.m_Index = -1;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_hNetworkSerializer = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_pBaseClassInfo = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_pClassInfo = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_flags = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_nAllHelpersFlags = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_pScriptClassDesc = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_pInputs = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_nInputCount = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_pOutputs = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_nOutputCount = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_pGameClass = 0;
    CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass._vptr_CEntityClass = off_3FDC9D0;
    __cxa_guard_release(&`guard variable for'CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass);
    __cxa_atexit(
      CMarkupVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass,
      &_dso_handle);
  }
  if ( g_pEntityCMarkupVolumeClass != 0 )
    return &CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass;
  if ( `guard variable for'CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo,
      "CMarkupVolume",
      "markup_volume",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo);
  }
  CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_pClassInfo = &CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo;
  CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_pBaseClassInfo = CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo.m_pBaseClassInfo;
  g_pEntityCMarkupVolumeClass = &CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass;
  CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo.m_pClass = &CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass;
  CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCMarkupVolumeClass->m_pComponentOverrides = 0;
  return &CMarkupVolume::GetEntityClassInternal(void)::g_EntityCMarkupVolumeClass;
}


// CMarkupVolume::GetEntityClass  (line 22, @0x00000000022a6620, libserver.so)
CEntityClass *__cdecl CMarkupVolume::GetEntityClass()
{
  return g_pEntityCMarkupVolumeClass;
}


// CMarkupVolume::Schema_DynamicBinding  (line 22, @0x00000000022a9f60, libserver.so)
// calls: CMarkupVolume::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CMarkupVolume::Schema_DynamicBinding(const CMarkupVolume *const this)
{
  CMarkupVolume::Schema_VerifyBindingIsRegistered();
  return CMarkupVolume::s_pSchemaBinding;
}


// CMarkupVolume::~CMarkupVolume  (line 25, @0x00000000022a9af0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CMarkupVolume::~CMarkupVolume(CMarkupVolume *const this)
{
  this->_vptr_IHandleEntity = &off_406D210;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CMarkupVolume::~CMarkupVolume  (line 25, @0x00000000022a9b10, libserver.so)  // inlines: ~CMarkupVolume
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CMarkupVolume::~CMarkupVolume(CMarkupVolume *const this)
{
  this->_vptr_IHandleEntity = &off_406D210;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CMarkupVolumeTagged::~CMarkupVolumeTagged  (line 49, @0x00000000022abac0, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CMarkupVolume, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CUtlMemory<char*, int>::Purge
void __fastcall CMarkupVolumeTagged::~CMarkupVolumeTagged(CMarkupVolumeTagged *const this)
{
  __int64 v2; // r13
  int v3; // r12d
  char *v4; // rsi
  bool v5; // zf
  __int64 v6; // r13
  int v7; // r12d
  char *v8; // rsi

  this->_vptr_IHandleEntity = &off_406C990;
  if ( this->m_Tags.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v4 = this->m_Tags.m_Memory.m_pMemory[v2++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v4);
    }
    while ( v3 < this->m_Tags.m_Size );
  }
  v5 = (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Tags.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
    if ( (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
  }
  if ( this->m_GroupNames.m_Size > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      ++v7;
      v8 = this->m_GroupNames.m_Memory.m_pMemory[v6++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8);
    }
    while ( v7 < this->m_GroupNames.m_Size );
  }
  v5 = (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_GroupNames.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
    if ( (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_406D210;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CMarkupVolumeTagged::~CMarkupVolumeTagged  (line 49, @0x00000000022abd40, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CMarkupVolume, ~CMarkupVolumeTagged, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<char*, int>::Purge
void __fastcall CMarkupVolumeTagged::~CMarkupVolumeTagged(CMarkupVolumeTagged *const this)
{
  int m_Size; // esi
  __int64 v3; // r13
  int v4; // r12d
  char *v5; // rsi
  bool v6; // zf
  __int64 v7; // r13
  int v8; // r12d
  char *v9; // rsi

  m_Size = this->m_Tags.m_Size;
  this->_vptr_IHandleEntity = &off_406C990;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      ++v4;
      v5 = this->m_Tags.m_Memory.m_pMemory[v3++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
    }
    while ( v4 < this->m_Tags.m_Size );
  }
  v6 = (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Tags.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
    if ( (this->m_Tags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_Tags.m_Memory);
  }
  if ( this->m_GroupNames.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      ++v8;
      v9 = this->m_GroupNames.m_Memory.m_pMemory[v7++];
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9);
    }
    while ( v8 < this->m_GroupNames.m_Size );
  }
  v6 = (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_GroupNames.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
    if ( (this->m_GroupNames.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_GroupNames.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_406D210;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CMarkupVolumeTagged::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 51, @0x0000000001feac60, libserver.so)
// globals: CMarkupVolumeTagged::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMarkupVolumeTagged::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CMarkupVolumeTagged::CEntityInstanceEntityClass *const this)
{
  return CMarkupVolumeTagged::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CMarkupVolumeTagged::CEntityInstanceEntityClass::DestructInstance  (line 51, @0x0000000001feac70, libserver.so)  // inlines: Destruct<CMarkupVolumeTagged>
void __fastcall CMarkupVolumeTagged::CEntityInstanceEntityClass::DestructInstance(
        CMarkupVolumeTagged::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CMarkupVolumeTagged::CEntityInstanceEntityClass::FreeInstance  (line 51, @0x0000000001feac90, libserver.so)
void __fastcall CMarkupVolumeTagged::CEntityInstanceEntityClass::FreeInstance(
        CMarkupVolumeTagged::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CMarkupVolumeTagged::CEntityInstanceEntityClass::CanAllocate  (line 51, @0x0000000001feacb0, libserver.so)
bool __fastcall CMarkupVolumeTagged::CEntityInstanceEntityClass::CanAllocate(
        const CMarkupVolumeTagged::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CMarkupVolumeTagged::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 51, @0x0000000001feacc0, libserver.so)
// globals: CMarkupVolumeTagged::s_pSchemaBinding
const ISchemaBinding *__fastcall CMarkupVolumeTagged::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CMarkupVolumeTagged::CEntityInstanceEntityClass *const this)
{
  return CMarkupVolumeTagged::s_pSchemaBinding;
}


// CMarkupVolumeTagged::CEntityInstanceEntityClass::AllocateInstance  (line 51, @0x0000000001febf20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CMarkupVolumeTagged::CEntityInstanceEntityClass::AllocateInstance(
        CMarkupVolumeTagged::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1208);
  memset(v1, 0, 0x4B8u);
  return v1;
}


// CMarkupVolumeTagged::CEntityInstanceEntityClass::ConstructInstance  (line 51, @0x0000000001fec3b0, libserver.so)  // inlines: Construct<CMarkupVolumeTagged>
// calls: CMarkupVolumeTagged::CMarkupVolumeTagged
CEntityInstance *__fastcall CMarkupVolumeTagged::CEntityInstanceEntityClass::ConstructInstance(
        CMarkupVolumeTagged::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CMarkupVolumeTagged::CMarkupVolumeTagged(p);
  return p;
}


// CMarkupVolumeTagged::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 51, @0x0000000001fed0d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CMarkupVolumeTagged::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMarkupVolumeTagged::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CMarkupVolumeTagged::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 51, @0x0000000001fed0f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CMarkupVolumeTagged::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMarkupVolumeTagged::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CMarkupVolumeTagged::GetEntityClassInternal  (line 51, @0x0000000001ff5e50, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CMarkupVolumeTagged>, CMarkupVolume::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_03.cpp
// strings: "markup_volume_tagged", "CMarkupVolumeTagged"
// globals: `guard variable for'CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass, CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CMarkupVolumeTagged::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo, CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo
CEntityClass *__cdecl CMarkupVolumeTagged::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass == 0
    && __cxa_guard_acquire(&`guard variable for'CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass) != 0 )
  {
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_designerName.u.m_Id = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass._vptr_CEntityClass = off_3F79390;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_ComponentOffsets.m_Size = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_AllHelpers.m_Size = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_instanceUnserializer.m_atomicFields,
      4);
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_classInputs.m_Size = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_classInputs.m_Memory.m_pMemory = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_classOutputs.m_Size = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_requiredEHandle.m_Index = -1;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_hNetworkSerializer = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_pBaseClassInfo = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_pClassInfo = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_flags = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_nAllHelpersFlags = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_pScriptClassDesc = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_pInputs = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_nInputCount = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_pOutputs = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_nOutputCount = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_pGameClass = 0;
    CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass._vptr_CEntityClass = off_3FDCA50;
    __cxa_guard_release(&`guard variable for'CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass);
    __cxa_atexit(
      CMarkupVolumeTagged::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass,
      &_dso_handle);
  }
  if ( g_pEntityCMarkupVolumeTaggedClass != 0 )
    return &CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass;
  if ( `guard variable for'CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo) != 0 )
  {
    EntityClassInfo = CMarkupVolume::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo,
      "CMarkupVolumeTagged",
      "markup_volume_tagged",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo);
  }
  CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_pClassInfo = &CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo;
  CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_pBaseClassInfo = CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo.m_pBaseClassInfo;
  g_pEntityCMarkupVolumeTaggedClass = &CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass;
  CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo.m_pClass = &CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass;
  CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass.m_pScriptClassDesc = GetScriptDesc<CMarkupVolumeTagged>(0);
  g_pEntityCMarkupVolumeTaggedClass->m_pComponentOverrides = 0;
  return &CMarkupVolumeTagged::GetEntityClassInternal(void)::g_EntityCMarkupVolumeTaggedClass;
}


// CMarkupVolumeTagged::GetEntityClass  (line 51, @0x00000000022a6630, libserver.so)
CEntityClass *__cdecl CMarkupVolumeTagged::GetEntityClass()
{
  return g_pEntityCMarkupVolumeTaggedClass;
}


// CMarkupVolumeTagged::Schema_DynamicBinding  (line 51, @0x00000000022a9f80, libserver.so)
// calls: CMarkupVolumeTagged::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CMarkupVolumeTagged::Schema_DynamicBinding(
        const CMarkupVolumeTagged *const this)
{
  CMarkupVolumeTagged::Schema_VerifyBindingIsRegistered();
  return CMarkupVolumeTagged::s_pSchemaBinding;
}


// CMarkupVolumeTagged::GetEntityClassInfo  (line 51, @0x00000000022b3d20, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CMarkupVolumeTagged_Group::GetEntityClassInternal, CMarkupVolumeTagged_Nav::GetEntityClassInternal, CMarkupVolumeTagged_NavL4D::GetEntityClassInternal, CMarkupVolumeTagged_NavHLVR::GetEntityClassInternal
// strings: "markup_volume_tagged", "CMarkupVolumeTagged", "markup_volume", "CMarkupVolume"
// globals: `guard variable for'CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo, CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo, `guard variable for'CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo, CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo
CEntityClassInfo *__cdecl CMarkupVolumeTagged::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo != 0 )
    return &CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo) == 0 )
    return &CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo;
  if ( `guard variable for'CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo,
      "CMarkupVolume",
      "markup_volume",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo,
    "CMarkupVolumeTagged",
    "markup_volume_tagged",
    0,
    &CMarkupVolume::GetEntityClassInfo(void)::g_EntityCMarkupVolumeClassInfo);
  __cxa_guard_release(&`guard variable for'CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo);
  return &CMarkupVolumeTagged::GetEntityClassInfo(void)::g_EntityCMarkupVolumeTaggedClassInfo;
}


