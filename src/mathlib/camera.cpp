
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_camera.cpp  (line 0, @0x0000000001a6d090, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0, matrix3x4_t
// globals: UNSPECIFIED_LOGGING_COLOR, g_ViewAlignMatrix
void __cdecl GLOBAL__sub_I_camera_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  *&g_ViewAlignMatrix.m_flMatVal[0][0] = 0;
  *&g_ViewAlignMatrix.m_flMatVal[0][2] = 3212836864LL;
  *&g_ViewAlignMatrix.m_flMatVal[1][0] = 0xBF800000;
  *&g_ViewAlignMatrix.m_flMatVal[2][0] = 0x3F80000000000000uLL;
}


// ExtractDirectionVectors  (line 27, @0x00000000031afd60, libserver.so)  // inlines: GetColumn, MatrixGetColumn, operator=
void __fastcall ExtractDirectionVectors(Vector *pForward, Vector *pLeft, Vector *pUp, const matrix3x4_t *const mMatrix)
{
  vec_t v4; // xmm2_4
  vec_t v5; // xmm0_4
  vec_t v6; // xmm2_4
  vec_t v7; // xmm0_4
  vec_t v8; // xmm2_4
  vec_t v9; // xmm0_4

  v4 = mMatrix->m_flMatVal[1][0];
  v5 = mMatrix->m_flMatVal[0][0];
  pForward->z = mMatrix->m_flMatVal[2][0];
  pForward->y = v4;
  pForward->x = v5;
  v6 = mMatrix->m_flMatVal[1][1];
  v7 = mMatrix->m_flMatVal[0][1];
  pLeft->z = mMatrix->m_flMatVal[2][1];
  pLeft->y = v6;
  pLeft->x = v7;
  v8 = mMatrix->m_flMatVal[1][2];
  v9 = mMatrix->m_flMatVal[0][2];
  pUp->z = mMatrix->m_flMatVal[2][2];
  pUp->y = v8;
  pUp->x = v9;
}


// CalcFarPlaneCameraRelativePoints  (line 39, @0x00000000031afdc0, libserver.so)  // inlines: DEG2RAD, VectorAdd, VectorMultiply, operator*, operator+, operator-, operator=
// calls: tanf
// callers: ComputeProjectionMatrix, CFrustum::CalcFarPlaneCameraRelativePoints
void __fastcall CalcFarPlaneCameraRelativePoints(
        Vector *p4PointsOut,
        Vector *const vForward,
        Vector *const vUp,
        Vector *const vLeft,
        float flFarPlane,
        float flFovX,
        float flAspect,
        float flClipSpaceBottomLeftX,
        float flClipSpaceBottomLeftY,
        float flClipSpaceTopRightX,
        float flClipSpaceTopRightY)
{
  float v15; // xmm10_4
  float v16; // xmm0_4
  float v17; // xmm11_4
  float x; // xmm13_4
  float y; // xmm12_4
  float v20; // xmm7_4
  float z; // xmm11_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm15_4
  float v25; // xmm14_4
  float v26; // xmm8_4
  float v27; // xmm0_4
  vec_t v28; // xmm9_4
  float v29; // xmm4_4
  float v30; // xmm3_4
  float v31; // xmm13_4
  float v32; // xmm7_4
  float v33; // xmm2_4
  float v34; // xmm12_4
  float v35; // xmm6_4
  float v36; // xmm1_4
  float flClipSpaceTopRightYa; // [rsp+Ch] [rbp-44h]
  float flClipSpaceTopRightXa; // [rsp+10h] [rbp-40h]
  float flClipSpaceBottomLeftYa; // [rsp+14h] [rbp-3Ch]
  float flClipSpaceBottomLeftXa; // [rsp+18h] [rbp-38h]
  float v42; // [rsp+28h] [rbp-28h]
  float v43; // [rsp+2Ch] [rbp-24h]

  v15 = vForward->x * flFarPlane;
  v43 = vForward->y * flFarPlane;
  v42 = vForward->z * flFarPlane;
  if ( flFovX == -1.0 )
  {
    v23 = -vLeft->z;
    x = vUp->x;
    v22 = -vLeft->y;
    y = vUp->y;
    v20 = -vLeft->x;
    z = vUp->z;
  }
  else
  {
    flClipSpaceTopRightYa = flClipSpaceTopRightY;
    flClipSpaceTopRightXa = flClipSpaceTopRightX;
    flClipSpaceBottomLeftYa = flClipSpaceBottomLeftY;
    flClipSpaceBottomLeftXa = flClipSpaceBottomLeftX;
    v16 = tanf(0.017453292 * (flFovX * 0.5));
    flClipSpaceTopRightY = flClipSpaceTopRightYa;
    flClipSpaceTopRightX = flClipSpaceTopRightXa;
    flClipSpaceBottomLeftY = flClipSpaceBottomLeftYa;
    flClipSpaceBottomLeftX = flClipSpaceBottomLeftXa;
    v17 = (v16 / flAspect) * flFarPlane;
    x = vUp->x * v17;
    y = vUp->y * v17;
    v20 = -vLeft->x * (flFarPlane * v16);
    z = v17 * vUp->z;
    v22 = -vLeft->y * (flFarPlane * v16);
    v23 = -vLeft->z * (flFarPlane * v16);
  }
  v24 = flClipSpaceBottomLeftY * x;
  v25 = flClipSpaceBottomLeftY * y;
  v26 = (flClipSpaceBottomLeftX * v20) + v15;
  v27 = (flClipSpaceBottomLeftX * v22) + v43;
  v28 = (flClipSpaceBottomLeftY * x) + v26;
  v29 = flClipSpaceBottomLeftY * z;
  v30 = (flClipSpaceBottomLeftX * v23) + v42;
  v31 = x * flClipSpaceTopRightY;
  v32 = (v20 * flClipSpaceTopRightX) + v15;
  p4PointsOut->x = v28;
  v33 = (v22 * flClipSpaceTopRightX) + v43;
  v34 = y * flClipSpaceTopRightY;
  v35 = flClipSpaceTopRightY * z;
  v36 = (v23 * flClipSpaceTopRightX) + v42;
  p4PointsOut->y = v25 + v27;
  p4PointsOut[1].x = v24 + v32;
  p4PointsOut[1].y = v25 + v33;
  p4PointsOut->z = v29 + v30;
  p4PointsOut[1].z = v29 + v36;
  p4PointsOut[2].x = v26 + v31;
  p4PointsOut[2].y = v27 + v34;
  p4PointsOut[2].z = v30 + v35;
  p4PointsOut[3].x = v32 + v31;
  p4PointsOut[3].y = v33 + v34;
  p4PointsOut[3].z = v36 + v35;
}


// ComputeWorldToViewMatrix  (line 70, @0x00000000031b0010, libserver.so)
// calls: ConcatTransforms, MatrixInvert
// callers: ComputeViewMatrix, MatricesFromCamera, CFrustum::SetCameraPosition, CFrustum::UpdateViewAndProjectionFromCamera
// globals: g_ViewAlignMatrix
void __fastcall ComputeWorldToViewMatrix(const matrix3x4_t *const cameraToWorld, matrix3x4_t *pOutWorldToView)
{
  matrix3x4_t tmp; // [rsp+0h] [rbp-40h] BYREF

  ConcatTransforms(cameraToWorld, &g_ViewAlignMatrix, &tmp);
  MatrixInvert(&tmp, pOutWorldToView);
}


// ComputeViewMatrix  (line 77, @0x00000000031b0050, libserver.so)
// calls: AngleMatrix, ComputeWorldToViewMatrix
void __fastcall ComputeViewMatrix(matrix3x4_t *pWorldToView, matrix3x4_t *pCameraToWorld, const Camera_t *const camera)
{
  AngleMatrix(&camera->m_angles, &camera->m_vOrigin, pCameraToWorld);
  ComputeWorldToViewMatrix(pCameraToWorld, pWorldToView);
}


// ComputeViewMatrix  (line 83, @0x00000000031b0080, libserver.so)  // inlines: MatrixSetColumn, SetColumn
// calls: ComputeWorldToViewMatrix
// callers: ViewProjFromVectors, CFrustum::SetCameraVectors, CFrustum::BuildFrustumFromVectors
void __fastcall ComputeViewMatrix(
        matrix3x4_t *pWorldToView,
        matrix3x4_t *pCameraToWorld,
        const Vector *const vecOrigin,
        const Vector *const vecForward,
        const Vector *const vecLeft,
        const Vector *const vecUp)
{
  pCameraToWorld->m_flMatVal[0][0] = vecForward->x;
  pCameraToWorld->m_flMatVal[1][0] = vecForward->y;
  pCameraToWorld->m_flMatVal[2][0] = vecForward->z;
  pCameraToWorld->m_flMatVal[0][1] = vecLeft->x;
  pCameraToWorld->m_flMatVal[1][1] = vecLeft->y;
  pCameraToWorld->m_flMatVal[2][1] = vecLeft->z;
  pCameraToWorld->m_flMatVal[0][2] = vecUp->x;
  pCameraToWorld->m_flMatVal[1][2] = vecUp->y;
  pCameraToWorld->m_flMatVal[2][2] = vecUp->z;
  pCameraToWorld->m_flMatVal[0][3] = vecOrigin->x;
  pCameraToWorld->m_flMatVal[1][3] = vecOrigin->y;
  pCameraToWorld->m_flMatVal[2][3] = vecOrigin->z;
  ComputeWorldToViewMatrix(pCameraToWorld, pWorldToView);
}


