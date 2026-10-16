// Reconstructed from DWARF by pahole; not original source.

// src/game/server/envshake.cpp:22
class CPhysicsShake : public IMotionEvent {
public:

private:

	static datamap_t m_DataMap;

	CPhysicsShake(CPhysicsShake &);
	CPhysicsShake(const CPhysicsShake &);
	~CPhysicsShake();
	CPhysicsShake();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual simresult_e Simulate(IPhysicsMotionController *, IPhysicsObject *, float, Vector &, AngularImpulse &);
	CPhysicsShake & operator=(const CPhysicsShake &);

	// vtable[1] Schema_DynamicBinding
	// vtable[0] Simulate
	// sizeof = 24
};

// src/game/server/envshake.cpp:49
class CEnvShake : public CPointEntity {
public:

private:

	float m_Amplitude;  // +0x308
	float m_Frequency;  // +0x30c
	float m_Duration;  // +0x310
	float m_Radius;  // +0x314
	float m_stopTime;  // +0x318
	float m_nextShake;  // +0x31c
	float m_currentAmp;  // +0x320

	static datamap_t m_DataMap;
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
	CEnvShake(CEnvShake &);
	CEnvShake();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvShake();
	virtual void UpdateOnRemove();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnRestore();
	float Amplitude();
	float Frequency();
	float Duration();
	float Radius(bool);
	void SetAmplitude(float);
	void SetFrequency(float);
	void SetDuration(float);
	void SetRadius(float);
	virtual int DrawDebugTextOverlays(uint64, int);
	void InputStartShake(inputdata_t &);
	void InputStopShake(inputdata_t &);
	void InputAmplitude(inputdata_t &);
	void InputFrequency(inputdata_t &);
	void ApplyShake(ShakeCommand_t);
	virtual void Think();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[11] UpdateOnRemove
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[18] OnRestore
	// vtable[79] DrawDebugTextOverlays
	// vtable[117] Think
	// sizeof = 848
};

// src/game/server/envshake.cpp:441
class CEnvTilt : public CPointEntity {
public:

private:

	float m_Duration;  // +0x308
	float m_Radius;  // +0x30c
	float m_TiltTime;  // +0x310
	float m_stopTime;  // +0x314

