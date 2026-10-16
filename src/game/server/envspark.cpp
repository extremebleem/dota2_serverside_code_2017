// Reconstructed from DWARF by pahole; not original source.

// src/game/server/envspark.cpp:36
class CEnvSpark : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	float m_flDelay;  // +0x308
	int m_nMagnitude;  // +0x30c
	int m_nTrailLength;  // +0x310

	COutputEvent m_OnSpark;  // +0x318
	typedef CPointEntity BaseClass;

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
	CEnvSpark(CEnvSpark &);
	CEnvSpark(CEnvSpark &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	CEnvSpark();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	void SparkThink();
	void InputStartSpark(inputdata_t &);
	void InputStopSpark(inputdata_t &);
	void InputToggleSpark(inputdata_t &);
	void InputSparkOnce(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvSpark();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[34] GetDataDescMap
	// sizeof = 816
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// DoSpark  (line 19, @0x00000000021faa70, libserver.so)
// calls: ITempEntsSystem::Sparks, CBaseEntity::EmitSound
// callers: CBaseButton::ButtonSpark, CEnvSpark::SparkThink
// strings: "DoSpark"
void __fastcall DoSpark(
        CBaseEntity *ent,
        const Vector *const location,
        int nMagnitude,
        int nTrailLength,
        bool bPlaySound,
        const Vector *const vecDir)
{
  ITempEntsSystem::Sparks(g_pEffects, location, nMagnitude, nTrailLength, vecDir);
  if ( bPlaySound )
    CBaseEntity::EmitSound(ent, "DoSpark", 0.0, 0);
}


// CEnvSpark::~CEnvSpark  (line 36, @0x00000000022107d0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvSpark::~CEnvSpark(CEnvSpark *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvSpark::~CEnvSpark  (line 36, @0x00000000022107f0, libserver.so)  // inlines: ~CEnvSpark, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvSpark::~CEnvSpark(CEnvSpark *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvSpark::GetEntityClass  (line 38, @0x000000000220e1e0, libserver.so)
CEntityClass *__cdecl CEnvSpark::GetEntityClass()
{
  return g_pEntityCEnvSparkClass;
}


// CEnvSpark::Schema_DynamicBinding  (line 38, @0x000000000220e1f0, libserver.so)
// globals: CEnvSpark::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvSpark::Schema_DynamicBinding(const CEnvSpark *const this)
{
  return CEnvSpark::s_pSchemaBinding;
}


// CEnvSpark::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 38, @0x000000000220e200, libserver.so)
// globals: CEnvSpark::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvSpark::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvSpark::CEntityInstanceEntityClass *const this)
{
  return CEnvSpark::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvSpark::CEntityInstanceEntityClass::DestructInstance  (line 38, @0x000000000220e210, libserver.so)  // inlines: Destruct<CEnvSpark>
void __fastcall CEnvSpark::CEntityInstanceEntityClass::DestructInstance(
        CEnvSpark::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvSpark::CEntityInstanceEntityClass::FreeInstance  (line 38, @0x000000000220e230, libserver.so)
void __fastcall CEnvSpark::CEntityInstanceEntityClass::FreeInstance(
        CEnvSpark::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvSpark::CEntityInstanceEntityClass::CanAllocate  (line 38, @0x000000000220e250, libserver.so)
bool __fastcall CEnvSpark::CEntityInstanceEntityClass::CanAllocate(
        const CEnvSpark::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvSpark::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 38, @0x000000000220e260, libserver.so)
// globals: CEnvSpark::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvSpark::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvSpark::CEntityInstanceEntityClass *const this)
{
  return CEnvSpark::s_pSchemaBinding;
}


// CEnvSpark::CEntityInstanceEntityClass::AllocateInstance  (line 38, @0x000000000220fb60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvSpark::CEntityInstanceEntityClass::AllocateInstance(
        CEnvSpark::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 816);
  memset(v1, 0, 0x330u);
  return v1;
}


// CEnvSpark::CEntityInstanceEntityClass::ConstructInstance  (line 38, @0x00000000022100b0, libserver.so)  // inlines: CEntityIOOutput, CEnvSpark, CPointEntity, Construct<CEnvSpark>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvSpark::CEntityInstanceEntityClass::ConstructInstance(
        CEnvSpark::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 195) = 1;
    *p = &off_4031330;
    *(p + 99) = off_3F7C190;
    *(p + 196) = 1;
  }
  return p;
}


