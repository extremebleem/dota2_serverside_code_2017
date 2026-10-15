// Reconstructed from DWARF by pahole; not original source.

// src/game/server/tanktrain.cpp:41
class CFuncTankTrain : public CFuncTrackTrain {
public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_OnDeath;  // +0x568
	typedef CFuncTrackTrain BaseClass;

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
	CFuncTankTrain(CFuncTankTrain &);
	CFuncTankTrain(CFuncTankTrain &);
	CFuncTankTrain();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual void Blocked(CBaseEntity *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CFuncTankTrain();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[90] OnTakeDamage
	// vtable[92] Event_Killed
	// vtable[115] Blocked
	// vtable[34] GetDataDescMap
	// sizeof = 1408
};

// src/game/server/tanktrain.cpp:105
class CTankTargetChange : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	variant_t m_newTarget;  // +0x308
	string_t m_newTargetName;  // +0x318
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
	CTankTargetChange(CTankTargetChange &);
	CTankTargetChange(CTankTargetChange &);
	CTankTargetChange();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CTankTargetChange();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[108] Use
	// vtable[34] GetDataDescMap
	// sizeof = 800
};

// src/game/server/tanktrain.cpp:150
class CTankTrainAI : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	EHANDLE m_hTargetEntity;  // +0x30c
	int m_soundPlaying;  // +0x310

	string_t m_startSoundName;  // +0x328
	string_t m_engineSoundName;  // +0x330
	string_t m_movementSoundName;  // +0x338
	string_t m_targetEntityName;  // +0x340
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
	CTankTrainAI(CTankTrainAI &);
	CTankTrainAI();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CTankTrainAI();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void Think();
	int SoundEnginePitch();
	void SoundEngineStart();
	void SoundEngineStop();
	void SoundShutdown();
	CBaseEntity * FindTarget(string_t, CBaseEntity *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void InputTargetEntity(inputdata_t &);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[117] Think
	// vtable[34] GetDataDescMap
	// sizeof = 840
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// UTIL_RemoveHierarchy  (line 24, @0x00000000023c7ad0, libserver.so)
// calls: CBaseEntity::FirstMoveChild, CBaseEntity::NextMovePeer, UTIL_Remove
// callers: CTankTrainAI::Think
void __fastcall UTIL_RemoveHierarchy(CBaseEntity *pDead)
{
  CBaseEntity *MoveChild; // rbx
  CBaseEntity *MovePeer; // r12

  if ( pDead != 0 )
  {
    MoveChild = CBaseEntity::FirstMoveChild(pDead);
    if ( MoveChild != 0 )
    {
      while ( 1 )
      {
        MovePeer = CBaseEntity::NextMovePeer(MoveChild);
        UTIL_RemoveHierarchy(MoveChild);
        if ( MovePeer == 0 )
          break;
        MoveChild = MovePeer;
      }
    }
    UTIL_Remove(pDead);
  }
}


// CFuncTankTrain::~CFuncTankTrain  (line 41, @0x00000000023e9360, libserver.so)  // inlines: ~CFuncTrackTrain
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncTankTrain::~CFuncTankTrain(CFuncTankTrain *const this)
{
  this->_vptr_IHandleEntity = &off_40BBB70;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncTankTrain::~CFuncTankTrain  (line 41, @0x00000000023e9380, libserver.so)  // inlines: ~CFuncTankTrain, ~CFuncTrackTrain
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncTankTrain::~CFuncTankTrain(CFuncTankTrain *const this)
{
  this->_vptr_IHandleEntity = &off_40BBB70;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncTankTrain::GetEntityClass  (line 43, @0x00000000023e56f0, libserver.so)
CEntityClass *__cdecl CFuncTankTrain::GetEntityClass()
{
  return g_pEntityCFuncTankTrainClass;
}


// CFuncTankTrain::Schema_DynamicBinding  (line 43, @0x00000000023e5700, libserver.so)
// globals: CFuncTankTrain::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncTankTrain::Schema_DynamicBinding(const CFuncTankTrain *const this)
{
  return CFuncTankTrain::s_pSchemaBinding;
}


// CFuncTankTrain::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 43, @0x00000000023e5710, libserver.so)
// globals: CFuncTankTrain::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncTankTrain::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncTankTrain::CEntityInstanceEntityClass *const this)
{
  return CFuncTankTrain::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncTankTrain::CEntityInstanceEntityClass::DestructInstance  (line 43, @0x00000000023e5720, libserver.so)  // inlines: Destruct<CFuncTankTrain>
void __fastcall CFuncTankTrain::CEntityInstanceEntityClass::DestructInstance(
        CFuncTankTrain::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncTankTrain::CEntityInstanceEntityClass::FreeInstance  (line 43, @0x00000000023e5740, libserver.so)
void __fastcall CFuncTankTrain::CEntityInstanceEntityClass::FreeInstance(
        CFuncTankTrain::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncTankTrain::CEntityInstanceEntityClass::CanAllocate  (line 43, @0x00000000023e5760, libserver.so)
bool __fastcall CFuncTankTrain::CEntityInstanceEntityClass::CanAllocate(
        const CFuncTankTrain::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncTankTrain::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 43, @0x00000000023e5770, libserver.so)
// globals: CFuncTankTrain::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncTankTrain::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncTankTrain::CEntityInstanceEntityClass *const this)
{
  return CFuncTankTrain::s_pSchemaBinding;
}


// CFuncTankTrain::CEntityInstanceEntityClass::AllocateInstance  (line 43, @0x00000000023e7f70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncTankTrain::CEntityInstanceEntityClass::AllocateInstance(
        CFuncTankTrain::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1408);
  memset(v1, 0, 0x580u);
  return v1;
}


// CFuncTankTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x00000000023ea880, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncTankTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncTankTrain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncTankTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x00000000023ea8a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncTankTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncTankTrain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncTankTrain::GetEntityClassInternal  (line 43, @0x00000000023ef270, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "func_tanktrain", "CFuncTankTrain", "func_tracktrain", "CFuncTrackTrain"
// globals: `guard variable for'CFuncTankTrain::GetEntityClassInternal(void)::g_EntityCFuncTankTrainClass, CFuncTankTrain::GetEntityClassInternal(void)::g_EntityCFuncTankTrainClass, __dso_handle, CFuncTankTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncTankTrain::GetEntityClassInfo(void)::g_EntityCFuncTankTrainClassInfo, CFuncTankTrain::GetEntityClassInfo(void)::g_EntityCFuncTankTrainClassInfo, `guard variable for'CFuncTrackTrain::GetEntityClassInfo(void)::g_EntityCFuncTrackTrainClassInfo, CFuncTrackTrain::GetEntityClassInfo(void)::g_EntityCFuncTrackTrainClassInfo
CEntityClass *__cdecl CFuncTankTrain::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncTankTrain::GetEntityClassInternal(void)::g_EntityCFuncTankTrainClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncTankTrain::GetEntityClassInternal(void)::g_EntityCFuncTankTrainClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncTankTrain::GetEntityClassInternal(void)::g_EntityCFuncTankTrainClass);
    CFuncTankTrain::GetEntityClassInternal(void)::g_EntityCFuncTankTrainClass._vptr_CEntityClass = off_40B54B0;
    __cxa_guard_release(&`guard variable for'CFuncTankTrain::GetEntityClassInternal(void)::g_EntityCFuncTankTrainClass);
    __cxa_atexit(
      CFuncTankTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncTankTrain::GetEntityClassInternal(void)::g_EntityCFuncTankTrainClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncTankTrainClass != 0 )
    return &CFuncTankTrain::GetEntityClassInternal(void)::g_EntityCFuncTankTrainClass;
  if ( `guard variable for'CFuncTankTrain::GetEntityClassInfo(void)::g_EntityCFuncTankTrainClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncTankTrain::GetEntityClassInfo(void)::g_EntityCFuncTankTrainClassInfo) != 0 )
  {
    if ( `guard variable for'CFuncTrackTrain::GetEntityClassInfo(void)::g_EntityCFuncTrackTrainClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CFuncTrackTrain::GetEntityClassInfo(void)::g_EntityCFuncTrackTrainClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CFuncTrackTrain::GetEntityClassInfo(void)::g_EntityCFuncTrackTrainClassInfo,
        "CFuncTrackTrain",
        "func_tracktrain",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CFuncTrackTrain::GetEntityClassInfo(void)::g_EntityCFuncTrackTrainClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncTankTrain::GetEntityClassInfo(void)::g_EntityCFuncTankTrainClassInfo,
      "CFuncTankTrain",
      "func_tanktrain",
      0,
      &CFuncTrackTrain::GetEntityClassInfo(void)::g_EntityCFuncTrackTrainClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncTankTrain::GetEntityClassInfo(void)::g_EntityCFuncTankTrainClassInfo);
  }
  CFuncTankTrain::GetEntityClassInternal(void)::g_EntityCFuncTankTrainClass.m_pClassInfo = &CFuncTankTrain::GetEntityClassInfo(void)::g_EntityCFuncTankTrainClassInfo;
  CFuncTankTrain::GetEntityClassInternal(void)::g_EntityCFuncTankTrainClass.m_pBaseClassInfo = CFuncTankTrain::GetEntityClassInfo(void)::g_EntityCFuncTankTrainClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncTankTrainClass = &CFuncTankTrain::GetEntityClassInternal(void)::g_EntityCFuncTankTrainClass;
  CFuncTankTrain::GetEntityClassInfo(void)::g_EntityCFuncTankTrainClassInfo.m_pClass = &CFuncTankTrain::GetEntityClassInternal(void)::g_EntityCFuncTankTrainClass;
  CFuncTankTrain::GetEntityClassInternal(void)::g_EntityCFuncTankTrainClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncTankTrainClass->m_pComponentOverrides = 0;
  return &CFuncTankTrain::GetEntityClassInternal(void)::g_EntityCFuncTankTrainClass;
}


// CFuncTankTrain::CEntityInstanceEntityClass::ConstructInstance  (line 43, @0x00000000023f0c60, libserver.so)  // inlines: CEntityIOOutput, CFuncTankTrain, Construct<CFuncTankTrain>
// calls: CFuncTrackTrain::CFuncTrackTrain
CEntityInstance *__fastcall CFuncTankTrain::CEntityInstanceEntityClass::ConstructInstance(
        CFuncTankTrain::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CFuncTrackTrain::CFuncTrackTrain(p);
    *p = &off_40B5530;
    *(p + 173) = off_3F7C190;
  }
  return p;
}


// CFuncTankTrain::Blocked  (line 51, @0x00000000023e5780, libserver.so)
void __fastcall CFuncTankTrain::Blocked(CFuncTankTrain *const this, CBaseEntity *pOther)
{
  ;
}


// CFuncTankTrain::GetDataDescMap  (line 62, @0x00000000023baec0, libserver.so)
// globals: CFuncTankTrain::m_DataMap
datamap_t *__fastcall CFuncTankTrain::GetDataDescMap(CFuncTankTrain *const this)
{
  return &CFuncTankTrain::m_DataMap;
}


// CFuncTankTrain::AddDatadescMetadataKeys  (line 62, @0x00000000023c7b40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncTankTrain::GetEntityClass(void)
void __fastcall CFuncTankTrain::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncTankTrain::GetEntityClass);
}


// CFuncTankTrain::GetBaseMap  (line 62, @0x00000000023c7b60, libserver.so)
// globals: CFuncTrackTrain::m_DataMap
datamap_t *__cdecl CFuncTankTrain::GetBaseMap()
{
  return &CFuncTrackTrain::m_DataMap;
}


// DataMapInit<CFuncTankTrain>  (line 62, @0x00000000023c7b70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CFuncTankTrain"
// globals: `guard variable for'DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::nameHolder, `guard variable for'DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::dataDesc, CFuncTrackTrain::m_DataMap, CFuncTankTrain::GetEntityClass(void), CFuncTankTrain::m_DataMap, DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncTankTrain>(CFuncTankTrain *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::nameHolder.m_pszBase = "CFuncTankTrain";
    DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::nameHolder,
      &_dso_handle);
  }
  CFuncTankTrain::m_DataMap.baseMap = &CFuncTrackTrain::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::dataDesc) != 0 )
  {
    DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::dataDesc[1].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::dataDesc);
  }
  CFuncTankTrain::m_DataMap.dataNumFields = 1;
  CFuncTankTrain::m_DataMap.dataDesc = &DataMapInit<CFuncTankTrain>(CFuncTankTrain *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncTankTrain::m_DataMap, CFuncTankTrain::GetEntityClass);
  return &CFuncTankTrain::m_DataMap;
}


// CFuncTankTrain::Spawn  (line 70, @0x00000000023c2d10, libserver.so)
// calls: CBaseEntity::SetDamageOptions, CFuncTrackTrain::Spawn
void __fastcall CFuncTankTrain::Spawn(CFuncTankTrain *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
  CFuncTrackTrain::Spawn(this, pKeyValues);
}


// CFuncTankTrain::OnTakeDamage  (line 77, @0x00000000023bb750, libserver.so)
// calls: CBaseEntity::OnTakeDamage
int __fastcall CFuncTankTrain::OnTakeDamage(CFuncTankTrain *const this, const CTakeDamageInfo *const info)
{
  if ( (info->m_bitsDamageType & 0x40) != 0 )
    return CBaseEntity::OnTakeDamage(this, info);
  else
    return 0;
}


// CFuncTankTrain::Event_Killed  (line 93, @0x00000000023d9110, libserver.so)  // inlines: CVariantBase, FireOutput, Free, Get, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, ~CVariantBase
// calls: CBaseEntity::SetDamageOptions, CBaseEntity::SetLifeState, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CFuncTankTrain::Event_Killed(CFuncTankTrain *const this, const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_DEAD);
  m_Index = info->m_hInflictor.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[info->m_hInflictor.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  value.m_uint64 = 0;
  value.m_type = 0;
  value.m_flags = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnDeath, m_pInstance, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CTankTargetChange::~CTankTargetChange  (line 105, @0x00000000023e9ca0, libserver.so)  // inlines: Free, ~CPointEntity, ~CVariantBase
// calls: CBaseEntity::~CBaseEntity
void __fastcall CTankTargetChange::~CTankTargetChange(CTankTargetChange *const this)
{
  this->_vptr_IHandleEntity = &off_40B5C70;
  if ( (this->m_newTarget.m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_newTarget.m_uint64);
    this->m_newTarget.m_flags &= ~1u;
  }
  this->m_newTarget.m_type = 0;
  this->m_newTarget.m_uint64 = 0;
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CTankTargetChange::~CTankTargetChange  (line 105, @0x00000000023e9d10, libserver.so)  // inlines: Free, ~CPointEntity, ~CTankTargetChange, ~CVariantBase
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CTankTargetChange::~CTankTargetChange(CTankTargetChange *const this)
{
  this->_vptr_IHandleEntity = &off_40B5C70;
  if ( (this->m_newTarget.m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_newTarget.m_uint64);
    this->m_newTarget.m_flags &= ~1u;
  }
  this->m_newTarget.m_type = 0;
  this->m_newTarget.m_uint64 = 0;
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CTankTargetChange::GetEntityClass  (line 107, @0x00000000023e5790, libserver.so)
CEntityClass *__cdecl CTankTargetChange::GetEntityClass()
{
  return g_pEntityCTankTargetChangeClass;
}


// CTankTargetChange::Schema_DynamicBinding  (line 107, @0x00000000023e57a0, libserver.so)
// globals: CTankTargetChange::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTankTargetChange::Schema_DynamicBinding(const CTankTargetChange *const this)
{
  return CTankTargetChange::s_pSchemaBinding;
}


// CTankTargetChange::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 107, @0x00000000023e57b0, libserver.so)
// globals: CTankTargetChange::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTankTargetChange::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTankTargetChange::CEntityInstanceEntityClass *const this)
{
  return CTankTargetChange::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTankTargetChange::CEntityInstanceEntityClass::DestructInstance  (line 107, @0x00000000023e57c0, libserver.so)  // inlines: Destruct<CTankTargetChange>
void __fastcall CTankTargetChange::CEntityInstanceEntityClass::DestructInstance(
        CTankTargetChange::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTankTargetChange::CEntityInstanceEntityClass::FreeInstance  (line 107, @0x00000000023e57e0, libserver.so)
void __fastcall CTankTargetChange::CEntityInstanceEntityClass::FreeInstance(
        CTankTargetChange::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTankTargetChange::CEntityInstanceEntityClass::CanAllocate  (line 107, @0x00000000023e5800, libserver.so)
bool __fastcall CTankTargetChange::CEntityInstanceEntityClass::CanAllocate(
        const CTankTargetChange::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTankTargetChange::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 107, @0x00000000023e5810, libserver.so)
// globals: CTankTargetChange::s_pSchemaBinding
const ISchemaBinding *__fastcall CTankTargetChange::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTankTargetChange::CEntityInstanceEntityClass *const this)
{
  return CTankTargetChange::s_pSchemaBinding;
}


// CTankTargetChange::CEntityInstanceEntityClass::AllocateInstance  (line 107, @0x00000000023e7fb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTankTargetChange::CEntityInstanceEntityClass::AllocateInstance(
        CTankTargetChange::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 800);
  memset(v1, 0, 0x320u);
  return v1;
}


// CTankTargetChange::CEntityInstanceEntityClass::ConstructInstance  (line 107, @0x00000000023e8950, libserver.so)  // inlines: CPointEntity, CTankTargetChange, CUtlSymbolLarge, CVariantBase, Construct<CTankTargetChange>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CTankTargetChange::CEntityInstanceEntityClass::ConstructInstance(
        CTankTargetChange::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40B5C70;
    *(p + 392) = 0;
    *(p + 393) = 0;
    *(p + 97) = 0;
    *(p + 99) = 0;
  }
  return p;
}


// CTankTargetChange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 107, @0x00000000023e9e80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTankTargetChange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTankTargetChange::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CTankTargetChange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 107, @0x00000000023e9ea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTankTargetChange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTankTargetChange::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTankTargetChange::GetEntityClassInternal  (line 107, @0x00000000023ef400, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "tanktrain_aitarget", "CTankTargetChange"
// globals: `guard variable for'CTankTargetChange::GetEntityClassInternal(void)::g_EntityCTankTargetChangeClass, CTankTargetChange::GetEntityClassInternal(void)::g_EntityCTankTargetChangeClass, __dso_handle, CTankTargetChange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTankTargetChange::GetEntityClassInfo(void)::g_EntityCTankTargetChangeClassInfo, CTankTargetChange::GetEntityClassInfo(void)::g_EntityCTankTargetChangeClassInfo
CEntityClass *__cdecl CTankTargetChange::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTankTargetChange::GetEntityClassInternal(void)::g_EntityCTankTargetChangeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTankTargetChange::GetEntityClassInternal(void)::g_EntityCTankTargetChangeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTankTargetChange::GetEntityClassInternal(void)::g_EntityCTankTargetChangeClass);
    CTankTargetChange::GetEntityClassInternal(void)::g_EntityCTankTargetChangeClass._vptr_CEntityClass = off_40B5BF0;
    __cxa_guard_release(&`guard variable for'CTankTargetChange::GetEntityClassInternal(void)::g_EntityCTankTargetChangeClass);
    __cxa_atexit(
      CTankTargetChange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTankTargetChange::GetEntityClassInternal(void)::g_EntityCTankTargetChangeClass,
      &_dso_handle);
  }
  if ( g_pEntityCTankTargetChangeClass != 0 )
    return &CTankTargetChange::GetEntityClassInternal(void)::g_EntityCTankTargetChangeClass;
  if ( `guard variable for'CTankTargetChange::GetEntityClassInfo(void)::g_EntityCTankTargetChangeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTankTargetChange::GetEntityClassInfo(void)::g_EntityCTankTargetChangeClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTankTargetChange::GetEntityClassInfo(void)::g_EntityCTankTargetChangeClassInfo,
      "CTankTargetChange",
      "tanktrain_aitarget",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTankTargetChange::GetEntityClassInfo(void)::g_EntityCTankTargetChangeClassInfo);
  }
  CTankTargetChange::GetEntityClassInternal(void)::g_EntityCTankTargetChangeClass.m_pClassInfo = &CTankTargetChange::GetEntityClassInfo(void)::g_EntityCTankTargetChangeClassInfo;
  CTankTargetChange::GetEntityClassInternal(void)::g_EntityCTankTargetChangeClass.m_pBaseClassInfo = CTankTargetChange::GetEntityClassInfo(void)::g_EntityCTankTargetChangeClassInfo.m_pBaseClassInfo;
  g_pEntityCTankTargetChangeClass = &CTankTargetChange::GetEntityClassInternal(void)::g_EntityCTankTargetChangeClass;
  CTankTargetChange::GetEntityClassInfo(void)::g_EntityCTankTargetChangeClassInfo.m_pClass = &CTankTargetChange::GetEntityClassInternal(void)::g_EntityCTankTargetChangeClass;
  CTankTargetChange::GetEntityClassInternal(void)::g_EntityCTankTargetChangeClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCTankTargetChangeClass->m_pComponentOverrides = 0;
  return &CTankTargetChange::GetEntityClassInternal(void)::g_EntityCTankTargetChangeClass;
}


