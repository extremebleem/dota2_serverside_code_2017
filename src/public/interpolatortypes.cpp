
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Interpolator_CurveTypeForName  (line 16, @0x0000000002f482f0, libserver.so)  // inlines: GetTokenI, Interpolator_InterpolatorForName, V_stristr_fast, V_strncpy<long unsigned int>, V_strnicmp_fast<int>
// calls: _V_strncpy, _V_strnicmp_fast, V_stristr_fast(char const*,char const*), V_stricmp_fast, __stack_chk_fail
// callers: CChoreoScene::ParseEdgeInfo, CChoreoScene::ParseFlexAnimations, CCurveData::ParseSample
// strings: "_to_curve_"
// globals: s_InterpolatorNameMap
int __fastcall Interpolator_CurveTypeForName(const char *name)
{
  int v1; // eax
  int v2; // edx
  tokenset_t<InterpolatorType_t> *v4; // rbx
  _BYTE *v5; // rax
  char v6; // r14
  _BYTE *v7; // r12
  const char *i; // rsi
  __int16 token; // r13
  _BYTE *v10; // r12
  const char *v11; // rsi
  tokenset_t<InterpolatorType_t> *j; // rbx
  char sz[136]; // [rsp+0h] [rbp-B0h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  _V_strncpy(sz, name, 128);
  v1 = _V_strnicmp_fast(sz, "curve_", 6);
  v2 = 0;
  if ( v1 == 0 )
  {
    v4 = s_InterpolatorNameMap;
    v5 = V_stristr_fast(&sz[6], "_to_curve_");
    v6 = *v5;
    *v5 = 0;
    v7 = v5;
    for ( i = s_InterpolatorNameMap[0].name; v4->name != 0; i = v4->name )
    {
      if ( V_stricmp_fast(&sz[6], i) == 0 )
        break;
      ++v4;
    }
    token = v4->token;
    *v7 = v6;
    v10 = v7 + 10;
    v11 = s_InterpolatorNameMap[0].name;
    for ( j = s_InterpolatorNameMap; j->name != 0; v11 = j->name )
    {
      if ( v10 != 0 && V_stricmp_fast(v10, v11) == 0 )
        break;
      ++j;
    }
    return (token << 8) | j->token;
  }
  return v2;
}


