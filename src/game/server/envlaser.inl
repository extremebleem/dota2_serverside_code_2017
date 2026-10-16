
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvLaser::~CEnvLaser  (line 22, @0x0000000002219250, libserver.so)  // inlines: ~CBeam, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CEnvLaser::~CEnvLaser(CEnvLaser *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CBeam::NetworkVar_m_nHaloIndex> *p_m_nHaloIndex; // rdi

  p_m_nHaloIndex = &this->m_nHaloIndex;
  p_m_nHaloIndex[-148].m_Value.m_pBinding = &off_4009D10;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_nHaloIndex->m_Value);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hBaseMaterial.m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CEnvLaser::~CEnvLaser  (line 22, @0x00000000022192a0, libserver.so)  // inlines: ~CBeam, ~CEnvLaser, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CEnvLaser::~CEnvLaser(CEnvLaser *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CBeam::NetworkVar_m_nHaloIndex> *p_m_nHaloIndex; // rdi

  p_m_nHaloIndex = &this->m_nHaloIndex;
  p_m_nHaloIndex[-148].m_Value.m_pBinding = &off_4009D10;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_nHaloIndex->m_Value);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hBaseMaterial.m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvLaser::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 24, @0x0000000001fd7f90, libserver.so)
// globals: CEnvLaser::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvLaser::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvLaser::CEntityInstanceEntityClass *const this)
{
  return CEnvLaser::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvLaser::CEntityInstanceEntityClass::DestructInstance  (line 24, @0x0000000001fd7fa0, libserver.so)  // inlines: Destruct<CEnvLaser>
void __fastcall CEnvLaser::CEntityInstanceEntityClass::DestructInstance(
        CEnvLaser::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvLaser::CEntityInstanceEntityClass::FreeInstance  (line 24, @0x0000000001fd7fc0, libserver.so)
void __fastcall CEnvLaser::CEntityInstanceEntityClass::FreeInstance(
        CEnvLaser::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvLaser::CEntityInstanceEntityClass::CanAllocate  (line 24, @0x0000000001fd7fe0, libserver.so)
bool __fastcall CEnvLaser::CEntityInstanceEntityClass::CanAllocate(
        const CEnvLaser::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvLaser::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 24, @0x0000000001fd7ff0, libserver.so)
// globals: CEnvLaser::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvLaser::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvLaser::CEntityInstanceEntityClass *const this)
{
  return CEnvLaser::s_pSchemaBinding;
}


// CEnvLaser::CEntityInstanceEntityClass::AllocateInstance  (line 24, @0x0000000001fd94e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvLaser::CEntityInstanceEntityClass::AllocateInstance(
        CEnvLaser::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1352);
  memset(v1, 0, 0x548u);
  return v1;
}


// CEnvLaser::CEntityInstanceEntityClass::ConstructInstance  (line 24, @0x0000000001fd9ab0, libserver.so)  // inlines: CEnvLaser, CUtlSymbolLarge, Construct<CEnvLaser>
// calls: CBeam::CBeam
CEntityInstance *__fastcall CEnvLaser::CEntityInstanceEntityClass::ConstructInstance(
        CEnvLaser::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBeam::CBeam(p);
    *(p + 164) = 0;
    *(p + 166) = 0;
    *p = &off_402E4B0;
  }
  return p;
}


// CEnvLaser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x0000000001fdadf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvLaser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvLaser::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvLaser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x0000000001fdae10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvLaser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvLaser::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvLaser::GetEntityClassInternal  (line 24, @0x0000000001fdeb90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "env_laser", "CEnvLaser", "CBeam"
// globals: `guard variable for'CEnvLaser::GetEntityClassInternal(void)::g_EntityCEnvLaserClass, CEnvLaser::GetEntityClassInternal(void)::g_EntityCEnvLaserClass, __dso_handle, CEnvLaser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvLaser::GetEntityClassInfo(void)::g_EntityCEnvLaserClassInfo, CEnvLaser::GetEntityClassInfo(void)::g_EntityCEnvLaserClassInfo, `guard variable for'CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo, CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo
CEntityClass *__cdecl CEnvLaser::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvLaser::GetEntityClassInternal(void)::g_EntityCEnvLaserClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvLaser::GetEntityClassInternal(void)::g_EntityCEnvLaserClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvLaser::GetEntityClassInternal(void)::g_EntityCEnvLaserClass);
    CEnvLaser::GetEntityClassInternal(void)::g_EntityCEnvLaserClass._vptr_CEntityClass = off_3FD7490;
    __cxa_guard_release(&`guard variable for'CEnvLaser::GetEntityClassInternal(void)::g_EntityCEnvLaserClass);
    __cxa_atexit(
      CEnvLaser::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvLaser::GetEntityClassInternal(void)::g_EntityCEnvLaserClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvLaserClass != 0 )
    return &CEnvLaser::GetEntityClassInternal(void)::g_EntityCEnvLaserClass;
  if ( `guard variable for'CEnvLaser::GetEntityClassInfo(void)::g_EntityCEnvLaserClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvLaser::GetEntityClassInfo(void)::g_EntityCEnvLaserClassInfo) != 0 )
  {
    if ( `guard variable for'CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo,
        "CBeam",
        "beam",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvLaser::GetEntityClassInfo(void)::g_EntityCEnvLaserClassInfo,
      "CEnvLaser",
      "env_laser",
      0,
      &CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvLaser::GetEntityClassInfo(void)::g_EntityCEnvLaserClassInfo);
  }
  CEnvLaser::GetEntityClassInternal(void)::g_EntityCEnvLaserClass.m_pClassInfo = &CEnvLaser::GetEntityClassInfo(void)::g_EntityCEnvLaserClassInfo;
  CEnvLaser::GetEntityClassInternal(void)::g_EntityCEnvLaserClass.m_pBaseClassInfo = CEnvLaser::GetEntityClassInfo(void)::g_EntityCEnvLaserClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvLaserClass = &CEnvLaser::GetEntityClassInternal(void)::g_EntityCEnvLaserClass;
  CEnvLaser::GetEntityClassInfo(void)::g_EntityCEnvLaserClassInfo.m_pClass = &CEnvLaser::GetEntityClassInternal(void)::g_EntityCEnvLaserClass;
  CEnvLaser::GetEntityClassInternal(void)::g_EntityCEnvLaserClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCEnvLaserClass->m_pComponentOverrides = 0;
  return &CEnvLaser::GetEntityClassInternal(void)::g_EntityCEnvLaserClass;
}


// CEnvLaser::GetEntityClass  (line 24, @0x000000000220df30, libserver.so)
CEntityClass *__cdecl CEnvLaser::GetEntityClass()
{
  return g_pEntityCEnvLaserClass;
}


// CEnvLaser::Schema_DynamicBinding  (line 24, @0x0000000002210f50, libserver.so)
// calls: CEnvLaser::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEnvLaser::Schema_DynamicBinding(const CEnvLaser *const this)
{
  CEnvLaser::Schema_VerifyBindingIsRegistered();
  return CEnvLaser::s_pSchemaBinding;
}


