
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTraceFilterWalkableEntities::~CTraceFilterWalkableEntities  (line 262, @0x00000000020327f0, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple
void __fastcall CTraceFilterWalkableEntities::~CTraceFilterWalkableEntities(CTraceFilterWalkableEntities *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;  // vptr: CTraceFilter
}


// CTraceFilterWalkableEntities::~CTraceFilterWalkableEntities  (line 262, @0x0000000002032cc0, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple, ~CTraceFilterWalkableEntities
// calls: operator delete
void __fastcall CTraceFilterWalkableEntities::~CTraceFilterWalkableEntities(CTraceFilterWalkableEntities *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;  // vptr: CTraceFilter
  operator delete(this);
}


// CTraceFilterWalkableEntities::ShouldHitEntity  (line 271, @0x0000000002033940, libserver.so)  // inlines: ClassMatches, FClassnameIs, GetBool, GetInt, IsEntityWalkable
// calls: CTraceFilterSimple::ShouldHitEntity, CEntityIdentity::ClassMatches, CBaseEntity::GetHealth, CBaseEntity::GetDamageOptions
// strings: "func_door*", "prop_door*", "func_brush", "func_breakable", "func_breakable_surf", "func_playerinfected_clip" (7 total)
bool __fastcall CTraceFilterWalkableEntities::ShouldHitEntity(
        CTraceFilterWalkableEntities *const this,
        CBaseEntity *pServerEntity)
{
  bool ShouldHitEntity; // bl
  unsigned int m_flags; // r13d
  bool v7; // al
  float m_Value; // edx

  ShouldHitEntity = CTraceFilterSimple::ShouldHitEntity(this, pServerEntity);
  if ( ShouldHitEntity )
  {
    m_flags = this->m_flags;
    if ( (*(pServerEntity->_vptr_IHandleEntity + 143))(pServerEntity) == 0
      && (*(pServerEntity->_vptr_IHandleEntity + 140))(pServerEntity) == 0 )
    {
      if ( CEntityIdentity::ClassMatches(pServerEntity->m_pEntity, "func_door*") )
        return ((m_flags >> 1) ^ 1) & 1;
      if ( CEntityIdentity::ClassMatches(pServerEntity->m_pEntity, "prop_door*") )
        return !(m_flags & 1);
      v7 = CEntityIdentity::ClassMatches(pServerEntity->m_pEntity, "func_brush");
      if ( v7 )
      {
        m_Value = pServerEntity[1].m_flCreateTime.m_Value;
        if ( LODWORD(m_Value) == 1 )
          return 0;
        if ( LODWORD(m_Value) == 2 )
          return v7;
        if ( m_Value == 0.0 )
          return ((m_flags >> 3) ^ 1) & 1;
      }
      if ( CEntityIdentity::ClassMatches(pServerEntity->m_pEntity, "func_breakable")
        && CBaseEntity::GetHealth(pServerEntity) != 0
        && CBaseEntity::GetDamageOptions(pServerEntity) == DamageOptions_t::DAMAGE_YES
        || CEntityIdentity::ClassMatches(pServerEntity->m_pEntity, "func_breakable_surf")
        && CBaseEntity::GetDamageOptions(pServerEntity) == DamageOptions_t::DAMAGE_YES )
      {
        return ((m_flags >> 2) ^ 1) & 1;
      }
      if ( CEntityIdentity::ClassMatches(pServerEntity->m_pEntity, "func_playerinfected_clip") )
        return 0;
      if ( nav_solid_props.m_pParent->m_Value.m_nValue != 0
        && CEntityIdentity::ClassMatches(pServerEntity->m_pEntity, "prop_*") )
      {
        return 0;
      }
    }
  }
  return ShouldHitEntity;
}


// CTraceFilterGroundEntities::~CTraceFilterGroundEntities  (line 286, @0x0000000002032a00, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple, ~CTraceFilterWalkableEntities
void __fastcall CTraceFilterGroundEntities::~CTraceFilterGroundEntities(CTraceFilterGroundEntities *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;  // vptr: CTraceFilter
}


// CTraceFilterGroundEntities::~CTraceFilterGroundEntities  (line 286, @0x0000000002032ce0, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterGroundEntities, ~CTraceFilterSimple, ~CTraceFilterWalkableEntities
// calls: operator delete
void __fastcall CTraceFilterGroundEntities::~CTraceFilterGroundEntities(CTraceFilterGroundEntities *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;  // vptr: CTraceFilter
  operator delete(this);
}


// CTraceFilterGroundEntities::ShouldHitEntity  (line 296, @0x0000000002032fb0, libserver.so)  // inlines: ClassMatches, FClassnameIs, GetBool, GetInt, IsEntityWalkable, ShouldHitEntity
// calls: CEntityIdentity::ClassMatches, CTraceFilterSimple::ShouldHitEntity, CBaseEntity::GetHealth, CBaseEntity::GetDamageOptions
// strings: "prop_door", "prop_door_rotating", "prop_door_rotating_physics", "func_breakable", "func_door*", "prop_door*" (10 total)
bool __fastcall CTraceFilterGroundEntities::ShouldHitEntity(
        CTraceFilterGroundEntities *const this,
        CBaseEntity *pEntity)
{
  bool ShouldHitEntity; // r12
  unsigned int m_flags; // r13d
  bool v7; // al
  float m_Value; // edx

  if ( pEntity != 0
    && (CEntityIdentity::ClassMatches(pEntity->m_pEntity, "prop_door")
     || CEntityIdentity::ClassMatches(pEntity->m_pEntity, "prop_door_rotating")
     || CEntityIdentity::ClassMatches(pEntity->m_pEntity, "prop_door_rotating_physics")
     || CEntityIdentity::ClassMatches(pEntity->m_pEntity, "func_breakable")) )
  {
    return 0;
  }
  ShouldHitEntity = CTraceFilterSimple::ShouldHitEntity(this, pEntity);
  if ( !ShouldHitEntity )
    return ShouldHitEntity;
  m_flags = this->m_flags;
  if ( (*(pEntity->_vptr_IHandleEntity + 143))(pEntity) != 0 || (*(pEntity->_vptr_IHandleEntity + 140))(pEntity) != 0 )
    return ShouldHitEntity;
  if ( CEntityIdentity::ClassMatches(pEntity->m_pEntity, "func_door*") )
    return ((m_flags >> 1) ^ 1) & 1;
  if ( CEntityIdentity::ClassMatches(pEntity->m_pEntity, "prop_door*") )
    return !(m_flags & 1);
  v7 = CEntityIdentity::ClassMatches(pEntity->m_pEntity, "func_brush");
  if ( v7 )
  {
    m_Value = pEntity[1].m_flCreateTime.m_Value;
    if ( LODWORD(m_Value) != 1 )
    {
      if ( LODWORD(m_Value) == 2 )
        return v7;
      if ( m_Value == 0.0 )
        return ((m_flags >> 3) ^ 1) & 1;
      goto LABEL_17;
    }
    return 0;
  }
LABEL_17:
  if ( CEntityIdentity::ClassMatches(pEntity->m_pEntity, "func_breakable")
    && CBaseEntity::GetHealth(pEntity) != 0
    && CBaseEntity::GetDamageOptions(pEntity) == DamageOptions_t::DAMAGE_YES
    || CEntityIdentity::ClassMatches(pEntity->m_pEntity, "func_breakable_surf")
    && CBaseEntity::GetDamageOptions(pEntity) == DamageOptions_t::DAMAGE_YES )
  {
    return ((m_flags >> 2) ^ 1) & 1;
  }
  if ( CEntityIdentity::ClassMatches(pEntity->m_pEntity, "func_playerinfected_clip")
    || nav_solid_props.m_pParent->m_Value.m_nValue != 0 && CEntityIdentity::ClassMatches(pEntity->m_pEntity, "prop_*") )
  {
    return 0;
  }
  return ShouldHitEntity;
}


// CFuncNavBlocker::~CFuncNavBlocker  (line 321, @0x0000000002f05720, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncNavBlocker::~CFuncNavBlocker(CFuncNavBlocker *const this)
{
  this->_vptr_IHandleEntity = &off_47AE3D0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncNavBlocker::~CFuncNavBlocker  (line 321, @0x0000000002f05740, libserver.so)  // inlines: ~CFuncNavBlocker
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncNavBlocker::~CFuncNavBlocker(CFuncNavBlocker *const this)
{
  this->_vptr_IHandleEntity = &off_47AE3D0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncNavBlocker::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 323, @0x0000000002032800, libserver.so)
// globals: CFuncNavBlocker::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncNavBlocker::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncNavBlocker::CEntityInstanceEntityClass *const this)
{
  return CFuncNavBlocker::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncNavBlocker::CEntityInstanceEntityClass::DestructInstance  (line 323, @0x0000000002032810, libserver.so)  // inlines: Destruct<CFuncNavBlocker>
void __fastcall CFuncNavBlocker::CEntityInstanceEntityClass::DestructInstance(
        CFuncNavBlocker::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncNavBlocker::CEntityInstanceEntityClass::FreeInstance  (line 323, @0x0000000002032830, libserver.so)
void __fastcall CFuncNavBlocker::CEntityInstanceEntityClass::FreeInstance(
        CFuncNavBlocker::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncNavBlocker::CEntityInstanceEntityClass::CanAllocate  (line 323, @0x0000000002032850, libserver.so)
bool __fastcall CFuncNavBlocker::CEntityInstanceEntityClass::CanAllocate(
        const CFuncNavBlocker::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncNavBlocker::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 323, @0x0000000002032860, libserver.so)
// globals: CFuncNavBlocker::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncNavBlocker::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncNavBlocker::CEntityInstanceEntityClass *const this)
{
  return CFuncNavBlocker::s_pSchemaBinding;
}


// CFuncNavBlocker::CEntityInstanceEntityClass::AllocateInstance  (line 323, @0x0000000002032d60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncNavBlocker::CEntityInstanceEntityClass::AllocateInstance(
        CFuncNavBlocker::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1192);
  memset(v1, 0, 0x4A8u);
  return v1;
}


// CFuncNavBlocker::CEntityInstanceEntityClass::ConstructInstance  (line 323, @0x0000000002032f00, libserver.so)  // inlines: CFuncNavBlocker, Construct<CFuncNavBlocker>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncNavBlocker::CEntityInstanceEntityClass::ConstructInstance(
        CFuncNavBlocker::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_47AE3D0;
  }
  return p;
}


// CFuncNavBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 323, @0x0000000002033b60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncNavBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncNavBlocker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFuncNavBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 323, @0x0000000002033b80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncNavBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncNavBlocker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncNavBlocker::GetEntityClassInternal  (line 323, @0x00000000020348f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_nav_mesh_01.cpp
// strings: "func_nav_blocker", "CFuncNavBlocker", "basemodelentity", "CBaseModelEntity", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass, CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncNavBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncNavBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavBlockerClassInfo, CFuncNavBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavBlockerClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo (13 total)
CEntityClass *__cdecl CFuncNavBlocker::GetEntityClassInternal()
{
  if ( `guard variable for'CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass) != 0 )
  {
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_designerName.u.m_Id = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass._vptr_CEntityClass = off_3F79390;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_ComponentOffsets.m_Size = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_AllHelpers.m_Size = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_classInputs.m_Size = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_classOutputs.m_Size = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_requiredEHandle.m_Index = -1;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_hNetworkSerializer = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_pBaseClassInfo = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_pClassInfo = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_flags = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_nAllHelpersFlags = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_pScriptClassDesc = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_pInputs = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_nInputCount = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_pOutputs = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_nOutputCount = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_pGameClass = 0;
    CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass._vptr_CEntityClass = off_3FE6AD0;
    __cxa_guard_release(&`guard variable for'CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass);
    __cxa_atexit(
      CFuncNavBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncNavBlockerClass != 0 )
    return &CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass;
  if ( `guard variable for'CFuncNavBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavBlockerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncNavBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavBlockerClassInfo) != 0 )
  {
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
      &CFuncNavBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavBlockerClassInfo,
      "CFuncNavBlocker",
      "func_nav_blocker",
      0,
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncNavBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavBlockerClassInfo);
  }
  CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_pClassInfo = &CFuncNavBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavBlockerClassInfo;
  CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_pBaseClassInfo = CFuncNavBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavBlockerClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncNavBlockerClass = &CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass;
  CFuncNavBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavBlockerClassInfo.m_pClass = &CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass;
  CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncNavBlockerClass->m_pComponentOverrides = 0;
  return &CFuncNavBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavBlockerClass;
}


// CFuncNavBlocker::GetEntityClass  (line 323, @0x0000000002f04d80, libserver.so)
CEntityClass *__cdecl CFuncNavBlocker::GetEntityClass()
{
  return g_pEntityCFuncNavBlockerClass;
}


// CFuncNavBlocker::Schema_DynamicBinding  (line 323, @0x0000000002f058e0, libserver.so)
// calls: CFuncNavBlocker::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFuncNavBlocker::Schema_DynamicBinding(const CFuncNavBlocker *const this)
{
  CFuncNavBlocker::Schema_VerifyBindingIsRegistered();
  return CFuncNavBlocker::s_pSchemaBinding;
}


// CFuncNavBlocker::InputBlockNav  (line 336, @0x0000000002f077b0, libserver.so)
// calls: CFuncNavBlocker::BlockNav
void __fastcall CFuncNavBlocker::InputBlockNav(CFuncNavBlocker *const this, inputdata_t *const rInputdata)
{
  CFuncNavBlocker::BlockNav(this);
}


// CFuncNavBlocker::InputUnblockNav  (line 337, @0x0000000002f0af60, libserver.so)
// calls: CFuncNavBlocker::UnblockNav
void __fastcall CFuncNavBlocker::InputUnblockNav(CFuncNavBlocker *const this, inputdata_t *const rInputdata)
{
  CFuncNavBlocker::UnblockNav(this);
}


// CFuncNavConnectionBlocker::~CFuncNavConnectionBlocker  (line 395, @0x0000000002f057c0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncNavConnectionBlocker::~CFuncNavConnectionBlocker(CFuncNavConnectionBlocker *const this)
{
  this->_vptr_IHandleEntity = &off_47AF990;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncNavConnectionBlocker::~CFuncNavConnectionBlocker  (line 395, @0x0000000002f057e0, libserver.so)  // inlines: ~CFuncNavConnectionBlocker
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncNavConnectionBlocker::~CFuncNavConnectionBlocker(CFuncNavConnectionBlocker *const this)
{
  this->_vptr_IHandleEntity = &off_47AF990;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncNavConnectionBlocker::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 397, @0x0000000002032870, libserver.so)
// globals: CFuncNavConnectionBlocker::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncNavConnectionBlocker::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncNavConnectionBlocker::CEntityInstanceEntityClass *const this)
{
  return CFuncNavConnectionBlocker::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncNavConnectionBlocker::CEntityInstanceEntityClass::DestructInstance  (line 397, @0x0000000002032880, libserver.so)  // inlines: Destruct<CFuncNavConnectionBlocker>
void __fastcall CFuncNavConnectionBlocker::CEntityInstanceEntityClass::DestructInstance(
        CFuncNavConnectionBlocker::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncNavConnectionBlocker::CEntityInstanceEntityClass::FreeInstance  (line 397, @0x00000000020328a0, libserver.so)
void __fastcall CFuncNavConnectionBlocker::CEntityInstanceEntityClass::FreeInstance(
        CFuncNavConnectionBlocker::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncNavConnectionBlocker::CEntityInstanceEntityClass::CanAllocate  (line 397, @0x00000000020328c0, libserver.so)
bool __fastcall CFuncNavConnectionBlocker::CEntityInstanceEntityClass::CanAllocate(
        const CFuncNavConnectionBlocker::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncNavConnectionBlocker::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 397, @0x00000000020328d0, libserver.so)
// globals: CFuncNavConnectionBlocker::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncNavConnectionBlocker::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncNavConnectionBlocker::CEntityInstanceEntityClass *const this)
{
  return CFuncNavConnectionBlocker::s_pSchemaBinding;
}


// CFuncNavConnectionBlocker::CEntityInstanceEntityClass::AllocateInstance  (line 397, @0x0000000002032da0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncNavConnectionBlocker::CEntityInstanceEntityClass::AllocateInstance(
        CFuncNavConnectionBlocker::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1152);
  memset(v1, 0, 0x480u);
  return v1;
}


// CFuncNavConnectionBlocker::CEntityInstanceEntityClass::ConstructInstance  (line 397, @0x0000000002032f40, libserver.so)  // inlines: CFuncNavConnectionBlocker, Construct<CFuncNavConnectionBlocker>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncNavConnectionBlocker::CEntityInstanceEntityClass::ConstructInstance(
        CFuncNavConnectionBlocker::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_47AF990;
  }
  return p;
}


// CFuncNavConnectionBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 397, @0x0000000002033bb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncNavConnectionBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncNavConnectionBlocker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFuncNavConnectionBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 397, @0x0000000002033bd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncNavConnectionBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncNavConnectionBlocker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncNavConnectionBlocker::GetEntityClassInternal  (line 397, @0x00000000020350e0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_nav_mesh_01.cpp
// strings: "func_nav_connection_blocker", "CFuncNavConnectionBlocker"
// globals: `guard variable for'CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass, CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncNavConnectionBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncNavConnectionBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavConnectionBlockerClassInfo, CFuncNavConnectionBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavConnectionBlockerClassInfo
CEntityClass *__cdecl CFuncNavConnectionBlocker::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass) != 0 )
  {
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_designerName.u.m_Id = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass._vptr_CEntityClass = off_3F79390;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_ComponentOffsets.m_Size = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_AllHelpers.m_Size = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_classInputs.m_Size = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_classOutputs.m_Size = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_requiredEHandle.m_Index = -1;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_hNetworkSerializer = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_pBaseClassInfo = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_pClassInfo = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_flags = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_nAllHelpersFlags = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_pScriptClassDesc = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_pInputs = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_nInputCount = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_pOutputs = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_nOutputCount = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_pGameClass = 0;
    CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass._vptr_CEntityClass = off_3FE6B50;
    __cxa_guard_release(&`guard variable for'CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass);
    __cxa_atexit(
      CFuncNavConnectionBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncNavConnectionBlockerClass != 0 )
    return &CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass;
  if ( `guard variable for'CFuncNavConnectionBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavConnectionBlockerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncNavConnectionBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavConnectionBlockerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncNavConnectionBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavConnectionBlockerClassInfo,
      "CFuncNavConnectionBlocker",
      "func_nav_connection_blocker",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncNavConnectionBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavConnectionBlockerClassInfo);
  }
  CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_pClassInfo = &CFuncNavConnectionBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavConnectionBlockerClassInfo;
  CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_pBaseClassInfo = CFuncNavConnectionBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavConnectionBlockerClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncNavConnectionBlockerClass = &CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass;
  CFuncNavConnectionBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavConnectionBlockerClassInfo.m_pClass = &CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass;
  CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncNavConnectionBlockerClass->m_pComponentOverrides = 0;
  return &CFuncNavConnectionBlocker::GetEntityClassInternal(void)::g_EntityCFuncNavConnectionBlockerClass;
}


// CFuncNavConnectionBlocker::Schema_DynamicBinding  (line 397, @0x0000000002f05900, libserver.so)
// calls: CFuncNavConnectionBlocker::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CFuncNavConnectionBlocker::Schema_DynamicBinding(
        const CFuncNavConnectionBlocker *const this)
{
  CFuncNavConnectionBlocker::Schema_VerifyBindingIsRegistered();
  return CFuncNavConnectionBlocker::s_pSchemaBinding;
}


