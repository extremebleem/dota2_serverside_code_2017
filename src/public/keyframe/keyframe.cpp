// Reconstructed from DWARF by pahole; not original source.

// src/public/keyframe/keyframe.cpp:42
struct KeyFrame_t {
	KeyFrame_t();

	// sizeof = 28
};

// src/public/keyframe/keyframe.cpp:151
class CPositionInterpolator_Linear : public IPositionInterpolator {
public:

	CPositionInterpolator_Linear(CPositionInterpolator_Linear &);
	CPositionInterpolator_Linear(const CPositionInterpolator_Linear &);
	CPositionInterpolator_Linear();
	virtual void Release();
	virtual void GetDetails(const char * *, int *, int *);
	virtual void SetKeyPosition(int, const Vector &);
	virtual void InterpolatePosition(float, Vector &);
	virtual bool ProcessKey(const char *, const char *);

	// vtable[0] Release
	// vtable[1] GetDetails
	// vtable[2] SetKeyPosition
	// vtable[3] InterpolatePosition
	// vtable[4] ProcessKey
	// sizeof = 8
};

// src/public/keyframe/keyframe.cpp:198
class CPositionInterpolator_CatmullRom : public IPositionInterpolator {
public:

	CPositionInterpolator_CatmullRom(CPositionInterpolator_CatmullRom &);
	CPositionInterpolator_CatmullRom(const CPositionInterpolator_CatmullRom &);
	CPositionInterpolator_CatmullRom();
	virtual void Release();
	virtual void GetDetails(const char * *, int *, int *);
	virtual void SetKeyPosition(int, const Vector &);
	virtual void InterpolatePosition(float, Vector &);
	virtual bool ProcessKey(const char *, const char *);

	// vtable[0] Release
	// vtable[1] GetDetails
	// vtable[2] SetKeyPosition
	// vtable[3] InterpolatePosition
	// vtable[4] ProcessKey
	// sizeof = 8
};

// src/public/keyframe/keyframe.cpp:250
class CRopeDelegate : public IHelper {
public:

	~CRopeDelegate();
	CRopeDelegate(CRopeDelegate &);
	CRopeDelegate(const CRopeDelegate &);
	CRopeDelegate();
	virtual void GetNodeForces(CNode *, int, Vector *);
	virtual void ApplyConstraints(CNode *, int);

	// vtable[0] GetNodeForces
	// vtable[1] ApplyConstraints
	// sizeof = 32
};

// src/public/keyframe/keyframe.cpp:277
class CPositionInterpolator_Rope : public IPositionInterpolator {
public:

private:

	float m_flSlack;  // +0x298
	bool m_bChange;  // +0x29c

	int m_nSegments;  // +0x2a0
	CPositionInterpolator_Rope(CPositionInterpolator_Rope &);
	CPositionInterpolator_Rope(const CPositionInterpolator_Rope &);
	CPositionInterpolator_Rope();
	virtual void Release();
	virtual void GetDetails(const char * *, int *, int *);
	virtual void SetKeyPosition(int, const Vector &);
	virtual void InterpolatePosition(float, Vector &);
	virtual bool ProcessKey(const char *, const char *);

