// Reconstructed from DWARF by pahole; not original source.

// src/game/server/physics.cpp:45
struct vehiclescript_t {
	string_t scriptName;  // +0x0
	vehiclescript_t();
	~vehiclescript_t();

	// sizeof = 1048
};

// src/game/server/physics.cpp:52
class CPhysicsHook : public IGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

	typedef IGameSystem BaseClass;
	CPhysicsHook();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CPhysicsHook *);
	virtual void GameInit(const EventGameInit_t &);
	virtual void BuildGameSessionManifest(const EventBuildGameSessionManifest_t &);
	virtual void GameShutdown(const EventGameShutdown_t &);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	bool FindOrAddVehicleScript(const char *, vehicleparams_t *, vehiclesounds_t *);
	void FlushVehicleScripts();
	virtual ~CPhysicsHook();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[7] BuildGameSessionManifest
	// vtable[4] GameShutdown
	// vtable[25] FrameUpdatePostEntityThink
	// sizeof = 48
};

// src/game/server/physics.cpp:176
class CSkipKeys : public IVPhysicsKeyHandler {
public:

	CSkipKeys(CSkipKeys &);
	CSkipKeys(const CSkipKeys &);
	CSkipKeys();
	virtual void ParseKeyValue(void *, const char *, const char *);
	virtual void SetDefaults(void *);

