
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetLocalPlayer  (line 21, @0x00000000021a1e40, libserver.so)
// calls: UTIL_GetListenServerHost
CBasePlayer *__cdecl GetLocalPlayer()
{
  return UTIL_GetListenServerHost();
}


// GetDebugPlayer  (line 33, @0x00000000021a1e50, libserver.so)
// calls: CEntityDebugGameSystem::GetDebugPlayerIndex, UTIL_PlayerByIndex
// callers: NDebugOverlay::DrawTickMarkedLine, NDebugOverlay::DrawGroundCrossHairOverlay
CBasePlayer *__cdecl GetDebugPlayer()
{
  CEntityIndex v0; // eax

  v0.m_Data = CEntityDebugGameSystem::GetDebugPlayerIndex(g_pEntityDebugGameSystem).m_Data;
  return UTIL_PlayerByIndex(v0);
}


// NDebugOverlay::BoundingBox  (line 46, @0x00000000021a1e70, libserver.so)  // inlines: Box
void __fastcall NDebugOverlay::BoundingBox(
        const Vector *const mins,
        const Vector *const maxs,
        char r,
        char g,
        char b,
        char a,
        float flDuration)
{
  __int64 v7; // rbp
  int (**vptr_ISceneViewDebugOverlays)(...); // r10
  _QWORD v9[3]; // [rsp+10h] [rbp-18h] BYREF

  if ( debugoverlay != 0 )
  {
    v9[2] = v7;
    vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
    BYTE1(v9[0]) = g;
    BYTE2(v9[0]) = b;
    LOBYTE(v9[0]) = r;
    BYTE3(v9[0]) = a;
    vptr_ISceneViewDebugOverlays[15](debugoverlay, &vec3_origin, mins, maxs, &quat_identity, v9, flDuration, 0);
  }
}


// NDebugOverlay::Box  (line 57, @0x00000000021a1ed0, libserver.so)  // inlines: BoxAngles
// callers: CEntityIONotify::OnEntityIOInput, CBasePlayer::FindUseEntity, CC_Test_Entity_Blocker, CFire::DrawEntityDebugOverlays, CInfoLadderDismount::DrawEntityDebugOverlays, CFuncLadder::DrawEntityDebugOverlays, CPathCorner::DrawEntityDebugOverlays, CPointPush::DrawEntityDebugOverlays, CPropDoorRotating::OnDoorClosed, CPropDoorRotating::OnDoorOpened, CPropDoorRotating::CheckDoorClear, CPropDoorRotating::CreateDoorBlocker (22 total)
void __fastcall NDebugOverlay::Box(
        const Vector *const origin,
        const Vector *const mins,
        const Vector *const maxs,
        unsigned int r,
        int g,
        int b,
        float flDuration,
        int a)
{
  if ( debugoverlay != 0 )
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 46))(
      debugoverlay,
      origin,
      mins,
      maxs,
      &vec3_angle,
      r,
      flDuration,
      g,
      b,
      a);
}


// NDebugOverlay::BoxDirection  (line 65, @0x00000000021a1f30, libserver.so)  // inlines: BoxAngles
// calls: UTIL_VecToYaw
// callers: Script_OverlayBoxDirection, CBaseCombatCharacter::CheckTraceHullAttack
void __fastcall NDebugOverlay::BoxDirection(
        const Vector *const origin,
        const Vector *const mins,
        const Vector *const maxs,
        const Vector *const orientation,
        unsigned int r,
        int g,
        float duration,
        int b,
        int a)
{
  vec_t z; // eax
  QAngle f_angles; // [rsp+20h] [rbp-40h] BYREF

  z = vec3_angle.z;
  f_angles.x = vec3_angle.x;
  f_angles.z = z;
  f_angles.y = UTIL_VecToYaw(orientation);
  if ( debugoverlay != 0 )
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 46))(
      debugoverlay,
      origin,
      mins,
      maxs,
      &f_angles,
      r,
      duration,
      g,
      b,
      a);
}


// NDebugOverlay::BoxAngles  (line 77, @0x00000000021a1fd0, libserver.so)
// callers: CFourWheelVehiclePhysics::DrawEntityDebugOverlays
void __fastcall NDebugOverlay::BoxAngles(
        const Vector *const origin,
        const Vector *const mins,
        const Vector *const maxs,
        const QAngle *const angles,
        unsigned int r,
        int g,
        float duration,
        int b,
        int a)
{
  if ( debugoverlay != 0 )
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 46))(
      debugoverlay,
      origin,
      mins,
      maxs,
      angles,
      r,
      duration,
      g,
      b,
      a);
}


// NDebugOverlay::SweptBox  (line 88, @0x00000000021a2030, libserver.so)
// callers: CBaseServerVehicle::GetExitAnimToUse, UTIL_IsGroundLevel, NextBotGroundLocomotion::ClimbUpToLedge, CPathFollower::Draw, CPathFollower::Climbing
void __fastcall NDebugOverlay::SweptBox(
        const Vector *const start,
        const Vector *const end,
        const Vector *const mins,
        const Vector *const maxs,
        const QAngle *const angles,
        int r,
        float flDuration,
        int g,
        int b,
        int a)
{
  __int64 v10; // rbp

  if ( debugoverlay != 0 )
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 63))(
      debugoverlay,
      start,
      end,
      mins,
      maxs,
      angles,
      flDuration,
      r,
      g,
      b,
      a,
      v10);
}


// NDebugOverlay::EntityBounds  (line 99, @0x00000000021a2090, libserver.so)  // inlines: BoxAngles
// callers: CBaseEntity::DrawEntityDebugOverlays, CBaseProp::DrawEntityDebugOverlays, CFire::DrawEntityDebugOverlays, CFuncLadder::DrawEntityDebugOverlays, CTriggerSndSosOpvar::HandleTouchingEntities
void __fastcall NDebugOverlay::EntityBounds(
        const CBaseEntity *pEntity,
        unsigned int r,
        int g,
        int b,
        int a,
        float flDuration)
{
  char *p_m_NetworkTransmitComponent; // r12
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rax

  if ( pEntity->m_pCollision != 0 )
  {
    p_m_NetworkTransmitComponent = &pEntity[1].m_NetworkTransmitComponent;
    v8 = (*(pEntity[1].m_NetworkTransmitComponent._vptr_IEventRegisterCallback + 5))(&pEntity[1].m_NetworkTransmitComponent);
    v9 = (*(pEntity[1].m_NetworkTransmitComponent._vptr_IEventRegisterCallback + 2))(p_m_NetworkTransmitComponent);
    v10 = (*(pEntity[1].m_NetworkTransmitComponent._vptr_IEventRegisterCallback + 1))(p_m_NetworkTransmitComponent);
    v11 = (*(pEntity[1].m_NetworkTransmitComponent._vptr_IEventRegisterCallback + 4))(p_m_NetworkTransmitComponent);
    if ( debugoverlay != 0 )
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 46))(debugoverlay, v11, v10, v9, v8, r, flDuration, g, b, a);
  }
}


// NDebugOverlay::Line  (line 132, @0x00000000021a2170, libserver.so)
// callers: CBaseEntity::DrawAutoAimOverlay, CBaseEntity::FireBullets, Script_OverlayLine_vCol, CEntityDebugGameSystem::DrawOverlayLines, CBaseAnimating::DrawRawSkeleton, CEntityIONotify::OnEntityIOInput, CBasePlayer::FindUseEntity, CFourWheelVehiclePhysics::DrawEntityDebugOverlays, CBaseCombatCharacter::PlayFootstepSound, DrawDispCollPlane, CPathTrack::DrawEntityDebugOverlays, CPhysicsSpring::DrawEntityDebugOverlays (67 total)
void __fastcall NDebugOverlay::Line(
        const Vector *const origin,
        const Vector *const target,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        bool noDepthTest,
        float duration)
{
  if ( debugoverlay != 0 )
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, origin, target, r, g, b, duration, noDepthTest);
}


// NDebugOverlay::Triangle  (line 178, @0x00000000021a21c0, libserver.so)
// callers: DrawDispCollPlane, NavDrawFilledTriangle, CNavDrawLadder::DrawLadder, CPathFollower::Climbing
void __fastcall NDebugOverlay::Triangle(
        const Vector *const p1,
        const Vector *const p2,
        const Vector *const p3,
        unsigned int r,
        unsigned int g,
        int b,
        float duration,
        int a,
        bool noDepthTest)
{
  if ( debugoverlay != 0 )
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 49))(debugoverlay, p1, p2, p3, r, g, duration, b, a, noDepthTest);
}


// NDebugOverlay::EntityText  (line 221, @0x00000000021a2220, libserver.so)
// callers: PlayerLocomotion::ApproachAscendingLadder, PlayerLocomotion::ApproachDescendingLadder, PlayerLocomotion::AscendLadder, PlayerLocomotion::DescendLadder, PlayerLocomotion::DismountLadderTop
void __fastcall NDebugOverlay::EntityText(
        CEntityIndex entityID,
        unsigned int text_offset,
        const char *text,
        float duration,
        int r,
        int g,
        int b,
        int a)
{
  __int64 v8; // rbp
  float v9; // xmm2_4
  int v10; // eax
  float v11; // xmm2_4
  __int64 v12; // r9
  float v13; // xmm2_4
  float v14; // xmm2_4
  __int64 v15; // r8
  float v16; // xmm2_4
  float v17; // xmm2_4
  __int64 v18; // rcx
  float v19; // xmm2_4

  if ( debugoverlay != 0 )
  {
    v9 = a * 255.0;
    v10 = 255;
    if ( v9 <= 255.0 )
    {
      LOBYTE(v10) = 0;
      if ( v9 >= 0.0 )
        v10 = v9;
    }
    v11 = b;
    v12 = 255;
    v13 = v11 * 255.0;
    if ( v13 <= 255.0 )
    {
      LOBYTE(v12) = 0;
      if ( v13 >= 0.0 )
        v12 = v13;
    }
    v14 = g;
    v15 = 255;
    v16 = v14 * 255.0;
    if ( v16 <= 255.0 )
    {
      LOBYTE(v15) = 0;
      if ( v16 >= 0.0 )
        v15 = v16;
    }
    v17 = r;
    v18 = 255;
    v19 = v17 * 255.0;
    if ( v19 <= 255.0 )
    {
      LOBYTE(v18) = 0;
      if ( v19 >= 0.0 )
        v18 = v19;
    }
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 45))(
      debugoverlay,
      entityID.m_Data,
      text_offset,
      v18,
      v15,
      v12,
      duration,
      v10,
      text,
      v8);
  }
}


// NDebugOverlay::EntityTextAtPosition  (line 234, @0x00000000021a2310, libserver.so)
// callers: CRagdollProp::DrawEntityDebugOverlays, CEnvSoundscape::UpdateForPlayer, CDOTA_Bot_Pathing::UpdateSearch
void __fastcall NDebugOverlay::EntityTextAtPosition(
        const Vector *const origin,
        unsigned int text_offset,
        const char *text,
        float duration,
        __int64 r,
        __int64 g,
        __int64 b,
        int a)
{
  if ( debugoverlay != 0 )
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 59))(
      debugoverlay,
      origin,
      text_offset,
      r,
      g,
      b,
      duration,
      a,
      "%s",
      text);
}


// NDebugOverlay::Grid  (line 245, @0x00000000021a2360, libserver.so)
void __fastcall NDebugOverlay::Grid(const Vector *const vPosition)
{
  if ( debugoverlay != 0 )
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 64))(debugoverlay, vPosition);
}


// NDebugOverlay::Text  (line 256, @0x00000000021a23a0, libserver.so)
// callers: CEntityIONotify::OnEntityIOInput, CAI_Expresser::SpeakDispatchResponse, CDOTA_Commander::DrawDebug, CDOTABehaviorPet::RecalculateTargetPosition, CDOTABehaviorPet::RecalculateThreat, CNavDrawArea::DrawArea_Internal, DrawAreaForDrawConnectedAreas, CNavEditor::DrawEditMode
void __fastcall NDebugOverlay::Text(const Vector *const origin, const char *text, bool bViewCheck, float duration)
{
  if ( debugoverlay != 0 )
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 53))(debugoverlay, origin, "%s", text);
}