// Interpolator_NameForCurveType  (line 46, @0x0000000002f48420, libserver.so)  // inlines: CUtlString, GetNameByToken, Interpolator_NameForInterpolator
// calls: CUtlString::Format, CUtlString::FreeMemoryBlock, _Unwind_Resume
// callers: CChoreoScene::FileSaveFlexAnimationTrack, CChoreoScene::FileSaveFlexAnimations, CCurveData::SaveSamples, CCurveData::FileSave
// strings: "curve_%s_to_curve_%s", "%s <-> %s"
// globals: s_InterpolatorNameMap, tokenset_t<InterpolatorType_t>::GetNameByToken(InterpolatorType_t)::unknown, s_InterpolatorPrintNameMap
CUtlString __fastcall Interpolator_NameForCurveType(CUtlString *a1, __int16 type, bool printname)
{
  char v3; // al
  char v5; // di
  char *v6; // rdx
  tokenset_t<InterpolatorType_t> *v7; // rsi
  char *v8; // rcx
  tokenset_t<InterpolatorType_t> *v9; // rsi
  char *name; // rdx
  tokenset_t<InterpolatorType_t> *v12; // rsi
  char *v13; // rcx
  tokenset_t<InterpolatorType_t> *v14; // rsi

  v3 = HIBYTE(type);
  a1->m_pString = 0;
  v5 = type;
  if ( printname )
  {
    name = s_InterpolatorPrintNameMap[0].name;
    if ( s_InterpolatorPrintNameMap[0].name != 0 )
    {
      if ( type == s_InterpolatorPrintNameMap[0].token )
      {
        v13 = s_InterpolatorPrintNameMap[0].name;
      }
      else
      {
        v12 = s_InterpolatorPrintNameMap;
        while ( 1 )
        {
          ++v12;
          v13 = v12->name;
          if ( v12->name == 0 )
            break;
          if ( v5 == v12->token )
            goto LABEL_20;
        }
        v13 = tokenset_t<InterpolatorType_t>::GetNameByToken(InterpolatorType_t)const::unknown;
      }
LABEL_20:
      if ( v3 != s_InterpolatorPrintNameMap[0].token )
      {
        v14 = s_InterpolatorPrintNameMap;
        while ( 1 )
        {
          ++v14;
          name = v14->name;
          if ( v14->name == 0 )
            break;
          if ( v3 == v14->token )
            goto LABEL_25;
        }
        name = tokenset_t<InterpolatorType_t>::GetNameByToken(InterpolatorType_t)const::unknown;
      }
    }
    else
    {
      v13 = tokenset_t<InterpolatorType_t>::GetNameByToken(InterpolatorType_t)const::unknown;
      name = tokenset_t<InterpolatorType_t>::GetNameByToken(InterpolatorType_t)const::unknown;
    }
LABEL_25:
    CUtlString::Format(a1, "%s <-> %s", name, v13);
    return a1;
  }
  else
  {
    v6 = s_InterpolatorNameMap[0].name;
    if ( s_InterpolatorNameMap[0].name != 0 )
    {
      if ( type == s_InterpolatorNameMap[0].token )
      {
        v8 = s_InterpolatorNameMap[0].name;
      }
      else
      {
        v7 = s_InterpolatorNameMap;
        while ( 1 )
        {
          ++v7;
          v8 = v7->name;
          if ( v7->name == 0 )
            break;
          if ( v5 == v7->token )
            goto LABEL_8;
        }
        v8 = tokenset_t<InterpolatorType_t>::GetNameByToken(InterpolatorType_t)const::unknown;
      }
LABEL_8:
      if ( v3 != s_InterpolatorNameMap[0].token )
      {
        v9 = s_InterpolatorNameMap;
        while ( 1 )
        {
          ++v9;
          v6 = v9->name;
          if ( v9->name == 0 )
            break;
          if ( v3 == v9->token )
            goto LABEL_13;
        }
        v6 = tokenset_t<InterpolatorType_t>::GetNameByToken(InterpolatorType_t)const::unknown;
      }
    }
    else
    {
      v8 = tokenset_t<InterpolatorType_t>::GetNameByToken(InterpolatorType_t)const::unknown;
      v6 = tokenset_t<InterpolatorType_t>::GetNameByToken(InterpolatorType_t)const::unknown;
    }
LABEL_13:
    CUtlString::Format(a1, "curve_%s_to_curve_%s", v6, v8);
    return a1;
  }
}


// Interpolator_CurveInterpolatorsForType  (line 69, @0x0000000002f485b0, libserver.so)
// callers: CCurveData::GetIntensity, CCurveData::SetCurveTypeForSample
void __fastcall Interpolator_CurveInterpolatorsForType(int type, int *const inbound, int *const outbound)
{
  *inbound = BYTE1(type);
  *outbound = type;
}


// Interpolator_GetKochanekBartelsParams  (line 75, @0x0000000002f485d0, libserver.so)
void __fastcall Interpolator_GetKochanekBartelsParams(
        int interpolationType,
        float *const tension,
        float *const bias,
        float *const continuity)
{
  switch ( interpolationType )
  {
    case 8:
      *tension = 0.76999998;
      *bias = -1.0;
      *continuity = 0.76999998;
      break;
    case 9:
      *tension = 0.76999998;
      *bias = 1.0;
      *continuity = 0.76999998;
      break;
    case 7:
      *tension = 0.76999998;
      *bias = 0.0;
      *continuity = 0.76999998;
      break;
    default:
      *tension = 0.0;
      *bias = 0.0;
      *continuity = 0.0;
      break;
  }
}


