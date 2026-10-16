
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_BlinkDagger::CDOTA_Bot_AbilityUsage_BlinkDagger  (line 22, @0x0000000002899980, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, ~CDOTA_Bot_AbilityUsage, ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, _Unwind_Resume
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_BlinkDagger::CDOTA_Bot_AbilityUsage_BlinkDagger(
        CDOTA_Bot_AbilityUsage_BlinkDagger *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->m_bUseOnCreeps = 0;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5B90;  // vptr: CDOTA_Bot_AbilityUsage_BlinkDagger
  this->m_iBlinkRange = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pAbility, "blink_range", -1, 1);
}


// CDOTA_Bot_AbilityUsage_BlinkDagger::GetCurrentUsageDesire  (line 30, @0x0000000002896650, libserver.so)  // inlines: CEntityHandle, CHandle, Element, FastSqrt, Get, GetAction, GetActiveModeDesire, GetDestination, GetEntityIdentity, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetRequestedBlink, GetTarget, GetTargetNPC, GetUnit, GetWaypoint, IndexToIdentity, IsBotTargetStatusValid, IsValid, Length2D, LookupEntity, OutOfBounds, QAngle, RandomYawVector, ToDOTABaseNPC, ToDOTABotActionMoveTo, Top, VectorAdd, VectorMultiply, VectorSubtract, WorldToGridPosX, WorldToGridPosY, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator->, operator=, operator[]
// calls: CDOTA_Bot::HasRequestedBlink, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, IsBotTargetStatusValidCore, RandomFloat, AngleVectors, floorf, CGridNav::IsEnclosed, CDOTA_Bot::UsingItemBreaksInvisibility, CDOTA_Bot::IsAboutToDie, CDOTA_TeamCommander::GetOpposingTeamCommander, CDOTA_TeamCommander::HasIncomingStun
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_BlinkDagger::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_BlinkDagger *const this)
{
  CDOTA_Bot *m_pBot; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_Bot *v6; // rbx
  CDOTA_Bot *v7; // rbx
  CEntityInstance *v8; // rax
  int v9; // eax
  CDOTA_BotAction *v10; // r14
  __int64 v11; // r13
  int m_iBlinkWaypoint; // ebx
  __int64 v13; // rax
  CDOTA_Bot *v14; // rdx
  vec_t v15; // xmm3_4
  vec_t v16; // xmm2_4
  int v17; // r15d
  uint32 m_Index; // eax
  unsigned __int16 v19; // cx
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *v23; // rax
  vec_t v24; // xmm2_4
  vec_t x; // xmm3_4
  CDOTA_Bot *v26; // r13
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // rbx
  CEntityInstance *v29; // rax
  CDOTA_BaseNPC *v30; // rdi
  bool valid; // al
  CEntityInstance *v32; // rax
  int m_Size; // eax
  vec_t *v34; // r13
  const CBaseEntity *v35; // rax
  const Vector *AbsOrigin; // rax
  CEntityInstance *v37; // rax
  const CBaseEntity *v38; // rdi
  const Vector *v39; // rax
  float v40; // xmm1_4
  float v41; // xmm0_4
  int m_iBlinkRange; // eax
  float v43; // xmm0_4
  CDOTA_Bot *v44; // rax
  const CBaseEntity *v45; // rax
  CEntityInstance *v46; // rax
  const CBaseEntity *v47; // rdi
  const Vector *v48; // rax
  __m128i x_low; // xmm6
  unsigned int v50; // r15d
  __m128i y_low; // xmm6
  unsigned int v52; // ebx
  CEntityInstance *v53; // rax
  const CBaseEntity *v54; // rdi
  const Vector *v55; // rax
  __m128i v56; // xmm6
  __m128i v57; // xmm7
  vec_t v58; // r15d
  float v59; // ebx
  int v60; // r14d
  float v61; // xmm0_4
  CEntityInstance *v62; // rax
  CDOTA_BaseNPC *v63; // rcx
  CDOTA_Bot *v64; // rbx
  int v65; // edx
  CDOTA_BotAction *v66; // r14
  __int64 v67; // r13
  int v68; // ebx
  __int64 v69; // rax
  CDOTA_Bot *v70; // rdx
  vec_t v71; // xmm3_4
  vec_t v72; // xmm2_4
  int v73; // r15d
  uint32 v74; // eax
  unsigned __int16 v75; // cx
  CEntityIdentity *v76; // rdx
  CEntityIdentity *v77; // rdx
  const CBaseEntity *v78; // rdi
  const Vector *v79; // rax
  vec_t v80; // xmm3_4
  vec_t v81; // xmm2_4
  bool IsAboutToDie; // al
  vec_t v83; // xmm3_4
  vec_t v84; // xmm2_4
  CDOTA_Bot *v85; // r13
  CEntityInstance *v86; // rax
  CDOTA_BaseNPC *v87; // rbx
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  bool HasIncomingStun; // al
  CEntityInstance *v90; // rax
  const CBaseEntity *v91; // rdi
  const Vector *v92; // rax
  vec_t v93; // [rsp+0h] [rbp-70h]
  vec_t v94; // [rsp+4h] [rbp-6Ch]
  unsigned int v95; // [rsp+8h] [rbp-68h]
  vec_t v96; // [rsp+Ch] [rbp-64h]
  float v97; // [rsp+Ch] [rbp-64h]
  vec_t v98; // [rsp+10h] [rbp-60h]
  float v99; // [rsp+10h] [rbp-60h]
  unsigned int v100; // [rsp+14h] [rbp-5Ch]
  Vector vWaypoint; // [rsp+18h] [rbp-58h] BYREF
  float v102; // [rsp+24h] [rbp-4Ch]
  int v103; // [rsp+28h] [rbp-48h]
  Vector v104[5]; // [rsp+30h] [rbp-40h] BYREF

  if ( CDOTA_Bot::HasRequestedBlink(this->m_pBot) )
  {
    m_pBot = this->m_pBot;
    y = m_pBot->m_vRequestedBlinkLoc.y;
    z = m_pBot->m_vRequestedBlinkLoc.z;
    this->m_vLocation.x = m_pBot->m_vRequestedBlinkLoc.x;
    this->m_vLocation.y = y;
    this->m_vLocation.z = z;
    return 3;
  }
  if ( (*(this->m_pBot->_vptr_CDOTA_Bot + 20))(this->m_pBot) != 0 )
    goto LABEL_4;
  if ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 2 )
  {
    v26 = this->m_pBot;
    v27 = CEntityHandle::operator CEntityInstance *(&v26->m_hUnit);
    if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
      v28 = v27;
    else
      v28 = 0;
    v29 = CEntityHandle::operator CEntityInstance *(&v26->m_hTarget);
    if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
      v30 = v29;
    else
      v30 = 0;
    valid = IsBotTargetStatusValidCore(v30, v28, 249, -1.0, this->m_pAbility);
    v6 = this->m_pBot;
    if ( !valid )
      goto LABEL_7;
    v32 = CEntityHandle::operator CEntityInstance *(&v6->m_hUnit);
    if ( v32 == 0 || BYTE3(v32[7]._vptr_IHandleEntity) == 0 )
      v32 = 0;
    if ( (*(&v32[50].m_worldGroupId + 1) & 2) != 0 )
      goto LABEL_7;
    m_Size = v6->m_ActionStack.m_Size;
    if ( m_Size > 0 )
    {
      v34 = v6->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
      if ( v34 != 0 )
      {
        if ( (*(*v34 + 16LL))(v34) == 2 )
        {
          vWaypoint.x = v34[18];
          vWaypoint.y = v34[19];
          goto LABEL_41;
        }
        v6 = this->m_pBot;
      }
    }
    LODWORD(v104[0].x) = v6->m_hTarget.m_Index;
    v35 = CEntityHandle::operator CEntityInstance *(v104);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v35);
    vWaypoint.x = AbsOrigin->x;
    vWaypoint.y = AbsOrigin->y;
