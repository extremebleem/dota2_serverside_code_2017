// Reconstructed from DWARF by pahole; not original source.

// src/game/server/explode.cpp:21
class CShower : public CPointEntity {
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
	CShower(CShower &);
	CShower(CShower &);
	CShower();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Think();
	virtual void Touch(CBaseEntity *);
	virtual int ObjectCaps();
	virtual ~CShower();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[117] Think
	// vtable[112] Touch
	// vtable[19] ObjectCaps
	// sizeof = 776
};

// src/game/server/explode.cpp:90
class CEnvExplosion : public CModelPointEntity {
public:

private:

	static datamap_t m_DataMap;

	int m_iMagnitude;  // +0x480
	int m_iRadiusOverride;  // +0x484
	int m_spriteScale;  // +0x488
	float m_flDamageForce;  // +0x48c
	EHANDLE m_hInflictor;  // +0x490
	int m_iCustomDamageType;  // +0x494
	int m_iClassIgnore;  // +0x498
	EHANDLE m_hEntityIgnore;  // +0x49c
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
	CEnvExplosion(CEnvExplosion &);
	CEnvExplosion(CEnvExplosion &);
	CEnvExplosion();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	void Smoke();
	void SetCustomDamageType(int);
	virtual int DrawDebugTextOverlays(uint64, int);
	void InputExplode(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvExplosion();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// sizeof = 1184
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CShower::~CShower  (line 21, @0x0000000002210820, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CShower::~CShower(CShower *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CShower::~CShower  (line 21, @0x0000000002210840, libserver.so)  // inlines: ~CPointEntity, ~CShower
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CShower::~CShower(CShower *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CShower::Schema_DynamicBinding  (line 23, @0x000000000220e390, libserver.so)
// globals: CShower::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CShower::Schema_DynamicBinding(const CShower *const this)
{
  return CShower::s_pSchemaBinding;
}


// CShower::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 23, @0x000000000220e3a0, libserver.so)
// globals: CShower::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CShower::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CShower::CEntityInstanceEntityClass *const this)
{
  return CShower::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CShower::CEntityInstanceEntityClass::DestructInstance  (line 23, @0x000000000220e3b0, libserver.so)  // inlines: Destruct<CShower>
void __fastcall CShower::CEntityInstanceEntityClass::DestructInstance(
        CShower::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CShower::CEntityInstanceEntityClass::FreeInstance  (line 23, @0x000000000220e3d0, libserver.so)
void __fastcall CShower::CEntityInstanceEntityClass::FreeInstance(
        CShower::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CShower::CEntityInstanceEntityClass::CanAllocate  (line 23, @0x000000000220e3f0, libserver.so)
bool __fastcall CShower::CEntityInstanceEntityClass::CanAllocate(const CShower::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CShower::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 23, @0x000000000220e400, libserver.so)
// globals: CShower::s_pSchemaBinding
const ISchemaBinding *__fastcall CShower::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CShower::CEntityInstanceEntityClass *const this)
{
  return CShower::s_pSchemaBinding;
}


// CShower::CEntityInstanceEntityClass::AllocateInstance  (line 23, @0x000000000220fba0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CShower::CEntityInstanceEntityClass::AllocateInstance(CShower::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CShower::CEntityInstanceEntityClass::ConstructInstance  (line 23, @0x0000000002210100, libserver.so)  // inlines: CPointEntity, CShower, Construct<CShower>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CShower::CEntityInstanceEntityClass::ConstructInstance(
        CShower::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4031D70;
  }
  return p;
}


// CShower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x0000000002212490, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CShower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CShower::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CShower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x00000000022124b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CShower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CShower::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CShower::GetEntityClassInternal  (line 23, @0x0000000002216520, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "spark_shower", "CShower"
// globals: `guard variable for'CShower::GetEntityClassInternal(void)::g_EntityCShowerClass, CShower::GetEntityClassInternal(void)::g_EntityCShowerClass, __dso_handle, CShower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CShower::GetEntityClassInfo(void)::g_EntityCShowerClassInfo, CShower::GetEntityClassInfo(void)::g_EntityCShowerClassInfo
CEntityClass *__cdecl CShower::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CShower::GetEntityClassInternal(void)::g_EntityCShowerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CShower::GetEntityClassInternal(void)::g_EntityCShowerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CShower::GetEntityClassInternal(void)::g_EntityCShowerClass);
    CShower::GetEntityClassInternal(void)::g_EntityCShowerClass._vptr_CEntityClass = off_4031CF0;
    __cxa_guard_release(&`guard variable for'CShower::GetEntityClassInternal(void)::g_EntityCShowerClass);
    __cxa_atexit(
      CShower::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CShower::GetEntityClassInternal(void)::g_EntityCShowerClass,
      &_dso_handle);
  }
  if ( g_pEntityCShowerClass != 0 )
    return &CShower::GetEntityClassInternal(void)::g_EntityCShowerClass;
  if ( `guard variable for'CShower::GetEntityClassInfo(void)::g_EntityCShowerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CShower::GetEntityClassInfo(void)::g_EntityCShowerClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CShower::GetEntityClassInfo(void)::g_EntityCShowerClassInfo,
      "CShower",
      "spark_shower",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CShower::GetEntityClassInfo(void)::g_EntityCShowerClassInfo);
  }
  CShower::GetEntityClassInternal(void)::g_EntityCShowerClass.m_pClassInfo = &CShower::GetEntityClassInfo(void)::g_EntityCShowerClassInfo;
  CShower::GetEntityClassInternal(void)::g_EntityCShowerClass.m_pBaseClassInfo = CShower::GetEntityClassInfo(void)::g_EntityCShowerClassInfo.m_pBaseClassInfo;
  g_pEntityCShowerClass = &CShower::GetEntityClassInternal(void)::g_EntityCShowerClass;
  CShower::GetEntityClassInfo(void)::g_EntityCShowerClassInfo.m_pClass = &CShower::GetEntityClassInternal(void)::g_EntityCShowerClass;
  CShower::GetEntityClassInternal(void)::g_EntityCShowerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCShowerClass->m_pComponentOverrides = 0;
  return &CShower::GetEntityClassInternal(void)::g_EntityCShowerClass;
}


// CShower::ObjectCaps  (line 29, @0x000000000220e410, libserver.so)
int __fastcall CShower::ObjectCaps(CShower *const this)
{
  return 0x80000000;
}


// CShower::Spawn  (line 33, @0x00000000021f3d60, libserver.so)  // inlines: SetGravity, VectorMultiply, curtime, operator*, operator=
// calls: CPointEntity::Spawn, CBaseEntity::GetLocalAngles, AngleVectors, CBaseEntity::SetAbsVelocity, CBaseEntity::SetMoveType, UTIL_ScaleForGravity, CBaseEntity::SetNextThink, CBaseEntity::AddEffects, CBaseEntity::SetLocalAngles
void __fastcall CShower::Spawn(CShower *const this, const CEntityKeyValues *pKeyValues)
{
  const QAngle *LocalAngles; // rax
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  double v9; // xmm1_8
  CGlobalVars *v10; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v12; // xmm0_8
  Vector vecForward; // [rsp+0h] [rbp-40h] BYREF
  Vector vecNewVelocity; // [rsp+10h] [rbp-30h] BYREF

  CPointEntity::Spawn(this, pKeyValues);
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  AngleVectors(LocalAngles, &vecForward, 0, 0);
  v4 = (*(*random_valve + 8LL))(random_valve, 200.0, 300.0);
  vecNewVelocity.y = vecForward.y * v4;
  vecNewVelocity.z = vecForward.z * v4;
  vecNewVelocity.x = v4 * vecForward.x;
  v5 = (*(*random_valve + 8LL))(random_valve, -100.0, 100.0);
  vecNewVelocity.x = v5 + vecNewVelocity.x;
  v6 = (*(*random_valve + 8LL))(random_valve, -100.0, 100.0);
  vecNewVelocity.y = v6 + vecNewVelocity.y;
  if ( vecNewVelocity.z < 0.0 )
    v7 = vecNewVelocity.z - 200.0;
  else
    v7 = vecNewVelocity.z + 200.0;
  vecNewVelocity.z = v7;
  CBaseEntity::SetAbsVelocity(this, &vecNewVelocity);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_FLYGRAVITY, MoveCollide_t::MOVECOLLIDE_FLY_BOUNCE);
  this->m_flGravity = UTIL_ScaleForGravity(v8);
  v10 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v12) = 0;
    *&v12 = v10->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v12 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v12, v9, 0);
  CBaseEntity::AddEffects(this, 32);
  this->m_flSpeed = (*(*random_valve + 8LL))(random_valve, 0.5, 1.5);
  CBaseEntity::SetLocalAngles(this, &vec3_angle);
}