// ComputeViewMatrix  (line 95, @0x00000000031b0110, libserver.so)  // inlines: ComputeViewMatrix
// calls: AngleMatrix, ComputeWorldToViewMatrix
void __fastcall ComputeViewMatrix(matrix3x4_t *pWorldToView, const Camera_t *const camera)
{
  matrix3x4_t cameraToWorld; // [rsp+0h] [rbp-40h] BYREF

  AngleMatrix(&camera->m_angles, &camera->m_vOrigin, &cameraToWorld);
  ComputeWorldToViewMatrix(&cameraToWorld, pWorldToView);
}


// ComputeViewMatrix  (line 101, @0x00000000031b0150, libserver.so)  // inlines: CopyFrom3x4, Init, VMatrix, Vector, memcpy
// calls: AngleMatrix, MatrixBuildRotationAboutAxis, MatrixMultiply, MatrixInvert
// callers: ComputeScreenSpacePosition
void __fastcall ComputeViewMatrix(VMatrix *pWorldToView, const Camera_t *const camera)
{
  __int64 v3; // rax
  __int64 v4; // rax
  matrix3x4_t transform; // [rsp+10h] [rbp-150h] BYREF
  matrix3x4_t invTransform; // [rsp+40h] [rbp-120h] BYREF
  VMatrix matRotate; // [rsp+70h] [rbp-F0h] BYREF
  VMatrix matRotateZ; // [rsp+B0h] [rbp-B0h] BYREF
  VMatrix matRotateX; // [rsp+F0h] [rbp-70h] BYREF

  AngleMatrix(&camera->m_angles, &camera->m_vOrigin, &transform);
  *&matRotate.m[3][0] = 0;
  *&matRotate.m[0][0] = transform;
  *&matRotate.m[3][2] = 0x3F80000000000000LL;
  *&matRotateX.m[0][0] = 0;
  matRotateX.m[0][2] = 1.0;
  MatrixBuildRotationAboutAxis(&matRotateZ, &matRotateX, -90.0, 0.0);
  MatrixMultiply(&matRotate, &matRotateZ, &matRotate);
  *&invTransform.m_flMatVal[0][0] = 1065353216;
  invTransform.m_flMatVal[0][2] = 0.0;
  MatrixBuildRotationAboutAxis(&matRotateX, &invTransform, 90.0, 0.0);
  MatrixMultiply(&matRotate, &matRotateX, &matRotate);
  transform = *&matRotate.m[0][0];
  MatrixInvert(&transform, &invTransform);
  v3 = *&invTransform.m_flMatVal[0][0];
  pWorldToView->m[3][3] = 1.0;
  pWorldToView->m[3][2] = 0.0;
  *&pWorldToView->m[0][0] = v3;
  v4 = *&invTransform.m_flMatVal[0][2];
  pWorldToView->m[3][1] = 0.0;
  pWorldToView->m[3][0] = 0.0;
  *&pWorldToView->m[0][2] = v4;
  *&pWorldToView->m[1][0] = *&invTransform.m_flMatVal[1][0];
  *&pWorldToView->m[2][0] = *&invTransform.m_flMatVal[2][0];
}


// ComputeProjectionMatrix  (line 127, @0x00000000031b0410, libserver.so)
// calls: ComputeProjectionMatrix
// callers: ComputeScreenSpacePosition
void __fastcall ComputeProjectionMatrix(
        VMatrix *pCameraToProjection,
        const Camera_t *const camera,
        int width,
        int height)
{
  float v4; // xmm4_4

  ComputeProjectionMatrix(
    pCameraToProjection,
    camera->m_flZNear,
    camera->m_flZFar,
    camera->m_flFOVX,
    width / height,
    v4);
}


// ComputeProjectionMatrix  (line 133, @0x00000000031b0360, libserver.so)  // inlines: memset
// calls: tan
// callers: ComputeProjectionMatrix, ViewProjFromVectors, CFrustum::BuildFrustumFromVectors
void __fastcall ComputeProjectionMatrix(
        VMatrix *pCameraToProjection,
        float a2,
        float flZNear,
        float flZFar,
        float flFOVX,
        float flAspectRatio)
{
  float v7; // xmm0_4

  v7 = tan(flZFar * 3.141592653589793 / 360.0);
  memset(pCameraToProjection, 0, sizeof(VMatrix));
  pCameraToProjection->m[3][2] = -1.0;
  pCameraToProjection->m[0][0] = 1.0 / v7;
  pCameraToProjection->m[1][1] = 1.0 / (v7 / flFOVX);
  pCameraToProjection->m[2][2] = flZNear / (a2 - flZNear);
  pCameraToProjection->m[2][3] = (flZNear * a2) / (a2 - flZNear);
}


// ComputeProjectionMatrix  (line 145, @0x00000000031b0440, libserver.so)  // inlines: Vector, memset
// calls: CalcFarPlaneCameraRelativePoints
// callers: MatricesFromCamera, CFrustum::UpdateProjectionFromCamera
void __fastcall ComputeProjectionMatrix(
        VMatrix *pCameraToProjection,
        float a2,
        float flZNear,
        float flZFar,
        float flFOVX,
        float flAspectRatio,
        float flClipSpaceBottomLeftX,
        float flClipSpaceBottomLeftY,
        float flClipSpaceTopRightX)
{
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm6_4
  float v13; // xmm0_4
  float v14; // xmm7_4
  float v15; // xmm5_4
  Vector vForward; // [rsp+10h] [rbp-70h] BYREF
  Vector vUp; // [rsp+20h] [rbp-60h] BYREF
  Vector vLeft; // [rsp+30h] [rbp-50h] BYREF
  float r; // [rsp+40h] [rbp-40h] BYREF
  float b; // [rsp+44h] [rbp-3Ch]
  float v23; // [rsp+4Ch] [rbp-34h]
  float v24; // [rsp+5Ch] [rbp-24h]

  vForward.z = 1.0;
  vUp.y = 1.0;
  vForward.x = 0.0;
  vForward.y = 0.0;
  vUp.x = 0.0;
  vUp.z = 0.0;
  vLeft.y = 0.0;
  vLeft.z = 0.0;
  vLeft.x = -1.0;
  CalcFarPlaneCameraRelativePoints(
    &r,
    &vForward,
    &vUp,
    &vLeft,
    a2,
    flZFar,
    flFOVX,
    flAspectRatio,
    flClipSpaceBottomLeftX,
    flClipSpaceBottomLeftY,
    flClipSpaceTopRightX);
  v10 = v24 - b;
  v11 = v23;
  v12 = r;
  v13 = b + v24;
  v14 = (a2 + a2) / (v24 - b);
  v15 = v23 - r;
  memset(pCameraToProjection, 0, sizeof(VMatrix));
  pCameraToProjection->m[3][2] = -1.0;
  pCameraToProjection->m[1][1] = v14;
  pCameraToProjection->m[0][0] = (a2 + a2) / v15;
  pCameraToProjection->m[2][2] = flZNear / (a2 - flZNear);
  pCameraToProjection->m[0][2] = (v11 + v12) / v15;
  pCameraToProjection->m[1][2] = v13 / v10;
  pCameraToProjection->m[2][3] = (a2 * flZNear) / (a2 - flZNear);
}


// ComputeScreenSpacePosition  (line 190, @0x00000000031b0570, libserver.so)
// calls: ComputeViewMatrix, ComputeProjectionMatrix, MatrixMultiply, Vector3DMultiplyPositionProjective
void __fastcall ComputeScreenSpacePosition(
        Vector2D *pScreenPosition,
        const Vector *const vecWorldPosition,
        const Camera_t *const camera,
        int width,
        int height)
{
  float v9; // xmm0_4
  Vector vecScreenPos; // [rsp+10h] [rbp-100h] BYREF
  VMatrix view; // [rsp+20h] [rbp-F0h] BYREF
  VMatrix proj; // [rsp+60h] [rbp-B0h] BYREF
  VMatrix viewproj; // [rsp+A0h] [rbp-70h] BYREF

  ComputeViewMatrix(&view, camera);
  ComputeProjectionMatrix(&proj, camera, width, height);
  MatrixMultiply(&proj, &view, &viewproj);
  Vector3DMultiplyPositionProjective(&viewproj, vecWorldPosition, &vecScreenPos);
  v9 = 1.0 - vecScreenPos.y;
  pScreenPosition->x = ((vecScreenPos.x + 1.0) * width) * 0.5;
  pScreenPosition->y = (v9 * height) * 0.5;
}


