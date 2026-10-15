
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_MapTree::~CDOTA_MapTree  (line 16, @0x0000000002736e80, libserver.so)  // inlines: ~CDOTA_BinaryObject, ~CDOTA_Tree
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDOTA_MapTree::~CDOTA_MapTree(CDOTA_MapTree *const this)
{
  this->_vptr_CObstructionObject = &off_42AD2B0;
  this->_vptr_IHandleEntity = &off_40DD8F0;
  CBaseEntity::~CBaseEntity(this);
}


// CDOTA_MapTree::~CDOTA_MapTree  (line 16, @0x0000000002736eb0, libserver.so)  // inlines: ~CDOTA_BinaryObject, ~CDOTA_MapTree, ~CDOTA_Tree
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDOTA_MapTree::~CDOTA_MapTree(CDOTA_MapTree *const this)
{
  this->_vptr_CObstructionObject = &off_42AD2B0;
  this->_vptr_IHandleEntity = &off_40DD8F0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_MapTree::GetEntityClass  (line 18, @0x0000000002719540, libserver.so)
CEntityClass *__cdecl CDOTA_MapTree::GetEntityClass()
{
  return g_pEntityCDOTA_MapTreeClass;
}


// CDOTA_MapTree::Schema_DynamicBinding  (line 18, @0x0000000002719550, libserver.so)
// globals: CDOTA_MapTree::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_MapTree::Schema_DynamicBinding(const CDOTA_MapTree *const this)
{
  return CDOTA_MapTree::s_pSchemaBinding;
}


// CDOTA_MapTree::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 18, @0x0000000002719570, libserver.so)
// globals: CDOTA_MapTree::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_MapTree::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_MapTree::CEntityInstanceEntityClass *const this)
{
  return CDOTA_MapTree::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_MapTree::CEntityInstanceEntityClass::DestructInstance  (line 18, @0x0000000002719580, libserver.so)  // inlines: Destruct<CDOTA_MapTree>
void __fastcall CDOTA_MapTree::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_MapTree::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_MapTree::CEntityInstanceEntityClass::FreeInstance  (line 18, @0x00000000027195a0, libserver.so)
void __fastcall CDOTA_MapTree::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_MapTree::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_MapTree::CEntityInstanceEntityClass::CanAllocate  (line 18, @0x00000000027195c0, libserver.so)
bool __fastcall CDOTA_MapTree::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_MapTree::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_MapTree::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 18, @0x00000000027195d0, libserver.so)
// globals: CDOTA_MapTree::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_MapTree::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_MapTree::CEntityInstanceEntityClass *const this)
{
  return CDOTA_MapTree::s_pSchemaBinding;
}


// CDOTA_MapTree::CEntityInstanceEntityClass::AllocateInstance  (line 18, @0x0000000002730b40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_MapTree::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_MapTree::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 816);
  memset(v1, 0, 0x330u);
  return v1;
}


// CDOTA_MapTree::CEntityInstanceEntityClass::ConstructInstance  (line 18, @0x0000000002736ef0, libserver.so)  // inlines: CDOTA_MapTree, CDOTA_Tree, CObstructionObject, Construct<CDOTA_MapTree>
// calls: CDOTA_BinaryObject::CDOTA_BinaryObject
CEntityInstance *__fastcall CDOTA_MapTree::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_MapTree::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BinaryObject::CDOTA_BinaryObject(p);
    *(p + 99) = 0;
    *p = &off_42AC190;
    *(p + 200) = 0;
    *(p + 202) = 0;
    *(p + 804) = 1;
    *(p + 805) = 0;
    *(p + 98) = &off_42AC838;
  }
  return p;
}


