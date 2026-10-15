// Reconstructed from DWARF by pahole; not original source.

// src/game/server/lights.cpp:15
class CPointEntityAlias_water_lod_control : public CPointEntity {
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
	CPointEntityAlias_water_lod_control(CPointEntityAlias_water_lod_control &);
	CPointEntityAlias_water_lod_control(CPointEntityAlias_water_lod_control &);
	CPointEntityAlias_water_lod_control();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CPointEntityAlias_water_lod_control();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 776
};

// src/game/server/lights.cpp:232
class CLightSpot : public CLight {
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

public:

private:

	CLightSpot(CLightSpot &);
	CLightSpot(CLightSpot &);
	CLightSpot();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CLightSpot();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 800
};

// src/game/server/lights.cpp:234
class CLightSpotAlias_light_glspot : public CLightSpot {
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
	CLightSpotAlias_light_glspot(CLightSpotAlias_light_glspot &);
	CLightSpotAlias_light_glspot(CLightSpotAlias_light_glspot &);
	CLightSpotAlias_light_glspot();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CLightSpotAlias_light_glspot();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 800
};

// src/game/server/lights.cpp:235
class CLightDirectional : public CLight {
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
	CLightDirectional(CLightDirectional &);
	CLightDirectional(CLightDirectional &);
	CLightDirectional();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CLightDirectional();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 800
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointEntityAlias_water_lod_control::Schema_DynamicBinding  (line 15, @0x00000000022a5460, libserver.so)
// globals: CPointEntityAlias_water_lod_control::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointEntityAlias_water_lod_control::Schema_DynamicBinding(
        const CPointEntityAlias_water_lod_control *const this)
{
  return CPointEntityAlias_water_lod_control::s_pSchemaBinding;
}


// CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 15, @0x00000000022a5470, libserver.so)
// globals: CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass *const this)
{
  return CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::DestructInstance  (line 15, @0x00000000022a5480, libserver.so)  // inlines: Destruct<CPointEntityAlias_water_lod_control>
void __fastcall CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::DestructInstance(
        CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::FreeInstance  (line 15, @0x00000000022a54a0, libserver.so)
void __fastcall CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::FreeInstance(
        CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::CanAllocate  (line 15, @0x00000000022a54c0, libserver.so)
bool __fastcall CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::CanAllocate(
        const CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 15, @0x00000000022a54d0, libserver.so)
// globals: CPointEntityAlias_water_lod_control::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass *const this)
{
  return CPointEntityAlias_water_lod_control::s_pSchemaBinding;
}


// CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::AllocateInstance  (line 15, @0x00000000022a7ec0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::AllocateInstance(
        CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::ConstructInstance  (line 15, @0x00000000022a8900, libserver.so)  // inlines: CPointEntity, CPointEntityAlias_water_lod_control, Construct<CPointEntityAlias_water_lod_control>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::ConstructInstance(
        CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4059130;
  }
  return p;
}


// CPointEntityAlias_water_lod_control::~CPointEntityAlias_water_lod_control  (line 15, @0x00000000022a9380, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPointEntityAlias_water_lod_control::~CPointEntityAlias_water_lod_control(
        CPointEntityAlias_water_lod_control *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPointEntityAlias_water_lod_control::~CPointEntityAlias_water_lod_control  (line 15, @0x00000000022a93a0, libserver.so)  // inlines: ~CPointEntity, ~CPointEntityAlias_water_lod_control
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPointEntityAlias_water_lod_control::~CPointEntityAlias_water_lod_control(
        CPointEntityAlias_water_lod_control *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 15, @0x00000000022ab040, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 15, @0x00000000022ab060, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointEntityAlias_water_lod_control::GetEntityClassInternal  (line 15, @0x00000000022afec0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "water_lod_control", "CPointEntityAlias_water_lod_control"
// globals: `guard variable for'CPointEntityAlias_water_lod_control::GetEntityClassInternal(void)::g_EntityCPointEntityAlias_water_lod_controlClass, CPointEntityAlias_water_lod_control::GetEntityClassInternal(void)::g_EntityCPointEntityAlias_water_lod_controlClass, __dso_handle, CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointEntityAlias_water_lod_control::GetEntityClassInfo(void)::g_EntityCPointEntityAlias_water_lod_controlClassInfo, CPointEntityAlias_water_lod_control::GetEntityClassInfo(void)::g_EntityCPointEntityAlias_water_lod_controlClassInfo
CEntityClass *__cdecl CPointEntityAlias_water_lod_control::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointEntityAlias_water_lod_control::GetEntityClassInternal(void)::g_EntityCPointEntityAlias_water_lod_controlClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointEntityAlias_water_lod_control::GetEntityClassInternal(void)::g_EntityCPointEntityAlias_water_lod_controlClass) != 0 )
  {
    CEntityClass::CEntityClass(&CPointEntityAlias_water_lod_control::GetEntityClassInternal(void)::g_EntityCPointEntityAlias_water_lod_controlClass);
    CPointEntityAlias_water_lod_control::GetEntityClassInternal(void)::g_EntityCPointEntityAlias_water_lod_controlClass._vptr_CEntityClass = off_40590B0;
    __cxa_guard_release(&`guard variable for'CPointEntityAlias_water_lod_control::GetEntityClassInternal(void)::g_EntityCPointEntityAlias_water_lod_controlClass);
    __cxa_atexit(
      CPointEntityAlias_water_lod_control::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointEntityAlias_water_lod_control::GetEntityClassInternal(void)::g_EntityCPointEntityAlias_water_lod_controlClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointEntityAlias_water_lod_controlClass != 0 )
    return &CPointEntityAlias_water_lod_control::GetEntityClassInternal(void)::g_EntityCPointEntityAlias_water_lod_controlClass;
  if ( `guard variable for'CPointEntityAlias_water_lod_control::GetEntityClassInfo(void)::g_EntityCPointEntityAlias_water_lod_controlClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointEntityAlias_water_lod_control::GetEntityClassInfo(void)::g_EntityCPointEntityAlias_water_lod_controlClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointEntityAlias_water_lod_control::GetEntityClassInfo(void)::g_EntityCPointEntityAlias_water_lod_controlClassInfo,
      "CPointEntityAlias_water_lod_control",
      "water_lod_control",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointEntityAlias_water_lod_control::GetEntityClassInfo(void)::g_EntityCPointEntityAlias_water_lod_controlClassInfo);
  }
  CPointEntityAlias_water_lod_control::GetEntityClassInternal(void)::g_EntityCPointEntityAlias_water_lod_controlClass.m_pClassInfo = &CPointEntityAlias_water_lod_control::GetEntityClassInfo(void)::g_EntityCPointEntityAlias_water_lod_controlClassInfo;
  CPointEntityAlias_water_lod_control::GetEntityClassInternal(void)::g_EntityCPointEntityAlias_water_lod_controlClass.m_pBaseClassInfo = CPointEntityAlias_water_lod_control::GetEntityClassInfo(void)::g_EntityCPointEntityAlias_water_lod_controlClassInfo.m_pBaseClassInfo;
  g_pEntityCPointEntityAlias_water_lod_controlClass = &CPointEntityAlias_water_lod_control::GetEntityClassInternal(void)::g_EntityCPointEntityAlias_water_lod_controlClass;
  CPointEntityAlias_water_lod_control::GetEntityClassInfo(void)::g_EntityCPointEntityAlias_water_lod_controlClassInfo.m_pClass = &CPointEntityAlias_water_lod_control::GetEntityClassInternal(void)::g_EntityCPointEntityAlias_water_lod_controlClass;
  CPointEntityAlias_water_lod_control::GetEntityClassInternal(void)::g_EntityCPointEntityAlias_water_lod_controlClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPointEntityAlias_water_lod_controlClass->m_pComponentOverrides = 0;
  return &CPointEntityAlias_water_lod_control::GetEntityClassInternal(void)::g_EntityCPointEntityAlias_water_lod_controlClass;
}


