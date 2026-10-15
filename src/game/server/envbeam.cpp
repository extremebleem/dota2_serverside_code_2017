// Reconstructed from DWARF by pahole; not original source.

// src/game/server/envbeam.cpp:30
class CEnvBeam : public CBeam {
public:

private:

	static datamap_t m_DataMap;

protected:

	int m_active;  // +0x520

	HMaterialStrong m_spriteTexture;  // +0x528
	string_t m_iszStartEntity;  // +0x530
	string_t m_iszEndEntity;  // +0x538
	float m_life;  // +0x540
	float m_boltWidth;  // +0x544
	float m_noiseAmplitude;  // +0x548
	int m_speed;  // +0x54c
	float m_restrike;  // +0x550

	string_t m_iszSpriteName;  // +0x558
	int m_frameStart;  // +0x560
	float m_radius;  // +0x57c

	string_t m_iFilterName;  // +0x588
	EHANDLE m_hFilter;  // +0x590

	string_t m_iszDecal;  // +0x598
	COutputEvent m_OnTouchedByEntity;  // +0x5a0
	typedef CBeam BaseClass;

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
	CEnvBeam(CEnvBeam &);
	CEnvBeam(CEnvBeam &);
	CEnvBeam();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Activate(ActivateType_t);
	void StrikeThink();
	void UpdateThink();
	void RandomArea();
	void RandomPoint(const Vector &);
	void Zap(const Vector &, const Vector &);
	void Strike();
	bool PassesTouchFilters(CBaseEntity *);
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	void InputToggle(inputdata_t &);
	void InputStrikeOnce(inputdata_t &);
	void TurnOn();
	void TurnOff();
	void Toggle();
	virtual const char * GetDecalName();
	bool ServerSide();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void BeamUpdateVars();
	bool HasEndPointHandle();
	virtual ~CEnvBeam();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[10] Activate
	// vtable[214] GetDecalName
	// vtable[34] GetDataDescMap
	// sizeof = 1464
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvBeam::~CEnvBeam  (line 30, @0x00000000022192f0, libserver.so)  // inlines: ~CBeam, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CEnvBeam::~CEnvBeam(CEnvBeam *const this)
{
  CStrongHandle<InfoForResourceTypeIMaterial2> *p_m_spriteTexture; // rdi

  p_m_spriteTexture = &this->m_spriteTexture;
  p_m_spriteTexture[-165].m_pBinding = &off_402CB50;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(p_m_spriteTexture);
  this->_vptr_IHandleEntity = &off_4009D10;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_nHaloIndex.m_Value);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hBaseMaterial.m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CEnvBeam::~CEnvBeam  (line 30, @0x0000000002219350, libserver.so)  // inlines: ~CBeam, ~CEnvBeam, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CEnvBeam::~CEnvBeam(CEnvBeam *const this)
{
  CStrongHandle<InfoForResourceTypeIMaterial2> *p_m_spriteTexture; // rdi

  p_m_spriteTexture = &this->m_spriteTexture;
  p_m_spriteTexture[-165].m_pBinding = &off_402CB50;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(p_m_spriteTexture);
  this->_vptr_IHandleEntity = &off_4009D10;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_nHaloIndex.m_Value);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_hBaseMaterial.m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvBeam::GetEntityClass  (line 32, @0x000000000220dd60, libserver.so)
CEntityClass *__cdecl CEnvBeam::GetEntityClass()
{
  return g_pEntityCEnvBeamClass;
}


// CEnvBeam::Schema_DynamicBinding  (line 32, @0x000000000220dd70, libserver.so)
// globals: CEnvBeam::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvBeam::Schema_DynamicBinding(const CEnvBeam *const this)
{
  return CEnvBeam::s_pSchemaBinding;
}


// CEnvBeam::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x000000000220dd80, libserver.so)
// globals: CEnvBeam::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvBeam::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvBeam::CEntityInstanceEntityClass *const this)
{
  return CEnvBeam::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvBeam::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x000000000220dd90, libserver.so)  // inlines: Destruct<CEnvBeam>
void __fastcall CEnvBeam::CEntityInstanceEntityClass::DestructInstance(
        CEnvBeam::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvBeam::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x000000000220ddb0, libserver.so)
void __fastcall CEnvBeam::CEntityInstanceEntityClass::FreeInstance(
        CEnvBeam::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvBeam::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x000000000220ddd0, libserver.so)
bool __fastcall CEnvBeam::CEntityInstanceEntityClass::CanAllocate(
        const CEnvBeam::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvBeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x000000000220dde0, libserver.so)
// globals: CEnvBeam::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvBeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvBeam::CEntityInstanceEntityClass *const this)
{
  return CEnvBeam::s_pSchemaBinding;
}


// CEnvBeam::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x000000000220f9e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvBeam::CEntityInstanceEntityClass::AllocateInstance(
        CEnvBeam::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1464);
  memset(v1, 0, 0x5B8u);
  return v1;
}


// CEnvBeam::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x0000000002210ec0, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CEnvBeam, CHandle, CStrongHandle, CUtlSymbolLarge, Construct<CEnvBeam>
// calls: CBeam::CBeam
CEntityInstance *__fastcall CEnvBeam::CEntityInstanceEntityClass::ConstructInstance(
        CEnvBeam::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBeam::CBeam(p);
    *(p + 165) = 0;
    *p = &off_402CB50;
    *(p + 166) = 0;
    *(p + 167) = 0;
    *(p + 171) = 0;
    *(p + 177) = 0;
    *(p + 356) = -1;
    *(p + 179) = 0;
    *(p + 180) = off_3F7C190;
  }
  return p;
}


// CEnvBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002212580, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvBeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x00000000022125a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvBeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvBeam::GetEntityClassInternal  (line 32, @0x0000000002215250, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "env_beam", "CEnvBeam", "CBeam"
// globals: `guard variable for'CEnvBeam::GetEntityClassInternal(void)::g_EntityCEnvBeamClass, CEnvBeam::GetEntityClassInternal(void)::g_EntityCEnvBeamClass, __dso_handle, CEnvBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvBeam::GetEntityClassInfo(void)::g_EntityCEnvBeamClassInfo, CEnvBeam::GetEntityClassInfo(void)::g_EntityCEnvBeamClassInfo, `guard variable for'CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo, CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo
CEntityClass *__cdecl CEnvBeam::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvBeam::GetEntityClassInternal(void)::g_EntityCEnvBeamClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvBeam::GetEntityClassInternal(void)::g_EntityCEnvBeamClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvBeam::GetEntityClassInternal(void)::g_EntityCEnvBeamClass);
    CEnvBeam::GetEntityClassInternal(void)::g_EntityCEnvBeamClass._vptr_CEntityClass = off_402CAD0;
    __cxa_guard_release(&`guard variable for'CEnvBeam::GetEntityClassInternal(void)::g_EntityCEnvBeamClass);
    __cxa_atexit(
      CEnvBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvBeam::GetEntityClassInternal(void)::g_EntityCEnvBeamClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvBeamClass != 0 )
    return &CEnvBeam::GetEntityClassInternal(void)::g_EntityCEnvBeamClass;
  if ( `guard variable for'CEnvBeam::GetEntityClassInfo(void)::g_EntityCEnvBeamClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvBeam::GetEntityClassInfo(void)::g_EntityCEnvBeamClassInfo) != 0 )
  {
    if ( `guard variable for'CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo,
        "CBeam",
        "beam",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvBeam::GetEntityClassInfo(void)::g_EntityCEnvBeamClassInfo,
      "CEnvBeam",
      "env_beam",
      0,
      &CBeam::GetEntityClassInfo(void)::g_EntityCBeamClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvBeam::GetEntityClassInfo(void)::g_EntityCEnvBeamClassInfo);
  }
  CEnvBeam::GetEntityClassInternal(void)::g_EntityCEnvBeamClass.m_pClassInfo = &CEnvBeam::GetEntityClassInfo(void)::g_EntityCEnvBeamClassInfo;
  CEnvBeam::GetEntityClassInternal(void)::g_EntityCEnvBeamClass.m_pBaseClassInfo = CEnvBeam::GetEntityClassInfo(void)::g_EntityCEnvBeamClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvBeamClass = &CEnvBeam::GetEntityClassInternal(void)::g_EntityCEnvBeamClass;
  CEnvBeam::GetEntityClassInfo(void)::g_EntityCEnvBeamClassInfo.m_pClass = &CEnvBeam::GetEntityClassInternal(void)::g_EntityCEnvBeamClass;
  CEnvBeam::GetEntityClassInternal(void)::g_EntityCEnvBeamClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCEnvBeamClass->m_pComponentOverrides = 0;
  return &CEnvBeam::GetEntityClassInternal(void)::g_EntityCEnvBeamClass;
}


// CEnvBeam::GetDecalName  (line 61, @0x000000000220ddf0, libserver.so)  // inlines: String, ToCStr
const char *__fastcall CEnvBeam::GetDecalName(CEnvBeam *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_iszDecal.u.m_Id != 0 )
    return this->m_iszDecal.u.m_pAsString;
  return result;
}


// CEnvBeam::GetDataDescMap  (line 113, @0x00000000021ee580, libserver.so)
// globals: CEnvBeam::m_DataMap
datamap_t *__fastcall CEnvBeam::GetDataDescMap(CEnvBeam *const this)
{
  return &CEnvBeam::m_DataMap;
}


// CEnvBeam::AddDatadescMetadataKeys  (line 113, @0x00000000021f64a0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvBeam::GetEntityClass(void)
void __fastcall CEnvBeam::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvBeam::GetEntityClass);
}


// CEnvBeam::GetBaseMap  (line 113, @0x00000000021f64c0, libserver.so)
datamap_t *__cdecl CEnvBeam::GetBaseMap()
{
  return &CBeam::m_DataMap;
}


// DataMapInit<CEnvBeam>  (line 113, @0x0000000002205640, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CEnvBeam"
// globals: `guard variable for'DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder, `guard variable for'DataMapInit<CEnvBeam>(CEnvBeam *)::dataDesc, CEnvBeam::GetEntityClass(void), CEnvBeam::m_DataMap, DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvBeam>(CEnvBeam *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_pszBase = "CEnvBeam";
    DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_nLenBase = 8;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder,
      &_dso_handle);
  }
  CEnvBeam::m_DataMap.baseMap = &CBeam::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvBeam>(CEnvBeam *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvBeam>(CEnvBeam *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v2, DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_pszBase), "StrikeThink");
    m_Size = DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Size == DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CEnvBeam>(CEnvBeam *)::dataDesc[18].fieldName = v2;
    v6 = operator new[](DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v6, DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_pszBase), "UpdateThink");
    v7 = DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Size == DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CEnvBeam>(CEnvBeam *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CEnvBeam>(CEnvBeam *)::dataDesc[19].fieldName = v6;
    DataMapInit<CEnvBeam>(CEnvBeam *)::dataDesc[24].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvBeam>(CEnvBeam *)::dataDesc);
  }
  CEnvBeam::m_DataMap.dataNumFields = 25;
  CEnvBeam::m_DataMap.dataDesc = &DataMapInit<CEnvBeam>(CEnvBeam *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvBeam::m_DataMap, CEnvBeam::GetEntityClass);
  return &CEnvBeam::m_DataMap;
}