// NDebugOverlay::ScreenText  (line 305, @0x00000000021a23f0, libserver.so)
// callers: Script_DebugDrawText, CNavEditor::DrawEditMode
void __fastcall NDebugOverlay::ScreenText(
        float flXpos,
        float flYpos,
        const char *text,
        __int64 r,
        __int64 g,
        __int64 b,
        __int64 a,
        float duration)
{
  if ( debugoverlay != 0 )
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 61))(debugoverlay, r, g, b, a, text, flXpos, flYpos, duration);
}


// NDebugOverlay::ScreenTextLine  (line 317, @0x00000000021a2430, libserver.so)
// callers: CNextbotLodManager::DebugDisplay
void __fastcall NDebugOverlay::ScreenTextLine(
        float flXpos,
        float flYpos,
        unsigned int iLine,
        const char *text,
        __int64 r,
        __int64 g,
        __int64 b,
        __int64 a,
        float duration)
{
  if ( debugoverlay != 0 )
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 62))(
      debugoverlay,
      iLine,
      r,
      g,
      b,
      a,
      flXpos,
      flYpos,
      duration,
      text);
}


// NDebugOverlay::ScreenTextPretty  (line 329, @0x00000000021a2470, libserver.so)  // inlines: CUtlString, Vector2D, ~CUtlString
// calls: CUtlString::Format, CUtlString::Get, CUtlString::FreeMemoryBlock, _Unwind_Resume
// strings: "PrettyFont:%s:%d:%d"
void __fastcall NDebugOverlay::ScreenTextPretty(
        vec_t flXpos,
        vec_t flYpos,
        unsigned int iLine,
        const char *text,
        uint8 r,
        uint8 g,
        uint8 b,
        uint8 a,
        float duration,
        const char *pFontName,
        unsigned int nFontSize,
        bool bBoldFont)
{
  const char *v15; // rax
  int v16; // eax
  __int64 (__fastcall *v17)(IFontManager *, const char *, const char *, _QWORD, _QWORD, _QWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD); // [rsp+38h] [rbp-88h]
  VertexColor_t color; // [rsp+60h] [rbp-60h] BYREF
  CUtlString fullFontName; // [rsp+70h] [rbp-50h] BYREF
  Vector2D vPos; // [rsp+80h] [rbp-40h] BYREF

  if ( debugoverlay != 0 )
  {
    fullFontName.m_pString = 0;
    CUtlString::Format(&fullFontName, "PrettyFont:%s:%d:%d", pFontName, nFontSize, !bBoldFont ? 400 : 700);
    v17 = *(*g_pFontManager + 192LL);
    v15 = CUtlString::Get(&fullFontName);
    v16 = v17(g_pFontManager, v15, pFontName, nFontSize, 0, 0, !bBoldFont ? 400 : 700, 0, 0, 0, 0, 0);
    color.g = g;
    color.b = b;
    color.a = a;
    vPos.x = flXpos;
    color.r = r;
    vPos.y = flYpos;
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 24))(
      debugoverlay,
      &vPos,
      iLine,
      text,
      &color,
      0,
      1.0,
      duration,
      0,
      v16);
    if ( fullFontName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&fullFontName);
  }
}


// NDebugOverlay::ScreenTextOffset  (line 357, @0x00000000021a2610, libserver.so)
// callers: CScrollingScreenOverlay::Draw, AddDebugTextLine
void __fastcall NDebugOverlay::ScreenTextOffset(
        float flXpos,
        float flYpos,
        unsigned int text_offset,
        const char *text,
        __int64 r,
        __int64 g,
        __int64 b,
        __int64 a,
        float duration)
{
  if ( debugoverlay != 0 )
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 62))(
      debugoverlay,
      text_offset,
      r,
      g,
      b,
      a,
      flXpos,
      flYpos,
      duration,
      text);
}


// NDebugOverlay::Cross3D  (line 369, @0x00000000021a2650, libserver.so)  // inlines: Line, VectorAdd, operator+
// callers: CPropDoorRotating::CreateDoorBlocker
void __fastcall NDebugOverlay::Cross3D(
        const Vector *const position,
        const Vector *const mins,
        const Vector *const maxs,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        float fDuration,
        bool noDepthTest)
{
  float x; // xmm1_4
  float y; // xmm3_4
  float z; // xmm2_4
  vec_t v13; // xmm5_4
  vec_t v14; // xmm4_4
  vec_t v15; // xmm6_4
  vec_t v16; // xmm3_4
  vec_t v17; // xmm2_4
  vec_t v18; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  double v25; // [rsp+28h] [rbp-58h]
  Vector start; // [rsp+30h] [rbp-50h] BYREF
  Vector end; // [rsp+40h] [rbp-40h] BYREF

  x = position->x;
  y = position->y;
  z = position->z;
  v13 = mins->y + y;
  v14 = mins->z + z;
  v15 = mins->x + position->x;
  v16 = y + maxs->y;
  start.y = v13;
  v17 = z + maxs->z;
  start.z = v14;
  v18 = x + maxs->x;
  start.x = v15;
  end.y = v16;
  end.z = v17;
  end.x = v18;
  if ( debugoverlay != 0 )
  {
    v25 = fDuration;
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &start, &end, fDuration);
    v21 = maxs->x - mins->x;
    start.x = start.x + v21;
    end.x = end.x - v21;
    if ( debugoverlay != 0 )
    {
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &start, &end, r, g, b, v25, noDepthTest);
      v22 = maxs->y - mins->y;
      start.y = start.y + v22;
      end.y = end.y - v22;
      if ( debugoverlay != 0 )
      {
        (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &start, &end, r, g, b, v25, noDepthTest);
        v23 = maxs->x - mins->x;
        start.x = start.x - v23;
        end.x = v23 + end.x;
        if ( debugoverlay != 0 )
          (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &start, &end, r, g, b, v25, noDepthTest);
      }
    }
  }
}


// NDebugOverlay::Cross3D  (line 392, @0x00000000021a2830, libserver.so)  // inlines: Line, VectorAdd, VectorSubtract, operator+, operator-
// callers: CBaseEntity::DrawEntityDebugOverlays, CBasePlayer::FindUseEntity, CVisibilityMonitor::FrameUpdatePostEntityThink, CPhysImpact::InputImpact, CEnvSoundscape::UpdateForPlayer, CBaseServerVehicle::GetExitAnimToUse, CPath::ComputePathDetails, CPath::ComputeSpecialSegments, CNavEditor::CommandAutoBuildOffGridAreas, CNavEditor::DrawEditMode, NextBotGroundLocomotion::ClimbUpToLedge, NextBotApproacher::NextBotApproacher (19 total)
void __fastcall NDebugOverlay::Cross3D(
        const Vector *const position,
        float size,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        bool noDepthTest,
        float flDuration)
{
  float v7; // xmm2_4
  float x; // xmm6_4
  float v14; // xmm4_4
  float v15; // xmm0_4
  float z; // xmm5_4
  float v17; // xmm8_4
  ISceneViewDebugOverlays *v18; // rdi
  float v19; // xmm7_4
  float v20; // [rsp+18h] [rbp-60h]
  float v21; // [rsp+18h] [rbp-60h]
  float v22; // [rsp+1Ch] [rbp-5Ch]
  float v23; // [rsp+1Ch] [rbp-5Ch]
  float v24[4]; // [rsp+20h] [rbp-58h] BYREF
  float v25; // [rsp+30h] [rbp-48h] BYREF
  vec_t y; // [rsp+34h] [rbp-44h]
  float v27; // [rsp+38h] [rbp-40h]

  v7 = size;
  x = position->x;
  v15 = position->x - size;
  z = position->z;
  y = position->y;
  v14 = y;
  v27 = z;
  v25 = v15;
  v17 = z + 0.0;
  v24[2] = z + 0.0;
  v24[0] = v7 + x;
  v24[1] = y + 0.0;
  if ( debugoverlay != 0 )
  {
    v20 = v7;
    v22 = flDuration;
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, v24, &v25, r, g, b, flDuration, noDepthTest);
    z = position->z;
    x = position->x;
    v18 = debugoverlay;
    v17 = z + 0.0;
    v14 = position->y;
    flDuration = v22;
    v7 = v20;
  }
  else
  {
    v18 = 0;
  }
  v25 = x;
  v19 = x + 0.0;
  v27 = z;
  v24[2] = v17;
  y = v14 - v7;
  v24[0] = x + 0.0;
  v24[1] = v7 + v14;
  if ( v18 != 0 )
  {
    v21 = v7;
    v23 = flDuration;
    (*(v18->_vptr_ISceneViewDebugOverlays + 50))(v18, v24, &v25, r, g, b, flDuration, noDepthTest);
    x = position->x;
    v14 = position->y;
    v18 = debugoverlay;
    v19 = position->x + 0.0;
    z = position->z;
    v7 = v21;
    flDuration = v23;
  }
  v25 = x;
  y = v14;
  v24[0] = v19;
  v27 = z - v7;
  v24[1] = v14 + 0.0;
  v24[2] = v7 + z;
  if ( v18 != 0 )
    (*(v18->_vptr_ISceneViewDebugOverlays + 50))(v18, v24, &v25, r, g, b, flDuration, noDepthTest);
}


// NDebugOverlay::Cross3DOriented  (line 403, @0x00000000021a3080, libserver.so)  // inlines: Line, VectorAdd, VectorSubtract, operator*=, operator+, operator-
// calls: AngleVectors
void __fastcall NDebugOverlay::Cross3DOriented(
        const Vector *const position,
        const QAngle *const angles,
        float size,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        bool noDepthTest,
        float flDuration)
{
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  float y; // xmm1_4
  float x; // xmm2_4
  float z; // xmm0_4
  float v19; // xmm5_4
  ISceneViewDebugOverlays *v20; // rdi
  float v21; // xmm4_4
  float v22; // xmm3_4
  Vector forward; // [rsp+10h] [rbp-80h] BYREF
  Vector right; // [rsp+20h] [rbp-70h] BYREF
  Vector up; // [rsp+30h] [rbp-60h] BYREF
  float v28; // [rsp+40h] [rbp-50h] BYREF
  float v29; // [rsp+44h] [rbp-4Ch]
  float v30; // [rsp+48h] [rbp-48h]
  float v31; // [rsp+50h] [rbp-40h] BYREF
  float v32; // [rsp+54h] [rbp-3Ch]
  float v33; // [rsp+58h] [rbp-38h]

  AngleVectors(angles, &forward, &right, &up);
  v13 = forward.x * size;
  up.x = up.x * size;
  v14 = forward.y * size;
  v15 = forward.z * size;
  right.x = right.x * size;
  y = position->y;
  right.y = right.y * size;
  forward.x = forward.x * size;
  forward.y = forward.y * size;
  forward.z = forward.z * size;
  up.y = up.y * size;
  x = position->x;
  right.z = right.z * size;
  up.z = size * up.z;
  z = position->z;
  v31 = x - right.x;
  v28 = right.x + x;
  v32 = y - right.y;
  v29 = right.y + y;
  v33 = z - right.z;
  v30 = right.z + z;
  if ( debugoverlay != 0 )
  {
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &v28, &v31, r, g, b, flDuration, noDepthTest);
    x = position->x;
    v19 = forward.x;
    y = position->y;
    v20 = debugoverlay;
    v21 = forward.y;
    z = position->z;
    v22 = forward.z;
  }
  else
  {
    v22 = v15;
    v21 = v14;
    v19 = v13;
    v20 = 0;
  }
  v31 = x - v19;
  v28 = v19 + x;
  v32 = y - v21;
  v29 = v21 + y;
  v33 = z - v22;
  v30 = v22 + z;
  if ( v20 != 0 )
  {
    (*(v20->_vptr_ISceneViewDebugOverlays + 50))(v20, &v28, &v31, r, g, b, flDuration, noDepthTest);
    x = position->x;
    y = position->y;
    z = position->z;
    v20 = debugoverlay;
  }
  v31 = x - up.x;
  v28 = x + up.x;
  v29 = y + up.y;
  v32 = y - up.y;
  v30 = z + up.z;
  v33 = z - up.z;
  if ( v20 != 0 )
    (*(v20->_vptr_ISceneViewDebugOverlays + 50))(v20, &v28, &v31, r, g, b, flDuration, noDepthTest);
}


