// Reconstructed from DWARF by pahole; not original source.

// src/game/server/phys_controller.cpp:36
class CConstantForceController : public IMotionEvent {
public:

private:

	static datamap_t m_DataMap;

	AngularImpulse m_angular;  // +0x18
	AngularImpulse m_angularSave;  // +0x30
	CConstantForceController(CConstantForceController &);
	CConstantForceController(const CConstantForceController &);
	~CConstantForceController();
	CConstantForceController();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	void Init(simresult_e);
	void SetConstantForce(const Vector &, const AngularImpulse &);
	void ScaleConstantForce(float);
	virtual simresult_e Simulate(IPhysicsMotionController *, IPhysicsObject *, float, Vector &, AngularImpulse &);
	CConstantForceController & operator=(const CConstantForceController &);

	// vtable[1] Schema_DynamicBinding
	// vtable[0] Simulate
	// sizeof = 64
};

// src/game/server/phys_controller.cpp:96
class CPhysForce : public CPointEntity {
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

	static datamap_t m_DataMap;

protected:

	string_t m_nameAttach;  // +0x310
	float m_force;  // +0x318
	float m_forceTime;  // +0x31c
	EHANDLE m_attachedObject;  // +0x320
	bool m_wasRestored;  // +0x324

	typedef CPointEntity BaseClass;
	CPhysForce(CPhysForce &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CPhysForce();
	virtual ~CPhysForce();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void OnRestore();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void UpdateOnRemove();
	void ForceOn();
	void ForceOff();
	void ActivateForce();
	void InputActivate(inputdata_t &);
	void InputDeactivate(inputdata_t &);
	void InputForceScale(inputdata_t &);
	void SaveForce();
	void ScaleForce(float);
	virtual void SetupForces(IPhysicsObject *, Vector &, AngularImpulse &);
	virtual void OnActivate();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[18] OnRestore
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[11] UpdateOnRemove
	// vtable[207] SetupForces
	// vtable[208] OnActivate
	// sizeof = 872
};

// src/game/server/phys_controller.cpp:337
class CPhysThruster : public CPhysForce {
public:

private:

	static datamap_t m_DataMap;

	typedef CPhysForce BaseClass;

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
	CPhysThruster(CPhysThruster &);
	CPhysThruster(CPhysThruster &);
	CPhysThruster();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void OnActivate();
	virtual void SetupForces(IPhysicsObject *, Vector &, AngularImpulse &);
	virtual ~CPhysThruster();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[208] OnActivate
	// vtable[207] SetupForces
	// sizeof = 888
};

// src/game/server/phys_controller.cpp:432
class CPhysTorque : public CPhysForce {
public:

private:

	static datamap_t m_DataMap;

	typedef CPhysForce BaseClass;

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
	CPhysTorque(CPhysTorque &);
	CPhysTorque(CPhysTorque &);
	CPhysTorque();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void SetupForces(IPhysicsObject *, Vector &, AngularImpulse &);
	virtual ~CPhysTorque();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[207] SetupForces
	// sizeof = 888
};

// src/game/server/phys_controller.cpp:486
class CMotorController {
	int ()() * * _vptr.CMotorController;  // +0x0
private:

	static datamap_t m_DataMap;

	float m_speed;  // +0x8
	float m_maxTorque;  // +0xc
	float m_inertiaFactor;  // +0x1c
	CMotorController(CMotorController &);
	CMotorController(const CMotorController &);
	~CMotorController();
	CMotorController();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	CMotorController & operator=(const CMotorController &);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 32
};

// src/game/server/phys_controller.cpp:515
class CPhysMotor : public CLogicalEntity {
public:

private:

	static datamap_t m_DataMap;

	string_t m_nameAttach;  // +0x308
	EHANDLE m_hAttachedObject;  // +0x310
	float m_spinUp;  // +0x314
	float m_additionalAcceleration;  // +0x318
	float m_angularAcceleration;  // +0x31c
	float m_lastTime;  // +0x320

	HPhysicsBody m_hFixedWorldBody;  // +0x328
	HPhysicsJoint m_hMotorJoint;  // +0x330
	typedef CLogicalEntity BaseClass;

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
	CPhysMotor(CPhysMotor &);
	CPhysMotor();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CPhysMotor();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void UpdateOnRemove();
	virtual void Think();
	void TurnOn();
	void TurnOff();
	void TargetSpeedChanged();
	virtual void OnRestore();
	void InputSetTargetSpeed(inputdata_t &);
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	void CalculateAcceleration();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[11] UpdateOnRemove
	// vtable[117] Think
	// vtable[18] OnRestore
	// sizeof = 856
};

// src/game/server/phys_controller.cpp:801
class CKeepUpright : public CPointEntity, public IMotionEvent {
public:

private:

	static datamap_t m_DataMap;

	string_t m_nameAttach;  // +0x330
	EHANDLE m_attachedObject;  // +0x338
	float m_angularLimit;  // +0x33c
	bool m_bActive;  // +0x340
	bool m_bDampAllRotation;  // +0x341
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
	CKeepUpright(CKeepUpright &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CKeepUpright();
	virtual ~CKeepUpright();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void UpdateOnRemove();
	virtual simresult_e Simulate(IPhysicsMotionController *, IPhysicsObject *, float, Vector &, AngularImpulse &);
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	void InputSetAngularLimit(inputdata_t &);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[11] UpdateOnRemove
	// vtable[207] Simulate
	// sizeof = 840
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CConstantForceController::Schema_DynamicBinding  (line 38, @0x00000000023031a0, libserver.so)
// globals: CConstantForceController::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CConstantForceController::Schema_DynamicBinding(
        const CConstantForceController *const this)
{
  return CConstantForceController::s_pSchemaBinding;
}


// CConstantForceController::AddDatadescMetadataKeys  (line 58, @0x00000000022cbce0, libserver.so)
void __fastcall CConstantForceController::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CConstantForceController::GetBaseMap  (line 58, @0x00000000022cbcf0, libserver.so)
datamap_t *__cdecl CConstantForceController::GetBaseMap()
{
  return 0;
}


// DataMapInit<CConstantForceController>  (line 58, @0x00000000022cbd00, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CConstantForceController"
// globals: `guard variable for'DataMapInit<CConstantForceController>(CConstantForceController *)::nameHolder, CConstantForceController::m_DataMap, DataMapInit<CConstantForceController>(CConstantForceController *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CConstantForceController>(CConstantForceController *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CConstantForceController>(CConstantForceController *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CConstantForceController>(CConstantForceController *)::nameHolder) != 0 )
  {
    DataMapInit<CConstantForceController>(CConstantForceController *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CConstantForceController>(CConstantForceController *)::nameHolder.m_pszBase = "CConstantForceController";
    DataMapInit<CConstantForceController>(CConstantForceController *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CConstantForceController>(CConstantForceController *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CConstantForceController>(CConstantForceController *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CConstantForceController>(CConstantForceController *)::nameHolder.m_nLenBase = 24;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CConstantForceController>(CConstantForceController *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CConstantForceController>(CConstantForceController *)::nameHolder,
      &_dso_handle);
  }
  CConstantForceController::m_DataMap.baseMap = 0;
  CConstantForceController::m_DataMap.dataDesc = &DataMapInit<CConstantForceController>(CConstantForceController *)::dataDesc[1];
  CConstantForceController::m_DataMap.dataNumFields = 5;
  return &CConstantForceController::m_DataMap;
}


// CConstantForceController::SetConstantForce  (line 67, @0x00000000022cbdc0, libserver.so)  // inlines: operator=
void __fastcall CConstantForceController::SetConstantForce(
        CConstantForceController *const this,
        const Vector *const linear,
        const AngularImpulse *const angular)
{
  this->m_linear = *linear;
  this->m_angular = *angular;
  this->m_linearSave = *linear;
  this->m_angularSave = *angular;
}


// CConstantForceController::ScaleConstantForce  (line 76, @0x00000000022cbe40, libserver.so)  // inlines: VectorMultiply, operator*, operator=
void __fastcall CConstantForceController::ScaleConstantForce(
        CConstantForceController *const this,
        float a2,
        float scale)
{
  vec_t v3; // xmm1_4
  vec_t v4; // xmm3_4
  float y; // xmm2_4
  vec_t v6; // xmm2_4
  vec_t v7; // xmm1_4
  vec_t v8; // xmm0_4

  v3 = this->m_linearSave.z * a2;
  v4 = this->m_linearSave.x * a2;
  this->m_linear.y = this->m_linearSave.y * a2;
  y = this->m_angularSave.y;
  this->m_linear.z = v3;
  v6 = y * a2;
  v7 = this->m_angularSave.z * a2;
  this->m_linear.x = v4;
  v8 = a2 * this->m_angularSave.x;
  this->m_angular.y = v6;
  this->m_angular.z = v7;
  this->m_angular.x = v8;
}


// CConstantForceController::Simulate  (line 83, @0x00000000022b7890, libserver.so)  // inlines: operator=
__int64 __fastcall CConstantForceController::Simulate(
        CConstantForceController *const this,
        IPhysicsMotionController *pController,
        IPhysicsObject *pObject,
        float deltaTime,
        Vector *const linear,
        AngularImpulse *const angular)
{
  *linear = this->m_linear;
  *angular = this->m_angular;
  return this->m_controlType;
}


// CPhysForce::GetEntityClass  (line 98, @0x00000000023031b0, libserver.so)
CEntityClass *__cdecl CPhysForce::GetEntityClass()
{
  return g_pEntityCPhysForceClass;
}


// CPhysForce::Schema_DynamicBinding  (line 98, @0x00000000023031c0, libserver.so)
// globals: CPhysForce::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysForce::Schema_DynamicBinding(const CPhysForce *const this)
{
  return CPhysForce::s_pSchemaBinding;
}


// CPhysForce::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 98, @0x00000000023031d0, libserver.so)
// globals: CPhysForce::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysForce::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysForce::CEntityInstanceEntityClass *const this)
{
  return CPhysForce::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysForce::CEntityInstanceEntityClass::AllocateInstance  (line 98, @0x00000000023031e0, libserver.so)
void *__fastcall CPhysForce::CEntityInstanceEntityClass::AllocateInstance(
        CPhysForce::CEntityInstanceEntityClass *const this)
{
  return 0;
}


// CPhysForce::CEntityInstanceEntityClass::ConstructInstance  (line 98, @0x00000000023031f0, libserver.so)
CEntityInstance *__fastcall CPhysForce::CEntityInstanceEntityClass::ConstructInstance(
        CPhysForce::CEntityInstanceEntityClass *const this,
        void *p)
{
  return p;
}


// CPhysForce::CEntityInstanceEntityClass::DestructInstance  (line 98, @0x0000000002303200, libserver.so)
void __fastcall CPhysForce::CEntityInstanceEntityClass::DestructInstance(
        CPhysForce::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  ;
}


// CPhysForce::CEntityInstanceEntityClass::FreeInstance  (line 98, @0x0000000002303210, libserver.so)
void __fastcall CPhysForce::CEntityInstanceEntityClass::FreeInstance(
        CPhysForce::CEntityInstanceEntityClass *const this,
        void *p)
{
  ;
}


// CPhysForce::CEntityInstanceEntityClass::CanAllocate  (line 98, @0x0000000002303220, libserver.so)
bool __fastcall CPhysForce::CEntityInstanceEntityClass::CanAllocate(
        const CPhysForce::CEntityInstanceEntityClass *const this)
{
  return 0;
}


// CPhysForce::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 98, @0x0000000002303230, libserver.so)
// globals: CPhysForce::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysForce::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysForce::CEntityInstanceEntityClass *const this)
{
  return CPhysForce::s_pSchemaBinding;
}


// CPhysForce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 98, @0x0000000002308f90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysForce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysForce::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPhysForce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 98, @0x0000000002308fb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysForce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysForce::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysForce::GetEntityClassInfo  (line 98, @0x000000000230d150, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CPhysTorque::GetEntityClassInternal, CPhysThruster::GetEntityClassInternal
// strings: "CPhysForce", "CPointEntity"
// globals: `guard variable for'CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo, CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo, `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo, CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo
CEntityClassInfo *__cdecl CPhysForce::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo != 0 )
    return &CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo) == 0 )
    return &CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo;
  if ( `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo,
      "CPointEntity",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo,
    "CPhysForce",
    0,
    0,
    &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo);
  return &CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo;
}


// CPhysForce::GetEntityClassInternal  (line 98, @0x00000000023122c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysForce"
// globals: `guard variable for'CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass, CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysForce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo, CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo
CEntityClass *__cdecl CPhysForce::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass) != 0 )
  {
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_designerName.u.m_Id = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass._vptr_CEntityClass = off_3F79390;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_ComponentOffsets.m_Size = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_AllHelpers.m_Size = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_classInputs.m_Size = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_classOutputs.m_Size = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_requiredEHandle.m_Index = -1;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_hNetworkSerializer = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_pBaseClassInfo = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_pClassInfo = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_flags = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_nAllHelpersFlags = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_pScriptClassDesc = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_pInputs = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_nInputCount = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_pOutputs = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_nOutputCount = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_pGameClass = 0;
    CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass._vptr_CEntityClass = off_4075B70;
    __cxa_guard_release(&`guard variable for'CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass);
    __cxa_atexit(
      CPhysForce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysForceClass != 0 )
    return &CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass;
  if ( `guard variable for'CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo,
      "CPhysForce",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo);
  }
  CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_pClassInfo = &CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo;
  CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_pBaseClassInfo = CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysForceClass = &CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass;
  CPhysForce::GetEntityClassInfo(void)::g_EntityCPhysForceClassInfo.m_pClass = &CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass;
  CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysForceClass->m_pComponentOverrides = 0;
  return &CPhysForce::GetEntityClassInternal(void)::g_EntityCPhysForceClass;
}


// CPhysForce::OnActivate  (line 126, @0x0000000002303240, libserver.so)
void __fastcall CPhysForce::OnActivate(CPhysForce *const this)
{
  ;
}


// CPhysForce::GetDataDescMap  (line 140, @0x00000000022b78e0, libserver.so)
// globals: CPhysForce::m_DataMap
datamap_t *__fastcall CPhysForce::GetDataDescMap(CPhysForce *const this)
{
  return &CPhysForce::m_DataMap;
}


// CPhysForce::AddDatadescMetadataKeys  (line 140, @0x00000000022cbea0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysForce::GetEntityClass(void)
void __fastcall CPhysForce::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysForce::GetEntityClass);
}