// ViewMatrixRH  (line 205, @0x00000000031b0660, libserver.so)  // inlines: CrossProduct, DotProduct, Init, NormalizeInPlace, VMatrix, VectorSubtract, operator-, operator=
// calls: VectorNormalize, VMatrix::Transpose
VMatrix *__fastcall ViewMatrixRH(
        VMatrix *__return_ptr retstr,
        Vector *const vEye,
        Vector *const vAt,
        Vector *const vUp)
{
  vec_t v6; // xmm0_4
  float x; // xmm7_4
  float y; // xmm3_4
  float z; // xmm2_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  Vector xAxis; // [rsp+0h] [rbp-80h] BYREF
  Vector yAxis; // [rsp+10h] [rbp-70h] BYREF
  Vector zAxis; // [rsp+20h] [rbp-60h] BYREF
  VMatrix mRet; // [rsp+30h] [rbp-50h] BYREF

  v6 = vEye->y - vAt->y;
  x = vUp->x;
  y = vUp->y;
  zAxis.x = vEye->x - vAt->x;
  z = vEye->z;
  zAxis.y = v6;
  v10 = vUp->z;
  zAxis.z = z - vAt->z;
  xAxis.z = (v6 * x) - (zAxis.x * y);
  xAxis.y = (zAxis.x * v10) - (x * zAxis.z);
  xAxis.x = (y * zAxis.z) - (v10 * v6);
  yAxis.x = (v6 * xAxis.z) - (zAxis.z * xAxis.y);
  yAxis.y = (zAxis.z * xAxis.x) - (xAxis.z * zAxis.x);
  yAxis.z = (zAxis.x * xAxis.y) - (v6 * xAxis.x);
  VectorNormalize(&xAxis);
  VectorNormalize(&yAxis);
  VectorNormalize(&zAxis);
  v11 = vEye->x;
  v12 = vEye->y;
  *&mRet.m[0][0] = __PAIR64__(LODWORD(yAxis.x), LODWORD(xAxis.x));
  *&mRet.m[1][0] = __PAIR64__(LODWORD(yAxis.y), LODWORD(xAxis.y));
  v13 = vEye->z;
  *&mRet.m[0][2] = LODWORD(zAxis.x);
  *&mRet.m[1][2] = LODWORD(zAxis.y);
  *&mRet.m[2][0] = __PAIR64__(LODWORD(yAxis.z), LODWORD(xAxis.z));
  *&mRet.m[2][2] = LODWORD(zAxis.z);
  mRet.m[3][3] = 1.0;
  mRet.m[3][0] = -(((xAxis.x * v11) + (xAxis.y * v12)) + (xAxis.z * v13));
  mRet.m[3][1] = -(((yAxis.x * v11) + (yAxis.y * v12)) + (yAxis.z * v13));
  mRet.m[3][2] = -(((v11 * zAxis.x) + (v12 * zAxis.y)) + (v13 * zAxis.z));
  VMatrix::Transpose(retstr, &mRet);
  return retstr;
}


// MatricesFromCamera  (line 229, @0x00000000031b0850, libserver.so)  // inlines: ComputeViewMatrix, Init, OrthoMatrixRH, VMatrix
// calls: AngleMatrix, ComputeWorldToViewMatrix, ComputeProjectionMatrix, VMatrix::operator=
void __fastcall MatricesFromCamera(
        matrix3x4_t *mWorldToView,
        VMatrix *const mProjection,
        const Camera_t *const camera,
        float flClipSpaceBottomLeftX,
        float flClipSpaceBottomLeftY,
        float flClipSpaceTopRightX,
        float flClipSpaceTopRightY)
{
  float m_flFOVX; // xmm2_4
  float m_flHeight; // xmm0_4
  float m_flWidth; // xmm1_4
  float m_flZNear; // xmm5_4
  float v14; // xmm2_4
  matrix3x4_t cameraToWorld; // [rsp+10h] [rbp-90h] BYREF
  VMatrix mOther; // [rsp+40h] [rbp-60h] BYREF

  AngleMatrix(&camera->m_angles, &camera->m_vOrigin, &cameraToWorld);
  ComputeWorldToViewMatrix(&cameraToWorld, mWorldToView);
  m_flFOVX = camera->m_flFOVX;
  if ( m_flFOVX == -1.0 )
  {
    m_flHeight = camera->m_flHeight;
    m_flWidth = camera->m_flWidth;
    m_flZNear = camera->m_flZNear;
    mOther.m[1][0] = 0.0;
    v14 = m_flZNear - camera->m_flZFar;
    mOther.m[1][3] = 0.0;
    *&mOther.m[2][0] = 0;
    *&mOther.m[3][0] = 0;
    *&mOther.m[3][2] = 0x3F80000000000000LL;
    mOther.m[2][3] = m_flZNear / v14;
    *&mOther.m[1][1] = COERCE_UNSIGNED_INT(2.0 / ((m_flHeight * 0.5) + (m_flHeight * 0.5)));
    *&mOther.m[0][0] = COERCE_UNSIGNED_INT(2.0 / ((m_flWidth * 0.5) + (m_flWidth * 0.5)));
    mOther.m[2][2] = 1.0 / v14;
    VMatrix::operator=(mProjection, &mOther);
  }
  else
  {
    ComputeProjectionMatrix(
      mProjection,
      camera->m_flZNear,
      camera->m_flZFar,
      m_flFOVX,
      camera->m_flAspect,
      flClipSpaceBottomLeftX,
      flClipSpaceBottomLeftY,
      flClipSpaceTopRightX,
      flClipSpaceTopRightY);
  }
}


// FrustumFromViewProj  (line 248, @0x00000000031b09e0, libserver.so)  // inlines: DotProduct
// calls: ExtractClipPlanesFromNonTransposedMatrix, Frustum_t::SetPlanes
// callers: FrustumFromMatrices, CFrustum::UpdateProjectionFromCamera
void __fastcall FrustumFromViewProj(
        Frustum_t *pFrustum,
        const VMatrix *const mViewProj,
        const Vector *const origin,
        bool bD3DClippingRange)
{
  vec_t *p_m_Dist; // rax
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  VPlane planes[6]; // [rsp+0h] [rbp-80h] BYREF
  char v12; // [rsp+6Ch] [rbp-14h] BYREF

  ExtractClipPlanesFromNonTransposedMatrix(mViewProj, planes, bD3DClippingRange);
  p_m_Dist = &planes[0].m_Dist;
  v7 = -origin->z;
  v8 = -origin->y;
  v9 = -origin->x;
  do
  {
    v10 = *(p_m_Dist - 3);
    p_m_Dist += 4;
    *(p_m_Dist - 4) = (((v10 * v9) + (*(p_m_Dist - 6) * v8)) + (*(p_m_Dist - 5) * v7)) + *(p_m_Dist - 4);
  }
  while ( p_m_Dist != &v12 );
  Frustum_t::SetPlanes(pFrustum, planes);
}


// FrustumFromMatrices  (line 263, @0x00000000031b0a90, libserver.so)
// calls: VMatrix::operator*, VMatrix::operator=, FrustumFromViewProj
void __fastcall FrustumFromMatrices(
        Frustum_t *pFrustum,
        const VMatrix *const mWorldToView,
        const VMatrix *const mProjection,
        const Vector *const origin,
        bool bD3DClippingRange)
{
  VMatrix viewProj; // [rsp+0h] [rbp-B0h] BYREF
  VMatrix mOther; // [rsp+40h] [rbp-70h] BYREF

  VMatrix::operator*(&mOther, mProjection, mWorldToView);
  VMatrix::operator=(&viewProj, &mOther);
  FrustumFromViewProj(pFrustum, &viewProj, origin, bD3DClippingRange);
}


// ViewProjFromVectors  (line 271, @0x00000000031b0b00, libserver.so)  // inlines: Init, VMatrix, memcpy
// calls: ComputeViewMatrix, ComputeProjectionMatrix, VMatrix::operator*, VMatrix::operator=
VMatrix *__fastcall ViewProjFromVectors(
        VMatrix *__return_ptr retstr,
        const Vector *const origin,
        float flNear,
        float flFar,
        float flFOV,
        float flAspect,
        const Vector *const vecForward,
        const Vector *const vecLeft,
        const Vector *const vecUp)
{
  float v10; // xmm4_4
  matrix3x4_t mCameraToWorld; // [rsp+10h] [rbp-140h] BYREF
  matrix3x4_t mWorldToView; // [rsp+40h] [rbp-110h] BYREF
  VMatrix mProjection; // [rsp+70h] [rbp-E0h] BYREF
  VMatrix vm; // [rsp+B0h] [rbp-A0h] BYREF
  VMatrix mOther; // [rsp+F0h] [rbp-60h] BYREF

  ComputeViewMatrix(&mWorldToView, &mCameraToWorld, origin, vecForward, vecLeft, vecUp);
  ComputeProjectionMatrix(&mProjection, flNear, flFar, flFOV, flAspect, v10);
  *&vm.m[3][0] = 0;
  *&vm.m[0][0] = mWorldToView;
  *&vm.m[3][2] = 0x3F80000000000000LL;
  VMatrix::operator*(&mOther, &mProjection, &vm);
  VMatrix::operator=(retstr, &mOther);
  return retstr;
}


// ScaleFOVByWidthRatio  (line 285, @0x00000000031b0c20, libserver.so)
// calls: tanf, atan
float __fastcall ScaleFOVByWidthRatio(float a1, float fovDegrees, float ratio)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm0_4

  v3 = a1 * 0.008726646259971648;
  v4 = tanf(v3);
  v5 = atan((v4 * fovDegrees)) * 57.29577951308232;
  return v5 + v5;
}