// NDebugOverlay::Cross3DOriented  (line 421, @0x00000000021a3340, libserver.so)  // inlines: GetColumn, Line, MatrixGetColumn, VectorAdd, VectorSubtract, operator*=, operator+, operator-
void __fastcall NDebugOverlay::Cross3DOriented(
        const matrix3x4_t *const m,
        float size,
        unsigned int c,
        bool noDepthTest,
        float flDuration)
{
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm10_4
  float v11; // xmm9_4
  float v12; // xmm8_4
  float v13; // xmm11_4
  float v14; // xmm4_4
  float v15; // xmm12_4
  float v16; // xmm3_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  ISceneViewDebugOverlays *v19; // rdi
  float v20; // [rsp+8h] [rbp-68h]
  float v21; // [rsp+Ch] [rbp-64h]
  float v22; // [rsp+10h] [rbp-60h]
  float v23; // [rsp+14h] [rbp-5Ch]
  float v24; // [rsp+14h] [rbp-5Ch]
  float v25; // [rsp+18h] [rbp-58h]
  float v26; // [rsp+18h] [rbp-58h]
  float v27; // [rsp+1Ch] [rbp-54h]
  float v28; // [rsp+1Ch] [rbp-54h]
  float v29; // [rsp+20h] [rbp-50h]
  float v30; // [rsp+20h] [rbp-50h]
  float v31; // [rsp+24h] [rbp-4Ch]
  float v32; // [rsp+30h] [rbp-40h] BYREF
  float v33; // [rsp+34h] [rbp-3Ch]
  float v34; // [rsp+38h] [rbp-38h]
  float v35; // [rsp+40h] [rbp-30h] BYREF
  float v36; // [rsp+44h] [rbp-2Ch]
  float v37; // [rsp+48h] [rbp-28h]

  v7 = m->m_flMatVal[0][0] * size;
  v8 = m->m_flMatVal[1][0] * size;
  v9 = m->m_flMatVal[2][0] * size;
  v10 = m->m_flMatVal[0][1] * size;
  v11 = m->m_flMatVal[1][1] * size;
  v12 = m->m_flMatVal[2][1] * size;
  v13 = m->m_flMatVal[0][2] * size;
  v14 = m->m_flMatVal[0][3];
  v15 = m->m_flMatVal[1][2] * size;
  v16 = m->m_flMatVal[1][3];
  v17 = size * m->m_flMatVal[2][2];
  v18 = m->m_flMatVal[2][3];
  v19 = 0;
  v31 = v17;
  v35 = v14 - v10;
  v32 = v10 + v14;
  v36 = v16 - v11;
  v33 = v11 + v16;
  v37 = v18 - v12;
  v34 = v12 + v18;
  if ( debugoverlay != 0 )
  {
    v20 = v9;
    v21 = v8;
    v22 = v7;
    v23 = v14;
    v25 = v16;
    v27 = v18;
    v29 = flDuration;
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &v32, &v35, 0, c, 0, flDuration, noDepthTest);
    v19 = debugoverlay;
    v9 = v20;
    v8 = v21;
    v7 = v22;
    v14 = v23;
    v16 = v25;
    v18 = v27;
    flDuration = v29;
  }
  v35 = v14 - v7;
  v32 = v7 + v14;
  v36 = v16 - v8;
  v33 = v8 + v16;
  v37 = v18 - v9;
  v34 = v9 + v18;
  if ( v19 != 0 )
  {
    v24 = v14;
    v26 = v16;
    v28 = v18;
    v30 = flDuration;
    (*(v19->_vptr_ISceneViewDebugOverlays + 50))(v19, &v32, &v35, c, 0, 0, flDuration, noDepthTest);
    v19 = debugoverlay;
    v14 = v24;
    v16 = v26;
    v18 = v28;
    flDuration = v30;
  }
  v35 = v14 - v13;
  v32 = v14 + v13;
  v33 = v16 + v15;
  v36 = v16 - v15;
  v34 = v18 + v31;
  v37 = v18 - v31;
  if ( v19 != 0 )
    (*(v19->_vptr_ISceneViewDebugOverlays + 50))(v19, &v32, &v35, 0, 0, c, flDuration, noDepthTest);
}


// NDebugOverlay::DrawTickMarkedLine  (line 444, @0x00000000021a35c0, libserver.so)  // inlines: CrossProduct, Line, Text, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: GetDebugPlayer, VectorNormalize, V_snprintf, __stack_chk_fail
void __fastcall NDebugOverlay::DrawTickMarkedLine(
        const Vector *const startPos,
        const Vector *const endPos,
        float tickDist,
        int tickTextDist,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        float duration,
        bool noDepthTest)
{
  CBasePlayer *DebugPlayer; // rbx
  vec_t v12; // xmm2_4
  vec_t v13; // xmm0_4
  int v14; // r12d
  float x; // xmm2_4
  float v16; // xmm1_4
  float y; // xmm3_4
  float z; // xmm4_4
  float v19; // xmm11_4
  float v20; // xmm0_4
  float v21; // xmm8_4
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm7_4
  float v25; // xmm1_4
  int v26; // r15d
  int v27; // r13d
  double v28; // xmm1_8
  float v29; // [rsp+10h] [rbp-E0h]
  float v34; // [rsp+30h] [rbp-C0h]
  float v35; // [rsp+34h] [rbp-BCh]
  float v36; // [rsp+34h] [rbp-BCh]
  float v37; // [rsp+38h] [rbp-B8h]
  float v38; // [rsp+38h] [rbp-B8h]
  vec_t v39; // [rsp+3Ch] [rbp-B4h]
  float v40; // [rsp+3Ch] [rbp-B4h]
  float v41; // [rsp+3Ch] [rbp-B4h]
  float endPosc; // [rsp+40h] [rbp-B0h]
  float endPosb; // [rsp+40h] [rbp-B0h]
  vec_t v45; // [rsp+48h] [rbp-A8h]
  float v46; // [rsp+48h] [rbp-A8h]
  float v47; // [rsp+48h] [rbp-A8h]
  float tickDistc; // [rsp+4Ch] [rbp-A4h]
  float tickDistd; // [rsp+4Ch] [rbp-A4h]
  float tickDistb; // [rsp+4Ch] [rbp-A4h]
  Vector lineDir; // [rsp+50h] [rbp-A0h] BYREF
  Vector tickLeft; // [rsp+60h] [rbp-90h] BYREF
  Vector tickRight; // [rsp+70h] [rbp-80h] BYREF
  Vector textPos; // [rsp+80h] [rbp-70h] BYREF
  char text[40]; // [rsp+90h] [rbp-60h] BYREF
  unsigned __int64 v57; // [rsp+B8h] [rbp-38h]

  v57 = __readfsqword(0x28u);
  DebugPlayer = GetDebugPlayer();
  if ( DebugPlayer != 0 )
  {
    v12 = endPos->x - startPos->x;
    v13 = endPos->z - startPos->z;
    lineDir.y = endPos->y - startPos->y;
    lineDir.x = v12;
    lineDir.z = v13;
    v14 = (VectorNormalize(&lineDir) / tickDist);
    *&textPos.x = (*(DebugPlayer->_vptr_IHandleEntity + 272))(DebugPlayer);
    x = startPos->x;
    textPos.z = v16;
    y = startPos->y;
    z = startPos->z;
    v19 = (textPos.y * 4.0) * lineDir.x;
    v20 = (4.0 * v16) * lineDir.x;
    v21 = lineDir.y * (textPos.x * 4.0);
    v22 = ((4.0 * v16) * lineDir.y) - ((textPos.y * 4.0) * lineDir.z);
    v23 = tickDist;
    v24 = (lineDir.z * (textPos.x * 4.0)) - v20;
    v25 = v19 - v21;
    if ( debugoverlay != 0 )
    {
      v29 = tickDist;
      v35 = (lineDir.z * (textPos.x * 4.0)) - v20;
      v37 = v22;
      v39 = startPos->z;
      v45 = startPos->y;
      tickDistc = x;
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(
        debugoverlay,
        startPos,
        endPos,
        r,
        g,
        b,
        duration,
        noDepthTest);
      v23 = v29;
      v25 = v19 - v21;
      v24 = v35;
      v22 = v37;
      z = v39;
      y = v45;
      x = tickDistc;
    }
    v26 = 0;
    v27 = 0;
    if ( v14 >= 0 )
    {
      v38 = v22;
      v36 = v24;
      v34 = v25;
      do
      {
        tickLeft.x = x - v38;
        tickLeft.y = y - v36;
        tickLeft.z = z - v34;
        tickRight.x = v38 + x;
        tickRight.y = v36 + y;
        tickRight.z = v34 + z;
        if ( v26 == tickTextDist )
        {
          v41 = v23;
          v47 = z;
          endPosb = y;
          tickDistb = x;
          V_snprintf(text, 25, "%i", v27);
          textPos.y = tickLeft.y + 0.0;
          x = tickDistb;
          textPos.z = tickLeft.z + 8.0;
          y = endPosb;
          textPos.x = tickLeft.x + 0.0;
          z = v47;
          v23 = v41;
          if ( debugoverlay != 0 )
          {
            (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(
              debugoverlay,
              &tickLeft,
              &tickRight,
              255,
              255,
              255,
              duration,
              v28,
              tickDistb,
              endPosb,
              v47,
              v41,
              noDepthTest);
            x = tickDistb;
            y = endPosb;
            z = v47;
            v23 = v41;
            if ( debugoverlay != 0 )
            {
              (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 53))(debugoverlay, &textPos, "%s", text);
              v23 = v41;
              z = v47;
              y = endPosb;
              x = tickDistb;
            }
          }
          v26 = 1;
        }
        else if ( debugoverlay != 0 )
        {
          v40 = v23;
          ++v26;
          v46 = z;
          endPosc = y;
          tickDistd = x;
          (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(
            debugoverlay,
            &tickLeft,
            &tickRight,
            r,
            g,
            b,
            duration,
            noDepthTest);
          v23 = v40;
          z = v46;
          y = endPosc;
          x = tickDistd;
        }
        else
        {
          ++v26;
        }
        ++v27;
        x = x + (lineDir.x * v23);
        y = y + (lineDir.y * v23);
        z = z + (lineDir.z * v23);
      }
      while ( v14 >= v27 );
    }
  }
}


// NDebugOverlay::DrawGroundCrossHairOverlay  (line 503, @0x00000000021a3b00, libserver.so)  // inlines: CGameTrace, DotProduct, EnableInteractsWith, GetFloat, Init, LengthSqr, Line, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+, operator=
// calls: GetDebugPlayer, CBasePlayer::EyeVectors, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// local variable allocation has failed, the output may be wrong!
void __cdecl NDebugOverlay::DrawGroundCrossHairOverlay()
{
  CBasePlayer *DebugPlayer; // rax
  CBasePlayer *v1; // rbx
  vec_t v2; // xmm1_4
  float m_fValue; // xmm7_4
  Vector vForward; // [rsp+10h] [rbp-180h] BYREF
  Vector vSource; // [rsp+20h] [rbp-170h]
  __int128 startPos; // [rsp+30h] [rbp-160h] OVERLAPPED BYREF
  Vector endPos; // [rsp+70h] [rbp-120h] BYREF
  int v8; // [rsp+7Ch] [rbp-114h]
  float v9; // [rsp+80h] [rbp-110h]
  float v10; // [rsp+84h] [rbp-10Ch]
  float v11; // [rsp+88h] [rbp-108h]
  int v12; // [rsp+8Ch] [rbp-104h]
  int v13; // [rsp+90h] [rbp-100h]
  int v14; // [rsp+94h] [rbp-FCh]
  int v15; // [rsp+98h] [rbp-F8h]
  int v16; // [rsp+9Ch] [rbp-F4h]
  int v17; // [rsp+A0h] [rbp-F0h]
  int v18; // [rsp+A4h] [rbp-ECh]
  int v19; // [rsp+A8h] [rbp-E8h]
  int v20; // [rsp+ACh] [rbp-E4h]
  float v21; // [rsp+B0h] [rbp-E0h]
  char v22; // [rsp+B4h] [rbp-DCh]
  bool v23; // [rsp+B5h] [rbp-DBh]
  trace_t tr; // [rsp+C0h] [rbp-D0h] BYREF

  DebugPlayer = GetDebugPlayer();
  v1 = DebugPlayer;
  if ( DebugPlayer != 0 )
  {
    *&vSource.x = (*(DebugPlayer->_vptr_IHandleEntity + 164))(DebugPlayer);
    vSource.z = v2;
    CBasePlayer::EyeVectors(v1, &vForward, 0, 0);
    memset(&tr.m_ShapeAttributes, 0, 31);
    tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&tr);
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    v9 = ((vForward.x * 2048.0) + vSource.x) - vSource.x;
    v10 = ((vForward.y * 2048.0) + vSource.y) - vSource.y;
    v11 = ((2048.0 * vForward.z) + vSource.z) - vSource.z;
    v8 = 0;
    v12 = 0;
    v16 = 0;
    v20 = 0;
    v19 = 0;
    v18 = 0;
    v17 = 0;
    v15 = 0;
    v14 = 0;
    v13 = 0;
    endPos = vSource;
    v21 = m_fValue;
    v23 = (((v9 * v9) + (v10 * v10)) + (v11 * v11)) != 0.0;
    v22 = 1;
    CTraceFilterSimple::CTraceFilterSimple(&startPos, v1, 4, 0);
    *(&startPos + 1) |= 0x87001uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &endPos, &startPos, &tr);
    if ( tr.fraction != 1.0 && (((tr.plane.normal.x * 0.0) + (tr.plane.normal.y * 0.0)) + tr.plane.normal.z) > 0.5 )
    {
      tr.endpos.z = tr.endpos.z + 1.0;
      *(&startPos + 2) = tr.endpos.z + 0.0;
      *&startPos = tr.endpos.x - 6.0;
      *(&startPos + 1) = tr.endpos.y + 0.0;
      endPos.x = tr.endpos.x + 6.0;
      endPos.y = tr.endpos.y + 0.0;
      endPos.z = tr.endpos.z + 0.0;
      if ( debugoverlay != 0 )
      {
        (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &startPos, &endPos, 255, 0, 0, 0.0, 0);
        *(&startPos + 1) = tr.endpos.y - 6.0;
        *(&startPos + 2) = tr.endpos.z + 0.0;
        endPos.y = tr.endpos.y + 6.0;
        *&startPos = tr.endpos.x + 0.0;
        endPos.x = tr.endpos.x + 0.0;
        endPos.z = tr.endpos.z + 0.0;
        if ( debugoverlay != 0 )
          (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &startPos, &endPos, 255, 0, 0, 0.0, 0);
      }
    }
  }
}


