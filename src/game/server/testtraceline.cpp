// Reconstructed from DWARF by pahole; not original source.

// src/game/server/testtraceline.cpp:17
class CTestTraceline : public CModelPointEntity {
public:

private:

	static datamap_t m_DataMap;
	typedef CModelPointEntity BaseClass;

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
	CTestTraceline(CTestTraceline &);
	CTestTraceline(CTestTraceline &);
	CTestTraceline();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual int UpdateTransmitState();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void Spin();
	virtual ~CTestTraceline();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[64] UpdateTransmitState
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// sizeof = 1152
};

// src/game/server/testtraceline.cpp:41
class C_CTestTraceline_MapInstall {
	C_CTestTraceline_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTestTraceline::~CTestTraceline  (line 17, @0x00000000023e9270, libserver.so)  // inlines: ~CModelPointEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CTestTraceline::~CTestTraceline(CTestTraceline *const this)
{
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTestTraceline::~CTestTraceline  (line 17, @0x00000000023e9290, libserver.so)  // inlines: ~CModelPointEntity, ~CTestTraceline
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CTestTraceline::~CTestTraceline(CTestTraceline *const this)
{
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTestTraceline::GetEntityClass  (line 20, @0x00000000023e59c0, libserver.so)
CEntityClass *__cdecl CTestTraceline::GetEntityClass()
{
  return g_pEntityCTestTracelineClass;
}


// CTestTraceline::Schema_DynamicBinding  (line 20, @0x00000000023e59d0, libserver.so)
// globals: CTestTraceline::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTestTraceline::Schema_DynamicBinding(const CTestTraceline *const this)
{
  return CTestTraceline::s_pSchemaBinding;
}


// CTestTraceline::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 20, @0x00000000023e59e0, libserver.so)
// globals: CTestTraceline::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTestTraceline::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTestTraceline::CEntityInstanceEntityClass *const this)
{
  return CTestTraceline::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTestTraceline::CEntityInstanceEntityClass::DestructInstance  (line 20, @0x00000000023e59f0, libserver.so)  // inlines: Destruct<CTestTraceline>
void __fastcall CTestTraceline::CEntityInstanceEntityClass::DestructInstance(
        CTestTraceline::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTestTraceline::CEntityInstanceEntityClass::FreeInstance  (line 20, @0x00000000023e5a10, libserver.so)
void __fastcall CTestTraceline::CEntityInstanceEntityClass::FreeInstance(
        CTestTraceline::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTestTraceline::CEntityInstanceEntityClass::CanAllocate  (line 20, @0x00000000023e5a30, libserver.so)
bool __fastcall CTestTraceline::CEntityInstanceEntityClass::CanAllocate(
        const CTestTraceline::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTestTraceline::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 20, @0x00000000023e5a40, libserver.so)
// globals: CTestTraceline::s_pSchemaBinding
const ISchemaBinding *__fastcall CTestTraceline::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTestTraceline::CEntityInstanceEntityClass *const this)
{
  return CTestTraceline::s_pSchemaBinding;
}


// CTestTraceline::CEntityInstanceEntityClass::AllocateInstance  (line 20, @0x00000000023e80b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTestTraceline::CEntityInstanceEntityClass::AllocateInstance(
        CTestTraceline::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1152);
  memset(v1, 0, 0x480u);
  return v1;
}


// CTestTraceline::CEntityInstanceEntityClass::ConstructInstance  (line 20, @0x00000000023e8c10, libserver.so)  // inlines: CModelPointEntity, CTestTraceline, Construct<CTestTraceline>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CTestTraceline::CEntityInstanceEntityClass::ConstructInstance(
        CTestTraceline::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_40B8C30;
  }
  return p;
}


// CTestTraceline::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x00000000023e9fc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTestTraceline::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTestTraceline::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CTestTraceline::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x00000000023e9fe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTestTraceline::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTestTraceline::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTestTraceline::GetEntityClassInternal  (line 20, @0x00000000023efee0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "test_traceline", "CTestTraceline", "CModelPointEntity"
// globals: `guard variable for'CTestTraceline::GetEntityClassInternal(void)::g_EntityCTestTracelineClass, CTestTraceline::GetEntityClassInternal(void)::g_EntityCTestTracelineClass, __dso_handle, CTestTraceline::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTestTraceline::GetEntityClassInfo(void)::g_EntityCTestTracelineClassInfo, CTestTraceline::GetEntityClassInfo(void)::g_EntityCTestTracelineClassInfo, `guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo, CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo
CEntityClass *__cdecl CTestTraceline::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTestTraceline::GetEntityClassInternal(void)::g_EntityCTestTracelineClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTestTraceline::GetEntityClassInternal(void)::g_EntityCTestTracelineClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTestTraceline::GetEntityClassInternal(void)::g_EntityCTestTracelineClass);
    CTestTraceline::GetEntityClassInternal(void)::g_EntityCTestTracelineClass._vptr_CEntityClass = off_40B8BB0;
    __cxa_guard_release(&`guard variable for'CTestTraceline::GetEntityClassInternal(void)::g_EntityCTestTracelineClass);
    __cxa_atexit(
      CTestTraceline::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTestTraceline::GetEntityClassInternal(void)::g_EntityCTestTracelineClass,
      &_dso_handle);
  }
  if ( g_pEntityCTestTracelineClass != 0 )
    return &CTestTraceline::GetEntityClassInternal(void)::g_EntityCTestTracelineClass;
  if ( `guard variable for'CTestTraceline::GetEntityClassInfo(void)::g_EntityCTestTracelineClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTestTraceline::GetEntityClassInfo(void)::g_EntityCTestTracelineClassInfo) != 0 )
  {
    if ( `guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo,
        "CModelPointEntity",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTestTraceline::GetEntityClassInfo(void)::g_EntityCTestTracelineClassInfo,
      "CTestTraceline",
      "test_traceline",
      0,
      &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTestTraceline::GetEntityClassInfo(void)::g_EntityCTestTracelineClassInfo);
  }
  CTestTraceline::GetEntityClassInternal(void)::g_EntityCTestTracelineClass.m_pClassInfo = &CTestTraceline::GetEntityClassInfo(void)::g_EntityCTestTracelineClassInfo;
  CTestTraceline::GetEntityClassInternal(void)::g_EntityCTestTracelineClass.m_pBaseClassInfo = CTestTraceline::GetEntityClassInfo(void)::g_EntityCTestTracelineClassInfo.m_pBaseClassInfo;
  g_pEntityCTestTracelineClass = &CTestTraceline::GetEntityClassInternal(void)::g_EntityCTestTracelineClass;
  CTestTraceline::GetEntityClassInfo(void)::g_EntityCTestTracelineClassInfo.m_pClass = &CTestTraceline::GetEntityClassInternal(void)::g_EntityCTestTracelineClass;
  CTestTraceline::GetEntityClassInternal(void)::g_EntityCTestTracelineClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCTestTracelineClass->m_pComponentOverrides = 0;
  return &CTestTraceline::GetEntityClassInternal(void)::g_EntityCTestTracelineClass;
}


// CTestTraceline::YouForgotToImplementOrDeclareServerClass  (line 41, @0x00000000023bb0d0, libserver.so)
int __fastcall CTestTraceline::YouForgotToImplementOrDeclareServerClass(CTestTraceline *const this)
{
  return 0;
}


// CTestTraceline::GetServerClass  (line 41, @0x00000000023c3000, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CTestTraceline::GetServerClass(CTestTraceline *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CTestTraceline::GetDataDescMap  (line 44, @0x00000000023bb0e0, libserver.so)
// globals: CTestTraceline::m_DataMap
datamap_t *__fastcall CTestTraceline::GetDataDescMap(CTestTraceline *const this)
{
  return &CTestTraceline::m_DataMap;
}


// CTestTraceline::AddDatadescMetadataKeys  (line 44, @0x00000000023c9d90, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTestTraceline::GetEntityClass(void)
void __fastcall CTestTraceline::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTestTraceline::GetEntityClass);
}


// CTestTraceline::GetBaseMap  (line 44, @0x00000000023c9db0, libserver.so)
datamap_t *__cdecl CTestTraceline::GetBaseMap()
{
  return &CModelPointEntity::m_DataMap;
}


// DataMapInit<CTestTraceline>  (line 44, @0x00000000023ddd70, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTestTraceline"
// globals: `guard variable for'DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder, `guard variable for'DataMapInit<CTestTraceline>(CTestTraceline *)::dataDesc, CTestTraceline::GetEntityClass(void), CTestTraceline::m_DataMap, DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTestTraceline>(CTestTraceline *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder) != 0 )
  {
    DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder.m_pszBase = "CTestTraceline";
    DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder,
      &_dso_handle);
  }
  CTestTraceline::m_DataMap.baseMap = &CModelPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CTestTraceline>(CTestTraceline *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTestTraceline>(CTestTraceline *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder.m_nLenBase + 5);
    strcpy(stpcpy(v2, DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder.m_pszBase), "Spin");
    m_Size = DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder.m_Names.m_Size == DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CTestTraceline>(CTestTraceline *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CTestTraceline>(CTestTraceline *)::dataDesc[1].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTestTraceline>(CTestTraceline *)::dataDesc);
  }
  CTestTraceline::m_DataMap.dataNumFields = 1;
  CTestTraceline::m_DataMap.dataDesc = &DataMapInit<CTestTraceline>(CTestTraceline *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTestTraceline::m_DataMap, CTestTraceline::GetEntityClass);
  return &CTestTraceline::m_DataMap;
}