// CFrustum::CFrustum  (line 295, @0x00000000031b0c80, libserver.so)  // inlines: Init, InitPerspectiveProjection, InitViewParameters, SetToIdentity, V_memset, memset, operator=
// calls: Frustum_t::Frustum_t, SetIdentityMatrix
// callers: CUtlStack<CRender::ViewStack_t, CUtlMemory<CRender::ViewStack_t, int> >::Push, IsBoundingBoxInFrustum
void __fastcall CFrustum::CFrustum(CFrustum *const this)
{
  Frustum_t *p_m_frustumStruct; // r12

  p_m_frustumStruct = &this->m_frustumStruct;
  Frustum_t::Frustum_t(&this->m_frustumStruct);
  this->m_camera.m_flAspect = 1.0;
  this->m_camera.m_vOrigin.x = 0.0;
  this->m_camera.m_vOrigin.y = 0.0;
  this->m_camera.m_vOrigin.z = 0.0;
  this->m_camera.m_angles.x = 0.0;
  this->m_camera.m_angles.y = 0.0;
  this->m_camera.m_angles.z = 0.0;
  this->m_camera.m_flWidth = -1.0;
  this->m_camera.m_flHeight = -1.0;
  this->m_camera.m_flFOVX = 90.0;
  this->m_camera.m_flZNear = 10.0;
  this->m_camera.m_flZFar = 100.0;
  memset(p_m_frustumStruct, 0, sizeof(Frustum_t));
  this->m_flClipSpaceBottomLeftX = -1.0;
  this->m_flClipSpaceBottomLeftY = -1.0;
  this->m_flClipSpaceTopRightX = 1.0;
  this->m_flClipSpaceTopRightY = 1.0;
  this->m_forward.x = 1.0;
  this->m_forward.y = 0.0;
  this->m_forward.z = 0.0;
  this->m_left.x = 0.0;
  this->m_left.y = 1.0;
  this->m_left.z = 0.0;
  this->m_up.x = 0.0;
  this->m_up.y = 0.0;
  this->m_up.z = 1.0;
  this->m_bUseD3DClippingRange = 0;
  SetIdentityMatrix(&this->m_cameraToWorld);
  this->m_worldToView.m_flMatVal[0][0] = 0.0;
  this->m_worldToView.m_flMatVal[0][2] = 0.0;
  this->m_worldToView.m_flMatVal[0][1] = -1.0;
  this->m_worldToView.m_flMatVal[0][3] = 0.0;
  this->m_worldToView.m_flMatVal[1][0] = 0.0;
  this->m_worldToView.m_flMatVal[1][1] = 0.0;
  this->m_worldToView.m_flMatVal[1][2] = 1.0;
  this->m_worldToView.m_flMatVal[1][3] = 0.0;
  this->m_worldToView.m_flMatVal[2][0] = -1.0;
  this->m_worldToView.m_flMatVal[2][1] = 0.0;
  this->m_worldToView.m_flMatVal[2][2] = 0.0;
  this->m_worldToView.m_flMatVal[2][3] = 0.0;
  memset(&this->m_projection, 0, sizeof(this->m_projection));
  this->m_projection.m[0][0] = 1.0;
  this->m_projection.m[1][1] = 1.0;
  this->m_projection.m[2][2] = -1.1111112;
  this->m_projection.m[2][3] = -11.111111;
  this->m_projection.m[3][2] = -1.0;
  memset(&this->m_invProjection, 0, sizeof(this->m_invProjection));
  this->m_invProjection.m[0][0] = 1.0;
  this->m_invProjection.m[1][1] = 1.0;
  this->m_invProjection.m[2][3] = -1.0;
  this->m_invProjection.m[3][2] = -0.090000004;
  this->m_invProjection.m[3][3] = 0.10000001;
  memset(&this->m_viewProj, 0, sizeof(this->m_viewProj));
  this->m_viewProj.m[0][1] = -1.0;
  this->m_viewProj.m[1][2] = 1.0;
  this->m_viewProj.m[2][0] = 1.1111112;
  this->m_viewProj.m[2][3] = -11.111111;
  this->m_viewProj.m[3][0] = 1.0;
  memset(&this->m_invViewProj, 0, sizeof(this->m_invViewProj));
  this->m_invViewProj.m[0][3] = 1.0;
  this->m_invViewProj.m[1][0] = -1.0;
  this->m_invViewProj.m[2][1] = 1.0;
  this->m_invViewProj.m[3][2] = -0.090000004;
  this->m_invViewProj.m[3][3] = 0.10000001;
  this->m_bHaveOverrideProjectionMatrix = 0;
  memset(&this->m_overrideProjection, 0, sizeof(this->m_overrideProjection));
  this->m_vOriginBeforeVr.x = 0.0;
  this->m_vOriginBeforeVr.y = 0.0;
  this->m_vOriginBeforeVr.z = 0.0;
  this->m_vAnglesBeforeVr.x = 0.0;
  this->m_vAnglesBeforeVr.y = 0.0;
  this->m_vAnglesBeforeVr.z = 0.0;
}


// CFrustum::CheckBoxAgainstNearAndFarPlanes  (line 372, @0x00000000031b10b0, libserver.so)  // inlines: operator=
// calls: CFrustum::GetNearAndFarPlanesAroundBox
int __fastcall CFrustum::CheckBoxAgainstNearAndFarPlanes(
        const CFrustum *const this,
        const VectorAligned *const minBounds,
        const VectorAligned *const maxBounds)
{
  vec_t x; // xmm0_4
  __int64 v5; // rax
  float flNear; // [rsp+8h] [rbp-38h] BYREF
  float flFar; // [rsp+Ch] [rbp-34h] BYREF
  AABB_t aabb; // [rsp+10h] [rbp-30h] BYREF

  flNear = 0.0;
  x = minBounds->x;
  flFar = 0.0;
  aabb.m_vMinBounds.x = x;
  aabb.m_vMinBounds.y = minBounds->y;
  aabb.m_vMinBounds.z = minBounds->z;
  aabb.m_vMaxBounds = maxBounds->Vector;
  CFrustum::GetNearAndFarPlanesAroundBox(this, &flNear, &flFar, &aabb, &vec3_origin);
  v5 = this->m_camera.m_flZNear >= flNear;
  if ( flFar >= this->m_camera.m_flZFar )
    LODWORD(v5) = (this->m_camera.m_flZNear >= flNear) | 2;
  return v5;
}


// CFrustum::GetNearAndFarPlanesAroundBox  (line 395, @0x00000000031b0f50, libserver.so)  // inlines: DotProduct, VectorSubtract, operator-, operator-=, operator=
// callers: CFrustum::CheckBoxAgainstNearAndFarPlanes
void __fastcall CFrustum::GetNearAndFarPlanesAroundBox(
        const CFrustum *const this,
        float *pNear,
        float *pFar,
        const AABB_t *const inBox,
        const Vector *const vOriginShift)
{
  Vector *v5; // rax
  float y; // xmm0_4
  vec_t v7; // xmm2_4
  float v8; // xmm1_4
  vec_t v9; // xmm4_4
  float z; // xmm6_4
  vec_t v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float x; // xmm9_4
  float v15; // xmm8_4
  float v16; // xmm7_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  Vector vCorners[8]; // [rsp+0h] [rbp-60h] BYREF
  __int64 savedregs; // [rsp+60h] [rbp+0h] BYREF

  v5 = vCorners;
  y = vOriginShift->y;
  v7 = inBox->m_vMaxBounds.x - vOriginShift->x;
  v8 = inBox->m_vMaxBounds.y;
  v9 = inBox->m_vMinBounds.y - y;
  z = vOriginShift->z;
  vCorners[0].x = inBox->m_vMinBounds.x - vOriginShift->x;
  v11 = v8 - y;
  v12 = inBox->m_vMinBounds.z;
  vCorners[1].x = vCorners[0].x;
  v13 = inBox->m_vMaxBounds.z;
  vCorners[2].x = vCorners[0].x;
  vCorners[0].y = v9;
  vCorners[1].y = v9;
  vCorners[3].x = vCorners[0].x;
  vCorners[0].z = v12 - z;
  vCorners[2].z = v12 - z;
  vCorners[4].x = v7;
  vCorners[4].y = v9;
  vCorners[4].z = v12 - z;
  vCorners[5].x = v7;
  vCorners[5].y = v9;
  vCorners[6].x = v7;
  vCorners[6].z = v12 - z;
  vCorners[1].z = v13 - z;
  vCorners[2].y = v11;
  vCorners[3].y = v11;
  vCorners[3].z = v13 - z;
  vCorners[5].z = v13 - z;
  vCorners[6].y = v11;
  vCorners[7].x = v7;
  x = this->m_camera.m_vOrigin.x;
  v15 = this->m_camera.m_vOrigin.y;
  vCorners[7].y = v11;
  v16 = this->m_camera.m_vOrigin.z;
  vCorners[7].z = v13 - z;
  v17 = -3.4028235e38;
  v18 = 3.4028235e38;
  do
  {
    v19 = v5->x;
    ++v5;
    v20 = (((v19 - x) * this->m_forward.x) + ((v5[-1].y - v15) * this->m_forward.y))
        + ((v5[-1].z - v16) * this->m_forward.z);
    v18 = fminf(v18, v20);
    v17 = fmaxf(v17, v20);
  }
  while ( v5 != &savedregs );
  *pNear = v18;
  *pFar = v17;
}


// CFrustum::SetCameraPosition  (line 427, @0x00000000031b1920, libserver.so)  // inlines: MatrixSetColumn, SetColumn, operator=, operator==
// calls: ComputeWorldToViewMatrix, CFrustum::UpdateProjectionFromCamera
void __fastcall CFrustum::SetCameraPosition(CFrustum *const this, const Vector *const vOrigin)
{
  if ( vOrigin->x != this->m_camera.m_vOrigin.x
    || vOrigin->y != this->m_camera.m_vOrigin.y
    || vOrigin->z != this->m_camera.m_vOrigin.z )
  {
    this->m_camera.m_vOrigin = *vOrigin;
    this->m_cameraToWorld.m_flMatVal[0][3] = vOrigin->x;
    this->m_cameraToWorld.m_flMatVal[1][3] = vOrigin->y;
    this->m_cameraToWorld.m_flMatVal[2][3] = vOrigin->z;
    ComputeWorldToViewMatrix(&this->m_cameraToWorld, &this->m_worldToView);
    CFrustum::UpdateProjectionFromCamera(this);
  }
}


// CFrustum::SetCameraAngles  (line 445, @0x00000000031b1c40, libserver.so)  // inlines: operator=, operator==
// calls: CFrustum::UpdateViewAndProjectionFromCamera
void __fastcall CFrustum::SetCameraAngles(CFrustum *const this, const QAngle *const angles)
{
  if ( angles->x != this->m_camera.m_angles.x
    || angles->y != this->m_camera.m_angles.y
    || angles->z != this->m_camera.m_angles.z )
  {
    this->m_camera.m_angles = *angles;
    CFrustum::UpdateViewAndProjectionFromCamera(this);
  }
}


