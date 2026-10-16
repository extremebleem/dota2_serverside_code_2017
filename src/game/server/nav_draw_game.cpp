
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// NavDrawLine  (line 40, @0x0000000002ecfc70, libserver.so)
// calls: NavDrawGetColor, NavDrawLine
void __fastcall NavDrawLine(
        const Vector *const vFrom,
        const Vector *const vTo,
        NavEditColor navColor,
        float flDurationOverride)
{
  Color Color; // eax

  Color = NavDrawGetColor(navColor);
  NavDrawLine(vFrom, vTo, Color, LODWORD(flDurationOverride));
}


// NavDrawLine  (line 48, @0x0000000002ecfbd0, libserver.so)  // inlines: VectorAdd, operator+
// calls: NDebugOverlay::Line
// callers: NavDrawLine, CNavDrawArea::DrawAreaConnection, CNavDrawArea::DrawArea_Internal, CNavDrawArea::DrawConnectedAreas
void __fastcall NavDrawLine(const Vector *const vFrom, const Vector *const vTo, Color color, __m128 flDurationOverride)
{
  __m128 v4; // xmm2
  float v5; // xmm0_4
  float z; // xmm3_4
  float x; // xmm5_4
  float y; // xmm3_4
  vec_t v9; // xmm1_4
  Vector v10; // [rsp-20h] [rbp-28h] BYREF
  Vector v11; // [rsp-10h] [rbp-18h] BYREF

  v4 = _mm_cmple_ss(0LL, flDurationOverride);
  LODWORD(v5) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v4, 0x3E19999Au).m128_f32[0])
              | flDurationOverride.m128_i32[0] & v4.m128_i32[0];
  z = vTo->z;
  x = vTo->x;
  v11.y = vTo->y + 0.0;
  v4.m128_f32[0] = vFrom->z + 1.0;
  v11.z = z + 1.0;
  y = vFrom->y;
  v11.x = x + 0.0;
  LODWORD(v10.z) = v4.m128_i32[0];
  v9 = vFrom->x + 0.0;
  v10.y = y + 0.0;
  v10.x = v9;
  NDebugOverlay::Line(&v10, &v11, color._color[0], color._color[1], color._color[2], 0, v5);
}


// NavDrawTriangle  (line 58, @0x0000000002ecfcb0, libserver.so)  // inlines: NavDrawLine, VectorAdd, operator+
// calls: NavDrawGetColor, NDebugOverlay::Line
// callers: CNavDrawArea::DrawArea_Internal
void __fastcall NavDrawTriangle(
        const Vector *const vPoint1,
        const Vector *const vPoint2,
        const Vector *const vPoint3,
        NavEditColor navColor)
{
  Color Color; // eax
  vec_t v9; // xmm3_4
  vec_t v10; // xmm4_4
  vec_t v11; // xmm0_4
  float y; // xmm3_4
  vec_t v13; // xmm4_4
  Color v14; // eax
  vec_t v15; // xmm3_4
  vec_t v16; // xmm4_4
  float z; // xmm0_4
  float v18; // xmm3_4
  float x; // xmm4_4
  Color v20; // eax
  float v21; // xmm4_4
  vec_t v22; // xmm3_4
  vec_t v23; // xmm2_4
  vec_t v24; // xmm0_4
  vec_t v25; // xmm1_4
  Vector target; // [rsp+10h] [rbp-50h] BYREF
  Vector origin; // [rsp+20h] [rbp-40h] BYREF

  Color = NavDrawGetColor(navColor);
  v9 = vPoint2->y + 0.0;
  v10 = vPoint2->x + 0.0;
  target.z = vPoint2->z + 1.0;
  v11 = vPoint1->z + 1.0;
  target.y = v9;
  y = vPoint1->y;
  target.x = v10;
  v13 = vPoint1->x + 0.0;
  origin.z = v11;
  origin.x = v13;
  origin.y = y + 0.0;
  NDebugOverlay::Line(&origin, &target, Color._color[0], Color._color[1], Color._color[2], 0, 0.15000001);
  v14 = NavDrawGetColor(navColor);
  v15 = vPoint3->y + 0.0;
  v16 = vPoint3->x + 0.0;
  target.z = vPoint3->z + 1.0;
  z = vPoint2->z;
  target.y = v15;
  v18 = vPoint2->y;
  target.x = v16;
  x = vPoint2->x;
  origin.z = z + 1.0;
  origin.y = v18 + 0.0;
  origin.x = x + 0.0;
  NDebugOverlay::Line(&origin, &target, v14._color[0], v14._color[1], v14._color[2], 0, 0.15000001);
  v20 = NavDrawGetColor(navColor);
  v21 = vPoint3->x;
  v22 = vPoint3->y + 0.0;
  target.z = vPoint3->z + 1.0;
  v23 = vPoint1->z + 1.0;
  v24 = vPoint1->y + 0.0;
  target.y = v22;
  v25 = vPoint1->x + 0.0;
  target.x = v21 + 0.0;
  origin.z = v23;
  origin.y = v24;
  origin.x = v25;
  NDebugOverlay::Line(&origin, &target, v20._color[0], v20._color[1], v20._color[2], 0, 0.15000001);
}


// NavDrawFilledTriangle  (line 67, @0x0000000002ecfeb0, libserver.so)
// calls: NavDrawGetColor, NDebugOverlay::Triangle
void __fastcall NavDrawFilledTriangle(
        const Vector *const vPoint1,
        const Vector *const vPoint2,
        const Vector *const vPoint3,
        NavEditColor navColor,
        bool bDark)
{
  unsigned int Color; // eax
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // bl
  unsigned int v12; // r9d

  Color = NavDrawGetColor(navColor);
  v10 = Color;
  v11 = BYTE1(Color);
  v12 = HIWORD(Color);
  if ( bDark )
  {
    v10 = Color >> 1;
    v11 = BYTE1(Color) >> 1;
    LOBYTE(v12) = BYTE2(Color) >> 1;
  }
  NDebugOverlay::Triangle(vPoint1, vPoint2, vPoint3, v10, v11, v12, 0.01023, 255, 1);
}


// NavDrawHorizontalArrow  (line 81, @0x0000000002ecff30, libserver.so)  // inlines: VectorAdd, operator+
// calls: NavDrawGetColor, NDebugOverlay::HorzArrow
void __fastcall NavDrawHorizontalArrow(
        const Vector *const vFrom,
        const Vector *const vTo,
        float flWidth,
        NavEditColor navColor)
{
  unsigned int Color; // eax
  unsigned __int8 v7; // r13
  vec_t v8; // xmm0_4
  vec_t v9; // xmm4_4
  float y; // xmm1_4
  vec_t v11; // xmm0_4
  vec_t v12; // xmm4_4
  float x; // xmm4_4
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4
  vec_t v16; // xmm3_4
  vec_t v17; // xmm2_4
  unsigned int v18; // [rsp+14h] [rbp-5Ch]
  unsigned __int8 v19; // [rsp+18h] [rbp-58h]
  Vector startPos; // [rsp+20h] [rbp-50h] BYREF
  Vector endPos; // [rsp+30h] [rbp-40h] BYREF

  Color = NavDrawGetColor(navColor);
  v7 = Color;
  v8 = vTo->z + 1.0;
  v9 = vTo->x + 0.0;
  endPos.y = vTo->y + 0.0;
  y = vFrom->y;
  endPos.z = v8;
  v11 = vFrom->z + 1.0;
  endPos.x = v9;
  v12 = vFrom->x + 0.0;
  startPos.y = y + 0.0;
  startPos.z = v11;
  startPos.x = v12;
  v18 = HIWORD(Color);
  v19 = BYTE1(Color);
  NDebugOverlay::HorzArrow(
    &startPos,
    &endPos,
    flWidth,
    Color >> 1,
    BYTE1(Color) >> 1,
    BYTE2(Color) >> 1,
    255,
    0.01023,
    1);
  x = vTo->x;
  v14 = vTo->y + 0.0;
  endPos.z = vTo->z + 1.0;
  v15 = vFrom->y + 0.0;
  endPos.y = v14;
  v16 = vFrom->z + 1.0;
  endPos.x = x + 0.0;
  v17 = vFrom->x + 0.0;
  startPos.y = v15;
  startPos.z = v16;
  startPos.x = v17;
  NDebugOverlay::HorzArrow(&startPos, &endPos, flWidth, v7, v19, v18, 255, 0.01023, 0);
}


// NavDrawDashedLine  (line 91, @0x0000000002ed00c0, libserver.so)  // inlines: NormalizeInPlace, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: NavDrawGetColor, VectorNormalize, NDebugOverlay::Line
void __fastcall NavDrawDashedLine(const Vector *const vFrom, const Vector *const vTo, NavEditColor navColor)
{
  Color Color; // ebx
  vec_t v6; // xmm0_4
  vec_t v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float x; // xmm12_4
  float v11; // xmm2_4
  float y; // xmm11_4
  float z; // xmm9_4
  float flDistance; // [rsp+1Ch] [rbp-84h]
  float v15; // [rsp+3Ch] [rbp-64h]
  Vector vUnit; // [rsp+40h] [rbp-60h] BYREF
  Vector origin; // [rsp+50h] [rbp-50h] BYREF
  Vector target; // [rsp+60h] [rbp-40h] BYREF
  Vector v19; // 0:^20.12
  Vector v20; // 0:^30.12

  Color = NavDrawGetColor(navColor);
  v6 = vTo->z - vFrom->z;
  v7 = vTo->x - vFrom->x;
  vUnit.y = vTo->y - vFrom->y;
  vUnit.z = v6;
  vUnit.x = v7;
  v8 = VectorNormalize(&vUnit);
  if ( v8 > 0.0 )
  {
    v9 = 0.0;
    v15 = v8;
    do
    {
      x = vFrom->x;
      v11 = fminf(v9 + 7.0, v15);
      y = vFrom->y;
      z = vFrom->z;
      origin.x = ((v9 * vUnit.x) + vFrom->x) + 0.0;
      target.x = ((vUnit.x * v11) + x) + 0.0;
      target.y = ((vUnit.y * v11) + y) + 0.0;
      flDistance = v9 + 10.0;
      target.z = ((v11 * vUnit.z) + z) + 1.0;
      v19 = target;
      origin.y = ((v9 * vUnit.y) + y) + 0.0;
      origin.z = ((v9 * vUnit.z) + z) + 1.0;
      v20 = origin;
      NDebugOverlay::Line(
        &origin,
        &target,
        Color._color[0] >> 1,
        Color._color[1] >> 1,
        Color._color[2] >> 1,
        1,
        0.01023);
      target = v19;
      origin = v20;
      NDebugOverlay::Line(&origin, &target, Color._color[0], Color._color[1], Color._color[2], 0, 0.01023);
      v9 = flDistance;
    }
    while ( v15 > flDistance );
  }
}


