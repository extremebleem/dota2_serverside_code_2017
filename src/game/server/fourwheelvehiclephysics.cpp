// Reconstructed from DWARF by pahole; not original source.

// src/game/server/fourwheelvehiclephysics.cpp:371
class CDummyVehicleController : public IPhysicsVehicleController {
public:

private:

	CDummyVehicleController(CDummyVehicleController &);
	CDummyVehicleController(const CDummyVehicleController &);
	CDummyVehicleController();
	virtual void Update(float, vehicle_controlparams_t &);
	virtual const vehicle_operatingparams_t & GetOperatingParams();
	virtual const vehicleparams_t & GetVehicleParams();
	virtual vehicleparams_t & GetVehicleParamsForChange();
	virtual float UpdateBooster(float);
	virtual int GetWheelCount();
	virtual IPhysicsObject * GetWheel(int);
	virtual bool GetWheelContactPoint(int, Vector *, int *);
	virtual void SetSpringLength(int, float);
	virtual void SetWheelFriction(int, float);
	virtual void OnVehicleEnter();
	virtual void OnVehicleExit();
	virtual void SetEngineDisabled(bool);
	virtual bool IsEngineDisabled();
	virtual void GetCarSystemDebugData(vehicle_debugcarsystem_t &);
	virtual void VehicleDataReload();
	virtual ~CDummyVehicleController();

	// vtable[2] Update
	// vtable[3] GetOperatingParams
	// vtable[4] GetVehicleParams
	// vtable[5] GetVehicleParamsForChange
	// vtable[6] UpdateBooster
	// vtable[7] GetWheelCount
	// vtable[8] GetWheel
	// vtable[9] GetWheelContactPoint
	// vtable[10] SetSpringLength
	// vtable[11] SetWheelFriction
	// vtable[12] OnVehicleEnter
	// vtable[13] OnVehicleExit
	// vtable[14] SetEngineDisabled
	// vtable[15] IsEngineDisabled
	// vtable[16] GetCarSystemDebugData
	// vtable[17] VehicleDataReload
	// sizeof = 728
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// RemapAngleRange  (line 40, @0x0000000002222a80, libserver.so)  // inlines: SimpleSpline
// calls: AngleNormalize
// callers: CFourWheelVehiclePhysics::GetVehicleViewPosition
float __fastcall RemapAngleRange(float a1, float startInterval, float endInterval, float value)
{
  float result; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm4_4
  float v7; // xmm2_4

  result = AngleNormalize(startInterval);
  v5 = fabs(result);
  if ( a1 > v5 )
    return 0.0;
  if ( startInterval >= v5 )
  {
    v6 = (v5 - a1) / (startInterval - a1);
    v7 = ((3.0 * (v6 * v6)) - (((v6 * v6) + (v6 * v6)) * v6)) * startInterval;
    if ( result < 0.0 )
      return -v7;
    return v7;
  }
  return result;
}


// CFourWheelVehiclePhysics::AddDatadescMetadataKeys  (line 84, @0x0000000002222b30, libserver.so)
void __fastcall CFourWheelVehiclePhysics::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CFourWheelVehiclePhysics::GetBaseMap  (line 84, @0x0000000002222b40, libserver.so)
datamap_t *__cdecl CFourWheelVehiclePhysics::GetBaseMap()
{
  return 0;
}


// DataMapInit<CFourWheelVehiclePhysics>  (line 84, @0x0000000002222b50, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CFourWheelVehiclePhysics"
// globals: `guard variable for'DataMapInit<CFourWheelVehiclePhysics>(CFourWheelVehiclePhysics *)::nameHolder, CFourWheelVehiclePhysics::m_DataMap, DataMapInit<CFourWheelVehiclePhysics>(CFourWheelVehiclePhysics *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFourWheelVehiclePhysics>(CFourWheelVehiclePhysics_0 *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFourWheelVehiclePhysics>(CFourWheelVehiclePhysics *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFourWheelVehiclePhysics>(CFourWheelVehiclePhysics *)::nameHolder) != 0 )
  {
    DataMapInit<CFourWheelVehiclePhysics>(CFourWheelVehiclePhysics *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFourWheelVehiclePhysics>(CFourWheelVehiclePhysics *)::nameHolder.m_pszBase = "CFourWheelVehiclePhysics";
    DataMapInit<CFourWheelVehiclePhysics>(CFourWheelVehiclePhysics *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFourWheelVehiclePhysics>(CFourWheelVehiclePhysics *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFourWheelVehiclePhysics>(CFourWheelVehiclePhysics *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFourWheelVehiclePhysics>(CFourWheelVehiclePhysics *)::nameHolder.m_nLenBase = 24;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFourWheelVehiclePhysics>(CFourWheelVehiclePhysics *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFourWheelVehiclePhysics>(CFourWheelVehiclePhysics *)::nameHolder,
      &_dso_handle);
  }
  CFourWheelVehiclePhysics::m_DataMap.baseMap = 0;
  CFourWheelVehiclePhysics::m_DataMap.dataDesc = &DataMapInit<CFourWheelVehiclePhysics>(CFourWheelVehiclePhysics *)::dataDesc[1];
  CFourWheelVehiclePhysics::m_DataMap.dataNumFields = 41;
  return &CFourWheelVehiclePhysics::m_DataMap;
}


// CFourWheelVehiclePhysics::CFourWheelVehiclePhysics  (line 146, @0x0000000002222c10, libserver.so)  // inlines: CEntityHandle, CHandle
// callers: CPropVehicle::CPropVehicle
void __fastcall CFourWheelVehiclePhysics::CFourWheelVehiclePhysics(
        CFourWheelVehiclePhysics_0 *const this,
        CBaseAnimating *pOuter)
{
  this->_vptr_CFourWheelVehiclePhysics = &off_4040090;
  this->m_pOuter.m_Index = -1;
  this->m_flVehicleVolume = 0.5;
  this->m_pOuterServerVehicle = 0;
  this->m_flMaxSpeed = 30.0;
}


// CFourWheelVehiclePhysics::~CFourWheelVehiclePhysics  (line 157, @0x0000000002222c40, libserver.so)
// callers: CPropVehicle::~CPropVehicle
void __fastcall CFourWheelVehiclePhysics::~CFourWheelVehiclePhysics(CFourWheelVehiclePhysics_0 *const this)
{
  this->_vptr_CFourWheelVehiclePhysics = &off_4040090;
}


// CFourWheelVehiclePhysics::InitializePoseParameters  (line 191, @0x0000000002222c50, libserver.so)  // inlines: Get, GetInstance, LookupPoseParameter, SetPoseParameter, operator->
// calls: CEntityHandle::operator CEntityInstance*, CBaseAnimating::LookupPoseParameter, CBaseAnimating::SetPoseParameter
// callers: CFourWheelVehiclePhysics::Spawn
// strings: "vehicle_wheel_fl_height", "vehicle_wheel_fr_height", "vehicle_wheel_rl_height", "vehicle_wheel_rr_height", "vehicle_wheel_fl_spin", "vehicle_wheel_fr_spin" (11 total)
void __fastcall CFourWheelVehiclePhysics::InitializePoseParameters(CFourWheelVehiclePhysics_0 *const this)
{
  CHandle<CBaseAnimating> *p_m_pOuter; // r12
  const CBaseAnimating *v3; // rax
  const CBaseAnimating *v4; // rax
  const CBaseAnimating *v5; // rax
  const CBaseAnimating *v6; // rax
  const CBaseAnimating *v7; // rax
  const CBaseAnimating *v8; // rax
  const CBaseAnimating *v9; // rax
  const CBaseAnimating *v10; // rax
  const CBaseAnimating *v11; // rax
  const CBaseAnimating *v12; // rax
  const CBaseAnimating *v13; // rax
  int v14; // eax
  int v15; // r13d
  CBaseAnimating *v16; // rax
  float v17; // xmm1_4
  CBaseAnimating *v18; // rax
  float v19; // xmm1_4
  CBaseAnimating *v20; // rax
  float v21; // xmm1_4
  CBaseAnimating *v22; // rax
  float v23; // xmm1_4
  CBaseAnimating *v24; // rax
  float v25; // xmm1_4
  CBaseAnimating *v26; // rax
  float v27; // xmm1_4

  p_m_pOuter = &this->m_pOuter;
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_pOuter);
  this->m_poseParameters[0] = CBaseAnimating::LookupPoseParameter(v3, "vehicle_wheel_fl_height");
  v4 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  this->m_poseParameters[1] = CBaseAnimating::LookupPoseParameter(v4, "vehicle_wheel_fr_height");
  v5 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  this->m_poseParameters[2] = CBaseAnimating::LookupPoseParameter(v5, "vehicle_wheel_rl_height");
  v6 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  this->m_poseParameters[3] = CBaseAnimating::LookupPoseParameter(v6, "vehicle_wheel_rr_height");
  v7 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  this->m_poseParameters[4] = CBaseAnimating::LookupPoseParameter(v7, "vehicle_wheel_fl_spin");
  v8 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  this->m_poseParameters[5] = CBaseAnimating::LookupPoseParameter(v8, "vehicle_wheel_fr_spin");
  v9 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  this->m_poseParameters[6] = CBaseAnimating::LookupPoseParameter(v9, "vehicle_wheel_rl_spin");
  v10 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  this->m_poseParameters[7] = CBaseAnimating::LookupPoseParameter(v10, "vehicle_wheel_rr_spin");
  v11 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  this->m_poseParameters[8] = CBaseAnimating::LookupPoseParameter(v11, "vehicle_steer");
  v12 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  this->m_poseParameters[9] = CBaseAnimating::LookupPoseParameter(v12, "vehicle_action");
  v13 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  v14 = CBaseAnimating::LookupPoseParameter(v13, "vehicle_guage");
  this->m_poseParameters[10] = v14;
  v15 = v14;
  v16 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v16, v15, 0.0, v17);
  v18 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v18, this->m_poseParameters[8], 0.0, v19);
  v20 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v20, this->m_poseParameters[0], 0.0, v21);
  v22 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v22, this->m_poseParameters[1], 0.0, v23);
  v24 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v24, this->m_poseParameters[2], 0.0, v25);
  v26 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v26, this->m_poseParameters[3], 0.0, v27);
}


// CFourWheelVehiclePhysics::ParseVehicleScript  (line 218, @0x00000000022236e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator->, operator=
// calls: PhysFindOrAddVehicleScript, CFourWheelVehiclePhysics::CalcWheelData, CBaseEntity::GetModel, PhysModelParseSolid
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CFourWheelVehiclePhysics::ParseVehicleScript(
        CFourWheelVehiclePhysics_0 *const this,
        const char *pScriptName,
        solid_t *const solid,
        vehicleparams_t *const vehicle)
{
  uint32 m_Index; // eax
  const CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  uint32 v11; // eax
  CBaseEntity *v12; // rsi
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  float x; // xmm0_4
  vec_t z; // xmm0_4
  float massOverride; // xmm0_4
  HModel hModel; // [rsp+0h] [rbp-30h] BYREF

  PhysFindOrAddVehicleScript(pScriptName, vehicle, 0);
  this->m_debugRadius = vehicle->axles[0].wheels.radius;
  CFourWheelVehiclePhysics::CalcWheelData(this, vehicle);
  m_Index = this->m_pOuter.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_pOuter.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[this->m_pOuter.m_Index & 0x1FF];
      if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  CBaseEntity::GetModel(&hModel, m_pInstance);
  v11 = this->m_pOuter.m_Index;
  v12 = 0;
  if ( v11 + 2 > 1 )
  {
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_pOuter.m_Index) >> 9) & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[this->m_pOuter.m_Index & 0x1FF];
      if ( v14 != 0 && v11 == v14->m_EHandle.m_Index )
        v12 = v14->m_pInstance;
    }
  }
  PhysModelParseSolid(solid, v12, &hModel);
  x = vehicle->body.massCenterOverride.x;
  if ( x != vec3_origin.x
    || vec3_origin.y != vehicle->body.massCenterOverride.y
    || vec3_origin.z != vehicle->body.massCenterOverride.z )
  {
    solid->massCenterOverride.x = x;
    solid->massCenterOverride.y = vehicle->body.massCenterOverride.y;
    z = vehicle->body.massCenterOverride.z;
    solid->params.massCenterOverride = &solid->massCenterOverride;
    solid->massCenterOverride.z = z;
  }
  massOverride = vehicle->body.massOverride;
  if ( massOverride > 0.0 )
    solid->params.mass = massOverride;
  return 1;
}