// CTankTargetChange::GetDataDescMap  (line 120, @0x00000000023baed0, libserver.so)
// globals: CTankTargetChange::m_DataMap
datamap_t *__fastcall CTankTargetChange::GetDataDescMap(CTankTargetChange *const this)
{
  return &CTankTargetChange::m_DataMap;
}


// CTankTargetChange::AddDatadescMetadataKeys  (line 120, @0x00000000023c7c90, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTankTargetChange::GetEntityClass(void)
void __fastcall CTankTargetChange::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTankTargetChange::GetEntityClass);
}


// CTankTargetChange::GetBaseMap  (line 120, @0x00000000023c7cb0, libserver.so)
datamap_t *__cdecl CTankTargetChange::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CTankTargetChange>  (line 120, @0x00000000023c7cc0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTankTargetChange"
// globals: `guard variable for'DataMapInit<CTankTargetChange>(CTankTargetChange *)::nameHolder, CTankTargetChange::GetEntityClass(void), CTankTargetChange::m_DataMap, DataMapInit<CTankTargetChange>(CTankTargetChange *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTankTargetChange>(CTankTargetChange *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTankTargetChange>(CTankTargetChange *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTankTargetChange>(CTankTargetChange *)::nameHolder) != 0 )
  {
    DataMapInit<CTankTargetChange>(CTankTargetChange *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTankTargetChange>(CTankTargetChange *)::nameHolder.m_pszBase = "CTankTargetChange";
    DataMapInit<CTankTargetChange>(CTankTargetChange *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTankTargetChange>(CTankTargetChange *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTankTargetChange>(CTankTargetChange *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTankTargetChange>(CTankTargetChange *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTankTargetChange>(CTankTargetChange *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTankTargetChange>(CTankTargetChange *)::nameHolder,
      &_dso_handle);
  }
  CTankTargetChange::m_DataMap.dataNumFields = 2;
  CTankTargetChange::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CTankTargetChange::m_DataMap.dataDesc = &DataMapInit<CTankTargetChange>(CTankTargetChange *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTankTargetChange::m_DataMap, CTankTargetChange::GetEntityClass);
  return &CTankTargetChange::m_DataMap;
}


// CTankTargetChange::Spawn  (line 128, @0x00000000023c0980, libserver.so)  // inlines: CUtlSymbolLarge, CopyData, Free, SetString, operator=
// calls: CPointEntity::Spawn
void __fastcall CTankTargetChange::Spawn(CTankTargetChange *const this, const CEntityKeyValues *pKeyValues)
{
  const char *m_pAsString; // r12

  m_pAsString = "";
  CPointEntity::Spawn(this, pKeyValues);
  if ( this->m_newTargetName.u.m_Id != 0 )
    m_pAsString = this->m_newTargetName.u.m_pAsString;
  if ( (this->m_newTarget.m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_newTarget.m_uint64);
    this->m_newTarget.m_flags &= ~1u;
  }
  this->m_newTarget.m_uint64 = m_pAsString;
  this->m_newTarget.m_type = 30;
}


// CTankTargetChange::Use  (line 135, @0x00000000023bbde0, libserver.so)  // inlines: CUtlSymbolLarge
// calls: CGameEntitySystem::FindEntityByName, CEntityInstance::AcceptInput
void __fastcall CTankTargetChange::Use(
        CTankTargetChange *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  CBaseEntity *i; // r15
  string_t iszName; // [rsp+20h] [rbp-40h] BYREF

  iszName.u.m_Id = this->m_target.u.m_Id;
  for ( i = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, pActivator, pCaller, 0);
        i != 0;
        i = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, i, &iszName, this, pActivator, pCaller, 0) )
  {
    CEntityInstance::AcceptInput(i, "TargetEntity", this, this, &this->m_newTarget, 0);
    iszName.u.m_Id = this->m_target.u.m_Id;
  }
}


// CTankTrainAI::GetEntityClass  (line 152, @0x00000000023e5820, libserver.so)
CEntityClass *__cdecl CTankTrainAI::GetEntityClass()
{
  return g_pEntityCTankTrainAIClass;
}


// CTankTrainAI::Schema_DynamicBinding  (line 152, @0x00000000023e5830, libserver.so)
// globals: CTankTrainAI::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTankTrainAI::Schema_DynamicBinding(const CTankTrainAI *const this)
{
  return CTankTrainAI::s_pSchemaBinding;
}


// CTankTrainAI::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 152, @0x00000000023e5840, libserver.so)
// globals: CTankTrainAI::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTankTrainAI::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTankTrainAI::CEntityInstanceEntityClass *const this)
{
  return CTankTrainAI::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTankTrainAI::CEntityInstanceEntityClass::DestructInstance  (line 152, @0x00000000023e5850, libserver.so)  // inlines: Destruct<CTankTrainAI>
void __fastcall CTankTrainAI::CEntityInstanceEntityClass::DestructInstance(
        CTankTrainAI::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTankTrainAI::CEntityInstanceEntityClass::FreeInstance  (line 152, @0x00000000023e5870, libserver.so)
void __fastcall CTankTrainAI::CEntityInstanceEntityClass::FreeInstance(
        CTankTrainAI::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTankTrainAI::CEntityInstanceEntityClass::CanAllocate  (line 152, @0x00000000023e5890, libserver.so)
bool __fastcall CTankTrainAI::CEntityInstanceEntityClass::CanAllocate(
        const CTankTrainAI::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTankTrainAI::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 152, @0x00000000023e58a0, libserver.so)
// globals: CTankTrainAI::s_pSchemaBinding
const ISchemaBinding *__fastcall CTankTrainAI::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTankTrainAI::CEntityInstanceEntityClass *const this)
{
  return CTankTrainAI::s_pSchemaBinding;
}


// CTankTrainAI::CEntityInstanceEntityClass::AllocateInstance  (line 152, @0x00000000023e7ff0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTankTrainAI::CEntityInstanceEntityClass::AllocateInstance(
        CTankTrainAI::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 840);
  memset(v1, 0, 0x348u);
  return v1;
}


// CTankTrainAI::CEntityInstanceEntityClass::ConstructInstance  (line 152, @0x00000000023e8b10, libserver.so)  // inlines: CEntityHandle, CHandle, CPointEntity, CTankTrainAI, CUtlSymbolLarge, Construct<CTankTrainAI>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CTankTrainAI::CEntityInstanceEntityClass::ConstructInstance(
        CTankTrainAI::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = -1;
    *p = &off_40B6390;
    *(p + 195) = -1;
    *(p + 101) = 0;
    *(p + 102) = 0;
    *(p + 103) = 0;
    *(p + 104) = 0;
  }
  return p;
}


// CTankTrainAI::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 152, @0x00000000023e9ed0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTankTrainAI::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTankTrainAI::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CTankTrainAI::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 152, @0x00000000023e9ef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTankTrainAI::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTankTrainAI::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTankTrainAI::GetEntityClassInternal  (line 152, @0x00000000023ef550, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "tanktrain_ai", "CTankTrainAI"
// globals: `guard variable for'CTankTrainAI::GetEntityClassInternal(void)::g_EntityCTankTrainAIClass, CTankTrainAI::GetEntityClassInternal(void)::g_EntityCTankTrainAIClass, __dso_handle, CTankTrainAI::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTankTrainAI::GetEntityClassInfo(void)::g_EntityCTankTrainAIClassInfo, CTankTrainAI::GetEntityClassInfo(void)::g_EntityCTankTrainAIClassInfo
CEntityClass *__cdecl CTankTrainAI::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTankTrainAI::GetEntityClassInternal(void)::g_EntityCTankTrainAIClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTankTrainAI::GetEntityClassInternal(void)::g_EntityCTankTrainAIClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTankTrainAI::GetEntityClassInternal(void)::g_EntityCTankTrainAIClass);
    CTankTrainAI::GetEntityClassInternal(void)::g_EntityCTankTrainAIClass._vptr_CEntityClass = off_40B6310;
    __cxa_guard_release(&`guard variable for'CTankTrainAI::GetEntityClassInternal(void)::g_EntityCTankTrainAIClass);
    __cxa_atexit(
      CTankTrainAI::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTankTrainAI::GetEntityClassInternal(void)::g_EntityCTankTrainAIClass,
      &_dso_handle);
  }
  if ( g_pEntityCTankTrainAIClass != 0 )
    return &CTankTrainAI::GetEntityClassInternal(void)::g_EntityCTankTrainAIClass;
  if ( `guard variable for'CTankTrainAI::GetEntityClassInfo(void)::g_EntityCTankTrainAIClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTankTrainAI::GetEntityClassInfo(void)::g_EntityCTankTrainAIClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTankTrainAI::GetEntityClassInfo(void)::g_EntityCTankTrainAIClassInfo,
      "CTankTrainAI",
      "tanktrain_ai",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTankTrainAI::GetEntityClassInfo(void)::g_EntityCTankTrainAIClassInfo);
  }
  CTankTrainAI::GetEntityClassInternal(void)::g_EntityCTankTrainAIClass.m_pClassInfo = &CTankTrainAI::GetEntityClassInfo(void)::g_EntityCTankTrainAIClassInfo;
  CTankTrainAI::GetEntityClassInternal(void)::g_EntityCTankTrainAIClass.m_pBaseClassInfo = CTankTrainAI::GetEntityClassInfo(void)::g_EntityCTankTrainAIClassInfo.m_pBaseClassInfo;
  g_pEntityCTankTrainAIClass = &CTankTrainAI::GetEntityClassInternal(void)::g_EntityCTankTrainAIClass;
  CTankTrainAI::GetEntityClassInfo(void)::g_EntityCTankTrainAIClassInfo.m_pClass = &CTankTrainAI::GetEntityClassInternal(void)::g_EntityCTankTrainAIClass;
  CTankTrainAI::GetEntityClassInternal(void)::g_EntityCTankTrainAIClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCTankTrainAIClass->m_pComponentOverrides = 0;
  return &CTankTrainAI::GetEntityClassInternal(void)::g_EntityCTankTrainAIClass;
}


