
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvProjectedTexture::~CEnvProjectedTexture  (line 13, @0x00000000021e1700, libserver.so)  // inlines: ~CModelPointEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CEnvProjectedTexture::~CEnvProjectedTexture(CEnvProjectedTexture *const this)
{
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CEnvProjectedTexture::~CEnvProjectedTexture  (line 13, @0x00000000021e1720, libserver.so)  // inlines: ~CEnvProjectedTexture, ~CModelPointEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CEnvProjectedTexture::~CEnvProjectedTexture(CEnvProjectedTexture *const this)
{
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvProjectedTexture::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 15, @0x0000000001fd7f20, libserver.so)
// globals: CEnvProjectedTexture::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvProjectedTexture::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvProjectedTexture::CEntityInstanceEntityClass *const this)
{
  return CEnvProjectedTexture::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvProjectedTexture::CEntityInstanceEntityClass::DestructInstance  (line 15, @0x0000000001fd7f30, libserver.so)  // inlines: Destruct<CEnvProjectedTexture>
void __fastcall CEnvProjectedTexture::CEntityInstanceEntityClass::DestructInstance(
        CEnvProjectedTexture::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvProjectedTexture::CEntityInstanceEntityClass::FreeInstance  (line 15, @0x0000000001fd7f50, libserver.so)
void __fastcall CEnvProjectedTexture::CEntityInstanceEntityClass::FreeInstance(
        CEnvProjectedTexture::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvProjectedTexture::CEntityInstanceEntityClass::CanAllocate  (line 15, @0x0000000001fd7f70, libserver.so)
bool __fastcall CEnvProjectedTexture::CEntityInstanceEntityClass::CanAllocate(
        const CEnvProjectedTexture::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvProjectedTexture::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 15, @0x0000000001fd7f80, libserver.so)
// globals: CEnvProjectedTexture::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvProjectedTexture::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvProjectedTexture::CEntityInstanceEntityClass *const this)
{
  return CEnvProjectedTexture::s_pSchemaBinding;
}


// CEnvProjectedTexture::CEntityInstanceEntityClass::AllocateInstance  (line 15, @0x0000000001fd94a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvProjectedTexture::CEntityInstanceEntityClass::AllocateInstance(
        CEnvProjectedTexture::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1512);
  memset(v1, 0, 0x5E8u);
  return v1;
}


// CEnvProjectedTexture::CEntityInstanceEntityClass::ConstructInstance  (line 15, @0x0000000001fd9a80, libserver.so)  // inlines: Construct<CEnvProjectedTexture>
// calls: CEnvProjectedTexture::CEnvProjectedTexture
CEntityInstance *__fastcall CEnvProjectedTexture::CEntityInstanceEntityClass::ConstructInstance(
        CEnvProjectedTexture::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEnvProjectedTexture::CEnvProjectedTexture(p);
  return p;
}


// CEnvProjectedTexture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 15, @0x0000000001fdab20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvProjectedTexture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvProjectedTexture::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvProjectedTexture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 15, @0x0000000001fdab40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvProjectedTexture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvProjectedTexture::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvProjectedTexture::GetEntityClassInternal  (line 15, @0x0000000001fe1340, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CEnvProjectedTexture>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "env_projectedtexture", "CEnvProjectedTexture", "CModelPointEntity"
// globals: `guard variable for'CEnvProjectedTexture::GetEntityClassInternal(void)::g_EntityCEnvProjectedTextureClass, CEnvProjectedTexture::GetEntityClassInternal(void)::g_EntityCEnvProjectedTextureClass, __dso_handle, CEnvProjectedTexture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvProjectedTexture::GetEntityClassInfo(void)::g_EntityCEnvProjectedTextureClassInfo, CEnvProjectedTexture::GetEntityClassInfo(void)::g_EntityCEnvProjectedTextureClassInfo, `guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo, CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo
CEntityClass *__cdecl CEnvProjectedTexture::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvProjectedTexture::GetEntityClassInternal(void)::g_EntityCEnvProjectedTextureClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvProjectedTexture::GetEntityClassInternal(void)::g_EntityCEnvProjectedTextureClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvProjectedTexture::GetEntityClassInternal(void)::g_EntityCEnvProjectedTextureClass);
    CEnvProjectedTexture::GetEntityClassInternal(void)::g_EntityCEnvProjectedTextureClass._vptr_CEntityClass = off_3FD72D0;
    __cxa_guard_release(&`guard variable for'CEnvProjectedTexture::GetEntityClassInternal(void)::g_EntityCEnvProjectedTextureClass);
    __cxa_atexit(
      CEnvProjectedTexture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvProjectedTexture::GetEntityClassInternal(void)::g_EntityCEnvProjectedTextureClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvProjectedTextureClass != 0 )
    return &CEnvProjectedTexture::GetEntityClassInternal(void)::g_EntityCEnvProjectedTextureClass;
  if ( `guard variable for'CEnvProjectedTexture::GetEntityClassInfo(void)::g_EntityCEnvProjectedTextureClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvProjectedTexture::GetEntityClassInfo(void)::g_EntityCEnvProjectedTextureClassInfo) != 0 )
  {
    if ( `guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo,
        "CModelPointEntity",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvProjectedTexture::GetEntityClassInfo(void)::g_EntityCEnvProjectedTextureClassInfo,
      "CEnvProjectedTexture",
      "env_projectedtexture",
      0,
      &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvProjectedTexture::GetEntityClassInfo(void)::g_EntityCEnvProjectedTextureClassInfo);
  }
  CEnvProjectedTexture::GetEntityClassInternal(void)::g_EntityCEnvProjectedTextureClass.m_pClassInfo = &CEnvProjectedTexture::GetEntityClassInfo(void)::g_EntityCEnvProjectedTextureClassInfo;
  CEnvProjectedTexture::GetEntityClassInternal(void)::g_EntityCEnvProjectedTextureClass.m_pBaseClassInfo = CEnvProjectedTexture::GetEntityClassInfo(void)::g_EntityCEnvProjectedTextureClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvProjectedTextureClass = &CEnvProjectedTexture::GetEntityClassInternal(void)::g_EntityCEnvProjectedTextureClass;
  CEnvProjectedTexture::GetEntityClassInfo(void)::g_EntityCEnvProjectedTextureClassInfo.m_pClass = &CEnvProjectedTexture::GetEntityClassInternal(void)::g_EntityCEnvProjectedTextureClass;
  CEnvProjectedTexture::GetEntityClassInternal(void)::g_EntityCEnvProjectedTextureClass.m_pScriptClassDesc = GetScriptDesc<CEnvProjectedTexture>(0);
  g_pEntityCEnvProjectedTextureClass->m_pComponentOverrides = 0;
  return &CEnvProjectedTexture::GetEntityClassInternal(void)::g_EntityCEnvProjectedTextureClass;
}


// CEnvProjectedTexture::GetEntityClass  (line 15, @0x00000000021df450, libserver.so)
CEntityClass *__cdecl CEnvProjectedTexture::GetEntityClass()
{
  return g_pEntityCEnvProjectedTextureClass;
}


// CEnvProjectedTexture::Schema_DynamicBinding  (line 15, @0x00000000021e19e0, libserver.so)
// calls: CEnvProjectedTexture::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEnvProjectedTexture::Schema_DynamicBinding(
        const CEnvProjectedTexture *const this)
{
  CEnvProjectedTexture::Schema_VerifyBindingIsRegistered();
  return CEnvProjectedTexture::s_pSchemaBinding;
}


