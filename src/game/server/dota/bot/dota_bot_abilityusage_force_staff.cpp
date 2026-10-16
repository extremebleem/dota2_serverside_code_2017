
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage_ForceStaff::CDOTA_Bot_AbilityUsage_ForceStaff  (line 23, @0x00000000028a2610, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle, ~CDOTA_Bot_AbilityUsageSpecific
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage, _Unwind_Resume
// callers: CreateAbilityUsage
// strings: "push_length"
void __fastcall CDOTA_Bot_AbilityUsage_ForceStaff::CDOTA_Bot_AbilityUsage_ForceStaff(
        CDOTA_Bot_AbilityUsage_ForceStaff *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_pBot = pBot;
  this->m_bUseOnCreeps = 0;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C6350;  // vptr: CDOTA_Bot_AbilityUsage_ForceStaff
  this->m_hTarget.m_Index = -1;
  this->m_iPushLength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pAbility, "push_length", -1, 1);
}


// CDOTA_Bot_AbilityUsage_ForceStaff::GetCurrentUsageDesire  (line 31, @0x00000000028a0bd0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, DotProduct, FastSqrt, Get, GetDistanceToEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTarget, GetUnit, IndexToIdentity, Length, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorLength, VectorMultiply, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator*, operator+, operator-, operator->, operator=, ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsAngles, AngleVectors, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::IsLocationPassable, CDOTA_Bot::IsAboutToDie, CDOTA_Bot::FindNearbyEnemiesInMode, VectorNormalize, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_Bot::GetTargetBot, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot_AbilityUsage_ForceStaff::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_ForceStaff *const this)
{
  CDOTA_Bot *m_pBot; // rax
  bool v3; // zf
  CDOTA_Bot *v4; // rax
  CDOTA_Bot *v5; // rdi
  CEntityInstance *v6; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CEntityInstance *m_pInstance; // r12
  __int64 v14; // rdx
  int v15; // edx
  CEntityIdentity *v16; // rcx
  CEntityIdentity *v17; // rcx
  const CBaseEntity *v18; // rax
  const QAngle *v19; // rax
  float v20; // xmm0_4
  __m128i v21; // xmm5
  __m128i v22; // xmm6
  float v23; // r14d
  float v24; // r15d
  const CBaseEntity *v25; // rax
  const Vector *v26; // rax
  float v27; // xmm1_4
  float v28; // xmm0_4
  int v29; // xmm2_4
  CDOTA_Bot *v30; // rax
  CEntityInstance *v31; // rax
  const CBaseEntity *v32; // rdi
  const QAngle *v33; // rax
  float v34; // xmm0_4
  __m128i v35; // xmm7
  __m128i v36; // xmm5
  __m128i v37; // xmm0
  float v38; // r12d
  float v39; // r13d
  float v40; // r14d
  CEntityInstance *v41; // rax
  const CBaseEntity *v42; // rdi
  const Vector *v43; // rax
  vec_t v44; // xmm1_4
  vec_t v45; // xmm0_4
  vec_t v46; // xmm2_4
  CDOTA_Bot *v47; // rax
  CDOTA_Bot *v48; // r12
  CEntityInstance *v49; // rax
  CDOTA_BaseNPC *v50; // rcx
  CEntityInstance *v51; // rax
  const CBaseEntity *v52; // rdi
  const QAngle *v53; // rax
  __int64 v54; // r12
  int v55; // r13d
  CBaseEntity *v56; // r15
  CEntityInstance *v57; // rax
  CDOTA_BaseNPC *v58; // rdi
  CEntityInstance *v59; // rax
  const CBaseEntity *v60; // rdi
  const Vector *v61; // r15
  CEntityInstance *v62; // rax
  const CBaseEntity *v63; // rdi
  const Vector *v64; // rax
  vec_t v65; // xmm0_4
  vec_t v66; // xmm1_4
  CEntityInstance *v67; // rax
  CEntityInstance *v68; // rax
  const CBaseEntity *v69; // rdi
  const QAngle *AbsAngles; // rax
  float m_iPushLength; // xmm0_4
  __m128i x_low; // xmm3
  __m128i y_low; // xmm4
  __m128i v74; // xmm0
  float v75; // r12d
  float v76; // r13d
  float v77; // r14d
  CEntityInstance *v78; // rax
  const CBaseEntity *v79; // rdi
  const Vector *AbsOrigin; // rax
  vec_t v81; // xmm1_4
  vec_t v82; // xmm0_4
  vec_t v83; // xmm2_4
  CDOTA_Bot *v84; // rax
  CDOTA_Bot *v85; // r12
  const CBaseEntity *v86; // r13
  CEntityInstance *v87; // rax
  const CBaseEntity *v88; // r15
  const Vector *v89; // r12
  const Vector *v90; // rax
  float v91; // xmm0_4
  float v92; // xmm1_4
  float v93; // xmm2_4
  float v94; // xmm0_4
  bool v95; // r13
  CDOTA_Bot *TargetBot; // rax
  const CBaseEntity *v97; // rax
  const QAngle *v98; // rax
  CEntityInstance *v99; // rax
  const CBaseEntity *v100; // rdi
  const Vector *v101; // r12
  const CBaseEntity *v102; // rax
  const Vector *v103; // rax
  vec_t v104; // xmm0_4
  vec_t v105; // xmm1_4
  CDOTA_Bot *v106; // rax
  CEntityInstance *v107; // rax
  const CBaseEntity *v108; // rdi
  const QAngle *v109; // rax
  CEntityInstance *v110; // rax
  CEntityInstance *v111; // rax
  CEntityIdentity *v112; // rdx
  int v113; // eax
  __int16 v114; // cx
  float vec; // [rsp+8h] [rbp-98h]
  Vector vForward; // [rsp+10h] [rbp-90h] BYREF
  Vector vDestination; // [rsp+20h] [rbp-80h] BYREF
  Vector vOurDir; // [rsp+30h] [rbp-70h] BYREF
  Vector vToEnemy; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > EnemyGankingBots; // [rsp+50h] [rbp-50h] BYREF

  m_pBot = this->m_pBot;
  if ( m_pBot->m_iDifficulty <= 1 )
    return 0;
  if ( (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) == 2
    && CDOTA_Bot::GetTargetBot(this->m_pBot) != 0 )
  {
    v68 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v68 == 0 || (v69 = v68, BYTE3(v68[7]._vptr_IHandleEntity) == 0) )
      v69 = 0;
    AbsAngles = CBaseEntity::GetAbsAngles(v69);
    AngleVectors(AbsAngles, &vForward, 0, 0);
    m_iPushLength = this->m_iPushLength;
    x_low = LODWORD(vForward.x);
    y_low = LODWORD(vForward.y);
    *x_low.m128i_i32 = vForward.x * m_iPushLength;
    *y_low.m128i_i32 = vForward.y * m_iPushLength;
    *v74.m128i_i32 = m_iPushLength * vForward.z;
    v75 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    v76 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
    v77 = COERCE_FLOAT(_mm_cvtsi128_si32(v74));
    v78 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v78 == 0 )
      goto LABEL_81;
    if ( BYTE3(v78[7]._vptr_IHandleEntity) != 0 )
      v79 = v78;
    else