// CLight::GetDataDescMap  (line 21, @0x0000000002283a70, libserver.so)
// globals: CLight::m_DataMap
datamap_t *__fastcall CLight::GetDataDescMap(CLight *const this)
{
  return &CLight::m_DataMap;
}


// CLight::AddDatadescMetadataKeys  (line 21, @0x000000000228e6e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLight::GetEntityClass(void)
void __fastcall CLight::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLight::GetEntityClass);
}


// CLight::GetBaseMap  (line 21, @0x000000000228e700, libserver.so)
datamap_t *__cdecl CLight::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CLight>  (line 21, @0x00000000022a0d60, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLight"
// globals: `guard variable for'DataMapInit<CLight>(CLight *)::nameHolder, `guard variable for'DataMapInit<CLight>(CLight *)::dataDesc, CLight::GetEntityClass(void), CLight::m_DataMap, DataMapInit<CLight>(CLight *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLight>(CLight *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CLight>(CLight *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLight>(CLight *)::nameHolder) != 0 )
  {
    DataMapInit<CLight>(CLight *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLight>(CLight *)::nameHolder.m_pszBase = "CLight";
    DataMapInit<CLight>(CLight *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLight>(CLight *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLight>(CLight *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLight>(CLight *)::nameHolder.m_nLenBase = 6;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLight>(CLight *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLight>(CLight *)::nameHolder,
      &_dso_handle);
  }
  CLight::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CLight>(CLight *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLight>(CLight *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CLight>(CLight *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v2, DataMapInit<CLight>(CLight *)::nameHolder.m_pszBase), "FadeThink");
    m_Size = DataMapInit<CLight>(CLight *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CLight>(CLight *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CLight>(CLight *)::nameHolder.m_Names.m_Size == DataMapInit<CLight>(CLight *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CLight>(CLight *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CLight>(CLight *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CLight>(CLight *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CLight>(CLight *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CLight>(CLight *)::dataDesc[6].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLight>(CLight *)::dataDesc);
  }
  CLight::m_DataMap.dataNumFields = 11;
  CLight::m_DataMap.dataDesc = &DataMapInit<CLight>(CLight *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLight::m_DataMap, CLight::GetEntityClass);
  return &CLight::m_DataMap;
}


// CLight::Spawn  (line 47, @0x000000000228b000, libserver.so)  // inlines: AssignTo, Base, CUtlSymbolLarge, Element, FindKeyHash, Get<float>, GetEntityName, GetValue, GetValue<float>, atof, operator=, operator[]
// calls: CPointEntity::Spawn, CEntityKeyValues::HasValue, GetDefaultLightstyleString, MakeEntitySystemString, CBaseEntity::GetAbsAngles, UTIL_Remove, CBaseEntity::SetAbsAngles, strtod, VariantFieldTypeName, Warning
// strings: "No conversion from %s to float now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_228B186
void __fastcall CLight::Spawn(CLight *const this, const CEntityKeyValues *pKeyValues)
{
  __int64 m_iStyle; // rsi
  int m_iDefaultStyle; // edi
  const char *DefaultLightstyleString; // rax
  __int64 v7; // rax
  QAngle *AbsAngles; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v11; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  float m_float; // xmm0_4
  const char *m_uint64; // rax
  __int64 v18; // rdx
  const char *v19; // rax
  QAngle angles; // [rsp+0h] [rbp-20h] BYREF

  CPointEntity::Spawn(this, pKeyValues);
  if ( !CEntityKeyValues::HasValue(pKeyValues, -762621832) )
    goto LABEL_2;
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  angles = *AbsAngles;
  if ( m_nCount <= 0 )
  {
LABEL_23:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_24;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v11 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v11) == -762621832 )
      goto LABEL_19;
LABEL_16:
    if ( m_nCount <= ++v11 )
      goto LABEL_23;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v11] != -762621832 )
    goto LABEL_16;
LABEL_19:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v13 = pKeyValues->m_keyValues.m_pElements;
  else
    v13 = 0;
  p_m_value = &v13[v11].m_value;
LABEL_24:
  m_type = p_m_value->m_type;
  switch ( m_type )
  {
    case 0:
      m_float = 0.0;
      break;
    case 1:
      m_float = p_m_value->m_float;
      break;
    case 5:
      m_float = p_m_value->m_int;
      break;
    case 6:
      m_float = p_m_value->m_char;
      break;
    case 26:
      m_float = p_m_value->m_uint64;
      break;
    case 30:
      m_float = strtod(p_m_value->m_pszString, 0);
      break;
    case 33:
      m_uint64 = p_m_value->m_uint64;
      if ( p_m_value->m_int64 >= 0 )
        goto LABEL_30;
      v18 = p_m_value->m_uint64 & 1 | (p_m_value->m_uint64 >> 1);
      m_float = v18 + v18;
      break;
    case 34:
      m_float = p_m_value->m_float64;
      break;
    case 37:
      LODWORD(m_uint64) = p_m_value->m_int;
LABEL_30:
      m_float = m_uint64;
      break;
    default:
      v19 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to float now\n", v19);
      m_float = 0.0;
      break;
  }
  angles.x = m_float;
  CBaseEntity::SetAbsAngles(this, &angles);
LABEL_2:
  if ( this->m_pEntity->m_name.u.m_Id != 0 )
  {
    m_iStyle = this->m_iStyle;
    if ( m_iStyle > 31 )
    {
      if ( this->m_iszPattern.u.m_Id == 0 )
      {
        m_iDefaultStyle = this->m_iDefaultStyle;
        if ( m_iDefaultStyle > 0 )
        {
          DefaultLightstyleString = GetDefaultLightstyleString(m_iDefaultStyle);
          MakeEntitySystemString(DefaultLightstyleString);
          m_iStyle = this->m_iStyle;
          this->m_iszPattern.u.m_Id = *&angles.x;
        }
      }
      if ( (this->m_spawnflags.m_Value & 1) != 0 )
      {
        (*(*engine + 296LL))(engine, m_iStyle, "a");
      }
      else
      {
        v7 = *engine;
        if ( this->m_iszPattern.u.m_Id != 0 )
          (*(v7 + 296))(engine, m_iStyle, this->m_iszPattern.u.m_Id);
        else
          (*(v7 + 296))(engine, m_iStyle, "m");
      }
    }
  }
  else
  {
    UTIL_Remove(this);
  }
}


// CLight::Use  (line 82, @0x000000000228e850, libserver.so)
// calls: CBaseEntity::ShouldToggle, CLight::Toggle
void __fastcall CLight::Use(
        CLight *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  if ( this->m_iStyle > 31 && CBaseEntity::ShouldToggle(this, useType, !(this->m_spawnflags.m_Value & 1)) != 0 )
    CLight::Toggle(this);
}


// CLight::TurnOn  (line 96, @0x000000000228e710, libserver.so)  // inlines: NetworkStateChanged, Set, operator&=<int>
// callers: CLight::InputTurnOn, CLight::Toggle
void __fastcall CLight::TurnOn(CLight *const this)
{
  __int64 v2; // rax
  unsigned int v3; // r12d

  v2 = *engine;
  if ( this->m_iszPattern.u.m_Id != 0 )
    (*(v2 + 296))(engine, this->m_iStyle, this->m_iszPattern.u.m_Id);
  else
    (*(v2 + 296))(engine, this->m_iStyle, "m");
  v3 = this->m_spawnflags.m_Value & 0xFFFFFFFE;
  if ( this->m_spawnflags.m_Value != v3 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v3;
  }
}


// CLight::TurnOff  (line 113, @0x000000000228e7b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator|=<int>
// callers: CLight::InputTurnOff, CLight::Toggle
void __fastcall CLight::TurnOff(CLight *const this)
{
  unsigned int v2; // r12d

  (*(*engine + 296LL))(engine, this->m_iStyle, "a");
  v2 = this->m_spawnflags.m_Value | 1;
  if ( this->m_spawnflags.m_Value != v2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v2;
  }
}


// CLight::Toggle  (line 122, @0x000000000228e830, libserver.so)
// calls: CLight::TurnOff, CLight::TurnOn
// callers: CLight::Use, CLight::InputToggle
void __fastcall CLight::Toggle(CLight *const this)
{
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
    CLight::TurnOn(this);
  else
    CLight::TurnOff(this);
}


// CLight::InputTurnOn  (line 139, @0x000000000228e7a0, libserver.so)
// calls: CLight::TurnOn
void __fastcall CLight::InputTurnOn(CLight *const this, inputdata_t *const inputdata)
{
  CLight::TurnOn(this);
}


// CLight::InputTurnOff  (line 148, @0x000000000228e820, libserver.so)
// calls: CLight::TurnOff
void __fastcall CLight::InputTurnOff(CLight *const this, inputdata_t *const inputdata)
{
  CLight::TurnOff(this);
}


// CLight::InputToggle  (line 157, @0x000000000228e8a0, libserver.so)
// calls: CLight::Toggle
void __fastcall CLight::InputToggle(CLight *const this, inputdata_t *const inputdata)
{
  CLight::Toggle(this);
}


// CLight::InputSetPattern  (line 165, @0x000000000228cc20, libserver.so)  // inlines: AssignTo, NetworkStateChanged, Set, StringID, TempString, ToString, operator&=<int>, operator=
// calls: MakeEntitySystemString, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_228CC53, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CLight::InputSetPattern(CLight *const this, inputdata_t *const inputdata)
{
  int16 m_type; // di
  char *m_pszString; // rsi
  __int64 m_iStyle; // rsi
  IVEngineServer2 *v6; // rdi
  const char *v7; // rdx
  unsigned int v8; // r12d
  const char *v9; // rax
  const char *v10; // rcx
  double m_float; // xmm0_8
  UtlSymLargeId_t v12; // [rsp+10h] [rbp-20h]

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_12;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_23;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_15;
      case 6:
        v10 = "true";
        if ( inputdata->value.m_char == 0 )
          v10 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v10);
        goto LABEL_19;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_15;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_19;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_19:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_23:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_15:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v9 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v9);
LABEL_12:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  m_iStyle = this->m_iStyle;
  v6 = engine;
  v7 = "";
  this->m_iszPattern.u.m_Id = v12;
  if ( v12 != 0 )
    v7 = v12;
  (*(*v6 + 296LL))(v6, m_iStyle, v7);
  v8 = this->m_spawnflags.m_Value & 0xFFFFFFFE;
  if ( this->m_spawnflags.m_Value != v8 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v8;
  }
}


// CLight::InputFadeToPattern  (line 179, @0x000000000228cf20, libserver.so)  // inlines: AssignTo, NetworkStateChanged, Set, String, StringID, TempString, ToCStr, ToString, curtime, operator&=<int>, operator=
// calls: MakeEntitySystemString, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_228CF79, jpt_228CFB5, CLight::FadeThink(void), CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CLight::InputFadeToPattern(CLight *const this, inputdata_t *const inputdata)
{
  char *m_Id; // rax
  int16 m_type; // di
  char v6; // al
  int16 v7; // di
  char *m_pszString; // rsi
  double v9; // xmm1_8
  double v10; // xmm0_8
  CGlobalVars *v11; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  unsigned int v13; // r12d
  const char *v14; // rax
  const char *v15; // rax
  double m_float64; // xmm0_8
  const char *v17; // rcx
  const char *v18; // rcx
  double m_float; // xmm0_8
  UtlSymLargeId_t v20; // [rsp+10h] [rbp-20h]

  m_Id = "";
  if ( this->m_iszPattern.u.m_Id != 0 )
    m_Id = this->m_iszPattern.u.m_Id;
  this->m_iCurrentFade = *m_Id;
  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    v6 = *inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_25;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_54;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        v6 = CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        v6 = CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_42;
      case 6:
        v18 = "true";
        if ( inputdata->value.m_char == 0 )
          v18 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v18);
        goto LABEL_46;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_42;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        v6 = CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        v6 = CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_46;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_46:
        v6 = CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_54:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        v6 = CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_42:
        v6 = CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v15 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v15);
LABEL_25:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        v6 = 0;
        break;
    }
  }
  this->m_iTargetFade = v6;
  v7 = inputdata->value.m_type;
  if ( v7 == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( v7 )
    {
      case 0:
        goto LABEL_23;
      case 1:
        m_float64 = inputdata->value.m_float;
        goto LABEL_27;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_33;
      case 6:
        v17 = "true";
        if ( inputdata->value.m_char == 0 )
          v17 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v17);
        goto LABEL_31;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_33;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_31;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_31:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float64 = inputdata->value.m_float64;
LABEL_27:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_33:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v14 = VariantFieldTypeName(v7);
        Warning("No conversion from %s to string at the moment!\n", v14);
LABEL_23:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  this->m_iszPattern.u.m_Id = v20;
  CBaseEntity::ThinkSet(this, CLight::FadeThink, 0.0, 0, 0);
  v10 = 0.0;
  v11 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v10 = LODWORD(v11->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v10, v9, 0);
  v13 = this->m_spawnflags.m_Value & 0xFFFFFFFE;
  if ( this->m_spawnflags.m_Value != v13 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v13;
  }
}


// CLight::FadeThink  (line 195, @0x0000000002289aa0, libserver.so)  // inlines: String, ToCStr, curtime
// calls: CBaseEntity::SetNextThink
void __fastcall CLight::FadeThink(CLight *const this)
{
  char m_iCurrentFade; // al
  char m_iTargetFade; // dl
  double v4; // xmm1_8
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v7; // xmm0_8
  const char *m_pAsString; // rdx
  double v9; // xmm1_8
  char sCurString[32]; // [rsp+0h] [rbp-20h] BYREF

  m_iCurrentFade = this->m_iCurrentFade;
  m_iTargetFade = this->m_iTargetFade;
  if ( m_iCurrentFade >= m_iTargetFade )
  {
    if ( m_iCurrentFade > m_iTargetFade )
    {
      this->m_iCurrentFade = --m_iCurrentFade;
      if ( m_iTargetFade != m_iCurrentFade )
        goto LABEL_4;
      goto LABEL_13;
    }
  }
  else
  {
    this->m_iCurrentFade = ++m_iCurrentFade;
  }
  if ( m_iTargetFade != m_iCurrentFade )
  {
LABEL_4:
    sCurString[0] = m_iCurrentFade;
    sCurString[1] = 0;
    (*(*engine + 296LL))(engine, this->m_iStyle, sCurString);
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v7) = 0;
      *&v7 = v5->m_flCurrentTime + 0.1;
    }
    else
    {
      *&v7 = 1036831949;
    }
    CBaseEntity::SetNextThink(this, v7, v4, 0);
    return;
  }
LABEL_13:
  m_pAsString = "";
  if ( this->m_iszPattern.u.m_Id != 0 )
    m_pAsString = this->m_iszPattern.u.m_pAsString;
  (*(*engine + 296LL))(engine, this->m_iStyle, m_pAsString);
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v9, 0);
}