// NDebugOverlay::HorzArrow  (line 535, @0x00000000021a4b20, libserver.so)  // inlines: Vector
// calls: NDebugOverlay::TwistArrow
// callers: DrawBone, CDOTABehaviorPet::RecalculateThreat, NavDrawHorizontalArrow, CPath::ComputePathDetails, CPathData::Draw, NextBotGroundLocomotion::ClimbUpToLedge, CLocomotionBase::Update, IVision::UpdateKnownEntities, ChasePath::PostUpdate, CPathFollower::FindBlocker, CPathFollower::Climbing, PlayerBody::Upkeep (14 total)
void __fastcall NDebugOverlay::HorzArrow(
        const Vector *const startPos,
        const Vector *const endPos,
        float width,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        int a,
        float flDuration,
        bool noDepthTest)
{
  Vector v9; // [rsp+10h] [rbp-18h] BYREF

  v9.x = 0.0;
  v9.y = 0.0;
  v9.z = 1.0;
  NDebugOverlay::TwistArrow(startPos, endPos, &v9, width, r, g, b, flDuration, a, noDepthTest);
}


// NDebugOverlay::YawArrow  (line 543, @0x00000000021a4b60, libserver.so)  // inlines: HorzArrow, Vector, VectorAdd, VectorMultiply, operator*, operator+
// calls: UTIL_YawToVector, NDebugOverlay::TwistArrow
void __fastcall NDebugOverlay::YawArrow(
        const Vector *const startPos,
        float yaw,
        float length,
        float width,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        int a,
        bool noDepthTest,
        float flDuration)
{
  float v15; // xmm1_4
  vec_t v16; // xmm1_4
  vec_t v17; // xmm5_4
  vec_t v18; // xmm4_4
  unsigned __int64 forward; // [rsp+20h] [rbp-60h]
  Vector endPos; // [rsp+30h] [rbp-50h] BYREF
  Vector upVec; // [rsp+40h] [rbp-40h] BYREF

  forward = UTIL_YawToVector(yaw, length).m128i_u64[0];
  v16 = (v15 * length) + startPos->z;
  upVec.z = 1.0;
  v17 = (*(&forward + 1) * length) + startPos->y;
  v18 = (length * *&forward) + startPos->x;
  endPos.z = v16;
  endPos.y = v17;
  endPos.x = v18;
  upVec.x = 0.0;
  upVec.y = 0.0;
  NDebugOverlay::TwistArrow(startPos, &endPos, &upVec, width, r, g, b, flDuration, a, noDepthTest);
}


// NDebugOverlay::VertArrow  (line 553, @0x00000000021a3ec0, libserver.so)  // inlines: Line, Triangle, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: VectorNormalize, VectorVectors
// callers: CTriggerPush::DrawEntityDebugOverlays, CPathData::Draw, ChasePath::PostUpdate
void __fastcall NDebugOverlay::VertArrow(
        const Vector *const startPos,
        const Vector *const endPos,
        float width,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        int a,
        float flDuration,
        bool noDepthTest)
{
  vec_t v14; // xmm3_4
  vec_t v15; // xmm0_4
  float x; // xmm9_4
  float y; // xmm8_4
  float z; // xmm7_4
  float v19; // xmm3_4
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm3_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // [rsp+38h] [rbp-F8h]
  float radiusc; // [rsp+50h] [rbp-E0h]
  double radius; // [rsp+50h] [rbp-E0h]
  double radiusa; // [rsp+50h] [rbp-E0h]
  Vector lineDir; // [rsp+60h] [rbp-D0h] BYREF
  Vector upVec; // [rsp+70h] [rbp-C0h] BYREF
  Vector sideDir; // [rsp+80h] [rbp-B0h] BYREF
  Vector p1; // [rsp+90h] [rbp-A0h] BYREF
  Vector p2; // [rsp+A0h] [rbp-90h] BYREF
  Vector p3; // [rsp+B0h] [rbp-80h] BYREF
  Vector p4; // [rsp+C0h] [rbp-70h] BYREF
  Vector p5; // [rsp+D0h] [rbp-60h] BYREF
  Vector p6; // [rsp+E0h] [rbp-50h] BYREF
  Vector p7; // [rsp+F0h] [rbp-40h] BYREF

  v14 = endPos->x - startPos->x;
  v15 = endPos->z - startPos->z;
  lineDir.y = endPos->y - startPos->y;
  lineDir.x = v14;
  lineDir.z = v15;
  VectorNormalize(&lineDir);
  v26 = width;
  radiusc = width * 0.5;
  VectorVectors(&lineDir, &sideDir, &upVec);
  x = startPos->x;
  y = startPos->y;
  z = startPos->z;
  v19 = endPos->x;
  p1.x = startPos->x - (radiusc * upVec.x);
  v20 = *&endPos->x;
  v21 = endPos->y;
  p1.y = y - (radiusc * upVec.y);
  *&p4.x = v20;
  *&v20 = endPos->z;
  p1.z = z - (radiusc * upVec.z);
  LODWORD(p4.z) = v20;
  v22 = v19 - (lineDir.x * v26);
  v23 = v21 - (lineDir.y * v26);
  v24 = endPos->z;
  p3.x = v22 - (upVec.x * v26);
  v25 = v24 - (lineDir.z * v26);
  p5.x = (upVec.x * v26) + v22;
  p2.x = v22 - (radiusc * upVec.x);
  p3.y = v23 - (upVec.y * v26);
  p6.x = v22 + (radiusc * upVec.x);
  p5.y = (upVec.y * v26) + v23;
  p2.y = v23 - (radiusc * upVec.y);
  p3.z = v25 - (v26 * upVec.z);
  p5.z = (v26 * upVec.z) + v25;
  p6.y = v23 + (radiusc * upVec.y);
  p2.z = v25 - (radiusc * upVec.z);
  p6.z = v25 + (radiusc * upVec.z);
  p7.x = (radiusc * upVec.x) + x;
  p7.y = (radiusc * upVec.y) + y;
  p7.z = (radiusc * upVec.z) + z;
  if ( debugoverlay != 0 )
  {
    radius = flDuration;
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &p1, &p2, r, g, b, flDuration, noDepthTest);
    if ( debugoverlay != 0 )
    {
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &p2, &p3, r, g, b, radius, noDepthTest);
      if ( debugoverlay != 0 )
      {
        (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &p3, &p4, r, g, b, radius, noDepthTest);
        if ( debugoverlay != 0 )
        {
          (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &p4, &p5, r, g, b, radius, noDepthTest);
          if ( debugoverlay != 0 )
          {
            (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &p5, &p6, r, g, b, radius, noDepthTest);
            if ( debugoverlay != 0 )
              (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(
                debugoverlay,
                &p6,
                &p7,
                r,
                g,
                b,
                radius,
                noDepthTest);
          }
        }
      }
    }
  }
  if ( a > 0 && debugoverlay != 0 )
  {
    radiusa = flDuration;
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 49))(
      debugoverlay,
      &p5,
      &p4,
      &p3,
      r,
      g,
      flDuration,
      b,
      a,
      noDepthTest);
    if ( debugoverlay != 0 )
    {
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 49))(
        debugoverlay,
        &p1,
        &p7,
        &p6,
        r,
        g,
        radiusa,
        b,
        a,
        noDepthTest);
      if ( debugoverlay != 0 )
      {
        (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 49))(
          debugoverlay,
          &p6,
          &p2,
          &p1,
          r,
          g,
          radiusa,
          b,
          a,
          noDepthTest);
        if ( debugoverlay != 0 )
        {
          (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 49))(
            debugoverlay,
            &p3,
            &p4,
            &p5,
            r,
            g,
            radiusa,
            b,
            a,
            noDepthTest);
          if ( debugoverlay != 0 )
          {
            (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 49))(
              debugoverlay,
              &p6,
              &p7,
              &p1,
              r,
              g,
              radiusa,
              b,
              a,
              noDepthTest);
            if ( debugoverlay != 0 )
              (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 49))(
                debugoverlay,
                &p1,
                &p2,
                &p6,
                r,
                g,
                radiusa,
                b,
                a,
                noDepthTest);
          }
        }
      }
    }
  }
}


