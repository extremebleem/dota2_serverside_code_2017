// Reconstructed from DWARF by pahole; not original source.

// src/game/server/colorcorrectionvolume.cpp:25
class CColorCorrectionVolume : public CBaseTrigger {
	class NetworkVar_m_bEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_MaxWeight {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_FadeDuration {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_Weight {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_lookupFilename {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	bool m_bStartDisabled;  // +0x5cc

	float m_LastEnterWeight;  // +0x6d8
	float m_LastEnterTime;  // +0x6dc
	float m_LastExitWeight;  // +0x6e0
	float m_LastExitTime;  // +0x6e4
	typedef CBaseTrigger BaseClass;
	typedef CColorCorrectionVolume ThisClass;

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
	CColorCorrectionVolume(CColorCorrectionVolume &);
	CColorCorrectionVolume(CColorCorrectionVolume &);
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
	CColorCorrectionVolume();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual int UpdateTransmitState();
	void ThinkFunc();
	virtual bool PassesTriggerFilters(CBaseEntity *);
	virtual void StartTouch(CBaseEntity *);
	virtual void EndTouch(CBaseEntity *);
	virtual int ObjectCaps();
	virtual void InputEnable(inputdata_t &);
	virtual void InputDisable(inputdata_t &);
	virtual ~CColorCorrectionVolume();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[64] UpdateTransmitState
	// vtable[223] PassesTriggerFilters
	// vtable[111] StartTouch
	// vtable[113] EndTouch
	// vtable[19] ObjectCaps
	// vtable[216] InputEnable
	// vtable[217] InputDisable
	// sizeof = 1768
};

// src/game/server/colorcorrectionvolume.cpp:91
class C_CColorCorrectionVolume_MapInstall {
	C_CColorCorrectionVolume_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CColorCorrectionVolume::~CColorCorrectionVolume  (line 25, @0x00000000021b3490, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CColorCorrectionVolume::~CColorCorrectionVolume(CColorCorrectionVolume *const this)
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


// CColorCorrectionVolume::~CColorCorrectionVolume  (line 25, @0x00000000021b3510, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseToggle, ~CBaseTrigger, ~CColorCorrectionVolume, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CColorCorrectionVolume::~CColorCorrectionVolume(CColorCorrectionVolume *const this)
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


// CColorCorrectionVolume::GetEntityClass  (line 27, @0x00000000021b11b0, libserver.so)
CEntityClass *__cdecl CColorCorrectionVolume::GetEntityClass()
{
  return g_pEntityCColorCorrectionVolumeClass;
}


// CColorCorrectionVolume::Schema_DynamicBinding  (line 27, @0x00000000021b11c0, libserver.so)
// globals: CColorCorrectionVolume::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CColorCorrectionVolume::Schema_DynamicBinding(
        const CColorCorrectionVolume *const this)
{
  return CColorCorrectionVolume::s_pSchemaBinding;
}


// CColorCorrectionVolume::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 27, @0x00000000021b11d0, libserver.so)
// globals: CColorCorrectionVolume::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CColorCorrectionVolume::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CColorCorrectionVolume::CEntityInstanceEntityClass *const this)
{
  return CColorCorrectionVolume::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CColorCorrectionVolume::CEntityInstanceEntityClass::DestructInstance  (line 27, @0x00000000021b11e0, libserver.so)  // inlines: Destruct<CColorCorrectionVolume>
void __fastcall CColorCorrectionVolume::CEntityInstanceEntityClass::DestructInstance(
        CColorCorrectionVolume::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CColorCorrectionVolume::CEntityInstanceEntityClass::FreeInstance  (line 27, @0x00000000021b1200, libserver.so)
void __fastcall CColorCorrectionVolume::CEntityInstanceEntityClass::FreeInstance(
        CColorCorrectionVolume::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CColorCorrectionVolume::CEntityInstanceEntityClass::CanAllocate  (line 27, @0x00000000021b1220, libserver.so)
bool __fastcall CColorCorrectionVolume::CEntityInstanceEntityClass::CanAllocate(
        const CColorCorrectionVolume::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CColorCorrectionVolume::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 27, @0x00000000021b1230, libserver.so)
// globals: CColorCorrectionVolume::s_pSchemaBinding
const ISchemaBinding *__fastcall CColorCorrectionVolume::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CColorCorrectionVolume::CEntityInstanceEntityClass *const this)
{
  return CColorCorrectionVolume::s_pSchemaBinding;
}


// CColorCorrectionVolume::CEntityInstanceEntityClass::AllocateInstance  (line 27, @0x00000000021b2040, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CColorCorrectionVolume::CEntityInstanceEntityClass::AllocateInstance(
        CColorCorrectionVolume::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1768);
  memset(v1, 0, 0x6E8u);
  return v1;
}


// CColorCorrectionVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x00000000021b3790, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CColorCorrectionVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CColorCorrectionVolume::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CColorCorrectionVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x00000000021b37b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CColorCorrectionVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CColorCorrectionVolume::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CColorCorrectionVolume::CEntityInstanceEntityClass::ConstructInstance  (line 27, @0x00000000021b58a0, libserver.so)  // inlines: Construct<CColorCorrectionVolume>
// calls: CColorCorrectionVolume::CColorCorrectionVolume
CEntityInstance *__fastcall CColorCorrectionVolume::CEntityInstanceEntityClass::ConstructInstance(
        CColorCorrectionVolume::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CColorCorrectionVolume::CColorCorrectionVolume(p);
  return p;
}


// CColorCorrectionVolume::GetEntityClassInternal  (line 27, @0x00000000021b7e10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseToggle::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "color_correction_volume", "CColorCorrectionVolume", "CBaseTrigger"
// globals: `guard variable for'CColorCorrectionVolume::GetEntityClassInternal(void)::g_EntityCColorCorrectionVolumeClass, CColorCorrectionVolume::GetEntityClassInternal(void)::g_EntityCColorCorrectionVolumeClass, __dso_handle, CColorCorrectionVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CColorCorrectionVolume::GetEntityClassInfo(void)::g_EntityCColorCorrectionVolumeClassInfo, CColorCorrectionVolume::GetEntityClassInfo(void)::g_EntityCColorCorrectionVolumeClassInfo, `guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo, CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo
CEntityClass *__cdecl CColorCorrectionVolume::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CColorCorrectionVolume::GetEntityClassInternal(void)::g_EntityCColorCorrectionVolumeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CColorCorrectionVolume::GetEntityClassInternal(void)::g_EntityCColorCorrectionVolumeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CColorCorrectionVolume::GetEntityClassInternal(void)::g_EntityCColorCorrectionVolumeClass);
    CColorCorrectionVolume::GetEntityClassInternal(void)::g_EntityCColorCorrectionVolumeClass._vptr_CEntityClass = off_4010F30;
    __cxa_guard_release(&`guard variable for'CColorCorrectionVolume::GetEntityClassInternal(void)::g_EntityCColorCorrectionVolumeClass);
    __cxa_atexit(
      CColorCorrectionVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CColorCorrectionVolume::GetEntityClassInternal(void)::g_EntityCColorCorrectionVolumeClass,
      &_dso_handle);
  }
  if ( g_pEntityCColorCorrectionVolumeClass != 0 )
    return &CColorCorrectionVolume::GetEntityClassInternal(void)::g_EntityCColorCorrectionVolumeClass;
  if ( `guard variable for'CColorCorrectionVolume::GetEntityClassInfo(void)::g_EntityCColorCorrectionVolumeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CColorCorrectionVolume::GetEntityClassInfo(void)::g_EntityCColorCorrectionVolumeClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo) != 0 )
    {
      EntityClassInfo = CBaseToggle::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo,
        "CBaseTrigger",
        "trigger",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CColorCorrectionVolume::GetEntityClassInfo(void)::g_EntityCColorCorrectionVolumeClassInfo,
      "CColorCorrectionVolume",
      "color_correction_volume",
      0,
      &CBaseTrigger::GetEntityClassInfo(void)::g_EntityCBaseTriggerClassInfo);
    __cxa_guard_release(&`guard variable for'CColorCorrectionVolume::GetEntityClassInfo(void)::g_EntityCColorCorrectionVolumeClassInfo);
  }
  CColorCorrectionVolume::GetEntityClassInternal(void)::g_EntityCColorCorrectionVolumeClass.m_pClassInfo = &CColorCorrectionVolume::GetEntityClassInfo(void)::g_EntityCColorCorrectionVolumeClassInfo;
  CColorCorrectionVolume::GetEntityClassInternal(void)::g_EntityCColorCorrectionVolumeClass.m_pBaseClassInfo = CColorCorrectionVolume::GetEntityClassInfo(void)::g_EntityCColorCorrectionVolumeClassInfo.m_pBaseClassInfo;
  g_pEntityCColorCorrectionVolumeClass = &CColorCorrectionVolume::GetEntityClassInternal(void)::g_EntityCColorCorrectionVolumeClass;
  CColorCorrectionVolume::GetEntityClassInfo(void)::g_EntityCColorCorrectionVolumeClassInfo.m_pClass = &CColorCorrectionVolume::GetEntityClassInternal(void)::g_EntityCColorCorrectionVolumeClass;
  CColorCorrectionVolume::GetEntityClassInternal(void)::g_EntityCColorCorrectionVolumeClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCColorCorrectionVolumeClass->m_pComponentOverrides = 0;
  return &CColorCorrectionVolume::GetEntityClassInternal(void)::g_EntityCColorCorrectionVolumeClass;
}


// CColorCorrectionVolume::ObjectCaps  (line 44, @0x00000000021b2300, libserver.so)  // inlines: ObjectCaps
// calls: CBaseEntity::ObjectCaps
int __fastcall CColorCorrectionVolume::ObjectCaps(CColorCorrectionVolume *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CColorCorrectionVolume::GetDataDescMap  (line 68, @0x0000000002187800, libserver.so)
// globals: CColorCorrectionVolume::m_DataMap
datamap_t *__fastcall CColorCorrectionVolume::GetDataDescMap(CColorCorrectionVolume *const this)
{
  return &CColorCorrectionVolume::m_DataMap;
}


// CColorCorrectionVolume::AddDatadescMetadataKeys  (line 68, @0x000000000219e1f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CColorCorrectionVolume::GetEntityClass(void)
void __fastcall CColorCorrectionVolume::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CColorCorrectionVolume::GetEntityClass);
}


// CColorCorrectionVolume::GetBaseMap  (line 68, @0x000000000219e210, libserver.so)
datamap_t *__cdecl CColorCorrectionVolume::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CColorCorrectionVolume>  (line 68, @0x00000000021adaa0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CColorCorrectionVolume"
// globals: `guard variable for'DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder, `guard variable for'DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::dataDesc, CColorCorrectionVolume::GetEntityClass(void), CColorCorrectionVolume::m_DataMap, DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder) != 0 )
  {
    DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder.m_pszBase = "CColorCorrectionVolume";
    DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder.m_nLenBase = 22;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder,
      &_dso_handle);
  }
  CColorCorrectionVolume::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v2, DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder.m_pszBase), "ThinkFunc");
    m_Size = DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder.m_Names.m_Size == DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::dataDesc[1].fieldName = v2;
    DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::dataDesc[4].fieldSize = 260;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::dataDesc);
  }
  CColorCorrectionVolume::m_DataMap.dataNumFields = 13;
  CColorCorrectionVolume::m_DataMap.dataDesc = &DataMapInit<CColorCorrectionVolume>(CColorCorrectionVolume *)::dataDesc[1];
  AddDatadescMetadataKeys(&CColorCorrectionVolume::m_DataMap, CColorCorrectionVolume::GetEntityClass);
  return &CColorCorrectionVolume::m_DataMap;
}


