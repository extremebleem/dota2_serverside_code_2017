// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_triggers.cpp:17
struct CDotaEntityFilterFlags {
private:

	bool m_bInvertFilter;  // +0x0
	bool m_bEveryUnit;  // +0x1

	int m_nTeamNumber;  // +0x4
	string_t m_UnitName;  // +0x8
	bool m_bIsAncient;  // +0x10
	bool m_bIsNeutralUnitType;  // +0x11
	bool m_bIsSummoned;  // +0x12
	bool m_bIsHero;  // +0x13
	bool m_bIsRealHero;  // +0x14
	bool m_bIsTower;  // +0x15
	bool m_bIsPhantom;  // +0x16
	bool m_bIsIllusion;  // +0x17
	bool m_bIsCreep;  // +0x18
	bool m_bIsLaneCreep;  // +0x19

	CDotaEntityFilterFlags();
	bool PassesDotaEntityFilter(CBaseEntity *);
	CDotaEntityFilterFlags & operator=(const CDotaEntityFilterFlags &);

	// sizeof = 32
};

// src/game/server/dota/dota_triggers.cpp:85
class CTriggerDota : public CTriggerMultiple {
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
	CTriggerDota(CTriggerDota &);
	CTriggerDota(CTriggerDota &);
	CTriggerDota();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual bool PassesTriggerFilters(CBaseEntity *);
	virtual ~CTriggerDota();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[223] PassesTriggerFilters
	// sizeof = 1536
};

