// Reconstructed from DWARF by pahole; not original source.

// src/game/server/filters.cpp:246
class CFilterName : public CBaseFilter {
public:

private:

	static datamap_t m_DataMap;

	string_t m_iFilterName;  // +0x340
	typedef CBaseFilter BaseClass;

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
	CFilterName(CFilterName &);
	CFilterName(CFilterName &);
	CFilterName();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual bool PassesFilterImpl(CBaseEntity *, CBaseEntity *);
	virtual ~CFilterName();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[207] PassesFilterImpl
	// sizeof = 840
};

// src/game/server/filters.cpp:278
class CFilterModel : public CBaseFilter {
public:

private:

	static datamap_t m_DataMap;

	string_t m_iFilterModel;  // +0x340
	typedef CBaseFilter BaseClass;

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
	CFilterModel(CFilterModel &);
	CFilterModel(CFilterModel &);
	CFilterModel();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual bool PassesFilterImpl(CBaseEntity *, CBaseEntity *);
	virtual ~CFilterModel();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[207] PassesFilterImpl
	// sizeof = 840
};

// src/game/server/filters.cpp:302
class CFilterContext : public CBaseFilter {
public:

private:

	static datamap_t m_DataMap;

	string_t m_iFilterContext;  // +0x340
	typedef CBaseFilter BaseClass;

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
	CFilterContext(CFilterContext &);
	CFilterContext(CFilterContext &);
	CFilterContext();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual bool PassesFilterImpl(CBaseEntity *, CBaseEntity *);
	virtual ~CFilterContext();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[207] PassesFilterImpl
	// sizeof = 840
};

// src/game/server/filters.cpp:327
class CFilterClass : public CBaseFilter {
public:

private:

	static datamap_t m_DataMap;

	string_t m_iFilterClass;  // +0x340
	typedef CBaseFilter BaseClass;

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
	CFilterClass(CFilterClass &);
	CFilterClass(CFilterClass &);
	CFilterClass();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual bool PassesFilterImpl(CBaseEntity *, CBaseEntity *);
	virtual ~CFilterClass();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[207] PassesFilterImpl
	// sizeof = 840
};

// src/game/server/filters.cpp:352
class FilterTeam : public CBaseFilter {
public:

private:

	static datamap_t m_DataMap;

	int m_iFilterTeam;  // +0x340
	typedef CBaseFilter BaseClass;

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
	FilterTeam(FilterTeam &);
	FilterTeam(FilterTeam &);
	FilterTeam();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual bool PassesFilterImpl(CBaseEntity *, CBaseEntity *);
	virtual ~FilterTeam();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[207] PassesFilterImpl
	// sizeof = 840
};

// src/game/server/filters.cpp:408
class CFilterMassGreater : public CBaseFilter {
public:

private:

	static datamap_t m_DataMap;

	float m_fFilterMass;  // +0x340
	typedef CBaseFilter BaseClass;

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
	CFilterMassGreater(CFilterMassGreater &);
	CFilterMassGreater(CFilterMassGreater &);
	CFilterMassGreater();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual bool PassesFilterImpl(CBaseEntity *, CBaseEntity *);
	virtual ~CFilterMassGreater();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[207] PassesFilterImpl
	// sizeof = 840
};

// src/game/server/filters.cpp:436
class FilterDamageType : public CBaseFilter {
public:

private:

	static datamap_t m_DataMap;

protected:

	int m_iDamageType;  // +0x340
	typedef CBaseFilter BaseClass;

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
	FilterDamageType(FilterDamageType &);
	FilterDamageType(FilterDamageType &);
	FilterDamageType();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual bool PassesFilterImpl(CBaseEntity *, CBaseEntity *);
	virtual bool PassesDamageFilterImpl(const CTakeDamageInfo &);
	virtual ~FilterDamageType();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[207] PassesFilterImpl
	// vtable[208] PassesDamageFilterImpl
	// sizeof = 840
};

// src/game/server/filters.cpp:522
class FilterHealth : public CBaseFilter {
public:

private:

	static datamap_t m_DataMap;

protected:

	bool m_bAdrenalineActive;  // +0x340

	int m_iHealthMin;  // +0x344
	int m_iHealthMax;  // +0x348
	typedef CBaseFilter BaseClass;

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
	FilterHealth(FilterHealth &);
	FilterHealth(FilterHealth &);
	FilterHealth();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual bool PassesFilterImpl(CBaseEntity *, CBaseEntity *);
	virtual bool PassesDamageFilterImpl(const CTakeDamageInfo &);
	virtual ~FilterHealth();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[207] PassesFilterImpl
	// vtable[208] PassesDamageFilterImpl
	// sizeof = 848
};

// src/game/server/filters.cpp:582
class CFilterEnemy : public CBaseFilter {
public:

private:

	static datamap_t m_DataMap;

	string_t m_iszEnemyName;  // +0x340
	float m_flRadius;  // +0x348
	float m_flOuterRadius;  // +0x34c
	int m_nMaxSquadmatesPerEnemy;  // +0x350

	string_t m_iszPlayerName;  // +0x358
	typedef CBaseFilter BaseClass;

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
	CFilterEnemy(CFilterEnemy &);
	CFilterEnemy(CFilterEnemy &);
	CFilterEnemy();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual bool PassesFilterImpl(CBaseEntity *, CBaseEntity *);
	virtual bool PassesDamageFilterImpl(const CTakeDamageInfo &);
	bool PassesNameFilter(CBaseEntity *);
	bool PassesProximityFilter(CBaseEntity *, CBaseEntity *);
	bool PassesMobbedFilter(CBaseEntity *, CBaseEntity *);
	virtual ~CFilterEnemy();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[207] PassesFilterImpl
	// vtable[208] PassesDamageFilterImpl
	// sizeof = 864
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseFilter::GetDataDescMap  (line 25, @0x00000000021ee7a0, libserver.so)
// globals: CBaseFilter::m_DataMap
datamap_t *__fastcall CBaseFilter::GetDataDescMap(CBaseFilter *const this)
{
  return &CBaseFilter::m_DataMap;
}


// CBaseFilter::AddDatadescMetadataKeys  (line 25, @0x00000000021fb290, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseFilter::GetEntityClass(void)
void __fastcall CBaseFilter::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseFilter::GetEntityClass);
}


// CBaseFilter::GetBaseMap  (line 25, @0x00000000021fb2b0, libserver.so)
datamap_t *__cdecl CBaseFilter::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CBaseFilter>  (line 25, @0x00000000021fb2c0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CBaseFilter"
// globals: `guard variable for'DataMapInit<CBaseFilter>(CBaseFilter *)::nameHolder, `guard variable for'DataMapInit<CBaseFilter>(CBaseFilter *)::dataDesc, CBaseFilter::GetEntityClass(void), CBaseFilter::m_DataMap, DataMapInit<CBaseFilter>(CBaseFilter *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseFilter>(CBaseFilter *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseFilter>(CBaseFilter *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseFilter>(CBaseFilter *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseFilter>(CBaseFilter *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseFilter>(CBaseFilter *)::nameHolder.m_pszBase = "CBaseFilter";
    DataMapInit<CBaseFilter>(CBaseFilter *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseFilter>(CBaseFilter *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseFilter>(CBaseFilter *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseFilter>(CBaseFilter *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseFilter>(CBaseFilter *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseFilter>(CBaseFilter *)::nameHolder,
      &_dso_handle);
  }
  CBaseFilter::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBaseFilter>(CBaseFilter *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseFilter>(CBaseFilter *)::dataDesc) != 0 )
  {
    DataMapInit<CBaseFilter>(CBaseFilter *)::dataDesc[3].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseFilter>(CBaseFilter *)::dataDesc[4].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseFilter>(CBaseFilter *)::dataDesc);
  }
  CBaseFilter::m_DataMap.dataNumFields = 4;
  CBaseFilter::m_DataMap.dataDesc = &DataMapInit<CBaseFilter>(CBaseFilter *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseFilter::m_DataMap, CBaseFilter::GetEntityClass);
  return &CBaseFilter::m_DataMap;
}


// CBaseFilter::PassesFilterImpl  (line 40, @0x00000000021ee7b0, libserver.so)
bool __fastcall CBaseFilter::PassesFilterImpl(CBaseFilter *const this, CBaseEntity *pCaller, CBaseEntity *pEntity)
{
  return 1;
}


// CBaseFilter::PassesFilter  (line 47, @0x00000000021fb3f0, libserver.so)
// callers: CFuncVPhysicsClip::EntityPassesFilter, CItemGeneric::ConsiderForPickup, CPointPush::PassesFilter, CPointEntityFinder::FindByDistance, CPointEntityFinder::FindByRandom, CBaseTrigger::PassesTriggerFilters, CDOTA_HeroTrigger::PassesTriggerFilters
bool __fastcall CBaseFilter::PassesFilter(CBaseFilter *const this, CBaseEntity *pCaller, CBaseEntity *pEntity)
{
  bool result; // al

  result = (*(this->_vptr_IHandleEntity + 207))(this, pCaller, pEntity);
  if ( this->m_bNegated )
    return !result;
  return result;
}


// CBaseFilter::PassesDamageFilter  (line 55, @0x00000000021ee7c0, libserver.so)
bool __fastcall CBaseFilter::PassesDamageFilter(CBaseFilter *const this, const CTakeDamageInfo *const info)
{
  bool result; // al

  result = (*(this->_vptr_IHandleEntity + 208))(this, info);
  if ( this->m_bNegated )
    return !result;
  return result;
}


// CBaseFilter::PassesDamageFilterImpl  (line 63, @0x00000000021f1d20, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBaseFilter::PassesDamageFilterImpl(CBaseFilter *const this, const CTakeDamageInfo *const info)
{
  CEntityInstance *m_pInstance; // rdx
  CConcreteEntityList *v3; // r9
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rcx
  unsigned __int64 m_Index_low; // rsi
  __int64 v7; // rsi

  m_pInstance = 0;
  v3 = CEntityHandle::gm_pEntityList;
  m_Index = info->m_hAttacker.m_Index;
  v5 = (m_Index + 2);
  if ( v5 > 1 )
  {
    m_Index_low = LOWORD(info->m_hAttacker.m_Index);
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v7 = m_Index_low & 0x1FF;
      v3 = (8 * v7);
      v5 += v7;
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  return (*(this->_vptr_IHandleEntity + 207))(this, 0, m_pInstance, v5, *(this->_vptr_IHandleEntity + 207), v3);
}


// CBaseFilter::InputTestActivator  (line 72, @0x0000000002204240, libserver.so)  // inlines: CVariantBase, FireOutput, Free, PassesFilter, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CBaseFilter::InputTestActivator(CBaseFilter *const this, inputdata_t *const inputdata)
{
  char v4; // al
  bool v5; // zf
  CBaseEntity *pActivator; // rsi
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  v4 = (*(this->_vptr_IHandleEntity + 207))(this, inputdata->pCaller, inputdata->pActivator);
  v5 = !this->m_bNegated;
  pActivator = inputdata->pActivator;
  value.m_uint64 = 0;
  value.m_type = 0;
  value.m_flags = 0;
  if ( !v5 == v4 )
  {
    CEntityIOOutput::FireOutputInternal(&this->m_OnFail, pActivator, this, &value, 0.0);
    if ( (value.m_flags & 1) == 0 )
      return;
LABEL_6:
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    return;
  }
  CEntityIOOutput::FireOutputInternal(&this->m_OnPass, pActivator, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    goto LABEL_6;
}


// CFilterMultiple::GetDataDescMap  (line 90, @0x00000000021ee7f0, libserver.so)
// globals: CFilterMultiple::m_DataMap
datamap_t *__fastcall CFilterMultiple::GetDataDescMap(CFilterMultiple *const this)
{
  return &CFilterMultiple::m_DataMap;
}


// CFilterMultiple::AddDatadescMetadataKeys  (line 90, @0x00000000021fb420, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFilterMultiple::GetEntityClass(void)
void __fastcall CFilterMultiple::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFilterMultiple::GetEntityClass);
}


// CFilterMultiple::GetBaseMap  (line 90, @0x00000000021fb440, libserver.so)
// globals: CBaseFilter::m_DataMap
datamap_t *__cdecl CFilterMultiple::GetBaseMap()
{
  return &CBaseFilter::m_DataMap;
}


// DataMapInit<CFilterMultiple>  (line 90, @0x00000000021fb450, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CFilterMultiple"
// globals: `guard variable for'DataMapInit<CFilterMultiple>(CFilterMultiple *)::nameHolder, CBaseFilter::m_DataMap, CFilterMultiple::GetEntityClass(void), CFilterMultiple::m_DataMap, DataMapInit<CFilterMultiple>(CFilterMultiple *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFilterMultiple>(CFilterMultiple *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFilterMultiple>(CFilterMultiple *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFilterMultiple>(CFilterMultiple *)::nameHolder) != 0 )
  {
    DataMapInit<CFilterMultiple>(CFilterMultiple *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFilterMultiple>(CFilterMultiple *)::nameHolder.m_pszBase = "CFilterMultiple";
    DataMapInit<CFilterMultiple>(CFilterMultiple *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFilterMultiple>(CFilterMultiple *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFilterMultiple>(CFilterMultiple *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFilterMultiple>(CFilterMultiple *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFilterMultiple>(CFilterMultiple *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFilterMultiple>(CFilterMultiple *)::nameHolder,
      &_dso_handle);
  }
  CFilterMultiple::m_DataMap.dataNumFields = 4;
  CFilterMultiple::m_DataMap.baseMap = &CBaseFilter::m_DataMap;
  CFilterMultiple::m_DataMap.dataDesc = &DataMapInit<CFilterMultiple>(CFilterMultiple *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFilterMultiple::m_DataMap, CFilterMultiple::GetEntityClass);
  return &CFilterMultiple::m_DataMap;
}


// CFilterMultiple::CFilterMultiple  (line 109, @0x00000000021fb520, libserver.so)  // inlines: CBaseFilter, CEntityHandle, CEntityIOOutput, CHandle, CLogicalEntity, CServerOnlyEntity, CUtlSymbolLarge
// calls: CBaseEntity::CBaseEntity
// callers: CFilterMultiple::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CFilterMultiple::CFilterMultiple(CFilterMultiple *const this)
{
  CFilterMultiple *m_iFilterName; // rax

  CBaseEntity::CBaseEntity(this);
  this->m_OnPass._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnFail._vptr_CEntityIOOutput = off_3F7C190;
  this->_vptr_IHandleEntity = &off_40334B0;
  m_iFilterName = this->m_iFilterName;
  do
  {
    m_iFilterName->_vptr_IHandleEntity = 0;
    m_iFilterName = (m_iFilterName + 8);
  }
  while ( m_iFilterName != this->m_hFilter );
  do
  {
    LODWORD(m_iFilterName->_vptr_IHandleEntity) = -1;
    m_iFilterName = (m_iFilterName + 4);
  }
  while ( m_iFilterName != &this->m_nFilterCount );
  this->m_nFilterCount = 0;
}


// CFilterMultiple::Activate  (line 118, @0x00000000021ef4c0, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntryIndex, GetSerialNumber, Set, String, ToCStr, operator!=, operator=
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, __dynamic_cast, Warning
// strings: "filter_multi: Tried to add entity (%s) which is not a filter entity!\n"
// globals: `typeinfo for'CBaseFilter
void __fastcall CFilterMultiple::Activate(CFilterMultiple *const this, ActivateType_t activateType)
{
  CEventRegister **p_m_pTimerEvent; // r13
  CFilterMultiple *v4; // rbx
  CBaseEntity *EntityByName; // rax
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 m_nFilterCount; // rdx
  char *v9; // rcx
  int v10; // edx
  __int16 v11; // si
  string_t iszName; // [rsp+10h] [rbp-30h] BYREF

  p_m_pTimerEvent = &this->m_NetworkTransmitComponent.m_pTimerEvent;
  v4 = this;
  CBaseEntity::Activate(this, activateType);
  while ( this->m_nFilterCount <= 9 )
  {
    if ( v4->m_iFilterName[0].u.m_Id != 0 )
    {
      iszName.u.m_Id = v4->m_iFilterName[0].u.m_Id;
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
      if ( EntityByName == 0
        || (v6 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseFilter, 0)) == 0 )
      {
        if ( v4->m_iFilterName[0].u.m_Id != 0 )
          Warning(
            "filter_multi: Tried to add entity (%s) which is not a filter entity!\n",
            v4->m_iFilterName[0].u.m_pAsString);
        else
          Warning("filter_multi: Tried to add entity (%s) which is not a filter entity!\n", "");
        goto LABEL_2;
      }
      v7 = v6[1];
      m_nFilterCount = this->m_nFilterCount;
      v9 = &this->m_iFilterName[9] + 4 * m_nFilterCount;
      if ( v7 != 0 )
      {
        v10 = (*(v7 + 16) >> 15) - (*(v7 + 48) & 1);
        v11 = 0x7FFF;
        if ( *(v7 + 16) != -1 )
          v11 = *(v7 + 16) & 0x7FFF;
        *(v9 + 4) = v11 | *(v9 + 4) & 0x8000;
        *(v9 + 2) = (v10 << 15) | *(v9 + 2) & 0x7FFF;
      }
      else
      {
        this->m_hFilter[m_nFilterCount].m_Index = -1;
      }
      ++this->m_nFilterCount;
      v4 = (v4 + 8);
      if ( v4 == p_m_pTimerEvent )
        return;
    }
    else
    {
LABEL_2:
      v4 = (v4 + 8);
      if ( v4 == p_m_pTimerEvent )
        return;
    }
  }
}


// CFilterMultiple::AddFilter  (line 149, @0x00000000021fb5a0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: Warning
// callers: Script_CreateTriggerRadiusApproximate
// strings: "filter_multi: Tried to add more filters than MAX_FILTERS(%d)!\n"
void __fastcall CFilterMultiple::AddFilter(CFilterMultiple *const this, CBaseFilter *pFilter)
{
  __int64 m_nFilterCount; // rax
  char *v3; // rcx
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // si

  m_nFilterCount = this->m_nFilterCount;
  if ( m_nFilterCount > 9 )
  {
    Warning("filter_multi: Tried to add more filters than MAX_FILTERS(%d)!\n", 10);
  }
  else
  {
    v3 = &this->m_iFilterName[9] + 4 * m_nFilterCount;
    if ( pFilter != 0 && (m_pEntity = pFilter->m_pEntity) != 0 )
    {
      v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      *(v3 + 4) = v6 | *(v3 + 4) & 0x8000;
      *(v3 + 2) = (v5 << 15) | *(v3 + 2) & 0x7FFF;
      ++this->m_nFilterCount;
    }
    else
    {
      this->m_hFilter[m_nFilterCount].m_Index = -1;
      ++this->m_nFilterCount;
    }
  }
}


// CFilterMultiple::PassesFilterImpl  (line 167, @0x00000000021f2f60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, PassesFilter, operator CEntityInstance*, operator!=<CBaseEntity>
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CFilterMultiple::PassesFilterImpl(
        CFilterMultiple *const this,
        CBaseEntity *pCaller,
        CBaseEntity *pEntity)
{
  CHandle<CBaseEntity> *m_hFilter; // rbx
  int v6; // r12d
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *v9; // r15
  int v11; // r12d
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // r15

  m_hFilter = this->m_hFilter;
  if ( this->m_nFilterType != filter_t::FILTER_AND )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( m_hFilter->m_Index + 2 > 1 )
      {
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_hFilter->m_Index) >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[m_hFilter->m_Index & 0x1FF];
          if ( v13 != 0 && m_hFilter->m_Index == v13->m_EHandle.m_Index && v13->m_pInstance != 0 )
          {
            m_pInstance = v13->m_pInstance;
            if ( (LOBYTE(m_pInstance[16].m_pEntity) != 0) != (*(m_pInstance->_vptr_IHandleEntity + 207))(
                                                               m_pInstance,
                                                               pCaller,
                                                               pEntity) )
              break;
          }
        }
      }
      ++v11;
      ++m_hFilter;
      if ( v11 == 10 )
        return 0;
    }
    return 1;
  }
  else
  {
    v6 = 10;
    while ( 1 )
    {
      if ( m_hFilter->m_Index + 2 > 1 )
      {
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_hFilter->m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[m_hFilter->m_Index & 0x1FF];
          if ( v8 != 0 && m_hFilter->m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
          {
            v9 = v8->m_pInstance;
            if ( (LOBYTE(v9[16].m_pEntity) != 0) == (*(v9->_vptr_IHandleEntity + 207))(v9, pCaller, pEntity) )
              break;
          }
        }
      }
      ++m_hFilter;
      if ( --v6 == 0 )
        return 1;
    }
    return 0;
  }
}