// CEnvSpark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 38, @0x0000000002212440, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvSpark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvSpark::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvSpark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 38, @0x0000000002212460, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvSpark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvSpark::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvSpark::GetEntityClassInternal  (line 38, @0x00000000022162b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "env_spark", "CEnvSpark"
// globals: `guard variable for'CEnvSpark::GetEntityClassInternal(void)::g_EntityCEnvSparkClass, CEnvSpark::GetEntityClassInternal(void)::g_EntityCEnvSparkClass, __dso_handle, CEnvSpark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvSpark::GetEntityClassInfo(void)::g_EntityCEnvSparkClassInfo, CEnvSpark::GetEntityClassInfo(void)::g_EntityCEnvSparkClassInfo
CEntityClass *__cdecl CEnvSpark::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvSpark::GetEntityClassInternal(void)::g_EntityCEnvSparkClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvSpark::GetEntityClassInternal(void)::g_EntityCEnvSparkClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvSpark::GetEntityClassInternal(void)::g_EntityCEnvSparkClass);
    CEnvSpark::GetEntityClassInternal(void)::g_EntityCEnvSparkClass._vptr_CEntityClass = off_40312B0;
    __cxa_guard_release(&`guard variable for'CEnvSpark::GetEntityClassInternal(void)::g_EntityCEnvSparkClass);
    __cxa_atexit(
      CEnvSpark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvSpark::GetEntityClassInternal(void)::g_EntityCEnvSparkClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvSparkClass != 0 )
    return &CEnvSpark::GetEntityClassInternal(void)::g_EntityCEnvSparkClass;
  if ( `guard variable for'CEnvSpark::GetEntityClassInfo(void)::g_EntityCEnvSparkClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvSpark::GetEntityClassInfo(void)::g_EntityCEnvSparkClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvSpark::GetEntityClassInfo(void)::g_EntityCEnvSparkClassInfo,
      "CEnvSpark",
      "env_spark",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvSpark::GetEntityClassInfo(void)::g_EntityCEnvSparkClassInfo);
  }
  CEnvSpark::GetEntityClassInternal(void)::g_EntityCEnvSparkClass.m_pClassInfo = &CEnvSpark::GetEntityClassInfo(void)::g_EntityCEnvSparkClassInfo;
  CEnvSpark::GetEntityClassInternal(void)::g_EntityCEnvSparkClass.m_pBaseClassInfo = CEnvSpark::GetEntityClassInfo(void)::g_EntityCEnvSparkClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvSparkClass = &CEnvSpark::GetEntityClassInternal(void)::g_EntityCEnvSparkClass;
  CEnvSpark::GetEntityClassInfo(void)::g_EntityCEnvSparkClassInfo.m_pClass = &CEnvSpark::GetEntityClassInternal(void)::g_EntityCEnvSparkClass;
  CEnvSpark::GetEntityClassInternal(void)::g_EntityCEnvSparkClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvSparkClass->m_pComponentOverrides = 0;
  return &CEnvSpark::GetEntityClassInternal(void)::g_EntityCEnvSparkClass;
}


// CEnvSpark::GetDataDescMap  (line 63, @0x00000000021ee670, libserver.so)
// globals: CEnvSpark::m_DataMap
datamap_t *__fastcall CEnvSpark::GetDataDescMap(CEnvSpark *const this)
{
  return &CEnvSpark::m_DataMap;
}


// CEnvSpark::AddDatadescMetadataKeys  (line 63, @0x00000000021faab0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvSpark::GetEntityClass(void)
void __fastcall CEnvSpark::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvSpark::GetEntityClass);
}