// CFrustum::SetCameraPositionAndAngles  (line 458, @0x00000000031b1ca0, libserver.so)  // inlines: operator=, operator==
// calls: CFrustum::UpdateViewAndProjectionFromCamera
// callers: CPointCamera::CalcFrustum
void __fastcall CFrustum::SetCameraPositionAndAngles(
        CFrustum *const this,
        const Vector *const vOrigin,
        const QAngle *const angles)
{
  if ( vOrigin->x != this->m_camera.m_vOrigin.x
    || vOrigin->y != this->m_camera.m_vOrigin.y
    || vOrigin->z != this->m_camera.m_vOrigin.z
    || angles->x != this->m_camera.m_angles.x
    || angles->y != this->m_camera.m_angles.y
    || angles->z != this->m_camera.m_angles.z )
  {
    this->m_camera.m_vOrigin = *vOrigin;
    this->m_camera.m_angles = *angles;
    CFrustum::UpdateViewAndProjectionFromCamera(this);
  }
}


// CFrustum::SetCameraVectors  (line 473, @0x00000000031b19d0, libserver.so)  // inlines: operator=, operator==
// calls: ComputeViewMatrix, MatrixAngles, CFrustum::UpdateProjectionFromCamera
void __fastcall CFrustum::SetCameraVectors(
        CFrustum *const this,
        const Vector *const vForward,
        const Vector *const vLeft,
        const Vector *const vUp)
{
  if ( vForward->x != this->m_forward.x
    || vForward->y != this->m_forward.y
    || vForward->z != this->m_forward.z
    || vLeft->x != this->m_left.x
    || vLeft->y != this->m_left.y
    || vLeft->z != this->m_left.z
    || vUp->x != this->m_up.x
    || vUp->y != this->m_up.y
    || vUp->z != this->m_up.z )
  {
    this->m_forward = *vForward;
    this->m_left = *vLeft;
    this->m_up = *vUp;
    ComputeViewMatrix(
      &this->m_worldToView,
      &this->m_cameraToWorld,
      &this->m_camera.m_vOrigin,
      &this->m_forward,
      &this->m_left,
      &this->m_up);
    MatrixAngles(&this->m_cameraToWorld, &this->m_camera.m_angles);
    CFrustum::UpdateProjectionFromCamera(this);
  }
}


// CFrustum::UpdateViewAndProjectionFromCamera  (line 493, @0x00000000031b1b70, libserver.so)  // inlines: ComputeViewMatrix, ExtractDirectionVectors, GetColumn, MatrixGetColumn, operator=
// calls: AngleMatrix, ComputeWorldToViewMatrix, CFrustum::UpdateProjectionFromCamera
// callers: IsBoundingBoxInFrustum, CFrustum::SetCameraAngles, CFrustum::SetCameraPositionAndAngles, CFrustum::BuildFrustumFromVectors
void __fastcall CFrustum::UpdateViewAndProjectionFromCamera(CFrustum *const this)
{
  matrix3x4_t *p_m_cameraToWorld; // r12
  vec_t v3; // xmm1_4
  vec_t v4; // xmm2_4
  vec_t v5; // xmm0_4
  vec_t v6; // xmm1_4
  vec_t v7; // xmm2_4
  vec_t v8; // xmm0_4
  vec_t v9; // xmm1_4
  vec_t v10; // xmm2_4

  p_m_cameraToWorld = &this->m_cameraToWorld;
  AngleMatrix(&this->m_camera.m_angles, &this->m_camera.m_vOrigin, &this->m_cameraToWorld);
  ComputeWorldToViewMatrix(p_m_cameraToWorld, &this->m_worldToView);
  v3 = this->m_cameraToWorld.m_flMatVal[1][0];
  v4 = this->m_cameraToWorld.m_flMatVal[0][0];
  this->m_forward.z = this->m_cameraToWorld.m_flMatVal[2][0];
  this->m_forward.y = v3;
  v5 = this->m_cameraToWorld.m_flMatVal[2][1];
  v6 = this->m_cameraToWorld.m_flMatVal[1][1];
  this->m_forward.x = v4;
  v7 = this->m_cameraToWorld.m_flMatVal[0][1];
  this->m_left.z = v5;
  this->m_left.y = v6;
  v8 = this->m_cameraToWorld.m_flMatVal[2][2];
  this->m_left.x = v7;
  v9 = this->m_cameraToWorld.m_flMatVal[1][2];
  v10 = this->m_cameraToWorld.m_flMatVal[0][2];
  this->m_up.z = v8;
  this->m_up.y = v9;
  this->m_up.x = v10;
  CFrustum::UpdateProjectionFromCamera(this);
}


// CFrustum::UpdateProjectionFromCamera  (line 505, @0x00000000031b1740, libserver.so)  // inlines: Init, OrthoMatrixOffCenterRH, VMatrix
// calls: ComputeProjectionMatrix, CFrustum::CalcViewProj, FrustumFromViewProj, VMatrix::operator=
// callers: CPointCamera::CalcFrustum, CFrustum::SetCameraPosition, CFrustum::SetCameraVectors, CFrustum::UpdateViewAndProjectionFromCamera
void __fastcall CFrustum::UpdateProjectionFromCamera(CFrustum *const this)
{
  float m_flFOVX; // xmm2_4
  float m_flHeight; // xmm0_4
  float m_flClipSpaceBottomLeftY; // xmm3_4
  VMatrix *p_m_projection; // rdi
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm6_4
  float v14; // xmm2_4
  float v15; // xmm5_4
  unsigned int v16; // xmm7_4
  unsigned int v17; // xmm8_4
  VMatrix mOther; // [rsp+0h] [rbp-50h] BYREF

  if ( this->m_bHaveOverrideProjectionMatrix )
  {
    VMatrix::operator=(&this->m_projection, &this->m_overrideProjection);
  }
  else
  {
    m_flFOVX = this->m_camera.m_flFOVX;
    if ( m_flFOVX == -1.0 )
    {
      m_flHeight = this->m_camera.m_flHeight;
      m_flClipSpaceBottomLeftY = this->m_flClipSpaceBottomLeftY;
      p_m_projection = &this->m_projection;
      mOther.m[0][2] = 0.0;
      v6 = p_m_projection[-8].m[2][0];
      mOther.m[1][0] = 0.0;
      v7 = p_m_projection[-3].m[2][2];
      v8 = m_flClipSpaceBottomLeftY * m_flHeight;
      v9 = m_flHeight * p_m_projection[-3].m[3][1];
      *&mOther.m[2][0] = 0;
      v10 = v7 * v6;
      v11 = v6 * p_m_projection[-3].m[3][0];
      *&mOther.m[3][0] = 0;
      v12 = v8 * 0.5;
      v13 = p_m_projection[-8].m[1][2];
      *&mOther.m[3][2] = 0x3F80000000000000LL;
      v14 = v10 * 0.5;
      v15 = v13 - p_m_projection[-8].m[1][3];
      *&v16 = 2.0 / ((v9 * 0.5) - v12);
      mOther.m[2][3] = v13 / v15;
      *&v17 = 2.0 / ((v11 * 0.5) - v14);
      *&mOther.m[1][1] = v16;
      *&mOther.m[0][0] = v17;
      mOther.m[1][3] = -(*&v16 * v12) - 1.0;
      mOther.m[0][3] = -(*&v17 * v14) - 1.0;
      mOther.m[2][2] = 1.0 / v15;
      VMatrix::operator=(p_m_projection, &mOther);
    }
    else
    {
      ComputeProjectionMatrix(
        &this->m_projection,
        this->m_camera.m_flZNear,
        this->m_camera.m_flZFar,
        m_flFOVX,
        this->m_camera.m_flAspect,
        this->m_flClipSpaceBottomLeftX,
        this->m_flClipSpaceBottomLeftY,
        this->m_flClipSpaceTopRightX,
        this->m_flClipSpaceTopRightY);
    }
  }
  CFrustum::CalcViewProj(this);
  FrustumFromViewProj(
    &this->m_frustumStruct,
    &this->m_viewProj,
    &this->m_camera.m_vOrigin,
    this->m_bUseD3DClippingRange);
}