// CShower::Think  (line 61, @0x00000000021f5cb0, libserver.so)  // inlines: curtime
// calls: CBaseEntity::GetAbsOrigin, ITempEntsSystem::Sparks, CBaseEntity::SetNextThink, CBaseEntity::SetGroundEntity, UTIL_Remove
void __fastcall CShower::Think(CShower *const this)
{
  const Vector *AbsOrigin; // rax
  double v3; // xmm1_8
  float v4; // xmm0_4
  CGlobalVars *v5; // r12
  double v6; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  ITempEntsSystem::Sparks(g_pEffects, AbsOrigin, 1, 1, 0);
  v4 = this->m_flSpeed - 0.1;
  this->m_flSpeed = v4;
  if ( v4 <= 0.0 )
  {
    UTIL_Remove(this);
    CBaseEntity::SetGroundEntity(this, 0);
  }
  else
  {
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
      *&v6 = v5->m_flCurrentTime + 0.1;
    }
    else
    {
      *&v6 = 1036831949;
    }
    CBaseEntity::SetNextThink(this, v6, v3, 0);
    CBaseEntity::SetGroundEntity(this, 0);
  }
}


// CShower::Touch  (line 74, @0x00000000021ef7c0, libserver.so)  // inlines: GetAbsVelocity, operator*=
// calls: CBaseEntity::SetAbsVelocity, CBaseEntity::CalcAbsoluteVelocity
void __fastcall CShower::Touch(CShower *const this, CBaseEntity *pOther)
{
  bool v3; // zf
  float v4; // xmm2_4
  Vector vecNewVelocity; // [rsp+0h] [rbp-20h] BYREF

  if ( (this->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  v3 = (this->m_fFlags.m_Value & 1) == 0;
  v4 = 0.1;
  vecNewVelocity = this->m_vecAbsVelocity;
  if ( v3 )
    v4 = 0.60000002;
  vecNewVelocity.x = vecNewVelocity.x * v4;
  vecNewVelocity.y = vecNewVelocity.y * v4;
  vecNewVelocity.z = v4 * vecNewVelocity.z;
  if ( ((vecNewVelocity.x * vecNewVelocity.x) + (vecNewVelocity.y * vecNewVelocity.y)) < 10.0 )
    this->m_flSpeed = 0.0;
  CBaseEntity::SetAbsVelocity(this, &vecNewVelocity);
}


// CEnvExplosion::~CEnvExplosion  (line 90, @0x0000000002210d70, libserver.so)  // inlines: ~CModelPointEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CEnvExplosion::~CEnvExplosion(CEnvExplosion *const this)
{
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CEnvExplosion::~CEnvExplosion  (line 90, @0x0000000002210d90, libserver.so)  // inlines: ~CEnvExplosion, ~CModelPointEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CEnvExplosion::~CEnvExplosion(CEnvExplosion *const this)
{
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvExplosion::GetEntityClass  (line 92, @0x000000000220e420, libserver.so)
CEntityClass *__cdecl CEnvExplosion::GetEntityClass()
{
  return g_pEntityCEnvExplosionClass;
}


// CEnvExplosion::Schema_DynamicBinding  (line 92, @0x000000000220e430, libserver.so)
// globals: CEnvExplosion::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvExplosion::Schema_DynamicBinding(const CEnvExplosion *const this)
{
  return CEnvExplosion::s_pSchemaBinding;
}


// CEnvExplosion::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 92, @0x000000000220e440, libserver.so)
// globals: CEnvExplosion::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvExplosion::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvExplosion::CEntityInstanceEntityClass *const this)
{
  return CEnvExplosion::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvExplosion::CEntityInstanceEntityClass::DestructInstance  (line 92, @0x000000000220e450, libserver.so)  // inlines: Destruct<CEnvExplosion>
void __fastcall CEnvExplosion::CEntityInstanceEntityClass::DestructInstance(
        CEnvExplosion::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvExplosion::CEntityInstanceEntityClass::FreeInstance  (line 92, @0x000000000220e470, libserver.so)
void __fastcall CEnvExplosion::CEntityInstanceEntityClass::FreeInstance(
        CEnvExplosion::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvExplosion::CEntityInstanceEntityClass::CanAllocate  (line 92, @0x000000000220e490, libserver.so)
bool __fastcall CEnvExplosion::CEntityInstanceEntityClass::CanAllocate(
        const CEnvExplosion::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvExplosion::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 92, @0x000000000220e4a0, libserver.so)
// globals: CEnvExplosion::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvExplosion::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvExplosion::CEntityInstanceEntityClass *const this)
{
  return CEnvExplosion::s_pSchemaBinding;
}


// CEnvExplosion::CEntityInstanceEntityClass::AllocateInstance  (line 92, @0x000000000220fbe0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvExplosion::CEntityInstanceEntityClass::AllocateInstance(
        CEnvExplosion::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1184);
  memset(v1, 0, 0x4A0u);
  return v1;
}


// CEnvExplosion::CEntityInstanceEntityClass::ConstructInstance  (line 92, @0x00000000022104a0, libserver.so)  // inlines: CEntityHandle, CEnvExplosion, CHandle, CModelPointEntity, Construct<CEnvExplosion>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CEnvExplosion::CEntityInstanceEntityClass::ConstructInstance(
        CEnvExplosion::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 292) = -1;
    *p = &off_4032490;
    *(p + 295) = -1;
  }
  return p;
}


// CEnvExplosion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 92, @0x00000000022124e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvExplosion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvExplosion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvExplosion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 92, @0x0000000002212500, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvExplosion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvExplosion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvExplosion::GetEntityClassInternal  (line 92, @0x0000000002216670, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "env_explosion", "CEnvExplosion", "CModelPointEntity"
// globals: `guard variable for'CEnvExplosion::GetEntityClassInternal(void)::g_EntityCEnvExplosionClass, CEnvExplosion::GetEntityClassInternal(void)::g_EntityCEnvExplosionClass, __dso_handle, CEnvExplosion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvExplosion::GetEntityClassInfo(void)::g_EntityCEnvExplosionClassInfo, CEnvExplosion::GetEntityClassInfo(void)::g_EntityCEnvExplosionClassInfo, `guard variable for'CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo, CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo
CEntityClass *__cdecl CEnvExplosion::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvExplosion::GetEntityClassInternal(void)::g_EntityCEnvExplosionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvExplosion::GetEntityClassInternal(void)::g_EntityCEnvExplosionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvExplosion::GetEntityClassInternal(void)::g_EntityCEnvExplosionClass);
    CEnvExplosion::GetEntityClassInternal(void)::g_EntityCEnvExplosionClass._vptr_CEntityClass = off_4032410;
    __cxa_guard_release(&`guard variable for'CEnvExplosion::GetEntityClassInternal(void)::g_EntityCEnvExplosionClass);
    __cxa_atexit(
      CEnvExplosion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvExplosion::GetEntityClassInternal(void)::g_EntityCEnvExplosionClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvExplosionClass != 0 )
    return &CEnvExplosion::GetEntityClassInternal(void)::g_EntityCEnvExplosionClass;
  if ( `guard variable for'CEnvExplosion::GetEntityClassInfo(void)::g_EntityCEnvExplosionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvExplosion::GetEntityClassInfo(void)::g_EntityCEnvExplosionClassInfo) != 0 )
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
      &CEnvExplosion::GetEntityClassInfo(void)::g_EntityCEnvExplosionClassInfo,
      "CEnvExplosion",
      "env_explosion",
      0,
      &CModelPointEntity::GetEntityClassInfo(void)::g_EntityCModelPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvExplosion::GetEntityClassInfo(void)::g_EntityCEnvExplosionClassInfo);
  }
  CEnvExplosion::GetEntityClassInternal(void)::g_EntityCEnvExplosionClass.m_pClassInfo = &CEnvExplosion::GetEntityClassInfo(void)::g_EntityCEnvExplosionClassInfo;
  CEnvExplosion::GetEntityClassInternal(void)::g_EntityCEnvExplosionClass.m_pBaseClassInfo = CEnvExplosion::GetEntityClassInfo(void)::g_EntityCEnvExplosionClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvExplosionClass = &CEnvExplosion::GetEntityClassInternal(void)::g_EntityCEnvExplosionClass;
  CEnvExplosion::GetEntityClassInfo(void)::g_EntityCEnvExplosionClassInfo.m_pClass = &CEnvExplosion::GetEntityClassInternal(void)::g_EntityCEnvExplosionClass;
  CEnvExplosion::GetEntityClassInternal(void)::g_EntityCEnvExplosionClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCEnvExplosionClass->m_pComponentOverrides = 0;
  return &CEnvExplosion::GetEntityClassInternal(void)::g_EntityCEnvExplosionClass;
}