// CColorCorrectionVolume::YouForgotToImplementOrDeclareServerClass  (line 91, @0x0000000002187810, libserver.so)
int __fastcall CColorCorrectionVolume::YouForgotToImplementOrDeclareServerClass(CColorCorrectionVolume *const this)
{
  return 0;
}


// CColorCorrectionVolume::GetServerClass  (line 91, @0x000000000218f240, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CColorCorrectionVolume::GetServerClass(CColorCorrectionVolume *const this)
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


// CColorCorrectionVolume::CColorCorrectionVolume  (line 95, @0x000000000219e220, libserver.so)  // inlines: CNetworkVarBase, EnsureValidValue<bool>, EnsureValidValue<float>, GetForModify, NetworkStateChanged, Purge, RemoveAll, Set, operator=<bool>, operator=<float>, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseTrigger::CBaseTrigger, CBaseEntity::NetworkStateChanged, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
// callers: CColorCorrectionVolume::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CColorCorrectionVolume::CColorCorrectionVolume(CColorCorrectionVolume *const this)
{
  CBaseTrigger::CBaseTrigger(this);
  this->_vptr_IHandleEntity = &off_4010FB0;
  this->m_bEnabled.m_Value = 0;
  this->m_MaxWeight.m_Value = 0.0;
  this->m_FadeDuration.m_Value = 0.0;
  this->m_Weight.m_Value = 0.0;
  CBaseEntity::NetworkStateChanged(this, 0x5C1u, -1, -1);
  this->m_bEnabled.m_Value = 1;
  if ( this->m_MaxWeight.m_Value != 1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1476, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_MaxWeight.m_Value = 1.0;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 1492, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_lookupFilename.m_Value[0] = 0;
}


// CColorCorrectionVolume::UpdateTransmitState  (line 106, @0x0000000002187c40, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CColorCorrectionVolume::UpdateTransmitState(CColorCorrectionVolume *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CColorCorrectionVolume::Spawn  (line 115, @0x00000000021995a0, libserver.so)  // inlines: AddEFlags, CCollisionAttributeWriter, CNetworkVarBase, Compare, DisableInteractsWith, EnableInteractsWith, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, NetworkStateChanged, Release, Set, VPhysicsCollisionAttribute_t, curtime, operator=<bool>, ~CCollisionAttributeWriter
// calls: CBaseTrigger::Spawn, CBaseEntity::DispatchUpdateTransmitState, CBaseModelEntity::SetModelFromKeyValues, CCollisionProperty::SetupPhysicsFromUnscaledModel, VPhysicsCollisionAttribute_t::operator=, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
// globals: CColorCorrectionVolume::ThinkFunc(void)
void __fastcall CColorCorrectionVolume::Spawn(CColorCorrectionVolume *const this, const CEntityKeyValues *pKeyValues)
{
  double v4; // xmm1_8
  CGlobalVars *v5; // r12
  double v6; // xmm0_8
  bool v7; // zf
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+0h] [rbp-60h] BYREF

  CBaseTrigger::Spawn(this, pKeyValues);
  this->m_iEFlags |= 0x80u;
  CBaseEntity::DispatchUpdateTransmitState(this);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    2,
    0);
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_Collision.m_collisionAttribute);
  this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value
                                                                  & 0xFFFFFFFFFFF9FFFFLL
                                                                  | 0x40000;
  if ( !writer.m_bReleased )
  {
    writer.m_bReleased = 1;
    if ( this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_Collision.m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_Collision.m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_Collision.m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_Collision.m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_Collision.m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_Collision.m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &this->m_Collision.m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
  CBaseEntity::ThinkSet(this, CColorCorrectionVolume::ThinkFunc, 0.0, 0, 0);
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v6) = 0;
    *&v6 = v5->m_flCurrentTime + 0.0099999998;
  }
  else
  {
    *&v6 = 1008981770;
  }
  CBaseEntity::SetNextThink(this, v6, v4, 0);
  if ( this->m_bStartDisabled )
  {
    if ( this->m_bEnabled.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1473, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bEnabled.m_Value = 0;
    }
  }
  else if ( !this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1473, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v7 = !writer.m_bReleased;
    this->m_bEnabled.m_Value = 1;
    if ( !v7 )
      return;
    goto LABEL_26;
  }
  if ( writer.m_bReleased )
    return;
