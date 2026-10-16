
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityFlame::~CEntityFlame  (line 24, @0x00000000021e2230, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CUtlMemory<CAI_Link*, int>::Purge
void __fastcall CEntityFlame::~CEntityFlame(CEntityFlame *const this)
{
  bool v2; // zf
  CUtlVectorBase<CAI_Link*,CUtlMemory<CAI_Link*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_DangerLinks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4023A50;
  this->m_DangerLinks.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_DangerLinks.m_Memory,
        CUtlMemory<CAI_Link *,int>::Purge(&this->m_DangerLinks.m_Memory),
        (this->m_DangerLinks.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseEntity::~CBaseEntity(this);
  }
  else
  {
    CUtlMemory<CAI_Link *,int>::Purge(p_m_Memory);
    CBaseEntity::~CBaseEntity(this);
  }
}


// CEntityFlame::~CEntityFlame  (line 24, @0x00000000021e22a0, libserver.so)  // inlines: Purge, RemoveAll, ~CEntityFlame, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CAI_Link*, int>::Purge
void __fastcall CEntityFlame::~CEntityFlame(CEntityFlame *const this)
{
  bool v2; // zf
  CUtlVectorBase<CAI_Link*,CUtlMemory<CAI_Link*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_DangerLinks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4023A50;
  this->m_DangerLinks.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_DangerLinks.m_Memory;
    CUtlMemory<CAI_Link *,int>::Purge(&this->m_DangerLinks.m_Memory);
    if ( (this->m_DangerLinks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CAI_Link *,int>::Purge(p_m_Memory);
  }
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEntityFlame::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 27, @0x0000000001fd7dd0, libserver.so)
// globals: CEntityFlame::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEntityFlame::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEntityFlame::CEntityInstanceEntityClass *const this)
{
  return CEntityFlame::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEntityFlame::CEntityInstanceEntityClass::DestructInstance  (line 27, @0x0000000001fd7de0, libserver.so)  // inlines: Destruct<CEntityFlame>
void __fastcall CEntityFlame::CEntityInstanceEntityClass::DestructInstance(
        CEntityFlame::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEntityFlame::CEntityInstanceEntityClass::FreeInstance  (line 27, @0x0000000001fd7e00, libserver.so)
void __fastcall CEntityFlame::CEntityInstanceEntityClass::FreeInstance(
        CEntityFlame::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEntityFlame::CEntityInstanceEntityClass::CanAllocate  (line 27, @0x0000000001fd7e20, libserver.so)
bool __fastcall CEntityFlame::CEntityInstanceEntityClass::CanAllocate(
        const CEntityFlame::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEntityFlame::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 27, @0x0000000001fd7e30, libserver.so)
// globals: CEntityFlame::s_pSchemaBinding
const ISchemaBinding *__fastcall CEntityFlame::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEntityFlame::CEntityInstanceEntityClass *const this)
{
  return CEntityFlame::s_pSchemaBinding;
}


// CEntityFlame::CEntityInstanceEntityClass::AllocateInstance  (line 27, @0x0000000001fd93e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEntityFlame::CEntityInstanceEntityClass::AllocateInstance(
        CEntityFlame::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 864);
  memset(v1, 0, 0x360u);
  return v1;
}


// CEntityFlame::CEntityInstanceEntityClass::ConstructInstance  (line 27, @0x0000000001fd9a50, libserver.so)  // inlines: Construct<CEntityFlame>
// calls: CEntityFlame::CEntityFlame
CEntityInstance *__fastcall CEntityFlame::CEntityInstanceEntityClass::ConstructInstance(
        CEntityFlame::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEntityFlame::CEntityFlame(p);
  return p;
}


// CEntityFlame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x0000000001fdaee0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEntityFlame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEntityFlame::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEntityFlame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x0000000001fdaf00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEntityFlame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEntityFlame::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEntityFlame::GetEntityClassInternal  (line 27, @0x0000000001fde320, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_header_files_02.cpp
// strings: "entityflame", "CEntityFlame"
// globals: `guard variable for'CEntityFlame::GetEntityClassInternal(void)::g_EntityCEntityFlameClass, CEntityFlame::GetEntityClassInternal(void)::g_EntityCEntityFlameClass, __dso_handle, CEntityFlame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEntityFlame::GetEntityClassInfo(void)::g_EntityCEntityFlameClassInfo, CEntityFlame::GetEntityClassInfo(void)::g_EntityCEntityFlameClassInfo
CEntityClass *__cdecl CEntityFlame::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEntityFlame::GetEntityClassInternal(void)::g_EntityCEntityFlameClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityFlame::GetEntityClassInternal(void)::g_EntityCEntityFlameClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEntityFlame::GetEntityClassInternal(void)::g_EntityCEntityFlameClass);
    CEntityFlame::GetEntityClassInternal(void)::g_EntityCEntityFlameClass._vptr_CEntityClass = off_3FD6D90;
    __cxa_guard_release(&`guard variable for'CEntityFlame::GetEntityClassInternal(void)::g_EntityCEntityFlameClass);
    __cxa_atexit(
      CEntityFlame::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEntityFlame::GetEntityClassInternal(void)::g_EntityCEntityFlameClass,
      &_dso_handle);
  }
  if ( g_pEntityCEntityFlameClass != 0 )
    return &CEntityFlame::GetEntityClassInternal(void)::g_EntityCEntityFlameClass;
  if ( `guard variable for'CEntityFlame::GetEntityClassInfo(void)::g_EntityCEntityFlameClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityFlame::GetEntityClassInfo(void)::g_EntityCEntityFlameClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEntityFlame::GetEntityClassInfo(void)::g_EntityCEntityFlameClassInfo,
      "CEntityFlame",
      "entityflame",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEntityFlame::GetEntityClassInfo(void)::g_EntityCEntityFlameClassInfo);
  }
  CEntityFlame::GetEntityClassInternal(void)::g_EntityCEntityFlameClass.m_pClassInfo = &CEntityFlame::GetEntityClassInfo(void)::g_EntityCEntityFlameClassInfo;
  CEntityFlame::GetEntityClassInternal(void)::g_EntityCEntityFlameClass.m_pBaseClassInfo = CEntityFlame::GetEntityClassInfo(void)::g_EntityCEntityFlameClassInfo.m_pBaseClassInfo;
  g_pEntityCEntityFlameClass = &CEntityFlame::GetEntityClassInternal(void)::g_EntityCEntityFlameClass;
  CEntityFlame::GetEntityClassInfo(void)::g_EntityCEntityFlameClassInfo.m_pClass = &CEntityFlame::GetEntityClassInternal(void)::g_EntityCEntityFlameClass;
  CEntityFlame::GetEntityClassInternal(void)::g_EntityCEntityFlameClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEntityFlameClass->m_pComponentOverrides = 0;
  return &CEntityFlame::GetEntityClassInternal(void)::g_EntityCEntityFlameClass;
}


// CEntityFlame::GetEntityClass  (line 27, @0x00000000021de4e0, libserver.so)
CEntityClass *__cdecl CEntityFlame::GetEntityClass()
{
  return g_pEntityCEntityFlameClass;
}


// CEntityFlame::Schema_DynamicBinding  (line 27, @0x00000000021e1900, libserver.so)
// calls: CEntityFlame::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CEntityFlame::Schema_DynamicBinding(const CEntityFlame *const this)
{
  CEntityFlame::Schema_VerifyBindingIsRegistered();
  return CEntityFlame::s_pSchemaBinding;
}


// CEntityFlame::UpdateTransmitState  (line 33, @0x00000000021e1020, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CEntityFlame::UpdateTransmitState(CEntityFlame *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


