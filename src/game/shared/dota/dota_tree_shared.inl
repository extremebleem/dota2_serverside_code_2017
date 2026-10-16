
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Tree::Schema_DynamicBinding  (line 69, @0x0000000002719390, libserver.so)
// globals: CDOTA_Tree::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Tree::Schema_DynamicBinding(const CDOTA_Tree *const this)
{
  return CDOTA_Tree::s_pSchemaBinding;
}


// CDOTA_Tree::GetObstructionCollisionPadding  (line 90, @0x00000000027193a0, libserver.so)
float __fastcall CDOTA_Tree::GetObstructionCollisionPadding(CDOTA_Tree *const this)
{
  return 0.0;
}


// CDOTA_Tree::GetObstructionRelationshipClass  (line 91, @0x00000000027193b0, libserver.so)
ObstructionRelationshipClass_t __fastcall CDOTA_Tree::GetObstructionRelationshipClass(CDOTA_Tree *const this)
{
  return ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE;
}


// CDOTA_Tree::GetObstructionQuerySetClass  (line 92, @0x00000000027193c0, libserver.so)
ObstructionQuerySetClass_t __fastcall CDOTA_Tree::GetObstructionQuerySetClass(CDOTA_Tree *const this)
{
  return ObstructionQuerySetClass_t::DOTA_OBSTRUCTION_QUERY_STATIC;
}


// CDOTA_Tree::GetObstructionBaseEntity  (line 93, @0x00000000027193d0, libserver.so)
CBaseEntity *__fastcall CDOTA_Tree::GetObstructionBaseEntity(CDOTA_Tree *const this)
{
  return (*(this->_vptr_CObstructionObject + 8))(this);
}


// CDOTA_Tree::GetObstructionType  (line 94, @0x00000000027193e0, libserver.so)
ObstructionType_t __fastcall CDOTA_Tree::GetObstructionType(CDOTA_Tree *const this)
{
  return ObstructionType_t::cObstructionTypeSquare;
}


