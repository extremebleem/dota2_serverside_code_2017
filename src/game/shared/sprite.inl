
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSprite::~CSprite  (line 85, @0x00000000023f77f0, libserver.so)  // inlines: ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CSprite::~CSprite(CSprite *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CSprite::NetworkVar_m_hSpriteMaterial> *p_m_hSpriteMaterial; // rdi

  p_m_hSpriteMaterial = &this->m_hSpriteMaterial;
  p_m_hSpriteMaterial[-144].m_Value.m_pBinding = &off_40B1BF0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_hSpriteMaterial->m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CSprite::~CSprite  (line 85, @0x00000000023f7830, libserver.so)  // inlines: ~CNetworkVarBase, ~CSprite, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CSprite::~CSprite(CSprite *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CSprite::NetworkVar_m_hSpriteMaterial> *p_m_hSpriteMaterial; // rdi

  p_m_hSpriteMaterial = &this->m_hSpriteMaterial;
  p_m_hSpriteMaterial[-144].m_Value.m_pBinding = &off_40B1BF0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_hSpriteMaterial->m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CSprite::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 90, @0x0000000001f21c50, libserver.so)
// globals: CSprite::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSprite::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CSprite::CEntityInstanceEntityClass *const this)
{
  return CSprite::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CSprite::CEntityInstanceEntityClass::DestructInstance  (line 90, @0x0000000001f21c60, libserver.so)  // inlines: Destruct<CSprite>
void __fastcall CSprite::CEntityInstanceEntityClass::DestructInstance(
        CSprite::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CSprite::CEntityInstanceEntityClass::FreeInstance  (line 90, @0x0000000001f21c80, libserver.so)
void __fastcall CSprite::CEntityInstanceEntityClass::FreeInstance(
        CSprite::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CSprite::CEntityInstanceEntityClass::CanAllocate  (line 90, @0x0000000001f21ca0, libserver.so)
bool __fastcall CSprite::CEntityInstanceEntityClass::CanAllocate(const CSprite::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CSprite::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 90, @0x0000000001f21cb0, libserver.so)
// globals: CSprite::s_pSchemaBinding
const ISchemaBinding *__fastcall CSprite::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CSprite::CEntityInstanceEntityClass *const this)
{
  return CSprite::s_pSchemaBinding;
}


// CSprite::CEntityInstanceEntityClass::AllocateInstance  (line 90, @0x0000000001f232c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CSprite::CEntityInstanceEntityClass::AllocateInstance(CSprite::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1264);
  memset(v1, 0, 0x4F0u);
  return v1;
}


// CSprite::CEntityInstanceEntityClass::ConstructInstance  (line 90, @0x0000000001f23340, libserver.so)  // inlines: Construct<CSprite>
// calls: CSprite::CSprite
CEntityInstance *__fastcall CSprite::CEntityInstanceEntityClass::ConstructInstance(
        CSprite::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CSprite::CSprite(p);
  return p;
}


// CSprite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 90, @0x0000000001f24c70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CSprite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSprite::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CSprite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 90, @0x0000000001f24c90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CSprite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSprite::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CSprite::GetEntityClassInternal  (line 90, @0x0000000001f28b20, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_game_shared_header_files_02.cpp
// strings: "env_sprite", "CSprite", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass, CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CSprite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo, CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo (9 total)
CEntityClass *__cdecl CSprite::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass) != 0 )
  {
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_designerName.u.m_Id = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass._vptr_CEntityClass = off_3F79390;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_ComponentOffsets.m_Size = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_AllHelpers.m_Size = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_instanceUnserializer.m_atomicFields,
      4);
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_classInputs.m_Size = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_classInputs.m_Memory.m_pMemory = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_classOutputs.m_Size = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_requiredEHandle.m_Index = -1;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_hNetworkSerializer = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_pBaseClassInfo = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_pClassInfo = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_flags = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_nAllHelpersFlags = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_pScriptClassDesc = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_pInputs = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_nInputCount = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_pOutputs = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_nOutputCount = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_pGameClass = 0;
    CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass._vptr_CEntityClass = off_3FC8EB0;
    __cxa_guard_release(&`guard variable for'CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass);
    __cxa_atexit(
      CSprite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass,
      &_dso_handle);
  }
  if ( g_pEntityCSpriteClass != 0 )
    return &CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass;
  if ( `guard variable for'CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
        "CBaseModelEntity",
        "basemodelentity",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo,
      "CSprite",
      "env_sprite",
      0,
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo);
  }
  CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_pClassInfo = &CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo;
  CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_pBaseClassInfo = CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo.m_pBaseClassInfo;
  g_pEntityCSpriteClass = &CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass;
  CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo.m_pClass = &CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass;
  CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCSpriteClass->m_pComponentOverrides = 0;
  return &CSprite::GetEntityClassInternal(void)::g_EntityCSpriteClass;
}