	// vtable[0] ParseKeyValue
	// vtable[1] SetDefaults
	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPhysicsHook::~CPhysicsHook  (line 52, @0x000000000230ffd0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<vehiclescript_t, CUtlMemory<vehiclescript_t, int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<vehiclescript_t, int>::Purge
void __fastcall CPhysicsHook::~CPhysicsHook(CPhysicsHook *const this)
{
  this->_vptr_IGameSystem = off_407E610;
  CUtlVectorBase<vehiclescript_t,CUtlMemory<vehiclescript_t,int>>::RemoveAll(&this->m_vehicleScripts);
  if ( (this->m_vehicleScripts.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<vehiclescript_t,int>::Purge(&this->m_vehicleScripts.m_Memory),
        (this->m_vehicleScripts.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    IGameSystem::~IGameSystem(this);
  }
  else
  {
    CUtlMemory<vehiclescript_t,int>::Purge(&this->m_vehicleScripts.m_Memory);
    IGameSystem::~IGameSystem(this);
  }
}


// CPhysicsHook::~CPhysicsHook  (line 52, @0x0000000002310040, libserver.so)  // inlines: Purge, ~CPhysicsHook, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<vehiclescript_t, CUtlMemory<vehiclescript_t, int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CUtlMemory<vehiclescript_t, int>::Purge
void __fastcall CPhysicsHook::~CPhysicsHook(CPhysicsHook *const this)
{
  this->_vptr_IGameSystem = off_407E610;
  CUtlVectorBase<vehiclescript_t,CUtlMemory<vehiclescript_t,int>>::RemoveAll(&this->m_vehicleScripts);
  if ( (this->m_vehicleScripts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<vehiclescript_t,int>::Purge(&this->m_vehicleScripts.m_Memory);
    if ( (this->m_vehicleScripts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<vehiclescript_t,int>::Purge(&this->m_vehicleScripts.m_Memory);
  }
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CPhysicsHook::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 54, @0x0000000002303e20, libserver.so)
void __fastcall CPhysicsHook::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CPhysicsHook *const this)
{
  ;
}


// CPhysicsHook::DoesGameSystemReallocate  (line 54, @0x0000000002303e30, libserver.so)
// globals: CPhysicsHook::sm_Factory
bool __fastcall CPhysicsHook::DoesGameSystemReallocate(const CPhysicsHook *const this)
{
  return (*(CPhysicsHook::sm_Factory->_vptr_IGameSystemFactory + 8))(CPhysicsHook::sm_Factory);
}


// CPhysicsHook::SetGameSystemGlobalPtrs  (line 54, @0x0000000002303e50, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CPhysicsHook::sm_Factory
void __fastcall CPhysicsHook::SetGameSystemGlobalPtrs(CPhysicsHook *const this, void *pValue)
{
  if ( CPhysicsHook::sm_Factory != 0 )
    (*(CPhysicsHook::sm_Factory->_vptr_IGameSystemFactory + 7))(CPhysicsHook::sm_Factory, pValue);
}


// CPhysicsHook::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 75, @0x00000000022d0e80, libserver.so)
void __cdecl CPhysicsHook::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// PhysicsGameSystem  (line 80, @0x00000000022d0e90, libserver.so)
// globals: g_pPhysicsHook
IGameSystem *__cdecl PhysicsGameSystem()
{
  return g_pPhysicsHook;
}


// CPhysicsHook::GameInit  (line 86, @0x00000000022b8530, libserver.so)  // inlines: EnsureCapacity, memcpy
// calls: memcpy
void __fastcall CPhysicsHook::GameInit(CPhysicsHook *const this, const EventGameInit_t *const msg)
{
  uint32 m_nGrowSize; // eax
  vehiclescript_t *v4; // rsi
  __int64 v5; // rax
  vehiclescript_t *m_pMemory; // r12
  vehiclescript_t *v7; // rax

  if ( this->m_vehicleScripts.m_Memory.m_nAllocationCount <= 3 )
  {
    m_nGrowSize = this->m_vehicleScripts.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_vehicleScripts.m_Memory.m_pMemory;
        v7 = (**g_pMemAlloc)(g_pMemAlloc, 4192);
        this->m_vehicleScripts.m_Memory.m_pMemory = v7;
        if ( m_pMemory != 0 )
          memcpy(v7, m_pMemory, 1048LL * this->m_vehicleScripts.m_Memory.m_nAllocationCount);
        this->m_vehicleScripts.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v4 = this->m_vehicleScripts.m_Memory.m_pMemory;
        v5 = *g_pMemAlloc;
        if ( v4 != 0 )
          this->m_vehicleScripts.m_Memory.m_pMemory = (*(v5 + 8))(g_pMemAlloc, v4, 4192);
        else
          this->m_vehicleScripts.m_Memory.m_pMemory = (*v5)(g_pMemAlloc, 4192);
      }
      this->m_vehicleScripts.m_Memory.m_nAllocationCount = 4;
    }
  }
}


// CPhysicsHook::BuildGameSessionManifest  (line 93, @0x00000000022b79d0, libserver.so)
void __fastcall CPhysicsHook::BuildGameSessionManifest(
        CPhysicsHook *const this,
        const EventBuildGameSessionManifest_t *const msg)
{
  ;
}


// CPhysicsHook::GameShutdown  (line 97, @0x00000000022ed9a0, libserver.so)  // inlines: FlushVehicleScripts
// calls: CUtlVectorBase<vehiclescript_t, CUtlMemory<vehiclescript_t, int> >::RemoveAll
void __fastcall CPhysicsHook::GameShutdown(CPhysicsHook *const this, const EventGameShutdown_t *const msg)
{
  CUtlVectorBase<vehiclescript_t,CUtlMemory<vehiclescript_t,int>>::RemoveAll(&this->m_vehicleScripts);
}


// CPhysicsHook::FindOrAddVehicleScript  (line 103, @0x0000000002302000, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Construct<vehiclescript_t>, Element, GrowMemory, Init, Purge, RemoveAll, String, ToCStr, operator=, operator[], vehiclescript_t, vehiclesounds_t
// calls: V_stricmp_fast, CUtlVectorBase<vehicle_gear_t, CUtlMemory<vehicle_gear_t, int> >::SetCount, CUtlVectorBase<vehicle_crashsound_t, CUtlMemory<vehicle_crashsound_t, int> >::SetCount, UTIL_LoadFileForMe, AllocPooledString, CUtlMemory<vehicle_gear_t, int>::Purge, VPhysicsKeyParserCreate, VPhysicsKeyParserDestroy, UTIL_FreeFile, CVehicleSoundsParser::CVehicleSoundsParser, CUtlMemory<vehicle_crashsound_t, int>::Purge, CUtlMemory<vehiclescript_t, int>::Grow
// callers: PhysFindOrAddVehicleScript
// strings: "vehicle_sounds"
bool __fastcall CPhysicsHook::FindOrAddVehicleScript(
        CPhysicsHook *const this,
        const char *pScriptName,
        vehicleparams_t *pVehicle,
        vehiclesounds_t *pSounds)
{
  __int64 v7; // r13
  int m_Size; // ebx
  const char *m_Id; // rdi
  vehiclescript_t *v10; // rax
  Vector *p_wheelOffset; // r11
  Vector *p_raytraceCenterOffset; // r9
  Vector *p_raytraceOffset; // r13
  vehiclescript_t *v14; // rdi
  Vector *v15; // r12
  char *axles; // rdx
  Vector *v17; // r10
  Vector *v18; // r8
  vehicleparams_t *v19; // rax
  float v20; // xmm0_4
  vehicleparams_t *v21; // rcx
  signed __int64 v22; // rsi
  signed __int64 v23; // rcx
  vehiclescript_t *v24; // rbx
  int v25; // r12d
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  _DWORD *v29; // rcx
  _DWORD *v30; // rdx
  int v31; // r12d
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  char *v35; // rcx
  char *v36; // rdx
  __int64 j; // rax
  __int64 k; // rax
  int v40; // eax
  vehiclescript_t *v41; // rdx
  CUtlSymbolLarge *iszSound; // rax
  float *minStateTime; // rdx
  vehiclescript_t *v44; // r12
  bool v45; // zf
  __int64 i; // rax
  IVPhysicsKeyParser *v47; // r12
  __int64 v48; // r13
  bool bLoadedSounds; // [rsp+Fh] [rbp-71h]
  uint8 *pFile; // [rsp+18h] [rbp-68h]
  __int64 v51; // [rsp+20h] [rbp-60h]
  CVehicleSoundsParser soundParser; // [rsp+30h] [rbp-50h] BYREF

  if ( this->m_vehicleScripts.m_Size <= 0 )
  {
LABEL_27:
    pFile = UTIL_LoadFileForMe(pScriptName, 0);
    if ( pFile == 0 )
      return 0;
    m_Size = this->m_vehicleScripts.m_Size;
    v40 = m_Size;
    if ( m_Size == this->m_vehicleScripts.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<vehiclescript_t,int>::Grow(&this->m_vehicleScripts.m_Memory, 1);
      v40 = this->m_vehicleScripts.m_Size;
    }
    this->m_vehicleScripts.m_Size = v40 + 1;
    v51 = m_Size;
    v41 = &this->m_vehicleScripts.m_Memory.m_pMemory[v51];
    if ( v41 != 0 )
    {
      v41->scriptName.u.m_Id = 0;
      v41->sounds._vptr_vehiclesounds_t = &off_3FE4100;
      v41->sounds.pGears.m_Size = 0;
      iszSound = v41->sounds.iszSound;
      v41->sounds.pGears.m_Memory.m_pMemory = 0;
      v41->sounds.pGears.m_Memory.m_nAllocationCount = 0;
      v41->sounds.pGears.m_Memory.m_nGrowSize = 0;
      v41->sounds.crashSounds.m_Size = 0;
      v41->sounds.crashSounds.m_Memory.m_pMemory = 0;
      v41->sounds.crashSounds.m_Memory.m_nAllocationCount = 0;
      v41->sounds.crashSounds.m_Memory.m_nGrowSize = 0;
      do
      {
        iszSound->u.m_Id = 0;
        ++iszSound;
      }
      while ( iszSound != v41->sounds.iszStateSounds );
      minStateTime = v41->sounds.minStateTime;
      do
      {
        iszSound->u.m_Id = 0;
        ++iszSound;
      }
      while ( iszSound != minStateTime );
    }
    AllocPooledString(&soundParser, pScriptName);
    this->m_vehicleScripts.m_Memory.m_pMemory[m_Size].scriptName.u.m_Id = soundParser._vptr_IVPhysicsKeyHandler;
    v44 = &this->m_vehicleScripts.m_Memory.m_pMemory[v51];
    v45 = (v44->sounds.pGears.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    v44->sounds.pGears.m_Size = 0;
    if ( v45 )
      CUtlMemory<vehicle_gear_t,int>::Purge(&v44->sounds.pGears.m_Memory);
    v45 = (v44->sounds.crashSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    v44->sounds.crashSounds.m_Size = 0;
    if ( v45 )
      CUtlMemory<vehicle_crashsound_t,int>::Purge(&v44->sounds.crashSounds.m_Memory);
    for ( i = 0; i != 72; i += 8 )
      *(&v44->sounds.iszSound[0].u.m_Id + i) = 0;
    LOBYTE(i) = 0;
    do
    {
      *(&v44->sounds.iszStateSounds[0].u.m_Id + 2 * i) = 0;
      *(v44->sounds.minStateTime + i) = 0.0;
      i += 4;
    }
    while ( i != 80 );
    bLoadedSounds = 0;
    v47 = VPhysicsKeyParserCreate(pFile);
    while ( (*(v47->_vptr_IVPhysicsKeyParser + 3))(v47) == 0 )
    {
      while ( 1 )
      {
        v48 = (*(v47->_vptr_IVPhysicsKeyParser + 2))(v47);
        if ( V_stricmp_fast(v48, "vehicle") != 0 )
          break;
        (*(v47->_vptr_IVPhysicsKeyParser + 9))(v47, &this->m_vehicleScripts.m_Memory.m_pMemory[v51].params, 0);
        if ( (*(v47->_vptr_IVPhysicsKeyParser + 3))(v47) != 0 )
          goto LABEL_47;
      }
      if ( V_stricmp_fast(v48, "vehicle_sounds") != 0 )
      {
        (*(v47->_vptr_IVPhysicsKeyParser + 10))(v47);
      }
      else
      {
        CVehicleSoundsParser::CVehicleSoundsParser(&soundParser);
        (*(v47->_vptr_IVPhysicsKeyParser + 8))(
          v47,
          &this->m_vehicleScripts.m_Memory.m_pMemory[v51].sounds,
          &soundParser);
        bLoadedSounds = 1;
      }
    }
LABEL_47:
    VPhysicsKeyParserDestroy(v47);
    UTIL_FreeFile(pFile);
    if ( m_Size < 0 )
      return 0;
  }
  else
  {
    v7 = 0;
    m_Size = 0;
    while ( 1 )
    {
      m_Id = "";
      v10 = &this->m_vehicleScripts.m_Memory.m_pMemory[v7];
      if ( v10->scriptName.u.m_Id != 0 )
        m_Id = v10->scriptName.u.m_Id;
      if ( V_stricmp_fast(m_Id, pScriptName) == 0 )
        break;
      ++m_Size;
      ++v7;
      if ( this->m_vehicleScripts.m_Size <= m_Size )
        goto LABEL_27;
    }
    bLoadedSounds = 1;
  }
  if ( pVehicle != 0 )
  {
    p_wheelOffset = &pVehicle->axles[0].wheelOffset;
    p_raytraceCenterOffset = &pVehicle->axles[0].raytraceCenterOffset;
    p_raytraceOffset = &pVehicle->axles[0].raytraceOffset;
    v14 = &this->m_vehicleScripts.m_Memory.m_pMemory[m_Size];
    v15 = &v14->params.axles[0].wheelOffset;
    axles = v14->params.axles;
    v17 = &v14->params.axles[0].raytraceCenterOffset;
    v18 = &v14->params.axles[0].raytraceOffset;
    pVehicle->axleCount = v14->params.axleCount;
    pVehicle->wheelsPerAxle = v14->params.wheelsPerAxle;
    v19 = pVehicle->axles;
    pVehicle->body.massCenterOverride.x = v14->params.body.massCenterOverride.x;
    pVehicle->body.massCenterOverride.y = v14->params.body.massCenterOverride.y;
    pVehicle->body.massCenterOverride.z = v14->params.body.massCenterOverride.z;
    pVehicle->body.massOverride = v14->params.body.massOverride;
    pVehicle->body.addGravity = v14->params.body.addGravity;
    pVehicle->body.tiltForce = v14->params.body.tiltForce;
    pVehicle->body.tiltForceHeight = v14->params.body.tiltForceHeight;
    pVehicle->body.counterTorqueFactor = v14->params.body.counterTorqueFactor;
    pVehicle->body.keepUprightTorque = v14->params.body.keepUprightTorque;
    pVehicle->body.maxAngularVelocity = v14->params.body.maxAngularVelocity;
    do
    {
      v20 = *axles;
      v21 = v19;
      v22 = axles - v14->params.axles;
      v19 = (v19 + 116);
      axles += 116;
      v19[-1].engine.gearRatio[4] = v20;
      v23 = v21 - pVehicle->axles;
      v19[-1].engine.gearRatio[5] = *(axles - 28);
      v19[-1].engine.shiftUpRPM = *(axles - 27);
      *(&p_wheelOffset->x + v23) = *(&v15->x + v22);
      *(&p_wheelOffset->y + v23) = *(&v15->y + v22);
      *(&p_wheelOffset->z + v23) = *(&v15->z + v22);
      *(&p_raytraceCenterOffset->x + v23) = *(&v17->x + v22);
      *(&p_raytraceCenterOffset->y + v23) = *(&v17->y + v22);
      *(&p_raytraceCenterOffset->z + v23) = *(&v17->z + v22);
      *(&p_raytraceOffset->x + v23) = *(&v18->x + v22);
      *(&p_raytraceOffset->y + v23) = *(&v18->y + v22);
      *(&p_raytraceOffset->z + v23) = *(&v18->z + v22);
      *&v19[-1].steering.degreesFast = *(axles - 68);
      *&v19[-1].steering.steeringRateSlow = *(axles - 60);
      *&v19[-1].steering.steeringRestRateSlow = *(axles - 52);
      *&v19[-1].steering.speedSlow = *(axles - 44);
      *&v19[-1].steering.turnThrottleReduceSlow = *(axles - 36);
      *&v19[-1].steering.brakeSteeringRateFactor = *(axles - 28);
      *&v19[-1].steering.powerSlideAccel = *(axles - 20);
      v19[-1].steering.boostSteeringRateFactor = *(axles - 3);
      v19[-1].steering.steeringExponent = *(axles - 2);
      *&v19[-1].steering.isSkidAllowed = *(axles - 1);
    }
    while ( v19 != &pVehicle->engine );
    *&pVehicle->engine.horsepower = *&v14->params.engine.horsepower;
    *&pVehicle->engine.maxRevSpeed = *&v14->params.engine.maxRevSpeed;
    *&pVehicle->engine.axleRatio = *&v14->params.engine.axleRatio;
    *&pVehicle->engine.gearCount = *&v14->params.engine.gearCount;
    *&pVehicle->engine.gearRatio[1] = *&v14->params.engine.gearRatio[1];
    *&pVehicle->engine.gearRatio[3] = *&v14->params.engine.gearRatio[3];
    *&pVehicle->engine.gearRatio[5] = *&v14->params.engine.gearRatio[5];
    *&pVehicle->engine.shiftDownRPM = *&v14->params.engine.shiftDownRPM;
    *&pVehicle->engine.boostDuration = *&v14->params.engine.boostDuration;
    *&pVehicle->engine.boostMaxSpeed = *&v14->params.engine.boostMaxSpeed;
    *&pVehicle->engine.autobrakeSpeedFactor = *&v14->params.engine.autobrakeSpeedFactor;
    *&pVehicle->steering.degreesSlow = *&v14->params.steering.degreesSlow;
    *&pVehicle->steering.degreesBoost = *&v14->params.steering.degreesBoost;
    *&pVehicle->steering.steeringRateFast = *&v14->params.steering.steeringRateFast;
    *&pVehicle->steering.steeringRestRateFast = *&v14->params.steering.steeringRestRateFast;
    *&pVehicle->steering.speedFast = *&v14->params.steering.speedFast;
    *&pVehicle->steering.turnThrottleReduceFast = *&v14->params.steering.turnThrottleReduceFast;
    *&pVehicle->steering.throttleSteeringRestRateFactor = *&v14->params.steering.throttleSteeringRestRateFactor;
    *&pVehicle->steering.boostSteeringRestRateFactor = *&v14->params.steering.boostSteeringRestRateFactor;
    *&pVehicle->steering.steeringExponent = *&v14->params.steering.steeringExponent;
  }
  if ( pSounds == 0 )
    return 1;
  if ( !bLoadedSounds )
    return 0;
  v24 = &this->m_vehicleScripts.m_Memory.m_pMemory[m_Size];
  if ( &pSounds->pGears != &v24->sounds.pGears )
  {
    v25 = v24->sounds.pGears.m_Size;
    CUtlVectorBase<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>>::SetCount(&pSounds->pGears, v25);
    if ( v25 > 0 )
    {
      v26 = 0;
      do
      {
        v27 = v26;
        v28 = v26;
        v26 += 24;
        v29 = (v24->sounds.pGears.m_Memory.m_pMemory + v27);
        v30 = (pSounds->pGears.m_Memory.m_pMemory + v28);
        v30[2] = v29[2];
        v30[3] = v29[3];
        v30[4] = v29[4];
      }
      while ( v26 != 8 * (3LL * (v25 - 1) + 3) );
    }
  }
  if ( &pSounds->crashSounds != &v24->sounds.crashSounds )
  {
    v31 = v24->sounds.crashSounds.m_Size;
    CUtlVectorBase<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>>::SetCount(&pSounds->crashSounds, v31);
    if ( v31 > 0 )
    {
      v32 = 0;
      do
      {
        v33 = v32;
        v34 = v32;
        v32 += 32;
        v35 = v24->sounds.crashSounds.m_Memory.m_pMemory + v33;
        v36 = pSounds->crashSounds.m_Memory.m_pMemory + v34;
        *(v36 + 2) = *(v35 + 2);
        *(v36 + 3) = *(v35 + 3);
        *(v36 + 4) = *(v35 + 4);
        *(v36 + 3) = *(v35 + 3);
      }
      while ( v32 != 32 * ((v31 - 1) + 1LL) );
    }
  }
  for ( j = 0; j != 9; ++j )
    pSounds->iszSound[j].u.m_Id = v24->sounds.iszSound[j].u.m_Id;
  for ( k = 0; k != 20; ++k )
    pSounds->iszStateSounds[k].u.m_Id = v24->sounds.iszStateSounds[k].u.m_Id;
  *pSounds->minStateTime = *v24->sounds.minStateTime;
  *&pSounds->minStateTime[2] = *&v24->sounds.minStateTime[2];
  *&pSounds->minStateTime[4] = *&v24->sounds.minStateTime[4];
  *&pSounds->minStateTime[6] = *&v24->sounds.minStateTime[6];
  *&pSounds->minStateTime[8] = *&v24->sounds.minStateTime[8];
  *&pSounds->minStateTime[10] = *&v24->sounds.minStateTime[10];
  *&pSounds->minStateTime[12] = *&v24->sounds.minStateTime[12];
  *&pSounds->minStateTime[14] = *&v24->sounds.minStateTime[14];
  *&pSounds->minStateTime[16] = *&v24->sounds.minStateTime[16];
  *&pSounds->minStateTime[18] = *&v24->sounds.minStateTime[18];
  return 1;
}


// CPhysicsHook::FrameUpdatePostEntityThink  (line 172, @0x00000000022b79e0, libserver.so)
void __fastcall CPhysicsHook::FrameUpdatePostEntityThink(
        CPhysicsHook *const this,
        const EventServerPostEntityThink_t *const msg)
{
  ;
}


// CSkipKeys::ParseKeyValue  (line 179, @0x0000000002303e80, libserver.so)
void __fastcall CSkipKeys::ParseKeyValue(CSkipKeys *const this, void *pData, const char *pKey, const char *pValue)
{
  ;
}


// CSkipKeys::SetDefaults  (line 180, @0x0000000002303e90, libserver.so)
void __fastcall CSkipKeys::SetDefaults(CSkipKeys *const this, void *pData)
{
  ;
}


// PhysSolidOverride  (line 183, @0x00000000022d0ea0, libserver.so)  // inlines: String, ToCStr, V_strncat<long unsigned int>, V_strncpy<long unsigned int>
// calls: _V_strncpy, _V_strncat, nexttoken, VPhysicsKeyParserCreate, VPhysicsKeyParserDestroy, __stack_chk_fail
// strings: "solid { "
void __fastcall PhysSolidOverride(solid_t *const solid, string_t overrideScript)
{
  bool enableCollisions; // r15
  const char *v5; // rsi
  __int64 v6; // r13
  IVPhysicsKeyParser *v7; // rbx
  CSkipKeys tmp; // [rsp+0h] [rbp-1150h] BYREF
  char szToken[256]; // [rsp+10h] [rbp-1140h] BYREF
  char pTmpString[4104]; // [rsp+110h] [rbp-1040h] BYREF
  unsigned __int64 v11; // [rsp+1118h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  if ( *overrideScript.u.m_Id != 0 )
  {
    enableCollisions = solid->params.enableCollisions;
    _V_strncpy(pTmpString, "solid { ", 4096);
    v5 = "";
    if ( *overrideScript.u.m_Id != 0 )
      v5 = *overrideScript.u.m_pAsString;
    while ( 1 )
    {
      v6 = nexttoken(szToken, v5, 44);
      if ( szToken[0] == 0 )
        break;
      _V_strncat(pTmpString, "\"", 4096, 0xFFFFFFFFLL);
      _V_strncat(pTmpString, szToken, 4096, 0xFFFFFFFFLL);
      _V_strncat(pTmpString, "\" ", 4096, 0xFFFFFFFFLL);
      v5 = v6;
    }
    _V_strncat(pTmpString, "}", 4096, 0xFFFFFFFFLL);
    v7 = VPhysicsKeyParserCreate(pTmpString);
    tmp._vptr_IVPhysicsKeyHandler = &off_407E770;
    (*(v7->_vptr_IVPhysicsKeyParser + 4))(v7, solid, &tmp);
    VPhysicsKeyParserDestroy(v7);
    solid->params.enableCollisions = enableCollisions;
  }
}


// PhysGetEntityMass  (line 219, @0x00000000022d1010, libserver.so)
// calls: CBaseEntity::VPhysicsGetAggregate
// callers: CalculatePhysicsImpactDamage
float __fastcall PhysGetEntityMass(CBaseEntity *pEntity)
{
  IPhysAggregateInstance *Aggregate; // rax

  Aggregate = CBaseEntity::VPhysicsGetAggregate(pEntity);
  if ( Aggregate != 0 )
    return (*(Aggregate->_vptr_IPhysAggregateInstance + 52))(Aggregate);
  else
    return 0.0;
}


// surfaceprop  (line 226, @0x00000000022ed9d0, libserver.so)  // inlines: CFmtStrN, CGameTrace, CWeakHandle, DidHit, EnableInteractsWith, FastSqrt, Get, GetClassNameAsCStr, GetClassname, GetFloat, Init, InitQuietTruncation, Length, LengthSqr, Ray_t, RnCollisionAttr_t, String, ToCStr, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-
// calls: UTIL_IsCommandIssuedByServerAdmin, UTIL_GetCommandClient, CGameTrace::Init, CBasePlayer::EyeVectors, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::GetModel, CBaseEntity::GetModelName, Msg, CFmtStrN<256, false>::sprintf, __stack_chk_fail
// strings: "<unknown>", "Hit surface \"%s\" (entity %s, model \"%s\" %s)\n", "Distance to surface: %d\n", "  Two-pass.", "Translucent", "%s.%s "
void __fastcall surfaceprop(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rbx
  double v3; // xmm0_8
  float v4; // xmm1_4
  float v5; // xmm1_4
  float m_fValue; // xmm3_4
  const char *v7; // r13
  unsigned __int8 (__fastcall *v8)(IGameModelInfo *, Ray_t *); // rax
  const char *m_pAsString; // r12
  CEntityIdentity *m_pEntity; // rax
  int v11; // ebx
  const char *v12; // rax
  const char *v13; // rsi
  const char *v14; // rbx
  unsigned __int8 (__fastcall *v15)(IGameModelInfo *, Ray_t *); // rax
  __int64 (__fastcall *v16)(IGameModelInfo *, CTraceFilterSimple *); // rax
  char v17; // al
  char *v18; // rdx
  float v19; // [rsp+4h] [rbp-2CCh]
  float v20; // [rsp+4h] [rbp-2CCh]
  float v21; // [rsp+8h] [rbp-2C8h]
  float v22; // [rsp+8h] [rbp-2C8h]
  float v23; // [rsp+Ch] [rbp-2C4h]
  float v24; // [rsp+Ch] [rbp-2C4h]
  Vector forward; // [rsp+10h] [rbp-2C0h] BYREF
  double v26; // [rsp+20h] [rbp-2B0h]
  float v27; // [rsp+28h] [rbp-2A8h]
  HModel hModel; // [rsp+30h] [rbp-2A0h] BYREF
  float v29; // [rsp+38h] [rbp-298h]
  CTraceFilterSimple v30; // [rsp+40h] [rbp-290h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-250h] BYREF
  trace_t tr; // [rsp+D0h] [rbp-200h] BYREF
  CFmtStr modelStuff; // [rsp+180h] [rbp-150h] BYREF
  unsigned __int64 v34; // [rsp+298h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    CommandClient = UTIL_GetCommandClient();
    memset(&tr.m_ShapeAttributes, 0, 31);
    tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&tr);
    CBasePlayer::EyeVectors(CommandClient, &forward, 0, 0);
    v19 = forward.x * 16384.0;
    v21 = forward.y * 16384.0;
    v23 = 16384.0 * forward.z;
    v3 = (*(CommandClient->_vptr_IHandleEntity + 164))(CommandClient);
    v29 = v4;
    hModel.m_pBinding = *&v3;
    v24 = v4 + v23;
    v20 = v19 + *&v3;
    v22 = v21 + *(&v3 + 1);
    v26 = (*(CommandClient->_vptr_IHandleEntity + 164))(CommandClient);
    v27 = v5;
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Start.w = 0.0;
    ray.m_flRadius = m_fValue;
    ray.m_Delta.x = v20 - *&v26;
    ray.m_Delta.y = v22 - *(&v26 + 1);
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_Delta.z = v24 - v5;
    *&ray.m_Start.x = v26;
    ray.m_Start.z = v5;
    ray.m_IsRay = 1;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    CTraceFilterSimple::CTraceFilterSimple(&v30, CommandClient, 4, 0);
    v30.m_attr.m_nInteractsWith |= 0x187001uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v30, &tr);
    if ( tr.fraction < 1.0 || tr.startsolid )
    {
      v7 = "";
      CBaseEntity::GetModel(&hModel, tr.m_pEnt);
      CBaseEntity::GetModelName(&ray, tr.m_pEnt);
      modelStuff.m_szBuf[0] = 0;
      modelStuff.m_nLength = 0;
      modelStuff._vptr_CFmtStrN = &off_3F6E1A0;
      modelStuff.m_bQuietTruncation = 0;
      if ( *&ray.m_Start.x != 0 )
        v7 = *&ray.m_Start.x;
      v8 = *(modelinfo->_vptr_IAppSystem + 14);
      *&ray.m_Start.x = hModel;
      if ( v8(modelinfo, &ray) != 0 )
      {
        v14 = "  Two-pass.";
        v15 = *(modelinfo->_vptr_IAppSystem + 21);
        *&ray.m_Start.x = hModel;
        if ( v15(modelinfo, &ray) == 0 )
          v14 = "";
        v16 = *(modelinfo->_vptr_IAppSystem + 20);
        v30._vptr_CTraceFilter = hModel.m_pBinding;
        v17 = v16(modelinfo, &v30);
        v18 = "Translucent";
        if ( v17 == 0 )
          v18 = "Opaque";
        CFmtStrN<256,false>::sprintf(&modelStuff, "%s.%s ", v18, v14);
      }
      m_pAsString = "";
      m_pEntity = tr.m_pEnt->m_pEntity;
      v11 = fsqrt(
              (((tr.startpos.x - tr.endpos.x) * (tr.startpos.x - tr.endpos.x))
             + ((tr.startpos.y - tr.endpos.y) * (tr.startpos.y - tr.endpos.y)))
            + ((tr.startpos.z - tr.endpos.z) * (tr.startpos.z - tr.endpos.z)));
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      v12 = "";
      if ( g_pStringTokenSystem != 0 )
        v12 = (*(*g_pStringTokenSystem + 88LL))(g_pStringTokenSystem, tr.m_pSurfaceProperties->m_nameHash);
      v13 = "<unknown>";
      if ( *v12 != 0 )
        v13 = v12;
      Msg("Hit surface \"%s\" (entity %s, model \"%s\" %s)\n", v13, m_pAsString, v7, modelStuff.m_szBuf);
      Msg("Distance to surface: %d\n", v11);
    }
  }
}


// OutputVPhysicsDebugInfo  (line 260, @0x00000000022edf90, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetClassNameAsCStr, GetClassname, GetCollisionGroup, GetCollisionGroup_Inline, GetDebugName, IsNavIgnored, Purge, RemoveAll, String, curtime, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityIdentity::GetDebugName, Msg, CUtlMemory<CBaseEntity*, int>::Purge, CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "NAV IGNORE", "Entity %s (%s) %s Collision Group %d\n", "Object %d (of %d) =========================\n"
void __fastcall OutputVPhysicsDebugInfo(CBaseEntity *pEntity)
{
  double v1; // xmm0_8
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // r13d
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const char *v8; // r14
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rdi
  const char *m_pAsString; // rsi
  double v12; // xmm0_8
  IPhysicsObject **v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  int v18; // r13d
  int v19; // ebx
  double v20; // xmm0_8
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > list; // [rsp+0h] [rbp-2040h] BYREF
  IPhysicsObject *pList[1024]; // [rsp+20h] [rbp-2020h] BYREF

  if ( pEntity != 0 )
  {
    m_pCollision = pEntity->m_pCollision;
    if ( m_pCollision != 0 )
      m_Value = m_pCollision->m_CollisionGroup.m_Value;
    else
      m_Value = 4;
    m_flCurrentTime = 0.0;
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, v1, 0.0);
      }
      m_flCurrentTime = v6->m_flCurrentTime;
    }
    v8 = "NAV IGNORE";
    if ( pEntity->m_flNavIgnoreUntilTime.m_Value < m_flCurrentTime )
      v8 = "";
    DebugName = CEntityIdentity::GetDebugName(pEntity->m_pEntity);
    m_pEntity = pEntity->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    *&v12 = Msg("Entity %s (%s) %s Collision Group %d\n", m_pAsString, DebugName, v8, m_Value).m128_u64[0];
    v13 = pList;
    v17 = (*(pEntity->_vptr_IHandleEntity + 53))(pEntity, pList, 1024, v14, v15, v16, v12, 0, 0, 0);
    v18 = v17;
    if ( v17 != 0 )
    {
      if ( v17 <= 1 )
      {
        (*(*pList[0] + 1448LL))(pList[0]);
      }
      else
      {
        v19 = 0;
        do
        {
          *&v20 = Msg("Object %d (of %d) =========================\n", ++v19, v18).m128_u64[0];
          (*(**v13 + 1448LL))(*v13, v20);
          ++v13;
        }
        while ( v19 != v18 );
      }
    }
    if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CBaseEntity *,int>::Purge(&list.m_Memory);
      if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CBaseEntity *,int>::Purge(&list.m_Memory);
    }
  }
}