// CTankTrainAI::GetDataDescMap  (line 188, @0x00000000023baee0, libserver.so)
// globals: CTankTrainAI::m_DataMap
datamap_t *__fastcall CTankTrainAI::GetDataDescMap(CTankTrainAI *const this)
{
  return &CTankTrainAI::m_DataMap;
}


// CTankTrainAI::AddDatadescMetadataKeys  (line 188, @0x00000000023c7d90, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTankTrainAI::GetEntityClass(void)
void __fastcall CTankTrainAI::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTankTrainAI::GetEntityClass);
}


// CTankTrainAI::GetBaseMap  (line 188, @0x00000000023c7db0, libserver.so)
datamap_t *__cdecl CTankTrainAI::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CTankTrainAI>  (line 188, @0x00000000023c7dc0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, GetSoundSaveRestoreOps, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CTankTrainAI"
// globals: `guard variable for'DataMapInit<CTankTrainAI>(CTankTrainAI *)::nameHolder, `guard variable for'DataMapInit<CTankTrainAI>(CTankTrainAI *)::dataDesc, CTankTrainAI::GetEntityClass(void), CTankTrainAI::m_DataMap, DataMapInit<CTankTrainAI>(CTankTrainAI *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTankTrainAI>(CTankTrainAI *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTankTrainAI>(CTankTrainAI *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTankTrainAI>(CTankTrainAI *)::nameHolder) != 0 )
  {
    DataMapInit<CTankTrainAI>(CTankTrainAI *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTankTrainAI>(CTankTrainAI *)::nameHolder.m_pszBase = "CTankTrainAI";
    DataMapInit<CTankTrainAI>(CTankTrainAI *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTankTrainAI>(CTankTrainAI *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTankTrainAI>(CTankTrainAI *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTankTrainAI>(CTankTrainAI *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTankTrainAI>(CTankTrainAI *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTankTrainAI>(CTankTrainAI *)::nameHolder,
      &_dso_handle);
  }
  CTankTrainAI::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CTankTrainAI>(CTankTrainAI *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTankTrainAI>(CTankTrainAI *)::dataDesc) != 0 )
  {
    DataMapInit<CTankTrainAI>(CTankTrainAI *)::dataDesc[4].pSaveRestoreOps = GetSoundSaveRestoreOps();
    DataMapInit<CTankTrainAI>(CTankTrainAI *)::dataDesc[5].pSaveRestoreOps = GetSoundSaveRestoreOps();
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTankTrainAI>(CTankTrainAI *)::dataDesc);
  }
  CTankTrainAI::m_DataMap.dataNumFields = 10;
  CTankTrainAI::m_DataMap.dataDesc = &DataMapInit<CTankTrainAI>(CTankTrainAI *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTankTrainAI::m_DataMap, CTankTrainAI::GetEntityClass);
  return &CTankTrainAI::m_DataMap;
}


// CTankTrainAI::InputTargetEntity  (line 211, @0x00000000023c7f40, libserver.so)  // inlines: AssignTo, GetEHandle, GetEntryIndex, GetSerialNumber, Set, StringID, TempString, ToString, curtime, operator=
// calls: MakeEntitySystemString, CTankTrainAI::FindTarget, CBaseEntity::SetNextThink, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_23C7F78, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CTankTrainAI::InputTargetEntity(CTankTrainAI *const this, inputdata_t *const inputdata)
{
  int16 m_type; // di
  char *m_pszString; // rsi
  CBaseEntity *v6; // rax
  double v7; // xmm1_8
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  double v11; // xmm0_8
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const char *v14; // rax
  const char *v15; // rcx
  const char *v16; // rdx
  double m_float; // xmm0_8
  string_t target; // [rsp+10h] [rbp-30h] BYREF

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
        goto LABEL_19;
      case 1:
        m_float = inputdata->value.m_float;
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
        goto LABEL_30;
      case 6:
        v15 = "true";
        v16 = "%s";
        if ( inputdata->value.m_char == 0 )
          v15 = "false";
        goto LABEL_24;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_30;
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
        goto LABEL_25;
      case 33:
        v15 = inputdata->value.m_pszString;
        v16 = "%llu";
LABEL_24:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v16, v15);
LABEL_25:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_27:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_30:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v14 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v14);
LABEL_19:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  this->m_targetEntityName = target;
  v6 = CTankTrainAI::FindTarget(this, &target, inputdata->pActivator);
  if ( v6 != 0 && (m_pEntity = v6->m_pEntity) != 0 )
  {
    v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v10 = 0x7FFF;
    else
      v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTargetEntity.m_Index) = v10 | this->m_hTargetEntity.m_Index & 0x8000;
    this->m_hTargetEntity.m_Index = (v9 << 15) | this->m_hTargetEntity.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTargetEntity.m_Index = -1;
  }
  v11 = 0.0;
  v12 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v11 = LODWORD(v12->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v11, v7, 0);
}