	static datamap_t m_DataMap;
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
	CEnvTilt(CEnvTilt &);
	CEnvTilt(CEnvTilt &);
	CEnvTilt();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	QAngle TiltAngle();
	float Duration();
	float Radius(bool);
	float TiltTime();
	void SetDuration(float);
	void SetRadius(float);
	virtual int DrawDebugTextOverlays(uint64, int);
	void InputStartTilt(inputdata_t &);
	void InputStopTilt(inputdata_t &);
	void ApplyTilt(ShakeCommand_t);
	virtual ~CEnvTilt();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[79] DrawDebugTextOverlays
	// sizeof = 792
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPhysicsShake::Schema_DynamicBinding  (line 24, @0x000000000220dff0, libserver.so)
// globals: CPhysicsShake::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysicsShake::Schema_DynamicBinding(const CPhysicsShake *const this)
{
  return CPhysicsShake::s_pSchemaBinding;
}


// CPhysicsShake::Simulate  (line 28, @0x000000000220e000, libserver.so)  // inlines: VectorMultiply, operator*
__int64 __fastcall CPhysicsShake::Simulate(
        CPhysicsShake *const this,
        IPhysicsMotionController *pController,
        IPhysicsObject *pObject,
        float deltaTime,
        Vector *const linear,
        AngularImpulse *const angular)
{
  char v10; // al
  __int64 v11; // rsi
  unsigned int v12; // edx
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  void (__fastcall *v18)(IPhysicsObject *, _DWORD *, Vector *, Vector *const, AngularImpulse *const); // [rsp+8h] [rbp-58h]
  Vector contact; // [rsp+10h] [rbp-50h] BYREF
  _DWORD v20[16]; // [rsp+20h] [rbp-40h] BYREF

  v10 = (*(*pObject + 1904LL))(pObject, &contact, deltaTime);
  v12 = 0;
  if ( v10 != 0 )
  {
    v18 = *(*pObject + 1800LL);
    v13 = ((*(*pObject + 208LL))(pObject, v11, 0) * 0.40000001) + 1.0;
    v14 = this->m_force.y * v13;
    v15 = this->m_force.z * v13;
    v16 = v13 * this->m_force.x;
    *&v20[1] = v14;
    *&v20[2] = v15;
    *v20 = v16;
    v18(pObject, v20, &contact, linear, angular);
    return 2;
  }
  return v12;
}


// CPhysicsShake::AddDatadescMetadataKeys  (line 43, @0x00000000021fa000, libserver.so)
void __fastcall CPhysicsShake::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CPhysicsShake::GetBaseMap  (line 43, @0x00000000021fa010, libserver.so)
datamap_t *__cdecl CPhysicsShake::GetBaseMap()
{
  return 0;
}


// DataMapInit<CPhysicsShake>  (line 43, @0x00000000021fa020, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CPhysicsShake"
// globals: `guard variable for'DataMapInit<CPhysicsShake>(CPhysicsShake *)::nameHolder, CPhysicsShake::m_DataMap, DataMapInit<CPhysicsShake>(CPhysicsShake *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysicsShake>(CPhysicsShake *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPhysicsShake>(CPhysicsShake *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysicsShake>(CPhysicsShake *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysicsShake>(CPhysicsShake *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysicsShake>(CPhysicsShake *)::nameHolder.m_pszBase = "CPhysicsShake";
    DataMapInit<CPhysicsShake>(CPhysicsShake *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysicsShake>(CPhysicsShake *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysicsShake>(CPhysicsShake *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysicsShake>(CPhysicsShake *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysicsShake>(CPhysicsShake *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysicsShake>(CPhysicsShake *)::nameHolder,
      &_dso_handle);
  }
  CPhysicsShake::m_DataMap.baseMap = 0;
  CPhysicsShake::m_DataMap.dataDesc = &DataMapInit<CPhysicsShake>(CPhysicsShake *)::dataDesc[1];
  CPhysicsShake::m_DataMap.dataNumFields = 1;
  return &CPhysicsShake::m_DataMap;
}


// CEnvShake::GetEntityClass  (line 51, @0x000000000220e0c0, libserver.so)
CEntityClass *__cdecl CEnvShake::GetEntityClass()
{
  return g_pEntityCEnvShakeClass;
}


// CEnvShake::Schema_DynamicBinding  (line 51, @0x000000000220e0d0, libserver.so)
// globals: CEnvShake::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvShake::Schema_DynamicBinding(const CEnvShake *const this)
{
  return CEnvShake::s_pSchemaBinding;
}


// CEnvShake::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 51, @0x000000000220e0e0, libserver.so)
// globals: CEnvShake::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvShake::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvShake::CEntityInstanceEntityClass *const this)
{
  return CEnvShake::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvShake::CEntityInstanceEntityClass::DestructInstance  (line 51, @0x000000000220e0f0, libserver.so)  // inlines: Destruct<CEnvShake>
void __fastcall CEnvShake::CEntityInstanceEntityClass::DestructInstance(
        CEnvShake::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvShake::CEntityInstanceEntityClass::FreeInstance  (line 51, @0x000000000220e110, libserver.so)
void __fastcall CEnvShake::CEntityInstanceEntityClass::FreeInstance(
        CEnvShake::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvShake::CEntityInstanceEntityClass::CanAllocate  (line 51, @0x000000000220e130, libserver.so)
bool __fastcall CEnvShake::CEntityInstanceEntityClass::CanAllocate(
        const CEnvShake::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvShake::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 51, @0x000000000220e140, libserver.so)
// globals: CEnvShake::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvShake::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvShake::CEntityInstanceEntityClass *const this)
{
  return CEnvShake::s_pSchemaBinding;
}


// CEnvShake::CEntityInstanceEntityClass::AllocateInstance  (line 51, @0x000000000220fae0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvShake::CEntityInstanceEntityClass::AllocateInstance(
        CEnvShake::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 848);
  memset(v1, 0, 0x350u);
  return v1;
}


// CEnvShake::CEntityInstanceEntityClass::ConstructInstance  (line 51, @0x0000000002210040, libserver.so)  // inlines: CEnvShake, CPhysicsShake, CPointEntity, Construct<CEnvShake>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvShake::CEntityInstanceEntityClass::ConstructInstance(
        CEnvShake::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40301D0;
    *(p + 103) = &off_4030130;
  }
  return p;
}


// CEnvShake::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 51, @0x00000000022123a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvShake::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvShake::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvShake::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 51, @0x00000000022123c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvShake::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvShake::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvShake::GetEntityClassInternal  (line 51, @0x0000000002215cb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "env_shake", "CEnvShake"
// globals: `guard variable for'CEnvShake::GetEntityClassInternal(void)::g_EntityCEnvShakeClass, CEnvShake::GetEntityClassInternal(void)::g_EntityCEnvShakeClass, __dso_handle, CEnvShake::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvShake::GetEntityClassInfo(void)::g_EntityCEnvShakeClassInfo, CEnvShake::GetEntityClassInfo(void)::g_EntityCEnvShakeClassInfo
CEntityClass *__cdecl CEnvShake::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvShake::GetEntityClassInternal(void)::g_EntityCEnvShakeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvShake::GetEntityClassInternal(void)::g_EntityCEnvShakeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvShake::GetEntityClassInternal(void)::g_EntityCEnvShakeClass);
    CEnvShake::GetEntityClassInternal(void)::g_EntityCEnvShakeClass._vptr_CEntityClass = off_4030150;
    __cxa_guard_release(&`guard variable for'CEnvShake::GetEntityClassInternal(void)::g_EntityCEnvShakeClass);
    __cxa_atexit(
      CEnvShake::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvShake::GetEntityClassInternal(void)::g_EntityCEnvShakeClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvShakeClass != 0 )
    return &CEnvShake::GetEntityClassInternal(void)::g_EntityCEnvShakeClass;
  if ( `guard variable for'CEnvShake::GetEntityClassInfo(void)::g_EntityCEnvShakeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvShake::GetEntityClassInfo(void)::g_EntityCEnvShakeClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvShake::GetEntityClassInfo(void)::g_EntityCEnvShakeClassInfo,
      "CEnvShake",
      "env_shake",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvShake::GetEntityClassInfo(void)::g_EntityCEnvShakeClassInfo);
  }
  CEnvShake::GetEntityClassInternal(void)::g_EntityCEnvShakeClass.m_pClassInfo = &CEnvShake::GetEntityClassInfo(void)::g_EntityCEnvShakeClassInfo;
  CEnvShake::GetEntityClassInternal(void)::g_EntityCEnvShakeClass.m_pBaseClassInfo = CEnvShake::GetEntityClassInfo(void)::g_EntityCEnvShakeClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvShakeClass = &CEnvShake::GetEntityClassInternal(void)::g_EntityCEnvShakeClass;
  CEnvShake::GetEntityClassInfo(void)::g_EntityCEnvShakeClassInfo.m_pClass = &CEnvShake::GetEntityClassInternal(void)::g_EntityCEnvShakeClass;
  CEnvShake::GetEntityClassInternal(void)::g_EntityCEnvShakeClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvShakeClass->m_pComponentOverrides = 0;
  return &CEnvShake::GetEntityClassInternal(void)::g_EntityCEnvShakeClass;
}


// CEnvShake::~CEnvShake  (line 70, @0x0000000002210500, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvShake::~CEnvShake(CEnvShake *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvShake::~CEnvShake  (line 70, @0x0000000002210520, libserver.so)  // inlines: ~CEnvShake, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvShake::~CEnvShake(CEnvShake *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvShake::GetDataDescMap  (line 102, @0x00000000021ee650, libserver.so)
// globals: CEnvShake::m_DataMap
datamap_t *__fastcall CEnvShake::GetDataDescMap(CEnvShake *const this)
{
  return &CEnvShake::m_DataMap;
}