// NavDrawVolume  (line 121, @0x0000000002ed0330, libserver.so)  // inlines: NavDrawLine, VectorAdd, operator+
// calls: NavDrawGetColor, NDebugOverlay::Line
// callers: CNavEditor::DrawEditMode
void __fastcall NavDrawVolume(const Vector *const vMin, const Vector *const vMax, int zMidline, NavEditColor navColor)
{
  float x; // r14d
  Color Color; // eax
  Color v10; // eax
  Color v11; // eax
  Color v12; // eax
  Color v13; // eax
  Color v14; // eax
  Color v15; // eax
  Color v16; // eax
  Color v17; // eax
  Color v18; // eax
  Color v19; // eax
  Color v20; // eax
  Color v21; // eax
  Color v22; // eax
  Color v23; // eax
  Color v24; // eax
  float z; // [rsp+10h] [rbp-60h]
  float v26; // [rsp+10h] [rbp-60h]
  float v27; // [rsp+10h] [rbp-60h]
  float v28; // [rsp+10h] [rbp-60h]
  float v29; // [rsp+10h] [rbp-60h]
  float v30; // [rsp+10h] [rbp-60h]
  float v31; // [rsp+10h] [rbp-60h]
  float v32; // [rsp+10h] [rbp-60h]
  float v33; // [rsp+10h] [rbp-60h]
  float v34; // [rsp+10h] [rbp-60h]
  float v35; // [rsp+10h] [rbp-60h]
  float v36; // [rsp+10h] [rbp-60h]
  float v37; // [rsp+14h] [rbp-5Ch]
  float v38; // [rsp+14h] [rbp-5Ch]
  float v39; // [rsp+14h] [rbp-5Ch]
  float v40; // [rsp+14h] [rbp-5Ch]
  float v41; // [rsp+14h] [rbp-5Ch]
  float v42; // [rsp+14h] [rbp-5Ch]
  float v43; // [rsp+14h] [rbp-5Ch]
  float v44; // [rsp+14h] [rbp-5Ch]
  float v45; // [rsp+14h] [rbp-5Ch]
  float v46; // [rsp+14h] [rbp-5Ch]
  float v47; // [rsp+14h] [rbp-5Ch]
  float v48; // [rsp+14h] [rbp-5Ch]
  float v49; // [rsp+14h] [rbp-5Ch]
  float v50; // [rsp+14h] [rbp-5Ch]
  float v51; // [rsp+14h] [rbp-5Ch]
  float y; // [rsp+18h] [rbp-58h]
  float v53; // [rsp+18h] [rbp-58h]
  float v54; // [rsp+18h] [rbp-58h]
  float v55; // [rsp+18h] [rbp-58h]
  float v56; // [rsp+18h] [rbp-58h]
  float v57; // [rsp+18h] [rbp-58h]
  float v58; // [rsp+18h] [rbp-58h]
  float v59; // [rsp+18h] [rbp-58h]
  float v60; // [rsp+18h] [rbp-58h]
  float v61; // [rsp+18h] [rbp-58h]
  float v62; // [rsp+18h] [rbp-58h]
  float v63; // [rsp+18h] [rbp-58h]
  float v64; // [rsp+18h] [rbp-58h]
  float v65; // [rsp+18h] [rbp-58h]
  float v66; // [rsp+18h] [rbp-58h]
  float v67; // [rsp+18h] [rbp-58h]
  float v68; // [rsp+1Ch] [rbp-54h]
  float v69; // [rsp+1Ch] [rbp-54h]
  float v70; // [rsp+1Ch] [rbp-54h]
  float v71; // [rsp+1Ch] [rbp-54h]
  float v72; // [rsp+1Ch] [rbp-54h]
  float v73; // [rsp+1Ch] [rbp-54h]
  float v74; // [rsp+1Ch] [rbp-54h]
  float v75; // [rsp+1Ch] [rbp-54h]
  float v76; // [rsp+1Ch] [rbp-54h]
  float v77; // [rsp+1Ch] [rbp-54h]
  float v78; // [rsp+1Ch] [rbp-54h]
  float v79; // [rsp+1Ch] [rbp-54h]
  float v80; // [rsp+1Ch] [rbp-54h]
  float v81; // [rsp+1Ch] [rbp-54h]
  float v82; // [rsp+1Ch] [rbp-54h]
  float v83; // [rsp+1Ch] [rbp-54h]
  Vector target; // [rsp+20h] [rbp-50h] BYREF
  Vector origin; // [rsp+30h] [rbp-40h] BYREF

  x = vMax->x;
  y = vMax->y;
  v68 = vMin->x;
  Color = NavDrawGetColor(navColor);
  target.x = v68 + 0.0;
  target.y = y + 0.0;
  origin.y = y + 0.0;
  target.z = zMidline + 1.0;
  origin.z = target.z;
  origin.x = x + 0.0;
  NDebugOverlay::Line(&origin, &target, Color._color[0], Color._color[1], Color._color[2], 0, 0.15000001);
  v37 = vMax->y;
  v53 = vMin->x;
  v69 = vMin->y;
  v10 = NavDrawGetColor(navColor);
  target.x = v53 + 0.0;
  origin.x = v53 + 0.0;
  target.z = zMidline + 1.0;
  origin.z = target.z;
  target.y = v37 + 0.0;
  origin.y = v69 + 0.0;
  NDebugOverlay::Line(&origin, &target, v10._color[0], v10._color[1], v10._color[2], 0, 0.15000001);
  v38 = vMin->y;
  v54 = vMax->x;
  v70 = vMin->x;
  v11 = NavDrawGetColor(navColor);
  target.y = v38 + 0.0;
  origin.y = v38 + 0.0;
  target.z = zMidline + 1.0;
  origin.z = target.z;
  target.x = v54 + 0.0;
  origin.x = v70 + 0.0;
  NDebugOverlay::Line(&origin, &target, v11._color[0], v11._color[1], v11._color[2], 0, 0.15000001);
  v39 = vMin->y;
  v55 = vMax->x;
  v71 = vMax->y;
  v12 = NavDrawGetColor(navColor);
  target.x = v55 + 0.0;
  origin.x = v55 + 0.0;
  target.y = v39 + 0.0;
  target.z = zMidline + 1.0;
  origin.y = v71 + 0.0;
  origin.z = target.z;
  NDebugOverlay::Line(&origin, &target, v12._color[0], v12._color[1], v12._color[2], 0, 0.15000001);
  z = vMin->z;
  v40 = vMax->y;
  v56 = vMin->x;
  v72 = vMax->x;
  v13 = NavDrawGetColor(navColor);
  target.z = z + 1.0;
  origin.z = z + 1.0;
  target.y = v40 + 0.0;
  target.x = v56 + 0.0;
  origin.x = v72 + 0.0;
  origin.y = v40 + 0.0;
  NDebugOverlay::Line(&origin, &target, v13._color[0], v13._color[1], v13._color[2], 0, 0.15000001);
  v26 = vMin->z;
  v41 = vMax->y;
  v57 = vMin->x;
  v73 = vMin->y;
  v14 = NavDrawGetColor(navColor);
  target.z = v26 + 1.0;
  origin.z = v26 + 1.0;
  target.x = v57 + 0.0;
  target.y = v41 + 0.0;
  origin.x = v57 + 0.0;
  origin.y = v73 + 0.0;
  NDebugOverlay::Line(&origin, &target, v14._color[0], v14._color[1], v14._color[2], 0, 0.15000001);
  v27 = vMin->z;
  v42 = vMin->y;
  v58 = vMax->x;
  v74 = vMin->x;
  v15 = NavDrawGetColor(navColor);
  target.z = v27 + 1.0;
  origin.z = v27 + 1.0;
  target.y = v42 + 0.0;
  target.x = v58 + 0.0;
  origin.x = v74 + 0.0;
  origin.y = v42 + 0.0;
  NDebugOverlay::Line(&origin, &target, v15._color[0], v15._color[1], v15._color[2], 0, 0.15000001);
  v28 = vMin->z;
  v43 = vMin->y;
  v59 = vMax->x;
  v75 = vMax->y;
  v16 = NavDrawGetColor(navColor);
  target.z = v28 + 1.0;
  origin.z = v28 + 1.0;
  target.x = v59 + 0.0;
  target.y = v43 + 0.0;
  origin.x = v59 + 0.0;
  origin.y = v75 + 0.0;
  NDebugOverlay::Line(&origin, &target, v16._color[0], v16._color[1], v16._color[2], 0, 0.15000001);
  v29 = vMax->z;
  v44 = vMax->y;
  v60 = vMin->x;
  v76 = vMax->x;
  v17 = NavDrawGetColor(navColor);
  target.z = v29 + 1.0;
  origin.z = v29 + 1.0;
  target.y = v44 + 0.0;
  target.x = v60 + 0.0;
  origin.x = v76 + 0.0;
  origin.y = v44 + 0.0;
  NDebugOverlay::Line(&origin, &target, v17._color[0], v17._color[1], v17._color[2], 0, 0.15000001);
  v30 = vMax->z;
  v45 = vMax->y;
  v61 = vMin->x;
  v77 = vMin->y;
  v18 = NavDrawGetColor(navColor);
  target.z = v30 + 1.0;
  origin.z = v30 + 1.0;
  target.x = v61 + 0.0;
  target.y = v45 + 0.0;
  origin.x = v61 + 0.0;
  origin.y = v77 + 0.0;
  NDebugOverlay::Line(&origin, &target, v18._color[0], v18._color[1], v18._color[2], 0, 0.15000001);
  v31 = vMax->z;
  v46 = vMin->y;
  v62 = vMax->x;
  v78 = vMin->x;
  v19 = NavDrawGetColor(navColor);
  target.z = v31 + 1.0;
  origin.z = v31 + 1.0;
  target.y = v46 + 0.0;
  target.x = v62 + 0.0;
  origin.x = v78 + 0.0;
  origin.y = v46 + 0.0;
  NDebugOverlay::Line(&origin, &target, v19._color[0], v19._color[1], v19._color[2], 0, 0.15000001);
  v32 = vMax->z;
  v47 = vMin->y;
  v63 = vMax->x;
  v79 = vMax->y;
  v20 = NavDrawGetColor(navColor);
  target.z = v32 + 1.0;
  origin.z = v32 + 1.0;
  target.x = v63 + 0.0;
  target.y = v47 + 0.0;
  origin.x = v63 + 0.0;
  origin.y = v79 + 0.0;
  NDebugOverlay::Line(&origin, &target, v20._color[0], v20._color[1], v20._color[2], 0, 0.15000001);
  v33 = vMax->z;
  v48 = vMax->y;
  v64 = vMax->x;
  v80 = vMin->z;
  v21 = NavDrawGetColor(navColor);
  target.y = v48 + 0.0;
  origin.y = v48 + 0.0;
  target.x = v64 + 0.0;
  target.z = v33 + 1.0;
  origin.x = v64 + 0.0;
  origin.z = v80 + 1.0;
  NDebugOverlay::Line(&origin, &target, v21._color[0], v21._color[1], v21._color[2], 0, 0.15000001);
  v34 = vMax->z;
  v49 = vMin->y;
  v65 = vMin->x;
  v81 = vMin->z;
  v22 = NavDrawGetColor(navColor);
  target.y = v49 + 0.0;
  origin.y = v49 + 0.0;
  target.x = v65 + 0.0;
  target.z = v34 + 1.0;
  origin.x = v65 + 0.0;
  origin.z = v81 + 1.0;
  NDebugOverlay::Line(&origin, &target, v22._color[0], v22._color[1], v22._color[2], 0, 0.15000001);
  v35 = vMax->z;
  v50 = vMin->y;
  v66 = vMax->x;
  v82 = vMin->z;
  v23 = NavDrawGetColor(navColor);
  target.y = v50 + 0.0;
  origin.y = v50 + 0.0;
  target.z = v35 + 1.0;
  origin.z = v82 + 1.0;
  target.x = v66 + 0.0;
  origin.x = v66 + 0.0;
  NDebugOverlay::Line(&origin, &target, v23._color[0], v23._color[1], v23._color[2], 0, 0.15000001);
  v36 = vMax->z;
  v83 = vMax->y;
  v51 = vMin->x;
  v67 = vMin->z;
  v24 = NavDrawGetColor(navColor);
  target.x = v51 + 0.0;
  origin.x = v51 + 0.0;
  target.y = v83 + 0.0;
  target.z = v36 + 1.0;
  origin.y = v83 + 0.0;
  origin.z = v67 + 1.0;
  NDebugOverlay::Line(&origin, &target, v24._color[0], v24._color[1], v24._color[2], 0, 0.15000001);
}


// CNavDrawPoly::DrawVertHotspot  (line 155, @0x0000000002ed0d80, libserver.so)  // inlines: GetBool, GetInt, NavDrawLine, VectorAdd, operator+
// calls: CNavPoly::GetVertHotspot, NDebugOverlay::Line
// callers: CNavDrawArea::DrawArea_Internal
void __fastcall CNavDrawPoly::DrawVertHotspot(const CNavPoly *const rPoly, int nVert, Color color)
{
  __int16 v3; // bx
  unsigned __int8 v4; // r15d^2
  unsigned int v5; // r15d
  Vector v6; // [rsp-20h] [rbp-88h] BYREF
  Vector v7; // [rsp-10h] [rbp-78h] BYREF
  Vector vHotspotVerts[4]; // [rsp+0h] [rbp-68h] BYREF

  if ( nav_draw_vert_hotspots.m_pParent->m_Value.m_nValue != 0 )
  {
    v3 = *color._color;
    v4 = color._color[2];
    CNavPoly::GetVertHotspot(rPoly, nVert, vHotspotVerts);
    v5 = v4;
    v6.z = vHotspotVerts[2].z + 1.0;
    v6.y = vHotspotVerts[2].y + 0.0;
    v6.x = vHotspotVerts[2].x + 0.0;
    v7.z = vHotspotVerts[1].z + 1.0;
    v7.x = vHotspotVerts[1].x + 0.0;
    v7.y = vHotspotVerts[1].y + 0.0;
    NDebugOverlay::Line(&v7, &v6, v3, HIBYTE(v3), v5, 0, 0.15000001);
    v6.z = vHotspotVerts[3].z + 1.0;
    v6.y = vHotspotVerts[3].y + 0.0;
    v6.x = vHotspotVerts[3].x + 0.0;
    v7.z = vHotspotVerts[2].z + 1.0;
    v7.y = vHotspotVerts[2].y + 0.0;
    v7.x = vHotspotVerts[2].x + 0.0;
    NDebugOverlay::Line(&v7, &v6, v3, HIBYTE(v3), v5, 0, 0.15000001);
  }
}


// CNavDrawPoly::DrawLineCore  (line 168, @0x0000000002ed0ee0, libserver.so)  // inlines: VertexColor_t
// callers: CNavDrawArea::DrawPolyOutline_Internal, CNavDrawArea::DrawPolyOutlineWithHullMargin_Internal, CNavDrawPoly::DrawCrossline
void __fastcall CNavDrawPoly::DrawLineCore(
        const Vector *const vA,
        const Vector *const vB,
        Color c,
        float flDuration,
        NavDrawZTest ztestMode)
{
  unsigned __int8 v6; // r15
  unsigned __int8 v7; // bl
  unsigned __int8 v10; // [rsp+10h] [rbp-50h]
  unsigned __int8 v11; // [rsp+14h] [rbp-4Ch]
  double v12; // [rsp+18h] [rbp-48h]
  unsigned __int8 v13; // [rsp+20h] [rbp-40h] BYREF
  Color ca; // [rsp+21h] [rbp-3Fh]

  v6 = c._color[3];
  v7 = c._color[0];
  if ( debugoverlay != 0 )
  {
    ca._color[0] = c._color[1];
    ca._color[1] = c._color[2];
    v13 = c._color[0];
    ca._color[2] = c._color[3];
    v10 = c._color[1];
    v11 = c._color[2];
    v12 = flDuration;
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 13))(
      debugoverlay,
      vA,
      vB,
      &v13,
      (ztestMode & 0xFFFFFFFD) != 0,
      flDuration);
    if ( ztestMode == NavDrawZTest::NAVDRAW_ZTEST_TRANSLUCENT )
    {
      ca._color[0] = v10;
      v13 = v7;
      ca._color[1] = v11;
      ca._color[2] = v6 >> 2;
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 13))(debugoverlay, vA, vB, &v13, 1, v12);
    }
  }
}


// CNavDrawPoly::DrawTriangleCore  (line 189, @0x0000000002ed15e0, libserver.so)  // inlines: VertexColor_t
// callers: CNavDrawArea::DrawPolyFilled_Internal
void __fastcall CNavDrawPoly::DrawTriangleCore(
        const Vector *const vA,
        const Vector *const vB,
        const Vector *const vC,
        Color c,
        float flDuration,
        NavDrawZTest ztestMode)
{
  unsigned __int8 v8; // bl
  unsigned __int8 v11; // [rsp+Ch] [rbp-54h]
  unsigned __int8 v12; // [rsp+10h] [rbp-50h]
  unsigned __int8 v13; // [rsp+14h] [rbp-4Ch]
  double v14; // [rsp+18h] [rbp-48h]
  unsigned __int8 v15; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int8 v16; // [rsp+21h] [rbp-3Fh]
  unsigned __int8 v17; // [rsp+22h] [rbp-3Eh]
  Color ca; // [rsp+23h] [rbp-3Dh]

  v8 = c._color[0];
  v11 = c._color[3];
  if ( debugoverlay != 0 )
  {
    v16 = c._color[1];
    v17 = c._color[2];
    ca._color[0] = c._color[3];
    v15 = c._color[0];
    v12 = c._color[1];
    v13 = c._color[2];
    v14 = flDuration;
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 31))(
      debugoverlay,
      vA,
      vB,
      vC,
      &v15,
      (ztestMode & 0xFFFFFFFD) != 0,
      flDuration);
    if ( ztestMode == NavDrawZTest::NAVDRAW_ZTEST_TRANSLUCENT )
    {
      v16 = v12;
      v15 = v8;
      v17 = v13;
      ca._color[0] = v11 >> 2;
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 31))(debugoverlay, vA, vB, vC, &v15, 1, v14);
    }
  }
}


