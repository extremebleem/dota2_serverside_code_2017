
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNavDraw::DrawBox_Internal  (line 29, @0x0000000002032950, libserver.so)  // inlines: Box
void __fastcall CNavDraw::DrawBox_Internal(
        CNavDraw *const this,
        const Vector *const vWorldMins,
        const Vector *const vWorldMaxs,
        char r,
        char g,
        char b,
        float flTimeToLive,
        char a,
        bool bNoDepthTest)
{
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  int (*v10)(...); // rax
  _BYTE v11[16]; // [rsp+10h] [rbp-10h] BYREF

  if ( debugoverlay != 0 )
  {
    vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
    v11[0] = r;
    v11[1] = g;
    v11[2] = b;
    v10 = vptr_ISceneViewDebugOverlays[15];
    v11[3] = a;
    v10(debugoverlay, &vec3_origin, vWorldMins, vWorldMaxs, &quat_identity, v11, flTimeToLive, bNoDepthTest);
  }
}


// CNavDraw::DrawLine_Internal  (line 34, @0x00000000020329b0, libserver.so)  // inlines: Line
void __fastcall CNavDraw::DrawLine_Internal(
        CNavDraw *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        char r,
        char g,
        char b,
        float flTimeToLive,
        char a,
        bool bNoDepthTest)
{
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  int (*v10)(...); // rax
  _BYTE v11[16]; // [rsp+0h] [rbp-10h] BYREF

  if ( debugoverlay != 0 )
  {
    vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
    v11[0] = r;
    v11[1] = g;
    v11[2] = b;
    v10 = vptr_ISceneViewDebugOverlays[13];
    v11[3] = a;
    v10(debugoverlay, vStart, vEnd, v11, bNoDepthTest, flTimeToLive);
  }
}


// CNavDraw::DrawSphere_Internal  (line 39, @0x0000000002032e60, libserver.so)  // inlines: SetOrigin, SetToIdentity, Sphere
// calls: SetIdentityMatrix
void __fastcall CNavDraw::DrawSphere_Internal(
        CNavDraw *const this,
        const Vector *const vCenter,
        float flRadius,
        char r,
        char g,
        char b,
        char a,
        float flTimeToLive,
        bool bNoDepthTest)
{
  ISceneViewDebugOverlays *v9; // rbx
  _BYTE v13[16]; // [rsp+10h] [rbp-60h] BYREF
  matrix3x4_t matrix; // [rsp+20h] [rbp-50h] BYREF

  v9 = debugoverlay;
  if ( debugoverlay != 0 )
  {
    v13[0] = r;
    v13[1] = g;
    v13[2] = b;
    v13[3] = a;
    SetIdentityMatrix(&matrix);
    matrix.m_flMatVal[0][3] = vCenter->x;
    matrix.m_flMatVal[1][3] = vCenter->y;
    matrix.m_flMatVal[2][3] = vCenter->z;
    (*(v9->_vptr_ISceneViewDebugOverlays + 18))(v9, &matrix, v13, bNoDepthTest, flRadius, flTimeToLive);
  }
}


// CNavDraw::DrawText_Internal  (line 44, @0x0000000002033fb0, libserver.so)
// calls: ISceneViewDebugOverlays::Text
void __fastcall CNavDraw::DrawText_Internal(
        CNavDraw *const this,
        const Vector *const vPos,
        int nTextLineOffsetY,
        float flMaxDistToDisplay,
        int r,
        int g,
        int b,
        float64 flTimeToLive,
        int a,
        const char *pText)
{
  if ( debugoverlay != 0 )
    ISceneViewDebugOverlays::Text(
      debugoverlay,
      vPos,
      nTextLineOffsetY,
      flMaxDistToDisplay,
      r,
      g,
      b,
      a,
      flTimeToLive,
      pText);
}