// CFrustum::BuildFrustumFromVectors  (line 532, @0x00000000031b1d40, libserver.so)  // inlines: ExtractDirectionVectors, GetColumn, GetTranslation, Init, InitCamera, InitPerspectiveProjection, InitViewParameters, MatrixGetColumn, VMatrix, memcpy, operator-, operator=
// calls: CFrustum::UpdateViewAndProjectionFromCamera, ComputeViewMatrix, ComputeProjectionMatrix, VMatrix::operator*, VMatrix::operator=, Frustum_t::CreatePerspectiveFrustum, MatrixInverseGeneral, VMatrix::InverseGeneral
// callers: LightDesc_t::BuildShadowFrustumForSpotlight
void __fastcall CFrustum::BuildFrustumFromVectors(
        CFrustum *const this,
        const Vector *const origin,
        float flNear,
        float flFar,
        float flFOV,
        float flAspect,
        const Vector *const vecForward,
        const Vector *const vecLeft,
        const Vector *const vecUp)
{
  matrix3x4_t *p_m_worldToView; // r12
  vec_t z; // xmm0_4
  float v15; // xmm4_4
  __int64 v16; // rax
  __int64 v17; // rax
  vec_t v18; // xmm1_4
  vec_t v19; // xmm2_4
  vec_t v20; // xmm5_4
  vec_t v21; // xmm10_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  vec_t v25; // xmm3_4
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  vec_t v29; // xmm0_4
  __int64 v30; // rax
  VMatrix worldToView; // [rsp+0h] [rbp-B8h] BYREF
  VMatrix viewToWorld; // [rsp+40h] [rbp-78h] BYREF

  p_m_worldToView = &this->m_worldToView;
  this->m_camera.m_vOrigin.x = origin->x;
  this->m_camera.m_vOrigin.y = origin->y;
  z = origin->z;
  this->m_camera.m_angles.x = 0.0;
  this->m_camera.m_angles.y = 0.0;
  this->m_camera.m_angles.z = 0.0;
  this->m_camera.m_vOrigin.z = z;
  this->m_camera.m_flFOVX = flFOV;
  this->m_camera.m_flAspect = flAspect;
  this->m_camera.m_flZNear = flNear;
  this->m_camera.m_flZFar = flFar;
  this->m_camera.m_flWidth = -1.0;
  this->m_camera.m_flHeight = -1.0;
  this->m_flClipSpaceBottomLeftX = -1.0;
  this->m_flClipSpaceBottomLeftY = -1.0;
  this->m_flClipSpaceTopRightX = 1.0;
  this->m_flClipSpaceTopRightY = 1.0;
  CFrustum::UpdateViewAndProjectionFromCamera(this);
  ComputeViewMatrix(p_m_worldToView, &this->m_cameraToWorld, origin, vecForward, vecLeft, vecUp);
  ComputeProjectionMatrix(&this->m_projection, flNear, flFar, flFOV, flAspect, v15);
  v16 = *&this->m_worldToView.m_flMatVal[0][0];
  *&worldToView.m[3][0] = 0;
  *&worldToView.m[0][0] = v16;
  v17 = *&this->m_worldToView.m_flMatVal[0][2];
  *&worldToView.m[3][2] = 0x3F80000000000000LL;
  *&worldToView.m[0][2] = v17;
  *&worldToView.m[1][0] = *&this->m_worldToView.m_flMatVal[1][0];
  *&worldToView.m[2][0] = *&this->m_worldToView.m_flMatVal[2][0];
  VMatrix::operator*(&viewToWorld, &this->m_projection, &worldToView);
  VMatrix::operator=(&this->m_viewProj, &viewToWorld);
  v18 = this->m_cameraToWorld.m_flMatVal[1][0];
  v19 = this->m_cameraToWorld.m_flMatVal[0][0];
  this->m_forward.z = this->m_cameraToWorld.m_flMatVal[2][0];
  v20 = this->m_cameraToWorld.m_flMatVal[1][2];
  this->m_forward.y = v18;
  this->m_forward.x = v19;
  v21 = this->m_cameraToWorld.m_flMatVal[0][2];
  this->m_up.y = v20;
  this->m_up.x = v21;
  v22 = this->m_cameraToWorld.m_flMatVal[2][1];
  v23 = this->m_cameraToWorld.m_flMatVal[1][1];
  v24 = this->m_cameraToWorld.m_flMatVal[0][1];
  this->m_left.z = v22;
  v25 = this->m_cameraToWorld.m_flMatVal[2][2];
  this->m_left.y = v23;
  this->m_left.x = v24;
  this->m_up.z = v25;
  viewToWorld.m[0][0] = -v24;
  viewToWorld.m[0][1] = -v23;
  viewToWorld.m[0][2] = -v22;
  Frustum_t::CreatePerspectiveFrustum(
    &this->m_frustumStruct,
    &vec3_origin,
    &this->m_forward,
    &viewToWorld,
    &this->m_up,
    flNear,
    flFar,
    COERCE_DOUBLE(LODWORD(flFOV)),
    flAspect);
  MatrixInverseGeneral(&this->m_viewProj, &this->m_invViewProj);
  MatrixInverseGeneral(&this->m_projection, &this->m_invProjection);
  v26 = *&this->m_worldToView.m_flMatVal[0][0];
  *&worldToView.m[3][0] = 0;
  *&worldToView.m[0][0] = v26;
  v27 = *&this->m_worldToView.m_flMatVal[0][2];
  *&worldToView.m[3][2] = 0x3F80000000000000LL;
  *&worldToView.m[0][2] = v27;
  *&worldToView.m[1][0] = *&this->m_worldToView.m_flMatVal[1][0];
  *&worldToView.m[2][0] = *&this->m_worldToView.m_flMatVal[2][0];
  VMatrix::InverseGeneral(&worldToView, &viewToWorld);
  v28 = *&viewToWorld.m[0][0];
  this->m_camera.m_vOrigin.x = viewToWorld.m[0][3];
  v29 = viewToWorld.m[1][3];
  *&this->m_cameraToWorld.m_flMatVal[0][0] = v28;
  v30 = *&viewToWorld.m[0][2];
  this->m_camera.m_vOrigin.y = v29;
  this->m_camera.m_vOrigin.z = viewToWorld.m[2][3];
  *&this->m_cameraToWorld.m_flMatVal[0][2] = v30;
  *&this->m_cameraToWorld.m_flMatVal[1][0] = *&viewToWorld.m[1][0];
  *&this->m_cameraToWorld.m_flMatVal[2][0] = *&viewToWorld.m[2][0];
}


// CFrustum::BuildShadowFrustum  (line 562, @0x00000000031b2160, libserver.so)  // inlines: GetTranslation, Init, MatrixGetColumn, SetProj, SetView, V3Mul, VMatrix, memcpy, operator=
// calls: VMatrix::operator=, CFrustum::CalcViewProj, VMatrix::InverseGeneral, MatrixBuildTranslation, VMatrix::operator*, ExtractClipPlanesFromNonTransposedMatrix, Frustum_t::SetPlanes
void __fastcall CFrustum::BuildShadowFrustum(
        CFrustum *const this,
        const VMatrix *const mWorldToView,
        const VMatrix *const mProj)
{
  VMatrix *p_m_projection; // r12
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  vec_t v10; // xmm2_4
  __int64 v11; // rax
  vec_t v12; // xmm2_4
  __int64 v13; // rax
  vec_t v14; // xmm2_4
  __int64 v15; // rax
  vec_t v16; // xmm2_4
  __int64 v17; // rax
  vec_t v18; // xmm2_4
  __int64 v19; // rax
  vec_t v20; // xmm2_4
  float v21; // xmm7_4
  float v22; // xmm6_4
  float v23; // xmm2_4
  float v24; // xmm15_4
  float v25; // xmm4_4
  float v26; // xmm8_4
  float v27; // xmm3_4
  float v28; // xmm5_4
  float v29; // xmm14_4
  float v30; // xmm4_4
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm11_4
  float v34; // xmm12_4
  float v35; // xmm9_4
  float v36; // xmm0_4
  float v37; // xmm3_4
  float v38; // xmm10_4
  float v39; // xmm4_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  VMatrix worldToView; // [rsp+10h] [rbp-210h] BYREF
  VMatrix viewToWorld; // [rsp+50h] [rbp-1D0h] BYREF
  VMatrix projToView; // [rsp+90h] [rbp-190h] BYREF
  VMatrix worldToCamLocalWorld; // [rsp+D0h] [rbp-150h] BYREF
  VMatrix worldToCamLocalWorldToView; // [rsp+110h] [rbp-110h] BYREF
  VMatrix shadowCamLocalWorldToViewProj; // [rsp+150h] [rbp-D0h] BYREF
  VPlane pSixPlanes[6]; // [rsp+190h] [rbp-90h] BYREF

  p_m_projection = &this->m_projection;
  this->m_worldToView = *&mWorldToView->m[0][0];
  VMatrix::operator=(&this->m_projection, mProj);
  CFrustum::CalcViewProj(this);
  v5 = *&this->m_worldToView.m_flMatVal[0][0];
  v6 = *&this->m_worldToView.m_flMatVal[2][2];
  *&worldToView.m[3][0] = 0;
  *&worldToView.m[0][0] = v5;
  v7 = *&this->m_worldToView.m_flMatVal[0][2];
  *&worldToView.m[3][2] = 0x3F80000000000000LL;
  *&worldToView.m[0][2] = v7;
  v8 = *&this->m_worldToView.m_flMatVal[1][0];
  *&worldToView.m[2][2] = v6;
  *&worldToView.m[1][0] = v8;
  *&worldToView.m[1][2] = *&this->m_worldToView.m_flMatVal[1][2];
  *&worldToView.m[2][0] = *&this->m_worldToView.m_flMatVal[2][0];
  VMatrix::InverseGeneral(&worldToView, &viewToWorld);
  v9 = *&viewToWorld.m[0][0];
  this->m_camera.m_vOrigin.x = viewToWorld.m[0][3];
  v10 = viewToWorld.m[1][3];
  *&this->m_cameraToWorld.m_flMatVal[0][0] = v9;
  v11 = *&viewToWorld.m[0][2];
  this->m_camera.m_vOrigin.y = v10;
  this->m_camera.m_vOrigin.z = viewToWorld.m[2][3];
  v12 = viewToWorld.m[0][2];
  *&this->m_cameraToWorld.m_flMatVal[0][2] = v11;
  v13 = *&viewToWorld.m[1][0];
  this->m_forward.x = v12;
  this->m_forward.y = viewToWorld.m[1][2];
  v14 = viewToWorld.m[2][2];
  *&this->m_cameraToWorld.m_flMatVal[1][0] = v13;
  v15 = *&viewToWorld.m[1][2];
  this->m_forward.z = v14;
  this->m_left.x = viewToWorld.m[0][0];
  v16 = viewToWorld.m[1][0];
  *&this->m_cameraToWorld.m_flMatVal[1][2] = v15;
  v17 = *&viewToWorld.m[2][0];
  this->m_left.y = v16;
  this->m_left.z = viewToWorld.m[2][0];
  v18 = viewToWorld.m[0][1];
  *&this->m_cameraToWorld.m_flMatVal[2][0] = v17;
  v19 = *&viewToWorld.m[2][2];
  this->m_up.x = v18;
  v20 = viewToWorld.m[1][1];
  *&this->m_cameraToWorld.m_flMatVal[2][2] = v19;
  this->m_up.y = v20;
  this->m_up.z = viewToWorld.m[2][1];
  VMatrix::InverseGeneral(p_m_projection, &projToView);
  v21 = projToView.m[3][0];
  v22 = projToView.m[3][1];
  v23 = projToView.m[3][1] * 0.0;
  v24 = projToView.m[3][2];
  v25 = projToView.m[3][0] * 0.0;
  v26 = projToView.m[2][1];
  v27 = projToView.m[2][0] * 0.0;
  v28 = projToView.m[3][2] * 0.0;
  this->m_camera.m_flAspect = 1.0;
  v29 = projToView.m[2][2];
  this->m_flClipSpaceTopRightX = 1.0;
  v30 = v25 + v23;
  v31 = projToView.m[3][3];
  this->m_flClipSpaceTopRightY = 1.0;
  v32 = v27 + (v26 * 0.0);
  v33 = projToView.m[0][2] * 0.0;
  v34 = projToView.m[0][0];
  v35 = projToView.m[1][2] * 0.0;
  v36 = (0.0 * v29) + v32;
  v37 = (v32 + v29) + projToView.m[2][3];
  v38 = projToView.m[1][1];
  this->m_camera.m_flZNear = (1.0 / ((v30 + v28) + v31)) * (v36 + projToView.m[2][3]);
  this->m_camera.m_flZFar = (1.0 / ((v30 + v24) + v31)) * v37;
  this->m_camera.m_flFOVX = -1.0;
  this->m_flClipSpaceBottomLeftX = -1.0;
  this->m_flClipSpaceBottomLeftY = -1.0;
  v39 = 1.0 / (((-v21 - v22) + v28) + v31);
  v40 = 1.0 / (((v22 + v21) + v28) + v31);
  v41 = ((((-projToView.m[1][0] - projToView.m[1][1]) + v35) + projToView.m[1][3]) * v39)
      - ((((v38 + projToView.m[1][0]) + v35) + projToView.m[1][3]) * v40);
  this->m_camera.m_flWidth = fabs(
                               ((((-v34 - projToView.m[0][1]) + v33) + projToView.m[0][3]) * v39)
                             - ((((v34 + projToView.m[0][1]) + v33) + projToView.m[0][3]) * v40));
  this->m_camera.m_flHeight = fabs(v41);
  MatrixBuildTranslation(
    &worldToCamLocalWorld,
    this->m_camera.m_vOrigin.x,
    this->m_camera.m_vOrigin.y,
    this->m_camera.m_vOrigin.z,
    v39);
  VMatrix::operator*(&worldToCamLocalWorldToView, &worldToView, &worldToCamLocalWorld);
  VMatrix::operator*(&shadowCamLocalWorldToViewProj, p_m_projection, &worldToCamLocalWorldToView);
  this->m_bUseD3DClippingRange = 1;
  ExtractClipPlanesFromNonTransposedMatrix(&shadowCamLocalWorldToViewProj, pSixPlanes, 1);
  Frustum_t::SetPlanes(&this->m_frustumStruct, pSixPlanes);
}