// CFilterMultiple::PassesDamageFilterImpl  (line 207, @0x00000000021f2ce0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator!=<CBaseEntity>
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CFilterMultiple::PassesDamageFilterImpl(CFilterMultiple *const this, const CTakeDamageInfo *const info)
{
  CHandle<CBaseEntity> *m_hFilter; // rbx
  int j; // r12d
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  bool result; // al
  int i; // r12d
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx

  m_hFilter = this->m_hFilter;
  if ( this->m_nFilterType != filter_t::FILTER_AND )
  {
    for ( i = 0; i != 10; ++i )
    {
      while ( 1 )
      {
        if ( m_hFilter->m_Index + 2 > 1 )
        {
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_hFilter->m_Index) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[m_hFilter->m_Index & 0x1FF];
            if ( v10 != 0 && m_hFilter->m_Index == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
              break;
          }
        }
        ++i;
        ++m_hFilter;
        if ( i == 10 )
          return 0;
      }
      result = (*(v10->m_pInstance->_vptr_IHandleEntity + 88))(v10->m_pInstance, info);
      if ( result )
        return result;
      ++m_hFilter;
    }
    return 0;
  }
  else
  {
    for ( j = 10; j != 0; --j )
    {
      while ( 1 )
      {
        if ( m_hFilter->m_Index + 2 > 1 )
        {
          v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_hFilter->m_Index) >> 9) & 0x3F];
          if ( v5 != 0 )
          {
            v6 = &v5[m_hFilter->m_Index & 0x1FF];
            if ( v6 != 0 && m_hFilter->m_Index == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
              break;
          }
        }
        ++m_hFilter;
        if ( --j == 0 )
          return 1;
      }
      result = (*(v6->m_pInstance->_vptr_IHandleEntity + 88))(v6->m_pInstance, info);
      if ( !result )
        return result;
      ++m_hFilter;
    }
    return 1;
  }
}


// CFilterName::~CFilterName  (line 246, @0x00000000022109b0, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFilterName::~CFilterName(CFilterName *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CFilterName::~CFilterName  (line 246, @0x00000000022109d0, libserver.so)  // inlines: ~CBaseFilter, ~CFilterName, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFilterName::~CFilterName(CFilterName *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFilterName::GetEntityClass  (line 248, @0x000000000220e4b0, libserver.so)
CEntityClass *__cdecl CFilterName::GetEntityClass()
{
  return g_pEntityCFilterNameClass;
}


// CFilterName::Schema_DynamicBinding  (line 248, @0x000000000220e4c0, libserver.so)
// globals: CFilterName::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterName::Schema_DynamicBinding(const CFilterName *const this)
{
  return CFilterName::s_pSchemaBinding;
}


// CFilterName::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 248, @0x000000000220e4d0, libserver.so)
// globals: CFilterName::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterName::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFilterName::CEntityInstanceEntityClass *const this)
{
  return CFilterName::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFilterName::CEntityInstanceEntityClass::DestructInstance  (line 248, @0x000000000220e4e0, libserver.so)  // inlines: Destruct<CFilterName>
void __fastcall CFilterName::CEntityInstanceEntityClass::DestructInstance(
        CFilterName::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFilterName::CEntityInstanceEntityClass::FreeInstance  (line 248, @0x000000000220e500, libserver.so)
void __fastcall CFilterName::CEntityInstanceEntityClass::FreeInstance(
        CFilterName::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFilterName::CEntityInstanceEntityClass::CanAllocate  (line 248, @0x000000000220e520, libserver.so)
bool __fastcall CFilterName::CEntityInstanceEntityClass::CanAllocate(
        const CFilterName::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFilterName::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 248, @0x000000000220e530, libserver.so)
// globals: CFilterName::s_pSchemaBinding
const ISchemaBinding *__fastcall CFilterName::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFilterName::CEntityInstanceEntityClass *const this)
{
  return CFilterName::s_pSchemaBinding;
}


// CFilterName::CEntityInstanceEntityClass::AllocateInstance  (line 248, @0x000000000220fc20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFilterName::CEntityInstanceEntityClass::AllocateInstance(
        CFilterName::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 840);
  memset(v1, 0, 0x348u);
  return v1;
}


// CFilterName::CEntityInstanceEntityClass::ConstructInstance  (line 248, @0x0000000002210130, libserver.so)  // inlines: CBaseFilter, CEntityIOOutput, CFilterName, CLogicalEntity, CServerOnlyEntity, CUtlSymbolLarge, Construct<CFilterName>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CFilterName::CEntityInstanceEntityClass::ConstructInstance(
        CFilterName::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 104) = 0;
    *(p + 98) = off_3F7C190;
    *(p + 101) = off_3F7C190;
    *p = &off_4033BD0;
  }
  return p;
}


// CFilterName::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 248, @0x0000000002211ea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFilterName::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterName::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFilterName::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 248, @0x0000000002211ec0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFilterName::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterName::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFilterName::GetEntityClassInternal  (line 248, @0x0000000002216a40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseFilter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "filter_activator_name", "CFilterName"
// globals: `guard variable for'CFilterName::GetEntityClassInternal(void)::g_EntityCFilterNameClass, CFilterName::GetEntityClassInternal(void)::g_EntityCFilterNameClass, __dso_handle, CFilterName::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFilterName::GetEntityClassInfo(void)::g_EntityCFilterNameClassInfo, CFilterName::GetEntityClassInfo(void)::g_EntityCFilterNameClassInfo
CEntityClass *__cdecl CFilterName::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFilterName::GetEntityClassInternal(void)::g_EntityCFilterNameClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterName::GetEntityClassInternal(void)::g_EntityCFilterNameClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFilterName::GetEntityClassInternal(void)::g_EntityCFilterNameClass);
    CFilterName::GetEntityClassInternal(void)::g_EntityCFilterNameClass._vptr_CEntityClass = off_4033B50;
    __cxa_guard_release(&`guard variable for'CFilterName::GetEntityClassInternal(void)::g_EntityCFilterNameClass);
    __cxa_atexit(
      CFilterName::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFilterName::GetEntityClassInternal(void)::g_EntityCFilterNameClass,
      &_dso_handle);
  }
  if ( g_pEntityCFilterNameClass != 0 )
    return &CFilterName::GetEntityClassInternal(void)::g_EntityCFilterNameClass;
  if ( `guard variable for'CFilterName::GetEntityClassInfo(void)::g_EntityCFilterNameClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterName::GetEntityClassInfo(void)::g_EntityCFilterNameClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFilter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFilterName::GetEntityClassInfo(void)::g_EntityCFilterNameClassInfo,
      "CFilterName",
      "filter_activator_name",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFilterName::GetEntityClassInfo(void)::g_EntityCFilterNameClassInfo);
  }
  CFilterName::GetEntityClassInternal(void)::g_EntityCFilterNameClass.m_pClassInfo = &CFilterName::GetEntityClassInfo(void)::g_EntityCFilterNameClassInfo;
  CFilterName::GetEntityClassInternal(void)::g_EntityCFilterNameClass.m_pBaseClassInfo = CFilterName::GetEntityClassInfo(void)::g_EntityCFilterNameClassInfo.m_pBaseClassInfo;
  g_pEntityCFilterNameClass = &CFilterName::GetEntityClassInternal(void)::g_EntityCFilterNameClass;
  CFilterName::GetEntityClassInfo(void)::g_EntityCFilterNameClassInfo.m_pClass = &CFilterName::GetEntityClassInternal(void)::g_EntityCFilterNameClass;
  CFilterName::GetEntityClassInternal(void)::g_EntityCFilterNameClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFilterNameClass->m_pComponentOverrides = 0;
  return &CFilterName::GetEntityClassInternal(void)::g_EntityCFilterNameClass;
}


// CFilterName::PassesFilterImpl  (line 254, @0x0000000002211670, libserver.so)  // inlines: FStrEq, NameMatches, String, ToCStr, _V_strcmp
// calls: strcmp, CEntityIdentity::NameMatches
// strings: "!player"
bool __fastcall CFilterName::PassesFilterImpl(CFilterName *const this, CBaseEntity *pCaller, CBaseEntity *pEntity)
{
  const char *m_pAsString; // rbx
  int v4; // eax
  CBaseEntity *pEntitya; // [rsp+8h] [rbp-18h]

  if ( this->m_iFilterName.u.m_Id != 0 )
  {
    m_pAsString = this->m_iFilterName.u.m_pAsString;
    if ( m_pAsString == "!player" )
      return (*(pEntity->_vptr_IHandleEntity + 140))(pEntity);
    pEntitya = pEntity;
    v4 = strcmp(this->m_iFilterName.u.m_pAsString, "!player");
    pEntity = pEntitya;
    if ( v4 == 0 )
      return (*(pEntity->_vptr_IHandleEntity + 140))(pEntity);
  }
  else
  {
    m_pAsString = "";
  }
  return CEntityIdentity::NameMatches(pEntity->m_pEntity, m_pAsString);
}