// CEnvExplosion::GetDataDescMap  (line 121, @0x00000000021ee790, libserver.so)
// globals: CEnvExplosion::m_DataMap
datamap_t *__fastcall CEnvExplosion::GetDataDescMap(CEnvExplosion *const this)
{
  return &CEnvExplosion::m_DataMap;
}


// CEnvExplosion::AddDatadescMetadataKeys  (line 121, @0x00000000021fade0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvExplosion::GetEntityClass(void)
void __fastcall CEnvExplosion::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvExplosion::GetEntityClass);
}


// CEnvExplosion::GetBaseMap  (line 121, @0x00000000021fae00, libserver.so)
datamap_t *__cdecl CEnvExplosion::GetBaseMap()
{
  return &CModelPointEntity::m_DataMap;
}


// DataMapInit<CEnvExplosion>  (line 121, @0x0000000002204ee0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CEnvExplosion"
// globals: `guard variable for'DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder, `guard variable for'DataMapInit<CEnvExplosion>(CEnvExplosion *)::dataDesc, CEnvExplosion::GetEntityClass(void), CEnvExplosion::m_DataMap, DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvExplosion>(CEnvExplosion *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder.m_pszBase = "CEnvExplosion";
    DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder,
      &_dso_handle);
  }
  CEnvExplosion::m_DataMap.baseMap = &CModelPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvExplosion>(CEnvExplosion *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvExplosion>(CEnvExplosion *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder.m_nLenBase + 6);
    strcpy(stpcpy(v2, DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder.m_pszBase), "Smoke");
    m_Size = DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder.m_Names.m_Size == DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CEnvExplosion>(CEnvExplosion *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CEnvExplosion>(CEnvExplosion *)::dataDesc[9].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvExplosion>(CEnvExplosion *)::dataDesc);
  }
  CEnvExplosion::m_DataMap.dataNumFields = 10;
  CEnvExplosion::m_DataMap.dataDesc = &DataMapInit<CEnvExplosion>(CEnvExplosion *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvExplosion::m_DataMap, CEnvExplosion::GetEntityClass);
  return &CEnvExplosion::m_DataMap;
}


// CEnvExplosion::Precache  (line 142, @0x000000000220d440, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheScriptSound
// strings: "explode_3"
void __fastcall CEnvExplosion::Precache(CEnvExplosion *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheScriptSound("explode_3", pContext);
}