// CFrustum::CalcFarPlaneCameraRelativePoints  (line 626, @0x00000000031b1150, libserver.so)
// calls: CalcFarPlaneCameraRelativePoints
void __fastcall CFrustum::CalcFarPlaneCameraRelativePoints(
        const CFrustum *const this,
        Vector *p4PointsOut,
        float a3,
        float flFarPlane,
        float flClipSpaceBottomLeftX,
        float flClipSpaceBottomLeftY,
        float flClipSpaceTopRightX,
        float flClipSpaceTopRightY)
{
  float m_flAspect; // xmm2_4
  float m_flFOVX; // xmm1_4
  Vector vForward; // [rsp+0h] [rbp-30h] BYREF
  Vector vUp; // [rsp+10h] [rbp-20h] BYREF
  Vector vLeft; // [rsp+20h] [rbp-10h] BYREF

  m_flAspect = this->m_camera.m_flAspect;
  m_flFOVX = this->m_camera.m_flFOVX;
  vForward = this->m_forward;
  vUp = this->m_up;
  vLeft = this->m_left;
  CalcFarPlaneCameraRelativePoints(
    p4PointsOut,
    &vForward,
    &vUp,
    &vLeft,
    a3,
    m_flFOVX,
    m_flAspect,
    flFarPlane,
    flClipSpaceBottomLeftX,
    flClipSpaceBottomLeftY,
    flClipSpaceTopRightX);
}


// Camera_t::ComputeGeometry  (line 643, @0x00000000031b11d0, libserver.so)  // inlines: DEG2RAD, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: tanf
// callers: Camera_t::ComputeGeometry, CFrustum::ComputeBounds
void __fastcall Camera_t::ComputeGeometry(
        const Camera_t *const this,
        Vector *pVertsOut8,
        const Vector *const vForward,
        const Vector *const vLeft,
        const Vector *const vUp)
{
  float m_flZFar; // xmm8_4
  float z; // xmm9_4
  float v11; // xmm0_4
  float y; // xmm11_4
  float v13; // xmm6_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float m_flFOVX; // xmm0_4
  float v17; // xmm4_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm13_4
  float v21; // xmm14_4
  float v22; // xmm9_4
  float v23; // xmm11_4
  float v24; // xmm5_4
  float v25; // xmm10_4
  float v26; // xmm9_4
  float v27; // xmm1_4
  float v28; // xmm15_4
  float v29; // xmm14_4
  float v30; // xmm7_4
  float v31; // xmm6_4
  float v32; // xmm12_4
  float v33; // xmm11_4
  float v34; // xmm5_4
  float v35; // xmm9_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm4_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float m_flWidth; // xmm0_4
  float m_flHeight; // xmm9_4
  float v43; // [rsp+8h] [rbp-48h]
  float v44; // [rsp+Ch] [rbp-44h]
  float v45; // [rsp+10h] [rbp-40h]
  float v46; // [rsp+14h] [rbp-3Ch]
  float v47; // [rsp+18h] [rbp-38h]
  float v48; // [rsp+1Ch] [rbp-34h]
  float v49; // [rsp+20h] [rbp-30h]
  float v50; // [rsp+24h] [rbp-2Ch]
  float v51; // [rsp+28h] [rbp-28h]
  float m_flZNear; // [rsp+2Ch] [rbp-24h]
  float v53; // [rsp+2Ch] [rbp-24h]

  m_flZFar = this->m_flZFar;
  z = vForward->z;
  v11 = this->m_vOrigin.z;
  y = vForward->y;
  v13 = this->m_vOrigin.y;
  v14 = (this->m_flZNear * z) + v11;
  v15 = (this->m_flZNear * y) + v13;
  v48 = v11 + (z * m_flZFar);
  m_flFOVX = this->m_flFOVX;
  v17 = (this->m_flZNear * vForward->x) + this->m_vOrigin.x;
  v18 = (vForward->x * m_flZFar) + this->m_vOrigin.x;
  v49 = v13 + (y * m_flZFar);
  if ( m_flFOVX == -1.0 )
  {
    m_flWidth = this->m_flWidth;
    m_flHeight = this->m_flHeight;
    v28 = vLeft->x * m_flWidth;
    v32 = vUp->x * m_flHeight;
    v33 = vUp->y * m_flHeight;
    v50 = v28;
    v35 = m_flHeight * vUp->z;
    v29 = vLeft->y * m_flWidth;
    v51 = v29;
    v30 = v32;
    v53 = m_flWidth * vLeft->z;
    v31 = v33;
    v47 = v53;
    v34 = v35;
  }
  else
  {
    v43 = (vForward->x * m_flZFar) + this->m_vOrigin.x;
    v44 = v14;
    v45 = (this->m_flZNear * y) + v13;
    v46 = (this->m_flZNear * vForward->x) + this->m_vOrigin.x;
    m_flZNear = this->m_flZNear;
    v19 = tanf((m_flFOVX * 0.017453292) * 0.5);
    v20 = vLeft->z;
    v21 = vLeft->y;
    v22 = 1.0 / this->m_flAspect;
    v23 = vUp->y;
    v24 = (m_flZNear * v19) * v22;
    v25 = vUp->z;
    v14 = v44;
    v26 = v22 * (m_flZFar * v19);
    v15 = v45;
    v27 = (m_flZNear * v19) * v21;
    v50 = (m_flZNear * v19) * vLeft->x;
    v17 = v46;
    v28 = vLeft->x * (m_flZFar * v19);
    v53 = (m_flZNear * v19) * v20;
    v29 = v21 * (m_flZFar * v19);
    v30 = v24 * vUp->x;
    v51 = v27;
    v18 = v43;
    v31 = v24 * v23;
    v32 = vUp->x * v26;
    v33 = v23 * v26;
    v47 = (m_flZFar * v19) * v20;
    v34 = v24 * v25;
    v35 = v26 * v25;
  }
  v36 = v53 + v14;
  v37 = v14 - v53;
  pVertsOut8->x = (v50 + v17) - v30;
  pVertsOut8[2].x = (v50 + v17) + v30;
  pVertsOut8->y = (v51 + v15) - v31;
  pVertsOut8[2].y = (v51 + v15) + v31;
  pVertsOut8[2].z = v36 + v34;
  pVertsOut8->z = v36 - v34;
  pVertsOut8[3].x = (v17 - v50) + v30;
  pVertsOut8[1].x = (v17 - v50) - v30;
  v38 = v28 + v18;
  v39 = v28 + v18;
  v40 = v18 - v28;
  pVertsOut8[3].y = (v15 - v51) + v31;
  pVertsOut8[1].y = (v15 - v51) - v31;
  pVertsOut8[4].x = v39 - v32;
  pVertsOut8[3].z = v37 + v34;
  pVertsOut8[1].z = v37 - v34;
  pVertsOut8[5].x = v40 - v32;
  pVertsOut8[4].y = (v49 + v29) - v33;
  pVertsOut8[6].x = v38 + v32;
  pVertsOut8[6].y = (v49 + v29) + v33;
  pVertsOut8[4].z = (v48 + v47) - v35;
  pVertsOut8[6].z = (v48 + v47) + v35;
  pVertsOut8[7].x = v32 + v40;
  pVertsOut8[5].y = (v49 - v29) - v33;
  pVertsOut8[7].y = v33 + (v49 - v29);
  pVertsOut8[5].z = (v48 - v47) - v35;
  pVertsOut8[7].z = v35 + (v48 - v47);
}