// CEnvShake::AddDatadescMetadataKeys  (line 102, @0x00000000021fa0e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvShake::GetEntityClass(void)
void __fastcall CEnvShake::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvShake::GetEntityClass);
}


// CEnvShake::GetBaseMap  (line 102, @0x00000000021fa100, libserver.so)
datamap_t *__cdecl CEnvShake::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvShake>  (line 102, @0x00000000021fa110, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, GetPhysObjSaveRestoreOps, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CEnvShake"
// globals: `guard variable for'DataMapInit<CEnvShake>(CEnvShake *)::nameHolder, `guard variable for'DataMapInit<CEnvShake>(CEnvShake *)::dataDesc, CEnvShake::GetEntityClass(void), CEnvShake::m_DataMap, DataMapInit<CEnvShake>(CEnvShake *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvShake>(CEnvShake *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvShake>(CEnvShake *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvShake>(CEnvShake *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvShake>(CEnvShake *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvShake>(CEnvShake *)::nameHolder.m_pszBase = "CEnvShake";
    DataMapInit<CEnvShake>(CEnvShake *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvShake>(CEnvShake *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvShake>(CEnvShake *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvShake>(CEnvShake *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvShake>(CEnvShake *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvShake>(CEnvShake *)::nameHolder,
      &_dso_handle);
  }
  CEnvShake::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvShake>(CEnvShake *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvShake>(CEnvShake *)::dataDesc) != 0 )
  {
    DataMapInit<CEnvShake>(CEnvShake *)::dataDesc[9].pSaveRestoreOps = GetPhysObjSaveRestoreOps(PhysInterfaceId_t::PIID_IPHYSICSMOTIONCONTROLLER);
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvShake>(CEnvShake *)::dataDesc);
  }
  CEnvShake::m_DataMap.dataNumFields = 14;
  CEnvShake::m_DataMap.dataDesc = &DataMapInit<CEnvShake>(CEnvShake *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvShake::m_DataMap, CEnvShake::GetEntityClass);
  return &CEnvShake::m_DataMap;
}


// CEnvShake::UpdateOnRemove  (line 134, @0x00000000021ef640, libserver.so)
// calls: CBaseEntity::VPhysicsWorld, CBaseEntity::UpdateOnRemove
void __fastcall CEnvShake::UpdateOnRemove(CEnvShake *const this)
{
  IVPhysics2World *v2; // rax

  if ( this->m_pShakeController != 0 )
  {
    v2 = CBaseEntity::VPhysicsWorld(this);
    (*(*v2 + 88LL))(v2, this->m_pShakeController);
  }
  CBaseEntity::UpdateOnRemove(this);
}


// CEnvShake::Radius  (line 145, @0x00000000021fa250, libserver.so)
float __fastcall CEnvShake::Radius(CEnvShake *const this, bool bPlayers)
{
  float result; // xmm0_4

  if ( !bPlayers )
    return this->m_Radius;
  result = 0.0;
  if ( (this->m_spawnflags.m_Value & 1) == 0 )
    return this->m_Radius;
  return result;
}


// CEnvShake::Precache  (line 157, @0x000000000220d3e0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CRopeKeyframe::PrecacheShakeRopes
void __fastcall CEnvShake::Precache(CEnvShake *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CRopeKeyframe::PrecacheShakeRopes();
}


// CEnvShake::Spawn  (line 165, @0x00000000021efca0, libserver.so)  // inlines: GetDebugName, GetSpawnFlags
// calls: CPointEntity::Spawn, CBaseEntity::SetMoveType, CEntityIdentity::GetDebugName, DevWarning(char const*,...)
// strings: "env_shake %s with \"Don't shake view\" spawnflag set without \"Shake physics\" or \"Shake
void __fastcall CEnvShake::Spawn(CEnvShake *const this, const CEntityKeyValues *pKeyValues)
{
  unsigned int m_Value; // eax
  const char *DebugName; // rax

  CPointEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 1) != 0 )
    this->m_Radius = 0.0;
  if ( (m_Value & 0x20) != 0 && (m_Value & 0x18) == 0 )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    DevWarning(
      "env_shake %s with \"Don't shake view\" spawnflag set without \"Shake physics\" or \"Shake ropes\" spawnflags set.",
      DebugName);
  }
}


// CEnvShake::OnRestore  (line 186, @0x00000000021ef430, libserver.so)
// calls: CBaseEntity::OnRestore
void __fastcall CEnvShake::OnRestore(CEnvShake *const this)
{
  IPhysicsMotionController *m_pShakeController; // rdi

  CBaseEntity::OnRestore(this);
  m_pShakeController = this->m_pShakeController;
  if ( m_pShakeController != 0 )
    (*(m_pShakeController->_vptr_IPhysicsMotionController + 2))(m_pShakeController, &this->m_shakeCallback);
}