// CNavEntityInterface::OnDestroyArea  (line 447, @0x0000000002f05920, libserver.so)  // inlines: ForEachActor<ForgetNavArea>, ForEachCombatCharacter<ForgetNavArea>, operator(), operator[]
// calls: UTIL_PlayerByIndex
void __fastcall CNavEntityInterface::OnDestroyArea(CNavEntityInterface *const this, CNavArea *pDeadArea)
{
  int v3; // r12d
  CBasePlayer *v4; // rax
  CBasePlayer *v5; // rbx
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v8; // rbx
  __int64 v9; // rax

  v3 = 1;
  if ( gpGlobals->maxClients > 0 )
  {
    do
    {
      v4 = UTIL_PlayerByIndex(v3);
      v5 = v4;
      if ( v4 != 0
        && (*(v4->_vptr_IHandleEntity + 140))(v4) != 0
        && v5->m_iConnected != PlayerConnectedState::PlayerDisconnected
        && (*(v5->_vptr_IHandleEntity + 153))(v5) == 0 )
      {
        (*(v5->_vptr_IHandleEntity + 368))(v5, pDeadArea);
      }
      ++v3;
    }
    while ( v3 <= gpGlobals->maxClients );
  }
  m_Head = g_NextBotManager.m_botList.m_Head;
  if ( m_Head != 0xFFFF )
  {
    m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
    do
    {
      v8 = m_Head;
      v9 = (*(m_pMemory[v8].m_Element->_vptr_INextBotEventResponder + 66))(m_pMemory[v8].m_Element);
      (*(*v9 + 2944LL))(v9, pDeadArea);
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      m_Head = m_pMemory[v8].m_Next;
    }
    while ( m_Head != 0xFFFF );
  }
}


