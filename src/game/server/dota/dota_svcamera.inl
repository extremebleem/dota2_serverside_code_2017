
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTACameraBounds::~CDOTACameraBounds  (line 12, @0x0000000002736e30, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDOTACameraBounds::~CDOTACameraBounds(CDOTACameraBounds *const this)
{
  this->_vptr_IHandleEntity = &off_42AB090;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTACameraBounds::~CDOTACameraBounds  (line 12, @0x0000000002736e50, libserver.so)  // inlines: ~CDOTACameraBounds
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDOTACameraBounds::~CDOTACameraBounds(CDOTACameraBounds *const this)
{
  this->_vptr_IHandleEntity = &off_42AB090;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTACameraBounds::GetEntityClass  (line 14, @0x0000000002728600, libserver.so)
CEntityClass *__cdecl CDOTACameraBounds::GetEntityClass()
{
  return g_pEntityCDOTACameraBoundsClass;
}


// CDOTACameraBounds::Schema_DynamicBinding  (line 14, @0x0000000002728610, libserver.so)
// globals: CDOTACameraBounds::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTACameraBounds::Schema_DynamicBinding(const CDOTACameraBounds *const this)
{
  return CDOTACameraBounds::s_pSchemaBinding;
}


// CDOTACameraBounds::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 14, @0x0000000002728620, libserver.so)
// globals: CDOTACameraBounds::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTACameraBounds::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTACameraBounds::CEntityInstanceEntityClass *const this)
{
  return CDOTACameraBounds::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTACameraBounds::CEntityInstanceEntityClass::DestructInstance  (line 14, @0x0000000002728630, libserver.so)  // inlines: Destruct<CDOTACameraBounds>
void __fastcall CDOTACameraBounds::CEntityInstanceEntityClass::DestructInstance(
        CDOTACameraBounds::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTACameraBounds::CEntityInstanceEntityClass::FreeInstance  (line 14, @0x0000000002728650, libserver.so)
void __fastcall CDOTACameraBounds::CEntityInstanceEntityClass::FreeInstance(
        CDOTACameraBounds::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTACameraBounds::CEntityInstanceEntityClass::CanAllocate  (line 14, @0x0000000002728670, libserver.so)
bool __fastcall CDOTACameraBounds::CEntityInstanceEntityClass::CanAllocate(
        const CDOTACameraBounds::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTACameraBounds::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 14, @0x0000000002728680, libserver.so)
// globals: CDOTACameraBounds::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTACameraBounds::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTACameraBounds::CEntityInstanceEntityClass *const this)
{
  return CDOTACameraBounds::s_pSchemaBinding;
}


// CDOTACameraBounds::CEntityInstanceEntityClass::AllocateInstance  (line 14, @0x0000000002736940, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTACameraBounds::CEntityInstanceEntityClass::AllocateInstance(
        CDOTACameraBounds::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 800);
  memset(v1, 0, 0x320u);
  return v1;
}


// CDOTACameraBounds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 14, @0x000000000274d320, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTACameraBounds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTACameraBounds::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTACameraBounds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 14, @0x000000000274d340, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTACameraBounds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTACameraBounds::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTACameraBounds::GetEntityClassInternal  (line 14, @0x000000000279e740, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
// strings: "world_bounds", "CDOTACameraBounds"
// globals: `guard variable for'CDOTACameraBounds::GetEntityClassInternal(void)::g_EntityCDOTACameraBoundsClass, CDOTACameraBounds::GetEntityClassInternal(void)::g_EntityCDOTACameraBoundsClass, __dso_handle, CDOTACameraBounds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTACameraBounds::GetEntityClassInfo(void)::g_EntityCDOTACameraBoundsClassInfo, CDOTACameraBounds::GetEntityClassInfo(void)::g_EntityCDOTACameraBoundsClassInfo
CEntityClass *__cdecl CDOTACameraBounds::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTACameraBounds::GetEntityClassInternal(void)::g_EntityCDOTACameraBoundsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTACameraBounds::GetEntityClassInternal(void)::g_EntityCDOTACameraBoundsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTACameraBounds::GetEntityClassInternal(void)::g_EntityCDOTACameraBoundsClass);
    CDOTACameraBounds::GetEntityClassInternal(void)::g_EntityCDOTACameraBoundsClass._vptr_CEntityClass = off_42AB010;
    __cxa_guard_release(&`guard variable for'CDOTACameraBounds::GetEntityClassInternal(void)::g_EntityCDOTACameraBoundsClass);
    __cxa_atexit(
      CDOTACameraBounds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTACameraBounds::GetEntityClassInternal(void)::g_EntityCDOTACameraBoundsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTACameraBoundsClass != 0 )
    return &CDOTACameraBounds::GetEntityClassInternal(void)::g_EntityCDOTACameraBoundsClass;
  if ( `guard variable for'CDOTACameraBounds::GetEntityClassInfo(void)::g_EntityCDOTACameraBoundsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTACameraBounds::GetEntityClassInfo(void)::g_EntityCDOTACameraBoundsClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTACameraBounds::GetEntityClassInfo(void)::g_EntityCDOTACameraBoundsClassInfo,
      "CDOTACameraBounds",
      "world_bounds",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTACameraBounds::GetEntityClassInfo(void)::g_EntityCDOTACameraBoundsClassInfo);
  }
  CDOTACameraBounds::GetEntityClassInternal(void)::g_EntityCDOTACameraBoundsClass.m_pClassInfo = &CDOTACameraBounds::GetEntityClassInfo(void)::g_EntityCDOTACameraBoundsClassInfo;
  CDOTACameraBounds::GetEntityClassInternal(void)::g_EntityCDOTACameraBoundsClass.m_pBaseClassInfo = CDOTACameraBounds::GetEntityClassInfo(void)::g_EntityCDOTACameraBoundsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTACameraBoundsClass = &CDOTACameraBounds::GetEntityClassInternal(void)::g_EntityCDOTACameraBoundsClass;
  CDOTACameraBounds::GetEntityClassInfo(void)::g_EntityCDOTACameraBoundsClassInfo.m_pClass = &CDOTACameraBounds::GetEntityClassInternal(void)::g_EntityCDOTACameraBoundsClass;
  CDOTACameraBounds::GetEntityClassInternal(void)::g_EntityCDOTACameraBoundsClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTACameraBoundsClass->m_pComponentOverrides = 0;
  return &CDOTACameraBounds::GetEntityClassInternal(void)::g_EntityCDOTACameraBoundsClass;
}


// CDOTACameraBounds::CEntityInstanceEntityClass::ConstructInstance  (line 14, @0x000000000279e890, libserver.so)  // inlines: Construct<CDOTACameraBounds>
// calls: CDOTACameraBounds::CDOTACameraBounds
CEntityInstance *__fastcall CDOTACameraBounds::CEntityInstanceEntityClass::ConstructInstance(
        CDOTACameraBounds::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTACameraBounds::CDOTACameraBounds(p);
  return p;
}


// CDOTACameraBounds::UpdateTransmitState  (line 25, @0x0000000002736cd0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CDOTACameraBounds::UpdateTransmitState(CDOTACameraBounds *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