// CleanupBeamMaterialString  (line 152, @0x00000000021f64d0, libserver.so)  // inlines: String, ToCStr, V_SetExtension<int>, V_stristr_fast, V_strncpy<int>
// calls: _V_strncpy, V_stristr_fast(char const*,char const*), _V_SetExtension
// callers: CEnvBeam::Precache, CEnvBeam::Spawn
void __fastcall CleanupBeamMaterialString(char *pOutputString, unsigned int nOutputStringLength, string_t nInputString)
{
  const char *v4; // rsi

  v4 = "";
  if ( *nInputString.u.m_Id != 0 )
    v4 = *nInputString.u.m_pAsString;
  _V_strncpy(pOutputString, v4, nOutputStringLength);
  if ( V_stristr_fast(pOutputString, ".vmat") == 0 )
    _V_SetExtension(pOutputString, ".vmat", nOutputStringLength);
}


// CEnvBeam::Spawn  (line 164, @0x0000000002204950, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, IsZero, NetworkStateChanged, ServerSide, Set, SetEndWidth, SetFireTime, SetWidth, TransformPointWorldToEntity, VectorITransform, VectorSubtract, Zero, curtime, operator=, operator=<float>, operator==
// calls: CBeam::Spawn, CleanupBeamMaterialString, GetMaterialIndex, CStrongHandle<InfoForResourceTypeIMaterial2>::Init, CBaseEntity::GetAbsAngles, CBaseEntity::EntityToWorldTransform, VectorITransform, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CGlobalVarsBase::curtime, CBaseEntity::GetAbsOrigin, CBaseEntity::AddEffects (13 total)
// callers: CEnvBeam::Spawn
// globals: CEnvBeam::UpdateThink(void), CEnvBeam::StrikeThink(void)
void __fastcall CEnvBeam::Spawn(CEnvBeam *const this, const CEntityKeyValues *pKeyValues)
{
  __m128 m_noiseAmplitude_low; // xmm1
  bool v4; // zf
  __m128 v5; // xmm0
  __m128 m_boltWidth_low; // xmm1
  __m128 v7; // xmm0
  float v8; // xmm0_4
  float x; // xmm0_4
  float y; // xmm0_4
  const QAngle *AbsAngles; // rax
  const matrix3x4_t *v12; // rax
  double v13; // xmm1_8
  CGlobalVars *v14; // r13
  double v15; // xmm0_8
  CGlobalVars *v16; // r13
  FnGlobalVarsWarningFunc v17; // rax
  float m_flCurrentTime; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  __m128 m_Value_low; // xmm2
  __m128 v21; // xmm0
  float v22; // xmm0_4
  double v23; // xmm0_8
  double v24; // xmm1_8
  const Vector *AbsOrigin; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float z; // xmm0_4
  double v28; // xmm1_8
  float v29; // [rsp+Ch] [rbp-244h]
  float v30; // [rsp+Ch] [rbp-244h]
  float v31; // [rsp+Ch] [rbp-244h]
  string_t nInputString; // [rsp+10h] [rbp-240h] BYREF
  char fixedname[520]; // [rsp+20h] [rbp-230h] BYREF
  unsigned __int64 v34; // [rsp+228h] [rbp-28h]

  v34 = __readfsqword(0x28u);
  CBeam::Spawn(this, pKeyValues);
  nInputString.u.m_Id = this->m_iszSpriteName.u.m_Id;
  CleanupBeamMaterialString(fixedname, 0x200u, &nInputString);
  GetMaterialIndex(fixedname);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_spriteTexture, nInputString.u.m_Id);
  m_noiseAmplitude_low = LODWORD(this->m_noiseAmplitude);
  v4 = (this->m_spawnflags.m_Value & 0x200) == 0;
  v5 = _mm_cmplt_ss(0x42800000u, m_noiseAmplitude_low);
  LODWORD(this->m_noiseAmplitude) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v5, m_noiseAmplitude_low).m128_f32[0])
                                  | v5.m128_i32[0] & 0x42800000;
  m_boltWidth_low = LODWORD(this->m_boltWidth);
  v7 = _mm_cmplt_ss(0x42CC999Au, m_boltWidth_low);
  LODWORD(v8) = _mm_andnot_ps(v7, m_boltWidth_low).m128_u32[0] | v7.m128_i32[0] & 0x42CC999A;
  if ( v4 )
  {
    m_Value_low = LODWORD(this->m_fWidth.m_Value);
    if ( m_Value_low.m128_f32[0] != v8 )
    {
      v29 = v8;
      (*(this->_vptr_IHandleEntity + 22))(this, 1252, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_fWidth.m_Value = v29;
      m_Value_low = LODWORD(v29);
    }
    v21 = _mm_cmplt_ss(0x42CC999Au, m_Value_low);
    LODWORD(v22) = _mm_andnot_ps(v21, m_Value_low).m128_u32[0] | v21.m128_i32[0] & 0x42CC999A;
    if ( v22 != this->m_fEndWidth.m_Value )
    {
      v31 = v22;
      (*(this->_vptr_IHandleEntity + 22))(this, 1256, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_fEndWidth.m_Value = v31;
    }
  }
  else
  {
    if ( v8 != this->m_fWidth.m_Value )
    {
      v30 = v8;
      (*(this->_vptr_IHandleEntity + 22))(this, 1252, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_fWidth.m_Value = v30;
    }
    if ( this->m_fEndWidth.m_Value != 0.0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1256, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_fEndWidth.m_Value = 0.0;
    }
  }
  x = this->m_vEndPointWorld.x;
  if ( x <= -0.0099999998
    || x >= 0.0099999998
    || (y = this->m_vEndPointWorld.y) <= -0.0099999998
    || y >= 0.0099999998
    || (z = this->m_vEndPointWorld.z) <= -0.0099999998
    || z >= 0.0099999998 )
  {
    AbsAngles = CBaseEntity::GetAbsAngles(this);
    if ( vec3_angle.x == AbsAngles->x && vec3_angle.y == AbsAngles->y && vec3_angle.z == AbsAngles->z )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      this->m_vEndPointRelative.x = this->m_vEndPointWorld.x - AbsOrigin->x;
      this->m_vEndPointRelative.y = this->m_vEndPointWorld.y - AbsOrigin->y;
      this->m_vEndPointRelative.z = this->m_vEndPointWorld.z - AbsOrigin->z;
    }
    else
    {
      v12 = CBaseEntity::EntityToWorldTransform(this);
      VectorITransform(&this->m_vEndPointWorld.x, v12, &this->m_vEndPointRelative.x);
    }
  }
  else
  {
    this->m_vEndPointRelative.z = 0.0;
    this->m_vEndPointRelative.y = 0.0;
    this->m_vEndPointRelative.x = 0.0;
  }
  if ( this->m_life != 0.0 || (this->m_spawnflags.m_Value & 8) != 0 )
  {
    this->m_active = 0;
    if ( this->m_pEntity->m_name.u.m_Id == 0 || (this->m_spawnflags.m_Value & 1) != 0 )
    {
      CBaseEntity::ThinkSet(this, CEnvBeam::StrikeThink, 0.0, 0, 0);
      *&v23 = CGlobalVarsBase::curtime(gpGlobals, 0) + 1.0;
      CBaseEntity::SetNextThink(this, v23, v24, 0);
    }
  }
  else
  {
    CBaseEntity::ThinkSet(this, CEnvBeam::UpdateThink, 0.0, 0, 0);
    v14 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      *&v15 = LODWORD(v14->m_flCurrentTime);
    }
    else
    {
      *&v15 = _mm_cvtsi32_si128(0).m128i_u64[0];
    }
    CBaseEntity::SetNextThink(this, v15, v13, 0);
    v16 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v17 = gpGlobals->m_pfnWarningFunc;
        if ( v17 != 0 )
          v17(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      m_flCurrentTime = v16->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    m_pEntity = this->m_pEntity;
    this->m_flFireTime = m_flCurrentTime;
    if ( m_pEntity->m_name.u.m_Id != 0 )
    {
      if ( (this->m_spawnflags.m_Value & 1) != 0 )
      {
        this->m_active = 1;
      }
      else
      {
        CBaseEntity::AddEffects(this, 32);
        this->m_active = 0;
        CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v28, 0);
      }
    }
  }
}