// PhysicsCommand  (line 294, @0x00000000022d1040, libserver.so)  // inlines: Arg, CGameTrace, DidHit, EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+, operator[]
// calls: UTIL_IsCommandIssuedByServerAdmin, CGameEntitySystem::FindEntityGeneric, UTIL_GetCommandClient, CGameTrace::Init, CBasePlayer::EyeVectors, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// callers: physics_debug_entity
void __fastcall PhysicsCommand(const CCommand *const args, void (*func)(CBaseEntity *))
{
  int m_nArgc; // eax
  CBaseEntity *v5; // rbx
  const char *v6; // rdx
  CBaseEntity *EntityGeneric; // rax
  CBasePlayer *CommandClient; // rbx
  double v9; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  float v11; // xmm1_4
  vec_t v12; // xmm1_4
  float v13; // [rsp+4h] [rbp-19Ch]
  float v14; // [rsp+4h] [rbp-19Ch]
  float v15; // [rsp+8h] [rbp-198h]
  float v16; // [rsp+8h] [rbp-198h]
  float v17; // [rsp+Ch] [rbp-194h]
  float v18; // [rsp+Ch] [rbp-194h]
  Vector forward; // [rsp+10h] [rbp-190h] BYREF
  double v20; // [rsp+20h] [rbp-180h]
  vec_t v21; // [rsp+28h] [rbp-178h]
  double v22; // [rsp+30h] [rbp-170h]
  float v23; // [rsp+38h] [rbp-168h]
  CTraceFilterSimple v24; // [rsp+40h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+80h] [rbp-120h] BYREF
  trace_t tr; // [rsp+D0h] [rbp-D0h] BYREF

  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    m_nArgc = args->m_nArgc;
    if ( args->m_nArgc <= 1 )
    {
      CommandClient = UTIL_GetCommandClient();
      memset(&tr.m_ShapeAttributes, 0, 31);
      tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&tr);
      CBasePlayer::EyeVectors(CommandClient, &forward, 0, 0);
      v13 = forward.x * 16384.0;
      v15 = forward.y * 16384.0;
      v17 = 16384.0 * forward.z;
      v9 = (*(CommandClient->_vptr_IHandleEntity + 164))(CommandClient);
      vptr_IHandleEntity = CommandClient->_vptr_IHandleEntity;
      v22 = v9;
      v23 = v11;
      v14 = v13 + *&v9;
      v18 = v11 + v17;
      v16 = v15 + *(&v9 + 1);
      v20 = (vptr_IHandleEntity[164])(CommandClient);
      ray.m_Start.w = 0.0;
      memset(&ray.m_Delta.w, 0, 36);
      ray.m_flRadius = phys_traceline_radius.m_pParent->m_Value.m_fValue;
      ray.m_Delta.x = v14 - *&v20;
      ray.m_Delta.y = v16 - *(&v20 + 1);
      ray.m_Delta.z = v18 - v12;
      v21 = v12;
      *&ray.m_Start.x = v20;
      ray.m_Start.z = v12;
      ray.m_IsRay = 1;
      ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                     + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
      CTraceFilterSimple::CTraceFilterSimple(&v24, CommandClient, 4, 0);
      v24.m_attr.m_nInteractsWith |= 0x187001uLL;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v24, &tr);
      if ( tr.fraction < 1.0 || tr.startsolid )
        func(tr.m_pEnt);
    }
    else
    {
      v5 = 0;
      while ( 1 )
      {
        v6 = "";
        if ( m_nArgc > 1 )
          v6 = args->m_ppArgv[1];
        EntityGeneric = CGameEntitySystem::FindEntityGeneric(g_pGameEntitySystem, v5, v6, 0, 0, 0);
        v5 = EntityGeneric;
        if ( EntityGeneric == 0 )
          break;
        func(EntityGeneric);
        m_nArgc = args->m_nArgc;
      }
    }
  }
}