// CNavEntityInterface::FindLadderEntity  (line 455, @0x0000000002f067c0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, VectorAdd, VectorMultiply, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+
// calls: UTIL_FindEntityByClassnameNearest
// strings: "func_simpleladder"
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CNavEntityInterface::FindLadderEntity(
        CNavEntityInterface *const this,
        const CNavLadder *const rLadder)
{
  float v2; // xmm2_4
  float v3; // xmm1_4
  CBaseEntity *EntityByClassnameNearest; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  int v7; // edx
  CEntityIdentity *v8; // rax
  __int64 v9; // rcx
  bool v10; // zf
  CEntityIdentity *v11; // rcx
  CBaseEntity *result; // rax
  Vector vSrc; // [rsp+10h] [rbp-10h] BYREF

  v2 = rLadder->m_vTop.y + rLadder->m_vBottom.y;
  v3 = rLadder->m_vTop.z + rLadder->m_vBottom.z;
  vSrc.x = (rLadder->m_vTop.x + rLadder->m_vBottom.x) * 0.5;
  vSrc.y = v2 * 0.5;
  vSrc.z = v3 * 0.5;
  EntityByClassnameNearest = UTIL_FindEntityByClassnameNearest("func_simpleladder", &vSrc, 16.0, v3 * 0.5);
  if ( EntityByClassnameNearest == 0 )
    return 0;
  m_pEntity = EntityByClassnameNearest->m_pEntity;
  if ( m_pEntity == 0 )
    return 0;
  v6 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  v7 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
  if ( (v7 + 2) <= 1 )
    return 0;
  v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v7 >> 9) & 0x3F];
  if ( v8 == 0 )
    return 0;
  v9 = v7 & 0x1FF;
  v10 = &v8[v9] == 0;
  v11 = &v8[v9];
  result = 0;
  if ( !v10 && v7 == v11->m_EHandle.m_Index )
    return v11->m_pInstance;
  return result;
}


