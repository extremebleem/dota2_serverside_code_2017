
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage  (line 13, @0x0000000002895cb0, libserver.so)
// callers: CDOTA_Bot_AbilityUsage_Flask::~CDOTA_Bot_AbilityUsage_Flask, CDOTA_Bot_AbilityUsage_EtherealBlade::~CDOTA_Bot_AbilityUsage_EtherealBlade, CDOTA_Bot_AbilityUsage_Dust::~CDOTA_Bot_AbilityUsage_Dust, CDOTA_Bot_AbilityUsage_DiffusalBlade::~CDOTA_Bot_AbilityUsage_DiffusalBlade, CDOTA_Bot_AbilityUsage_Dagon::~CDOTA_Bot_AbilityUsage_Dagon, CDOTA_Bot_AbilityUsage_Cyclone::~CDOTA_Bot_AbilityUsage_Cyclone, CDOTA_Bot_AbilityUsage_CrimsonGuard::~CDOTA_Bot_AbilityUsage_CrimsonGuard, CDOTA_Bot_AbilityUsage_Courier::~CDOTA_Bot_AbilityUsage_Courier, CDOTA_Bot_AbilityUsage_Clarity::~CDOTA_Bot_AbilityUsage_Clarity, CDOTA_Bot_AbilityUsage_Cheese::~CDOTA_Bot_AbilityUsage_Cheese, CDOTA_Bot_AbilityUsage_CrimsonGuard::CDOTA_Bot_AbilityUsage_CrimsonGuard, CDOTA_Bot_AbilityUsage_Dagon::CDOTA_Bot_AbilityUsage_Dagon (254 total)
void __fastcall CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(CDOTA_Bot_AbilityUsage *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5890;
}


// CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage  (line 13, @0x0000000002895d70, libserver.so)  // inlines: ~CDOTA_Bot_AbilityUsage
// calls: operator delete
void __fastcall CDOTA_Bot_AbilityUsage::~CDOTA_Bot_AbilityUsage(CDOTA_Bot_AbilityUsage *const this)
{
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42C5890;
  operator delete(this);
}


