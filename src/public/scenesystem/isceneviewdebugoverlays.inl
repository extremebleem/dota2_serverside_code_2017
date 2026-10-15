
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ISceneViewDebugOverlays::Sphere  (line 407, @0x000000000224a7e0, libserver.so)  // inlines: SetOrigin, SetToIdentity
// calls: SetIdentityMatrix
// callers: CShatterGlassShard::Shatter, CNavPathJumpProcessLandingZone::FindLandingBoxExit, NavAreaBuildPath
void __fastcall ISceneViewDebugOverlays::Sphere(
        ISceneViewDebugOverlays *const this,
        const Vector *const vCenter,
        float flRadius,
        const VertexColor_t *const vecColor,
        bool bNoDepthTest,
        float64 flTimeToLive)
{
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  matrix3x4_t transform; // [rsp+10h] [rbp-60h] BYREF

  SetIdentityMatrix(&transform);
  vptr_ISceneViewDebugOverlays = this->_vptr_ISceneViewDebugOverlays;
  transform.m_flMatVal[0][3] = vCenter->x;
  transform.m_flMatVal[1][3] = vCenter->y;
  transform.m_flMatVal[2][3] = vCenter->z;
  vptr_ISceneViewDebugOverlays[18](this, &transform, vecColor, bNoDepthTest, flRadius, flTimeToLive);
}


// ISceneViewDebugOverlays::Text  (line 511, @0x0000000001b3ac90, libserver.so)
// calls: V_vsnprintf, __stack_chk_fail
// callers: ISceneViewDebugOverlays::AddTextOverlay, ISceneViewDebugOverlays::AddTextOverlayRGB, CNavDraw::DrawText_Internal, CGenericFlexCycler::HandleAnimEvent
// local variable allocation has failed, the output may be wrong!
void ISceneViewDebugOverlays::Text(
        ISceneViewDebugOverlays *const this,
        const Vector *const vPos,
        int nTextLineOffsetY,
        float flMaxDistToDisplay,
        int r,
        int g,
        int b,
        int a,
        float64 flTimeToLive,
        const char *pStr,
        ...)
{
  char v11; // r14
  char v12; // r13
  char v13; // r12
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  _BYTE v19[8]; // [rsp+20h] [rbp-910h] BYREF
  va_list args; // [rsp+28h] [rbp-908h] BYREF
  char buf[2056]; // [rsp+40h] [rbp-8F0h] BYREF
  unsigned __int64 v22; // [rsp+848h] [rbp-E8h]

  va_start(args, pStr);
  v11 = g;
  v12 = b;
  v13 = r;
  v22 = __readfsqword(0x28u);
  V_vsnprintf(buf, 2048, pStr, args, g, b, *&flMaxDistToDisplay);
  if ( buf[0] != 0 )
  {
    v19[0] = v13;
    vptr_ISceneViewDebugOverlays = this->_vptr_ISceneViewDebugOverlays;
    v19[1] = v11;
    v19[2] = v12;
    v19[3] = a;
    vptr_ISceneViewDebugOverlays[25](this, vPos, nTextLineOffsetY, buf, v19, flMaxDistToDisplay, flTimeToLive);
  }
}


// ISceneViewDebugOverlays::Text  (line 525, @0x00000000020949e0, libserver.so)  // inlines: VertexColor_t
// calls: V_vsnprintf, __stack_chk_fail
// callers: DrawBone
void ISceneViewDebugOverlays::Text(
        ISceneViewDebugOverlays *const this,
        const Vector *const vPos,
        float64 flTimeToLive,
        const char *pStr,
        ...)
{
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  _BYTE v8[8]; // [rsp+10h] [rbp-900h] BYREF
  va_list args; // [rsp+18h] [rbp-8F8h] BYREF
  char buf[2056]; // [rsp+30h] [rbp-8E0h] BYREF
  unsigned __int64 v11; // [rsp+838h] [rbp-D8h]

  va_start(args, pStr);
  v11 = __readfsqword(0x28u);
  V_vsnprintf(buf, 2048, pStr, args);
  if ( buf[0] != 0 )
  {
    vptr_ISceneViewDebugOverlays = this->_vptr_ISceneViewDebugOverlays;
    v8[0] = -1;
    v8[1] = -1;
    v8[2] = -1;
    v8[3] = -1;
    vptr_ISceneViewDebugOverlays[25](this, vPos, 0, buf, v8, 0.0, flTimeToLive);
  }
}