// Interpolator_CurveInterpolate  (line 103, @0x0000000002f48650, libserver.so)  // inlines: ExponentialDecay, Init, SimpleSpline, VectorLerp
// calls: Warning, Catmull_Rom_Spline_NormalizeX, sin, BSpline, Catmull_Rom_Spline_Normalize, Catmull_Rom_Spline_Tangent, Kochanek_Bartels_Spline_NormalizeX, Cubic_Spline_NormalizeX, Catmull_Rom_Spline, V_logf, V_expf
// callers: CCurveData::GetIntensity
// strings: "Unknown interpolation type %d\n"
// globals: jpt_2F48695, CSWTCH.1614
void __fastcall Interpolator_CurveInterpolate(
        __int64 interpolationType,
        const Vector *const vPre,
        const Vector *const vStart,
        const Vector *const vEnd,
        const Vector *const vNext,
        float f,
        Vector *const vOut)
{
  const Vector *v9; // rcx
  float v11; // xmm1_4
  float v12; // xmm1_4
  double v13; // xmm0_8
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  Vector *vOutb; // [rsp+8h] [rbp-38h]
  Vector *vOuta; // [rsp+8h] [rbp-38h]
  float dta; // [rsp+14h] [rbp-2Ch]
  float dt; // [rsp+14h] [rbp-2Ch]
  Vector *vNexta; // [rsp+18h] [rbp-28h]
  Vector *vNextb; // [rsp+18h] [rbp-28h]
  float vNextc; // [rsp+18h] [rbp-28h]

  v9 = vNext;
  vOut->x = 0.0;
  vOut->y = 0.0;
  vOut->z = 0.0;
  switch ( interpolationType )
  {
    case 0:
    case 1:
      goto LABEL_2;
    case 2:
      vNexta = vOut;
      f = sin(f * 3.141592653589793 * 0.5);
      vOut = vNexta;
      v12 = ((vEnd->x - vStart->x) * f) + vStart->x;
      goto LABEL_6;
    case 3:
      vNextb = vOut;
      v13 = sin(f * 3.141592653589793 * 0.5 + 1.570796326794897);
      vOut = vNextb;
      v14 = 1.0 - v13;
      v15 = ((vEnd->x - vStart->x) * v14) + vStart->x;
      goto LABEL_8;
    case 4:
      v14 = (3.0 * (f * f)) - (((f * f) + (f * f)) * f);
      v15 = ((vEnd->x - vStart->x) * v14) + vStart->x;
LABEL_8:
      vOut->x = v15;
      vOut->y = ((vEnd->y - vStart->y) * v14) + vStart->y;
      vOut->z = ((vEnd->z - vStart->z) * v14) + vStart->z;
      return;
    case 5:
      BSpline(vPre, vStart, vEnd, vNext, f, vOut);
      return;
    case 6:
      v12 = ((vEnd->x - vStart->x) * f) + vStart->x;
LABEL_6:
      vOut->x = v12;
      vOut->y = ((vEnd->y - vStart->y) * f) + vStart->y;
      vOut->z = ((vEnd->z - vStart->z) * f) + vStart->z;
      return;
    case 7:
    case 8:
    case 9:
      Kochanek_Bartels_Spline_NormalizeX(
        0.76999998,
        CSWTCH_1614[(interpolationType - 7)],
        0.76999998,
        vPre,
        vStart,
        vEnd,
        vNext,
        f,
        vOut);
      return;
    case 10:
      Cubic_Spline_NormalizeX(vPre, vStart, vEnd, vNext, f, vOut);
      return;
    case 11:
      Catmull_Rom_Spline(vPre, vStart, vEnd, vNext, f, vOut);
      return;
    case 12:
      Catmull_Rom_Spline_Normalize(vPre, vStart, vEnd, vNext, f, vOut);
      return;
    case 13:
      Catmull_Rom_Spline_Tangent(vPre, vStart, vEnd, vNext, f, vOut);
      return;
    case 14:
      v11 = vEnd->x - vStart->x;
      if ( v11 <= 0.0 )
        goto LABEL_4;
      vOuta = vOut;
      dt = vEnd->x - vStart->x;
      vNextc = f * v11;
      v16 = V_logf(interpolationType, vPre, interpolationType, vNext, 0.001);
      vOuta->y = ((vEnd->y - vStart->y) * (1.0 - V_expf((v16 / dt) * vNextc))) + vStart->y;
      break;
    case 15:
LABEL_4:
      vOut->y = vStart->y;
      break;
    default:
      vOutb = vOut;
      dta = f;
      Warning("Unknown interpolation type %d\n", interpolationType);
      vOut = vOutb;
      v9 = vNext;
      f = dta;
LABEL_2:
      Catmull_Rom_Spline_NormalizeX(vPre, vStart, vEnd, v9, f, vOut);
      break;
  }
}