// physics_debug_entity  (line 324, @0x00000000022d1350, libserver.so)
// calls: PhysicsCommand
// globals: OutputVPhysicsDebugInfo(CBaseEntity *)
void __fastcall physics_debug_entity(const CCommandContext *const ctx, const CCommand *const args)
{
  PhysicsCommand(args, OutputVPhysicsDebugInfo);
}


// PhysCollisionScreenShake  (line 333, @0x00000000022d1370, libserver.so)  // inlines: GetFloat
// calls: UTIL_ScreenShake
// callers: CBaseEntity::VPhysicsCollision
void __fastcall PhysCollisionScreenShake(gamevcollisionevent_t *pEvent, int index)
{
  IPhysicsObject **v2; // r13
  float v5; // xmm0_4
  IPhysicsObject *v6; // rdi
  float v7; // xmm0_4
  float mass; // [rsp+Ch] [rbp-34h]
  float massa; // [rsp+Ch] [rbp-34h]
  Vector vecPos; // [rsp+10h] [rbp-30h] BYREF

  v2 = &pEvent->pObjects[index];
  v5 = (*(**v2 + 208LL))(*v2);
  if ( v5 >= 500.0 )
  {
    mass = v5;
    v6 = pEvent->pObjects[index == 0];
    if ( (*(*v6 + 1456LL))(v6) != 0 && ((*(**v2 + 1296LL))(*v2) & 0x40) == 0 )
    {
      if ( mass <= 2000.0 )
        v7 = fmaxf(500.0, mass);
      else
        v7 = 2000.0;
      if ( pEvent->collisionSpeed > 30.0 && pEvent->deltaCollisionTime > 0.25 )
      {
        massa = v7;
        (*(pEvent->pInternalData->_vptr_IPhysicsCollisionData + 1))(pEvent->pInternalData, &vecPos);
        UTIL_ScreenShake(
          &vecPos,
          (collision_shake_amp.m_pParent->m_Value.m_fValue / 15000.0) * (massa * pEvent->collisionSpeed),
          collision_shake_freq.m_pParent->m_Value.m_fValue,
          collision_shake_time.m_pParent->m_Value.m_fValue,
          60.0 * ((collision_shake_amp.m_pParent->m_Value.m_fValue / 15000.0) * (massa * pEvent->collisionSpeed)),
          ShakeCommand_t::SHAKE_START,
          0,
          0);
      }
    }
  }
}