// CDOTA_MapTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x0000000002745d50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_MapTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_MapTree::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_MapTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x0000000002745d70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_MapTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_MapTree::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_MapTree::GetEntityClassInternal  (line 18, @0x00000000027a3720, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, InitScriptDesc, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, GetScriptDesc<CDOTA_MapTree>, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
// strings: "ent_dota_tree", "CDOTA_MapTree", "CDOTA_BinaryObject"
// globals: `guard variable for'CDOTA_MapTree::GetEntityClassInternal(void)::g_EntityCDOTA_MapTreeClass, CDOTA_MapTree::GetEntityClassInternal(void)::g_EntityCDOTA_MapTreeClass, __dso_handle, CDOTA_MapTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_MapTree::GetEntityClassInfo(void)::g_EntityCDOTA_MapTreeClassInfo, CDOTA_MapTree::GetEntityClassInfo(void)::g_EntityCDOTA_MapTreeClassInfo, `guard variable for'CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo, CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo
CEntityClass *__cdecl CDOTA_MapTree::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_MapTree::GetEntityClassInternal(void)::g_EntityCDOTA_MapTreeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_MapTree::GetEntityClassInternal(void)::g_EntityCDOTA_MapTreeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_MapTree::GetEntityClassInternal(void)::g_EntityCDOTA_MapTreeClass);
    CDOTA_MapTree::GetEntityClassInternal(void)::g_EntityCDOTA_MapTreeClass._vptr_CEntityClass = off_41870F0;
    __cxa_guard_release(&`guard variable for'CDOTA_MapTree::GetEntityClassInternal(void)::g_EntityCDOTA_MapTreeClass);
    __cxa_atexit(
      CDOTA_MapTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_MapTree::GetEntityClassInternal(void)::g_EntityCDOTA_MapTreeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_MapTreeClass != 0 )
    return &CDOTA_MapTree::GetEntityClassInternal(void)::g_EntityCDOTA_MapTreeClass;
  if ( `guard variable for'CDOTA_MapTree::GetEntityClassInfo(void)::g_EntityCDOTA_MapTreeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_MapTree::GetEntityClassInfo(void)::g_EntityCDOTA_MapTreeClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo,
        "CDOTA_BinaryObject",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_MapTree::GetEntityClassInfo(void)::g_EntityCDOTA_MapTreeClassInfo,
      "CDOTA_MapTree",
      "ent_dota_tree",
      0,
      &CDOTA_BinaryObject::GetEntityClassInfo(void)::g_EntityCDOTA_BinaryObjectClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_MapTree::GetEntityClassInfo(void)::g_EntityCDOTA_MapTreeClassInfo);
  }
  CDOTA_MapTree::GetEntityClassInternal(void)::g_EntityCDOTA_MapTreeClass.m_pClassInfo = &CDOTA_MapTree::GetEntityClassInfo(void)::g_EntityCDOTA_MapTreeClassInfo;
  CDOTA_MapTree::GetEntityClassInternal(void)::g_EntityCDOTA_MapTreeClass.m_pBaseClassInfo = CDOTA_MapTree::GetEntityClassInfo(void)::g_EntityCDOTA_MapTreeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_MapTreeClass = &CDOTA_MapTree::GetEntityClassInternal(void)::g_EntityCDOTA_MapTreeClass;
  CDOTA_MapTree::GetEntityClassInfo(void)::g_EntityCDOTA_MapTreeClassInfo.m_pClass = &CDOTA_MapTree::GetEntityClassInternal(void)::g_EntityCDOTA_MapTreeClass;
  CDOTA_MapTree::GetEntityClassInternal(void)::g_EntityCDOTA_MapTreeClass.m_pScriptClassDesc = GetScriptDesc<CDOTA_MapTree>(0);
  g_pEntityCDOTA_MapTreeClass->m_pComponentOverrides = 0;
  return &CDOTA_MapTree::GetEntityClassInternal(void)::g_EntityCDOTA_MapTreeClass;
}


// CDOTA_MapTree::GetEntity  (line 27, @0x00000000027195e0, libserver.so)
CBaseEntity *__fastcall CDOTA_MapTree::GetEntity(CDOTA_MapTree *const this)
{
  return this;
}


// CDOTA_MapTree::GetObstructionName  (line 31, @0x0000000002719600, libserver.so)
// strings: "map tree"
const char *__fastcall CDOTA_MapTree::GetObstructionName(CDOTA_MapTree *const this)
{
  return "map tree";
}


// CDOTA_MapTree::Script_IsStanding  (line 44, @0x0000000002719620, libserver.so)
bool __fastcall CDOTA_MapTree::Script_IsStanding(CDOTA_MapTree *const this)
{
  return this->m_bStanding;
}