LABEL_41:
    v37 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v37 != 0 && BYTE3(v37[7]._vptr_IHandleEntity) != 0 )
      v38 = v37;
    else
      v38 = 0;
    v39 = CBaseEntity::GetAbsOrigin(v38);
    v40 = v39->y;
    v41 = v39->x - vWaypoint.x;
    m_iBlinkRange = this->m_iBlinkRange;
    v43 = fsqrt((v41 * v41) + ((v40 - vWaypoint.y) * (v40 - vWaypoint.y)));
    if ( (m_iBlinkRange + 300.0) > v43 && v43 > (m_iBlinkRange / 2) )
    {
      v44 = this->m_pBot;
      this->m_iBlinkWaypoint = -1;
      LODWORD(v104[0].x) = v44->m_hTarget.m_Index;
      v45 = CEntityHandle::operator CEntityInstance *(v104);
      this->m_vLocation = *CBaseEntity::GetAbsOrigin(v45);
      return 3;
    }
  }
  v6 = this->m_pBot;
LABEL_7:
  if ( (*(v6->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v6->m_pActiveBotMode) == 4 )
  {
    v64 = this->m_pBot;
    if ( v64->m_fModeDesires[(*(v64->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v64->m_pActiveBotMode)] > 0.5 )
    {
      v7 = this->m_pBot;
      v65 = v7->m_ActionStack.m_Size;
      if ( v65 <= 0 || (v66 = v7->m_ActionStack.m_Memory.m_pMemory[v65 - 1]) == 0 )
      {
LABEL_9:
        if ( v7->m_nFailedPaths > 4 )
        {
          vWaypoint.y = this->m_iBlinkRange;
          v102 = RandomFloat(0.0, 360.0);
          vWaypoint.z = 0.0;
          v103 = 0;
          AngleVectors(&vWaypoint.z, v104, 0, 0);
          x_low = LODWORD(v104[0].x);
          *x_low.m128i_i32 = v104[0].x * vWaypoint.y;
          v97 = v104[0].z;
          v50 = _mm_cvtsi128_si32(x_low);
          y_low = LODWORD(v104[0].y);
          *y_low.m128i_i32 = v104[0].y * vWaypoint.y;
          v52 = _mm_cvtsi128_si32(y_low);
          v53 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v53 != 0 && BYTE3(v53[7]._vptr_IHandleEntity) != 0 )
            v54 = v53;
          else
            v54 = 0;
          v55 = CBaseEntity::GetAbsOrigin(v54);
          v56 = _mm_cvtsi32_si128(v52);
          v57 = _mm_cvtsi32_si128(v50);
          *v57.m128i_i32 = *v57.m128i_i32 + v55->x;
          *v56.m128i_i32 = *v56.m128i_i32 + v55->y;
          v58 = COERCE_FLOAT(_mm_cvtsi128_si32(v57));
          v59 = COERCE_FLOAT(_mm_cvtsi128_si32(v56));
          v99 = v55->z;
          vWaypoint.x = g_GridNav.m_flEdgeSize;
          v60 = floorf(((*v57.m128i_i32 - g_GridNav.m_flOffsetX) + (0.5 * vWaypoint.x)) / vWaypoint.x);
          v61 = floorf(((v59 - g_GridNav.m_flOffsetY) + (0.5 * vWaypoint.x)) / vWaypoint.x);
          if ( v60 >= g_GridNav.m_nMinX
            && v60 <= g_GridNav.m_nMaxX
            && v61 >= g_GridNav.m_nMinY
            && v61 <= g_GridNav.m_nMaxY )
          {
            LODWORD(vWaypoint.x) = v61;
            v62 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v62 == 0 || (v63 = v62, BYTE3(v62[7]._vptr_IHandleEntity) == 0) )
              v63 = 0;
            if ( !CGridNav::IsEnclosed(&g_GridNav, v60, SLODWORD(vWaypoint.x), v63) )
            {
              this->m_vLocation.x = v58;
              this->m_iBlinkWaypoint = -1;
              this->m_vLocation.y = v59;
              this->m_vLocation.z = (vWaypoint.y * v97) + v99;
              return 2;
            }
          }
          v7 = this->m_pBot;
        }
        v8 = CEntityHandle::operator CEntityInstance *(&v7->m_hUnit);
        if ( v8 == 0 || BYTE3(v8[7]._vptr_IHandleEntity) == 0 )
          v8 = 0;
        if ( SLOBYTE(v8[58]._vptr_IHandleEntity) < 0 )
        {
          if ( CDOTA_Bot::UsingItemBreaksInvisibility(v7) )
            goto LABEL_4;
          v7 = this->m_pBot;
        }
        v9 = v7->m_ActionStack.m_Size;
        if ( v9 > 0 )
        {
          v10 = v7->m_ActionStack.m_Memory.m_pMemory[v9 - 1];
          if ( v10 != 0 && (*(v10->_vptr_CDOTA_BotAction + 2))(v10) == 2 )
          {
            this->m_iBlinkWaypoint = 0;
            if ( v10[3].m_iActionFrame > 0 )
            {
              v11 = 0;
              while ( 1 )
              {
                m_iBlinkWaypoint = v11;
                v13 = v10[4]._vptr_CDOTA_BotAction + 12 * v11;
                v14 = this->m_pBot;
                v15 = *v13;
                v16 = *(v13 + 4);
                v17 = _mm_cvtsi128_si32(*(v13 + 8));
                m_Index = v14->m_hUnit.m_Index;
                if ( m_Index + 2 <= 1
                  || (v19 = v14->m_hUnit.m_Index,
                      (v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v19 >> 9) & 0x3F]) == 0)
                  || (v21 = &v20[v19 & 0x1FF]) == 0
                  || m_Index != v21->m_EHandle.m_Index
                  || (m_pInstance = v21->m_pInstance, v21->m_pInstance == 0)
                  || !m_pInstance->m_bIsDOTANPC )
                {
                  m_pInstance = 0;
                }
                vWaypoint.x = v15;
                vWaypoint.y = v16;
                v23 = CBaseEntity::GetAbsOrigin(m_pInstance);
                v24 = vWaypoint.y;
                x = vWaypoint.x;
                if ( fsqrt(
                       ((vWaypoint.x - v23->x) * (vWaypoint.x - v23->x))
                     + ((vWaypoint.y - v23->y) * (vWaypoint.y - v23->y))) > this->m_iBlinkRange )
                  break;
                this->m_iBlinkWaypoint = v11++;
                if ( v11 >= v10[3].m_iActionFrame )
                  goto LABEL_53;
                v93 = vWaypoint.x;
                v94 = vWaypoint.y;
                v95 = v17;
              }
              m_iBlinkWaypoint = this->m_iBlinkWaypoint;
              x = v93;
              v24 = v94;
              v17 = _mm_cvtsi128_si32(v95);
LABEL_53:
              vWaypoint.x = x;
              vWaypoint.y = v24;
              if ( m_iBlinkWaypoint != 0 )
              {
                v46 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
                if ( v46 != 0 && BYTE3(v46[7]._vptr_IHandleEntity) != 0 )
                  v47 = v46;
                else
                  v47 = 0;
                v48 = CBaseEntity::GetAbsOrigin(v47);
                if ( fsqrt(
                       ((vWaypoint.x - v48->x) * (vWaypoint.x - v48->x))
                     + ((vWaypoint.y - v48->y) * (vWaypoint.y - v48->y))) > (this->m_iBlinkRange / 2) )
                {
                  this->m_vLocation.x = vWaypoint.x;
                  this->m_vLocation.y = vWaypoint.y;
                  LODWORD(this->m_vLocation.z) = v17;
                  return 1;
                }
              }
            }
          }
        }
LABEL_4:
        this->m_vLocation = vec3_origin;
        return 0;
      }
      if ( (*(v66->_vptr_CDOTA_BotAction + 2))(v66) == 2 )
      {
        this->m_iBlinkWaypoint = 0;
        v67 = 0;
        if ( v66[3].m_iActionFrame > 0 )
        {
          while ( 1 )
          {
            v68 = v67;
            v69 = v66[4]._vptr_CDOTA_BotAction + 12 * v67;
            v70 = this->m_pBot;
            v71 = *v69;
            v72 = *(v69 + 4);
            v73 = _mm_cvtsi128_si32(*(v69 + 8));
            v74 = v70->m_hUnit.m_Index;
            if ( v74 + 2 <= 1
              || (v75 = v70->m_hUnit.m_Index,
                  (v76 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v75 >> 9) & 0x3F]) == 0)
              || (v77 = &v76[v75 & 0x1FF]) == 0
              || v74 != v77->m_EHandle.m_Index
              || (v78 = v77->m_pInstance, v77->m_pInstance == 0)
              || !v78->m_bIsDOTANPC )
            {
              v78 = 0;
            }
            vWaypoint.x = v72;
            vWaypoint.y = v71;
            v79 = CBaseEntity::GetAbsOrigin(v78);
            v80 = vWaypoint.y;
            v81 = vWaypoint.x;
            if ( fsqrt(((vWaypoint.y - v79->x) * (vWaypoint.y - v79->x)) + ((vWaypoint.x - v79->y)
                                                                          * (vWaypoint.x - v79->y))) > this->m_iBlinkRange )
              break;
            this->m_iBlinkWaypoint = v67++;
            if ( v66[3].m_iActionFrame <= v67 )
              goto LABEL_95;
            v98 = vWaypoint.x;
            v100 = v73;
            v96 = vWaypoint.y;
          }
          v68 = this->m_iBlinkWaypoint;
          v81 = v98;
          v80 = v96;
          v73 = _mm_cvtsi128_si32(v100);
