
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// HandInfo_t::Reset  (line 39, @0x000000000224a860, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator!=, operator=, operator=<QAngle>, operator=<Quaternion>, operator=<Vector>, operator=<int>, operator==
// callers: CSource2GameClients::ProcessUsercmds, CBaseGameStats_Driver::CBaseGameStats_Driver, CPlayerInfo::SetLastUserCommand, CBasePlayer::RunNullCommand, CPlayerInfo::RunPlayerMove, CBasePlayer::CBasePlayer, CBasePlayer::ProcessUsercmds, CBasePlayer::AdjustPlayerTimeBase
void __fastcall HandInfo_t::Reset(HandInfo_t *const this)
{
  vec_t x; // xmm0_4
  float y; // xmm1_4
  float z; // xmm2_4
  vec_t v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  vec_t v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  vec_t v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  vec_t v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  vec_t v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float w; // xmm3_4
  CEntityInstance *v21; // rdi
  CEntityInstance *m_pObj; // rdi
  CEntityInstance *v23; // rdi
  CEntityInstance *v24; // rdi
  CEntityInstance *v25; // rdi
  CEntityInstance *v26; // rdi
  CEntityInstance *v27; // rdi
  CEntityInstance *v28; // rdi
  CEntityInstance *v29; // rdi
  CEntityInstance *v30; // rdi
  vec_t v31; // [rsp+0h] [rbp-30h]
  vec_t v32; // [rsp+4h] [rbp-2Ch]
  vec_t v33; // [rsp+4h] [rbp-2Ch]
  vec_t v34; // [rsp+4h] [rbp-2Ch]
  vec_t v35; // [rsp+4h] [rbp-2Ch]
  vec_t v36; // [rsp+4h] [rbp-2Ch]
  vec_t v37; // [rsp+8h] [rbp-28h]
  vec_t v38; // [rsp+8h] [rbp-28h]
  vec_t v39; // [rsp+8h] [rbp-28h]
  vec_t v40; // [rsp+8h] [rbp-28h]
  vec_t v41; // [rsp+8h] [rbp-28h]
  vec_t v42; // [rsp+Ch] [rbp-24h]
  vec_t v43; // [rsp+Ch] [rbp-24h]
  vec_t v44; // [rsp+Ch] [rbp-24h]
  vec_t v45; // [rsp+Ch] [rbp-24h]
  vec_t v46; // [rsp+Ch] [rbp-24h]
  QAngle v47; // 0:^4.12

  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  if ( vec3_origin.x != this->m_vPosition.m_Value.x
    || y != this->m_vPosition.m_Value.y
    || z != this->m_vPosition.m_Value.z )
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (m_pObj->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      v32 = vec3_origin.x;
      v37 = vec3_origin.z;
      v42 = vec3_origin.y;
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 12, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      y = v42;
      z = v37;
      x = v32;
    }
    this->m_vPosition.m_Value.x = x;
    this->m_vPosition.m_Value.y = y;
    this->m_vPosition.m_Value.z = z;
  }
  v5 = vec3_angle.x;
  v6 = vec3_angle.y;
  v7 = vec3_angle.z;
  if ( vec3_angle.x != this->m_Angles.m_Value.x || v6 != this->m_Angles.m_Value.y || v7 != this->m_Angles.m_Value.z )
  {
    v30 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v30->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      v35 = vec3_angle.x;
      v40 = vec3_angle.z;
      v45 = vec3_angle.y;
      (*(v30->_vptr_IHandleEntity + 22))(v30, 24, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v6 = v45;
      v7 = v40;
      v5 = v35;
    }
    this->m_Angles.m_Value.x = v5;
    this->m_Angles.m_Value.y = v6;
    this->m_Angles.m_Value.z = v7;
  }
  v8 = vec3_origin.x;
  v9 = vec3_origin.y;
  v10 = vec3_origin.z;
  if ( vec3_origin.x != this->m_vFilteredPosition.m_Value.x
    || v9 != this->m_vFilteredPosition.m_Value.y
    || v10 != this->m_vFilteredPosition.m_Value.z )
  {
    v29 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v29->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      v34 = vec3_origin.x;
      v39 = vec3_origin.z;
      v44 = vec3_origin.y;
      (*(v29->_vptr_IHandleEntity + 22))(v29, 36, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v9 = v44;
      v10 = v39;
      v8 = v34;
    }
    this->m_vFilteredPosition.m_Value.x = v8;
    this->m_vFilteredPosition.m_Value.y = v9;
    this->m_vFilteredPosition.m_Value.z = v10;
  }
  v11 = vec3_angle.x;
  v12 = vec3_angle.y;
  v13 = vec3_angle.z;
  if ( vec3_angle.x != this->m_FilteredAngles.m_Value.x
    || v12 != this->m_FilteredAngles.m_Value.y
    || v13 != this->m_FilteredAngles.m_Value.z )
  {
    v28 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v28->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      v47 = vec3_angle;
      (*(v28->_vptr_IHandleEntity + 22))(v28, 48, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v13 = v47.z;
      v12 = v47.y;
      v11 = v47.x;
    }
    this->m_FilteredAngles.m_Value.x = v11;
    this->m_FilteredAngles.m_Value.y = v12;
    this->m_FilteredAngles.m_Value.z = v13;
  }
  v14 = vec3_origin.x;
  v15 = vec3_origin.y;
  v16 = vec3_origin.z;
  if ( vec3_origin.x != this->m_vFilteredVelocity.m_Value.x
    || v15 != this->m_vFilteredVelocity.m_Value.y
    || v16 != this->m_vFilteredVelocity.m_Value.z )
  {
    v27 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v27->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      v33 = vec3_origin.y;
      v38 = vec3_origin.x;
      v43 = vec3_origin.z;
      (*(v27->_vptr_IHandleEntity + 22))(v27, 60, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v16 = v43;
      v14 = v38;
      v15 = v33;
    }
    this->m_vFilteredVelocity.m_Value.x = v14;
    this->m_vFilteredVelocity.m_Value.y = v15;
    this->m_vFilteredVelocity.m_Value.z = v16;
  }
  v17 = quat_identity.x;
  v18 = quat_identity.y;
  v19 = quat_identity.z;
  w = quat_identity.w;
  if ( quat_identity.x != this->m_FilteredAngularVel.m_Value.x
    || v18 != this->m_FilteredAngularVel.m_Value.y
    || v19 != this->m_FilteredAngularVel.m_Value.z
    || w != this->m_FilteredAngularVel.m_Value.w )
  {
    v21 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v21->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      v31 = quat_identity.x;
      v36 = quat_identity.w;
      v41 = quat_identity.y;
      v46 = quat_identity.z;
      (*(v21->_vptr_IHandleEntity + 22))(v21, 72, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v19 = v46;
      v18 = v41;
      w = v36;
      v17 = v31;
    }
    this->m_FilteredAngularVel.m_Value.x = v17;
    this->m_FilteredAngularVel.m_Value.y = v18;
    this->m_FilteredAngularVel.m_Value.z = v19;
    this->m_FilteredAngularVel.m_Value.w = w;
  }
  if ( this->m_flTriggerAnalogValue.m_Value != 0.0 )
  {
    v26 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v26->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v26->_vptr_IHandleEntity + 22))(v26, 88, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    }
    this->m_flTriggerAnalogValue.m_Value = 0.0;
  }
  if ( this->m_flGripAnalogValue.m_Value != 0.0 )
  {
    v25 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v25->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v25->_vptr_IHandleEntity + 22))(v25, 92, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    }
    this->m_flGripAnalogValue.m_Value = 0.0;
  }
  if ( this->m_flTrackpadOrJoystickAnalogValueX.m_Value != 0.0 )
  {
    v24 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v24->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v24->_vptr_IHandleEntity + 22))(v24, 96, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    }
    this->m_flTrackpadOrJoystickAnalogValueX.m_Value = 0.0;
  }
  if ( this->m_flTrackpadOrJoystickAnalogValueY.m_Value != 0.0 )
  {
    v23 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v23->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v23->_vptr_IHandleEntity + 22))(v23, 100, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    }
    this->m_flTrackpadOrJoystickAnalogValueY.m_Value = 0.0;
  }
}