// CEnvExplosion::Spawn  (line 149, @0x00000000021ef880, libserver.so)
// calls: CModelPointEntity::Spawn, CBaseEntity::AddEffects, CBaseEntity::SetMoveType
void __fastcall CEnvExplosion::Spawn(CEnvExplosion *const this, const CEntityKeyValues *pKeyValues)
{
  unsigned int m_Value; // eax
  float v4; // xmm0_4
  float v5; // xmm1_4
  int v6; // eax

  CModelPointEntity::Spawn(this, pKeyValues);
  CBaseEntity::AddEffects(this, 32);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  m_Value = this->m_spawnflags.m_Value;
  v4 = (this->m_iMagnitude - 50) * 0.6;
  if ( (m_Value & 0x800) != 0 )
  {
    v5 = 1.0;
    if ( v4 >= 1.0 )
      goto LABEL_3;
LABEL_9:
    v4 = v5;
    if ( (m_Value & 0x1000) == 0 )
    {
      v6 = v5;
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  v5 = 10.0;
  if ( v4 < 10.0 )
    goto LABEL_9;
LABEL_3:
  if ( (m_Value & 0x1000) == 0 )
  {
    v6 = 50;
    if ( v4 > 50.0 )
      goto LABEL_5;
LABEL_7:
    v6 = v4;
    goto LABEL_5;
  }
LABEL_4:
  v6 = 200;
  if ( v4 <= 200.0 )
    goto LABEL_7;
LABEL_5:
  this->m_spriteScale = v6;
  this->m_iCustomDamageType = -1;
}


// CEnvExplosion::InputExplode  (line 207, @0x00000000021f4770, libserver.so)  // inlines: AddDamageType, CEntityHandle, CGameTrace, CPASFilter, EnableInteractsWith, Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, HasSpawnFlags, IndexToIdentity, Init, IsValid, LengthSqr, LookupEntity, Ray_t, RnCollisionAttr_t, SetDamageForce, SetDamagePosition, TraceRay, UTIL_PointContents, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator bool, operator*, operator+, operator=, operator==<RenderMode_t>, ~CPASFilter
// calls: CGameTrace::Init, CBaseEntity::GetAbsOrigin, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, UTIL_DecalTrace, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CTakeDamageInfo::CTakeDamageInfo, CEntityHandle::operator CEntityInstance*, RadiusDamage, CTakeDamageInfo::~CTakeDamageInfo, CBaseEntity::ThinkSet (20 total)
// strings: "Scorch", "spark_shower", "Ice_Explosion_Decal"
// globals: CEntityHandle::gm_pEntityList, CEnvExplosion::Smoke(void)
// local variable allocation has failed, the output may be wrong!
void __fastcall CEnvExplosion::InputExplode(CEnvExplosion *const this, inputdata_t *const inputdata)
{
  const Vector *AbsOrigin; // rax
  vec_t v4; // xmm5_4
  vec_t v5; // xmm4_4
  vec_t v6; // xmm1_4
  float m_fValue; // xmm0_4
  unsigned int m_Value; // eax
  unsigned int v9; // r14d
  RenderMode_t v10; // dl
  unsigned int v11; // edx
  bool v12; // zf
  int m_iRadiusOverride; // eax
  double v14; // xmm1_8
  unsigned int v15; // esi
  unsigned __int16 v16; // dx
  int v17; // edi
  vec_t v18; // eax
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEnvExplosion *m_pInstance; // rdx
  int m_iCustomDamageType; // ecx
  uint32 m_Index; // eax
  CEnvExplosion *v24; // rsi
  float m_iMagnitude; // xmm0_4
  CEntityIdentity *v26; // rsi
  __int64 v27; // rdi
  CEntityIdentity *v28; // rdi
  const Vector *v29; // rax
  vec_t z; // xmm0_4
  unsigned int m_iClassIgnore; // r14d
  const Vector *v32; // rax
  float v33; // xmm0_4
  double v34; // xmm1_8
  const Vector *v35; // rax
  int v36; // r14d
  int i; // ebx
  CEntityInstance *v38; // rax
  CBaseEntity *pAttacker; // [rsp+20h] [rbp-310h]
  CBaseEntity *iDamageTypea; // [rsp+28h] [rbp-308h]
  int iDamageType; // [rsp+28h] [rbp-308h]
  float v42; // [rsp+30h] [rbp-300h]
  int iRadius; // [rsp+34h] [rbp-2FCh]
  __int128 vecExplodeOrigin; // [rsp+40h] [rbp-2F0h] OVERLAPPED BYREF
  QAngle angles; // [rsp+80h] [rbp-2B0h] BYREF
  int v46; // [rsp+8Ch] [rbp-2A4h]
  float v47; // [rsp+90h] [rbp-2A0h]
  float x; // [rsp+94h] [rbp-29Ch]
  float y; // [rsp+98h] [rbp-298h]
  vec_t v50; // [rsp+9Ch] [rbp-294h]
  int v51; // [rsp+A0h] [rbp-290h]
  int v52; // [rsp+A4h] [rbp-28Ch]
  int v53; // [rsp+A8h] [rbp-288h]
  int v54; // [rsp+ACh] [rbp-284h]
  int v55; // [rsp+B0h] [rbp-280h]
  int v56; // [rsp+B4h] [rbp-27Ch]
  int v57; // [rsp+B8h] [rbp-278h]
  int v58; // [rsp+BCh] [rbp-274h]
  float v59; // [rsp+C0h] [rbp-270h]
  char v60; // [rsp+C4h] [rbp-26Ch]
  bool v61; // [rsp+C5h] [rbp-26Bh]
  int v62; // [rsp+D0h] [rbp-260h]
  trace_t tr; // [rsp+110h] [rbp-220h] BYREF
  CPASFilter filter; // [rsp+1C0h] [rbp-170h] BYREF
  unsigned __int64 v65; // [rsp+2F8h] [rbp-38h]

  v65 = __readfsqword(0x28u);
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v4 = AbsOrigin->x + 0.0;
  v5 = AbsOrigin->y + 0.0;
  v6 = AbsOrigin->z + 8.0;
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  x = (v5 + 0.0) - v5;
  y = (v6 - 40.0) - v6;
  v59 = m_fValue;
  angles.x = v4;
  angles.y = v5;
  angles.z = v6;
  v46 = 0;
  v50 = 0.0;
  v47 = (v4 + 0.0) - v4;
  v54 = 0;
  v58 = 0;
  v57 = 0;
  v56 = 0;
  v55 = 0;
  v60 = 1;
  v53 = 0;
  v52 = 0;
  v51 = 0;
  v61 = (((v47 * v47) + (x * x)) + (y * y)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&vecExplodeOrigin, this, 4, 0);
  *(&vecExplodeOrigin + 1) |= 0x1F001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &angles, &vecExplodeOrigin, &tr);
  *&vecExplodeOrigin = *CBaseEntity::GetAbsOrigin(this);
  if ( tr.fraction != 1.0 )
  {
    *(&vecExplodeOrigin + 1) = (tr.plane.normal.y * 24.0) + tr.endpos.y;
    *(&vecExplodeOrigin + 2) = (tr.plane.normal.z * 24.0) + tr.endpos.z;
    *&vecExplodeOrigin = (24.0 * tr.plane.normal.x) + tr.endpos.x;
  }
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x10) == 0 )
  {
    if ( (m_Value & 0x8000) != 0 )
      UTIL_DecalTrace(&tr, "Ice_Explosion_Decal");
    else
      UTIL_DecalTrace(&tr, "Scorch");
    m_Value = this->m_spawnflags.m_Value;
  }
  v9 = (16 * m_Value) & 0x40;
  if ( (m_Value & 0x40) != 0 )
    v9 = (16 * m_Value) & 0x40 | 4;
  if ( (m_Value & 0x80u) != 0 )
    v9 |= 0x20u;
  v10 = this->m_nRenderMode.m_Value;
  if ( v10 == RenderMode_t::kRenderTransAlpha )
  {
    v9 |= 0x10u;
  }
  else if ( v10 != RenderMode_t::kRenderTransAdd )
  {
    v9 |= 1u;
  }
  if ( (m_Value & 0x200) != 0 )
    v9 |= 8u;
  if ( (m_Value & 0x400) == 0 )
    v9 |= 2u;
  v11 = v9;
  v12 = (m_Value & 0x100) == 0;
  m_iRadiusOverride = this->m_iRadiusOverride;
  if ( !v12 )
  {
    LOBYTE(v11) = v9 | 0x80;
    v9 = v11;
  }
  if ( m_iRadiusOverride <= 0 )
    iRadius = (this->m_iMagnitude * 2.5);
  else
    iRadius = m_iRadiusOverride;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &vecExplodeOrigin);
  v14 = 0.0;
  if ( (this->m_spawnflags.m_Value & 4) == 0 )
    v14 = this->m_spriteScale / 10.0;
  (*(te->_vptr_IPredictionSystem + 15))(
    te,
    &filter,
    &vecExplodeOrigin,
    15,
    v9,
    iRadius,
    0.0,
    v14,
    this->m_iMagnitude,
    0,
    67,
    1);
  v15 = this->m_spawnflags.m_Value;
  if ( (v15 & 1) == 0 )
  {
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v16 = 0x7FFF;
      v17 = 0x7FFF;
    }
    else
    {
      v16 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v17 = v16;
    }
    LODWORD(v18) = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v16 & 0x7FFF;
    angles.x = v18;
    if ( (LODWORD(v18) + 2) > 1
      && (v19 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v17 >> 9]) != 0
      && (v20 = &v19[v17 & 0x1FF]) != 0
      && LODWORD(v18) == v20->m_EHandle.m_Index )
    {
      m_pInstance = v20->m_pInstance;
      if ( m_pInstance == 0 )
        m_pInstance = this;
    }
    else
    {
      m_pInstance = this;
    }
    m_iCustomDamageType = this->m_iCustomDamageType;
    if ( m_iCustomDamageType == -1 )
      m_iCustomDamageType = (v15 & 0x4000) == 0 ? 0x40 : 0;
    m_Index = this->m_hInflictor.m_Index;
    v24 = this;
    m_iMagnitude = this->m_iMagnitude;
    if ( m_Index + 2 > 1 )
    {
      v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hInflictor.m_Index) >> 9) & 0x3F];
      if ( v26 != 0 )
      {
        v27 = this->m_hInflictor.m_Index & 0x1FF;
        v12 = &v26[v27] == 0;
        v28 = &v26[v27];
        v24 = this;
        if ( !v12 && m_Index == v28->m_EHandle.m_Index )
        {
          v42 = this->m_iMagnitude;
          pAttacker = m_pInstance;
          iDamageType = m_iCustomDamageType;
          v38 = CEntityHandle::operator CEntityInstance *(&this->m_hInflictor);
          m_iCustomDamageType = iDamageType;
          v24 = v38;
          m_pInstance = pAttacker;
          m_iMagnitude = v42;
        }
      }
      else
      {
        v24 = this;
      }
    }
    CTakeDamageInfo::CTakeDamageInfo(&angles, v24, m_pInstance, m_iMagnitude, m_iCustomDamageType, 0);
    if ( (this->m_spawnflags.m_Value & 0x2000) != 0 )
      v62 |= 0x8000000u;
    if ( this->m_flDamageForce != 0.0 )
    {
      v29 = CBaseEntity::GetAbsOrigin(this);
      x = v29->x;
      y = v29->y;
      z = v29->z;
      v46 = 0;
      v47 = 0.0;
      v50 = z;
      angles.z = this->m_flDamageForce;
    }
    iDamageTypea = CEntityHandle::operator CEntityInstance *(&this->m_hEntityIgnore);
    m_iClassIgnore = this->m_iClassIgnore;
    v32 = CBaseEntity::GetAbsOrigin(this);
    RadiusDamage(&angles, v32, iRadius, m_iClassIgnore, iDamageTypea, 0);
    CTakeDamageInfo::~CTakeDamageInfo(&angles);
  }
  CBaseEntity::ThinkSet(this, CEnvExplosion::Smoke, 0.0, 0, 0);
  v33 = CGlobalVarsBase::curtime(gpGlobals, 0);
  CBaseEntity::SetNextThink(this, v33 + 0.3, v34, 0);
  v35 = CBaseEntity::GetAbsOrigin(this);
  if ( ((CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, v35, 0x1C000u) >> 8) & 0x80u) != 0
    && (this->m_spawnflags.m_Value & 0x20) == 0 )
  {
    v36 = (*(*random_valve + 16LL))(random_valve, 0, 3);
    if ( v36 > 0 )
    {
      for ( i = 0; i != v36; ++i )
      {
        VectorAngles(&tr.plane.normal, &angles);
        CBaseEntity::Create("spark_shower", &vecExplodeOrigin, &angles, 0);
      }
    }
  }
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CEnvExplosion::Smoke  (line 347, @0x00000000021ef410, libserver.so)
// calls: UTIL_Remove
void __fastcall CEnvExplosion::Smoke(CEnvExplosion *const this)
{
  if ( (this->m_spawnflags.m_Value & 2) == 0 )
    UTIL_Remove(this);
}


