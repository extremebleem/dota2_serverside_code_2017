
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ViewSmoothingData_t::AddDatadescMetadataKeys  (line 36, @0x0000000002408160, libserver.so)
void __fastcall ViewSmoothingData_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// ViewSmoothingData_t::GetBaseMap  (line 36, @0x0000000002408170, libserver.so)
datamap_t *__cdecl ViewSmoothingData_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<ViewSmoothingData_t>  (line 36, @0x0000000002408180, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_13.cpp
// strings: "ViewSmoothingData_t"
// globals: `guard variable for'DataMapInit<ViewSmoothingData_t>(ViewSmoothingData_t *)::nameHolder, ViewSmoothingData_t::m_DataMap, DataMapInit<ViewSmoothingData_t>(ViewSmoothingData_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<ViewSmoothingData_t>(ViewSmoothingData_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<ViewSmoothingData_t>(ViewSmoothingData_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<ViewSmoothingData_t>(ViewSmoothingData_t *)::nameHolder) != 0 )
  {
    DataMapInit<ViewSmoothingData_t>(ViewSmoothingData_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<ViewSmoothingData_t>(ViewSmoothingData_t *)::nameHolder.m_pszBase = "ViewSmoothingData_t";
    DataMapInit<ViewSmoothingData_t>(ViewSmoothingData_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<ViewSmoothingData_t>(ViewSmoothingData_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<ViewSmoothingData_t>(ViewSmoothingData_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<ViewSmoothingData_t>(ViewSmoothingData_t *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<ViewSmoothingData_t>(ViewSmoothingData_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<ViewSmoothingData_t>(ViewSmoothingData_t *)::nameHolder,
      &_dso_handle);
  }
  ViewSmoothingData_t::m_DataMap.baseMap = 0;
  ViewSmoothingData_t::m_DataMap.dataDesc = &DataMapInit<ViewSmoothingData_t>(ViewSmoothingData_t *)::dataDesc[1];
  ViewSmoothingData_t::m_DataMap.dataNumFields = 18;
  return &ViewSmoothingData_t::m_DataMap;
}


// RemapAngleRange  (line 64, @0x0000000002408240, libserver.so)  // inlines: SimpleSpline
// calls: AngleNormalize
// callers: RemapViewAngles
float __fastcall RemapAngleRange(
        float a1,
        float startInterval,
        float endInterval,
        float value,
        RemapAngleRange_CurvePart_t *peCurvePart)
{
  float result; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm2_4
  float v9; // xmm4_4

  result = AngleNormalize(startInterval);
  v7 = fabs(result);
  if ( a1 > v7 )
  {
    v8 = 0.0;
    if ( peCurvePart != 0 )
    {
      *peCurvePart = RemapAngleRange_CurvePart_t::RemapAngleRange_CurvePart_Zero;
      return 0.0;
    }
    return v8;
  }
  if ( startInterval >= v7 )
  {
    v9 = (v7 - a1) / (startInterval - a1);
    v8 = ((3.0 * (v9 * v9)) - (((v9 * v9) + (v9 * v9)) * v9)) * startInterval;
    if ( result < 0.0 )
      v8 = -v8;
    if ( peCurvePart == 0 )
      return v8;
    *peCurvePart = RemapAngleRange_CurvePart_t::RemapAngleRange_CurvePart_Spline;
    return v8;
  }
  else
  {
    if ( peCurvePart == 0 )
      return result;
    *peCurvePart = RemapAngleRange_CurvePart_t::RemapAngleRange_CurvePart_Linear;
  }
  return result;
}


// ApplyViewLocking  (line 113, @0x00000000023fc190, libserver.so)  // inlines: Lerp<float>, RemapValClamped, clamp<float, float>, curtime
// callers: ApplyViewLocking, RemapViewAngles
float __fastcall ApplyViewLocking(
        double a1,
        float flAngleRaw,
        double flAngleClamped,
        ViewLockData_t *const lockData,
        RemapAngleRange_CurvePart_t eCurvePart)
{
  float flUnlockTime; // xmm3_4
  float v7; // xmm4_4
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc v9; // rax
  float v10; // xmm5_4
  float v11; // xmm5_4
  float m_flCurrentTime; // xmm2_4
  CGlobalVars *v13; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float flUnlockBlendInterval; // xmm3_4
  float v16; // xmm2_4
  CGlobalVars *v17; // r12
  bool bLocked; // al
  FnGlobalVarsWarningFunc v19; // rdx
  float v20; // xmm1_4
  CGlobalVars *v21; // r12
  FnGlobalVarsWarningFunc v22; // rax
  float v23; // xmm3_4
  float v25; // [rsp+4h] [rbp-2Ch]
  int flAngleOut; // [rsp+8h] [rbp-28h]
  float flAngleOuta; // [rsp+8h] [rbp-28h]
  float flAngleOutb; // [rsp+8h] [rbp-28h]
  float flAngleRawa; // [rsp+Ch] [rbp-24h]
  int flAngleRawb; // [rsp+Ch] [rbp-24h]
  int flAngleRawc; // [rsp+Ch] [rbp-24h]
  int flAngleRawd; // [rsp+Ch] [rbp-24h]

  if ( eCurvePart != RemapAngleRange_CurvePart_t::RemapAngleRange_CurvePart_Linear )
  {
    if ( !lockData->bLocked )
      goto LABEL_3;
    if ( eCurvePart != RemapAngleRange_CurvePart_t::RemapAngleRange_CurvePart_Spline )
    {
      m_flCurrentTime = 0.0;
      v13 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
          {
            flAngleOuta = flAngleRaw;
            flAngleRawb = LODWORD(a1);
            (m_pfnWarningFunc)(1, a1, flAngleRaw, 0.0);
            flAngleRaw = flAngleOuta;
            LODWORD(a1) = flAngleRawb;
          }
        }
        m_flCurrentTime = v13->m_flCurrentTime;
      }
      if ( m_flCurrentTime <= lockData->flUnlockTime )
      {
        bLocked = lockData->bLocked;
      }
      else
      {
        flUnlockBlendInterval = lockData->flUnlockBlendInterval;
        v16 = 0.0;
        lockData->bLocked = 0;
        if ( flUnlockBlendInterval <= 0.0 )
        {
          lockData->flUnlockTime = 0.0;
          *&a1 = flAngleRaw;
          return *&a1;
        }
        v17 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          bLocked = gpGlobals->m_bEnableAssertions;
          if ( bLocked )
          {
            bLocked = 0;
          }
          else if ( !gpGlobals->m_bInSimulation )
          {
            v19 = gpGlobals->m_pfnWarningFunc;
            if ( v19 != 0 )
            {
              flAngleOutb = flAngleRaw;
              flAngleRawc = LODWORD(a1);
              v19(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
              bLocked = lockData->bLocked;
              LODWORD(a1) = flAngleRawc;
              flAngleRaw = flAngleOutb;
            }
          }
          v16 = v17->m_flCurrentTime;
        }
        else
        {
          bLocked = 0;
        }
        lockData->flUnlockTime = v16;
      }
      if ( bLocked )
        return *&a1;
LABEL_3:
      flUnlockTime = lockData->flUnlockTime;
      if ( flUnlockTime == 0.0 )
      {
        *&a1 = flAngleRaw;
        return *&a1;
      }
      v7 = lockData->flUnlockBlendInterval;
      v8 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v9 = gpGlobals->m_pfnWarningFunc;
          if ( v9 != 0 )
          {
            v25 = flAngleRaw;
            flAngleOut = LODWORD(a1);
            flAngleRawa = lockData->flUnlockBlendInterval;
            v9(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            flUnlockTime = lockData->flUnlockTime;
            flAngleRaw = v25;
            LODWORD(a1) = flAngleOut;
            v7 = flAngleRawa;
          }
        }
        v10 = v8->m_flCurrentTime;
      }
      else
      {
        v10 = 0.0;
      }
      v11 = v10 - flUnlockTime;
      if ( v7 == 0.0 )
      {
        if ( (v11 - 0.0) >= 0.0 )
          goto LABEL_12;
      }
      else
      {
        v23 = v11 / v7;
        if ( (v11 / v7) >= 0.0 )
        {
          if ( v23 <= 1.0 )
          {
            *&a1 = *&a1 + ((flAngleRaw - *&a1) * (v23 + 0.0));
            if ( (v23 + 0.0) < 1.0 )
              return *&a1;
            goto LABEL_13;
          }
LABEL_12:
          *&a1 = *&a1 + (flAngleRaw - *&a1);
LABEL_13:
          lockData->flUnlockTime = 0.0;
          return *&a1;
        }
      }
      *&a1 = *&a1 + ((flAngleRaw - *&a1) * 0.0);
      return *&a1;
    }
  }
  lockData->bLocked = 1;
  v20 = 0.0;
  v21 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v22 = gpGlobals->m_pfnWarningFunc;
      if ( v22 != 0 )
      {
        flAngleRawd = LODWORD(a1);
        (v22)(1, a1, 0.0, flAngleClamped);
        LODWORD(a1) = flAngleRawd;
      }
    }
    v20 = v21->m_flCurrentTime;
  }
  lockData->flUnlockTime = v20 + lockData->flLockInterval;
  return *&a1;
}