// CEnvShake::ApplyShake  (line 200, @0x0000000002201f40, libserver.so)  // inlines: CEntityHandle, CGameQueryAttributes, COverlapList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, GetEntityIdentity, GetEntryIndex, GetHitEntity, GetInstance, HasSpawnFlags, HitEntitiesOnlyByContents, IndexToIdentity, Init, LookupEntity, Purge, Purge_FixedGrowable, Radius, RemoveAll, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, SetObjectSetMask, VectorAdd, VectorSubtract, operator CBaseEntity*, operator+, operator-, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CBaseEntity::GetAbsOrigin, UTIL_ScreenShake, CRopeKeyframe::ShakeRopes, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::EntitiesInBox, CBaseEntity::VPhysicsGetObject, CUtlMemory<COverlapHit, int>::Purge, CBaseEntity::VPhysicsWorld, __stack_chk_fail (14 total)
// callers: CEnvShake::InputStartShake, CEnvShake::InputStopShake, CEnvShake::InputAmplitude, CEnvShake::InputFrequency
// globals: jpt_220203C, CEntityHandle::gm_pEntityList
void __fastcall CEnvShake::ApplyShake(CEnvShake *const this, ShakeCommand_t command)
{
  unsigned int m_Value; // ebx
  float m_Radius; // xmm3_4
  const Vector *AbsOrigin; // rax
  uint32 v7; // eax
  const Vector *v8; // rax
  float v9; // xmm2_4
  float v10; // xmm0_4
  IPhysicsMotionController *m_pShakeController; // rdi
  double v12; // xmm0_8
  double v13; // xmm1_8
  float v14; // xmm0_4
  const Vector *v15; // rax
  vec_t v16; // xmm2_4
  vec_t v17; // xmm1_4
  const Vector *v18; // rax
  vec_t v19; // xmm2_4
  vec_t v20; // xmm1_4
  vec_t v21; // xmm0_4
  __int64 v22; // r12
  int v23; // ebx
  CEntityInstance *m_pInstance; // rdi
  uint32 m_nEntityId; // eax
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  IPhysicsObject *Object; // rax
  IPhysicsObject *v29; // r15
  IVPhysics2World *v30; // rax
  float v31; // [rsp+0h] [rbp-10C0h]
  float duration; // [rsp+4h] [rbp-10BCh]
  float radius; // [rsp+8h] [rbp-10B8h]
  float radiusa; // [rsp+8h] [rbp-10B8h]
  float radiusb; // [rsp+8h] [rbp-10B8h]
  float amplitudea; // [rsp+Ch] [rbp-10B4h]
  float amplitude; // [rsp+Ch] [rbp-10B4h]
  Vector vMins; // [rsp+20h] [rbp-10A0h] BYREF
  Vector vMaxs; // [rsp+30h] [rbp-1090h] BYREF
  CGameQueryAttributes filter; // [rsp+40h] [rbp-1080h] BYREF
  COverlapList list; // [rsp+70h] [rbp-1050h] BYREF
  unsigned __int64 v42; // [rsp+1088h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x60) != 0x60 )
  {
    m_Radius = 0.0;
    if ( (m_Value & 1) == 0 )
      m_Radius = this->m_Radius;
    v31 = m_Radius;
    duration = this->m_Duration;
    radius = this->m_Frequency;
    amplitudea = this->m_Amplitude;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    UTIL_ScreenShake(AbsOrigin, amplitudea, radius, duration, v31, command, (m_Value & 4) != 0, 0);
    m_Value = this->m_spawnflags.m_Value;
  }
  if ( (m_Value & 0x10) != 0 )
  {
    radiusa = this->m_Frequency;
    v8 = CBaseEntity::GetAbsOrigin(this);
    CRopeKeyframe::ShakeRopes(v8, radiusa, v9);
    m_Value = this->m_spawnflags.m_Value;
  }
  if ( (m_Value & 8) != 0 )
  {
    if ( this->m_pShakeController == 0 )
    {
      v30 = CBaseEntity::VPhysicsWorld(this);
      this->m_pShakeController = (*(*v30 + 80LL))(v30, &this->m_shakeCallback);
    }
    switch ( command )
    {
      case ShakeCommand_t::SHAKE_START:
      case ShakeCommand_t::SHAKE_START_RUMBLEONLY:
      case ShakeCommand_t::SHAKE_START_NORUMBLE:
        v10 = CGlobalVarsBase::curtime(gpGlobals, 0);
        m_pShakeController = this->m_pShakeController;
        this->m_nextShake = 0.0;
        this->m_stopTime = v10 + this->m_Duration;
        (*(m_pShakeController->_vptr_IPhysicsMotionController + 8))(m_pShakeController);
        *&v12 = CGlobalVarsBase::curtime(gpGlobals, 0);
        CBaseEntity::SetNextThink(this, v12, v13, 0);
        this->m_currentAmp = this->m_Amplitude;
        v14 = this->m_Radius;
        if ( v14 == 0.0 )
        {
          v14 = 512.0;
        }
        else if ( v14 <= 100.0 )
        {
          amplitude = 100.0;
          goto LABEL_23;
        }
        amplitude = v14;
LABEL_23:
        radiusb = v14;
        v15 = CBaseEntity::GetAbsOrigin(this);
        v16 = v15->y - radiusb;
        v17 = v15->z - amplitude;
        vMins.x = v15->x - radiusb;
        vMins.y = v16;
        vMins.z = v17;
        v18 = CBaseEntity::GetAbsOrigin(this);
        v19 = v18->y + radiusb;
        v20 = amplitude + v18->z;
        v21 = radiusb + v18->x;
        list.m_list.m_Memory.m_pMemory = &list.m_list.m_Memory.m_FixedMemory;
        vMaxs.y = v19;
        vMaxs.x = v21;
        vMaxs.z = v20;
        list.m_list.m_Size = 0;
        list.m_list.m_Memory.m_nAllocationCount = 64;
        list.m_list.m_Memory.m_nGrowSize = 0x80000000;
        filter.m_nInteractsExclude = 0;
        filter.m_nInteractsAs = 0;
        *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
        filter.m_nObjectSetMask = 2;
        filter.m_nCollisionGroup = 3;
        filter.m_nInteractsWith = 0x200000;
        filter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(0);
        filter.m_nHierarchyId = HierarchyIDFromBaseEntity(0);
        CGamePhysicsQueryInterface::EntitiesInBox(
          g_pPhysicsQuery,
          &vMins,
          &vMaxs,
          &filter,
          OverlapTest_t::OVERLAP_TEST_SHAPE,
          &list);
        if ( list.m_list.m_Size > 0 )
        {
          v22 = 0;
          v23 = 0;
          do
          {
            m_pInstance = 0;
            m_nEntityId = list.m_list.m_Memory.m_pMemory[v22].m_ShapeAttributes.m_nEntityId;
            if ( m_nEntityId + 2 > 1 )
            {
              v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_nEntityId >> 9) & 0x3F];
              if ( v26 != 0 )
              {
                v27 = &v26[m_nEntityId & 0x1FF];
                if ( v27 != 0 && m_nEntityId == v27->m_EHandle.m_Index )
                  m_pInstance = v27->m_pInstance;
              }
            }
            if ( BYTE5(m_pInstance[7]._vptr_IHandleEntity) == 6 )
            {
              Object = CBaseEntity::VPhysicsGetObject(m_pInstance);
              v29 = Object;
              if ( Object != 0 && (*(*Object + 1512LL))(Object) != 0 )
              {
                (*(this->m_pShakeController->_vptr_IPhysicsMotionController + 4))(this->m_pShakeController, v29, 0);
                (*(*v29 + 1592LL))(v29);
              }
            }
            ++v23;
            ++v22;
          }
          while ( v23 < list.m_list.m_Size );
        }
        list.m_list.m_Size = 0;
        v7 = list.m_list.m_Memory.m_nGrowSize & 0xC0000000;
        if ( list.m_list.m_Memory.m_nAllocationCount < 0
          || list.m_list.m_Memory.m_pMemory == &list.m_list.m_Memory.m_FixedMemory )
        {
          if ( v7 == 0 )
            CUtlMemory<COverlapHit,int>::Purge(&list.m_list.m_Memory);
        }
        else if ( list.m_list.m_Memory.m_pMemory != 0 && v7 == 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        }
        break;
      case ShakeCommand_t::SHAKE_STOP:
        (*(this->m_pShakeController->_vptr_IPhysicsMotionController + 8))(this->m_pShakeController);
        return;
      case ShakeCommand_t::SHAKE_AMPLITUDE:
        this->m_currentAmp = this->m_Amplitude;
        goto LABEL_18;
      case ShakeCommand_t::SHAKE_FREQUENCY:
LABEL_18:
        (*(this->m_pShakeController->_vptr_IPhysicsMotionController + 9))(this->m_pShakeController);
        return;
      default:
        return;
    }
  }
}


