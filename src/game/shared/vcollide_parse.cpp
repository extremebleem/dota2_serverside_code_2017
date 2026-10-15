// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/vcollide_parse.cpp:60
class CVPhysicsParse : public IVPhysicsKeyParser {
public:

private:

	const char * m_pText;  // +0x8
	char m_blockName[1024];  // +0x10
	CVPhysicsParse(const CVPhysicsParse &);
	virtual ~CVPhysicsParse();
	CVPhysicsParse(const char *);
	void NextBlock();
	virtual const char * GetCurrentBlockName();
	virtual bool Finished();
	virtual void ParseSolid(solid_t *, IVPhysicsKeyHandler *);
	virtual void ParseFluid(fluid_t *, IVPhysicsKeyHandler *);
	virtual void ParseRagdollConstraint(constraint_ragdollparams_t *, IVPhysicsKeyHandler *);
	virtual void ParseSurfaceTable(int *, IVPhysicsKeyHandler *);
	virtual void ParseVehicle(vehicleparams_t *, IVPhysicsKeyHandler *);
	virtual void ParseCustom(void *, IVPhysicsKeyHandler *);
	virtual void SkipBlock();
	void ParseVehicleAxle(vehicle_axleparams_t &);
	void ParseVehicleWheel(vehicle_wheelparams_t &);
	void ParseVehicleSuspension(vehicle_suspensionparams_t &);
	void ParseVehicleBody(vehicle_bodyparams_t &);
	void ParseVehicleEngine(vehicle_engineparams_t &);
	void ParseVehicleEngineBoost(vehicle_engineparams_t &);
	void ParseVehicleSteering(vehicle_steeringparams_t &);

	// vtable[2] GetCurrentBlockName
	// vtable[3] Finished
	// vtable[4] ParseSolid
	// vtable[5] ParseFluid
	// vtable[6] ParseRagdollConstraint
	// vtable[7] ParseSurfaceTable
	// vtable[9] ParseVehicle
	// vtable[8] ParseCustom
	// vtable[10] SkipBlock
	// sizeof = 1040
};

// src/game/shared/vcollide_parse.cpp:937
class CStringTable {
	CStringTable();
	int AddString(const char *);
	unsigned int GetStringSize();
	int GetStringCount();
	void CopyData(packedkv_t *);