// CEnvBeam::Spawn  (line 164, @0x0000000002204eb0, libserver.so)
// calls: CEnvBeam::Spawn, CBaseEntity::ThinkSet
void __fastcall CEnvBeam::Spawn(CEnvBeam *const this, const CEntityKeyValues *pKeyValues)
{
  if ( this->m_iszSpriteName.u.m_Id != 0 )
    CEnvBeam::Spawn(this, pKeyValues);
  else
    CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
}


// CEnvBeam::Precache  (line 240, @0x00000000021f6530, libserver.so)  // inlines: CUtlSymbolLarge
// calls: CleanupBeamMaterialString, PrecacheMaterial, CBeam::Precache, __stack_chk_fail
void __fastcall CEnvBeam::Precache(CEnvBeam *const this, const CEntityPrecacheContext *pContext)
{
  string_t nInputString; // [rsp+0h] [rbp-240h] BYREF
  char fixedname[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v6; // [rsp+218h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  nInputString.u.m_Id = this->m_iszSpriteName.u.m_Id;
  CleanupBeamMaterialString(fixedname, 0x200u, &nInputString);
  PrecacheMaterial(fixedname, pContext);
  CBeam::Precache(this, pContext);
}


// CEnvBeam::Activate  (line 254, @0x000000000220c9b0, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntryIndex, GetSerialNumber, ServerSide, Set, operator!=, operator=
// calls: CBeam::Activate, CEnvBeam::BeamUpdateVars, CGameEntitySystem::FindEntityByName, __dynamic_cast
// globals: `typeinfo for'CBaseFilter
void __fastcall CEnvBeam::Activate(CEnvBeam *const this, ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int16 v8; // cx
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  if ( this->m_iFilterName.u.m_Id != 0 )
  {
    iszName.u.m_Id = this->m_iFilterName.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
    if ( EntityByName != 0
      && (v5 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseFilter, 0)) != 0
      && (v6 = v5[1]) != 0 )
    {
      v7 = (*(v6 + 16) >> 15) - (*(v6 + 48) & 1);
      v8 = 0x7FFF;
      if ( *(v6 + 16) != -1 )
        v8 = *(v6 + 16) & 0x7FFF;
      LOWORD(this->m_hFilter.m_Index) = v8 | this->m_hFilter.m_Index & 0x8000;
      this->m_hFilter.m_Index = (v7 << 15) | this->m_hFilter.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hFilter.m_Index = -1;
    }
  }
  CBeam::Activate(this, activateType);
  if ( this->m_life == 0.0 && (this->m_spawnflags.m_Value & 8) == 0 )
    CEnvBeam::BeamUpdateVars(this);
}


// CEnvBeam::InputTurnOn  (line 273, @0x00000000021f6770, libserver.so)
// calls: CEnvBeam::TurnOn
void __fastcall CEnvBeam::InputTurnOn(CEnvBeam *const this, inputdata_t *const inputdata)
{
  if ( this->m_active == 0 )
    CEnvBeam::TurnOn(this);
}


// CEnvBeam::InputTurnOff  (line 285, @0x00000000021f6800, libserver.so)
// calls: CEnvBeam::TurnOff
void __fastcall CEnvBeam::InputTurnOff(CEnvBeam *const this, inputdata_t *const inputdata)
{
  if ( this->m_active != 0 )
    CEnvBeam::TurnOff(this);
}


// CEnvBeam::InputToggle  (line 297, @0x00000000021f6820, libserver.so)
// calls: CEnvBeam::TurnOn, CEnvBeam::TurnOff
void __fastcall CEnvBeam::InputToggle(CEnvBeam *const this, inputdata_t *const inputdata)
{
  if ( this->m_active != 0 )
    CEnvBeam::TurnOff(this);
  else
    CEnvBeam::TurnOn(this);
}


// CEnvBeam::InputStrikeOnce  (line 315, @0x00000000021f7210, libserver.so)
// calls: CEnvBeam::Strike
void __fastcall CEnvBeam::InputStrikeOnce(CEnvBeam *const this, inputdata_t *const inputdata)
{
  CEnvBeam::Strike(this);
}


// CEnvBeam::TurnOn  (line 325, @0x00000000021f65c0, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects, ServerSide, SetFireTime, curtime
// calls: CBaseEntity::DispatchUpdateTransmitState, CBeam::GetAbsEndPos, CBeam::GetAbsStartPos, CBeam::DoSparks, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// callers: CEnvBeam::InputTurnOn, CEnvBeam::InputToggle
// globals: CEnvBeam::UpdateThink(void), CEnvBeam::StrikeThink(void)
void __fastcall CEnvBeam::TurnOn(CEnvBeam *const this)
{
  const Vector *AbsEndPos; // r12
  const Vector *AbsStartPos; // rax
  double v4; // xmm1_8
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc v6; // rax
  double v7; // xmm0_8
  CGlobalVars *v8; // r12
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc v10; // rax
  double v11; // xmm1_8
  CGlobalVars *v12; // r12
  double v13; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  this->m_active = 1;
  if ( this->m_life != 0.0 || (this->m_spawnflags.m_Value & 8) != 0 )
  {
    CBaseEntity::ThinkSet(this, CEnvBeam::StrikeThink, 0.0, 0, 0);
    v12 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      *&v13 = LODWORD(v12->m_flCurrentTime);
    }
    else
    {
      v13 = 0.0;
    }
    CBaseEntity::SetNextThink(this, v13, v11, 0);
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
    this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    CBaseEntity::DispatchUpdateTransmitState(this);
    AbsEndPos = CBeam::GetAbsEndPos(this);
    AbsStartPos = CBeam::GetAbsStartPos(this);
    CBeam::DoSparks(this, AbsStartPos, AbsEndPos);
    CBaseEntity::ThinkSet(this, CEnvBeam::UpdateThink, 0.0, 0, 0);
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v6 = gpGlobals->m_pfnWarningFunc;
        if ( v6 != 0 )
          v6(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      *&v7 = LODWORD(v5->m_flCurrentTime);
    }
    else
    {
      v7 = 0.0;
    }
    CBaseEntity::SetNextThink(this, v7, v4, 0);
    v8 = gpGlobals;
    m_flCurrentTime = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v10 = gpGlobals->m_pfnWarningFunc;
        if ( v10 != 0 )
          (v10)(1, 0.0);
      }
      m_flCurrentTime = v8->m_flCurrentTime;
    }
    this->m_flFireTime = m_flCurrentTime;
  }
}