// ISceneViewDebugOverlays::AddEntityTextOverlay  (line 748, @0x0000000001b3a3f0, libserver.so)
// calls: V_vsnprintf, __stack_chk_fail
void ISceneViewDebugOverlays::AddEntityTextOverlay(
        ISceneViewDebugOverlays *const this,
        int entityIndex,
        int nTextOffset,
        float64 flDuration,
        int r,
        int g,
        int b,
        int a,
        const char *format,
        ...)
{
  va_list argptr; // [rsp+8h] [rbp-8D8h] BYREF
  char text[2048]; // [rsp+20h] [rbp-8C0h] BYREF
  unsigned __int64 v11; // [rsp+828h] [rbp-B8h]

  va_start(argptr, format);
  v11 = __readfsqword(0x28u);
  V_vsnprintf(text, 2048, format, argptr, g, b, flDuration);
}


// ISceneViewDebugOverlays::AddBoxOverlay  (line 760, @0x0000000001b3a590, libserver.so)  // inlines: BoxAngles, VertexColor_t
// calls: AngleQuaternion
void __fastcall ISceneViewDebugOverlays::AddBoxOverlay(
        ISceneViewDebugOverlays *const this,
        const Vector *const vOrigin,
        const Vector *const mins,
        const Vector *const maxs,
        const QAngle *const angles,
        char r,
        float64 flDuration,
        char g,
        char b,
        int a)
{
  char v12; // r14
  char v13; // r13
  void (__fastcall *v14)(ISceneViewDebugOverlays *const, const Vector *const, const Vector *const, const Vector *const, Quaternion *, char *, double, int); // r11
  void (__fastcall *v15)(ISceneViewDebugOverlays *const, const Vector *const, const Vector *const, const Vector *const, Quaternion *, char *, double, int); // r10
  char v21; // [rsp+40h] [rbp-50h] BYREF
  char v22; // [rsp+41h] [rbp-4Fh]
  char v23; // [rsp+42h] [rbp-4Eh]
  char v24; // [rsp+43h] [rbp-4Dh]
  Quaternion q; // [rsp+50h] [rbp-40h] BYREF

  if ( a <= 0 )
  {
    v12 = g;
    v13 = b;
    AngleQuaternion(angles, &q);
  }
  else
  {
    AngleQuaternion(angles, &q);
    v12 = g;
    v13 = b;
    v14 = *(this->_vptr_ISceneViewDebugOverlays + 16);
    v21 = r;
    v22 = g;
    v23 = b;
    v24 = a;
    v14(this, vOrigin, mins, maxs, &q, &v21, flDuration, 1);
    AngleQuaternion(angles, &q);
  }
  v15 = *(this->_vptr_ISceneViewDebugOverlays + 15);
  v21 = r;
  v22 = v12;
  v23 = v13;
  v24 = a;
  v15(this, vOrigin, mins, maxs, &q, &v21, flDuration, 1);
}