// ExplosionCreate  (line 357, @0x0000000002206030, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<QAngle>, AddKeyValue<Vector>, AddKeyValue<float>, AddKeyValue<int>, AddToTail, Allocate<QAngle>, Allocate<Vector>, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, CVariantBase, CopyData<QAngle>, CopyData<Vector>, Element, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetCustomDamageType, SetValue<QAngle>, SetValue<Vector>, SetValue<float>, SetValue<int>, SetValues<int, int>, SetWorldTransform, Spawn, Spawn<int, int>, operator CEntityInstance*, operator CEnvExplosion*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope, ~CVariantBase
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CVProfile::ExitScope, CBaseModelEntity::SetRenderMode, CEntityInstance::AcceptInput, CUtlString::FreeMemoryBlock (26 total)
// callers: CBreakableProp::Break, ExplosionCreate
// strings: "Server Simulation", "Spawn", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
void __fastcall ExplosionCreate(
        const Vector *const center,
        const QAngle *const angles,
        CBaseEntity *pOwner,
        int magnitude,
        int radius,
        int nSpawnFlags,
        float flExplosionForce,
        CBaseEntity *pInflictor,
        int iCustomDamageType,
        const EHANDLE *ignoredEntity,
        Class_T ignoredClass)
{
  CEntitySystem *v13; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v15; // rdx
  char v16; // al
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  int m_enabled; // edx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v20; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v22; // r12
  CEntityIdentity *m_pEntity; // rax
  __int16 v24; // si
  int v25; // edx
  CEntitySpawnerContext<CEnvExplosion> *m_pContext; // rbx
  CEntityKeyValues *i; // r13
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v30; // rdi
  CEntityIdentity *v31; // rax
  CEntityInstance *m_pInstance; // r12
  CEntityIdentity *v33; // rax
  CEntityIdentity *v34; // rdx
  int v35; // eax
  __int16 v36; // cx
  CUtlScratchMemoryPool *v37; // rdi
  CEntityKeyValues *v38; // rbx
  unsigned __int64 v40; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v41; // rax
  __int64 v42; // r12
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v43; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v44; // rax
  uint16 v45; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v46; // rax
  int v47; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v48; // cx
  __int64 v49; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v50; // rdx
  const char *m_pszClassname; // rdx
  int v52; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v53; // cx
  __int64 v54; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v55; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v57; // cx
  __int64 v58; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v59; // rdx
  int m_nEntitySpawnerDataUseCount; // esi
  __int16 v61; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v64; // rax
  uint16 m_flags; // ax
  vec_t *v66; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v67; // rax
  unsigned __int64 v68; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v69; // rax
  __int64 v70; // r12
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v71; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v72; // rax
  uint16 v73; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v74; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rcx
  int v78; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v79; // cx
  __int64 v80; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v81; // rdx
  __int16 v82; // r12
  unsigned __int64 v83; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v84; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v85; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v86; // rax
  uint16 v87; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v88; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rbx
  int v95; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v96; // cx
  __int64 v97; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v98; // rdx
  unsigned __int64 v99; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v100; // rax
  __int64 v101; // r13
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v102; // rax
  __int64 v103; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v104; // r13
  uint16 v105; // ax
  vec_t *v106; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v107; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rbx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v111; // rdx
  __int64 v112; // rax
  __int16 v113; // ax
  __int16 v114; // ax
  vec_t *v115; // rax
  __int16 v116; // ax
  __int16 v117; // ax
  vec_t *v118; // rax
  __int16 v119; // dx
  __int64 v120; // [rsp+18h] [rbp-128h]
  __int64 v121; // [rsp+20h] [rbp-120h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v122; // [rsp+20h] [rbp-120h]
  __int64 v123; // [rsp+20h] [rbp-120h]
  bool flExplosionForceb; // [rsp+38h] [rbp-108h]
  int radiusa; // [rsp+3Ch] [rbp-104h] BYREF
  int v130; // [rsp+40h] [rbp-100h]
  variant_t emptyVariant; // [rsp+50h] [rbp-F0h] BYREF
  _QWORD v132[2]; // [rsp+60h] [rbp-E0h] BYREF
  CEntitySpawner<CEnvExplosion> spawner; // [rsp+70h] [rbp-D0h] BYREF

  radiusa = radius;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_4032B70;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v13 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v13->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v13);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v15 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v15;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCEnvExplosionClass;
  if ( g_pApplication != 0 )
    v16 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v16 = 0;
  spawner.m_bValidateKeys = v16;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_4;
  m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_92:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v61 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
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
    m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = -467664362;
    v121 = v61;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v64 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v64 = 0;
    v120 = v121;
    v122 = &v64[v121];
    m_flags = v122->m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v122->m_value.m_flags = m_flags & 0xFFFE;
    v122->m_value.m_uint64 = 0;
    v122->m_value.m_type = 3;
    v66 = CEntityVariantAllocator::Allocate(0xCu);
    v122->m_value.m_uint64 = v66;
    *v66 = center->x;
    v66[1] = center->y;
    v66[2] = center->z;
    v122->m_value.m_flags |= 1u;
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v67 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v67 = 0;
    v67[v120].m_pAttributeName = 0;
  }
  else
  {
    v57 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v58 = 0;
    while ( 1 )
    {
      if ( v57 != 0 )
      {
        v59 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v57 > 9 )
          v59 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v59 = 0;
      }
      if ( v59[v58] == -467664362 )
        break;
      if ( m_nCount <= ++v58 )
        goto LABEL_92;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v92 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v93 = v58;
      v94 = &v92[v93];
      if ( v92[v93].m_pAttributeName != 0 )
      {
LABEL_142:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v92[v93].m_pAttributeName);
        goto LABEL_143;
      }
    }
    else
    {
      v93 = v58;
      v92 = 0;
      v94 = v93 * 24;
      if ( *(v93 * 24 + 16) != 0 )
        goto LABEL_142;
    }
    v114 = *(v94 + 10);
    if ( (v114 & 1) != 0 )
      *(v94 + 10) = v114 & 0xFFFE;
    *v94 = 0;
    *(v94 + 8) = 3;
    v115 = CEntityVariantAllocator::Allocate(0xCu);
    *v94 = v115;
    *v115 = center->x;
    v115[1] = center->y;
    v115[2] = center->z;
    *(v94 + 10) |= 1u;
  }