// NDebugOverlay::TwistArrow  (line 593, @0x00000000021a4500, libserver.so)  // inlines: CrossProduct, Line, Triangle, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: VectorNormalize
// callers: NDebugOverlay::HorzArrow, NDebugOverlay::YawArrow
void __fastcall NDebugOverlay::TwistArrow(
        const Vector *const startPos,
        const Vector *const endPos,
        const Vector *const upVec,
        float width,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        float flDuration,
        int a,
        bool noDepthTest)
{
  vec_t v15; // xmm1_4
  vec_t v16; // xmm0_4
  float z; // xmm6_4
  float y; // xmm7_4
  float v19; // xmm8_4
  float x; // xmm12_4
  float v21; // xmm11_4
  float v22; // xmm5_4
  float v23; // xmm13_4
  float v24; // xmm10_4
  float v25; // xmm9_4
  float v26; // xmm8_4
  float v27; // xmm6_4
  float v28; // xmm7_4
  float v29; // xmm9_4
  float v30; // xmm5_4
  float v31; // xmm4_4
  float v32; // xmm8_4
  float v33; // xmm3_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  double widtha; // [rsp+58h] [rbp-B8h]
  double widthb; // [rsp+58h] [rbp-B8h]
  Vector lineDir; // [rsp+60h] [rbp-B0h] BYREF
  Vector p1; // [rsp+70h] [rbp-A0h] BYREF
  Vector p2; // [rsp+80h] [rbp-90h] BYREF
  Vector p3; // [rsp+90h] [rbp-80h] BYREF
  Vector p4; // [rsp+A0h] [rbp-70h] BYREF
  Vector p5; // [rsp+B0h] [rbp-60h] BYREF
  Vector p6; // [rsp+C0h] [rbp-50h] BYREF
  Vector p7; // [rsp+D0h] [rbp-40h] BYREF

  v15 = endPos->y - startPos->y;
  v16 = endPos->z - startPos->z;
  lineDir.x = endPos->x - startPos->x;
  lineDir.y = v15;
  lineDir.z = v16;
  VectorNormalize(&lineDir);
  z = upVec->z;
  y = upVec->y;
  v19 = lineDir.z * upVec->x;
  x = startPos->x;
  v21 = startPos->y;
  v22 = upVec->x * lineDir.y;
  v23 = startPos->x;
  v24 = startPos->z;
  v25 = (lineDir.y * z) - (lineDir.z * y);
  p4 = *endPos;
  v26 = v19 - (z * lineDir.x);
  v27 = (0.5 * width) * v25;
  v28 = (y * lineDir.x) - v22;
  v29 = v25 * width;
  v30 = (0.5 * width) * v26;
  v31 = (0.5 * width) * v28;
  v32 = v26 * width;
  p1.x = v23 - v27;
  p1.y = v21 - v30;
  p1.z = v24 - v31;
  v33 = endPos->x - (lineDir.x * width);
  v34 = endPos->y - (lineDir.y * width);
  v35 = endPos->z - (lineDir.z * width);
  p3.x = v33 - v29;
  p5.x = v29 + v33;
  p2.x = v33 - v27;
  p3.y = v34 - v32;
  p5.y = v32 + v34;
  p6.x = v33 + v27;
  p2.y = v34 - v30;
  p3.z = v35 - (width * v28);
  p5.z = (width * v28) + v35;
  p6.y = v34 + v30;
  p2.z = v35 - v31;
  p6.z = v35 + v31;
  p7.x = v27 + x;
  p7.y = v30 + v21;
  p7.z = v31 + v24;
  if ( debugoverlay != 0 )
  {
    widtha = flDuration;
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &p1, &p2, r, g, b, flDuration, noDepthTest);
    if ( debugoverlay != 0 )
    {
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &p2, &p3, r, g, b, widtha, noDepthTest);
      if ( debugoverlay != 0 )
      {
        (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &p3, &p4, r, g, b, widtha, noDepthTest);
        if ( debugoverlay != 0 )
        {
          (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &p4, &p5, r, g, b, widtha, noDepthTest);
          if ( debugoverlay != 0 )
          {
            (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &p5, &p6, r, g, b, widtha, noDepthTest);
            if ( debugoverlay != 0 )
              (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(
                debugoverlay,
                &p6,
                &p7,
                r,
                g,
                b,
                widtha,
                noDepthTest);
          }
        }
      }
    }
  }
  if ( a > 0 && debugoverlay != 0 )
  {
    widthb = flDuration;
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 49))(
      debugoverlay,
      &p5,
      &p4,
      &p3,
      r,
      g,
      flDuration,
      b,
      a,
      noDepthTest);
    if ( debugoverlay != 0 )
    {
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 49))(
        debugoverlay,
        &p1,
        &p7,
        &p6,
        r,
        g,
        widthb,
        b,
        a,
        noDepthTest);
      if ( debugoverlay != 0 )
      {
        (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 49))(
          debugoverlay,
          &p6,
          &p2,
          &p1,
          r,
          g,
          widthb,
          b,
          a,
          noDepthTest);
        if ( debugoverlay != 0 )
        {
          (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 49))(
            debugoverlay,
            &p3,
            &p4,
            &p5,
            r,
            g,
            widthb,
            b,
            a,
            noDepthTest);
          if ( debugoverlay != 0 )
          {
            (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 49))(
              debugoverlay,
              &p6,
              &p7,
              &p1,
              r,
              g,
              widthb,
              b,
              a,
              noDepthTest);
            if ( debugoverlay != 0 )
              (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 49))(
                debugoverlay,
                &p1,
                &p2,
                &p6,
                r,
                g,
                widthb,
                b,
                a,
                noDepthTest);
          }
        }
      }
    }
  }
}