// ISceneViewDebugOverlays::AddBoxOverlay2  (line 773, @0x0000000001b3a4a0, libserver.so)  // inlines: VertexColor_t
// calls: AngleQuaternion
void __fastcall ISceneViewDebugOverlays::AddBoxOverlay2(
        ISceneViewDebugOverlays *const this,
        const Vector *const vOrigin,
        const Vector *const mins,
        const Vector *const maxs,
        const QAngle *const orientation,
        const Color *const faceColor,
        float64 flTimeToLive,
        const Color *const edgeColor)
{
  void (__fastcall *v12)(ISceneViewDebugOverlays *const, const Vector *const, const Vector *const, const Vector *const, Quaternion *, unsigned __int8 *, double, int); // r11
  unsigned __int8 v13; // si
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // di
  void (__fastcall *v16)(ISceneViewDebugOverlays *const, const Vector *const, const Vector *const, const Vector *const, Quaternion *, unsigned __int8 *, double, int); // r11
  unsigned __int8 v17; // si
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // al
  unsigned __int8 v22; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v23; // [rsp+21h] [rbp-4Fh]
  unsigned __int8 v24; // [rsp+22h] [rbp-4Eh]
  unsigned __int8 v25; // [rsp+23h] [rbp-4Dh]
  Quaternion q; // [rsp+30h] [rbp-40h] BYREF

  AngleQuaternion(orientation, &q);
  v12 = *(this->_vptr_ISceneViewDebugOverlays + 16);
  v13 = faceColor->_color[1];
  v14 = faceColor->_color[3];
  v15 = faceColor->_color[0];
  v24 = faceColor->_color[2];
  v23 = v13;
  v25 = v14;
  v22 = v15;
  v12(this, vOrigin, mins, maxs, &q, &v22, flTimeToLive, 1);
  v16 = *(this->_vptr_ISceneViewDebugOverlays + 15);
  v17 = edgeColor->_color[1];
  v18 = edgeColor->_color[3];
  v19 = edgeColor->_color[0];
  v24 = edgeColor->_color[2];
  v23 = v17;
  v25 = v18;
  v22 = v19;
  v16(this, vOrigin, mins, maxs, &q, &v22, flTimeToLive, 1);
}


// ISceneViewDebugOverlays::AddSphereOverlay  (line 784, @0x0000000001b3a750, libserver.so)  // inlines: SetOrigin, SetToIdentity, Sphere
// calls: SetIdentityMatrix
void __fastcall ISceneViewDebugOverlays::AddSphereOverlay(
        ISceneViewDebugOverlays *const this,
        const Vector *const vOrigin,
        float flRadius,
        int nTheta,
        int nPhi,
        char r,
        char g,
        float64 flDuration,
        char b,
        char a)
{
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  _BYTE v15[16]; // [rsp+10h] [rbp-60h] BYREF
  matrix3x4_t matrix; // [rsp+20h] [rbp-50h] BYREF

  v15[0] = r;
  v15[1] = g;
  v15[2] = b;
  v15[3] = a;
  SetIdentityMatrix(&matrix);
  vptr_ISceneViewDebugOverlays = this->_vptr_ISceneViewDebugOverlays;
  matrix.m_flMatVal[0][3] = vOrigin->x;
  matrix.m_flMatVal[1][3] = vOrigin->y;
  matrix.m_flMatVal[2][3] = vOrigin->z;
  vptr_ISceneViewDebugOverlays[18](this, &matrix, v15, 1, flRadius, flDuration);
}


// ISceneViewDebugOverlays::AddTriangleOverlay  (line 789, @0x0000000001b38750, libserver.so)  // inlines: Triangle
void __fastcall ISceneViewDebugOverlays::AddTriangleOverlay(
        ISceneViewDebugOverlays *const this,
        const Vector *const p1,
        const Vector *const p2,
        const Vector *const p3,
        char r,
        char g,
        float64 flDuration,
        char b,
        char a,
        bool noDepthTest)
{
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  int (*v11)(...); // rax
  _BYTE v12[16]; // [rsp+0h] [rbp-10h] BYREF

  v12[0] = r;
  vptr_ISceneViewDebugOverlays = this->_vptr_ISceneViewDebugOverlays;
  v12[1] = g;
  v12[2] = b;
  v11 = vptr_ISceneViewDebugOverlays[31];
  v12[3] = a;
  v11(this, p1, p2, p3, v12, noDepthTest, flDuration);
}


// ISceneViewDebugOverlays::AddLineOverlay  (line 794, @0x0000000001b38790, libserver.so)  // inlines: Line, VertexColor_t
void __fastcall ISceneViewDebugOverlays::AddLineOverlay(
        ISceneViewDebugOverlays *const this,
        const Vector *const vOrigin,
        const Vector *const dest,
        char r,
        char g,
        char b,
        float64 flDuration,
        bool bNoDepthTest)
{
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  _BYTE v9[16]; // [rsp+0h] [rbp-10h] BYREF

  vptr_ISceneViewDebugOverlays = this->_vptr_ISceneViewDebugOverlays;
  v9[1] = g;
  v9[0] = r;
  v9[2] = b;
  v9[3] = -1;
  vptr_ISceneViewDebugOverlays[13](this, vOrigin, dest, v9, bNoDepthTest, flDuration);
}