// CNavEntityInterface::FindLadderTeam  (line 461, @0x0000000002f05a20, libserver.so)  // inlines: GetTeamNumber
// calls: EntityFromEntityHandle
int __fastcall CNavEntityInterface::FindLadderTeam(CNavEntityInterface *const this, const CNavLadder *const rLadder)
{
  IHandleEntity *v2; // rax
  CBaseEntity *v3; // rax

  v2 = (*(this->_vptr_INavEntityInterface + 2))(this, rLadder);
  v3 = EntityFromEntityHandle(v2);
  if ( v3 != 0 )
    return v3->m_iTeamNum.m_Value;
  else
    return -1;
}


// CNavPhysicsInterface::Nav_TraceLine  (line 476, @0x0000000002f06470, libserver.so)  // inlines: EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract
// calls: CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
void __fastcall CNavPhysicsInterface::Nav_TraceLine(
        CNavPhysicsInterface *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        uint64 nMask,
        const CBaseEntity *pIgnore,
        int nCollisionGroup,
        trace_t *pTraceOut)
{
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v11; // xmm2_4
  float m_fValue; // xmm1_4
  float v13; // xmm1_4
  CTraceFilterSimple v14; // [rsp-A0h] [rbp-A8h] BYREF
  Ray_t v15; // [rsp-60h] [rbp-68h] BYREF

  v15.m_Start.w = 0.0;
  memset(&v15.m_Delta.w, 0, 36);
  x = vStart->x;
  y = vStart->y;
  z = vStart->z;
  v11 = vEnd->z;
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  v15.m_Delta.y = vEnd->y - y;
  v15.m_flRadius = m_fValue;
  v13 = vEnd->x;
  v15.m_Delta.z = v11 - z;
  v15.m_Start.x = x;
  v15.m_Start.y = y;
  v15.m_Delta.x = v13 - x;
  v15.m_Start.z = z;
  v15.m_IsRay = 1;
  v15.m_IsSwept = (((v15.m_Delta.x * v15.m_Delta.x) + (v15.m_Delta.y * v15.m_Delta.y)) + (v15.m_Delta.z * v15.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v14, pIgnore, nCollisionGroup, 0);
  v14.m_attr.m_nInteractsWith |= nMask;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v15, &v14, pTraceOut);
}