LABEL_143:
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_4;
  v95 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v95 > 0 )
  {
    v96 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v97 = 0;
    while ( 1 )
    {
      if ( v96 != 0 )
      {
        v98 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v96 > 9 )
          v98 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v98 = 0;
      }
      if ( v98[v97] == -1164387633 )
        break;
      if ( v95 <= ++v97 )
        goto LABEL_152;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v108 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v109 = v97;
      v110 = &v108[v109];
      if ( v108[v109].m_pAttributeName != 0 )
      {
LABEL_164:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v108[v109].m_pAttributeName);
LABEL_165:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        goto LABEL_4;
      }
    }
    else
    {
      v109 = v97;
      v108 = 0;
      v110 = v109 * 24;
      if ( *(v109 * 24 + 16) != 0 )
        goto LABEL_164;
    }
    v117 = *(v110 + 10);
    if ( (v117 & 1) != 0 )
      *(v110 + 10) = v117 & 0xFFFE;
    *v110 = 0;
    *(v110 + 8) = 39;
    v118 = CEntityVariantAllocator::Allocate(0xCu);
    *v110 = v118;
    *v118 = angles->x;
    v118[1] = angles->y;
    v118[2] = angles->z;
    *(v110 + 10) |= 1u;
    goto LABEL_165;
  }