// ISceneViewDebugOverlays::AddLineOverlay  (line 799, @0x0000000001b387c0, libserver.so)  // inlines: Line, VertexColor_t
void __fastcall ISceneViewDebugOverlays::AddLineOverlay(
        ISceneViewDebugOverlays *const this,
        const Vector *const vOrigin,
        const Vector *const dest,
        char r,
        char g,
        char b,
        float64 flTimeToLive,
        int a,
        bool bNoDepthTest)
{
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  _BYTE v10[16]; // [rsp+0h] [rbp-10h] BYREF

  vptr_ISceneViewDebugOverlays = this->_vptr_ISceneViewDebugOverlays;
  v10[1] = g;
  v10[0] = r;
  v10[2] = b;
  v10[3] = -1;
  vptr_ISceneViewDebugOverlays[13](this, vOrigin, dest, v10, bNoDepthTest, flTimeToLive);
}


// ISceneViewDebugOverlays::AddLineOverlayAlpha  (line 804, @0x0000000001b387f0, libserver.so)  // inlines: Line
void __fastcall ISceneViewDebugOverlays::AddLineOverlayAlpha(
        ISceneViewDebugOverlays *const this,
        const Vector *const vOrigin,
        const Vector *const dest,
        char r,
        char g,
        char b,
        float64 flTimeToLive,
        char a,
        bool noDepthTest)
{
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  int (*v10)(...); // rax
  _BYTE v11[16]; // [rsp+0h] [rbp-10h] BYREF

  vptr_ISceneViewDebugOverlays = this->_vptr_ISceneViewDebugOverlays;
  v11[0] = r;
  v11[1] = g;
  v11[2] = b;
  v10 = vptr_ISceneViewDebugOverlays[13];
  v11[3] = a;
  v10(this, vOrigin, dest, v11, noDepthTest, flTimeToLive);
}


// ISceneViewDebugOverlays::AddTextOverlay  (line 809, @0x0000000001b3add0, libserver.so)
// calls: V_vsnprintf, ISceneViewDebugOverlays::Text, __stack_chk_fail
void ISceneViewDebugOverlays::AddTextOverlay(
        ISceneViewDebugOverlays *const this,
        const Vector *const vOrigin,
        float64 flDuration,
        const char *format,
        ...)
{
  va_list argptr; // [rsp+28h] [rbp-8F8h] BYREF
  char text[2056]; // [rsp+40h] [rbp-8E0h] BYREF
  unsigned __int64 v9; // [rsp+848h] [rbp-D8h]
  __int64 v10; // [rsp+868h] [rbp-B8h]
  __int64 v11; // [rsp+870h] [rbp-B0h]
  __int64 v12; // [rsp+878h] [rbp-A8h]

  va_start(argptr, format);
  v10 = va_arg(argptr, _QWORD);
  v11 = va_arg(argptr, _QWORD);
  v12 = va_arg(argptr, _QWORD);
  va_end(argptr);
  va_start(argptr, format);
  v9 = __readfsqword(0x28u);
  V_vsnprintf(text, 2048, format, argptr, v11, v12, flDuration);
  ISceneViewDebugOverlays::Text(this, vOrigin, 0, 0.0, 255, 255, 255, 255, flDuration, text);
}


// ISceneViewDebugOverlays::AddTextOverlay  (line 821, @0x0000000001b3aef0, libserver.so)
// calls: V_vsnprintf, ISceneViewDebugOverlays::Text, __stack_chk_fail
void ISceneViewDebugOverlays::AddTextOverlay(
        ISceneViewDebugOverlays *const this,
        const Vector *const vOrigin,
        int nTextOffset,
        float64 flDuration,
        const char *format,
        ...)
{
  va_list argptr; // [rsp+28h] [rbp-8F8h] BYREF
  char text[2056]; // [rsp+40h] [rbp-8E0h] BYREF
  unsigned __int64 v11; // [rsp+848h] [rbp-D8h]
  __int64 v12; // [rsp+870h] [rbp-B0h]
  __int64 v13; // [rsp+878h] [rbp-A8h]

  va_start(argptr, format);
  v12 = va_arg(argptr, _QWORD);
  v13 = va_arg(argptr, _QWORD);
  va_end(argptr);
  va_start(argptr, format);
  v11 = __readfsqword(0x28u);
  V_vsnprintf(text, 2048, format, argptr, v12, v13, flDuration);
  ISceneViewDebugOverlays::Text(this, vOrigin, nTextOffset, 0.0, 255, 255, 255, 255, flDuration, text);
}