// PhysCollisionDust  (line 373, @0x00000000022d14b0, libserver.so)  // inlines: CPVSFilter, Dust, operator=, ~CPVSFilter
// calls: VectorAngles, VectorNormalize, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPVS, CRecipientFilter::~CRecipientFilter, DispatchParticleEffect, __stack_chk_fail, _Unwind_Resume
// callers: CBaseEntity::VPhysicsCollision
// strings: "particles/impact_fx/impact_physics_dust.vpcf"
void __fastcall PhysCollisionDust(gamevcollisionevent_t *pEvent, const CPhysSurfaceProperties *phit)
{
  uint16 m_nMaterial; // ax
  unsigned int v4; // r15d
  ITempEntsSystem *v5; // r13
  Vector vecPos; // [rsp+0h] [rbp-1B0h] BYREF
  Vector vecVel; // [rsp+10h] [rbp-1A0h] BYREF
  Vector vecNormal; // [rsp+20h] [rbp-190h] BYREF
  QAngle angNormal; // [rsp+30h] [rbp-180h] BYREF
  CRecipientFilter v10; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+178h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  m_nMaterial = phit->m_gameProperties.m_nMaterial;
  if ( m_nMaterial == 68 || m_nMaterial == 78 )
  {
    if ( pEvent->collisionSpeed >= 200.0 )
    {
LABEL_6:
      (*(pEvent->pInternalData->_vptr_IPhysicsCollisionData + 1))(pEvent->pInternalData, &vecPos);
      (*pEvent->pInternalData->_vptr_IPhysicsCollisionData)(pEvent->pInternalData, &vecNormal);
      VectorAngles(&vecNormal, &angNormal);
      vecVel.x = pEvent->collisionSpeed;
      vecVel.y = vecVel.x;
      vecVel.z = vecVel.x;
      VectorNormalize(&vecVel);
      v4 = _mm_cvtsi128_si32(LODWORD(pEvent->collisionSpeed));
      v5 = g_pEffects;
      CRecipientFilter::CRecipientFilter(&v10);
      v10._vptr_IRecipientFilter = &off_3FF45F0;
      CRecipientFilter::AddRecipientsByPVS(&v10, &vecPos);
      (*(v5->_vptr_IPredictionSystem + 26))(v5, &v10, &vecPos, &vecVel, 0.0, 8.0, *_mm_cvtsi32_si128(v4).m128i_i64);
      v10._vptr_IRecipientFilter = &off_3FF45F0;
      CRecipientFilter::~CRecipientFilter(&v10);
      DispatchParticleEffect(
        "particles/impact_fx/impact_physics_dust.vpcf",
        0,
        0,
        -1,
        *&vecPos.x,
        vecPos.z,
        *&vecVel.x,
        vecVel.z,
        *&angNormal.x,
        angNormal.z);
    }
  }
  else if ( m_nMaterial == 67 && pEvent->collisionSpeed >= 340.0 )
  {
    goto LABEL_6;
  }
}