// CNavDrawPoly::DrawCrossline  (line 210, @0x0000000002ed19c0, libserver.so)  // inlines: VectorAdd, VectorDivide, operator+, operator/, operator=
// calls: CNavDrawPoly::DrawLineCore
// callers: CNavDrawArea::DrawArea_Internal
void __fastcall CNavDrawPoly::DrawCrossline(
        const CNavPoly *const rPoly,
        bool bForwardSlash,
        Color c,
        float flDuration,
        NavDrawZTest ztestMode,
        const Vector *const vOffset)
{
  float v6; // xmm1_4
  float v7; // xmm5_4
  float v8; // xmm3_4
  vec_t v9; // xmm2_4
  float v10; // xmm6_4
  float v11; // xmm2_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  vec_t v15; // xmm2_4
  float v16; // xmm6_4
  float v17; // xmm2_4
  float y; // xmm3_4
  float x; // xmm1_4
  float v20; // xmm5_4
  float z; // xmm2_4
  vec_t v22; // xmm4_4
  float v23; // xmm6_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  vec_t v27; // xmm4_4
  Vector vA; // [rsp+0h] [rbp-20h] BYREF
  Vector vB; // [rsp+10h] [rbp-10h] BYREF

  if ( rPoly->m_nVerts == 4 )
  {
    y = vOffset->y;
    x = vOffset->x;
    v20 = y;
    z = vOffset->z;
    if ( bForwardSlash )
    {
      v22 = rPoly->m_vVerts[0].z + z;
      v23 = rPoly->m_vVerts[0].x + x;
      v24 = y + rPoly->m_vVerts[2].y;
      vA.y = v20 + rPoly->m_vVerts[0].y;
      v25 = z + rPoly->m_vVerts[2].z;
      vA.z = v22;
      v26 = x + rPoly->m_vVerts[2].x;
    }
    else
    {
      v27 = rPoly->m_vVerts[1].z + z;
      v23 = rPoly->m_vVerts[1].x + x;
      v24 = y + rPoly->m_vVerts[3].y;
      vA.y = v20 + rPoly->m_vVerts[1].y;
      v25 = z + rPoly->m_vVerts[3].z;
      vA.z = v27;
      v26 = x + rPoly->m_vVerts[3].x;
    }
    vA.x = v23;
    vB.y = v24;
    vB.z = v25;
    vB.x = v26;
    CNavDrawPoly::DrawLineCore(&vA, &vB, c, flDuration, ztestMode);
  }
  else
  {
    v6 = vOffset->y;
    v7 = vOffset->x;
    v8 = vOffset->z;
    if ( bForwardSlash )
    {
      v15 = rPoly->m_vVerts[0].z + v8;
      v16 = rPoly->m_vVerts[0].x;
      vA.y = v6 + rPoly->m_vVerts[0].y;
      vA.z = v15;
      v17 = rPoly->m_vVerts[1].y + rPoly->m_vVerts[2].y;
      vA.x = v16 + v7;
      v12 = (v17 * 0.5) + v6;
      v13 = ((rPoly->m_vVerts[1].z + rPoly->m_vVerts[2].z) * 0.5) + v8;
      v14 = rPoly->m_vVerts[1].x + rPoly->m_vVerts[2].x;
    }
    else
    {
      v9 = rPoly->m_vVerts[1].z + v8;
      v10 = rPoly->m_vVerts[1].x;
      vA.y = v6 + rPoly->m_vVerts[1].y;
      vA.z = v9;
      v11 = rPoly->m_vVerts[2].y + rPoly->m_vVerts[0].y;
      vA.x = v10 + v7;
      v12 = (v11 * 0.5) + v6;
      v13 = ((rPoly->m_vVerts[2].z + rPoly->m_vVerts[0].z) * 0.5) + v8;
      v14 = rPoly->m_vVerts[2].x + rPoly->m_vVerts[0].x;
    }
    vB.y = v12;
    vB.z = v13;
    vB.x = (v14 * 0.5) + v7;
    CNavDrawPoly::DrawLineCore(&vA, &vB, c, flDuration, ztestMode);
  }
}


// CNavDrawPoly::DrawDragSelectionSet  (line 245, @0x0000000002ed1bb0, libserver.so)  // inlines: DrawPolyFilled, DrawPolyOutline
// callers: CNavEditor::DrawEditMode
// globals: s_dragSelectionSetBorderColor
void __fastcall CNavDrawPoly::DrawDragSelectionSet(const CNavPoly *const rPoly, Color *const dragSelectionSetColor)
{
  if ( INavDrawArea::ms_pInst != 0 )
  {
    (*INavDrawArea::ms_pInst->_vptr_INavDrawArea)(
      INavDrawArea::ms_pInst,
      rPoly,
      *dragSelectionSetColor,
      1,
      &vec3_origin,
      0.01023,
      0.0);
    if ( INavDrawArea::ms_pInst != 0 )
      (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
        INavDrawArea::ms_pInst,
        rPoly,
        *&s_dragSelectionSetBorderColor,
        1,
        &vec3_origin,
        0.01023,
        0.0);
  }
}


// CNavDrawArea::DrawPolyFilled_Internal  (line 258, @0x0000000002ed16e0, libserver.so)  // inlines: Begin, ComputeBC, GetNextVertIndexCW, GetVert, NavTriIterator, Next, operator=
// calls: CNavDrawPoly::DrawTriangleCore, CNavPoly::GetVertInset
// local variable allocation has failed, the output may be wrong!
void __fastcall CNavDrawArea::DrawPolyFilled_Internal(
        const CNavDrawArea *const this,
        const CNavPoly *const rPoly,
        Color c,
        float flDuration,
        NavDrawZTest ztestMode,
        const Vector *const vOffset,
        float flBorderMargin)
{
  int m_nVerts; // ecx
  int v11; // ebx
  int v12; // r12d
  float *v13; // rdx
  vec_t x; // xmm2_4
  vec_t v15; // xmm3_4
  vec_t y; // xmm4_4
  float *v17; // rdx
  vec_t v18; // xmm5_4
  vec_t v19; // xmm0_4
  vec_t v20; // xmm1_4
  __int64 v21; // kr50_8
  float v22; // xmm1_4
  int v23; // ecx
  int v24; // edx
  float *v25; // rdx
  float *v26; // rdx
  int v27; // ecx
  int v28; // ecx
  int v29; // [rsp-20h] [rbp-9Ch]
  vec_t z; // [rsp-10h] [rbp-8Ch]
  float v32; // [rsp+10h] [rbp-6Ch]
  __int64 flDurationa; // [rsp+14h] [rbp-68h] OVERLAPPED BYREF
  vec_t v34; // [rsp+1Ch] [rbp-60h]
  Vector v35; // [rsp+24h] [rbp-58h] BYREF
  Vector VertInset; // [rsp+34h] [rbp-48h] BYREF
  Vector v37; // 0:kr00_12.12
  Vector v38; // 0:kr14_12.12
  Vector v39; // 0:kr34_12.12
  Vector v40; // 0:kr40_12.12

  m_nVerts = rPoly->m_nVerts;
  v32 = -flBorderMargin;
  v11 = (m_nVerts - 1) % m_nVerts;
  v12 = v11;
  if ( -flBorderMargin == 0.0 )
  {
    v13 = (rPoly + 12 * ((m_nVerts - 1) % m_nVerts));
    x = v13[2];
    v15 = v13[4];
    z = rPoly->m_vVerts[0].z;
    y = v13[3];
    v17 = (rPoly + 12 * ((m_nVerts + v11 - 1) % m_nVerts));
    v18 = v17[2];
    v19 = v17[3];
    v20 = v17[4];
    v21 = *&rPoly->m_vVerts[0].x;
  }
  else
  {
    VertInset = CNavPoly::GetVertInset(rPoly, 0, flBorderMargin);
    z = VertInset.z;
    v21 = *&VertInset.x;
    v39 = CNavPoly::GetVertInset(rPoly, v11, VertInset.z);
    v28 = rPoly->m_nVerts;
    *&VertInset.x = *&v39.x;
    v40 = CNavPoly::GetVertInset(rPoly, (v28 + v11 - 1) % v28, v39.z);
    v20 = v40.z;
    x = v39.x;
    y = v39.y;
    v18 = v40.x;
    v19 = v40.y;
    v15 = v39.z;
  }
  while ( v12 != 1 )
  {
    while ( 1 )
    {
      VertInset.x = v18;
      VertInset.y = v19;
      flDurationa = v21;
      v35.x = x;
      VertInset.z = v20;
      v35.y = y;
      v35.z = v15;
      v34 = z;
      CNavDrawPoly::DrawTriangleCore(&flDurationa, &v35, &VertInset, c, flDuration, ztestMode);
      v23 = rPoly->m_nVerts;
      v24 = (v23 + v12 - 1) % v23;
      v12 = v24;
      if ( v32 != 0.0 )
        break;
      v25 = (rPoly + 12 * v24);
      x = v25[2];
      y = v25[3];
      v15 = v25[4];
      v26 = (rPoly + 12 * ((v23 + v12 - 1) % v23));
      v18 = v26[2];
      v19 = v26[3];
      v20 = v26[4];
      if ( v12 == 1 )
        return;
    }
    v29 = v24;
    v37 = CNavPoly::GetVertInset(rPoly, v24, v22);
    v27 = rPoly->m_nVerts;
    VertInset = v37;
    v38 = CNavPoly::GetVertInset(rPoly, (v27 + v29 - 1) % v27, v37.z);
    v20 = v38.z;
    x = v37.x;
    *&VertInset.x = *&v38.x;
    y = v37.y;
    v18 = v38.x;
    v19 = v38.y;
    v15 = v37.z;
  }
}


// CNavDrawArea::DrawPolyOutline_Internal  (line 268, @0x0000000002ed0fe0, libserver.so)  // inlines: Color, GetBool, GetInt, GetNextVertIndexCW, SetColor, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: CNavDrawPoly::DrawLineCore, CNavPoly::GetVertInset, CNavPoly::GetEdgeNormal
void __fastcall CNavDrawArea::DrawPolyOutline_Internal(
        const CNavDrawArea *const this,
        const CNavPoly *const rPoly,
        Color c,
        float flDuration,
        NavDrawZTest ztestMode,
        const Vector *const vOffset,
        float flBorderMargin)
{
  int m_nVerts; // esi
  float v11; // xmm1_4
  int v12; // r12d
  vec_t v13; // xmm3_4
  float v14; // xmm2_4
  vec_t v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  vec_t v18; // xmm0_4
  int v19; // ecx
  vec_t v20; // xmm0_4
  vec_t v21; // xmm2_4
  vec_t v22; // xmm1_4
  vec_t v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  Color v27; // edx
  Vector vA; // [rsp+20h] [rbp-70h] BYREF
  Vector vB; // [rsp+30h] [rbp-60h] BYREF
  Vector v32; // [rsp+40h] [rbp-50h]
  Color clr[4]; // [rsp+50h] [rbp-40h]
  Vector VertInset; // 0:kr00_12.12
  Vector EdgeNormal; // 0:kr20_12.12

  m_nVerts = rPoly->m_nVerts;
  clr[0]._color[0] = -1;
  clr[0]._color[1] = 0;
  clr[0]._color[2] = 0;
  clr[0]._color[3] = -1;
  clr[1]._color[0] = 0;
  clr[1]._color[1] = -1;
  clr[1]._color[2] = 0;
  clr[1]._color[3] = -1;
  clr[2]._color[0] = 0;
  clr[2]._color[1] = 0;
  clr[2]._color[2] = -1;
  clr[2]._color[3] = -1;
  clr[3]._color[0] = -1;
  clr[3]._color[1] = -1;
  clr[3]._color[2] = -1;
  clr[3]._color[3] = -1;
  if ( m_nVerts > 0 )
  {
    v11 = -flBorderMargin;
    v12 = 0;
    while ( 1 )
    {
      VertInset = CNavPoly::GetVertInset(rPoly, v12, v11);
      v19 = rPoly->m_nVerts;
      *&v32.x = *&VertInset.x;
      v20 = VertInset.y + vOffset->y;
      vA.z = VertInset.z + vOffset->z;
      v21 = VertInset.x + vOffset->x;
      vA.y = v20;
      vA.x = v21;
      v32 = CNavPoly::GetVertInset(rPoly, (v12 + v19 - 1) % v19, vA.z);
      v22 = v32.z + vOffset->z;
      v23 = v32.x + vOffset->x;
      vB.y = v32.y + vOffset->y;
      vB.z = v22;
      vB.x = v23;
      CNavDrawPoly::DrawLineCore(&vA, &vB, c, flDuration, ztestMode);
      if ( nav_draw_vert_order.m_pParent->m_Value.m_nValue == 0 || c != -16711681 )
        goto LABEL_4;
      v24 = ((vB.x - vA.x) * 0.1) + vA.x;
      vA.x = v24;
      v25 = ((vB.y - vA.y) * 0.1) + vA.y;
      vA.y = v25;
      v26 = ((vB.z - vA.z) * 0.1) + vA.z;
      vA.z = v26;
      if ( v12 != 0 )
      {
        EdgeNormal = CNavPoly::GetEdgeNormal(rPoly, v12);
        *&v32.x = *&EdgeNormal.x;
        v27 = clr[v12];
        v32.z = EdgeNormal.z;
        ++v12;
        vB.z = (EdgeNormal.z * 5.0) + vA.z;
        vB.y = (5.0 * EdgeNormal.y) + vA.y;
        vB.x = (5.0 * EdgeNormal.x) + vA.x;
        CNavDrawPoly::DrawLineCore(&vA, &vB, v27, flDuration, ztestMode);
        if ( rPoly->m_nVerts <= v12 )
          return;
      }
      else
      {
        v13 = (5.0 * rPoly->m_vNormal_New.y) + v25;
        v14 = 5.0 * rPoly->m_vNormal_New.z;
        vB.y = v13;
        v15 = v14 + v26;
        v16 = 5.0 * rPoly->m_vNormal_New.x;
        vB.z = v15;
        vB.x = v16 + v24;
        CNavDrawPoly::DrawLineCore(&vA, &vB, clr[0], flDuration, ztestMode);
        v17 = 10.0 * rPoly->m_vNormal_New.y;
        v18 = (10.0 * rPoly->m_vNormal_New.z) + vA.z;
        vA.x = (10.0 * rPoly->m_vNormal_New.x) + vA.x;
        vA.z = v18;
        vB.x = vA.x + 10.0;
        vA.y = v17 + vA.y;
        vB.z = v18 + 0.0;
        vB.y = vA.y + 0.0;
        CNavDrawPoly::DrawLineCore(&vA, &vB, clr[0], flDuration, ztestMode);
        vB.z = vA.z + 0.0;
        vB.x = vA.x + 0.0;
        vB.y = vA.y + 10.0;
        CNavDrawPoly::DrawLineCore(&vA, &vB, clr[1], flDuration, ztestMode);
        vB.z = vA.z + 10.0;
        vB.y = vA.y + 0.0;
        vB.x = vA.x + 0.0;
        CNavDrawPoly::DrawLineCore(&vA, &vB, clr[2], flDuration, ztestMode);
LABEL_4:
        if ( rPoly->m_nVerts <= ++v12 )
          return;
      }
    }
  }
}