// ISceneViewDebugOverlays::AddTextOverlay  (line 833, @0x0000000001b3b010, libserver.so)
// calls: ISceneViewDebugOverlays::Text
void __fastcall ISceneViewDebugOverlays::AddTextOverlay(
        ISceneViewDebugOverlays *const this,
        const Vector *const vOrigin,
        int nTextOffset,
        float64 flDuration,
        float alpha,
        const char *pText)
{
  int a; // eax
  float v7; // xmm1_4

  a = 255;
  v7 = alpha * 255.0;
  if ( v7 <= 255.0 )
  {
    LOBYTE(a) = 0;
    if ( v7 >= 0.0 )
      a = v7;
  }
  ISceneViewDebugOverlays::Text(this, vOrigin, nTextOffset, 0.0, 255, 255, 255, a, flDuration, pText);
}


// ISceneViewDebugOverlays::AddTextOverlay  (line 839, @0x0000000001b3b070, libserver.so)
// calls: ISceneViewDebugOverlays::Text
void __fastcall ISceneViewDebugOverlays::AddTextOverlay(
        ISceneViewDebugOverlays *const this,
        const Vector *const vOrigin,
        int nTextOffset,
        float64 flDuration,
        float r,
        float g,
        float b,
        float alpha,
        const char *pText)
{
  int v9; // r10d
  float v10; // xmm1_4
  float v11; // xmm2_4
  int v12; // r8d
  float v13; // xmm3_4
  int v14; // r9d
  int a; // eax
  float v16; // xmm2_4

  v9 = 255;
  v10 = r * 255.0;
  if ( v10 <= 255.0 )
  {
    LOBYTE(v9) = 0;
    if ( v10 >= 0.0 )
      v9 = v10;
  }
  v11 = g * 255.0;
  v12 = 255;
  if ( v11 <= 255.0 )
  {
    LOBYTE(v12) = 0;
    if ( v11 >= 0.0 )
      v12 = v11;
  }
  v13 = b * 255.0;
  v14 = 255;
  if ( v13 <= 255.0 )
  {
    LOBYTE(v14) = 0;
    if ( v13 >= 0.0 )
      v14 = v13;
  }
  a = 255;
  v16 = 255.0 * alpha;
  if ( (255.0 * alpha) <= 255.0 )
  {
    LOBYTE(a) = 0;
    if ( v16 >= 0.0 )
      a = v16;
  }
  ISceneViewDebugOverlays::Text(this, vOrigin, nTextOffset, 0.0, v9, v12, v14, a, flDuration, pText);
}


// ISceneViewDebugOverlays::AddTextOverlay  (line 849, @0x0000000001b3b130, libserver.so)
// calls: ISceneViewDebugOverlays::Text
void __fastcall ISceneViewDebugOverlays::AddTextOverlay(
        ISceneViewDebugOverlays *const this,
        const Vector *const vOrigin,
        float64 flDuration,
        float alpha,
        const char *pText)
{
  int a; // eax
  float v6; // xmm1_4

  a = 255;
  v6 = alpha * 255.0;
  if ( v6 <= 255.0 )
  {
    LOBYTE(a) = 0;
    if ( v6 >= 0.0 )
      a = v6;
  }
  ISceneViewDebugOverlays::Text(this, vOrigin, 0, 0.0, 255, 255, 255, a, flDuration, pText);
}