	// sizeof = 48
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// VPhysicsGetSurfaceIndex  (line 22, @0x00000000020c0ed0, libserver.so)
int __fastcall VPhysicsGetSurfaceIndex(const char *a1)
{
  return 0;
}


// ReadVector  (line 29, @0x000000000209d3e0, libserver.so)
// calls: sscanf
// callers: CVPhysicsParse::ParseVehicleAxle, CVPhysicsParse::ParseVehicleBody, CVPhysicsParse::ParseSolid, CVPhysicsParse::ParseFluid
// local variable allocation has failed, the output may be wrong!
void __fastcall ReadVector(const char *pString, Vector *const out)
{
  Vector x; // [rsp+4h] [rbp-1Ch] OVERLAPPED BYREF

  sscanf(pString, "%f %f %f", &x, &x.y, &x.z);
  *out = x;
}


// CVPhysicsParse::~CVPhysicsParse  (line 63, @0x00000000020f1bd0, libserver.so)  // inlines: ~IVPhysicsKeyParser
void __fastcall CVPhysicsParse::~CVPhysicsParse(CVPhysicsParse *const this)
{
  this->_vptr_IVPhysicsKeyParser = off_3FF4510;
}


// CVPhysicsParse::~CVPhysicsParse  (line 63, @0x00000000020f4be0, libserver.so)  // inlines: ~CVPhysicsParse, ~IVPhysicsKeyParser
// calls: operator delete
void __fastcall CVPhysicsParse::~CVPhysicsParse(CVPhysicsParse *const this)
{
  this->_vptr_IVPhysicsKeyParser = off_3FF4510;
  operator delete(this);
}


// CVPhysicsParse::SkipBlock  (line 75, @0x00000000020f1be0, libserver.so)
void __fastcall CVPhysicsParse::SkipBlock(CVPhysicsParse *const this)
{
  (*(this->_vptr_IVPhysicsKeyParser + 8))(this, 0, 0);
}


// CVPhysicsParse::CVPhysicsParse  (line 91, @0x00000000020c1140, libserver.so)  // inlines: ~IVPhysicsKeyParser
// calls: CVPhysicsParse::NextBlock, _Unwind_Resume
void __fastcall CVPhysicsParse::CVPhysicsParse(CVPhysicsParse *const this, const char *pKeyData)
{
  this->_vptr_IVPhysicsKeyParser = off_3FFCB30;
  this->m_pText = pKeyData;
  CVPhysicsParse::NextBlock(this);
}


// CVPhysicsParse::NextBlock  (line 97, @0x00000000020c1090, libserver.so)  // inlines: _V_strcmp, _V_strcpy, strcpy
// calls: ParseKeyValue, strcpy, __stack_chk_fail
// callers: CVPhysicsParse::CVPhysicsParse, CreateVPhysicsKeyParser, CVPhysicsParse::ParseRagdollConstraint, CVPhysicsParse::ParseSurfaceTable, CVPhysicsParse::ParseVehicle, CVPhysicsParse::ParseCustom, CVPhysicsParse::ParseSolid, CVPhysicsParse::ParseFluid
void __fastcall CVPhysicsParse::NextBlock(CVPhysicsParse *const this)
{
  const char *m_pText; // rax
  char key[1024]; // [rsp+0h] [rbp-830h] BYREF
  char value[1032]; // [rsp+400h] [rbp-430h] BYREF
  unsigned __int64 v5; // [rsp+808h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  m_pText = this->m_pText;
  while ( m_pText != 0 )
  {
    m_pText = ParseKeyValue(m_pText, key, value);
    this->m_pText = m_pText;
    if ( strcmp(value, "{") == 0 )
    {
      strcpy(this->m_blockName, key);
      return;
    }
  }
}


// CVPhysicsParse::GetCurrentBlockName  (line 112, @0x000000000209c860, libserver.so)
const char *__fastcall CVPhysicsParse::GetCurrentBlockName(CVPhysicsParse *const this)
{
  const char *result; // rax

  result = this->m_pText;
  if ( result != 0 )
    return this->m_blockName;
  return result;
}


// CVPhysicsParse::Finished  (line 121, @0x000000000209c880, libserver.so)
bool __fastcall CVPhysicsParse::Finished(CVPhysicsParse *const this)
{
  return this->m_pText == 0;
}


// CVPhysicsParse::ParseSolid  (line 130, @0x00000000020c29f0, libserver.so)  // inlines: V_strncpy<long unsigned int>, atof, atoi, memset
// calls: ParseKeyValue, V_stricmp_fast, strtol, _V_strncpy, strtod, ReadVector, CVPhysicsParse::NextBlock, memset, __stack_chk_fail
// strings: "surfaceprop", "massCenterOverride", "inertia", "rotdamping", "rollingdrag"
void __fastcall CVPhysicsParse::ParseSolid(
        CVPhysicsParse *const this,
        solid_t *pSolid,
        IVPhysicsKeyHandler *unknownKeyHandler)
{
  const char *m_pText; // rdi
  const char *v7; // rax
  bool v8; // zf
  __m128d v9; // xmm0
  __m128d v10; // xmm0
  __m128d v11; // xmm0
  __m128d v12; // xmm0
  __m128d v13; // xmm0
  __m128d v14; // xmm0
  Vector *out; // [rsp+8h] [rbp-848h]
  char key[1024]; // [rsp+10h] [rbp-840h] BYREF
  char value[1032]; // [rsp+410h] [rbp-440h] BYREF
  unsigned __int64 v18; // [rsp+818h] [rbp-38h]

  key[0] = 0;
  v18 = __readfsqword(0x28u);
  if ( unknownKeyHandler != 0 )
    (*(unknownKeyHandler->_vptr_IVPhysicsKeyHandler + 1))(unknownKeyHandler);
  else
    memset(pSolid, 0, sizeof(solid_t));
  pSolid->params.enableCollisions = 0;
  out = &pSolid->massCenterOverride;
  while ( 1 )
  {
    m_pText = this->m_pText;
    if ( m_pText == 0 )
      break;
    while ( 1 )
    {
      v7 = ParseKeyValue(m_pText, key, value);
      v8 = key[0] == 125;
      this->m_pText = v7;
      if ( v8 )
      {
        CVPhysicsParse::NextBlock(this);
        return;
      }
      if ( V_stricmp_fast(key, "index") != 0 )
        break;
      pSolid->index = strtol(value, 0, 10);
      m_pText = this->m_pText;
      if ( m_pText == 0 )
        return;
    }
    if ( V_stricmp_fast(key, "surfaceprop") != 0 )
    {
      if ( V_stricmp_fast(key, "mass") != 0 )
      {
        if ( V_stricmp_fast(key, "massCenterOverride") != 0 )
        {
          if ( V_stricmp_fast(key, "inertia") != 0 )
          {
            if ( V_stricmp_fast(key, "damping") != 0 )
            {
              if ( V_stricmp_fast(key, "rotdamping") != 0 )
              {
                if ( V_stricmp_fast(key, "volume") != 0 )
                {
                  if ( V_stricmp_fast(key, "drag") != 0 )
                  {
                    if ( V_stricmp_fast(key, "rollingdrag") != 0 && unknownKeyHandler != 0 )
                      (*unknownKeyHandler->_vptr_IVPhysicsKeyHandler)(unknownKeyHandler, pSolid, key, value);
                  }
                  else
                  {
                    v13.m128d_f64[0] = strtod(value, 0);
                    pSolid->params.dragCoefficient = _mm_movedup_pd(v13).m128d_f64[0];
                  }
                }
                else
                {
                  v14.m128d_f64[0] = strtod(value, 0);
                  pSolid->params.volume = _mm_movedup_pd(v14).m128d_f64[0];
                }
              }
              else
              {
                v11.m128d_f64[0] = strtod(value, 0);
                pSolid->params.rotdamping = _mm_movedup_pd(v11).m128d_f64[0];
              }
            }
            else
            {
              v12.m128d_f64[0] = strtod(value, 0);
              pSolid->params.damping = _mm_movedup_pd(v12).m128d_f64[0];
            }
          }
          else
          {
            v10.m128d_f64[0] = strtod(value, 0);
            pSolid->params.inertia = _mm_movedup_pd(v10).m128d_f64[0];
          }
        }
        else
        {
          ReadVector(value, out);
          pSolid->params.massCenterOverride = out;
        }
      }
      else
      {
        v9.m128d_f64[0] = strtod(value, 0);
        pSolid->params.mass = _mm_movedup_pd(v9).m128d_f64[0];
      }
    }
    else
    {
      _V_strncpy(pSolid, value, 512);
    }
  }
}


// CVPhysicsParse::ParseRagdollConstraint  (line 217, @0x00000000020c11f0, libserver.so)  // inlines: atof, atoi, memset
// calls: ParseKeyValue, V_stricmp_fast, strtol, strtod, CVPhysicsParse::NextBlock, __stack_chk_fail
void __fastcall CVPhysicsParse::ParseRagdollConstraint(
        CVPhysicsParse *const this,
        constraint_ragdollparams_t *pConstraint,
        IVPhysicsKeyHandler *unknownKeyHandler)
{
  const char *m_pText; // rdi
  const char *v7; // rax
  bool v8; // zf
  __m128d v9; // xmm0
  __m128d v10; // xmm0
  __m128d v11; // xmm0
  __m128d v12; // xmm0
  __m128d v13; // xmm0
  __m128d v14; // xmm0
  __m128d v15; // xmm0
  __m128d v16; // xmm0
  __m128d v17; // xmm0
  char key[1024]; // [rsp+0h] [rbp-840h] BYREF
  char value[1032]; // [rsp+400h] [rbp-440h] BYREF
  unsigned __int64 v20; // [rsp+808h] [rbp-38h]

  key[0] = 0;
  v20 = __readfsqword(0x28u);
  if ( unknownKeyHandler != 0 )
  {
    (*(unknownKeyHandler->_vptr_IVPhysicsKeyHandler + 1))(unknownKeyHandler);
  }
  else
  {
    memset(pConstraint, 0, 0xB0u);
    *&pConstraint->onlyAngularLimits = 0;
    pConstraint->childIndex = -1;
    pConstraint->parentIndex = -1;
  }
  pConstraint->useClockwiseRotations = 1;
  while ( 1 )
  {
    m_pText = this->m_pText;
    if ( m_pText == 0 )
      break;
    while ( 1 )
    {
      v7 = ParseKeyValue(m_pText, key, value);
      v8 = key[0] == 125;
      this->m_pText = v7;
      if ( v8 )
      {
        CVPhysicsParse::NextBlock(this);
        return;
      }
      if ( V_stricmp_fast(key, "parent") != 0 )
        break;
      pConstraint->parentIndex = strtol(value, 0, 10);
      m_pText = this->m_pText;
      if ( m_pText == 0 )
        return;
    }
    if ( V_stricmp_fast(key, "child") != 0 )
    {
      if ( V_stricmp_fast(key, "xmin") != 0 )
      {
        if ( V_stricmp_fast(key, "xmax") != 0 )
        {
          if ( V_stricmp_fast(key, "xfriction") != 0 )
          {
            if ( V_stricmp_fast(key, "ymin") != 0 )
            {
              if ( V_stricmp_fast(key, "ymax") != 0 )
              {
                if ( V_stricmp_fast(key, "yfriction") != 0 )
                {
                  if ( V_stricmp_fast(key, "zmin") != 0 )
                  {
                    if ( V_stricmp_fast(key, "zmax") != 0 )
                    {
                      if ( V_stricmp_fast(key, "zfriction") != 0 )
                      {
                        if ( unknownKeyHandler != 0 )
                          (*unknownKeyHandler->_vptr_IVPhysicsKeyHandler)(unknownKeyHandler, pConstraint, key, value);
                      }
                      else
                      {
                        pConstraint->axes[2].flMotorTargetAngSpeed = 0.0;
                        v17.m128d_f64[0] = strtod(value, 0);
                        pConstraint->axes[2].flMotorMaxTorque = _mm_movedup_pd(v17).m128d_f64[0];
                      }
                    }
                    else
                    {
                      v16.m128d_f64[0] = strtod(value, 0);
                      pConstraint->axes[2].flMaxRotation = _mm_movedup_pd(v16).m128d_f64[0];
                    }
                  }
                  else
                  {
                    v14.m128d_f64[0] = strtod(value, 0);
                    pConstraint->axes[2].flMinRotation = _mm_movedup_pd(v14).m128d_f64[0];
                  }
                }
                else
                {
                  pConstraint->axes[1].flMotorTargetAngSpeed = 0.0;
                  v15.m128d_f64[0] = strtod(value, 0);
                  pConstraint->axes[1].flMotorMaxTorque = _mm_movedup_pd(v15).m128d_f64[0];
                }
              }
              else
              {
                v12.m128d_f64[0] = strtod(value, 0);
                pConstraint->axes[1].flMaxRotation = _mm_movedup_pd(v12).m128d_f64[0];
              }
            }
            else
            {
              v13.m128d_f64[0] = strtod(value, 0);
              pConstraint->axes[1].flMinRotation = _mm_movedup_pd(v13).m128d_f64[0];
            }
          }
          else
          {
            pConstraint->axes[0].flMotorTargetAngSpeed = 0.0;
            v11.m128d_f64[0] = strtod(value, 0);
            pConstraint->axes[0].flMotorMaxTorque = _mm_movedup_pd(v11).m128d_f64[0];
          }
        }
        else
        {
          v10.m128d_f64[0] = strtod(value, 0);
          pConstraint->axes[0].flMaxRotation = _mm_movedup_pd(v10).m128d_f64[0];
        }
      }
      else
      {
        v9.m128d_f64[0] = strtod(value, 0);
        pConstraint->axes[0].flMinRotation = _mm_movedup_pd(v9).m128d_f64[0];
      }
    }
    else
    {
      pConstraint->childIndex = strtol(value, 0, 10);
    }
  }
}


// CVPhysicsParse::ParseFluid  (line 304, @0x00000000020c2cf0, libserver.so)  // inlines: ReadVector4D, V_strncpy<long unsigned int>, atof, atoi, memset, strcpy
// calls: ParseKeyValue, V_stricmp_fast, strtol, strtod, sscanf, ReadVector, CVPhysicsParse::NextBlock, memset, _V_strncpy, __stack_chk_fail
// strings: "surfaceplane", "%f %f %f %f", "currentvelocity", "surfaceprop"
void __fastcall CVPhysicsParse::ParseFluid(
        CVPhysicsParse *const this,
        fluid_t *pFluid,
        IVPhysicsKeyHandler *unknownKeyHandler)
{
  const char *m_pText; // rdi
  const char *v7; // rax
  bool v8; // zf
  __m128d v9; // xmm0
  vec_t v10; // [rsp+10h] [rbp-850h] BYREF
  vec_t v11; // [rsp+14h] [rbp-84Ch] BYREF
  vec_t v12; // [rsp+18h] [rbp-848h] BYREF
  vec_t v13; // [rsp+1Ch] [rbp-844h] BYREF
  char key[1024]; // [rsp+20h] [rbp-840h] BYREF
  char value[1032]; // [rsp+420h] [rbp-440h] BYREF
  unsigned __int64 v16; // [rsp+828h] [rbp-38h]

  key[0] = 0;
  v16 = __readfsqword(0x28u);
  pFluid->index = -1;
  if ( unknownKeyHandler != 0 )
  {
    (*(unknownKeyHandler->_vptr_IVPhysicsKeyHandler + 1))(unknownKeyHandler);
  }
  else
  {
    memset(pFluid, 0, sizeof(fluid_t));
    strcpy(pFluid->surfaceprop, "water");
  }
  while ( 1 )
  {
    m_pText = this->m_pText;
    if ( m_pText == 0 )
      break;
    while ( 1 )
    {
      v7 = ParseKeyValue(m_pText, key, value);
      v8 = key[0] == 125;
      this->m_pText = v7;
      if ( v8 )
      {
        CVPhysicsParse::NextBlock(this);
        return;
      }
      if ( V_stricmp_fast(key, "index") != 0 )
        break;
      pFluid->index = strtol(value, 0, 10);
      m_pText = this->m_pText;
      if ( m_pText == 0 )
        return;
    }
    if ( V_stricmp_fast(key, "damping") != 0 )
    {
      if ( V_stricmp_fast(key, "surfaceplane") != 0 )
      {
        if ( V_stricmp_fast(key, "currentvelocity") != 0 )
        {
          if ( V_stricmp_fast(key, "contents") != 0 )
          {
            if ( V_stricmp_fast(key, "surfaceprop") != 0 )
            {
              if ( unknownKeyHandler != 0 )
                (*unknownKeyHandler->_vptr_IVPhysicsKeyHandler)(unknownKeyHandler, pFluid, key, value);
            }
            else
            {
              _V_strncpy(pFluid->surfaceprop, value, 512);
            }
          }
          else
          {
            pFluid->params.contents = strtol(value, 0, 10);
          }
        }
        else
        {
          ReadVector(value, &pFluid->params.currentVelocity);
        }
      }
      else
      {
        sscanf(value, "%f %f %f %f", &v10, &v11, &v12, &v13);
        pFluid->params.surfacePlane.x = v10;
        pFluid->params.surfacePlane.y = v11;
        pFluid->params.surfacePlane.z = v12;
        pFluid->params.surfacePlane.w = v13;
      }
    }
    else
    {
      v9.m128d_f64[0] = strtod(value, 0);
      pFluid->params.damping = _mm_movedup_pd(v9).m128d_f64[0];
    }
  }
}


// CVPhysicsParse::ParseSurfaceTable  (line 364, @0x00000000020c1560, libserver.so)  // inlines: atoi
// calls: ParseKeyValue, strtol, CVPhysicsParse::NextBlock, __stack_chk_fail
void __fastcall CVPhysicsParse::ParseSurfaceTable(
        CVPhysicsParse *const this,
        int *table,
        IVPhysicsKeyHandler *unknownKeyHandler)
{
  const char *v5; // rax
  bool v6; // zf
  int v7; // eax
  const char *m_pText; // rdi
  char key[1024]; // [rsp+0h] [rbp-830h] BYREF
  char value[1032]; // [rsp+400h] [rbp-430h] BYREF
  unsigned __int64 v11; // [rsp+808h] [rbp-28h]

  key[0] = 0;
  v11 = __readfsqword(0x28u);
  while ( 1 )
  {
    m_pText = this->m_pText;
    if ( m_pText == 0 )
      break;
    v5 = ParseKeyValue(m_pText, key, value);
    v6 = key[0] == 125;
    this->m_pText = v5;
    if ( v6 )
    {
      CVPhysicsParse::NextBlock(this);
      return;
    }
    v7 = strtol(value, 0, 10);
    if ( v7 <= 127 )
      table[v7] = 0;
  }
}


// CVPhysicsParse::ParseVehicleAxle  (line 387, @0x00000000020c19d0, libserver.so)  // inlines: atof, memset
// calls: ParseKeyValue, V_stricmp_fast, ReadVector, CVPhysicsParse::ParseVehicleWheel, strtod, CVPhysicsParse::ParseVehicleSuspension, __stack_chk_fail
// callers: CVPhysicsParse::ParseVehicle
// strings: "wheeloffset", "wheel", "suspension", "brakefactor"
void __fastcall CVPhysicsParse::ParseVehicleAxle(CVPhysicsParse *const this, vehicle_axleparams_t *const axle)
{
  Vector *p_wheelOffset; // r15
  const char *i; // rdi
  const char *v6; // rax
  bool v7; // zf
  __m128d v8; // xmm0
  __m128d v9; // xmm0
  vehicle_suspensionparams_t *suspension; // [rsp+8h] [rbp-848h]
  char key[1024]; // [rsp+10h] [rbp-840h] BYREF
  char value[1032]; // [rsp+410h] [rbp-440h] BYREF
  unsigned __int64 v13; // [rsp+818h] [rbp-38h]

  p_wheelOffset = &axle->wheelOffset;
  key[0] = 0;
  v13 = __readfsqword(0x28u);
  memset(axle, 0, 0x70u);
  suspension = &axle->suspension;
  axle->brakeFactor = 0.0;
LABEL_2:
  for ( i = this->m_pText; i != 0; i = this->m_pText )
  {
    v6 = ParseKeyValue(i, key, value);
    v7 = key[0] == 125;
    this->m_pText = v6;
    if ( v7 )
      break;
    if ( value[0] == 123 )
    {
      if ( V_stricmp_fast(key, "wheel") != 0 )
      {
        if ( V_stricmp_fast(key, "suspension") != 0 )
          (*(this->_vptr_IVPhysicsKeyParser + 10))(this);
        else
          CVPhysicsParse::ParseVehicleSuspension(this, suspension);
      }
      else
      {
        CVPhysicsParse::ParseVehicleWheel(this, &axle->wheels);
      }
      goto LABEL_2;
    }
    if ( V_stricmp_fast(key, "offset") != 0 )
    {
      if ( V_stricmp_fast(key, "wheeloffset") != 0 )
      {
        if ( V_stricmp_fast(key, "torquefactor") != 0 )
        {
          if ( V_stricmp_fast(key, "brakefactor") == 0 )
          {
            v9.m128d_f64[0] = strtod(value, 0);
            axle->brakeFactor = _mm_movedup_pd(v9).m128d_f64[0];
          }
        }
        else
        {
          v8.m128d_f64[0] = strtod(value, 0);
          axle->torqueFactor = _mm_movedup_pd(v8).m128d_f64[0];
        }
      }
      else
      {
        ReadVector(value, p_wheelOffset);
      }
      goto LABEL_2;
    }
    ReadVector(value, &axle->offset);
  }
}


// CVPhysicsParse::ParseVehicleWheel  (line 434, @0x00000000020c1620, libserver.so)  // inlines: atof
// calls: ParseKeyValue, V_stricmp_fast, strtod, __stack_chk_fail
// callers: CVPhysicsParse::ParseVehicleAxle
// strings: "inertia", "rotdamping", "frictionscale", "skidmaterial", "brakematerial"
void __fastcall CVPhysicsParse::ParseVehicleWheel(CVPhysicsParse *const this, vehicle_wheelparams_t *const wheel)
{
  const char *i; // rdi
  const char *v5; // rax
  bool v6; // zf
  __m128d v7; // xmm0
  __m128d v8; // xmm0
  __m128d v9; // xmm0
  __m128d v10; // xmm0
  __m128d v11; // xmm0
  __m128d v12; // xmm0
  char key[1024]; // [rsp+0h] [rbp-830h] BYREF
  char value[1032]; // [rsp+400h] [rbp-430h] BYREF
  unsigned __int64 v15; // [rsp+808h] [rbp-28h]

  key[0] = 0;
  v15 = __readfsqword(0x28u);
LABEL_2:
  for ( i = this->m_pText; i != 0; i = this->m_pText )
  {
    v5 = ParseKeyValue(i, key, value);
    v6 = key[0] == 125;
    this->m_pText = v5;
    if ( v6 )
      break;
    if ( V_stricmp_fast(key, "radius") != 0 )
    {
      if ( V_stricmp_fast(key, "mass") != 0 )
      {
        if ( V_stricmp_fast(key, "inertia") != 0 )
        {
          if ( V_stricmp_fast(key, "damping") != 0 )
          {
            if ( V_stricmp_fast(key, "rotdamping") != 0 )
            {
              if ( V_stricmp_fast(key, "frictionscale") != 0 )
              {
                if ( V_stricmp_fast(key, "material") != 0 )
                {
                  if ( V_stricmp_fast(key, "skidmaterial") != 0 )
                  {
                    if ( V_stricmp_fast(key, "brakematerial") == 0 )
                      wheel->brakeMaterialIndex = 0;
                  }
                  else
                  {
                    wheel->skidMaterialIndex = 0;
                  }
                }
                else
                {
                  wheel->materialIndex = 0;
                }
              }
              else
              {
                v12.m128d_f64[0] = strtod(value, 0);
                wheel->frictionScale = _mm_movedup_pd(v12).m128d_f64[0];
              }
            }
            else
            {
              v11.m128d_f64[0] = strtod(value, 0);
              wheel->rotdamping = _mm_movedup_pd(v11).m128d_f64[0];
            }
          }
          else
          {
            v10.m128d_f64[0] = strtod(value, 0);
            wheel->damping = _mm_movedup_pd(v10).m128d_f64[0];
          }
        }
        else
        {
          v9.m128d_f64[0] = strtod(value, 0);
          wheel->inertia = _mm_movedup_pd(v9).m128d_f64[0];
        }
      }
      else
      {
        v8.m128d_f64[0] = strtod(value, 0);
        wheel->mass = _mm_movedup_pd(v8).m128d_f64[0];
      }
      goto LABEL_2;
    }
    v7.m128d_f64[0] = strtod(value, 0);
    wheel->radius = _mm_movedup_pd(v7).m128d_f64[0];
  }
}


// CVPhysicsParse::ParseVehicleSuspension  (line 485, @0x00000000020c1840, libserver.so)  // inlines: atof
// calls: ParseKeyValue, V_stricmp_fast, strtod, __stack_chk_fail
// callers: CVPhysicsParse::ParseVehicleAxle
// strings: "springconstant", "springdamping", "stabilizerconstant", "springdampingcompression", "maxbodyforce"
void __fastcall CVPhysicsParse::ParseVehicleSuspension(
        CVPhysicsParse *const this,
        vehicle_suspensionparams_t *const suspension)
{
  const char *i; // rdi
  const char *v5; // rax
  bool v6; // zf
  __m128d v7; // xmm0
  __m128d v8; // xmm0
  __m128d v9; // xmm0
  __m128d v10; // xmm0
  __m128d v11; // xmm0
  char key[1024]; // [rsp+0h] [rbp-830h] BYREF
  char value[1032]; // [rsp+400h] [rbp-430h] BYREF
  unsigned __int64 v14; // [rsp+808h] [rbp-28h]

  key[0] = 0;
  v14 = __readfsqword(0x28u);
LABEL_2:
  for ( i = this->m_pText; i != 0; i = this->m_pText )
  {
    v5 = ParseKeyValue(i, key, value);
    v6 = key[0] == 125;
    this->m_pText = v5;
    if ( v6 )
      break;
    if ( V_stricmp_fast(key, "springconstant") != 0 )
    {
      if ( V_stricmp_fast(key, "springdamping") != 0 )
      {
        if ( V_stricmp_fast(key, "stabilizerconstant") != 0 )
        {
          if ( V_stricmp_fast(key, "springdampingcompression") != 0 )
          {
            if ( V_stricmp_fast(key, "maxbodyforce") == 0 )
            {
              v11.m128d_f64[0] = strtod(value, 0);
              suspension->maxBodyForce = _mm_movedup_pd(v11).m128d_f64[0];
            }
          }
          else
          {
            v10.m128d_f64[0] = strtod(value, 0);
            suspension->springDampingCompression = _mm_movedup_pd(v10).m128d_f64[0];
          }
        }
        else
        {
          v9.m128d_f64[0] = strtod(value, 0);
          suspension->stabilizerConstant = _mm_movedup_pd(v9).m128d_f64[0];
        }
      }
      else
      {
        v8.m128d_f64[0] = strtod(value, 0);
        suspension->springDamping = _mm_movedup_pd(v8).m128d_f64[0];
      }
      goto LABEL_2;
    }
    v7.m128d_f64[0] = strtod(value, 0);
    suspension->springConstant = _mm_movedup_pd(v7).m128d_f64[0];
  }
}


// CVPhysicsParse::ParseVehicleBody  (line 520, @0x00000000020c1bb0, libserver.so)  // inlines: atof
// calls: ParseKeyValue, V_stricmp_fast, ReadVector, strtod, __stack_chk_fail
// callers: CVPhysicsParse::ParseVehicle
// strings: "massCenterOverride", "addgravity", "maxAngularVelocity", "massOverride", "tiltforce", "tiltforceheight" (8 total)
void __fastcall CVPhysicsParse::ParseVehicleBody(CVPhysicsParse *const this, vehicle_bodyparams_t *const body)
{
  const char *i; // rdi
  const char *v5; // rax
  bool v6; // zf
  __m128d v7; // xmm0
  __m128d v8; // xmm0
  __m128d v9; // xmm0
  __m128d v10; // xmm0
  __m128d v11; // xmm0
  __m128d v12; // xmm0
  __m128d v13; // xmm0
  char key[1024]; // [rsp+0h] [rbp-830h] BYREF
  char value[1032]; // [rsp+400h] [rbp-430h] BYREF
  unsigned __int64 v16; // [rsp+808h] [rbp-28h]

  key[0] = 0;
  v16 = __readfsqword(0x28u);
LABEL_2:
  for ( i = this->m_pText; i != 0; i = this->m_pText )
  {
    v5 = ParseKeyValue(i, key, value);
    v6 = key[0] == 125;
    this->m_pText = v5;
    if ( v6 )
      break;
    if ( V_stricmp_fast(key, "massCenterOverride") != 0 )
    {
      if ( V_stricmp_fast(key, "addgravity") != 0 )
      {
        if ( V_stricmp_fast(key, "maxAngularVelocity") != 0 )
        {
          if ( V_stricmp_fast(key, "massOverride") != 0 )
          {
            if ( V_stricmp_fast(key, "tiltforce") != 0 )
            {
              if ( V_stricmp_fast(key, "tiltforceheight") != 0 )
              {
                if ( V_stricmp_fast(key, "countertorquefactor") != 0 )
                {
                  if ( V_stricmp_fast(key, "keepuprighttorque") == 0 )
                  {
                    v13.m128d_f64[0] = strtod(value, 0);
                    body->keepUprightTorque = _mm_movedup_pd(v13).m128d_f64[0];
                  }
                }
                else
                {
                  v11.m128d_f64[0] = strtod(value, 0);
                  body->counterTorqueFactor = _mm_movedup_pd(v11).m128d_f64[0];
                }
              }
              else
              {
                v12.m128d_f64[0] = strtod(value, 0);
                body->tiltForceHeight = _mm_movedup_pd(v12).m128d_f64[0];
              }
            }
            else
            {
              v10.m128d_f64[0] = strtod(value, 0);
              body->tiltForce = _mm_movedup_pd(v10).m128d_f64[0];
            }
          }
          else
          {
            v9.m128d_f64[0] = strtod(value, 0);
            body->massOverride = _mm_movedup_pd(v9).m128d_f64[0];
          }
        }
        else
        {
          v8.m128d_f64[0] = strtod(value, 0);
          body->maxAngularVelocity = _mm_movedup_pd(v8).m128d_f64[0];
        }
      }
      else
      {
        v7.m128d_f64[0] = strtod(value, 0);
        body->addGravity = _mm_movedup_pd(v7).m128d_f64[0];
      }
      goto LABEL_2;
    }
    ReadVector(value, &body->massCenterOverride);
  }
}


// CVPhysicsParse::ParseVehicleEngineBoost  (line 567, @0x00000000020c1dc0, libserver.so)  // inlines: atof, atoi
// calls: ParseKeyValue, V_stricmp_fast, strtod, strtol, __stack_chk_fail
// callers: CVPhysicsParse::ParseVehicleEngine
// strings: "torqueboost"
void __fastcall CVPhysicsParse::ParseVehicleEngineBoost(
        CVPhysicsParse *const this,
        vehicle_engineparams_t *const engineParams)
{
  const char *i; // rdi
  const char *v5; // rax
  bool v6; // zf
  __m128d v7; // xmm0
  __m128d v8; // xmm0
  __m128d v9; // xmm0
  __m128d v10; // xmm0
  char key[1024]; // [rsp+0h] [rbp-830h] BYREF
  char value[1032]; // [rsp+400h] [rbp-430h] BYREF
  unsigned __int64 v13; // [rsp+808h] [rbp-28h]

  key[0] = 0;
  v13 = __readfsqword(0x28u);
LABEL_2:
  for ( i = this->m_pText; i != 0; i = this->m_pText )
  {
    v5 = ParseKeyValue(i, key, value);
    v6 = key[0] == 125;
    this->m_pText = v5;
    if ( v6 )
      break;
    if ( V_stricmp_fast(key, "force") != 0 )
    {
      if ( V_stricmp_fast(key, "duration") != 0 )
      {
        if ( V_stricmp_fast(key, "delay") != 0 )
        {
          if ( V_stricmp_fast(key, "maxspeed") != 0 )
          {
            if ( V_stricmp_fast(key, "torqueboost") == 0 )
              engineParams->torqueBoost = strtol(value, 0, 10) != 0;
          }
          else
          {
            v10.m128d_f64[0] = strtod(value, 0);
            engineParams->boostMaxSpeed = _mm_movedup_pd(v10).m128d_f64[0];
          }
        }
        else
        {
          v9.m128d_f64[0] = strtod(value, 0);
          engineParams->boostDelay = _mm_movedup_pd(v9).m128d_f64[0];
        }
      }
      else
      {
        v8.m128d_f64[0] = strtod(value, 0);
        engineParams->boostDuration = _mm_movedup_pd(v8).m128d_f64[0];
      }
      goto LABEL_2;
    }
    v7.m128d_f64[0] = strtod(value, 0);
    engineParams->boostForce = _mm_movedup_pd(v7).m128d_f64[0];
  }
}


// CVPhysicsParse::ParseVehicleEngine  (line 602, @0x00000000020c1f50, libserver.so)  // inlines: atof, atoi
// calls: ParseKeyValue, V_stricmp_fast, strtod, CVPhysicsParse::ParseVehicleEngineBoost, strtol, __stack_chk_fail
// callers: CVPhysicsParse::ParseVehicle
// strings: "gear", "horsepower", "maxReverseSpeed", "axleratio", "maxRPM", "throttleTime" (11 total)
void __fastcall CVPhysicsParse::ParseVehicleEngine(
        CVPhysicsParse *const this,
        vehicle_engineparams_t *const engineParams)
{
  const char *i; // rdi
  const char *v5; // rax
  bool v6; // zf
  __int64 gearCount; // r15
  __m128d v8; // xmm0
  __m128d v9; // xmm0
  __m128d v10; // xmm0
  __m128d v11; // xmm0
  __m128d v12; // xmm0
  __m128d v13; // xmm0
  __m128d v14; // xmm0
  __m128d v15; // xmm0
  __m128d v16; // xmm0
  __m128d v17; // xmm0
  __m128d v18; // xmm0
  char key[1024]; // [rsp+0h] [rbp-840h] BYREF
  char value[1032]; // [rsp+400h] [rbp-440h] BYREF
  unsigned __int64 v21; // [rsp+808h] [rbp-38h]

  key[0] = 0;
  v21 = __readfsqword(0x28u);
LABEL_2:
  for ( i = this->m_pText; i != 0; i = this->m_pText )
  {
    v5 = ParseKeyValue(i, key, value);
    v6 = key[0] == 125;
    this->m_pText = v5;
    if ( v6 )
      break;
    if ( value[0] == 123 )
    {
      if ( V_stricmp_fast(key, "boost") != 0 )
        (*(this->_vptr_IVPhysicsKeyParser + 10))(this);
      else
        CVPhysicsParse::ParseVehicleEngineBoost(this, engineParams);
      goto LABEL_2;
    }
    if ( V_stricmp_fast(key, "gear") != 0 )
    {
      if ( V_stricmp_fast(key, "horsepower") != 0 )
      {
        if ( V_stricmp_fast(key, "maxSpeed") != 0 )
        {
          if ( V_stricmp_fast(key, "maxReverseSpeed") != 0 )
          {
            if ( V_stricmp_fast(key, "axleratio") != 0 )
            {
              if ( V_stricmp_fast(key, "maxRPM") != 0 )
              {
                if ( V_stricmp_fast(key, "throttleTime") != 0 )
                {
                  if ( V_stricmp_fast(key, "AutoTransmission") != 0 )
                  {
                    if ( V_stricmp_fast(key, "shiftUpRPM") != 0 )
                    {
                      if ( V_stricmp_fast(key, "shiftDownRPM") != 0 )
                      {
                        if ( V_stricmp_fast(key, "autobrakeSpeedGain") != 0 )
                        {
                          if ( V_stricmp_fast(key, "autobrakeSpeedFactor") == 0 )
                          {
                            v18.m128d_f64[0] = strtod(value, 0);
                            engineParams->autobrakeSpeedFactor = _mm_movedup_pd(v18).m128d_f64[0];
                          }
                        }
                        else
                        {
                          v17.m128d_f64[0] = strtod(value, 0);
                          engineParams->autobrakeSpeedGain = _mm_movedup_pd(v17).m128d_f64[0];
                        }
                      }
                      else
                      {
                        v16.m128d_f64[0] = strtod(value, 0);
                        engineParams->shiftDownRPM = _mm_movedup_pd(v16).m128d_f64[0];
                      }
                    }
                    else
                    {
                      v15.m128d_f64[0] = strtod(value, 0);
                      engineParams->shiftUpRPM = _mm_movedup_pd(v15).m128d_f64[0];
                    }
                  }
                  else
                  {
                    engineParams->isAutoTransmission = strtol(value, 0, 10) != 0;
                  }
                }
                else
                {
                  v13.m128d_f64[0] = strtod(value, 0);
                  engineParams->throttleTime = _mm_movedup_pd(v13).m128d_f64[0];
                }
              }
              else
              {
                v14.m128d_f64[0] = strtod(value, 0);
                engineParams->maxRPM = _mm_movedup_pd(v14).m128d_f64[0];
              }
            }
            else
            {
              v11.m128d_f64[0] = strtod(value, 0);
              engineParams->axleRatio = _mm_movedup_pd(v11).m128d_f64[0];
            }
          }
          else
          {
            v12.m128d_f64[0] = strtod(value, 0);
            engineParams->maxRevSpeed = _mm_movedup_pd(v12).m128d_f64[0];
          }
        }
        else
        {
          v10.m128d_f64[0] = strtod(value, 0);
          engineParams->maxSpeed = _mm_movedup_pd(v10).m128d_f64[0];
        }
      }
      else
      {
        v9.m128d_f64[0] = strtod(value, 0);
        engineParams->horsepower = _mm_movedup_pd(v9).m128d_f64[0];
      }
      goto LABEL_2;
    }
    gearCount = engineParams->gearCount;
    v8.m128d_f64[0] = strtod(value, 0);
    engineParams->gearRatio[gearCount] = _mm_movedup_pd(v8).m128d_f64[0];
    ++engineParams->gearCount;
  }
}


// CVPhysicsParse::ParseVehicleSteering  (line 677, @0x00000000020c22a0, libserver.so)  // inlines: atof, atoi
// calls: ParseKeyValue, V_stricmp_fast, strtod, __stack_chk_fail, strtol
// callers: CVPhysicsParse::ParseVehicle
// strings: "degreesSlow", "degreesFast", "degreesBoost", "fastcarspeed", "slowcarspeed", "slowsteeringrate" (18 total)
void __fastcall CVPhysicsParse::ParseVehicleSteering(
        CVPhysicsParse *const this,
        vehicle_steeringparams_t *const steering)
{
  const char *i; // rdi
  const char *v5; // rax
  bool v6; // zf
  __m128d v7; // xmm0
  __m128d v8; // xmm0
  __m128d v9; // xmm0
  __m128d v10; // xmm0
  __m128d v11; // xmm0
  __m128d v12; // xmm0
  __m128d v13; // xmm0
  __m128d v14; // xmm0
  __m128d v15; // xmm0
  __m128d v16; // xmm0
  __m128d v17; // xmm0
  __m128d v18; // xmm0
  __m128d v19; // xmm0
  __m128d v20; // xmm0
  __m128d v21; // xmm0
  __m128d v22; // xmm0
  __m128d v23; // xmm0
  char key[1024]; // [rsp+0h] [rbp-830h] BYREF
  char value[1032]; // [rsp+400h] [rbp-430h] BYREF
  unsigned __int64 v26; // [rsp+808h] [rbp-28h]

  key[0] = 0;
  v26 = __readfsqword(0x28u);
LABEL_2:
  for ( i = this->m_pText; i != 0; i = this->m_pText )
  {
    v5 = ParseKeyValue(i, key, value);
    v6 = key[0] == 125;
    this->m_pText = v5;
    if ( v6 )
      break;
    if ( V_stricmp_fast(key, "degreesSlow") != 0 )
    {
      if ( V_stricmp_fast(key, "degreesFast") != 0 )
      {
        if ( V_stricmp_fast(key, "degreesBoost") != 0 )
        {
          if ( V_stricmp_fast(key, "fastcarspeed") != 0 )
          {
            if ( V_stricmp_fast(key, "slowcarspeed") != 0 )
            {
              if ( V_stricmp_fast(key, "slowsteeringrate") != 0 )
              {
                if ( V_stricmp_fast(key, "faststeeringrate") != 0 )
                {
                  if ( V_stricmp_fast(key, "steeringRestRateSlow") != 0 )
                  {
                    if ( V_stricmp_fast(key, "steeringRestRateFast") != 0 )
                    {
                      if ( V_stricmp_fast(key, "throttleSteeringRestRateFactor") != 0 )
                      {
                        if ( V_stricmp_fast(key, "boostSteeringRestRateFactor") != 0 )
                        {
                          if ( V_stricmp_fast(key, "boostSteeringRateFactor") != 0 )
                          {
                            if ( V_stricmp_fast(key, "steeringExponent") != 0 )
                            {
                              if ( V_stricmp_fast(key, "turnThrottleReduceSlow") != 0 )
                              {
                                if ( V_stricmp_fast(key, "turnThrottleReduceFast") != 0 )
                                {
                                  if ( V_stricmp_fast(key, "brakeSteeringRateFactor") != 0 )
                                  {
                                    if ( V_stricmp_fast(key, "powerSlideAccel") != 0 )
                                    {
                                      if ( V_stricmp_fast(key, "skidallowed") != 0 )
                                      {
                                        if ( V_stricmp_fast(key, "dustcloud") == 0 )
                                          steering->dustCloud = strtol(value, 0, 10) != 0;
                                      }
                                      else
                                      {
                                        steering->isSkidAllowed = strtol(value, 0, 10) != 0;
                                      }
                                    }
                                    else
                                    {
                                      v23.m128d_f64[0] = strtod(value, 0);
                                      steering->powerSlideAccel = _mm_movedup_pd(v23).m128d_f64[0];
                                    }
                                  }
                                  else
                                  {
                                    v22.m128d_f64[0] = strtod(value, 0);
                                    steering->brakeSteeringRateFactor = _mm_movedup_pd(v22).m128d_f64[0];
                                  }
                                }
                                else
                                {
                                  v21.m128d_f64[0] = strtod(value, 0);
                                  steering->turnThrottleReduceFast = _mm_movedup_pd(v21).m128d_f64[0];
                                }
                              }
                              else
                              {
                                v20.m128d_f64[0] = strtod(value, 0);
                                steering->turnThrottleReduceSlow = _mm_movedup_pd(v20).m128d_f64[0];
                              }
                            }
                            else
                            {
                              v19.m128d_f64[0] = strtod(value, 0);
                              steering->steeringExponent = _mm_movedup_pd(v19).m128d_f64[0];
                            }
                          }
                          else
                          {
                            v18.m128d_f64[0] = strtod(value, 0);
                            steering->boostSteeringRateFactor = _mm_movedup_pd(v18).m128d_f64[0];
                          }
                        }
                        else
                        {
                          v17.m128d_f64[0] = strtod(value, 0);
                          steering->boostSteeringRestRateFactor = _mm_movedup_pd(v17).m128d_f64[0];
                        }
                      }
                      else
                      {
                        v16.m128d_f64[0] = strtod(value, 0);
                        steering->throttleSteeringRestRateFactor = _mm_movedup_pd(v16).m128d_f64[0];
                      }
                    }
                    else
                    {
                      v14.m128d_f64[0] = strtod(value, 0);
                      steering->steeringRestRateFast = _mm_movedup_pd(v14).m128d_f64[0];
                    }
                  }
                  else
                  {
                    v15.m128d_f64[0] = strtod(value, 0);
                    steering->steeringRestRateSlow = _mm_movedup_pd(v15).m128d_f64[0];
                  }
                }
                else
                {
                  v12.m128d_f64[0] = strtod(value, 0);
                  steering->steeringRateFast = _mm_movedup_pd(v12).m128d_f64[0];
                }
              }
              else
              {
                v13.m128d_f64[0] = strtod(value, 0);
                steering->steeringRateSlow = _mm_movedup_pd(v13).m128d_f64[0];
              }
            }
            else
            {
              v11.m128d_f64[0] = strtod(value, 0);
              steering->speedSlow = _mm_movedup_pd(v11).m128d_f64[0];
            }
          }
          else
          {
            v10.m128d_f64[0] = strtod(value, 0);
            steering->speedFast = _mm_movedup_pd(v10).m128d_f64[0];
          }
        }
        else
        {
          v9.m128d_f64[0] = strtod(value, 0);
          steering->degreesBoost = _mm_movedup_pd(v9).m128d_f64[0];
        }
      }
      else
      {
        v8.m128d_f64[0] = strtod(value, 0);
        steering->degreesFast = _mm_movedup_pd(v8).m128d_f64[0];
      }
      goto LABEL_2;
    }
    v7.m128d_f64[0] = strtod(value, 0);
    steering->degreesSlow = _mm_movedup_pd(v7).m128d_f64[0];
  }
}


// CVPhysicsParse::ParseVehicle  (line 767, @0x00000000020c26d0, libserver.so)  // inlines: atoi, memset
// calls: ParseKeyValue, V_stricmp_fast, strtol, CVPhysicsParse::ParseVehicleAxle, CVPhysicsParse::ParseVehicleBody, CVPhysicsParse::ParseVehicleEngine, CVPhysicsParse::ParseVehicleSteering, CVPhysicsParse::NextBlock, memset, __stack_chk_fail
// strings: "wheelsperaxle", "engine"
void __fastcall CVPhysicsParse::ParseVehicle(
        CVPhysicsParse *const this,
        vehicleparams_t *pVehicle,
        IVPhysicsKeyHandler *unknownKeyHandler)
{
  const char *m_pText; // rdi
  const char *v6; // rax
  bool v7; // zf
  char key[1024]; // [rsp+10h] [rbp-840h] BYREF
  char value[1032]; // [rsp+410h] [rbp-440h] BYREF
  unsigned __int64 v10; // [rsp+818h] [rbp-38h]

  key[0] = 0;
  v10 = __readfsqword(0x28u);
  if ( unknownKeyHandler != 0 )
    (*(unknownKeyHandler->_vptr_IVPhysicsKeyHandler + 1))(unknownKeyHandler);
  else
    memset(pVehicle, 0, sizeof(vehicleparams_t));
LABEL_3:
  while ( 1 )
  {
    m_pText = this->m_pText;
    if ( m_pText == 0 )
      break;
    while ( 1 )
    {
      v6 = ParseKeyValue(m_pText, key, value);
      v7 = key[0] == 125;
      this->m_pText = v6;
      if ( v7 )
      {
        CVPhysicsParse::NextBlock(this);
        return;
      }
      if ( value[0] == 123 )
        break;
      if ( V_stricmp_fast(key, "wheelsperaxle") != 0 )
        goto LABEL_3;
      pVehicle->wheelsPerAxle = strtol(value, 0, 10);
      m_pText = this->m_pText;
      if ( m_pText == 0 )
        return;
    }
    if ( V_stricmp_fast(key, "axle") != 0 )
    {
      if ( V_stricmp_fast(key, "body") != 0 )
      {
        if ( V_stricmp_fast(key, "engine") != 0 )
        {
          if ( V_stricmp_fast(key, "steering") != 0 )
            (*(this->_vptr_IVPhysicsKeyParser + 10))(this);
          else
            CVPhysicsParse::ParseVehicleSteering(this, &pVehicle->steering);
        }
        else
        {
          CVPhysicsParse::ParseVehicleEngine(this, &pVehicle->engine);
        }
      }
      else
      {
        CVPhysicsParse::ParseVehicleBody(this, &pVehicle->body);
      }
    }
    else
    {
      CVPhysicsParse::ParseVehicleAxle(this, &pVehicle->axles[pVehicle->axleCount]);
      ++pVehicle->axleCount;
    }
  }
}


// CVPhysicsParse::ParseCustom  (line 822, @0x00000000020c28c0, libserver.so)
// calls: ParseKeyValue, CVPhysicsParse::NextBlock, __stack_chk_fail
void __fastcall CVPhysicsParse::ParseCustom(
        CVPhysicsParse *const this,
        void *pCustom,
        IVPhysicsKeyHandler *unknownKeyHandler)
{
  const char *m_pText; // rax
  int v6; // r15d
  char key[1024]; // [rsp+10h] [rbp-840h] BYREF
  char value[1032]; // [rsp+410h] [rbp-440h] BYREF
  unsigned __int64 v10; // [rsp+818h] [rbp-38h]

  v10 = __readfsqword(0x28u);
  key[0] = 0;
  if ( unknownKeyHandler != 0 )
    (*(unknownKeyHandler->_vptr_IVPhysicsKeyHandler + 1))(unknownKeyHandler);
  m_pText = this->m_pText;
  v6 = 0;
  while ( m_pText != 0 )
  {
    m_pText = ParseKeyValue(m_pText, key, value);
    this->m_pText = m_pText;
    if ( m_pText == 0 )
      break;
    if ( key[0] == 123 )
    {
      ++v6;
      continue;
    }
    if ( value[0] == 123 )
    {
      ++v6;
      if ( unknownKeyHandler == 0 )
        continue;
    }
    else
    {
      if ( key[0] == 125 )
      {
        if ( --v6 != -1 )
          continue;
        CVPhysicsParse::NextBlock(this);
        return;
      }
      if ( unknownKeyHandler == 0 )
        continue;
    }
    (*unknownKeyHandler->_vptr_IVPhysicsKeyHandler)(unknownKeyHandler, pCustom, key, value);
    m_pText = this->m_pText;
  }
}


// SetMassCenterPointer  (line 874, @0x000000000209c890, libserver.so)
void __fastcall SetMassCenterPointer(void *pData)
{
  *(pData + 67) = pData + 512;
}


// CStringTable::AddString  (line 955, @0x00000000020e0df0, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CopyConstruct<short unsigned int>, Element, GrowMemory, GrowVector, InsertMultipleBefore, V_strlen, operator[]
// calls: V_stricmp_fast, strlen, CUtlMemory<char, int>::Grow, tolower, CUtlMemory<short unsigned int, int>::Grow
int __fastcall CStringTable::AddString(CStringTable *const this, const char *pString)
{
  __int64 m_Size; // r14
  __int64 v5; // rbx
  int v7; // r15d
  int v8; // ebx
  unsigned __int16 *m_pMemory; // rax
  unsigned __int16 *v10; // rax
  int v11; // r14d
  int m_nAllocationCount; // eax
  char *v13; // r14
  __int64 v14; // rbx

  m_Size = this->stringOffset.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_6:
    if ( pString != 0 )
      v7 = strlen(pString) + 1;
    else
      v7 = 1;
    v8 = this->stringData.m_Size;
    if ( m_Size == this->stringOffset.m_Memory.m_nAllocationCount )
      CUtlMemory<unsigned short,int>::Grow(&this->stringOffset.m_Memory, 1);
    m_pMemory = this->stringOffset.m_Memory.m_pMemory;
    ++this->stringOffset.m_Size;
    v10 = &m_pMemory[m_Size];
    if ( v10 != 0 )
      *v10 = v8;
    if ( v7 != 0 )
    {
      v11 = this->stringData.m_Size + v7;
      m_nAllocationCount = this->stringData.m_Memory.m_nAllocationCount;
      if ( v11 > m_nAllocationCount )
        CUtlMemory<char,int>::Grow(&this->stringData.m_Memory, v11 - m_nAllocationCount);
      this->stringData.m_Size = v11;
      v13 = &this->stringData.m_Memory.m_pMemory[v8];
      if ( v7 > 0 )
      {
        v14 = 0;
        do
        {
          v13[v14] = tolower(pString[v14]);
          ++v14;
        }
        while ( v7 > v14 );
      }
    }
    return this->stringOffset.m_Size - 1;
  }
  else
  {
    v5 = 0;
    while ( V_stricmp_fast(&this->stringData.m_Memory.m_pMemory[this->stringOffset.m_Memory.m_pMemory[v5]], pString) != 0 )
    {
      m_Size = this->stringOffset.m_Size;
      if ( m_Size <= ++v5 )
        goto LABEL_6;
    }
    return v5;
  }
}


