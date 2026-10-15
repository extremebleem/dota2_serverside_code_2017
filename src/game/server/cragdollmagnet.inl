
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRagdollMagnet::~CRagdollMagnet  (line 17, @0x00000000021b2600, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CRagdollMagnet::~CRagdollMagnet(CRagdollMagnet *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CRagdollMagnet::~CRagdollMagnet  (line 17, @0x00000000021b2620, libserver.so)  // inlines: ~CPointEntity, ~CRagdollMagnet
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CRagdollMagnet::~CRagdollMagnet(CRagdollMagnet *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CRagdollMagnet::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 19, @0x0000000001fb7aa0, libserver.so)
// globals: CRagdollMagnet::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRagdollMagnet::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CRagdollMagnet::CEntityInstanceEntityClass *const this)
{
  return CRagdollMagnet::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CRagdollMagnet::CEntityInstanceEntityClass::DestructInstance  (line 19, @0x0000000001fb7ab0, libserver.so)  // inlines: Destruct<CRagdollMagnet>
void __fastcall CRagdollMagnet::CEntityInstanceEntityClass::DestructInstance(
        CRagdollMagnet::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CRagdollMagnet::CEntityInstanceEntityClass::FreeInstance  (line 19, @0x0000000001fb7ad0, libserver.so)
void __fastcall CRagdollMagnet::CEntityInstanceEntityClass::FreeInstance(
        CRagdollMagnet::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRagdollMagnet::CEntityInstanceEntityClass::CanAllocate  (line 19, @0x0000000001fb7af0, libserver.so)
bool __fastcall CRagdollMagnet::CEntityInstanceEntityClass::CanAllocate(
        const CRagdollMagnet::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CRagdollMagnet::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 19, @0x0000000001fb7b00, libserver.so)
// globals: CRagdollMagnet::s_pSchemaBinding
const ISchemaBinding *__fastcall CRagdollMagnet::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CRagdollMagnet::CEntityInstanceEntityClass *const this)
{
  return CRagdollMagnet::s_pSchemaBinding;
}


// CRagdollMagnet::CEntityInstanceEntityClass::AllocateInstance  (line 19, @0x0000000001fb9be0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CRagdollMagnet::CEntityInstanceEntityClass::AllocateInstance(
        CRagdollMagnet::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 800);
  memset(v1, 0, 0x320u);
  return v1;
}


// CRagdollMagnet::CEntityInstanceEntityClass::ConstructInstance  (line 19, @0x0000000001fb9d40, libserver.so)  // inlines: CPointEntity, CRagdollMagnet, Construct<CRagdollMagnet>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CRagdollMagnet::CEntityInstanceEntityClass::ConstructInstance(
        CRagdollMagnet::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4013D30;
  }
  return p;
}


// CRagdollMagnet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x0000000001fbd6c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CRagdollMagnet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRagdollMagnet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CRagdollMagnet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x0000000001fbd6e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CRagdollMagnet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRagdollMagnet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CRagdollMagnet::GetEntityClassInternal  (line 19, @0x0000000001fcb160, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CBaseEntity>, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_01.cpp
// strings: "phys_ragdollmagnet", "CRagdollMagnet"
// globals: `guard variable for'CRagdollMagnet::GetEntityClassInternal(void)::g_EntityCRagdollMagnetClass, CRagdollMagnet::GetEntityClassInternal(void)::g_EntityCRagdollMagnetClass, __dso_handle, CRagdollMagnet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CRagdollMagnet::GetEntityClassInfo(void)::g_EntityCRagdollMagnetClassInfo, CRagdollMagnet::GetEntityClassInfo(void)::g_EntityCRagdollMagnetClassInfo
CEntityClass *__cdecl CRagdollMagnet::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRagdollMagnet::GetEntityClassInternal(void)::g_EntityCRagdollMagnetClass == 0
    && __cxa_guard_acquire(&`guard variable for'CRagdollMagnet::GetEntityClassInternal(void)::g_EntityCRagdollMagnetClass) != 0 )
  {
    CEntityClass::CEntityClass(&CRagdollMagnet::GetEntityClassInternal(void)::g_EntityCRagdollMagnetClass);
    CRagdollMagnet::GetEntityClassInternal(void)::g_EntityCRagdollMagnetClass._vptr_CEntityClass = off_3FD2FB0;
    __cxa_guard_release(&`guard variable for'CRagdollMagnet::GetEntityClassInternal(void)::g_EntityCRagdollMagnetClass);
    __cxa_atexit(
      CRagdollMagnet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CRagdollMagnet::GetEntityClassInternal(void)::g_EntityCRagdollMagnetClass,
      &_dso_handle);
  }
  if ( g_pEntityCRagdollMagnetClass != 0 )
    return &CRagdollMagnet::GetEntityClassInternal(void)::g_EntityCRagdollMagnetClass;
  if ( `guard variable for'CRagdollMagnet::GetEntityClassInfo(void)::g_EntityCRagdollMagnetClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRagdollMagnet::GetEntityClassInfo(void)::g_EntityCRagdollMagnetClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRagdollMagnet::GetEntityClassInfo(void)::g_EntityCRagdollMagnetClassInfo,
      "CRagdollMagnet",
      "phys_ragdollmagnet",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRagdollMagnet::GetEntityClassInfo(void)::g_EntityCRagdollMagnetClassInfo);
  }
  CRagdollMagnet::GetEntityClassInternal(void)::g_EntityCRagdollMagnetClass.m_pClassInfo = &CRagdollMagnet::GetEntityClassInfo(void)::g_EntityCRagdollMagnetClassInfo;
  CRagdollMagnet::GetEntityClassInternal(void)::g_EntityCRagdollMagnetClass.m_pBaseClassInfo = CRagdollMagnet::GetEntityClassInfo(void)::g_EntityCRagdollMagnetClassInfo.m_pBaseClassInfo;
  g_pEntityCRagdollMagnetClass = &CRagdollMagnet::GetEntityClassInternal(void)::g_EntityCRagdollMagnetClass;
  CRagdollMagnet::GetEntityClassInfo(void)::g_EntityCRagdollMagnetClassInfo.m_pClass = &CRagdollMagnet::GetEntityClassInternal(void)::g_EntityCRagdollMagnetClass;
  CRagdollMagnet::GetEntityClassInternal(void)::g_EntityCRagdollMagnetClass.m_pScriptClassDesc = GetScriptDesc<CBaseEntity>(0);
  g_pEntityCRagdollMagnetClass->m_pComponentOverrides = 0;
  return &CRagdollMagnet::GetEntityClassInternal(void)::g_EntityCRagdollMagnetClass;
}


// CRagdollMagnet::GetEntityClass  (line 19, @0x00000000021b1550, libserver.so)
CEntityClass *__cdecl CRagdollMagnet::GetEntityClass()
{
  return g_pEntityCRagdollMagnetClass;
}


// CRagdollMagnet::Schema_DynamicBinding  (line 19, @0x00000000021b2d70, libserver.so)
// calls: CRagdollMagnet::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CRagdollMagnet::Schema_DynamicBinding(const CRagdollMagnet *const this)
{
  CRagdollMagnet::Schema_VerifyBindingIsRegistered();
  return CRagdollMagnet::s_pSchemaBinding;
}