// ISceneViewDebugOverlays::AddTextOverlayRGB  (line 855, @0x0000000001b3b190, libserver.so)
// calls: V_vsnprintf, ISceneViewDebugOverlays::Text, __stack_chk_fail
void ISceneViewDebugOverlays::AddTextOverlayRGB(
        ISceneViewDebugOverlays *const this,
        const Vector *const vOrigin,
        int nTextOffset,
        float64 flDuration,
        float r,
        float g,
        float b,
        float alpha,
        const char *format,
        ...)
{
  int v12; // ecx
  float v13; // xmm6_4
  float v14; // xmm2_4
  int v15; // r8d
  float v16; // xmm3_4
  int v17; // r9d
  int a; // eax
  float v19; // xmm2_4
  va_list argptr; // [rsp+38h] [rbp-8F8h] BYREF
  char text[2056]; // [rsp+50h] [rbp-8E0h] BYREF
  unsigned __int64 v27; // [rsp+858h] [rbp-D8h]
  __int64 v28; // [rsp+880h] [rbp-B0h]
  __int64 v29; // [rsp+888h] [rbp-A8h]

  va_start(argptr, format);
  v28 = va_arg(argptr, _QWORD);
  v29 = va_arg(argptr, _QWORD);
  va_end(argptr);
  va_start(argptr, format);
  v27 = __readfsqword(0x28u);
  V_vsnprintf(text, 2048, format, argptr, v28, v29, flDuration);
  v12 = 255;
  v13 = r * 255.0;
  if ( (r * 255.0) <= 255.0 )
  {
    LOBYTE(v12) = 0;
    if ( v13 >= 0.0 )
      v12 = v13;
  }
  v14 = g * 255.0;
  v15 = 255;
  if ( (g * 255.0) <= 255.0 )
  {
    LOBYTE(v15) = 0;
    if ( v14 >= 0.0 )
      v15 = v14;
  }
  v16 = b * 255.0;
  v17 = 255;
  if ( (b * 255.0) <= 255.0 )
  {
    LOBYTE(v17) = 0;
    if ( v16 >= 0.0 )
      v17 = v16;
  }
  a = 255;
  v19 = 255.0 * alpha;
  if ( (255.0 * alpha) <= 255.0 )
  {
    LOBYTE(a) = 0;
    if ( v19 >= 0.0 )
      a = v19;
  }
  ISceneViewDebugOverlays::Text(this, vOrigin, nTextOffset, 0.0, v12, v15, v17, a, flDuration, text);
}


// ISceneViewDebugOverlays::AddTextOverlayRGB  (line 872, @0x0000000001b3b350, libserver.so)
// calls: V_vsnprintf, ISceneViewDebugOverlays::Text, __stack_chk_fail
void ISceneViewDebugOverlays::AddTextOverlayRGB(
        ISceneViewDebugOverlays *const this,
        const Vector *const vOrigin,
        int nTextOffset,
        float64 flDuration,
        int r,
        int g,
        int b,
        int a,
        const char *format,
        ...)
{
  va_list argptr; // [rsp+28h] [rbp-908h] BYREF
  char text[2056]; // [rsp+40h] [rbp-8F0h] BYREF
  unsigned __int64 v18; // [rsp+848h] [rbp-E8h]

  va_start(argptr, format);
  v18 = __readfsqword(0x28u);
  V_vsnprintf(text, 2048, format, argptr, g, b, flDuration);
  ISceneViewDebugOverlays::Text(this, vOrigin, nTextOffset, 0.0, r, g, b, a, flDuration, text);
}


// ISceneViewDebugOverlays::AddScreenTextOverlay  (line 884, @0x0000000001b38820, libserver.so)  // inlines: ScreenText, Vector2D
void __fastcall ISceneViewDebugOverlays::AddScreenTextOverlay(
        ISceneViewDebugOverlays *const this,
        float flXPos,
        float flYPos,
        float64 flDuration,
        char r,
        char g,
        char b,
        char a,
        const char *pText)
{
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  int (*v10)(...); // rax
  _BYTE v11[16]; // [rsp+0h] [rbp-20h] BYREF
  float flXPosa; // [rsp+10h] [rbp-10h] BYREF
  float flYPosa; // [rsp+14h] [rbp-Ch]

  vptr_ISceneViewDebugOverlays = this->_vptr_ISceneViewDebugOverlays;
  flXPosa = flXPos;
  v11[0] = r;
  v11[1] = g;
  v11[2] = b;
  v10 = vptr_ISceneViewDebugOverlays[23];
  v11[3] = a;
  flYPosa = flYPos;
  v10(this, &flXPosa, 0, pText, v11, 1.0, flDuration);
}