// VPhysicsKeyParserCreate  (line 1039, @0x00000000020c11e0, libserver.so)
// calls: CreateVPhysicsKeyParser
// callers: PrecacheGibsForModel, BreakModelList, PhysSolidOverride, CPhysicsHook::FindOrAddVehicleScript
IVPhysicsKeyParser *__fastcall VPhysicsKeyParserCreate(const char *pKeyData)
{
  return CreateVPhysicsKeyParser(pKeyData, 0);
}


// VPhysicsKeyParserDestroy  (line 1045, @0x00000000020c0ee0, libserver.so)  // inlines: DestroyVPhysicsKeyParser
// callers: PrecacheGibsForModel, BreakModelList, PhysSolidOverride, CPhysicsHook::FindOrAddVehicleScript
void __fastcall VPhysicsKeyParserDestroy(IVPhysicsKeyParser *pParser)
{
  if ( pParser != 0 )
    (*(pParser->_vptr_IVPhysicsKeyParser + 1))(pParser);
}


// CreateVPhysicsKeyParser  (line 1050, @0x00000000020c1180, libserver.so)  // inlines: CVPhysicsParse, ~IVPhysicsKeyParser
// calls: operator new, CVPhysicsParse::NextBlock, operator delete, _Unwind_Resume
// callers: VPhysicsKeyParserCreate
IVPhysicsKeyParser *__fastcall CreateVPhysicsKeyParser(const char *pKeyData, bool bIsPacked)
{
  CVPhysicsParse *v3; // rbx

  v3 = operator new(0x410u);
  v3->m_pText = pKeyData;
  v3->_vptr_IVPhysicsKeyParser = off_3FFCB30;
  CVPhysicsParse::NextBlock(v3);
  return v3;
}