// Interpolator_CurveInterpolate_NonNormalized  (line 239, @0x0000000002f48a00, libserver.so)  // inlines: ExponentialDecay, Init, SimpleSpline, VectorLerp
// calls: Warning, Catmull_Rom_Spline, sin, Kochanek_Bartels_Spline, Cubic_Spline, BSpline, V_logf, V_expf
// strings: "Unknown interpolation type %d\n"
// globals: jpt_2F48A45, CSWTCH.1616
void __fastcall Interpolator_CurveInterpolate_NonNormalized(
        __int64 interpolationType,
        const Vector *const vPre,
        const Vector *const vStart,
        const Vector *const vEnd,
        const Vector *const vNext,
        float f,
        Vector *const vOut)
{
  const Vector *v9; // rcx
  float v11; // xmm1_4
  float v12; // xmm1_4
  double v13; // xmm0_8
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  Vector *vOutb; // [rsp+8h] [rbp-38h]
  Vector *vOuta; // [rsp+8h] [rbp-38h]
  float dta; // [rsp+14h] [rbp-2Ch]
  float dt; // [rsp+14h] [rbp-2Ch]
  Vector *vNexta; // [rsp+18h] [rbp-28h]
  Vector *vNextb; // [rsp+18h] [rbp-28h]
  float vNextc; // [rsp+18h] [rbp-28h]

  v9 = vNext;
  vOut->x = 0.0;
  vOut->y = 0.0;
  vOut->z = 0.0;
  switch ( interpolationType )
  {
    case 0:
    case 1:
    case 11:
    case 12:
    case 13:
      goto LABEL_2;
    case 2:
      vNexta = vOut;
      f = sin(f * 3.141592653589793 * 0.5);
      vOut = vNexta;
      v12 = ((vEnd->x - vStart->x) * f) + vStart->x;
      goto LABEL_6;
    case 3:
      vNextb = vOut;
      v13 = sin(f * 3.141592653589793 * 0.5 + 1.570796326794897);
      vOut = vNextb;
      v14 = 1.0 - v13;
      v15 = ((vEnd->x - vStart->x) * v14) + vStart->x;
      goto LABEL_10;
    case 4:
      v14 = (3.0 * (f * f)) - (((f * f) + (f * f)) * f);
      v15 = ((vEnd->x - vStart->x) * v14) + vStart->x;
LABEL_10:
      vOut->x = v15;
      vOut->y = ((vEnd->y - vStart->y) * v14) + vStart->y;
      vOut->z = ((vEnd->z - vStart->z) * v14) + vStart->z;
      return;
    case 5:
      BSpline(vPre, vStart, vEnd, vNext, f, vOut);
      return;
    case 6:
      v12 = ((vEnd->x - vStart->x) * f) + vStart->x;
LABEL_6:
      vOut->x = v12;
      vOut->y = ((vEnd->y - vStart->y) * f) + vStart->y;
      vOut->z = ((vEnd->z - vStart->z) * f) + vStart->z;
      return;
    case 7:
    case 8:
    case 9:
      Kochanek_Bartels_Spline(
        0.76999998,
        CSWTCH_1616[(interpolationType - 7)],
        0.76999998,
        vPre,
        vStart,
        vEnd,
        vNext,
        f,
        vOut);
      return;
    case 10:
      Cubic_Spline(vPre, vStart, vEnd, vNext, f, vOut);
      return;
    case 14:
      v11 = vEnd->x - vStart->x;
      if ( v11 <= 0.0 )
        goto LABEL_4;
      vOuta = vOut;
      dt = vEnd->x - vStart->x;
      vNextc = f * v11;
      v16 = V_logf(interpolationType, vPre, interpolationType, vNext, 0.001);
      vOuta->y = ((vEnd->y - vStart->y) * (1.0 - V_expf((v16 / dt) * vNextc))) + vStart->y;
      break;
    case 15:
LABEL_4:
      vOut->y = vStart->y;
      break;
    default:
      vOutb = vOut;
      dta = f;
      Warning("Unknown interpolation type %d\n", interpolationType);
      vOut = vOutb;
      v9 = vNext;
      f = dta;
LABEL_2:
      Catmull_Rom_Spline(vPre, vStart, vEnd, v9, f, vOut);
      break;
  }
}