// CEnvShake::InputStartShake  (line 283, @0x00000000022024c0, libserver.so)  // inlines: HasSpawnFlags
// calls: CEnvShake::ApplyShake
void __fastcall CEnvShake::InputStartShake(CEnvShake *const this, inputdata_t *const inputdata)
{
  unsigned int m_Value; // eax

  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x40) != 0 )
  {
    CEnvShake::ApplyShake(this, ShakeCommand_t::SHAKE_START_NORUMBLE);
  }
  else if ( (m_Value & 0x20) != 0 )
  {
    CEnvShake::ApplyShake(this, ShakeCommand_t::SHAKE_START_RUMBLEONLY);
  }
  else
  {
    CEnvShake::ApplyShake(this, ShakeCommand_t::SHAKE_START);
  }
}


// CEnvShake::InputStopShake  (line 303, @0x0000000002202500, libserver.so)
// calls: CEnvShake::ApplyShake
void __fastcall CEnvShake::InputStopShake(CEnvShake *const this, inputdata_t *const inputdata)
{
  CEnvShake::ApplyShake(this, ShakeCommand_t::SHAKE_STOP);
}


// CEnvShake::InputAmplitude  (line 312, @0x0000000002202510, libserver.so)  // inlines: Float, SetAmplitude, operator float
// calls: CEnvShake::ApplyShake
void __fastcall CEnvShake::InputAmplitude(CEnvShake *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_Amplitude = m_float64;
  CEnvShake::ApplyShake(this, ShakeCommand_t::SHAKE_AMPLITUDE);
}


// CEnvShake::InputFrequency  (line 322, @0x0000000002202550, libserver.so)  // inlines: Float, SetFrequency, operator float
// calls: CEnvShake::ApplyShake
void __fastcall CEnvShake::InputFrequency(CEnvShake *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_Frequency = m_float64;
  CEnvShake::ApplyShake(this, ShakeCommand_t::SHAKE_FREQUENCY);
}


// CEnvShake::Think  (line 332, @0x00000000021f41e0, libserver.so)  // inlines: curtime, operator*=
// calls: sin, CBaseEntity::SetNextThink, CGlobalVarsBase::curtime, VectorNormalize
void __fastcall CEnvShake::Think(CEnvShake *const this)
{
  CGlobalVars *v2; // rdi
  CGlobalVars *v3; // r14
  CGlobalVars *v4; // r13
  float m_flCurrentTime; // xmm0_4
  float v6; // xmm2_4
  float m_stopTime; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  CGlobalVars *v11; // r13
  FnGlobalVarsWarningFunc v12; // rax
  double v13; // xmm0_8
  __int64 v14; // rax
  float v15; // xmm0_4
  CGlobalVars *v16; // r12
  double v17; // xmm1_8
  void (__fastcall *v18)(__int64); // rax
  void (__fastcall *v19)(__int64); // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v21; // xmm0_4
  IUniformRandomStream *v22; // rdi
  vec_t v23; // xmm0_4
  IUniformRandomStream *v24; // rdi
  vec_t v25; // xmm0_4
  float v26; // xmm0_4
  bool v27; // zf
  vec_t v28; // xmm1_4
  vec_t v29; // xmm0_4
  float freq; // [rsp+4h] [rbp-2Ch]
  double v31; // [rsp+8h] [rbp-28h]
  float v32; // [rsp+8h] [rbp-28h]

  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    v3 = gpGlobals;
    v4 = gpGlobals;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      v4 = gpGlobals;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v4 = gpGlobals;
        v2 = gpGlobals;
      }
    }
    m_flCurrentTime = v3->m_flCurrentTime;
    v6 = 0.0;
  }
  else
  {
    v6 = 0.0;
    v4 = 0;
    m_flCurrentTime = 0.0;
  }
  if ( m_flCurrentTime <= this->m_nextShake )
  {
    m_stopTime = this->m_stopTime;
    if ( v2 != 0 )
      goto LABEL_6;
LABEL_32:
    v8 = 0.0;
    goto LABEL_8;
  }
  v21 = CGlobalVarsBase::curtime(v2, 0);
  v22 = random_valve;
  this->m_nextShake = v21 + (1.0 / this->m_Frequency);
  v23 = (*(*v22 + 8LL))(v22, -1.0, 1.0);
  v24 = random_valve;
  this->m_maxForce.x = v23;
  v25 = (*(*v24 + 8LL))(v24, -1.0, 1.0);
  this->m_maxForce.z = 4.0;
  this->m_maxForce.y = v25;
  VectorNormalize(&this->m_maxForce);
  v26 = 400.0 * this->m_currentAmp;
  v6 = 0.0;
  v27 = gpGlobals == 0;
  v4 = gpGlobals;
  this->m_maxForce.x = this->m_maxForce.x * v26;
  v28 = this->m_maxForce.y * v26;
  v29 = v26 * this->m_maxForce.z;
  this->m_maxForce.y = v28;
  m_stopTime = this->m_stopTime;
  this->m_maxForce.z = v29;
  if ( v27 )
    goto LABEL_32;
