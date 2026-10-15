// Reconstructed from DWARF by pahole; not original source.

// src/game/server/env_screenoverlay.cpp:17
class CEnvScreenOverlay : public CPointEntity {
	class NetworkVar_m_iszOverlayNames {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_flOverlayTimes {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_flStartTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_iDesiredOverlay {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bIsActive {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

protected:

	typedef CPointEntity BaseClass;
	typedef CEnvScreenOverlay ThisClass;

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
	CEnvScreenOverlay(CEnvScreenOverlay &);
	CEnvScreenOverlay(CEnvScreenOverlay &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CEnvScreenOverlay();
	virtual int UpdateTransmitState();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	void InputStartOverlay(inputdata_t &);
	void InputStopOverlay(inputdata_t &);
	void InputSwitchOverlay(inputdata_t &);
	void SetActive(bool);
	virtual ~CEnvScreenOverlay();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[64] UpdateTransmitState
	// vtable[8] Spawn
	// vtable[6] Precache
	// sizeof = 912
};

// src/game/server/env_screenoverlay.cpp:61
class C_CEnvScreenOverlay_MapInstall {
	C_CEnvScreenOverlay_MapInstall();

	// sizeof = 1
};

// src/game/server/env_screenoverlay.cpp:163
class CEnvScreenEffect : public CPointEntity {
	class NetworkVar_m_flDuration {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	typedef CPointEntity BaseClass;
	typedef CEnvScreenEffect ThisClass;

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
	CEnvScreenEffect(CEnvScreenEffect &);
	CEnvScreenEffect(CEnvScreenEffect &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CEnvScreenEffect();
	virtual int UpdateTransmitState();
	virtual void Precache(const CEntityPrecacheContext *);
	void InputStartEffect(inputdata_t &);
	void InputStopEffect(inputdata_t &);
	virtual ~CEnvScreenEffect();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[64] UpdateTransmitState
	// vtable[6] Precache
	// sizeof = 784
};

// src/game/server/env_screenoverlay.cpp:192
class C_CEnvScreenEffect_MapInstall {
	C_CEnvScreenEffect_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvScreenOverlay::~CEnvScreenOverlay  (line 17, @0x0000000002210550, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvScreenOverlay::~CEnvScreenOverlay(CEnvScreenOverlay *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvScreenOverlay::~CEnvScreenOverlay  (line 17, @0x0000000002210570, libserver.so)  // inlines: ~CEnvScreenOverlay, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvScreenOverlay::~CEnvScreenOverlay(CEnvScreenOverlay *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvScreenOverlay::GetEntityClass  (line 19, @0x000000000220daf0, libserver.so)
CEntityClass *__cdecl CEnvScreenOverlay::GetEntityClass()
{
  return g_pEntityCEnvScreenOverlayClass;
}


// CEnvScreenOverlay::Schema_DynamicBinding  (line 19, @0x000000000220db00, libserver.so)
// globals: CEnvScreenOverlay::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvScreenOverlay::Schema_DynamicBinding(const CEnvScreenOverlay *const this)
{
  return CEnvScreenOverlay::s_pSchemaBinding;
}


// CEnvScreenOverlay::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 19, @0x000000000220db10, libserver.so)
// globals: CEnvScreenOverlay::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvScreenOverlay::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvScreenOverlay::CEntityInstanceEntityClass *const this)
{
  return CEnvScreenOverlay::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvScreenOverlay::CEntityInstanceEntityClass::DestructInstance  (line 19, @0x000000000220db20, libserver.so)  // inlines: Destruct<CEnvScreenOverlay>
void __fastcall CEnvScreenOverlay::CEntityInstanceEntityClass::DestructInstance(
        CEnvScreenOverlay::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvScreenOverlay::CEntityInstanceEntityClass::FreeInstance  (line 19, @0x000000000220db40, libserver.so)
void __fastcall CEnvScreenOverlay::CEntityInstanceEntityClass::FreeInstance(
        CEnvScreenOverlay::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvScreenOverlay::CEntityInstanceEntityClass::CanAllocate  (line 19, @0x000000000220db60, libserver.so)
bool __fastcall CEnvScreenOverlay::CEntityInstanceEntityClass::CanAllocate(
        const CEnvScreenOverlay::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvScreenOverlay::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 19, @0x000000000220db70, libserver.so)
// globals: CEnvScreenOverlay::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvScreenOverlay::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvScreenOverlay::CEntityInstanceEntityClass *const this)
{
  return CEnvScreenOverlay::s_pSchemaBinding;
}


// CEnvScreenOverlay::CEntityInstanceEntityClass::AllocateInstance  (line 19, @0x000000000220f8e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvScreenOverlay::CEntityInstanceEntityClass::AllocateInstance(
        CEnvScreenOverlay::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CEnvScreenOverlay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x00000000022121c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvScreenOverlay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvScreenOverlay::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvScreenOverlay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x00000000022121e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvScreenOverlay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvScreenOverlay::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvScreenOverlay::GetEntityClassInternal  (line 19, @0x0000000002214860, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "env_screenoverlay", "CEnvScreenOverlay"
// globals: `guard variable for'CEnvScreenOverlay::GetEntityClassInternal(void)::g_EntityCEnvScreenOverlayClass, CEnvScreenOverlay::GetEntityClassInternal(void)::g_EntityCEnvScreenOverlayClass, __dso_handle, CEnvScreenOverlay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvScreenOverlay::GetEntityClassInfo(void)::g_EntityCEnvScreenOverlayClassInfo, CEnvScreenOverlay::GetEntityClassInfo(void)::g_EntityCEnvScreenOverlayClassInfo
CEntityClass *__cdecl CEnvScreenOverlay::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvScreenOverlay::GetEntityClassInternal(void)::g_EntityCEnvScreenOverlayClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvScreenOverlay::GetEntityClassInternal(void)::g_EntityCEnvScreenOverlayClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvScreenOverlay::GetEntityClassInternal(void)::g_EntityCEnvScreenOverlayClass);
    CEnvScreenOverlay::GetEntityClassInternal(void)::g_EntityCEnvScreenOverlayClass._vptr_CEntityClass = off_402A910;
    __cxa_guard_release(&`guard variable for'CEnvScreenOverlay::GetEntityClassInternal(void)::g_EntityCEnvScreenOverlayClass);
    __cxa_atexit(
      CEnvScreenOverlay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvScreenOverlay::GetEntityClassInternal(void)::g_EntityCEnvScreenOverlayClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvScreenOverlayClass != 0 )
    return &CEnvScreenOverlay::GetEntityClassInternal(void)::g_EntityCEnvScreenOverlayClass;
  if ( `guard variable for'CEnvScreenOverlay::GetEntityClassInfo(void)::g_EntityCEnvScreenOverlayClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvScreenOverlay::GetEntityClassInfo(void)::g_EntityCEnvScreenOverlayClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvScreenOverlay::GetEntityClassInfo(void)::g_EntityCEnvScreenOverlayClassInfo,
      "CEnvScreenOverlay",
      "env_screenoverlay",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvScreenOverlay::GetEntityClassInfo(void)::g_EntityCEnvScreenOverlayClassInfo);
  }
  CEnvScreenOverlay::GetEntityClassInternal(void)::g_EntityCEnvScreenOverlayClass.m_pClassInfo = &CEnvScreenOverlay::GetEntityClassInfo(void)::g_EntityCEnvScreenOverlayClassInfo;
  CEnvScreenOverlay::GetEntityClassInternal(void)::g_EntityCEnvScreenOverlayClass.m_pBaseClassInfo = CEnvScreenOverlay::GetEntityClassInfo(void)::g_EntityCEnvScreenOverlayClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvScreenOverlayClass = &CEnvScreenOverlay::GetEntityClassInternal(void)::g_EntityCEnvScreenOverlayClass;
  CEnvScreenOverlay::GetEntityClassInfo(void)::g_EntityCEnvScreenOverlayClassInfo.m_pClass = &CEnvScreenOverlay::GetEntityClassInternal(void)::g_EntityCEnvScreenOverlayClass;
  CEnvScreenOverlay::GetEntityClassInternal(void)::g_EntityCEnvScreenOverlayClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvScreenOverlayClass->m_pComponentOverrides = 0;
  return &CEnvScreenOverlay::GetEntityClassInternal(void)::g_EntityCEnvScreenOverlayClass;
}


// CEnvScreenOverlay::CEntityInstanceEntityClass::ConstructInstance  (line 19, @0x00000000022149b0, libserver.so)  // inlines: Construct<CEnvScreenOverlay>
// calls: CEnvScreenOverlay::CEnvScreenOverlay
CEntityInstance *__fastcall CEnvScreenOverlay::CEntityInstanceEntityClass::ConstructInstance(
        CEnvScreenOverlay::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEnvScreenOverlay::CEnvScreenOverlay(p);
  return p;
}


// CEnvScreenOverlay::GetDataDescMap  (line 45, @0x00000000021ee520, libserver.so)
// globals: CEnvScreenOverlay::m_DataMap
datamap_t *__fastcall CEnvScreenOverlay::GetDataDescMap(CEnvScreenOverlay *const this)
{
  return &CEnvScreenOverlay::m_DataMap;
}


// CEnvScreenOverlay::AddDatadescMetadataKeys  (line 45, @0x00000000021f50c0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvScreenOverlay::GetEntityClass(void)
void __fastcall CEnvScreenOverlay::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvScreenOverlay::GetEntityClass);
}


// CEnvScreenOverlay::GetBaseMap  (line 45, @0x00000000021f50e0, libserver.so)
datamap_t *__cdecl CEnvScreenOverlay::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvScreenOverlay>  (line 45, @0x00000000021f50f0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CEnvScreenOverlay"
// globals: `guard variable for'DataMapInit<CEnvScreenOverlay>(CEnvScreenOverlay *)::nameHolder, CEnvScreenOverlay::GetEntityClass(void), CEnvScreenOverlay::m_DataMap, DataMapInit<CEnvScreenOverlay>(CEnvScreenOverlay *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvScreenOverlay>(CEnvScreenOverlay *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvScreenOverlay>(CEnvScreenOverlay *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvScreenOverlay>(CEnvScreenOverlay *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvScreenOverlay>(CEnvScreenOverlay *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvScreenOverlay>(CEnvScreenOverlay *)::nameHolder.m_pszBase = "CEnvScreenOverlay";
    DataMapInit<CEnvScreenOverlay>(CEnvScreenOverlay *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvScreenOverlay>(CEnvScreenOverlay *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvScreenOverlay>(CEnvScreenOverlay *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvScreenOverlay>(CEnvScreenOverlay *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvScreenOverlay>(CEnvScreenOverlay *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvScreenOverlay>(CEnvScreenOverlay *)::nameHolder,
      &_dso_handle);
  }
  CEnvScreenOverlay::m_DataMap.dataNumFields = 8;
  CEnvScreenOverlay::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CEnvScreenOverlay::m_DataMap.dataDesc = &DataMapInit<CEnvScreenOverlay>(CEnvScreenOverlay *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvScreenOverlay::m_DataMap, CEnvScreenOverlay::GetEntityClass);
  return &CEnvScreenOverlay::m_DataMap;
}


// CEnvScreenOverlay::YouForgotToImplementOrDeclareServerClass  (line 61, @0x00000000021ee530, libserver.so)
int __fastcall CEnvScreenOverlay::YouForgotToImplementOrDeclareServerClass(CEnvScreenOverlay *const this)
{
  return 0;
}


// CEnvScreenOverlay::GetServerClass  (line 61, @0x00000000021f46b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEnvScreenOverlay::GetServerClass(CEnvScreenOverlay *const this)
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


// CEnvScreenOverlay::CEnvScreenOverlay  (line 67, @0x00000000021f51c0, libserver.so)  // inlines: CNetworkArrayBase, CNetworkVarBase, CPointEntity, CUtlSymbolLarge, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>
// calls: CBaseEntity::CBaseEntity
// callers: CEnvScreenOverlay::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CEnvScreenOverlay::CEnvScreenOverlay(CEnvScreenOverlay *const this)
{
  CEnvScreenOverlay *p_m_iszOverlayNames; // rax

  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_402A990;
  p_m_iszOverlayNames = &this->m_iszOverlayNames;
  do
  {
    p_m_iszOverlayNames->_vptr_IHandleEntity = 0;
    p_m_iszOverlayNames = (p_m_iszOverlayNames + 8);
  }
  while ( p_m_iszOverlayNames != &this->m_flOverlayTimes );
  this->m_flStartTime.m_Value = 0.0;
  this->m_iDesiredOverlay.m_Value = 0;
  this->m_bIsActive.m_Value = 0;
}


// CEnvScreenOverlay::Spawn  (line 77, @0x00000000021ef260, libserver.so)
// calls: CPointEntity::Spawn
void __fastcall CEnvScreenOverlay::Spawn(CEnvScreenOverlay *const this, const CEntityKeyValues *pKeyValues)
{
  CPointEntity::Spawn(this, pKeyValues);
}


// CEnvScreenOverlay::Precache  (line 85, @0x000000000220d310, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, PrecacheMaterial
void __fastcall CEnvScreenOverlay::Precache(CEnvScreenOverlay *const this, const CEntityPrecacheContext *pContext)
{
  __int64 v4; // rbx

  v4 = 0;
  CEntityInstance::Precache(this, pContext);
  do
  {
    if ( this->m_iszOverlayNames.m_Value[v4].u.m_Id != 0 )
      PrecacheMaterial(this->m_iszOverlayNames.m_Value[v4].u.m_pAsString, pContext);
    ++v4;
  }
  while ( v4 != 10 );
}


// CEnvScreenOverlay::InputStartOverlay  (line 101, @0x00000000021f4060, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, NetworkStateChanged, Set, SetActive, curtime, operator=<bool>, operator=<float>
// calls: Warning, CGameEntitySystem::FindEntityByClassname
// strings: "env_screenoverlay %s has no overlays to display.\n", "env_screenoverlay"
void __fastcall CEnvScreenOverlay::InputStartOverlay(CEnvScreenOverlay *const this, inputdata_t *const inputdata)
{
  const char *m_pAsString; // rsi
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v5; // rbx
  CEnvScreenOverlay *v6; // rbx
  CEnvScreenOverlay *EntityByClassname; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v9; // [rsp+Ch] [rbp-24h]

  if ( this->m_iszOverlayNames.m_Value[0].u.m_Id != 0 )
  {
    m_flCurrentTime = 0.0;
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, inputdata, 0.0);
      }
      m_flCurrentTime = v5->m_flCurrentTime;
    }
    if ( m_flCurrentTime != this->m_flStartTime.m_Value )
    {
      v9 = m_flCurrentTime;
      (*(this->_vptr_IHandleEntity + 22))(this, 896, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flStartTime.m_Value = v9;
    }
    if ( !this->m_bIsActive.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 904, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bIsActive.m_Value = 1;
    }
    v6 = 0;
    while ( 1 )
    {
      EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v6, "env_screenoverlay");
      v6 = EntityByClassname;
      if ( EntityByClassname == 0 )
        break;
      if ( this != EntityByClassname && EntityByClassname->m_bIsActive.m_Value )
      {
        (*(EntityByClassname->_vptr_IHandleEntity + 22))(EntityByClassname, 904, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v6->m_bIsActive.m_Value = 0;
      }
    }
  }
  else
  {
    m_pAsString = "";
    if ( this->m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
    Warning("env_screenoverlay %s has no overlays to display.\n", m_pAsString);
  }
}


// CEnvScreenOverlay::UpdateTransmitState  (line 124, @0x00000000021ef1a0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CEnvScreenOverlay::UpdateTransmitState(CEnvScreenOverlay *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CEnvScreenOverlay::InputSwitchOverlay  (line 130, @0x00000000021f2b80, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, Int, NetworkStateChanged, Set, curtime, operator int, operator=<float>, operator=<int>
// calls: Warning
// strings: "env_screenoverlay %s has no overlays to display.\n"
void __fastcall CEnvScreenOverlay::InputSwitchOverlay(CEnvScreenOverlay *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  int m_float; // r12d
  int v5; // r12d
  const char *m_pAsString; // rsi
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v10; // [rsp+Ch] [rbp-14h]

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    m_float = inputdata->value.m_float;
  }
  else if ( m_type == 34 )
  {
    m_float = inputdata->value.m_float64;
  }
  else
  {
    m_float = inputdata->value.m_int;
  }
  v5 = abs32(m_float - 1);
  if ( this->m_iszOverlayNames.m_Value[v5].u.m_Id != 0 )
  {
    if ( v5 != this->m_iDesiredOverlay.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 900, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iDesiredOverlay.m_Value = v5;
    }
    m_flCurrentTime = 0.0;
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v8->m_flCurrentTime;
    }
    if ( m_flCurrentTime != this->m_flStartTime.m_Value )
    {
      v10 = m_flCurrentTime;
      (*(this->_vptr_IHandleEntity + 22))(this, 896, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flStartTime.m_Value = v10;
    }
  }
  else
  {
    m_pAsString = "";
    if ( this->m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
    Warning("env_screenoverlay %s has no overlays to display.\n", m_pAsString);
  }
}


// CEnvScreenOverlay::InputStopOverlay  (line 145, @0x00000000021f15f0, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, NetworkStateChanged, Set, operator=<bool>, operator=<int>
// calls: Warning
// strings: "env_screenoverlay %s has no overlays to display.\n"
void __fastcall CEnvScreenOverlay::InputStopOverlay(CEnvScreenOverlay *const this, inputdata_t *const inputdata)
{
  const char *m_pAsString; // rsi
  __int64 v4; // xmm0_8

  if ( this->m_iszOverlayNames.m_Value[0].u.m_Id != 0 )
  {
    v4 = 3212836864LL;
    if ( this->m_flStartTime.m_Value != -1.0 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 896, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
      this->m_flStartTime.m_Value = -1.0;
    }
    if ( this->m_bIsActive.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 904, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v4);
      this->m_bIsActive.m_Value = 0;
    }
  }
  else
  {
    m_pAsString = "";
    if ( this->m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
    Warning("env_screenoverlay %s has no overlays to display.\n", m_pAsString);
  }
}


// CEnvScreenEffect::~CEnvScreenEffect  (line 163, @0x00000000022105a0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvScreenEffect::~CEnvScreenEffect(CEnvScreenEffect *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvScreenEffect::~CEnvScreenEffect  (line 163, @0x00000000022105c0, libserver.so)  // inlines: ~CEnvScreenEffect, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvScreenEffect::~CEnvScreenEffect(CEnvScreenEffect *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvScreenEffect::GetEntityClass  (line 165, @0x000000000220db80, libserver.so)
CEntityClass *__cdecl CEnvScreenEffect::GetEntityClass()
{
  return g_pEntityCEnvScreenEffectClass;
}


// CEnvScreenEffect::Schema_DynamicBinding  (line 165, @0x000000000220db90, libserver.so)
// globals: CEnvScreenEffect::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvScreenEffect::Schema_DynamicBinding(const CEnvScreenEffect *const this)
{
  return CEnvScreenEffect::s_pSchemaBinding;
}


// CEnvScreenEffect::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 165, @0x000000000220dba0, libserver.so)
// globals: CEnvScreenEffect::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvScreenEffect::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvScreenEffect::CEntityInstanceEntityClass *const this)
{
  return CEnvScreenEffect::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvScreenEffect::CEntityInstanceEntityClass::DestructInstance  (line 165, @0x000000000220dbb0, libserver.so)  // inlines: Destruct<CEnvScreenEffect>
void __fastcall CEnvScreenEffect::CEntityInstanceEntityClass::DestructInstance(
        CEnvScreenEffect::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvScreenEffect::CEntityInstanceEntityClass::FreeInstance  (line 165, @0x000000000220dbd0, libserver.so)
void __fastcall CEnvScreenEffect::CEntityInstanceEntityClass::FreeInstance(
        CEnvScreenEffect::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvScreenEffect::CEntityInstanceEntityClass::CanAllocate  (line 165, @0x000000000220dbf0, libserver.so)
bool __fastcall CEnvScreenEffect::CEntityInstanceEntityClass::CanAllocate(
        const CEnvScreenEffect::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvScreenEffect::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 165, @0x000000000220dc00, libserver.so)
// globals: CEnvScreenEffect::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvScreenEffect::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvScreenEffect::CEntityInstanceEntityClass *const this)
{
  return CEnvScreenEffect::s_pSchemaBinding;
}


// CEnvScreenEffect::CEntityInstanceEntityClass::AllocateInstance  (line 165, @0x000000000220f920, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvScreenEffect::CEntityInstanceEntityClass::AllocateInstance(
        CEnvScreenEffect::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CEnvScreenEffect::CEntityInstanceEntityClass::ConstructInstance  (line 165, @0x00000000022119d0, libserver.so)  // inlines: AddEFlags, CEnvScreenEffect, CNetworkVarBase, CPointEntity, Construct<CEnvScreenEffect>, EnsureValidValue<ScreenEffectType_t>, EnsureValidValue<float>, ~CPointEntity
// calls: CBaseEntity::CBaseEntity, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::~CBaseEntity, _Unwind_Resume
CEntityInstance *__fastcall CEnvScreenEffect::CEntityInstanceEntityClass::ConstructInstance(
        CEnvScreenEffect::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 143) |= 0x80u;
    *p = &off_402B0B0;
    *(p + 194) = 0;
    *(p + 195) = 0;
    CBaseEntity::DispatchUpdateTransmitState(p);
  }
  return p;
}


// CEnvScreenEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 165, @0x0000000002212210, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvScreenEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvScreenEffect::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvScreenEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 165, @0x0000000002212230, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvScreenEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvScreenEffect::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvScreenEffect::GetEntityClassInternal  (line 165, @0x00000000022149e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "env_screeneffect", "CEnvScreenEffect"
// globals: `guard variable for'CEnvScreenEffect::GetEntityClassInternal(void)::g_EntityCEnvScreenEffectClass, CEnvScreenEffect::GetEntityClassInternal(void)::g_EntityCEnvScreenEffectClass, __dso_handle, CEnvScreenEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvScreenEffect::GetEntityClassInfo(void)::g_EntityCEnvScreenEffectClassInfo, CEnvScreenEffect::GetEntityClassInfo(void)::g_EntityCEnvScreenEffectClassInfo
CEntityClass *__cdecl CEnvScreenEffect::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvScreenEffect::GetEntityClassInternal(void)::g_EntityCEnvScreenEffectClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvScreenEffect::GetEntityClassInternal(void)::g_EntityCEnvScreenEffectClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvScreenEffect::GetEntityClassInternal(void)::g_EntityCEnvScreenEffectClass);
    CEnvScreenEffect::GetEntityClassInternal(void)::g_EntityCEnvScreenEffectClass._vptr_CEntityClass = off_402B030;
    __cxa_guard_release(&`guard variable for'CEnvScreenEffect::GetEntityClassInternal(void)::g_EntityCEnvScreenEffectClass);
    __cxa_atexit(
      CEnvScreenEffect::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvScreenEffect::GetEntityClassInternal(void)::g_EntityCEnvScreenEffectClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvScreenEffectClass != 0 )
    return &CEnvScreenEffect::GetEntityClassInternal(void)::g_EntityCEnvScreenEffectClass;
  if ( `guard variable for'CEnvScreenEffect::GetEntityClassInfo(void)::g_EntityCEnvScreenEffectClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvScreenEffect::GetEntityClassInfo(void)::g_EntityCEnvScreenEffectClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvScreenEffect::GetEntityClassInfo(void)::g_EntityCEnvScreenEffectClassInfo,
      "CEnvScreenEffect",
      "env_screeneffect",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvScreenEffect::GetEntityClassInfo(void)::g_EntityCEnvScreenEffectClassInfo);
  }
  CEnvScreenEffect::GetEntityClassInternal(void)::g_EntityCEnvScreenEffectClass.m_pClassInfo = &CEnvScreenEffect::GetEntityClassInfo(void)::g_EntityCEnvScreenEffectClassInfo;
  CEnvScreenEffect::GetEntityClassInternal(void)::g_EntityCEnvScreenEffectClass.m_pBaseClassInfo = CEnvScreenEffect::GetEntityClassInfo(void)::g_EntityCEnvScreenEffectClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvScreenEffectClass = &CEnvScreenEffect::GetEntityClassInternal(void)::g_EntityCEnvScreenEffectClass;
  CEnvScreenEffect::GetEntityClassInfo(void)::g_EntityCEnvScreenEffectClassInfo.m_pClass = &CEnvScreenEffect::GetEntityClassInternal(void)::g_EntityCEnvScreenEffectClass;
  CEnvScreenEffect::GetEntityClassInternal(void)::g_EntityCEnvScreenEffectClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvScreenEffectClass->m_pComponentOverrides = 0;
  return &CEnvScreenEffect::GetEntityClassInternal(void)::g_EntityCEnvScreenEffectClass;
}


// CEnvScreenEffect::UpdateTransmitState  (line 172, @0x00000000022104f0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CEnvScreenEffect::UpdateTransmitState(CEnvScreenEffect *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CEnvScreenEffect::GetDataDescMap  (line 185, @0x00000000021ee540, libserver.so)
// globals: CEnvScreenEffect::m_DataMap
datamap_t *__fastcall CEnvScreenEffect::GetDataDescMap(CEnvScreenEffect *const this)
{
  return &CEnvScreenEffect::m_DataMap;
}


// CEnvScreenEffect::AddDatadescMetadataKeys  (line 185, @0x00000000021f5230, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvScreenEffect::GetEntityClass(void)
void __fastcall CEnvScreenEffect::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvScreenEffect::GetEntityClass);
}


// CEnvScreenEffect::GetBaseMap  (line 185, @0x00000000021f5250, libserver.so)
datamap_t *__cdecl CEnvScreenEffect::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvScreenEffect>  (line 185, @0x00000000021f5260, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CEnvScreenEffect"
// globals: `guard variable for'DataMapInit<CEnvScreenEffect>(CEnvScreenEffect *)::nameHolder, CEnvScreenEffect::GetEntityClass(void), CEnvScreenEffect::m_DataMap, DataMapInit<CEnvScreenEffect>(CEnvScreenEffect *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvScreenEffect>(CEnvScreenEffect *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvScreenEffect>(CEnvScreenEffect *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvScreenEffect>(CEnvScreenEffect *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvScreenEffect>(CEnvScreenEffect *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvScreenEffect>(CEnvScreenEffect *)::nameHolder.m_pszBase = "CEnvScreenEffect";
    DataMapInit<CEnvScreenEffect>(CEnvScreenEffect *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvScreenEffect>(CEnvScreenEffect *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvScreenEffect>(CEnvScreenEffect *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvScreenEffect>(CEnvScreenEffect *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvScreenEffect>(CEnvScreenEffect *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvScreenEffect>(CEnvScreenEffect *)::nameHolder,
      &_dso_handle);
  }
  CEnvScreenEffect::m_DataMap.dataNumFields = 4;
  CEnvScreenEffect::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CEnvScreenEffect::m_DataMap.dataDesc = &DataMapInit<CEnvScreenEffect>(CEnvScreenEffect *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvScreenEffect::m_DataMap, CEnvScreenEffect::GetEntityClass);
  return &CEnvScreenEffect::m_DataMap;
}


// CEnvScreenEffect::YouForgotToImplementOrDeclareServerClass  (line 192, @0x00000000021ee550, libserver.so)
int __fastcall CEnvScreenEffect::YouForgotToImplementOrDeclareServerClass(CEnvScreenEffect *const this)
{
  return 0;
}


// CEnvScreenEffect::GetServerClass  (line 192, @0x00000000021f4730, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEnvScreenEffect::GetServerClass(CEnvScreenEffect *const this)
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


// CEnvScreenEffect::Precache  (line 195, @0x000000000220d360, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, PrecacheMaterial
// strings: "materials/effects/stun", "materials/effects/introblur"
void __fastcall CEnvScreenEffect::Precache(CEnvScreenEffect *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  PrecacheMaterial("materials/effects/stun", pContext);
  PrecacheMaterial("materials/effects/introblur", pContext);
}


// CEnvScreenEffect::InputStartEffect  (line 205, @0x000000000220cc60, libserver.so)  // inlines: CEntityEventPosterBase, CEntityHandle, CEntityMessageScreenOverlay_t, CNetMessagePB, CSplitScreenSlot, CUserMessagePB, FindGameEvent<CEntityMessageScreenOverlay_t>, FindOrCreateGameEvent<CEntityMessageScreenOverlay_t>, Float, GetEHandle, GetEntryIndex, GetSerialNumber, NetworkStateChanged, PostEntityEvent<CEntityMessageScreenOverlay_t>, Set, operator float, operator=, operator=<float>, set_has_start_effect, set_start_effect, ~CEntityEventPosterBase, ~CEntityMessageScreenOverlay_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CEntityMessageScreenOverlay::CEntityMessageScreenOverlay, CEntityMessageScreenOverlay::~CEntityMessageScreenOverlay
// globals: IGameEventSystem::FindOrCreateGameEvent<CEntityMessageScreenOverlay_t>(bool)::s_hEvent
void __fastcall CEnvScreenEffect::InputStartEffect(CEnvScreenEffect *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  __int16 v5; // cx
  __int64 v6; // r14
  IGameEventSystem *v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, int *, __int64, _QWORD *, __int64, _QWORD); // r15
  unsigned int v9; // [rsp+Ch] [rbp-64h]
  float v10; // [rsp+Ch] [rbp-64h]
  int v11; // [rsp+10h] [rbp-60h] BYREF
  int v12; // [rsp+14h] [rbp-5Ch]
  _QWORD v13[2]; // [rsp+18h] [rbp-58h] BYREF
  int v14; // [rsp+28h] [rbp-48h]
  char v15; // [rsp+30h] [rbp-40h]
  int v16; // [rsp+38h] [rbp-38h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flDuration.m_Value )
  {
    v10 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flDuration.m_Value = v10;
  }
  v11 = -1;
  v12 = 1;
  CEntityMessageScreenOverlay::CEntityMessageScreenOverlay(v13);
  v16 = 0;
  v13[0] = off_402A850;
  m_pEntity = this->m_pEntity;
  if ( m_pEntity != 0 )
  {
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v5 = 0x7FFF;
    else
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v11 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
  }
  else
  {
    v11 = -1;
  }
  v15 = 1;
  v14 |= 1u;
  v6 = IGameEventSystem::FindOrCreateGameEvent<CEntityMessageScreenOverlay_t>(bool)::s_hEvent;
  v7 = g_pGameEventSystem;
  v9 = v12;
  v8 = *(*g_pGameEventSystem + 136LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CEntityMessageScreenOverlay_t>(bool)::s_hEvent);
  v8(v7, &v11, v6, v13, 32, v9);
  v13[0] = &off_402A6D0;
  CEntityMessageScreenOverlay::~CEntityMessageScreenOverlay(v13);
}


// CEnvScreenEffect::InputStopEffect  (line 218, @0x000000000220cac0, libserver.so)  // inlines: CEntityEventPosterBase, CEntityHandle, CEntityMessageScreenOverlay_t, CNetMessagePB, CSplitScreenSlot, CUserMessagePB, FindGameEvent<CEntityMessageScreenOverlay_t>, FindOrCreateGameEvent<CEntityMessageScreenOverlay_t>, Float, GetEHandle, GetEntryIndex, GetSerialNumber, NetworkStateChanged, PostEntityEvent<CEntityMessageScreenOverlay_t>, Set, operator float, operator=, operator=<float>, set_has_start_effect, set_start_effect, ~CEntityEventPosterBase, ~CEntityMessageScreenOverlay_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CEntityMessageScreenOverlay::CEntityMessageScreenOverlay, CEntityMessageScreenOverlay::~CEntityMessageScreenOverlay
// globals: IGameEventSystem::FindOrCreateGameEvent<CEntityMessageScreenOverlay_t>(bool)::s_hEvent
void __fastcall CEnvScreenEffect::InputStopEffect(CEnvScreenEffect *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  __int16 v5; // cx
  __int64 v6; // r14
  IGameEventSystem *v7; // r12
  void (__fastcall *v8)(IGameEventSystem *, int *, __int64, _QWORD *, __int64, _QWORD); // r15
  unsigned int v9; // [rsp+Ch] [rbp-64h]
  float v10; // [rsp+Ch] [rbp-64h]
  int v11; // [rsp+10h] [rbp-60h] BYREF
  int v12; // [rsp+14h] [rbp-5Ch]
  _QWORD v13[2]; // [rsp+18h] [rbp-58h] BYREF
  int v14; // [rsp+28h] [rbp-48h]
  char v15; // [rsp+30h] [rbp-40h]
  int v16; // [rsp+38h] [rbp-38h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flDuration.m_Value )
  {
    v10 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flDuration.m_Value = v10;
  }
  v11 = -1;
  v12 = 1;
  CEntityMessageScreenOverlay::CEntityMessageScreenOverlay(v13);
  v16 = 0;
  v13[0] = off_402A850;
  m_pEntity = this->m_pEntity;
  if ( m_pEntity != 0 )
  {
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v5 = 0x7FFF;
    else
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v11 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
  }
  else
  {
    v11 = -1;
  }
  v15 = 0;
  v14 |= 1u;
  v6 = IGameEventSystem::FindOrCreateGameEvent<CEntityMessageScreenOverlay_t>(bool)::s_hEvent;
  v7 = g_pGameEventSystem;
  v9 = v12;
  v8 = *(*g_pGameEventSystem + 136LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CEntityMessageScreenOverlay_t>(bool)::s_hEvent);
  v8(v7, &v11, v6, v13, 32, v9);
  v13[0] = &off_402A6D0;
  CEntityMessageScreenOverlay::~CEntityMessageScreenOverlay(v13);
}