// CPhysForce::GetBaseMap  (line 140, @0x00000000022cbec0, libserver.so)
datamap_t *__cdecl CPhysForce::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CPhysForce>  (line 140, @0x00000000022f3200, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GetPhysObjSaveRestoreOps, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, operator new [], stpcpy, __cxa_guard_release, AddDatadescMetadataKeys, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysForce"
// globals: `guard variable for'DataMapInit<CPhysForce>(CPhysForce *)::nameHolder, `guard variable for'DataMapInit<CPhysForce>(CPhysForce *)::dataDesc, GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited, DataMapInit<CPhysForce>(CPhysForce *)::nameHolder, CPhysForce::GetEntityClass(void), CPhysForce::m_DataMap, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysForce>(CPhysForce *a1)
{
  char *v1; // r12
  __int64 m_Size; // rbx
  int v3; // eax
  char **v4; // rax
  PhysInterfaceId_t *p_m_type; // rdx
  PhysInterfaceId_t i; // eax

  if ( `guard variable for'datamap_t * DataMapInit<CPhysForce>(CPhysForce *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysForce>(CPhysForce *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysForce>(CPhysForce *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysForce>(CPhysForce *)::nameHolder.m_pszBase = "CPhysForce";
    DataMapInit<CPhysForce>(CPhysForce *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysForce>(CPhysForce *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysForce>(CPhysForce *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysForce>(CPhysForce *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysForce>(CPhysForce *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysForce>(CPhysForce *)::nameHolder,
      &_dso_handle);
  }
  CPhysForce::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPhysForce>(CPhysForce *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysForce>(CPhysForce *)::dataDesc) != 0 )
  {
    if ( !GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited )
    {
      GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited = 1;
      p_m_type = &g_PhysObjSaveRestoreOps[0].m_type;
      for ( i = PhysInterfaceId_t::PIID_UNKNOWN; i != PhysInterfaceId_t::PIID_NUM_TYPES; ++i )
      {
        *p_m_type = i;
        p_m_type += 4;
      }
    }
    DataMapInit<CPhysForce>(CPhysForce *)::dataDesc[1].pSaveRestoreOps = &g_PhysObjSaveRestoreOps[5];
    v1 = operator new[](DataMapInit<CPhysForce>(CPhysForce *)::nameHolder.m_nLenBase + 9);
    strcpy(stpcpy(v1, DataMapInit<CPhysForce>(CPhysForce *)::nameHolder.m_pszBase), "ForceOff");
    m_Size = DataMapInit<CPhysForce>(CPhysForce *)::nameHolder.m_Names.m_Size;
    v3 = DataMapInit<CPhysForce>(CPhysForce *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CPhysForce>(CPhysForce *)::nameHolder.m_Names.m_Size == DataMapInit<CPhysForce>(CPhysForce *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CPhysForce>(CPhysForce *)::nameHolder.m_Names.m_Memory, 1);
      v3 = DataMapInit<CPhysForce>(CPhysForce *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CPhysForce>(CPhysForce *)::nameHolder.m_Names.m_Size = v3 + 1;
    v4 = &DataMapInit<CPhysForce>(CPhysForce *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v4 != 0 )
      *v4 = v1;
    DataMapInit<CPhysForce>(CPhysForce *)::dataDesc[11].fieldName = v1;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysForce>(CPhysForce *)::dataDesc);
  }
  CPhysForce::m_DataMap.dataNumFields = 11;
  CPhysForce::m_DataMap.dataDesc = &DataMapInit<CPhysForce>(CPhysForce *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysForce::m_DataMap, CPhysForce::GetEntityClass);
  return &CPhysForce::m_DataMap;
}


// CPhysForce::CPhysForce  (line 161, @0x00000000022cbed0, libserver.so)  // inlines: CConstantForceController, CEntityHandle, CHandle, CPointEntity, CUtlSymbolLarge
// calls: CBaseEntity::CBaseEntity
void __fastcall CPhysForce::CPhysForce(CPhysForce *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_nameAttach.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_4075BF0;
  this->m_attachedObject.m_Index = -1;
  this->m_integrator._vptr_IMotionEvent = &off_4075B50;
  this->m_pController = 0;
  this->m_wasRestored = 0;
}


// CPhysForce::~CPhysForce  (line 167, @0x00000000022b8c20, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysForce::~CPhysForce(CPhysForce *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysForce::~CPhysForce  (line 167, @0x00000000022b8c40, libserver.so)  // inlines: ~CPhysForce, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysForce::~CPhysForce(CPhysForce *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysForce::UpdateOnRemove  (line 171, @0x00000000022b9490, libserver.so)
// calls: CBaseEntity::VPhysicsWorld, CBaseEntity::UpdateOnRemove
void __fastcall CPhysForce::UpdateOnRemove(CPhysForce *const this)
{
  IVPhysics2World *v2; // rax

  if ( this->m_pController != 0 )
  {
    v2 = CBaseEntity::VPhysicsWorld(this);
    (*(*v2 + 88LL))(v2, this->m_pController);
    this->m_pController = 0;
  }
  CBaseEntity::UpdateOnRemove(this);
}


// CPhysForce::Spawn  (line 183, @0x00000000022b8eb0, libserver.so)  // inlines: Init
// calls: CPointEntity::Spawn
void __fastcall CPhysForce::Spawn(CPhysForce *const this, const CEntityKeyValues *pKeyValues)
{
  CPointEntity::Spawn(this, pKeyValues);
  this->m_integrator.m_controlType = (this->m_spawnflags.m_Value & 8) == 0
                                   ? IMotionEvent::simresult_e::SIM_GLOBAL_ACCELERATION
                                   : IMotionEvent::simresult_e::SIM_LOCAL_ACCELERATION;
}


// CPhysForce::OnRestore  (line 197, @0x00000000022b8f00, libserver.so)
// calls: CBaseEntity::OnRestore
void __fastcall CPhysForce::OnRestore(CPhysForce *const this)
{
  IPhysicsMotionController *m_pController; // rdi

  CBaseEntity::OnRestore(this);
  m_pController = this->m_pController;
  if ( m_pController != 0 )
    (*(m_pController->_vptr_IPhysicsMotionController + 2))(m_pController, &this->m_integrator);
  this->m_wasRestored = 1;
}


// CPhysForce::Activate  (line 209, @0x00000000022cc150, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator=, operator==<CBaseEntity>
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, CPhysForce::ForceOn
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysForce::Activate(CPhysForce *const this, ActivateType_t activateType)
{
  IPhysicsMotionController *m_pController; // rdi
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  CBaseEntity::Activate(this, activateType);
  m_pController = this->m_pController;
  if ( m_pController != 0 )
    (*(m_pController->_vptr_IPhysicsMotionController + 9))(m_pController);
  if ( !this->m_wasRestored )
  {
    m_Index = this->m_attachedObject.m_Index;
    if ( m_Index + 2 <= 1
      || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_attachedObject.m_Index) >> 9) & 0x3F]) == 0
      || (v6 = &v5[this->m_attachedObject.m_Index & 0x1FF]) == 0
      || m_Index != v6->m_EHandle.m_Index
      || v6->m_pInstance == 0 )
    {
      iszName.u.m_Id = this->m_nameAttach.u.m_Id;
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
      if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
      {
        v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v10 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_attachedObject.m_Index) = v10 | this->m_attachedObject.m_Index & 0x8000;
        this->m_attachedObject.m_Index = (v9 << 15) | this->m_attachedObject.m_Index & 0x7FFF;
      }
      else
      {
        this->m_attachedObject.m_Index = -1;
      }
    }
    (*(this->_vptr_IHandleEntity + 208))(this);
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
      CPhysForce::ForceOn(this);
  }
}


// CPhysForce::InputActivate  (line 237, @0x00000000022cc140, libserver.so)
// calls: CPhysForce::ForceOn
void __fastcall CPhysForce::InputActivate(CPhysForce *const this, inputdata_t *const inputdata)
{
  CPhysForce::ForceOn(this);
}


// CPhysForce::InputDeactivate  (line 245, @0x00000000022c44a0, libserver.so)
// calls: CPhysForce::ForceOff
void __fastcall CPhysForce::InputDeactivate(CPhysForce *const this, inputdata_t *const inputdata)
{
  CPhysForce::ForceOff(this);
}


// CPhysForce::InputForceScale  (line 254, @0x00000000022cc360, libserver.so)  // inlines: Float, operator float
// calls: CPhysForce::ScaleForce
void __fastcall CPhysForce::InputForceScale(CPhysForce *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
  {
    m_float64 = inputdata->value.m_float64;
    CPhysForce::ScaleForce(this, m_float64, v2);
  }
  else
  {
    CPhysForce::ScaleForce(this, inputdata->value.m_float, v2);
  }
}


// CPhysForce::ForceOn  (line 263, @0x00000000022cc090, libserver.so)  // inlines: curtime
// calls: CPhysForce::ActivateForce, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet
// callers: CPhysForce::InputActivate, CPhysForce::Activate, CPhysForce::ScaleForce
// globals: CPhysForce::ForceOff(void)
void __fastcall CPhysForce::ForceOn(CPhysForce *const this)
{
  double v2; // xmm0_8
  double v3; // xmm1_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( this->m_pController == 0 )
  {
    CPhysForce::ActivateForce(this);
    *&v2 = LODWORD(this->m_forceTime);
    v3 = 0.0;
    if ( *&v2 != 0.0 )
    {
      v4 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
          {
            (m_pfnWarningFunc)(1, *&v2, 0.0);
            *&v2 = LODWORD(this->m_forceTime);
          }
        }
        *&v3 = LODWORD(v4->m_flCurrentTime);
      }
      *&v2 = *&v2 + *&v3;
      CBaseEntity::SetNextThink(this, v2, v3, 0);
      CBaseEntity::ThinkSet(this, CPhysForce::ForceOff, 0.0, 0, 0);
    }
  }
}


// CPhysForce::ActivateForce  (line 277, @0x00000000022cbf30, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, SetConstantForce, operator bool, operator=
// calls: CBaseEntity::VPhysicsGetObject, CBaseEntity::VPhysicsWorld
// callers: CPhysForce::ForceOn
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysForce::ActivateForce(CPhysForce *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  IPhysicsObject *Object; // r12
  vec_t x; // xmm5_4
  vec_t y; // xmm4_4
  vec_t z; // xmm3_4
  vec_t v9; // xmm2_4
  vec_t v10; // xmm1_4
  vec_t v11; // xmm0_4
  IVPhysics2World *v12; // rax
  IPhysicsMotionController *v13; // rax
  Vector linear; // [rsp+0h] [rbp-30h] BYREF
  AngularImpulse angular; // [rsp+10h] [rbp-20h] BYREF

  m_Index = this->m_attachedObject.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_attachedObject.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_attachedObject.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        Object = CBaseEntity::VPhysicsGetObject(v4->m_pInstance);
        if ( Object != 0 )
        {
          (*(this->_vptr_IHandleEntity + 207))(this, Object, &linear, &angular);
          x = linear.x;
          y = linear.y;
          z = linear.z;
          this->m_integrator.m_linear.x = linear.x;
          v9 = angular.x;
          this->m_integrator.m_linear.y = y;
          v10 = angular.y;
          this->m_integrator.m_linear.z = z;
          v11 = angular.z;
          this->m_integrator.m_angular.x = v9;
          this->m_integrator.m_angular.y = v10;
          this->m_integrator.m_angular.z = v11;
          this->m_integrator.m_linearSave.x = x;
          this->m_integrator.m_linearSave.y = y;
          this->m_integrator.m_linearSave.z = z;
          this->m_integrator.m_angularSave.x = v9;
          this->m_integrator.m_angularSave.y = v10;
          this->m_integrator.m_angularSave.z = v11;
          v12 = CBaseEntity::VPhysicsWorld(this);
          v13 = (*(*v12 + 80LL))(v12, &this->m_integrator);
          this->m_pController = v13;
          (*(v13->_vptr_IPhysicsMotionController + 4))(v13, Object, 1);
          (*(*Object + 1592LL))(Object);
        }
      }
    }
  }
}


// CPhysForce::ForceOff  (line 301, @0x00000000022c43c0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, operator bool
// calls: CBaseEntity::VPhysicsWorld, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseEntity::VPhysicsGetObject
// callers: CPhysForce::InputDeactivate
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysForce::ForceOff(CPhysForce *const this)
{
  IVPhysics2World *v2; // rax
  double v3; // xmm1_8
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  IPhysicsObject *Object; // rax

  if ( this->m_pController != 0 )
  {
    v2 = CBaseEntity::VPhysicsWorld(this);
    (*(*v2 + 88LL))(v2, this->m_pController);
    this->m_pController = 0;
    CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v3, 0);
    m_Index = this->m_attachedObject.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_attachedObject.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[this->m_attachedObject.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          Object = CBaseEntity::VPhysicsGetObject(v6->m_pInstance);
          if ( Object != 0 )
            (*(*Object + 1592LL))(Object);
        }
      }
    }
  }
}


// CPhysForce::ScaleForce  (line 323, @0x00000000022cc2a0, libserver.so)  // inlines: ScaleConstantForce, VectorMultiply, operator*, operator=
// calls: CPhysForce::ForceOn
// callers: CPhysForce::InputForceScale
void __fastcall CPhysForce::ScaleForce(CPhysForce *const this, float a2, float scale)
{
  IPhysicsMotionController *m_pController; // rdi
  vec_t v5; // xmm1_4
  vec_t v6; // xmm3_4
  float y; // xmm2_4
  float z; // xmm1_4
  vec_t v9; // xmm2_4
  vec_t v10; // xmm1_4
  vec_t v11; // xmm0_4
  float scalea; // [rsp+Ch] [rbp-14h]

  m_pController = this->m_pController;
  if ( m_pController == 0 )
  {
    scalea = a2;
    CPhysForce::ForceOn(this);
    m_pController = this->m_pController;
    a2 = scalea;
  }
  v5 = this->m_integrator.m_linearSave.z * a2;
  v6 = this->m_integrator.m_linearSave.x * a2;
  this->m_integrator.m_linear.y = this->m_integrator.m_linearSave.y * a2;
  y = this->m_integrator.m_angularSave.y;
  this->m_integrator.m_linear.z = v5;
  z = this->m_integrator.m_angularSave.z;
  v9 = y * a2;
  this->m_integrator.m_linear.x = v6;
  v10 = z * a2;
  v11 = a2 * this->m_integrator.m_angularSave.x;
  this->m_integrator.m_angular.y = v9;
  this->m_integrator.m_angular.z = v10;
  this->m_integrator.m_angular.x = v11;
  (*(m_pController->_vptr_IPhysicsMotionController + 9))(m_pController);
}


// CPhysThruster::~CPhysThruster  (line 337, @0x0000000002306670, libserver.so)  // inlines: ~CPhysForce, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysThruster::~CPhysThruster(CPhysThruster *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysThruster::~CPhysThruster  (line 337, @0x0000000002306690, libserver.so)  // inlines: ~CPhysForce, ~CPhysThruster, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysThruster::~CPhysThruster(CPhysThruster *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysThruster::GetEntityClass  (line 339, @0x0000000002303250, libserver.so)
CEntityClass *__cdecl CPhysThruster::GetEntityClass()
{
  return g_pEntityCPhysThrusterClass;
}


// CPhysThruster::Schema_DynamicBinding  (line 339, @0x0000000002303260, libserver.so)
// globals: CPhysThruster::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysThruster::Schema_DynamicBinding(const CPhysThruster *const this)
{
  return CPhysThruster::s_pSchemaBinding;
}


// CPhysThruster::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 339, @0x0000000002303270, libserver.so)
// globals: CPhysThruster::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysThruster::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysThruster::CEntityInstanceEntityClass *const this)
{
  return CPhysThruster::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysThruster::CEntityInstanceEntityClass::DestructInstance  (line 339, @0x0000000002303280, libserver.so)  // inlines: Destruct<CPhysThruster>
void __fastcall CPhysThruster::CEntityInstanceEntityClass::DestructInstance(
        CPhysThruster::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysThruster::CEntityInstanceEntityClass::FreeInstance  (line 339, @0x00000000023032a0, libserver.so)
void __fastcall CPhysThruster::CEntityInstanceEntityClass::FreeInstance(
        CPhysThruster::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysThruster::CEntityInstanceEntityClass::CanAllocate  (line 339, @0x00000000023032c0, libserver.so)
bool __fastcall CPhysThruster::CEntityInstanceEntityClass::CanAllocate(
        const CPhysThruster::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysThruster::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 339, @0x00000000023032d0, libserver.so)
// globals: CPhysThruster::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysThruster::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysThruster::CEntityInstanceEntityClass *const this)
{
  return CPhysThruster::s_pSchemaBinding;
}


// CPhysThruster::CEntityInstanceEntityClass::AllocateInstance  (line 339, @0x0000000002305960, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysThruster::CEntityInstanceEntityClass::AllocateInstance(
        CPhysThruster::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 888);
  memset(v1, 0, 0x378u);
  return v1;
}


// CPhysThruster::CEntityInstanceEntityClass::ConstructInstance  (line 339, @0x00000000023060a0, libserver.so)  // inlines: CConstantForceController, CEntityHandle, CHandle, CPhysForce, CPhysThruster, CPointEntity, CUtlSymbolLarge, Construct<CPhysThruster>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPhysThruster::CEntityInstanceEntityClass::ConstructInstance(
        CPhysThruster::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = 0;
    *(p + 101) = &off_4075B50;
    *(p + 200) = -1;
    *(p + 97) = 0;
    *(p + 804) = 0;
    *p = &off_4076310;
  }
  return p;
}


// CPhysThruster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 339, @0x0000000002308fe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysThruster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysThruster::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPhysThruster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 339, @0x0000000002309000, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysThruster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysThruster::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysThruster::GetEntityClassInternal  (line 339, @0x0000000002316fe0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPhysForce::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "phys_thruster", "CPhysThruster"
// globals: `guard variable for'CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass, CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysThruster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysThruster::GetEntityClassInfo(void)::g_EntityCPhysThrusterClassInfo, CPhysThruster::GetEntityClassInfo(void)::g_EntityCPhysThrusterClassInfo
CEntityClass *__cdecl CPhysThruster::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass) != 0 )
  {
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_designerName.u.m_Id = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass._vptr_CEntityClass = off_3F79390;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_ComponentOffsets.m_Size = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_AllHelpers.m_Size = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_classInputs.m_Size = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_classOutputs.m_Size = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_requiredEHandle.m_Index = -1;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_hNetworkSerializer = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_pBaseClassInfo = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_pClassInfo = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_flags = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_nAllHelpersFlags = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_pScriptClassDesc = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_pInputs = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_nInputCount = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_pOutputs = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_nOutputCount = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_pGameClass = 0;
    CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass._vptr_CEntityClass = off_4076290;
    __cxa_guard_release(&`guard variable for'CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass);
    __cxa_atexit(
      CPhysThruster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysThrusterClass != 0 )
    return &CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass;
  if ( `guard variable for'CPhysThruster::GetEntityClassInfo(void)::g_EntityCPhysThrusterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysThruster::GetEntityClassInfo(void)::g_EntityCPhysThrusterClassInfo) != 0 )
  {
    EntityClassInfo = CPhysForce::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysThruster::GetEntityClassInfo(void)::g_EntityCPhysThrusterClassInfo,
      "CPhysThruster",
      "phys_thruster",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysThruster::GetEntityClassInfo(void)::g_EntityCPhysThrusterClassInfo);
  }
  CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_pClassInfo = &CPhysThruster::GetEntityClassInfo(void)::g_EntityCPhysThrusterClassInfo;
  CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_pBaseClassInfo = CPhysThruster::GetEntityClassInfo(void)::g_EntityCPhysThrusterClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysThrusterClass = &CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass;
  CPhysThruster::GetEntityClassInfo(void)::g_EntityCPhysThrusterClassInfo.m_pClass = &CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass;
  CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysThrusterClass->m_pComponentOverrides = 0;
  return &CPhysThruster::GetEntityClassInternal(void)::g_EntityCPhysThrusterClass;
}


// CPhysThruster::GetDataDescMap  (line 350, @0x00000000022b78f0, libserver.so)
// globals: CPhysThruster::m_DataMap
datamap_t *__fastcall CPhysThruster::GetDataDescMap(CPhysThruster *const this)
{
  return &CPhysThruster::m_DataMap;
}


// CPhysThruster::AddDatadescMetadataKeys  (line 350, @0x00000000022cc390, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysThruster::GetEntityClass(void)
void __fastcall CPhysThruster::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysThruster::GetEntityClass);
}