// CFourWheelVehiclePhysics::CalcWheelData  (line 244, @0x0000000002222e50, libserver.so)  // inlines: Get, GetAttachment, GetInstance, SetPoseParameter, String, ToCStr, VectorAdd, VectorITransform, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator->, operator=
// calls: CEntityHandle::operator CEntityInstance*, CBaseAnimating::SetPoseParameter, CBaseAnimating::GetAttachment, CBaseEntity::GetModelName, DevWarning(char const*,...), CBaseEntity::EntityToWorldTransform, VectorITransform
// callers: CFourWheelVehiclePhysics::ParseVehicleScript
// strings: "wheel_fl", "wheel_fr", "wheel_rl", "wheel_rr", "raytrace_fl", "raytrace_rl" (9 total)
void __fastcall CFourWheelVehiclePhysics::CalcWheelData(
        CFourWheelVehiclePhysics_0 *const this,
        vehicleparams_t *const vehicle)
{
  CHandle<CBaseAnimating> *p_m_pOuter; // rbx
  CBaseAnimating *v5; // rax
  float v6; // xmm1_4
  CBaseAnimating *v7; // rax
  float v8; // xmm1_4
  CBaseAnimating *v9; // rax
  float v10; // xmm1_4
  CBaseAnimating *v11; // rax
  float v12; // xmm1_4
  const CBaseAnimating *v13; // rax
  const CBaseAnimating *v14; // rax
  CBaseAnimating *v15; // rax
  float v16; // xmm1_4
  CBaseAnimating *v17; // rax
  float v18; // xmm1_4
  CBaseAnimating *v19; // rax
  float v20; // xmm1_4
  CBaseAnimating *v21; // rax
  float v22; // xmm1_4
  const CBaseAnimating *v23; // rax
  const CBaseAnimating *v24; // rax
  __int64 v25; // rcx
  float v26; // xmm0_4
  CBaseAnimating *v27; // rax
  float v28; // xmm1_4
  CBaseAnimating *v29; // rax
  float v30; // xmm1_4
  CBaseAnimating *v31; // rax
  float v32; // xmm1_4
  CBaseAnimating *v33; // rax
  float v34; // xmm1_4
  const CBaseAnimating *v35; // rax
  const CBaseAnimating *v36; // rax
  const CBaseEntity *v37; // rax
  const char *v38; // rsi
  const CBaseAnimating *v39; // rax
  CBaseEntity *v40; // rax
  matrix3x4_t *v41; // rax
  CBaseEntity *v42; // rax
  matrix3x4_t *v43; // rax
  vec_t z; // xmm5_4
  float v45; // xmm3_4
  float y; // xmm6_4
  vec_t v47; // xmm2_4
  float v48; // xmm1_4
  vec_t v49; // xmm0_4
  vec_t v50; // xmm7_4
  vec_t v51; // xmm1_4
  const CBaseAnimating *v52; // rax
  CBaseEntity *v53; // rax
  matrix3x4_t *v54; // rax
  CBaseEntity *v55; // rax
  matrix3x4_t *v56; // rax
  float v57; // xmm6_4
  float v58; // xmm5_4
  float v59; // xmm4_4
  vec_t v60; // xmm2_4
  vec_t v61; // xmm1_4
  vec_t v62; // xmm0_4
  const CBaseAnimating *v63; // rax
  CBaseEntity *v64; // rax
  matrix3x4_t *v65; // rax
  CBaseEntity *v66; // rax
  matrix3x4_t *v67; // rax
  float v68; // xmm5_4
  float v69; // xmm4_4
  vec_t v70; // xmm2_4
  vec_t v71; // xmm1_4
  vec_t v72; // xmm0_4
  vec_t v73; // xmm6_4
  const CBaseAnimating *v74; // rax
  CBaseEntity *v75; // rax
  matrix3x4_t *v76; // rax
  CBaseEntity *v77; // rax
  matrix3x4_t *v78; // rax
  float v79; // xmm0_4
  float v80; // xmm1_4
  const CBaseAnimating *v81; // rax
  CBaseEntity *v82; // rax
  matrix3x4_t *v83; // rax
  CBaseEntity *v84; // rax
  matrix3x4_t *v85; // rax
  float v86; // xmm0_4
  float v87; // xmm1_4
  const CBaseAnimating *v88; // rax
  CBaseEntity *v89; // rax
  matrix3x4_t *v90; // rax
  CBaseEntity *v91; // rax
  matrix3x4_t *v92; // rax
  float x; // xmm7_4
  vec_t v94; // xmm5_4
  float v95; // xmm3_4
  float v96; // xmm6_4
  vec_t v97; // xmm2_4
  float v98; // xmm1_4
  vec_t v99; // xmm0_4
  vec_t v100; // xmm1_4
  float v101; // [rsp+Ch] [rbp-A4h]
  __int64 v102; // [rsp+10h] [rbp-A0h]
  float *out; // [rsp+18h] [rbp-98h]
  const char *v104; // [rsp+20h] [rbp-90h] BYREF
  Vector left; // [rsp+30h] [rbp-80h] BYREF
  Vector right; // [rsp+40h] [rbp-70h] BYREF
  QAngle dummy; // [rsp+50h] [rbp-60h] BYREF
  const char *pWheelAttachments[4]; // [rsp+60h] [rbp-50h]

  p_m_pOuter = &this->m_pOuter;
  pWheelAttachments[0] = "wheel_fl";
  pWheelAttachments[1] = "wheel_fr";
  pWheelAttachments[2] = "wheel_rl";
  pWheelAttachments[3] = "wheel_rr";
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_pOuter);
  CBaseAnimating::SetPoseParameter(v5, this->m_poseParameters[0], 0.0, v6);
  v7 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v7, this->m_poseParameters[1], 0.0, v8);
  v9 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v9, this->m_poseParameters[2], 0.0, v10);
  v11 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v11, this->m_poseParameters[3], 0.0, v12);
  v13 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  if ( CBaseAnimating::GetAttachment(v13, "wheel_fl", &left, &dummy) )
  {
    v39 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
    if ( CBaseAnimating::GetAttachment(v39, "wheel_fr", &right, &dummy) )
    {
      v40 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
      v41 = CBaseEntity::EntityToWorldTransform(v40);
      VectorITransform(&left.x, v41, &left.x);
      v42 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
      v43 = CBaseEntity::EntityToWorldTransform(v42);
      VectorITransform(&right.x, v43, &right.x);
      z = left.z;
      v45 = right.z;
      y = right.y;
      v47 = (left.x + right.x) * 0.5;
      v48 = left.y + right.y;
      v49 = (left.z + right.z) * 0.5;
      v50 = right.x - v47;
      vehicle->axles[0].offset.x = v47;
      v51 = v48 * 0.5;
      vehicle->axles[0].wheelOffset.x = v50;
      vehicle->axles[0].offset.z = v49;
      vehicle->axles[0].offset.y = v51;
      vehicle->axles[0].wheelOffset.z = v45 - v49;
      vehicle->axles[0].wheelOffset.y = y - v51;
      this->m_wheelBaseHeight[0] = z;
      this->m_wheelBaseHeight[1] = v45;
    }
  }
  v14 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  if ( CBaseAnimating::GetAttachment(v14, "wheel_rl", &left, &dummy) )
  {
    v88 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
    if ( CBaseAnimating::GetAttachment(v88, "wheel_rr", &right, &dummy) )
    {
      v89 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
      v90 = CBaseEntity::EntityToWorldTransform(v89);
      VectorITransform(&left.x, v90, &left.x);
      v91 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
      v92 = CBaseEntity::EntityToWorldTransform(v91);
      VectorITransform(&right.x, v92, &right.x);
      x = right.x;
      v94 = left.z;
      v95 = right.z;
      v96 = right.y;
      v97 = (left.x + right.x) * 0.5;
      v98 = left.y + right.y;
      v99 = (left.z + right.z) * 0.5;
      vehicle->axles[1].offset.x = v97;
      v100 = v98 * 0.5;
      vehicle->axles[1].wheelOffset.x = x - v97;
      vehicle->axles[1].offset.z = v99;
      vehicle->axles[1].offset.y = v100;
      vehicle->axles[1].wheelOffset.z = v95 - v99;
      vehicle->axles[1].wheelOffset.y = v96 - v100;
      this->m_wheelBaseHeight[2] = v94;
      this->m_wheelBaseHeight[3] = v95;
    }
  }
  v15 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v15, this->m_poseParameters[0], COERCE_DOUBLE(1065353216), v16);
  v17 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v17, this->m_poseParameters[1], COERCE_DOUBLE(1065353216), v18);
  v19 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v19, this->m_poseParameters[2], COERCE_DOUBLE(1065353216), v20);
  v21 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v21, this->m_poseParameters[3], COERCE_DOUBLE(1065353216), v22);
  v23 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  if ( CBaseAnimating::GetAttachment(v23, "wheel_fl", &left, &dummy) )
  {
    v81 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
    if ( CBaseAnimating::GetAttachment(v81, "wheel_fr", &right, &dummy) )
    {
      v82 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
      v83 = CBaseEntity::EntityToWorldTransform(v82);
      VectorITransform(&left.x, v83, &left.x);
      v84 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
      v85 = CBaseEntity::EntityToWorldTransform(v84);
      VectorITransform(&right.x, v85, &right.x);
      v86 = this->m_wheelBaseHeight[0] - left.z;
      v87 = this->m_wheelBaseHeight[1] - right.z;
      this->m_wheelTotalHeight[0] = v86;
      this->m_wheelTotalHeight[1] = v87;
      vehicle->axles[0].wheels.springAdditionalLength = v86;
    }
  }
  v24 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  if ( CBaseAnimating::GetAttachment(v24, "wheel_rl", &left, &dummy) )
  {
    v74 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
    if ( CBaseAnimating::GetAttachment(v74, "wheel_rr", &right, &dummy) )
    {
      v75 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
      v76 = CBaseEntity::EntityToWorldTransform(v75);
      VectorITransform(&left.x, v76, &left.x);
      v77 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
      v78 = CBaseEntity::EntityToWorldTransform(v77);
      VectorITransform(&right.x, v78, &right.x);
      v79 = this->m_wheelBaseHeight[0] - left.z;
      v80 = this->m_wheelBaseHeight[1] - right.z;
      this->m_wheelTotalHeight[2] = v79;
      this->m_wheelTotalHeight[3] = v80;
      vehicle->axles[1].wheels.springAdditionalLength = v79;
    }
  }
  v25 = 0;
  v26 = 0.0;
  do
  {
    if ( v26 == *(this->m_wheelTotalHeight + v25) )
    {
      v101 = v26;
      v102 = v25;
      out = *(pWheelAttachments + 2 * v25);
      v37 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
      CBaseEntity::GetModelName(&v104, v37);
      v38 = "";
      if ( v104 != 0 )
        v38 = v104;
      DevWarning("Vehicle %s has invalid wheel attachment for %s - no movement\n", v38, out);
      v25 = v102;
      v26 = v101;
      *(this->m_wheelTotalHeight + v102) = 1.0;
    }
    v25 += 4;
  }
  while ( v25 != 16 );
  v27 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v27, this->m_poseParameters[0], 0.0, v28);
  v29 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v29, this->m_poseParameters[1], 0.0, v30);
  v31 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v31, this->m_poseParameters[2], 0.0, v32);
  v33 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  CBaseAnimating::SetPoseParameter(v33, this->m_poseParameters[3], 0.0, v34);
  v35 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  if ( CBaseAnimating::GetAttachment(v35, "raytrace_fl", &left, &dummy) )
  {
    v63 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
    if ( CBaseAnimating::GetAttachment(v63, "raytrace_fr", &right, &dummy) )
    {
      v64 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
      v65 = CBaseEntity::EntityToWorldTransform(v64);
      VectorITransform(&left.x, v65, &left.x);
      v66 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
      v67 = CBaseEntity::EntityToWorldTransform(v66);
      VectorITransform(&right.x, v67, &right.x);
      v68 = right.y;
      v69 = right.z;
      v70 = (left.x + right.x) * 0.5;
      v71 = (left.y + right.y) * 0.5;
      v72 = (left.z + right.z) * 0.5;
      v73 = right.x - v70;
      vehicle->axles[0].raytraceCenterOffset.x = v70;
      vehicle->axles[0].raytraceCenterOffset.y = v71;
      vehicle->axles[0].raytraceCenterOffset.z = v72;
      vehicle->axles[0].raytraceOffset.x = v73;
      vehicle->axles[0].raytraceOffset.y = v68 - v71;
      vehicle->axles[0].raytraceOffset.z = v69 - v72;
    }
  }
  v36 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
  if ( CBaseAnimating::GetAttachment(v36, "raytrace_rl", &left, &dummy) )
  {
    v52 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
    if ( CBaseAnimating::GetAttachment(v52, "raytrace_rr", &right, &dummy) )
    {
      v53 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
      v54 = CBaseEntity::EntityToWorldTransform(v53);
      VectorITransform(&left.x, v54, &left.x);
      v55 = CEntityHandle::operator CEntityInstance *(p_m_pOuter);
      v56 = CBaseEntity::EntityToWorldTransform(v55);
      VectorITransform(&right.x, v56, &right.x);
      v57 = right.x;
      v58 = right.y;
      v59 = right.z;
      v60 = (left.x + right.x) * 0.5;
      v61 = (left.y + right.y) * 0.5;
      v62 = (left.z + right.z) * 0.5;
      vehicle->axles[1].raytraceCenterOffset.x = v60;
      vehicle->axles[1].raytraceCenterOffset.y = v61;
      vehicle->axles[1].raytraceCenterOffset.z = v62;
      vehicle->axles[1].raytraceOffset.x = v57 - v60;
      vehicle->axles[1].raytraceOffset.y = v58 - v61;
      vehicle->axles[1].raytraceOffset.z = v59 - v62;
    }
  }
}


// CFourWheelVehiclePhysics::Precache  (line 337, @0x0000000002223880, libserver.so)
// calls: PrecacheEffect
// callers: CPropVehicle::Precache, CPropVehicleDriveable::Precache
// strings: "WheelDust"
void __fastcall CFourWheelVehiclePhysics::Precache(
        CFourWheelVehiclePhysics_0 *const this,
        const CEntityPrecacheContext *pContext)
{
  PrecacheEffect("WheelDust", 0);
}


// CFourWheelVehiclePhysics::Spawn  (line 346, @0x00000000022238a0, libserver.so)  // inlines: SetMaxReverseThrottle, SetMaxThrottle
// calls: CFourWheelVehiclePhysics::InitializePoseParameters
// callers: CPropVehicle::Spawn
void __fastcall CFourWheelVehiclePhysics::Spawn(
        CFourWheelVehiclePhysics_0 *const this,
        const CEntityKeyValues *pKeyValues)
{
  this->m_actionValue = 0.0;
  this->m_actionSpeed = 0.0;
  this->m_bIsOn = 0;
  this->m_controls.handbrake = 0;
  this->m_controls.handbrakeLeft = 0;
  this->m_controls.handbrakeRight = 0;
  this->m_controls.bHasBrakePedal = 1;
  this->m_controls.bAnalogSteering = 0;
  this->m_maxThrottle = 1.0;
  this->m_flMaxRevThrottle = -1.0;
  CFourWheelVehiclePhysics::InitializePoseParameters(this);
}