	// vtable[0] Release
	// vtable[1] GetDetails
	// vtable[2] SetKeyPosition
	// vtable[3] InterpolatePosition
	// vtable[4] ProcessKey
	// sizeof = 680
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Motion_SetKeyAngles  (line 52, @0x000000000241b620, libserver.so)  // inlines: operator=
// callers: CBaseMoveBehavior::SetObjectPhysicsVelocity
// globals: g_KeyFramePtr
bool __fastcall Motion_SetKeyAngles(int keyNum, Quaternion *const quatAngles)
{
  bool result; // al

  result = 0;
  if ( (keyNum + 3) <= 6 )
  {
    g_KeyFramePtr[keyNum].qRot = *quatAngles;
    return 1;
  }
  return result;
}


// TimeModifierFunc_Linear  (line 78, @0x0000000002414010, libserver.so)
void __fastcall TimeModifierFunc_Linear(double a1, float time)
{
  ;
}


// TimeModifierFunc_Cosine  (line 83, @0x0000000002414ec0, libserver.so)
// calls: cos
float __fastcall TimeModifierFunc_Cosine(float a1, float time)
{
  return cos((a1 + 1.0) * 3.141592653589793) * 0.5 + 0.5;
}


// TimeModifierFunc_TimeSquared  (line 88, @0x0000000002414020, libserver.so)
float __fastcall TimeModifierFunc_TimeSquared(float a1, float time)
{
  return a1 * a1;
}


// Motion_GetNumberOfTimeModifiers  (line 100, @0x000000000241b680, libserver.so)
int __cdecl Motion_GetNumberOfTimeModifiers()
{
  return 3;
}


// Motion_GetTimeModifierDetails  (line 105, @0x000000000241b690, libserver.so)
// globals: g_TimeModifiers
bool __fastcall Motion_GetTimeModifierDetails(int timeInterpNum, const char **outName)
{
  bool result; // al

  result = 0;
  if ( timeInterpNum <= 2 && g_TimeModifiers[0].szName != 0 && g_TimeModifiers[0].pFunc != 0 )
  {
    if ( outName != 0 )
    {
      *outName = g_TimeModifiers[0].szName;
      return 1;
    }
    else
    {
      return 1;
    }
  }
  return result;
}


// Motion_CalculateModifiedTime  (line 130, @0x000000000241b6d0, libserver.so)
__int64 __fastcall Motion_CalculateModifiedTime(double a1, float time, int timeModifierFuncNum, float *outNewTime)
{
  float v5; // xmm0_4

  v5 = (g_TimeModifiers[timeModifierFuncNum].pFunc)(a1, time);
  *outNewTime = v5;
  return 1;
}


// CPositionInterpolator_Linear::ProcessKey  (line 158, @0x000000000241ddb0, libserver.so)
bool __fastcall CPositionInterpolator_Linear::ProcessKey(
        CPositionInterpolator_Linear *const this,
        const char *pName,
        const char *pValue)
{
  return 0;
}


// GetLinearInterpolator  (line 163, @0x0000000002414030, libserver.so)
// callers: Motion_GetPositionInterpolator
// globals: g_LinearInterpolator
IPositionInterpolator *__cdecl GetLinearInterpolator()
{
  return &g_LinearInterpolator;
}


// CPositionInterpolator_Linear::Release  (line 168, @0x0000000002414040, libserver.so)
void __fastcall CPositionInterpolator_Linear::Release(CPositionInterpolator_Linear *const this)
{
  ;
}


// CPositionInterpolator_Linear::GetDetails  (line 172, @0x0000000002414050, libserver.so)
void __fastcall CPositionInterpolator_Linear::GetDetails(
        CPositionInterpolator_Linear *const this,
        const char **outName,
        int *outMinKeyReq,
        int *outMaxKeyReq)
{
  *outName = "Linear";
  *outMinKeyReq = 0;
  *outMaxKeyReq = 1;
}


// CPositionInterpolator_Linear::SetKeyPosition  (line 179, @0x0000000002414070, libserver.so)  // inlines: VectorCopy
// globals: g_KeyFramePtr
void __fastcall CPositionInterpolator_Linear::SetKeyPosition(
        CPositionInterpolator_Linear *const this,
        int keyNum,
        const Vector *const vPos)
{
  g_KeyFramePtr[keyNum].vPos = *vPos;
}


// CPositionInterpolator_Linear::InterpolatePosition  (line 185, @0x00000000024140b0, libserver.so)  // inlines: VectorLerp
// globals: g_KeyFramePtr
void __fastcall CPositionInterpolator_Linear::InterpolatePosition(
        CPositionInterpolator_Linear *const this,
        float a2,
        float time,
        Vector *const vOut)
{
  KeyFrame_t *v4; // rax

  v4 = g_KeyFramePtr;
  vOut->x = ((g_KeyFramePtr[1].vPos.x - g_KeyFramePtr->vPos.x) * a2) + g_KeyFramePtr->vPos.x;
  vOut->y = ((v4[1].vPos.y - v4->vPos.y) * a2) + v4->vPos.y;
  vOut->z = ((v4[1].vPos.z - v4->vPos.z) * a2) + v4->vPos.z;
}


// CPositionInterpolator_CatmullRom::ProcessKey  (line 205, @0x000000000241ddc0, libserver.so)
bool __fastcall CPositionInterpolator_CatmullRom::ProcessKey(
        CPositionInterpolator_CatmullRom *const this,
        const char *pName,
        const char *pValue)
{
  return 0;
}


// GetCatmullRomInterpolator  (line 210, @0x0000000002414110, libserver.so)
// callers: Motion_GetPositionInterpolator
// globals: g_CatmullRomInterpolator
IPositionInterpolator *__cdecl GetCatmullRomInterpolator()
{
  return &g_CatmullRomInterpolator;
}


// CPositionInterpolator_CatmullRom::Release  (line 215, @0x0000000002414120, libserver.so)
void __fastcall CPositionInterpolator_CatmullRom::Release(CPositionInterpolator_CatmullRom *const this)
{
  ;
}


// CPositionInterpolator_CatmullRom::GetDetails  (line 219, @0x0000000002414130, libserver.so)
// strings: "Catmull-Rom Spline"
void __fastcall CPositionInterpolator_CatmullRom::GetDetails(
        CPositionInterpolator_CatmullRom *const this,
        const char **outName,
        int *outMinKeyReq,
        int *outMaxKeyReq)
{
  *outName = "Catmull-Rom Spline";
  *outMinKeyReq = -1;
  *outMaxKeyReq = 2;
}


// CPositionInterpolator_CatmullRom::SetKeyPosition  (line 226, @0x0000000002414150, libserver.so)  // inlines: VectorCopy
// globals: g_KeyFramePtr
void __fastcall CPositionInterpolator_CatmullRom::SetKeyPosition(
        CPositionInterpolator_CatmullRom *const this,
        int keyNum,
        const Vector *const vPos)
{
  g_KeyFramePtr[keyNum].vPos = *vPos;
}


// CPositionInterpolator_CatmullRom::InterpolatePosition  (line 232, @0x0000000002414f00, libserver.so)
// calls: Catmull_Rom_Spline
// globals: g_KeyFramePtr
void __fastcall CPositionInterpolator_CatmullRom::InterpolatePosition(
        CPositionInterpolator_CatmullRom *const this,
        float a2,
        float time,
        Vector *const vOut)
{
  Catmull_Rom_Spline(
    &g_KeyFramePtr[-1].vPos,
    &g_KeyFramePtr->vPos,
    &g_KeyFramePtr[1].vPos,
    &g_KeyFramePtr[2].vPos,
    a2,
    vOut);
}


// CRopeDelegate::GetNodeForces  (line 261, @0x0000000002414190, libserver.so)  // inlines: Init
void __fastcall CRopeDelegate::GetNodeForces(
        CRopeDelegate *const this,
        CSimplePhysics::CNode *pNodes,
        int iNode,
        Vector *pAccel)
{
  pAccel->x = 0.0;
  pAccel->y = 0.0;
  pAccel->z = -1500.0;
}


// CRopeDelegate::ApplyConstraints  (line 267, @0x00000000024141b0, libserver.so)  // inlines: operator=
void __fastcall CRopeDelegate::ApplyConstraints(CRopeDelegate *const this, CSimplePhysics::CNode *pNodes, int nNodes)
{
  if ( nNodes > 1 )
  {
    pNodes->m_vPos = this->m_CurEndPoints[0];
    pNodes[nNodes - 1].m_vPos = this->m_CurEndPoints[1];
  }
}


// GetRopeInterpolator  (line 299, @0x000000000241ba00, libserver.so)
// calls: operator new, CPositionInterpolator_Rope::CPositionInterpolator_Rope
// callers: Motion_GetPositionInterpolator
IPositionInterpolator *__cdecl GetRopeInterpolator()
{
  CPositionInterpolator_Rope *v0; // rbx

  v0 = operator new(0x2A8u);
  CPositionInterpolator_Rope::CPositionInterpolator_Rope(v0);
  return v0;
}


// CPositionInterpolator_Rope::CPositionInterpolator_Rope  (line 305, @0x000000000241b950, libserver.so)  // inlines: CRopeDelegate, CRopePhysics, operator=
// calls: CBaseRopePhysics::CBaseRopePhysics
// callers: GetRopeInterpolator
void __fastcall CPositionInterpolator_Rope::CPositionInterpolator_Rope(CPositionInterpolator_Rope *const this)
{
  this->_vptr_IPositionInterpolator = &off_40D45F0;
  CBaseRopePhysics::CBaseRopePhysics(
    &this->m_RopePhysics,
    this->m_RopePhysics.m_Nodes,
    10,
    this->m_RopePhysics.m_Springs,
    this->m_RopePhysics.m_SpringDistsSqr);
  this->m_RopePhysics._vptr_IHelper = &off_40D45D0;
  this->m_Delegate._vptr_IHelper = &off_40D45B0;
  this->m_flSlack = 0.0;
  this->m_bChange = 0;
  this->m_nSegments = 5;
  this->m_Delegate.m_CurEndPoints[0].x = 1.0e24;
  this->m_Delegate.m_CurEndPoints[0].y = 1.0e24;
  this->m_Delegate.m_CurEndPoints[0].z = 1.0e24;
  this->m_Delegate.m_CurEndPoints[1].x = 1.0e24;
  this->m_Delegate.m_CurEndPoints[1].y = 1.0e24;
  this->m_Delegate.m_CurEndPoints[1].z = 1.0e24;
}


// CPositionInterpolator_Rope::Release  (line 315, @0x0000000002414270, libserver.so)
// calls: operator delete
void __fastcall CPositionInterpolator_Rope::Release(CPositionInterpolator_Rope *const this)
{
  operator delete(this);
}


// CPositionInterpolator_Rope::GetDetails  (line 320, @0x0000000002414210, libserver.so)
// strings: "Rope"
void __fastcall CPositionInterpolator_Rope::GetDetails(
        CPositionInterpolator_Rope *const this,
        const char **outName,
        int *outMinKeyReq,
        int *outMaxKeyReq)
{
  *outName = "Rope";
  *outMinKeyReq = 1;
}


// CPositionInterpolator_Rope::SetKeyPosition  (line 327, @0x0000000002415220, libserver.so)  // inlines: operator!=, operator=
void __fastcall CPositionInterpolator_Rope::SetKeyPosition(
        CPositionInterpolator_Rope *const this,
        int keyNum,
        const Vector *const vPos)
{
  vec_t x; // xmm0_4

  if ( keyNum <= 1 )
  {
    x = vPos->x;
    if ( vPos->x != this->m_Delegate.m_CurEndPoints[keyNum].x
      || this->m_Delegate.m_CurEndPoints[keyNum].y != vPos->y
      || this->m_Delegate.m_CurEndPoints[keyNum].z != vPos->z )
    {
      this->m_bChange = 1;
      x = vPos->x;
    }
    this->m_Delegate.m_CurEndPoints[keyNum].x = x;
    this->m_Delegate.m_CurEndPoints[keyNum].y = vPos->y;
    this->m_Delegate.m_CurEndPoints[keyNum].z = vPos->z;
  }
}


// CPositionInterpolator_Rope::InterpolatePosition  (line 338, @0x000000000241be50, libserver.so)  // inlines: FastSqrt, GetNode, Init, Length, Restart, SetupSimulation, VectorLength, VectorLerp, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=
// calls: CBaseRopePhysics::SetNumNodes, CBaseRopePhysics::ResetSpringLength, CBaseRopePhysics::Simulate
void __fastcall CPositionInterpolator_Rope::InterpolatePosition(
        CPositionInterpolator_Rope *const this,
        float a2,
        float time,
        Vector *const vOut)
{
  float v4; // xmm4_4
  float v7; // xmm1_4
  CSimplePhysics::CNode *v8; // rax
  float v9; // xmm1_4
  CRopePhysics<10> *p_m_RopePhysics; // r12
  int m_nNodes; // eax
  __int64 v12; // rdx
  int v13; // edi
  vec_t x; // xmm1_4
  __int64 v15; // rcx
  CSimplePhysics::CNode *v16; // rax
  vec_t *v17; // rcx
  float v18; // xmm1_4
  float y; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float z; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm1_4

  v4 = a2;
  if ( this->m_bChange )
  {
    p_m_RopePhysics = &this->m_RopePhysics;
    CBaseRopePhysics::SetNumNodes(&this->m_RopePhysics, this->m_nSegments);
    m_nNodes = this->m_RopePhysics.m_nNodes;
    if ( m_nNodes > 0 )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        x = this->m_Delegate.m_CurEndPoints[0].x;
        v15 = v12 * 36;
        v16 = &this->m_RopePhysics.m_pNodes[v12];
        ++v13;
        ++v12;
        v16->m_vPrevPos.x = x;
        v16->m_vPrevPos.y = this->m_Delegate.m_CurEndPoints[0].y;
        v16->m_vPrevPos.z = this->m_Delegate.m_CurEndPoints[0].z;
        v17 = (&this->m_RopePhysics.m_pNodes->m_vPos.x + v15);
        *v17 = x;
        v17[1] = v16->m_vPrevPos.y;
        v17[2] = v16->m_vPrevPos.z;
        m_nNodes = this->m_RopePhysics.m_nNodes;
      }
      while ( m_nNodes > v13 );
    }
    v18 = this->m_Delegate.m_CurEndPoints[0].x;
    y = this->m_Delegate.m_CurEndPoints[0].y;
    this->m_RopePhysics.m_Physics.m_flPredictedTime = 0.0;
    v20 = v18 - this->m_Delegate.m_CurEndPoints[1].x;
    this->m_RopePhysics.m_Physics.m_iCurTimeStep = 0;
    v21 = y - this->m_Delegate.m_CurEndPoints[1].y;
    this->m_RopePhysics.m_Physics.m_flTimeStep = 0.02;
    z = this->m_Delegate.m_CurEndPoints[0].z;
    this->m_RopePhysics.m_Physics.m_flTimeStepMul = 0.00019999999;
    v23 = (fsqrt(
             ((v20 * v20) + (v21 * v21))
           + ((z - this->m_Delegate.m_CurEndPoints[1].z) * (z - this->m_Delegate.m_CurEndPoints[1].z)))
         + this->m_flSlack)
        / (m_nNodes - 1);
    CBaseRopePhysics::ResetSpringLength(p_m_RopePhysics, v23, v23);
    this->m_RopePhysics.m_pDelegate = &this->m_Delegate;
    CBaseRopePhysics::Simulate(p_m_RopePhysics, 5.0, v24);
    this->m_bChange = 0;
    v4 = a2;
  }
  v7 = (this->m_RopePhysics.m_nNodes - 1) * v4;
  v8 = &this->m_RopePhysics.m_pNodes[v7 + 1];
  v9 = v7 - v7;
  vOut->x = ((v8->m_vPredicted.x - v8[-1].m_vPredicted.x) * v9) + v8[-1].m_vPredicted.x;
  vOut->y = ((v8->m_vPredicted.y - v8[-1].m_vPredicted.y) * v9) + v8[-1].m_vPredicted.y;
  vOut->z = ((v8->m_vPredicted.z - v8[-1].m_vPredicted.z) * v9) + v8[-1].m_vPredicted.z;
}