// CFilterName::GetDataDescMap  (line 268, @0x00000000021ee800, libserver.so)
// globals: CFilterName::m_DataMap
datamap_t *__fastcall CFilterName::GetDataDescMap(CFilterName *const this)
{
  return &CFilterName::m_DataMap;
}


// CFilterName::AddDatadescMetadataKeys  (line 268, @0x00000000021fb640, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFilterName::GetEntityClass(void)
void __fastcall CFilterName::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFilterName::GetEntityClass);
}


// CFilterName::GetBaseMap  (line 268, @0x00000000021fb660, libserver.so)
// globals: CBaseFilter::m_DataMap
datamap_t *__cdecl CFilterName::GetBaseMap()
{
  return &CBaseFilter::m_DataMap;
}


// DataMapInit<CFilterName>  (line 268, @0x00000000021fb670, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CFilterName"
// globals: `guard variable for'DataMapInit<CFilterName>(CFilterName *)::nameHolder, CBaseFilter::m_DataMap, CFilterName::GetEntityClass(void), CFilterName::m_DataMap, DataMapInit<CFilterName>(CFilterName *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFilterName>(CFilterName *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFilterName>(CFilterName *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFilterName>(CFilterName *)::nameHolder) != 0 )
  {
    DataMapInit<CFilterName>(CFilterName *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFilterName>(CFilterName *)::nameHolder.m_pszBase = "CFilterName";
    DataMapInit<CFilterName>(CFilterName *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFilterName>(CFilterName *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFilterName>(CFilterName *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFilterName>(CFilterName *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFilterName>(CFilterName *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFilterName>(CFilterName *)::nameHolder,
      &_dso_handle);
  }
  CFilterName::m_DataMap.dataNumFields = 1;
  CFilterName::m_DataMap.baseMap = &CBaseFilter::m_DataMap;
  CFilterName::m_DataMap.dataDesc = &DataMapInit<CFilterName>(CFilterName *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFilterName::m_DataMap, CFilterName::GetEntityClass);
  return &CFilterName::m_DataMap;
}


// CFilterModel::~CFilterModel  (line 278, @0x0000000002210a00, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFilterModel::~CFilterModel(CFilterModel *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CFilterModel::~CFilterModel  (line 278, @0x0000000002210a20, libserver.so)  // inlines: ~CBaseFilter, ~CFilterModel, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFilterModel::~CFilterModel(CFilterModel *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFilterModel::GetEntityClass  (line 280, @0x000000000220e540, libserver.so)
CEntityClass *__cdecl CFilterModel::GetEntityClass()
{
  return g_pEntityCFilterModelClass;
}


// CFilterModel::Schema_DynamicBinding  (line 280, @0x000000000220e550, libserver.so)
// globals: CFilterModel::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterModel::Schema_DynamicBinding(const CFilterModel *const this)
{
  return CFilterModel::s_pSchemaBinding;
}


// CFilterModel::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 280, @0x000000000220e560, libserver.so)
// globals: CFilterModel::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterModel::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFilterModel::CEntityInstanceEntityClass *const this)
{
  return CFilterModel::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFilterModel::CEntityInstanceEntityClass::DestructInstance  (line 280, @0x000000000220e570, libserver.so)  // inlines: Destruct<CFilterModel>
void __fastcall CFilterModel::CEntityInstanceEntityClass::DestructInstance(
        CFilterModel::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFilterModel::CEntityInstanceEntityClass::FreeInstance  (line 280, @0x000000000220e590, libserver.so)
void __fastcall CFilterModel::CEntityInstanceEntityClass::FreeInstance(
        CFilterModel::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFilterModel::CEntityInstanceEntityClass::CanAllocate  (line 280, @0x000000000220e5b0, libserver.so)
bool __fastcall CFilterModel::CEntityInstanceEntityClass::CanAllocate(
        const CFilterModel::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFilterModel::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 280, @0x000000000220e5c0, libserver.so)
// globals: CFilterModel::s_pSchemaBinding
const ISchemaBinding *__fastcall CFilterModel::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFilterModel::CEntityInstanceEntityClass *const this)
{
  return CFilterModel::s_pSchemaBinding;
}


// CFilterModel::CEntityInstanceEntityClass::AllocateInstance  (line 280, @0x000000000220fc60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFilterModel::CEntityInstanceEntityClass::AllocateInstance(
        CFilterModel::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 840);
  memset(v1, 0, 0x348u);
  return v1;
}


// CFilterModel::CEntityInstanceEntityClass::ConstructInstance  (line 280, @0x0000000002210180, libserver.so)  // inlines: CBaseFilter, CEntityIOOutput, CFilterModel, CLogicalEntity, CServerOnlyEntity, CUtlSymbolLarge, Construct<CFilterModel>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CFilterModel::CEntityInstanceEntityClass::ConstructInstance(
        CFilterModel::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 104) = 0;
    *(p + 98) = off_3F7C190;
    *(p + 101) = off_3F7C190;
    *p = &off_40342F0;
  }
  return p;
}


// CFilterModel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 280, @0x0000000002211ef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFilterModel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterModel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFilterModel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 280, @0x0000000002211f10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFilterModel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterModel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFilterModel::GetEntityClassInternal  (line 280, @0x0000000002216b90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseFilter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "filter_activator_model", "CFilterModel"
// globals: `guard variable for'CFilterModel::GetEntityClassInternal(void)::g_EntityCFilterModelClass, CFilterModel::GetEntityClassInternal(void)::g_EntityCFilterModelClass, __dso_handle, CFilterModel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFilterModel::GetEntityClassInfo(void)::g_EntityCFilterModelClassInfo, CFilterModel::GetEntityClassInfo(void)::g_EntityCFilterModelClassInfo
CEntityClass *__cdecl CFilterModel::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFilterModel::GetEntityClassInternal(void)::g_EntityCFilterModelClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterModel::GetEntityClassInternal(void)::g_EntityCFilterModelClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFilterModel::GetEntityClassInternal(void)::g_EntityCFilterModelClass);
    CFilterModel::GetEntityClassInternal(void)::g_EntityCFilterModelClass._vptr_CEntityClass = off_4034270;
    __cxa_guard_release(&`guard variable for'CFilterModel::GetEntityClassInternal(void)::g_EntityCFilterModelClass);
    __cxa_atexit(
      CFilterModel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFilterModel::GetEntityClassInternal(void)::g_EntityCFilterModelClass,
      &_dso_handle);
  }
  if ( g_pEntityCFilterModelClass != 0 )
    return &CFilterModel::GetEntityClassInternal(void)::g_EntityCFilterModelClass;
  if ( `guard variable for'CFilterModel::GetEntityClassInfo(void)::g_EntityCFilterModelClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterModel::GetEntityClassInfo(void)::g_EntityCFilterModelClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFilter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFilterModel::GetEntityClassInfo(void)::g_EntityCFilterModelClassInfo,
      "CFilterModel",
      "filter_activator_model",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFilterModel::GetEntityClassInfo(void)::g_EntityCFilterModelClassInfo);
  }
  CFilterModel::GetEntityClassInternal(void)::g_EntityCFilterModelClass.m_pClassInfo = &CFilterModel::GetEntityClassInfo(void)::g_EntityCFilterModelClassInfo;
  CFilterModel::GetEntityClassInternal(void)::g_EntityCFilterModelClass.m_pBaseClassInfo = CFilterModel::GetEntityClassInfo(void)::g_EntityCFilterModelClassInfo.m_pBaseClassInfo;
  g_pEntityCFilterModelClass = &CFilterModel::GetEntityClassInternal(void)::g_EntityCFilterModelClass;
  CFilterModel::GetEntityClassInfo(void)::g_EntityCFilterModelClassInfo.m_pClass = &CFilterModel::GetEntityClassInternal(void)::g_EntityCFilterModelClass;
  CFilterModel::GetEntityClassInternal(void)::g_EntityCFilterModelClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFilterModelClass->m_pComponentOverrides = 0;
  return &CFilterModel::GetEntityClassInternal(void)::g_EntityCFilterModelClass;
}


// CFilterModel::PassesFilterImpl  (line 286, @0x0000000002211010, libserver.so)  // inlines: FStrEq, String, ToCStr, _V_strcmp
// calls: CBaseEntity::GetModelName, strcmp
bool __fastcall CFilterModel::PassesFilterImpl(CFilterModel *const this, CBaseEntity *pCaller, CBaseEntity *pEntity)
{
  const char *v4; // rsi
  const char *m_pAsString; // rdi
  const char *v7; // [rsp+0h] [rbp-20h] BYREF

  CBaseEntity::GetModelName(&v7, pEntity);
  v4 = v7;
  m_pAsString = this->m_iFilterModel.u.m_pAsString;
  if ( v7 == 0 )
    v4 = "";
  if ( m_pAsString == 0 )
    m_pAsString = "";
  return v4 == m_pAsString || strcmp(m_pAsString, v4) == 0;
}


// CFilterModel::GetDataDescMap  (line 292, @0x00000000021ee810, libserver.so)
// globals: CFilterModel::m_DataMap
datamap_t *__fastcall CFilterModel::GetDataDescMap(CFilterModel *const this)
{
  return &CFilterModel::m_DataMap;
}


// CFilterModel::AddDatadescMetadataKeys  (line 292, @0x00000000021fb740, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFilterModel::GetEntityClass(void)
void __fastcall CFilterModel::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFilterModel::GetEntityClass);
}


// CFilterModel::GetBaseMap  (line 292, @0x00000000021fb760, libserver.so)
// globals: CBaseFilter::m_DataMap
datamap_t *__cdecl CFilterModel::GetBaseMap()
{
  return &CBaseFilter::m_DataMap;
}


// DataMapInit<CFilterModel>  (line 292, @0x00000000021fb770, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CFilterModel"
// globals: `guard variable for'DataMapInit<CFilterModel>(CFilterModel *)::nameHolder, CBaseFilter::m_DataMap, CFilterModel::GetEntityClass(void), CFilterModel::m_DataMap, DataMapInit<CFilterModel>(CFilterModel *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFilterModel>(CFilterModel *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFilterModel>(CFilterModel *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFilterModel>(CFilterModel *)::nameHolder) != 0 )
  {
    DataMapInit<CFilterModel>(CFilterModel *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFilterModel>(CFilterModel *)::nameHolder.m_pszBase = "CFilterModel";
    DataMapInit<CFilterModel>(CFilterModel *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFilterModel>(CFilterModel *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFilterModel>(CFilterModel *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFilterModel>(CFilterModel *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFilterModel>(CFilterModel *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFilterModel>(CFilterModel *)::nameHolder,
      &_dso_handle);
  }
  CFilterModel::m_DataMap.dataNumFields = 1;
  CFilterModel::m_DataMap.baseMap = &CBaseFilter::m_DataMap;
  CFilterModel::m_DataMap.dataDesc = &DataMapInit<CFilterModel>(CFilterModel *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFilterModel::m_DataMap, CFilterModel::GetEntityClass);
  return &CFilterModel::m_DataMap;
}


// CFilterContext::~CFilterContext  (line 302, @0x0000000002210a50, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFilterContext::~CFilterContext(CFilterContext *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CFilterContext::~CFilterContext  (line 302, @0x0000000002210a70, libserver.so)  // inlines: ~CBaseFilter, ~CFilterContext, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFilterContext::~CFilterContext(CFilterContext *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFilterContext::GetEntityClass  (line 304, @0x000000000220e5d0, libserver.so)
CEntityClass *__cdecl CFilterContext::GetEntityClass()
{
  return g_pEntityCFilterContextClass;
}


// CFilterContext::Schema_DynamicBinding  (line 304, @0x000000000220e5e0, libserver.so)
// globals: CFilterContext::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterContext::Schema_DynamicBinding(const CFilterContext *const this)
{
  return CFilterContext::s_pSchemaBinding;
}


// CFilterContext::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 304, @0x000000000220e5f0, libserver.so)
// globals: CFilterContext::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterContext::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFilterContext::CEntityInstanceEntityClass *const this)
{
  return CFilterContext::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFilterContext::CEntityInstanceEntityClass::DestructInstance  (line 304, @0x000000000220e600, libserver.so)  // inlines: Destruct<CFilterContext>
void __fastcall CFilterContext::CEntityInstanceEntityClass::DestructInstance(
        CFilterContext::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFilterContext::CEntityInstanceEntityClass::FreeInstance  (line 304, @0x000000000220e620, libserver.so)
void __fastcall CFilterContext::CEntityInstanceEntityClass::FreeInstance(
        CFilterContext::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFilterContext::CEntityInstanceEntityClass::CanAllocate  (line 304, @0x000000000220e640, libserver.so)
bool __fastcall CFilterContext::CEntityInstanceEntityClass::CanAllocate(
        const CFilterContext::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFilterContext::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 304, @0x000000000220e650, libserver.so)
// globals: CFilterContext::s_pSchemaBinding
const ISchemaBinding *__fastcall CFilterContext::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFilterContext::CEntityInstanceEntityClass *const this)
{
  return CFilterContext::s_pSchemaBinding;
}


// CFilterContext::CEntityInstanceEntityClass::AllocateInstance  (line 304, @0x000000000220fca0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFilterContext::CEntityInstanceEntityClass::AllocateInstance(
        CFilterContext::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 840);
  memset(v1, 0, 0x348u);
  return v1;
}


// CFilterContext::CEntityInstanceEntityClass::ConstructInstance  (line 304, @0x00000000022101d0, libserver.so)  // inlines: CBaseFilter, CEntityIOOutput, CFilterContext, CLogicalEntity, CServerOnlyEntity, CUtlSymbolLarge, Construct<CFilterContext>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CFilterContext::CEntityInstanceEntityClass::ConstructInstance(
        CFilterContext::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 104) = 0;
    *(p + 98) = off_3F7C190;
    *(p + 101) = off_3F7C190;
    *p = &off_4034A10;
  }
  return p;
}


// CFilterContext::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 304, @0x0000000002211f40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFilterContext::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterContext::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFilterContext::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 304, @0x0000000002211f60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFilterContext::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterContext::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFilterContext::GetEntityClassInternal  (line 304, @0x0000000002216ce0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseFilter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "filter_activator_context", "CFilterContext"
// globals: `guard variable for'CFilterContext::GetEntityClassInternal(void)::g_EntityCFilterContextClass, CFilterContext::GetEntityClassInternal(void)::g_EntityCFilterContextClass, __dso_handle, CFilterContext::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFilterContext::GetEntityClassInfo(void)::g_EntityCFilterContextClassInfo, CFilterContext::GetEntityClassInfo(void)::g_EntityCFilterContextClassInfo
CEntityClass *__cdecl CFilterContext::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFilterContext::GetEntityClassInternal(void)::g_EntityCFilterContextClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterContext::GetEntityClassInternal(void)::g_EntityCFilterContextClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFilterContext::GetEntityClassInternal(void)::g_EntityCFilterContextClass);
    CFilterContext::GetEntityClassInternal(void)::g_EntityCFilterContextClass._vptr_CEntityClass = off_4034990;
    __cxa_guard_release(&`guard variable for'CFilterContext::GetEntityClassInternal(void)::g_EntityCFilterContextClass);
    __cxa_atexit(
      CFilterContext::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFilterContext::GetEntityClassInternal(void)::g_EntityCFilterContextClass,
      &_dso_handle);
  }
  if ( g_pEntityCFilterContextClass != 0 )
    return &CFilterContext::GetEntityClassInternal(void)::g_EntityCFilterContextClass;
  if ( `guard variable for'CFilterContext::GetEntityClassInfo(void)::g_EntityCFilterContextClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterContext::GetEntityClassInfo(void)::g_EntityCFilterContextClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFilter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFilterContext::GetEntityClassInfo(void)::g_EntityCFilterContextClassInfo,
      "CFilterContext",
      "filter_activator_context",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFilterContext::GetEntityClassInfo(void)::g_EntityCFilterContextClassInfo);
  }
  CFilterContext::GetEntityClassInternal(void)::g_EntityCFilterContextClass.m_pClassInfo = &CFilterContext::GetEntityClassInfo(void)::g_EntityCFilterContextClassInfo;
  CFilterContext::GetEntityClassInternal(void)::g_EntityCFilterContextClass.m_pBaseClassInfo = CFilterContext::GetEntityClassInfo(void)::g_EntityCFilterContextClassInfo.m_pBaseClassInfo;
  g_pEntityCFilterContextClass = &CFilterContext::GetEntityClassInternal(void)::g_EntityCFilterContextClass;
  CFilterContext::GetEntityClassInfo(void)::g_EntityCFilterContextClassInfo.m_pClass = &CFilterContext::GetEntityClassInternal(void)::g_EntityCFilterContextClass;
  CFilterContext::GetEntityClassInternal(void)::g_EntityCFilterContextClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFilterContextClass->m_pComponentOverrides = 0;
  return &CFilterContext::GetEntityClassInternal(void)::g_EntityCFilterContextClass;
}