// HandInfo_t::operator=  (line 52, @0x00000000020465c0, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator!=, operator=, operator==
// callers: CSchemaClassBinding<HandInfo_t>::AllocateAndCopyConstruct, CSchemaClassBinding<HandInfo_t>::Copy
HandInfo_t *__fastcall HandInfo_t::operator=(HandInfo_t *const this, const HandInfo_t *const src)
{
  float x; // xmm0_4
  float v5; // xmm0_4
  bool v6; // zf
  float v7; // xmm0_4
  bool v8; // zf
  float v9; // xmm0_4
  bool v10; // zf
  float v11; // xmm0_4
  bool v12; // zf
  float v13; // xmm0_4
  CEntityInstance *v14; // rdi
  float m_Value; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  CEntityInstance *m_pObj; // rdi
  CEntityInstance *v21; // rdi
  CEntityInstance *v22; // rdi
  CEntityInstance *v23; // rdi
  CEntityInstance *v24; // rdi
  CEntityInstance *v25; // rdi
  CEntityInstance *v26; // rdi
  CEntityInstance *v27; // rdi
  CEntityInstance *v28; // rdi

  x = src->m_vPosition.m_Value.x;
  if ( x == this->m_vPosition.m_Value.x
    && src->m_vPosition.m_Value.y == this->m_vPosition.m_Value.y
    && src->m_vPosition.m_Value.z == this->m_vPosition.m_Value.z )
  {
    v5 = src->m_Angles.m_Value.x;
    v6 = v5 == this->m_Angles.m_Value.x;
  }
  else
  {
    m_pObj = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (m_pObj->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 12, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      x = src->m_vPosition.m_Value.x;
    }
    this->m_vPosition.m_Value.x = x;
    this->m_vPosition.m_Value.y = src->m_vPosition.m_Value.y;
    this->m_vPosition.m_Value.z = src->m_vPosition.m_Value.z;
    v5 = src->m_Angles.m_Value.x;
    v6 = v5 == this->m_Angles.m_Value.x;
  }
  if ( v6 && src->m_Angles.m_Value.y == this->m_Angles.m_Value.y && src->m_Angles.m_Value.z == this->m_Angles.m_Value.z )
  {
    v7 = src->m_vFilteredPosition.m_Value.x;
    v8 = v7 == this->m_vFilteredPosition.m_Value.x;
  }
  else
  {
    v21 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v21->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v21->_vptr_IHandleEntity + 22))(v21, 24, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v5 = src->m_Angles.m_Value.x;
    }
    this->m_Angles.m_Value.x = v5;
    this->m_Angles.m_Value.y = src->m_Angles.m_Value.y;
    this->m_Angles.m_Value.z = src->m_Angles.m_Value.z;
    v7 = src->m_vFilteredPosition.m_Value.x;
    v8 = v7 == this->m_vFilteredPosition.m_Value.x;
  }
  if ( v8
    && src->m_vFilteredPosition.m_Value.y == this->m_vFilteredPosition.m_Value.y
    && src->m_vFilteredPosition.m_Value.z == this->m_vFilteredPosition.m_Value.z )
  {
    v9 = src->m_FilteredAngles.m_Value.x;
    v10 = v9 == this->m_FilteredAngles.m_Value.x;
  }
  else
  {
    v22 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v22->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v22->_vptr_IHandleEntity + 22))(v22, 36, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v7 = src->m_vFilteredPosition.m_Value.x;
    }
    this->m_vFilteredPosition.m_Value.x = v7;
    this->m_vFilteredPosition.m_Value.y = src->m_vFilteredPosition.m_Value.y;
    this->m_vFilteredPosition.m_Value.z = src->m_vFilteredPosition.m_Value.z;
    v9 = src->m_FilteredAngles.m_Value.x;
    v10 = v9 == this->m_FilteredAngles.m_Value.x;
  }
  if ( v10
    && src->m_FilteredAngles.m_Value.y == this->m_FilteredAngles.m_Value.y
    && src->m_FilteredAngles.m_Value.z == this->m_FilteredAngles.m_Value.z )
  {
    v11 = src->m_vFilteredVelocity.m_Value.x;
    v12 = v11 == this->m_vFilteredVelocity.m_Value.x;
  }
  else
  {
    v23 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v23->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v23->_vptr_IHandleEntity + 22))(v23, 48, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v9 = src->m_FilteredAngles.m_Value.x;
    }
    this->m_FilteredAngles.m_Value.x = v9;
    this->m_FilteredAngles.m_Value.y = src->m_FilteredAngles.m_Value.y;
    this->m_FilteredAngles.m_Value.z = src->m_FilteredAngles.m_Value.z;
    v11 = src->m_vFilteredVelocity.m_Value.x;
    v12 = v11 == this->m_vFilteredVelocity.m_Value.x;
  }
  if ( !v12
    || src->m_vFilteredVelocity.m_Value.y != this->m_vFilteredVelocity.m_Value.y
    || src->m_vFilteredVelocity.m_Value.z != this->m_vFilteredVelocity.m_Value.z )
  {
    v24 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v24->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v24->_vptr_IHandleEntity + 22))(v24, 60, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v11 = src->m_vFilteredVelocity.m_Value.x;
    }
    this->m_vFilteredVelocity.m_Value.x = v11;
    this->m_vFilteredVelocity.m_Value.y = src->m_vFilteredVelocity.m_Value.y;
    this->m_vFilteredVelocity.m_Value.z = src->m_vFilteredVelocity.m_Value.z;
  }
  v13 = src->m_FilteredAngularVel.m_Value.x;
  if ( v13 != this->m_FilteredAngularVel.m_Value.x
    || this->m_FilteredAngularVel.m_Value.y != src->m_FilteredAngularVel.m_Value.y
    || this->m_FilteredAngularVel.m_Value.z != src->m_FilteredAngularVel.m_Value.z
    || this->m_FilteredAngularVel.m_Value.w != src->m_FilteredAngularVel.m_Value.w )
  {
    v14 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v14->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v14->_vptr_IHandleEntity + 22))(v14, 72, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v13 = src->m_FilteredAngularVel.m_Value.x;
    }
    this->m_FilteredAngularVel.m_Value.x = v13;
    this->m_FilteredAngularVel.m_Value.y = src->m_FilteredAngularVel.m_Value.y;
    this->m_FilteredAngularVel.m_Value.z = src->m_FilteredAngularVel.m_Value.z;
    this->m_FilteredAngularVel.m_Value.w = src->m_FilteredAngularVel.m_Value.w;
  }
  m_Value = src->m_flTriggerAnalogValue.m_Value;
  if ( m_Value != this->m_flTriggerAnalogValue.m_Value )
  {
    v28 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v28->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v28->_vptr_IHandleEntity + 22))(v28, 88, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      m_Value = src->m_flTriggerAnalogValue.m_Value;
    }
    this->m_flTriggerAnalogValue.m_Value = m_Value;
  }
  v16 = src->m_flGripAnalogValue.m_Value;
  if ( v16 != this->m_flGripAnalogValue.m_Value )
  {
    v27 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v27->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v27->_vptr_IHandleEntity + 22))(v27, 92, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v16 = src->m_flGripAnalogValue.m_Value;
    }
    this->m_flGripAnalogValue.m_Value = v16;
  }
  v17 = src->m_flTrackpadOrJoystickAnalogValueX.m_Value;
  if ( v17 != this->m_flTrackpadOrJoystickAnalogValueX.m_Value )
  {
    v26 = this->__m_pChainEntity.m_pObj;
    if ( this->__m_pChainEntity.m_pObj != 0
      && (v26->m_pEntity->m_flags & 0x400) == 0
      && this->__m_PathIndex.m_Value != -1 )
    {
      (*(v26->_vptr_IHandleEntity + 22))(v26, 96, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
      v17 = src->m_flTrackpadOrJoystickAnalogValueX.m_Value;
    }
    this->m_flTrackpadOrJoystickAnalogValueX.m_Value = v17;
  }
  v18 = src->m_flTrackpadOrJoystickAnalogValueY.m_Value;
  if ( v18 == this->m_flTrackpadOrJoystickAnalogValueY.m_Value )
    return this;
  v25 = this->__m_pChainEntity.m_pObj;
  if ( this->__m_pChainEntity.m_pObj != 0 && (v25->m_pEntity->m_flags & 0x400) == 0 && this->__m_PathIndex.m_Value != -1 )
  {
    (*(v25->_vptr_IHandleEntity + 22))(v25, 100, 0xFFFFFFFFLL, this->__m_PathIndex.m_Value);
    v18 = src->m_flTrackpadOrJoystickAnalogValueY.m_Value;
  }
  this->m_flTrackpadOrJoystickAnalogValueY.m_Value = v18;
  return this;
}


// CPlayerState::Schema_DynamicBinding  (line 100, @0x0000000002045130, libserver.so)
// globals: CPlayerState::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPlayerState::Schema_DynamicBinding(const CPlayerState *const this)
{
  return CPlayerState::s_pSchemaBinding;
}


// CPlayerState::~CPlayerState  (line 107, @0x0000000002045140, libserver.so)
void __fastcall CPlayerState::~CPlayerState(CPlayerState *const this)
{
  this->_vptr_CPlayerState = &off_3FEA5B0;
}


// CPlayerState::~CPlayerState  (line 107, @0x0000000002045570, libserver.so)  // inlines: ~CPlayerState
// calls: operator delete
void __fastcall CPlayerState::~CPlayerState(CPlayerState *const this)
{
  this->_vptr_CPlayerState = &off_3FEA5B0;
  operator delete(this);
}