// CEnvSpark::GetBaseMap  (line 63, @0x00000000021faad0, libserver.so)
datamap_t *__cdecl CEnvSpark::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvSpark>  (line 63, @0x0000000002205260, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CEnvSpark"
// globals: `guard variable for'DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder, `guard variable for'DataMapInit<CEnvSpark>(CEnvSpark *)::dataDesc, CEnvSpark::GetEntityClass(void), CEnvSpark::m_DataMap, DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvSpark>(CEnvSpark *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder.m_pszBase = "CEnvSpark";
    DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder,
      &_dso_handle);
  }
  CEnvSpark::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvSpark>(CEnvSpark *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvSpark>(CEnvSpark *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v2, DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder.m_pszBase), "SparkThink");
    m_Size = DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder.m_Names.m_Size == DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CEnvSpark>(CEnvSpark *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CEnvSpark>(CEnvSpark *)::dataDesc[4].fieldName = v2;
    DataMapInit<CEnvSpark>(CEnvSpark *)::dataDesc[9].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvSpark>(CEnvSpark *)::dataDesc);
  }
  CEnvSpark::m_DataMap.dataNumFields = 9;
  CEnvSpark::m_DataMap.dataDesc = &DataMapInit<CEnvSpark>(CEnvSpark *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvSpark::m_DataMap, CEnvSpark::GetEntityClass);
  return &CEnvSpark::m_DataMap;
}


// CEnvSpark::CEnvSpark  (line 86, @0x00000000021faae0, libserver.so)  // inlines: CEntityIOOutput, CPointEntity
// calls: CBaseEntity::CBaseEntity
void __fastcall CEnvSpark::CEnvSpark(CEnvSpark *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_nMagnitude = 1;
  this->_vptr_IHandleEntity = &off_4031330;
  this->m_OnSpark._vptr_CEntityIOOutput = off_3F7C190;
  this->m_nTrailLength = 1;
}


// CEnvSpark::Spawn  (line 96, @0x00000000021f31d0, libserver.so)  // inlines: curtime
// calls: CPointEntity::Spawn, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CEnvSpark::SparkThink(void)
void __fastcall CEnvSpark::Spawn(CEnvSpark *const this, const CEntityKeyValues *pKeyValues)
{
  bool v3; // zf
  CGlobalVars *v4; // r12
  double v5; // xmm2_8
  float v6; // xmm0_4
  double v7; // xmm1_8
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  double v9; // [rsp+8h] [rbp-18h]

  CPointEntity::Spawn(this, pKeyValues);
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  v3 = (this->m_spawnflags.m_Value & 0x40) == 0;
  this->m_pfnUse.__pfn = 0;
  this->m_pfnUse.__delta = 0;
  if ( v3 )
  {
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
      goto LABEL_3;
LABEL_12:
    v5 = 0.1;
    goto LABEL_5;
  }
  CBaseEntity::ThinkSet(this, CEnvSpark::SparkThink, 0.0, 0, 0);
  v4 = gpGlobals;
  if ( gpGlobals == 0 )
    goto LABEL_12;
LABEL_3:
  if ( !v4->m_bEnableAssertions && !v4->m_bInSimulation )
  {
    m_pfnWarningFunc = v4->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(1);
  }
  v5 = v4->m_flCurrentTime + 0.1;
LABEL_5:
  v9 = v5;
  v6 = (*(*random_valve + 8LL))(random_valve, 0.0, 1.5);
  CBaseEntity::SetNextThink(this, v6 + v9, v7, 0);
  if ( this->m_flDelay < 0.0 )
    this->m_flDelay = 0.0;
}


// CEnvSpark::Precache  (line 121, @0x000000000220d400, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::IsPrecacheAllowed, CBaseEntity::PrecacheScriptSound
// strings: "DoSpark"
void __fastcall CEnvSpark::Precache(CEnvSpark *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  if ( CBaseEntity::IsPrecacheAllowed() )
    CBaseEntity::PrecacheScriptSound("DoSpark", pContext);
}