LABEL_152:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  v99 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
  if ( v99 != 0 )
  {
    if ( v99 <= 9 )
      v100 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    else
      v100 = m_pEntityKeyValues->m_keyHashes.m_pElements;
  }
  else
  {
    v100 = 0;
  }
  v101 = (m_pEntityKeyValues->m_keyHashes.m_nCount - 1);
  v100[v101] = -1164387633;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
  if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v102 = m_pEntityKeyValues->m_keyValues.m_pElements;
  else
    v102 = 0;
  v103 = 24 * v101;
  v104 = &v102[v101];
  v123 = v103;
  v105 = v104->m_value.m_flags;
  if ( (v105 & 1) != 0 )
    v104->m_value.m_flags = v105 & 0xFFFE;
  v104->m_value.m_uint64 = 0;
  v104->m_value.m_type = 39;
  v106 = CEntityVariantAllocator::Allocate(0xCu);
  v104->m_value.m_uint64 = v106;
  *v106 = angles->x;
  v106[1] = angles->y;
  v106[2] = angles->z;
  v104->m_value.m_flags |= 1u;
  if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v107 = m_pEntityKeyValues->m_keyValues.m_pElements;
  else
    v107 = 0;
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  *(&v107->m_pAttributeName + v123) = 0;
LABEL_4:
  if ( radiusa != 0 )
  {
    CEntityKeyValues::SetValue<int>(m_pEntityKeyValues, 959391108, &radiusa);
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  }
  if ( flExplosionForce == 0.0 )
    goto LABEL_58;
  if ( m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    v52 = m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( v52 > 0 )
    {
      v53 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      v54 = 0;
      while ( 1 )
      {
        if ( v53 != 0 )
        {
          v55 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v53 > 9 )
            v55 = m_pEntityKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v55 = 0;
        }
        if ( v55[v54] == 29501726 )
          break;
        if ( v52 <= ++v54 )
          goto LABEL_48;
      }
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      {
        v111 = m_pEntityKeyValues->m_keyValues.m_pElements;
        v112 = 24 * v54;
        if ( *(&v111->m_pAttributeName + v112) != 0 )
        {
LABEL_173:
          Warning(
            "Attempted to set attribute %s as if it was a non-attribute key!\n",
            *(&v111->m_pAttributeName + v112));
LABEL_174:
          m_pEntityKeyValues = spawner.m_pEntityKeyValues;
          goto LABEL_58;
        }
        v112 += v111;
      }
      else
      {
        v112 = 24 * v54;
        v111 = 0;
        if ( *(v112 + 16) != 0 )
          goto LABEL_173;
      }
      v119 = *(v112 + 10);
      if ( (v119 & 1) != 0 )
        *(v112 + 10) = v119 & 0xFFFE;
      *v112 = 0;
      *(v112 + 8) = 1;
      *v112 = flExplosionForce;
      goto LABEL_174;
    }
LABEL_48:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
    v40 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    if ( v40 != 0 )
    {
      if ( v40 <= 9 )
        v41 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      else
        v41 = m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      v41 = 0;
    }
    v42 = (m_pEntityKeyValues->m_keyHashes.m_nCount - 1);
    v41[v42] = 29501726;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v43 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v43 = 0;
    v44 = &v43[v42];
    v45 = v44->m_value.m_flags;
    if ( (v45 & 1) != 0 )
      v44->m_value.m_flags = v45 & 0xFFFE;
    v44->m_value.m_uint64 = 0;
    v44->m_value.m_type = 1;
    v44->m_value.m_float = flExplosionForce;
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v46 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v46 = 0;
    v46[v42].m_pAttributeName = 0;
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
LABEL_58:
    if ( m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
      goto LABEL_8;
    v47 = m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( v47 <= 0 )
    {
LABEL_102:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyHashes);
      v68 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( v68 != 0 )
      {
        if ( v68 <= 9 )
          v69 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          v69 = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v69 = 0;
      }
      v70 = (m_pEntityKeyValues->m_keyHashes.m_nCount - 1);
      v69[v70] = 1775824117;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v71 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v71 = 0;
      v72 = &v71[v70];
      v73 = v72->m_value.m_flags;
      if ( (v73 & 1) != 0 )
        v72->m_value.m_flags = v73 & 0xFFFE;
      v72->m_value.m_uint64 = 0;
      v72->m_value.m_type = 5;
      v72->m_value.m_int = nSpawnFlags;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v74 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v74 = 0;
      v74[v70].m_pAttributeName = 0;
    }
    else
    {
      v48 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      v49 = 0;
      while ( 1 )
      {
        if ( v48 != 0 )
        {
          v50 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v48 > 9 )
            v50 = m_pEntityKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v50 = 0;
        }
        if ( v50[v49] == 1775824117 )
          break;
        if ( v47 <= ++v49 )
          goto LABEL_102;
      }
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      {
        v75 = m_pEntityKeyValues->m_keyValues.m_pElements;
        v76 = v49;
        v77 = &v75[v76];
        if ( v75[v76].m_pAttributeName != 0 )
        {
LABEL_114:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v75[v76].m_pAttributeName);
          goto LABEL_115;
        }
      }
      else
      {
        v76 = v49;
        v75 = 0;
        v77 = v76 * 24;
        if ( *(v76 * 24 + 16) != 0 )
          goto LABEL_114;
      }
      v113 = *(v77 + 10);
      if ( (v113 & 1) != 0 )
        *(v77 + 10) = v113 & 0xFFFE;
      *v77 = 0;
      *(v77 + 8) = 5;
      *v77 = nSpawnFlags;
    }