// CEnvBeam::TurnOff  (line 349, @0x00000000021f6790, libserver.so)  // inlines: ServerSide
// calls: CBaseEntity::AddEffects, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet
// callers: CEnvBeam::InputTurnOff, CEnvBeam::InputToggle
void __fastcall CEnvBeam::TurnOff(CEnvBeam *const this)
{
  double v1; // xmm1_8

  this->m_active = 0;
  if ( this->m_life == 0.0 && (this->m_spawnflags.m_Value & 8) == 0 )
    CBaseEntity::AddEffects(this, 32);
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v1, 0);
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CEnvBeam::StrikeThink  (line 366, @0x00000000021f7ed0, libserver.so)  // inlines: HasEndPointHandle, IsZero, String, ToCStr, curtime
// calls: CBeam::RandomTargetname, CBaseEntity::GetAbsOrigin, CEnvBeam::RandomPoint, CEnvBeam::Strike, CBaseEntity::SetNextThink, Msg, CEnvBeam::RandomArea
// strings: "env_beam: unknown entity \"%s\"\n"
void __fastcall CEnvBeam::StrikeThink(CEnvBeam *const this)
{
  double v1; // xmm1_8
  double v3; // xmm0_8
  bool v4; // zf
  float x; // xmm0_4
  float y; // xmm0_4
  float z; // xmm0_4
  CBaseEntity *v8; // rdi
  const Vector *AbsOrigin; // rax
  CGlobalVars *v10; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v12; // xmm0_8
  double v13; // xmm1_8
  FnGlobalVarsWarningFunc v14; // rax
  const char *m_pAsString; // rsi
  float v16; // [rsp-14h] [rbp-1Ch]

  v1 = 0.0;
  *&v3 = LODWORD(this->m_life);
  if ( *&v3 != 0.0 )
  {
    v10 = gpGlobals;
    if ( (this->m_spawnflags.m_Value & 4) != 0 )
    {
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
          {
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            *&v3 = this->m_life;
          }
        }
        *&v1 = v10->m_flCurrentTime;
      }
      v16 = *&v1 + *&v3;
      v12 = (*(*random_valve + 8LL))(random_valve, 0.0, this->m_restrike);
      *&v12 = *&v12 + v16;
      CBaseEntity::SetNextThink(this, v12, v13, 0);
    }
    else
    {
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v14 = gpGlobals->m_pfnWarningFunc;
          if ( v14 != 0 )
          {
            v14(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            *&v3 = LODWORD(this->m_life);
          }
        }
        *&v1 = LODWORD(v10->m_flCurrentTime);
      }
      *&v3 = (*&v3 + *&v1) + this->m_restrike;
      CBaseEntity::SetNextThink(this, v3, v1, 0);
    }
  }
  v4 = this->m_iszEndEntity.u.m_Id == 0;
  this->m_active = 1;
  if ( v4
    && (x = this->m_vEndPointRelative.x) > -0.0099999998
    && x < 0.0099999998
    && (y = this->m_vEndPointRelative.y) > -0.0099999998
    && y < 0.0099999998
    && (z = this->m_vEndPointRelative.z) > -0.0099999998
    && z < 0.0099999998 )
  {
    if ( this->m_iszStartEntity.u.m_Id != 0 )
    {
      v8 = CBeam::RandomTargetname(this, this->m_iszStartEntity.u.m_pAsString);
      if ( v8 != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
        CEnvBeam::RandomPoint(this, AbsOrigin);
      }
      else
      {
        m_pAsString = "";
        if ( this->m_iszStartEntity.u.m_Id != 0 )
          m_pAsString = this->m_iszStartEntity.u.m_pAsString;
        Msg("env_beam: unknown entity \"%s\"\n", m_pAsString);
      }
    }
    else
    {
      CEnvBeam::RandomArea(this);
    }
  }
  else
  {
    CEnvBeam::Strike(this);
  }
}