LABEL_81:
      v79 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v79);
    v81 = v76 + AbsOrigin->y;
    v82 = v77 + AbsOrigin->z;
    v83 = v75 + AbsOrigin->x;
    v84 = this->m_pBot;
    vDestination.y = v81;
    vDestination.z = v82;
    vDestination.x = v83;
    if ( CDOTA_TeamCommander::IsLocationPassable(v84->m_pTeamCommander, &vDestination) )
    {
      v85 = this->m_pBot;
      EnemyGankingBots.m_Size = v85->m_hTarget.m_Index;
      v86 = CEntityHandle::operator CEntityInstance *(&EnemyGankingBots);
      v87 = CEntityHandle::operator CEntityInstance *(&v85->m_hUnit);
      if ( v87 != 0 && BYTE3(v87[7]._vptr_IHandleEntity) != 0 )
        v88 = v87;
      else
        v88 = 0;
      if ( v86 != 0 )
      {
        v89 = CBaseEntity::GetAbsOrigin(v86);
        v90 = CBaseEntity::GetAbsOrigin(v88);
        v91 = (v90->x - v89->x) * (v90->x - v89->x);
        v92 = v90->z - v89->z;
        v93 = (v90->y - v89->y) * (v90->y - v89->y);
        v85 = this->m_pBot;
        v94 = fsqrt((v91 + v93) + (v92 * v92));
      }
      else
      {
        v94 = -1.0;
      }
      v95 = v94 > this->m_iPushLength;
      TargetBot = CDOTA_Bot::GetTargetBot(v85);
      if ( (*(TargetBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(TargetBot->m_pActiveBotMode) == 4 || v95 )
      {
        EnemyGankingBots.m_Size = this->m_pBot->m_hTarget.m_Index;
        v97 = CEntityHandle::operator CEntityInstance *(&EnemyGankingBots);
        v98 = CBaseEntity::GetAbsAngles(v97);
        AngleVectors(v98, &vOurDir, 0, 0);
        vOurDir.z = 0.0;
        VectorNormalize(&vOurDir);
        v99 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v99 != 0 && BYTE3(v99[7]._vptr_IHandleEntity) != 0 )
          v100 = v99;
        else
          v100 = 0;
        v101 = CBaseEntity::GetAbsOrigin(v100);
        EnemyGankingBots.m_Size = this->m_pBot->m_hTarget.m_Index;
        v102 = CEntityHandle::operator CEntityInstance *(&EnemyGankingBots);
        v103 = CBaseEntity::GetAbsOrigin(v102);
        v104 = v103->y - v101->y;
        v105 = v103->x - v101->x;
        vToEnemy.z = 0.0;
        vToEnemy.y = v104;
        vToEnemy.x = v105;
        VectorNormalize(&vToEnemy);
        v106 = this->m_pBot;
        if ( (((vToEnemy.x * vOurDir.x) + (vToEnemy.y * vOurDir.y)) + (vToEnemy.z * vOurDir.z)) < -0.89999998 )
        {
          this->m_hTarget.m_Index = v106->m_hTarget.m_Index;
          return 3;
        }
        v107 = CEntityHandle::operator CEntityInstance *(&v106->m_hUnit);
        if ( v107 != 0 && BYTE3(v107[7]._vptr_IHandleEntity) != 0 )
          v108 = v107;
        else
          v108 = 0;
        v109 = CBaseEntity::GetAbsAngles(v108);
        AngleVectors(v109, &EnemyGankingBots, 0, 0);
        LODWORD(EnemyGankingBots.m_Memory.m_pMemory) = 0;
        VectorNormalize(&EnemyGankingBots);
        if ( (((vToEnemy.x * *&EnemyGankingBots.m_Size) + (vToEnemy.y * *(&EnemyGankingBots.m_Size + 1)))
            + (vToEnemy.z * *&EnemyGankingBots.m_Memory.m_pMemory)) > 0.89999998 )
        {
          v110 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v110 != 0 && BYTE3(v110[7]._vptr_IHandleEntity) != 0 )
          {
            m_pEntity = v110->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              v9 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index == -1 )
                goto LABEL_11;
              goto LABEL_10;
            }
          }
LABEL_83:
          this->m_hTarget.m_Index = -1;
          return 2;
        }
      }
    }
  }
  v3 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) == 18;
  v4 = this->m_pBot;
  if ( v3 )
  {
    EnemyGankingBots.m_Size = v4->m_hTarget.m_Index;
    if ( (EnemyGankingBots.m_Size + 2) > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(EnemyGankingBots.m_Size) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[EnemyGankingBots.m_Size & 0x1FF];
        if ( v12 != 0 && EnemyGankingBots.m_Size == v12->m_EHandle.m_Index )
        {
          m_pInstance = v12->m_pInstance;
          if ( v12->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            v14 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
            if ( v14 != 0 )
            {
              v15 = *(v14 + 712);
              EnemyGankingBots.m_Size = v15;
              if ( (v15 + 2) > 1 )
              {
                v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(EnemyGankingBots.m_Size) >> 9) & 0x3F];
                if ( v16 != 0 )
                {
                  v17 = &v16[EnemyGankingBots.m_Size & 0x1FF];
                  if ( v17 != 0 && v15 == v17->m_EHandle.m_Index )
                  {
                    v18 = CEntityHandle::operator CEntityInstance *(&EnemyGankingBots);
                    v19 = CBaseEntity::GetAbsAngles(v18);
                    AngleVectors(v19, &vToEnemy, 0, 0);
                    v20 = this->m_iPushLength;
                    v21 = LODWORD(vToEnemy.x);
                    v22 = LODWORD(vToEnemy.y);
                    *v21.m128i_i32 = vToEnemy.x * v20;
                    *v22.m128i_i32 = vToEnemy.y * v20;
                    v23 = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
                    v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
                    vOurDir.x = *(*&m_pInstance[45].m_worldGroupId.m_nHashCode + 712LL);
                    vec = v20 * vToEnemy.z;
                    v25 = CEntityHandle::operator CEntityInstance *(&vOurDir);
                    v26 = CBaseEntity::GetAbsOrigin(v25);
                    v27 = v24 + v26->y;
                    v28 = vec + v26->z;
                    *&v29 = v23 + v26->x;
                    v30 = this->m_pBot;
                    *(&EnemyGankingBots.m_Size + 1) = v27;
                    *&EnemyGankingBots.m_Memory.m_pMemory = v28;
                    EnemyGankingBots.m_Size = v29;
                    if ( CDOTA_TeamCommander::IsLocationPassable(v30->m_pTeamCommander, &EnemyGankingBots) )
                    {
                      this->m_hTarget.m_Index = *(*&m_pInstance[45].m_worldGroupId.m_nHashCode + 712LL);
                      return 2;
                    }
                    v4 = this->m_pBot;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (*(v4->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v4->m_pActiveBotMode) != 4
    || !CDOTA_Bot::IsAboutToDie(this->m_pBot) )
  {
    goto LABEL_5;
  }
  v31 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
    v32 = v31;
  else
    v32 = 0;
  v33 = CBaseEntity::GetAbsAngles(v32);
  AngleVectors(v33, &vForward, 0, 0);
  v34 = this->m_iPushLength;
  v35 = LODWORD(vForward.x);
  v36 = LODWORD(vForward.y);
  *v35.m128i_i32 = vForward.x * v34;
  *v36.m128i_i32 = vForward.y * v34;
  *v37.m128i_i32 = v34 * vForward.z;
  v38 = COERCE_FLOAT(_mm_cvtsi128_si32(v35));
  v39 = COERCE_FLOAT(_mm_cvtsi128_si32(v36));
  v40 = COERCE_FLOAT(_mm_cvtsi128_si32(v37));
  v41 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v41 == 0 )
    goto LABEL_100;
  if ( BYTE3(v41[7]._vptr_IHandleEntity) != 0 )
    v42 = v41;
  else
LABEL_100:
    v42 = 0;
  v43 = CBaseEntity::GetAbsOrigin(v42);
  v44 = v39 + v43->y;
  v45 = v40 + v43->z;
  v46 = v38 + v43->x;
  v47 = this->m_pBot;
  vDestination.y = v44;
  vDestination.z = v45;
  vDestination.x = v46;
  if ( !CDOTA_TeamCommander::IsLocationPassable(v47->m_pTeamCommander, &vDestination) )
  {
LABEL_5:
    v5 = this->m_pBot;
    if ( v5->m_nFailedPaths <= 5 )
    {
      this->m_hTarget.m_Index = -1;
      return 0;
    }
    v6 = CEntityHandle::operator CEntityInstance *(&v5->m_hUnit);
    if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
    {
      m_pEntity = v6->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
        {
          v9 = 0x7FFF;
          goto LABEL_11;
        }
LABEL_10:
        v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
LABEL_11:
        LOWORD(this->m_hTarget.m_Index) = v9 | this->m_hTarget.m_Index & 0x8000;
        this->m_hTarget.m_Index = (v8 << 15) | this->m_hTarget.m_Index & 0x7FFF;
        return 2;
      }
    }
    goto LABEL_83;
  }
  v48 = this->m_pBot;
  EnemyGankingBots.m_Size = 0;
  EnemyGankingBots.m_Memory.m_pMemory = 0;
  EnemyGankingBots.m_Memory.m_nAllocationCount = 0;
  EnemyGankingBots.m_Memory.m_nGrowSize = 0;
  v49 = CEntityHandle::operator CEntityInstance *(&v48->m_hUnit);
  if ( v49 != 0 && BYTE3(v49[7]._vptr_IHandleEntity) != 0 )
    v50 = v49;
  else
    v50 = 0;
  if ( CDOTA_Bot::FindNearbyEnemiesInMode(v48, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1000.0, &EnemyGankingBots, v50) == 0 )
  {
LABEL_104:
    CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&EnemyGankingBots);
    goto LABEL_5;
  }
  v51 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v51 != 0 && BYTE3(v51[7]._vptr_IHandleEntity) != 0 )
    v52 = v51;
  else
    v52 = 0;
  v53 = CBaseEntity::GetAbsAngles(v52);
  AngleVectors(v53, &vOurDir, 0, 0);
  vOurDir.z = 0.0;
  VectorNormalize(&vOurDir);
  if ( EnemyGankingBots.m_Size > 0 )
  {
    v54 = 0;
    v55 = 0;
    do
    {
      v67 = CEntityHandle::operator CEntityInstance *(&EnemyGankingBots.m_Memory.m_pMemory[v54]->m_hUnit);
      if ( v67 != 0 && BYTE3(v67[7]._vptr_IHandleEntity) != 0 )
        v56 = v67;
      else
        v56 = 0;
      v57 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v57 != 0 && BYTE3(v57[7]._vptr_IHandleEntity) != 0 )
        v58 = v57;
      else
        v58 = 0;
      if ( CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(v58, v56) )
      {
        v59 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v59 != 0 && BYTE3(v59[7]._vptr_IHandleEntity) != 0 )
          v60 = v59;
        else
          v60 = 0;
        v61 = CBaseEntity::GetAbsOrigin(v60);
        v62 = CEntityHandle::operator CEntityInstance *(&EnemyGankingBots.m_Memory.m_pMemory[v54]->m_hUnit);
        if ( v62 != 0 && BYTE3(v62[7]._vptr_IHandleEntity) != 0 )
          v63 = v62;
        else
          v63 = 0;
        v64 = CBaseEntity::GetAbsOrigin(v63);
        v65 = v64->y - v61->y;
        v66 = v64->x - v61->x;
        vToEnemy.z = 0.0;
        vToEnemy.y = v65;
        vToEnemy.x = v66;
        VectorNormalize(&vToEnemy);
        if ( (((vOurDir.x * vToEnemy.x) + (vOurDir.y * vToEnemy.y)) + (vOurDir.z * vToEnemy.z)) > 0.0 )
          goto LABEL_104;
      }
      ++v55;
      ++v54;
    }
    while ( EnemyGankingBots.m_Size > v55 );
  }
  v111 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v111 != 0 && BYTE3(v111[7]._vptr_IHandleEntity) != 0 && (v112 = v111->m_pEntity) != 0 )
  {
    v113 = (v112->m_EHandle.m_Index >> 15) - (v112->m_flags & 1);
    v114 = 0x7FFF;
    if ( v112->m_EHandle.m_Index != -1 )
      v114 = v112->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v114 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v113 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::~CUtlVectorBase(&EnemyGankingBots);
  return 3;
}


// CDOTA_Bot_AbilityUsage_ForceStaff::UseAbility  (line 155, @0x000000000289fa20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetItem, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTAItem, operator CBaseEntity*, operator CEntityInstance*
// calls: operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_ForceStaff::UseAbility(CDOTA_Bot_AbilityUsage_ForceStaff *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTABaseAbility *m_pAbility; // r12
  CDOTA_Bot *m_pBot; // r15
  CDOTA_BotAction_UseAbility *v8; // r13

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          m_pAbility = this->m_pAbility;
          m_pBot = this->m_pBot;
          if ( m_pAbility == 0 || (*(m_pAbility->_vptr_IHandleEntity + 223))(this->m_pAbility) == 0 )
            m_pAbility = 0;
          v8 = operator new(0xC0u);
          CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v8, m_pBot, m_pAbility, m_pInstance);
          CDOTA_Bot::PushAction(this->m_pBot, v8);
        }
      }
    }
  }
}


