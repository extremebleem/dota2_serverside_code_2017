// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/lightquerygamesystem.cpp:172
class CLightQueryVisibilityTest : public ILightQueryVisibilityTest {
public:

	CLightQueryVisibilityTest(CLightQueryVisibilityTest &);
	CLightQueryVisibilityTest(const CLightQueryVisibilityTest &);
	CLightQueryVisibilityTest();
	virtual float QueryVisibility(const Vector &, const LightDesc_t &, uint32);
	virtual ~CLightQueryVisibilityTest();

	// vtable[0] QueryVisibility
	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetCamera  (line 40, @0x0000000001f35d80, libserver.so)
void __fastcall GetCamera(CTransform *const camera)
{
  (*(*g_pNetworkClientService + 264LL))(g_pNetworkClientService, 0, camera);
}


// CLightQueryGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 52, @0x0000000001f35da0, libserver.so)
void __cdecl CLightQueryGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// DrawAmbientCube  (line 61, @0x0000000001f2e2a0, libserver.so)  // inlines: Dot, DotProduct, EvaluateAmbientCube, GetAmbientCubeWeights, Triangle, VectorAdd, VectorMA, VectorMultiply, VertexColor_t, operator*, operator+, operator=
// calls: sincosf, powf, __stack_chk_fail
// callers: CLightQueryGameSystem::OnPostSimulate
void __fastcall DrawAmbientCube(
        Vector *pDebugOverlay,
        Vector (*const pAmbientCube)[6],
        const Vector *const vCenter,
        float flTonemapScale,
        float flMaxRadius,
        int nTheta,
        int nPhi)
{
  int v7; // ecx
  float v9; // xmm1_4
  Vector *v10; // rax
  float v11; // xmm0_4
  float v12; // xmm0_4
  _DWORD *v13; // r14
  float v14; // xmm7_4
  float v15; // xmm8_4
  float v16; // xmm6_4
  float v17; // xmm5_4
  _DWORD *v18; // rax
  Vector *v19; // r14
  const Vector *v20; // rbx
  int v21; // r15d
  float *v22; // r13
  _DWORD *v23; // r12
  float v24; // xmm5_4
  float v25; // xmm0_4
  float v26; // xmm6_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float *v33; // rdx
  float v34; // xmm1_4
  float v35; // xmm3_4
  const Vector *v36; // rax
  float v37; // xmm4_4
  float v38; // xmm0_4
  vec_t v39; // xmm6_4
  vec_t v40; // xmm4_4
  vec_t v41; // xmm0_4
  float v42; // xmm0_4
  float v43; // xmm0_4
  Vector *v44; // r13
  float *p_x; // r14
  int v46; // ebx
  float v47; // xmm0_4
  float v48; // xmm3_4
  float v49; // xmm2_4
  float v50; // xmm0_4
  double v51; // xmm1_8
  int v52; // r10d
  double v53; // xmm2_8
  __int64 v54; // rdx
  void (__fastcall *v55)(Vector *, const Vector *, const Vector *, char *, _DWORD *, _QWORD, double, double, double); // r11
  void (__fastcall *v56)(Vector *, const Vector *, char *, const Vector *, _DWORD *, _QWORD, double); // r11
  int v57; // r12d
  char *v58; // r15
  float v59; // xmm4_4
  float v60; // xmm2_4
  float v61; // xmm0_4
  float v62; // xmm4_4
  int v63; // xmm2_4
  float v64; // xmm3_4
  float v65; // xmm0_4
  float v66; // xmm0_4
  float v67; // xmm0_4
  float v68; // xmm0_4
  float v69; // xmm0_4
  float v70; // xmm0_4
  float v71; // xmm0_4
  __int64 v72; // [rsp+2h] [rbp-3BB0h] BYREF
  __int64 v73; // [rsp+1D72h] [rbp-1E40h] BYREF
  Vector *v74; // [rsp+3ADAh] [rbp-D8h]
  Vector *v75; // [rsp+3AE2h] [rbp-D0h]
  Vector *v76; // [rsp+3AEAh] [rbp-C8h]
  Vector *v77; // [rsp+3AF2h] [rbp-C0h]
  Vector *flTonemapScalea; // [rsp+3AFAh] [rbp-B8h]
  Vector *v79; // [rsp+3B02h] [rbp-B0h]
  signed __int64 i; // [rsp+3B0Ah] [rbp-A8h]
  Vector *pVerts; // [rsp+3B12h] [rbp-A0h]
  Vector *pColors; // [rsp+3B1Ah] [rbp-98h]
  float x; // [rsp+3B26h] [rbp-8Ch]
  float *sinx; // [rsp+3B2Ah] [rbp-88h]
  const Vector *v4; // [rsp+3B32h] [rbp-80h]
  const Vector *v2; // [rsp+3B3Ah] [rbp-78h]
  _DWORD *v87; // [rsp+3B42h] [rbp-70h]
  float z; // [rsp+3B4Ah] [rbp-68h]
  int j; // [rsp+3B4Eh] [rbp-64h]
  const Vector *v1; // [rsp+3B52h] [rbp-60h]
  float cosx; // [rsp+3B5Ah] [rbp-58h] BYREF
  float v92; // [rsp+3B5Eh] [rbp-54h] BYREF
  _DWORD v93[6]; // [rsp+3B62h] [rbp-50h] BYREF
  unsigned __int64 v94; // [rsp+3B7Ah] [rbp-38h]

  v7 = 0;
  v2 = pAmbientCube;
  v9 = 0.001;
  *&flTonemapScalea = flTonemapScale;
  v94 = __readfsqword(0x28u);
  pVerts = (&v73 & 0xFFFFFFFFFFFFFFEFLL);
  v10 = pAmbientCube;
  pColors = (&v72 & 0xFFFFFFFFFFFFFFEFLL);
  do
  {
    v11 = v10->x;
    ++v7;
    ++v10;
    v12 = fmaxf((v11 + v10[-1].y) + v10[-1].z, v9);
    v9 = v12;
  }
  while ( v7 != 6 );
  v77 = pDebugOverlay;
  v13 = v93;
  LODWORD(i) = 0;
  v14 = 1.0;
  v15 = 0.0;
  v79 = pVerts;
  *&v87 = 24.0 / v12;
  *&v4 = vec3_origin.y;
  z = vec3_origin.z;
  while ( 1 )
  {
    v16 = 0.0;
    x = -v14;
    v17 = 1.0;
    sinx = &v92;
    v18 = v13;
    v19 = v79;
    v20 = vCenter;
    v21 = 0;
    v22 = (&v79->x + pColors - pVerts);
    v23 = v18;
    while ( 1 )
    {
      v24 = v17 * v15;
      v25 = 0.0;
      v26 = v16 * v15;
      if ( v24 > 0.0 )
        v25 = v24 * v24;
      *v93 = v25;
      v27 = 0.0;
      if ( v26 > 0.0 )
        v27 = v26 * v26;
      *&v93[1] = v27;
      v28 = 0.0;
      if ( v14 > 0.0 )
        v28 = v14 * v14;
      *&v93[2] = v28;
      v29 = 0.0;
      if ( v24 < 0.0 )
        v29 = v24 * v24;
      *&v93[3] = v29;
      v30 = 0.0;
      if ( v26 < 0.0 )
        v30 = v26 * v26;
      *&v93[4] = v30;
      v31 = 0.0;
      if ( v14 < 0.0 )
        v31 = x * x;
      *&v93[5] = v31;
      v32 = *&v4;
      v33 = (v23 + 1);
      v34 = z;
      v35 = vec3_origin.x;
      v36 = v2;
      while ( 1 )
      {
        v37 = v36->x;
        ++v36;
        v35 = v35 + (v37 * v25);
        v32 = v32 + (v36[-1].y * v25);
        v34 = v34 + (v25 * v36[-1].z);
        if ( v33 == (v23 + 6) )
          break;
        v25 = *v33++;
      }
      ++v21;
      ++v19;
      v22 += 3;
      v38 = ((v35 + v32) + v34) * *&v87;
      v39 = (v26 * v38) + v20->y;
      v40 = (v38 * v14) + v20->z;
      v41 = (v38 * v24) + v20->x;
      v19[-1].y = v39;
      v19[-1].z = v40;
      v19[-1].x = v41;
      *(v22 - 3) = v35;
      *(v22 - 2) = v32;
      *(v22 - 1) = v34;
      if ( v21 == 25 )
        break;
      *&j = v15;
      *&v1 = v14;
      v42 = (v21 / 24.0) * 6.283185307179586;
      sincosf(v42, sinx, &cosx);
      v17 = cosx;
      v16 = v92;
      v15 = *&j;
      v14 = *&v1;
    }
    LODWORD(i) = i + 1;
    vCenter = v20;
    v13 = v23;
    v79 += 25;
    if ( i == 25 )
      break;
    v43 = (i / 24.0) * 3.141592653589793;
    sincosf(v43, &v92, &cosx);
    v14 = cosx;
    v15 = v92;
  }
  v87 = v23;
  v75 = pColors + 601;
  v76 = pColors + 1;
  v44 = v77;
  *&v79 = *&flTonemapScalea * 0.25;
  v74 = pVerts - 1;
  v77 = pVerts + 25;
  flTonemapScalea = pVerts + 24;
  do
  {
    *&j = 0.0;
    p_x = &v76->x;
    i = v74 - pColors;
    do
    {
      LOBYTE(v57) = -1;
      v1 = (p_x + i);
      v58 = p_x + v77 - pColors;
      v2 = (p_x + pVerts - pColors);
      v4 = (p_x + flTonemapScalea - pColors);
      v59 = (((*(p_x - 3) + *p_x) + p_x[75]) + p_x[72]) * *&v79;
      x = (((*(p_x - 2) + p_x[1]) + p_x[76]) + p_x[73]) * *&v79;
      v60 = ((*(p_x - 1) + p_x[2]) + p_x[77]) + p_x[74];
      z = v59;
      *&sinx = v60 * *&v79;
      v61 = powf(v59, 0.45454544);
      v62 = z;
      v63 = sinx;
      v64 = x;
      if ( v61 <= 1.0 )
      {
        v65 = z;
        z = x;
        x = v62;
        LOBYTE(v57) = 0;
        v66 = powf(v65, 0.45454544);
        v64 = z;
        v63 = sinx;
        if ( v66 >= 0.0 )
        {
          v67 = powf(x, 0.45454544);
          v63 = sinx;
          v64 = z;
          v57 = (v67 * 255.0);
        }
      }
      z = v64;
      LODWORD(sinx) = v63;
      LOBYTE(v46) = -1;
      v47 = powf(v64, 0.45454544);
      v48 = z;
      v49 = *&sinx;
      if ( v47 <= 1.0 )
      {
        v69 = z;
        z = *&sinx;
        *&sinx = v48;
        LOBYTE(v46) = 0;
        v70 = powf(v69, 0.45454544);
        v49 = z;
        if ( v70 >= 0.0 )
        {
          v71 = powf(*&sinx, 0.45454544);
          v49 = z;
          v46 = (v71 * 255.0);
        }
      }
      z = v49;
      v50 = powf(v49, 0.45454544);
      v52 = -1;
      *&v53 = LODWORD(z);
      if ( v50 <= 1.0 )
      {
        v68 = powf(z, 0.45454544);
        v52 = 0;
        if ( v68 >= 0.0 )
          v52 = (powf(z, 0.45454544) * 255.0);
      }
      v54 = *&v44->x;
      z = *&v52;
      p_x += 3;
      v55 = *(v54 + 248);
      BYTE2(v93[0]) = v52;
      LOBYTE(v93[0]) = v57;
      BYTE1(v93[0]) = v46;
      HIBYTE(v93[0]) = -1;
      v55(v44, v1, v2, v58, v87, 0, 0.0, v51, v53);
      v56 = *(*&v44->x + 248LL);
      LOBYTE(v93[0]) = v57;
      BYTE1(v93[0]) = v46;
      BYTE2(v93[0]) = LOBYTE(z);
      HIBYTE(v93[0]) = -1;
      v56(v44, v1, v58, v4, v87, 0, 0.0);
      ++j;
    }
    while ( j != 24 );
    v76 += 25;
  }
  while ( v76 != v75 );
}


// CLightQueryVisibilityTest::~CLightQueryVisibilityTest  (line 172, @0x0000000001f72530, libserver.so)  // inlines: ~ILightQueryVisibilityTest
void __fastcall CLightQueryVisibilityTest::~CLightQueryVisibilityTest(CLightQueryVisibilityTest *const this)
{
  this->_vptr_ILightQueryVisibilityTest = &off_3FCAC30;
}


// CLightQueryVisibilityTest::~CLightQueryVisibilityTest  (line 172, @0x0000000001f73d20, libserver.so)  // inlines: ~CLightQueryVisibilityTest, ~ILightQueryVisibilityTest
// calls: operator delete
void __fastcall CLightQueryVisibilityTest::~CLightQueryVisibilityTest(CLightQueryVisibilityTest *const this)
{
  this->_vptr_ILightQueryVisibilityTest = &off_3FCAC30;
  operator delete(this);
}


// CLightQueryVisibilityTest::QueryVisibility  (line 182, @0x0000000001f2f7e0, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, DidHit, EnableInteractsWith, Init, LengthSqr, LightRayEndPoint, LightRayTraceFilter, ProcessHit, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, TraceRay, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+
// calls: CGameTrace::Init, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::TraceRay
float __fastcall CLightQueryVisibilityTest::QueryVisibility(
        const CLightQueryVisibilityTest *const this,
        const Vector *const vPosition,
        const LightDesc_t *const lightDesc,
        uint32 nEntityToIgnore)
{
  float x; // xmm0_4
  float y; // xmm3_4
  float z; // xmm2_4
  uint64 v9; // rax
  bool v10; // zf
  float result; // xmm0_4
  float v14; // [rsp+14h] [rbp-15Ch]
  float v15; // [rsp+18h] [rbp-158h]
  float v16; // [rsp+1Ch] [rbp-154h]
  CGameQueryAttributes filter; // [rsp+20h] [rbp-150h] BYREF
  Ray_t ray; // [rsp+50h] [rbp-120h] BYREF
  CGameTrace hit; // [rsp+A0h] [rbp-D0h] BYREF
  Vector v20; // 0:^8.12

  if ( lightDesc->m_Type == LightType_t::MATERIAL_LIGHT_DIRECTIONAL )
  {
    x = (lightDesc->m_Direction.x * 56755.84) + vPosition->x;
    y = (lightDesc->m_Direction.y * 56755.84) + vPosition->y;
    z = (56755.84 * lightDesc->m_Direction.z) + vPosition->z;
  }
  else
  {
    x = lightDesc->m_Position.x;
    y = lightDesc->m_Position.y;
    z = lightDesc->m_Position.z;
  }
  v20 = *vPosition;
  v14 = z;
  v15 = x;
  v16 = y;
  memset(&hit.m_ShapeAttributes, 0, 31);
  hit.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&hit);
  filter.m_nInteractsExclude = 0;
  filter.m_nInteractsAs = 0;
  filter.m_nCollisionGroup = 3;
  *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  filter.m_nObjectSetMask = 7;
  filter.m_nInteractsWith = 4;
  EntityIDFromBaseEntity(0);
  filter.m_nEntityIdToIgnore = nEntityToIgnore;
  filter.m_nHierarchyId = HierarchyIDFromBaseEntity(0);
  v9 = 4;
  v10 = lightDesc->m_Type == LightType_t::MATERIAL_LIGHT_DIRECTIONAL;
  filter.m_nInteractsWith = 132;
  if ( v10 )
  {
    LOBYTE(v9) = -116;
    filter.m_nInteractsWith = v9;
  }
  ray.m_Start.w = 0.0;
  ray.m_Delta.x = v15 - v20.x;
  ray.m_Delta.y = v16 - v20.y;
  ray.m_Delta.z = v14 - v20.z;
  memset(&ray.m_Delta.w, 0, 40);
  ray.m_IsRay = 1;
  ray.m_Start.Vector = v20;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  if ( !CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &hit) )
    return 1.0;
  if ( lightDesc->m_Type != LightType_t::MATERIAL_LIGHT_DIRECTIONAL )
    return 0.0;
  result = 1.0;
  if ( hit.fraction >= 1.0 && !hit.startsolid )
    return 0.0;
  if ( (hit.m_ShapeAttributes.m_nInteractsAs & 8) == 0 )
    return 0.0;
  return result;
}