// PhysSetEntityGameFlags  (line 422, @0x00000000022d16b0, libserver.so)  // inlines: PhysSetGameFlags
// callers: CBaseCombatCharacter::InputBecomeServerRagdoll
void __fastcall PhysSetEntityGameFlags(CBaseEntity *pEntity, unsigned __int16 flags)
{
  IPhysicsObject **v3; // r12
  int v4; // eax
  IPhysicsObject **v5; // r14
  __int64 v6; // rbx
  __int16 v7; // ax
  IPhysicsObject *pList[1024]; // [rsp+0h] [rbp-2020h] BYREF

  v3 = pList;
  v4 = (*(pEntity->_vptr_IHandleEntity + 53))(pEntity, pList, 1024);
  if ( v4 > 0 )
  {
    v5 = &pList[(v4 - 1) + 1];
    do
    {
      v6 = *v3++;
      v7 = (*(*v6 + 1296LL))(v6);
      (*(*v6 + 1304LL))(v6, (flags | v7));
    }
    while ( v3 != v5 );
  }
}


// PhysFindOrAddVehicleScript  (line 432, @0x0000000002302840, libserver.so)
// calls: CPhysicsHook::FindOrAddVehicleScript
// callers: CFourWheelVehiclePhysics::ParseVehicleScript, CBaseServerVehicle::ReloadScript, CPropVehicleDriveable::Precache, CBaseServerVehicle::Initialize
// globals: g_pPhysicsHook
bool __fastcall PhysFindOrAddVehicleScript(const char *pScriptName, vehicleparams_t *pParams, vehiclesounds_t *pSounds)
{
  return CPhysicsHook::FindOrAddVehicleScript(g_pPhysicsHook, pScriptName, pParams, pSounds);
}