// CPositionInterpolator_Rope::ProcessKey  (line 371, @0x0000000002415130, libserver.so)  // inlines: atof, atoi
// calls: V_stricmp_fast, strtol, strtod
bool __fastcall CPositionInterpolator_Rope::ProcessKey(
        CPositionInterpolator_Rope *const this,
        const char *pName,
        const char *pValue)
{
  int v7; // eax
  double v8; // xmm0_8
  __m128d v9; // xmm0

  if ( V_stricmp_fast(pName, "Slack") != 0 )
  {
    if ( V_stricmp_fast(pName, "Type") != 0 )
    {
      return 0;
    }
    else
    {
      v7 = strtol(pValue, 0, 10);
      if ( v7 != 0 )
        this->m_nSegments = 2 * (v7 == 1) + 2;
      else
        this->m_nSegments = 10;
      this->m_bChange = 1;
      return 1;
    }
  }
  else
  {
    v8 = strtod(pValue, 0);
    this->m_bChange = 1;
    v9.m128d_f64[0] = v8 - 100.0;
    this->m_flSlack = _mm_movedup_pd(v9).m128d_f64[0];
    return 1;
  }
}


// Motion_GetNumberOfPositionInterpolators  (line 410, @0x000000000241b700, libserver.so)
int __cdecl Motion_GetNumberOfPositionInterpolators()
{
  return 3;
}


