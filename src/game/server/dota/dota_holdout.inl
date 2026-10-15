
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAHoldoutNetworker::~CDOTAHoldoutNetworker  (line 80, @0x00000000025c7680, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDOTAHoldoutNetworker::~CDOTAHoldoutNetworker(CDOTAHoldoutNetworker *const this)
{
  this->_vptr_IHandleEntity = &off_4101CB0;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTAHoldoutNetworker::~CDOTAHoldoutNetworker  (line 80, @0x00000000025c76a0, libserver.so)  // inlines: ~CDOTAHoldoutNetworker
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDOTAHoldoutNetworker::~CDOTAHoldoutNetworker(CDOTAHoldoutNetworker *const this)
{
  this->_vptr_IHandleEntity = &off_4101CB0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTAHoldoutNetworker::Schema_DynamicBinding  (line 82, @0x00000000025c5240, libserver.so)
// globals: CDOTAHoldoutNetworker::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAHoldoutNetworker::Schema_DynamicBinding(
        const CDOTAHoldoutNetworker *const this)
{
  return CDOTAHoldoutNetworker::s_pSchemaBinding;
}


// CDOTAHoldoutNetworker::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 82, @0x00000000025c5250, libserver.so)
// globals: CDOTAHoldoutNetworker::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTAHoldoutNetworker::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTAHoldoutNetworker::CEntityInstanceEntityClass *const this)
{
  return CDOTAHoldoutNetworker::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTAHoldoutNetworker::CEntityInstanceEntityClass::DestructInstance  (line 82, @0x00000000025c5260, libserver.so)  // inlines: Destruct<CDOTAHoldoutNetworker>
void __fastcall CDOTAHoldoutNetworker::CEntityInstanceEntityClass::DestructInstance(
        CDOTAHoldoutNetworker::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTAHoldoutNetworker::CEntityInstanceEntityClass::FreeInstance  (line 82, @0x00000000025c5280, libserver.so)
void __fastcall CDOTAHoldoutNetworker::CEntityInstanceEntityClass::FreeInstance(
        CDOTAHoldoutNetworker::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTAHoldoutNetworker::CEntityInstanceEntityClass::CanAllocate  (line 82, @0x00000000025c52a0, libserver.so)
bool __fastcall CDOTAHoldoutNetworker::CEntityInstanceEntityClass::CanAllocate(
        const CDOTAHoldoutNetworker::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTAHoldoutNetworker::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 82, @0x00000000025c52b0, libserver.so)
// globals: CDOTAHoldoutNetworker::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTAHoldoutNetworker::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTAHoldoutNetworker::CEntityInstanceEntityClass *const this)
{
  return CDOTAHoldoutNetworker::s_pSchemaBinding;
}


// CDOTAHoldoutNetworker::CEntityInstanceEntityClass::AllocateInstance  (line 82, @0x00000000025c72f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTAHoldoutNetworker::CEntityInstanceEntityClass::AllocateInstance(
        CDOTAHoldoutNetworker::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 808);
  memset(v1, 0, 0x328u);
  return v1;
}


// CDOTAHoldoutNetworker::CEntityInstanceEntityClass::ConstructInstance  (line 82, @0x00000000025c75b0, libserver.so)  // inlines: CDOTAHoldoutNetworker, CNetworkVarBase, Construct<CDOTAHoldoutNetworker>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDOTAHoldoutNetworker::CEntityInstanceEntityClass::ConstructInstance(
        CDOTAHoldoutNetworker::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = 0;
    *p = &off_4101CB0;
    *(p + 195) = 0;
    *(p + 196) = 0;
    *(p + 197) = 0;
    *(p + 198) = 0;
    *(p + 796) = 0;
    *(p + 200) = 0;
  }
  return p;
}


// CDOTAHoldoutNetworker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 82, @0x00000000025cb790, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTAHoldoutNetworker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAHoldoutNetworker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTAHoldoutNetworker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 82, @0x00000000025cb7b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTAHoldoutNetworker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTAHoldoutNetworker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTAHoldoutNetworker::GetEntityClassInternal  (line 82, @0x00000000025cf840, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "holdout_networker", "CDOTAHoldoutNetworker"
// globals: `guard variable for'CDOTAHoldoutNetworker::GetEntityClassInternal(void)::g_EntityCDOTAHoldoutNetworkerClass, CDOTAHoldoutNetworker::GetEntityClassInternal(void)::g_EntityCDOTAHoldoutNetworkerClass, __dso_handle, CDOTAHoldoutNetworker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTAHoldoutNetworker::GetEntityClassInfo(void)::g_EntityCDOTAHoldoutNetworkerClassInfo, CDOTAHoldoutNetworker::GetEntityClassInfo(void)::g_EntityCDOTAHoldoutNetworkerClassInfo
CEntityClass *__cdecl CDOTAHoldoutNetworker::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTAHoldoutNetworker::GetEntityClassInternal(void)::g_EntityCDOTAHoldoutNetworkerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAHoldoutNetworker::GetEntityClassInternal(void)::g_EntityCDOTAHoldoutNetworkerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTAHoldoutNetworker::GetEntityClassInternal(void)::g_EntityCDOTAHoldoutNetworkerClass);
    CDOTAHoldoutNetworker::GetEntityClassInternal(void)::g_EntityCDOTAHoldoutNetworkerClass._vptr_CEntityClass = off_4101C30;
    __cxa_guard_release(&`guard variable for'CDOTAHoldoutNetworker::GetEntityClassInternal(void)::g_EntityCDOTAHoldoutNetworkerClass);
    __cxa_atexit(
      CDOTAHoldoutNetworker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTAHoldoutNetworker::GetEntityClassInternal(void)::g_EntityCDOTAHoldoutNetworkerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTAHoldoutNetworkerClass != 0 )
    return &CDOTAHoldoutNetworker::GetEntityClassInternal(void)::g_EntityCDOTAHoldoutNetworkerClass;
  if ( `guard variable for'CDOTAHoldoutNetworker::GetEntityClassInfo(void)::g_EntityCDOTAHoldoutNetworkerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTAHoldoutNetworker::GetEntityClassInfo(void)::g_EntityCDOTAHoldoutNetworkerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTAHoldoutNetworker::GetEntityClassInfo(void)::g_EntityCDOTAHoldoutNetworkerClassInfo,
      "CDOTAHoldoutNetworker",
      "holdout_networker",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTAHoldoutNetworker::GetEntityClassInfo(void)::g_EntityCDOTAHoldoutNetworkerClassInfo);
  }
  CDOTAHoldoutNetworker::GetEntityClassInternal(void)::g_EntityCDOTAHoldoutNetworkerClass.m_pClassInfo = &CDOTAHoldoutNetworker::GetEntityClassInfo(void)::g_EntityCDOTAHoldoutNetworkerClassInfo;
  CDOTAHoldoutNetworker::GetEntityClassInternal(void)::g_EntityCDOTAHoldoutNetworkerClass.m_pBaseClassInfo = CDOTAHoldoutNetworker::GetEntityClassInfo(void)::g_EntityCDOTAHoldoutNetworkerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTAHoldoutNetworkerClass = &CDOTAHoldoutNetworker::GetEntityClassInternal(void)::g_EntityCDOTAHoldoutNetworkerClass;
  CDOTAHoldoutNetworker::GetEntityClassInfo(void)::g_EntityCDOTAHoldoutNetworkerClassInfo.m_pClass = &CDOTAHoldoutNetworker::GetEntityClassInternal(void)::g_EntityCDOTAHoldoutNetworkerClass;
  CDOTAHoldoutNetworker::GetEntityClassInternal(void)::g_EntityCDOTAHoldoutNetworkerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDOTAHoldoutNetworkerClass->m_pComponentOverrides = 0;
  return &CDOTAHoldoutNetworker::GetEntityClassInternal(void)::g_EntityCDOTAHoldoutNetworkerClass;
}


// CDOTAHoldoutNetworker::UpdateTransmitState  (line 90, @0x00000000025c7620, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CDOTAHoldoutNetworker::UpdateTransmitState(CDOTAHoldoutNetworker *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