// ISceneViewDebugOverlays::AddScreenTextOverlay  (line 889, @0x0000000001b38870, libserver.so)  // inlines: ScreenTextOffset, Vector2D
void __fastcall ISceneViewDebugOverlays::AddScreenTextOverlay(
        ISceneViewDebugOverlays *const this,
        float flXPos,
        float flYPos,
        unsigned int nTextOffset,
        float64 flDuration,
        char r,
        char g,
        char b,
        char a,
        const char *pText)
{
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  int (*v11)(...); // rax
  _BYTE v12[16]; // [rsp+0h] [rbp-20h] BYREF
  float v13; // [rsp+10h] [rbp-10h] BYREF
  float flYPosa; // [rsp+14h] [rbp-Ch]

  vptr_ISceneViewDebugOverlays = this->_vptr_ISceneViewDebugOverlays;
  v12[1] = g;
  v13 = flXPos;
  v12[0] = r;
  v12[2] = b;
  v11 = vptr_ISceneViewDebugOverlays[23];
  flYPosa = flYPos;
  v12[3] = a;
  v11(this, &v13, nTextOffset, pText, v12, 1.0, flDuration);
}


// ISceneViewDebugOverlays::AddScreenTextOverlayOffset  (line 894, @0x0000000001b388c0, libserver.so)  // inlines: ScreenTextOffset, Vector2D
void __fastcall ISceneViewDebugOverlays::AddScreenTextOverlayOffset(
        ISceneViewDebugOverlays *const this,
        float flXPos,
        float flYPos,
        unsigned int nTextOffset,
        float64 flDuration,
        char r,
        char g,
        char b,
        char a,
        const char *pText)
{
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  int (*v11)(...); // rax
  _BYTE v12[16]; // [rsp+0h] [rbp-20h] BYREF
  float v13; // [rsp+10h] [rbp-10h] BYREF
  float flYPosa; // [rsp+14h] [rbp-Ch]

  vptr_ISceneViewDebugOverlays = this->_vptr_ISceneViewDebugOverlays;
  v12[1] = g;
  v13 = flXPos;
  v12[0] = r;
  v12[2] = b;
  v11 = vptr_ISceneViewDebugOverlays[23];
  flYPosa = flYPos;
  v12[3] = a;
  v11(this, &v13, nTextOffset, pText, v12, 1.0, flDuration);
}


// ISceneViewDebugOverlays::AddSweptBoxOverlay  (line 900, @0x0000000001b3a6c0, libserver.so)  // inlines: SweptBox
// calls: AngleQuaternion
void __fastcall ISceneViewDebugOverlays::AddSweptBoxOverlay(
        ISceneViewDebugOverlays *const this,
        const Vector *const startPos,
        const Vector *const endPos,
        const Vector *const mins,
        const Vector *const maxs,
        const QAngle *const angles,
        float64 flDuration,
        char r,
        char g,
        char b,
        char a)
{
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  int (*v16)(...); // rax
  _BYTE v19[16]; // [rsp+20h] [rbp-50h] BYREF
  Quaternion outQuat; // [rsp+30h] [rbp-40h] BYREF

  AngleQuaternion(angles, &outQuat);
  vptr_ISceneViewDebugOverlays = this->_vptr_ISceneViewDebugOverlays;
  v19[0] = r;
  v16 = vptr_ISceneViewDebugOverlays[44];
  v19[1] = g;
  v19[2] = b;
  v19[3] = a;
  v16(this, startPos, endPos, mins, maxs, &outQuat, flDuration, v19);
}


// ISceneViewDebugOverlays::AddGridOverlay  (line 906, @0x0000000001b38910, libserver.so)
void __fastcall ISceneViewDebugOverlays::AddGridOverlay(ISceneViewDebugOverlays *const this, const Vector *const vPos)
{
  (*(this->_vptr_ISceneViewDebugOverlays + 40))(this, vPos);
}