// CNavPhysicsInterface::Nav_TraceLine  (line 482, @0x0000000002f06320, libserver.so)  // inlines: EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract
// calls: CGamePhysicsQueryInterface::TraceRay
void __fastcall CNavPhysicsInterface::Nav_TraceLine(
        CNavPhysicsInterface *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        uint64 nMask,
        CTraceFilter *pFilter,
        trace_t *pTraceOut)
{
  float x; // xmm6_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v9; // xmm2_4
  float m_fValue; // xmm1_4
  float v11; // xmm1_4
  bool v12; // al
  Ray_t ray; // [rsp+0h] [rbp-50h] BYREF

  ray.m_Start.w = 0.0;
  x = vStart->x;
  memset(&ray.m_Delta.w, 0, 36);
  y = vStart->y;
  z = vStart->z;
  v9 = vEnd->z;
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Delta.y = vEnd->y - y;
  ray.m_IsRay = 1;
  ray.m_flRadius = m_fValue;
  v11 = vEnd->x;
  ray.m_Delta.z = v9 - z;
  ray.m_Delta.x = v11 - x;
  ray.m_Start.x = x;
  ray.m_Start.y = y;
  ray.m_Start.z = z;
  v12 = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  pFilter->m_attr.m_nInteractsWith |= nMask;
  ray.m_IsSwept = v12;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, pFilter, pTraceOut);
}