// ApplyViewLocking  (line 113, @0x0000000002408330, libserver.so)
// calls: ApplyViewLocking
__m128 __fastcall ApplyViewLocking(
        double a1,
        __m128 flAngleRaw,
        float flAngleClamped,
        ViewLockData_t *const lockData,
        RemapAngleRange_CurvePart_t eCurvePart)
{
  __m128 result; // xmm0

  if ( lockData->flLockInterval == 0.0 )
    return flAngleRaw;
  else
    result.m128_f32[0] = ApplyViewLocking(a1, flAngleRaw.m128_f32[0], 0.0, lockData, eCurvePart);
  return result;
}


// RemapViewAngles  (line 182, @0x0000000002408350, libserver.so)  // inlines: ApplyViewLocking, Lerp<float>, RemapValClamped, clamp<float, float>
// calls: RemapAngleRange, AngleNormalize, ApplyViewLocking
// callers: SharedVehicleViewSmoothing
void __fastcall RemapViewAngles(ViewSmoothingData_t *pData, QAngle *const vehicleEyeAngles)
{
  float v2; // xmm3_4
  __m128i v5; // xmm0
  float v6; // r14d
  float v7; // xmm1_4
  vec_t v8; // xmm0_4
  float v9; // xmm3_4
  float x; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  float v13; // xmm6_4
  float v14; // xmm0_4
  double v15; // xmm2_8
  float v16; // xmm3_4
  __m128i v17; // xmm0
  float flBlendRoll; // [rsp+8h] [rbp-38h]
  float vecEyeAnglesRemapped; // [rsp+Ch] [rbp-34h]
  float vecEyeAnglesRemappeda; // [rsp+Ch] [rbp-34h]
  RemapAngleRange_CurvePart_t ePitchCurvePart; // [rsp+18h] [rbp-28h] BYREF
  RemapAngleRange_CurvePart_t eRollCurvePart[9]; // [rsp+1Ch] [rbp-24h] BYREF

  *v5.m128i_i32 = RemapAngleRange(
                    pData->flPitchCurveZero,
                    pData->flPitchCurveLinear,
                    vehicleEyeAngles->x,
                    v2,
                    &ePitchCurvePart);
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  v8 = AngleNormalize(v7);
  x = vehicleEyeAngles->x;
  v11 = v8;
  vehicleEyeAngles->z = v8;
  if ( fabs(x) <= 60.0 )
  {
    v13 = 1.0;
  }
  else
  {
    v12 = (fabs(v6) - 60.0) / 20.0;
    if ( v12 < 0.0 )
    {
      v13 = 1.0;
    }
    else
    {
      v13 = 0.0;
      if ( v12 <= 1.0 )
        v13 = 1.0 - v12;
    }
  }
  flBlendRoll = v13;
  vecEyeAnglesRemapped = v11;
  v14 = RemapAngleRange(pData->flRollCurveZero, pData->flRollCurveLinear, v11, v9, eRollCurvePart);
  v16 = ((v14 - vecEyeAnglesRemapped) * flBlendRoll) + vecEyeAnglesRemapped;
  if ( pData->pitchLockData.flLockInterval != 0.0 )
  {
    vecEyeAnglesRemappeda = ((v14 - vecEyeAnglesRemapped) * flBlendRoll) + vecEyeAnglesRemapped;
    *v17.m128i_i32 = ApplyViewLocking(
                       COERCE_DOUBLE(LODWORD(vehicleEyeAngles->x)),
                       v6,
                       v15,
                       &pData->pitchLockData,
                       ePitchCurvePart);
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
    v16 = vecEyeAnglesRemappeda;
  }
  vehicleEyeAngles->x = v6;
  if ( pData->rollLockData.flLockInterval == 0.0 )
    vehicleEyeAngles->z = v16;
  else
    vehicleEyeAngles->z = ApplyViewLocking(
                            COERCE_DOUBLE(LODWORD(vehicleEyeAngles->z)),
                            v16,
                            v15,
                            &pData->rollLockData,
                            eRollCurvePart[0]);
}