// PhysFlushVehicleScripts  (line 437, @0x00000000022ed9b0, libserver.so)  // inlines: FlushVehicleScripts
// calls: CUtlVectorBase<vehiclescript_t, CUtlMemory<vehiclescript_t, int> >::RemoveAll
// callers: vehicle_flushscript
// globals: g_pPhysicsHook
void __cdecl PhysFlushVehicleScripts()
{
  CUtlVectorBase<vehiclescript_t,CUtlMemory<vehiclescript_t,int>>::RemoveAll(&g_pPhysicsHook->m_vehicleScripts);
}


// FindPhysicsObjectByName  (line 443, @0x00000000022eb140, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String, V_strlen
// calls: strlen, CGameEntitySystem::FindEntityByName, CBaseEntity::VPhysicsGetObject, CBaseEntity::GetAbsOrigin, CFmtStrN<256, false>::CFmtStrN, DevWarning(char const*,...), __stack_chk_fail
// strings: "(%f, %f, %f)", "Found %s\n", "Unknown"
IPhysicsObject *__fastcall FindPhysicsObjectByName(const char *pName, CBaseEntity *pSearchingEntity)
{
  IPhysicsObject *Object; // rbx
  CBaseEntity *v5; // r15
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rax
  const Vector *AbsOrigin; // rax
  CEntityIdentity *v10; // rax
  const char *m_pAsString; // rsi
  CBaseEntity *v12; // rax
  const char *pErrorName; // [rsp+18h] [rbp-158h]
  CFmtStrN<256,false> v14; // [rsp+20h] [rbp-150h] BYREF
  unsigned __int64 v15; // [rsp+138h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( pName == 0 )
    return 0;
  Object = 0;
  if ( strlen(pName) != 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v5, pName, pSearchingEntity, 0, 0, 0);
      v5 = EntityByName;
      if ( EntityByName == 0 )
        break;
      if ( CBaseEntity::VPhysicsGetObject(EntityByName) != 0 )
      {
        if ( Object != 0 )
        {
          if ( pSearchingEntity != 0 )
          {
            m_pEntity = pSearchingEntity->m_pEntity;
            pErrorName = "";
            if ( m_pEntity->m_designerName.u.m_Id != 0 )
              pErrorName = m_pEntity->m_designerName.u.m_pAsString;
            AbsOrigin = CBaseEntity::GetAbsOrigin(pSearchingEntity);
          }
          else
          {
            pErrorName = "Unknown";
            AbsOrigin = &vec3_origin;
          }
          CFmtStrN<256,false>::CFmtStrN(&v14, "(%f, %f, %f)", AbsOrigin->x, AbsOrigin->y, AbsOrigin->z);
          DevWarning(&stru_333F690.m_DamageModifiers.m_Head, pErrorName, v14.m_szBuf, pName);
          while ( 1 )
          {
            v12 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v5, pName, pSearchingEntity, 0, 0, 0);
            v5 = v12;
            if ( v12 == 0 )
              break;
            v10 = v12->m_pEntity;
            m_pAsString = "";
            if ( v10->m_designerName.u.m_Id != 0 )
              m_pAsString = v10->m_designerName.u.m_pAsString;
            DevWarning("Found %s\n", m_pAsString);
          }
          return Object;
        }
        Object = CBaseEntity::VPhysicsGetObject(v5);
      }
    }
  }
  return Object;
}