// src/game/server/dota/dota_triggers.cpp:107
class CFilterDotaEntities : public CBaseFilter {
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
	CFilterDotaEntities(CFilterDotaEntities &);
	CFilterDotaEntities(CFilterDotaEntities &);
	CFilterDotaEntities();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool PassesFilterImpl(CBaseEntity *, CBaseEntity *);
	virtual ~CFilterDotaEntities();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[207] PassesFilterImpl
	// sizeof = 864
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDotaEntityFilterFlags::PassesDotaEntityFilter  (line 49, @0x00000000026f7850, libserver.so)  // inlines: GetTeamNumber, IsRealHero, operator!=
// calls: __dynamic_cast
// callers: CTriggerDota::PassesTriggerFilters, CFilterDotaEntities::PassesFilterImpl
bool __fastcall CDotaEntityFilterFlags::PassesDotaEntityFilter(
        CDotaEntityFilterFlags *const this,
        CBaseEntity *pEntity)
{
  bool m_bInvertFilter; // r12
  bool v4; // r13
  _BYTE *v5; // rax
  int m_nTeamNumber; // edx
  UtlSymLargeId_t m_Id; // rdx

  m_bInvertFilter = this->m_bInvertFilter;
  v4 = !this->m_bInvertFilter;
  if ( pEntity == 0 )
    return m_bInvertFilter;
  v5 = __dynamic_cast(pEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC, 0);
  if ( v5 == 0 )
    return m_bInvertFilter;
  m_nTeamNumber = this->m_nTeamNumber;
  if ( m_nTeamNumber != 0 && m_nTeamNumber != v5[383] )
    return m_bInvertFilter;
  if ( !this->m_bEveryUnit )
  {
    m_Id = this->m_UnitName.u.m_Id;
    if ( (m_Id == 0 || m_Id != *(v5 + 423))
      && (!this->m_bIsAncient || v5[2165] == 0)
      && (!this->m_bIsNeutralUnitType || v5[2166] == 0)
      && (!this->m_bIsSummoned || v5[2168] == 0)
      && (!this->m_bIsHero || (v5[2088] & 1) == 0)
      && (!this->m_bIsRealHero || (v5[2088] & 1) == 0 || v5[3416] != 0)
      && (!this->m_bIsTower || (v5[2088] & 4) == 0)
      && (!this->m_bIsPhantom || v5[2164] == 0)
      && (!this->m_bIsCreep || v5[2088] >= 0) )
    {
      if ( this->m_bIsLaneCreep && (v5[2089] & 4) != 0 )
        return v4;
      return m_bInvertFilter;
    }
  }
  return v4;
}


// CTriggerDota::~CTriggerDota  (line 85, @0x0000000002745a40, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CTriggerMultiple, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerDota::~CTriggerDota(CTriggerDota *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  this->m_hTouchingEntities.m_Size = 0;
  v2 = (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40BE1B0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hTouchingEntities.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerDota::~CTriggerDota  (line 85, @0x0000000002745b40, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CTriggerDota, ~CTriggerMultiple, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CTriggerDota::~CTriggerDota(CTriggerDota *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *p_m_Memory; // r12

  this->m_hTouchingEntities.m_Size = 0;
  v2 = (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40BE1B0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hTouchingEntities.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerDota::Schema_DynamicBinding  (line 87, @0x0000000002728710, libserver.so)
// globals: CTriggerDota::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerDota::Schema_DynamicBinding(const CTriggerDota *const this)
{
  return CTriggerDota::s_pSchemaBinding;
}


// CTriggerDota::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 87, @0x0000000002728720, libserver.so)
// globals: CTriggerDota::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerDota::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerDota::CEntityInstanceEntityClass *const this)
{
  return CTriggerDota::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerDota::CEntityInstanceEntityClass::DestructInstance  (line 87, @0x0000000002728730, libserver.so)  // inlines: Destruct<CTriggerDota>
void __fastcall CTriggerDota::CEntityInstanceEntityClass::DestructInstance(
        CTriggerDota::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerDota::CEntityInstanceEntityClass::FreeInstance  (line 87, @0x0000000002728750, libserver.so)
void __fastcall CTriggerDota::CEntityInstanceEntityClass::FreeInstance(
        CTriggerDota::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerDota::CEntityInstanceEntityClass::CanAllocate  (line 87, @0x0000000002728770, libserver.so)
bool __fastcall CTriggerDota::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerDota::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerDota::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 87, @0x0000000002728780, libserver.so)
// globals: CTriggerDota::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerDota::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerDota::CEntityInstanceEntityClass *const this)
{
  return CTriggerDota::s_pSchemaBinding;
}


// CTriggerDota::CEntityInstanceEntityClass::AllocateInstance  (line 87, @0x00000000027369c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerDota::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerDota::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1536);
  memset(v1, 0, 0x600u);
  return v1;
}


// CTriggerDota::CEntityInstanceEntityClass::ConstructInstance  (line 87, @0x0000000002745270, libserver.so)  // inlines: CDotaEntityFilterFlags, CTriggerDota, Construct<CTriggerDota>, memset
// calls: CTriggerMultiple::CTriggerMultiple
CEntityInstance *__fastcall CTriggerDota::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerDota::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CTriggerMultiple::CTriggerMultiple(p);
    *(p + 188) = 0;
    *p = &off_42AD570;
    *(p + 189) = 0;
    *(p + 190) = 0;
    *(p + 191) = 0;
  }
  return p;
}


// CTriggerDota::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 87, @0x0000000002745c60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerDota::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerDota::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CTriggerDota::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 87, @0x0000000002745c80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerDota::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerDota::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerDota::GetEntityClassInternal  (line 87, @0x000000000279ecf0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CTriggerMultiple::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
// strings: "trigger_dota", "CTriggerDota"
// globals: `guard variable for'CTriggerDota::GetEntityClassInternal(void)::g_EntityCTriggerDotaClass, CTriggerDota::GetEntityClassInternal(void)::g_EntityCTriggerDotaClass, __dso_handle, CTriggerDota::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerDota::GetEntityClassInfo(void)::g_EntityCTriggerDotaClassInfo, CTriggerDota::GetEntityClassInfo(void)::g_EntityCTriggerDotaClassInfo
CEntityClass *__cdecl CTriggerDota::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerDota::GetEntityClassInternal(void)::g_EntityCTriggerDotaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerDota::GetEntityClassInternal(void)::g_EntityCTriggerDotaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTriggerDota::GetEntityClassInternal(void)::g_EntityCTriggerDotaClass);
    CTriggerDota::GetEntityClassInternal(void)::g_EntityCTriggerDotaClass._vptr_CEntityClass = off_42AD4F0;
    __cxa_guard_release(&`guard variable for'CTriggerDota::GetEntityClassInternal(void)::g_EntityCTriggerDotaClass);
    __cxa_atexit(
      CTriggerDota::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerDota::GetEntityClassInternal(void)::g_EntityCTriggerDotaClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerDotaClass != 0 )
    return &CTriggerDota::GetEntityClassInternal(void)::g_EntityCTriggerDotaClass;
  if ( `guard variable for'CTriggerDota::GetEntityClassInfo(void)::g_EntityCTriggerDotaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerDota::GetEntityClassInfo(void)::g_EntityCTriggerDotaClassInfo) != 0 )
  {
    EntityClassInfo = CTriggerMultiple::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerDota::GetEntityClassInfo(void)::g_EntityCTriggerDotaClassInfo,
      "CTriggerDota",
      "trigger_dota",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerDota::GetEntityClassInfo(void)::g_EntityCTriggerDotaClassInfo);
  }
  CTriggerDota::GetEntityClassInternal(void)::g_EntityCTriggerDotaClass.m_pClassInfo = &CTriggerDota::GetEntityClassInfo(void)::g_EntityCTriggerDotaClassInfo;
  CTriggerDota::GetEntityClassInternal(void)::g_EntityCTriggerDotaClass.m_pBaseClassInfo = CTriggerDota::GetEntityClassInfo(void)::g_EntityCTriggerDotaClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerDotaClass = &CTriggerDota::GetEntityClassInternal(void)::g_EntityCTriggerDotaClass;
  CTriggerDota::GetEntityClassInfo(void)::g_EntityCTriggerDotaClassInfo.m_pClass = &CTriggerDota::GetEntityClassInternal(void)::g_EntityCTriggerDotaClass;
  CTriggerDota::GetEntityClassInternal(void)::g_EntityCTriggerDotaClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCTriggerDotaClass->m_pComponentOverrides = 0;
  return &CTriggerDota::GetEntityClassInternal(void)::g_EntityCTriggerDotaClass;
}


// CTriggerDota::Spawn  (line 90, @0x000000000273bf50, libserver.so)
// calls: CTriggerMultiple::Spawn
void __fastcall CTriggerDota::Spawn(CTriggerDota *const this, const CEntityKeyValues *pKeyValues)
{
  CTriggerMultiple::Spawn(this, pKeyValues);
}


// CTriggerDota::PassesTriggerFilters  (line 95, @0x000000000279ecb0, libserver.so)
// calls: CDotaEntityFilterFlags::PassesDotaEntityFilter
bool __fastcall CTriggerDota::PassesTriggerFilters(CTriggerDota *const this, CBaseEntity *pOther)
{
  return CDotaEntityFilterFlags::PassesDotaEntityFilter(&this->m_FilterFlags, pOther);
}


// CFilterDotaEntities::~CFilterDotaEntities  (line 107, @0x0000000002736d90, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFilterDotaEntities::~CFilterDotaEntities(CFilterDotaEntities *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CFilterDotaEntities::~CFilterDotaEntities  (line 107, @0x0000000002736db0, libserver.so)  // inlines: ~CBaseFilter, ~CFilterDotaEntities, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFilterDotaEntities::~CFilterDotaEntities(CFilterDotaEntities *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFilterDotaEntities::Schema_DynamicBinding  (line 109, @0x0000000002728790, libserver.so)
// globals: CFilterDotaEntities::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterDotaEntities::Schema_DynamicBinding(
        const CFilterDotaEntities *const this)
{
  return CFilterDotaEntities::s_pSchemaBinding;
}


// CFilterDotaEntities::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 109, @0x00000000027287a0, libserver.so)
// globals: CFilterDotaEntities::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterDotaEntities::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFilterDotaEntities::CEntityInstanceEntityClass *const this)
{
  return CFilterDotaEntities::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFilterDotaEntities::CEntityInstanceEntityClass::DestructInstance  (line 109, @0x00000000027287b0, libserver.so)  // inlines: Destruct<CFilterDotaEntities>
void __fastcall CFilterDotaEntities::CEntityInstanceEntityClass::DestructInstance(
        CFilterDotaEntities::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFilterDotaEntities::CEntityInstanceEntityClass::FreeInstance  (line 109, @0x00000000027287d0, libserver.so)
void __fastcall CFilterDotaEntities::CEntityInstanceEntityClass::FreeInstance(
        CFilterDotaEntities::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFilterDotaEntities::CEntityInstanceEntityClass::CanAllocate  (line 109, @0x00000000027287f0, libserver.so)
bool __fastcall CFilterDotaEntities::CEntityInstanceEntityClass::CanAllocate(
        const CFilterDotaEntities::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFilterDotaEntities::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 109, @0x0000000002728800, libserver.so)
// globals: CFilterDotaEntities::s_pSchemaBinding
const ISchemaBinding *__fastcall CFilterDotaEntities::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFilterDotaEntities::CEntityInstanceEntityClass *const this)
{
  return CFilterDotaEntities::s_pSchemaBinding;
}


// CFilterDotaEntities::CEntityInstanceEntityClass::AllocateInstance  (line 109, @0x0000000002736a00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFilterDotaEntities::CEntityInstanceEntityClass::AllocateInstance(
        CFilterDotaEntities::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 864);
  memset(v1, 0, 0x360u);
  return v1;
}


// CFilterDotaEntities::CEntityInstanceEntityClass::ConstructInstance  (line 109, @0x0000000002745320, libserver.so)  // inlines: CBaseFilter, CDotaEntityFilterFlags, CEntityIOOutput, CFilterDotaEntities, CLogicalEntity, CServerOnlyEntity, Construct<CFilterDotaEntities>, memset
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CFilterDotaEntities::CEntityInstanceEntityClass::ConstructInstance(
        CFilterDotaEntities::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 104) = 0;
    *(p + 98) = off_3F7C190;
    *(p + 101) = off_3F7C190;
    *p = &off_42ADD10;
    *(p + 105) = 0;
    *(p + 106) = 0;
    *(p + 107) = 0;
  }
  return p;
}