// Motion_GetPositionInterpolator  (line 416, @0x000000000241b710, libserver.so)
// calls: GetLinearInterpolator, GetCatmullRomInterpolator, GetRopeInterpolator
// callers: GetPositionInterpolator, CBaseMoveBehavior::SetObjectPhysicsVelocity
// globals: g_PositionInterpolatorCreateFns
IPositionInterpolator *__fastcall Motion_GetPositionInterpolator(int interpNum)
{
  int v1; // eax
  int v2; // edx

  v1 = 0;
  v2 = 2;
  if ( interpNum >= 0 )
    v1 = interpNum;
  if ( v1 <= 2 )
    v2 = v1;
  return g_PositionInterpolatorCreateFns[v2]();
}


// RotationInterpolatorFunc_Linear  (line 443, @0x0000000002414f20, libserver.so)
// calls: QuaternionSlerp
// globals: g_KeyFramePtr
void __fastcall RotationInterpolatorFunc_Linear(float a1, float time, Quaternion *const outRot)
{
  QuaternionSlerp(&g_KeyFramePtr->qRot, &g_KeyFramePtr[1].qRot, a1, outRot);
}


// Motion_GetNumberOfRotationInterpolators  (line 454, @0x000000000241b740, libserver.so)
int __cdecl Motion_GetNumberOfRotationInterpolators()
{
  return 1;
}


