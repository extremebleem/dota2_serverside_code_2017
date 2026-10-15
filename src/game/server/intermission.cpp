// Reconstructed from DWARF by pahole; not original source.

// src/game/server/intermission.cpp:15
class CInfoIntermission : public CPointEntity {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CInfoIntermission(CInfoIntermission &);
	CInfoIntermission(CInfoIntermission &);
	CInfoIntermission();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Think();
	virtual ~CInfoIntermission();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[117] Think
	// sizeof = 776
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CInfoIntermission::~CInfoIntermission  (line 15, @0x000000000227c280, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoIntermission::~CInfoIntermission(CInfoIntermission *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoIntermission::~CInfoIntermission  (line 15, @0x000000000227c2a0, libserver.so)  // inlines: ~CInfoIntermission, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoIntermission::~CInfoIntermission(CInfoIntermission *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoIntermission::Schema_DynamicBinding  (line 17, @0x000000000227b410, libserver.so)
// globals: CInfoIntermission::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoIntermission::Schema_DynamicBinding(const CInfoIntermission *const this)
{
  return CInfoIntermission::s_pSchemaBinding;
}


// CInfoIntermission::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 17, @0x000000000227b420, libserver.so)
// globals: CInfoIntermission::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoIntermission::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoIntermission::CEntityInstanceEntityClass *const this)
{
  return CInfoIntermission::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoIntermission::CEntityInstanceEntityClass::DestructInstance  (line 17, @0x000000000227b430, libserver.so)  // inlines: Destruct<CInfoIntermission>
void __fastcall CInfoIntermission::CEntityInstanceEntityClass::DestructInstance(
        CInfoIntermission::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoIntermission::CEntityInstanceEntityClass::FreeInstance  (line 17, @0x000000000227b450, libserver.so)
void __fastcall CInfoIntermission::CEntityInstanceEntityClass::FreeInstance(
        CInfoIntermission::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoIntermission::CEntityInstanceEntityClass::CanAllocate  (line 17, @0x000000000227b470, libserver.so)
bool __fastcall CInfoIntermission::CEntityInstanceEntityClass::CanAllocate(
        const CInfoIntermission::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoIntermission::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 17, @0x000000000227b480, libserver.so)
// globals: CInfoIntermission::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoIntermission::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoIntermission::CEntityInstanceEntityClass *const this)
{
  return CInfoIntermission::s_pSchemaBinding;
}


// CInfoIntermission::CEntityInstanceEntityClass::AllocateInstance  (line 17, @0x000000000227be70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoIntermission::CEntityInstanceEntityClass::AllocateInstance(
        CInfoIntermission::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CInfoIntermission::CEntityInstanceEntityClass::ConstructInstance  (line 17, @0x000000000227bfe0, libserver.so)  // inlines: CInfoIntermission, CPointEntity, Construct<CInfoIntermission>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CInfoIntermission::CEntityInstanceEntityClass::ConstructInstance(
        CInfoIntermission::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4053710;
  }
  return p;
}


// CInfoIntermission::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 17, @0x000000000227d000, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoIntermission::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoIntermission::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CInfoIntermission::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 17, @0x000000000227d020, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoIntermission::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoIntermission::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoIntermission::GetEntityClassInternal  (line 17, @0x000000000227fea0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ThreadInterlockedExchange, operator=, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "info_intermission", "CInfoIntermission"
// globals: `guard variable for'CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass, CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoIntermission::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoIntermission::GetEntityClassInfo(void)::g_EntityCInfoIntermissionClassInfo, CInfoIntermission::GetEntityClassInfo(void)::g_EntityCInfoIntermissionClassInfo
CEntityClass *__cdecl CInfoIntermission::GetEntityClassInternal()
{
  CInfoIntermission::CEntityInstanceEntityClass *v1; // rax
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass) != 0 )
  {
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass._vptr_CEntityClass = off_3F79390;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_designerName.u.m_Id = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_ComponentOffsets.m_Size = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_AllHelpers.m_Size = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v1 = &CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass;
    do
    {
      v1->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v1 = (v1 + 16);
      v1->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v1 != &CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_classInputs.m_Size = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_classOutputs.m_Size = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_requiredEHandle.m_Index = -1;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_hNetworkSerializer = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_pBaseClassInfo = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_pClassInfo = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_flags = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_nAllHelpersFlags = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_pScriptClassDesc = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_pInputs = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_nInputCount = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_pOutputs = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_nOutputCount = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_pGameClass = 0;
    CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass._vptr_CEntityClass = off_4053690;
    __cxa_guard_release(&`guard variable for'CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass);
    __cxa_atexit(
      CInfoIntermission::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoIntermissionClass != 0 )
    return &CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass;
  if ( `guard variable for'CInfoIntermission::GetEntityClassInfo(void)::g_EntityCInfoIntermissionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoIntermission::GetEntityClassInfo(void)::g_EntityCInfoIntermissionClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoIntermission::GetEntityClassInfo(void)::g_EntityCInfoIntermissionClassInfo,
      "CInfoIntermission",
      "info_intermission",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoIntermission::GetEntityClassInfo(void)::g_EntityCInfoIntermissionClassInfo);
  }
  CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_pClassInfo = &CInfoIntermission::GetEntityClassInfo(void)::g_EntityCInfoIntermissionClassInfo;
  CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_pBaseClassInfo = CInfoIntermission::GetEntityClassInfo(void)::g_EntityCInfoIntermissionClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoIntermissionClass = &CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass;
  CInfoIntermission::GetEntityClassInfo(void)::g_EntityCInfoIntermissionClassInfo.m_pClass = &CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass;
  CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoIntermissionClass->m_pComponentOverrides = 0;
  return &CInfoIntermission::GetEntityClassInternal(void)::g_EntityCInfoIntermissionClass;
}


// CInfoIntermission::Spawn  (line 24, @0x0000000002259ef0, libserver.so)  // inlines: curtime
// calls: CPointEntity::Spawn, CBaseEntity::AddEffects, CBaseEntity::SetLocalAngles, CBaseEntity::SetNextThink
void __fastcall CInfoIntermission::Spawn(CInfoIntermission *const this, const CEntityKeyValues *pKeyValues)
{
  double v3; // xmm1_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CPointEntity::Spawn(this, pKeyValues);
  CBaseEntity::AddEffects(this, 32);
  CBaseEntity::SetLocalAngles(this, &vec3_angle);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v4->m_flCurrentTime + 2.0)), v3, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(0x40000000), v3, 0);
  }
}


