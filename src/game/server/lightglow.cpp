// Reconstructed from DWARF by pahole; not original source.

// src/game/server/lightglow.cpp:20
class CLightGlow : public CBaseModelEntity {
	class NetworkVar_m_nHorizontalSize {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nVerticalSize {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nMinDist {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nMaxDist {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nOuterMaxDist {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flGlowProxySize {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flHDRColorScale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	typedef CBaseModelEntity BaseClass;
	typedef CLightGlow ThisClass;

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
	CLightGlow(CLightGlow &);
	CLightGlow(CLightGlow &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CLightGlow();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual int UpdateTransmitState();
	void InputColor(inputdata_t &);
	virtual ~CLightGlow();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[64] UpdateTransmitState
	// sizeof = 1184
};

// src/game/server/lightglow.cpp:54
class C_CLightGlow_MapInstall {
	C_CLightGlow_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLightGlow::~CLightGlow  (line 20, @0x00000000022a9b40, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CLightGlow::~CLightGlow(CLightGlow *const this)
{
  this->_vptr_IHandleEntity = &off_40588B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CLightGlow::~CLightGlow  (line 20, @0x00000000022a9b60, libserver.so)  // inlines: ~CLightGlow
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CLightGlow::~CLightGlow(CLightGlow *const this)
{
  this->_vptr_IHandleEntity = &off_40588B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CLightGlow::GetEntityClass  (line 23, @0x00000000022a53c0, libserver.so)
CEntityClass *__cdecl CLightGlow::GetEntityClass()
{
  return g_pEntityCLightGlowClass;
}


// CLightGlow::Schema_DynamicBinding  (line 23, @0x00000000022a53d0, libserver.so)
// globals: CLightGlow::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLightGlow::Schema_DynamicBinding(const CLightGlow *const this)
{
  return CLightGlow::s_pSchemaBinding;
}


// CLightGlow::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 23, @0x00000000022a53e0, libserver.so)
// globals: CLightGlow::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLightGlow::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLightGlow::CEntityInstanceEntityClass *const this)
{
  return CLightGlow::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLightGlow::CEntityInstanceEntityClass::DestructInstance  (line 23, @0x00000000022a53f0, libserver.so)  // inlines: Destruct<CLightGlow>
void __fastcall CLightGlow::CEntityInstanceEntityClass::DestructInstance(
        CLightGlow::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLightGlow::CEntityInstanceEntityClass::FreeInstance  (line 23, @0x00000000022a5410, libserver.so)
void __fastcall CLightGlow::CEntityInstanceEntityClass::FreeInstance(
        CLightGlow::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLightGlow::CEntityInstanceEntityClass::CanAllocate  (line 23, @0x00000000022a5430, libserver.so)
bool __fastcall CLightGlow::CEntityInstanceEntityClass::CanAllocate(
        const CLightGlow::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLightGlow::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 23, @0x00000000022a5440, libserver.so)
// globals: CLightGlow::s_pSchemaBinding
const ISchemaBinding *__fastcall CLightGlow::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLightGlow::CEntityInstanceEntityClass *const this)
{
  return CLightGlow::s_pSchemaBinding;
}


// CLightGlow::CEntityInstanceEntityClass::AllocateInstance  (line 23, @0x00000000022a7e80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLightGlow::CEntityInstanceEntityClass::AllocateInstance(
        CLightGlow::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1184);
  memset(v1, 0, 0x4A0u);
  return v1;
}


// CLightGlow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x00000000022ab130, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLightGlow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLightGlow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CLightGlow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x00000000022ab150, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLightGlow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLightGlow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLightGlow::GetEntityClassInternal  (line 23, @0x00000000022afc10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "env_lightglow", "CLightGlow"
// globals: `guard variable for'CLightGlow::GetEntityClassInternal(void)::g_EntityCLightGlowClass, CLightGlow::GetEntityClassInternal(void)::g_EntityCLightGlowClass, __dso_handle, CLightGlow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLightGlow::GetEntityClassInfo(void)::g_EntityCLightGlowClassInfo, CLightGlow::GetEntityClassInfo(void)::g_EntityCLightGlowClassInfo
CEntityClass *__cdecl CLightGlow::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLightGlow::GetEntityClassInternal(void)::g_EntityCLightGlowClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLightGlow::GetEntityClassInternal(void)::g_EntityCLightGlowClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLightGlow::GetEntityClassInternal(void)::g_EntityCLightGlowClass);
    CLightGlow::GetEntityClassInternal(void)::g_EntityCLightGlowClass._vptr_CEntityClass = off_4058830;
    __cxa_guard_release(&`guard variable for'CLightGlow::GetEntityClassInternal(void)::g_EntityCLightGlowClass);
    __cxa_atexit(
      CLightGlow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLightGlow::GetEntityClassInternal(void)::g_EntityCLightGlowClass,
      &_dso_handle);
  }
  if ( g_pEntityCLightGlowClass != 0 )
    return &CLightGlow::GetEntityClassInternal(void)::g_EntityCLightGlowClass;
  if ( `guard variable for'CLightGlow::GetEntityClassInfo(void)::g_EntityCLightGlowClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLightGlow::GetEntityClassInfo(void)::g_EntityCLightGlowClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLightGlow::GetEntityClassInfo(void)::g_EntityCLightGlowClassInfo,
      "CLightGlow",
      "env_lightglow",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLightGlow::GetEntityClassInfo(void)::g_EntityCLightGlowClassInfo);
  }
  CLightGlow::GetEntityClassInternal(void)::g_EntityCLightGlowClass.m_pClassInfo = &CLightGlow::GetEntityClassInfo(void)::g_EntityCLightGlowClassInfo;
  CLightGlow::GetEntityClassInternal(void)::g_EntityCLightGlowClass.m_pBaseClassInfo = CLightGlow::GetEntityClassInfo(void)::g_EntityCLightGlowClassInfo.m_pBaseClassInfo;
  g_pEntityCLightGlowClass = &CLightGlow::GetEntityClassInternal(void)::g_EntityCLightGlowClass;
  CLightGlow::GetEntityClassInfo(void)::g_EntityCLightGlowClassInfo.m_pClass = &CLightGlow::GetEntityClassInternal(void)::g_EntityCLightGlowClass;
  CLightGlow::GetEntityClassInternal(void)::g_EntityCLightGlowClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCLightGlowClass->m_pComponentOverrides = 0;
  return &CLightGlow::GetEntityClassInternal(void)::g_EntityCLightGlowClass;
}


// CLightGlow::CEntityInstanceEntityClass::ConstructInstance  (line 23, @0x00000000022afd60, libserver.so)  // inlines: Construct<CLightGlow>
// calls: CLightGlow::CLightGlow
CEntityInstance *__fastcall CLightGlow::CEntityInstanceEntityClass::ConstructInstance(
        CLightGlow::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CLightGlow::CLightGlow(p);
  return p;
}


// CLightGlow::YouForgotToImplementOrDeclareServerClass  (line 54, @0x0000000002283a50, libserver.so)
int __fastcall CLightGlow::YouForgotToImplementOrDeclareServerClass(CLightGlow *const this)
{
  return 0;
}


// CLightGlow::GetServerClass  (line 54, @0x000000000228d640, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CLightGlow::GetServerClass(CLightGlow *const this)
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


// CLightGlow::GetDataDescMap  (line 57, @0x0000000002283a60, libserver.so)
// globals: CLightGlow::m_DataMap
datamap_t *__fastcall CLightGlow::GetDataDescMap(CLightGlow *const this)
{
  return &CLightGlow::m_DataMap;
}


// CLightGlow::AddDatadescMetadataKeys  (line 57, @0x000000000228e080, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLightGlow::GetEntityClass(void)
void __fastcall CLightGlow::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLightGlow::GetEntityClass);
}


// CLightGlow::GetBaseMap  (line 57, @0x000000000228e0a0, libserver.so)
datamap_t *__cdecl CLightGlow::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CLightGlow>  (line 57, @0x000000000228e0b0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLightGlow"
// globals: `guard variable for'DataMapInit<CLightGlow>(CLightGlow *)::nameHolder, CLightGlow::GetEntityClass(void), CLightGlow::m_DataMap, DataMapInit<CLightGlow>(CLightGlow *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLightGlow>(CLightGlow *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLightGlow>(CLightGlow *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLightGlow>(CLightGlow *)::nameHolder) != 0 )
  {
    DataMapInit<CLightGlow>(CLightGlow *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLightGlow>(CLightGlow *)::nameHolder.m_pszBase = "CLightGlow";
    DataMapInit<CLightGlow>(CLightGlow *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLightGlow>(CLightGlow *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLightGlow>(CLightGlow *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLightGlow>(CLightGlow *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLightGlow>(CLightGlow *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLightGlow>(CLightGlow *)::nameHolder,
      &_dso_handle);
  }
  CLightGlow::m_DataMap.dataNumFields = 8;
  CLightGlow::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CLightGlow::m_DataMap.dataDesc = &DataMapInit<CLightGlow>(CLightGlow *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLightGlow::m_DataMap, CLightGlow::GetEntityClass);
  return &CLightGlow::m_DataMap;
}


// CLightGlow::CLightGlow  (line 73, @0x000000000228e180, libserver.so)  // inlines: CNetworkVarBase, EnsureValidValue<float>, EnsureValidValue<unsigned int>, NetworkStateChanged, Set, operator=<float>
// calls: CBaseModelEntity::CBaseModelEntity, CBaseEntity::NetworkStateChanged, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CLightGlow::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CLightGlow::CLightGlow(CLightGlow *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->_vptr_IHandleEntity = &off_40588B0;
  this->m_nHorizontalSize.m_Value = 0;
  this->m_nVerticalSize.m_Value = 0;
  this->m_nMinDist.m_Value = 0;
  this->m_nMaxDist.m_Value = 0;
  this->m_nOuterMaxDist.m_Value = 0;
  this->m_flGlowProxySize.m_Value = 0.0;
  this->m_flHDRColorScale.m_Value = 0.0;
  CBaseEntity::NetworkStateChanged(this, 0x494u, -1, -1);
  this->m_flGlowProxySize.m_Value = 2.0;
}


// CLightGlow::Spawn  (line 86, @0x0000000002284980, libserver.so)  // inlines: AddEFlags
// calls: CBaseEntity::Spawn, CBaseEntity::DispatchUpdateTransmitState
void __fastcall CLightGlow::Spawn(CLightGlow *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  this->m_iEFlags |= 0x80u;
  CBaseEntity::DispatchUpdateTransmitState(this);
}


// CLightGlow::UpdateTransmitState  (line 98, @0x0000000002284950, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CLightGlow::UpdateTransmitState(CLightGlow *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CLightGlow::Activate  (line 106, @0x0000000002287c00, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<unsigned int>, operator><unsigned int>
// calls: CBaseModelEntity::Activate, Warning
// strings: "env_lightglow outermaxdist too large (%d should be %d).\n", "env_lightglow maxdist too large (%d should be %d).\n"
void __fastcall CLightGlow::Activate(CLightGlow *const this, ActivateType_t activateType)
{
  unsigned int m_Value; // esi
  unsigned int v4; // esi

  CBaseModelEntity::Activate(this, activateType);
  m_Value = this->m_nMaxDist.m_Value;
  if ( m_Value > 0xFFFF )
  {
    Warning("env_lightglow maxdist too large (%d should be %d).\n", m_Value, 0xFFFF);
    if ( this->m_nMaxDist.m_Value != 0xFFFF )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nMaxDist.m_Value = 0xFFFF;
    }
  }
  v4 = this->m_nOuterMaxDist.m_Value;
  if ( v4 > 0xFFFF )
  {
    Warning("env_lightglow outermaxdist too large (%d should be %d).\n", v4, 0xFFFF);
    if ( this->m_nOuterMaxDist.m_Value != 0xFFFF )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nOuterMaxDist.m_Value = 0xFFFF;
    }
  }
}


// CLightGlow::InputColor  (line 123, @0x0000000002287ce0, libserver.so)  // inlines: Color32, FromUint32, NetworkStateChanged, Set, SetRawColor, operator Color, operator=
void __fastcall CLightGlow::InputColor(CLightGlow *const this, inputdata_t *const inputdata)
{
  int m_int; // r12d

  m_int = inputdata->value.m_int;
  if ( m_int != *&this->m_clrRender )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender = m_int;
  }
}