// CPhysThruster::GetBaseMap  (line 350, @0x00000000022cc3b0, libserver.so)
// globals: CPhysForce::m_DataMap
datamap_t *__cdecl CPhysThruster::GetBaseMap()
{
  return &CPhysForce::m_DataMap;
}


// DataMapInit<CPhysThruster>  (line 350, @0x00000000022cc3c0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysThruster"
// globals: `guard variable for'DataMapInit<CPhysThruster>(CPhysThruster *)::nameHolder, CPhysForce::m_DataMap, CPhysThruster::GetEntityClass(void), CPhysThruster::m_DataMap, DataMapInit<CPhysThruster>(CPhysThruster *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysThruster>(CPhysThruster *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPhysThruster>(CPhysThruster *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysThruster>(CPhysThruster *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysThruster>(CPhysThruster *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysThruster>(CPhysThruster *)::nameHolder.m_pszBase = "CPhysThruster";
    DataMapInit<CPhysThruster>(CPhysThruster *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysThruster>(CPhysThruster *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysThruster>(CPhysThruster *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysThruster>(CPhysThruster *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysThruster>(CPhysThruster *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysThruster>(CPhysThruster *)::nameHolder,
      &_dso_handle);
  }
  CPhysThruster::m_DataMap.dataNumFields = 1;
  CPhysThruster::m_DataMap.baseMap = &CPhysForce::m_DataMap;
  CPhysThruster::m_DataMap.dataDesc = &DataMapInit<CPhysThruster>(CPhysThruster *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysThruster::m_DataMap, CPhysThruster::GetEntityClass);
  return &CPhysThruster::m_DataMap;
}


// CPhysThruster::OnActivate  (line 355, @0x00000000022c1d70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Init, IsValid, LookupEntity, MatrixGetColumn, operator CEntityInstance*, operator!=<CBaseEntity>, operator=
// calls: CBaseEntity::EntityToWorldTransform, MatrixInvert, ConcatTransforms, MatrixAngles, CBaseEntity::SetLocalAngles
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysThruster::OnActivate(CPhysThruster *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  matrix3x4_t *v5; // rax
  matrix3x4_t *v6; // rax
  unsigned int m_Value; // eax
  QAngle angles; // [rsp+0h] [rbp-90h] BYREF
  matrix3x4_t worldToAttached; // [rsp+10h] [rbp-80h] BYREF
  matrix3x4_t thrusterToAttached; // [rsp+40h] [rbp-50h] BYREF

  m_Index = this->m_attachedObject.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_attachedObject.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_attachedObject.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
      {
        v5 = CBaseEntity::EntityToWorldTransform(v4->m_pInstance);
        MatrixInvert(v5, &worldToAttached);
        v6 = CBaseEntity::EntityToWorldTransform(this);
        ConcatTransforms(&worldToAttached, v6, &thrusterToAttached);
        m_Value = this->m_spawnflags.m_Value;
        this->m_localOrigin.x = thrusterToAttached.m_flMatVal[0][3];
        this->m_localOrigin.y = thrusterToAttached.m_flMatVal[1][3];
        this->m_localOrigin.z = thrusterToAttached.m_flMatVal[2][3];
        if ( (m_Value & 8) != 0 )
        {
          MatrixAngles(&thrusterToAttached, &angles);
          CBaseEntity::SetLocalAngles(this, &angles);
          m_Value = this->m_spawnflags.m_Value;
        }
        if ( (m_Value & 0x20) != 0 )
        {
          this->m_localOrigin.x = 0.0;
          this->m_localOrigin.y = 0.0;
          this->m_localOrigin.z = 0.0;
        }
      }
    }
  }
}


// CalculateVelocityOffsetLocal  (line 380, @0x00000000022cc490, libserver.so)
// callers: CPhysThruster::SetupForces
void __fastcall CalculateVelocityOffsetLocal(
        IPhysicsObject *pPhys,
        const Vector *const forceLocal,
        const Vector *const positionLocal,
        Vector *const outVelLocal,
        AngularImpulse *const outAngVelLocal)
{
  Vector posWorld; // [rsp+10h] [rbp-70h] BYREF
  Vector forceWorld; // [rsp+20h] [rbp-60h] BYREF
  Vector velWorld; // [rsp+30h] [rbp-50h] BYREF
  Vector angVelWorld; // [rsp+40h] [rbp-40h] BYREF

  (*(*pPhys + 1744LL))(pPhys, &posWorld, positionLocal);
  (*(*pPhys + 1760LL))(pPhys, &forceWorld, forceLocal);
  (*(*pPhys + 1808LL))(pPhys, &forceWorld, &posWorld, &velWorld, &angVelWorld);
  (*(*pPhys + 1768LL))(pPhys, outVelLocal, &velWorld);
  (*(*pPhys + 1768LL))(pPhys, outAngVelLocal, &angVelWorld);
}


// CPhysThruster::SetupForces  (line 391, @0x00000000022cc530, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Init, IsValid, LookupEntity, VectorTransform, operator CEntityInstance*, operator*=, operator->
// calls: CBaseEntity::GetLocalAngles, AngleVectors, CalculateVelocityOffsetLocal, CBaseEntity::EntityToWorldTransform, VectorTransform
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysThruster::SetupForces(
        CPhysThruster *const this,
        IPhysicsObject *pPhys,
        Vector *const linear,
        AngularImpulse *const angular)
{
  const QAngle *LocalAngles; // rax
  float v9; // xmm0_4
  bool v10; // zf
  unsigned int m_Value; // eax
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  matrix3x4_t *v16; // rax
  Vector thrustVector; // [rsp+10h] [rbp-50h] BYREF
  Vector position; // [rsp+20h] [rbp-40h] BYREF

  LocalAngles = CBaseEntity::GetLocalAngles(this);
  AngleVectors(LocalAngles, &thrustVector, 0, 0);
  v9 = 1000.0 * this->m_force;
  v10 = (this->m_spawnflags.m_Value & 8) == 0;
  thrustVector.x = thrustVector.x * v9;
  thrustVector.y = thrustVector.y * v9;
  thrustVector.z = v9 * thrustVector.z;
  if ( v10 )
  {
    m_Index = this->m_attachedObject.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_attachedObject.m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[this->m_attachedObject.m_Index & 0x1FF];
        if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
          m_pInstance = v15->m_pInstance;
      }
    }
    v16 = CBaseEntity::EntityToWorldTransform(m_pInstance);
    VectorTransform(&this->m_localOrigin.x, v16, &position.x);
    (*(*pPhys + 1808LL))(pPhys, &thrustVector, &position, linear, angular);
  }
  else
  {
    CalculateVelocityOffsetLocal(pPhys, &thrustVector, &this->m_localOrigin, linear, angular);
  }
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 2) == 0 )
  {
    linear->x = 0.0;
    linear->y = 0.0;
    linear->z = 0.0;
    m_Value = this->m_spawnflags.m_Value;
  }
  if ( (m_Value & 4) == 0 )
  {
    angular->x = 0.0;
    angular->y = 0.0;
    angular->z = 0.0;
  }
}


// CPhysTorque::~CPhysTorque  (line 432, @0x00000000023066c0, libserver.so)  // inlines: ~CPhysForce, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysTorque::~CPhysTorque(CPhysTorque *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysTorque::~CPhysTorque  (line 432, @0x00000000023066e0, libserver.so)  // inlines: ~CPhysForce, ~CPhysTorque, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysTorque::~CPhysTorque(CPhysTorque *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysTorque::GetEntityClass  (line 434, @0x00000000023032e0, libserver.so)
CEntityClass *__cdecl CPhysTorque::GetEntityClass()
{
  return g_pEntityCPhysTorqueClass;
}


// CPhysTorque::Schema_DynamicBinding  (line 434, @0x00000000023032f0, libserver.so)
// globals: CPhysTorque::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysTorque::Schema_DynamicBinding(const CPhysTorque *const this)
{
  return CPhysTorque::s_pSchemaBinding;
}


// CPhysTorque::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 434, @0x0000000002303300, libserver.so)
// globals: CPhysTorque::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysTorque::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysTorque::CEntityInstanceEntityClass *const this)
{
  return CPhysTorque::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysTorque::CEntityInstanceEntityClass::DestructInstance  (line 434, @0x0000000002303310, libserver.so)  // inlines: Destruct<CPhysTorque>
void __fastcall CPhysTorque::CEntityInstanceEntityClass::DestructInstance(
        CPhysTorque::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysTorque::CEntityInstanceEntityClass::FreeInstance  (line 434, @0x0000000002303330, libserver.so)
void __fastcall CPhysTorque::CEntityInstanceEntityClass::FreeInstance(
        CPhysTorque::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysTorque::CEntityInstanceEntityClass::CanAllocate  (line 434, @0x0000000002303350, libserver.so)
bool __fastcall CPhysTorque::CEntityInstanceEntityClass::CanAllocate(
        const CPhysTorque::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysTorque::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 434, @0x0000000002303360, libserver.so)
// globals: CPhysTorque::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysTorque::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysTorque::CEntityInstanceEntityClass *const this)
{
  return CPhysTorque::s_pSchemaBinding;
}


// CPhysTorque::CEntityInstanceEntityClass::AllocateInstance  (line 434, @0x00000000023059a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysTorque::CEntityInstanceEntityClass::AllocateInstance(
        CPhysTorque::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 888);
  memset(v1, 0, 0x378u);
  return v1;
}


// CPhysTorque::CEntityInstanceEntityClass::ConstructInstance  (line 434, @0x0000000002306110, libserver.so)  // inlines: CConstantForceController, CEntityHandle, CHandle, CPhysForce, CPhysTorque, CPointEntity, CUtlSymbolLarge, Construct<CPhysTorque>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPhysTorque::CEntityInstanceEntityClass::ConstructInstance(
        CPhysTorque::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = 0;
    *(p + 101) = &off_4075B50;
    *(p + 200) = -1;
    *(p + 97) = 0;
    *(p + 804) = 0;
    *p = &off_4076A30;
  }
  return p;
}


// CPhysTorque::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 434, @0x0000000002309030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysTorque::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysTorque::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPhysTorque::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 434, @0x0000000002309050, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysTorque::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysTorque::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysTorque::GetEntityClassInternal  (line 434, @0x0000000002315c00, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPhysForce::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "phys_torque", "CPhysTorque"
// globals: `guard variable for'CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass, CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysTorque::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysTorque::GetEntityClassInfo(void)::g_EntityCPhysTorqueClassInfo, CPhysTorque::GetEntityClassInfo(void)::g_EntityCPhysTorqueClassInfo
CEntityClass *__cdecl CPhysTorque::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass) != 0 )
  {
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_designerName.u.m_Id = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass._vptr_CEntityClass = off_3F79390;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_ComponentOffsets.m_Size = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_AllHelpers.m_Size = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_classInputs.m_Size = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_classOutputs.m_Size = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_requiredEHandle.m_Index = -1;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_hNetworkSerializer = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_pBaseClassInfo = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_pClassInfo = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_flags = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_nAllHelpersFlags = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_pScriptClassDesc = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_pInputs = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_nInputCount = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_pOutputs = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_nOutputCount = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_pGameClass = 0;
    CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass._vptr_CEntityClass = off_40769B0;
    __cxa_guard_release(&`guard variable for'CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass);
    __cxa_atexit(
      CPhysTorque::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysTorqueClass != 0 )
    return &CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass;
  if ( `guard variable for'CPhysTorque::GetEntityClassInfo(void)::g_EntityCPhysTorqueClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysTorque::GetEntityClassInfo(void)::g_EntityCPhysTorqueClassInfo) != 0 )
  {
    EntityClassInfo = CPhysForce::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysTorque::GetEntityClassInfo(void)::g_EntityCPhysTorqueClassInfo,
      "CPhysTorque",
      "phys_torque",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysTorque::GetEntityClassInfo(void)::g_EntityCPhysTorqueClassInfo);
  }
  CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_pClassInfo = &CPhysTorque::GetEntityClassInfo(void)::g_EntityCPhysTorqueClassInfo;
  CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_pBaseClassInfo = CPhysTorque::GetEntityClassInfo(void)::g_EntityCPhysTorqueClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysTorqueClass = &CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass;
  CPhysTorque::GetEntityClassInfo(void)::g_EntityCPhysTorqueClassInfo.m_pClass = &CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass;
  CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysTorqueClass->m_pComponentOverrides = 0;
  return &CPhysTorque::GetEntityClassInternal(void)::g_EntityCPhysTorqueClass;
}