// CDOTA_TempTree::~CDOTA_TempTree  (line 112, @0x00000000027456b0, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseAnimating, ~CDOTA_Tree, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<int, int>::Purge
void __fastcall CDOTA_TempTree::~CDOTA_TempTree(CDOTA_TempTree *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Particles.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_42AC9F0;
  this->_vptr_CObstructionObject = off_42AD208;
  this->m_Particles.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_Particles.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_Particles.m_Memory);
    if ( (this->m_Particles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  this->_vptr_CObstructionObject = &off_42AD2B0;
  this->_vptr_IHandleEntity = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(&this->m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDOTA_TempTree::~CDOTA_TempTree  (line 112, @0x0000000002745750, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseAnimating, ~CDOTA_TempTree, ~CDOTA_Tree, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<int, int>::Purge
void __fastcall CDOTA_TempTree::~CDOTA_TempTree(CDOTA_TempTree *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_Particles.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_42AC9F0;
  this->_vptr_CObstructionObject = off_42AD208;
  this->m_Particles.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_Particles.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_Particles.m_Memory);
    if ( (this->m_Particles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  this->_vptr_CObstructionObject = &off_42AD2B0;
  this->_vptr_IHandleEntity = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(&this->m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_TempTree::Schema_DynamicBinding  (line 114, @0x00000000027193f0, libserver.so)
// globals: CDOTA_TempTree::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_TempTree::Schema_DynamicBinding(const CDOTA_TempTree *const this)
{
  return CDOTA_TempTree::s_pSchemaBinding;
}


// CDOTA_TempTree::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 114, @0x0000000002719410, libserver.so)
// globals: CDOTA_TempTree::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_TempTree::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_TempTree::CEntityInstanceEntityClass *const this)
{
  return CDOTA_TempTree::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_TempTree::CEntityInstanceEntityClass::DestructInstance  (line 114, @0x0000000002719420, libserver.so)  // inlines: Destruct<CDOTA_TempTree>
void __fastcall CDOTA_TempTree::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_TempTree::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_TempTree::CEntityInstanceEntityClass::FreeInstance  (line 114, @0x0000000002719440, libserver.so)
void __fastcall CDOTA_TempTree::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_TempTree::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_TempTree::CEntityInstanceEntityClass::CanAllocate  (line 114, @0x0000000002719460, libserver.so)
bool __fastcall CDOTA_TempTree::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_TempTree::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_TempTree::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 114, @0x0000000002719470, libserver.so)
// globals: CDOTA_TempTree::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_TempTree::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_TempTree::CEntityInstanceEntityClass *const this)
{
  return CDOTA_TempTree::s_pSchemaBinding;
}


// CDOTA_TempTree::CEntityInstanceEntityClass::AllocateInstance  (line 114, @0x0000000002730b00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_TempTree::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_TempTree::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1304);
  memset(v1, 0, 0x518u);
  return v1;
}


// CDOTA_TempTree::CEntityInstanceEntityClass::ConstructInstance  (line 114, @0x0000000002745390, libserver.so)  // inlines: CDOTA_TempTree, CDOTA_Tree, CNetworkVarBase, CNetworkVectorBase, CObstructionObject, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_TempTree>, EnsureValidValue, Zero
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CDOTA_TempTree::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_TempTree::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *(p + 153) = 0;
    *p = &off_42AC9F0;
    *(p + 308) = 0;
    *(p + 310) = 0;
    *(p + 1236) = 1;
    *(p + 1237) = 0;
    *(p + 152) = off_42AD208;
    *(p + 314) = 0;
    *(p + 313) = 0;
    *(p + 312) = 0;
    *(p + 320) = 0;
    *(p + 161) = 0;
    *(p + 324) = 0;
    *(p + 325) = 0;
  }
  return p;
}


// CDOTA_TempTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 114, @0x0000000002745d00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_TempTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_TempTree::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_TempTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 114, @0x0000000002745d20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_TempTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_TempTree::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_TempTree::GetEntityClassInternal  (line 114, @0x000000000276c7c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
// strings: "dota_temp_tree", "CDOTA_TempTree", "baseanimating", "CBaseAnimating"
// globals: `guard variable for'CDOTA_TempTree::GetEntityClassInternal(void)::g_EntityCDOTA_TempTreeClass, CDOTA_TempTree::GetEntityClassInternal(void)::g_EntityCDOTA_TempTreeClass, __dso_handle, CDOTA_TempTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_TempTree::GetEntityClassInfo(void)::g_EntityCDOTA_TempTreeClassInfo, CDOTA_TempTree::GetEntityClassInfo(void)::g_EntityCDOTA_TempTreeClassInfo, `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo, CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo
CEntityClass *__cdecl CDOTA_TempTree::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_TempTree::GetEntityClassInternal(void)::g_EntityCDOTA_TempTreeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_TempTree::GetEntityClassInternal(void)::g_EntityCDOTA_TempTreeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_TempTree::GetEntityClassInternal(void)::g_EntityCDOTA_TempTreeClass);
    CDOTA_TempTree::GetEntityClassInternal(void)::g_EntityCDOTA_TempTreeClass._vptr_CEntityClass = off_4187070;
    __cxa_guard_release(&`guard variable for'CDOTA_TempTree::GetEntityClassInternal(void)::g_EntityCDOTA_TempTreeClass);
    __cxa_atexit(
      CDOTA_TempTree::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_TempTree::GetEntityClassInternal(void)::g_EntityCDOTA_TempTreeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_TempTreeClass != 0 )
    return &CDOTA_TempTree::GetEntityClassInternal(void)::g_EntityCDOTA_TempTreeClass;
  if ( `guard variable for'CDOTA_TempTree::GetEntityClassInfo(void)::g_EntityCDOTA_TempTreeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_TempTree::GetEntityClassInfo(void)::g_EntityCDOTA_TempTreeClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo,
        "CBaseAnimating",
        "baseanimating",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_TempTree::GetEntityClassInfo(void)::g_EntityCDOTA_TempTreeClassInfo,
      "CDOTA_TempTree",
      "dota_temp_tree",
      0,
      &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_TempTree::GetEntityClassInfo(void)::g_EntityCDOTA_TempTreeClassInfo);
  }
  CDOTA_TempTree::GetEntityClassInternal(void)::g_EntityCDOTA_TempTreeClass.m_pClassInfo = &CDOTA_TempTree::GetEntityClassInfo(void)::g_EntityCDOTA_TempTreeClassInfo;
  CDOTA_TempTree::GetEntityClassInternal(void)::g_EntityCDOTA_TempTreeClass.m_pBaseClassInfo = CDOTA_TempTree::GetEntityClassInfo(void)::g_EntityCDOTA_TempTreeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_TempTreeClass = &CDOTA_TempTree::GetEntityClassInternal(void)::g_EntityCDOTA_TempTreeClass;
  CDOTA_TempTree::GetEntityClassInfo(void)::g_EntityCDOTA_TempTreeClassInfo.m_pClass = &CDOTA_TempTree::GetEntityClassInternal(void)::g_EntityCDOTA_TempTreeClass;
  CDOTA_TempTree::GetEntityClassInternal(void)::g_EntityCDOTA_TempTreeClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCDOTA_TempTreeClass->m_pComponentOverrides = 0;
  return &CDOTA_TempTree::GetEntityClassInternal(void)::g_EntityCDOTA_TempTreeClass;
}


// CDOTA_TempTree::GetEntity  (line 122, @0x0000000002719480, libserver.so)
CBaseEntity *__fastcall CDOTA_TempTree::GetEntity(CDOTA_TempTree *const this)
{
  return this;
}


// CDOTA_TempTree::GetRingRadius  (line 126, @0x00000000027194a0, libserver.so)
float __fastcall CDOTA_TempTree::GetRingRadius(CDOTA_TempTree *const this)
{
  return 100.0;
}


// CDOTA_TempTree::GetObstructionType  (line 136, @0x00000000027194b0, libserver.so)
ObstructionType_t __fastcall CDOTA_TempTree::GetObstructionType(CDOTA_TempTree *const this)
{
  return ObstructionType_t::cObstructionTypeCircle;
}


// CDOTA_TempTree::GetObstructionRadius  (line 137, @0x00000000027194d0, libserver.so)
float __fastcall CDOTA_TempTree::GetObstructionRadius(CDOTA_TempTree *const this)
{
  float result; // xmm0_4

  result = 80.0;
  if ( this->m_bSpecialTree )
    return 18.0;
  return result;
}


// CDOTA_TempTree::GetObstructionName  (line 148, @0x0000000002719510, libserver.so)
// strings: "temp tree"
const char *__fastcall CDOTA_TempTree::GetObstructionName(CDOTA_TempTree *const this)
{
  return "temp tree";
}


// CDOTA_TempTree::IsPartOfFOWSystem  (line 155, @0x0000000002719530, libserver.so)
bool __fastcall CDOTA_TempTree::IsPartOfFOWSystem(CDOTA_TempTree *const this)
{
  return 1;
}