// SharedVehicleViewSmoothing  (line 213, @0x00000000024084e0, libserver.so)  // inlines: GetInt, GetSequence, Lerp<Vector>, Lerp<float>, MatrixGetColumn, SimpleSpline, VectorAdd, VectorMultiply, VectorSubtract, curtime, operator*, operator+, operator-, operator-=, operator=
// calls: CBaseAnimating::LookupAttachment, CBaseAnimating::GetAttachment, AngleMatrix, CBaseAnimating::GetAttachmentLocal, MatrixInvert, ConcatTransforms, MatrixAngles, CBasePlayer::GetDefaultFOV, AngleDiff, RemapViewAngles, CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::SequenceDuration
// callers: CFourWheelServerVehicle::GetVehicleViewPosition
// strings: "vehicle_driver_eyes"
void __fastcall SharedVehicleViewSmoothing(
        CBasePlayer *pPlayer,
        Vector *pAbsOrigin,
        QAngle *pAbsAngles,
        bool bEnterAnimOn,
        bool bExitAnimOn,
        const Vector *const vecEyeExitEndpoint,
        ViewSmoothingData_t *pData,
        float *pFOV)
{
  CGlobalVars *v12; // rax
  CGlobalVars *v13; // rdx
  CGlobalVars *v14; // r14
  void (__fastcall *v15)(__int64); // rcx
  float v16; // xmm1_4
  float flEnterExitStartTime; // xmm2_4
  float flEnterExitDuration; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm4_4
  void (__fastcall *v22)(__int64); // rax
  float v23; // xmm4_4
  bool v24; // zf
  float v25; // xmm1_4
  float v26; // xmm2_4
  float DefaultFOV; // xmm7_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30; // xmm1_4
  vec_t v31; // xmm6_4
  vec_t v32; // xmm0_4
  vec_t v33; // xmm1_4
  vec_t v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm2_4
  vec_t v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  vec_t v40; // xmm0_4
  float v41; // xmm6_4
  __int64 v42; // rax
  float v43; // xmm5_4
  QAngle *p_vecAngleDiffMin; // rdx
  float v45; // xmm4_4
  float v46; // xmm0_4
  float v47; // xmm0_4
  vec_t v48; // xmm1_4
  float v49; // xmm5_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  vec_t v52; // xmm2_4
  float v53; // xmm1_4
  vec_t v54; // xmm4_4
  float flFOV; // xmm0_4
  vec_t v56; // xmm1_4
  vec_t v57; // xmm0_4
  float v58; // xmm0_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v60; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBaseAnimating *pVehicle; // rdi
  const CBaseAnimatingController *BaseAnimatingController; // rax
  HSequence v64; // eax
  float v65; // xmm0_4
  float x; // xmm1_4
  float v67; // xmm2_4
  vec_t v68; // xmm0_4
  float y; // xmm1_4
  float v70; // xmm2_4
  vec_t v71; // xmm0_4
  float z; // xmm1_4
  float v73; // xmm2_4
  vec_t v74; // xmm0_4
  vec_t v75; // xmm1_4
  vec_t v76; // xmm1_4
  float v78; // [rsp+Ch] [rbp-1A4h]
  float in2; // [rsp+10h] [rbp-1A0h]
  AttachmentHandle_t eyeAttachmentIndex; // [rsp+18h] [rbp-198h]
  float eyeAttachmentIndexa; // [rsp+18h] [rbp-198h]
  float flFracFOV; // [rsp+20h] [rbp-190h]
  float flDefaultFOV; // [rsp+28h] [rbp-188h]
  CGlobalVars *flSplineFraca; // [rsp+30h] [rbp-180h]
  float flSplineFracb; // [rsp+30h] [rbp-180h]
  float flSplineFrac; // [rsp+30h] [rbp-180h]
  bool bRunningAnim; // [rsp+3Bh] [rbp-175h]
  vec_t in; // [rsp+40h] [rbp-170h]
  vec_t angles; // [rsp+48h] [rbp-168h]
  Vector vehicleEyeOrigin; // [rsp+50h] [rbp-160h] BYREF
  QAngle vehicleEyeAngles; // [rsp+60h] [rbp-150h] BYREF
  QAngle vecAngleDiffBlend; // [rsp+70h] [rbp-140h]
  QAngle vecAngleDiffCur; // [rsp+80h] [rbp-130h]
  matrix3x4_t vehicleEyePosToWorld; // [rsp+90h] [rbp-120h] BYREF
  matrix3x4_t cameraToWorld; // [rsp+C0h] [rbp-F0h] BYREF
  matrix3x4_t worldToEyePos; // [rsp+F0h] [rbp-C0h] BYREF
  Vector localEyeOrigin; // [rsp+120h] [rbp-90h] BYREF
  QAngle localEyeAngles; // [rsp+150h] [rbp-60h] BYREF
  vec_t v100; // [rsp+15Ch] [rbp-54h]
  vec_t v101; // [rsp+16Ch] [rbp-44h]
  vec_t v102; // [rsp+17Ch] [rbp-34h]

  eyeAttachmentIndex = CBaseAnimating::LookupAttachment(pData->pVehicle, "vehicle_driver_eyes");
  CBaseAnimating::GetAttachment(pData->pVehicle, eyeAttachmentIndex, &vehicleEyeOrigin, &vehicleEyeAngles);
  AngleMatrix(&vehicleEyeAngles, &vehicleEyePosToWorld);
  *pAbsAngles = *(*(pPlayer->_vptr_IHandleEntity + 165))(pPlayer);
  if ( r_VehicleViewDampen.m_pParent->m_Value.m_nValue != 0 && pData->bDampenEyePosition )
    (*(pData->pVehicle->_vptr_IHandleEntity + 254))(pData->pVehicle, &vehicleEyeOrigin, &vehicleEyeAngles);
  bRunningAnim = bExitAnimOn || bEnterAnimOn;
  if ( bExitAnimOn || bEnterAnimOn )
  {
    if ( !pData->bWasRunningAnim )
    {
      pData->bRunningEnterExit = 1;
      m_flCurrentTime = 0.0;
      v60 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            (m_pfnWarningFunc)(1, 0.0);
        }
        m_flCurrentTime = v60->m_flCurrentTime;
      }
      pVehicle = pData->pVehicle;
      pData->flEnterExitStartTime = m_flCurrentTime;
      BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(pVehicle);
      v64.m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
      v65 = CBaseAnimating::SequenceDuration(pData->pVehicle, v64);
      x = pData->vecAnglesSaved.x;
      pData->flEnterExitDuration = v65;
      v68 = AngleDiff(x, v67);
      y = pData->vecAnglesSaved.y;
      pData->vecAngleDiffSaved.x = v68;
      v71 = AngleDiff(y, v70);
      z = pData->vecAnglesSaved.z;
      pData->vecAngleDiffSaved.y = v71;
      v74 = AngleDiff(z, v73);
      v75 = pData->vecAngleDiffSaved.x;
      pData->vecAngleDiffSaved.z = v74;
      pData->vecAngleDiffMin.x = v75;
      v76 = pData->vecAngleDiffSaved.y;
      pData->vecAngleDiffMin.z = v74;
      pData->vecAngleDiffMin.y = v76;
    }
    pData->bWasRunningAnim = 1;
  }
  else
  {
    v24 = !pData->bRunningEnterExit;
    pData->bWasRunningAnim = 0;
    if ( v24 )
    {
      flFracFOV = 0.0;
      v20 = 0.0;
      goto LABEL_28;
    }
  }
  pAbsAngles->x = vehicleEyeAngles.x;
  pAbsAngles->y = vehicleEyeAngles.y;
  v12 = gpGlobals;
  pAbsAngles->z = vehicleEyeAngles.z;
  v13 = v12;
  if ( v12 != 0 )
  {
    v14 = v12;
    if ( !v12->m_bEnableAssertions && !v12->m_bInSimulation )
    {
      v15 = v12->m_pfnWarningFunc;
      v14 = v12;
      if ( v15 != 0 )
      {
        flSplineFraca = v12;
        v15(1);
        v13 = flSplineFraca;
        v14 = gpGlobals;
        v12 = gpGlobals;
      }
    }
    v16 = v13->m_flCurrentTime;
  }
  else
  {
    v14 = 0;
    v16 = 0.0;
  }
  flEnterExitStartTime = pData->flEnterExitStartTime;
  flEnterExitDuration = pData->flEnterExitDuration;
  v19 = (v16 - flEnterExitStartTime) / flEnterExitDuration;
  if ( v19 <= 1.0 )
    v20 = fmaxf(0.0, v19);
  else
    v20 = 1.0;
  v21 = 0.0;
  if ( v12 != 0 )
  {
    if ( !v14->m_bEnableAssertions && !v14->m_bInSimulation )
    {
      v22 = v14->m_pfnWarningFunc;
      if ( v22 != 0 )
      {
        flSplineFracb = v20;
        v22(1);
        flEnterExitStartTime = pData->flEnterExitStartTime;
        flEnterExitDuration = pData->flEnterExitDuration;
        v20 = flSplineFracb;
      }
    }
    v21 = v14->m_flCurrentTime;
  }
  v23 = (v21 - flEnterExitStartTime) / (flEnterExitDuration * 0.85000002);
  if ( v23 <= 1.0 )
    flFracFOV = fmaxf(0.0, v23);
  else
    flFracFOV = 1.0;
  if ( v20 >= 1.0 )
  {
    pData->bRunningEnterExit = 0;
    if ( !bExitAnimOn )
    {
      in2 = v20;
      CBaseAnimating::GetAttachmentLocal(pData->pVehicle, eyeAttachmentIndex, &localEyeOrigin, &localEyeAngles);
      v20 = in2;
    }
  }