// CDummyVehicleController::~CDummyVehicleController  (line 371, @0x0000000002245d60, libserver.so)  // inlines: ~IPhysicsVehicleController
void __fastcall CDummyVehicleController::~CDummyVehicleController(CDummyVehicleController *const this)
{
  this->_vptr_IPhysicsVehicleController = off_403FFF0;
}


// CDummyVehicleController::~CDummyVehicleController  (line 371, @0x0000000002246710, libserver.so)  // inlines: ~CDummyVehicleController, ~IPhysicsVehicleController
// calls: operator delete
void __fastcall CDummyVehicleController::~CDummyVehicleController(CDummyVehicleController *const this)
{
  this->_vptr_IPhysicsVehicleController = off_403FFF0;
  operator delete(this);
}


// CDummyVehicleController::Update  (line 378, @0x0000000002244f20, libserver.so)
void __fastcall CDummyVehicleController::Update(
        CDummyVehicleController *const this,
        double a2,
        float dt,
        vehicle_controlparams_t *const controls)
{
  ;
}


// CDummyVehicleController::GetOperatingParams  (line 379, @0x0000000002244f30, libserver.so)
const vehicle_operatingparams_t *__fastcall CDummyVehicleController::GetOperatingParams(
        CDummyVehicleController *const this)
{
  return &this->m_vehicleOperatingParams;
}


// CDummyVehicleController::GetVehicleParams  (line 380, @0x0000000002244f40, libserver.so)
const vehicleparams_t *__fastcall CDummyVehicleController::GetVehicleParams(CDummyVehicleController *const this)
{
  return &this->m_vehicleParams;
}


// CDummyVehicleController::GetVehicleParamsForChange  (line 381, @0x0000000002244f50, libserver.so)
vehicleparams_t *__fastcall CDummyVehicleController::GetVehicleParamsForChange(CDummyVehicleController *const this)
{
  return &this->m_vehicleParams;
}


// CDummyVehicleController::UpdateBooster  (line 382, @0x0000000002244f60, libserver.so)
float __fastcall CDummyVehicleController::UpdateBooster(CDummyVehicleController *const this, double a2, float dt)
{
  return 0.0;
}


// CDummyVehicleController::GetWheelCount  (line 383, @0x0000000002244f70, libserver.so)
int __fastcall CDummyVehicleController::GetWheelCount(CDummyVehicleController *const this)
{
  return 0;
}


// CDummyVehicleController::GetWheel  (line 384, @0x0000000002244f80, libserver.so)
IPhysicsObject *__fastcall CDummyVehicleController::GetWheel(CDummyVehicleController *const this, int index)
{
  return 0;
}


// CDummyVehicleController::GetWheelContactPoint  (line 385, @0x0000000002244f90, libserver.so)
bool __fastcall CDummyVehicleController::GetWheelContactPoint(
        CDummyVehicleController *const this,
        int index,
        Vector *pContactPoint,
        int *pSurfaceProps)
{
  return 0;
}


// CDummyVehicleController::SetSpringLength  (line 386, @0x0000000002244fa0, libserver.so)
void __fastcall CDummyVehicleController::SetSpringLength(
        CDummyVehicleController *const this,
        int wheelIndex,
        double a3,
        float length)
{
  ;
}


// CDummyVehicleController::SetWheelFriction  (line 387, @0x0000000002244fb0, libserver.so)
void __fastcall CDummyVehicleController::SetWheelFriction(
        CDummyVehicleController *const this,
        int wheelIndex,
        double a3,
        float friction)
{
  ;
}


// CDummyVehicleController::OnVehicleEnter  (line 389, @0x0000000002244fc0, libserver.so)
void __fastcall CDummyVehicleController::OnVehicleEnter(CDummyVehicleController *const this)
{
  ;
}


// CDummyVehicleController::OnVehicleExit  (line 390, @0x0000000002244fd0, libserver.so)
void __fastcall CDummyVehicleController::OnVehicleExit(CDummyVehicleController *const this)
{
  ;
}


// CDummyVehicleController::SetEngineDisabled  (line 392, @0x0000000002244fe0, libserver.so)
void __fastcall CDummyVehicleController::SetEngineDisabled(CDummyVehicleController *const this, bool bDisable)
{
  ;
}


// CDummyVehicleController::IsEngineDisabled  (line 393, @0x0000000002244ff0, libserver.so)
bool __fastcall CDummyVehicleController::IsEngineDisabled(CDummyVehicleController *const this)
{
  return 1;
}


// CDummyVehicleController::GetCarSystemDebugData  (line 396, @0x0000000002245000, libserver.so)
void __fastcall CDummyVehicleController::GetCarSystemDebugData(
        CDummyVehicleController *const this,
        vehicle_debugcarsystem_t *const debugCarSystem)
{
  ;
}


// CDummyVehicleController::VehicleDataReload  (line 397, @0x0000000002245010, libserver.so)
void __fastcall CDummyVehicleController::VehicleDataReload(CDummyVehicleController *const this)
{
  ;
}


// CFourWheelVehiclePhysics::Initialize  (line 412, @0x00000000022238f0, libserver.so)
// callers: CPropVehicle::Spawn
// globals: s_dummyVehicleController
bool __fastcall CFourWheelVehiclePhysics::Initialize(
        CFourWheelVehiclePhysics_0 *const this,
        const char *pVehicleScript,
        unsigned int nVehicleType)
{
  this->m_pVehicle = &s_dummyVehicleController;
  return 1;
}


// CFourWheelVehiclePhysics::SetThrottle  (line 456, @0x0000000002223910, libserver.so)
// callers: CPropVehicle::InputThrottle
void __fastcall CFourWheelVehiclePhysics::SetThrottle(
        CFourWheelVehiclePhysics_0 *const this,
        float a2,
        float flThrottle)
{
  this->m_controls.throttle = a2;
}


// CFourWheelVehiclePhysics::SetMaxThrottle  (line 464, @0x0000000002223920, libserver.so)
void __fastcall CFourWheelVehiclePhysics::SetMaxThrottle(
        CFourWheelVehiclePhysics_0 *const this,
        float a2,
        float flMaxThrottle)
{
  this->m_maxThrottle = a2;
}


// CFourWheelVehiclePhysics::SetMaxReverseThrottle  (line 472, @0x0000000002223930, libserver.so)
void __fastcall CFourWheelVehiclePhysics::SetMaxReverseThrottle(
        CFourWheelVehiclePhysics_0 *const this,
        float a2,
        float flMaxThrottle)
{
  this->m_flMaxRevThrottle = a2;
}


// CFourWheelVehiclePhysics::SetSteering  (line 480, @0x0000000002223940, libserver.so)  // inlines: Approach
// callers: CPropVehicle::InputSteering
void __fastcall CFourWheelVehiclePhysics::SetSteering(
        CFourWheelVehiclePhysics_0 *const this,
        float a2,
        float flSteering,
        float flSteeringRate)
{
  float steering; // xmm2_4

  if ( flSteering != 0.0 )
  {
    steering = this->m_controls.steering;
    if ( (a2 - steering) <= flSteering )
    {
      if ( -flSteering > (a2 - steering) )
      {
        this->m_controls.steering = steering - flSteering;
        return;
      }
    }
    else
    {
      a2 = flSteering + steering;
    }
    this->m_controls.steering = a2;
    return;
  }
  this->m_controls.steering = a2;
}


// CFourWheelVehiclePhysics::SetSteeringDegrees  (line 495, @0x00000000022239a0, libserver.so)
void __fastcall CFourWheelVehiclePhysics::SetSteeringDegrees(
        CFourWheelVehiclePhysics_0 *const this,
        double a2,
        float flDegrees)
{
  __int64 v3; // rax
  int flDegreesa; // [rsp+Ch] [rbp-4h]

  flDegreesa = LODWORD(a2);
  v3 = (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 5))(this->m_pVehicle, a2, flDegrees);
  *(v3 + 600) = flDegreesa;
  *(v3 + 604) = flDegreesa;
}


// CFourWheelVehiclePhysics::SetAction  (line 505, @0x00000000022239d0, libserver.so)
// callers: CPropVehicle::InputAction
void __fastcall CFourWheelVehiclePhysics::SetAction(CFourWheelVehiclePhysics_0 *const this, float a2, float flAction)
{
  this->m_actionSpeed = a2;
}


// CFourWheelVehiclePhysics::TurnOn  (line 513, @0x00000000022239e0, libserver.so)  // inlines: IsEngineDisabled
// callers: CPropVehicleDriveable::InputTurnOn, CPropVehicleDriveable::StartEngine
void __fastcall CFourWheelVehiclePhysics::TurnOn(CFourWheelVehiclePhysics_0 *const this)
{
  if ( (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 15))(this->m_pVehicle) == 0 && !this->m_bIsOn )
  {
    (*(this->m_pOuterServerVehicle->_vptr_IVehicle + 66))(this->m_pOuterServerVehicle);
    this->m_bIsOn = 1;
  }
}


// CFourWheelVehiclePhysics::TurnOff  (line 528, @0x0000000002223a30, libserver.so)  // inlines: ResetControls
// callers: CPropVehicleDriveable::InputTurnOff, CPropVehicleDriveable::StopEngine, CPropVehicleDriveable::ExitVehicle
void __fastcall CFourWheelVehiclePhysics::TurnOff(CFourWheelVehiclePhysics_0 *const this)
{
  bool v2; // zf

  this->m_controls.handbrake = 1;
  v2 = !this->m_bIsOn;
  this->m_controls.handbrakeLeft = 0;
  this->m_controls.handbrakeRight = 0;
  *&this->m_controls.brake = 0;
  this->m_controls.throttle = 0.0;
  this->m_controls.steering = 0.0;
  if ( !v2 )
  {
    (*(this->m_pOuterServerVehicle->_vptr_IVehicle + 68))(this->m_pOuterServerVehicle);
    this->m_bIsOn = 0;
  }
}


// CFourWheelVehiclePhysics::SetBoost  (line 542, @0x0000000002223a90, libserver.so)  // inlines: IsEngineDisabled
void __fastcall CFourWheelVehiclePhysics::SetBoost(CFourWheelVehiclePhysics_0 *const this, double a2, float flBoost)
{
  float flBoosta; // [rsp+Ch] [rbp-14h]

  flBoosta = *&a2;
  if ( (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 15))(this->m_pVehicle, a2, flBoost) == 0 )
    this->m_controls.boost = flBoosta;
}


// CFourWheelVehiclePhysics::UpdateBooster  (line 558, @0x0000000002223ac0, libserver.so)
bool __fastcall CFourWheelVehiclePhysics::UpdateBooster(CFourWheelVehiclePhysics_0 *const this)
{
  return (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 6))(this->m_pVehicle, gpGlobals->frametime) > 0.0;
}


// CFourWheelVehiclePhysics::SetHasBrakePedal  (line 567, @0x0000000002223af0, libserver.so)
void __fastcall CFourWheelVehiclePhysics::SetHasBrakePedal(CFourWheelVehiclePhysics_0 *const this, bool bHasBrakePedal)
{
  this->m_controls.bHasBrakePedal = bHasBrakePedal;
}


// CFourWheelVehiclePhysics::Teleport  (line 575, @0x0000000002223b00, libserver.so)
// calls: ConcatTransforms, CFourWheelServerVehicle::GetFourWheelVehicle, CBaseEntity::VPhysicsGetObject
// callers: CPropVehicle::Teleport
void __fastcall CFourWheelVehiclePhysics::Teleport(
        CFourWheelVehiclePhysics_0 *const this,
        matrix3x4_t *const relativeTransform)
{
  CFourWheelVehiclePhysics_0 *v3; // rbx
  int v4; // r15d
  IPhysicsObject *v5; // rdi
  CFourWheelServerVehicle *m_pOuterServerVehicle; // rdi
  CPropVehicleDriveable *FourWheelVehicle; // rax
  IPhysicsObject *Object; // rax
  matrix3x4_t matrix; // [rsp+10h] [rbp-90h] BYREF
  matrix3x4_t newMatrix; // [rsp+40h] [rbp-60h] BYREF

  if ( this->m_wheelCount > 0 )
  {
    v3 = this;
    v4 = 0;
    do
    {
      v5 = v3->m_pWheels[0];
      ++v4;
      v3 = (v3 + 8);
      (*(*v5 + 1680LL))(v5, &matrix);
      ConcatTransforms(relativeTransform, &matrix, &newMatrix);
      (*(**&v3->m_flMaxSpeed + 1672LL))(*&v3->m_flMaxSpeed, &newMatrix, 1);
    }
    while ( this->m_wheelCount > v4 );
  }
  m_pOuterServerVehicle = this->m_pOuterServerVehicle;
  if ( m_pOuterServerVehicle != 0 && CFourWheelServerVehicle::GetFourWheelVehicle(m_pOuterServerVehicle) != 0 )
  {
    FourWheelVehicle = CFourWheelServerVehicle::GetFourWheelVehicle(this->m_pOuterServerVehicle);
    Object = CBaseEntity::VPhysicsGetObject(FourWheelVehicle);
    if ( Object != 0 )
      (*(*Object + 1592LL))(Object);
  }
}