// CFilterDotaEntities::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 109, @0x0000000002745bc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFilterDotaEntities::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterDotaEntities::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFilterDotaEntities::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 109, @0x0000000002745be0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFilterDotaEntities::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterDotaEntities::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFilterDotaEntities::GetEntityClassInternal  (line 109, @0x000000000279ee40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CLogicalEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
// strings: "filter_dota", "CFilterDotaEntities", "filter_base", "CBaseFilter"
// globals: `guard variable for'CFilterDotaEntities::GetEntityClassInternal(void)::g_EntityCFilterDotaEntitiesClass, CFilterDotaEntities::GetEntityClassInternal(void)::g_EntityCFilterDotaEntitiesClass, __dso_handle, CFilterDotaEntities::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFilterDotaEntities::GetEntityClassInfo(void)::g_EntityCFilterDotaEntitiesClassInfo, CFilterDotaEntities::GetEntityClassInfo(void)::g_EntityCFilterDotaEntitiesClassInfo, `guard variable for'CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo, CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo
CEntityClass *__cdecl CFilterDotaEntities::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFilterDotaEntities::GetEntityClassInternal(void)::g_EntityCFilterDotaEntitiesClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterDotaEntities::GetEntityClassInternal(void)::g_EntityCFilterDotaEntitiesClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFilterDotaEntities::GetEntityClassInternal(void)::g_EntityCFilterDotaEntitiesClass);
    CFilterDotaEntities::GetEntityClassInternal(void)::g_EntityCFilterDotaEntitiesClass._vptr_CEntityClass = off_42ADC90;
    __cxa_guard_release(&`guard variable for'CFilterDotaEntities::GetEntityClassInternal(void)::g_EntityCFilterDotaEntitiesClass);
    __cxa_atexit(
      CFilterDotaEntities::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFilterDotaEntities::GetEntityClassInternal(void)::g_EntityCFilterDotaEntitiesClass,
      &_dso_handle);
  }
  if ( g_pEntityCFilterDotaEntitiesClass != 0 )
    return &CFilterDotaEntities::GetEntityClassInternal(void)::g_EntityCFilterDotaEntitiesClass;
  if ( `guard variable for'CFilterDotaEntities::GetEntityClassInfo(void)::g_EntityCFilterDotaEntitiesClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterDotaEntities::GetEntityClassInfo(void)::g_EntityCFilterDotaEntitiesClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo) != 0 )
    {
      EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo,
        "CBaseFilter",
        "filter_base",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFilterDotaEntities::GetEntityClassInfo(void)::g_EntityCFilterDotaEntitiesClassInfo,
      "CFilterDotaEntities",
      "filter_dota",
      0,
      &CBaseFilter::GetEntityClassInfo(void)::g_EntityCBaseFilterClassInfo);
    __cxa_guard_release(&`guard variable for'CFilterDotaEntities::GetEntityClassInfo(void)::g_EntityCFilterDotaEntitiesClassInfo);
  }
  CFilterDotaEntities::GetEntityClassInternal(void)::g_EntityCFilterDotaEntitiesClass.m_pClassInfo = &CFilterDotaEntities::GetEntityClassInfo(void)::g_EntityCFilterDotaEntitiesClassInfo;
  CFilterDotaEntities::GetEntityClassInternal(void)::g_EntityCFilterDotaEntitiesClass.m_pBaseClassInfo = CFilterDotaEntities::GetEntityClassInfo(void)::g_EntityCFilterDotaEntitiesClassInfo.m_pBaseClassInfo;
  g_pEntityCFilterDotaEntitiesClass = &CFilterDotaEntities::GetEntityClassInternal(void)::g_EntityCFilterDotaEntitiesClass;
  CFilterDotaEntities::GetEntityClassInfo(void)::g_EntityCFilterDotaEntitiesClassInfo.m_pClass = &CFilterDotaEntities::GetEntityClassInternal(void)::g_EntityCFilterDotaEntitiesClass;
  CFilterDotaEntities::GetEntityClassInternal(void)::g_EntityCFilterDotaEntitiesClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFilterDotaEntitiesClass->m_pComponentOverrides = 0;
  return &CFilterDotaEntities::GetEntityClassInternal(void)::g_EntityCFilterDotaEntitiesClass;
}


// CFilterDotaEntities::PassesFilterImpl  (line 112, @0x000000000279ecd0, libserver.so)
// calls: CDotaEntityFilterFlags::PassesDotaEntityFilter
bool __fastcall CFilterDotaEntities::PassesFilterImpl(
        CFilterDotaEntities *const this,
        CBaseEntity *pCaller,
        CBaseEntity *pEntity)
{
  return CDotaEntityFilterFlags::PassesDotaEntityFilter(&this->m_FilterFlags, pEntity);
}