// CSprite::GetEntityClass  (line 90, @0x00000000023e5390, libserver.so)
CEntityClass *__cdecl CSprite::GetEntityClass()
{
  return g_pEntityCSpriteClass;
}


// CSprite::Schema_DynamicBinding  (line 90, @0x00000000023e9580, libserver.so)
// calls: CSprite::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CSprite::Schema_DynamicBinding(const CSprite *const this)
{
  CSprite::Schema_VerifyBindingIsRegistered();
  return CSprite::s_pSchemaBinding;
}


// CSprite::GetEntityClassInfo  (line 90, @0x00000000023ee210, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CSpriteAlias_env_glow::GetEntityClassInternal, CSpriteAlias_env_glow::CEntityInstanceEntityClass::InitOptionalTables
// strings: "env_sprite", "CSprite", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo, CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo
CEntityClassInfo *__cdecl CSprite::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo != 0 )
    return &CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo) == 0 )
    return &CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo;
  if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
      "CBaseModelEntity",
      "basemodelentity",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo,
    "CSprite",
    "env_sprite",
    0,
    &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo);
  return &CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo;
}


// CSprite::HackToMakeAVTable  (line 92, @0x00000000021b1240, libserver.so)
void __fastcall CSprite::HackToMakeAVTable(const CSprite *const this)
{
  ;
}


// CSprite::ObjectCaps  (line 123, @0x00000000021b2350, libserver.so)  // inlines: HasSpawnFlags, IsTemporary
// calls: CBaseEntity::ObjectCaps
int __fastcall CSprite::ObjectCaps(CSprite *const this)
{
  unsigned int m_Value; // ebx
  int v2; // eax

  m_Value = this->m_spawnflags.m_Value;
  v2 = CBaseEntity::ObjectCaps(this);
  LOBYTE(v2) = v2 & 0x7F;
  return (m_Value << 16) & 0x80000000 | v2;
}


// CSprite::BeginFadeOutThink  (line 223, @0x00000000023ee430, libserver.so)  // inlines: FadeAndDie, curtime
// calls: CSprite::SetBrightness, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CSprite::AnimateUntilDead(void)
void __fastcall CSprite::BeginFadeOutThink(CSprite *const this)
{
  double v1; // xmm1_8
  double v3; // xmm1_8
  CGlobalVars *v4; // rbx
  CGlobalVars *v5; // rax
  CGlobalVars *v6; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  void (__fastcall *v8)(__int64); // rax
  double v9; // xmm0_8

  CSprite::SetBrightness(this, 0, COERCE_DOUBLE(1048576000), v1);
  CBaseEntity::ThinkSet(this, CSprite::AnimateUntilDead, 0.0, 0, 0);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    v5 = gpGlobals;
    v6 = gpGlobals;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      v6 = gpGlobals;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v6 = gpGlobals;
        v5 = gpGlobals;
      }
    }
    this->m_flDieTime = v4->m_flCurrentTime + 0.25;
    if ( v5 != 0 )
    {
      if ( !v6->m_bEnableAssertions && !v6->m_bInSimulation )
      {
        v8 = v6->m_pfnWarningFunc;
        if ( v8 != 0 )
          v8(1);
      }
      *&v9 = LODWORD(v6->m_flCurrentTime);
    }
    else
    {
      v9 = 0.0;
    }
  }
  else
  {
    this->m_flDieTime = 0.25;
    v9 = 0.0;
  }
  CBaseEntity::SetNextThink(this, v9, v3, 0);
}