// CTankTrainAI::FindTarget  (line 225, @0x00000000023c7f10, libserver.so)  // inlines: String, ToCStr
// calls: CGameEntitySystem::FindEntityGeneric
// callers: CTankTrainAI::InputTargetEntity
CBaseEntity *__fastcall CTankTrainAI::FindTarget(CTankTrainAI *const this, string_t target, CBaseEntity *pActivator)
{
  const char *v4; // rdx

  v4 = "";
  if ( *target.u.m_Id != 0 )
    v4 = *target.u.m_pAsString;
  return CGameEntitySystem::FindEntityGeneric(g_pGameEntitySystem, 0, v4, this, pActivator, 0);
}


// CTankTrainAI::~CTankTrainAI  (line 231, @0x00000000023bbeb0, libserver.so)  // inlines: ~CPointEntity
// calls: CSoundEnvelopeController::GetController, CBaseEntity::~CBaseEntity
// callers: CTankTrainAI::~CTankTrainAI
void __fastcall CTankTrainAI::~CTankTrainAI(CTankTrainAI *const this)
{
  CSoundEnvelopeController *Controller; // rax
  CSoundEnvelopeController *v3; // r12

  this->_vptr_IHandleEntity = &off_40B6390;
  Controller = CSoundEnvelopeController::GetController();
  v3 = Controller;
  if ( this->m_soundTreads != 0 )
    (*(Controller->_vptr_CSoundEnvelopeController + 11))(Controller);
  if ( this->m_soundEngine != 0 )
    (*(v3->_vptr_CSoundEnvelopeController + 11))(v3);
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CTankTrainAI::~CTankTrainAI  (line 231, @0x00000000023bbf20, libserver.so)
// calls: CTankTrainAI::~CTankTrainAI, CBaseEntity::operator delete
void __fastcall CTankTrainAI::~CTankTrainAI(CTankTrainAI *const this)
{
  CTankTrainAI::~CTankTrainAI(this);
  CBaseEntity::operator delete(this);
}


// CTankTrainAI::Precache  (line 246, @0x00000000023e3bb0, libserver.so)  // inlines: Precache, String, ToCStr
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheScriptSound
void __fastcall CTankTrainAI::Precache(CTankTrainAI *const this, const CEntityPrecacheContext *pContext)
{
  const char *m_pAsString; // rdi
  const char *v5; // rdi
  const char *v6; // rdi

  CEntityInstance::Precache(this, pContext);
  m_pAsString = "";
  if ( this->m_startSoundName.u.m_Id != 0 )
    m_pAsString = this->m_startSoundName.u.m_pAsString;
  CBaseEntity::PrecacheScriptSound(m_pAsString, pContext);
  v5 = "";
  if ( this->m_engineSoundName.u.m_Id != 0 )
    v5 = this->m_engineSoundName.u.m_pAsString;
  CBaseEntity::PrecacheScriptSound(v5, pContext);
  v6 = "";
  if ( this->m_movementSoundName.u.m_Id != 0 )
    v6 = this->m_movementSoundName.u.m_pAsString;
  CBaseEntity::PrecacheScriptSound(v6, pContext);
}


// CTankTrainAI::SoundEnginePitch  (line 254, @0x00000000023c82e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator CFuncTrackTrain*
// globals: CEntityHandle::gm_pEntityList
int __fastcall CTankTrainAI::SoundEnginePitch(CTankTrainAI *const this)
{
  CEntityInstance *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  float v5; // xmm1_4

  m_pInstance = 0;
  m_Index = this->m_hTrain.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTrain.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTrain.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        m_pInstance = v4->m_pInstance;
    }
  }
  v5 = *&m_pInstance[25].m_iszPrivateVScripts.u.m_Id;
  if ( v5 == 0.0 )
    return 100;
  else
    return (fabs(*(&m_pInstance[8].m_pEntity + 1)) * 20.0 / v5 + 90.0);
}