// CDOTA_Bot_AbilityUsage::FindTargetAoELocation  (line 19, @0x000000000289a7b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot_AbilityUsage::BuildLocationList, CDOTA_Bot_AbilityUsage::FindOptimalTargetLocation, CUtlMemory<Vector, int>::Purge, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Bot_AbilityUsage_VeilOfDischord::GetCurrentUsageDesire, CDOTA_BotMode_Attack_Axe::CalculateDesiredLocation, CDOTA_Bot_AbilityUsage_Bloodseeker_BloodRite::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Dazzle_Weave::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_DeathProphet_Silence::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_DragonKnight_BreatheFire::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Drow_WaveOfSilence::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_DeathProphet_CarrionSwarm::GetCurrentUsageDesire, CDOTA_BotMode_Attack_Earthshaker::CalculateDesiredLocation, CDOTA_BotMode_Attack_Juggernaut::CalculateDesiredLocation, CDOTA_Bot_AbilityUsage_Lina_DragonSlave::GetCurrentUsageDesire (21 total)
void __fastcall CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
        CDOTA_Bot_AbilityUsage *const this,
        int iTeamNumber,
        int iTargetType,
        int iTargetRelationship,
        const Vector *const vBaseLocation,
        int iRangeFromBase,
        float fTimeInFuture,
        int iRadius,
        Vector *pTargetLoc,
        int *pTargetCount)
{
  CUtlVector<Vector,CUtlMemory<Vector,int> > vLocations; // [rsp+10h] [rbp-50h] BYREF

  vLocations.m_Size = 0;
  vLocations.m_Memory.m_pMemory = 0;
  vLocations.m_Memory.m_nAllocationCount = 0;
  vLocations.m_Memory.m_nGrowSize = 0;
  if ( CDOTA_Bot_AbilityUsage::BuildLocationList(
         this,
         iTeamNumber,
         iTargetType,
         iTargetRelationship,
         vBaseLocation,
         iRangeFromBase,
         fTimeInFuture,
         iRadius,
         &vLocations) > 0 )
  {
    CDOTA_Bot_AbilityUsage::FindOptimalTargetLocation(this, &vLocations, iRadius, pTargetLoc, pTargetCount);
    vLocations.m_Size = 0;
    if ( (vLocations.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return;
    goto LABEL_9;
  }
  if ( pTargetCount != 0 )
    *pTargetCount = 0;
  if ( pTargetLoc != 0 )
    *pTargetLoc = vec3_invalid;
  vLocations.m_Size = 0;
  if ( (vLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
LABEL_9:
    CUtlMemory<Vector,int>::Purge(&vLocations.m_Memory);
    if ( (vLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&vLocations.m_Memory);
  }
}


// CDOTA_Bot_AbilityUsage::FindTargetLinearLocation  (line 35, @0x000000000289a8d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DotProduct, FastRSqrt, FastRSqrtFast, Length2DSqr, Purge, RemoveAll, VectorAdd, VectorMultiply, VectorNormalizeFast, VectorSubtract, _mm_load_ss, _mm_rsqrt_ss, _mm_set_ss, operator*, operator+, operator+=, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot_AbilityUsage::BuildLocationList, VectorNormalize, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::FastRemove, CUtlMemory<Vector, int>::Purge, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Bot_AbilityUsage_Jakiro_DualBreath::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Jakiro_Macropyre::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Jakiro_IcePath::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_SandKing_BurrowStrike::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Windrunner_Powershot::GetCurrentUsageDesire
void __fastcall CDOTA_Bot_AbilityUsage::FindTargetLinearLocation(
        CDOTA_Bot_AbilityUsage *const this,
        int iTeamNumber,
        int iTargetType,
        int iTargetRelationship,
        const Vector *const vBaseLocation,
        int iRangeFromBase,
        float fTimeInFuture,
        int iRadius,
        Vector *pTargetLoc,
        int *pTargetCount)
{
  int m_Size; // ecx
  float v12; // xmm7_4
  float v13; // xmm6_4
  float x; // xmm8_4
  Vector *m_pMemory; // rax
  Vector *v16; // rdx
  Vector *v17; // rcx
  float v18; // xmm3_4
  float v19; // xmm4_4
  float z; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm5_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  __int64 v27; // r14
  int v28; // ebx
  int v29; // r13d
  vec_t v30; // xmm7_4
  vec_t v31; // xmm0_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  vec_t v34; // xmm1_4
  vec_t v35; // xmm0_4
  bool v36; // zf
  float v38; // [rsp+20h] [rbp-A0h]
  float vBestDir; // [rsp+24h] [rbp-9Ch]
  float vBestDir_4; // [rsp+28h] [rbp-98h]
  vec_t vBestDir_8; // [rsp+2Ch] [rbp-94h]
  vec_t y; // [rsp+38h] [rbp-88h]
  int iBestHit; // [rsp+3Ch] [rbp-84h]
  int iFurthest; // [rsp+40h] [rbp-80h]
  float v45; // [rsp+48h] [rbp-78h]
  float v46; // [rsp+4Ch] [rbp-74h]
  float v47; // [rsp+50h] [rbp-70h]
  float fFurthestDot; // [rsp+54h] [rbp-6Ch]
  float v49; // [rsp+58h] [rbp-68h]
  float v50; // [rsp+5Ch] [rbp-64h]
  vec_t v51; // [rsp+5Ch] [rbp-64h]
  Vector vToLocNorm; // [rsp+60h] [rbp-60h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > vLocations; // [rsp+70h] [rbp-50h] BYREF

  vLocations.m_Size = 0;
  vLocations.m_Memory.m_pMemory = 0;
  vLocations.m_Memory.m_nAllocationCount = 0;
  vLocations.m_Memory.m_nGrowSize = 0;
  if ( CDOTA_Bot_AbilityUsage::BuildLocationList(
         this,
         iTeamNumber,
         iTargetType,
         iTargetRelationship,
         vBaseLocation,
         iRangeFromBase,
         fTimeInFuture,
         iRadius,
         &vLocations) != 0 )
  {
    iBestHit = 0;
    m_Size = vLocations.m_Size;
    if ( vLocations.m_Size > 0 )
    {
      y = vec3_origin.y;
      vBestDir_8 = vec3_origin.z;
      do
      {
        v12 = y;
        v13 = vBestDir_8;
        x = vec3_origin.x;
        if ( m_Size > 0 )
        {
          m_pMemory = vLocations.m_Memory.m_pMemory;
          v16 = vLocations.m_Memory.m_pMemory + 1;
          v17 = &vLocations.m_Memory.m_pMemory[(m_Size - 1) + 1];
          while ( 1 )
          {
            v18 = m_pMemory->y;
            v19 = m_pMemory->x - vBaseLocation->x;
            z = m_pMemory->z;
            m_pMemory = v16;
            v21 = v18 - vBaseLocation->y;
            v22 = z - vBaseLocation->z;
            v23 = 1.0 / fsqrt((((v19 * v19) + 0.00000011920929) + (v21 * v21)) + (v22 * v22));
            v24 = (0.5 * v23) * (3.0 - ((((((v19 * v19) + 0.00000011920929) + (v21 * v21)) + (v22 * v22)) * v23) * v23));
            x = x + (v19 * v24);
            v12 = v12 + (v21 * v24);
            v13 = v13 + (v24 * v22);
            if ( v16 == v17 )
              break;
            ++v16;
          }
        }
        v50 = (((x * x) + 0.00000011920929) + (v12 * v12)) + (v13 * v13);
        v25 = 1.0 / fsqrt(v50);
        v26 = (0.5 * v25) * (3.0 - ((v50 * v25) * v25));
        v47 = x * v26;
        v46 = v12 * v26;
        v45 = v26 * v13;
        if ( vLocations.m_Size <= 0 )
        {
          CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::FastRemove(&vLocations, -1);
        }
        else
        {
          v27 = 0;
          v28 = 0;
          fFurthestDot = 1.1;
          iFurthest = -1;
          v29 = 0;
          do
          {
            v30 = vLocations.m_Memory.m_pMemory[v27].y - vBaseLocation->y;
            v31 = vLocations.m_Memory.m_pMemory[v27].z - vBaseLocation->z;
            vToLocNorm.x = vLocations.m_Memory.m_pMemory[v27].x - vBaseLocation->x;
            v51 = vToLocNorm.x;
            v49 = v30;
            vToLocNorm.y = v30;
            vToLocNorm.z = v31;
            v32 = VectorNormalize(&vToLocNorm);
            v33 = ((vToLocNorm.x * v47) + (vToLocNorm.y * v46)) + (v45 * vToLocNorm.z);
            if ( (iRadius * iRadius) > (((v51 - ((v47 * v33) * v32)) * (v51 - ((v47 * v33) * v32)))
                                      + ((v49 - ((v46 * v33) * v32)) * (v49 - ((v46 * v33) * v32)))) )
              ++v29;
            if ( fFurthestDot > v33 )
            {
              fFurthestDot = ((vToLocNorm.x * v47) + (vToLocNorm.y * v46)) + (v45 * vToLocNorm.z);
              iFurthest = v28;
            }
            ++v28;
            ++v27;
          }
          while ( vLocations.m_Size > v28 );
          if ( v29 > iBestHit )
          {
            iBestHit = v29;
            v38 = v45;
            vBestDir_4 = v46;
            vBestDir = v47;
          }
          CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::FastRemove(&vLocations, iFurthest);
        }
        m_Size = vLocations.m_Size;
      }
      while ( iBestHit < vLocations.m_Size );
    }
    if ( pTargetCount != 0 )
      *pTargetCount = iBestHit;
    if ( pTargetLoc != 0 )
    {
      v34 = ((v38 * iRangeFromBase) * 0.5) + vBaseLocation->z;
      v35 = ((iRangeFromBase * vBestDir) * 0.5) + vBaseLocation->x;
      pTargetLoc->y = ((vBestDir_4 * iRangeFromBase) * 0.5) + vBaseLocation->y;
      pTargetLoc->z = v34;
      pTargetLoc->x = v35;
    }
  }
  else
  {
    if ( pTargetCount != 0 )
      *pTargetCount = 0;
    if ( pTargetLoc != 0 )
    {
      vLocations.m_Size = 0;
      v36 = (vLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      *pTargetLoc = vec3_invalid;
      if ( !v36 )
        return;
      goto LABEL_30;
    }
  }
  vLocations.m_Size = 0;
  if ( (vLocations.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return;
LABEL_30:
  CUtlMemory<Vector,int>::Purge(&vLocations.m_Memory);
  if ( (vLocations.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<Vector,int>::Purge(&vLocations.m_Memory);
}


// CDOTA_Bot_AbilityUsage::BuildLocationList  (line 108, @0x000000000289a3f0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CopyConstruct<Vector>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, Set, ToDOTABaseNPC, VectorAdd, VectorMultiply, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: FindUnitsInRadius, IsInvisibleToBots, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTALocomotor::GetAverageVelocityOverTime, CBaseEntity::GetAbsOrigin, CUtlMemory<Vector, int>::Grow, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Bot_AbilityUsage::FindTargetAoELocation, CDOTA_Bot_AbilityUsage::FindTargetLinearLocation, CDOTA_Bot_AbilityUsage_Luna_Eclipse::GetCurrentUsageDesire
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot_AbilityUsage::BuildLocationList(
        CDOTA_Bot_AbilityUsage *const this,
        int iTeamNumber,
        int iTargetType,
        int iTargetRelationship,
        const Vector *const vBaseLocation,
        int iRangeFromBase,
        float fTimeInFuture,
        int iRadius,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *const vLocations)
{
  __int64 v10; // rbx
  int v11; // r12d
  unsigned __int8 (__fastcall *v12)(CDOTA_Bot_AbilityUsage *const, unsigned __int64 *); // rax
  CHandle<CBaseEntity> *v13; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rcx
  CDOTA_BaseNPC *m_pInstance; // rdi
  unsigned __int64 m_Value; // rdx
  unsigned int v19; // ebx
  __int64 v21; // r12
  int v22; // ebx
  CHandle<CBaseEntity> *v23; // rdx
  uint32 v24; // eax
  __int16 v25; // cx
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  const CBaseEntity *v28; // r14
  CDOTALocomotor *v29; // rax
  float v30; // xmm1_4
  float v31; // xmm1_4
  const Vector *AbsOrigin; // rax
  __int64 m_Size; // r14
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm1_4
  int v37; // eax
  Vector *v38; // rax
  float v40; // [rsp+24h] [rbp-16Ch]
  float v41; // [rsp+24h] [rbp-16Ch]
  float v42; // [rsp+28h] [rbp-168h]
  float v43; // [rsp+28h] [rbp-168h]
  float v44; // [rsp+2Ch] [rbp-164h]
  float v45; // [rsp+2Ch] [rbp-164h]
  unsigned __int64 v46; // [rsp+30h] [rbp-160h] BYREF
  float v47; // [rsp+38h] [rbp-158h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hTargets; // [rsp+40h] [rbp-150h] BYREF
  unsigned __int64 v49; // [rsp+158h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  hTargets.m_Size = 0;
  hTargets.m_Memory.m_nAllocationCount = 64;
  hTargets.m_Memory.m_nGrowSize = 0x80000000;
  hTargets.m_Memory.m_pMemory = &hTargets.m_FixedMemory;
  FindUnitsInRadius(
    iTeamNumber,
    vBaseLocation,
    0,
    (iRadius + iRangeFromBase),
    &hTargets,
    iTargetRelationship,
    iTargetType,
    128,
    0,
    0);
  if ( hTargets.m_Size <= 0 )
    goto LABEL_18;
  v10 = 0;
  v11 = 0;
  do
  {
    v12 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 7);
    LODWORD(v46) = hTargets.m_Memory.m_pMemory[v10].m_Index;
    if ( v12(this, &v46) == 0 )
    {
      hTargets.m_Memory.m_pMemory[v10].m_Index = -1;
      goto LABEL_4;
    }
    v13 = &hTargets.m_Memory.m_pMemory[v10];
    m_Index = hTargets.m_Memory.m_pMemory[v10].m_Index;
    if ( m_Index + 2 > 1 )
    {
      v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F];
      if ( v15 != 0 )
      {
        v16 = &v15[v13->m_Index & 0x1FF];
        if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
        {
          m_pInstance = v16->m_pInstance;
          if ( v16->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          {
            m_Value = m_pInstance->m_nUnitState64.m_Value;
            if ( (m_Value & 0x200) == 0 && !m_pInstance->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
            {
              if ( !IsInvisibleToBots(m_pInstance) )
                goto LABEL_4;
              v13 = &hTargets.m_Memory.m_pMemory[v10];
            }
            v13->m_Index = -1;
          }
        }
      }
    }
LABEL_4:
    ++v11;
    ++v10;
  }
  while ( hTargets.m_Size > v11 );
  if ( hTargets.m_Size > 0 )
  {
    v21 = 0;
    v22 = 0;
    do
    {
      v23 = &hTargets.m_Memory.m_pMemory[v21];
      v24 = hTargets.m_Memory.m_pMemory[v21].m_Index;
      if ( v24 + 2 > 1 )
      {
        v25 = v23->m_Index;
        v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23->m_Index) >> 9) & 0x3F];
        if ( v26 != 0 )
        {
          v27 = &v26[v25 & 0x1FF];
          if ( v27 != 0 && v24 == v27->m_EHandle.m_Index )
          {
            v28 = v27->m_pInstance;
            if ( v27->m_pInstance != 0 && v28->m_bIsDOTANPC )
            {
              v29 = (*(v28->_vptr_IHandleEntity + 376))(v27->m_pInstance);
              v46 = CDOTALocomotor::GetAverageVelocityOverTime(v29, 2.0, v30).m128i_u64[0];
              v47 = v31;
              v40 = v31 * fTimeInFuture;
              v44 = *&v46 * fTimeInFuture;
              v42 = *(&v46 + 1) * fTimeInFuture;
              AbsOrigin = CBaseEntity::GetAbsOrigin(v28);
              m_Size = vLocations->m_Size;
              v34 = v44 + AbsOrigin->x;
              v35 = v42 + AbsOrigin->y;
              v36 = v40 + AbsOrigin->z;
              v37 = vLocations->m_Size;
              v45 = v34;
              v43 = v35;
              v41 = v36;
              if ( m_Size == vLocations->m_Memory.m_nAllocationCount )
              {
                CUtlMemory<Vector,int>::Grow(&vLocations->m_Memory, 1);
                v37 = vLocations->m_Size;
              }
              vLocations->m_Size = v37 + 1;
              v38 = &vLocations->m_Memory.m_pMemory[m_Size];
              if ( v38 != 0 )
              {
                v38->x = v45;
                v38->y = v43;
                v38->z = v41;
              }
            }
          }
        }
      }
      ++v22;
      ++v21;
    }
    while ( hTargets.m_Size > v22 );
  }
LABEL_18:
  v19 = vLocations->m_Size;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTargets);
  return v19;
}


// CDOTA_Bot_AbilityUsage::FindOptimalTargetLocation  (line 148, @0x00000000028987e0, libserver.so)  // inlines: Length2DSqr, VectorSubtract, operator+=, operator-, operator/=, operator=
// calls: CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::FastRemove
// callers: CDOTA_Bot_AbilityUsage::FindTargetAoELocation
void __fastcall CDOTA_Bot_AbilityUsage::FindOptimalTargetLocation(
        CDOTA_Bot_AbilityUsage *const this,
        CUtlVector<Vector,CUtlMemory<Vector,int> > *const vLocations,
        int iRadius,
        Vector *pTargetLoc,
        int *pTargetCount)
{
  int v5; // r15d
  float v7; // xmm5_4
  int m_Size; // edi
  float x; // xmm2_4
  int v12; // esi
  float v13; // xmm4_4
  float v14; // xmm0_4
  Vector *m_pMemory; // rax
  Vector *v16; // rax
  int v17; // edx
  int v18; // ecx
  float v19; // xmm7_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm4_4
  float v23; // xmm6_4
  float v24; // xmm0_4
  vec_t y; // [rsp+0h] [rbp-48h]
  vec_t z; // [rsp+4h] [rbp-44h]
  vec_t vBestLoc; // [rsp+8h] [rbp-40h]
  vec_t vBestLoc_4; // [rsp+Ch] [rbp-3Ch]
  vec_t vBestLoc_8; // [rsp+10h] [rbp-38h]
  float v30; // [rsp+14h] [rbp-34h]

  v5 = 0;
  v7 = (iRadius * iRadius);
  m_Size = vLocations->m_Size;
  vBestLoc = vec3_invalid.x;
  y = vec3_invalid.y;
  z = vec3_invalid.z;
  if ( vLocations->m_Size > 0 )
  {
    vBestLoc_8 = vec3_origin.y;
    vBestLoc_4 = vec3_origin.z;
    do
    {
      x = vec3_origin.x;
      v12 = -1;
      v13 = vBestLoc_8;
      v14 = vBestLoc_4;
      if ( m_Size > 0 )
      {
        m_pMemory = vLocations->m_Memory.m_pMemory;
        do
        {
          x = x + m_pMemory->x;
          ++m_pMemory;
          v13 = v13 + m_pMemory[-1].y;
          v14 = v14 + m_pMemory[-1].z;
        }
        while ( m_pMemory != &vLocations->m_Memory.m_pMemory[(m_Size - 1) + 1] );
        v16 = vLocations->m_Memory.m_pMemory;
        v17 = 0;
        v12 = -1;
        v18 = 0;
        v19 = 1.0 / m_Size;
        v20 = 0.0;
        v21 = x * v19;
        v22 = v13 * v19;
        v23 = v14 * v19;
        do
        {
          v24 = ((v16->x - v21) * (v16->x - v21)) + ((v16->y - v22) * (v16->y - v22));
          if ( v7 > v24 )
            ++v18;
          if ( v24 >= v20 )
          {
            v20 = ((v16->x - v21) * (v16->x - v21)) + ((v16->y - v22) * (v16->y - v22));
            v12 = v17;
          }
          ++v17;
          ++v16;
        }
        while ( v17 != m_Size );
        if ( v18 > v5 )
        {
          z = v23;
          v5 = v18;
          y = v22;
          vBestLoc = v21;
        }
      }
      v30 = v7;
      CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::FastRemove(vLocations, v12);
      m_Size = vLocations->m_Size;
      v7 = v30;
    }
    while ( v5 < vLocations->m_Size );
  }
  if ( pTargetCount != 0 )
    *pTargetCount = v5;
  if ( pTargetLoc != 0 )
  {
    pTargetLoc->x = vBestLoc;
    pTargetLoc->y = y;
    pTargetLoc->z = z;
  }
}


// CDOTA_Bot_AbilityUsage::UseOnIllusionState  (line 196, @0x0000000002895cc0, libserver.so)
bool __fastcall CDOTA_Bot_AbilityUsage::UseOnIllusionState(
        CDOTA_Bot_AbilityUsage *const this,
        DOTA_BOT_ILLUSION_STATE iState)
{
  return iState == DOTA_BOT_ILLUSION_STATE::BOT_ILLUSION_NOT;
}