// CFilterContext::PassesFilterImpl  (line 310, @0x0000000002211070, libserver.so)  // inlines: String, ToCStr, atoi
// calls: CBaseEntity::FindContextByName, CBaseEntity::GetContextValue, strtol
bool __fastcall CFilterContext::PassesFilterImpl(
        CFilterContext *const this,
        CBaseEntity *pCaller,
        CBaseEntity *pEntity)
{
  const char *m_pAsString; // rsi
  int ContextByName; // eax
  bool v6; // dl
  const char *ContextValue; // rax

  m_pAsString = "";
  if ( this->m_iFilterContext.u.m_Id != 0 )
    m_pAsString = this->m_iFilterContext.u.m_pAsString;
  ContextByName = CBaseEntity::FindContextByName(pEntity, m_pAsString);
  v6 = 0;
  if ( ContextByName != -1 )
  {
    ContextValue = CBaseEntity::GetContextValue(pEntity, ContextByName);
    return strtol(ContextValue, 0, 10) > 0;
  }
  return v6;
}


// CFilterContext::GetDataDescMap  (line 317, @0x00000000021ee820, libserver.so)
// globals: CFilterContext::m_DataMap
datamap_t *__fastcall CFilterContext::GetDataDescMap(CFilterContext *const this)
{
  return &CFilterContext::m_DataMap;
}


// CFilterContext::AddDatadescMetadataKeys  (line 317, @0x00000000021fb840, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFilterContext::GetEntityClass(void)
void __fastcall CFilterContext::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFilterContext::GetEntityClass);
}


// CFilterContext::GetBaseMap  (line 317, @0x00000000021fb860, libserver.so)
// globals: CBaseFilter::m_DataMap
datamap_t *__cdecl CFilterContext::GetBaseMap()
{
  return &CBaseFilter::m_DataMap;
}


// DataMapInit<CFilterContext>  (line 317, @0x00000000021fb870, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CFilterContext"
// globals: `guard variable for'DataMapInit<CFilterContext>(CFilterContext *)::nameHolder, CBaseFilter::m_DataMap, CFilterContext::GetEntityClass(void), CFilterContext::m_DataMap, DataMapInit<CFilterContext>(CFilterContext *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFilterContext>(CFilterContext *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFilterContext>(CFilterContext *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFilterContext>(CFilterContext *)::nameHolder) != 0 )
  {
    DataMapInit<CFilterContext>(CFilterContext *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFilterContext>(CFilterContext *)::nameHolder.m_pszBase = "CFilterContext";
    DataMapInit<CFilterContext>(CFilterContext *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFilterContext>(CFilterContext *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFilterContext>(CFilterContext *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFilterContext>(CFilterContext *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFilterContext>(CFilterContext *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFilterContext>(CFilterContext *)::nameHolder,
      &_dso_handle);
  }
  CFilterContext::m_DataMap.dataNumFields = 1;
  CFilterContext::m_DataMap.baseMap = &CBaseFilter::m_DataMap;
  CFilterContext::m_DataMap.dataDesc = &DataMapInit<CFilterContext>(CFilterContext *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFilterContext::m_DataMap, CFilterContext::GetEntityClass);
  return &CFilterContext::m_DataMap;
}


// CFilterClass::~CFilterClass  (line 327, @0x0000000002210aa0, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFilterClass::~CFilterClass(CFilterClass *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CFilterClass::~CFilterClass  (line 327, @0x0000000002210ac0, libserver.so)  // inlines: ~CBaseFilter, ~CFilterClass, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFilterClass::~CFilterClass(CFilterClass *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFilterClass::GetEntityClass  (line 329, @0x000000000220e660, libserver.so)
CEntityClass *__cdecl CFilterClass::GetEntityClass()
{
  return g_pEntityCFilterClassClass;
}


// CFilterClass::Schema_DynamicBinding  (line 329, @0x000000000220e670, libserver.so)
// globals: CFilterClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterClass::Schema_DynamicBinding(const CFilterClass *const this)
{
  return CFilterClass::s_pSchemaBinding;
}


// CFilterClass::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 329, @0x000000000220e680, libserver.so)
// globals: CFilterClass::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterClass::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFilterClass::CEntityInstanceEntityClass *const this)
{
  return CFilterClass::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFilterClass::CEntityInstanceEntityClass::DestructInstance  (line 329, @0x000000000220e690, libserver.so)  // inlines: Destruct<CFilterClass>
void __fastcall CFilterClass::CEntityInstanceEntityClass::DestructInstance(
        CFilterClass::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFilterClass::CEntityInstanceEntityClass::FreeInstance  (line 329, @0x000000000220e6b0, libserver.so)
void __fastcall CFilterClass::CEntityInstanceEntityClass::FreeInstance(
        CFilterClass::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFilterClass::CEntityInstanceEntityClass::CanAllocate  (line 329, @0x000000000220e6d0, libserver.so)
bool __fastcall CFilterClass::CEntityInstanceEntityClass::CanAllocate(
        const CFilterClass::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFilterClass::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 329, @0x000000000220e6e0, libserver.so)
// globals: CFilterClass::s_pSchemaBinding
const ISchemaBinding *__fastcall CFilterClass::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFilterClass::CEntityInstanceEntityClass *const this)
{
  return CFilterClass::s_pSchemaBinding;
}


// CFilterClass::CEntityInstanceEntityClass::AllocateInstance  (line 329, @0x000000000220fce0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFilterClass::CEntityInstanceEntityClass::AllocateInstance(
        CFilterClass::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 840);
  memset(v1, 0, 0x348u);
  return v1;
}


// CFilterClass::CEntityInstanceEntityClass::ConstructInstance  (line 329, @0x0000000002210220, libserver.so)  // inlines: CBaseFilter, CEntityIOOutput, CFilterClass, CLogicalEntity, CServerOnlyEntity, CUtlSymbolLarge, Construct<CFilterClass>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CFilterClass::CEntityInstanceEntityClass::ConstructInstance(
        CFilterClass::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 104) = 0;
    *(p + 98) = off_3F7C190;
    *(p + 101) = off_3F7C190;
    *p = &off_4035130;
  }
  return p;
}


// CFilterClass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 329, @0x0000000002211f90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFilterClass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterClass::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFilterClass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 329, @0x0000000002211fb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFilterClass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterClass::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFilterClass::GetEntityClassInternal  (line 329, @0x0000000002216e30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseFilter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "filter_activator_class", "CFilterClass"
// globals: `guard variable for'CFilterClass::GetEntityClassInternal(void)::g_EntityCFilterClassClass, CFilterClass::GetEntityClassInternal(void)::g_EntityCFilterClassClass, __dso_handle, CFilterClass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFilterClass::GetEntityClassInfo(void)::g_EntityCFilterClassClassInfo, CFilterClass::GetEntityClassInfo(void)::g_EntityCFilterClassClassInfo
CEntityClass *__cdecl CFilterClass::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFilterClass::GetEntityClassInternal(void)::g_EntityCFilterClassClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterClass::GetEntityClassInternal(void)::g_EntityCFilterClassClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFilterClass::GetEntityClassInternal(void)::g_EntityCFilterClassClass);
    CFilterClass::GetEntityClassInternal(void)::g_EntityCFilterClassClass._vptr_CEntityClass = off_40350B0;
    __cxa_guard_release(&`guard variable for'CFilterClass::GetEntityClassInternal(void)::g_EntityCFilterClassClass);
    __cxa_atexit(
      CFilterClass::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFilterClass::GetEntityClassInternal(void)::g_EntityCFilterClassClass,
      &_dso_handle);
  }
  if ( g_pEntityCFilterClassClass != 0 )
    return &CFilterClass::GetEntityClassInternal(void)::g_EntityCFilterClassClass;
  if ( `guard variable for'CFilterClass::GetEntityClassInfo(void)::g_EntityCFilterClassClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterClass::GetEntityClassInfo(void)::g_EntityCFilterClassClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFilter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFilterClass::GetEntityClassInfo(void)::g_EntityCFilterClassClassInfo,
      "CFilterClass",
      "filter_activator_class",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFilterClass::GetEntityClassInfo(void)::g_EntityCFilterClassClassInfo);
  }
  CFilterClass::GetEntityClassInternal(void)::g_EntityCFilterClassClass.m_pClassInfo = &CFilterClass::GetEntityClassInfo(void)::g_EntityCFilterClassClassInfo;
  CFilterClass::GetEntityClassInternal(void)::g_EntityCFilterClassClass.m_pBaseClassInfo = CFilterClass::GetEntityClassInfo(void)::g_EntityCFilterClassClassInfo.m_pBaseClassInfo;
  g_pEntityCFilterClassClass = &CFilterClass::GetEntityClassInternal(void)::g_EntityCFilterClassClass;
  CFilterClass::GetEntityClassInfo(void)::g_EntityCFilterClassClassInfo.m_pClass = &CFilterClass::GetEntityClassInternal(void)::g_EntityCFilterClassClass;
  CFilterClass::GetEntityClassInternal(void)::g_EntityCFilterClassClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFilterClassClass->m_pComponentOverrides = 0;
  return &CFilterClass::GetEntityClassInternal(void)::g_EntityCFilterClassClass;
}


// CFilterClass::PassesFilterImpl  (line 335, @0x0000000002210e90, libserver.so)  // inlines: ClassMatches, String, ToCStr
// calls: CEntityIdentity::ClassMatches
bool __fastcall CFilterClass::PassesFilterImpl(CFilterClass *const this, CBaseEntity *pCaller, CBaseEntity *pEntity)
{
  const char *m_pAsString; // rsi

  m_pAsString = "";
  if ( this->m_iFilterClass.u.m_Id != 0 )
    m_pAsString = this->m_iFilterClass.u.m_pAsString;
  return CEntityIdentity::ClassMatches(pEntity->m_pEntity, m_pAsString);
}


// CFilterClass::GetDataDescMap  (line 341, @0x00000000021ee830, libserver.so)
// globals: CFilterClass::m_DataMap
datamap_t *__fastcall CFilterClass::GetDataDescMap(CFilterClass *const this)
{
  return &CFilterClass::m_DataMap;
}


// CFilterClass::AddDatadescMetadataKeys  (line 341, @0x00000000021fb940, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFilterClass::GetEntityClass(void)
void __fastcall CFilterClass::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFilterClass::GetEntityClass);
}


// CFilterClass::GetBaseMap  (line 341, @0x00000000021fb960, libserver.so)
// globals: CBaseFilter::m_DataMap
datamap_t *__cdecl CFilterClass::GetBaseMap()
{
  return &CBaseFilter::m_DataMap;
}