// CNavPhysicsInterface::Nav_TraceHull  (line 488, @0x0000000002f06ac0, libserver.so)  // inlines: EnableInteractsWith, Init, LengthSqr, Ray_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator*=
// calls: CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
void __fastcall CNavPhysicsInterface::Nav_TraceHull(
        CNavPhysicsInterface *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        const Vector *const vHullMin,
        const Vector *const vHullMax,
        uint64 nMask,
        const CBaseEntity *pIgnore,
        int nCollisionGroup,
        trace_t *pTraceOut)
{
  float x; // xmm6_4
  float y; // xmm5_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float z; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm12_4
  float v17; // xmm10_4
  float v18; // xmm11_4
  float v19; // xmm9_4
  float v20; // xmm8_4
  float v21; // xmm7_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  CTraceFilterSimple v25; // [rsp-A0h] [rbp-A8h] BYREF
  Ray_t v26; // [rsp-60h] [rbp-68h] BYREF

  v26.m_Start.w = 0.0;
  x = vStart->x;
  v26.m_Delta.w = 0.0;
  y = vStart->y;
  v26.m_StartOffset.w = 0.0;
  v12 = vEnd->x;
  v26.m_Extents.w = 0.0;
  v13 = vEnd->y;
  v26.m_flRadius = 0.0;
  z = vStart->z;
  v15 = vEnd->z;
  v16 = vHullMax->x;
  v26.m_Delta.x = v12 - x;
  v26.m_Delta.y = v13 - y;
  v17 = vHullMax->y;
  v18 = vHullMin->x;
  v26.m_Delta.z = v15 - z;
  v19 = vHullMin->y;
  v20 = vHullMax->z;
  v21 = vHullMin->z;
  v26.m_Extents.y = (v17 - v19) * 0.5;
  v26.m_Extents.z = (v20 - v21) * 0.5;
  v26.m_Extents.x = (v16 - v18) * 0.5;
  v26.m_IsSwept = (((v26.m_Delta.x * v26.m_Delta.x) + (v26.m_Delta.y * v26.m_Delta.y)) + (v26.m_Delta.z * v26.m_Delta.z)) != 0.0;
  v22 = (v16 + v18) * 0.5;
  v26.m_IsRay = (((v26.m_Extents.x * v26.m_Extents.x) + (v26.m_Extents.y * v26.m_Extents.y))
               + (v26.m_Extents.z * v26.m_Extents.z)) < 0.000001;
  v23 = (v17 + v19) * 0.5;
  v24 = (v20 + v21) * 0.5;
  v26.m_Start.x = x + v22;
  v26.m_Start.y = y + v23;
  v26.m_Start.z = z + v24;
  v26.m_StartOffset.x = -v22;
  v26.m_StartOffset.y = -v23;
  v26.m_StartOffset.z = -v24;
  CTraceFilterSimple::CTraceFilterSimple(&v25, pIgnore, nCollisionGroup, 0);
  v25.m_attr.m_nInteractsWith |= nMask;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v26, &v25, pTraceOut);
}