// NDebugOverlay::Axis  (line 635, @0x00000000021a4c30, libserver.so)  // inlines: Line, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: AngleVectors
// callers: CInteractionManager::TestInteractionsWithEntity, CInteractionManager::UpdateInteraction, CBaseServerVehicle::CacheEntryExitPoints, CPathFollower::Avoid
void __fastcall NDebugOverlay::Axis(
        const Vector *const position,
        const QAngle *const angles,
        float size,
        bool noDepthTest,
        float flDuration)
{
  float z; // xmm5_4
  float x; // xmm4_4
  float y; // xmm2_4
  double sizea; // [rsp+18h] [rbp-68h]
  Vector xvec; // [rsp+20h] [rbp-60h] BYREF
  Vector yvec; // [rsp+30h] [rbp-50h] BYREF
  Vector zvec; // [rsp+40h] [rbp-40h] BYREF

  AngleVectors(angles, &xvec, &yvec, &zvec);
  z = position->z;
  x = position->x;
  y = position->y;
  xvec.z = (xvec.z * size) + z;
  xvec.x = (xvec.x * size) + x;
  xvec.y = (xvec.y * size) + y;
  yvec.y = y - (yvec.y * size);
  yvec.z = z - (yvec.z * size);
  yvec.x = x - (yvec.x * size);
  zvec.y = (zvec.y * size) + y;
  zvec.z = (zvec.z * size) + z;
  zvec.x = (size * zvec.x) + x;
  if ( debugoverlay != 0 )
  {
    sizea = flDuration;
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(
      debugoverlay,
      position,
      &xvec,
      255,
      0,
      0,
      flDuration,
      noDepthTest);
    if ( debugoverlay != 0 )
    {
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(
        debugoverlay,
        position,
        &yvec,
        0,
        255,
        0,
        sizea,
        noDepthTest);
      if ( debugoverlay != 0 )
        (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(
          debugoverlay,
          position,
          &zvec,
          0,
          0,
          255,
          sizea,
          noDepthTest);
    }
  }
}


// NDebugOverlay::Sphere  (line 652, @0x00000000021a4df0, libserver.so)  // inlines: Line, VectorAdd, operator+, operator=
// calls: sincosf
// callers: Script_OverlaySphere, CInteractionManager::TestInteractionsWithEntity, CTriggerSndSosOpvar::HandleTouchingEntities, DrawEstimatedLeadPosition, CDOTA_BotAction_Attack::Think, CDOTA_BotAction_AttackMove::Think, CDOTA_BotAction_UseAbility::Think, CDOTA_BotAction_PickUpRune::Think, CDOTA_BotAction_PickUpItem::Think, CDOTA_BotAction_DropItem::Think, CDOTA_Commander::DrawDebug, CDOTA_BotAction_MoveTo::Think (19 total)
void __fastcall NDebugOverlay::Sphere(
        const Vector *const center,
        double radius,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        bool noDepthTest,
        float flDuration)
{
  double v7; // xmm6_8
  ISceneViewDebugOverlays *v9; // r14
  double v13; // xmm2_8
  double v14; // xmm1_8
  double v15; // xmm3_8
  float v16; // xmm4_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  int v19; // r13d
  float v20; // xmm4_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  vec_t y; // xmm5_4
  float x; // xmm0_4
  float v25; // xmm4_4
  float v26; // xmm7_4
  float v27; // xmm4_4
  double v28; // xmm3_8
  int v29; // r13d
  double v30; // xmm1_8
  float v31; // xmm0_4
  float v32; // xmm0_4
  vec_t v33; // xmm5_4
  float v34; // xmm0_4
  float v35; // xmm4_4
  float v36; // xmm6_4
  float v37; // xmm4_4
  int v38; // r13d
  vec_t v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm0_4
  float v42; // xmm0_4
  float v43; // xmm3_4
  float v44; // xmm5_4
  float z; // [rsp+24h] [rbp-7Ch]
  vec_t v46; // [rsp+24h] [rbp-7Ch]
  float v47; // [rsp+28h] [rbp-78h]
  float v48; // [rsp+28h] [rbp-78h]
  unsigned int v49; // [rsp+2Ch] [rbp-74h]
  unsigned int v50; // [rsp+2Ch] [rbp-74h]
  float v51; // [rsp+2Ch] [rbp-74h]
  float angle; // [rsp+30h] [rbp-70h]
  float anglea; // [rsp+30h] [rbp-70h]
  float angleb; // [rsp+30h] [rbp-70h]
  float axisSize; // [rsp+44h] [rbp-5Ch]
  float cosx; // [rsp+48h] [rbp-58h] BYREF
  float sinx; // [rsp+4Ch] [rbp-54h] BYREF
  Vector edge; // [rsp+50h] [rbp-50h] BYREF
  Vector lastEdge; // [rsp+60h] [rbp-40h] BYREF

  v7 = radius;
  v9 = 0;
  axisSize = *&radius;
  *&v13 = LODWORD(center->y);
  *&v14 = LODWORD(center->z);
  *&v15 = LODWORD(center->x);
  lastEdge.y = *&v13 + 0.0;
  v16 = *&v15 + 0.0;
  edge.y = *&v13 + 0.0;
  lastEdge.z = *&radius + *&v14;
  lastEdge.x = *&v15 + 0.0;
  edge.x = *&v15 + 0.0;
  edge.z = *&v14 - *&radius;
  if ( debugoverlay != 0 )
  {
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(
      debugoverlay,
      &edge,
      &lastEdge,
      r,
      g,
      b,
      flDuration,
      noDepthTest);
    *&v15 = LODWORD(center->x);
    v9 = debugoverlay;
    v16 = *&v15 + 0.0;
    *&v13 = LODWORD(center->y);
    *&v14 = LODWORD(center->z);
  }
  lastEdge.x = v16;
  edge.x = v16;
  v17 = *&v14 + 0.0;
  lastEdge.z = *&v14 + 0.0;
  edge.y = *&v13 - axisSize;
  lastEdge.y = axisSize + *&v13;
  edge.z = *&v14 + 0.0;
  if ( v9 != 0 )
  {
    (*(v9->_vptr_ISceneViewDebugOverlays + 50))(
      v9,
      &edge,
      &lastEdge,
      r,
      g,
      b,
      flDuration,
      v14,
      v13,
      v15,
      *&v13 - axisSize,
      axisSize + *&v13,
      v7,
      axisSize,
      noDepthTest);
    *&v14 = LODWORD(center->z);
    v9 = debugoverlay;
    v17 = *&v14 + 0.0;
    *&v15 = LODWORD(center->x);
    *&v13 = LODWORD(center->y);
  }
  lastEdge.z = v17;
  edge.z = v17;
  v18 = axisSize + *&v15;
  lastEdge.y = *&v13 + 0.0;
  edge.x = *&v15 - axisSize;
  lastEdge.x = axisSize + *&v15;
  edge.y = *&v13 + 0.0;
  if ( v9 != 0 )
  {
    (*(v9->_vptr_ISceneViewDebugOverlays + 50))(v9, &edge, &lastEdge, r, g, b, flDuration, v14, v13, v15, noDepthTest);
    *&v15 = LODWORD(center->x);
    v9 = debugoverlay;
    v18 = axisSize + *&v15;
    *&v14 = LODWORD(center->z);
    *&v13 = LODWORD(center->y);
  }
  lastEdge.x = v18;
  v19 = 17;
  v20 = 0.0;
  lastEdge.y = *&v13;
  v21 = 1.0;
  lastEdge.z = *&v14;
  angle = 0.0;
  v47 = *&v15;
  z = *&v14;
  while ( 1 )
  {
    edge.y = *&v13;
    y = *&v13;
    x = (v21 * axisSize) + v47;
    v25 = (v20 * axisSize) + z;
    edge.x = x;
    edge.z = v25;
    if ( v9 != 0 )
    {
      (*(v9->_vptr_ISceneViewDebugOverlays + 50))(
        v9,
        &edge,
        &lastEdge,
        r,
        g,
        b,
        flDuration,
        v14,
        v13,
        v15,
        v25,
        v13,
        noDepthTest);
      *&v13 = center->y;
      z = center->z;
      x = edge.x;
      v47 = center->x;
      y = edge.y;
      v25 = edge.z;
    }
    --v19;
    lastEdge.x = x;
    lastEdge.y = y;
    v26 = angle + 22.5;
    lastEdge.z = v25;
    angle = angle + 22.5;
    if ( v19 == 0 )
      break;
    v49 = LODWORD(v13);
    v9 = debugoverlay;
    v22 = (v26 / 180.0) * 3.141592653589793;
    sincosf(v22, &sinx, &cosx);
    v21 = cosx;
    v20 = sinx;
    *&v13 = v49;
  }
  v27 = 0.0;
  *&v28 = LODWORD(v47);
  v29 = 17;
  anglea = 0.0;
  *&v30 = LODWORD(z);
  lastEdge.x = v47;
  lastEdge.z = z;
  lastEdge.y = axisSize + *&v13;
  v31 = 1.0;
  v48 = *&v13;
  while ( 1 )
  {
    edge.x = *&v28;
    v33 = *&v28;
    v34 = (v31 * axisSize) + v48;
    v35 = (v27 * axisSize) + z;
    edge.y = v34;
    edge.z = v35;
    if ( debugoverlay != 0 )
    {
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(
        debugoverlay,
        &edge,
        &lastEdge,
        r,
        g,
        b,
        flDuration,
        v30,
        axisSize,
        v28,
        v35,
        v28,
        noDepthTest);
      *&v28 = center->x;
      z = center->z;
      v33 = edge.x;
      v48 = center->y;
      v34 = edge.y;
      v35 = edge.z;
    }
    --v29;
    lastEdge.x = v33;
    lastEdge.y = v34;
    v36 = anglea + 22.5;
    lastEdge.z = v35;
    anglea = anglea + 22.5;
    if ( v29 == 0 )
      break;
    v50 = LODWORD(v28);
    v32 = (v36 / 180.0) * 3.141592653589793;
    sincosf(v32, &sinx, &cosx);
    v31 = cosx;
    v27 = sinx;
    *&v28 = v50;
  }
  v37 = 0.0;
  lastEdge.x = *&v28;
  v38 = 17;
  v39 = z;
  angleb = 0.0;
  lastEdge.z = z;
  v51 = *&v28;
  lastEdge.y = axisSize + v48;
  v40 = 1.0;
  while ( 1 )
  {
    edge.z = v39;
    v42 = (v40 * axisSize) + v51;
    v43 = (v37 * axisSize) + v48;
    edge.x = v42;
    edge.y = v43;
    if ( debugoverlay != 0 )
    {
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(
        debugoverlay,
        &edge,
        &lastEdge,
        r,
        g,
        b,
        flDuration,
        noDepthTest);
      v42 = edge.x;
      v43 = edge.y;
      v39 = edge.z;
    }
    --v38;
    lastEdge.x = v42;
    lastEdge.y = v43;
    v44 = angleb + 22.5;
    lastEdge.z = v39;
    angleb = angleb + 22.5;
    if ( v38 == 0 )
      break;
    v51 = center->x;
    v48 = center->y;
    v46 = center->z;
    v41 = (v44 / 180.0) * 3.141592653589793;
    sincosf(v41, &sinx, &cosx);
    v40 = cosx;
    v37 = sinx;
    v39 = v46;
  }
}


// NDebugOverlay::Circle  (line 702, @0x00000000021a5720, libserver.so)  // inlines: GetLocalPlayer
// calls: UTIL_GetListenServerHost, CBasePlayer::EyeVectors, VectorAngles, NDebugOverlay::Circle
// callers: CDOTA_Modifier_ControllerTest_MeleeAttack::OnIntervalThink, Script_DebugDrawCircle, PlayerBody::Upkeep
void __fastcall NDebugOverlay::Circle(
        const Vector *const position,
        float radius,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        int a,
        bool bNoDepthTest,
        float flDuration)
{
  CBasePlayer *ListenServerHost; // rax
  Vector clientForward; // [rsp+30h] [rbp-50h] BYREF
  QAngle vecAngles; // [rsp+40h] [rbp-40h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 )
  {
    CBasePlayer::EyeVectors(ListenServerHost, &clientForward, 0, 0);
    VectorAngles(&clientForward, &vecAngles);
    NDebugOverlay::Circle(position, &vecAngles, radius, r, g, b, a, flDuration, bNoDepthTest);
  }
}


// NDebugOverlay::Circle  (line 721, @0x00000000021a5650, libserver.so)  // inlines: MatrixGetColumn, operator=
// calls: AngleMatrix, NDebugOverlay::Circle
// callers: NDebugOverlay::Circle, CGridNav::ShowObjectObstructions, CDOTA_ProjectileManager::CreateTrackingProjectileFiltered, CDOTA_ProjectileManager::FrameUpdatePostEntityThink, CDOTALocomotor::Update, CDOTABehaviorPet::RecalculateTargetPosition, CDOTA_BaseNPC::DrawDebugTextOverlays, CDOTA_BaseNPC_Hero::OnGainAggro, CDOTAHeroList::AddPossibleBattleMusicPoint, CLocomotionBase::StuckMonitor, CPathFollower::FindBlocker
void __fastcall NDebugOverlay::Circle(
        const Vector *const position,
        const QAngle *const angles,
        float radius,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        int a,
        float flDuration,
        bool bNoDepthTest)
{
  Vector xAxis; // [rsp+20h] [rbp-80h] BYREF
  Vector yAxis; // [rsp+30h] [rbp-70h] BYREF
  matrix3x4_t xform; // [rsp+40h] [rbp-60h] BYREF

  AngleMatrix(angles, position, &xform);
  xAxis.x = xform.m_flMatVal[0][2];
  xAxis.y = xform.m_flMatVal[1][2];
  xAxis.z = xform.m_flMatVal[2][2];
  yAxis.x = xform.m_flMatVal[0][1];
  yAxis.y = xform.m_flMatVal[1][1];
  yAxis.z = xform.m_flMatVal[2][1];
  NDebugOverlay::Circle(position, &xAxis, &yAxis, radius, r, g, b, flDuration, a, bNoDepthTest);
}


// NDebugOverlay::Circle  (line 735, @0x00000000021a53c0, libserver.so)  // inlines: Line, VectorAdd, VectorMultiply, operator*, operator+, operator=
// calls: sincosf
// callers: Script_OverlayCircle, NDebugOverlay::Circle, NDebugOverlay::Sphere, NDebugOverlay::Cone, CC_SelectBot, NextBotGroundLocomotion::ClimbUpToLedge, NextBotManager::OnSound
void __fastcall NDebugOverlay::Circle(
        const Vector *const position,
        const Vector *const xAxis,
        const Vector *const yAxis,
        float radius,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        float flDuration,
        int a,
        bool bNoDepthTest)
{
  float v10; // xmm2_4
  int v11; // r15d
  float x; // xmm4_4
  float v16; // xmm7_4
  float v17; // xmm1_4
  float y; // xmm0_4
  float v19; // xmm8_4
  float z; // xmm5_4
  float v21; // xmm9_4
  float v22; // xmm6_4
  float v23; // xmm3_4
  vec_t v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v31; // [rsp+44h] [rbp-6Ch]
  float v32; // [rsp+44h] [rbp-6Ch]
  float v33; // [rsp+44h] [rbp-6Ch]
  float cosx; // [rsp+48h] [rbp-68h] BYREF
  float sinx; // [rsp+4Ch] [rbp-64h] BYREF
  Vector vecLastPosition; // [rsp+50h] [rbp-60h] BYREF
  Vector vecStart; // [rsp+60h] [rbp-50h] BYREF
  Vector vecPosition; // [rsp+70h] [rbp-40h] BYREF

  v10 = radius;
  v11 = 1;
  x = xAxis->x;
  v16 = position->x;
  v17 = radius * xAxis->x;
  y = xAxis->y;
  v19 = position->y;
  z = xAxis->z;
  v21 = position->z;
  v22 = 0.9238795;
  v23 = 0.38268346;
  vecStart.x = v17 + position->x;
  vecStart.y = (v10 * y) + v19;
  vecStart.z = (v10 * z) + v21;
  vecPosition = vecStart;
  while ( 1 )
  {
    vecLastPosition = vecPosition;
    v24 = ((yAxis->y * v23) * v10) + (((y * v22) * v10) + v19);
    v25 = yAxis->z * v23;
    v26 = v23 * yAxis->x;
    vecPosition.y = v24;
    vecPosition.z = (v25 * v10) + (((z * v22) * v10) + v21);
    vecPosition.x = (v26 * v10) + (((x * v22) * v10) + v16);
    if ( debugoverlay != 0 )
    {
      v32 = v10;
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(
        debugoverlay,
        &vecLastPosition,
        &vecPosition,
        r,
        g,
        b,
        flDuration,
        bNoDepthTest);
      v10 = v32;
    }
    if ( v11 > 1 && a != 0 )
      break;
    if ( ++v11 == 17 )
      return;
LABEL_3:
    v31 = v10;
    sincosf(v11 * 0.39269909, &sinx, &cosx);
    v22 = cosx;
    v23 = sinx;
    x = xAxis->x;
    y = xAxis->y;
    z = xAxis->z;
    v16 = position->x;
    v19 = position->y;
    v21 = position->z;
    v10 = v31;
  }
  v33 = v10;
  ++v11;
  (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 49))(
    debugoverlay,
    &vecStart,
    &vecLastPosition,
    &vecPosition,
    r,
    g,
    flDuration,
    b,
    a,
    bNoDepthTest);
  v10 = v33;
  if ( v11 != 17 )
    goto LABEL_3;
}


// NDebugOverlay::Sphere  (line 771, @0x00000000021a57d0, libserver.so)  // inlines: MatrixGetColumn, operator=
// calls: AngleMatrix, NDebugOverlay::Circle
// callers: NDebugOverlay::Sphere, CFourWheelVehiclePhysics::DrawEntityDebugOverlays, CPointPush::DrawEntityDebugOverlays, DrawCulledPoint, DrawCollision, CShortPathProbe::Advance, CGridNavPath::ComputeShortPath, CGridNavPath::Update, CDOTABehaviorPet::Update
void __fastcall NDebugOverlay::Sphere(
        const Vector *const position,
        const QAngle *const angles,
        float radius,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        int a,
        float flDuration,
        bool bNoDepthTest)
{
  Vector xAxis; // [rsp+40h] [rbp-90h] BYREF
  Vector yAxis; // [rsp+50h] [rbp-80h] BYREF
  Vector zAxis; // [rsp+60h] [rbp-70h] BYREF
  matrix3x4_t xform; // [rsp+70h] [rbp-60h] BYREF

  AngleMatrix(angles, position, &xform);
  xAxis.x = xform.m_flMatVal[0][0];
  xAxis.y = xform.m_flMatVal[1][0];
  xAxis.z = xform.m_flMatVal[2][0];
  yAxis.x = xform.m_flMatVal[0][1];
  yAxis.y = xform.m_flMatVal[1][1];
  yAxis.z = xform.m_flMatVal[2][1];
  zAxis.x = xform.m_flMatVal[0][2];
  zAxis.y = xform.m_flMatVal[1][2];
  zAxis.z = xform.m_flMatVal[2][2];
  NDebugOverlay::Circle(position, &xAxis, &yAxis, radius, r, g, b, flDuration, a, bNoDepthTest);
  NDebugOverlay::Circle(position, &yAxis, &zAxis, radius, r, g, b, flDuration, a, bNoDepthTest);
  NDebugOverlay::Circle(position, &xAxis, &zAxis, radius, r, g, b, flDuration, a, bNoDepthTest);
}