// CFourWheelVehiclePhysics::DrawEntityDebugOverlays  (line 609, @0x0000000002223bd0, libserver.so)  // inlines: Get, GetInstance, ToQAngle, Vector, VectorTransform, operator->, operator=
// calls: QuaternionAngles, NDebugOverlay::Sphere, CEntityHandle::operator CEntityInstance*, CBaseEntity::VPhysicsGetObject, NDebugOverlay::BoxAngles, AngleMatrix, VectorTransform, NDebugOverlay::Line
// callers: CPropVehicle::DrawEntityDebugOverlays
void __fastcall CFourWheelVehiclePhysics::DrawEntityDebugOverlays(
        CFourWheelVehiclePhysics_0 *const this,
        uint64 nDebugOverlayBits)
{
  CFourWheelVehiclePhysics_0 *v2; // r15
  int v3; // r14d
  Vector *m_wheelPosition; // rbx
  __int64 v6; // rsi
  __int64 v7; // r15
  vec_t v8; // xmm1_4
  __int64 v9; // xmm1_8
  const CBaseEntity *v10; // rax
  IPhysicsObject *Object; // rbx
  float *v12; // rax
  double v13; // xmm0_8
  vec_t v14; // xmm1_4
  double v15; // xmm0_8
  __int64 v16; // xmm1_8
  vec_t *p_z; // r14
  IPhysicsVehicleController *m_pVehicle; // rdi
  vehicle_debugcarsystem_t *v19; // r15
  float v20; // xmm1_4
  __int128 v21; // xmm2
  float v22; // xmm0_4
  float v23; // xmm3_4
  float y; // xmm0_4
  float x; // xmm3_4
  float z; // xmm0_4
  vec_t v27; // xmm3_4
  float v28; // xmm0_4
  vec_t origin; // [rsp+18h] [rbp-358h]
  vec_t v30; // [rsp+20h] [rbp-350h]
  __int128 v31; // [rsp+20h] [rbp-350h]
  vec_t v32; // [rsp+30h] [rbp-340h]
  vec_t position; // [rsp+38h] [rbp-338h]
  float positiona; // [rsp+38h] [rbp-338h]
  vec_t q; // [rsp+40h] [rbp-330h]
  float radius; // [rsp+48h] [rbp-328h]
  vec_t radiusa; // [rsp+48h] [rbp-328h]
  Vector vecBodyPosition; // [rsp+50h] [rbp-320h] BYREF
  QAngle angBodyDirection; // [rsp+60h] [rbp-310h] BYREF
  float tmpY; // [rsp+70h] [rbp-300h] BYREF
  float v41; // [rsp+74h] [rbp-2FCh]
  int v42; // [rsp+78h] [rbp-2F8h]
  Vector vecEnd; // [rsp+80h] [rbp-2F0h] BYREF
  Vector vecImpact; // [rsp+90h] [rbp-2E0h] BYREF
  Vector v45; // [rsp+A0h] [rbp-2D0h] BYREF
  Vector mins; // [rsp+B0h] [rbp-2C0h] BYREF
  Vector vecAxlePositions[2]; // [rsp+C0h] [rbp-2B0h] BYREF
  Vector vecAxlePositionsHL[2]; // [rsp+E0h] [rbp-290h] BYREF
  matrix3x4_t matrix; // [rsp+100h] [rbp-270h] BYREF
  vehicle_debugcarsystem_t debugCarSystem; // [rsp+130h] [rbp-240h] BYREF

  v2 = this;
  if ( this->m_wheelCount > 0 )
  {
    v3 = 0;
    m_wheelPosition = this->m_wheelPosition;
    do
    {
      v6 = v3++;
      v7 = (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 8))(this->m_pVehicle, v6);
      radius = (*(*v7 + 1544LL))(v7);
      *&vecAxlePositionsHL[0].x = (*(*v7 + 368LL))(v7);
      vecAxlePositionsHL[0].z = v8;
      *&debugCarSystem.vecAxlePos[0].x = (*(*v7 + 384LL))(v7);
      *&debugCarSystem.vecAxlePos[0].z = v9;
      QuaternionAngles(&debugCarSystem, &matrix);
      NDebugOverlay::Sphere(vecAxlePositionsHL, &matrix, radius, 0, 0xFFu, 0, 0, 0.0, 0);
      NDebugOverlay::Sphere(m_wheelPosition, &m_wheelPosition[4], radius, 0xFFu, 0xFFu, 0, 0, 0.0, 0);
      ++m_wheelPosition;
    }
    while ( this->m_wheelCount > v3 );
    v2 = this;
  }
  v10 = CEntityHandle::operator CEntityInstance *(&v2->m_pOuter);
  Object = CBaseEntity::VPhysicsGetObject(v10);
  if ( Object != 0 )
  {
    v12 = (*(v2->m_pVehicle->_vptr_IPhysicsVehicleController + 4))(v2->m_pVehicle);
    origin = v12[12];
    v32 = v12[13];
    v30 = v12[14];
    position = v12[41];
    q = v12[42];
    radiusa = v12[43];
    v13 = (*(*Object + 368LL))(Object);
    vecBodyPosition.z = v14;
    *&vecBodyPosition.x = v13;
    v15 = (*(*Object + 384LL))(Object);
    *&debugCarSystem.vecAxlePos[0].z = v16;
    *&debugCarSystem.vecAxlePos[0].x = v15;
    QuaternionAngles(&debugCarSystem, &matrix);
    angBodyDirection = *&matrix.m_flMatVal[0][0];
    debugCarSystem.vecAxlePos[0].x = 5.0;
    debugCarSystem.vecAxlePos[0].y = 5.0;
    debugCarSystem.vecAxlePos[0].z = 5.0;
    *&matrix.m_flMatVal[0][0] = 0xC0A00000C0A00000LL;
    matrix.m_flMatVal[0][2] = -5.0;
    NDebugOverlay::BoxAngles(
      &vecBodyPosition,
      &matrix,
      debugCarSystem.vecAxlePos,
      &angBodyDirection,
      0xFFu,
      0,
      0.0,
      0,
      0);
    AngleMatrix(&angBodyDirection, &vecBodyPosition, &matrix);
    vecAxlePositions[1].y = q;
    vecAxlePositions[1].z = radiusa;
    vecAxlePositions[0].x = origin;
    vecAxlePositions[0].y = v32;
    vecAxlePositions[0].z = v30;
    vecAxlePositions[1].x = position;
    VectorTransform(&vecAxlePositions[0].x, &matrix, &vecAxlePositionsHL[0].x);
    VectorTransform(&vecAxlePositions[1].x, &matrix, &vecAxlePositionsHL[1].x);
    p_z = &debugCarSystem.vecWheelRaycastImpacts[0].z;
    debugCarSystem.vecAxlePos[0].x = 3.0;
    debugCarSystem.vecAxlePos[0].y = 3.0;
    debugCarSystem.vecAxlePos[0].z = 3.0;
    mins.x = -3.0;
    mins.y = -3.0;
    mins.z = -3.0;
    NDebugOverlay::BoxAngles(vecAxlePositionsHL, &mins, debugCarSystem.vecAxlePos, &angBodyDirection, 0, 255, 0.0, 0, 0);
    debugCarSystem.vecAxlePos[0].x = 3.0;
    debugCarSystem.vecAxlePos[0].y = 3.0;
    debugCarSystem.vecAxlePos[0].z = 3.0;
    mins.x = -3.0;
    mins.y = -3.0;
    mins.z = -3.0;
    NDebugOverlay::BoxAngles(
      &vecAxlePositionsHL[1],
      &mins,
      debugCarSystem.vecAxlePos,
      &angBodyDirection,
      0,
      255,
      0.0,
      0,
      0);
    m_pVehicle = v2->m_pVehicle;
    v19 = &debugCarSystem.vecWheelRaycasts[0][0].z;
    (*(m_pVehicle->_vptr_IPhysicsVehicleController + 16))(m_pVehicle, &debugCarSystem);
    v20 = 39.370079;
    v21 = 0x80000000;
    do
    {
      v22 = v19[-1].vecWheelRaycastImpacts[9].z * v20;
      v23 = v19->vecAxlePos[0].x * v20;
      v31 = v21;
      v19 = (v19 + 24);
      positiona = v20;
      p_z += 3;
      mins.x = 1.0;
      mins.y = 1.0;
      v42 = LODWORD(v22) ^ v21;
      y = v19[-1].vecWheelRaycastImpacts[7].y;
      v41 = v23;
      x = v19[-1].vecWheelRaycastImpacts[9].x;
      mins.z = 1.0;
      v45.x = -1.0;
      v45.y = -1.0;
      v45.z = -1.0;
      tmpY = y * v20;
      z = v19[-1].vecWheelRaycastImpacts[8].z;
      vecEnd.y = x * v20;
      v27 = *(p_z - 3) * v20;
      LODWORD(vecEnd.z) = COERCE_UNSIGNED_INT(z * v20) ^ v21;
      v28 = v19[-1].vecWheelRaycastImpacts[8].y;
      vecImpact.y = v27;
      vecEnd.x = v28 * v20;
      LODWORD(vecImpact.z) = COERCE_UNSIGNED_INT(*(p_z - 4) * v20) ^ v21;
      vecImpact.x = v20 * *(p_z - 5);
      NDebugOverlay::BoxAngles(&tmpY, &v45, &mins, &angBodyDirection, 0, 255, 0.0, 0, 0);
      NDebugOverlay::Line(&tmpY, &vecEnd, 0xFFu, 0xFFu, 0, 1, 0.0);
      mins.x = 1.0;
      mins.y = 1.0;
      mins.z = 1.0;
      v45.x = -1.0;
      v45.y = -1.0;
      v45.z = -1.0;
      NDebugOverlay::BoxAngles(&vecEnd, &v45, &mins, &angBodyDirection, 0xFFu, 0, 0.0, 0, 0);
      mins.x = 0.5;
      mins.y = 0.5;
      mins.z = 0.5;
      v45.x = -0.5;
      v45.y = -0.5;
      v45.z = -0.5;
      NDebugOverlay::BoxAngles(&vecImpact, &v45, &mins, &angBodyDirection, 0, 0, 0.0, 255, 0);
      v20 = positiona;
      v21 = v31;
    }
    while ( v19 != &debugCarSystem.vecWheelRaycasts[4][0].z );
  }
}


// CFourWheelVehiclePhysics::DrawDebugTextOverlays  (line 683, @0x00000000022242e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator->
// calls: V_snprintf, CBaseEntity::EntityText, Msg, __stack_chk_fail
// callers: CPropVehicle::DrawDebugTextOverlays
// strings: "Speed %.1f  T/S/B (%.0f/%.0f/%.1f)", "Gear: %d, RPM %4d"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CFourWheelVehiclePhysics::DrawDebugTextOverlays(
        CFourWheelVehiclePhysics_0 *const this,
        int iDebugFilterFlags,
        int nOffset)
{
  __int64 v6; // r14
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  uint32 v11; // eax
  CBaseEntity *v12; // rdi
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  char tempstr[520]; // [rsp+10h] [rbp-240h] BYREF
  unsigned __int64 v16; // [rsp+218h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( (iDebugFilterFlags & 0x4000) != 0 )
  {
    v6 = (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 3))(this->m_pVehicle);
    V_snprintf(
      tempstr,
      512,
      "Speed %.1f  T/S/B (%.0f/%.0f/%.1f)",
      *v6,
      this->m_controls.throttle,
      this->m_controls.steering,
      this->m_controls.brake);
    m_Index = this->m_pOuter.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_pOuter.m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[this->m_pOuter.m_Index & 0x1FF];
        if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
          m_pInstance = v10->m_pInstance;
      }
    }
    CBaseEntity::EntityText(m_pInstance, nOffset, tempstr, 0.0, 255, 255, 255, 255);
    Msg("%s", tempstr);
    V_snprintf(tempstr, 512, "Gear: %d, RPM %4d", *(v6 + 8), *(v6 + 4));
    v11 = this->m_pOuter.m_Index;
    v12 = 0;
    if ( v11 + 2 > 1 )
    {
      v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_pOuter.m_Index) >> 9) & 0x3F];
      if ( v13 != 0 )
      {
        v14 = &v13[this->m_pOuter.m_Index & 0x1FF];
        if ( v14 != 0 && v11 == v14->m_EHandle.m_Index )
          v12 = v14->m_pInstance;
      }
    }
    CBaseEntity::EntityText(v12, nOffset + 1, tempstr, 0.0, 255, 255, 255, 255);
    nOffset += 2;
    Msg(" %s\n", tempstr);
  }
  return nOffset;
}


// CFourWheelVehiclePhysics::PlaceWheelDust  (line 706, @0x000000000221f8c0, libserver.so)  // inlines: CEffectData, CNetworkVarBase, CNetworkVectorBase, CUtlStringToken, CWeakHandle, EnsureValidValue, EnsureValidValue<CEntityHandle>, Init, RemapValClamped, Set, Zero, clamp<float, float>, operator!=, operator=, operator=<float>
// calls: Vector::Random, VectorNormalize, DispatchEffect
// callers: CFourWheelVehiclePhysics::PlaceWheelDust, CFourWheelVehiclePhysics::Think
// strings: "WheelDust"
// globals: random_valve
void __fastcall CFourWheelVehiclePhysics::PlaceWheelDust(
        CFourWheelVehiclePhysics_0 *const this,
        int wheelIndex,
        bool ignoreSpeed)
{
  vec_t v5; // xmm2_4
  float m_flMaxSpeed; // xmm0_4
  float m_nSpeed; // xmm3_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  Vector vecPos; // [rsp+0h] [rbp-B0h] BYREF
  Vector vecVel; // [rsp+10h] [rbp-A0h] BYREF
  CEffectData data; // [rsp+20h] [rbp-90h] BYREF

  (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 9))(this->m_pVehicle, wheelIndex, &vecPos, 0);
  Vector::Random(&vecVel, 1.0, v5);
  vecVel.z = (*(*random_valve + 8LL))(random_valve, 0.30000001, 1.0);
  VectorNormalize(&vecVel);
  if ( ignoreSpeed )
  {
    v9 = 1.0;
  }
  else
  {
    m_flMaxSpeed = this->m_flMaxSpeed;
    m_nSpeed = this->m_nSpeed;
    if ( m_flMaxSpeed == 5.0 )
    {
      if ( (m_nSpeed - 5.0) < 0.0 )
        return;
      v9 = 1.0;
    }
    else
    {
      v8 = (m_nSpeed - 5.0) / (m_flMaxSpeed - 5.0);
      if ( v8 < 0.0 )
        return;
      v9 = 1.0;
      if ( v8 <= 1.0 )
      {
        v9 = v8 + 0.0;
        if ( (v8 + 0.0) == 0.0 )
          return;
      }
    }
  }
  data._vptr_CEffectData = &off_3FB64D0;
  memset(&data.m_vOrigin, 0, 48);
  data.m_hEntity.m_Value.m_Index = -1;
  data.m_hOtherEntity.m_Value.m_Index = -1;
  data.m_flScale.m_Value = 1.0;
  memset(&data.m_flMagnitude, 0, 31);
  data.m_nAttachmentName.m_Value.m_nHashCode = 0;
  data.m_iEffectName.m_Value = 0;
  if ( vecPos.x != 0.0 || vecPos.y != 0.0 || vecPos.z != 0.0 )
    data.m_vOrigin.m_Value = vecPos;
  if ( vecVel.x != 0.0 || vecVel.y != 0.0 || vecVel.z != 0.0 )
    data.m_vNormal.m_Value = vecVel;
  if ( v9 != 1.0 )
    data.m_flScale.m_Value = v9;
  DispatchEffect("WheelDust", &data);
}