// CEnvBeam::Strike  (line 405, @0x00000000021f6840, libserver.so)  // inlines: BeamDamageInstant, CBroadcastRecipientFilter, CGameTrace, CWeakHandle, EnableInteractsWith, FromUntypedHandleUnchecked, GetFloat, HasEndPointHandle, Init, InitUntypedUnchecked, IsZero, LengthSqr, Ray_t, RnCollisionAttr_t, StaticInvalidHandle, String, ToCStr, TraceRay, TransformPointEntityToWorld, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorSubtract, VectorTransform, entindex, operator CWeakHandle<InfoForResourceTypeIMaterial2>, operator=, operator==, ~CBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CBeam::RandomTargetname, CBaseEntity::GetAbsOrigin, IsStaticPointEntity, CEntityInstance::GetEntityIndex, CBeam::DoSparks, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CGlobalVarsBase::curtime, CBeam::BeamDamage (18 total)
// callers: CEnvBeam::InputStrikeOnce, CEnvBeam::StrikeThink
void __fastcall CEnvBeam::Strike(CEnvBeam *const this)
{
  const char *m_pAsString; // rsi
  CBaseEntity *v3; // r14
  const char *v4; // rsi
  CBaseEntity *v5; // rax
  CBaseEntity *v6; // r15
  bool v7; // r13
  int m_speed; // eax
  int v9; // edx
  bool v10; // al
  float v11; // xmm2_4
  void (__fastcall *v12)(ITempEntsSystem *, CBroadcastRecipientFilter *, __int64, const Vector *, _QWORD, Vector *, double, float, float, float, float, trace_t *, Ray_t *, int, int, _DWORD, int, int, int, int, int); // rcx
  __int64 v13; // rdx
  const Vector *v14; // rcx
  const Vector *v15; // rax
  const Vector *v16; // r15
  const Vector *v17; // rax
  float m_fValue; // xmm0_4
  vec_t v19; // xmm1_4
  float x; // xmm0_4
  float y; // xmm0_4
  float z; // xmm0_4
  const QAngle *AbsAngles; // rax
  const matrix3x4_t *v24; // rax
  int (**vptr_IPredictionSystem)(...); // rax
  int (*v26)(...); // rax
  __int64 m_Data; // rdx
  const Vector *AbsOrigin; // rax
  int (*v29)(...); // rax
  __int64 v30; // rdx
  const Vector *v31; // rax
  unsigned int v32; // [rsp+54h] [rbp-30Ch]
  Vector *p_vEndPointLocation; // [rsp+58h] [rbp-308h]
  CEntityIndex v34; // [rsp+58h] [rbp-308h]
  CEntityIndex v35; // [rsp+58h] [rbp-308h]
  int v36; // [rsp+60h] [rbp-300h]
  int m_frameStart; // [rsp+60h] [rbp-300h]
  int v38; // [rsp+60h] [rbp-300h]
  int v39; // [rsp+64h] [rbp-2FCh]
  int m_Value; // [rsp+64h] [rbp-2FCh]
  int v41; // [rsp+64h] [rbp-2FCh]
  float v42; // [rsp+68h] [rbp-2F8h]
  float m_life; // [rsp+68h] [rbp-2F8h]
  float v44; // [rsp+68h] [rbp-2F8h]
  float v45; // [rsp+6Ch] [rbp-2F4h]
  float m_boltWidth; // [rsp+6Ch] [rbp-2F4h]
  float v47; // [rsp+6Ch] [rbp-2F4h]
  int v48; // [rsp+70h] [rbp-2F0h]
  float m_noiseAmplitude; // [rsp+70h] [rbp-2F0h]
  int v50; // [rsp+70h] [rbp-2F0h]
  int v51; // [rsp+74h] [rbp-2ECh]
  int v52; // [rsp+74h] [rbp-2ECh]
  int v53; // [rsp+74h] [rbp-2ECh]
  int v54; // [rsp+78h] [rbp-2E8h]
  int v55; // [rsp+78h] [rbp-2E8h]
  int v56; // [rsp+78h] [rbp-2E8h]
  int v57; // [rsp+7Ch] [rbp-2E4h]
  int v58; // [rsp+7Ch] [rbp-2E4h]
  int v59; // [rsp+7Ch] [rbp-2E4h]
  void (__fastcall *v60)(ITempEntsSystem *, CBroadcastRecipientFilter *, __int64, const Vector *, _QWORD, Vector *, double, float, float, float, float, trace_t *, Ray_t *, int, int, _DWORD, int, int, int, int, int); // [rsp+80h] [rbp-2E0h]
  int v61; // [rsp+80h] [rbp-2E0h]
  int v62; // [rsp+80h] [rbp-2E0h]
  float v63; // [rsp+88h] [rbp-2D8h]
  int v64; // [rsp+88h] [rbp-2D8h]
  int (*v65)(...); // [rsp+88h] [rbp-2D8h]
  int ray; // [rsp+90h] [rbp-2D0h]
  bool pointStart; // [rsp+98h] [rbp-2C8h]
  const Vector *pointStarta; // [rsp+98h] [rbp-2C8h]
  int (*pointStartb)(...); // [rsp+98h] [rbp-2C8h]
  float pointStartc; // [rsp+98h] [rbp-2C8h]
  Vector vEndPointLocation; // [rsp+A0h] [rbp-2C0h] BYREF
  CTraceFilterSimple v72; // [rsp+B0h] [rbp-2B0h] BYREF
  Ray_t v73; // [rsp+F0h] [rbp-270h] BYREF
  trace_t tr; // [rsp+140h] [rbp-220h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+1F0h] [rbp-170h] BYREF
  unsigned __int64 v76; // [rsp+328h] [rbp-38h]

  v76 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  m_pAsString = "";
  if ( this->m_iszStartEntity.u.m_Id != 0 )
    m_pAsString = this->m_iszStartEntity.u.m_pAsString;
  v3 = CBeam::RandomTargetname(this, m_pAsString);
  v4 = "";
  if ( this->m_iszEndEntity.u.m_Id != 0 )
    v4 = this->m_iszEndEntity.u.m_pAsString;
  v5 = CBeam::RandomTargetname(this, v4);
  v6 = v5;
  v7 = v5 != 0;
  if ( v3 != 0 )
  {
    if ( v5 != 0 )
    {
      vEndPointLocation = *CBaseEntity::GetAbsOrigin(v5);
    }
    else
    {
      x = this->m_vEndPointRelative.x;
      if ( x > -0.0099999998 && x < 0.0099999998 )
      {
        y = this->m_vEndPointRelative.y;
        if ( y > -0.0099999998 && y < 0.0099999998 )
        {
          z = this->m_vEndPointRelative.z;
          if ( z > -0.0099999998 && z < 0.0099999998 )
            goto LABEL_22;
        }
      }
      AbsAngles = CBaseEntity::GetAbsAngles(this);
      if ( vec3_angle.x == AbsAngles->x && vec3_angle.y == AbsAngles->y && vec3_angle.z == AbsAngles->z )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        vEndPointLocation.x = this->m_vEndPointRelative.x + AbsOrigin->x;
        vEndPointLocation.y = this->m_vEndPointRelative.y + AbsOrigin->y;
        vEndPointLocation.z = this->m_vEndPointRelative.z + AbsOrigin->z;
      }
      else
      {
        v24 = CBaseEntity::EntityToWorldTransform(this);
        VectorTransform(&this->m_vEndPointRelative.x, v24, &vEndPointLocation.x);
      }
    }
    m_speed = 100;
    if ( this->m_speed <= 100 )
      m_speed = this->m_speed;
    v9 = 0;
    if ( m_speed >= 0 )
      v9 = m_speed;
    this->m_speed = v9;
    pointStart = IsStaticPointEntity(v3);
    if ( !v7 || (v10 = IsStaticPointEntity(v6)) )
    {
      v10 = 1;
    }
    else if ( !pointStart )
    {
      vptr_IPredictionSystem = te->_vptr_IPredictionSystem;
      if ( (this->m_spawnflags.m_Value & 8) != 0 )
      {
        v26 = vptr_IPredictionSystem[7];
        *&v73.m_Start.x = 0;
        pointStartb = v26;
        v58 = this->m_clrRender.m_Value._color[2];
        v64 = this->m_speed;
        v61 = this->m_clrRender.m_Value._color[3];
        v55 = this->m_clrRender.m_Value._color[1];
        v52 = this->m_clrRender.m_Value._color[0];
        m_noiseAmplitude = this->m_noiseAmplitude;
        m_boltWidth = this->m_boltWidth;
        m_life = this->m_life;
        m_Value = this->m_flFrameRate.m_Value;
        m_frameStart = this->m_frameStart;
        *&tr.startpos.x = this->m_spriteTexture.m_pBinding;
        v34.m_Data = CEntityInstance::GetEntityIndex(v6).m_Data;
        m_Data = CEntityInstance::GetEntityIndex(v3).m_Data;
        pointStartb(
          te,
          &filter,
          m_Data,
          v34.m_Data,
          &tr,
          &v73,
          0.0,
          m_life,
          m_boltWidth,
          m_noiseAmplitude,
          m_frameStart,
          m_Value,
          0,
          v52,
          v55,
          v58,
          v61,
          v64,
          0);
      }
      else
      {
        v29 = vptr_IPredictionSystem[5];
        *&v73.m_Start.x = 0;
        v65 = v29;
        v47 = this->m_noiseAmplitude;
        v56 = this->m_clrRender.m_Value._color[2];
        v41 = this->m_flFrameRate.m_Value;
        v62 = this->m_speed;
        v59 = this->m_clrRender.m_Value._color[3];
        v53 = this->m_clrRender.m_Value._color[1];
        v50 = this->m_clrRender.m_Value._color[0];
        pointStartc = this->m_boltWidth;
        v44 = this->m_life;
        v38 = this->m_frameStart;
        *&tr.startpos.x = this->m_spriteTexture.m_pBinding;
        v35.m_Data = CEntityInstance::GetEntityIndex(v6).m_Data;
        v30 = CEntityInstance::GetEntityIndex(v3).m_Data;
        v65(
          te,
          &filter,
          v30,
          v35.m_Data,
          &tr,
          &v73,
          0.0,
          v44,
          pointStartc,
          pointStartc,
          v47,
          v38,
          v41,
          0,
          v50,
          v53,
          v56,
          v59,
          v62);
      }
LABEL_20:
      pointStarta = CBaseEntity::GetAbsOrigin(v6);
      v15 = CBaseEntity::GetAbsOrigin(v3);
      CBeam::DoSparks(this, v15, pointStarta);
      if ( this->m_flDamage > 0.0 )
      {
        memset(&tr.m_ShapeAttributes, 0, 31);
        tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
        CGameTrace::Init(&tr);
        v16 = CBaseEntity::GetAbsOrigin(v6);
        v17 = CBaseEntity::GetAbsOrigin(v3);
        m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
        v73.m_Start.w = 0.0;
        memset(&v73.m_Delta.w, 0, 36);
        v73.m_flRadius = m_fValue;
        v73.m_Delta.x = v16->x - v17->x;
        v73.m_Delta.y = v16->y - v17->y;
        v19 = v16->z - v17->z;
        v73.m_IsRay = 1;
        v73.m_Delta.z = v19;
        v73.m_IsSwept = (((v73.m_Delta.x * v73.m_Delta.x) + (v73.m_Delta.y * v73.m_Delta.y)) + (v19 * v19)) != 0.0;
        v73.m_Start.Vector = *v17;
        CTraceFilterSimple::CTraceFilterSimple(&v72, 0, 4, 0);
        v72.m_attr.m_nInteractsWith |= 0x87001uLL;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v73, &v72, &tr);
        this->m_flFireTime = CGlobalVarsBase::curtime(gpGlobals, 0) - 1.0;
        CBeam::BeamDamage(this, &tr);
      }
      goto LABEL_22;
    }
    if ( (this->m_spawnflags.m_Value & 8) != 0 )
      goto LABEL_22;
    v11 = this->m_flFrameRate.m_Value;
    v45 = this->m_noiseAmplitude;
    v42 = this->m_life;
    v63 = this->m_boltWidth;
    v12 = *(te->_vptr_IPredictionSystem + 4);
    *&v73.m_Start.x = 0;
    v60 = v12;
    LODWORD(v12) = this->m_speed;
    *&tr.startpos.x = this->m_spriteTexture.m_pBinding;
    ray = v12;
    v57 = this->m_clrRender.m_Value._color[3];
    v54 = this->m_clrRender.m_Value._color[2];
    v51 = this->m_clrRender.m_Value._color[1];
    v48 = this->m_clrRender.m_Value._color[0];
    v39 = v11;
    v36 = this->m_frameStart;
    if ( v10 )
    {
      v32 = 0;
      p_vEndPointLocation = &vEndPointLocation;
    }
    else
    {
      v32 = CEntityInstance::GetEntityIndex(v6).m_Data;
      p_vEndPointLocation = 0;
    }
    if ( pointStart )
    {
      v31 = CBaseEntity::GetAbsOrigin(v3);
      v13 = 0;
      v14 = v31;
    }
    else
    {
      v13 = CEntityInstance::GetEntityIndex(v3).m_Data;
      v14 = 0;
    }
    v60(
      te,
      &filter,
      v13,
      v14,
      v32,
      p_vEndPointLocation,
      0.0,
      v42,
      v63,
      v63,
      v45,
      &tr,
      &v73,
      v36,
      v39,
      0,
      v48,
      v51,
      v54,
      v57,
      ray);
    goto LABEL_20;
  }