// CInfoIntermission::Think  (line 34, @0x0000000002256810, libserver.so)  // inlines: CUtlSymbolLarge, VectorSubtract, operator-
// calls: CGameEntitySystem::FindEntityByName, CBaseEntity::GetLocalOrigin, VectorNormalize, VectorAngles, CBaseEntity::SetLocalAngles
void __fastcall CInfoIntermission::Think(CInfoIntermission *const this)
{
  const CBaseEntity *EntityByName; // r14
  const Vector *LocalOrigin; // r13
  const Vector *v4; // rax
  vec_t v5; // xmm1_4
  vec_t v6; // xmm0_4
  Vector dir; // [rsp+10h] [rbp-40h] BYREF
  QAngle angles; // [rsp+20h] [rbp-30h] BYREF

  *&angles.x = this->m_target.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &angles, this, 0, 0, 0);
  if ( EntityByName != 0 )
  {
    LocalOrigin = CBaseEntity::GetLocalOrigin(this);
    v4 = CBaseEntity::GetLocalOrigin(EntityByName);
    v5 = v4->y - LocalOrigin->y;
    v6 = v4->z - LocalOrigin->z;
    dir.x = v4->x - LocalOrigin->x;
    dir.y = v5;
    dir.z = v6;
    VectorNormalize(&dir);
    VectorAngles(&dir, &angles);
    CBaseEntity::SetLocalAngles(this, &angles);
  }
}