// CTankTrainAI::SoundEngineStart  (line 267, @0x00000000023c8390, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, SetSoundName, SoundEngineStop, SoundEventGuid_t, String, ToCStr, entindex, operator CEntityInstance*, operator CFuncTrackTrain*, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CSoundEnvelopeController::GetController, CTankTrainAI::SoundEngineStop, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, _Unwind_Resume
// callers: CTankTrainAI::Think
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTankTrainAI::SoundEngineStart(CTankTrainAI *const this)
{
  const CEntityInstance *m_pInstance; // r12
  uint32 m_Index; // eax
  CConcreteEntityList *v4; // rsi
  CEntityIdentity *v5; // rdx
  __int64 v6; // rcx
  CEntityIdentity *v7; // rdx
  int v8; // xmm1_4
  float v9; // xmm1_4
  bool v10; // zf
  const char *m_pAsString; // rax
  CEntityIndex v12; // eax
  CSoundEnvelopeController *Controller; // rax
  CSoundEnvelopeController *v14; // r12
  void (__fastcall *v15)(CSoundEnvelopeController *, CSoundPatch *, __int64, double, float, float); // r14
  int v16; // eax
  void (__fastcall *v17)(CSoundEnvelopeController *, CSoundPatch *, __int64, float, float, float); // r14
  int v18; // eax
  EmitSound_t ep; // [rsp+0h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+60h] [rbp-160h] BYREF
  unsigned __int64 v21; // [rsp+198h] [rbp-28h]

  m_pInstance = 0;
  v21 = __readfsqword(0x28u);
  m_Index = this->m_hTrain.m_Index;
  v4 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTrain.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = this->m_hTrain.m_Index & 0x1FF;
      v4 = (8 * v6);
      v7 = &v5[v6];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( this->m_soundPlaying != 0 )
    CTankTrainAI::SoundEngineStop(this);
  if ( this->m_startSoundName.u.m_Id != 0 )
  {
    *&ep.m_nChannel = (*(m_pInstance->_vptr_IHandleEntity + 186))(m_pInstance, v4);
    LODWORD(ep.m_pSoundName) = v8;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&ep.m_nChannel = (*(m_pInstance->_vptr_IHandleEntity + 186))(m_pInstance);
    *&ep.m_pSoundName = v9;
    CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v9);
    v10 = this->m_startSoundName.u.m_Id == 0;
    ep.m_flVolume = 1.0;
    m_pAsString = "";
    ep.m_nFlags = 0;
    ep.m_nPitch = 100;
    ep.m_pOrigin = 0;
    ep.m_flSoundTime = 0.0;
    ep.m_pflSoundDuration = 0;
    ep.m_bEmitCloseCaption = 1;
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_nChannel = 3;
    if ( !v10 )
      m_pAsString = this->m_startSoundName.u.m_pAsString;
    ep.m_pSoundName = m_pAsString;
    ep.m_SoundLevel = soundlevel_t::SNDLVL_NORM;
    v12.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
    CBaseEntity::EmitSound(&filter, v12, &ep);
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  Controller = CSoundEnvelopeController::GetController();
  v14 = Controller;
  if ( this->m_soundTreads != 0 )
    (*(Controller->_vptr_CSoundEnvelopeController + 2))(Controller, 1.0, 100.0, 0.0);
  if ( this->m_soundEngine != 0 )
  {
    (*(v14->_vptr_CSoundEnvelopeController + 2))(v14, 0.5, 90.0, 0.0);
    (*(v14->_vptr_CSoundEnvelopeController + 4))(v14, this->m_soundEngine);
    v15 = *(v14->_vptr_CSoundEnvelopeController + 3);
    v16 = (*(*random_valve + 16LL))(random_valve, 130, 145);
    v15(v14, this->m_soundEngine, 1, 0.0, 1.5, v16);
    v17 = *(v14->_vptr_CSoundEnvelopeController + 3);
    v18 = (*(*random_valve + 16LL))(random_valve, 105, 115);
    v17(v14, this->m_soundEngine, 1, 1.5, 2.0, v18);
  }
  this->m_soundPlaying = 1;
}