LABEL_28:
  v78 = v20;
  AngleMatrix(pAbsAngles, &cameraToWorld);
  MatrixInvert(&vehicleEyePosToWorld, &worldToEyePos);
  ConcatTransforms(&worldToEyePos, &cameraToWorld, &localEyeOrigin);
  v25 = v78;
  if ( pData->bClampEyeAngles )
  {
    RemapViewAngles(pData, &vehicleEyeAngles);
    v25 = v78;
  }
  eyeAttachmentIndexa = v25;
  AngleMatrix(&vehicleEyeAngles, &vehicleEyeOrigin, &vehicleEyePosToWorld);
  ConcatTransforms(&vehicleEyePosToWorld, &localEyeOrigin, &localEyeAngles);
  MatrixAngles(&localEyeAngles, pAbsAngles);
  pAbsOrigin->x = v100;
  pAbsOrigin->y = v101;
  pAbsOrigin->z = v102;
  DefaultFOV = CBasePlayer::GetDefaultFOV(pPlayer);
  if ( bRunningAnim || pData->bRunningEnterExit )
  {
    v29 = (3.0 * (eyeAttachmentIndexa * eyeAttachmentIndexa))
        - (((eyeAttachmentIndexa * eyeAttachmentIndexa) + (eyeAttachmentIndexa * eyeAttachmentIndexa))
         * eyeAttachmentIndexa);
    if ( v29 <= 1.0 )
    {
      v26 = 0.0;
      v30 = 1.0;
      if ( v29 < 0.0 )
        v29 = 0.0;
      else
        v30 = 1.0 - v29;
    }
    else
    {
      v29 = 1.0;
      v30 = 0.0;
    }
    flDefaultFOV = DefaultFOV;
    flSplineFrac = v29;
    v31 = pData->vecAngleDiffSaved.x * v30;
    v32 = pData->vecAngleDiffSaved.y * v30;
    v33 = v30 * pData->vecAngleDiffSaved.z;
    vecAngleDiffBlend.x = v31;
    vecAngleDiffBlend.y = v32;
    vecAngleDiffBlend.z = v33;
    in = v31;
    v34 = AngleDiff(pData->vecAnglesSaved.x, v26);
    v35 = pData->vecAnglesSaved.y;
    vecAngleDiffCur.x = v34;
    angles = v34;
    v37 = AngleDiff(v35, v36);
    v38 = pData->vecAnglesSaved.z;
    vecAngleDiffCur.y = v37;
    v40 = AngleDiff(v38, v39);
    v41 = in;
    v42 = 0;
    v43 = angles;
    vecAngleDiffCur.z = v40;
    p_vecAngleDiffMin = &pData->vecAngleDiffMin;
    while ( 1 )
    {
      v45 = fabs(v43);
      v46 = fabs(*(&p_vecAngleDiffMin->x + v42));
      if ( v46 > v45 )
      {
        *(&p_vecAngleDiffMin->x + v42) = v43;
        v46 = v45;
      }
      if ( v46 > fabs(v41) )
        *(&p_vecAngleDiffMin->x + v42) = v41;
      v42 += 4;
      if ( v42 == 12 )
        break;
      v43 = *(&vecAngleDiffCur.x + v42);
      v41 = *(&vecAngleDiffBlend.x + v42);
    }
    v47 = pAbsAngles->y;
    v48 = pAbsAngles->x - pData->vecAngleDiffMin.x;
    pAbsAngles->x = v48;
    pAbsAngles->y = v47 - pData->vecAngleDiffMin.y;
    pAbsAngles->z = pAbsAngles->z - pData->vecAngleDiffMin.z;
    pData->vecAnglesSaved.x = v48;
    pData->vecAnglesSaved.y = pAbsAngles->y;
    pData->vecAnglesSaved.z = pAbsAngles->z;
    v49 = pAbsOrigin->x;
    v50 = pAbsOrigin->y;
    v51 = pAbsOrigin->z;
    if ( bExitAnimOn )
    {
      v52 = ((vecEyeExitEndpoint->y - v50) * flSplineFrac) + v50;
      v53 = vecEyeExitEndpoint->z;
      v54 = ((vecEyeExitEndpoint->x - v49) * flSplineFrac) + v49;
      pAbsOrigin->y = v52;
      pAbsOrigin->x = v54;
      pAbsOrigin->z = ((v53 - v51) * flSplineFrac) + v51;
      if ( pFOV != 0 )
      {
        flFOV = pData->flFOV;
        if ( flFOV > flDefaultFOV )
          *pFOV = ((flDefaultFOV - flFOV) * flFracFOV) + flFOV;
      }
    }
    else
    {
      v56 = ((v50 - pData->vecOriginSaved.y) * flSplineFrac) + pData->vecOriginSaved.y;
      v57 = ((v51 - pData->vecOriginSaved.z) * flSplineFrac) + pData->vecOriginSaved.z;
      pAbsOrigin->x = ((v49 - pData->vecOriginSaved.x) * flSplineFrac) + pData->vecOriginSaved.x;
      pAbsOrigin->y = v56;
      pAbsOrigin->z = v57;
      if ( pFOV != 0 )
      {
        v58 = pData->flFOV;
        if ( v58 > flDefaultFOV )
          *pFOV = ((v58 - flDefaultFOV) * flFracFOV) + flDefaultFOV;
      }
    }
  }
  else if ( pFOV != 0 )
  {
    v28 = pData->flFOV;
    if ( v28 > DefaultFOV )
      *pFOV = v28;
  }
}