// CLightQueryGameSystem::GameInit  (line 204, @0x0000000001f2a060, libserver.so)
// globals: g_pLightQuery
void __fastcall CLightQueryGameSystem::GameInit(CLightQueryGameSystem *const this, const EventGameInit_t *const msg)
{
  g_pLightQuery = (*(*g_pWorldRendererMgr + 296LL))(g_pWorldRendererMgr, msg);
}


// CLightQueryGameSystem::GameShutdown  (line 214, @0x0000000001f2a080, libserver.so)
// globals: g_pLightQuery
void __fastcall CLightQueryGameSystem::GameShutdown(
        CLightQueryGameSystem *const this,
        const EventGameShutdown_t *const msg)
{
  if ( g_pLightQuery != 0 )
  {
    (*(*g_pWorldRendererMgr + 304LL))(g_pWorldRendererMgr);
    g_pLightQuery = 0;
  }
}


// CLightQueryGameSystem::GameActivate  (line 227, @0x0000000001f2a8b0, libserver.so)  // inlines: CWeakHandle, Init, operator=
// calls: V_stricmp_fast
// globals: g_pLightQuery, s_LightQueryVisibilityTest
void __fastcall CLightQueryGameSystem::GameActivate(
        CLightQueryGameSystem *const this,
        const EventGameActivate_t *const msg)
{
  __int64 v2; // r14
  int v3; // r15d
  unsigned int v4; // ebx
  __int64 v5; // r13
  __int64 v6; // rax
  _QWORD v7[8]; // [rsp+10h] [rbp-40h] BYREF

  v2 = (*g_pLoopModeGameSharedState->_vptr_ILoopModeGameSharedState)(g_pLoopModeGameSharedState, msg);
  if ( v2 != 0 )
  {
    v3 = 0;
    while ( v3 < (*(*v2 + 184LL))(v2) )
    {
      v4 = 0;
      v5 = (*(*v2 + 200LL))(v2, v3);
      while ( 1 )
      {
        if ( v4 >= (*(*g_pWorldRendererMgr + 112LL))(g_pWorldRendererMgr) )
          goto LABEL_8;
        v6 = (*(*g_pWorldRendererMgr + 128LL))(g_pWorldRendererMgr, v4);
        if ( V_stricmp_fast(v5, v6) == 0 )
          break;
        ++v4;
      }
      (*(*g_pWorldRendererMgr + 144LL))(v7, g_pWorldRendererMgr, v4);
      if ( v7[0] == 0 )
      {
LABEL_8:
        ++v3;
        continue;
      }
      ++v3;
      (*(g_pLightQuery->_vptr_ILightQuery + 11))(g_pLightQuery, v7);
    }
    (*(g_pLightQuery->_vptr_ILightQuery + 12))(g_pLightQuery, &s_LightQueryVisibilityTest);
  }
}