// CEnvSpark::SparkThink  (line 135, @0x0000000002204330, libserver.so)  // inlines: CPVSFilter, CVariantBase, FireOutput, Free, curtime, ~CPVSFilter, ~CVariantBase
// calls: CBaseEntity::SetNextThink, DoSpark, CEntityIOOutput::FireOutputInternal, CBaseEntity::GetAbsOrigin, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPVS, CRecipientFilter::~CRecipientFilter, CBaseEntity::GetAbsAngles, AngleVectors, __stack_chk_fail, _Unwind_Resume, CVariantBase<CVariantDefaultAllocator>::Free
// callers: CEnvSpark::InputSparkOnce
void __fastcall CEnvSpark::SparkThink(CEnvSpark *const this)
{
  CGlobalVars *v2; // r12
  double v3; // xmm2_8
  float v4; // xmm0_4
  double v5; // xmm1_8
  unsigned int m_Value; // r12d
  vec_t z; // eax
  int m_nTrailLength; // r15d
  int m_nMagnitude; // r14d
  float64 v10; // xmm0_8
  int v11; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const Vector *AbsOrigin; // r13
  void (__fastcall *v14)(ITempEntsSystem *, CPVSFilter *, const Vector *, __int64, double, float, float); // r14
  const Vector *v15; // rax
  const QAngle *AbsAngles; // rax
  double v17; // [rsp+8h] [rbp-198h]
  Vector vecDir; // [rsp+10h] [rbp-190h] BYREF
  CVariant location; // [rsp+20h] [rbp-180h] BYREF
  CPVSFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v21; // [rsp+168h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v3 = v2->m_flCurrentTime + 0.1;
  }
  else
  {
    v3 = 0.1;
  }
  v17 = v3;
  v4 = (*(*random_valve + 8LL))(random_valve, 0.0, this->m_flDelay);
  CBaseEntity::SetNextThink(this, v4 + v17, v5, 0);
  m_Value = this->m_spawnflags.m_Value;
  z = vec3_origin.z;
  *&vecDir.x = *&vec3_origin.x;
  vecDir.z = z;
  if ( (m_Value & 0x200) != 0 )
  {
    AbsAngles = CBaseEntity::GetAbsAngles(this);
    AngleVectors(AbsAngles, &vecDir, 0, 0);
    m_Value = this->m_spawnflags.m_Value;
  }
  m_nTrailLength = this->m_nTrailLength;
  m_nMagnitude = this->m_nMagnitude;
  v10 = (*(this->_vptr_IHandleEntity + 62))(this);
  *&location.m_type = v11;
  location.m_float64 = v10;
  DoSpark(this, &location, m_nMagnitude, m_nTrailLength, (BYTE1(m_Value) ^ 1) & 1, &vecDir);
  *&location.m_type = 0;
  location.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnSpark, this, this, &location, 0.0);
  if ( (location.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, location.m_uint64);
  if ( SLOBYTE(this->m_spawnflags.m_Value) < 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FF45F0;
    CRecipientFilter::AddRecipientsByPVS(&filter, AbsOrigin);
    v14 = *(te->_vptr_IPredictionSystem + 17);
    v15 = CBaseEntity::GetAbsOrigin(this);
    v14(te, &filter, v15, 25, 0.0, 0.2, 1.5);
    filter._vptr_IRecipientFilter = &off_3FF45F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CEnvSpark::InputStartSpark  (line 160, @0x00000000021f27a0, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// callers: CEnvSpark::InputToggleSpark
// globals: CEnvSpark::SparkThink(void)
void __fastcall CEnvSpark::InputStartSpark(CEnvSpark *const this, inputdata_t *const inputdata)
{
  double v3; // xmm1_8
  double v4; // xmm0_8
  CGlobalVars *v5; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseEntity::ThinkSet(this, CEnvSpark::SparkThink, 0.0, 0, 0);
  v4 = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v4 = LODWORD(v5->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v4, v3, 0);
}


// CEnvSpark::InputSparkOnce  (line 169, @0x0000000002204630, libserver.so)
// calls: CEnvSpark::SparkThink, CBaseEntity::SetNextThink
void __fastcall CEnvSpark::InputSparkOnce(CEnvSpark *const this, inputdata_t *const inputdata)
{
  double v3; // xmm1_8

  CEnvSpark::SparkThink(this);
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v3, 0);
}


// CEnvSpark::InputStopSpark  (line 178, @0x00000000021ef2b0, libserver.so)
// calls: CBaseEntity::ThinkSet
// callers: CEnvSpark::InputToggleSpark
void __fastcall CEnvSpark::InputStopSpark(CEnvSpark *const this, inputdata_t *const inputdata)
{
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CEnvSpark::InputToggleSpark  (line 187, @0x00000000021f2810, libserver.so)
// calls: CBaseEntity::GetNextThink, CEnvSpark::InputStopSpark, CEnvSpark::InputStartSpark
void __fastcall CEnvSpark::InputToggleSpark(CEnvSpark *const this, inputdata_t *const inputdata)
{
  if ( CBaseEntity::GetNextThink(this, 0) == -1.0 )
    CEnvSpark::InputStartSpark(this, inputdata);
  else
    CEnvSpark::InputStopSpark(this, inputdata);
}