// FindPhysicsBodyByName  (line 475, @0x00000000022eb310, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String, V_strlen
// calls: strlen, CGameEntitySystem::FindEntityByName, CBaseEntity::VPhysicsGetAggregate, CBaseEntity::GetAbsOrigin, CFmtStrN<256, false>::CFmtStrN, DevWarning(char const*,...), __stack_chk_fail
// callers: FindPhysicsEntityByNameOrWorld, CPhysicsSpring::GetSpringObjectConnections, CKeepUpright::Activate, FindPhysicsAnchor
// strings: "(%f, %f, %f)", "Found %s\n", "Unknown"
HPhysicsBody __fastcall FindPhysicsBodyByName(const char *pName, CBaseEntity *pSearchingEntity)
{
  IPhysicsBody *v4; // rbx
  CBaseEntity *v5; // r15
  CBaseEntity *EntityByName; // rax
  IPhysAggregateInstance *Aggregate; // rax
  CEntityIdentity *m_pEntity; // rax
  const Vector *AbsOrigin; // rax
  CEntityIdentity *v11; // rax
  const char *m_pAsString; // rsi
  CBaseEntity *v13; // rax
  const char *pErrorName; // [rsp+18h] [rbp-158h]
  CFmtStrN<256,false> v15; // [rsp+20h] [rbp-150h] BYREF
  unsigned __int64 v16; // [rsp+138h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( pName == 0 )
    return 0;
  v4 = 0;
  if ( strlen(pName) != 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v5, pName, pSearchingEntity, 0, 0, 0);
      v5 = EntityByName;
      if ( EntityByName == 0 )
        break;
      if ( CBaseEntity::VPhysicsGetAggregate(EntityByName) != 0 )
      {
        if ( v4 != 0 )
        {
          if ( pSearchingEntity != 0 )
          {
            m_pEntity = pSearchingEntity->m_pEntity;
            pErrorName = "";
            if ( m_pEntity->m_designerName.u.m_Id != 0 )
              pErrorName = m_pEntity->m_designerName.u.m_pAsString;
            AbsOrigin = CBaseEntity::GetAbsOrigin(pSearchingEntity);
          }
          else
          {
            pErrorName = "Unknown";
            AbsOrigin = &vec3_origin;
          }
          CFmtStrN<256,false>::CFmtStrN(&v15, "(%f, %f, %f)", AbsOrigin->x, AbsOrigin->y, AbsOrigin->z);
          DevWarning(&stru_333F690.m_DamageModifiers.m_Head, pErrorName, v15.m_szBuf, pName);
          while ( 1 )
          {
            v13 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v5, pName, pSearchingEntity, 0, 0, 0);
            v5 = v13;
            if ( v13 == 0 )
              break;
            v11 = v13->m_pEntity;
            m_pAsString = "";
            if ( v11->m_designerName.u.m_Id != 0 )
              m_pAsString = v11->m_designerName.u.m_pAsString;
            DevWarning("Found %s\n", m_pAsString);
          }
          return v4;
        }
        Aggregate = CBaseEntity::VPhysicsGetAggregate(v5);
        v4 = (*(Aggregate->_vptr_IPhysAggregateInstance + 10))(Aggregate, 0);
      }
    }
  }
  return v4;
}


