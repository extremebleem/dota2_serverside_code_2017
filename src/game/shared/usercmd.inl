
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUserCmd::~CUserCmd  (line 39, @0x0000000002244ed0, libserver.so)
void __fastcall CUserCmd::~CUserCmd(CUserCmd *const this)
{
  this->_vptr_CUserCmd = off_403F950;  // vptr: CUserCmd
}


// CUserCmd::~CUserCmd  (line 39, @0x0000000002246730, libserver.so)  // inlines: ~CUserCmd
// calls: operator delete
void __fastcall CUserCmd::~CUserCmd(CUserCmd *const this)
{
  this->_vptr_CUserCmd = off_403F950;  // vptr: CUserCmd
  operator delete(this);
}


// CUserCmd::operator=  (line 112, @0x000000000230c080, libserver.so)  // inlines: Get, NetworkStateChanged, Set, operator CEntityInstance*, operator!=, operator=, operator==
// callers: CPlayerInfo::SetLastUserCommand, CBasePlayer::RunNullCommand, CPlayerInfo::RunPlayerMove, CUtlLinkedList<CUserCmd, int, false, int, CUtlMemory<UtlLinkedListElem_t<CUserCmd, int>, int> >::InsertBefore, CBasePlayer::ProcessUsercmds, CBasePlayer::AdjustPlayerTimeBase, CBasePlayer::PhysicsSimulate
CUserCmd *__fastcall CUserCmd::operator=(CUserCmd *const this, const CUserCmd *const src)
{
  CUserCmd *v2; // r13
  CUserCmd *v4; // r14
  __int64 v5; // r12
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *p_m_Angles; // r11
  __int64 v7; // r15
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *p_m_vFilteredPosition; // r10
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *p_m_FilteredAngles; // r9
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *p_m_vFilteredVelocity; // r8
  signed __int64 v11; // r13
  float v12; // xmm0_4
  signed __int64 v13; // r13
  float v14; // xmm0_4
  signed __int64 v15; // r13
  float v16; // xmm0_4
  signed __int64 v17; // r13
  float v18; // xmm0_4
  signed __int64 v19; // r13
  float v20; // xmm0_4
  signed __int64 v21; // rax
  signed __int64 v22; // r13
  float v23; // xmm0_4
  CEntityInstance *v24; // rdi
  signed __int64 v25; // rax
  float m_Value; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  CEntityInstance *v31; // rdi
  CEntityInstance *v32; // rdi
  CEntityInstance *v33; // rdi
  CEntityInstance *v34; // rdi
  CEntityInstance *m_pObj; // rdi
  CEntityInstance *v36; // rdi
  CEntityInstance *v37; // rdi
  CEntityInstance *v38; // rdi
  CEntityInstance *v39; // rdi
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v40; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v41; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v42; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v43; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v44; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v45; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v46; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v47; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v48; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v49; // [rsp+8h] [rbp-128h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v50; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v51; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v52; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v53; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v54; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v55; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v56; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v57; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v58; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v59; // [rsp+10h] [rbp-120h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v60; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v61; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v62; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v63; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v64; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v65; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v66; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v67; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v68; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v69; // [rsp+18h] [rbp-118h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v70; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v71; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v72; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v73; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v74; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v75; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v76; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v77; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v78; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v79; // [rsp+20h] [rbp-110h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredVelocity> *v80; // [rsp+28h] [rbp-108h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_FilteredAngles> *v81; // [rsp+30h] [rbp-100h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vFilteredPosition> *v82; // [rsp+38h] [rbp-F8h]
  CNetworkVarBase<QAngle,HandInfo_t::NetworkVar_m_Angles> *v83; // [rsp+40h] [rbp-F0h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *v84; // [rsp+48h] [rbp-E8h]
  __int16 *v85; // [rsp+50h] [rbp-E0h]
  CNetworkVarBase<Vector,HandInfo_t::NetworkVar_m_vPosition> *p_m_vPosition; // [rsp+58h] [rbp-D8h]
  ChangeAccessorFieldPathIndex_t *p_m_PathIndex; // [rsp+60h] [rbp-D0h]
  int *p_random_seed; // [rsp+68h] [rbp-C8h]
  __int16 *v89; // [rsp+70h] [rbp-C0h]
  vec_t *p_z; // [rsp+78h] [rbp-B8h]
  float *p_upmove; // [rsp+80h] [rbp-B0h]
  __int16 *v92; // [rsp+88h] [rbp-A8h]
  uint8 *p_impulse; // [rsp+90h] [rbp-A0h]
  int *p_tick_count; // [rsp+98h] [rbp-98h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flGripAnalogValue> *v95; // [rsp+A0h] [rbp-90h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flTriggerAnalogValue> *v96; // [rsp+A8h] [rbp-88h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueX> *v97; // [rsp+B0h] [rbp-80h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueY> *v98; // [rsp+B8h] [rbp-78h]
  CNetworkVarBase<Quaternion,HandInfo_t::NetworkVar_m_FilteredAngularVel> *p_m_FilteredAngularVel; // [rsp+C0h] [rbp-70h]
  CNetworkVarBase<Quaternion,HandInfo_t::NetworkVar_m_FilteredAngularVel> *v100; // [rsp+C8h] [rbp-68h]
  ChangeAccessorFieldPathIndex_t *v101; // [rsp+D0h] [rbp-60h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueX> *p_m_flTrackpadOrJoystickAnalogValueX; // [rsp+D8h] [rbp-58h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flGripAnalogValue> *p_m_flGripAnalogValue; // [rsp+E0h] [rbp-50h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flTriggerAnalogValue> *p_m_flTriggerAnalogValue; // [rsp+E8h] [rbp-48h]
  CNetworkVarBase<float,HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueY> *p_m_flTrackpadOrJoystickAnalogValueY; // [rsp+F0h] [rbp-40h]

  v2 = this;
  if ( this != src )
  {
    v4 = this;
    v5 = 0;
    p_m_Angles = &src->hmd_controllers_info[0].m_Angles;
    v7 = 0;
    p_m_vFilteredPosition = &src->hmd_controllers_info[0].m_vFilteredPosition;
    p_m_FilteredAngles = &src->hmd_controllers_info[0].m_FilteredAngles;
    this->command_number = src->command_number;
    p_m_vFilteredVelocity = &src->hmd_controllers_info[0].m_vFilteredVelocity;
    this->tick_count = src->tick_count;
    this->viewangles = src->viewangles;
    this->forwardmove = src->forwardmove;
    this->sidemove = src->sidemove;
    this->upmove = src->upmove;
    this->buttons = src->buttons;
    this->impulse = src->impulse;
    this->weaponselect = src->weaponselect;
    this->weaponsubtype = src->weaponsubtype;
    this->random_seed = src->random_seed;
    this->mousedx = src->mousedx;
    this->mousedy = src->mousedy;
    this->hasbeenpredicted = src->hasbeenpredicted;
    this->crosshairtrace = src->crosshairtrace;
    *this->cameraposition = *src->cameraposition;
    this->clickbehavior = src->clickbehavior;
    this->statspanel = src->statspanel;
    this->shoppanel = src->shoppanel;
    this->stats_dropdown = src->stats_dropdown;
    this->stats_dropdown_sort = src->stats_dropdown_sort;
    this->hmd_active = src->hmd_active;
    this->hmd_targeting_mode = src->hmd_targeting_mode;
    p_tick_count = &src->tick_count;
    p_m_flTrackpadOrJoystickAnalogValueY = &this->hmd_controllers_info[0].m_flTrackpadOrJoystickAnalogValueY;
    v98 = &src->hmd_controllers_info[0].m_flTrackpadOrJoystickAnalogValueY;
    p_m_PathIndex = &this->hmd_controllers_info[0].__m_PathIndex;
    v101 = &this->hmd_controllers_info[0].__m_PathIndex;
    p_m_flTrackpadOrJoystickAnalogValueX = &this->hmd_controllers_info[0].m_flTrackpadOrJoystickAnalogValueX;
    v97 = &src->hmd_controllers_info[0].m_flTrackpadOrJoystickAnalogValueX;
    p_m_flGripAnalogValue = &this->hmd_controllers_info[0].m_flGripAnalogValue;
    v95 = &src->hmd_controllers_info[0].m_flGripAnalogValue;
    p_m_flTriggerAnalogValue = &this->hmd_controllers_info[0].m_flTriggerAnalogValue;
    v96 = &src->hmd_controllers_info[0].m_flTriggerAnalogValue;
    v89 = &this->cameraposition[1];
    v85 = &this->cameraposition[1];
    p_random_seed = &src->random_seed;
    p_impulse = &src->impulse;
    p_upmove = &src->upmove;
    p_z = &src->viewangles.z;
    p_m_vPosition = &src->hmd_controllers_info[0].m_vPosition;
    v84 = &this->hmd_controllers_info[0].m_vPosition;
    v83 = &this->hmd_controllers_info[0].m_Angles;
    v82 = &this->hmd_controllers_info[0].m_vFilteredPosition;
    v81 = &this->hmd_controllers_info[0].m_FilteredAngles;
    v80 = &this->hmd_controllers_info[0].m_vFilteredVelocity;
    p_m_FilteredAngularVel = &this->hmd_controllers_info[0].m_FilteredAngularVel;
    v92 = &src->cameraposition[1];
    v100 = &src->hmd_controllers_info[0].m_FilteredAngularVel;
    do
    {
      this->hmd_controllers_active[v7] = src->hmd_controllers_active[v7];
      v11 = p_tick_count - src;
      v12 = *(&p_m_vPosition[-1].m_Value.x + p_tick_count - src);
      if ( v12 != *(&v84->m_Value.x + v5)
        || *(p_m_vPosition + v11 - 8) != *(&v84->m_Value.y + v5)
        || *(p_m_vPosition + v11 - 4) != *(&v84->m_Value.z + v5) )
      {
        m_pObj = v4->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 && v101->m_Value != -1 )
        {
          v44 = p_m_vFilteredVelocity;
          v54 = p_m_FilteredAngles;
          v64 = p_m_vFilteredPosition;
          v74 = p_m_Angles;
          (*(m_pObj->_vptr_IHandleEntity + 22))(m_pObj, 12, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_Angles = v74;
          p_m_vFilteredPosition = v64;
          p_m_FilteredAngles = v54;
          p_m_vFilteredVelocity = v44;
          v12 = *(&p_m_vPosition[-1].m_Value.x + v11);
        }
        *(&v84->m_Value.x + v5) = v12;
        *(&v84->m_Value.y + v5) = *(p_m_vPosition + v11 - 8);
        *(&v84->m_Value.z + v5) = *(p_m_vPosition + v11 - 4);
      }
      v13 = p_z - src;
      v14 = *(&p_m_Angles[-2].m_Value.x + p_z - src);
      if ( v14 != *(&v83->m_Value.x + v5)
        || *(&p_m_Angles[-1] + v13 - 8) != *(&v83->m_Value.y + v5)
        || *(&p_m_Angles[-1] + v13 - 4) != *(&v83->m_Value.z + v5) )
      {
        v34 = v4->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v34 != 0 && (v34->m_pEntity->m_flags & 0x400) == 0 && v101->m_Value != -1 )
        {
          v43 = p_m_vFilteredVelocity;
          v53 = p_m_FilteredAngles;
          v63 = p_m_vFilteredPosition;
          v73 = p_m_Angles;
          (*(v34->_vptr_IHandleEntity + 22))(v34, 24, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_Angles = v73;
          p_m_vFilteredPosition = v63;
          p_m_FilteredAngles = v53;
          p_m_vFilteredVelocity = v43;
          v14 = *(&v73[-2].m_Value.x + v13);
        }
        *(&v83->m_Value.x + v5) = v14;
        *(&v83->m_Value.y + v5) = *(&p_m_Angles[-1] + v13 - 8);
        *(&v83->m_Value.z + v5) = *(&p_m_Angles[-1] + v13 - 4);
      }
      v15 = p_upmove - src;
      v16 = *(&p_m_vFilteredPosition[-3].m_Value.x + p_upmove - src);
      if ( v16 != *(&v82->m_Value.x + v5)
        || *(&p_m_vFilteredPosition[-2] + v15 - 8) != *(&v82->m_Value.y + v5)
        || *(&p_m_vFilteredPosition[-2] + v15 - 4) != *(&v82->m_Value.z + v5) )
      {
        v39 = v4->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v39 != 0 && (v39->m_pEntity->m_flags & 0x400) == 0 && v101->m_Value != -1 )
        {
          v48 = p_m_vFilteredVelocity;
          v58 = p_m_FilteredAngles;
          v68 = p_m_vFilteredPosition;
          v78 = p_m_Angles;
          (*(v39->_vptr_IHandleEntity + 22))(v39, 36, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_vFilteredPosition = v68;
          p_m_Angles = v78;
          p_m_FilteredAngles = v58;
          p_m_vFilteredVelocity = v48;
          v16 = *(&v68[-3].m_Value.x + v15);
        }
        *(&v82->m_Value.x + v5) = v16;
        *(&v82->m_Value.y + v5) = *(&p_m_vFilteredPosition[-2] + v15 - 8);
        *(&v82->m_Value.z + v5) = *(&p_m_vFilteredPosition[-2] + v15 - 4);
      }
      v17 = p_impulse - src;
      v18 = *(&p_m_FilteredAngles[-4].m_Value.x + p_impulse - src);
      if ( v18 != *(&v81->m_Value.x + v5)
        || *(&p_m_FilteredAngles[-3] + v17 - 8) != *(&v81->m_Value.y + v5)
        || *(&p_m_FilteredAngles[-3] + v17 - 4) != *(&v81->m_Value.z + v5) )
      {
        v38 = v4->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v38 != 0 && (v38->m_pEntity->m_flags & 0x400) == 0 && v101->m_Value != -1 )
        {
          v47 = p_m_vFilteredVelocity;
          v57 = p_m_FilteredAngles;
          v67 = p_m_vFilteredPosition;
          v77 = p_m_Angles;
          (*(v38->_vptr_IHandleEntity + 22))(v38, 48, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_FilteredAngles = v57;
          p_m_Angles = v77;
          p_m_vFilteredPosition = v67;
          p_m_vFilteredVelocity = v47;
          v18 = *(&v57[-4].m_Value.x + v17);
        }
        *(&v81->m_Value.x + v5) = v18;
        *(&v81->m_Value.y + v5) = *(&p_m_FilteredAngles[-3] + v17 - 8);
        *(&v81->m_Value.z + v5) = *(&p_m_FilteredAngles[-3] + v17 - 4);
      }
      v19 = p_random_seed - src;
      v20 = *(&p_m_vFilteredVelocity[-5].m_Value.x + p_random_seed - src);
      if ( v20 != *(&v80->m_Value.x + v5)
        || *(&p_m_vFilteredVelocity[-4] + v19 - 8) != *(&v80->m_Value.y + v5)
        || *(&p_m_vFilteredVelocity[-4] + v19 - 4) != *(&v80->m_Value.z + v5) )
      {
        v32 = v4->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v32 != 0 && (v32->m_pEntity->m_flags & 0x400) == 0 && v101->m_Value != -1 )
        {
          v41 = p_m_vFilteredVelocity;
          v51 = p_m_FilteredAngles;
          v61 = p_m_vFilteredPosition;
          v71 = p_m_Angles;
          (*(v32->_vptr_IHandleEntity + 22))(v32, 60, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_vFilteredVelocity = v41;
          p_m_Angles = v71;
          p_m_vFilteredPosition = v61;
          p_m_FilteredAngles = v51;
          v20 = *(&v41[-5].m_Value.x + v19);
        }
        *(&v80->m_Value.x + v5) = v20;
        *(&v80->m_Value.y + v5) = *(&p_m_vFilteredVelocity[-4] + v19 - 8);
        *(&v80->m_Value.z + v5) = *(&p_m_vFilteredVelocity[-4] + v19 - 4);
      }
      v21 = v89 - this;
      v22 = v92 - src;
      v23 = *(&v100[-4] + v92 - src - 8);
      if ( v23 != *(&p_m_FilteredAngularVel[-4] + v89 - this - 8)
        || *(&p_m_FilteredAngularVel[-4] + v21 - 4) != *(&v100[-4] + v22 - 4)
        || *(&p_m_FilteredAngularVel[-4].m_Value.x + v21) != *(&v100[-4].m_Value.x + v22)
        || *(&p_m_FilteredAngularVel[-3] + v21 - 12) != *(&v100[-3] + v22 - 12) )
      {
        v24 = v4->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v24 != 0 && (v24->m_pEntity->m_flags & 0x400) == 0 && v101->m_Value != -1 )
        {
          v49 = p_m_vFilteredVelocity;
          v59 = p_m_FilteredAngles;
          v69 = p_m_vFilteredPosition;
          v79 = p_m_Angles;
          (*(v24->_vptr_IHandleEntity + 22))(v24, 72, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_Angles = v79;
          p_m_vFilteredPosition = v69;
          p_m_FilteredAngles = v59;
          v23 = *(&v100[-4] + v22 - 8);
          p_m_vFilteredVelocity = v49;
        }
        v25 = v85 - this;
        *(&p_m_FilteredAngularVel[-4] + v25 - 8) = v23;
        *(&p_m_FilteredAngularVel[-4] + v25 - 4) = *(&v100[-4] + v22 - 4);
        *(&p_m_FilteredAngularVel[-4].m_Value.x + v25) = *(&v100[-4].m_Value.x + v22);
        *(&p_m_FilteredAngularVel[-3] + v25 - 12) = *(&v100[-3] + v22 - 12);
      }
      m_Value = v96->m_Value;
      if ( v96->m_Value != p_m_flTriggerAnalogValue->m_Value )
      {
        v37 = v4->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v37 != 0 && (v37->m_pEntity->m_flags & 0x400) == 0 && v101->m_Value != -1 )
        {
          v46 = p_m_vFilteredVelocity;
          v56 = p_m_FilteredAngles;
          v66 = p_m_vFilteredPosition;
          v76 = p_m_Angles;
          (*(v37->_vptr_IHandleEntity + 22))(v37, 88, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_Angles = v76;
          p_m_vFilteredPosition = v66;
          p_m_FilteredAngles = v56;
          p_m_vFilteredVelocity = v46;
          m_Value = v96->m_Value;
        }
        p_m_flTriggerAnalogValue->m_Value = m_Value;
      }
      v27 = v95->m_Value;
      if ( v95->m_Value != p_m_flGripAnalogValue->m_Value )
      {
        v36 = v4->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v36 != 0 && (v36->m_pEntity->m_flags & 0x400) == 0 && v101->m_Value != -1 )
        {
          v45 = p_m_vFilteredVelocity;
          v55 = p_m_FilteredAngles;
          v65 = p_m_vFilteredPosition;
          v75 = p_m_Angles;
          (*(v36->_vptr_IHandleEntity + 22))(v36, 92, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_Angles = v75;
          p_m_vFilteredPosition = v65;
          p_m_FilteredAngles = v55;
          p_m_vFilteredVelocity = v45;
          v27 = v95->m_Value;
        }
        p_m_flGripAnalogValue->m_Value = v27;
      }
      v28 = v97->m_Value;
      if ( v97->m_Value != p_m_flTrackpadOrJoystickAnalogValueX->m_Value )
      {
        v33 = v4->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v33 != 0 && (v33->m_pEntity->m_flags & 0x400) == 0 && v101->m_Value != -1 )
        {
          v42 = p_m_vFilteredVelocity;
          v52 = p_m_FilteredAngles;
          v62 = p_m_vFilteredPosition;
          v72 = p_m_Angles;
          (*(v33->_vptr_IHandleEntity + 22))(v33, 96, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_Angles = v72;
          p_m_vFilteredPosition = v62;
          p_m_FilteredAngles = v52;
          p_m_vFilteredVelocity = v42;
          v28 = v97->m_Value;
        }
        p_m_flTrackpadOrJoystickAnalogValueX->m_Value = v28;
      }
      v29 = v98->m_Value;
      if ( v98->m_Value != p_m_flTrackpadOrJoystickAnalogValueY->m_Value )
      {
        v31 = v4->hmd_controllers_info[0].__m_pChainEntity.m_pObj;
        if ( v31 != 0 && (v31->m_pEntity->m_flags & 0x400) == 0 && v101->m_Value != -1 )
        {
          v40 = p_m_vFilteredVelocity;
          v50 = p_m_FilteredAngles;
          v60 = p_m_vFilteredPosition;
          v70 = p_m_Angles;
          (*(v31->_vptr_IHandleEntity + 22))(v31, 100, 0xFFFFFFFFLL, p_m_PathIndex->m_Value);
          p_m_Angles = v70;
          p_m_vFilteredPosition = v60;
          p_m_FilteredAngles = v50;
          p_m_vFilteredVelocity = v40;
          v29 = v98->m_Value;
        }
        p_m_flTrackpadOrJoystickAnalogValueY->m_Value = v29;
      }
      ++v7;
      v5 += 104;
      v4 = (v4 + 104);
      p_tick_count += 26;
      p_m_flTrackpadOrJoystickAnalogValueY += 26;
      v98 += 26;
      p_m_PathIndex += 52;
      v101 += 52;
      p_m_flTrackpadOrJoystickAnalogValueX += 26;
      v97 += 26;
      p_m_flGripAnalogValue += 26;
      v95 += 26;
      p_m_flTriggerAnalogValue += 26;
      v96 += 26;
      v89 += 52;
      v92 += 52;
      v85 += 52;
      p_random_seed += 26;
      p_impulse += 104;
      p_upmove += 26;
      p_z += 26;
    }
    while ( v7 != 4 );
    v2 = this;
    this->hmd_middle_eye_local.x = src->hmd_middle_eye_local.x;
    this->hmd_middle_eye_local.y = src->hmd_middle_eye_local.y;
    this->hmd_middle_eye_local.z = src->hmd_middle_eye_local.z;
    this->hmd_viewangles_local.x = src->hmd_viewangles_local.x;
    this->hmd_viewangles_local.y = src->hmd_viewangles_local.y;
    this->hmd_viewangles_local.z = src->hmd_viewangles_local.z;
  }
  return v2;
}