LABEL_95:
          if ( v68 != 0 )
          {
            vWaypoint.x = v81;
            vWaypoint.y = v80;
            IsAboutToDie = CDOTA_Bot::IsAboutToDie(this->m_pBot);
            v83 = vWaypoint.y;
            v84 = vWaypoint.x;
            if ( IsAboutToDie )
              goto LABEL_105;
            v85 = this->m_pBot;
            v86 = CEntityHandle::operator CEntityInstance *(&v85->m_hUnit);
            if ( v86 != 0 && BYTE3(v86[7]._vptr_IHandleEntity) != 0 )
              v87 = v86;
            else
              v87 = 0;
            OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(v85->m_pTeamCommander);
            HasIncomingStun = CDOTA_TeamCommander::HasIncomingStun(OpposingTeamCommander, v85, v87);
            v83 = vWaypoint.y;
            v84 = vWaypoint.x;
            if ( HasIncomingStun
              || ((v90 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) == 0
               || BYTE3(v90[7]._vptr_IHandleEntity) == 0
                ? (v91 = 0)
                : (v91 = v90),
                  v92 = CBaseEntity::GetAbsOrigin(v91),
                  v83 = vWaypoint.y,
                  v84 = vWaypoint.x,
                  fsqrt(
                    ((vWaypoint.y - v92->x) * (vWaypoint.y - v92->x))
                  + ((vWaypoint.x - v92->y) * (vWaypoint.x - v92->y))) > (this->m_iBlinkRange / 2)) )
            {
LABEL_105:
              this->m_vLocation.x = v83;
              this->m_vLocation.y = v84;
              LODWORD(this->m_vLocation.z) = v73;
              return 3;
            }
          }
        }
      }
    }
  }
  v7 = this->m_pBot;
  goto LABEL_9;
}


