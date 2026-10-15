
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetDeathPoseActivity  (line 36, @0x00000000021a1bb0, libserver.so)  // inlines: DotProduct, operator-
// calls: VectorNormalize
// callers: SelectDeathPoseActivityAndFrame
Activity __fastcall GetDeathPoseActivity(CBaseAnimating *entity, const CTakeDamageInfo *const info, bool ducked)
{
  float x; // xmm3_4
  vec_t v6; // xmm1_4
  char v7; // al
  float v8; // xmm0_4
  float v9; // xmm1_4
  Vector vForward; // [rsp+0h] [rbp-48h] BYREF
  Vector vRight; // [rsp+10h] [rbp-38h] BYREF
  Vector vDir; // [rsp+20h] [rbp-28h] BYREF

  if ( entity == 0 )
    return -1;
  (*(entity->_vptr_IHandleEntity + 61))(entity, &vForward, &vRight, 0);
  x = info->m_vecDamageForce.x;
  v6 = -info->m_vecDamageForce.y;
  vDir.z = -info->m_vecDamageForce.z;
  vDir.y = v6;
  vDir.x = -x;
  VectorNormalize(&vDir);
  v7 = 0;
  v8 = ((vForward.x * vDir.x) + (vForward.y * vDir.y)) + (vForward.z * vDir.z);
  v9 = ((vDir.x * vRight.x) + (vDir.y * vRight.y)) + (vDir.z * vRight.z);
  if ( v8 < 0.0 )
  {
    v8 = -v8;
    v7 = 1;
  }
  if ( v9 < 0.0 )
  {
    if ( -v9 > v8 )
      return !ducked ? 405 : 409;
  }
  else if ( v9 > v8 )
  {
    return !ducked ? 403 : 407;
  }
  if ( v7 != 0 )
    return !ducked ? 404 : 408;
  else
    return !ducked ? 402 : 406;
}


// SelectDeathPoseActivityAndFrame  (line 95, @0x00000000021a1d10, libserver.so)
// calls: CBaseAnimating::GetModelPtr, GetDeathPoseActivity
// globals: jpt_21A1D78
void __fastcall SelectDeathPoseActivityAndFrame(
        CBaseAnimating *entity,
        const CTakeDamageInfo *const info,
        int hitgroup,
        Activity *const activity,
        int *const frame,
        bool ducked)
{
  *activity = -1;
  *frame = 0;
  if ( CBaseAnimating::GetModelPtr(entity) != 0 )
  {
    *activity = GetDeathPoseActivity(entity, info, ducked);
    switch ( hitgroup )
    {
      case 2:
      case 3:
        *frame = 2;
        break;
      case 4:
        *frame = 3;
        break;
      case 5:
        *frame = 4;
        break;
      case 6:
        *frame = 5;
        break;
      case 7:
        *frame = 6;
        break;
      default:
        *frame = 1;
        break;
    }
  }
}