// CFourWheelVehiclePhysics::PlaceWheelDust  (line 706, @0x00000000022244e0, libserver.so)  // inlines: GetBool, GetInt
// calls: CFourWheelVehiclePhysics::PlaceWheelDust
void __fastcall CFourWheelVehiclePhysics::PlaceWheelDust(
        CFourWheelVehiclePhysics_0 *const this,
        int wheelIndex,
        bool ignoreSpeed)
{
  if ( hl2_episodic.m_pParent->m_Value.m_nValue == 0 )
    CFourWheelVehiclePhysics::PlaceWheelDust(this, wheelIndex, ignoreSpeed);
}


// CFourWheelVehiclePhysics::Think  (line 747, @0x0000000002225e20, libserver.so)  // inlines: Get, GetBool, GetInstance, GetInt, GetPoseParameter, PlaceWheelDust, RemapValClamped, SetPoseParameter, clamp<float, float>, curtime, operator->, ~CPASAttenuationFilter, ~CPASFilter
// calls: CFourWheelVehiclePhysics::IsBoosting, CEntityHandle::operator CEntityInstance*, CBaseEntity::VPhysicsGetObject, CBaseAnimating::GetPoseParameter, CBaseAnimating::SetPoseParameter, CGlobalVarsBase::curtime, CFourWheelVehiclePhysics::PlaceWheelDust, CEntityHandle::operator CBaseEntity*, CPASAttenuationFilter::CPASAttenuationFilter, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CPropVehicle::Think
bool __fastcall CFourWheelVehiclePhysics::Think(CFourWheelVehiclePhysics_0 *const this)
{
  IPhysicsVehicleController *m_pVehicle; // rdi
  __int64 v3; // r12
  __int64 v4; // rax
  IPhysicsVehicleController *v5; // rdi
  __int64 v6; // r15
  float v7; // xmm0_4
  CGlobalVars *v8; // rdx
  CGlobalVars *v9; // r13
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  float v11; // xmm0_4
  const CBaseEntity *v12; // rax
  const CBaseEntity *v13; // rax
  IPhysicsObject *Object; // rax
  const CBaseAnimating *v15; // rax
  CBaseAnimating *v16; // rax
  float v17; // xmm1_4
  float v18; // xmm0_4
  CBaseAnimating *v19; // rax
  float v20; // xmm1_4
  bool result; // al
  CBaseAnimating *v22; // rax
  float v23; // xmm1_4
  bool m_bLastSkid; // al
  float v25; // xmm0_4
  ConVar *v26; // rcx
  int i; // r12d
  ConVar *v28; // rcx
  int j; // r12d
  float v30; // xmm1_4
  CFourWheelServerVehicle *m_pOuterServerVehicle; // rdi
  CBaseEntity *v32; // rax
  float v33; // xmm1_4
  float flSteer; // [rsp+8h] [rbp-178h]
  float flSteera; // [rsp+8h] [rbp-178h]
  ConVar *flSteerb; // [rsp+8h] [rbp-178h]
  ConVar *flSteerc; // [rsp+8h] [rbp-178h]
  CPASAttenuationFilter filter; // [rsp+10h] [rbp-170h] BYREF
  unsigned __int64 v39; // [rsp+148h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  m_pVehicle = this->m_pVehicle;
  if ( m_pVehicle == 0 )
    return 0;
  v3 = (*(m_pVehicle->_vptr_IPhysicsVehicleController + 3))(m_pVehicle);
  v4 = (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 4))(this->m_pVehicle);
  v5 = this->m_pVehicle;
  v6 = v4;
  v7 = 0.056818184 * *v3;
  this->m_nLastSpeed = this->m_nSpeed;
  this->m_nSpeed = fabs(v7);
  this->m_nRPM = *(v3 + 4);
  v8 = gpGlobals;
  this->m_bHasBoost = *(v4 + 580) != 0.0;
  (*(v5->_vptr_IPhysicsVehicleController + 2))(v5, &this->m_controls, v8->frametime);
  if ( !CFourWheelVehiclePhysics::IsBoosting(this) || this->m_bLastBoost )
  {
    if ( !CFourWheelVehiclePhysics::IsBoosting(this)
      && this->m_bLastBoost
      && CGlobalVarsBase::curtime(gpGlobals, 0) >= this->m_turboTimer )
    {
      this->m_bLastBoost = 0;
    }
  }
  else
  {
    v9 = gpGlobals;
    this->m_bLastBoost = 1;
    if ( v9 != 0 )
    {
      if ( !v9->m_bEnableAssertions && !v9->m_bInSimulation )
      {
        m_pfnWarningFunc = v9->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(1);
      }
      v11 = v9->m_flCurrentTime + 2.75;
    }
    else
    {
      v11 = 2.75;
    }
    this->m_turboTimer = v11;
  }
  this->m_fLastBoost = *(v3 + 12);
  this->m_nBoostTimeLeft = *(v3 + 16);
  v12 = CEntityHandle::operator CEntityInstance *(&this->m_pOuter);
  if ( CBaseEntity::VPhysicsGetObject(v12) != 0 )
  {
    v13 = CEntityHandle::operator CEntityInstance *(&this->m_pOuter);
    Object = CBaseEntity::VPhysicsGetObject(v13);
    if ( (*(*Object + 536LL))(Object) == 0 )
    {
      m_bLastSkid = this->m_bLastSkid;
      v25 = 10.0;
      if ( !m_bLastSkid )
      {
        v25 = 0.15000001 * *v3;
        if ( v25 < 10.0 )
        {
          v30 = fabs(*v3) / 66.666664;
          if ( v30 < 0.0 )
          {
            v25 = 80.0;
          }
          else
          {
            v25 = 10.0;
            if ( v30 <= 1.0 )
              v25 = (v30 * -70.0) + 80.0;
          }
        }
      }
      if ( *(v3 + 20) > v25 && this->m_bIsOn )
      {
        if ( !m_bLastSkid )
        {
          this->m_bLastSkid = 1;
          v32 = CEntityHandle::operator CBaseEntity *(&this->m_pOuter);
          CPASAttenuationFilter::CPASAttenuationFilter(&filter, v32, 0x3F4CCCCDu, v33);
          (*(this->m_pOuterServerVehicle->_vptr_IVehicle + 70))(this->m_pOuterServerVehicle, 1);
          filter._vptr_IRecipientFilter = &off_3FCB190;
          CRecipientFilter::~CRecipientFilter(&filter);
        }
        v26 = &hl2_episodic;
        for ( i = 0; i != 4; ++i )
        {
          if ( v26->m_pParent->m_Value.m_nValue == 0 )
          {
            flSteerb = v26;
            CFourWheelVehiclePhysics::PlaceWheelDust(this, i, 1);
            v26 = flSteerb;
          }
        }
      }
      else if ( m_bLastSkid )
      {
        m_pOuterServerVehicle = this->m_pOuterServerVehicle;
        this->m_bLastSkid = 0;
        (*(m_pOuterServerVehicle->_vptr_IVehicle + 71))(m_pOuterServerVehicle, 1);
      }
      if ( this->m_nSpeed > 4 && *(v6 + 669) != 0 && this->m_bIsOn )
      {
        v28 = &hl2_episodic;
        for ( j = 0; j != 4; ++j )
        {
          if ( v28->m_pParent->m_Value.m_nValue == 0 )
          {
            flSteerc = v28;
            CFourWheelVehiclePhysics::PlaceWheelDust(this, j, 0);
            v28 = flSteerc;
          }
        }
      }
    }
  }
  v15 = CEntityHandle::operator CEntityInstance *(&this->m_pOuter);
  flSteer = CBaseAnimating::GetPoseParameter(v15, this->m_poseParameters[8]);
  v16 = CEntityHandle::operator CEntityInstance *(&this->m_pOuter);
  CBaseAnimating::SetPoseParameter(v16, this->m_poseParameters[8], flSteer * 0.8 + 0.2, v17);
  v18 = ((this->m_actionSpeed * this->m_actionScale) * gpGlobals->frametime) + this->m_actionValue;
  this->m_actionValue = v18;
  flSteera = v18;
  v19 = CEntityHandle::operator CEntityInstance *(&this->m_pOuter);
  CBaseAnimating::SetPoseParameter(v19, this->m_poseParameters[9], COERCE_DOUBLE(LODWORD(flSteera)), v20);
  result = this->m_bIsOn;
  if ( result )
  {
    v22 = CEntityHandle::operator CEntityInstance *(&this->m_pOuter);
    CBaseAnimating::SetPoseParameter(v22, this->m_poseParameters[10], this->m_nSpeed / 100.0, v23);
    return this->m_bIsOn;
  }
  return result;
}


// CFourWheelVehiclePhysics::VPhysicsUpdate  (line 852, @0x0000000002224510, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, SetPoseParameter, ToQAngle, VectorITransform, operator CEntityInstance*, operator->, operator=
// calls: CBaseEntity::VPhysicsGetObject, QuaternionAngles, CEntityHandle::operator CEntityInstance*, CBaseEntity::EntityToWorldTransform, VectorITransform, CBaseAnimating::SetPoseParameter
// callers: CPropVehicle::VPhysicsUpdate
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
bool __fastcall CFourWheelVehiclePhysics::VPhysicsUpdate(
        CFourWheelVehiclePhysics_0 *const this,
        IPhysicsObject *pPhysics)
{
  uint32 m_Index; // eax
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  int m_wheelCount; // edx
  int v9; // ebx
  CFourWheelVehiclePhysics_0 *v10; // rax
  __int64 v12; // r15
  __int64 v13; // rbx
  double v14; // xmm0_8
  _DWORD *v15; // rax
  int v16; // xmm1_4
  double v17; // xmm0_8
  __int64 v18; // xmm1_8
  CBaseEntity *v19; // rax
  matrix3x4_t *v20; // rax
  char *v21; // r12
  CBaseAnimating *v22; // rax
  float v23; // xmm1_4
  CBaseAnimating *v24; // rax
  int v25; // [rsp+4h] [rbp-5Ch]
  unsigned int in1; // [rsp+8h] [rbp-58h]
  QAngle angles; // [rsp+10h] [rbp-50h] BYREF
  __int128 tmp; // [rsp+20h] [rbp-40h] OVERLAPPED BYREF

  m_Index = this->m_pOuter.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_pOuter.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_pOuter.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CBaseEntity::VPhysicsGetObject(m_pInstance) == pPhysics )
    return 1;
  m_wheelCount = this->m_wheelCount;
  if ( m_wheelCount <= 0 )
    return 0;
  v9 = 0;
  v10 = this;
  if ( this->m_pWheels[0] != pPhysics )
  {
    while ( ++v9 != m_wheelCount )
    {
      v10 = (v10 + 8);
      if ( v10->m_pWheels[0] == pPhysics )
      {
        v25 = v9 + 4;
        goto LABEL_14;
      }
    }
    return 0;
  }
  v25 = 4;
  v9 = 0;
LABEL_14:
  v12 = v9;
  v13 = v9;
  v14 = (*(*pPhysics + 368LL))(pPhysics);
  v15 = (&this->m_pWheels[4] + v13 * 12);
  *&tmp = v14;
  v15[3] = v16;
  DWORD2(tmp) = v16;
  v15[1] = LODWORD(v14);
  v15[2] = DWORD1(tmp);
  v17 = (*(*pPhysics + 384LL))(pPhysics);
  *(&tmp + 1) = v18;
  *&tmp = v17;
  QuaternionAngles(&tmp, &angles);
  this->m_wheelRotation[v13] = angles;
  v19 = CEntityHandle::operator CEntityInstance *(&this->m_pOuter);
  v20 = CBaseEntity::EntityToWorldTransform(v19);
  v21 = this + 4 * v12;
  VectorITransform(&this->m_wheelPosition[v13].x, v20, &tmp);
  *&in1 = (*(v21 + 57) - *(&tmp + 2)) / *(v21 + 61);
  v22 = CEntityHandle::operator CEntityInstance *(&this->m_pOuter);
  CBaseAnimating::SetPoseParameter(v22, *(v21 + 65), COERCE_DOUBLE(in1), v23);
  v24 = CEntityHandle::operator CEntityInstance *(&this->m_pOuter);
  CBaseAnimating::SetPoseParameter(
    v24,
    this->m_poseParameters[v25],
    COERCE_DOUBLE(LODWORD(this->m_wheelRotation[v13].z) ^ 0x80000000LL),
    -0.0);
  return 0;
}