LABEL_6:
  if ( !v4->m_bEnableAssertions && !v4->m_bInSimulation )
  {
    v19 = v4->m_pfnWarningFunc;
    if ( v19 != 0 )
    {
      v32 = m_stopTime;
      v19(1);
      v6 = 0.0;
      m_stopTime = v32;
    }
  }
  v8 = v4->m_flCurrentTime;
LABEL_8:
  v9 = (m_stopTime - v8) / this->m_Duration;
  if ( v9 < 0.0 )
  {
    (*(this->m_pShakeController->_vptr_IPhysicsMotionController + 8))(this->m_pShakeController);
  }
  else
  {
    if ( v9 == 0.0 )
      v10 = 0.0;
    else
      v10 = this->m_Frequency / v9;
    v11 = gpGlobals;
    v31 = (v9 * v9);
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v12 = gpGlobals->m_pfnWarningFunc;
        if ( v12 != 0 )
        {
          freq = v10;
          v12(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v10 = freq;
        }
      }
      v6 = v11->m_flCurrentTime;
    }
    v13 = sin((v10 * v6));
    v14 = 0;
    v15 = v13 * v31;
    do
    {
      *(&this->m_shakeCallback.m_force.x + v14) = *(&this->m_maxForce.x + v14) * v15;
      v14 += 4;
    }
    while ( v14 != 12 );
    v16 = gpGlobals;
    *&v17 = LODWORD(this->m_Duration);
    *&v17 = *&v17 * this->m_Frequency;
    this->m_currentAmp = this->m_currentAmp - ((gpGlobals->frametime / *&v17) * this->m_currentAmp);
    if ( !v16->m_bEnableAssertions && !v16->m_bInSimulation )
    {
      v18 = v16->m_pfnWarningFunc;
      if ( v18 != 0 )
        v18(1);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(LODWORD(v16->m_flCurrentTime)), v17, 0);
  }
}


// CC_Shake  (line 389, @0x00000000021ef680, libserver.so)
// calls: UTIL_GetCommandClient, UTIL_ScreenShake
void __fastcall CC_Shake(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  vec_t v3; // xmm1_4
  Vector center; // [rsp+0h] [rbp-10h] BYREF

  CommandClient = UTIL_GetCommandClient();
  if ( CommandClient != 0 )
  {
    *&center.x = (*(CommandClient->_vptr_IHandleEntity + 62))(CommandClient);
    center.z = v3;
    UTIL_ScreenShake(&center, 25.0, 150.0, 1.0, 750.0, ShakeCommand_t::SHAKE_START, 0, 0);
  }
}


// CEnvShake::DrawDebugTextOverlays  (line 403, @0x00000000021eed20, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "    magnitude: %f", "    frequency: %f", "    duration: %f", "    radius: %f"
int __fastcall CEnvShake::DrawDebugTextOverlays(CEnvShake *const this, uint64 nDebugOverlayBits, int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r13
  int v6; // r12d
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v9 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    V_snprintf(tempstr, 512, "    magnitude: %f", this->m_Amplitude);
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "    frequency: %f", this->m_Frequency);
    CBaseEntity::EntityText(this, v6 + 1, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "    duration: %f", this->m_Duration);
    CBaseEntity::EntityText(this, v6 + 2, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "    radius: %f", this->m_Radius);
    CBaseEntity::EntityText(this, v6 + 3, tempstr, 0.0, 255, 255, 255, 255);
    v6 += 4;
  }
  return v6;
}


// CEnvTilt::~CEnvTilt  (line 441, @0x0000000002210780, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvTilt::~CEnvTilt(CEnvTilt *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvTilt::~CEnvTilt  (line 441, @0x00000000022107a0, libserver.so)  // inlines: ~CEnvTilt, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvTilt::~CEnvTilt(CEnvTilt *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvTilt::GetEntityClass  (line 443, @0x000000000220e150, libserver.so)
CEntityClass *__cdecl CEnvTilt::GetEntityClass()
{
  return g_pEntityCEnvTiltClass;
}


// CEnvTilt::Schema_DynamicBinding  (line 443, @0x000000000220e160, libserver.so)
// globals: CEnvTilt::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvTilt::Schema_DynamicBinding(const CEnvTilt *const this)
{
  return CEnvTilt::s_pSchemaBinding;
}