// CSpriteOriented::~CSpriteOriented  (line 302, @0x00000000023f7870, libserver.so)  // inlines: ~CNetworkVarBase, ~CSprite, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CSpriteOriented::~CSpriteOriented(CSpriteOriented *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CSprite::NetworkVar_m_hSpriteMaterial> *p_m_hSpriteMaterial; // rdi

  p_m_hSpriteMaterial = &this->m_hSpriteMaterial;
  p_m_hSpriteMaterial[-144].m_Value.m_pBinding = &off_40B1BF0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_hSpriteMaterial->m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CSpriteOriented::~CSpriteOriented  (line 302, @0x00000000023f78b0, libserver.so)  // inlines: ~CNetworkVarBase, ~CSprite, ~CSpriteOriented, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CSpriteOriented::~CSpriteOriented(CSpriteOriented *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CSprite::NetworkVar_m_hSpriteMaterial> *p_m_hSpriteMaterial; // rdi

  p_m_hSpriteMaterial = &this->m_hSpriteMaterial;
  p_m_hSpriteMaterial[-144].m_Value.m_pBinding = &off_40B1BF0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_hSpriteMaterial->m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CSpriteOriented::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 304, @0x0000000001f21cc0, libserver.so)
// globals: CSpriteOriented::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSpriteOriented::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CSpriteOriented::CEntityInstanceEntityClass *const this)
{
  return CSpriteOriented::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CSpriteOriented::CEntityInstanceEntityClass::DestructInstance  (line 304, @0x0000000001f21cd0, libserver.so)  // inlines: Destruct<CSpriteOriented>
void __fastcall CSpriteOriented::CEntityInstanceEntityClass::DestructInstance(
        CSpriteOriented::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CSpriteOriented::CEntityInstanceEntityClass::FreeInstance  (line 304, @0x0000000001f21cf0, libserver.so)
void __fastcall CSpriteOriented::CEntityInstanceEntityClass::FreeInstance(
        CSpriteOriented::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CSpriteOriented::CEntityInstanceEntityClass::CanAllocate  (line 304, @0x0000000001f21d10, libserver.so)
bool __fastcall CSpriteOriented::CEntityInstanceEntityClass::CanAllocate(
        const CSpriteOriented::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CSpriteOriented::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 304, @0x0000000001f21d20, libserver.so)
// globals: CSpriteOriented::s_pSchemaBinding
const ISchemaBinding *__fastcall CSpriteOriented::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CSpriteOriented::CEntityInstanceEntityClass *const this)
{
  return CSpriteOriented::s_pSchemaBinding;
}


// CSpriteOriented::CEntityInstanceEntityClass::AllocateInstance  (line 304, @0x0000000001f23300, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CSpriteOriented::CEntityInstanceEntityClass::AllocateInstance(
        CSpriteOriented::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1264);
  memset(v1, 0, 0x4F0u);
  return v1;
}


// CSpriteOriented::CEntityInstanceEntityClass::ConstructInstance  (line 304, @0x0000000001f23370, libserver.so)  // inlines: CSpriteOriented, Construct<CSpriteOriented>
// calls: CSprite::CSprite
CEntityInstance *__fastcall CSpriteOriented::CEntityInstanceEntityClass::ConstructInstance(
        CSpriteOriented::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CSprite::CSprite(p);
    *p = &off_40B1530;
  }
  return p;
}