// CFourWheelVehiclePhysics::GetVehicleViewPosition  (line 883, @0x0000000002224750, libserver.so)  // inlines: Get, GetAttachment, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, MatrixGetColumn, operator CEntityInstance*, operator->, operator=
// calls: CBaseAnimating::GetAttachment, AngleMatrix, MatrixInvert, ConcatTransforms, RemapAngleRange, MatrixAngles
// globals: CEntityHandle::gm_pEntityList
void __fastcall CFourWheelVehiclePhysics::GetVehicleViewPosition(
        CFourWheelVehiclePhysics_0 *const this,
        const char *pViewAttachment,
        float flPitchFactor,
        Vector *pAbsOrigin,
        QAngle *pAbsAngles)
{
  uint32 m_Index; // eax
  const CBaseAnimating *m_pInstance; // rdi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  float v12; // xmm3_4
  float v13; // xmm3_4
  Vector vehicleEyeOrigin; // [rsp+20h] [rbp-140h] BYREF
  QAngle vehicleEyeAngles; // [rsp+30h] [rbp-130h] BYREF
  matrix3x4_t vehicleEyePosToWorld; // [rsp+40h] [rbp-120h] BYREF
  matrix3x4_t cameraToWorld; // [rsp+70h] [rbp-F0h] BYREF
  matrix3x4_t worldToEyePos; // [rsp+A0h] [rbp-C0h] BYREF
  matrix3x4_t vehicleCameraToEyePos; // [rsp+D0h] [rbp-90h] BYREF
  matrix3x4_t newCameraToWorld; // [rsp+100h] [rbp-60h] BYREF

  m_Index = this->m_pOuter.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_pOuter.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[this->m_pOuter.m_Index & 0x1FF];
      if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  CBaseAnimating::GetAttachment(m_pInstance, pViewAttachment, &vehicleEyeOrigin, &vehicleEyeAngles);
  AngleMatrix(&vehicleEyeAngles, &vehicleEyePosToWorld);
  AngleMatrix(pAbsAngles, &cameraToWorld);
  MatrixInvert(&vehicleEyePosToWorld, &worldToEyePos);
  ConcatTransforms(&worldToEyePos, &cameraToWorld, &vehicleCameraToEyePos);
  vehicleEyeAngles.x = RemapAngleRange(flPitchFactor * 10.0, 45.0, vehicleEyeAngles.x, v12);
  vehicleEyeAngles.z = RemapAngleRange(flPitchFactor * 5.0, 45.0, vehicleEyeAngles.z, v13);
  AngleMatrix(&vehicleEyeAngles, &vehicleEyeOrigin, &vehicleEyePosToWorld);
  ConcatTransforms(&vehicleEyePosToWorld, &vehicleCameraToEyePos, &newCameraToWorld);
  MatrixAngles(&newCameraToWorld, pAbsAngles);
  pAbsOrigin->x = newCameraToWorld.m_flMatVal[0][3];
  pAbsOrigin->y = newCameraToWorld.m_flMatVal[1][3];
  pAbsOrigin->z = newCameraToWorld.m_flMatVal[2][3];
}


// CFourWheelVehiclePhysics::ResetControls  (line 931, @0x0000000002224920, libserver.so)
void __fastcall CFourWheelVehiclePhysics::ResetControls(CFourWheelVehiclePhysics_0 *const this)
{
  this->m_controls.handbrake = 1;
  this->m_controls.handbrakeLeft = 0;
  this->m_controls.handbrakeRight = 0;
  *&this->m_controls.brake = 0;
  this->m_controls.throttle = 0.0;
  this->m_controls.steering = 0.0;
}


// CFourWheelVehiclePhysics::ReleaseHandbrake  (line 942, @0x0000000002224950, libserver.so)
// callers: CPropVehicle::InputHandBrakeOff
void __fastcall CFourWheelVehiclePhysics::ReleaseHandbrake(CFourWheelVehiclePhysics_0 *const this)
{
  this->m_controls.handbrake = 0;
}


// CFourWheelVehiclePhysics::SetHandbrake  (line 947, @0x0000000002224960, libserver.so)
// callers: CPropVehicle::InputHandBrakeOn, CPropVehicleDriveable::StartEngine
void __fastcall CFourWheelVehiclePhysics::SetHandbrake(CFourWheelVehiclePhysics_0 *const this, bool bBrake)
{
  this->m_controls.handbrake = bBrake;
}


// CFourWheelVehiclePhysics::EnableMotion  (line 955, @0x0000000002224970, libserver.so)
void __fastcall CFourWheelVehiclePhysics::EnableMotion(CFourWheelVehiclePhysics_0 *const this)
{
  CFourWheelVehiclePhysics_0 *v2; // r12
  int i; // ebx
  IPhysicsObject *v4; // rdi

  v2 = this;
  for ( i = 0; this->m_wheelCount > i; ++i )
  {
    v4 = v2->m_pWheels[0];
    v2 = (v2 + 8);
    (*(*v4 + 1520LL))(v4, 1);
  }
}


// CFourWheelVehiclePhysics::DisableMotion  (line 966, @0x00000000022249c0, libserver.so)
void __fastcall CFourWheelVehiclePhysics::DisableMotion(CFourWheelVehiclePhysics_0 *const this)
{
  CFourWheelVehiclePhysics_0 *v2; // rbx
  int v3; // r12d
  IPhysicsObject *v4; // rdi

  if ( this->m_wheelCount > 0 )
  {
    v2 = this;
    v3 = 0;
    do
    {
      v4 = v2->m_pWheels[0];
      ++v3;
      v2 = (v2 + 8);
      (*(*v4 + 544LL))(v4, &vec3_origin);
      (*(**&v2->m_flMaxSpeed + 1696LL))(*&v2->m_flMaxSpeed, &vec3_origin);
      (*(**&v2->m_flMaxSpeed + 1520LL))(*&v2->m_flMaxSpeed, 0);
    }
    while ( this->m_wheelCount > v3 );
  }
}


// CFourWheelVehiclePhysics::GetHLSpeed  (line 976, @0x0000000002224a30, libserver.so)
float __fastcall CFourWheelVehiclePhysics::GetHLSpeed(const CFourWheelVehiclePhysics_0 *const this)
{
  return *(*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 3))(this->m_pVehicle);
}


// CFourWheelVehiclePhysics::GetSteering  (line 982, @0x0000000002224a50, libserver.so)
float __fastcall CFourWheelVehiclePhysics::GetSteering(const CFourWheelVehiclePhysics_0 *const this)
{
  return this->m_controls.steering;
}


// CFourWheelVehiclePhysics::GetSteeringDegrees  (line 987, @0x0000000002224a60, libserver.so)
float __fastcall CFourWheelVehiclePhysics::GetSteeringDegrees(const CFourWheelVehiclePhysics_0 *const this)
{
  return *((*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 4))(this->m_pVehicle) + 600);
}


// CFourWheelVehiclePhysics::SteeringRest  (line 996, @0x0000000002224a80, libserver.so)  // inlines: Approach, RemapValClamped, clamp<float, float>
// callers: CFourWheelVehiclePhysics::UpdateDriverControls
void __fastcall CFourWheelVehiclePhysics::SteeringRest(
        CFourWheelVehiclePhysics_0 *const this,
        float a2,
        float carSpeed,
        const vehicleparams_t *const vehicleData)
{
  float speedFast; // xmm3_4
  float speedSlow; // xmm2_4
  float steeringRestRateFast; // xmm1_4
  __m128 steeringRestRateSlow_low; // xmm4
  __m128 v8; // xmm0
  __m128 v9; // xmm5
  float v10; // xmm1_4
  float steering; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm3_4

  speedFast = vehicleData->steering.speedFast;
  speedSlow = vehicleData->steering.speedSlow;
  steeringRestRateFast = vehicleData->steering.steeringRestRateFast;
  steeringRestRateSlow_low = LODWORD(vehicleData->steering.steeringRestRateSlow);
  if ( speedFast == speedSlow )
  {
    v8.m128_f32[0] = a2 - speedFast;
    v9 = _mm_cmple_ss(0LL, v8);
    LODWORD(v10) = _mm_andnot_ps(v9, steeringRestRateSlow_low).m128_u32[0]
                 | LODWORD(steeringRestRateFast) & v9.m128_i32[0];
  }
  else
  {
    v13 = (a2 - speedSlow) / (speedFast - speedSlow);
    v14 = 0.0;
    if ( v13 >= 0.0 )
      v14 = fminf(1.0, v13);
    v10 = ((steeringRestRateFast - steeringRestRateSlow_low.m128_f32[0]) * v14) + steeringRestRateSlow_low.m128_f32[0];
  }
  steering = this->m_controls.steering;
  v12 = v10 * gpGlobals->frametime;
  if ( (0.0 - steering) > v12 )
  {
    this->m_controls.steering = steering + v12;
  }
  else if ( -v12 <= (0.0 - steering) )
  {
    this->m_controls.steering = 0.0;
  }
  else
  {
    this->m_controls.steering = steering - v12;
  }
}


// CFourWheelVehiclePhysics::SteeringTurn  (line 1006, @0x0000000002224b60, libserver.so)  // inlines: Approach, RemapValClamped, Sign, clamp<float, float>
// callers: CFourWheelVehiclePhysics::UpdateDriverControls
void __fastcall CFourWheelVehiclePhysics::SteeringTurn(
        CFourWheelVehiclePhysics_0 *const this,
        float carSpeed,
        const vehicleparams_t *const vehicleData,
        bool bTurnLeft,
        bool bBrake,
        bool bThrottle)
{
  int v10; // xmm4_4
  float speedFast; // xmm5_4
  float speedSlow; // xmm3_4
  __m128 steeringRestRateFast_low; // xmm2
  float steeringRestRateSlow; // xmm1_4
  __m128 v15; // xmm3
  __m128 v16; // xmm7
  __m128 v17; // xmm7
  float v18; // xmm1_4
  float maxSpeed; // xmm5_4
  float v20; // xmm6_4
  float boostMaxSpeed; // xmm7_4
  float v22; // xmm1_4
  float v23; // xmm7_4
  float v24; // xmm8_4
  float v25; // xmm5_4
  float v26; // xmm8_4
  __int64 v27; // rax
  char v28; // dl
  float v29; // xmm1_4
  __m128 v30; // xmm4
  char v31; // al
  float v32; // xmm6_4
  float v33; // xmm5_4
  float steeringRateFast; // xmm2_4
  __m128 steeringRateSlow_low; // xmm7
  __m128 v36; // xmm0
  __m128 v37; // xmm6
  float v38; // xmm2_4
  __m128 v39; // xmm0
  float v40; // xmm2_4
  float v41; // xmm5_4
  float v42; // xmm6_4
  float v43; // xmm6_4
  float v44; // xmm5_4
  float v45; // xmm0_4
  float v46; // xmm6_4
  float v47; // xmm5_4
  float v48; // xmm0_4
  __m128 v49; // xmm5
  float v50; // xmm5_4
  __m128 v51; // xmm3
  __m128 v52; // xmm5
  __m128 v53; // xmm5
  float v54; // [rsp+Ch] [rbp-34h]
  float carSpeedIns; // [rsp+14h] [rbp-2Ch]
  float flTargetSteering; // [rsp+18h] [rbp-28h]
  float flSteeringRestRate; // [rsp+1Ch] [rbp-24h]

  v10 = 1065353216;
  if ( bTurnLeft )
    v10 = -1082130432;
  speedFast = vehicleData->steering.speedFast;
  speedSlow = vehicleData->steering.speedSlow;
  steeringRestRateFast_low = LODWORD(vehicleData->steering.steeringRestRateFast);
  steeringRestRateSlow = vehicleData->steering.steeringRestRateSlow;
  if ( speedFast == speedSlow )
  {
    v15 = 0;
    v16.m128_f32[0] = carSpeed - speedFast;
    v17 = _mm_cmpgt_ss(0LL, v16);
    LODWORD(v18) = _mm_andnot_ps(v17, steeringRestRateFast_low).m128_u32[0]
                 | LODWORD(steeringRestRateSlow) & v17.m128_i32[0];
  }
  else
  {
    v41 = speedFast - speedSlow;
    v42 = carSpeed - speedSlow;
    v15 = 0;
    v43 = v42 / v41;
    v44 = 0.0;
    if ( v43 >= 0.0 )
      v44 = fminf(1.0, v43);
    v18 = steeringRestRateSlow + ((steeringRestRateFast_low.m128_f32[0] - steeringRestRateSlow) * v44);
  }
  maxSpeed = vehicleData->engine.maxSpeed;
  v20 = 17.6 * carSpeed;
  if ( (17.6 * carSpeed) > maxSpeed )
  {
    boostMaxSpeed = vehicleData->engine.boostMaxSpeed;
    v22 = 0.5 * steeringRestRateFast_low.m128_f32[0];
    if ( maxSpeed == boostMaxSpeed )
    {
      v52.m128_f32[0] = v20 - boostMaxSpeed;
      v53 = _mm_cmple_ss(v15, v52);
      LODWORD(v18) = _mm_andnot_ps(v53, steeringRestRateFast_low).m128_u32[0] | LODWORD(v22) & v53.m128_i32[0];
    }
    else
    {
      v23 = boostMaxSpeed - maxSpeed;
      v24 = v20 - maxSpeed;
      v25 = v15.m128_f32[0];
      v26 = v24 / v23;
      if ( v15.m128_f32[0] <= v26 )
        v25 = fminf(1.0, v26);
      v18 = ((v22 - steeringRestRateFast_low.m128_f32[0]) * v25) + steeringRestRateFast_low.m128_f32[0];
    }
  }
  v54 = v15.m128_f32[0];
  carSpeedIns = 17.6 * carSpeed;
  flTargetSteering = *&v10;
  flSteeringRestRate = v18;
  v27 = (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 3))(this->m_pVehicle);
  v28 = *(v27 + 40);
  v29 = flSteeringRestRate;
  v30.m128_f32[0] = flTargetSteering;
  if ( *(v27 + 16) == 100 || *(v27 + 16) == 0 || v28 == 1 )
  {
    if ( v28 != 0 )
      goto LABEL_13;
  }
  else if ( carSpeedIns > (vehicleData->engine.autobrakeSpeedGain * vehicleData->engine.maxSpeed) )
  {
LABEL_13:
    v29 = flSteeringRestRate * vehicleData->steering.boostSteeringRestRateFactor;
    v31 = 1;
    goto LABEL_14;
  }
  v31 = 0;
  if ( bThrottle )
    v29 = flSteeringRestRate * vehicleData->steering.throttleSteeringRestRateFactor;