// CPhysTorque::GetDataDescMap  (line 443, @0x00000000022b7900, libserver.so)
// globals: CPhysTorque::m_DataMap
datamap_t *__fastcall CPhysTorque::GetDataDescMap(CPhysTorque *const this)
{
  return &CPhysTorque::m_DataMap;
}


// CPhysTorque::AddDatadescMetadataKeys  (line 443, @0x00000000022cc6b0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysTorque::GetEntityClass(void)
void __fastcall CPhysTorque::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysTorque::GetEntityClass);
}


// CPhysTorque::GetBaseMap  (line 443, @0x00000000022cc6d0, libserver.so)
// globals: CPhysForce::m_DataMap
datamap_t *__cdecl CPhysTorque::GetBaseMap()
{
  return &CPhysForce::m_DataMap;
}


// DataMapInit<CPhysTorque>  (line 443, @0x00000000022cc6e0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysTorque"
// globals: `guard variable for'DataMapInit<CPhysTorque>(CPhysTorque *)::nameHolder, CPhysForce::m_DataMap, CPhysTorque::GetEntityClass(void), CPhysTorque::m_DataMap, DataMapInit<CPhysTorque>(CPhysTorque *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysTorque>(CPhysTorque *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPhysTorque>(CPhysTorque *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysTorque>(CPhysTorque *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysTorque>(CPhysTorque *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysTorque>(CPhysTorque *)::nameHolder.m_pszBase = "CPhysTorque";
    DataMapInit<CPhysTorque>(CPhysTorque *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysTorque>(CPhysTorque *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysTorque>(CPhysTorque *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysTorque>(CPhysTorque *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysTorque>(CPhysTorque *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysTorque>(CPhysTorque *)::nameHolder,
      &_dso_handle);
  }
  CPhysTorque::m_DataMap.dataNumFields = 1;
  CPhysTorque::m_DataMap.baseMap = &CPhysForce::m_DataMap;
  CPhysTorque::m_DataMap.dataDesc = &DataMapInit<CPhysTorque>(CPhysTorque *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysTorque::m_DataMap, CPhysTorque::GetEntityClass);
  return &CPhysTorque::m_DataMap;
}


// CPhysTorque::Spawn  (line 448, @0x00000000022b9d70, libserver.so)  // inlines: Init, Spawn, operator-=
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, UTIL_SnapDirectionToAxis, CPointEntity::Spawn
void __fastcall CPhysTorque::Spawn(CPhysTorque *const this, const CEntityKeyValues *pKeyValues)
{
  Vector *p_m_axis; // r13
  const Vector *AbsOrigin; // rax
  float v6; // xmm1_4

  p_m_axis = &this->m_axis;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  this->m_axis.x = this->m_axis.x - AbsOrigin->x;
  this->m_axis.y = this->m_axis.y - AbsOrigin->y;
  this->m_axis.z = this->m_axis.z - AbsOrigin->z;
  VectorNormalize(p_m_axis);
  UTIL_SnapDirectionToAxis(p_m_axis, v6);
  CPointEntity::Spawn(this, pKeyValues);
  this->m_integrator.m_controlType = (this->m_spawnflags.m_Value & 8) == 0
                                   ? IMotionEvent::simresult_e::SIM_GLOBAL_ACCELERATION
                                   : IMotionEvent::simresult_e::SIM_LOCAL_ACCELERATION;
}


// CPhysTorque::SetupForces  (line 457, @0x00000000022b9e20, libserver.so)  // inlines: Init, VectorIRotate, VectorMultiply, operator*, operator=
// calls: VectorIRotate
void __fastcall CPhysTorque::SetupForces(
        CPhysTorque *const this,
        IPhysicsObject *pPhys,
        Vector *const linear,
        AngularImpulse *const angular)
{
  float m_force; // xmm0_4
  vec_t v7; // xmm2_4
  vec_t v8; // xmm1_4
  vec_t v9; // xmm0_4
  Vector axis_ls; // [rsp+0h] [rbp-68h] BYREF
  matrix3x4_t matrix; // [rsp+10h] [rbp-58h] BYREF

  linear->x = 0.0;
  linear->y = 0.0;
  linear->z = 0.0;
  (*(*pPhys + 1680LL))(pPhys, &matrix);
  VectorIRotate(&this->m_axis.x, &matrix, &axis_ls.x);
  m_force = this->m_force;
  v7 = axis_ls.y * m_force;
  v8 = axis_ls.z * m_force;
  v9 = m_force * axis_ls.x;
  angular->y = v7;
  angular->z = v8;
  angular->x = v9;
}


// CMotorController::Schema_DynamicBinding  (line 488, @0x0000000002303370, libserver.so)
// globals: CMotorController::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMotorController::Schema_DynamicBinding(const CMotorController *const this)
{
  return CMotorController::s_pSchemaBinding;
}


// CMotorController::AddDatadescMetadataKeys  (line 497, @0x00000000022cc7b0, libserver.so)
void __fastcall CMotorController::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CMotorController::GetBaseMap  (line 497, @0x00000000022cc7c0, libserver.so)
datamap_t *__cdecl CMotorController::GetBaseMap()
{
  return 0;
}


// DataMapInit<CMotorController>  (line 497, @0x00000000022cc7d0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CMotorController"
// globals: `guard variable for'DataMapInit<CMotorController>(CMotorController *)::nameHolder, CMotorController::m_DataMap, DataMapInit<CMotorController>(CMotorController *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CMotorController>(CMotorController *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CMotorController>(CMotorController *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMotorController>(CMotorController *)::nameHolder) != 0 )
  {
    DataMapInit<CMotorController>(CMotorController *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CMotorController>(CMotorController *)::nameHolder.m_pszBase = "CMotorController";
    DataMapInit<CMotorController>(CMotorController *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CMotorController>(CMotorController *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CMotorController>(CMotorController *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CMotorController>(CMotorController *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMotorController>(CMotorController *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CMotorController>(CMotorController *)::nameHolder,
      &_dso_handle);
  }
  CMotorController::m_DataMap.baseMap = 0;
  CMotorController::m_DataMap.dataDesc = &DataMapInit<CMotorController>(CMotorController *)::dataDesc[1];
  CMotorController::m_DataMap.dataNumFields = 4;
  return &CMotorController::m_DataMap;
}


// CPhysMotor::GetEntityClass  (line 517, @0x0000000002303380, libserver.so)
CEntityClass *__cdecl CPhysMotor::GetEntityClass()
{
  return g_pEntityCPhysMotorClass;
}


// CPhysMotor::Schema_DynamicBinding  (line 517, @0x0000000002303390, libserver.so)
// globals: CPhysMotor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysMotor::Schema_DynamicBinding(const CPhysMotor *const this)
{
  return CPhysMotor::s_pSchemaBinding;
}


// CPhysMotor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 517, @0x00000000023033a0, libserver.so)
// globals: CPhysMotor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysMotor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysMotor::CEntityInstanceEntityClass *const this)
{
  return CPhysMotor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysMotor::CEntityInstanceEntityClass::DestructInstance  (line 517, @0x00000000023033b0, libserver.so)  // inlines: Destruct<CPhysMotor>
void __fastcall CPhysMotor::CEntityInstanceEntityClass::DestructInstance(
        CPhysMotor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysMotor::CEntityInstanceEntityClass::FreeInstance  (line 517, @0x00000000023033d0, libserver.so)
void __fastcall CPhysMotor::CEntityInstanceEntityClass::FreeInstance(
        CPhysMotor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysMotor::CEntityInstanceEntityClass::CanAllocate  (line 517, @0x00000000023033f0, libserver.so)
bool __fastcall CPhysMotor::CEntityInstanceEntityClass::CanAllocate(
        const CPhysMotor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysMotor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 517, @0x0000000002303400, libserver.so)
// globals: CPhysMotor::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysMotor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysMotor::CEntityInstanceEntityClass *const this)
{
  return CPhysMotor::s_pSchemaBinding;
}


// CPhysMotor::CEntityInstanceEntityClass::AllocateInstance  (line 517, @0x00000000023059e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysMotor::CEntityInstanceEntityClass::AllocateInstance(
        CPhysMotor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 856);
  memset(v1, 0, 0x358u);
  return v1;
}


// CPhysMotor::CEntityInstanceEntityClass::ConstructInstance  (line 517, @0x0000000002306180, libserver.so)  // inlines: CEntityHandle, CHandle, CLogicalEntity, CMotorController, CPhysMotor, CServerOnlyEntity, CUtlSymbolLarge, Construct<CPhysMotor>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPhysMotor::CEntityInstanceEntityClass::ConstructInstance(
        CPhysMotor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = 0;
    *p = &off_4077170;
    *(p + 196) = -1;
    *(p + 103) = &off_40770D0;
  }
  return p;
}


// CPhysMotor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 517, @0x0000000002308ae0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysMotor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysMotor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPhysMotor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 517, @0x0000000002308b00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysMotor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysMotor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysMotor::GetEntityClassInternal  (line 517, @0x0000000002317d20, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "phys_motor", "CPhysMotor"
// globals: `guard variable for'CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass, CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysMotor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysMotor::GetEntityClassInfo(void)::g_EntityCPhysMotorClassInfo, CPhysMotor::GetEntityClassInfo(void)::g_EntityCPhysMotorClassInfo
CEntityClass *__cdecl CPhysMotor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass) != 0 )
  {
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_designerName.u.m_Id = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass._vptr_CEntityClass = off_3F79390;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_ComponentOffsets.m_Size = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_AllHelpers.m_Size = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_classInputs.m_Size = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_classOutputs.m_Size = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_requiredEHandle.m_Index = -1;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_hNetworkSerializer = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_pBaseClassInfo = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_pClassInfo = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_flags = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_nAllHelpersFlags = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_pScriptClassDesc = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_pInputs = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_nInputCount = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_pOutputs = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_nOutputCount = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_pGameClass = 0;
    CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass._vptr_CEntityClass = off_40770F0;
    __cxa_guard_release(&`guard variable for'CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass);
    __cxa_atexit(
      CPhysMotor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysMotorClass != 0 )
    return &CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass;
  if ( `guard variable for'CPhysMotor::GetEntityClassInfo(void)::g_EntityCPhysMotorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysMotor::GetEntityClassInfo(void)::g_EntityCPhysMotorClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysMotor::GetEntityClassInfo(void)::g_EntityCPhysMotorClassInfo,
      "CPhysMotor",
      "phys_motor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysMotor::GetEntityClassInfo(void)::g_EntityCPhysMotorClassInfo);
  }
  CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_pClassInfo = &CPhysMotor::GetEntityClassInfo(void)::g_EntityCPhysMotorClassInfo;
  CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_pBaseClassInfo = CPhysMotor::GetEntityClassInfo(void)::g_EntityCPhysMotorClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysMotorClass = &CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass;
  CPhysMotor::GetEntityClassInfo(void)::g_EntityCPhysMotorClassInfo.m_pClass = &CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass;
  CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysMotorClass->m_pComponentOverrides = 0;
  return &CPhysMotor::GetEntityClassInternal(void)::g_EntityCPhysMotorClass;
}


// CPhysMotor::InputTurnOn  (line 533, @0x000000000230d210, libserver.so)
// calls: CPhysMotor::TurnOn
void __fastcall CPhysMotor::InputTurnOn(CPhysMotor *const this, inputdata_t *const inputdata)
{
  CPhysMotor::TurnOn(this);
}


// CPhysMotor::InputTurnOff  (line 534, @0x000000000230d220, libserver.so)
// calls: CPhysMotor::TurnOff
void __fastcall CPhysMotor::InputTurnOff(CPhysMotor *const this, inputdata_t *const inputdata)
{
  CPhysMotor::TurnOff(this);
}


// CPhysMotor::GetDataDescMap  (line 553, @0x00000000022b7910, libserver.so)
// globals: CPhysMotor::m_DataMap
datamap_t *__fastcall CPhysMotor::GetDataDescMap(CPhysMotor *const this)
{
  return &CPhysMotor::m_DataMap;
}


// CPhysMotor::AddDatadescMetadataKeys  (line 553, @0x00000000022cc890, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysMotor::GetEntityClass(void)
void __fastcall CPhysMotor::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysMotor::GetEntityClass);
}


// CPhysMotor::GetBaseMap  (line 553, @0x00000000022cc8b0, libserver.so)
datamap_t *__cdecl CPhysMotor::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CPhysMotor>  (line 553, @0x00000000022cc8c0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysMotor"
// globals: `guard variable for'DataMapInit<CPhysMotor>(CPhysMotor *)::nameHolder, CPhysMotor::GetEntityClass(void), CPhysMotor::m_DataMap, DataMapInit<CPhysMotor>(CPhysMotor *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysMotor>(CPhysMotor *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPhysMotor>(CPhysMotor *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysMotor>(CPhysMotor *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysMotor>(CPhysMotor *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysMotor>(CPhysMotor *)::nameHolder.m_pszBase = "CPhysMotor";
    DataMapInit<CPhysMotor>(CPhysMotor *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysMotor>(CPhysMotor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysMotor>(CPhysMotor *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysMotor>(CPhysMotor *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysMotor>(CPhysMotor *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysMotor>(CPhysMotor *)::nameHolder,
      &_dso_handle);
  }
  CPhysMotor::m_DataMap.dataNumFields = 10;
  CPhysMotor::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  CPhysMotor::m_DataMap.dataDesc = &DataMapInit<CPhysMotor>(CPhysMotor *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysMotor::m_DataMap, CPhysMotor::GetEntityClass);
  return &CPhysMotor::m_DataMap;
}


// CPhysMotor::CalculateAcceleration  (line 575, @0x00000000022cc990, libserver.so)
void __fastcall CPhysMotor::CalculateAcceleration(CPhysMotor *const this)
{
  float m_spinUp; // xmm0_4

  m_spinUp = this->m_spinUp;
  if ( m_spinUp == 0.0 )
    this->m_angularAcceleration = fabs(this->m_flSpeed);
  else
    this->m_angularAcceleration = fabs(this->m_flSpeed / m_spinUp);
}


// CPhysMotor::InputSetTargetSpeed  (line 591, @0x00000000022cca90, libserver.so)  // inlines: CalculateAcceleration, Float, operator float
// calls: CPhysMotor::TargetSpeedChanged
void __fastcall CPhysMotor::InputSetTargetSpeed(CPhysMotor *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float m_spinUp; // xmm0_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( this->m_flSpeed != m_float64 )
  {
    this->m_flSpeed = m_float64;
    CPhysMotor::TargetSpeedChanged(this);
    m_spinUp = this->m_spinUp;
    if ( m_spinUp == 0.0 )
      this->m_angularAcceleration = fabs(this->m_flSpeed);
    else
      this->m_angularAcceleration = fabs(this->m_flSpeed / m_spinUp);
  }
}


// CPhysMotor::TargetSpeedChanged  (line 601, @0x00000000022cc9f0, libserver.so)  // inlines: curtime
// calls: CBaseEntity::SetNextThink
// callers: CPhysMotor::InputSetTargetSpeed
void __fastcall CPhysMotor::TargetSpeedChanged(CPhysMotor *const this)
{
  double v1; // xmm1_8
  double v2; // xmm0_8
  CGlobalVars *v4; // rbx
  CGlobalVars *v5; // rbx
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc v7; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v2 = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v2 = LODWORD(v4->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v2, v1, 0);
  v5 = gpGlobals;
  m_flCurrentTime = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v7 = gpGlobals->m_pfnWarningFunc;
      if ( v7 != 0 )
        (v7)(1, 0.0);
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  this->m_lastTime = m_flCurrentTime;
}


// CPhysMotor::~CPhysMotor  (line 607, @0x00000000022b8c70, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysMotor::~CPhysMotor(CPhysMotor *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysMotor::~CPhysMotor  (line 607, @0x00000000022b8c90, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysMotor, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysMotor::~CPhysMotor(CPhysMotor *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysMotor::UpdateOnRemove  (line 611, @0x00000000022b94e0, libserver.so)
// calls: CBaseEntity::VPhysicsWorld, CBaseEntity::UpdateOnRemove
void __fastcall CPhysMotor::UpdateOnRemove(CPhysMotor *const this)
{
  IVPhysics2World *v2; // rax
  IVPhysics2World *v3; // r12

  v2 = CBaseEntity::VPhysicsWorld(this);
  v3 = v2;
  if ( this->m_hMotorJoint != 0 )
    (*(*v2 + 904LL))(v2);
  if ( this->m_hFixedWorldBody != 0 )
    (*(*v3 + 720LL))(v3);
  CBaseEntity::UpdateOnRemove(this);
}


// CPhysMotor::Spawn  (line 629, @0x00000000022b9ec0, libserver.so)  // inlines: GetDebugName, operator-=
// calls: CLogicalEntity::Spawn, CBaseEntity::GetLocalOrigin, VectorNormalize, UTIL_SnapDirectionToAxis, CEntityIdentity::GetDebugName, Warning, CBaseEntity::SetNextThink, UTIL_Remove
// strings: "Phys_motor %s does not have a valid axis helper, and self-destructed!\n"
void __fastcall CPhysMotor::Spawn(CPhysMotor *const this, const CEntityKeyValues *pKeyValues)
{
  const Vector *LocalOrigin; // rax
  float v4; // xmm1_4
  const char *DebugName; // rax
  double v6; // xmm1_8

  CLogicalEntity::Spawn(this, pKeyValues);
  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  this->m_motor.m_axis.x = this->m_motor.m_axis.x - LocalOrigin->x;
  this->m_motor.m_axis.y = this->m_motor.m_axis.y - LocalOrigin->y;
  this->m_motor.m_axis.z = this->m_motor.m_axis.z - LocalOrigin->z;
  if ( VectorNormalize(&this->m_motor.m_axis) <= 1.0 )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    Warning("Phys_motor %s does not have a valid axis helper, and self-destructed!\n", DebugName);
    this->m_motor.m_speed = 0.0;
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v6, 0);
    UTIL_Remove(this);
  }
  else
  {
    UTIL_SnapDirectionToAxis(&this->m_motor.m_axis, v4);
  }
}


// CPhysMotor::TurnOn  (line 653, @0x00000000022ccb40, libserver.so)  // inlines: curtime
// callers: CPhysMotor::InputTurnOn, CPhysMotor::Activate
void __fastcall CPhysMotor::TurnOn(CPhysMotor *const this)
{
  HPhysicsJoint m_hMotorJoint; // rdi
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_hMotorJoint = this->m_hMotorJoint;
  if ( m_hMotorJoint != 0 )
    (*(*m_hMotorJoint + 248LL))(m_hMotorJoint);
  m_flCurrentTime = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  this->m_lastTime = m_flCurrentTime;
  (*(this->_vptr_IHandleEntity + 117))(this);
}


// CPhysMotor::TurnOff  (line 665, @0x00000000022ccbc0, libserver.so)  // inlines: Vector
// calls: CBaseEntity::SetNextThink
// callers: CPhysMotor::InputTurnOff
void __fastcall CPhysMotor::TurnOff(CPhysMotor *const this)
{
  double v1; // xmm1_8
  HPhysicsJoint m_hMotorJoint; // rdi
  __int64 v4; // rax
  _DWORD v5[8]; // [rsp+0h] [rbp-20h] BYREF

  this->m_motor.m_speed = 0.0;
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v1, 0);
  m_hMotorJoint = this->m_hMotorJoint;
  if ( m_hMotorJoint != 0 )
  {
    v4 = *m_hMotorJoint;
    v5[0] = 0;
    v5[1] = 0;
    v5[2] = 0;
    (*(v4 + 272))(m_hMotorJoint, v5);
    (*(*this->m_hMotorJoint + 256LL))(this->m_hMotorJoint);
  }
}


// CPhysMotor::Activate  (line 677, @0x00000000022dcda0, libserver.so)  // inlines: BuildBasis, CUtlAbstractDelegate, CUtlDelegate, CUtlSymbolLarge, CalculateAcceleration, ClosurePtr, CrossProduct, DotProductAbs, FastDelegate1, FloatMakePositive, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, InitXYZ, IsValid, LookupEntity, MatrixQuaternion, Normalized, PhysicsJointDesc_t, PhysicsRevoluteJointDesc_t, QuaternionConjugate, RotateVectorByInverse, Set, SetAxis, SetPivot, ToQuaternion, VectorAdd, VectorPerp, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator!, operator*, operator+, operator=
// calls: CBaseEntity::VPhysicsWorld, CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, CBaseEntity::VPhysicsGetAggregate, VectorIRotate, Warning, CBaseEntity::GetLocalOrigin, CalcClosestPointOnLine, VectorNormalize, MatrixQuaternion, QuaternionConjugate, CPhysMotor::TurnOn (16 total)
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CPhysMotor::Activate(CPhysMotor *const this, ActivateType_t activateType)
{
  IVPhysics2World *v4; // rbx
  uint32 m_Index; // eax
  unsigned __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  __int64 v8; // rsi
  CEntityIdentity *v9; // rcx
  CBaseEntity *EntityByName; // rax
  CBaseEntity *v11; // r12
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  IPhysAggregateInstance *Aggregate; // rax
  __int64 v15; // r15
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx
  float m_spinUp; // xmm1_4
  float m_flSpeed; // xmm0_4
  IPhysAggregateInstance *v21; // rax
  IPhysAggregateInstance *v22; // r12
  __int64 v23; // r15
  Vector *LocalOrigin; // rax
  vec_t z; // xmm5_4
  vec_t v26; // xmm1_4
  IPhysicsBody *v27; // rax
  HPhysicsBody m_hFixedWorldBody; // rax
  vec_t v29; // esi
  __int64 v30; // rdx
  vec_t v31; // xmm1_4
  double v32; // xmm0_8
  float v33; // xmm1_4
  float x; // xmm2_4
  float y; // xmm1_4
  float v36; // xmm3_4
  float v37; // xmm5_4
  float v38; // xmm0_4
  float v39; // xmm4_4
  float v40; // xmm5_4
  vec_t v41; // xmm6_4
  __int64 v42; // xmm1_8
  __int64 v43; // xmm1_8
  IPhysicsJoint *v44; // rax
  HPhysicsJoint m_hMotorJoint; // rdi
  __int64 v46; // rax
  unsigned int m_Value; // eax
  float v48; // xmm4_4
  CBaseEntity *v49; // rbx
  CBaseEntity *WorldEntity; // rax
  float v51; // [rsp+10h] [rbp-160h]
  float v52; // [rsp+24h] [rbp-14Ch]
  __int64 v53; // [rsp+28h] [rbp-148h]
  __int64 v54; // [rsp+28h] [rbp-148h]
  float vJointAxis; // [rsp+30h] [rbp-140h]
  Vector vJointAnchor; // [rsp+40h] [rbp-130h] BYREF
  Vector vProjectedAnchorPoint; // [rsp+50h] [rbp-120h] BYREF
  Vector vPhysCenterOfMass; // [rsp+60h] [rbp-110h] BYREF
  Quaternion q; // [rsp+70h] [rbp-100h] BYREF
  CTransform bodyTransform; // [rsp+80h] [rbp-F0h] BYREF
  float v61; // [rsp+A0h] [rbp-D0h]
  float v62; // [rsp+A4h] [rbp-CCh]
  float v63; // [rsp+A8h] [rbp-C8h]
  vec_t v64; // [rsp+ACh] [rbp-C4h]
  _BYTE mtxBodyLocalInertia[52]; // [rsp+B0h] [rbp-C0h] OVERLAPPED BYREF
  double v66; // [rsp+E4h] [rbp-8Ch]
  vec_t v67; // [rsp+ECh] [rbp-84h]
  __int64 v68; // [rsp+F0h] [rbp-80h]
  __int64 v69; // [rsp+F8h] [rbp-78h]
  char v70; // [rsp+100h] [rbp-70h]
  int v71; // [rsp+104h] [rbp-6Ch]
  int v72; // [rsp+108h] [rbp-68h]
  int v73; // [rsp+10Ch] [rbp-64h]
  __int64 v74; // [rsp+110h] [rbp-60h]
  __int64 v75; // [rsp+118h] [rbp-58h]
  __int64 v76; // [rsp+120h] [rbp-50h]
  char v77; // [rsp+128h] [rbp-48h]
  int v78; // [rsp+12Ch] [rbp-44h]
  int v79; // [rsp+130h] [rbp-40h]
  char v80; // [rsp+134h] [rbp-3Ch]
  int v81; // [rsp+138h] [rbp-38h]
  int v82; // [rsp+13Ch] [rbp-34h]
  Vector v83; // 0:^28.12

  v4 = CBaseEntity::VPhysicsWorld(this);
  CBaseEntity::Activate(this, activateType);
  m_Index = this->m_hAttachedObject.m_Index;
  if ( m_Index + 2 > 1
    && (v6 = this->m_hAttachedObject.m_Index,
        (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F]) != 0)
    && (v8 = v6 & 0x1FF, (v9 = &v7[v8]) != 0)
    && m_Index == v9->m_EHandle.m_Index
    && v9->m_pInstance != 0 )
  {
    v13 = &v7[v8];
  }
  else
  {
    *mtxBodyLocalInertia = this->m_nameAttach.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, mtxBodyLocalInertia, this, 0, 0, 0);
    v11 = EntityByName;
    if ( EntityByName != 0 && EntityByName->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS )
    {
      Aggregate = CBaseEntity::VPhysicsGetAggregate(EntityByName);
      if ( Aggregate != 0 )
      {
        v15 = (*(Aggregate->_vptr_IPhysAggregateInstance + 10))(Aggregate, 0);
        if ( v15 != 0 )
        {
          m_pEntity = v11->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v18 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hAttachedObject.m_Index) = v18 | this->m_hAttachedObject.m_Index & 0x8000;
            this->m_hAttachedObject.m_Index = (v17 << 15) | this->m_hAttachedObject.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hAttachedObject.m_Index = -1;
          }
          m_spinUp = this->m_spinUp;
          m_flSpeed = this->m_flSpeed;
          if ( m_spinUp != 0.0 )
            m_flSpeed = m_flSpeed / m_spinUp;
          this->m_angularAcceleration = fabs(m_flSpeed);
          (*(*v15 + 440LL))(&bodyTransform, v15);
          VectorIRotate(&this->m_motor.m_axis, &bodyTransform, mtxBodyLocalInertia);
          v53 = *mtxBodyLocalInertia;
          vJointAxis = *&mtxBodyLocalInertia[8];
          (*(*v15 + 232LL))(mtxBodyLocalInertia, v15);
          this->m_motor.m_maxTorque = (((fabs(*&v53 * *mtxBodyLocalInertia)
                                       + fabs(*(&v53 + 1) * *&mtxBodyLocalInertia[20]))
                                      + fabs(vJointAxis * *&mtxBodyLocalInertia[40]))
                                     * this->m_motor.m_inertiaFactor)
                                    * (this->m_angularAcceleration + this->m_additionalAcceleration);
        }
      }
    }
    m_Index = this->m_hAttachedObject.m_Index;
    if ( m_Index + 2 <= 1 )
      goto LABEL_11;
    v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttachedObject.m_Index) >> 9) & 0x3F];
    if ( v12 == 0 )
      goto LABEL_11;
    v13 = &v12[this->m_hAttachedObject.m_Index & 0x1FF];
    if ( v13 == 0 )
      goto LABEL_11;
  }
  if ( m_Index != v13->m_EHandle.m_Index
    || (v21 = CBaseEntity::VPhysicsGetAggregate(v13->m_pInstance), v22 = v21, v21 == 0) )
  {
LABEL_11:
    this->m_hAttachedObject.m_Index = -1;
    return;
  }
  if ( (*(v21->_vptr_IPhysAggregateInstance + 9))(v21) != 1 )
  {
    Warning(&stru_333F690.m_NetworkTransmitComponent.m_PVSInfo.m_vCenter[2]);
    goto LABEL_11;
  }
  v23 = (*(v22->_vptr_IPhysAggregateInstance + 10))(v22, 0);
  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  *&v83.x = *&this->m_motor.m_axis.x;
  z = this->m_motor.m_axis.z;
  vJointAnchor = *LocalOrigin;
  v83.z = z;
  *&vPhysCenterOfMass.x = (*(*v23 + 288LL))(v23);
  vPhysCenterOfMass.z = v26;
  *&mtxBodyLocalInertia[8] = v83.z + vJointAnchor.z;
  *&mtxBodyLocalInertia[4] = v83.y + vJointAnchor.y;
  *mtxBodyLocalInertia = v83.x + vJointAnchor.x;
  CalcClosestPointOnLine(&vPhysCenterOfMass, &vJointAnchor, mtxBodyLocalInertia, &vProjectedAnchorPoint, 0);
  v27 = (*(*v4 + 704LL))(v4);
  this->m_hFixedWorldBody = v27;
  (*(*v27 + 360LL))(v27, &vProjectedAnchorPoint);
  m_hFixedWorldBody = this->m_hFixedWorldBody;
  *mtxBodyLocalInertia = 3;
  *&mtxBodyLocalInertia[8] = v23;
  v70 = 0;
  v71 = 0;
  *&mtxBodyLocalInertia[16] = m_hFixedWorldBody;
  v72 = 0;
  v29 = vec3_origin.z;
  v73 = 0;
  v74 = 0;
  v30 = *&quat_identity.z;
  v75 = 0;
  *&mtxBodyLocalInertia[24] = *&vec3_origin.x;
  *&mtxBodyLocalInertia[32] = v29;
  v66 = *&vec3_origin.x;
  *&mtxBodyLocalInertia[44] = v30;
  v69 = v30;
  v67 = v29;
  *&mtxBodyLocalInertia[36] = *&quat_identity.x;
  v68 = *&quat_identity.x;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  *&bodyTransform.m_vPosition.x = (*(*v23 + 1008LL))(v23, &vProjectedAnchorPoint);
  bodyTransform.m_vPosition.z = v31;
  *&mtxBodyLocalInertia[24] = bodyTransform.m_vPosition.Vector;
  v32 = (*(**&mtxBodyLocalInertia[16] + 1008LL))(*&mtxBodyLocalInertia[16], &vProjectedAnchorPoint);
  v67 = v33;
  bodyTransform.m_vPosition.Vector = v83;
  v66 = v32;
  VectorNormalize(&bodyTransform.m_vPosition);
  x = bodyTransform.m_vPosition.x;
  y = bodyTransform.m_vPosition.y;
  v36 = bodyTransform.m_vPosition.z;
  if ( fabs(bodyTransform.m_vPosition.x) >= 0.57735002 )
  {
    v48 = fsqrt(
            (bodyTransform.m_vPosition.x * bodyTransform.m_vPosition.x)
          + (bodyTransform.m_vPosition.y * bodyTransform.m_vPosition.y));
    v38 = bodyTransform.m_vPosition.y / v48;
    v40 = -bodyTransform.m_vPosition.x / v48;
    v39 = 0.0;
  }
  else
  {
    v37 = fsqrt(
            (bodyTransform.m_vPosition.y * bodyTransform.m_vPosition.y)
          + (bodyTransform.m_vPosition.z * bodyTransform.m_vPosition.z));
    v38 = 0.0;
    v39 = -bodyTransform.m_vPosition.y / v37;
    v40 = bodyTransform.m_vPosition.z / v37;
  }
  bodyTransform.m_vPosition.z = bodyTransform.m_vPosition.x;
  bodyTransform.m_orientation.z = bodyTransform.m_vPosition.y;
  bodyTransform.m_vPosition.y = v38;
  bodyTransform.m_orientation.y = v40;
  v62 = v39;
  v63 = v36;
  v64 = vec3_origin.z;
  bodyTransform.m_vPosition.x = (v40 * v36) - (y * v39);
  bodyTransform.m_vPosition.w = vec3_origin.x;
  bodyTransform.m_orientation.x = (x * v39) - (v38 * v36);
  v41 = vec3_origin.y;
  v61 = (y * v38) - (x * v40);
  bodyTransform.m_orientation.w = v41;
  MatrixQuaternion(&bodyTransform, &q);
  v52 = q.x;
  v51 = q.y;
  v54 = *&q.z;
  *&bodyTransform.m_vPosition.x = (*(**&mtxBodyLocalInertia[8] + 384LL))(*&mtxBodyLocalInertia[8]);
  *&bodyTransform.m_vPosition.z = v42;
  QuaternionConjugate(&bodyTransform, &q);
  *&mtxBodyLocalInertia[36] = (((q.x * *(&v54 + 1)) + (q.y * *&v54)) - (q.z * v51)) + (q.w * v52);
  *&mtxBodyLocalInertia[40] = (((*&v54 * -q.x) + (q.y * *(&v54 + 1))) + (q.z * v52)) + (q.w * v51);
  *&mtxBodyLocalInertia[44] = (((q.x * v51) - (q.y * v52)) + (q.z * *(&v54 + 1))) + (q.w * *&v54);
  *&mtxBodyLocalInertia[48] = (((-q.x * v52) - (q.y * v51)) - (q.z * *&v54)) + (q.w * *(&v54 + 1));
  *&bodyTransform.m_vPosition.x = (*(**&mtxBodyLocalInertia[16] + 384LL))(*&mtxBodyLocalInertia[16]);
  *&bodyTransform.m_vPosition.z = v43;
  QuaternionConjugate(&bodyTransform, &q);
  *&v68 = (((q.x * *(&v54 + 1)) + (q.y * *&v54)) - (q.z * v51)) + (q.w * v52);
  *(&v68 + 1) = (((*&v54 * -q.x) + (q.y * *(&v54 + 1))) + (q.z * v52)) + (q.w * v51);
  *&v69 = (((q.x * v51) - (q.y * v52)) + (q.z * *(&v54 + 1))) + (q.w * *&v54);
  *(&v69 + 1) = (((v52 * -q.x) - (v51 * q.y)) - (*&v54 * q.z)) + (*(&v54 + 1) * q.w);
  v44 = (*(*v4 + 840LL))(v4, mtxBodyLocalInertia);
  this->m_hMotorJoint = v44;
  (*(*v44 + 256LL))(v44);
  m_hMotorJoint = this->m_hMotorJoint;
  this->m_motor.m_speed = 0.0;
  (*(*m_hMotorJoint + 288LL))(m_hMotorJoint, this->m_motor.m_maxTorque);
  v46 = *this->m_hMotorJoint;
  if ( (this->m_spawnflags.m_Value & 4) != 0 )
  {
    (*(v46 + 368))();
    (*(*this->m_hMotorJoint + 312LL))(this->m_hMotorJoint);
  }
  else
  {
    (*(v46 + 376))();
    (*(*this->m_hMotorJoint + 320LL))(this->m_hMotorJoint);
  }
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 2) != 0 )
  {
    v49 = CEntityHandle::operator CEntityInstance *(&this->m_hAttachedObject);
    WorldEntity = GetWorldEntity();
    PhysDisableEntityCollisions(WorldEntity, v49);
    m_Value = this->m_spawnflags.m_Value;
  }
  if ( (m_Value & 1) != 0 )
    CPhysMotor::TurnOn(this);
}