// Interpolator_CurveInterpolate_NonNormalized  (line 352, @0x0000000002f48d50, libserver.so)  // inlines: Init, SimpleSpline, operator=
// calls: Warning, QuaternionSlerp, sin
// strings: "Unknown interpolation type %d\n"
// globals: jpt_2F48D90
void __fastcall Interpolator_CurveInterpolate_NonNormalized(
        int interpolationType,
        const Quaternion *const vPre,
        const Quaternion *const vStart,
        const Quaternion *const vEnd,
        const Quaternion *const vNext,
        float f,
        Quaternion *const vOut)
{
  Quaternion *v8; // rdx
  double v9; // xmm0_8
  double v10; // xmm0_8
  __m128d v11; // xmm1
  Quaternion *vOuta; // [rsp+8h] [rbp-28h]
  float fa; // [rsp+10h] [rbp-20h]
  Quaternion *fb; // [rsp+10h] [rbp-20h]
  Quaternion *fc; // [rsp+10h] [rbp-20h]
  const Quaternion *vEnda; // [rsp+18h] [rbp-18h]
  const Quaternion *vEndb; // [rsp+18h] [rbp-18h]
  const Quaternion *vEndc; // [rsp+18h] [rbp-18h]

  vOut->x = 0.0;
  vOut->y = 0.0;
  vOut->z = 0.0;
  vOut->w = 0.0;
  switch ( interpolationType )
  {
    case 0:
    case 1:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      goto LABEL_3;
    case 2:
      fb = vOut;
      vEndb = vEnd;
      v9 = sin(f * 3.141592653589793 * 0.5);
      vEnd = vEndb;
      f = v9;
      v8 = fb;
      goto LABEL_4;
    case 3:
      fc = vOut;
      vEndc = vEnd;
      v10 = sin(f * 3.141592653589793 * 0.5 + 1.570796326794897);
      v11 = 0x3FF0000000000000uLL;
      v11.m128d_f64[0] = 1.0 - v10;
      vEnd = vEndc;
      v8 = fc;
      f = _mm_movedup_pd(v11).m128d_f64[0];
      goto LABEL_4;
    case 4:
      v8 = vOut;
      f = (3.0 * (f * f)) - (((f * f) + (f * f)) * f);
      goto LABEL_4;
    case 14:
      return;
    case 15:
      *vOut = *vStart;
      return;
    default:
      vOuta = vOut;
      fa = f;
      vEnda = vEnd;
      Warning("Unknown interpolation type %d\n", interpolationType);
      vOut = vOuta;
      vEnd = vEnda;
      f = fa;
LABEL_3:
      v8 = vOut;
LABEL_4:
      QuaternionSlerp(vStart, vEnd, f, v8);
      return;
  }
}