LABEL_14:
  v32 = vehicleData->steering.speedFast;
  v33 = vehicleData->steering.speedSlow;
  steeringRateFast = vehicleData->steering.steeringRateFast;
  steeringRateSlow_low = LODWORD(vehicleData->steering.steeringRateSlow);
  if ( v32 == v33 )
  {
    v36.m128_f32[0] = carSpeed - v32;
    v37 = _mm_cmple_ss(LODWORD(v54), v36);
    LODWORD(v38) = _mm_andnot_ps(v37, steeringRateSlow_low).m128_u32[0] | LODWORD(steeringRateFast) & v37.m128_i32[0];
    if ( v29 <= fabs(v38) )
    {
LABEL_16:
      v39.m128_i32[0] = LODWORD(this->m_controls.steering);
      goto LABEL_17;
    }
  }
  else
  {
    v45 = carSpeed - v33;
    v46 = v32 - v33;
    v47 = v54;
    v48 = v45 / v46;
    if ( v54 <= v48 )
      v47 = fminf(1.0, v48);
    v38 = ((steeringRateFast - steeringRateSlow_low.m128_f32[0]) * v47) + steeringRateSlow_low.m128_f32[0];
    if ( v29 <= fabs(v38) )
      goto LABEL_16;
  }
  v49 = _mm_cmple_ss(LODWORD(v54), v30);
  LODWORD(v50) = _mm_andnot_ps(v49, 0xBF800000).m128_u32[0] | v49.m128_i32[0] & 0x3F800000;
  v39.m128_i32[0] = LODWORD(this->m_controls.steering);
  v51 = _mm_cmple_ss(LODWORD(v54), v39);
  if ( v50 != COERCE_FLOAT(_mm_andnot_ps(v51, 0xBF800000).m128_u32[0] | v51.m128_i32[0] & 0x3F800000) )
  {
    v38 = v29;
    if ( v31 != 0 )
      goto LABEL_18;
    goto LABEL_34;
  }
LABEL_17:
  if ( v31 != 0 )
  {
LABEL_18:
    v38 = v38 * vehicleData->steering.boostSteeringRateFactor;
    goto LABEL_19;
  }
LABEL_34:
  if ( bBrake )
    v38 = v38 * vehicleData->steering.brakeSteeringRateFactor;
LABEL_19:
  v40 = v38 * gpGlobals->frametime;
  if ( (flTargetSteering - v39.m128_f32[0]) > v40 )
  {
    v30.m128_f32[0] = v40 + v39.m128_f32[0];
  }
  else if ( -v40 > (flTargetSteering - v39.m128_f32[0]) )
  {
    v30.m128_f32[0] = v39.m128_f32[0] - v40;
  }
  LODWORD(this->m_controls.steering) = v30.m128_i32[0];
  this->m_controls.bAnalogSteering = 0;
}


// CFourWheelVehiclePhysics::SteeringTurnAnalog  (line 1066, @0x0000000002224f00, libserver.so)  // inlines: Approach, GetFloat, RemapValClamped, SetSteering, clamp<float, float>
// callers: CFourWheelVehiclePhysics::UpdateDriverControls
void __fastcall CFourWheelVehiclePhysics::SteeringTurnAnalog(
        CFourWheelVehiclePhysics_0 *const this,
        float a2,
        float carSpeed,
        const vehicleparams_t *const vehicleData,
        float sidemove)
{
  float v5; // xmm1_4
  float v6; // xmm8_4
  float v7; // xmm5_4
  float m_fValue; // xmm3_4
  __m128 v9; // xmm5
  float v10; // xmm3_4
  float speedFast; // xmm6_4
  float speedSlow; // xmm5_4
  float steeringRateFast; // xmm1_4
  __m128 steeringRateSlow_low; // xmm7
  __m128 v15; // xmm0
  __m128 v16; // xmm6
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float steering; // xmm0_4
  float v22; // xmm5_4
  float v23; // xmm7_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm6_4
  float v27; // xmm5_4
  float v28; // xmm0_4

  v5 = carSpeed / 400.0;
  if ( v5 <= 0.0 )
    v6 = -1.0;
  else
    v6 = 1.0;
  v7 = fabs(v5);
  m_fValue = xbox_steering_deadzone.m_pParent->m_Value.m_fValue;
  if ( m_fValue == 1.0 )
  {
    v9.m128_f32[0] = v7 - 1.0;
    LODWORD(v10) = _mm_cmple_ss(0LL, v9).m128_u32[0] & 0x3F800000;
  }
  else
  {
    v22 = v7 - m_fValue;
    v23 = 1.0 - m_fValue;
    v10 = 0.0;
    v24 = v22 / v23;
    if ( (v22 / v23) >= 0.0 )
    {
      v10 = 1.0;
      if ( v24 <= 1.0 )
        v10 = v24 + 0.0;
    }
  }
  speedFast = vehicleData->steering.speedFast;
  speedSlow = vehicleData->steering.speedSlow;
  steeringRateFast = vehicleData->steering.steeringRateFast;
  steeringRateSlow_low = LODWORD(vehicleData->steering.steeringRateSlow);
  if ( speedFast == speedSlow )
  {
    v15.m128_f32[0] = a2 - speedFast;
    v16 = _mm_cmple_ss(0LL, v15);
    LODWORD(v17) = _mm_andnot_ps(v16, steeringRateSlow_low).m128_u32[0] | LODWORD(steeringRateFast) & v16.m128_i32[0];
  }
  else
  {
    v25 = a2 - speedSlow;
    v26 = speedFast - speedSlow;
    v27 = 0.0;
    v28 = v25 / v26;
    if ( v28 >= 0.0 )
      v27 = fminf(1.0, v28);
    v17 = ((steeringRateFast - steeringRateSlow_low.m128_f32[0]) * v27) + steeringRateSlow_low.m128_f32[0];
  }
  v18 = v10 * v6;
  v19 = v17 * vehicleData->steering.throttleSteeringRestRateFactor;
  this->m_controls.bAnalogSteering = 1;
  v20 = v19 * gpGlobals->frametime;
  if ( v20 != 0.0 )
  {
    steering = this->m_controls.steering;
    if ( (v18 - steering) <= v20 )
    {
      if ( -v20 > (v18 - steering) )
      {
        this->m_controls.steering = steering - v20;
        return;
      }
    }
    else
    {
      v18 = v20 + steering;
    }
    this->m_controls.steering = v18;
    return;
  }
  this->m_controls.steering = v18;
}


// CFourWheelVehiclePhysics::UpdateDriverControls  (line 1099, @0x0000000002225110, libserver.so)  // inlines: Approach, Defaults, GetBool, GetFloat, GetInt, GetMaxSpeed, IsEngineDisabled, RemapValClamped, SetVehicleAnalogControlBias, clamp<float, float>, curtime
// calls: CFourWheelVehiclePhysics::SteeringTurn, CGlobalVarsBase::curtime, CFourWheelVehiclePhysics::SteeringTurnAnalog, __dynamic_cast, CFourWheelVehiclePhysics::SteeringRest, CFourWheelVehiclePhysics::IsBoosting
// callers: CPropVehicleDriveable::DriveVehicle
void __fastcall CFourWheelVehiclePhysics::UpdateDriverControls(
        CFourWheelVehiclePhysics_0 *const this,
        CUserCmd *cmd,
        double a3,
        float flFrameTime)
{
  ButtonBitMask_t buttons; // rbx
  float *v7; // r14
  __int64 v8; // rax
  double v9; // xmm2_8
  float v10; // xmm0_4
  const vehicleparams_t *v11; // r13
  __int64 v12; // rax
  char v13; // r8
  CFourWheelServerVehicle *m_pOuterServerVehicle; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r8
  char v19; // al
  float forwardmove; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float throttle; // xmm2_4
  float m_maxThrottle; // xmm1_4
  float steering; // xmm3_4
  float turnThrottleReduceFast; // xmm5_4
  double v27; // xmm5_8
  float v28; // xmm0_4
  float v29; // xmm3_4
  bool v30; // r13
  float v31; // xmm0_4
  float v32; // xmm0_4
  CGlobalVars *v33; // rax
  float sidemove; // xmm1_4
  float speedSlow; // xmm4_4
  _DWORD *v36; // rax
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  float v40; // xmm4_4
  double v41; // xmm4_8
  float v42; // xmm2_4
  float v43; // xmm0_4
  float v44; // xmm0_4
  float frametime; // xmm1_4
  bool v46; // cf
  bool v47; // zf
  bool IsBoosting; // al
  CFourWheelServerVehicle *v49; // rdi
  CFourWheelServerVehicle *v50; // rdi
  int m_nLastSpeed; // edx
  int m_nSpeed; // eax
  float v53; // xmm0_4
  float brake; // xmm1_4
  float v55; // xmm1_4
  float speedFast; // xmm6_4
  float turnThrottleReduceSlow; // xmm8_4
  float v58; // xmm7_4
  float v59; // xmm4_4
  float v60; // xmm0_4
  float v61; // xmm0_4
  float m_flMaxRevThrottle; // xmm1_4
  float v63; // xmm3_4
  float v64; // xmm0_4
  float v65; // xmm2_4
  float v66; // xmm6_4
  float v67; // xmm4_4
  CGlobalVars *v68; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  float v71; // xmm0_4
  float v72; // xmm0_4
  float v73; // xmm2_4
  float v74; // xmm1_4
  float v75; // xmm5_4
  float v76; // xmm7_4
  float v77; // xmm5_4
  float v78; // xmm3_4
  float v79; // xmm6_4
  float v80; // xmm3_4
  CBaseEntity *pDriver; // [rsp+0h] [rbp-70h]
  float m_fValue; // [rsp+8h] [rbp-68h]
  float flCarSign; // [rsp+Ch] [rbp-64h]
  float flFrameTimea; // [rsp+10h] [rbp-60h]
  float carSpeed; // [rsp+14h] [rbp-5Ch]
  float flSpeedPercentage; // [rsp+18h] [rbp-58h]
  vbs_sound_update_t params; // [rsp+20h] [rbp-50h] BYREF

  flFrameTimea = *&a3;
  buttons = cmd->buttons;
  v7 = (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 3))(this->m_pVehicle, a3, flFrameTime);
  v8 = (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 4))(this->m_pVehicle);
  v10 = *v7;
  v11 = v8;
  if ( *v7 >= 2.0 )
  {
    flCarSign = 1.0;
  }
  else if ( v10 > -2.0 )
  {
    flCarSign = 0.0;
  }
  else
  {
    flCarSign = -1.0;
  }
  carSpeed = fabs(v10 * 0.056818184);
  if ( xbox_autothrottle.m_pParent->m_Value.m_nValue != 0 && cmd->forwardmove > 0.0 )
  {
    v12 = (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 4))(this->m_pVehicle);
    v9 = carSpeed;
    if ( carSpeed > (0.056818184 * *(v12 + 516)) * 0.75 && fabs(cmd->sidemove) > cmd->forwardmove )
      cmd->forwardmove = 400.0;
  }
  if ( (buttons & 0x600) != 0 )
  {
    v13 = buttons & 8;
    if ( (buttons & 8) != 0 )
      v13 = (buttons & 0x10) == 0;
    CFourWheelVehiclePhysics::SteeringTurn(this, carSpeed, v11, (buttons & 0x200) != 0, (buttons & 0x10) != 0, v13);
  }
  else
  {
    sidemove = cmd->sidemove;
    if ( sidemove == 0.0 )
      CFourWheelVehiclePhysics::SteeringRest(this, carSpeed, 0.0, v11);
    else
      CFourWheelVehiclePhysics::SteeringTurnAnalog(this, carSpeed, sidemove, v11, *&v9);
  }
  m_pOuterServerVehicle = this->m_pOuterServerVehicle;
  this->m_controls.boost = 0.0;
  this->m_controls.handbrake = 0;
  this->m_controls.handbrakeLeft = 0;
  this->m_controls.handbrakeRight = 0;
  this->m_controls.brakepedal = 0;
  v18 = (*(m_pOuterServerVehicle->_vptr_IVehicle + 62))(m_pOuterServerVehicle);
  m_fValue = xbox_throttlebias.m_pParent->m_Value.m_fValue;
  if ( v18 == 0 )
    goto LABEL_16;
  pDriver = v18;
  v19 = (*(*v18 + 1120LL))(v18);
  v18 = pDriver;
  if ( v19 == 0 )
    goto LABEL_16;
  v36 = __dynamic_cast(pDriver, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePlayer, 0);
  forwardmove = cmd->forwardmove;
  if ( forwardmove == 0.0 && fabs(cmd->sidemove) < 200.0 )
  {
    v36[684] = 0;
    forwardmove = cmd->forwardmove;
    goto LABEL_17;
  }
  if ( forwardmove <= 0.0 )
  {
    if ( forwardmove >= 0.0 )
      goto LABEL_17;
    v15 = v36[684];
    if ( v15 == 1 )
    {
      if ( forwardmove > -m_fValue )
      {
        forwardmove = xbox_throttlespoof.m_pParent->m_Value.m_fValue;
        cmd->forwardmove = forwardmove;
        goto LABEL_17;
      }
    }
    else if ( v15 != 0 )
    {
      if ( forwardmove <= 0.0 )
      {
LABEL_109:
        v60 = fabs(forwardmove / 400.0);
        if ( v60 <= 1.0 )
          v61 = fmaxf(0.25, v60);
        else
          v61 = 1.0;
        m_flMaxRevThrottle = this->m_flMaxRevThrottle;
        v63 = fminf(0.0, this->m_controls.throttle);
        if ( m_flMaxRevThrottle > -0.1 )
          m_flMaxRevThrottle = -0.1;
        v64 = v61 * m_flMaxRevThrottle;
        v65 = flFrameTimea * this->m_throttleRate;
        if ( (v64 - v63) > v65 )
        {
          v64 = v65 + v63;
        }
        else if ( -v65 > (v64 - v63) )
        {
          v64 = v63 - v65;
        }
        this->m_controls.throttle = v64;
        if ( flCarSign <= 0.0 )
          goto LABEL_32;
        goto LABEL_139;
      }
      goto LABEL_18;
    }
    v36[684] = 2;
LABEL_16:
    forwardmove = cmd->forwardmove;
    goto LABEL_17;
  }
  v15 = v36[684];
  if ( v15 != 2 )
  {
    if ( v15 != 0 )
      goto LABEL_18;
    goto LABEL_54;
  }
  if ( m_fValue <= forwardmove )
  {
LABEL_54:
    v36[684] = 1;
    forwardmove = cmd->forwardmove;
    if ( forwardmove <= 0.0 )
      goto LABEL_55;
LABEL_18:
    v21 = forwardmove / 400.0;
    if ( v21 <= 1.0 )
      v22 = fmaxf(0.25, v21);
    else
      v22 = 1.0;
    throttle = this->m_controls.throttle;
    if ( throttle < 0.0 )
    {
      this->m_controls.throttle = 0.0;
      throttle = 0.0;
    }
    m_maxThrottle = this->m_maxThrottle;
    if ( m_maxThrottle < 0.1 )
      m_maxThrottle = 0.1;
    steering = this->m_controls.steering;
    if ( steering == 0.0 )
      goto LABEL_29;
    speedSlow = v11->steering.speedSlow;
    if ( speedSlow <= carSpeed )
    {
      speedFast = v11->steering.speedFast;
      turnThrottleReduceFast = v11->steering.turnThrottleReduceFast;
      turnThrottleReduceSlow = v11->steering.turnThrottleReduceSlow;
      if ( speedSlow == speedFast )
      {
        if ( (carSpeed - speedFast) < 0.0 )
        {
          v27 = turnThrottleReduceSlow;
          goto LABEL_28;
        }
      }
      else
      {
        v58 = (carSpeed - speedSlow) / (speedFast - speedSlow);
        v59 = 0.0;
        if ( v58 >= 0.0 )
          v59 = fminf(1.0, v58);
        turnThrottleReduceFast = ((turnThrottleReduceFast - turnThrottleReduceSlow) * v59) + turnThrottleReduceSlow;
      }
    }
    else
    {
      turnThrottleReduceFast = v11->steering.turnThrottleReduceSlow;
      if ( speedSlow != 0.0 )
      {
        v66 = carSpeed / speedSlow;
        v67 = 0.0;
        if ( v66 >= 0.0 )
          v67 = fminf(1.0, v66);
        v27 = ((turnThrottleReduceFast * v67) + 0.0);
        goto LABEL_28;
      }
      if ( (carSpeed - 0.0) < 0.0 )
      {
        v27 = 0.0;
        goto LABEL_28;
      }
    }
    v27 = turnThrottleReduceFast;
LABEL_28:
    m_maxThrottle = fminf(m_maxThrottle, fmaxf(0.0, 1.0 - fabs(steering) * v27));
LABEL_29:
    v28 = v22 * m_maxThrottle;
    v29 = flFrameTimea * this->m_throttleRate;
    if ( (v28 - throttle) <= v29 )
    {
      if ( -v29 > (v28 - throttle) )
        v28 = throttle - v29;
    }
    else
    {
      v28 = v29 + throttle;
    }
    goto LABEL_31;
  }
  forwardmove = -xbox_throttlespoof.m_pParent->m_Value.m_fValue;
  cmd->forwardmove = forwardmove;