// CEnvTilt::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 443, @0x000000000220e170, libserver.so)
// globals: CEnvTilt::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvTilt::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvTilt::CEntityInstanceEntityClass *const this)
{
  return CEnvTilt::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvTilt::CEntityInstanceEntityClass::DestructInstance  (line 443, @0x000000000220e180, libserver.so)  // inlines: Destruct<CEnvTilt>
void __fastcall CEnvTilt::CEntityInstanceEntityClass::DestructInstance(
        CEnvTilt::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvTilt::CEntityInstanceEntityClass::FreeInstance  (line 443, @0x000000000220e1a0, libserver.so)
void __fastcall CEnvTilt::CEntityInstanceEntityClass::FreeInstance(
        CEnvTilt::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvTilt::CEntityInstanceEntityClass::CanAllocate  (line 443, @0x000000000220e1c0, libserver.so)
bool __fastcall CEnvTilt::CEntityInstanceEntityClass::CanAllocate(
        const CEnvTilt::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvTilt::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 443, @0x000000000220e1d0, libserver.so)
// globals: CEnvTilt::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvTilt::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvTilt::CEntityInstanceEntityClass *const this)
{
  return CEnvTilt::s_pSchemaBinding;
}


// CEnvTilt::CEntityInstanceEntityClass::AllocateInstance  (line 443, @0x000000000220fb20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvTilt::CEntityInstanceEntityClass::AllocateInstance(
        CEnvTilt::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CEnvTilt::CEntityInstanceEntityClass::ConstructInstance  (line 443, @0x0000000002210080, libserver.so)  // inlines: CEnvTilt, CPointEntity, Construct<CEnvTilt>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvTilt::CEntityInstanceEntityClass::ConstructInstance(
        CEnvTilt::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40308F0;
  }
  return p;
}


// CEnvTilt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 443, @0x00000000022123f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvTilt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvTilt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvTilt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 443, @0x0000000002212410, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvTilt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvTilt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvTilt::GetEntityClassInternal  (line 443, @0x0000000002215e00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "env_tilt", "CEnvTilt"
// globals: `guard variable for'CEnvTilt::GetEntityClassInternal(void)::g_EntityCEnvTiltClass, CEnvTilt::GetEntityClassInternal(void)::g_EntityCEnvTiltClass, __dso_handle, CEnvTilt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvTilt::GetEntityClassInfo(void)::g_EntityCEnvTiltClassInfo, CEnvTilt::GetEntityClassInfo(void)::g_EntityCEnvTiltClassInfo
CEntityClass *__cdecl CEnvTilt::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvTilt::GetEntityClassInternal(void)::g_EntityCEnvTiltClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvTilt::GetEntityClassInternal(void)::g_EntityCEnvTiltClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvTilt::GetEntityClassInternal(void)::g_EntityCEnvTiltClass);
    CEnvTilt::GetEntityClassInternal(void)::g_EntityCEnvTiltClass._vptr_CEntityClass = off_4030870;
    __cxa_guard_release(&`guard variable for'CEnvTilt::GetEntityClassInternal(void)::g_EntityCEnvTiltClass);
    __cxa_atexit(
      CEnvTilt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvTilt::GetEntityClassInternal(void)::g_EntityCEnvTiltClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvTiltClass != 0 )
    return &CEnvTilt::GetEntityClassInternal(void)::g_EntityCEnvTiltClass;
  if ( `guard variable for'CEnvTilt::GetEntityClassInfo(void)::g_EntityCEnvTiltClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvTilt::GetEntityClassInfo(void)::g_EntityCEnvTiltClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvTilt::GetEntityClassInfo(void)::g_EntityCEnvTiltClassInfo,
      "CEnvTilt",
      "env_tilt",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvTilt::GetEntityClassInfo(void)::g_EntityCEnvTiltClassInfo);
  }
  CEnvTilt::GetEntityClassInternal(void)::g_EntityCEnvTiltClass.m_pClassInfo = &CEnvTilt::GetEntityClassInfo(void)::g_EntityCEnvTiltClassInfo;
  CEnvTilt::GetEntityClassInternal(void)::g_EntityCEnvTiltClass.m_pBaseClassInfo = CEnvTilt::GetEntityClassInfo(void)::g_EntityCEnvTiltClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvTiltClass = &CEnvTilt::GetEntityClassInternal(void)::g_EntityCEnvTiltClass;
  CEnvTilt::GetEntityClassInfo(void)::g_EntityCEnvTiltClassInfo.m_pClass = &CEnvTilt::GetEntityClassInternal(void)::g_EntityCEnvTiltClass;
  CEnvTilt::GetEntityClassInternal(void)::g_EntityCEnvTiltClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvTiltClass->m_pComponentOverrides = 0;
  return &CEnvTilt::GetEntityClassInternal(void)::g_EntityCEnvTiltClass;
}


// CEnvTilt::GetDataDescMap  (line 476, @0x00000000021ee660, libserver.so)
// globals: CEnvTilt::m_DataMap
datamap_t *__fastcall CEnvTilt::GetDataDescMap(CEnvTilt *const this)
{
  return &CEnvTilt::m_DataMap;
}


// CEnvTilt::AddDatadescMetadataKeys  (line 476, @0x00000000021fa270, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvTilt::GetEntityClass(void)
void __fastcall CEnvTilt::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvTilt::GetEntityClass);
}