// NDebugOverlay::Sphere  (line 790, @0x00000000021a5970, libserver.so)  // inlines: ToQAngle, TransformPoint, TransformVector
// calls: QuaternionAngles, NDebugOverlay::Sphere
// callers: NDebugOverlay::Sweep
void __fastcall NDebugOverlay::Sphere(
        const CTransform *const xform,
        const RnSphere_t *const sphere,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        int a,
        float flDuration,
        bool bNoDepthTest)
{
  QuaternionAligned *p_m_orientation; // rdi
  float y; // xmm5_4
  float v13; // xmm12_4
  float z; // xmm4_4
  float v15; // xmm11_4
  float x; // xmm8_4
  float v17; // xmm7_4
  float v18; // xmm10_4
  float v19; // xmm6_4
  float v20; // xmm9_4
  float v21; // xmm0_4
  float v22; // xmm14_4
  float v23; // xmm2_4
  float v24; // xmm13_4
  float v25; // xmm3_4
  float v26; // xmm12_4
  float v27; // xmm11_4
  float v28; // xmm5_4
  float v29; // xmm4_4
  vec_t v30; // xmm4_4
  float v31; // xmm2_4
  Vector vPosition; // [rsp+20h] [rbp-50h] BYREF
  QAngle vAngles; // [rsp+30h] [rbp-40h] BYREF

  p_m_orientation = &xform->m_orientation;
  y = p_m_orientation->y;
  v13 = p_m_orientation->x + p_m_orientation->x;
  z = p_m_orientation->z;
  v15 = p_m_orientation->w + p_m_orientation->w;
  x = sphere->m_vCenter.x;
  v17 = sphere->m_vCenter.y;
  v18 = v13 * z;
  v19 = sphere->m_vCenter.z;
  v20 = v15 * y;
  v21 = z * (y + y);
  v22 = p_m_orientation->x * v15;
  v23 = 1.0 - (p_m_orientation->x * v13);
  v24 = (y + y) * y;
  v25 = (v13 * z) - (v15 * y);
  v26 = v13 * y;
  v27 = v15 * z;
  v28 = (z + z) * z;
  v29 = ((v26 + v27) * sphere->m_vCenter.x) + p_m_orientation[-1].y;
  vPosition.z = (((v25 * sphere->m_vCenter.x) + p_m_orientation[-1].z) + ((v21 + v22) * v17)) + ((v23 - v24) * v19);
  v30 = (v29 + ((v23 - v28) * v17)) + ((v21 - v22) * v19);
  v31 = (((1.0 - v24) - v28) * x) + p_m_orientation[-1].x;
  vPosition.y = v30;
  vPosition.x = (v31 + ((v26 - v27) * v17)) + ((v20 + v18) * v19);
  QuaternionAngles(p_m_orientation, &vAngles);
  NDebugOverlay::Sphere(&vPosition, &vAngles, sphere->m_flRadius, r, g, b, a, flDuration, bNoDepthTest);
}


// NDebugOverlay::Cone  (line 803, @0x00000000021a5b30, libserver.so)  // inlines: GetColumn, Line, MatrixGetColumn, VectorAdd, VectorMultiply, operator*, operator+, operator=
// calls: sinf, VectorAngles, AngleMatrix, sincosf, NDebugOverlay::Circle
// callers: CDOTABehaviorPet::RecalculateTargetPosition
void __fastcall NDebugOverlay::Cone(
        const Vector *const position,
        const Vector *const axis,
        float angleRadians,
        float length,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        int a,
        float flDuration,
        bool bNoDepthTest)
{
  float x; // xmm7_4
  float v13; // xmm1_4
  float y; // xmm9_4
  float v15; // xmm2_4
  float v16; // xmm4_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  float v21; // xmm3_4
  float v22; // xmm5_4
  float v23; // xmm1_4
  float v24; // xmm8_4
  float v25; // xmm9_4
  float z; // xmm1_4
  int v27; // r12d
  float i; // xmm1_4
  const Vector *v29; // r12
  int v30; // ebx
  float v31; // xmm0_4
  vec_t v32; // xmm2_4
  vec_t v33; // xmm3_4
  const Vector *axisa; // [rsp+10h] [rbp-F0h]
  float sinHalfAngle; // [rsp+28h] [rbp-D8h]
  float v37; // [rsp+2Ch] [rbp-D4h]
  float xAxis; // [rsp+30h] [rbp-D0h]
  float lengthStepa; // [rsp+54h] [rbp-ACh]
  float lengthStep; // [rsp+54h] [rbp-ACh]
  float cosx; // [rsp+58h] [rbp-A8h] BYREF
  float v46; // [rsp+5Ch] [rbp-A4h] BYREF
  QAngle vecAngles; // [rsp+60h] [rbp-A0h] BYREF
  Vector sideAxis; // [rsp+70h] [rbp-90h] BYREF
  Vector upAxis; // [rsp+80h] [rbp-80h] BYREF
  Vector circPos; // [rsp+90h] [rbp-70h] BYREF
  matrix3x4_t xform; // [rsp+A0h] [rbp-60h] BYREF

  sinHalfAngle = sinf(angleRadians * 0.5);
  VectorAngles(axis, &vecAngles);
  AngleMatrix(&vecAngles, position, &xform);
  x = axis->x;
  v13 = position->x;
  y = position->y;
  axisa = axis;
  v15 = xform.m_flMatVal[2][2];
  v16 = xform.m_flMatVal[1][2];
  v17 = xform.m_flMatVal[0][2];
  sideAxis.z = xform.m_flMatVal[2][2];
  v18 = v13 + (x * length);
  v19 = xform.m_flMatVal[2][1];
  v20 = 0.0;
  v21 = xform.m_flMatVal[1][1];
  sideAxis.x = xform.m_flMatVal[0][2];
  v22 = xform.m_flMatVal[0][1];
  sideAxis.y = xform.m_flMatVal[1][2];
  xAxis = v18;
  v23 = axis->y;
  upAxis.x = xform.m_flMatVal[0][1];
  upAxis.y = xform.m_flMatVal[1][1];
  v24 = 1.0;
  upAxis.z = xform.m_flMatVal[2][1];
  v25 = y + (v23 * length);
  z = axis->z;
  v27 = 0;
  v37 = (z * length) + position->z;
  for ( i = sinHalfAngle * length; ; i = lengthStep )
  {
    circPos.x = ((v22 * v20) * i) + (((v17 * v24) * i) + xAxis);
    circPos.y = ((v21 * v20) * i) + (((v16 * v24) * i) + v25);
    circPos.z = ((v19 * v20) * i) + (((v15 * v24) * i) + v37);
    if ( debugoverlay != 0 )
    {
      lengthStepa = i;
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(
        debugoverlay,
        position,
        &circPos,
        r,
        g,
        b,
        flDuration,
        bNoDepthTest);
      i = lengthStepa;
    }
    ++v27;
    lengthStep = i;
    if ( v27 == 8 )
      break;
    sincosf(v27 * 0.78539819, &v46, &cosx);
    v20 = v46;
    v24 = cosx;
    v22 = upAxis.x;
    v21 = upAxis.y;
    v19 = upAxis.z;
    v17 = sideAxis.x;
    v16 = sideAxis.y;
    v15 = sideAxis.z;
  }
  v29 = position;
  v30 = 0;
  do
  {
    v31 = ++v30 * (length / 3.0);
    v32 = (axisa->y * v31) + v29->y;
    v33 = (axisa->x * v31) + v29->x;
    circPos.z = (axisa->z * v31) + v29->z;
    circPos.x = v33;
    circPos.y = v32;
    NDebugOverlay::Circle(&circPos, &sideAxis, &upAxis, v31 * sinHalfAngle, r, g, b, flDuration, 0, bNoDepthTest);
  }
  while ( v30 != 3 );
}


// NDebugOverlay::Capsule  (line 846, @0x00000000021a5ed0, libserver.so)
void __fastcall NDebugOverlay::Capsule(
        const matrix3x4_t *const bottom,
        float flLength,
        float flRadius,
        char r,
        char g,
        char b,
        char a,
        bool bNoDepthTest,
        float flDuration)
{
  __int64 v9; // rbp
  int (**vptr_ISceneViewDebugOverlays)(...); // r10
  _QWORD v11[3]; // [rsp-18h] [rbp-18h] BYREF

  if ( debugoverlay != 0 )
  {
    v11[2] = v9;
    vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
    LOBYTE(v11[0]) = r;
    BYTE1(v11[0]) = g;
    BYTE2(v11[0]) = b;
    BYTE3(v11[0]) = a;
    vptr_ISceneViewDebugOverlays[19](debugoverlay, bottom, v11, bNoDepthTest, flLength, flRadius, flDuration);
  }
}


// NDebugOverlay::Capsule  (line 858, @0x00000000021a5f20, libserver.so)  // inlines: TransformPoint, TransformVector
// callers: NDebugOverlay::Sweep
void __fastcall NDebugOverlay::Capsule(
        const CTransform *const xform,
        const RnCapsule_t *const capsule,
        char r,
        char g,
        char b,
        char a,
        float flDuration,
        bool bNoDepthTest)
{
  float y; // xmm1_4
  float x; // xmm2_4
  float z; // xmm0_4
  float v11; // xmm10_4
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm15_4
  float v15; // xmm12_4
  float v16; // xmm8_4
  float v17; // xmm11_4
  float v18; // xmm9_4
  float v19; // xmm14_4
  float v20; // xmm10_4
  float v21; // xmm1_4
  float v22; // xmm7_4
  float v23; // xmm2_4
  float v24; // xmm5_4
  float v25; // xmm11_4
  float v26; // xmm8_4
  float v27; // xmm3_4
  float v28; // xmm15_4
  float v29; // xmm0_4
  float v30; // xmm14_4
  float v31; // xmm7_4
  float v32; // xmm10_4
  float v33; // xmm2_4
  float v34; // xmm13_4
  float v35; // xmm12_4
  float v36; // xmm13_4
  float v37; // xmm9_4
  float v38; // xmm1_4
  float v39; // xmm7_4
  float m_flRadius; // xmm0_4
  vec_t v41; // xmm1_4
  float v42; // xmm9_4
  float v43; // xmm1_4
  int (**vptr_ISceneViewDebugOverlays)(...); // rax
  _BYTE v46[16]; // [rsp+10h] [rbp-30h] BYREF
  Vector vCenter1; // [rsp+20h] [rbp-20h] BYREF
  Vector vCenter2; // [rsp+30h] [rbp-10h] BYREF

  y = xform->m_orientation.y;
  x = xform->m_orientation.x;
  z = xform->m_orientation.z;
  v11 = xform->m_orientation.w + xform->m_orientation.w;
  v12 = xform->m_vPosition.y;
  v13 = xform->m_vPosition.z;
  v14 = z * (y + y);
  v15 = (y + y) * y;
  v16 = v11 * y;
  v17 = (x + x) * y;
  v18 = (x + x) * z;
  v19 = x * v11;
  v20 = v11 * z;
  v21 = (z + z) * z;
  v22 = v17;
  v23 = 1.0 - (x * (x + x));
  v24 = v18 - v16;
  v25 = v17 - v20;
  v26 = v16 + v18;
  v27 = v14 + v19;
  v28 = v14 - v19;
  v29 = v23 - v21;
  v30 = xform->m_vPosition.x;
  v31 = v22 + v20;
  v32 = capsule->m_vCenter[1].y;
  v33 = v23 - v15;
  v34 = 1.0 - v15;
  v35 = capsule->m_vCenter[1].x;
  v36 = v34 - v21;
  v37 = capsule->m_vCenter[0].y * v29;
  vCenter1.x = (((capsule->m_vCenter[0].x * v36) + xform->m_vPosition.x) + (capsule->m_vCenter[0].y * v25))
             + (capsule->m_vCenter[0].z * v26);
  v38 = capsule->m_vCenter[0].x * v31;
  v39 = ((v31 * v35) + v12) + (v29 * v32);
  m_flRadius = capsule->m_flRadius;
  v41 = ((v38 + v12) + v37) + (capsule->m_vCenter[0].z * v28);
  v42 = capsule->m_vCenter[0].y * v27;
  vCenter1.y = v41;
  vCenter1.z = (((capsule->m_vCenter[0].x * v24) + v13) + v42) + (capsule->m_vCenter[0].z * v33);
  v43 = capsule->m_vCenter[1].z;
  vCenter2.x = (((v36 * v35) + v30) + (v25 * v32)) + (v26 * v43);
  vCenter2.y = v39 + (v28 * v43);
  vCenter2.z = (((v24 * v35) + v13) + (v27 * v32)) + (v33 * v43);
  if ( debugoverlay != 0 )
  {
    vptr_ISceneViewDebugOverlays = debugoverlay->_vptr_ISceneViewDebugOverlays;
    v46[0] = r;
    v46[1] = g;
    v46[2] = b;
    v46[3] = a;
    vptr_ISceneViewDebugOverlays[20](debugoverlay, &vCenter1, &vCenter2, v46, bNoDepthTest, m_flRadius, flDuration);
  }
}