LABEL_17:
  if ( forwardmove > 0.0 )
    goto LABEL_18;
LABEL_55:
  if ( forwardmove < 0.0 )
    goto LABEL_109;
  if ( (buttons & 8) == 0 )
  {
    if ( (buttons & 0x10) == 0 )
    {
      this->m_controls.throttle = 0.0;
      v30 = 0;
      this->m_controls.brake = 0.0;
      goto LABEL_33;
    }
    v72 = this->m_flMaxRevThrottle;
    v73 = fminf(0.0, this->m_controls.throttle);
    if ( v72 > -0.1 )
      v72 = -0.1;
    v74 = flFrameTimea * this->m_throttleRate;
    if ( (v72 - v73) <= v74 )
    {
      if ( -v74 > (v72 - v73) )
        v72 = v73 - v74;
    }
    else
    {
      v72 = v74 + v73;
    }
    this->m_controls.throttle = v72;
    if ( flCarSign > 0.0 )
    {
LABEL_139:
      if ( this->m_controls.bHasBrakePedal )
      {
        v53 = flFrameTimea * r_vehicleBrakeRate.m_pParent->m_Value.m_fValue;
        goto LABEL_95;
      }
    }
LABEL_32:
    this->m_controls.brake = 0.0;
    v30 = 1;
    goto LABEL_33;
  }
  v37 = this->m_controls.throttle;
  if ( v37 < 0.0 )
  {
    this->m_controls.throttle = 0.0;
    v37 = 0.0;
  }
  v28 = this->m_maxThrottle;
  if ( v28 < 0.1 )
    v28 = 0.1;
  v38 = this->m_controls.steering;
  if ( v38 == 0.0 )
    goto LABEL_67;
  v39 = v11->steering.speedSlow;
  if ( v39 <= carSpeed )
  {
    v75 = v11->steering.speedFast;
    v40 = v11->steering.turnThrottleReduceFast;
    v76 = v11->steering.turnThrottleReduceSlow;
    if ( v39 == v75 )
    {
      if ( (carSpeed - v75) < 0.0 )
      {
        v41 = v76;
        goto LABEL_66;
      }
    }
    else
    {
      v79 = (carSpeed - v39) / (v75 - v39);
      v80 = 0.0;
      if ( v79 >= 0.0 )
        v80 = fminf(1.0, v79);
      v40 = ((v40 - v76) * v80) + v76;
    }
  }
  else
  {
    v40 = v11->steering.turnThrottleReduceSlow;
    if ( v39 != 0.0 )
    {
      v77 = carSpeed / v39;
      v78 = 0.0;
      if ( v77 >= 0.0 )
        v78 = fminf(1.0, v77);
      v41 = ((v40 * v78) + 0.0);
      goto LABEL_66;
    }
    if ( (carSpeed - 0.0) < 0.0 )
    {
      v41 = 0.0;
      goto LABEL_66;
    }
  }
  v41 = v40;
LABEL_66:
  v28 = fminf(v28, fmaxf(0.0, 1.0 - fabs(v38) * v41));
LABEL_67:
  v42 = flFrameTimea * this->m_throttleRate;
  if ( (v28 - v37) <= v42 )
  {
    if ( -v42 > (v28 - v37) )
      v28 = v37 - v42;
  }
  else
  {
    v28 = v42 + v37;
  }
LABEL_31:
  this->m_controls.throttle = v28;
  if ( flCarSign >= 0.0 || !this->m_controls.bHasBrakePedal )
    goto LABEL_32;
  v53 = (flFrameTimea * r_vehicleBrakeRate.m_pParent->m_Value.m_fValue)
      + (flFrameTimea * r_vehicleBrakeRate.m_pParent->m_Value.m_fValue);
LABEL_95:
  brake = this->m_controls.brake;
  if ( (1.0 - brake) <= v53 )
  {
    if ( -v53 <= (1.0 - brake) )
      v55 = 1.0;
    else
      v55 = brake - v53;
  }
  else
  {
    v55 = brake + v53;
  }
  this->m_controls.brake = v55;
  v30 = 0;
  this->m_controls.brakepedal = 1;
  this->m_controls.throttle = 0.0;
LABEL_33:
  if ( (buttons & 0x10000) != 0
    && (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 15))(this->m_pVehicle, v17, v15, v16, v18) == 0
    && v30 )
  {
    this->m_controls.boost = 1.0;
  }
  if ( (buttons & 2) != 0 && this->m_controls.bHasBrakePedal )
  {
    this->m_controls.handbrake = 1;
    v31 = cmd->sidemove;
    if ( v31 < -100.0 )
    {
      this->m_controls.handbrakeLeft = 1;
    }
    else if ( v31 > 100.0 )
    {
      this->m_controls.handbrakeRight = 1;
    }
    v30 = 0;
    if ( (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 15))(this->m_pVehicle) == 0 )
      goto LABEL_40;
LABEL_75:
    this->m_controls.throttle = 0.0;
    this->m_controls.handbrake = 1;
    goto LABEL_76;
  }
  if ( (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 15))(this->m_pVehicle, v17, v15, v16, v18) != 0 )
    goto LABEL_75;
  if ( v30 )
  {
    m_nLastSpeed = this->m_nLastSpeed;
    m_nSpeed = this->m_nSpeed;
    if ( m_nLastSpeed > m_nSpeed && m_nLastSpeed - m_nSpeed > 10 )
      this->m_bLastThrottle = 0;
  }
LABEL_40:
  if ( this->m_controls.handbrake || this->m_controls.brakepedal )
  {
    if ( v30 )
    {
LABEL_77:
      v33 = gpGlobals;
      goto LABEL_78;
    }
  }
  else if ( v30 )
  {
    if ( !this->m_bLastThrottle )
    {
      v32 = CGlobalVarsBase::curtime(gpGlobals, 0);
      this->m_bLastThrottle = 1;
      v33 = gpGlobals;
      this->m_throttleStartTime = v32;
      goto LABEL_78;
    }
    goto LABEL_77;
  }
LABEL_76:
  v30 = 0;
  if ( !this->m_bLastThrottle || (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 15))(this->m_pVehicle) != 0 )
    goto LABEL_77;
  v68 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    v33 = gpGlobals;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      v33 = gpGlobals;
    }
    m_flCurrentTime = v68->m_flCurrentTime;
  }
  else
  {
    v33 = 0;
    m_flCurrentTime = 0.0;
  }
  v71 = m_flCurrentTime - this->m_throttleStartTime;
  this->m_bLastThrottle = 0;
  v30 = 0;
  this->m_throttleActiveTime = v71;
LABEL_78:
  v43 = this->m_nSpeed / this->m_flMaxSpeed;
  if ( v43 <= 1.0 )
    v44 = fmaxf(0.0, v43);
  else
    v44 = 1.0;
  flSpeedPercentage = v44;
  frametime = v33->frametime;
  params.bThrottleDown = v30;
  v46 = this->m_controls.throttle > 0.0;
  v47 = this->m_controls.throttle == 0.0;
  params.flCurrentSpeedFraction = 0.0;
  params.flFrameTime = frametime;
  params.flWorldSpaceSpeed = 0.0;
  params.bReverse = !v46 && !v47;
  params.bTurbo = 0;
  params.bVehicleInWater = 0;
  params.bExitVehicle = 0;
  IsBoosting = CFourWheelVehiclePhysics::IsBoosting(this);
  v49 = this->m_pOuterServerVehicle;
  params.bTurbo = IsBoosting;
  params.bVehicleInWater = (*(v49->_vptr_IVehicle + 61))(v49);
  params.flCurrentSpeedFraction = flSpeedPercentage;
  v50 = this->m_pOuterServerVehicle;
  params.flFrameTime = flFrameTimea;
  params.flWorldSpaceSpeed = *v7;
  (*(v50->_vptr_IVehicle + 69))(v50, &params);
}


// CFourWheelVehiclePhysics::IsBoosting  (line 1449, @0x00000000022250b0, libserver.so)
// callers: CFourWheelVehiclePhysics::UpdateDriverControls, CFourWheelVehiclePhysics::Think
bool __fastcall CFourWheelVehiclePhysics::IsBoosting(CFourWheelVehiclePhysics_0 *const this)
{
  __int64 v2; // r12
  __int64 v3; // rax
  bool v4; // dl

  v2 = (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 4))(this->m_pVehicle);
  v3 = (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 3))(this->m_pVehicle);
  v4 = v3 != 0 && v2 != 0;
  if ( v4 )
    return (*(v3 + 12) - *(v2 + 580)) > 0.0;
  return v4;
}


// CFourWheelVehiclePhysics::SetDisableEngine  (line 1465, @0x0000000002226330, libserver.so)
// callers: CPropVehicleDriveable::InputTurnOff, CPropVehicleDriveable::InputTurnOn
void __fastcall CFourWheelVehiclePhysics::SetDisableEngine(CFourWheelVehiclePhysics_0 *const this, bool bDisable)
{
  (*(this->m_pVehicle->_vptr_IPhysicsVehicleController + 14))(this->m_pVehicle, bDisable);
}


// CFourWheelVehiclePhysics::VPhysicsGetObjectList  (line 1484, @0x0000000002226350, libserver.so)  // inlines: AddPhysToList, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator->
// calls: CBaseEntity::VPhysicsGetObject
// callers: CPropVehicleDriveable::VPhysicsGetObjectList
// globals: CEntityHandle::gm_pEntityList
int __fastcall CFourWheelVehiclePhysics::VPhysicsGetObjectList(
        CFourWheelVehiclePhysics_0 *const this,
        IPhysicsObject **pList,
        int listMax)
{
  uint32 m_Index; // eax
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  IPhysicsObject *Object; // rax
  int v11; // r8d
  __int64 i; // rcx
  IPhysicsObject *v13; // rax
  __int64 v14; // rdx

  m_Index = this->m_pOuter.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_pOuter.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_pOuter.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  Object = CBaseEntity::VPhysicsGetObject(m_pInstance);
  v11 = 0;
  if ( Object != 0 && listMax > 0 )
  {
    *pList = Object;
    LOBYTE(v11) = 1;
  }
  for ( i = 0; i != 4; ++i )
  {
    v13 = this->m_pWheels[i];
    if ( v13 != 0 && listMax > v11 )
    {
      v14 = v11++;
      pList[v14] = v13;
    }
  }
  return v11;
}