// CLightQueryGameSystem::GameDeactivate  (line 263, @0x0000000001f2a0c0, libserver.so)
void __fastcall CLightQueryGameSystem::GameDeactivate(
        CLightQueryGameSystem *const this,
        const EventGameDeactivate_t *const msg)
{
  ;
}


// CLightQueryGameSystem::CLightQueryGameSystem  (line 270, @0x0000000001f35db0, libserver.so)  // inlines: CEntityHandle
void __fastcall CLightQueryGameSystem::CLightQueryGameSystem(CLightQueryGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FCC9F0;  // vptr: CLightQueryGameSystem
  this->m_hGlobalLights[0].m_Index = -1;
  this->m_hGlobalLights[1].m_Index = -1;
}


// CLightQueryGameSystem::~CLightQueryGameSystem  (line 276, @0x0000000001f2aaa0, libserver.so)
// calls: IGameSystem::~IGameSystem
void __fastcall CLightQueryGameSystem::~CLightQueryGameSystem(CLightQueryGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FCC9F0;  // vptr: CLightQueryGameSystem
  IGameSystem::~IGameSystem(this);
}


// CLightQueryGameSystem::~CLightQueryGameSystem  (line 276, @0x0000000001f2aac0, libserver.so)  // inlines: ~CLightQueryGameSystem
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CLightQueryGameSystem::~CLightQueryGameSystem(CLightQueryGameSystem *const this)
{
  this->_vptr_IGameSystem = off_3FCC9F0;  // vptr: CLightQueryGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CLightQueryGameSystem::OnPostSimulate  (line 282, @0x0000000001f35dd0, libserver.so)  // inlines: CDebugOverlayScope, CTransform, GetBool, GetCamera, GetForward, GetInt, GetOrigin, Init, MakeStringToken, VectorAligned, VectorMA, ~CDebugOverlayScope
// calls: MurmurHash2LowerCase, TransformVectorsForward, DrawAmbientCube, RegisterStringToken, _Unwind_Resume
// callers: CLightQueryGameSystem::OnClientGamePostSimulate, CLightQueryGameSystem::OnServerGamePostSimulate
// strings: "CLightQueryGameSystem::OnPostSimulate"
// globals: g_pLightQuery
// local variable allocation has failed, the output may be wrong!
void __fastcall CLightQueryGameSystem::OnPostSimulate(
        CLightQueryGameSystem *const this,
        const EventSimulate_t *const msg)
{
  IDebugOverlay *v2; // rbx
  uint32 v3; // eax
  double v4; // xmm4_8
  __int64 v5; // rdx
  int m_nValue; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  float v9; // xmm0_4
  int v10; // ecx
  int v11; // r8d
  float v12; // xmm1_4
  uint32 v13; // [rsp-Ch] [rbp-BCh]
  uint32 v14; // [rsp-Ch] [rbp-BCh]
  float v15[2]; // [rsp-8h] [rbp-B8h] BYREF
  Vector vProbeCenter; // [rsp+0h] [rbp-B0h] BYREF
  unsigned int v17; // [rsp+Ch] [rbp-A4h]
  unsigned int v18; // [rsp+10h] [rbp-A0h]
  float v19[2]; // [rsp+18h] [rbp-98h] BYREF
  _BYTE camera[96]; // [rsp+20h] [rbp-90h] OVERLAPPED BYREF

  if ( sv_lightquery_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    v2 = g_pDebugOverlay;
    v3 = MurmurHash2LowerCase("CLightQueryGameSystem::OnPostSimulate", 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v14 = v3;
      RegisterStringToken(v3, "CLightQueryGameSystem::OnPostSimulate", 0, 1);
      v3 = v14;
    }
    if ( v2 != 0 )
    {
      v13 = v3;
      (*(*v2 + 576LL))(v2, v3);
      (*(*v2 + 560LL))(v2, v13);
    }
    *&camera[4] = 0;
    (*(*g_pNetworkClientService + 264LL))(g_pNetworkClientService, 0, v19);
    TransformVectorsForward(v19, &vProbeCenter.z);
    *&v4 = LODWORD(vProbeCenter.z);
    v5 = lightquery_debug_direct_lighting.m_pParent->m_Value.m_nValue != 0 ? 2 : 0;
    if ( lightquery_debug_indirect_lighting.m_pParent->m_Value.m_nValue != 0 )
      v5 = (lightquery_debug_direct_lighting.m_pParent->m_Value.m_nValue != 0 ? 2 : 0) | 1u;
    v15[1] = v19[1] + (*&v17 * 100.0);
    vProbeCenter.x = (*&v18 * 100.0) + *camera;
    m_nValue = lightquery_debug_indirect_lighting_fast.m_pParent->m_Value.m_nValue;
    v15[0] = (vProbeCenter.z * 100.0) + v19[0];
    if ( m_nValue == 1 )
    {
      v5 = v5 | 8;
    }
    else if ( m_nValue == 2 )
    {
      v5 = v5 | 0x10;
    }
    *&v4 = (vProbeCenter.z * 100.0) + v19[0];
    (*(g_pLightQuery->_vptr_ILightQuery + 2))(
      g_pLightQuery,
      &camera[24],
      v5,
      v15,
      0xFFFFFFFFLL,
      COERCE_DOUBLE(v18),
      COERCE_DOUBLE(1120403456),
      COERCE_DOUBLE(LODWORD(v19[1])),
      COERCE_DOUBLE(v17),
      v4);
    v7 = g_pLoopModeGameSharedState->GetWorldSession();
    v8 = (*(*v7 + 120LL))(v7, 0);
    v9 = (*(*v8 + 8LL))(v8);
    DrawAmbientCube(g_pDebugOverlay, &camera[24], v15, v9, v12, v10, v11);
    if ( v2 != 0 )
      (*(*v2 + 568LL))(v2);
  }
}


// GetLightForTrace  (line 328, @0x0000000001f36000, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, Init, LengthSqr, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetObjectSetMask, TraceRay, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator=
// calls: CGameTrace::Init, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::TraceRay
// callers: GetTerrainAmbientLightAtPoint
// globals: g_pLightQuery
bool __fastcall GetLightForTrace(
        Vector *pOutIrradiance,
        int nFlags,
        const Vector *const vStart,
        const Vector *const vEnd)
{
  uint16 v8; // ax
  float x; // xmm6_4
  float y; // xmm5_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float z; // xmm4_4
  float v14; // xmm2_4
  bool result; // al
  double v16; // xmm0_8
  vec_t v17; // xmm1_4
  bool v18; // [rsp+Ch] [rbp-164h]
  CGameQueryAttributes filter; // [rsp+10h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+40h] [rbp-130h] BYREF
  CGameTrace hit; // [rsp+90h] [rbp-E0h] BYREF

  memset(&hit.m_ShapeAttributes, 0, 31);
  hit.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&hit);
  filter.m_nHierarchyId = 0;
  memset(&filter, 0, 24);
  filter.m_nCollisionGroup = 4;
  *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  filter.m_nObjectSetMask = 1;
  filter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(0);
  v8 = HierarchyIDFromBaseEntity(0);
  x = vStart->x;
  y = vStart->y;
  filter.m_nHierarchyId = v8;
  v11 = vEnd->x;
  ray.m_Start.w = 0.0;
  v12 = vEnd->y;
  memset(&ray.m_Delta.w, 0, 40);
  z = vStart->z;
  ray.m_IsRay = 1;
  v14 = vEnd->z;
  ray.m_Delta.x = v11 - x;
  ray.m_Delta.y = v12 - y;
  ray.m_Delta.z = v14 - z;
  ray.m_Start.x = x;
  ray.m_Start.y = y;
  ray.m_Start.z = z;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  result = CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &hit);
  if ( result )
  {
    v18 = result;
    v16 = (*(g_pLightQuery->_vptr_ILightQuery + 1))(g_pLightQuery, nFlags, &hit.endpos, &hit.plane, 0xFFFFFFFFLL);
    ray.m_Start.y = *(&v16 + 1);
    pOutIrradiance->z = v17;
    pOutIrradiance->x = *&v16;
    pOutIrradiance->y = ray.m_Start.y;
    return v18;
  }
  return result;
}