LABEL_26:
  writer.m_bReleased = 1;
  if ( this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
    (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &this->m_Collision.m_collisionAttribute,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
    (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &this->m_Collision.m_collisionAttribute,
      16,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
    (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &this->m_Collision.m_collisionAttribute,
      24,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
    (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &this->m_Collision.m_collisionAttribute,
      32,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
    (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &this->m_Collision.m_collisionAttribute,
      36,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
    (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &this->m_Collision.m_collisionAttribute,
      38,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
  if ( this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
    (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
      &this->m_Collision.m_collisionAttribute,
      39,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
}


// CColorCorrectionVolume::PassesTriggerFilters  (line 144, @0x0000000002188780, libserver.so)
// calls: UTIL_GetLocalPlayer
bool __fastcall CColorCorrectionVolume::PassesTriggerFilters(CColorCorrectionVolume *const this, CBaseEntity *pEntity)
{
  return UTIL_GetLocalPlayer() == pEntity;
}


// CColorCorrectionVolume::StartTouch  (line 152, @0x000000000218b6f0, libserver.so)  // inlines: curtime
void __fastcall CColorCorrectionVolume::StartTouch(CColorCorrectionVolume *const this, CBaseEntity *pEntity)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, pEntity, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  this->m_LastEnterTime = m_flCurrentTime;
  this->m_LastEnterWeight = this->m_Weight.m_Value;
}


// CColorCorrectionVolume::EndTouch  (line 158, @0x000000000218b760, libserver.so)  // inlines: curtime
void __fastcall CColorCorrectionVolume::EndTouch(CColorCorrectionVolume *const this, CBaseEntity *pEntity)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, pEntity, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  this->m_LastExitTime = m_flCurrentTime;
  this->m_LastExitWeight = this->m_Weight.m_Value;
}


// CColorCorrectionVolume::ThinkFunc  (line 164, @0x000000000218e660, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator=<float>, operator><float>
// calls: CBaseEntity::SetNextThink, CGlobalVarsBase::curtime
void __fastcall CColorCorrectionVolume::ThinkFunc(CColorCorrectionVolume *const this)
{
  double v1; // xmm1_8
  double v3; // xmm0_8
  CGlobalVars *v4; // r12
  void (__fastcall *v5)(__int64, double); // rax
  double v6; // xmm0_8
  float v7; // xmm0_4
  float v8; // xmm2_4
  CGlobalVars *v9; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  __int64 m_flCurrentTime_low; // xmm6_8
  float m_LastExitWeight; // xmm5_4
  float v13; // xmm3_4
  float weight; // [rsp+Ch] [rbp-24h]
  float weighta; // [rsp+Ch] [rbp-24h]

  if ( this->m_bEnabled.m_Value )
  {
    *&v3 = LODWORD(this->m_LastExitTime);
    if ( this->m_LastEnterTime <= *&v3 )
    {
      *&v1 = LODWORD(this->m_Weight.m_Value);
      v8 = 0.0;
      if ( *&v1 > 0.0 )
      {
        v9 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
            {
              m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
              *&v3 = this->m_LastExitTime;
              *&v1 = LODWORD(this->m_Weight.m_Value);
              v8 = 0.0;
            }
          }
          m_flCurrentTime_low = LODWORD(v9->m_flCurrentTime);
        }
        else
        {
          m_flCurrentTime_low = 0;
        }
        m_LastExitWeight = this->m_LastExitWeight;
        HIDWORD(v3) = HIDWORD(m_flCurrentTime_low);
        *&v3 = (*&m_flCurrentTime_low - *&v3) / (m_LastExitWeight * this->m_FadeDuration.m_Value);
        v13 = (1.0 - m_LastExitWeight) + *&v3;
        if ( v13 <= 1.0 )
          v8 = 1.0 - v13;
        if ( *&v1 != v8 )
        {
          weighta = v8;
          (*(this->_vptr_IHandleEntity + 22))(this, 1488, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_Weight.m_Value = weighta;
        }
      }
    }
    else
    {
      *&v1 = 1065353216;
      if ( this->m_Weight.m_Value < 1.0 )
      {
        v7 = CGlobalVarsBase::curtime(gpGlobals, 0);
        HIDWORD(v1) = 0;
        *&v1 = fminf(
                 1.0,
                 ((v7 - this->m_LastEnterTime) / ((1.0 - this->m_LastEnterWeight) * this->m_FadeDuration.m_Value))
               + this->m_LastEnterWeight);
        v3 = v1;
        if ( *&v1 != this->m_Weight.m_Value )
        {
          weight = *&v1;
          (*(this->_vptr_IHandleEntity + 22))(this, 1488, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          *&v3 = LODWORD(weight);
          this->m_Weight.m_Value = weight;
        }
      }
    }
LABEL_3:
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
      goto LABEL_4;
LABEL_26:
    *&v6 = 1008981770;
    goto LABEL_9;
  }
  v3 = 0.0;
  if ( this->m_Weight.m_Value == 0.0 )
    goto LABEL_3;
  (*(this->_vptr_IHandleEntity + 22))(this, 1488, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
  this->m_Weight.m_Value = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals == 0 )
    goto LABEL_26;
LABEL_4:
  if ( !v4->m_bEnableAssertions && !v4->m_bInSimulation )
  {
    v5 = v4->m_pfnWarningFunc;
    if ( v5 != 0 )
      v5(1, v3);
  }
  HIDWORD(v6) = 0;
  *&v6 = v4->m_flCurrentTime + 0.0099999998;
LABEL_9:
  CBaseEntity::SetNextThink(this, v6, v1, 0);
}


// CColorCorrectionVolume::InputEnable  (line 209, @0x000000000218a470, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CColorCorrectionVolume::InputEnable(CColorCorrectionVolume *const this, inputdata_t *const inputdata)
{
  if ( !this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1473, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = 1;
  }
}


// CColorCorrectionVolume::InputDisable  (line 214, @0x000000000218a510, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CColorCorrectionVolume::InputDisable(CColorCorrectionVolume *const this, inputdata_t *const inputdata)
{
  if ( this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1473, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = 0;
  }
}