// CDOTA_Bot_AbilityUsage_BlinkDagger::UseAbility  (line 141, @0x0000000002896190, libserver.so)  // inlines: ClearRequestedBlink, Element, GetAction, GetItem, ToDOTABotActionMoveTo, ToDOTAItem, Top, operator=, operator[]
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, CDOTA_BotAction_MoveTo::ForceAdvanceToWaypoint, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_BlinkDagger::UseAbility(CDOTA_Bot_AbilityUsage_BlinkDagger *const this)
{
  CDOTA_Bot *m_pBot; // rax
  int m_Size; // edx
  CDOTA_BotAction **m_pMemory; // rcx
  __int64 v5; // rdx
  CDOTA_BotAction_MoveTo *v6; // r12
  CDOTABaseAbility *m_pAbility; // r12
  CDOTA_Bot *v8; // r14
  CDOTA_BotAction_UseAbility *v9; // r13

  m_pBot = this->m_pBot;
  if ( this->m_iBlinkWaypoint != -1 )
  {
    m_Size = m_pBot->m_ActionStack.m_Size;
    if ( m_Size > 0 )
    {
      m_pMemory = m_pBot->m_ActionStack.m_Memory.m_pMemory;
      v5 = m_Size - 1;
      v6 = m_pMemory[v5];
      if ( v6 != 0 )
      {
        if ( (*(v6->_vptr_CDOTA_BotAction + 2))(m_pMemory[v5]) == 2 )
          CDOTA_BotAction_MoveTo::ForceAdvanceToWaypoint(v6, this->m_iBlinkWaypoint);
        m_pBot = this->m_pBot;
      }
    }
  }
  m_pBot->m_vRequestedBlinkLoc = vec3_origin;
  m_pAbility = this->m_pAbility;
  v8 = this->m_pBot;
  if ( m_pAbility == 0 || (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
    m_pAbility = 0;
  v9 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v9, v8, m_pAbility, &this->m_vLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v9);
}