// CNavPhysicsInterface::Nav_TraceHull  (line 495, @0x0000000002f06930, libserver.so)  // inlines: EnableInteractsWith, Init, LengthSqr, Ray_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator*=
// calls: CGamePhysicsQueryInterface::TraceRay
void __fastcall CNavPhysicsInterface::Nav_TraceHull(
        CNavPhysicsInterface *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        const Vector *const vHullMin,
        const Vector *const vHullMax,
        uint64 nMask,
        CTraceFilter *pFilter,
        trace_t *pTraceOut)
{
  float x; // xmm6_4
  float y; // xmm5_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float z; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm12_4
  float v15; // xmm10_4
  float v16; // xmm11_4
  float v17; // xmm9_4
  float v18; // xmm8_4
  float v19; // xmm7_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  Ray_t v23; // [rsp-50h] [rbp-58h] BYREF

  x = vStart->x;
  v23.m_Start.w = 0.0;
  y = vStart->y;
  v23.m_Delta.w = 0.0;
  v10 = vEnd->x;
  v23.m_StartOffset.w = 0.0;
  v11 = vEnd->y;
  v23.m_Extents.w = 0.0;
  z = vStart->z;
  v23.m_flRadius = 0.0;
  v13 = vEnd->z;
  v14 = vHullMax->x;
  v23.m_Delta.x = v10 - x;
  v23.m_Delta.y = v11 - y;
  v15 = vHullMax->y;
  v16 = vHullMin->x;
  v23.m_Delta.z = v13 - z;
  v17 = vHullMin->y;
  v18 = vHullMax->z;
  v19 = vHullMin->z;
  v23.m_Extents.y = (v15 - v17) * 0.5;
  v23.m_Extents.z = (v18 - v19) * 0.5;
  v23.m_Extents.x = (v14 - v16) * 0.5;
  v23.m_IsSwept = (((v23.m_Delta.x * v23.m_Delta.x) + (v23.m_Delta.y * v23.m_Delta.y)) + (v23.m_Delta.z * v23.m_Delta.z)) != 0.0;
  v20 = (v14 + v16) * 0.5;
  v23.m_IsRay = (((v23.m_Extents.x * v23.m_Extents.x) + (v23.m_Extents.y * v23.m_Extents.y))
               + (v23.m_Extents.z * v23.m_Extents.z)) < 0.000001;
  v21 = (v15 + v17) * 0.5;
  v22 = (v18 + v19) * 0.5;
  v23.m_Start.x = x + v20;
  v23.m_Start.y = y + v21;
  v23.m_Start.z = z + v22;
  v23.m_StartOffset.x = -v20;
  v23.m_StartOffset.y = -v21;
  pFilter->m_attr.m_nInteractsWith |= nMask;
  v23.m_StartOffset.z = -v22;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v23, pFilter, pTraceOut);
}


// CNavPhysicsInterface::Nav_PointContents  (line 501, @0x0000000002f05a50, libserver.so)  // inlines: UTIL_PointContents
// calls: CGamePhysicsQueryInterface::GetPointContents
uint64 __fastcall CNavPhysicsInterface::Nav_PointContents(
        CNavPhysicsInterface *const this,
        const Vector *const vTestPos,
        uint64 nContentsMask)
{
  return CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, vTestPos, nContentsMask);
}