LABEL_22:
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CEnvBeam::PassesTouchFilters  (line 508, @0x00000000021f7220, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, PassesFilter, operator CEntityInstance*
// callers: CEnvBeam::UpdateThink
// globals: CEntityHandle::gm_pEntityList, s_pPhysicsPropClass
bool __fastcall CEnvBeam::PassesTouchFilters(CEnvBeam *const this, CBaseEntity *pOther)
{
  Touch_t m_TouchType; // ecx
  bool result; // al
  uint32 m_Index; // edx
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CEntityInstance *m_pInstance; // r13

  m_TouchType = this->m_TouchType;
  if ( m_TouchType == Touch_t::touch_npc_only )
  {
    result = 0;
  }
  else
  {
    result = (*(pOther->_vptr_IHandleEntity + 140))(pOther);
    m_TouchType = this->m_TouchType;
    if ( m_TouchType == Touch_t::touch_player_only )
      goto LABEL_3;
  }
  if ( pOther->m_bIsNPC )
    result = 1;
  if ( m_TouchType != Touch_t::touch_player_or_npc_or_physicsprop || s_pPhysicsPropClass != pOther->m_pEntity->m_pClass )
  {
LABEL_3:
    if ( !result )
      return result;
  }
  m_Index = this->m_hFilter.m_Index;
  result = 1;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hFilter.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hFilter.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0 )
        {
          result = (*(m_pInstance->_vptr_IHandleEntity + 207))(v8->m_pInstance, this, pOther);
          if ( LOBYTE(m_pInstance[16].m_pEntity) != 0 )
            return !result;
        }
      }
    }
  }
  return result;
}


// CEnvBeam::UpdateThink  (line 549, @0x0000000002202fd0, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, CVariantBase, EnableInteractsWith, FireOutput, Free, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, curtime, ~CVariantBase
// calls: CBeam::RelinkBeam, CGameTrace::Init, CBeam::GetAbsEndPos, CBeam::GetAbsStartPos, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::SetNextThink, CTraceFilterSimple::CTraceFilterSimple, CBeam::BeamDamage, CEnvBeam::PassesTouchFilters, CEntityIOOutput::FireOutputInternal (14 total)
void __fastcall CEnvBeam::UpdateThink(CEnvBeam *const this)
{
  float m_flDamage; // xmm0_4
  double m_flCurrentTime; // xmm1_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v6; // xmm1_8
  const Vector *v7; // r12
  const Vector *v8; // rax
  vec_t v9; // xmm1_4
  bool v10; // zf
  vec_t z; // xmm0_4
  double v12; // xmm0_8
  CGlobalVars *v13; // r12
  FnGlobalVarsWarningFunc v14; // rax
  const Vector *AbsEndPos; // r13
  const Vector *AbsStartPos; // rdx
  float m_fValue; // xmm0_4
  vec_t v18; // xmm1_4
  __int64 v19; // [rsp-8h] [rbp-168h] BYREF
  CGameQueryAttributes traceFilter; // [rsp+0h] [rbp-160h]
  __int64 v21; // [rsp+38h] [rbp-128h] BYREF
  Ray_t ray; // [rsp+40h] [rbp-120h] BYREF
  trace_t tr; // [rsp+90h] [rbp-D0h] BYREF

  m_flDamage = this->m_flDamage;
  if ( m_flDamage <= 0.0 )
    goto LABEL_9;
  m_flCurrentTime = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, m_flDamage, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  if ( m_flCurrentTime >= this->m_flFireTime + 0.1 )
  {
    memset(&tr.m_hShape, 0, 24);
    tr.m_ShapeAttributes.m_nInteractsExclude = 0x700000000000000LL;
    CGameTrace::Init((&ray.m_IsSwept + 3));
    AbsEndPos = CBeam::GetAbsEndPos(this);
    AbsStartPos = CBeam::GetAbsStartPos(this);
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Start.y = 0.0;
    memset(&ray.m_Delta.y, 0, 36);
    ray.m_Extents.z = m_fValue;
    ray.m_Start.z = AbsEndPos->x - AbsStartPos->x;
    ray.m_Start.w = AbsEndPos->y - AbsStartPos->y;
    v18 = AbsEndPos->z - AbsStartPos->z;
    LOBYTE(ray.m_Extents.w) = 1;
    ray.m_Delta.x = v18;
    BYTE1(ray.m_Extents.w) = (((ray.m_Start.z * ray.m_Start.z) + (ray.m_Start.w * ray.m_Start.w)) + (v18 * v18)) != 0.0;
    v21 = *&AbsStartPos->x;
    ray.m_Start.x = AbsStartPos->z;
    CTraceFilterSimple::CTraceFilterSimple(&v19, 0, 4, 0);
    traceFilter.m_nInteractsWith |= 0x87001uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v21, &v19, (&ray.m_IsSwept + 3));
    CBeam::BeamDamage(this, (&ray.m_IsSwept + 3));
  }
  else
  {
LABEL_9:
    CBeam::RelinkBeam(this);
  }
  if ( this->m_TouchType == Touch_t::touch_none )
    goto LABEL_14;
  memset(&tr.m_hShape, 0, 24);
  tr.m_ShapeAttributes.m_nInteractsExclude = 0x700000000000000LL;
  CGameTrace::Init((&ray.m_IsSwept + 3));
  ray.m_Start.y = 0.0;
  ray.m_Delta.y = 0.0;
  ray.m_StartOffset.y = 0.0;
  ray.m_Extents.y = 0.0;
  v7 = CBeam::GetAbsEndPos(this);
  v8 = CBeam::GetAbsStartPos(this);
  ray.m_Extents.z = 0.0;
  ray.m_Start.z = v7->x - v8->x;
  ray.m_Start.w = v7->y - v8->y;
  v9 = v7->z - v8->z;
  ray.m_Extents.x = 0.0;
  ray.m_StartOffset.w = 0.0;
  ray.m_StartOffset.z = 0.0;
  ray.m_Delta.x = v9;
  LOBYTE(ray.m_Extents.w) = 1;
  ray.m_StartOffset.x = 0.0;
  ray.m_Delta.w = 0.0;
  ray.m_Delta.z = 0.0;
  v10 = this->m_TouchType == Touch_t::touch_player_or_npc_or_physicsprop;
  BYTE1(ray.m_Extents.w) = (((ray.m_Start.z * ray.m_Start.z) + (ray.m_Start.w * ray.m_Start.w)) + (v9 * v9)) != 0.0;
  v21 = *&v8->x;
  z = v8->z;
  WORD2(traceFilter.m_nInteractsAs) = 0;
  traceFilter.m_nInteractsWith = 0;
  ray.m_Start.x = z;
  traceFilter.m_nInteractsExclude = 0;
  LODWORD(traceFilter.m_nInteractsAs) = -1;
  BYTE6(traceFilter.m_nInteractsAs) = 3;
  traceFilter.m_nEntityIdToIgnore = 7;
  HIBYTE(traceFilter.m_nInteractsAs) = HIBYTE(traceFilter.m_nInteractsAs) & 0xF0 | 9;
  v19 = v10 ? 2883585LL : 786433LL;
  LODWORD(traceFilter.m_nInteractsAs) = EntityIDFromBaseEntity(0);
  WORD2(traceFilter.m_nInteractsAs) = HierarchyIDFromBaseEntity(0);
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v21, &v19, (&ray.m_IsSwept + 3));
  if ( tr.plane.dist != 1.0 && CEnvBeam::PassesTouchFilters(this, tr.m_pSurfaceProperties) )
  {
    LODWORD(traceFilter.m_nInteractsWith) = 0;
    v19 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnTouchedByEntity, tr.m_pSurfaceProperties, this, &v19, 0.0);
    if ( (traceFilter.m_nInteractsWith & 0x10000) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v19);
  }
  else
  {
LABEL_14:
    v12 = 0.0;
    v13 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v14 = gpGlobals->m_pfnWarningFunc;
        if ( v14 != 0 )
          (v14)(1, 0.0);
      }
      *&v12 = LODWORD(v13->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v12, v6, 0);
  }
}