// DataMapInit<CFilterClass>  (line 341, @0x00000000021fb970, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CFilterClass"
// globals: `guard variable for'DataMapInit<CFilterClass>(CFilterClass *)::nameHolder, CBaseFilter::m_DataMap, CFilterClass::GetEntityClass(void), CFilterClass::m_DataMap, DataMapInit<CFilterClass>(CFilterClass *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFilterClass>(CFilterClass *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFilterClass>(CFilterClass *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFilterClass>(CFilterClass *)::nameHolder) != 0 )
  {
    DataMapInit<CFilterClass>(CFilterClass *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFilterClass>(CFilterClass *)::nameHolder.m_pszBase = "CFilterClass";
    DataMapInit<CFilterClass>(CFilterClass *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFilterClass>(CFilterClass *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFilterClass>(CFilterClass *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFilterClass>(CFilterClass *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFilterClass>(CFilterClass *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFilterClass>(CFilterClass *)::nameHolder,
      &_dso_handle);
  }
  CFilterClass::m_DataMap.dataNumFields = 1;
  CFilterClass::m_DataMap.baseMap = &CBaseFilter::m_DataMap;
  CFilterClass::m_DataMap.dataDesc = &DataMapInit<CFilterClass>(CFilterClass *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFilterClass::m_DataMap, CFilterClass::GetEntityClass);
  return &CFilterClass::m_DataMap;
}


// FilterTeam::~FilterTeam  (line 352, @0x0000000002210af0, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall FilterTeam::~FilterTeam(FilterTeam *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// FilterTeam::~FilterTeam  (line 352, @0x0000000002210b10, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity, ~FilterTeam
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall FilterTeam::~FilterTeam(FilterTeam *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// FilterTeam::GetEntityClass  (line 354, @0x000000000220e6f0, libserver.so)
CEntityClass *__cdecl FilterTeam::GetEntityClass()
{
  return g_pEntityFilterTeamClass;
}


// FilterTeam::Schema_DynamicBinding  (line 354, @0x000000000220e700, libserver.so)
// globals: FilterTeam::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall FilterTeam::Schema_DynamicBinding(const FilterTeam *const this)
{
  return FilterTeam::s_pSchemaBinding;
}


// FilterTeam::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 354, @0x000000000220e710, libserver.so)
// globals: FilterTeam::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall FilterTeam::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const FilterTeam::CEntityInstanceEntityClass *const this)
{
  return FilterTeam::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// FilterTeam::CEntityInstanceEntityClass::DestructInstance  (line 354, @0x000000000220e720, libserver.so)  // inlines: Destruct<FilterTeam>
void __fastcall FilterTeam::CEntityInstanceEntityClass::DestructInstance(
        FilterTeam::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// FilterTeam::CEntityInstanceEntityClass::FreeInstance  (line 354, @0x000000000220e740, libserver.so)
void __fastcall FilterTeam::CEntityInstanceEntityClass::FreeInstance(
        FilterTeam::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// FilterTeam::CEntityInstanceEntityClass::CanAllocate  (line 354, @0x000000000220e760, libserver.so)
bool __fastcall FilterTeam::CEntityInstanceEntityClass::CanAllocate(
        const FilterTeam::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// FilterTeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 354, @0x000000000220e770, libserver.so)
// globals: FilterTeam::s_pSchemaBinding
const ISchemaBinding *__fastcall FilterTeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        FilterTeam::CEntityInstanceEntityClass *const this)
{
  return FilterTeam::s_pSchemaBinding;
}


// FilterTeam::CEntityInstanceEntityClass::AllocateInstance  (line 354, @0x000000000220fd20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall FilterTeam::CEntityInstanceEntityClass::AllocateInstance(
        FilterTeam::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 840);
  memset(v1, 0, 0x348u);
  return v1;
}


// FilterTeam::CEntityInstanceEntityClass::ConstructInstance  (line 354, @0x0000000002210270, libserver.so)  // inlines: CBaseFilter, CEntityIOOutput, CLogicalEntity, CServerOnlyEntity, Construct<FilterTeam>, FilterTeam
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall FilterTeam::CEntityInstanceEntityClass::ConstructInstance(
        FilterTeam::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = off_3F7C190;
    *(p + 101) = off_3F7C190;
    *p = &off_4035850;
  }
  return p;
}


// FilterTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 354, @0x0000000002211fe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall FilterTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        FilterTeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// FilterTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 354, @0x0000000002212000, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall FilterTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        FilterTeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// FilterTeam::GetEntityClassInternal  (line 354, @0x0000000002216f80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseFilter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "filter_activator_team"
// globals: `guard variable for'FilterTeam::GetEntityClassInternal(void)::g_EntityFilterTeamClass, FilterTeam::GetEntityClassInternal(void)::g_EntityFilterTeamClass, __dso_handle, FilterTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'FilterTeam::GetEntityClassInfo(void)::g_EntityFilterTeamClassInfo, FilterTeam::GetEntityClassInfo(void)::g_EntityFilterTeamClassInfo
CEntityClass *__cdecl FilterTeam::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'FilterTeam::GetEntityClassInternal(void)::g_EntityFilterTeamClass == 0
    && __cxa_guard_acquire(&`guard variable for'FilterTeam::GetEntityClassInternal(void)::g_EntityFilterTeamClass) != 0 )
  {
    CEntityClass::CEntityClass(&FilterTeam::GetEntityClassInternal(void)::g_EntityFilterTeamClass);
    FilterTeam::GetEntityClassInternal(void)::g_EntityFilterTeamClass._vptr_CEntityClass = off_40357D0;
    __cxa_guard_release(&`guard variable for'FilterTeam::GetEntityClassInternal(void)::g_EntityFilterTeamClass);
    __cxa_atexit(
      FilterTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &FilterTeam::GetEntityClassInternal(void)::g_EntityFilterTeamClass,
      &_dso_handle);
  }
  if ( g_pEntityFilterTeamClass != 0 )
    return &FilterTeam::GetEntityClassInternal(void)::g_EntityFilterTeamClass;
  if ( `guard variable for'FilterTeam::GetEntityClassInfo(void)::g_EntityFilterTeamClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'FilterTeam::GetEntityClassInfo(void)::g_EntityFilterTeamClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFilter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &FilterTeam::GetEntityClassInfo(void)::g_EntityFilterTeamClassInfo,
      "FilterTeam",
      "filter_activator_team",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'FilterTeam::GetEntityClassInfo(void)::g_EntityFilterTeamClassInfo);
  }
  FilterTeam::GetEntityClassInternal(void)::g_EntityFilterTeamClass.m_pClassInfo = &FilterTeam::GetEntityClassInfo(void)::g_EntityFilterTeamClassInfo;
  FilterTeam::GetEntityClassInternal(void)::g_EntityFilterTeamClass.m_pBaseClassInfo = FilterTeam::GetEntityClassInfo(void)::g_EntityFilterTeamClassInfo.m_pBaseClassInfo;
  g_pEntityFilterTeamClass = &FilterTeam::GetEntityClassInternal(void)::g_EntityFilterTeamClass;
  FilterTeam::GetEntityClassInfo(void)::g_EntityFilterTeamClassInfo.m_pClass = &FilterTeam::GetEntityClassInternal(void)::g_EntityFilterTeamClass;
  FilterTeam::GetEntityClassInternal(void)::g_EntityFilterTeamClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityFilterTeamClass->m_pComponentOverrides = 0;
  return &FilterTeam::GetEntityClassInternal(void)::g_EntityFilterTeamClass;
}


// FilterTeam::PassesFilterImpl  (line 360, @0x000000000220e780, libserver.so)  // inlines: GetTeamNumber
bool __fastcall FilterTeam::PassesFilterImpl(FilterTeam *const this, CBaseEntity *pCaller, CBaseEntity *pEntity)
{
  return pEntity != 0 && this->m_iFilterTeam == pEntity->m_iTeamNum.m_Value;
}


// FilterTeam::GetDataDescMap  (line 366, @0x00000000021ee840, libserver.so)
// globals: FilterTeam::m_DataMap
datamap_t *__fastcall FilterTeam::GetDataDescMap(FilterTeam *const this)
{
  return &FilterTeam::m_DataMap;
}


// FilterTeam::AddDatadescMetadataKeys  (line 366, @0x00000000021fba40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: FilterTeam::GetEntityClass(void)
void __fastcall FilterTeam::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, FilterTeam::GetEntityClass);
}


// FilterTeam::GetBaseMap  (line 366, @0x00000000021fba60, libserver.so)
// globals: CBaseFilter::m_DataMap
datamap_t *__cdecl FilterTeam::GetBaseMap()
{
  return &CBaseFilter::m_DataMap;
}


// DataMapInit<FilterTeam>  (line 366, @0x00000000021fba70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// globals: `guard variable for'DataMapInit<FilterTeam>(FilterTeam *)::nameHolder, CBaseFilter::m_DataMap, FilterTeam::GetEntityClass(void), FilterTeam::m_DataMap, DataMapInit<FilterTeam>(FilterTeam *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<FilterTeam>(FilterTeam *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<FilterTeam>(FilterTeam *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<FilterTeam>(FilterTeam *)::nameHolder) != 0 )
  {
    DataMapInit<FilterTeam>(FilterTeam *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<FilterTeam>(FilterTeam *)::nameHolder.m_pszBase = "FilterTeam";
    DataMapInit<FilterTeam>(FilterTeam *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<FilterTeam>(FilterTeam *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<FilterTeam>(FilterTeam *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<FilterTeam>(FilterTeam *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<FilterTeam>(FilterTeam *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<FilterTeam>(FilterTeam *)::nameHolder,
      &_dso_handle);
  }
  FilterTeam::m_DataMap.dataNumFields = 1;
  FilterTeam::m_DataMap.baseMap = &CBaseFilter::m_DataMap;
  FilterTeam::m_DataMap.dataDesc = &DataMapInit<FilterTeam>(FilterTeam *)::dataDesc[1];
  AddDatadescMetadataKeys(&FilterTeam::m_DataMap, FilterTeam::GetEntityClass);
  return &FilterTeam::m_DataMap;
}


// CFilterMassGreater::~CFilterMassGreater  (line 408, @0x0000000002210b40, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFilterMassGreater::~CFilterMassGreater(CFilterMassGreater *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CFilterMassGreater::~CFilterMassGreater  (line 408, @0x0000000002210b60, libserver.so)  // inlines: ~CBaseFilter, ~CFilterMassGreater, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFilterMassGreater::~CFilterMassGreater(CFilterMassGreater *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFilterMassGreater::GetEntityClass  (line 410, @0x000000000220e7b0, libserver.so)
CEntityClass *__cdecl CFilterMassGreater::GetEntityClass()
{
  return g_pEntityCFilterMassGreaterClass;
}


// CFilterMassGreater::Schema_DynamicBinding  (line 410, @0x000000000220e7c0, libserver.so)
// globals: CFilterMassGreater::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterMassGreater::Schema_DynamicBinding(
        const CFilterMassGreater *const this)
{
  return CFilterMassGreater::s_pSchemaBinding;
}


// CFilterMassGreater::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 410, @0x000000000220e7d0, libserver.so)
// globals: CFilterMassGreater::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterMassGreater::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFilterMassGreater::CEntityInstanceEntityClass *const this)
{
  return CFilterMassGreater::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFilterMassGreater::CEntityInstanceEntityClass::DestructInstance  (line 410, @0x000000000220e7e0, libserver.so)  // inlines: Destruct<CFilterMassGreater>
void __fastcall CFilterMassGreater::CEntityInstanceEntityClass::DestructInstance(
        CFilterMassGreater::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFilterMassGreater::CEntityInstanceEntityClass::FreeInstance  (line 410, @0x000000000220e800, libserver.so)
void __fastcall CFilterMassGreater::CEntityInstanceEntityClass::FreeInstance(
        CFilterMassGreater::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFilterMassGreater::CEntityInstanceEntityClass::CanAllocate  (line 410, @0x000000000220e820, libserver.so)
bool __fastcall CFilterMassGreater::CEntityInstanceEntityClass::CanAllocate(
        const CFilterMassGreater::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFilterMassGreater::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 410, @0x000000000220e830, libserver.so)
// globals: CFilterMassGreater::s_pSchemaBinding
const ISchemaBinding *__fastcall CFilterMassGreater::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFilterMassGreater::CEntityInstanceEntityClass *const this)
{
  return CFilterMassGreater::s_pSchemaBinding;
}


// CFilterMassGreater::CEntityInstanceEntityClass::AllocateInstance  (line 410, @0x000000000220fd60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFilterMassGreater::CEntityInstanceEntityClass::AllocateInstance(
        CFilterMassGreater::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 840);
  memset(v1, 0, 0x348u);
  return v1;
}


// CFilterMassGreater::CEntityInstanceEntityClass::ConstructInstance  (line 410, @0x00000000022102c0, libserver.so)  // inlines: CBaseFilter, CEntityIOOutput, CFilterMassGreater, CLogicalEntity, CServerOnlyEntity, Construct<CFilterMassGreater>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CFilterMassGreater::CEntityInstanceEntityClass::ConstructInstance(
        CFilterMassGreater::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = off_3F7C190;
    *(p + 101) = off_3F7C190;
    *p = &off_4035F70;
  }
  return p;
}


// CFilterMassGreater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 410, @0x0000000002212030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFilterMassGreater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterMassGreater::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFilterMassGreater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 410, @0x0000000002212050, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFilterMassGreater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterMassGreater::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFilterMassGreater::GetEntityClassInternal  (line 410, @0x00000000022170d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseFilter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "filter_activator_mass_greater", "CFilterMassGreater"
// globals: `guard variable for'CFilterMassGreater::GetEntityClassInternal(void)::g_EntityCFilterMassGreaterClass, CFilterMassGreater::GetEntityClassInternal(void)::g_EntityCFilterMassGreaterClass, __dso_handle, CFilterMassGreater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFilterMassGreater::GetEntityClassInfo(void)::g_EntityCFilterMassGreaterClassInfo, CFilterMassGreater::GetEntityClassInfo(void)::g_EntityCFilterMassGreaterClassInfo
CEntityClass *__cdecl CFilterMassGreater::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFilterMassGreater::GetEntityClassInternal(void)::g_EntityCFilterMassGreaterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterMassGreater::GetEntityClassInternal(void)::g_EntityCFilterMassGreaterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFilterMassGreater::GetEntityClassInternal(void)::g_EntityCFilterMassGreaterClass);
    CFilterMassGreater::GetEntityClassInternal(void)::g_EntityCFilterMassGreaterClass._vptr_CEntityClass = off_4035EF0;
    __cxa_guard_release(&`guard variable for'CFilterMassGreater::GetEntityClassInternal(void)::g_EntityCFilterMassGreaterClass);
    __cxa_atexit(
      CFilterMassGreater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFilterMassGreater::GetEntityClassInternal(void)::g_EntityCFilterMassGreaterClass,
      &_dso_handle);
  }
  if ( g_pEntityCFilterMassGreaterClass != 0 )
    return &CFilterMassGreater::GetEntityClassInternal(void)::g_EntityCFilterMassGreaterClass;
  if ( `guard variable for'CFilterMassGreater::GetEntityClassInfo(void)::g_EntityCFilterMassGreaterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterMassGreater::GetEntityClassInfo(void)::g_EntityCFilterMassGreaterClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFilter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFilterMassGreater::GetEntityClassInfo(void)::g_EntityCFilterMassGreaterClassInfo,
      "CFilterMassGreater",
      "filter_activator_mass_greater",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFilterMassGreater::GetEntityClassInfo(void)::g_EntityCFilterMassGreaterClassInfo);
  }
  CFilterMassGreater::GetEntityClassInternal(void)::g_EntityCFilterMassGreaterClass.m_pClassInfo = &CFilterMassGreater::GetEntityClassInfo(void)::g_EntityCFilterMassGreaterClassInfo;
  CFilterMassGreater::GetEntityClassInternal(void)::g_EntityCFilterMassGreaterClass.m_pBaseClassInfo = CFilterMassGreater::GetEntityClassInfo(void)::g_EntityCFilterMassGreaterClassInfo.m_pBaseClassInfo;
  g_pEntityCFilterMassGreaterClass = &CFilterMassGreater::GetEntityClassInternal(void)::g_EntityCFilterMassGreaterClass;
  CFilterMassGreater::GetEntityClassInfo(void)::g_EntityCFilterMassGreaterClassInfo.m_pClass = &CFilterMassGreater::GetEntityClassInternal(void)::g_EntityCFilterMassGreaterClass;
  CFilterMassGreater::GetEntityClassInternal(void)::g_EntityCFilterMassGreaterClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFilterMassGreaterClass->m_pComponentOverrides = 0;
  return &CFilterMassGreater::GetEntityClassInternal(void)::g_EntityCFilterMassGreaterClass;
}


// CFilterMassGreater::PassesFilterImpl  (line 416, @0x0000000002210fb0, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject
bool __fastcall CFilterMassGreater::PassesFilterImpl(
        CFilterMassGreater *const this,
        CBaseEntity *pCaller,
        CBaseEntity *pEntity)
{
  IPhysicsObject *Object; // rax
  bool v6; // dl
  IPhysicsObject *v7; // rax

  Object = CBaseEntity::VPhysicsGetObject(pEntity);
  v6 = 0;
  if ( Object != 0 )
  {
    v7 = CBaseEntity::VPhysicsGetObject(pEntity);
    return (*(*v7 + 208LL))(v7) > this->m_fFilterMass;
  }
  return v6;
}


// CFilterMassGreater::GetDataDescMap  (line 425, @0x00000000021ee850, libserver.so)
// globals: CFilterMassGreater::m_DataMap
datamap_t *__fastcall CFilterMassGreater::GetDataDescMap(CFilterMassGreater *const this)
{
  return &CFilterMassGreater::m_DataMap;
}


// CFilterMassGreater::AddDatadescMetadataKeys  (line 425, @0x00000000021fbb40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFilterMassGreater::GetEntityClass(void)
void __fastcall CFilterMassGreater::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFilterMassGreater::GetEntityClass);
}


// CFilterMassGreater::GetBaseMap  (line 425, @0x00000000021fbb60, libserver.so)
// globals: CBaseFilter::m_DataMap
datamap_t *__cdecl CFilterMassGreater::GetBaseMap()
{
  return &CBaseFilter::m_DataMap;
}


// DataMapInit<CFilterMassGreater>  (line 425, @0x00000000021fbb70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CFilterMassGreater"
// globals: `guard variable for'DataMapInit<CFilterMassGreater>(CFilterMassGreater *)::nameHolder, CBaseFilter::m_DataMap, CFilterMassGreater::GetEntityClass(void), CFilterMassGreater::m_DataMap, DataMapInit<CFilterMassGreater>(CFilterMassGreater *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFilterMassGreater>(CFilterMassGreater *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFilterMassGreater>(CFilterMassGreater *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFilterMassGreater>(CFilterMassGreater *)::nameHolder) != 0 )
  {
    DataMapInit<CFilterMassGreater>(CFilterMassGreater *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFilterMassGreater>(CFilterMassGreater *)::nameHolder.m_pszBase = "CFilterMassGreater";
    DataMapInit<CFilterMassGreater>(CFilterMassGreater *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFilterMassGreater>(CFilterMassGreater *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFilterMassGreater>(CFilterMassGreater *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFilterMassGreater>(CFilterMassGreater *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFilterMassGreater>(CFilterMassGreater *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFilterMassGreater>(CFilterMassGreater *)::nameHolder,
      &_dso_handle);
  }
  CFilterMassGreater::m_DataMap.dataNumFields = 1;
  CFilterMassGreater::m_DataMap.baseMap = &CBaseFilter::m_DataMap;
  CFilterMassGreater::m_DataMap.dataDesc = &DataMapInit<CFilterMassGreater>(CFilterMassGreater *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFilterMassGreater::m_DataMap, CFilterMassGreater::GetEntityClass);
  return &CFilterMassGreater::m_DataMap;
}


// FilterDamageType::~FilterDamageType  (line 436, @0x0000000002210b90, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall FilterDamageType::~FilterDamageType(FilterDamageType *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// FilterDamageType::~FilterDamageType  (line 436, @0x0000000002210bb0, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity, ~FilterDamageType
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall FilterDamageType::~FilterDamageType(FilterDamageType *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// FilterDamageType::GetEntityClass  (line 438, @0x000000000220e840, libserver.so)
CEntityClass *__cdecl FilterDamageType::GetEntityClass()
{
  return g_pEntityFilterDamageTypeClass;
}


// FilterDamageType::Schema_DynamicBinding  (line 438, @0x000000000220e850, libserver.so)
// globals: FilterDamageType::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall FilterDamageType::Schema_DynamicBinding(const FilterDamageType *const this)
{
  return FilterDamageType::s_pSchemaBinding;
}


// FilterDamageType::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 438, @0x000000000220e860, libserver.so)
// globals: FilterDamageType::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall FilterDamageType::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const FilterDamageType::CEntityInstanceEntityClass *const this)
{
  return FilterDamageType::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// FilterDamageType::CEntityInstanceEntityClass::DestructInstance  (line 438, @0x000000000220e870, libserver.so)  // inlines: Destruct<FilterDamageType>
void __fastcall FilterDamageType::CEntityInstanceEntityClass::DestructInstance(
        FilterDamageType::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// FilterDamageType::CEntityInstanceEntityClass::FreeInstance  (line 438, @0x000000000220e890, libserver.so)
void __fastcall FilterDamageType::CEntityInstanceEntityClass::FreeInstance(
        FilterDamageType::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// FilterDamageType::CEntityInstanceEntityClass::CanAllocate  (line 438, @0x000000000220e8b0, libserver.so)
bool __fastcall FilterDamageType::CEntityInstanceEntityClass::CanAllocate(
        const FilterDamageType::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// FilterDamageType::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 438, @0x000000000220e8c0, libserver.so)
// globals: FilterDamageType::s_pSchemaBinding
const ISchemaBinding *__fastcall FilterDamageType::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        FilterDamageType::CEntityInstanceEntityClass *const this)
{
  return FilterDamageType::s_pSchemaBinding;
}


// FilterDamageType::CEntityInstanceEntityClass::AllocateInstance  (line 438, @0x000000000220fda0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall FilterDamageType::CEntityInstanceEntityClass::AllocateInstance(
        FilterDamageType::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 840);
  memset(v1, 0, 0x348u);
  return v1;
}


// FilterDamageType::CEntityInstanceEntityClass::ConstructInstance  (line 438, @0x0000000002210310, libserver.so)  // inlines: CBaseFilter, CEntityIOOutput, CLogicalEntity, CServerOnlyEntity, Construct<FilterDamageType>, FilterDamageType
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall FilterDamageType::CEntityInstanceEntityClass::ConstructInstance(
        FilterDamageType::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = off_3F7C190;
    *(p + 101) = off_3F7C190;
    *p = &off_4036690;
  }
  return p;
}


// FilterDamageType::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 438, @0x0000000002212080, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall FilterDamageType::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        FilterDamageType::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// FilterDamageType::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 438, @0x00000000022120a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall FilterDamageType::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        FilterDamageType::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// FilterDamageType::GetEntityClassInternal  (line 438, @0x0000000002217220, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseFilter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "filter_damage_type", "FilterDamageType"
// globals: `guard variable for'FilterDamageType::GetEntityClassInternal(void)::g_EntityFilterDamageTypeClass, FilterDamageType::GetEntityClassInternal(void)::g_EntityFilterDamageTypeClass, __dso_handle, FilterDamageType::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'FilterDamageType::GetEntityClassInfo(void)::g_EntityFilterDamageTypeClassInfo, FilterDamageType::GetEntityClassInfo(void)::g_EntityFilterDamageTypeClassInfo
CEntityClass *__cdecl FilterDamageType::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'FilterDamageType::GetEntityClassInternal(void)::g_EntityFilterDamageTypeClass == 0
    && __cxa_guard_acquire(&`guard variable for'FilterDamageType::GetEntityClassInternal(void)::g_EntityFilterDamageTypeClass) != 0 )
  {
    CEntityClass::CEntityClass(&FilterDamageType::GetEntityClassInternal(void)::g_EntityFilterDamageTypeClass);
    FilterDamageType::GetEntityClassInternal(void)::g_EntityFilterDamageTypeClass._vptr_CEntityClass = off_4036610;
    __cxa_guard_release(&`guard variable for'FilterDamageType::GetEntityClassInternal(void)::g_EntityFilterDamageTypeClass);
    __cxa_atexit(
      FilterDamageType::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &FilterDamageType::GetEntityClassInternal(void)::g_EntityFilterDamageTypeClass,
      &_dso_handle);
  }
  if ( g_pEntityFilterDamageTypeClass != 0 )
    return &FilterDamageType::GetEntityClassInternal(void)::g_EntityFilterDamageTypeClass;
  if ( `guard variable for'FilterDamageType::GetEntityClassInfo(void)::g_EntityFilterDamageTypeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'FilterDamageType::GetEntityClassInfo(void)::g_EntityFilterDamageTypeClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFilter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &FilterDamageType::GetEntityClassInfo(void)::g_EntityFilterDamageTypeClassInfo,
      "FilterDamageType",
      "filter_damage_type",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'FilterDamageType::GetEntityClassInfo(void)::g_EntityFilterDamageTypeClassInfo);
  }
  FilterDamageType::GetEntityClassInternal(void)::g_EntityFilterDamageTypeClass.m_pClassInfo = &FilterDamageType::GetEntityClassInfo(void)::g_EntityFilterDamageTypeClassInfo;
  FilterDamageType::GetEntityClassInternal(void)::g_EntityFilterDamageTypeClass.m_pBaseClassInfo = FilterDamageType::GetEntityClassInfo(void)::g_EntityFilterDamageTypeClassInfo.m_pBaseClassInfo;
  g_pEntityFilterDamageTypeClass = &FilterDamageType::GetEntityClassInternal(void)::g_EntityFilterDamageTypeClass;
  FilterDamageType::GetEntityClassInfo(void)::g_EntityFilterDamageTypeClassInfo.m_pClass = &FilterDamageType::GetEntityClassInternal(void)::g_EntityFilterDamageTypeClass;
  FilterDamageType::GetEntityClassInternal(void)::g_EntityFilterDamageTypeClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityFilterDamageTypeClass->m_pComponentOverrides = 0;
  return &FilterDamageType::GetEntityClassInternal(void)::g_EntityFilterDamageTypeClass;
}


// FilterDamageType::PassesFilterImpl  (line 443, @0x000000000220e8d0, libserver.so)
bool __fastcall FilterDamageType::PassesFilterImpl(
        FilterDamageType *const this,
        CBaseEntity *pCaller,
        CBaseEntity *pEntity)
{
  return 1;
}


// FilterDamageType::PassesDamageFilterImpl  (line 449, @0x000000000220e8e0, libserver.so)
bool __fastcall FilterDamageType::PassesDamageFilterImpl(
        FilterDamageType *const this,
        const CTakeDamageInfo *const info)
{
  return (info->m_bitsDamageType & 0xEFFFFFFF) == this->m_iDamageType;
}


// FilterDamageType::GetDataDescMap  (line 466, @0x00000000021ee860, libserver.so)
// globals: FilterDamageType::m_DataMap
datamap_t *__fastcall FilterDamageType::GetDataDescMap(FilterDamageType *const this)
{
  return &FilterDamageType::m_DataMap;
}


// FilterDamageType::AddDatadescMetadataKeys  (line 466, @0x00000000021fbc40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: FilterDamageType::GetEntityClass(void)
void __fastcall FilterDamageType::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, FilterDamageType::GetEntityClass);
}


// FilterDamageType::GetBaseMap  (line 466, @0x00000000021fbc60, libserver.so)
// globals: CBaseFilter::m_DataMap
datamap_t *__cdecl FilterDamageType::GetBaseMap()
{
  return &CBaseFilter::m_DataMap;
}


// DataMapInit<FilterDamageType>  (line 466, @0x00000000021fbc70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "FilterDamageType"
// globals: `guard variable for'DataMapInit<FilterDamageType>(FilterDamageType *)::nameHolder, CBaseFilter::m_DataMap, FilterDamageType::GetEntityClass(void), FilterDamageType::m_DataMap, DataMapInit<FilterDamageType>(FilterDamageType *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<FilterDamageType>(FilterDamageType *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<FilterDamageType>(FilterDamageType *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<FilterDamageType>(FilterDamageType *)::nameHolder) != 0 )
  {
    DataMapInit<FilterDamageType>(FilterDamageType *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<FilterDamageType>(FilterDamageType *)::nameHolder.m_pszBase = "FilterDamageType";
    DataMapInit<FilterDamageType>(FilterDamageType *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<FilterDamageType>(FilterDamageType *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<FilterDamageType>(FilterDamageType *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<FilterDamageType>(FilterDamageType *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<FilterDamageType>(FilterDamageType *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<FilterDamageType>(FilterDamageType *)::nameHolder,
      &_dso_handle);
  }
  FilterDamageType::m_DataMap.dataNumFields = 1;
  FilterDamageType::m_DataMap.baseMap = &CBaseFilter::m_DataMap;
  FilterDamageType::m_DataMap.dataDesc = &DataMapInit<FilterDamageType>(FilterDamageType *)::dataDesc[1];
  AddDatadescMetadataKeys(&FilterDamageType::m_DataMap, FilterDamageType::GetEntityClass);
  return &FilterDamageType::m_DataMap;
}


// FilterHealth::~FilterHealth  (line 522, @0x0000000002210be0, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall FilterHealth::~FilterHealth(FilterHealth *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// FilterHealth::~FilterHealth  (line 522, @0x0000000002210c00, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity, ~FilterHealth
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall FilterHealth::~FilterHealth(FilterHealth *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// FilterHealth::GetEntityClass  (line 524, @0x000000000220e900, libserver.so)
CEntityClass *__cdecl FilterHealth::GetEntityClass()
{
  return g_pEntityFilterHealthClass;
}


// FilterHealth::Schema_DynamicBinding  (line 524, @0x000000000220e910, libserver.so)
// globals: FilterHealth::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall FilterHealth::Schema_DynamicBinding(const FilterHealth *const this)
{
  return FilterHealth::s_pSchemaBinding;
}


// FilterHealth::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 524, @0x000000000220e920, libserver.so)
// globals: FilterHealth::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall FilterHealth::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const FilterHealth::CEntityInstanceEntityClass *const this)
{
  return FilterHealth::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// FilterHealth::CEntityInstanceEntityClass::DestructInstance  (line 524, @0x000000000220e930, libserver.so)  // inlines: Destruct<FilterHealth>
void __fastcall FilterHealth::CEntityInstanceEntityClass::DestructInstance(
        FilterHealth::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// FilterHealth::CEntityInstanceEntityClass::FreeInstance  (line 524, @0x000000000220e950, libserver.so)
void __fastcall FilterHealth::CEntityInstanceEntityClass::FreeInstance(
        FilterHealth::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// FilterHealth::CEntityInstanceEntityClass::CanAllocate  (line 524, @0x000000000220e970, libserver.so)
bool __fastcall FilterHealth::CEntityInstanceEntityClass::CanAllocate(
        const FilterHealth::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// FilterHealth::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 524, @0x000000000220e980, libserver.so)
// globals: FilterHealth::s_pSchemaBinding
const ISchemaBinding *__fastcall FilterHealth::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        FilterHealth::CEntityInstanceEntityClass *const this)
{
  return FilterHealth::s_pSchemaBinding;
}


// FilterHealth::CEntityInstanceEntityClass::AllocateInstance  (line 524, @0x000000000220fde0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall FilterHealth::CEntityInstanceEntityClass::AllocateInstance(
        FilterHealth::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 848);
  memset(v1, 0, 0x350u);
  return v1;
}


// FilterHealth::CEntityInstanceEntityClass::ConstructInstance  (line 524, @0x0000000002210360, libserver.so)  // inlines: CBaseFilter, CEntityIOOutput, CLogicalEntity, CServerOnlyEntity, Construct<FilterHealth>, FilterHealth
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall FilterHealth::CEntityInstanceEntityClass::ConstructInstance(
        FilterHealth::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = off_3F7C190;
    *(p + 101) = off_3F7C190;
    *p = &off_4036DB0;
  }
  return p;
}


// FilterHealth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 524, @0x00000000022120d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall FilterHealth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        FilterHealth::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// FilterHealth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 524, @0x00000000022120f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall FilterHealth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        FilterHealth::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// FilterHealth::GetEntityClassInternal  (line 524, @0x0000000002217370, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseFilter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "filter_health", "FilterHealth"
// globals: `guard variable for'FilterHealth::GetEntityClassInternal(void)::g_EntityFilterHealthClass, FilterHealth::GetEntityClassInternal(void)::g_EntityFilterHealthClass, __dso_handle, FilterHealth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'FilterHealth::GetEntityClassInfo(void)::g_EntityFilterHealthClassInfo, FilterHealth::GetEntityClassInfo(void)::g_EntityFilterHealthClassInfo
CEntityClass *__cdecl FilterHealth::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'FilterHealth::GetEntityClassInternal(void)::g_EntityFilterHealthClass == 0
    && __cxa_guard_acquire(&`guard variable for'FilterHealth::GetEntityClassInternal(void)::g_EntityFilterHealthClass) != 0 )
  {
    CEntityClass::CEntityClass(&FilterHealth::GetEntityClassInternal(void)::g_EntityFilterHealthClass);
    FilterHealth::GetEntityClassInternal(void)::g_EntityFilterHealthClass._vptr_CEntityClass = off_4036D30;
    __cxa_guard_release(&`guard variable for'FilterHealth::GetEntityClassInternal(void)::g_EntityFilterHealthClass);
    __cxa_atexit(
      FilterHealth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &FilterHealth::GetEntityClassInternal(void)::g_EntityFilterHealthClass,
      &_dso_handle);
  }
  if ( g_pEntityFilterHealthClass != 0 )
    return &FilterHealth::GetEntityClassInternal(void)::g_EntityFilterHealthClass;
  if ( `guard variable for'FilterHealth::GetEntityClassInfo(void)::g_EntityFilterHealthClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'FilterHealth::GetEntityClassInfo(void)::g_EntityFilterHealthClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFilter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &FilterHealth::GetEntityClassInfo(void)::g_EntityFilterHealthClassInfo,
      "FilterHealth",
      "filter_health",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'FilterHealth::GetEntityClassInfo(void)::g_EntityFilterHealthClassInfo);
  }
  FilterHealth::GetEntityClassInternal(void)::g_EntityFilterHealthClass.m_pClassInfo = &FilterHealth::GetEntityClassInfo(void)::g_EntityFilterHealthClassInfo;
  FilterHealth::GetEntityClassInternal(void)::g_EntityFilterHealthClass.m_pBaseClassInfo = FilterHealth::GetEntityClassInfo(void)::g_EntityFilterHealthClassInfo.m_pBaseClassInfo;
  g_pEntityFilterHealthClass = &FilterHealth::GetEntityClassInternal(void)::g_EntityFilterHealthClass;
  FilterHealth::GetEntityClassInfo(void)::g_EntityFilterHealthClassInfo.m_pClass = &FilterHealth::GetEntityClassInternal(void)::g_EntityFilterHealthClass;
  FilterHealth::GetEntityClassInternal(void)::g_EntityFilterHealthClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityFilterHealthClass->m_pComponentOverrides = 0;
  return &FilterHealth::GetEntityClassInternal(void)::g_EntityFilterHealthClass;
}


// FilterHealth::PassesFilterImpl  (line 529, @0x000000000220e990, libserver.so)
bool __fastcall FilterHealth::PassesFilterImpl(FilterHealth *const this, CBaseEntity *pCaller, CBaseEntity *pEntity)
{
  return 0;
}


// FilterHealth::PassesDamageFilterImpl  (line 545, @0x000000000220e9a0, libserver.so)
bool __fastcall FilterHealth::PassesDamageFilterImpl(FilterHealth *const this, const CTakeDamageInfo *const info)
{
  return 0;
}


// FilterHealth::GetDataDescMap  (line 567, @0x00000000021ee870, libserver.so)
// globals: FilterHealth::m_DataMap
datamap_t *__fastcall FilterHealth::GetDataDescMap(FilterHealth *const this)
{
  return &FilterHealth::m_DataMap;
}


// FilterHealth::AddDatadescMetadataKeys  (line 567, @0x00000000021fbd40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: FilterHealth::GetEntityClass(void)
void __fastcall FilterHealth::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, FilterHealth::GetEntityClass);
}


// FilterHealth::GetBaseMap  (line 567, @0x00000000021fbd60, libserver.so)
// globals: CBaseFilter::m_DataMap
datamap_t *__cdecl FilterHealth::GetBaseMap()
{
  return &CBaseFilter::m_DataMap;
}


// DataMapInit<FilterHealth>  (line 567, @0x00000000021fbd70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "FilterHealth"
// globals: `guard variable for'DataMapInit<FilterHealth>(FilterHealth *)::nameHolder, CBaseFilter::m_DataMap, FilterHealth::GetEntityClass(void), FilterHealth::m_DataMap, DataMapInit<FilterHealth>(FilterHealth *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<FilterHealth>(FilterHealth *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<FilterHealth>(FilterHealth *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<FilterHealth>(FilterHealth *)::nameHolder) != 0 )
  {
    DataMapInit<FilterHealth>(FilterHealth *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<FilterHealth>(FilterHealth *)::nameHolder.m_pszBase = "FilterHealth";
    DataMapInit<FilterHealth>(FilterHealth *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<FilterHealth>(FilterHealth *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<FilterHealth>(FilterHealth *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<FilterHealth>(FilterHealth *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<FilterHealth>(FilterHealth *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<FilterHealth>(FilterHealth *)::nameHolder,
      &_dso_handle);
  }
  FilterHealth::m_DataMap.dataNumFields = 3;
  FilterHealth::m_DataMap.baseMap = &CBaseFilter::m_DataMap;
  FilterHealth::m_DataMap.dataDesc = &DataMapInit<FilterHealth>(FilterHealth *)::dataDesc[1];
  AddDatadescMetadataKeys(&FilterHealth::m_DataMap, FilterHealth::GetEntityClass);
  return &FilterHealth::m_DataMap;
}


// CFilterEnemy::~CFilterEnemy  (line 582, @0x0000000002210c30, libserver.so)  // inlines: ~CBaseFilter, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFilterEnemy::~CFilterEnemy(CFilterEnemy *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CFilterEnemy::~CFilterEnemy  (line 582, @0x0000000002210c50, libserver.so)  // inlines: ~CBaseFilter, ~CFilterEnemy, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFilterEnemy::~CFilterEnemy(CFilterEnemy *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFilterEnemy::GetEntityClass  (line 584, @0x000000000220e9b0, libserver.so)
CEntityClass *__cdecl CFilterEnemy::GetEntityClass()
{
  return g_pEntityCFilterEnemyClass;
}


// CFilterEnemy::Schema_DynamicBinding  (line 584, @0x000000000220e9c0, libserver.so)
// globals: CFilterEnemy::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterEnemy::Schema_DynamicBinding(const CFilterEnemy *const this)
{
  return CFilterEnemy::s_pSchemaBinding;
}


// CFilterEnemy::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 584, @0x000000000220e9d0, libserver.so)
// globals: CFilterEnemy::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFilterEnemy::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFilterEnemy::CEntityInstanceEntityClass *const this)
{
  return CFilterEnemy::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFilterEnemy::CEntityInstanceEntityClass::DestructInstance  (line 584, @0x000000000220e9e0, libserver.so)  // inlines: Destruct<CFilterEnemy>
void __fastcall CFilterEnemy::CEntityInstanceEntityClass::DestructInstance(
        CFilterEnemy::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFilterEnemy::CEntityInstanceEntityClass::FreeInstance  (line 584, @0x000000000220ea00, libserver.so)
void __fastcall CFilterEnemy::CEntityInstanceEntityClass::FreeInstance(
        CFilterEnemy::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFilterEnemy::CEntityInstanceEntityClass::CanAllocate  (line 584, @0x000000000220ea20, libserver.so)
bool __fastcall CFilterEnemy::CEntityInstanceEntityClass::CanAllocate(
        const CFilterEnemy::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFilterEnemy::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 584, @0x000000000220ea30, libserver.so)
// globals: CFilterEnemy::s_pSchemaBinding
const ISchemaBinding *__fastcall CFilterEnemy::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFilterEnemy::CEntityInstanceEntityClass *const this)
{
  return CFilterEnemy::s_pSchemaBinding;
}


// CFilterEnemy::CEntityInstanceEntityClass::AllocateInstance  (line 584, @0x000000000220fe20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFilterEnemy::CEntityInstanceEntityClass::AllocateInstance(
        CFilterEnemy::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 864);
  memset(v1, 0, 0x360u);
  return v1;
}


// CFilterEnemy::CEntityInstanceEntityClass::ConstructInstance  (line 584, @0x00000000022103b0, libserver.so)  // inlines: CBaseFilter, CEntityIOOutput, CFilterEnemy, CLogicalEntity, CServerOnlyEntity, CUtlSymbolLarge, Construct<CFilterEnemy>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CFilterEnemy::CEntityInstanceEntityClass::ConstructInstance(
        CFilterEnemy::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 104) = 0;
    *(p + 98) = off_3F7C190;
    *(p + 101) = off_3F7C190;
    *p = &off_40374D0;
    *(p + 107) = 0;
  }
  return p;
}


// CFilterEnemy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 584, @0x0000000002212120, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFilterEnemy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterEnemy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFilterEnemy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 584, @0x0000000002212140, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFilterEnemy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFilterEnemy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFilterEnemy::GetEntityClassInternal  (line 584, @0x00000000022174c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseFilter::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "filter_enemy", "CFilterEnemy"
// globals: `guard variable for'CFilterEnemy::GetEntityClassInternal(void)::g_EntityCFilterEnemyClass, CFilterEnemy::GetEntityClassInternal(void)::g_EntityCFilterEnemyClass, __dso_handle, CFilterEnemy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFilterEnemy::GetEntityClassInfo(void)::g_EntityCFilterEnemyClassInfo, CFilterEnemy::GetEntityClassInfo(void)::g_EntityCFilterEnemyClassInfo
CEntityClass *__cdecl CFilterEnemy::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFilterEnemy::GetEntityClassInternal(void)::g_EntityCFilterEnemyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterEnemy::GetEntityClassInternal(void)::g_EntityCFilterEnemyClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFilterEnemy::GetEntityClassInternal(void)::g_EntityCFilterEnemyClass);
    CFilterEnemy::GetEntityClassInternal(void)::g_EntityCFilterEnemyClass._vptr_CEntityClass = off_4037450;
    __cxa_guard_release(&`guard variable for'CFilterEnemy::GetEntityClassInternal(void)::g_EntityCFilterEnemyClass);
    __cxa_atexit(
      CFilterEnemy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFilterEnemy::GetEntityClassInternal(void)::g_EntityCFilterEnemyClass,
      &_dso_handle);
  }
  if ( g_pEntityCFilterEnemyClass != 0 )
    return &CFilterEnemy::GetEntityClassInternal(void)::g_EntityCFilterEnemyClass;
  if ( `guard variable for'CFilterEnemy::GetEntityClassInfo(void)::g_EntityCFilterEnemyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFilterEnemy::GetEntityClassInfo(void)::g_EntityCFilterEnemyClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFilter::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFilterEnemy::GetEntityClassInfo(void)::g_EntityCFilterEnemyClassInfo,
      "CFilterEnemy",
      "filter_enemy",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFilterEnemy::GetEntityClassInfo(void)::g_EntityCFilterEnemyClassInfo);
  }
  CFilterEnemy::GetEntityClassInternal(void)::g_EntityCFilterEnemyClass.m_pClassInfo = &CFilterEnemy::GetEntityClassInfo(void)::g_EntityCFilterEnemyClassInfo;
  CFilterEnemy::GetEntityClassInternal(void)::g_EntityCFilterEnemyClass.m_pBaseClassInfo = CFilterEnemy::GetEntityClassInfo(void)::g_EntityCFilterEnemyClassInfo.m_pBaseClassInfo;
  g_pEntityCFilterEnemyClass = &CFilterEnemy::GetEntityClassInternal(void)::g_EntityCFilterEnemyClass;
  CFilterEnemy::GetEntityClassInfo(void)::g_EntityCFilterEnemyClassInfo.m_pClass = &CFilterEnemy::GetEntityClassInternal(void)::g_EntityCFilterEnemyClass;
  CFilterEnemy::GetEntityClassInternal(void)::g_EntityCFilterEnemyClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFilterEnemyClass->m_pComponentOverrides = 0;
  return &CFilterEnemy::GetEntityClassInternal(void)::g_EntityCFilterEnemyClass;
}


// CFilterEnemy::PassesFilterImpl  (line 617, @0x00000000021fc060, libserver.so)
// calls: CFilterEnemy::PassesNameFilter, CFilterEnemy::PassesProximityFilter
bool __fastcall CFilterEnemy::PassesFilterImpl(CFilterEnemy *const this, CBaseEntity *pCaller, CBaseEntity *pEntity)
{
  if ( pCaller == 0 || pEntity == 0 )
    return 0;
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    if ( pEntity == (*(pCaller->_vptr_IHandleEntity + 105))(pCaller) || !CFilterEnemy::PassesNameFilter(this, pEntity) )
      return 1;
  }
  else if ( !CFilterEnemy::PassesNameFilter(this, pEntity) )
  {
    return 1;
  }
  return CFilterEnemy::PassesProximityFilter(this, pCaller, pEntity);
}


// CFilterEnemy::PassesDamageFilterImpl  (line 653, @0x00000000021ee880, libserver.so)
bool __fastcall CFilterEnemy::PassesDamageFilterImpl(CFilterEnemy *const this, const CTakeDamageInfo *const info)
{
  return 0;
}


// CFilterEnemy::PassesNameFilter  (line 681, @0x00000000021fbe40, libserver.so)  // inlines: ClassMatches, String, ToCStr, operator=, operator==
// calls: CEntityIdentity::ClassMatches, CEntitySystem::FindPooledString
// callers: CFilterEnemy::PassesFilterImpl
// strings: "!player"
bool __fastcall CFilterEnemy::PassesNameFilter(CFilterEnemy *const this, CBaseEntity *pEnemy)
{
  bool result; // al
  UtlSymLargeId_t m_Id; // rdx
  UtlSymLargeId_t v5; // rax
  CEntityIdentity *m_pEntity; // rdi
  const char *v8; // rsi
  UtlSymLargeId_t v9; // [rsp+0h] [rbp-20h]

  result = 1;
  m_Id = this->m_iszEnemyName.u.m_Id;
  if ( m_Id != 0 )
  {
    v5 = this->m_iszPlayerName.u.m_Id;
    if ( v5 == 0 )
    {
      CEntitySystem::FindPooledString(g_pEntitySystem, "!player");
      v5 = v9;
      m_Id = this->m_iszEnemyName.u.m_Id;
      this->m_iszPlayerName.u.m_Id = v9;
    }
    if ( m_Id == v5 )
    {
      if ( (*(pEnemy->_vptr_IHandleEntity + 140))(pEnemy) != 0 )
        return !this->m_bNegated;
      m_Id = this->m_iszEnemyName.u.m_Id;
    }
    m_pEntity = pEnemy->m_pEntity;
    if ( m_pEntity->m_name.u.m_Id == m_Id )
      goto LABEL_12;
    v8 = "";
    if ( m_Id != 0 )
      v8 = m_Id;
    if ( CEntityIdentity::ClassMatches(m_pEntity, v8) )
    {
LABEL_12:
      if ( !this->m_bNegated )
        return 1;
    }
    else if ( this->m_bNegated )
    {
      return 1;
    }
    return 0;
  }
  return result;
}


// CFilterEnemy::PassesProximityFilter  (line 730, @0x00000000021fbf40, libserver.so)  // inlines: LengthSqr, VectorSubtract, operator-
// calls: CBaseEntity::GetAbsOrigin
// callers: CFilterEnemy::PassesFilterImpl
bool __fastcall CFilterEnemy::PassesProximityFilter(
        CFilterEnemy *const this,
        CBaseEntity *pCaller,
        CBaseEntity *pEnemy)
{
  char m_bNegated; // cl
  CBaseEntity *v7; // r14
  const Vector *AbsOrigin; // r13
  const Vector *v9; // rax
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float m_flOuterRadius; // xmm2_4
  float v14; // xmm0_4
  float m_flRadius; // xmm1_4

  m_bNegated = 1;
  if ( this->m_flRadius <= 0.0 )
    return m_bNegated;
  v7 = (*(pCaller->_vptr_IHandleEntity + 105))(pCaller, pCaller, pEnemy, 1);
  AbsOrigin = CBaseEntity::GetAbsOrigin(pEnemy);
  v9 = CBaseEntity::GetAbsOrigin(pCaller);
  m_bNegated = this->m_bNegated;
  v10 = v9->y - AbsOrigin->y;
  v11 = v9->z - AbsOrigin->z;
  v12 = ((v9->x - AbsOrigin->x) * (v9->x - AbsOrigin->x)) + (v10 * v10);
  m_flOuterRadius = this->m_flOuterRadius;
  v14 = v12 + (v11 * v11);
  m_flRadius = this->m_flRadius;
  if ( m_flOuterRadius != 0.0 )
  {
    if ( m_flRadius > m_flOuterRadius )
      goto LABEL_4;
    goto LABEL_9;
  }
  if ( m_bNegated != 0 )
  {
    m_flOuterRadius = m_flRadius * 0.5;
    if ( m_flRadius <= (m_flRadius * 0.5) )
    {
LABEL_9:
      m_flRadius = m_flOuterRadius;
      m_flOuterRadius = this->m_flRadius;
    }
  }
  else
  {
    m_flOuterRadius = m_flRadius + m_flRadius;
    if ( m_flRadius <= (m_flRadius + m_flRadius) )
      goto LABEL_9;
  }
LABEL_4:
  if ( v7 == pEnemy )
  {
    if ( m_bNegated == 0 )
      goto LABEL_6;
  }
  else if ( m_bNegated != 0 )
  {
    goto LABEL_6;
  }
  m_flRadius = m_flOuterRadius;
LABEL_6:
  if ( (m_flRadius * m_flRadius) >= v14 )
    return m_bNegated ^ 1;
  return m_bNegated;
}


// CFilterEnemy::PassesMobbedFilter  (line 789, @0x00000000021fc110, libserver.so)
bool __fastcall CFilterEnemy::PassesMobbedFilter(CFilterEnemy *const this, CBaseEntity *pCaller, CBaseEntity *pEnemy)
{
  return 1;
}


// CFilterEnemy::GetDataDescMap  (line 837, @0x00000000021ee890, libserver.so)
// globals: CFilterEnemy::m_DataMap
datamap_t *__fastcall CFilterEnemy::GetDataDescMap(CFilterEnemy *const this)
{
  return &CFilterEnemy::m_DataMap;
}


// CFilterEnemy::AddDatadescMetadataKeys  (line 837, @0x00000000021fc120, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFilterEnemy::GetEntityClass(void)
void __fastcall CFilterEnemy::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFilterEnemy::GetEntityClass);
}


// CFilterEnemy::GetBaseMap  (line 837, @0x00000000021fc140, libserver.so)
// globals: CBaseFilter::m_DataMap
datamap_t *__cdecl CFilterEnemy::GetBaseMap()
{
  return &CBaseFilter::m_DataMap;
}


// DataMapInit<CFilterEnemy>  (line 837, @0x00000000021fc150, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CFilterEnemy"
// globals: `guard variable for'DataMapInit<CFilterEnemy>(CFilterEnemy *)::nameHolder, CBaseFilter::m_DataMap, CFilterEnemy::GetEntityClass(void), CFilterEnemy::m_DataMap, DataMapInit<CFilterEnemy>(CFilterEnemy *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFilterEnemy>(CFilterEnemy *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFilterEnemy>(CFilterEnemy *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFilterEnemy>(CFilterEnemy *)::nameHolder) != 0 )
  {
    DataMapInit<CFilterEnemy>(CFilterEnemy *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFilterEnemy>(CFilterEnemy *)::nameHolder.m_pszBase = "CFilterEnemy";
    DataMapInit<CFilterEnemy>(CFilterEnemy *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFilterEnemy>(CFilterEnemy *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFilterEnemy>(CFilterEnemy *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFilterEnemy>(CFilterEnemy *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFilterEnemy>(CFilterEnemy *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFilterEnemy>(CFilterEnemy *)::nameHolder,
      &_dso_handle);
  }
  CFilterEnemy::m_DataMap.dataNumFields = 5;
  CFilterEnemy::m_DataMap.baseMap = &CBaseFilter::m_DataMap;
  CFilterEnemy::m_DataMap.dataDesc = &DataMapInit<CFilterEnemy>(CFilterEnemy *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFilterEnemy::m_DataMap, CFilterEnemy::GetEntityClass);
  return &CFilterEnemy::m_DataMap;
}


// CFilterProximity::GetDataDescMap  (line 853, @0x00000000021ee8a0, libserver.so)
// globals: CFilterProximity::m_DataMap
datamap_t *__fastcall CFilterProximity::GetDataDescMap(CFilterProximity *const this)
{
  return &CFilterProximity::m_DataMap;
}


// CFilterProximity::AddDatadescMetadataKeys  (line 853, @0x00000000021fc220, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFilterProximity::GetEntityClass(void)
void __fastcall CFilterProximity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFilterProximity::GetEntityClass);
}


// CFilterProximity::GetBaseMap  (line 853, @0x00000000021fc240, libserver.so)
// globals: CBaseFilter::m_DataMap
datamap_t *__cdecl CFilterProximity::GetBaseMap()
{
  return &CBaseFilter::m_DataMap;
}


// DataMapInit<CFilterProximity>  (line 853, @0x00000000021fc250, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CFilterProximity"
// globals: `guard variable for'DataMapInit<CFilterProximity>(CFilterProximity *)::nameHolder, CBaseFilter::m_DataMap, CFilterProximity::GetEntityClass(void), CFilterProximity::m_DataMap, DataMapInit<CFilterProximity>(CFilterProximity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFilterProximity>(CFilterProximity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFilterProximity>(CFilterProximity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFilterProximity>(CFilterProximity *)::nameHolder) != 0 )
  {
    DataMapInit<CFilterProximity>(CFilterProximity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFilterProximity>(CFilterProximity *)::nameHolder.m_pszBase = "CFilterProximity";
    DataMapInit<CFilterProximity>(CFilterProximity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFilterProximity>(CFilterProximity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFilterProximity>(CFilterProximity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFilterProximity>(CFilterProximity *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFilterProximity>(CFilterProximity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFilterProximity>(CFilterProximity *)::nameHolder,
      &_dso_handle);
  }
  CFilterProximity::m_DataMap.dataNumFields = 1;
  CFilterProximity::m_DataMap.baseMap = &CBaseFilter::m_DataMap;
  CFilterProximity::m_DataMap.dataDesc = &DataMapInit<CFilterProximity>(CFilterProximity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFilterProximity::m_DataMap, CFilterProximity::GetEntityClass);
  return &CFilterProximity::m_DataMap;
}


// CFilterProximity::CFilterProximity  (line 857, @0x00000000021fc320, libserver.so)  // inlines: CBaseFilter, CEntityIOOutput, CLogicalEntity, CServerOnlyEntity
// calls: CBaseEntity::CBaseEntity
// callers: CFilterProximity::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CFilterProximity::CFilterProximity(CFilterProximity *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_flRadius = 0.0;
  this->m_OnPass._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnFail._vptr_CEntityIOOutput = off_3F7C190;
  this->_vptr_IHandleEntity = &off_4037B70;
}


// CFilterProximity::PassesFilterImpl  (line 861, @0x00000000021eeb50, libserver.so)  // inlines: DistToSqr, LengthSqr
// calls: CBaseEntity::GetAbsOrigin
bool __fastcall CFilterProximity::PassesFilterImpl(
        CFilterProximity *const this,
        CBaseEntity *pCaller,
        CBaseEntity *pEntity)
{
  const Vector *AbsOrigin; // r12
  const Vector *v5; // rax
  float x; // xmm0_4
  float y; // xmm2_4
  float z; // xmm1_4
  bool result; // al
  float m_flRadius; // [rsp-14h] [rbp-1Ch]

  m_flRadius = this->m_flRadius;
  if ( m_flRadius <= 0.0 )
    return 1;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
  v5 = CBaseEntity::GetAbsOrigin(this);
  x = v5->x;
  y = v5->y;
  z = v5->z;
  result = 0;
  if ( (m_flRadius * m_flRadius) > ((((x - AbsOrigin->x) * (x - AbsOrigin->x))
                                   + ((y - AbsOrigin->y) * (y - AbsOrigin->y)))
                                  + ((z - AbsOrigin->z) * (z - AbsOrigin->z))) )
    return 1;
  return result;
}


// CFilterLOS::GetDataDescMap  (line 876, @0x00000000021ee8b0, libserver.so)
// globals: CFilterLOS::m_DataMap
datamap_t *__fastcall CFilterLOS::GetDataDescMap(CFilterLOS *const this)
{
  return &CFilterLOS::m_DataMap;
}


// CFilterLOS::AddDatadescMetadataKeys  (line 876, @0x00000000021fc370, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFilterLOS::GetEntityClass(void)
void __fastcall CFilterLOS::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFilterLOS::GetEntityClass);
}


// CFilterLOS::GetBaseMap  (line 876, @0x00000000021fc390, libserver.so)
// globals: CBaseFilter::m_DataMap
datamap_t *__cdecl CFilterLOS::GetBaseMap()
{
  return &CBaseFilter::m_DataMap;
}


// DataMapInit<CFilterLOS>  (line 876, @0x00000000021fc3a0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CFilterLOS"
// globals: `guard variable for'DataMapInit<CFilterLOS>(CFilterLOS *)::nameHolder, CBaseFilter::m_DataMap, CFilterLOS::GetEntityClass(void), DataMapInit<CFilterLOS>(CFilterLOS *)::dataDesc, CFilterLOS::m_DataMap, DataMapInit<CFilterLOS>(CFilterLOS *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFilterLOS>(CFilterLOS *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFilterLOS>(CFilterLOS *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFilterLOS>(CFilterLOS *)::nameHolder) != 0 )
  {
    DataMapInit<CFilterLOS>(CFilterLOS *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFilterLOS>(CFilterLOS *)::nameHolder.m_pszBase = "CFilterLOS";
    DataMapInit<CFilterLOS>(CFilterLOS *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFilterLOS>(CFilterLOS *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFilterLOS>(CFilterLOS *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFilterLOS>(CFilterLOS *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFilterLOS>(CFilterLOS *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFilterLOS>(CFilterLOS *)::nameHolder,
      &_dso_handle);
  }
  CFilterLOS::m_DataMap.dataNumFields = 1;
  CFilterLOS::m_DataMap.baseMap = &CBaseFilter::m_DataMap;
  CFilterLOS::m_DataMap.dataDesc = DataMapInit<CFilterLOS>(CFilterLOS *)::dataDesc;
  AddDatadescMetadataKeys(&CFilterLOS::m_DataMap, CFilterLOS::GetEntityClass);
  return &CFilterLOS::m_DataMap;
}


// CFilterLOS::PassesFilterImpl  (line 880, @0x00000000021f1d90, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract
// calls: CGameTrace::Init, CBaseEntity::GetAbsOrigin, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
bool __fastcall CFilterLOS::PassesFilterImpl(CFilterLOS *const this, CBaseEntity *pCaller, CBaseEntity *pEntity)
{
  const Vector *AbsOrigin; // rbx
  const Vector *v6; // r8
  CTraceFilterSimple v8; // [rsp+0h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+40h] [rbp-120h] BYREF
  trace_t tr; // [rsp+90h] [rbp-D0h] BYREF

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  ray.m_Start.w = 0.0;
  v6 = CBaseEntity::GetAbsOrigin(pEntity);
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_flRadius = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Delta.x = AbsOrigin->x - v6->x;
  ray.m_Delta.y = AbsOrigin->y - v6->y;
  ray.m_Delta.z = AbsOrigin->z - v6->z;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Start.Vector = *v6;
  CTraceFilterSimple::CTraceFilterSimple(&v8, pEntity, 4, 0);
  v8.m_attr.m_nInteractsWith |= 0x3021uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v8, &tr);
  return tr.fraction == 1.0;
}