// CLightSpot::Schema_DynamicBinding  (line 232, @0x00000000022a54e0, libserver.so)
// globals: CLightSpot::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLightSpot::Schema_DynamicBinding(const CLightSpot *const this)
{
  return CLightSpot::s_pSchemaBinding;
}


// CLightSpot::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 232, @0x00000000022a54f0, libserver.so)
// globals: CLightSpot::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLightSpot::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLightSpot::CEntityInstanceEntityClass *const this)
{
  return CLightSpot::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLightSpot::CEntityInstanceEntityClass::DestructInstance  (line 232, @0x00000000022a5500, libserver.so)  // inlines: Destruct<CLightSpot>
void __fastcall CLightSpot::CEntityInstanceEntityClass::DestructInstance(
        CLightSpot::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLightSpot::CEntityInstanceEntityClass::FreeInstance  (line 232, @0x00000000022a5520, libserver.so)
void __fastcall CLightSpot::CEntityInstanceEntityClass::FreeInstance(
        CLightSpot::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLightSpot::CEntityInstanceEntityClass::CanAllocate  (line 232, @0x00000000022a5540, libserver.so)
bool __fastcall CLightSpot::CEntityInstanceEntityClass::CanAllocate(
        const CLightSpot::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLightSpot::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 232, @0x00000000022a5550, libserver.so)
// globals: CLightSpot::s_pSchemaBinding
const ISchemaBinding *__fastcall CLightSpot::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLightSpot::CEntityInstanceEntityClass *const this)
{
  return CLightSpot::s_pSchemaBinding;
}


// CLightSpot::CEntityInstanceEntityClass::AllocateInstance  (line 232, @0x00000000022a7f00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLightSpot::CEntityInstanceEntityClass::AllocateInstance(
        CLightSpot::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 800);
  memset(v1, 0, 0x320u);
  return v1;
}