// CEnvTilt::GetBaseMap  (line 476, @0x00000000021fa290, libserver.so)
datamap_t *__cdecl CEnvTilt::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvTilt>  (line 476, @0x00000000021fa2a0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CEnvTilt"
// globals: `guard variable for'DataMapInit<CEnvTilt>(CEnvTilt *)::nameHolder, CEnvTilt::GetEntityClass(void), CEnvTilt::m_DataMap, DataMapInit<CEnvTilt>(CEnvTilt *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvTilt>(CEnvTilt *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvTilt>(CEnvTilt *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvTilt>(CEnvTilt *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvTilt>(CEnvTilt *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvTilt>(CEnvTilt *)::nameHolder.m_pszBase = "CEnvTilt";
    DataMapInit<CEnvTilt>(CEnvTilt *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvTilt>(CEnvTilt *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvTilt>(CEnvTilt *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvTilt>(CEnvTilt *)::nameHolder.m_nLenBase = 8;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvTilt>(CEnvTilt *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvTilt>(CEnvTilt *)::nameHolder,
      &_dso_handle);
  }
  CEnvTilt::m_DataMap.dataNumFields = 6;
  CEnvTilt::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CEnvTilt::m_DataMap.dataDesc = &DataMapInit<CEnvTilt>(CEnvTilt *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvTilt::m_DataMap, CEnvTilt::GetEntityClass);
  return &CEnvTilt::m_DataMap;
}


// CEnvTilt::TiltAngle  (line 490, @0x00000000021fa370, libserver.so)
// calls: CBaseEntity::GetAbsAngles
QAngle __fastcall CEnvTilt::TiltAngle(CEnvTilt *const this)
{
  const QAngle *AbsAngles; // rax
  __int64 v4; // [rsp+10h] [rbp-10h]
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsAngles = CBaseEntity::GetAbsAngles(this);
  HIDWORD(v4) = 0;
  result.z = AbsAngles->z;
  *&result.x = LODWORD(AbsAngles->x);
  return result;
}


// CEnvTilt::Radius  (line 499, @0x00000000021fa3a0, libserver.so)
float __fastcall CEnvTilt::Radius(CEnvTilt *const this, bool bPlayers)
{
  float result; // xmm0_4

  if ( !bPlayers )
    return this->m_Radius;
  result = 0.0;
  if ( (this->m_spawnflags.m_Value & 1) == 0 )
    return this->m_Radius;
  return result;
}


// CEnvTilt::Precache  (line 511, @0x000000000220d3f0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CRopeKeyframe::PrecacheShakeRopes
void __fastcall CEnvTilt::Precache(CEnvTilt *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CRopeKeyframe::PrecacheShakeRopes();
}


// CEnvTilt::Spawn  (line 519, @0x00000000021efd10, libserver.so)  // inlines: GetDebugName, GetSpawnFlags
// calls: CPointEntity::Spawn, CBaseEntity::SetMoveType, CEntityIdentity::GetDebugName, DevWarning(char const*,...)
// strings: "env_shake %s with \"Don't shake view\" spawnflag set without \"Shake physics\" or \"Shake
void __fastcall CEnvTilt::Spawn(CEnvTilt *const this, const CEntityKeyValues *pKeyValues)
{
  unsigned int m_Value; // eax
  const char *DebugName; // rax

  CPointEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 1) != 0 )
    this->m_Radius = 0.0;
  if ( (m_Value & 0x20) != 0 && (m_Value & 0x18) == 0 )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    DevWarning(
      "env_shake %s with \"Don't shake view\" spawnflag set without \"Shake physics\" or \"Shake ropes\" spawnflags set.",
      DebugName);
  }
}


// CEnvTilt::ApplyTilt  (line 538, @0x00000000021fa3c0, libserver.so)  // inlines: HasSpawnFlags, Radius, TiltAngle
// calls: CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, UTIL_ScreenTilt
// callers: CEnvTilt::InputStartTilt, CEnvTilt::InputStopTilt
void __fastcall CEnvTilt::ApplyTilt(CEnvTilt *const this, ShakeCommand_t command)
{
  unsigned int m_Value; // eax
  float m_Radius; // xmm1_4
  bool v6; // r12
  const QAngle *AbsAngles; // rax
  vec_t x; // xmm4_4
  vec_t z; // xmm3_4
  const Vector *AbsOrigin; // rax
  float radius; // [rsp+4h] [rbp-3Ch]
  float tiltTime; // [rsp+8h] [rbp-38h]
  float duration; // [rsp+Ch] [rbp-34h]
  QAngle tiltAngle; // [rsp+10h] [rbp-30h] BYREF

  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x60) != 0x60 )
  {
    m_Radius = 0.0;
    v6 = (m_Value & 0x80) != 0;
    if ( (m_Value & 1) == 0 )
      m_Radius = this->m_Radius;
    radius = m_Radius;
    tiltTime = this->m_TiltTime;
    duration = this->m_Duration;
    AbsAngles = CBaseEntity::GetAbsAngles(this);
    x = AbsAngles->x;
    tiltAngle.y = 0.0;
    z = AbsAngles->z;
    tiltAngle.x = x;
    tiltAngle.z = z;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    UTIL_ScreenTilt(AbsOrigin, &tiltAngle, duration, radius, tiltTime, command, v6);
  }
}


// CEnvTilt::InputStartTilt  (line 550, @0x00000000021fa480, libserver.so)  // inlines: HasSpawnFlags
// calls: CEnvTilt::ApplyTilt
void __fastcall CEnvTilt::InputStartTilt(CEnvTilt *const this, inputdata_t *const inputdata)
{
  unsigned int m_Value; // eax

  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x40) != 0 )
  {
    CEnvTilt::ApplyTilt(this, ShakeCommand_t::SHAKE_START_NORUMBLE);
  }
  else if ( (m_Value & 0x20) != 0 )
  {
    CEnvTilt::ApplyTilt(this, ShakeCommand_t::SHAKE_START_RUMBLEONLY);
  }
  else
  {
    CEnvTilt::ApplyTilt(this, ShakeCommand_t::SHAKE_START);
  }
}


// CEnvTilt::InputStopTilt  (line 570, @0x00000000021fa4c0, libserver.so)
// calls: CEnvTilt::ApplyTilt
void __fastcall CEnvTilt::InputStopTilt(CEnvTilt *const this, inputdata_t *const inputdata)
{
  CEnvTilt::ApplyTilt(this, ShakeCommand_t::SHAKE_STOP);
}


// CEnvTilt::DrawDebugTextOverlays  (line 580, @0x00000000021eeee0, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "    duration: %f", "    radius: %f"
int __fastcall CEnvTilt::DrawDebugTextOverlays(CEnvTilt *const this, uint64 nDebugOverlayBits, int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v5; // bl
  int v6; // r13d
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v9 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    V_snprintf(tempstr, 512, "    duration: %f", this->m_Duration);
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "    radius: %f", this->m_Radius);
    CBaseEntity::EntityText(this, v6 + 1, tempstr, 0.0, 255, 255, 255, 255);
    v6 += 2;
  }
  return v6;
}