// CEnvBeam::Zap  (line 600, @0x00000000021f7330, libserver.so)  // inlines: CBroadcastRecipientFilter, CWeakHandle, FromUntypedHandleUnchecked, InitUntypedUnchecked, StaticInvalidHandle, operator CWeakHandle<InfoForResourceTypeIMaterial2>, ~CBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CBeam::DoSparks, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CEnvBeam::RandomArea, CEnvBeam::RandomPoint
void __fastcall CEnvBeam::Zap(CEnvBeam *const this, const Vector *const vecSrc, const Vector *const vecDest)
{
  int v6; // r9d
  int v7; // r8d
  int m_Value; // ecx
  int v9; // esi
  int m_frameStart; // edx
  const ResourceBindingBase_t *m_pBinding; // r15
  int (**vptr_IPredictionSystem)(...); // rax
  int m_speed; // r11d
  int v14; // r10d
  double v15; // xmm2_8
  __int64 v16; // [rsp+40h] [rbp-190h] BYREF
  const ResourceBindingBase_t *v17; // [rsp+50h] [rbp-180h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+60h] [rbp-170h] BYREF
  unsigned __int64 v19; // [rsp+198h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  v6 = this->m_clrRender.m_Value._color[2];
  v7 = this->m_clrRender.m_Value._color[1];
  m_Value = this->m_flFrameRate.m_Value;
  v9 = this->m_clrRender.m_Value._color[0];
  m_frameStart = this->m_frameStart;
  m_pBinding = this->m_spriteTexture.m_pBinding;
  vptr_IPredictionSystem = te->_vptr_IPredictionSystem;
  v16 = 0;
  m_speed = this->m_speed;
  v14 = this->m_clrRender.m_Value._color[3];
  *&v15 = LODWORD(this->m_boltWidth);
  v17 = m_pBinding;
  vptr_IPredictionSystem[6](
    te,
    &filter,
    vecSrc,
    vecDest,
    &v17,
    &v16,
    0.0,
    this->m_life,
    *&v15,
    v15,
    this->m_noiseAmplitude,
    m_frameStart,
    m_Value,
    0,
    v9,
    v7,
    v6,
    v14,
    m_speed);
  CBeam::DoSparks(this, vecSrc, vecDest);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CEnvBeam::RandomArea  (line 626, @0x00000000021f74c0, libserver.so)  // inlines: CGameTrace, DotProduct, EnableInteractsWith, FastSqrt, GetFloat, Init, Length, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, Vector, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, UTIL_TraceSphere, CEnvBeam::Zap
// callers: CEnvBeam::StrikeThink
void __fastcall CEnvBeam::RandomArea(CEnvBeam *const this)
{
  const Vector *AbsOrigin; // rax
  float m_radius; // xmm0_4
  float m_fValue; // xmm3_4
  float v5; // xmm0_4
  float v6; // xmm3_4
  int v7; // [rsp+20h] [rbp-260h]
  float vecSrc; // [rsp+24h] [rbp-25Ch]
  __int64 vecSrc_4; // [rsp+28h] [rbp-258h]
  vec_t v10; // [rsp+30h] [rbp-250h]
  float v11; // [rsp+30h] [rbp-250h]
  vec_t pTraceFilter; // [rsp+38h] [rbp-248h]
  float pTraceFiltera; // [rsp+38h] [rbp-248h]
  Vector vecDir1; // [rsp+40h] [rbp-240h] BYREF
  Vector vecDir2; // [rsp+50h] [rbp-230h] BYREF
  CTraceFilterSimple v16; // [rsp+60h] [rbp-220h] BYREF
  Ray_t v17; // [rsp+A0h] [rbp-1E0h] BYREF
  trace_t tr1; // [rsp+F0h] [rbp-190h] BYREF
  trace_t tr2; // [rsp+1A0h] [rbp-E0h] BYREF

  v7 = 10;
  while ( 1 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    vecSrc_4 = *&AbsOrigin->x;
    vecSrc = AbsOrigin->z;
    v10 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
    pTraceFilter = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
    vecDir1.x = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
    vecDir1.y = pTraceFilter;
    vecDir1.z = v10;
    VectorNormalize(&vecDir1);
    memset(&tr1.m_ShapeAttributes, 0, 31);
    tr1.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&tr1);
    m_radius = this->m_radius;
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    *&tr2.startpos.x = vecSrc_4;
    tr2.endpos.y = ((vecDir1.x * m_radius) + *&vecSrc_4) - *&vecSrc_4;
    tr2.endpos.z = ((vecDir1.y * m_radius) + *(&vecSrc_4 + 1)) - *(&vecSrc_4 + 1);
    tr2.plane.normal.x = ((m_radius * vecDir1.z) + vecSrc) - vecSrc;
    *&tr2.m_pSurfaceProperties = m_fValue;
    tr2.startpos.z = vecSrc;
    tr2.endpos.x = 0.0;
    memset(&tr2.plane.normal.y, 0, 36);
    BYTE4(tr2.m_pSurfaceProperties) = 1;
    BYTE5(tr2.m_pSurfaceProperties) = (((tr2.endpos.y * tr2.endpos.y) + (tr2.endpos.z * tr2.endpos.z))
                                     + (tr2.plane.normal.x * tr2.plane.normal.x)) != 0.0;
    CTraceFilterSimple::CTraceFilterSimple(&v17, this, 4, 0);
    *&v17.m_Start.z |= 0x7001uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &tr2, &v17, &tr1);
    if ( tr1.fraction != 1.0 )
    {
      do
      {
        v11 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
        pTraceFiltera = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
        vecDir2.x = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
        vecDir2.y = pTraceFiltera;
        vecDir2.z = v11;
      }
      while ( (((vecDir1.x * vecDir2.x) + (pTraceFiltera * vecDir1.y)) + (v11 * vecDir1.z)) > 0.0 );
      VectorNormalize(&vecDir2);
      memset(&tr2.m_ShapeAttributes, 0, 31);
      tr2.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&tr2);
      v5 = this->m_radius;
      v6 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
      *&v17.m_Start.x = vecSrc_4;
      v17.m_Delta.x = ((vecDir2.x * v5) + *&vecSrc_4) - *&vecSrc_4;
      v17.m_Delta.y = ((vecDir2.y * v5) + *(&vecSrc_4 + 1)) - *(&vecSrc_4 + 1);
      v17.m_Delta.z = ((v5 * vecDir2.z) + vecSrc) - vecSrc;
      v17.m_flRadius = v6;
      *&v17.m_Start.z = LODWORD(vecSrc);
      memset(&v17.m_Delta.w, 0, 36);
      v17.m_IsRay = 1;
      v17.m_IsSwept = (((v17.m_Delta.x * v17.m_Delta.x) + (v17.m_Delta.y * v17.m_Delta.y))
                     + (v17.m_Delta.z * v17.m_Delta.z)) != 0.0;
      CTraceFilterSimple::CTraceFilterSimple(&v16, this, 4, 0);
      v16.m_attr.m_nInteractsWith |= 0x7001uLL;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v17, &v16, &tr2);
      if ( tr2.fraction != 1.0
        && this->m_radius * 0.1 <= fsqrt(
                                     (((tr1.endpos.x - tr2.endpos.x) * (tr1.endpos.x - tr2.endpos.x))
                                    + ((tr1.endpos.y - tr2.endpos.y) * (tr1.endpos.y - tr2.endpos.y)))
                                   + ((tr1.endpos.z - tr2.endpos.z) * (tr1.endpos.z - tr2.endpos.z))) )
      {
        UTIL_TraceSphere(
          &tr1.endpos,
          &tr2.endpos,
          phys_traceline_radius.m_pParent->m_Value.m_fValue,
          0x7001u,
          this,
          4,
          &tr2);
        if ( tr2.fraction == 1.0 )
          break;
      }
    }
    if ( --v7 == 0 )
      return;
  }
  CEnvBeam::Zap(this, &tr1.endpos, &tr2.endpos);
}


// CEnvBeam::RandomPoint  (line 672, @0x00000000021f7b70, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, FastSqrt, GetFloat, Init, Length, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, Vector, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-
// calls: VectorNormalize, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CEnvBeam::Zap
// callers: CEnvBeam::StrikeThink
void __fastcall CEnvBeam::RandomPoint(CEnvBeam *const this, const Vector *const vecSrc)
{
  float m_radius; // xmm0_4
  float x; // xmm5_4
  float y; // xmm4_4
  float z; // xmm3_4
  ConVar *m_pParent; // rax
  int v9; // [rsp+Ch] [rbp-1A4h]
  vec_t v10; // [rsp+20h] [rbp-190h]
  vec_t v11; // [rsp+24h] [rbp-18Ch]
  Vector vecDir1; // [rsp+30h] [rbp-180h] BYREF
  CTraceFilterSimple v13; // [rsp+40h] [rbp-170h] BYREF
  Ray_t v14; // [rsp+80h] [rbp-130h] BYREF
  trace_t tr1; // [rsp+D0h] [rbp-E0h] BYREF

  v9 = 10;
  while ( 1 )
  {
    v10 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
    v11 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
    vecDir1.x = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
    vecDir1.y = v11;
    vecDir1.z = v10;
    VectorNormalize(&vecDir1);
    memset(&tr1.m_ShapeAttributes, 0, 31);
    tr1.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&tr1);
    m_radius = this->m_radius;
    x = vecSrc->x;
    v14.m_IsRay = 1;
    v14.m_Start.w = 0.0;
    v14.m_Start.x = x;
    y = vecSrc->y;
    memset(&v14.m_Delta.w, 0, 36);
    z = vecSrc->z;
    v14.m_Start.y = y;
    m_pParent = phys_traceline_radius.m_pParent;
    v14.m_Start.z = z;
    v14.m_flRadius = m_pParent->m_Value.m_fValue;
    v14.m_Delta.x = ((vecDir1.x * m_radius) + x) - x;
    v14.m_Delta.y = ((vecDir1.y * m_radius) + y) - y;
    v14.m_Delta.z = ((m_radius * vecDir1.z) + z) - z;
    v14.m_IsSwept = (((v14.m_Delta.x * v14.m_Delta.x) + (v14.m_Delta.y * v14.m_Delta.y))
                   + (v14.m_Delta.z * v14.m_Delta.z)) != 0.0;
    CTraceFilterSimple::CTraceFilterSimple(&v13, this, 4, 0);
    v13.m_attr.m_nInteractsWith |= 0x7001uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v14, &v13, &tr1);
    if ( this->m_radius * 0.1 <= fsqrt(
                                   (((tr1.endpos.x - vecSrc->x) * (tr1.endpos.x - vecSrc->x))
                                  + ((tr1.endpos.y - vecSrc->y) * (tr1.endpos.y - vecSrc->y)))
                                 + ((tr1.endpos.z - vecSrc->z) * (tr1.endpos.z - vecSrc->z)))
      && tr1.fraction != 1.0 )
    {
      break;
    }
    if ( --v9 == 0 )
      return;
  }
  CEnvBeam::Zap(this, vecSrc, &tr1.endpos);
}