// DestroyVPhysicsKeyParser  (line 1056, @0x00000000020c0f00, libserver.so)
void __fastcall DestroyVPhysicsKeyParser(IVPhysicsKeyParser *pParser)
{
  if ( pParser != 0 )
    (*(pParser->_vptr_IVPhysicsKeyParser + 1))(pParser);
}


// ParseKeyValue  (line 1065, @0x00000000020c0f20, libserver.so)  // inlines: V_strlen, V_strncpy<int>, _V_strcmp
// calls: ParseFile, _V_strncpy, V_strlower_fast, __stack_chk_fail
// callers: CVPhysicsParse::NextBlock, CVPhysicsParse::ParseRagdollConstraint, CVPhysicsParse::ParseSurfaceTable, CVPhysicsParse::ParseVehicleWheel, CVPhysicsParse::ParseVehicleSuspension, CVPhysicsParse::ParseVehicleAxle, CVPhysicsParse::ParseVehicleBody, CVPhysicsParse::ParseVehicleEngineBoost, CVPhysicsParse::ParseVehicleEngine, CVPhysicsParse::ParseVehicleSteering, CVPhysicsParse::ParseVehicle, CVPhysicsParse::ParseCustom (14 total)
const char *__fastcall ParseKeyValue(const char *pBuffer, char *key, char *value)
{
  const char *v5; // rax
  char *v6; // r8
  const char *v7; // r14
  int v8; // r9d
  unsigned int v9; // ecx
  const char *v11; // rax
  char *v12; // rcx
  int v13; // esi
  unsigned int v14; // edx
  char com_token[1032]; // [rsp+0h] [rbp-430h] BYREF
  unsigned __int64 v16; // [rsp+408h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  v5 = ParseFile(pBuffer, com_token, 0, 0);
  v6 = com_token;
  v7 = v5;
  do
  {
    v8 = *v6;
    v6 += 4;
    v9 = ~v8 & (v8 - 16843009) & 0x80808080;
  }
  while ( v9 == 0 );
  if ( (~v8 & (v8 - 16843009) & 0x8080) == 0 )
  {
    LOBYTE(v9) = (~v8 & (v8 - 16843009) & 0x80808080) >> 16;
    v6 += 2;
  }
  if ( (&v6[-__CFADD__(v9, v9) - 3] - com_token) <= 1023 )
  {
    _V_strncpy(key, com_token, 1024);
    V_strlower_fast(key);
  }
  if ( strcmp(key, "}") == 0 )
  {
    *value = 0;
  }
  else
  {
    v11 = ParseFile(v7, com_token, 0, 0);
    v12 = com_token;
    do
    {
      v13 = *v12;
      v12 += 4;
      v14 = ~v13 & (v13 - 16843009) & 0x80808080;
    }
    while ( v14 == 0 );
    v7 = v11;
    if ( (~v13 & (v13 - 16843009) & 0x8080) == 0 )
    {
      LOBYTE(v14) = (~v13 & (v13 - 16843009) & 0x80808080) >> 16;
      v12 += 2;
    }
    if ( (&v12[-__CFADD__(v14, v14) - 3] - com_token) <= 1023 )
    {
      _V_strncpy(value, com_token, 1024);
      V_strlower_fast(value);
    }
  }
  return v7;
}