// CPhysMotor::OnRestore  (line 773, @0x00000000022b8f40, libserver.so)
// calls: CBaseEntity::OnRestore
void __fastcall CPhysMotor::OnRestore(CPhysMotor *const this)
{
  CBaseEntity::OnRestore(this);
}


// CPhysMotor::Think  (line 779, @0x00000000022c41d0, libserver.so)  // inlines: Approach, DEG2RAD, UTIL_Approach, Vector, curtime
// calls: CBaseEntity::SetNextThink
void __fastcall CPhysMotor::Think(CPhysMotor *const this)
{
  double v2; // xmm1_8
  float m_flCurrentTime; // xmm0_4
  float v4; // xmm3_4
  float v5; // xmm2_4
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v8; // xmm0_4
  float m_flSpeed; // xmm0_4
  HPhysicsJoint m_hMotorJoint; // rdi
  __int64 v11; // rax
  void (__fastcall *v12)(HPhysicsJoint, float *); // rax
  CGlobalVars *v13; // r12
  float v14; // xmm0_4
  FnGlobalVarsWarningFunc v15; // rax
  CGlobalVars *v16; // r12
  double v17; // xmm0_8
  FnGlobalVarsWarningFunc v18; // rax
  float v19; // [rsp-34h] [rbp-3Ch]
  float v20[14]; // [rsp-30h] [rbp-38h] BYREF

  *&v2 = LODWORD(this->m_spinUp);
  if ( *&v2 <= 0.0 )
  {
    m_flSpeed = this->m_flSpeed;
  }
  else
  {
    m_flCurrentTime = 0.0;
    v4 = this->m_flSpeed;
    v5 = fabs(v4) / *&v2;
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v19 = v5;
          (m_pfnWarningFunc)(1, 0.0);
          v4 = this->m_flSpeed;
          v5 = v19;
        }
      }
      m_flCurrentTime = v6->m_flCurrentTime;
    }
    *&v2 = LODWORD(this->m_motor.m_speed);
    v8 = (m_flCurrentTime - this->m_lastTime) * v5;
    if ( (v4 - *&v2) <= v8 )
    {
      if ( -v8 <= (v4 - *&v2) )
      {
        m_flSpeed = v4;
      }
      else
      {
        *&v2 = *&v2 - v8;
        m_flSpeed = *&v2;
      }
    }
    else
    {
      m_flSpeed = v8 + *&v2;
    }
  }
  m_hMotorJoint = this->m_hMotorJoint;
  this->m_motor.m_speed = m_flSpeed;
  if ( m_hMotorJoint != 0 )
  {
    v11 = *m_hMotorJoint;
    v20[0] = 0.0;
    v20[1] = 0.0;
    v12 = *(v11 + 272);
    v20[2] = m_flSpeed * 0.017453292;
    v12(m_hMotorJoint, v20);
  }
  v13 = gpGlobals;
  v14 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v15 = gpGlobals->m_pfnWarningFunc;
      if ( v15 != 0 )
        (v15)(1, 0.0);
    }
    v14 = v13->m_flCurrentTime;
  }
  this->m_lastTime = v14;
  if ( this->m_motor.m_speed != this->m_flSpeed )
  {
    v16 = gpGlobals;
    v17 = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v18 = gpGlobals->m_pfnWarningFunc;
        if ( v18 != 0 )
          (v18)(1, 0.0);
      }
      *&v17 = LODWORD(v16->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v17, v2, 0);
  }
}