// Motion_GetRotationInterpolatorDetails  (line 459, @0x000000000241b750, libserver.so)
// globals: g_RotationInterpolators
bool __fastcall Motion_GetRotationInterpolatorDetails(
        int rotInterpNum,
        const char **outName,
        int *outMinKeyReq,
        int *outMaxKeyReq)
{
  bool result; // al

  result = 0;
  if ( rotInterpNum == 0 && g_RotationInterpolators[0].szName != 0 && g_RotationInterpolators[0].pFunc != 0 )
  {
    if ( outName != 0 )
      *outName = g_RotationInterpolators[0].szName;
    if ( outMinKeyReq != 0 )
      *outMinKeyReq = g_RotationInterpolators[0].iMinReqKeyFrame;
    if ( outMaxKeyReq != 0 )
      *outMaxKeyReq = g_RotationInterpolators[0].iMaxReqKeyFrame;
    return 1;
  }
  return result;
}


// Motion_InterpolateRotation  (line 492, @0x000000000241b7b0, libserver.so)
// callers: CBaseMoveBehavior::SetObjectPhysicsVelocity
__int64 __fastcall Motion_InterpolateRotation(
        float a1,
        float time,
        int interpFuncNum,
        Quaternion *const outQuatRotation)
{
  __int64 result; // rax

  result = 0;
  if ( a1 >= 0.0 && a1 <= 1.0 )
  {
    (g_RotationInterpolators[interpFuncNum].pFunc)(outQuatRotation);
    return 1;
  }
  return result;
}