// CTestTraceline::Spawn  (line 52, @0x00000000023c1260, libserver.so)  // inlines: Init, NetworkStateChanged, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetVal, a, curtime
// calls: CModelPointEntity::Spawn, CBaseModelEntity::SetRenderAlpha, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet
// globals: CTestTraceline::Spin(void)
void __fastcall CTestTraceline::Spawn(CTestTraceline *const this, const CEntityKeyValues *pKeyValues)
{
  unsigned __int8 v3; // r12
  double v4; // xmm1_8
  double v5; // xmm0_8
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CModelPointEntity::Spawn(this, pKeyValues);
  v3 = this->m_clrRender.m_Value._color[3];
  if ( this->m_clrRender.m_Value._color[0] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[0] = -1;
  }
  if ( this->m_clrRender.m_Value._color[1] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[1] = -1;
  }
  if ( this->m_clrRender.m_Value._color[2] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[2] = -1;
  }
  if ( v3 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = v3;
  }
  CBaseModelEntity::SetRenderAlpha(this, 0xFFu);
  v5 = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v5 = LODWORD(v6->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v5, v4, 0);
  CBaseEntity::ThinkSet(this, CTestTraceline::Spin, 0.0, 0, 0);
}


// CTestTraceline::Spin  (line 63, @0x00000000023c18f0, libserver.so)  // inlines: GetInt, curtime
// calls: CBaseEntity::SetNextThink, sinf, CBaseEntity::GetLocalAngles, CBaseEntity::SetLocalAngles, __cxa_guard_acquire, ConVar::ConVar, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "traceline_spin"
// globals: `guard variable for'CTestTraceline::Spin(void)::traceline_spin, CTestTraceline::Spin(void)::traceline_spin, __dso_handle
void __fastcall CTestTraceline::Spin(CTestTraceline *const this)
{
  double v1; // xmm1_8
  CGlobalVars *v3; // rbx
  double v4; // xmm0_8
  FnGlobalVarsWarningFunc v5; // rax
  CGlobalVars *v6; // r13
  float v7; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  QAngle *LocalAngles; // rax
  CGlobalVars *v10; // r13
  __m128d v11; // xmm0
  double v12; // xmm2_8
  float v13; // xmm0_4
  FnGlobalVarsWarningFunc v14; // rax
  float s; // [rsp+Ch] [rbp-34h]
  QAngle angles; // [rsp+10h] [rbp-30h] BYREF

  if ( `guard variable for'CTestTraceline::Spin(void)::traceline_spin == 0
    && __cxa_guard_acquire(&`guard variable for'CTestTraceline::Spin(void)::traceline_spin) != 0 )
  {
    ConVar::ConVar(&CTestTraceline::Spin(void)::traceline_spin, "traceline_spin", "1", 0);
    __cxa_guard_release(&`guard variable for'CTestTraceline::Spin(void)::traceline_spin);
    __cxa_atexit(ConVar::~ConVar, &CTestTraceline::Spin(void)::traceline_spin, &_dso_handle);
  }
  if ( CTestTraceline::Spin(void)::traceline_spin.m_pParent->m_Value.m_nValue != 0 )
  {
    v6 = gpGlobals;
    v7 = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      v7 = sinf(v6->m_flCurrentTime);
    }
    s = v7;
    LocalAngles = CBaseEntity::GetLocalAngles(this);
    v10 = gpGlobals;
    angles = *LocalAngles;
    v11.m128d_f64[1] = (((s * s) * s) + 1.0);
    v11.m128d_f64[0] = v11.m128d_f64[1] * 90.0 + 90.0;
    v12 = _mm_movedup_pd(v11).m128d_f64[0];
    v13 = 0.0;
    angles.x = v12;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v14 = gpGlobals->m_pfnWarningFunc;
        if ( v14 != 0 )
          (v14)(1, 0.0);
      }
      v13 = 10.0 * v10->m_flCurrentTime;
    }
    angles.y = v13;
    CBaseEntity::SetLocalAngles(this, &angles);
  }
  v3 = gpGlobals;
  v4 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v5 = gpGlobals->m_pfnWarningFunc;
      if ( v5 != 0 )
        (v5)(1, 0.0);
    }
    *&v4 = LODWORD(v3->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v4, v1, 0);
}


// CTestTraceline::UpdateTransmitState  (line 81, @0x00000000023bb730, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CTestTraceline::UpdateTransmitState(CTestTraceline *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