// CNavDrawArea::DrawPolyOutlineWithHullMargin_Internal  (line 320, @0x0000000002ed13c0, libserver.so)  // inlines: GetNextVertIndexCW, GetVert, VectorAdd, operator!=, operator+
// calls: CNavPoly::GetVertWithHullMargin, CNavDrawPoly::DrawLineCore
void __fastcall CNavDrawArea::DrawPolyOutlineWithHullMargin_Internal(
        const CNavDrawArea *const this,
        const CNavPoly *const rPoly,
        float flHullRadius,
        Color c,
        float flDuration,
        NavDrawZTest ztestMode,
        const Vector *const vOffset)
{
  const Vector *v8; // r13
  int v10; // ebx
  Vector *m_vVerts; // r13
  int m_nVerts; // ecx
  float *v14; // rdx
  float y; // xmm6_4
  float z; // xmm5_4
  vec_t v17; // xmm7_4
  float flDurationa; // [rsp+20h] [rbp-80h]
  Vector v21; // [rsp+50h] [rbp-50h] BYREF
  Vector v22; // [rsp+60h] [rbp-40h] BYREF
  Vector VertWithHullMargin; // 0:kr00_12.12
  Vector v24; // 0:kr14_12.12

  v8 = vOffset;
  v10 = 0;
  flDurationa = flDuration;
  if ( rPoly->m_nVerts > 0 )
  {
    m_vVerts = rPoly->m_vVerts;
    do
    {
      while ( 1 )
      {
        VertWithHullMargin = CNavPoly::GetVertWithHullMargin(rPoly, v10, flDuration);
        v24 = CNavPoly::GetVertWithHullMargin(
                rPoly,
                (v10 + rPoly->m_nVerts - 1) % rPoly->m_nVerts,
                VertWithHullMargin.z);
        flDuration = v24.z;
        m_nVerts = rPoly->m_nVerts;
        v14 = (rPoly + 12 * ((v10 + m_nVerts - 1) % m_nVerts));
        if ( VertWithHullMargin.x != m_vVerts->x
          || VertWithHullMargin.y != m_vVerts->y
          || VertWithHullMargin.z != m_vVerts->z
          || v24.x != v14[2]
          || v14[3] != v24.y
          || v14[4] != v24.z )
        {
          break;
        }
        ++v10;
        ++m_vVerts;
        if ( v10 >= m_nVerts )
          goto LABEL_12;
      }
      y = vOffset->y;
      ++v10;
      ++m_vVerts;
      z = vOffset->z;
      v17 = vOffset->x + VertWithHullMargin.x;
      v22.x = v24.x + vOffset->x;
      v22.y = v24.y + y;
      v22.z = v24.z + z;
      v21.x = v17;
      v21.y = y + VertWithHullMargin.y;
      v21.z = z + VertWithHullMargin.z;
      CNavDrawPoly::DrawLineCore(&v21, &v22, -1, flDurationa, ztestMode);
    }
    while ( v10 < rPoly->m_nVerts );
LABEL_12:
    v8 = vOffset;
  }
  (*(this->_vptr_INavDrawArea + 1))(this, rPoly, *&c, ztestMode, v8, flDurationa, 0.0);
}