// CTankTrainAI::SoundEngineStop  (line 306, @0x00000000023bd620, libserver.so)
// calls: CSoundEnvelopeController::GetController
// callers: CTankTrainAI::SoundEngineStart, CTankTrainAI::SoundEngineStop, CTankTrainAI::Think
void __fastcall CTankTrainAI::SoundEngineStop(CTankTrainAI *const this)
{
  CSoundEnvelopeController *Controller; // rax
  CSoundPatch *m_soundTreads; // rsi
  CSoundEnvelopeController *v4; // rbx

  Controller = CSoundEnvelopeController::GetController();
  m_soundTreads = this->m_soundTreads;
  v4 = Controller;
  if ( m_soundTreads != 0 )
    (*(Controller->_vptr_CSoundEnvelopeController + 14))(Controller, m_soundTreads, 0, 0.25);
  if ( this->m_soundEngine != 0 )
  {
    (*(v4->_vptr_CSoundEnvelopeController + 4))(v4);
    (*(v4->_vptr_CSoundEnvelopeController + 12))(v4, this->m_soundEngine, 70.0, 3.0);
  }
  this->m_soundPlaying = 0;
}


// CTankTrainAI::SoundEngineStop  (line 306, @0x00000000023c87b0, libserver.so)
// calls: CTankTrainAI::SoundEngineStop
void __fastcall CTankTrainAI::SoundEngineStop(CTankTrainAI *const this)
{
  if ( this->m_soundPlaying != 0 )
    CTankTrainAI::SoundEngineStop(this);
}