// NDebugOverlay::Cross  (line 874, @0x00000000021a6160, libserver.so)  // inlines: GetLocalPlayer, Line, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: UTIL_GetListenServerHost, CBasePlayer::EyeVectors
// callers: rangefinder
void __fastcall NDebugOverlay::Cross(
        const Vector *const position,
        float radius,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        bool bNoDepthTest,
        float flDuration)
{
  CBasePlayer *ListenServerHost; // rax
  float v13; // xmm2_4
  float x; // xmm0_4
  float y; // xmm1_4
  float z; // xmm3_4
  ISceneViewDebugOverlays *v17; // rdi
  float v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm2_4
  Vector clientForward; // [rsp+10h] [rbp-80h] BYREF
  Vector clientRight; // [rsp+20h] [rbp-70h] BYREF
  Vector clientUp; // [rsp+30h] [rbp-60h] BYREF
  float v26; // [rsp+40h] [rbp-50h] BYREF
  float v27; // [rsp+44h] [rbp-4Ch]
  float v28; // [rsp+48h] [rbp-48h]
  float v29; // [rsp+50h] [rbp-40h] BYREF
  float v30; // [rsp+54h] [rbp-3Ch]
  float v31; // [rsp+58h] [rbp-38h]

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 )
  {
    CBasePlayer::EyeVectors(ListenServerHost, &clientForward, &clientRight, &clientUp);
    v13 = radius;
    x = position->x;
    y = position->y;
    z = position->z;
    v29 = (clientRight.x * radius) + position->x;
    v30 = (clientRight.y * radius) + y;
    v31 = (clientRight.z * radius) + z;
    v26 = x - (clientRight.x * radius);
    v27 = y - (clientRight.y * radius);
    v28 = z - (clientRight.z * radius);
    if ( debugoverlay != 0 )
    {
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, &v26, &v29, r, g, b, flDuration, bNoDepthTest);
      x = position->x;
      y = position->y;
      z = position->z;
      v17 = debugoverlay;
      v13 = radius;
    }
    else
    {
      v17 = 0;
    }
    v18 = clientUp.x * v13;
    v19 = clientUp.y * v13;
    v20 = v13 * clientUp.z;
    v29 = v18 + x;
    v26 = x - v18;
    v30 = v19 + y;
    v27 = y - v19;
    v31 = v20 + z;
    v28 = z - v20;
    if ( v17 != 0 )
      (*(v17->_vptr_ISceneViewDebugOverlays + 50))(v17, &v26, &v29, r, g, b, flDuration, bNoDepthTest);
  }
}


// NDebugOverlay::Hull  (line 893, @0x00000000021a6610, libserver.so)  // inlines: GetEdge, GetPtr, GetRawPtr, GetVertex, ResolveOffset, TransformPoint, TransformVector, operator[]
// callers: NDebugOverlay::Sweep
void __fastcall NDebugOverlay::Hull(
        const CTransform *const xform,
        const RnHull_t *const hull,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        int a,
        float flDuration,
        bool bNoDepthTest)
{
  ISceneViewDebugOverlays *v9; // rdi
  signed int v10; // r13d
  __int64 v12; // r12
  char *v14; // rdx
  char *v15; // rcx
  __int64 v16; // rsi
  char *v17; // rsi
  __int64 v18; // rdx
  char *v19; // r8
  __int64 v20; // rcx
  float x; // xmm5_4
  float y; // xmm1_4
  float *v23; // rcx
  float z; // xmm0_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm12_4
  float v28; // xmm9_4
  float v29; // xmm14_4
  float v30; // xmm15_4
  float v31; // xmm2_4
  float v32; // xmm13_4
  __int64 v33; // rcx
  float v34; // xmm11_4
  char *v35; // rsi
  float v36; // xmm9_4
  float v37; // xmm10_4
  float v38; // xmm5_4
  float v39; // xmm1_4
  float v40; // xmm12_4
  float v41; // xmm7_4
  float v42; // xmm8_4
  float v43; // xmm6_4
  float v44; // xmm15_4
  float v45; // xmm14_4
  float v46; // xmm9_4
  float v47; // xmm7_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  float v50; // xmm13_4
  float *v51; // rdx
  float v52; // xmm3_4
  float v53; // xmm2_4
  float v54; // xmm1_4
  float v55; // xmm8_4
  __int64 m_nOffset; // rdx
  CResourceArray<RnHalfEdge_t> *p_m_Edges; // [rsp+18h] [rbp-98h]
  double v58; // [rsp+38h] [rbp-78h]
  CResourceArray<Vector> *p_m_Vertices; // [rsp+48h] [rbp-68h]
  float v63; // [rsp+54h] [rbp-5Ch]
  float v64; // [rsp+58h] [rbp-58h]
  float v65; // [rsp+5Ch] [rbp-54h]
  Vector v1; // [rsp+60h] [rbp-50h] BYREF
  Vector v2; // [rsp+70h] [rbp-40h] BYREF

  v9 = debugoverlay;
  if ( debugoverlay != 0 && hull->m_Edges.m_nCount > 0 )
  {
    p_m_Edges = &hull->m_Edges;
    v10 = 0;
    p_m_Vertices = &hull->m_Vertices;
    v12 = 0;
    v58 = flDuration;
    while ( 1 )
    {
      m_nOffset = hull->m_Edges.m_nOffset;
      if ( m_nOffset != 0 )
      {
        v14 = p_m_Edges + m_nOffset;
        v15 = &v14[v12];
        v16 = v14[v12 + 1];
      }
      else
      {
        v15 = v12;
        v16 = *(v12 + 1);
        v14 = 0;
      }
      v17 = &v14[4 * v16];
      v18 = hull->m_Vertices.m_nOffset;
      v19 = 0;
      v20 = v15[2];
      if ( v18 != 0 )
        v19 = p_m_Vertices + v18;
      x = xform->m_orientation.x;
      y = xform->m_orientation.y;
      v23 = &v19[12 * v20];
      z = xform->m_orientation.z;
      v25 = *v23;
      v26 = v23[1];
      v27 = (x + x) * y;
      v28 = xform->m_orientation.w + xform->m_orientation.w;
      v65 = xform->m_vPosition.z;
      v29 = x * v28;
      v30 = z * (y + y);
      v31 = v23[2];
      v32 = (y + y) * y;
      v33 = v17[2];
      v34 = v28 * z;
      v35 = 0;
      v36 = v28 * y;
      v37 = (x + x) * z;
      v38 = 1.0 - (x * (x + x));
      v39 = v27 + v34;
      v40 = v27 - v34;
      v63 = v38 - v32;
      v41 = v30 + v29;
      v42 = v39;
      v43 = v37 - v36;
      v44 = v30 - v29;
      v45 = xform->m_vPosition.x;
      v64 = v41;
      v46 = v36 + v37;
      v47 = xform->m_vPosition.y;
      v48 = (z + z) * z;
      v49 = v38 - v48;
      v50 = (1.0 - v32) - v48;
      v1.x = (((v25 * v50) + xform->m_vPosition.x) + (v26 * v40)) + (v31 * v46);
      v1.y = (((v25 * v42) + v47) + (v26 * (v38 - v48))) + (v31 * v44);
      v1.z = (((v25 * v43) + v65) + (v26 * v64)) + (v31 * v63);
      if ( v18 != 0 )
        v35 = p_m_Vertices + v18;
      v10 += 2;
      v51 = &v35[12 * v33];
      v12 += 8;
      v52 = *v51;
      v53 = v51[1];
      v54 = v51[2];
      v55 = ((v42 * *v51) + v47) + (v49 * v53);
      v2.x = (((v50 * *v51) + v45) + (v40 * v53)) + (v46 * v54);
      v2.y = v55 + (v44 * v54);
      v2.z = (((v43 * v52) + v65) + (v53 * v64)) + (v63 * v54);
      (*(v9->_vptr_ISceneViewDebugOverlays + 52))(v9, &v1, &v2, r, g, b, v58, a, bNoDepthTest);
      if ( v10 >= hull->m_Edges.m_nCount )
        break;
      v9 = debugoverlay;
    }
  }
}


// NDebugOverlay::Sweep  (line 915, @0x00000000021a6970, libserver.so)  // inlines: CTransform, VectorAligned
// calls: TransformLerp, NDebugOverlay::Sphere
void __fastcall NDebugOverlay::Sweep(
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnSphere_t *const sphere,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        float flDuration,
        int a,
        bool bNoDepthTest,
        int nSteps)
{
  int i; // r12d
  float v13; // xmm0_4
  CTransform xform; // [rsp+30h] [rbp-50h] BYREF

  if ( nSteps >= 0 )
  {
    for ( i = 0; i <= nSteps; ++i )
    {
      v13 = i;
      xform.m_vPosition.w = 0.0;
      TransformLerp(xform1, xform2, v13 / nSteps, &xform);
      NDebugOverlay::Sphere(&xform, sphere, r, g, b, a, flDuration, bNoDepthTest);
    }
  }
}


// NDebugOverlay::Sweep  (line 931, @0x00000000021a6a20, libserver.so)  // inlines: CTransform, VectorAligned
// calls: TransformLerp, NDebugOverlay::Capsule
void __fastcall NDebugOverlay::Sweep(
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnCapsule_t *const capsule,
        char r,
        char g,
        char b,
        float flDuration,
        char a,
        bool bNoDepthTest,
        int nSteps)
{
  int i; // r12d
  float v13; // xmm0_4
  CTransform xform; // [rsp+30h] [rbp-50h] BYREF

  if ( nSteps >= 0 )
  {
    for ( i = 0; i <= nSteps; ++i )
    {
      v13 = i;
      xform.m_vPosition.w = 0.0;
      TransformLerp(xform1, xform2, v13 / nSteps, &xform);
      NDebugOverlay::Capsule(&xform, capsule, r, g, b, a, flDuration, bNoDepthTest);
    }
  }
}


// NDebugOverlay::Sweep  (line 947, @0x00000000021a6ad0, libserver.so)  // inlines: CTransform, VectorAligned
// calls: TransformLerp, NDebugOverlay::Hull
void __fastcall NDebugOverlay::Sweep(
        const CTransform *const xform1,
        const CTransform *const xform2,
        const RnHull_t *const hull,
        unsigned int r,
        unsigned int g,
        unsigned int b,
        float flDuration,
        int a,
        bool bNoDepthTest,
        int nSteps)
{
  int i; // r12d
  float v13; // xmm0_4
  CTransform xform; // [rsp+30h] [rbp-50h] BYREF

  if ( nSteps >= 0 )
  {
    for ( i = 0; i <= nSteps; ++i )
    {
      v13 = i;
      xform.m_vPosition.w = 0.0;
      TransformLerp(xform1, xform2, v13 / nSteps, &xform);
      NDebugOverlay::Hull(&xform, hull, r, g, b, a, flDuration, bNoDepthTest);
    }
  }
}


// NDebugOverlay::Trace  (line 962, @0x00000000021a6b80, libserver.so)  // inlines: DidHit, Line, VectorAdd, operator+
// callers: IKTraceRay
void __fastcall NDebugOverlay::Trace(
        const Ray_t *const ray,
        const CGameTrace *const traceResult,
        float a3,
        float flDuration)
{
  float v4; // xmm4_4
  Vector *p_endpos; // r14
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v11[12]; // [rsp+10h] [rbp-30h] BYREF

  v4 = a3;
  p_endpos = &traceResult->endpos;
  if ( debugoverlay != 0 )
  {
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(
      debugoverlay,
      ray,
      &traceResult->endpos,
      0,
      255,
      0,
      a3,
      flDuration,
      0);
    v4 = a3;
  }
  if ( traceResult->fraction < 1.0 || traceResult->startsolid )
  {
    v8 = ray->m_Start.z + ray->m_Delta.z;
    v9 = ray->m_Start.x + ray->m_Delta.x;
    v11[1] = ray->m_Start.y + ray->m_Delta.y;
    v11[2] = v8;
    v11[0] = v9;
    if ( debugoverlay != 0 )
      (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 50))(debugoverlay, p_endpos, v11, 255, 0, 0, v4, 1);
  }
}