// CSpriteOriented::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 304, @0x0000000001f24cc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CSpriteOriented::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSpriteOriented::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CSpriteOriented::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 304, @0x0000000001f24ce0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CSpriteOriented::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSpriteOriented::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CSpriteOriented::GetEntityClassInternal  (line 304, @0x0000000001f28eb0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_game_shared_header_files_02.cpp
// strings: "env_sprite_oriented", "CSpriteOriented", "env_sprite", "CSprite", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass, CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CSpriteOriented::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSpriteOriented::GetEntityClassInfo(void)::g_EntityCSpriteOrientedClassInfo, CSpriteOriented::GetEntityClassInfo(void)::g_EntityCSpriteOrientedClassInfo, `guard variable for'CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo (11 total)
CEntityClass *__cdecl CSpriteOriented::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass) != 0 )
  {
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_designerName.u.m_Id = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass._vptr_CEntityClass = off_3F79390;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_ComponentOffsets.m_Size = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_AllHelpers.m_Size = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_instanceUnserializer.m_atomicFields,
      4);
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_classInputs.m_Size = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_classInputs.m_Memory.m_pMemory = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_classOutputs.m_Size = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_requiredEHandle.m_Index = -1;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_hNetworkSerializer = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_pBaseClassInfo = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_pClassInfo = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_flags = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_nAllHelpersFlags = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_pScriptClassDesc = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_pInputs = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_nInputCount = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_pOutputs = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_nOutputCount = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_pGameClass = 0;
    CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass._vptr_CEntityClass = off_3FC8F30;
    __cxa_guard_release(&`guard variable for'CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass);
    __cxa_atexit(
      CSpriteOriented::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass,
      &_dso_handle);
  }
  if ( g_pEntityCSpriteOrientedClass != 0 )
    return &CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass;
  if ( `guard variable for'CSpriteOriented::GetEntityClassInfo(void)::g_EntityCSpriteOrientedClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CSpriteOriented::GetEntityClassInfo(void)::g_EntityCSpriteOrientedClassInfo) != 0 )
  {
    if ( `guard variable for'CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo) != 0 )
    {
      if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
      {
        EntityClassInfo = CBaseEntity::GetEntityClassInfo();
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
          "CBaseModelEntity",
          "basemodelentity",
          0,
          EntityClassInfo);
        __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo,
        "CSprite",
        "env_sprite",
        0,
        &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CSpriteOriented::GetEntityClassInfo(void)::g_EntityCSpriteOrientedClassInfo,
      "CSpriteOriented",
      "env_sprite_oriented",
      0,
      &CSprite::GetEntityClassInfo(void)::g_EntityCSpriteClassInfo);
    __cxa_guard_release(&`guard variable for'CSpriteOriented::GetEntityClassInfo(void)::g_EntityCSpriteOrientedClassInfo);
  }
  CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_pClassInfo = &CSpriteOriented::GetEntityClassInfo(void)::g_EntityCSpriteOrientedClassInfo;
  CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_pBaseClassInfo = CSpriteOriented::GetEntityClassInfo(void)::g_EntityCSpriteOrientedClassInfo.m_pBaseClassInfo;
  g_pEntityCSpriteOrientedClass = &CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass;
  CSpriteOriented::GetEntityClassInfo(void)::g_EntityCSpriteOrientedClassInfo.m_pClass = &CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass;
  CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCSpriteOrientedClass->m_pComponentOverrides = 0;
  return &CSpriteOriented::GetEntityClassInternal(void)::g_EntityCSpriteOrientedClass;
}


// CSpriteOriented::Schema_DynamicBinding  (line 304, @0x00000000023e95a0, libserver.so)
// calls: CSpriteOriented::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CSpriteOriented::Schema_DynamicBinding(const CSpriteOriented *const this)
{
  CSpriteOriented::Schema_VerifyBindingIsRegistered();
  return CSpriteOriented::s_pSchemaBinding;
}