// CTankTrainAI::SoundShutdown  (line 327, @0x00000000023c87d0, libserver.so)
// calls: CSoundEnvelopeController::GetController
// callers: CTankTrainAI::Think
void __fastcall CTankTrainAI::SoundShutdown(CTankTrainAI *const this)
{
  CSoundEnvelopeController *Controller; // rax
  CSoundEnvelopeController *v3; // r12

  Controller = CSoundEnvelopeController::GetController();
  v3 = Controller;
  if ( this->m_soundTreads != 0 )
    (*(Controller->_vptr_CSoundEnvelopeController + 5))(Controller);
  if ( this->m_soundEngine != 0 )
    (*(v3->_vptr_CSoundEnvelopeController + 5))(v3);
  this->m_soundPlaying = 0;
}


// CTankTrainAI::Spawn  (line 346, @0x00000000023bba10, libserver.so)  // inlines: Set, operator=
// calls: CPointEntity::Spawn
void __fastcall CTankTrainAI::Spawn(CTankTrainAI *const this, const CEntityKeyValues *pKeyValues)
{
  CPointEntity::Spawn(this, pKeyValues);
  this->m_soundPlaying = 0;
  this->m_hTargetEntity.m_Index = -1;
}


// CTankTrainAI::Activate  (line 355, @0x00000000023c1f60, libserver.so)  // inlines: CPASAttenuationFilter, CPASFilter, CUtlSymbolLarge, GetEHandle, GetEntryIndex, GetSerialNumber, Set, String, ToCStr, curtime, entindex, operator!=, operator=, ~CPASAttenuationFilter, ~CPASFilter
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, __dynamic_cast, CBaseEntity::SetNextThink, CSoundEnvelopeController::GetController, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// globals: `typeinfo for'CFuncTrackTrain
void __fastcall CTankTrainAI::Activate(CTankTrainAI *const this, ActivateType_t activateType)
{
  double v3; // xmm1_8
  UtlSymLargeId_t m_Id; // rax
  const CEntityInstance *v5; // r12
  CBaseEntity *v6; // r13
  CBaseEntity *EntityByName; // rax
  const CEntityInstance *v8; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx
  CGlobalVars *v12; // r13
  double v13; // xmm0_8
  CSoundEnvelopeController *Controller; // r14
  vec_t v15; // xmm1_4
  float v16; // xmm1_4
  const char *v17; // r15
  __int64 v18; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  vec_t v20; // xmm1_4
  float v21; // xmm1_4
  const char *m_pAsString; // r15
  __int64 m_Data; // rdx
  __int64 (__fastcall *v24)(CSoundEnvelopeController *, CPASAttenuationFilter *, __int64, __int64, const char *, float, float); // [rsp+8h] [rbp-188h]
  __int64 (__fastcall *v25)(CSoundEnvelopeController *, CPASAttenuationFilter *, __int64, __int64, const char *, float, float); // [rsp+8h] [rbp-188h]
  Vector iszName; // [rsp+10h] [rbp-180h] BYREF
  CPASAttenuationFilter filter; // [rsp+20h] [rbp-170h] BYREF
  unsigned __int64 v28; // [rsp+158h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  CBaseEntity::Activate(this, activateType);
  m_Id = this->m_target.u.m_Id;
  if ( m_Id != 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      *&iszName.x = m_Id;
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v6, &iszName, this, 0, 0, 0);
      v6 = EntityByName;
      if ( EntityByName == 0 )
        break;
      v8 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CFuncTrackTrain, 0);
      v5 = v8;
      if ( v8 != 0 )
      {
        m_pEntity = v8->m_pEntity;
        if ( m_pEntity == 0 )
          goto LABEL_3;
        v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v11 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hTrain.m_Index) = v11 | this->m_hTrain.m_Index & 0x8000;
        this->m_hTrain.m_Index = (v10 << 15) | this->m_hTrain.m_Index & 0x7FFF;
        goto LABEL_13;
      }
      m_Id = this->m_target.u.m_Id;
    }
  }
  v5 = 0;
LABEL_3:
  this->m_hTrain.m_Index = -1;
  if ( v5 != 0 )
  {
LABEL_13:
    v12 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v13) = 0;
      *&v13 = v12->m_flCurrentTime + 0.5;
    }
    else
    {
      *&v13 = 1056964608;
    }
    CBaseEntity::SetNextThink(this, v13, v3, 0);
    Controller = CSoundEnvelopeController::GetController();
    if ( this->m_movementSoundName.u.m_Id != 0 )
    {
      *&iszName.x = (*(this->_vptr_IHandleEntity + 186))(this);
      iszName.z = v20;
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&filter, &iszName);
      filter._vptr_IRecipientFilter = &off_3FECD70;
      *&iszName.x = (*(this->_vptr_IHandleEntity + 186))(this);
      iszName.z = v21;
      CPASAttenuationFilter::Filter(&filter, &iszName, 0.40000001, v21);
      m_pAsString = "";
      v25 = *(Controller->_vptr_CSoundEnvelopeController + 7);
      if ( this->m_movementSoundName.u.m_Id != 0 )
        m_pAsString = this->m_movementSoundName.u.m_pAsString;
      m_Data = CEntityInstance::GetEntityIndex(v5).m_Data;
      this->m_soundTreads = v25(Controller, &filter, m_Data, 6, m_pAsString, 0.40000001, 1.0);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
    if ( this->m_engineSoundName.u.m_Id != 0 )
    {
      *&iszName.x = (*(this->_vptr_IHandleEntity + 186))(this);
      iszName.z = v15;
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&filter, &iszName);
      filter._vptr_IRecipientFilter = &off_3FECD70;
      *&iszName.x = (*(this->_vptr_IHandleEntity + 186))(this);
      iszName.z = v16;
      CPASAttenuationFilter::Filter(&filter, &iszName, 0.80000001, v16);
      v17 = "";
      v24 = *(Controller->_vptr_CSoundEnvelopeController + 7);
      if ( this->m_engineSoundName.u.m_Id != 0 )
        v17 = this->m_engineSoundName.u.m_pAsString;
      v18 = CEntityInstance::GetEntityIndex(v5).m_Data;
      this->m_soundEngine = v24(Controller, &filter, v18, 6, v17, 0.80000001, 1.0);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
}