// ISceneViewDebugOverlays::AddCoordFrameOverlay  (line 912, @0x0000000001b38930, libserver.so)  // inlines: Line, VertexColor_t, operator=
// globals: ISceneViewDebugOverlays::AddCoordFrameOverlay(matrix3x4_t const&,float,int (*)[3])::s_defaultColorTable
void __fastcall ISceneViewDebugOverlays::AddCoordFrameOverlay(
        ISceneViewDebugOverlays *const this,
        const matrix3x4_t *const frame,
        float flScale,
        int (*vColorTable)[3])
{
  float *v5; // r15
  float v8; // xmm0_4
  __int64 v9; // rbx
  float v10; // xmm3_4
  float v11; // xmm4_4
  int *v12; // r13
  float v13; // xmm1_4
  int (**vptr_ISceneViewDebugOverlays)(...); // rdx
  char v15; // si
  int (*v16)(...); // r11
  float v17; // xmm1_4
  float v18; // xmm1_4
  float *v19; // [rsp+20h] [rbp-70h]
  float v20; // [rsp+2Ch] [rbp-64h]
  _BYTE v21[16]; // [rsp+30h] [rbp-60h] BYREF
  Vector startPt; // [rsp+40h] [rbp-50h] BYREF
  Vector endPt; // [rsp+50h] [rbp-40h] BYREF

  v5 = frame->m_flMatVal[1];
  if ( vColorTable == 0 )
    vColorTable = ISceneViewDebugOverlays::AddCoordFrameOverlay(matrix3x4_t const&,float,int (*)[3])::s_defaultColorTable;
  v8 = frame->m_flMatVal[0][3];
  v9 = 0;
  v10 = frame->m_flMatVal[1][3];
  v11 = frame->m_flMatVal[2][3];
  startPt.x = v8;
  v19 = frame->m_flMatVal[2];
  v12 = vColorTable;
  startPt.y = v10;
  startPt.z = v11;
  while ( 1 )
  {
    v13 = frame->m_flMatVal[0][v9];
    v20 = flScale;
    vptr_ISceneViewDebugOverlays = this->_vptr_ISceneViewDebugOverlays;
    v21[3] = -1;
    v12 += 3;
    v15 = *(v12 - 12);
    v16 = vptr_ISceneViewDebugOverlays[13];
    LOBYTE(vptr_ISceneViewDebugOverlays) = *(v12 - 4);
    v21[1] = *(v12 - 8);
    v21[0] = v15;
    endPt.x = (v13 * flScale) + v8;
    v17 = v5[v9];
    v21[2] = vptr_ISceneViewDebugOverlays;
    endPt.y = (v17 * flScale) + v10;
    v18 = flScale * v19[v9++];
    endPt.z = v18 + v11;
    v16(this, &startPt, &endPt, v21, 1, 0.0102300001308322);
    if ( v9 == 3 )
      break;
    v8 = frame->m_flMatVal[0][3];
    v10 = frame->m_flMatVal[1][3];
    v11 = frame->m_flMatVal[2][3];
    flScale = v20;
  }
}


// ISceneViewDebugOverlays::AddCircleOverlay  (line 943, @0x0000000001b38a70, libserver.so)
void __fastcall ISceneViewDebugOverlays::AddCircleOverlay(
        ISceneViewDebugOverlays *const this,
        const Vector *const vPosition,
        float radius,
        char r,
        char g,
        char b,
        char a,
        float64 flTimeToLive,
        bool bNoDepthTest)
{
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  _BYTE v10[16]; // [rsp+0h] [rbp-10h] BYREF

  vptr_ISceneViewDebugOverlays = this->_vptr_ISceneViewDebugOverlays;
  v10[1] = g;
  v10[0] = r;
  v10[2] = b;
  v10[3] = a;
  vptr_ISceneViewDebugOverlays[32](this, vPosition, v10, bNoDepthTest, radius, flTimeToLive);
}


// ISceneViewDebugOverlays::ScreenPosition  (line 950, @0x0000000001b38aa0, libserver.so)
int __fastcall ISceneViewDebugOverlays::ScreenPosition(
        ISceneViewDebugOverlays *const this,
        const Vector *const point,
        Vector *const screen)
{
  return 0;
}


// ISceneViewDebugOverlays::ScreenPosition  (line 958, @0x0000000001b38ab0, libserver.so)
__int64 __fastcall ISceneViewDebugOverlays::ScreenPosition(
        ISceneViewDebugOverlays *const this,
        double a2,
        float flXPos,
        float flYPos,
        Vector *const screen)
{
  return 0;
}