// Camera_t::ComputeGeometry  (line 684, @0x00000000031b1580, libserver.so)
// calls: AngleVectorsFLU, Camera_t::ComputeGeometry
void __fastcall Camera_t::ComputeGeometry(const Camera_t *const this, Vector *pVertsOut8)
{
  Vector vForward; // [rsp+0h] [rbp-60h] BYREF
  Vector vLeft; // [rsp+10h] [rbp-50h] BYREF
  Vector vUp; // [rsp+20h] [rbp-40h] BYREF

  AngleVectorsFLU(&this->m_angles, &vForward, &vLeft, &vUp);
  Camera_t::ComputeGeometry(this, pVertsOut8, &vForward, &vLeft, &vUp);
}


// CFrustum::ComputeBounds  (line 692, @0x00000000031b15e0, libserver.so)
// calls: ClearBounds, Camera_t::ComputeGeometry, AddPointToBounds
void __fastcall CFrustum::ComputeBounds(const CFrustum *const this, Vector *pMins, Vector *pMaxs)
{
  Vector *v6; // rbx
  Vector vPts[8]; // [rsp+0h] [rbp-80h] BYREF
  char v8; // [rsp+60h] [rbp-20h] BYREF

  v6 = vPts;
  ClearBounds(pMins, pMaxs);
  Camera_t::ComputeGeometry(&this->m_camera, vPts, &this->m_forward, &this->m_left, &this->m_up);
  do
    AddPointToBounds(v6++, pMins, pMaxs);
  while ( v6 != &v8 );
}


// CFrustum::CalcViewProj  (line 709, @0x00000000031b1660, libserver.so)  // inlines: Init, InvertVMatrix, VMatrix, memcpy
// calls: VMatrix::operator*, VMatrix::operator=, VMatrix::InverseGeneral
// callers: CPointCamera::CalcFrustum, CFrustum::UpdateProjectionFromCamera, CFrustum::BuildShadowFrustum
void __fastcall CFrustum::CalcViewProj(CFrustum *const this)
{
  VMatrix *p_m_projection; // r12
  __int64 v3; // rcx
  VMatrix *p_m_viewProj; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  VMatrix v7; // [rsp-A0h] [rbp-A8h] BYREF
  VMatrix v8; // [rsp-60h] [rbp-68h] BYREF

  p_m_projection = &this->m_projection;
  *&v7.m[3][0] = 0;
  v3 = *&this->m_worldToView.m_flMatVal[0][0];
  p_m_viewProj = &this->m_viewProj;
  v5 = *&this->m_worldToView.m_flMatVal[2][2];
  *&v7.m[3][2] = 0x3F80000000000000LL;
  *&v7.m[0][0] = v3;
  v6 = *&this->m_worldToView.m_flMatVal[0][2];
  *&v7.m[2][2] = v5;
  *&v7.m[0][2] = v6;
  qmemcpy(v7.m[1], this->m_worldToView.m_flMatVal[1], 24);
  VMatrix::operator*(&v8, &this->m_projection, &v7);
  VMatrix::operator=(p_m_viewProj, &v8);
  VMatrix::InverseGeneral(p_m_viewProj, &this->m_invViewProj);
  VMatrix::InverseGeneral(p_m_projection, &this->m_invProjection);
}


// CFrustum::ComputeScreenSize  (line 716, @0x00000000031b2620, libserver.so)  // inlines: Clamp<float>, DEG2RAD, FastSqrt, Length, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-=
// calls: tanf
float __fastcall CFrustum::ComputeScreenSize(const CFrustum *const this, Vector vecOrigin, float flRadius)
{
  float m_flFOVX; // xmm0_4
  float v4; // xmm1_4
  float result; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float flDist; // [rsp+Ch] [rbp-14h]
  float v12[4]; // [rsp+10h] [rbp-10h]

  *v12 = *&vecOrigin.x;
  m_flFOVX = this->m_camera.m_flFOVX;
  if ( m_flFOVX == -1.0 )
  {
    v4 = 0.0;
    result = (flRadius + flRadius) / this->m_camera.m_flWidth;
    if ( result < 0.0 )
      return v4;
    v4 = 1.0;
    if ( result > 1.0 )
      return v4;
  }
  else
  {
    v6 = (((v12[0] - this->m_camera.m_vOrigin.x) * (v12[0] - this->m_camera.m_vOrigin.x))
        + ((v12[1] - this->m_camera.m_vOrigin.y) * (v12[1] - this->m_camera.m_vOrigin.y)))
       + ((vecOrigin.z - this->m_camera.m_vOrigin.z) * (vecOrigin.z - this->m_camera.m_vOrigin.z));
    v4 = 1.0;
    v7 = fsqrt(v6);
    if ( flRadius > v7 )
      return v4;
    flDist = v7;
    v8 = tanf((m_flFOVX * 0.5) * 0.017453292);
    v4 = 0.0;
    v9 = flRadius / (v8 * flDist);
    result = v9;
    if ( v9 < 0.0 )
      return v4;
    v4 = 1.0;
    if ( v9 > 1.0 )
      return v4;
  }
  return result;
}


// CFrustum::ViewToWorld  (line 733, @0x00000000031b2710, libserver.so)
// calls: Vector3DMultiplyPositionProjective
void __fastcall CFrustum::ViewToWorld(
        const CFrustum *const this,
        const Vector2D *const vViewMinusOneToOne,
        Vector *pOutWorld)
{
  vec_t x; // xmm0_4
  Vector vView3D; // [rsp+0h] [rbp-10h] BYREF

  x = vViewMinusOneToOne->x;
  vView3D.z = 0.0;
  vView3D.x = x;
  vView3D.y = vViewMinusOneToOne->y;
  Vector3DMultiplyPositionProjective(&this->m_invViewProj, &vView3D, pOutWorld);
}


// CFrustum::WorldToView  (line 744, @0x00000000031b2750, libserver.so)  // inlines: operator=
// calls: Vector3DMultiplyPositionProjective
void __fastcall CFrustum::WorldToView(
        const CFrustum *const this,
        const Vector *const vWorld,
        Vector2D *pOutViewMinusOneToOne)
{
  Vector vView3D; // [rsp+0h] [rbp-20h] BYREF

  Vector3DMultiplyPositionProjective(&this->m_viewProj, vWorld, &vView3D);
  pOutViewMinusOneToOne->x = vView3D.x;
  pOutViewMinusOneToOne->y = vView3D.y;
}


// CFrustum::BuildRay  (line 753, @0x00000000031b2790, libserver.so)  // inlines: GetRow, VectorSubtract, ViewForward, ViewToWorld, operator-, operator=
// calls: Vector3DMultiplyPositionProjective, VectorNormalize
void __fastcall CFrustum::BuildRay(
        const CFrustum *const this,
        const Vector2D *const vViewMinusOneToOne,
        Vector *pOutRayStart,
        Vector *pOutRayDirection)
{
  vec_t v7; // xmm2_4
  vec_t v8; // xmm0_4
  float y; // xmm2_4
  float x; // xmm3_4
  vec_t v11; // xmm0_4
  float v12; // [rsp+4h] [rbp-4Ch]
  float z; // [rsp+8h] [rbp-48h]
  float v14; // [rsp+Ch] [rbp-44h]
  Vector vClickPoint; // [rsp+10h] [rbp-40h] BYREF
  Vector vRay; // [rsp+20h] [rbp-30h] BYREF

  vRay.z = 0.0;
  vRay.x = vViewMinusOneToOne->x;
  vRay.y = vViewMinusOneToOne->y;
  Vector3DMultiplyPositionProjective(&this->m_invViewProj, &vRay, &vClickPoint);
  if ( this->m_camera.m_flFOVX == -1.0 )
  {
    *pOutRayStart = vClickPoint;
    v7 = this->m_worldToView.m_flMatVal[2][0];
    v8 = this->m_worldToView.m_flMatVal[2][2];
    vRay.y = this->m_worldToView.m_flMatVal[2][1];
    vRay.x = v7;
    vRay.z = v8;
    VectorNormalize(&vRay);
    y = vRay.y;
    x = vRay.x;
    pOutRayDirection->z = -vRay.z;
    pOutRayDirection->y = -y;
    pOutRayDirection->x = -x;
  }
  else
  {
    v14 = this->m_camera.m_vOrigin.x;
    v12 = this->m_camera.m_vOrigin.y;
    z = this->m_camera.m_vOrigin.z;
    vRay.y = vClickPoint.y - v12;
    vRay.z = vClickPoint.z - z;
    vRay.x = vClickPoint.x - v14;
    VectorNormalize(&vRay);
    v11 = vRay.x;
    pOutRayStart->x = v14;
    pOutRayStart->y = v12;
    pOutRayStart->z = z;
    pOutRayDirection->x = v11;
    pOutRayDirection->y = vRay.y;
    pOutRayDirection->z = vRay.z;
  }
}