LABEL_115:
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
      goto LABEL_8;
    v78 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( v78 <= 0 )
    {
LABEL_124:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v82 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      v83 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( v83 != 0 )
      {
        if ( v83 <= 9 )
          v84 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          v84 = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v84 = 0;
      }
      v84[v82] = 1509079578;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v85 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v85 = 0;
      v86 = &v85[v82];
      v87 = v86->m_value.m_flags;
      if ( (v87 & 1) != 0 )
        v86->m_value.m_flags = v87 & 0xFFFE;
      v86->m_value.m_uint64 = 0;
      v86->m_value.m_type = 5;
      v86->m_value.m_int = magnitude;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v88 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v88 = 0;
      v88[v82].m_pAttributeName = 0;
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
LABEL_138:
      v130 = -1;
      m_pInstance = 0;
      if ( m_pEntityKeyValues == 0 )
        goto LABEL_32;
      goto LABEL_9;
    }
    v79 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v80 = 0;
    while ( 1 )
    {
      if ( v79 != 0 )
      {
        v81 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v79 > 9 )
          v81 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v81 = 0;
      }
      if ( v81[v80] == 1509079578 )
        break;
      if ( v78 <= ++v80 )
        goto LABEL_124;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v89 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v90 = v80;
      v91 = &v89[v90];
      if ( v89[v90].m_pAttributeName != 0 )
      {
LABEL_136:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v89[v90].m_pAttributeName);
LABEL_137:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        goto LABEL_138;
      }
    }
    else
    {
      v90 = v80;
      v89 = 0;
      v91 = v90 * 24;
      if ( *(v90 * 24 + 16) != 0 )
        goto LABEL_136;
    }
    v116 = *(v91 + 10);
    if ( (v116 & 1) != 0 )
      *(v91 + 10) = v116 & 0xFFFE;
    *v91 = 0;
    *(v91 + 8) = 5;
    *v91 = magnitude;
    goto LABEL_137;
  }
LABEL_8:
  v130 = -1;
LABEL_9:
  m_enabled = g_VProfCurrentProfile.m_enabled;
  flExplosionForceb = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  }
  if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
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
    m_pEntity = Entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v24 = 0x7FFF;
      v25 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v130) = v24 | v130 & 0x8000;
      v130 = (v25 << 15) | v130 & 0x7FFF;
    }
    v132[0] = m_pEntity;
    v132[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v132,
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
        v30 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v30 - 1);
        (pfn)(v30, v22, i);
      }
    }
  }
  if ( flExplosionForceb )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  if ( (v130 + 2) > 1 && (v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v130 >> 9) & 0x3F]) != 0 )
  {
    m_pInstance = 0;
    v33 = &v31[v130 & 0x1FF];
    if ( v33 != 0 && v130 == v33->m_EHandle.m_Index )
      m_pInstance = v33->m_pInstance;
  }
  else
  {
    m_pInstance = 0;
  }
LABEL_32:
  CBaseModelEntity::SetRenderMode(m_pInstance, RenderMode_t::kRenderTransAdd);
  (*(m_pInstance->_vptr_IHandleEntity + 40))(m_pInstance, pOwner);
  if ( pInflictor != 0 && (v34 = pInflictor->m_pEntity) != 0 )
  {
    v35 = (v34->m_EHandle.m_Index >> 15) - (v34->m_flags & 1);
    v36 = 0x7FFF;
    if ( v34->m_EHandle.m_Index != -1 )
      v36 = v34->m_EHandle.m_Index & 0x7FFF;
    LOWORD(m_pInstance[24].m_hPrivateScope.m_hScope) = v36 | m_pInstance[24].m_hPrivateScope.m_hScope & 0x8000;
    LODWORD(m_pInstance[24].m_hPrivateScope.m_hScope) = (v35 << 15) | m_pInstance[24].m_hPrivateScope.m_hScope & 0x7FFF;
  }
  else
  {
    LODWORD(m_pInstance[24].m_hPrivateScope.m_hScope) = -1;
  }
  HIDWORD(m_pInstance[24].m_hPrivateScope.m_hScope) = iCustomDamageType;
  if ( ignoredEntity != 0 )
    HIDWORD(m_pInstance[24].m_iszPrivateVScripts.u.m_pAsString) = ignoredEntity->m_Index;
  emptyVariant.m_type = 0;
  emptyVariant.m_flags = 0;
  LODWORD(m_pInstance[24].m_iszPrivateVScripts.u.m_Id) = ignoredClass;
  emptyVariant.m_uint64 = 0;
  CEntityInstance::AcceptInput(m_pInstance, "Explode", 0, 0, &emptyVariant, 0);
  if ( (emptyVariant.m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyVariant.m_uint64);
    emptyVariant.m_flags &= ~1u;
  }
  v37 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_4032B50;
  emptyVariant.m_uint64 = 0;
  emptyVariant.m_type = 0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v37 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v37);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v38 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v38);
      operator delete(v38);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
}


// ExplosionCreate  (line 407, @0x0000000002207070, libserver.so)
// calls: ExplosionCreate
// callers: CBreakable::Die, CPhysicsCannister::Explode
void __fastcall ExplosionCreate(
        const Vector *const center,
        const QAngle *const angles,
        CBaseEntity *pOwner,
        int magnitude,
        int radius,
        bool doDamage,
        float flExplosionForce,
        bool bSurfaceOnly,
        bool bSilent,
        int iCustomDamageType)
{
  int v10; // eax
  int v11; // r9d

  v10 = 1065 - doDamage;
  if ( bSurfaceOnly )
    v10 |= 0x2000u;
  v11 = v10 | 0x40;
  if ( !bSilent )
    v11 = v10;
  ExplosionCreate(
    center,
    angles,
    pOwner,
    magnitude,
    radius,
    v11,
    flExplosionForce,
    0,
    iCustomDamageType,
    0,
    Class_T::CLASS_NONE);
}


// ExplosionCreate  (line 431, @0x00000000022070d0, libserver.so)
// calls: ExplosionCreate
void __fastcall ExplosionCreate(
        const Vector *const center,
        const QAngle *const angles,
        CBaseEntity *pOwner,
        int magnitude,
        int radius,
        bool doDamage,
        float flExplosionForce,
        const EHANDLE *ignoredEntity,
        Class_T ignoredClass,
        bool bSurfaceOnly,
        bool bSilent,
        int iCustomDamageType)
{
  int v12; // eax
  int v13; // r9d

  v12 = 1065 - doDamage;
  if ( bSurfaceOnly )
    v12 |= 0x2000u;
  v13 = v12 | 0x40;
  if ( !bSilent )
    v13 = v12;
  ExplosionCreate(
    center,
    angles,
    pOwner,
    magnitude,
    radius,
    v13,
    flExplosionForce,
    0,
    iCustomDamageType,
    ignoredEntity,
    ignoredClass);
}


// CEnvExplosion::DrawDebugTextOverlays  (line 460, @0x00000000021ef010, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "    magnitude: %i"
int __fastcall CEnvExplosion::DrawDebugTextOverlays(
        CEnvExplosion *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v4; // r13
  char v5; // bl
  int v6; // r12d
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+218h] [rbp-28h]

  v4 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v9 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v4 & 0x4000) != 0 )
  {
    V_snprintf(tempstr, 512, "    magnitude: %i", this->m_iMagnitude);
    CBaseEntity::EntityText(this, v6++, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