// CKeepUpright::GetEntityClass  (line 803, @0x0000000002303410, libserver.so)
CEntityClass *__cdecl CKeepUpright::GetEntityClass()
{
  return g_pEntityCKeepUprightClass;
}


// CKeepUpright::Schema_DynamicBinding  (line 803, @0x0000000002303420, libserver.so)
// globals: CKeepUpright::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CKeepUpright::Schema_DynamicBinding(const CKeepUpright *const this)
{
  return CKeepUpright::s_pSchemaBinding;
}


// CKeepUpright::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 803, @0x0000000002303430, libserver.so)
// globals: CKeepUpright::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CKeepUpright::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CKeepUpright::CEntityInstanceEntityClass *const this)
{
  return CKeepUpright::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CKeepUpright::CEntityInstanceEntityClass::DestructInstance  (line 803, @0x0000000002303440, libserver.so)  // inlines: Destruct<CKeepUpright>
void __fastcall CKeepUpright::CEntityInstanceEntityClass::DestructInstance(
        CKeepUpright::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CKeepUpright::CEntityInstanceEntityClass::FreeInstance  (line 803, @0x0000000002303460, libserver.so)
void __fastcall CKeepUpright::CEntityInstanceEntityClass::FreeInstance(
        CKeepUpright::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CKeepUpright::CEntityInstanceEntityClass::CanAllocate  (line 803, @0x0000000002303480, libserver.so)
bool __fastcall CKeepUpright::CEntityInstanceEntityClass::CanAllocate(
        const CKeepUpright::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CKeepUpright::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 803, @0x0000000002303490, libserver.so)
// globals: CKeepUpright::s_pSchemaBinding
const ISchemaBinding *__fastcall CKeepUpright::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CKeepUpright::CEntityInstanceEntityClass *const this)
{
  return CKeepUpright::s_pSchemaBinding;
}


// CKeepUpright::CEntityInstanceEntityClass::AllocateInstance  (line 803, @0x0000000002305a20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CKeepUpright::CEntityInstanceEntityClass::AllocateInstance(
        CKeepUpright::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 840);
  memset(v1, 0, 0x348u);
  return v1;
}


// CKeepUpright::CEntityInstanceEntityClass::ConstructInstance  (line 803, @0x0000000002306340, libserver.so)  // inlines: CEntityHandle, CHandle, CKeepUpright, CPointEntity, CUtlSymbolLarge, Construct<CKeepUpright>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CKeepUpright::CEntityInstanceEntityClass::ConstructInstance(
        CKeepUpright::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 102) = 0;
    *p = &off_4077890;
    *(p + 97) = &off_4077F20;
    *(p + 206) = -1;
    *(p + 207) = 1097859072;
    *(p + 833) = 0;
  }
  return p;
}