// CZombieBorder::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 522, @0x00000000020328e0, libserver.so)
// globals: CZombieBorder::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CZombieBorder::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CZombieBorder::CEntityInstanceEntityClass *const this)
{
  return CZombieBorder::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CZombieBorder::CEntityInstanceEntityClass::DestructInstance  (line 522, @0x00000000020328f0, libserver.so)  // inlines: Destruct<CZombieBorder>
void __fastcall CZombieBorder::CEntityInstanceEntityClass::DestructInstance(
        CZombieBorder::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CZombieBorder::CEntityInstanceEntityClass::FreeInstance  (line 522, @0x0000000002032910, libserver.so)
void __fastcall CZombieBorder::CEntityInstanceEntityClass::FreeInstance(
        CZombieBorder::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CZombieBorder::CEntityInstanceEntityClass::CanAllocate  (line 522, @0x0000000002032930, libserver.so)
bool __fastcall CZombieBorder::CEntityInstanceEntityClass::CanAllocate(
        const CZombieBorder::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CZombieBorder::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 522, @0x0000000002032940, libserver.so)
// globals: CZombieBorder::s_pSchemaBinding
const ISchemaBinding *__fastcall CZombieBorder::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CZombieBorder::CEntityInstanceEntityClass *const this)
{
  return CZombieBorder::s_pSchemaBinding;
}


// CZombieBorder::CEntityInstanceEntityClass::AllocateInstance  (line 522, @0x0000000002032de0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CZombieBorder::CEntityInstanceEntityClass::AllocateInstance(
        CZombieBorder::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CZombieBorder::CEntityInstanceEntityClass::ConstructInstance  (line 522, @0x0000000002032f80, libserver.so)  // inlines: Construct<CZombieBorder>
// calls: CZombieBorder::CZombieBorder
CEntityInstance *__fastcall CZombieBorder::CEntityInstanceEntityClass::ConstructInstance(
        CZombieBorder::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CZombieBorder::CZombieBorder(p);
  return p;
}


// CZombieBorder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 522, @0x0000000002033b10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CZombieBorder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CZombieBorder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CZombieBorder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 522, @0x0000000002033b30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CZombieBorder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CZombieBorder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CZombieBorder::GetEntityClassInternal  (line 522, @0x0000000002034d10, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_nav_mesh_01.cpp
// strings: "info_zombie_border", "CZombieBorder", "CServerOnlyPointEntity", "CServerOnlyEntity"
// globals: `guard variable for'CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass, CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CZombieBorder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CZombieBorder::GetEntityClassInfo(void)::g_EntityCZombieBorderClassInfo, CZombieBorder::GetEntityClassInfo(void)::g_EntityCZombieBorderClassInfo, `guard variable for'CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo (11 total)
CEntityClass *__cdecl CZombieBorder::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass == 0
    && __cxa_guard_acquire(&`guard variable for'CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass) != 0 )
  {
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_designerName.u.m_Id = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass._vptr_CEntityClass = off_3F79390;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_ComponentOffsets.m_Size = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_AllHelpers.m_Size = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_instanceUnserializer.m_atomicFields,
      4);
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_classInputs.m_Size = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_classInputs.m_Memory.m_pMemory = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_classOutputs.m_Size = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_requiredEHandle.m_Index = -1;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_hNetworkSerializer = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_pBaseClassInfo = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_pClassInfo = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_flags = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_nAllHelpersFlags = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_pScriptClassDesc = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_pInputs = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_nInputCount = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_pOutputs = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_nOutputCount = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_pGameClass = 0;
    CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass._vptr_CEntityClass = off_3FE6BD0;
    __cxa_guard_release(&`guard variable for'CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass);
    __cxa_atexit(
      CZombieBorder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass,
      &_dso_handle);
  }
  if ( g_pEntityCZombieBorderClass != 0 )
    return &CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass;
  if ( `guard variable for'CZombieBorder::GetEntityClassInfo(void)::g_EntityCZombieBorderClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CZombieBorder::GetEntityClassInfo(void)::g_EntityCZombieBorderClassInfo) != 0 )
  {
    if ( `guard variable for'CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo) != 0 )
      {
        EntityClassInfo = CBaseEntity::GetEntityClassInfo();
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo,
          "CServerOnlyEntity",
          0,
          0,
          EntityClassInfo);
        __cxa_guard_release(&`guard variable for'CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo,
        "CServerOnlyPointEntity",
        0,
        0,
        &CServerOnlyEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CZombieBorder::GetEntityClassInfo(void)::g_EntityCZombieBorderClassInfo,
      "CZombieBorder",
      "info_zombie_border",
      0,
      &CServerOnlyPointEntity::GetEntityClassInfo(void)::g_EntityCServerOnlyPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CZombieBorder::GetEntityClassInfo(void)::g_EntityCZombieBorderClassInfo);
  }
  CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_pClassInfo = &CZombieBorder::GetEntityClassInfo(void)::g_EntityCZombieBorderClassInfo;
  CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_pBaseClassInfo = CZombieBorder::GetEntityClassInfo(void)::g_EntityCZombieBorderClassInfo.m_pBaseClassInfo;
  g_pEntityCZombieBorderClass = &CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass;
  CZombieBorder::GetEntityClassInfo(void)::g_EntityCZombieBorderClassInfo.m_pClass = &CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass;
  CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCZombieBorderClass->m_pComponentOverrides = 0;
  return &CZombieBorder::GetEntityClassInternal(void)::g_EntityCZombieBorderClass;
}


// CZombieBorder::GetEntityClass  (line 522, @0x0000000002f04d90, libserver.so)
CEntityClass *__cdecl CZombieBorder::GetEntityClass()
{
  return g_pEntityCZombieBorderClass;
}


// CZombieBorder::Schema_DynamicBinding  (line 522, @0x0000000002f05a70, libserver.so)
// calls: CZombieBorder::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CZombieBorder::Schema_DynamicBinding(const CZombieBorder *const this)
{
  CZombieBorder::Schema_VerifyBindingIsRegistered();
  return CZombieBorder::s_pSchemaBinding;
}