// CLightSpot::CEntityInstanceEntityClass::ConstructInstance  (line 232, @0x00000000022a8930, libserver.so)  // inlines: CLight, CLightSpot, CPointEntity, CUtlSymbolLarge, Construct<CLightSpot>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLightSpot::CEntityInstanceEntityClass::ConstructInstance(
        CLightSpot::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = 0;
    *p = &off_4059EF0;
  }
  return p;
}


// CLightSpot::~CLightSpot  (line 232, @0x00000000022a9290, libserver.so)  // inlines: ~CLight, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLightSpot::~CLightSpot(CLightSpot *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CLightSpot::~CLightSpot  (line 232, @0x00000000022a92b0, libserver.so)  // inlines: ~CLight, ~CLightSpot, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLightSpot::~CLightSpot(CLightSpot *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLightSpot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 232, @0x00000000022aaf50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLightSpot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLightSpot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CLightSpot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 232, @0x00000000022aaf70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLightSpot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLightSpot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLightSpot::GetEntityClassInfo  (line 232, @0x00000000022b0010, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CPointEntity::GetEntityClassInfo
// callers: CLightSpotAlias_light_glspot::GetEntityClassInternal, CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::InitOptionalTables
// strings: "light_spot_s1", "CLightSpot", "light_s1", "CLight"
// globals: `guard variable for'CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo, CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo, `guard variable for'CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo, CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo
CEntityClassInfo *__cdecl CLightSpot::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo != 0 )
    return &CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo) == 0 )
    return &CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo;
  if ( `guard variable for'CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo,
      "CLight",
      "light_s1",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo,
    "CLightSpot",
    "light_spot_s1",
    0,
    &CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo);
  __cxa_guard_release(&`guard variable for'CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo);
  return &CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo;
}