// PathFindDirection  (line 400, @0x00000000023c8820, libserver.so)  // inlines: LengthSqr, VectorSubtract, operator-
// calls: CBaseEntity::GetLocalOrigin
// callers: CTankTrainAI::Think
int __fastcall PathFindDirection(
        CPathTrack *pStart,
        const Vector *const startPosition,
        const Vector *const destination)
{
  int result; // eax
  CPathTrack *m_pnext; // r15
  CPathTrack *v7; // r13
  const Vector *LocalOrigin; // rax
  const Vector *v9; // r15
  const Vector *v10; // rax
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  const Vector *v15; // rax
  CPathTrack *v16; // r14
  int v17; // edx
  CPathTrack *i; // rax
  const Vector *v19; // rax
  float v20; // xmm1_4
  float nearestForward; // [rsp+10h] [rbp-40h]
  float nearestDist; // [rsp+14h] [rbp-3Ch]
  float length; // [rsp+18h] [rbp-38h]
  float nearestReverse; // [rsp+1Ch] [rbp-34h]

  result = 0;
  if ( pStart != 0 )
  {
    m_pnext = pStart->m_pnext;
    v7 = pStart;
    LocalOrigin = CBaseEntity::GetLocalOrigin(pStart);
    nearestReverse = 0.0;
    nearestForward = 0.0;
    length = 0.0;
    nearestDist = ((LocalOrigin->z - destination->z) * (LocalOrigin->z - destination->z))
                + (((LocalOrigin->y - destination->y) * (LocalOrigin->y - destination->y))
                 + ((LocalOrigin->x - destination->x) * (LocalOrigin->x - destination->x)));
    do
    {
      while ( 1 )
      {
        v15 = CBaseEntity::GetLocalOrigin(m_pnext);
        if ( nearestDist > ((((v15->x - destination->x) * (v15->x - destination->x))
                           + ((v15->y - destination->y) * (v15->y - destination->y)))
                          + ((v15->z - destination->z) * (v15->z - destination->z))) )
        {
          nearestDist = (((v15->x - destination->x) * (v15->x - destination->x))
                       + ((v15->y - destination->y) * (v15->y - destination->y)))
                      + ((v15->z - destination->z) * (v15->z - destination->z));
          v7 = m_pnext;
          nearestReverse = 0.0;
          nearestForward = length;
        }
        v16 = m_pnext->m_pnext;
        v17 = 257;
        if ( v16 == 0 )
          break;
        v9 = CBaseEntity::GetLocalOrigin(m_pnext);
        v10 = CBaseEntity::GetLocalOrigin(v16);
        v11 = (v10->x - v9->x) * (v10->x - v9->x);
        v12 = v10->z - v9->z;
        v13 = (v10->y - v9->y) * (v10->y - v9->y);
        m_pnext = v16;
        v14 = (v11 + v13) + (v12 * v12);
        length = length + v14;
        nearestReverse = v14 + nearestReverse;
        if ( v16 == pStart )
          goto LABEL_11;
      }
      for ( i = m_pnext->m_pprevious; i != 0; i = i->m_pprevious )
      {
        if ( --v17 == 0 )
          break;
        m_pnext = i;
      }
      length = 1073741800.0;
      nearestReverse = nearestForward + 1.0;
    }
    while ( m_pnext != pStart );
LABEL_11:
    if ( v7 == m_pnext )
      return 0;
    v19 = CBaseEntity::GetLocalOrigin(v7);
    v20 = v19->z - startPosition->z;
    if ( ((((v19->x - startPosition->x) * (v19->x - startPosition->x))
         + ((v19->y - startPosition->y) * (v19->y - startPosition->y)))
        + (v20 * v20)) < 100.0 )
      return 0;
    else
      return nearestReverse < nearestForward ? -1 : 1;
  }
  return result;
}


// CTankTrainAI::Think  (line 470, @0x00000000023dc2a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, SoundEngineStop, curtime, operator CBaseEntity*, operator CEntityInstance*, operator CFuncTrackTrain*
// calls: CTankTrainAI::SoundShutdown, UTIL_Remove, CBaseEntity::GetLifeState, UTIL_RemoveHierarchy, CBaseEntity::SetNextThink, CFuncTrackTrain::SetSpeed, CTankTrainAI::SoundEngineStop, CTankTrainAI::SoundEngineStart, CBaseEntity::GetLocalOrigin, PathFindDirection
// globals: CEntityHandle::gm_pEntityList
void __fastcall CTankTrainAI::Think(CTankTrainAI *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CFuncTrackTrain *m_pInstance; // r12
  uint32 v6; // ecx
  CConcreteEntityList *v7; // rsi
  CEntityIdentity *v8; // rax
  __int64 v9; // rdx
  CEntityIdentity *v10; // rax
  float m_flSpeed; // xmm0_4
  double v12; // xmm1_8
  __int64 v13; // r15
  CGlobalVars *v14; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v16; // xmm0_8
  double v17; // xmm1_8
  CGlobalVars *v18; // r12
  FnGlobalVarsWarningFunc v19; // rax
  double v20; // xmm0_8
  bool v21; // r14
  const Vector *LocalOrigin; // r13
  const Vector *v23; // rax

  m_Index = this->m_hTrain.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTrain.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hTrain.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0) )
  {
    CTankTrainAI::SoundShutdown(this);
LABEL_6:
    UTIL_Remove(this);
    return;
  }
  if ( CBaseEntity::GetLifeState(v4->m_pInstance) != LifeState_t::LIFE_ALIVE )
  {
    CTankTrainAI::SoundShutdown(this);
    UTIL_RemoveHierarchy(m_pInstance);
    goto LABEL_6;
  }
  v6 = this->m_hTargetEntity.m_Index;
  v7 = CEntityHandle::gm_pEntityList;
  if ( v6 + 2 <= 1
    || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = this->m_hTargetEntity.m_Index & 0x1FF, v7 = (8 * v9), (v10 = &v8[v9]) == 0)
    || v6 != v10->m_EHandle.m_Index
    || v10->m_pInstance == 0
    || (LocalOrigin = CBaseEntity::GetLocalOrigin(v10->m_pInstance),
        v23 = CBaseEntity::GetLocalOrigin(m_pInstance),
        LODWORD(v13) = PathFindDirection(m_pInstance->m_ppath, v23, LocalOrigin),
        v13 == 0) )
  {
    m_flSpeed = m_pInstance->m_flSpeed;
    v12 = 0.0;
    LODWORD(v13) = -1;
    if ( m_flSpeed <= 0.0 )
      v13 = m_flSpeed < 0.0;
  }
  v14 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, v7);
    }
    HIDWORD(v16) = 0;
    *&v16 = v14->m_flCurrentTime + 0.5;
  }
  else
  {
    *&v16 = 1056964608;
  }
  CBaseEntity::SetNextThink(this, v16, v12, 0);
  if ( v13 != 0 )
  {
    v21 = m_pInstance->m_flSpeed != 0.0;
    CFuncTrackTrain::SetSpeed(m_pInstance, v13, 0.0, 0);
    if ( m_pInstance->m_flSpeed == 0.0 && v21 )
    {
      if ( this->m_soundPlaying != 0 )
        CTankTrainAI::SoundEngineStop(this);
    }
    else if ( m_pInstance->m_flSpeed != 0.0 && !v21 )
    {
      CTankTrainAI::SoundEngineStart(this);
    }
  }
  else
  {
    if ( this->m_soundPlaying != 0 )
      CTankTrainAI::SoundEngineStop(this);
    v18 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v19 = gpGlobals->m_pfnWarningFunc;
        if ( v19 != 0 )
          v19(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v20) = 0;
      *&v20 = v18->m_flCurrentTime + 1.0;
    }
    else
    {
      *&v20 = 1065353216;
    }
    CBaseEntity::SetNextThink(this, v20, v17, 0);
  }
}