// CEnvBeam::BeamUpdateVars  (line 697, @0x000000000220c4c0, libserver.so)  // inlines: CStrongHandle, CUtlSymbolLarge, HasEndPointHandle, IsZero, NetworkStateChanged, Set, SetFrame, SetNoise, SetScrollRate, SetTexture, SetWidth, TransformPointEntityToWorld, VectorAdd, VectorTransform, operator CWeakHandle<InfoForResourceTypeIMaterial2>, operator=, operator=<CWeakHandle<InfoForResourceTypeIMaterial2> >, operator=<float>, operator=<int>, operator==, ~CStrongHandle
// calls: CGameEntitySystem::FindEntityByName, CBaseEntity::GetAbsOrigin, CStrongHandle<InfoForResourceTypeIMaterial2>::Init, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBeam::SetType, IsStaticPointEntity, CBeam::SetAbsStartPos, CBeam::SetAbsEndPos, CBeam::RelinkBeam, CBaseEntity::GetAbsAngles, CBaseEntity::EntityToWorldTransform, VectorTransform (17 total)
// callers: CEnvBeam::Activate
// strings: "env_beams cannot have the end entity be the beam itself\nunless the start entity is also 
void __fastcall CEnvBeam::BeamUpdateVars(CEnvBeam *const this)
{
  CEnvBeam *EntityByName; // r13
  const CBaseEntity *v3; // rax
  CEnvBeam *v4; // r14
  bool v5; // r15
  int m_speed; // eax
  int v7; // edx
  const ResourceBinding_t<InfoForResourceTypeIMaterial2> *m_pBinding; // rsi
  const Vector *v9; // rax
  float m_boltWidth; // xmm0_4
  __m128 m_noiseAmplitude_low; // xmm1
  __m128 v12; // xmm0
  float v13; // xmm0_4
  unsigned int m_Value; // eax
  float x; // xmm0_4
  float y; // xmm0_4
  float z; // xmm0_4
  const QAngle *AbsAngles; // rax
  const Vector *AbsOrigin; // rax
  const matrix3x4_t *v20; // rax
  float srcc; // [rsp+8h] [rbp-58h]
  float srcb; // [rsp+8h] [rbp-58h]
  float srca; // [rsp+8h] [rbp-58h]
  float src; // [rsp+8h] [rbp-58h]
  CStrongHandle<InfoForResourceTypeIMaterial2> v25; // [rsp+10h] [rbp-50h] BYREF
  Vector vEndPointPos; // [rsp+20h] [rbp-40h] BYREF

  *&vEndPointPos.x = this->m_iszStartEntity.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &vEndPointPos, this, 0, 0, 0);
  *&vEndPointPos.x = this->m_iszEndEntity.u.m_Id;
  v3 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &vEndPointPos, this, 0, 0, 0);
  v4 = v3;
  v5 = v3 != 0;
  if ( EntityByName != 0 )
  {
    if ( v3 != 0 )
    {
      vEndPointPos = *CBaseEntity::GetAbsOrigin(v3);
      goto LABEL_4;
    }
    x = this->m_vEndPointRelative.x;
    if ( x <= -0.0099999998
      || x >= 0.0099999998
      || (y = this->m_vEndPointRelative.y) <= -0.0099999998
      || y >= 0.0099999998
      || (z = this->m_vEndPointRelative.z) <= -0.0099999998
      || z >= 0.0099999998 )
    {
      AbsAngles = CBaseEntity::GetAbsAngles(this);
      if ( vec3_angle.x == AbsAngles->x && vec3_angle.y == AbsAngles->y && vec3_angle.z == AbsAngles->z )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        vEndPointPos.x = this->m_vEndPointRelative.x + AbsOrigin->x;
        vEndPointPos.y = this->m_vEndPointRelative.y + AbsOrigin->y;
        vEndPointPos.z = this->m_vEndPointRelative.z + AbsOrigin->z;
      }
      else
      {
        v20 = CBaseEntity::EntityToWorldTransform(this);
        VectorTransform(&this->m_vEndPointRelative.x, v20, &vEndPointPos.x);
      }
LABEL_4:
      if ( this->m_nNumBeamEnts.m_Value != 2 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_nNumBeamEnts.m_Value = 2;
      }
      m_speed = 100;
      if ( this->m_speed <= 100 )
        m_speed = this->m_speed;
      v7 = 0;
      if ( m_speed >= 0 )
        v7 = m_speed;
      this->m_speed = v7;
      if ( this == v4 && this != EntityByName )
        DevMsg("env_beams cannot have the end entity be the beam itself\nunless the start entity is also the beam itself!\n");
      m_pBinding = this->m_spriteTexture.m_pBinding;
      v25.m_pBinding = 0;
      CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&v25, m_pBinding);
      if ( this->m_hBaseMaterial.m_Value.m_pBinding != v25.m_pBinding )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_hBaseMaterial.m_Value, &v25);
      }
      CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&v25);
      CBeam::SetType(this, BeamType_t::BEAM_ENTPOINT);
      if ( IsStaticPointEntity(EntityByName) )
      {
        v9 = CBaseEntity::GetAbsOrigin(EntityByName);
        CBeam::SetAbsStartPos(this, v9);
        if ( !v5 )
          goto LABEL_15;
      }
      else
      {
        CBeam::SetStartEntity(this, EntityByName);
        if ( !v5 )
          goto LABEL_15;
      }
      if ( !IsStaticPointEntity(v4) )
      {
        CBeam::SetEndEntity(this, v4);
LABEL_16:
        CBeam::RelinkBeam(this);
        m_boltWidth = this->m_boltWidth;
        if ( m_boltWidth > 102.3 )
          m_boltWidth = 102.3;
        if ( m_boltWidth != this->m_fWidth.m_Value )
        {
          src = m_boltWidth;
          (*(this->_vptr_IHandleEntity + 22))(this, 1252, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_fWidth.m_Value = src;
        }
        m_noiseAmplitude_low = LODWORD(this->m_noiseAmplitude);
        v12 = _mm_cmplt_ss(0x42800000u, m_noiseAmplitude_low);
        LODWORD(v13) = _mm_andnot_ps(v12, m_noiseAmplitude_low).m128_u32[0] | v12.m128_i32[0] & 0x42800000;
        if ( v13 != this->m_fAmplitude.m_Value )
        {
          srca = v13;
          (*(this->_vptr_IHandleEntity + 22))(this, 1268, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_fAmplitude.m_Value = srca;
        }
        if ( this->m_frameStart != this->m_fStartFrame.m_Value )
        {
          srcb = this->m_frameStart;
          (*(this->_vptr_IHandleEntity + 22))(this, 1272, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_fStartFrame.m_Value = srcb;
        }
        if ( this->m_speed == this->m_fSpeed.m_Value )
        {
          m_Value = this->m_spawnflags.m_Value;
          if ( (m_Value & 0x80u) == 0 )
            goto LABEL_26;
        }
        else
        {
          srcc = this->m_speed;
          (*(this->_vptr_IHandleEntity + 22))(this, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          m_Value = this->m_spawnflags.m_Value;
          this->m_fSpeed.m_Value = srcc;
          if ( (m_Value & 0x80u) == 0 )
          {
LABEL_26:
            if ( (m_Value & 0x100) != 0 )
              CBeam::SetBeamFlags(this, 128);
            return;
          }
        }
        CBeam::SetBeamFlags(this, 64);
        return;
      }
LABEL_15:
      CBeam::SetAbsEndPos(this, &vEndPointPos);
      goto LABEL_16;
    }
  }
}