// CLightSpot::GetEntityClassInternal  (line 232, @0x00000000022b00e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CPointEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "light_spot_s1", "CLightSpot", "light_s1", "CLight"
// globals: `guard variable for'CLightSpot::GetEntityClassInternal(void)::g_EntityCLightSpotClass, CLightSpot::GetEntityClassInternal(void)::g_EntityCLightSpotClass, __dso_handle, CLightSpot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo, CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo, `guard variable for'CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo, CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo
CEntityClass *__cdecl CLightSpot::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLightSpot::GetEntityClassInternal(void)::g_EntityCLightSpotClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLightSpot::GetEntityClassInternal(void)::g_EntityCLightSpotClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLightSpot::GetEntityClassInternal(void)::g_EntityCLightSpotClass);
    CLightSpot::GetEntityClassInternal(void)::g_EntityCLightSpotClass._vptr_CEntityClass = off_4059E70;
    __cxa_guard_release(&`guard variable for'CLightSpot::GetEntityClassInternal(void)::g_EntityCLightSpotClass);
    __cxa_atexit(
      CLightSpot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLightSpot::GetEntityClassInternal(void)::g_EntityCLightSpotClass,
      &_dso_handle);
  }
  if ( g_pEntityCLightSpotClass != 0 )
    return &CLightSpot::GetEntityClassInternal(void)::g_EntityCLightSpotClass;
  if ( `guard variable for'CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo) != 0 )
  {
    if ( `guard variable for'CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo) != 0 )
    {
      EntityClassInfo = CPointEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo,
        "CLight",
        "light_s1",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo,
      "CLightSpot",
      "light_spot_s1",
      0,
      &CLight::GetEntityClassInfo(void)::g_EntityCLightClassInfo);
    __cxa_guard_release(&`guard variable for'CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo);
  }
  CLightSpot::GetEntityClassInternal(void)::g_EntityCLightSpotClass.m_pClassInfo = &CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo;
  CLightSpot::GetEntityClassInternal(void)::g_EntityCLightSpotClass.m_pBaseClassInfo = CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo.m_pBaseClassInfo;
  g_pEntityCLightSpotClass = &CLightSpot::GetEntityClassInternal(void)::g_EntityCLightSpotClass;
  CLightSpot::GetEntityClassInfo(void)::g_EntityCLightSpotClassInfo.m_pClass = &CLightSpot::GetEntityClassInternal(void)::g_EntityCLightSpotClass;
  CLightSpot::GetEntityClassInternal(void)::g_EntityCLightSpotClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLightSpotClass->m_pComponentOverrides = 0;
  return &CLightSpot::GetEntityClassInternal(void)::g_EntityCLightSpotClass;
}


// CLightSpotAlias_light_glspot::Schema_DynamicBinding  (line 234, @0x00000000022a5560, libserver.so)
// globals: CLightSpotAlias_light_glspot::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLightSpotAlias_light_glspot::Schema_DynamicBinding(
        const CLightSpotAlias_light_glspot *const this)
{
  return CLightSpotAlias_light_glspot::s_pSchemaBinding;
}


// CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 234, @0x00000000022a5570, libserver.so)
// globals: CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLightSpotAlias_light_glspot::CEntityInstanceEntityClass *const this)
{
  return CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::DestructInstance  (line 234, @0x00000000022a5580, libserver.so)  // inlines: Destruct<CLightSpotAlias_light_glspot>
void __fastcall CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::DestructInstance(
        CLightSpotAlias_light_glspot::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::FreeInstance  (line 234, @0x00000000022a55a0, libserver.so)
void __fastcall CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::FreeInstance(
        CLightSpotAlias_light_glspot::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::CanAllocate  (line 234, @0x00000000022a55c0, libserver.so)
bool __fastcall CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::CanAllocate(
        const CLightSpotAlias_light_glspot::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 234, @0x00000000022a55d0, libserver.so)
// globals: CLightSpotAlias_light_glspot::s_pSchemaBinding
const ISchemaBinding *__fastcall CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLightSpotAlias_light_glspot::CEntityInstanceEntityClass *const this)
{
  return CLightSpotAlias_light_glspot::s_pSchemaBinding;
}


// CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::AllocateInstance  (line 234, @0x00000000022a7f40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::AllocateInstance(
        CLightSpotAlias_light_glspot::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 800);
  memset(v1, 0, 0x320u);
  return v1;
}


// CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::ConstructInstance  (line 234, @0x00000000022a8970, libserver.so)  // inlines: CLight, CLightSpot, CLightSpotAlias_light_glspot, CPointEntity, CUtlSymbolLarge, Construct<CLightSpotAlias_light_glspot>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::ConstructInstance(
        CLightSpotAlias_light_glspot::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = 0;
    *p = &off_405A610;
  }
  return p;
}