// CKeepUpright::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 803, @0x0000000002309080, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CKeepUpright::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CKeepUpright::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CKeepUpright::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 803, @0x00000000023090a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CKeepUpright::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CKeepUpright::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CKeepUpright::GetEntityClassInternal  (line 803, @0x0000000002314ec0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "phys_keepupright", "CKeepUpright"
// globals: `guard variable for'CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass, CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CKeepUpright::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CKeepUpright::GetEntityClassInfo(void)::g_EntityCKeepUprightClassInfo, CKeepUpright::GetEntityClassInfo(void)::g_EntityCKeepUprightClassInfo
CEntityClass *__cdecl CKeepUpright::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass == 0
    && __cxa_guard_acquire(&`guard variable for'CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass) != 0 )
  {
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_designerName.u.m_Id = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass._vptr_CEntityClass = off_3F79390;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_ComponentOffsets.m_Size = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_AllHelpers.m_Size = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_instanceUnserializer.m_atomicFields,
      4);
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_classInputs.m_Size = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_classInputs.m_Memory.m_pMemory = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_classOutputs.m_Size = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_requiredEHandle.m_Index = -1;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_hNetworkSerializer = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_pBaseClassInfo = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_pClassInfo = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_flags = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_nAllHelpersFlags = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_pScriptClassDesc = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_pInputs = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_nInputCount = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_pOutputs = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_nOutputCount = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_pGameClass = 0;
    CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass._vptr_CEntityClass = off_4077810;
    __cxa_guard_release(&`guard variable for'CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass);
    __cxa_atexit(
      CKeepUpright::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass,
      &_dso_handle);
  }
  if ( g_pEntityCKeepUprightClass != 0 )
    return &CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass;
  if ( `guard variable for'CKeepUpright::GetEntityClassInfo(void)::g_EntityCKeepUprightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CKeepUpright::GetEntityClassInfo(void)::g_EntityCKeepUprightClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CKeepUpright::GetEntityClassInfo(void)::g_EntityCKeepUprightClassInfo,
      "CKeepUpright",
      "phys_keepupright",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CKeepUpright::GetEntityClassInfo(void)::g_EntityCKeepUprightClassInfo);
  }
  CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_pClassInfo = &CKeepUpright::GetEntityClassInfo(void)::g_EntityCKeepUprightClassInfo;
  CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_pBaseClassInfo = CKeepUpright::GetEntityClassInfo(void)::g_EntityCKeepUprightClassInfo.m_pBaseClassInfo;
  g_pEntityCKeepUprightClass = &CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass;
  CKeepUpright::GetEntityClassInfo(void)::g_EntityCKeepUprightClassInfo.m_pClass = &CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass;
  CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCKeepUprightClass->m_pComponentOverrides = 0;
  return &CKeepUpright::GetEntityClassInternal(void)::g_EntityCKeepUprightClass;
}


// CKeepUpright::~CKeepUpright  (line 808, @0x0000000002306710, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CKeepUpright::~CKeepUpright(CKeepUpright *const this)
{
  this->_vptr_IMotionEvent = &off_4077F20;
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CKeepUpright::~CKeepUpright  (line 808, @0x0000000002306740, libserver.so)  // inlines: ~CKeepUpright, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CKeepUpright::~CKeepUpright(CKeepUpright *const this)
{
  this->_vptr_IMotionEvent = &off_4077F20;
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CKeepUpright::InputTurnOn  (line 818, @0x00000000023034a0, libserver.so)
void __fastcall CKeepUpright::InputTurnOn(CKeepUpright *const this, inputdata_t *const inputdata)
{
  this->m_bActive = 1;
}


// CKeepUpright::InputTurnOff  (line 823, @0x00000000023034b0, libserver.so)
void __fastcall CKeepUpright::InputTurnOff(CKeepUpright *const this, inputdata_t *const inputdata)
{
  this->m_bActive = 0;
}


// CKeepUpright::InputSetAngularLimit  (line 828, @0x00000000023034c0, libserver.so)  // inlines: Float, operator float
void __fastcall CKeepUpright::InputSetAngularLimit(CKeepUpright *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_angularLimit = m_float64;
}


// CKeepUpright::GetDataDescMap  (line 850, @0x00000000022b7920, libserver.so)
// globals: CKeepUpright::m_DataMap
datamap_t *__fastcall CKeepUpright::GetDataDescMap(CKeepUpright *const this)
{
  return &CKeepUpright::m_DataMap;
}


// CKeepUpright::AddDatadescMetadataKeys  (line 850, @0x00000000022ccc30, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CKeepUpright::GetEntityClass(void)
void __fastcall CKeepUpright::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CKeepUpright::GetEntityClass);
}


// CKeepUpright::GetBaseMap  (line 850, @0x00000000022ccc50, libserver.so)
datamap_t *__cdecl CKeepUpright::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CKeepUpright>  (line 850, @0x00000000022ccc60, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, GetPhysObjSaveRestoreOps
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CKeepUpright"
// globals: `guard variable for'DataMapInit<CKeepUpright>(CKeepUpright *)::nameHolder, `guard variable for'DataMapInit<CKeepUpright>(CKeepUpright *)::dataDesc, CKeepUpright::GetEntityClass(void), CKeepUpright::m_DataMap, GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited, DataMapInit<CKeepUpright>(CKeepUpright *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CKeepUpright>(CKeepUpright *a1)
{
  PhysInterfaceId_t *p_m_type; // rdx
  PhysInterfaceId_t i; // eax

  if ( `guard variable for'datamap_t * DataMapInit<CKeepUpright>(CKeepUpright *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CKeepUpright>(CKeepUpright *)::nameHolder) != 0 )
  {
    DataMapInit<CKeepUpright>(CKeepUpright *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CKeepUpright>(CKeepUpright *)::nameHolder.m_pszBase = "CKeepUpright";
    DataMapInit<CKeepUpright>(CKeepUpright *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CKeepUpright>(CKeepUpright *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CKeepUpright>(CKeepUpright *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CKeepUpright>(CKeepUpright *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CKeepUpright>(CKeepUpright *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CKeepUpright>(CKeepUpright *)::nameHolder,
      &_dso_handle);
  }
  CKeepUpright::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CKeepUpright>(CKeepUpright *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CKeepUpright>(CKeepUpright *)::dataDesc) != 0 )
  {
    if ( !GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited )
    {
      GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited = 1;
      p_m_type = &g_PhysObjSaveRestoreOps[0].m_type;
      for ( i = PhysInterfaceId_t::PIID_UNKNOWN; i != PhysInterfaceId_t::PIID_NUM_TYPES; ++i )
      {
        *p_m_type = i;
        p_m_type += 4;
      }
    }
    DataMapInit<CKeepUpright>(CKeepUpright *)::dataDesc[3].pSaveRestoreOps = &g_PhysObjSaveRestoreOps[5];
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CKeepUpright>(CKeepUpright *)::dataDesc);
  }
  CKeepUpright::m_DataMap.dataNumFields = 11;
  CKeepUpright::m_DataMap.dataDesc = &DataMapInit<CKeepUpright>(CKeepUpright *)::dataDesc[1];
  AddDatadescMetadataKeys(&CKeepUpright::m_DataMap, CKeepUpright::GetEntityClass);
  return &CKeepUpright::m_DataMap;
}


// CKeepUpright::CKeepUpright  (line 869, @0x00000000022ccdb0, libserver.so)  // inlines: CEntityHandle, CHandle, CPointEntity, CUtlSymbolLarge
// calls: CBaseEntity::CBaseEntity
void __fastcall CKeepUpright::CKeepUpright(CKeepUpright *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_nameAttach.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_4077890;
  this->_vptr_IMotionEvent = &off_4077F20;
  this->m_attachedObject.m_Index = -1;
  this->m_angularLimit = 15.0;
  this->m_bDampAllRotation = 0;
}


// CKeepUpright::UpdateOnRemove  (line 879, @0x00000000022b9530, libserver.so)
// calls: CBaseEntity::VPhysicsWorld, CBaseEntity::UpdateOnRemove
void __fastcall CKeepUpright::UpdateOnRemove(CKeepUpright *const this)
{
  IVPhysics2World *v2; // rax

  if ( this->m_pController != 0 )
  {
    v2 = CBaseEntity::VPhysicsWorld(this);
    (*(*v2 + 88LL))(v2, this->m_pController);
    this->m_pController = 0;
  }
  CBaseEntity::UpdateOnRemove(this);
}


// CKeepUpright::Spawn  (line 891, @0x00000000022ba010, libserver.so)  // inlines: Init
// calls: CPointEntity::Spawn, CBaseEntity::SetMoveType
void __fastcall CKeepUpright::Spawn(CKeepUpright *const this, const CEntityKeyValues *pKeyValues)
{
  int (**vptr_IHandleEntity)(...); // rax

  CPointEntity::Spawn(this, pKeyValues);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_localTestAxis.x = 0.0;
  this->m_localTestAxis.y = 0.0;
  this->m_localTestAxis.z = 1.0;
  vptr_IHandleEntity[61](this, 0, 0, &this->m_worldGoalAxis);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  this->m_bActive = (this->m_spawnflags.m_Value & 1) == 0;
}


// CKeepUpright::Activate  (line 914, @0x00000000022eb900, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, operator bool
// calls: CBaseEntity::Activate, FindPhysicsBodyByName, CBaseEntity::VPhysicsWorld, UTIL_Remove, CBaseEntity::VPhysicsBody
// globals: CEntityHandle::gm_pEntityList
void __fastcall CKeepUpright::Activate(CKeepUpright *const this, ActivateType_t activateType)
{
  IPhysicsMotionController *m_pController; // rdi
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  const char *m_pAsString; // rdi
  HPhysicsBody PhysicsBodyByName; // r12
  IVPhysics2World *v9; // rax
  IPhysicsMotionController *v10; // rax

  CBaseEntity::Activate(this, activateType);
  m_pController = this->m_pController;
  if ( m_pController != 0 )
  {
    (*(m_pController->_vptr_IPhysicsMotionController + 2))(m_pController, &this->IMotionEvent);
  }
  else
  {
    m_Index = this->m_attachedObject.m_Index;
    if ( m_Index + 2 > 1
      && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_attachedObject.m_Index) >> 9) & 0x3F]) != 0
      && (v6 = &v5[this->m_attachedObject.m_Index & 0x1FF]) != 0
      && m_Index == v6->m_EHandle.m_Index )
    {
      PhysicsBodyByName = CBaseEntity::VPhysicsBody(v6->m_pInstance);
    }
    else
    {
      m_pAsString = "";
      if ( this->m_nameAttach.u.m_Id != 0 )
        m_pAsString = this->m_nameAttach.u.m_pAsString;
      PhysicsBodyByName = FindPhysicsBodyByName(m_pAsString, this);
    }
    if ( PhysicsBodyByName != 0 )
    {
      v9 = CBaseEntity::VPhysicsWorld(this);
      v10 = (*(*v9 + 80LL))(v9, &this->IMotionEvent);
      this->m_pController = v10;
      (*(v10->_vptr_IPhysicsMotionController + 4))(v10, PhysicsBodyByName, 0);
    }
    else
    {
      UTIL_Remove(this);
    }
  }
}


// CreateKeepUpright  (line 951, @0x00000000022f4580, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<CEntityHandle>, AddKeyValue<CHandle<CBaseEntity> >, AddKeyValue<QAngle>, AddKeyValue<Vector>, AddKeyValue<float>, AddKeyValue<int>, AddToTail, Allocate<QAngle>, Allocate<Vector>, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, CopyData<QAngle>, CopyData<Vector>, Element, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetValue<CEntityHandle>, SetValue<CHandle<CBaseEntity> >, SetValue<QAngle>, SetValue<Vector>, SetValue<float>, SetValue<int>, SetValues, SetWorldTransform, Spawn, operator CEntityInstance*, operator CKeepUpright*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CVProfile::ExitScope, CUtlString::FreeMemoryBlock, CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr (22 total)
// callers: CPropVehicleDriveable::TraceAttack
// strings: "Server Simulation", "Spawn", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CreateKeepUpright(
        const Vector *const vecOrigin,
        const QAngle *const vecAngles,
        CBaseEntity *pOwner,
        float flAngularLimit,
        bool bActive)
{
  CEntitySystem *v7; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v9; // rdx
  char v10; // al
  CEntityIdentity *m_pEntity; // rdx
  __int16 v12; // cx
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  int16 m_nQueuedForSpawnCount; // ax
  CEntityIdentity *v15; // rax
  __int16 v16; // cx
  CEntityKeyValues *v17; // rdi
  int m_enabled; // ebx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v20; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v22; // r14
  CEntityIdentity *v23; // rax
  __int16 v24; // si
  CEntitySpawnerContext<CKeepUpright> *m_pContext; // rbx
  CEntityKeyValues *i; // r15
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v29; // rdi
  CEntityIdentity *v30; // rax
  CEntityInstance *m_pInstance; // rbx
  CEntityIdentity *v32; // rax
  CUtlScratchMemoryPool *v33; // rdi
  CEntityKeyValues *v34; // r13
  __int16 v37; // r15
  unsigned __int64 v38; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v39; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v40; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v41; // rax
  uint16 v42; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v43; // rax
  int v44; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v45; // cx
  __int64 v46; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v47; // rdx
  const char *m_pszClassname; // rdx
  int v49; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v50; // cx
  __int64 v51; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v52; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v54; // cx
  __int64 v55; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v56; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  __int16 v58; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  int v61; // esi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v62; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v63; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v65; // rax
  __int16 v66; // r15
  unsigned __int64 v67; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v68; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v69; // rax
  __int64 v70; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v71; // r15
  uint16 v72; // ax
  vec_t *v73; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v74; // rax
  __int16 v75; // r14
  unsigned __int64 v76; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v77; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v78; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v79; // rax
  uint16 v80; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v81; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v82; // rdx
  __int64 v83; // rax
  const char *v84; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v85; // rdx
  __int64 v86; // rax
  const char *m_pAttributeName; // rsi
  int v88; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v89; // cx
  __int64 v90; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v91; // rdx
  __int16 v92; // dx
  unsigned __int64 v93; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v94; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v95; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v96; // rax
  uint16 v97; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v98; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rcx
  int v102; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v103; // cx
  __int64 v104; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v105; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rbx
  int v109; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v110; // cx
  __int64 v111; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v112; // rdx
  __int16 v113; // r15
  unsigned __int64 v114; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v115; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v116; // rax
  __int64 v117; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v118; // r15
  uint16 v119; // ax
  vec_t *v120; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v121; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v122; // rdx
  __int64 v123; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v124; // rdx
  __int64 v125; // rax
  __int16 v126; // ax
  __int16 v127; // ax
  vec_t *v128; // rax
  int v129; // ecx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v130; // rax
  uint16 v131; // dx
  int v132; // ecx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v133; // rax
  uint16 v134; // dx
  __int64 v135; // rbx
  __int16 v136; // ax
  vec_t *v137; // rax
  __int16 v138; // dx
  __int64 v139; // [rsp+20h] [rbp-120h]
  __int64 v140; // [rsp+20h] [rbp-120h]
  __int64 flAngularLimitb; // [rsp+28h] [rbp-118h]
  bool vecOriginb; // [rsp+38h] [rbp-108h]
  const Vector *vecOriginc; // [rsp+38h] [rbp-108h]
  int v147; // [rsp+40h] [rbp-100h]
  int v148; // [rsp+50h] [rbp-F0h]
  _QWORD v149[2]; // [rsp+60h] [rbp-E0h] BYREF
  CEntitySpawner<CKeepUpright> spawner; // [rsp+70h] [rbp-D0h] BYREF

  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_4077F70;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v7 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v7->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v7);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v9 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v9;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCKeepUprightClass;
  if ( g_pApplication != 0 )
    v10 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v10 = 0;
  spawner.m_bValidateKeys = v10;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  LODWORD(v149[0]) = -1;
  if ( pOwner != 0 )
  {
    m_pEntity = pOwner->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v12 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(v149[0]) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v12 & 0x7FFF;
    }
  }
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  m_nQueuedForSpawnCount = spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount;
  if ( m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_91:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v58 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = 753301704;
      v139 = v58;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      v61 = v149[0];
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v62 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v62 = 0;
      v63 = &v62[v139];
      m_flags = v63->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v63->m_value.m_flags = m_flags & 0xFFFE;
      v63->m_value.m_uint64 = 0;
      v63->m_value.m_type = 13;
      v63->m_value.m_int = v61;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v65 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v65 = 0;
      v65[v139].m_pAttributeName = 0;
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
      m_nQueuedForSpawnCount = spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount;
LABEL_131:
      if ( m_nQueuedForSpawnCount > 0 )
        goto LABEL_9;
      v88 = m_pEntityKeyValues->m_keyHashes.m_nCount;
      if ( v88 <= 0 )
      {
LABEL_140:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
        v92 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
        v93 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
        if ( v93 != 0 )
        {
          if ( v93 <= 9 )
            v94 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          else
            v94 = m_pEntityKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v94 = 0;
        }
        v94[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = -697837431;
        v140 = v92;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
        if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
          v95 = m_pEntityKeyValues->m_keyValues.m_pElements;
        else
          v95 = 0;
        v96 = &v95[v140];
        v97 = v96->m_value.m_flags;
        if ( (v97 & 1) != 0 )
          v96->m_value.m_flags = v97 & 0xFFFE;
        v96->m_value.m_uint64 = 0;
        v96->m_value.m_type = 1;
        v96->m_value.m_float = flAngularLimit;
        if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
          v98 = m_pEntityKeyValues->m_keyValues.m_pElements;
        else
          v98 = 0;
        v98[v140].m_pAttributeName = 0;
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        m_nQueuedForSpawnCount = spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount;
LABEL_154:
        if ( bActive )
          goto LABEL_58;
        if ( m_nQueuedForSpawnCount > 0 )
          goto LABEL_10;
        v102 = m_pEntityKeyValues->m_keyHashes.m_nCount;
        if ( v102 <= 0 )
        {
LABEL_48:
          CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
          v37 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
          v38 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
          if ( v38 != 0 )
          {
            if ( v38 <= 9 )
              v39 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
            else
              v39 = m_pEntityKeyValues->m_keyHashes.m_pElements;
          }
          else
          {
            v39 = 0;
          }
          v39[v37] = 1775824117;
          CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
          if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
            v40 = m_pEntityKeyValues->m_keyValues.m_pElements;
          else
            v40 = 0;
          v41 = &v40[v37];
          v42 = v41->m_value.m_flags;
          if ( (v42 & 1) != 0 )
            v41->m_value.m_flags = v42 & 0xFFFE;
          v41->m_value.m_uint64 = 0;
          v41->m_value.m_type = 5;
          v41->m_value.m_int = 1;
          if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
            v43 = m_pEntityKeyValues->m_keyValues.m_pElements;
          else
            v43 = 0;
          v43[v37].m_pAttributeName = 0;
          m_pEntityKeyValues = spawner.m_pEntityKeyValues;
          m_nQueuedForSpawnCount = spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount;
          goto LABEL_58;
        }
        v103 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
        v104 = 0;
        while ( 1 )
        {
          if ( v103 != 0 )
          {
            v105 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
            if ( v103 > 9 )
              v105 = m_pEntityKeyValues->m_keyHashes.m_pElements;
          }
          else
          {
            v105 = 0;
          }
          if ( v105[v104] == 1775824117 )
            break;
          if ( v102 <= ++v104 )
            goto LABEL_48;
        }
        if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        {
          v124 = m_pEntityKeyValues->m_keyValues.m_pElements;
          v125 = 24 * v104;
          if ( *(&v124->m_pAttributeName + v125) != 0 )
          {
LABEL_198:
            Warning(
              "Attempted to set attribute %s as if it was a non-attribute key!\n",
              *(&v124->m_pAttributeName + v125));
LABEL_199:
            m_pEntityKeyValues = spawner.m_pEntityKeyValues;
            m_nQueuedForSpawnCount = spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount;
            goto LABEL_58;
          }
          v125 += v124;
        }
        else
        {
          v125 = 24 * v104;
          v124 = 0;
          if ( *(v125 + 16) != 0 )
            goto LABEL_198;
        }
        v138 = *(v125 + 10);
        if ( (v138 & 1) != 0 )
          *(v125 + 10) = v138 & 0xFFFE;
        *v125 = 0;
        *(v125 + 8) = 5;
        *v125 = 1;
        goto LABEL_199;
      }
      v89 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      v90 = 0;
      while ( 1 )
      {
        if ( v89 != 0 )
        {
          v91 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v89 > 9 )
            v91 = m_pEntityKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v91 = 0;
        }
        if ( v91[v90] == -697837431 )
          break;
        if ( v88 <= ++v90 )
          goto LABEL_140;
      }
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      {
        v99 = m_pEntityKeyValues->m_keyValues.m_pElements;
        v100 = v90;
        v101 = &v99[v100];
        if ( v99[v100].m_pAttributeName != 0 )
        {
LABEL_152:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v99[v100].m_pAttributeName);
LABEL_153:
          m_pEntityKeyValues = spawner.m_pEntityKeyValues;
          m_nQueuedForSpawnCount = spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount;
          goto LABEL_154;
        }
      }
      else
      {
        v100 = v90;
        v99 = 0;
        v101 = v100 * 24;
        if ( *(v100 * 24 + 16) != 0 )
          goto LABEL_152;
      }
      v126 = *(v101 + 10);
      if ( (v126 & 1) != 0 )
        *(v101 + 10) = v126 & 0xFFFE;
      *v101 = 0;
      *(v101 + 8) = 1;
      *v101 = flAngularLimit;
      goto LABEL_153;
    }
    v54 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v55 = 0;
    while ( 1 )
    {
      if ( v54 != 0 )
      {
        v56 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v54 > 9 )
          v56 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v56 = 0;
      }
      if ( v56[v55] == 753301704 )
        break;
      if ( m_nCount <= ++v55 )
        goto LABEL_91;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v85 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v86 = v55;
      m_pAttributeName = v85[v86].m_pAttributeName;
      if ( m_pAttributeName != 0 )
      {
LABEL_129:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", m_pAttributeName);
LABEL_130:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        m_nQueuedForSpawnCount = spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount;
        goto LABEL_131;
      }
      v132 = v149[0];
    }
    else
    {
      v86 = v55;
      m_pAttributeName = *(v86 * 24 + 16);
      if ( m_pAttributeName != 0 )
        goto LABEL_129;
      v132 = v149[0];
      v85 = 0;
    }
    v133 = &v85[v86];
    v134 = v133->m_value.m_flags;
    if ( (v134 & 1) != 0 )
      v133->m_value.m_flags = v134 & 0xFFFE;
    v133->m_value.m_uint64 = 0;
    v133->m_value.m_type = 13;
    v133->m_value.m_int = v132;
    goto LABEL_130;
  }
LABEL_9:
  if ( !bActive )
    goto LABEL_10;
LABEL_58:
  if ( m_nQueuedForSpawnCount > 0 )
    goto LABEL_10;
  v44 = m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v44 <= 0 )
  {
LABEL_101:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
    v66 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
    v67 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    if ( v67 != 0 )
    {
      if ( v67 <= 9 )
        v68 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      else
        v68 = m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      v68 = 0;
    }
    v68[v66] = -467664362;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v69 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v69 = 0;
    v70 = v66;
    v71 = &v69[v70];
    flAngularLimitb = v70 * 24;
    v72 = v69[v70].m_value.m_flags;
    if ( (v72 & 1) != 0 )
      v71->m_value.m_flags = v72 & 0xFFFE;
    v71->m_value.m_uint64 = 0;
    v71->m_value.m_type = 3;
    v73 = CEntityVariantAllocator::Allocate(0xCu);
    v71->m_value.m_uint64 = v73;
    *v73 = vecOrigin->x;
    v73[1] = vecOrigin->y;
    v73[2] = vecOrigin->z;
    v71->m_value.m_flags |= 1u;
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v74 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v74 = 0;
    *(&v74->m_pAttributeName + flAngularLimitb) = 0;
  }
  else
  {
    v45 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v46 = 0;
    while ( 1 )
    {
      if ( v45 != 0 )
      {
        v47 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v45 > 9 )
          v47 = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v47 = 0;
      }
      if ( v47[v46] == -467664362 )
        break;
      if ( v44 <= ++v46 )
        goto LABEL_101;
    }
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v106 = m_pEntityKeyValues->m_keyValues.m_pElements;
      v107 = v46;
      v108 = &v106[v107];
      if ( v106[v107].m_pAttributeName != 0 )
      {
LABEL_166:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v106[v107].m_pAttributeName);
        goto LABEL_167;
      }
    }
    else
    {
      v107 = v46;
      v106 = 0;
      v108 = v107 * 24;
      if ( *(v107 * 24 + 16) != 0 )
        goto LABEL_166;
    }
    v127 = *(v108 + 10);
    if ( (v127 & 1) != 0 )
      *(v108 + 10) = v127 & 0xFFFE;
    *v108 = 0;
    *(v108 + 8) = 3;
    v128 = CEntityVariantAllocator::Allocate(0xCu);
    *v108 = v128;
    *v128 = vecOrigin->x;
    v128[1] = vecOrigin->y;
    v128[2] = vecOrigin->z;
    *(v108 + 10) |= 1u;
  }
LABEL_167:
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_10;
  v109 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v109 > 0 )
  {
    v110 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v111 = 0;
    while ( 1 )
    {
      if ( v110 != 0 )
      {
        v112 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v110 > 9 )
          v112 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v112 = 0;
      }
      if ( v112[v111] == -1164387633 )
        break;
      if ( v109 <= ++v111 )
        goto LABEL_176;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v122 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v123 = v111;
      if ( v122[v123].m_pAttributeName != 0 )
      {
LABEL_188:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v122[v123].m_pAttributeName);
LABEL_189:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        goto LABEL_10;
      }
      v135 = &v122[v123];
    }
    else
    {
      v123 = v111;
      v122 = 0;
      v135 = v123 * 24;
      if ( *(v123 * 24 + 16) != 0 )
        goto LABEL_188;
    }
    v136 = *(v135 + 10);
    if ( (v136 & 1) != 0 )
      *(v135 + 10) = v136 & 0xFFFE;
    *v135 = 0;
    *(v135 + 8) = 39;
    v137 = CEntityVariantAllocator::Allocate(0xCu);
    *v135 = v137;
    *v137 = vecAngles->x;
    v137[1] = vecAngles->y;
    v137[2] = vecAngles->z;
    *(v135 + 10) |= 1u;
    goto LABEL_189;
  }
LABEL_176:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  v113 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
  v114 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
  if ( v114 != 0 )
  {
    if ( v114 <= 9 )
      v115 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    else
      v115 = m_pEntityKeyValues->m_keyHashes.m_pElements;
  }
  else
  {
    v115 = 0;
  }
  v115[v113] = -1164387633;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
  if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v116 = m_pEntityKeyValues->m_keyValues.m_pElements;
  else
    v116 = 0;
  v117 = v113;
  v118 = &v116[v117];
  vecOriginc = (v117 * 24);
  v119 = v116[v117].m_value.m_flags;
  if ( (v119 & 1) != 0 )
    v118->m_value.m_flags = v119 & 0xFFFE;
  v118->m_value.m_uint64 = 0;
  v118->m_value.m_type = 39;
  v120 = CEntityVariantAllocator::Allocate(0xCu);
  v118->m_value.m_uint64 = v120;
  *v120 = vecAngles->x;
  v120[1] = vecAngles->y;
  v120[2] = vecAngles->z;
  v118->m_value.m_flags |= 1u;
  if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v121 = m_pEntityKeyValues->m_keyValues.m_pElements;
  else
    v121 = 0;
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  *(&vecOriginc[1].y + v121) = 0;
LABEL_10:
  if ( pOwner != 0 )
  {
    v15 = pOwner->m_pEntity;
    if ( v15 != 0 )
    {
      if ( v15->m_EHandle.m_Index == -1 )
        v16 = 0x7FFF;
      else
        v16 = v15->m_EHandle.m_Index & 0x7FFF;
      v17 = m_pEntityKeyValues;
      v148 = (((v15->m_EHandle.m_Index >> 15) - (v15->m_flags & 1)) << 15) | v16 & 0x7FFF;
      if ( m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
        goto LABEL_15;
LABEL_71:
      v49 = m_pEntityKeyValues->m_keyHashes.m_nCount;
      if ( v49 <= 0 )
      {
LABEL_111:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
        v75 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
        v76 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
        if ( v76 != 0 )
        {
          if ( v76 <= 9 )
            v77 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          else
            v77 = m_pEntityKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v77 = 0;
        }
        v77[v75] = -1104771937;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
        if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
          v78 = m_pEntityKeyValues->m_keyValues.m_pElements;
        else
          v78 = 0;
        v79 = &v78[v75];
        v80 = v79->m_value.m_flags;
        if ( (v80 & 1) != 0 )
          v79->m_value.m_flags = v80 & 0xFFFE;
        v79->m_value.m_uint64 = 0;
        v79->m_value.m_type = 13;
        v79->m_value.m_int = v148;
        if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
          v81 = m_pEntityKeyValues->m_keyValues.m_pElements;
        else
          v81 = 0;
        v81[v75].m_pAttributeName = 0;
        v17 = spawner.m_pEntityKeyValues;
LABEL_125:
        v147 = -1;
        m_pInstance = 0;
        if ( v17 == 0 )
          goto LABEL_39;
        goto LABEL_16;
      }
      v50 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      v51 = 0;
      while ( 1 )
      {
        if ( v50 != 0 )
        {
          v52 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v50 > 9 )
            v52 = m_pEntityKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v52 = 0;
        }
        if ( v52[v51] == -1104771937 )
          break;
        if ( v49 <= ++v51 )
          goto LABEL_111;
      }
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      {
        v82 = m_pEntityKeyValues->m_keyValues.m_pElements;
        v83 = v51;
        v84 = v82[v83].m_pAttributeName;
        if ( v84 != 0 )
        {
LABEL_123:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v84);
LABEL_124:
          v17 = spawner.m_pEntityKeyValues;
          goto LABEL_125;
        }
        v129 = v148;
      }
      else
      {
        v83 = v51;
        v84 = *(v83 * 24 + 16);
        if ( v84 != 0 )
          goto LABEL_123;
        v129 = v148;
        v82 = 0;
      }
      v130 = &v82[v83];
      v131 = v130->m_value.m_flags;
      if ( (v131 & 1) != 0 )
        v130->m_value.m_flags = v131 & 0xFFFE;
      v130->m_value.m_uint64 = 0;
      v130->m_value.m_type = 13;
      v130->m_value.m_int = v129;
      goto LABEL_124;
    }
  }
  v17 = m_pEntityKeyValues;
  v148 = -1;
  if ( m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
    goto LABEL_71;
LABEL_15:
  v147 = -1;
LABEL_16:
  m_enabled = g_VProfCurrentProfile.m_enabled;
  vecOriginb = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
    v17 = spawner.m_pEntityKeyValues;
  }
  if ( !CEntityKeyValues::HasValue(v17, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v20 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v20,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v22 = Entity;
  if ( Entity != 0 )
  {
    v23 = Entity->m_pEntity;
    if ( v23 != 0 )
    {
      v24 = 0x7FFF;
      if ( v23->m_EHandle.m_Index != -1 )
        v24 = v23->m_EHandle.m_Index & 0x7FFF;
      v147 = (((v23->m_EHandle.m_Index >> 15) - (v23->m_flags & 1)) << 15) | v24 & 0x7FFF;
    }
    v149[0] = v23;
    v149[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v149,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v22, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v29 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v29 - 1);
        (pfn)(v29, v22, i);
      }
    }
  }
  if ( vecOriginb )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  if ( (v147 + 2) > 1 && (v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v147 >> 9) & 0x3F]) != 0 )
  {
    m_pInstance = 0;
    v32 = &v30[v147 & 0x1FF];
    if ( v32 != 0 && v147 == v32->m_EHandle.m_Index )
      m_pInstance = v32->m_pInstance;
  }
  else
  {
    m_pInstance = 0;
  }
LABEL_39:
  v33 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_4077F50;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v33 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v33);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v34 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v34);
      operator delete(v34);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  return m_pInstance;
}


// CKeepUpright::Simulate  (line 967, @0x00000000022ccfc0, libserver.so)  // inlines: Init, VectorIRotate, operator*=, operator-=, operator=
// calls: VectorIRotate, ComputeRotSpeedToAlignAxes
__int64 __fastcall CKeepUpright::Simulate(
        CKeepUpright *const this,
        IPhysicsMotionController *pController,
        IPhysicsObject *pObject,
        float deltaTime,
        Vector *const linear,
        AngularImpulse *const angular)
{
  __int64 result; // rax
  double v10; // xmm0_8
  __int64 v11; // rax
  vec_t v12; // xmm1_4
  Vector *p_m_localTestAxis; // rdi
  float m_angularLimit; // xmm2_4
  float v15; // xmm1_4
  unsigned __int64 v16; // xmm0_8
  float v17; // xmm1_4
  float v18; // xmm1_4
  vec_t v19; // xmm2_4
  vec_t v20; // xmm0_4
  float invDeltaTime; // [rsp+Ch] [rbp-84h]
  AngularImpulse angVel; // [rsp+10h] [rbp-80h] BYREF
  Vector currentLocalTargetAxis; // [rsp+20h] [rbp-70h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-60h]
  matrix3x4_t matrix; // [rsp+40h] [rbp-50h] BYREF

  result = 0;
  if ( this->m_bActive )
  {
    linear->x = 0.0;
    linear->y = 0.0;
    linear->z = 0.0;
    v10 = (*(*pObject + 592LL))(pObject, pController);
    v11 = *pObject;
    *&angVel.x = v10;
    angVel.z = v12;
    (*(v11 + 1680))(pObject, &matrix);
    VectorIRotate(&this->m_worldGoalAxis.x, &matrix, &currentLocalTargetAxis.x);
    p_m_localTestAxis = &this->m_localTestAxis;
    m_angularLimit = this->m_angularLimit;
    v15 = 1.0 / deltaTime;
    invDeltaTime = 1.0 / deltaTime;
    if ( this->m_bDampAllRotation )
    {
      v25 = ComputeRotSpeedToAlignAxes(p_m_localTestAxis, &currentLocalTargetAxis, &angVel, 0.0, v15, m_angularLimit).m128i_u64[0];
      v19 = (*&v25 - angVel.x) * invDeltaTime;
      v20 = (*(&v25 + 1) - angVel.y) * invDeltaTime;
      angular->z = (v18 - angVel.z) * invDeltaTime;
      angular->x = v19;
      angular->y = v20;
    }
    else
    {
      v16 = ComputeRotSpeedToAlignAxes(p_m_localTestAxis, &currentLocalTargetAxis, &angVel, 1.0, v15, m_angularLimit).m128i_u64[0];
      v25 = v16;
      angular->y = *(&v16 + 1) * invDeltaTime;
      angular->x = *&v16 * invDeltaTime;
      angular->z = invDeltaTime * v17;
    }
    return 1;
  }
  return result;
}


// ComputeRotSpeedToAlignAxes  (line 1013, @0x00000000022cce10, libserver.so)  // inlines: CrossProduct, DotProduct, RAD2DEG, VectorMultiply, operator*, operator-=
// calls: VectorNormalize, atan2
// callers: CKeepUpright::Simulate
__m128i __fastcall ComputeRotSpeedToAlignAxes(
        const Vector *const testAxis,
        const Vector *const alignAxis,
        const AngularImpulse *const currentSpeed,
        float damping,
        float scale,
        float maxSpeed)
{
  float y; // xmm5_4
  float v8; // xmm4_4
  float z; // xmm1_4
  float v10; // xmm0_4
  float x; // xmm8_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  __m128d v14; // xmm0
  float v15; // xmm4_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v23; // [rsp+Ch] [rbp-54h]
  Vector rotationAxis; // [rsp+20h] [rbp-40h] BYREF
  AngularImpulse angular; // [rsp+30h] [rbp-30h] BYREF
  __m128i v26; // [rsp+40h] [rbp-20h] BYREF

  y = alignAxis->y;
  v8 = testAxis->y;
  z = testAxis->z;
  v10 = alignAxis->z;
  x = testAxis->x;
  v12 = alignAxis->x;
  rotationAxis.x = (v8 * v10) - (y * z);
  rotationAxis.y = (v12 * z) - (x * v10);
  rotationAxis.z = (x * y) - (v8 * v12);
  v23 = ((v12 * x) + (v8 * y)) + (v10 * z);
  v13 = VectorNormalize(&rotationAxis);
  v14.m128d_f64[0] = atan2(v13, v23);
  v15 = _mm_movedup_pd(v14).m128d_f64[0];
  v16 = v15 * 57.295776;
  v17 = ((currentSpeed->x * rotationAxis.x) + (currentSpeed->y * rotationAxis.y)) + (currentSpeed->z * rotationAxis.z);
  angular.x = ((scale * rotationAxis.x) * v16) - ((rotationAxis.x * damping) * v17);
  angular.y = ((scale * rotationAxis.y) * v16) - ((rotationAxis.y * damping) * v17);
  angular.z = ((scale * rotationAxis.z) * v16) - ((damping * rotationAxis.z) * v17);
  v18 = fminf(maxSpeed, VectorNormalize(&angular));
  *&v26.m128i_i32[1] = angular.y * v18;
  *v26.m128i_i32 = v18 * angular.x;
  return _mm_loadl_epi64(&v26);
}