// CNavDrawArea::DrawArea_Internal  (line 339, @0x0000000002ed2e00, libserver.so)  // inlines: DrawPolyFilled, DrawPolyOutline, GetCenter, GetElapsedTime, GetMarkedAreaIncludingSelectionSet, GetString, GetVert, HasAvoidanceObstacle, IsVertIndexValid, NavDrawLine, Reset, Set, Vector, VectorAdd, VectorDivide, operator+, operator/, operator=, operator=<float>
// calls: CNavPoly::IsDegenerate, IntervalTimer::Now, UTIL_VarArgs, NDebugOverlay::Text, sscanf, NavDrawGetColor, CNavDrawPoly::DrawCrossline, NDebugOverlay::Line, NavDrawLine, NavDrawTriangle, CNavArea::IsBlocked, CNavDrawPoly::DrawVertHotspot (17 total)
// callers: CNavDrawAreaExt::DrawArea_Internal
// strings: "Degenerate area %d", "FCVAR_NEVER_AS_STRING", "%d %d %d %d"
// globals: `guard variable for'CNavDrawArea::DrawArea_Internal(CNavArea const&,float,NavEditColor)::blinkTimer, CNavDrawArea::DrawArea_Internal(CNavArea const&,float,NavEditColor)::blinkTimer, CNavDrawArea::DrawArea_Internal(CNavArea const&,float,NavEditColor)::bBlinkOn
void __fastcall CNavDrawArea::DrawArea_Internal(
        const CNavDrawArea *const this,
        const CNavArea *const rArea,
        __m128 flDurationOverride,
        NavEditColor colorOverride)
{
  INavEditor *m_pEditor; // rbx
  CNavArea *vptr_INavEditor; // r12
  __m128 v7; // xmm1
  int v8; // r14d
  vec_t z; // xmm0_4
  bool v10; // al
  uint32 m_AreaId; // esi
  char *v12; // rax
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  char *m_pszString; // rdi
  unsigned int v16; // eax
  uint64 m_Flags; // rax
  NavEditColor v18; // edi
  Color v19; // eax
  NavEditColor v20; // edi
  Color v21; // eax
  NavEditColor v22; // edi
  Color v23; // eax
  Color v24; // eax
  NavEditColor v25; // edi
  Color v26; // eax
  Color v27; // eax
  Color v28; // eax
  Color v29; // eax
  int m_nVerts; // r8d
  NavEditColor v31; // edi
  float v32; // xmm4_4
  __int128 v33; // xmm5
  Vector *m_vVerts; // rsi
  int v35; // ecx
  float v36; // xmm7_4
  float v37; // xmm6_4
  float v38; // xmm1_4
  __int128 z_low; // xmm0
  float v40; // xmm2_4
  float *v41; // rdx
  Color v42; // eax
  NavEditColor v43; // ecx
  NavEditColor v44; // edi
  Color v45; // eax
  Color v46; // eax
  float v47; // xmm0_4
  Color v48; // eax
  int v49; // eax
  int v50; // esi
  int v51; // ecx
  int v52; // edx
  int v53; // r10d
  unsigned __int16 v54; // ax
  __int64 v55; // rdx
  int VertUnderCursor; // ebx
  Color v57; // eax
  float v58; // [rsp+0h] [rbp-C0h]
  float v59; // [rsp+4h] [rbp-BCh]
  float v60; // [rsp+8h] [rbp-B8h]
  float flDrawDuration; // [rsp+Ch] [rbp-B4h]
  __int32 flDrawDurationa; // [rsp+Ch] [rbp-B4h]
  bool bUseAttributeColors; // [rsp+1Bh] [rbp-A5h] BYREF
  NavEditColor color; // [rsp+1Ch] [rbp-A4h] BYREF
  Vector vOffsetBase; // [rsp+20h] [rbp-A0h] BYREF
  Vector vCenter; // [rsp+30h] [rbp-90h] BYREF
  Vector up; // [rsp+40h] [rbp-80h] BYREF
  Vector down; // [rsp+50h] [rbp-70h] BYREF
  Vector vLo; // [rsp+60h] [rbp-60h] BYREF
  Vector vHi; // [rsp+70h] [rbp-50h] BYREF
  int bgColor[4]; // [rsp+80h] [rbp-40h] BYREF

  bUseAttributeColors = 1;
  m_pEditor = rArea->m_rNavMesh->m_pEditor;
  if ( colorOverride == NavEditColor::NavEditColorInvalid )
  {
    flDrawDurationa = flDurationOverride.m128_i32[0];
    (*(this->_vptr_INavDrawArea + 4))(this, rArea, &color, &bUseAttributeColors);
    flDurationOverride.m128_i32[0] = flDrawDurationa;
  }
  else
  {
    color = colorOverride;
  }
  vptr_INavEditor = m_pEditor[10]._vptr_INavEditor;
  v7 = _mm_cmple_ss(0LL, flDurationOverride);
  vOffsetBase.x = 0.0;
  vOffsetBase.y = 0.0;
  v8 = m_pEditor[16]._vptr_INavEditor;
  vOffsetBase.z = 1.0;
  LODWORD(flDrawDuration) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v7, 0x3C279BBBu).m128_f32[0])
                          | flDurationOverride.m128_i32[0] & v7.m128_i32[0];
  z = rArea->m_vCenter.z;
  v7.m128_i32[0] = LODWORD(rArea->m_vCenter.y);
  vCenter.x = rArea->m_vCenter.x;
  vCenter.z = z;
  LODWORD(vCenter.y) = v7.m128_i32[0];
  if ( vptr_INavEditor == 0 )
    vptr_INavEditor = CNavEditor::GetMarkedAreaIncludingSelectionSet(m_pEditor);
  if ( CNavPoly::IsDegenerate(rArea) )
  {
    if ( `guard variable for'CNavDrawArea::DrawArea_Internal(CNavArea const&,float,NavEditColor)::blinkTimer == 0
      && __cxa_guard_acquire(&`guard variable for'CNavDrawArea::DrawArea_Internal(CNavArea const&,float,NavEditColor)::blinkTimer) != 0 )
    {
      IntervalTimer::IntervalTimer(&CNavDrawArea::DrawArea_Internal(CNavArea const&,float,NavEditColor)const::blinkTimer);
      __cxa_guard_release(&`guard variable for'CNavDrawArea::DrawArea_Internal(CNavArea const&,float,NavEditColor)::blinkTimer);
    }
    if ( CNavDrawArea::DrawArea_Internal(CNavArea const&,float,NavEditColor)const::blinkTimer.m_timestamp.m_Value <= 0.0
      || (IntervalTimer::Now(&CNavDrawArea::DrawArea_Internal(CNavArea const&,float,NavEditColor)const::blinkTimer)
        - CNavDrawArea::DrawArea_Internal(CNavArea const&,float,NavEditColor)const::blinkTimer.m_timestamp.m_Value) > 1.0 )
    {
      v47 = IntervalTimer::Now(&CNavDrawArea::DrawArea_Internal(CNavArea const&,float,NavEditColor)const::blinkTimer);
      if ( v47 != CNavDrawArea::DrawArea_Internal(CNavArea const&,float,NavEditColor)const::blinkTimer.m_timestamp.m_Value )
        CNavDrawArea::DrawArea_Internal(CNavArea const&,float,NavEditColor)const::blinkTimer.m_timestamp.m_Value = v47;
      v10 = !CNavDrawArea::DrawArea_Internal(CNavArea const&,float,NavEditColor)const::bBlinkOn;
      CNavDrawArea::DrawArea_Internal(CNavArea const&,float,NavEditColor)const::bBlinkOn ^= 1u;
    }
    else
    {
      v10 = CNavDrawArea::DrawArea_Internal(CNavArea const&,float,NavEditColor)const::bBlinkOn;
    }
    m_AreaId = rArea->m_AreaId;
    bUseAttributeColors = 0;
    color = !v10;
    v12 = UTIL_VarArgs("Degenerate area %d", m_AreaId);
    y = rArea->m_vCenter.y;
    x = rArea->m_vCenter.x;
    bgColor[2] = LODWORD(rArea->m_vCenter.z);
    *&bgColor[1] = y;
    *bgColor = x;
    NDebugOverlay::Text(bgColor, v12, 1, flDrawDuration);
  }
  m_pszString = "FCVAR_NEVER_AS_STRING";
  if ( (nav_draw_area_bgcolor.m_nFlags & 0x1000) == 0 )
  {
    m_pszString = "";
    if ( nav_draw_area_bgcolor.m_pParent->m_Value.m_pszString != 0 )
      m_pszString = nav_draw_area_bgcolor.m_pParent->m_Value.m_pszString;
  }
  if ( sscanf(m_pszString, "%d %d %d %d", bgColor, &bgColor[1], &bgColor[2], &bgColor[3]) == 4 )
  {
    v49 = 255;
    v50 = 255;
    v51 = 255;
    v52 = 255;
    if ( bgColor[0] <= 255 )
      v50 = bgColor[0];
    if ( v50 < 0 )
      v50 = 0;
    bgColor[0] = v50;
    if ( bgColor[1] <= 255 )
      v51 = bgColor[1];
    if ( v51 < 0 )
      v51 = 0;
    bgColor[1] = v51;
    if ( bgColor[2] <= 255 )
      v52 = bgColor[2];
    if ( v52 < 0 )
      v52 = 0;
    bgColor[2] = v52;
    if ( bgColor[3] <= 255 )
      v49 = bgColor[3];
    v53 = v49;
    if ( v49 < 0 )
      v53 = 0;
    LOBYTE(v54) = v50;
    HIBYTE(v54) = v51;
    bgColor[3] = v53;
    v55 = (v53 << 24) | (v52 << 16) | v54;
    if ( INavDrawArea::ms_pInst != 0 )
      (*INavDrawArea::ms_pInst->_vptr_INavDrawArea)(
        INavDrawArea::ms_pInst,
        rArea,
        v55,
        1,
        &vOffsetBase,
        flDrawDuration,
        0.0);
  }
  v16 = NavDrawGetColor(color);
  if ( INavDrawArea::ms_pInst != 0 )
    (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 1))(
      INavDrawArea::ms_pInst,
      rArea,
      v16,
      2,
      &vOffsetBase,
      flDrawDuration,
      -0.2);
  if ( rArea != vptr_INavEditor || v8 == 4 )
  {
    if ( rArea != vptr_INavEditor
      && rArea == m_pEditor[11]._vptr_INavEditor
      && HIDWORD(m_pEditor[2]._vptr_INavEditor) == 0 )
    {
      VertUnderCursor = CNavEditor::GetVertUnderCursor(m_pEditor, rArea);
      if ( VertUnderCursor >= 0 && VertUnderCursor < rArea->m_nVerts )
      {
        v57 = NavDrawGetColor(NavEditColor::NavMarkedColor);
        CNavDrawPoly::DrawVertHotspot(rArea, VertUnderCursor, v57);
      }
    }
  }
  else
  {
    v48 = NavDrawGetColor(NavEditColor::NavSelectedColor);
    CNavDrawPoly::DrawVertHotspot(rArea, v8, v48);
  }
  m_Flags = rArea->m_AreaAttributes.m_Flags;
  if ( (m_Flags & 1) != 0 )
  {
    v18 = NavEditColor::NavAttributeCrouchColor;
    if ( !bUseAttributeColors )
      v18 = color;
    color = v18;
    v19 = NavDrawGetColor(v18);
    CNavDrawPoly::DrawCrossline(rArea, 1, v19, flDrawDuration, NavDrawZTest::NAVDRAW_ZTEST_OFF, &vOffsetBase);
    m_Flags = rArea->m_AreaAttributes.m_Flags;
  }
  if ( (m_Flags & 2) != 0 )
  {
    v20 = NavEditColor::NavAttributeJumpColor;
    if ( !bUseAttributeColors )
      v20 = color;
    color = v20;
    v21 = NavDrawGetColor(v20);
    CNavDrawPoly::DrawCrossline(rArea, 0, v21, flDrawDuration, NavDrawZTest::NAVDRAW_ZTEST_OFF, &vOffsetBase);
    m_Flags = rArea->m_AreaAttributes.m_Flags;
  }
  if ( (m_Flags & 4) != 0 )
  {
    v22 = NavEditColor::NavAttributePreciseColor;
    v58 = vCenter.z;
    if ( !bUseAttributeColors )
      v22 = color;
    v59 = vCenter.y;
    v60 = vCenter.x;
    color = v22;
    v23 = NavDrawGetColor(v22);
    vLo.x = v60 + 0.0;
    vHi.y = (v59 - 8.0) + 0.0;
    vLo.y = (v59 + 8.0) + 0.0;
    vLo.z = v58 + 1.0;
    vHi.x = v60 + 0.0;
    vHi.z = v58 + 1.0;
    NDebugOverlay::Line(&vHi, &vLo, v23._color[0], v23._color[1], v23._color[2], 0, 0.15000001);
    vLo.x = vCenter.x - 8.0;
    *&vLo.y = *&vCenter.y;
    vHi.x = vCenter.x + 8.0;
    vHi.y = vCenter.y;
    vHi.z = vCenter.z;
    v24 = NavDrawGetColor(color);
    NavDrawLine(&vLo, &vHi, v24, LODWORD(flDrawDuration));
    m_Flags = rArea->m_AreaAttributes.m_Flags;
  }
  if ( (m_Flags & 8) != 0 )
  {
    v25 = NavEditColor::NavAttributeNoJumpColor;
    vLo.y = vCenter.y;
    vHi.y = vCenter.y;
    up.x = vCenter.x;
    down.x = vCenter.x;
    up.y = vCenter.y - 8.0;
    if ( !bUseAttributeColors )
      v25 = color;
    up.z = vCenter.z;
    down.z = vCenter.z;
    color = v25;
    down.y = vCenter.y + 8.0;
    vLo.z = vCenter.z;
    vHi.z = vCenter.z;
    vLo.x = vCenter.x - 8.0;
    vHi.x = vCenter.x + 8.0;
    v26 = NavDrawGetColor(v25);
    NavDrawLine(&up, &vHi, v26, LODWORD(flDrawDuration));
    v27 = NavDrawGetColor(color);
    NavDrawLine(&vHi, &down, v27, LODWORD(flDrawDuration));
    v28 = NavDrawGetColor(color);
    NavDrawLine(&down, &vLo, v28, LODWORD(flDrawDuration));
    v29 = NavDrawGetColor(color);
    NavDrawLine(&vLo, &up, v29, LODWORD(flDrawDuration));
    m_Flags = rArea->m_AreaAttributes.m_Flags;
  }
  if ( (m_Flags & 0x1000) != 0 )
  {
    m_nVerts = rArea->m_nVerts;
    v31 = NavEditColor::NavAttributeStairColor;
    vLo.x = 0.0;
    vLo.y = 0.0;
    v32 = 3.4028235e38;
    vHi.x = 0.0;
    v33 = 0xFF7FFFFF;
    vHi.y = 0.0;
    vLo.z = 3.4028235e38;
    if ( !bUseAttributeColors )
      v31 = color;
    vHi.z = -3.4028235e38;
    color = v31;
    if ( m_nVerts > 0 )
    {
      m_vVerts = rArea->m_vVerts;
      v35 = 0;
      while ( 1 )
      {
        ++v35;
        z_low = LODWORD(m_vVerts->z);
        v41 = (rArea + 12 * (v35 % m_nVerts));
        *&z_low = (*&z_low + v41[4]) * 0.5;
        v38 = (m_vVerts->x + v41[2]) * 0.5;
        v40 = (m_vVerts->y + v41[3]) * 0.5;
        if ( v32 <= *&z_low )
        {
          v36 = vLo.x;
          v37 = vLo.y;
        }
        else
        {
          v32 = *&z_low;
          v37 = (m_vVerts->y + v41[3]) * 0.5;
          v36 = (m_vVerts->x + v41[2]) * 0.5;
        }
        vLo.x = v36;
        vLo.y = v37;
        vLo.z = v32;
        if ( *&z_low <= *&v33 )
        {
          v38 = vHi.x;
          z_low = v33;
          v40 = vHi.y;
        }
        ++m_vVerts;
        vHi.x = v38;
        vHi.y = v40;
        LODWORD(vHi.z) = z_low;
        if ( v35 == m_nVerts )
          break;
        v33 = z_low;
      }
    }
    v42 = NavDrawGetColor(v31);
    NavDrawLine(&vLo, &vHi, v42, LODWORD(flDrawDuration));
    m_Flags = rArea->m_AreaAttributes.m_Flags;
  }
  if ( (m_Flags & 0x80u) != 0LL )
  {
    v43 = NavEditColor::NavAttributeAvoidColor;
    if ( !bUseAttributeColors )
      v43 = color;
    vHi.x = vCenter.x + 3.0;
    color = v43;
    vHi.y = vCenter.y + 8.0;
    vHi.z = vCenter.z + 0.0;
    vLo.x = vCenter.x - 3.0;
    vLo.y = vCenter.y + 8.0;
    vLo.z = vCenter.z + 0.0;
    NavDrawTriangle(&vCenter, &vLo, &vHi, v43);
    vHi.x = vCenter.x + 2.0;
    vHi.z = vCenter.z + 0.0;
    vHi.y = vCenter.y - 6.0;
    vLo.x = vCenter.x - 2.0;
    vLo.y = vCenter.y - 6.0;
    vLo.z = vCenter.z + 0.0;
    down.x = vCenter.x + 0.0;
    down.y = vCenter.y - 3.0;
    down.z = vCenter.z + 0.0;
    NavDrawTriangle(&down, &vLo, &vHi, color);
  }
  if ( CNavArea::IsBlocked(rArea, -1, 0) || rArea->m_nAvoidanceObstacleHeight > 18.0 )
  {
    if ( !CNavArea::IsBlocked(rArea, -1, 0)
      || (v44 = NavEditColor::NavBlockedByFuncNavBlockerColor, (rArea->m_AttributeDynamicFlags & 4) == 0) )
    {
      v44 = NavEditColor::NavBlockedByDoorColor;
    }
    color = v44;
    v45 = NavDrawGetColor(v44);
    CNavDrawPoly::DrawCrossline(rArea, 1, v45, flDrawDuration, NavDrawZTest::NAVDRAW_ZTEST_OFF, &vec3_origin);
    v46 = NavDrawGetColor(color);
    CNavDrawPoly::DrawCrossline(rArea, 0, v46, flDrawDuration, NavDrawZTest::NAVDRAW_ZTEST_OFF, &vec3_origin);
  }
}


// CNavDrawArea::DrawGetColor_Internal  (line 500, @0x0000000002ec8cf0, libserver.so)  // inlines: GetMarkedAreaIncludingSelectionSet
// calls: CNavEditor::GetMarkedAreaIncludingSelectionSet
// callers: CNavDrawAreaExt::DrawGetColor_Internal
void __fastcall CNavDrawArea::DrawGetColor_Internal(
        const CNavDrawArea *const this,
        const CNavArea *const rArea,
        NavEditColor *pColorOut,
        bool *pUseAttributeColorsOut)
{
  INavEditor *m_pEditor; // rbx
  CNavArea *vptr_INavEditor; // rax
  bool *pUseAttributeColorsOuta; // [rsp+0h] [rbp-20h]
  NavEditColor *pColorOuta; // [rsp+8h] [rbp-18h]
  const CNavArea *rAreaa; // [rsp+10h] [rbp-10h]

  m_pEditor = rArea->m_rNavMesh->m_pEditor;
  vptr_INavEditor = m_pEditor[10]._vptr_INavEditor;
  if ( vptr_INavEditor == 0 )
  {
    pUseAttributeColorsOuta = pUseAttributeColorsOut;
    pColorOuta = pColorOut;
    rAreaa = rArea;
    vptr_INavEditor = CNavEditor::GetMarkedAreaIncludingSelectionSet(rArea->m_rNavMesh->m_pEditor);
    pUseAttributeColorsOut = pUseAttributeColorsOuta;
    pColorOut = pColorOuta;
    rArea = rAreaa;
  }
  if ( rArea == vptr_INavEditor )
  {
    *pUseAttributeColorsOut = 0;
    *pColorOut = NavEditColor::NavMarkedColor;
  }
  else
  {
    *pColorOut = 2 * (rArea != m_pEditor[11]._vptr_INavEditor) + 5;
  }
}


// DrawAreaForDrawConnectedAreas  (line 521, @0x0000000002ee64d0, libserver.so)  // inlines: CFmtStrN, DrawArea, DrawPolyOutlineWithHullMargin, GetBool, GetCenter, GetFloat, GetInt, InitQuietTruncation
// calls: CFmtStrN<256, false>::sprintf, NDebugOverlay::Text, __stack_chk_fail
// callers: std::_Function_handler<NavSearchAreaResult_t(CNavArea&, NavSearchAreaInfo_t*), CNavDrawArea::DrawConnectedAreas(const CNavArea&, float)::__lambda12>::_M_invoke, CNavDrawArea::DrawConnectedAreas
// strings: "hull x%x"
void __fastcall DrawAreaForDrawConnectedAreas(
        const CNavArea *const rArea,
        double a2,
        float flDurationOverride,
        double a4)
{
  double v4; // xmm3_8
  float m_fValue; // xmm0_4
  int m_nHullSupport; // edx
  const char *v8; // rax
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  unsigned int flDurationOverridea; // [rsp+Ch] [rbp-144h]
  Vector origin; // [rsp+10h] [rbp-140h] BYREF
  CFmtStr msg; // [rsp+20h] [rbp-130h] BYREF
  unsigned __int64 v14; // [rsp+138h] [rbp-18h]

  v4 = a2;
  v14 = __readfsqword(0x28u);
  if ( nav_draw_hull_support.m_pParent->m_Value.m_nValue != 0 )
  {
    m_nHullSupport = rArea->m_nHullSupport;
    flDurationOverridea = LODWORD(a2);
    msg._vptr_CFmtStrN = &off_3F6E1A0;
    msg.m_bQuietTruncation = 0;
    msg.m_szBuf[0] = 0;
    msg.m_nLength = 0;
    v8 = CFmtStrN<256,false>::sprintf(&msg, "hull x%x", m_nHullSupport);
    y = rArea->m_vCenter.y;
    x = rArea->m_vCenter.x;
    origin.z = rArea->m_vCenter.z;
    origin.y = y;
    origin.x = x;
    NDebugOverlay::Text(&origin, v8, 1, 0.0);
    *&v4 = flDurationOverridea;
  }
  m_fValue = nav_draw_hull_boundary.m_pParent->m_Value.m_fValue;
  if ( m_fValue < 0.0 )
  {
    if ( INavDrawArea::ms_pInst != 0 )
      (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 3))(INavDrawArea::ms_pInst, rArea, 39, v4);
  }
  else if ( INavDrawArea::ms_pInst != 0 )
  {
    (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 2))(
      INavDrawArea::ms_pInst,
      rArea,
      0xFFFFFFFFLL,
      1,
      &vec3_origin,
      m_fValue,
      0.0,
      a4,
      v4);
  }
}


// CNavDrawArea::DrawConnectedAreas  (line 549, @0x0000000002efa710, libserver.so)  // inlines: Count, GetCenter, GetFloat, GetLadders, Indices, IsEditMode, NavDrawLine, NavHullAny, VectorAdd, _Function_base, _M_init_functor, function<CNavDrawArea::DrawConnectedAreas(const CNavArea&, float)::__lambda12, void>, operator+, ~_Function_base, ~function
// calls: UTIL_GetListenServerHost, DrawAreaForDrawConnectedAreas, CNavDrawLadder::DrawLadder, CNavLadder::IsConnected, NavDrawGetColor, NavDrawLine, operator new, NavHull_t::NavHull_t, NavBreadthFirstSearch<std::function<NavSearchAreaResult_t(CNavArea&, NavSearchAreaInfo_t*)> >, _Unwind_Resume, __stack_chk_fail
// callers: CPathData::Draw, CNavEditor::DrawEditMode
// globals: std::_Function_handler<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *),CNavDrawArea::DrawConnectedAreas(CNavArea const&,float)::{lambda(CNavArea &,Na, std::_Function_base::_Base_manager<CNavDrawArea::DrawConnectedAreas(CNavArea const&,float)::{lambda(CNavArea&,NavSearchAreaInfo_t *)#1}>::_M_manager(std::_Any_d
void __fastcall CNavDrawArea::DrawConnectedAreas(CNavArea *rArea, float a2, float flDurationOverride)
{
  float v4; // xmm1_4
  double v5; // xmm2_8
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // r13
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rdx
  int m_Size; // r14d
  int v9; // r15d
  const CNavLadder *pLadder; // rbx
  float v11; // xmm2_4
  float v12; // xmm1_4
  vec_t x; // xmm3_4
  float y; // xmm2_4
  float z; // xmm1_4
  Color Color; // eax
  CUtlVectorUltraConservative<NavLadderConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v17; // rax
  int v18; // r14d
  int v19; // r15d
  const CNavLadder *v20; // rbx
  float v21; // xmm1_4
  vec_t v22; // xmm3_4
  Color v23; // eax
  bool v24; // zf
  float m_fValue; // r13d
  _QWORD *v26; // rax
  float v27; // xmm2_4
  uint8 m_nHullSupport; // al
  unsigned int flDurationOverridea; // [rsp+1Ch] [rbp-94h] BYREF
  bool bInPlacePainting; // [rsp+2Fh] [rbp-81h] BYREF
  NavHull_t navHull; // [rsp+30h] [rbp-80h] BYREF
  NavHull_t v32; // [rsp+40h] [rbp-70h] BYREF
  FuncNavOnSearchArea_t funcDrawArea; // [rsp+50h] [rbp-60h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp-38h]

  flDurationOverridea = LODWORD(a2);
  v34 = __readfsqword(0x28u);
  if ( UTIL_GetListenServerHost() == 0 )
    return;
  DrawAreaForDrawConnectedAreas(rArea, COERCE_DOUBLE(flDurationOverridea), v4, v5);
  m_pLaddersAndElevators = rArea->m_pLaddersAndElevators;
  if ( m_pLaddersAndElevators == 0 )
    goto LABEL_18;
  m_pData = m_pLaddersAndElevators->m_ladders[0].m_pData;
  if ( m_pLaddersAndElevators->m_ladders[0].m_pData == 0 )
    goto LABEL_11;
  m_Size = m_pData->m_Size;
  if ( m_pData->m_Size == 0 )
    goto LABEL_11;
  v9 = 0;
  while ( 1 )
  {
    pLadder = m_pData->m_Elements[v9].pLadder;
    CNavDrawLadder::DrawLadder(pLadder);
    if ( !CNavLadder::IsConnected(pLadder, rArea, CNavLadder::LadderDirectionType::LADDER_DOWN) )
      break;
    if ( ++v9 == m_Size )
      goto LABEL_10;
LABEL_7:
    m_pData = m_pLaddersAndElevators->m_ladders[0].m_pData;
  }
  v11 = pLadder->m_vBottom.y + 0.0;
  ++v9;
  v12 = CNavGeneratorBase::sm_flGenerationStepSize + pLadder->m_vBottom.z;
  *&v32.m_hullCategory = pLadder->m_vBottom.x + 0.0;
  v32.m_flHullRadius = v11;
  x = rArea->m_vCenter.x;
  y = rArea->m_vCenter.y;
  v32.m_flHullHeight = v12;
  z = rArea->m_vCenter.z;
  *&navHull.m_hullCategory = x;
  navHull.m_flHullRadius = y;
  navHull.m_flHullHeight = z;
  Color = NavDrawGetColor(NavEditColor::NavConnectedOneWayColor);
  NavDrawLine(&navHull, &v32, Color, flDurationOverridea);
  if ( v9 != m_Size )
    goto LABEL_7;
LABEL_10:
  m_pLaddersAndElevators = rArea->m_pLaddersAndElevators;
  if ( m_pLaddersAndElevators != 0 )
  {
LABEL_11:
    v17 = m_pLaddersAndElevators->m_ladders[1].m_pData;
    if ( v17 != 0 )
    {
      v18 = v17->m_Size;
      if ( v17->m_Size != 0 )
      {
        v19 = 0;
        while ( 1 )
        {
          v20 = v17->m_Elements[v19].pLadder;
          CNavDrawLadder::DrawLadder(v20);
          if ( CNavLadder::IsConnected(v20, rArea, CNavLadder::LadderDirectionType::LADDER_UP) )
          {
            if ( ++v19 == v18 )
              break;
          }
          else
          {
            ++v19;
            v21 = rArea->m_vCenter.z;
            v32.m_flHullRadius = rArea->m_vCenter.y;
            v22 = rArea->m_vCenter.x;
            v32.m_flHullHeight = v21;
            *&v32.m_hullCategory = v22;
            v23 = NavDrawGetColor(NavEditColor::NavConnectedOneWayColor);
            NavDrawLine(&v32, &v20->m_vTop, v23, flDurationOverridea);
            if ( v19 == v18 )
              break;
          }
          v17 = m_pLaddersAndElevators->m_ladders[1].m_pData;
        }
      }
    }
  }
LABEL_18:
  v24 = HIDWORD(rArea->m_rNavMesh->m_pEditor[2]._vptr_INavEditor) == 1;
  funcDrawArea._M_manager = 0;
  bInPlacePainting = v24;
  m_fValue = nav_draw_connected_area_radius.m_pParent->m_Value.m_fValue;
  v26 = operator new(0x18u);
  *v26 = rArea;
  v26[1] = &flDurationOverridea;
  funcDrawArea._M_functor._M_unused._M_object = v26;
  v26[2] = &bInPlacePainting;
  funcDrawArea._M_invoker = std::_Function_handler<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *),CNavDrawArea::DrawConnectedAreas(CNavArea const&,float)::{lambda(CNavArea &,NavSearchAreaInfo_t *)#1}>::_M_invoke;
  funcDrawArea._M_manager = std::_Function_base::_Base_manager<CNavDrawArea::DrawConnectedAreas(CNavArea const&,float)::{lambda(CNavArea&,NavSearchAreaInfo_t *)#1}>::_M_manager;
  NavHull_t::NavHull_t(&v32, -1.0, v27, 7u);
  m_nHullSupport = rArea->m_nHullSupport;
  navHull.m_hullCategory = 1;
  navHull.m_flHullRadius = v32.m_flHullRadius;
  navHull.m_flHullHeight = v32.m_flHullHeight;
  if ( (m_nHullSupport & 1) == 0 )
  {
    navHull.m_hullCategory = 2;
    if ( (m_nHullSupport & 2) == 0 )
      navHull.m_hullCategory = 4;
  }
  NavBreadthFirstSearch<std::function<NavSearchAreaResult_t ()(CNavArea &,NavSearchAreaInfo_t *)>>(
    rArea,
    navHull,
    &funcDrawArea,
    0x1Fu,
    -1,
    m_fValue);
  if ( funcDrawArea._M_manager != 0 )
    funcDrawArea._M_manager(&funcDrawArea, &funcDrawArea, std::_Manager_operation::__destroy_functor);
}


// CNavDrawArea::DrawAreaConnection  (line 646, @0x0000000002ed1c30, libserver.so)  // inlines: ComputeOrientedPortal, FixupZ, GetZ, NavDrawLine, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: CNavPoly::ComputeOrientedPortal, CNavPoly::GetEdgeNormal, CNavOrientedPortal::GetCenter, CNavPoly::GetZ, CNavPoly::GetClosestPointOnPoly, CNavArea::IsConnectedOnAny, NavDrawGetColor, NavDrawLine
// callers: std::_Function_handler<NavSearchAreaResult_t(CNavArea&, NavSearchAreaInfo_t*), CNavDrawArea::DrawConnectedAreas(const CNavArea&, float)::__lambda12>::_M_invoke, CNavEditor::DrawEditMode
void __fastcall CNavDrawArea::DrawAreaConnection(
        const CNavArea *const rArea,
        const CNavArea *const rAdjacentArea,
        NavEdgeIndex nEdge,
        NavEdgeIndex nBackEdge,
        NavEditColor nOneWayColor,
        NavEditColor nTwoWayColor,
        float flDurationOverride)
{
  float v11; // xmm2_4
  NavEditColor v12; // edi
  Color Color; // eax
  Vector vFrom; // [rsp+30h] [rbp-80h] BYREF
  Vector vTo; // [rsp+40h] [rbp-70h] BYREF
  Vector vDrawTo; // [rsp+50h] [rbp-60h] BYREF
  CNavOrientedPortal portalConnection; // [rsp+60h] [rbp-50h] BYREF
  Vector EdgeNormal; // 0:kr00_12.12
  Vector Center; // 0:kr14_12.12

  CNavPoly::ComputeOrientedPortal(rArea, rAdjacentArea, nEdge, nBackEdge, -1.0, &portalConnection);
  EdgeNormal = CNavPoly::GetEdgeNormal(rArea, nEdge);
  Center = CNavOrientedPortal::GetCenter(&portalConnection);
  vFrom.y = Center.y - (EdgeNormal.y * 5.0);
  vFrom.x = Center.x - (EdgeNormal.x * 5.0);
  vDrawTo = CNavOrientedPortal::GetCenter(&portalConnection);
  vTo.y = (EdgeNormal.y * 5.0) + vDrawTo.y;
  vTo.x = (EdgeNormal.x * 5.0) + vDrawTo.x;
  vFrom.z = CNavPoly::GetZ(rArea, vFrom.y, (EdgeNormal.z * 5.0) + vDrawTo.z);
  vTo.z = CNavPoly::GetZ(rAdjacentArea, vTo.y, v11);
  vDrawTo = CNavPoly::GetClosestPointOnPoly(rAdjacentArea, &vTo);
  if ( CNavArea::IsConnectedOnAny(rAdjacentArea, rArea, 0, 0, 0) )
  {
    v12 = nTwoWayColor;
    if ( nTwoWayColor < NavEditColor::NavDegenerateFirstColor )
      return;
    goto LABEL_3;
  }
  if ( nOneWayColor >= NavEditColor::NavDegenerateFirstColor )
  {
    v12 = nOneWayColor;
LABEL_3:
    Color = NavDrawGetColor(v12);
    NavDrawLine(&vFrom, &vDrawTo, Color, LODWORD(flDurationOverride));
  }
}


// CNavDrawAreaExt::DrawArea_Internal  (line 684, @0x0000000002ed3860, libserver.so)  // inlines: GetBool, GetCenter, GetInt, GetVert, IsDamaging, Max<int>, SetOrigin, SetToIdentity, Sphere, VertexColor_t
// calls: CNavAreaExtended::GetLightIntensity, NDebugOverlay::Line, SetIdentityMatrix, CNavDrawArea::DrawArea_Internal
void __fastcall CNavDrawAreaExt::DrawArea_Internal(
        const CNavDrawAreaExt *const this,
        const CNavAreaExtended *rArea,
        __m128 flDurationOverride,
        NavEditColor colorOverride)
{
  __int32 v4; // xmm2_4
  __m128 v6; // xmm0
  Vector *m_vVerts; // r12
  int v8; // r15d
  vec_t x; // xmm2_4
  vec_t z; // xmm0_4
  float LightIntensity; // xmm0_4
  unsigned int v12; // r8d
  signed int v13; // edx
  ISceneViewDebugOverlays *v14; // rbx
  vec_t v15; // xmm1_4
  vec_t v16; // r13d
  vec_t v17; // [rsp+4h] [rbp-8Ch]
  vec_t y; // [rsp+8h] [rbp-88h]
  unsigned __int32 flDurationOverridea; // [rsp+18h] [rbp-78h]
  float flDrawDuration; // [rsp+1Ch] [rbp-74h]
  Vector vStart; // [rsp+20h] [rbp-70h] BYREF
  Vector vEnd; // [rsp+30h] [rbp-60h] BYREF
  vec_t v25; // [rsp+3Ch] [rbp-54h]
  vec_t v26; // [rsp+4Ch] [rbp-44h]
  vec_t v27; // [rsp+5Ch] [rbp-34h]

  v4 = flDurationOverride.m128_i32[0];
  flDurationOverridea = flDurationOverride.m128_i32[0];
  v6 = _mm_cmple_ss(0LL, flDurationOverride);
  LODWORD(flDrawDuration) = _mm_andnot_ps(v6, 0x3C279BBBu).m128_u32[0] | v4 & v6.m128_i32[0];
  if ( nav_draw_show_light_intensity.m_pParent->m_Value.m_nValue != 0 && rArea->m_nVerts > 0 )
  {
    m_vVerts = rArea->m_vVerts;
    v8 = 0;
    do
    {
      x = m_vVerts->x;
      vStart.y = m_vVerts->y;
      z = m_vVerts->z;
      vStart.x = x;
      vStart.z = z;
      vEnd = vStart;
      LightIntensity = CNavAreaExtended::GetLightIntensity(rArea, &vStart);
      v12 = 192;
      v13 = (LightIntensity * 255.0);
      vEnd.z = (71.0 * LightIntensity) + vEnd.z;
      if ( v13 > 191 )
        v12 = (LightIntensity * 255.0);
      ++v8;
      ++m_vVerts;
      NDebugOverlay::Line(&vEnd, &vStart, v13, v13, v12, 1, flDrawDuration);
    }
    while ( rArea->m_nVerts > v8 );
  }
  v14 = debugoverlay;
  if ( debugoverlay != 0 && rArea->m_nDamagingTickCount >= gpGlobals->tickcount )
  {
    v15 = rArea->m_vCenter.x;
    vStart.x = -2.3686737e38;
    v16 = rArea->m_vCenter.z;
    v17 = v15;
    y = rArea->m_vCenter.y;
    SetIdentityMatrix(&vEnd);
    v27 = v16;
    v25 = v17;
    v26 = y;
    (*(v14->_vptr_ISceneViewDebugOverlays + 18))(v14, &vEnd, &vStart, 1, 5.0, flDrawDuration);
  }
  CNavDrawArea::DrawArea_Internal(this, rArea, flDurationOverridea, colorOverride);
}


// CNavDrawAreaExt::DrawGetColor_Internal  (line 716, @0x0000000002ec8d70, libserver.so)
// calls: CNavDrawArea::DrawGetColor_Internal
void __fastcall CNavDrawAreaExt::DrawGetColor_Internal(
        const CNavDrawAreaExt *const this,
        const CNavArea *const rArea,
        NavEditColor *pColorOut,
        bool *pUseAttributeColorsOut)
{
  int v4; // eax
  const CNavArea *v5; // rsi
  NavEditColor *v6; // rdx

  if ( HIDWORD(rArea->m_rNavMesh->m_pEditor[2]._vptr_INavEditor) == 1 )
  {
    *pUseAttributeColorsOut = 0;
    v4 = (*(rArea->_vptr_CNavPoly + 7))(rArea);
    v5 = rArea;
    v6 = pColorOut;
    if ( v4 != 0 )
      *v6 = ((*(rArea->_vptr_CNavPoly + 7))(rArea) != HIDWORD(v5->m_rNavMesh->m_pEditor[7]._vptr_INavEditor)) + 2;
    else
      *pColorOut = NavEditColor::NavNoPlaceColor;
  }
  else
  {
    CNavDrawArea::DrawGetColor_Internal(this, rArea, pColorOut, pUseAttributeColorsOut);
  }
}


// CNavDrawLadder::DrawLadder  (line 752, @0x0000000002ed1e10, libserver.so)  // inlines: AddDirectionVector, DotProduct2D, FastSqrt, GetCenter, GetString, Init, Length, NavDirOpposite, NavDrawLine, NormalizeInPlace, Vector, Vector2DLength, Vector2DNormalize, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator*=, operator+, operator+=, operator-, operator/=
// calls: UTIL_GetListenServerHost, AngleVectors, EntityFromEntityHandle, CBaseEntity::DrawAbsBoxOverlay, VectorVectors, sscanf, NavDrawGetColor, NDebugOverlay::Line, CNavArea::IsConnectedToLadder, NDebugOverlay::Triangle
// callers: CNavDrawArea::DrawConnectedAreas, CNavEditor::DrawEditMode
// strings: "FCVAR_NEVER_AS_STRING", "%d %d %d %d"
void __fastcall CNavDrawLadder::DrawLadder(const CNavLadder *const rLadder)
{
  CBasePlayer *ListenServerHost; // rax
  CBasePlayer *v3; // r12
  double v4; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  CBasePlayer *v6; // rdi
  int *v7; // r12
  vec_t v8; // xmm1_4
  float *v9; // rax
  int v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  bool v17; // r15
  bool v18; // r13
  bool v19; // r14
  INavEntityInterface *m_pEntityInterface; // rdi
  IHandleEntity *v21; // rax
  CBaseEntity *v22; // rax
  bool v23; // zf
  NavEditColor v24; // r14d
  char *m_pszString; // rdi
  float v26; // xmm0_4
  float x; // xmm5_4
  float y; // xmm4_4
  float z; // xmm3_4
  float v30; // xmm7_4
  float v31; // xmm7_4
  float v32; // xmm5_4
  float v33; // xmm4_4
  float v34; // xmm7_4
  float v35; // xmm3_4
  Color Color; // eax
  Color v37; // eax
  Color v38; // eax
  unsigned int x_low; // r15d
  unsigned int y_low; // r14d
  Color v41; // eax
  __m128i v42; // xmm4
  float v43; // r15d
  __m128i v44; // xmm4
  float v45; // r14d
  CNavArea *m_pBottomArea; // rdi
  __m128 v47; // xmm6
  __m128 v48; // xmm2
  __m128 v49; // xmm3
  bool IsConnectedToLadder; // al
  Color v51; // eax
  CNavArea *m_pTopForwardArea; // rdi
  bool v53; // cf
  CNavArea *v54; // rax
  float v55; // r15d
  float v56; // r14d
  Color v57; // eax
  CNavArea *m_pTopLeftArea; // rdi
  CNavArea *v59; // rax
  float v60; // r15d
  float v61; // r14d
  Color v62; // eax
  CNavArea *m_pTopRightArea; // rdi
  CNavArea *v64; // rax
  float v65; // r15d
  float v66; // r14d
  Color v67; // eax
  CNavArea *m_pTopBehindArea; // rdi
  CNavArea *v69; // rax
  float v70; // ebx
  Color v71; // eax
  int v72; // eax
  __int32 v73; // eax
  float v74; // xmm1_4
  float v75; // xmm2_4
  vec_t v76; // [rsp+14h] [rbp-10Ch]
  vec_t v77; // [rsp+18h] [rbp-108h]
  float v78; // [rsp+20h] [rbp-100h]
  float v79; // [rsp+24h] [rbp-FCh]
  vec_t v80; // [rsp+28h] [rbp-F8h]
  vec_t v81; // [rsp+2Ch] [rbp-F4h]
  float v82; // [rsp+34h] [rbp-ECh]
  float v83; // [rsp+38h] [rbp-E8h]
  float v84; // [rsp+3Ch] [rbp-E4h]
  float v85; // [rsp+40h] [rbp-E0h]
  float v86; // [rsp+44h] [rbp-DCh]
  INavEditor *m_pEditor; // [rsp+48h] [rbp-D8h]
  float v88; // [rsp+48h] [rbp-D8h]
  float v89; // [rsp+50h] [rbp-D0h]
  float v90; // [rsp+50h] [rbp-D0h]
  float v91; // [rsp+58h] [rbp-C8h]
  float v92; // [rsp+58h] [rbp-C8h]
  float flOffset; // [rsp+5Ch] [rbp-C4h]
  float flOffseta; // [rsp+5Ch] [rbp-C4h]
  float flOffsetb; // [rsp+5Ch] [rbp-C4h]
  float flOffsetc; // [rsp+5Ch] [rbp-C4h]
  float v97; // [rsp+60h] [rbp-C0h]
  float v98; // [rsp+60h] [rbp-C0h]
  float vTop; // [rsp+64h] [rbp-BCh]
  float vTopa; // [rsp+64h] [rbp-BCh]
  float vTopb; // [rsp+64h] [rbp-BCh]
  float vTopc; // [rsp+64h] [rbp-BCh]
  float vTopd; // [rsp+64h] [rbp-BCh]
  float vTope; // [rsp+64h] [rbp-BCh]
  float vTop_4; // [rsp+68h] [rbp-B8h]
  float vTop_4b; // [rsp+68h] [rbp-B8h]
  float vTop_4a; // [rsp+68h] [rbp-B8h]
  float vTop_8; // [rsp+6Ch] [rbp-B4h]
  float vTop_8b; // [rsp+6Ch] [rbp-B4h]
  float vTop_8a; // [rsp+6Ch] [rbp-B4h]
  Vector vDir; // [rsp+70h] [rbp-B0h] BYREF
  Vector vEye; // [rsp+80h] [rbp-A0h]
  Vector vRight; // [rsp+90h] [rbp-90h] BYREF
  Vector vUp; // [rsp+A0h] [rbp-80h] BYREF
  Vector p1; // [rsp+B0h] [rbp-70h] BYREF
  Vector target; // [rsp+C0h] [rbp-60h] BYREF
  Vector origin; // [rsp+D0h] [rbp-50h] BYREF
  int bgcolor[4]; // [rsp+E0h] [rbp-40h] BYREF
  char v119; // [rsp+F0h] [rbp-30h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  v3 = ListenServerHost;
  if ( ListenServerHost == 0 )
    return;
  m_pEditor = rLadder->m_rNavMesh->m_pEditor;
  v4 = (*(ListenServerHost->_vptr_IHandleEntity + 164))(ListenServerHost);
  vptr_IHandleEntity = v3->_vptr_IHandleEntity;
  v6 = v3;
  *&vEye.x = v4;
  v7 = bgcolor;
  vEye.z = v8;
  v9 = (vptr_IHandleEntity[165])(v6);
  *&v10 = v9[2] + vec3_angle.z;
  v11 = *v9 + vec3_angle.x;
  *&bgcolor[1] = v9[1] + vec3_angle.y;
  bgcolor[2] = v10;
  *bgcolor = v11;
  AngleVectors(bgcolor, &vDir, 0, 0);
  v12 = vEye.x - rLadder->m_vBottom.x;
  v13 = vEye.y - rLadder->m_vBottom.y;
  v14 = fsqrt((v12 * v12) + (v13 * v13));
  if ( v14 == 0.0 )
  {
    v16 = 0.0;
    v15 = 0.0;
  }
  else
  {
    v15 = v12 * (1.0 / v14);
    v16 = v13 * (1.0 / v14);
  }
  if ( HIDWORD(m_pEditor[2]._vptr_INavEditor) == 1 )
  {
    v19 = 1;
    v18 = 0;
    v17 = 0;
  }
  else
  {
    v17 = rLadder == m_pEditor[13]._vptr_INavEditor;
    v18 = rLadder == m_pEditor[15]._vptr_INavEditor;
    v19 = ((v15 * rLadder->m_vNormal.x) + (v16 * rLadder->m_vNormal.y)) > 0.0;
  }
  m_pEntityInterface = rLadder->m_rNavMesh->m_pEntityInterface;
  if ( m_pEntityInterface != 0 )
  {
    v21 = (*(m_pEntityInterface->_vptr_INavEntityInterface + 2))(m_pEntityInterface, rLadder);
    v22 = EntityFromEntityHandle(v21);
    if ( v22 != 0 )
      CBaseEntity::DrawAbsBoxOverlay(v22);
  }
  v23 = !v19;
  v24 = NavEditColor::NavMarkedColor;
  if ( v23 )
  {
    if ( !v18 )
      v24 = !v17 ? NavEditColor::NavNormalColor : NavEditColor::NavSelectedColor;
  }
  else if ( !v18 )
  {
    v24 = !v17 ? NavEditColor::NavSamePlaceColor : NavEditColor::NavSelectedColor;
  }
  vUp.x = 0.0;
  vRight.x = 0.0;
  vRight.y = 0.0;
  vRight.z = 0.0;
  vUp.y = 0.0;
  vUp.z = 0.0;
  VectorVectors(&rLadder->m_vNormal, &vRight, &vUp);
  if ( vUp.z <= 0.0 )
  {
    vUp.x = 0.0;
    vUp.y = 0.0;
    vUp.z = 1.0;
  }
  m_pszString = "FCVAR_NEVER_AS_STRING";
  v26 = 0.5 * rLadder->m_flWidth;
  x = rLadder->m_vBottom.x;
  y = rLadder->m_vBottom.y;
  z = rLadder->m_vBottom.z;
  v30 = x - (vRight.x * v26);
  vRight.x = vRight.x * v26;
  vRight.y = vRight.y * v26;
  vTop_4 = v30;
  v31 = y;
  vTop = x + vRight.x;
  v32 = rLadder->m_vTop.x;
  vRight.z = v26 * vRight.z;
  v97 = y + vRight.y;
  v33 = rLadder->m_vTop.y;
  vTop_8 = v31 - vRight.y;
  v34 = z;
  v91 = z + vRight.z;
  v35 = rLadder->m_vTop.z;
  flOffset = v34 - vRight.z;
  v86 = v32 - vRight.x;
  v83 = vRight.x + v32;
  v85 = v33 - vRight.y;
  v84 = v35 - vRight.z;
  v82 = vRight.y + v33;
  v89 = vRight.z + v35;
  if ( (nav_draw_area_bgcolor.m_nFlags & 0x1000) == 0 )
  {
    m_pszString = "";
    if ( nav_draw_area_bgcolor.m_pParent->m_Value.m_pszString != 0 )
      m_pszString = nav_draw_area_bgcolor.m_pParent->m_Value.m_pszString;
  }
  if ( sscanf(m_pszString, "%d %d %d %d", bgcolor, &bgcolor[1], &bgcolor[2], &bgcolor[3]) == 4 )
  {
    do
    {
      v72 = 0;
      if ( *v7 >= 0 )
        v72 = *v7;
      if ( v72 > 255 )
        v72 = 255;
      *v7++ = v72;
    }
    while ( v7 != &v119 );
    if ( bgcolor[3] > 0 )
    {
      v73 = (rLadder->m_dir + 2) % 4;
      if ( v73 == 1 )
      {
        v74 = 0.0;
        v75 = 1.0;
        goto LABEL_49;
      }
      if ( (rLadder->m_dir + 2) % 4 <= 1 )
      {
        v74 = -1.0;
        v75 = 0.0;
        if ( v73 == 0 )
          goto LABEL_49;
      }
      else
      {
        if ( v73 == 2 )
        {
          v74 = 1.0;
          v75 = 0.0;
          goto LABEL_49;
        }
        v74 = 0.0;
        v75 = -1.0;
        if ( v73 == 3 )
        {
LABEL_49:
          target.x = v83 + v75;
          origin.x = vTop + v75;
          v76 = vTop + v75;
          target.y = v82 + v74;
          origin.y = v97 + v74;
          v77 = v97 + v74;
          target.z = v89 + 0.0;
          origin.z = v91 + 0.0;
          v78 = v75;
          v79 = v74;
          p1.x = v86 + v75;
          v80 = v86 + v75;
          p1.y = v85 + v74;
          v81 = v85 + v74;
          p1.z = v84 + 0.0;
          NDebugOverlay::Triangle(&p1, &target, &origin, bgcolor[0], bgcolor[1], bgcolor[2], 0.15000001, bgcolor[3], 1);
          target.z = flOffset + 0.0;
          target.x = v78 + vTop_4;
          origin.x = v80;
          origin.y = v81;
          origin.z = v84 + 0.0;
          target.y = v79 + vTop_8;
          p1.x = v76;
          p1.y = v77;
          p1.z = v91 + 0.0;
          NDebugOverlay::Triangle(&p1, &target, &origin, bgcolor[0], bgcolor[1], bgcolor[2], 0.15000001, bgcolor[3], 1);
          goto LABEL_18;
        }
      }
      v74 = 0.0;
      v75 = 0.0;
      goto LABEL_49;
    }
  }
LABEL_18:
  Color = NavDrawGetColor(v24);
  target.x = vTop_4 + 0.0;
  target.y = vTop_8 + 0.0;
  target.z = flOffset + 1.0;
  origin.x = v86 + 0.0;
  origin.y = v85 + 0.0;
  origin.z = v84 + 1.0;
  NDebugOverlay::Line(&origin, &target, Color._color[0], Color._color[1], Color._color[2], 0, 0.15000001);
  v37 = NavDrawGetColor(v24);
  target.x = vTop + 0.0;
  origin.x = v83 + 0.0;
  target.y = v97 + 0.0;
  origin.y = v82 + 0.0;
  origin.z = v89 + 1.0;
  target.z = v91 + 1.0;
  NDebugOverlay::Line(&origin, &target, v37._color[0], v37._color[1], v37._color[2], 0, 0.15000001);
  if ( v89 > v91 )
  {
    while ( 1 )
    {
      v38 = NavDrawGetColor(v24);
      target.x = vTop_4 + 0.0;
      origin.x = vTop + 0.0;
      target.y = vTop_8 + 0.0;
      origin.y = v97 + 0.0;
      target.z = flOffset + 1.0;
      origin.z = v91 + 1.0;
      NDebugOverlay::Line(&origin, &target, v38._color[0], v38._color[1], v38._color[2], 0, 0.15000001);
      vTop = vTop + (vUp.x * (0.5 * CNavGeneratorBase::sm_flGenerationStepSize));
      v97 = v97 + (vUp.y * (0.5 * CNavGeneratorBase::sm_flGenerationStepSize));
      vTop_4 = (vUp.x * (0.5 * CNavGeneratorBase::sm_flGenerationStepSize)) + vTop_4;
      vTop_8 = (vUp.y * (0.5 * CNavGeneratorBase::sm_flGenerationStepSize)) + vTop_8;
      flOffset = flOffset + ((0.5 * CNavGeneratorBase::sm_flGenerationStepSize) * vUp.z);
      if ( v89 <= (v91 + ((0.5 * CNavGeneratorBase::sm_flGenerationStepSize) * vUp.z)) )
        break;
      v91 = v91 + ((0.5 * CNavGeneratorBase::sm_flGenerationStepSize) * vUp.z);
    }
  }
  if ( HIDWORD(m_pEditor[2]._vptr_INavEditor) != 1 )
  {
    x_low = LODWORD(rLadder->m_vBottom.x);
    vTop_4b = rLadder->m_vTop.y;
    vTopa = rLadder->m_vBottom.z;
    y_low = LODWORD(rLadder->m_vBottom.y);
    vTop_8b = rLadder->m_vTop.x;
    flOffseta = rLadder->m_vTop.z;
    v41 = NavDrawGetColor(NavEditColor::NavConnectedTwoWaysColor);
    v42 = _mm_cvtsi32_si128(x_low);
    *v42.m128i_i32 = *v42.m128i_i32 + 0.0;
    v43 = COERCE_FLOAT(_mm_cvtsi128_si32(v42));
    v44 = _mm_cvtsi32_si128(y_low);
    *v44.m128i_i32 = *v44.m128i_i32 + 0.0;
    target.x = v43;
    LODWORD(target.y) = v44.m128i_i32[0];
    v45 = COERCE_FLOAT(_mm_cvtsi128_si32(v44));
    vTop_8a = vTop_8b + 0.0;
    vTop_4a = vTop_4b + 0.0;
    origin.x = vTop_8a;
    origin.y = vTop_4a;
    target.z = vTopa + 1.0;
    v98 = flOffseta + 1.0;
    origin.z = flOffseta + 1.0;
    NDebugOverlay::Line(&origin, &target, v41._color[0], v41._color[1], v41._color[2], 0, 0.15000001);
    m_pBottomArea = rLadder->m_pBottomArea;
    if ( m_pBottomArea != 0 )
    {
      v47 = LODWORD(flOffseta);
      v88 = m_pBottomArea->m_vCenter.x;
      v48 = 0x3FC00000u;
      v47.m128_f32[0] = flOffseta - vTopa;
      v48.m128_f32[0] = 1.5 * CNavGeneratorBase::sm_flGenerationStepSize;
      v92 = m_pBottomArea->m_vCenter.z;
      v90 = m_pBottomArea->m_vCenter.y;
      v49.m128_f32[0] = vTopa - v92;
      LODWORD(flOffsetb) = COERCE_UNSIGNED_INT(_mm_cmpge_ss(v47, v48).m128_f32[0])
                         & LODWORD(CNavGeneratorBase::sm_flGenerationStepSize)
                         & COERCE_UNSIGNED_INT(_mm_cmpge_ss(v48, v49).m128_f32[0]);
      IsConnectedToLadder = CNavArea::IsConnectedToLadder(
                              m_pBottomArea,
                              rLadder,
                              CNavLadder::LadderDirectionType::LADDER_UP);
      v51 = NavDrawGetColor((17 - IsConnectedToLadder));
      target.x = v88 + 0.0;
      target.y = v90 + 0.0;
      target.z = v92 + 1.0;
      origin.z = (flOffsetb + vTopa) + 1.0;
      origin.x = v43 + 0.0;
      origin.y = v45 + 0.0;
      NDebugOverlay::Line(&origin, &target, v51._color[0], v51._color[1], v51._color[2], 0, 0.15000001);
    }
    m_pTopForwardArea = rLadder->m_pTopForwardArea;
    if ( m_pTopForwardArea != 0 )
    {
      v53 = !CNavArea::IsConnectedToLadder(m_pTopForwardArea, rLadder, CNavLadder::LadderDirectionType::LADDER_DOWN);
      v54 = rLadder->m_pTopForwardArea;
      v55 = v54->m_vCenter.y;
      vTopb = v54->m_vCenter.x;
      v56 = v54->m_vCenter.z;
      v57 = NavDrawGetColor((v53 - 1 + 17));
      target.x = vTopb + 0.0;
      origin.x = vTop_8a;
      target.y = v55 + 0.0;
      origin.y = vTop_4a;
      target.z = v56 + 1.0;
      origin.z = v98;
      NDebugOverlay::Line(&origin, &target, v57._color[0], v57._color[1], v57._color[2], 0, 0.15000001);
    }
    m_pTopLeftArea = rLadder->m_pTopLeftArea;
    if ( m_pTopLeftArea != 0 )
    {
      v53 = !CNavArea::IsConnectedToLadder(m_pTopLeftArea, rLadder, CNavLadder::LadderDirectionType::LADDER_DOWN);
      v59 = rLadder->m_pTopLeftArea;
      v60 = v59->m_vCenter.y;
      vTopc = v59->m_vCenter.x;
      v61 = v59->m_vCenter.z;
      v62 = NavDrawGetColor((v53 - 1 + 17));
      target.x = vTopc + 0.0;
      origin.x = vTop_8a;
      target.y = v60 + 0.0;
      origin.y = vTop_4a;
      target.z = v61 + 1.0;
      origin.z = v98;
      NDebugOverlay::Line(&origin, &target, v62._color[0], v62._color[1], v62._color[2], 0, 0.15000001);
    }
    m_pTopRightArea = rLadder->m_pTopRightArea;
    if ( m_pTopRightArea != 0 )
    {
      v53 = !CNavArea::IsConnectedToLadder(m_pTopRightArea, rLadder, CNavLadder::LadderDirectionType::LADDER_DOWN);
      v64 = rLadder->m_pTopRightArea;
      v65 = v64->m_vCenter.y;
      vTopd = v64->m_vCenter.x;
      v66 = v64->m_vCenter.z;
      v67 = NavDrawGetColor((v53 - 1 + 17));
      origin.y = vTop_4a;
      target.x = vTopd + 0.0;
      origin.z = v98;
      origin.x = vTop_8a;
      target.y = v65 + 0.0;
      target.z = v66 + 1.0;
      NDebugOverlay::Line(&origin, &target, v67._color[0], v67._color[1], v67._color[2], 0, 0.15000001);
    }
    m_pTopBehindArea = rLadder->m_pTopBehindArea;
    if ( m_pTopBehindArea != 0 )
    {
      v53 = !CNavArea::IsConnectedToLadder(m_pTopBehindArea, rLadder, CNavLadder::LadderDirectionType::LADDER_DOWN);
      v69 = rLadder->m_pTopBehindArea;
      v70 = v69->m_vCenter.x;
      vTope = v69->m_vCenter.y;
      flOffsetc = v69->m_vCenter.z;
      v71 = NavDrawGetColor((v53 - 1 + 17));
      target.x = v70 + 0.0;
      target.y = vTope + 0.0;
      origin.y = vTop_4a;
      origin.z = v98;
      origin.x = vTop_8a;
      target.z = flOffsetc + 1.0;
      NDebugOverlay::Line(&origin, &target, v71._color[0], v71._color[1], v71._color[2], 0, 0.15000001);
    }
  }
}


// CNavDrawLadder::DrawConnectedAreas  (line 906, @0x0000000002eebe50, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CNavArea*>, DrawArea, Element, GrowMemory, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CNavArea*, int>::Grow, CUtlMemory<CNavArea*, int>::Purge, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CNavEditor::DrawEditMode
void __fastcall CNavDrawLadder::DrawConnectedAreas(const CNavLadder *const rLadder)
{
  bool v2; // zf
  int v3; // ebx
  int m_Size; // eax
  int v5; // edx
  CNavArea **v6; // rax
  int v7; // eax
  int v8; // edx
  CNavArea **v9; // rax
  int v10; // eax
  int v11; // edx
  CNavArea **v12; // rax
  int v13; // eax
  int v14; // edx
  CNavArea **v15; // rax
  __int64 v16; // r12
  int v17; // ebx
  CUtlVector<CNavArea*,CUtlMemory<CNavArea*,int> > pAreas; // [rsp+0h] [rbp-40h] BYREF

  pAreas.m_Size = 0;
  v2 = rLadder->m_pTopForwardArea == 0;
  pAreas.m_Memory.m_pMemory = 0;
  pAreas.m_Memory.m_nAllocationCount = 0;
  pAreas.m_Memory.m_nGrowSize = 0;
  if ( v2 )
  {
    v3 = 0;
  }
  else
  {
    CUtlMemory<CNavArea *,int>::Grow(&pAreas.m_Memory, 1);
    v3 = 1;
    pAreas.m_Size = 1;
    if ( pAreas.m_Memory.m_pMemory != 0 )
    {
      *pAreas.m_Memory.m_pMemory = rLadder->m_pTopForwardArea;
      v3 = 1;
    }
  }
  if ( rLadder->m_pTopLeftArea != 0 )
  {
    m_Size = v3;
    if ( v3 == pAreas.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CNavArea *,int>::Grow(&pAreas.m_Memory, 1);
      m_Size = pAreas.m_Size;
    }
    v5 = m_Size + 1;
    pAreas.m_Size = m_Size + 1;
    v6 = &pAreas.m_Memory.m_pMemory[v3];
    if ( v6 != 0 )
    {
      *v6 = rLadder->m_pTopLeftArea;
      v3 = pAreas.m_Size;
    }
    else
    {
      v3 = v5;
    }
  }
  if ( rLadder->m_pTopRightArea != 0 )
  {
    v7 = v3;
    if ( v3 == pAreas.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CNavArea *,int>::Grow(&pAreas.m_Memory, 1);
      v7 = pAreas.m_Size;
    }
    v8 = v7 + 1;
    pAreas.m_Size = v7 + 1;
    v9 = &pAreas.m_Memory.m_pMemory[v3];
    if ( v9 != 0 )
    {
      *v9 = rLadder->m_pTopRightArea;
      v3 = pAreas.m_Size;
    }
    else
    {
      v3 = v8;
    }
  }
  if ( rLadder->m_pTopBehindArea != 0 )
  {
    v10 = v3;
    if ( v3 == pAreas.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CNavArea *,int>::Grow(&pAreas.m_Memory, 1);
      v10 = pAreas.m_Size;
    }
    v11 = v10 + 1;
    pAreas.m_Size = v10 + 1;
    v12 = &pAreas.m_Memory.m_pMemory[v3];
    if ( v12 != 0 )
    {
      *v12 = rLadder->m_pTopBehindArea;
      v3 = pAreas.m_Size;
    }
    else
    {
      v3 = v11;
    }
  }
  if ( rLadder->m_pBottomArea != 0 )
  {
    v13 = v3;
    if ( v3 == pAreas.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CNavArea *,int>::Grow(&pAreas.m_Memory, 1);
      v13 = pAreas.m_Size;
    }
    v14 = v13 + 1;
    pAreas.m_Size = v13 + 1;
    v15 = &pAreas.m_Memory.m_pMemory[v3];
    if ( v15 != 0 )
    {
      *v15 = rLadder->m_pBottomArea;
      v3 = pAreas.m_Size;
    }
    else
    {
      v3 = v14;
    }
  }
  if ( v3 > 0 )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      if ( INavDrawArea::ms_pInst != 0 )
        (*(INavDrawArea::ms_pInst->_vptr_INavDrawArea + 3))(
          INavDrawArea::ms_pInst,
          pAreas.m_Memory.m_pMemory[v16],
          39,
          -1.0);
      ++v17;
      ++v16;
    }
    while ( pAreas.m_Size > v17 );
  }
  if ( (pAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CNavArea *,int>::Purge(&pAreas.m_Memory);
    if ( (pAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CNavArea *,int>::Purge(&pAreas.m_Memory);
  }
}


// CNavDrawMesh::DrawPlayerCounts_Internal  (line 940, @0x0000000002ec6430, libserver.so)
void __fastcall CNavDrawMesh::DrawPlayerCounts_Internal(CNavDrawMesh *const this, const CNavMesh *const rMesh)
{
  ;
}


// CNavDrawMesh::DrawClearance_Internal  (line 959, @0x0000000002ec9d30, libserver.so)  // inlines: GetCenter, SetOrigin, SetToIdentity, Sphere, VertexColor_t
// calls: SetIdentityMatrix
void __fastcall CNavDrawMesh::DrawClearance_Internal(CNavDrawMesh *const this, const CNavMesh *const rMesh)
{
  int m_Size; // eax
  ISceneViewDebugOverlays *v4; // r13
  unsigned __int64 v5; // r15
  CNavArea *v6; // rax
  __int64 v7; // [rsp+8h] [rbp-88h]
  float m_flClearance; // [rsp+10h] [rbp-80h]
  float x; // [rsp+14h] [rbp-7Ch]
  float y; // [rsp+18h] [rbp-78h]
  float z; // [rsp+1Ch] [rbp-74h]
  _BYTE v12[16]; // [rsp+20h] [rbp-70h] BYREF
  matrix3x4_t matrix; // [rsp+30h] [rbp-60h] BYREF

  if ( debugoverlay != 0 )
  {
    m_Size = rMesh->m_NavAreas.m_Size;
    if ( m_Size != 0 )
    {
      v4 = debugoverlay;
      v5 = 0;
      v7 = 8LL * (m_Size - 1) + 8;
      while ( 1 )
      {
        v6 = rMesh->m_NavAreas.m_Memory.m_pMemory[v5 / 8];
        v12[0] = -56;
        v5 += 8LL;
        v12[1] = -56;
        v12[2] = -56;
        v12[3] = -1;
        m_flClearance = v6->m_flClearance;
        x = v6->m_vCenter.x;
        y = v6->m_vCenter.y;
        z = v6->m_vCenter.z;
        SetIdentityMatrix(&matrix);
        matrix.m_flMatVal[2][3] = z;
        matrix.m_flMatVal[0][3] = x;
        matrix.m_flMatVal[1][3] = y;
        (*(v4->_vptr_ISceneViewDebugOverlays + 18))(v4, &matrix, v12, 1, m_flClearance, 0.0);
        if ( v5 == v7 )
          break;
        v4 = debugoverlay;
      }
    }
  }
}


// CNavDrawMesh::DrawGridCellOutline_Internal  (line 974, @0x0000000002ec6440, libserver.so)  // inlines: GetGridExtent, Init, VectorAdd, VertexColor_t, operator+, operator+=, operator-=
void __fastcall CNavDrawMesh::DrawGridCellOutline_Internal(
        CNavDrawMesh *const this,
        const CNavMesh *const rMesh,
        int nX,
        int nY,
        float flZ,
        float flInset,
        const Color *const col,
        bool bNoZTest,
        float flDuration)
{
  float m_flGridCellSize; // xmm5_4
  _BOOL4 v10; // r13d
  float v12; // xmm3_4
  float v13; // xmm4_4
  void (__fastcall *v14)(ISceneViewDebugOverlays *, Vector *, Vector *, Color *, bool, double); // r15
  void (__fastcall *v15)(ISceneViewDebugOverlays *, Vector *, Vector *, Color *, _BOOL4, double); // r9
  void (__fastcall *v16)(ISceneViewDebugOverlays *, Vector *, Vector *, Color *, _BOOL4, double); // r9
  void (__fastcall *v17)(ISceneViewDebugOverlays *, Vector *, Vector *, Color *, _BOOL4, double); // r9
  void (__fastcall *v18)(ISceneViewDebugOverlays *, Vector *, Vector *, Color *, _BOOL4, double); // r9
  double v22; // [rsp+28h] [rbp-78h]
  Color v23[4]; // [rsp+30h] [rbp-70h] BYREF
  Vector vMin; // [rsp+40h] [rbp-60h] BYREF
  Vector vMax; // [rsp+50h] [rbp-50h] BYREF
  Vector vA; // [rsp+60h] [rbp-40h] BYREF

  if ( debugoverlay != 0 )
  {
    m_flGridCellSize = rMesh->m_flGridCellSize;
    v10 = bNoZTest;
    vMax.z = flZ + 0.0;
    vMin.z = flZ + 0.0;
    vA.z = flZ + 0.0;
    v12 = (nY * m_flGridCellSize) + rMesh->m_flGridMinY;
    v22 = flDuration;
    v13 = (nX * m_flGridCellSize) + rMesh->m_flGridMinX;
    vMin.x = v13 + flInset;
    vMax.y = (v12 + m_flGridCellSize) - flInset;
    vMin.y = v12 + flInset;
    vMax.x = (v13 + m_flGridCellSize) - flInset;
    vA.x = v13 + flInset;
    vA.y = vMax.y;
    v14 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
    v23[0] = *col;
    v14(debugoverlay, &vMin, &vA, v23, bNoZTest, flDuration);
    v15 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
    v23[0] = *col;
    v15(debugoverlay, &vA, &vMax, v23, v10, v22);
    vA.x = vMax.x;
    vA.y = vMin.y;
    vA.z = vMin.z;
    v16 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
    v23[0] = *col;
    v16(debugoverlay, &vMax, &vA, v23, v10, v22);
    v17 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
    v23[0] = *col;
    v17(debugoverlay, &vA, &vMin, v23, v10, v22);
    if ( nX < 0 || nX >= rMesh->m_nGridSizeX || nY < 0 || nY >= rMesh->m_nGridSizeY )
    {
      v18 = *(debugoverlay->_vptr_ISceneViewDebugOverlays + 13);
      v23[0] = *col;
      v18(debugoverlay, &vMin, &vMax, v23, v10, v22);
    }
  }
}