// CLightSpotAlias_light_glspot::~CLightSpotAlias_light_glspot  (line 234, @0x00000000022a92e0, libserver.so)  // inlines: ~CLight, ~CLightSpot, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLightSpotAlias_light_glspot::~CLightSpotAlias_light_glspot(CLightSpotAlias_light_glspot *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CLightSpotAlias_light_glspot::~CLightSpotAlias_light_glspot  (line 234, @0x00000000022a9300, libserver.so)  // inlines: ~CLight, ~CLightSpot, ~CLightSpotAlias_light_glspot, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLightSpotAlias_light_glspot::~CLightSpotAlias_light_glspot(CLightSpotAlias_light_glspot *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 234, @0x00000000022aafa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLightSpotAlias_light_glspot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 234, @0x00000000022aafc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLightSpotAlias_light_glspot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLightSpotAlias_light_glspot::GetEntityClassInternal  (line 234, @0x00000000022b0270, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLightSpot::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLightSpotAlias_light_glspot"
// globals: `guard variable for'CLightSpotAlias_light_glspot::GetEntityClassInternal(void)::g_EntityCLightSpotAlias_light_glspotClass, CLightSpotAlias_light_glspot::GetEntityClassInternal(void)::g_EntityCLightSpotAlias_light_glspotClass, __dso_handle, CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLightSpotAlias_light_glspot::GetEntityClassInfo(void)::g_EntityCLightSpotAlias_light_glspotClassInfo, CLightSpotAlias_light_glspot::GetEntityClassInfo(void)::g_EntityCLightSpotAlias_light_glspotClassInfo
CEntityClass *__cdecl CLightSpotAlias_light_glspot::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLightSpotAlias_light_glspot::GetEntityClassInternal(void)::g_EntityCLightSpotAlias_light_glspotClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLightSpotAlias_light_glspot::GetEntityClassInternal(void)::g_EntityCLightSpotAlias_light_glspotClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLightSpotAlias_light_glspot::GetEntityClassInternal(void)::g_EntityCLightSpotAlias_light_glspotClass);
    CLightSpotAlias_light_glspot::GetEntityClassInternal(void)::g_EntityCLightSpotAlias_light_glspotClass._vptr_CEntityClass = off_405A590;
    __cxa_guard_release(&`guard variable for'CLightSpotAlias_light_glspot::GetEntityClassInternal(void)::g_EntityCLightSpotAlias_light_glspotClass);
    __cxa_atexit(
      CLightSpotAlias_light_glspot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLightSpotAlias_light_glspot::GetEntityClassInternal(void)::g_EntityCLightSpotAlias_light_glspotClass,
      &_dso_handle);
  }
  if ( g_pEntityCLightSpotAlias_light_glspotClass != 0 )
    return &CLightSpotAlias_light_glspot::GetEntityClassInternal(void)::g_EntityCLightSpotAlias_light_glspotClass;
  if ( `guard variable for'CLightSpotAlias_light_glspot::GetEntityClassInfo(void)::g_EntityCLightSpotAlias_light_glspotClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLightSpotAlias_light_glspot::GetEntityClassInfo(void)::g_EntityCLightSpotAlias_light_glspotClassInfo) != 0 )
  {
    EntityClassInfo = CLightSpot::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLightSpotAlias_light_glspot::GetEntityClassInfo(void)::g_EntityCLightSpotAlias_light_glspotClassInfo,
      "CLightSpotAlias_light_glspot",
      "light_glspot",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLightSpotAlias_light_glspot::GetEntityClassInfo(void)::g_EntityCLightSpotAlias_light_glspotClassInfo);
  }
  CLightSpotAlias_light_glspot::GetEntityClassInternal(void)::g_EntityCLightSpotAlias_light_glspotClass.m_pClassInfo = &CLightSpotAlias_light_glspot::GetEntityClassInfo(void)::g_EntityCLightSpotAlias_light_glspotClassInfo;
  CLightSpotAlias_light_glspot::GetEntityClassInternal(void)::g_EntityCLightSpotAlias_light_glspotClass.m_pBaseClassInfo = CLightSpotAlias_light_glspot::GetEntityClassInfo(void)::g_EntityCLightSpotAlias_light_glspotClassInfo.m_pBaseClassInfo;
  g_pEntityCLightSpotAlias_light_glspotClass = &CLightSpotAlias_light_glspot::GetEntityClassInternal(void)::g_EntityCLightSpotAlias_light_glspotClass;
  CLightSpotAlias_light_glspot::GetEntityClassInfo(void)::g_EntityCLightSpotAlias_light_glspotClassInfo.m_pClass = &CLightSpotAlias_light_glspot::GetEntityClassInternal(void)::g_EntityCLightSpotAlias_light_glspotClass;
  CLightSpotAlias_light_glspot::GetEntityClassInternal(void)::g_EntityCLightSpotAlias_light_glspotClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLightSpotAlias_light_glspotClass->m_pComponentOverrides = 0;
  return &CLightSpotAlias_light_glspot::GetEntityClassInternal(void)::g_EntityCLightSpotAlias_light_glspotClass;
}


// CLightDirectional::Schema_DynamicBinding  (line 235, @0x00000000022a55e0, libserver.so)
// globals: CLightDirectional::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLightDirectional::Schema_DynamicBinding(const CLightDirectional *const this)
{
  return CLightDirectional::s_pSchemaBinding;
}


// CLightDirectional::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 235, @0x00000000022a55f0, libserver.so)
// globals: CLightDirectional::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLightDirectional::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLightDirectional::CEntityInstanceEntityClass *const this)
{
  return CLightDirectional::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLightDirectional::CEntityInstanceEntityClass::DestructInstance  (line 235, @0x00000000022a5600, libserver.so)  // inlines: Destruct<CLightDirectional>
void __fastcall CLightDirectional::CEntityInstanceEntityClass::DestructInstance(
        CLightDirectional::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLightDirectional::CEntityInstanceEntityClass::FreeInstance  (line 235, @0x00000000022a5620, libserver.so)
void __fastcall CLightDirectional::CEntityInstanceEntityClass::FreeInstance(
        CLightDirectional::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLightDirectional::CEntityInstanceEntityClass::CanAllocate  (line 235, @0x00000000022a5640, libserver.so)
bool __fastcall CLightDirectional::CEntityInstanceEntityClass::CanAllocate(
        const CLightDirectional::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLightDirectional::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 235, @0x00000000022a5650, libserver.so)
// globals: CLightDirectional::s_pSchemaBinding
const ISchemaBinding *__fastcall CLightDirectional::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLightDirectional::CEntityInstanceEntityClass *const this)
{
  return CLightDirectional::s_pSchemaBinding;
}


// CLightDirectional::CEntityInstanceEntityClass::AllocateInstance  (line 235, @0x00000000022a7f80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLightDirectional::CEntityInstanceEntityClass::AllocateInstance(
        CLightDirectional::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 800);
  memset(v1, 0, 0x320u);
  return v1;
}


// CLightDirectional::CEntityInstanceEntityClass::ConstructInstance  (line 235, @0x00000000022a89b0, libserver.so)  // inlines: CLight, CLightDirectional, CPointEntity, CUtlSymbolLarge, Construct<CLightDirectional>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLightDirectional::CEntityInstanceEntityClass::ConstructInstance(
        CLightDirectional::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = 0;
    *p = &off_405AD30;
  }
  return p;
}


// CLightDirectional::~CLightDirectional  (line 235, @0x00000000022a9330, libserver.so)  // inlines: ~CLight, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLightDirectional::~CLightDirectional(CLightDirectional *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CLightDirectional::~CLightDirectional  (line 235, @0x00000000022a9350, libserver.so)  // inlines: ~CLight, ~CLightDirectional, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLightDirectional::~CLightDirectional(CLightDirectional *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLightDirectional::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 235, @0x00000000022aaff0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLightDirectional::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLightDirectional::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CLightDirectional::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 235, @0x00000000022ab010, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLightDirectional::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLightDirectional::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLightDirectional::GetEntityClassInternal  (line 235, @0x00000000022b03c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLight::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "light_directional_s1", "CLightDirectional"
// globals: `guard variable for'CLightDirectional::GetEntityClassInternal(void)::g_EntityCLightDirectionalClass, CLightDirectional::GetEntityClassInternal(void)::g_EntityCLightDirectionalClass, __dso_handle, CLightDirectional::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLightDirectional::GetEntityClassInfo(void)::g_EntityCLightDirectionalClassInfo, CLightDirectional::GetEntityClassInfo(void)::g_EntityCLightDirectionalClassInfo
CEntityClass *__cdecl CLightDirectional::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLightDirectional::GetEntityClassInternal(void)::g_EntityCLightDirectionalClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLightDirectional::GetEntityClassInternal(void)::g_EntityCLightDirectionalClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLightDirectional::GetEntityClassInternal(void)::g_EntityCLightDirectionalClass);
    CLightDirectional::GetEntityClassInternal(void)::g_EntityCLightDirectionalClass._vptr_CEntityClass = off_405ACB0;
    __cxa_guard_release(&`guard variable for'CLightDirectional::GetEntityClassInternal(void)::g_EntityCLightDirectionalClass);
    __cxa_atexit(
      CLightDirectional::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLightDirectional::GetEntityClassInternal(void)::g_EntityCLightDirectionalClass,
      &_dso_handle);
  }
  if ( g_pEntityCLightDirectionalClass != 0 )
    return &CLightDirectional::GetEntityClassInternal(void)::g_EntityCLightDirectionalClass;
  if ( `guard variable for'CLightDirectional::GetEntityClassInfo(void)::g_EntityCLightDirectionalClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLightDirectional::GetEntityClassInfo(void)::g_EntityCLightDirectionalClassInfo) != 0 )
  {
    EntityClassInfo = CLight::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLightDirectional::GetEntityClassInfo(void)::g_EntityCLightDirectionalClassInfo,
      "CLightDirectional",
      "light_directional_s1",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLightDirectional::GetEntityClassInfo(void)::g_EntityCLightDirectionalClassInfo);
  }
  CLightDirectional::GetEntityClassInternal(void)::g_EntityCLightDirectionalClass.m_pClassInfo = &CLightDirectional::GetEntityClassInfo(void)::g_EntityCLightDirectionalClassInfo;
  CLightDirectional::GetEntityClassInternal(void)::g_EntityCLightDirectionalClass.m_pBaseClassInfo = CLightDirectional::GetEntityClassInfo(void)::g_EntityCLightDirectionalClassInfo.m_pBaseClassInfo;
  g_pEntityCLightDirectionalClass = &CLightDirectional::GetEntityClassInternal(void)::g_EntityCLightDirectionalClass;
  CLightDirectional::GetEntityClassInfo(void)::g_EntityCLightDirectionalClassInfo.m_pClass = &CLightDirectional::GetEntityClassInternal(void)::g_EntityCLightDirectionalClass;
  CLightDirectional::GetEntityClassInternal(void)::g_EntityCLightDirectionalClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLightDirectionalClass->m_pComponentOverrides = 0;
  return &CLightDirectional::GetEntityClassInternal(void)::g_EntityCLightDirectionalClass;
}


