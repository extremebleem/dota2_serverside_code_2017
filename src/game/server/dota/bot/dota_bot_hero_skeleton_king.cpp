
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_SkeletonKing::CDOTA_Bot_Hero_SkeletonKing  (line 21, @0x00000000028d6c30, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit, CDOTA_TutorialBot_Hero_SkeletonKing::CDOTA_TutorialBot_Hero_SkeletonKing
// strings: "skeleton_king_hellfire_blast", "skeleton_king_reincarnation", "skeleton_king_mortal_strike"
void __fastcall CDOTA_Bot_Hero_SkeletonKing::CDOTA_Bot_Hero_SkeletonKing(
        CDOTA_Bot_Hero_SkeletonKing *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rdi
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rdi
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42D00B0;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityHellfireBlast = CDOTA_BaseNPC::FindAbilityByName(v6, "skeleton_king_hellfire_blast", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityReincarnation = CDOTA_BaseNPC::FindAbilityByName(v8, "skeleton_king_reincarnation", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityMortalStrike = CDOTA_BaseNPC::FindAbilityByName(v10, "skeleton_king_mortal_strike", 1);
}


// CDOTA_Bot_Hero_SkeletonKing::GetGankDistance  (line 31, @0x00000000028d3420, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_Bot::GetGankDistance, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
int __fastcall CDOTA_Bot_Hero_SkeletonKing::GetGankDistance(CDOTA_Bot_Hero_SkeletonKing *const this)
{
  CDOTABaseAbility *m_pAbilityHellfireBlast; // rbx

  m_pAbilityHellfireBlast = this->m_pAbilityHellfireBlast;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityHellfireBlast) >= 0
    && (*(m_pAbilityHellfireBlast->_vptr_IHandleEntity + 245))(m_pAbilityHellfireBlast) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityHellfireBlast)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityHellfireBlast, -1) )
  {
    return (*(this->m_pAbilityHellfireBlast->_vptr_IHandleEntity + 226))(this->m_pAbilityHellfireBlast, &vec3_origin, 0)
         + 200;
  }
  else
  {
    return CDOTA_Bot::GetGankDistance(this);
  }
}


// CDOTA_Bot_Hero_SkeletonKing::GetAggressionFactor  (line 43, @0x00000000028d3310, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTA_Bot::GetAggressionFactor, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
float __fastcall CDOTA_Bot_Hero_SkeletonKing::GetAggressionFactor(CDOTA_Bot_Hero_SkeletonKing *const this)
{
  float AggressionFactor; // xmm0_4
  CDOTABaseAbility *m_pAbilityReincarnation; // rbx
  float v4; // xmm0_4
  float v6; // [rsp+Ch] [rbp-14h]

  AggressionFactor = CDOTA_Bot::GetAggressionFactor(this);
  m_pAbilityReincarnation = this->m_pAbilityReincarnation;
  v6 = AggressionFactor;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityReincarnation) >= 0
    && (*(m_pAbilityReincarnation->_vptr_IHandleEntity + 245))(m_pAbilityReincarnation) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityReincarnation)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityReincarnation, -1) )
  {
    v4 = 1.3;
  }
  else
  {
    v4 = 1.0;
  }
  return v4 * v6;
}


// CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast::CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast  (line 52, @0x00000000028d6d20, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast::CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast(
        CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D01B0;
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast::GetCurrentUsageDesire  (line 59, @0x00000000028d9890, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetActiveModeDesire, GetBotByIndex, GetEHandle, GetEntryIndex, GetGenericStunDesire, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetTarget, GetTargetNPC, GetUnit, IsBotTargetStatusValid, IsConsideredHero, IsHero, IsTrained, IsValidBotTarget, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CEntityHandle::operator CEntityInstance*, DOTACommander, CDOTA_Commander::GetIllusionState, CDOTA_Bot::FindNearbyChannelingEnemy, CDOTA_Bot_AbilityUsage::IsValidBotTarget, IsBotTargetStatusValidCore, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun, CDOTA_Bot::IsAboutToDie, CDOTA_TeamCommander::GetOpposingTeamCommander, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTABaseAbility::GetEffectiveLevel (21 total)
int __fastcall CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast *const this)
{
  CDOTA_Bot_Hero_SkeletonKing *m_pBot; // r13
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC_Hero *v4; // r12
  int m_Id; // eax
  unsigned __int8 (__fastcall *v6)(CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast *const, _QWORD); // r13
  CDOTA_Commander *v7; // rax
  DOTA_BOT_ILLUSION_STATE IllusionState; // eax
  int v9; // eax
  __m128i v10; // xmm0
  CDOTA_Bot_Hero_SkeletonKing *v11; // rdi
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rsi
  float v14; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  int v19; // eax
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // rsi
  CDOTA_Bot_Hero_SkeletonKing *v22; // r12
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // r13
  CEntityInstance *v25; // rax
  CDOTA_BaseNPC *v26; // rdi
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // rdi
  CDOTA_Bot_Hero_SkeletonKing *v29; // r12
  CEntityInstance *v30; // rax
  CDOTA_BaseNPC *v31; // rdx
  CEntityInstance *v32; // rax
  CEntityInstance *v33; // r12
  __int64 v34; // rax
  CEntityInstance *v35; // rax
  CDOTA_Bot *v36; // rdi
  __int64 i; // r12
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v39; // rax
  const CEntityHandle *v40; // rdi
  CEntityInstance *v41; // rax
  CDOTA_BaseNPC *v42; // r13
  CEntityInstance *v43; // rax
  CDOTA_BaseNPC *v44; // rsi
  CDOTA_Bot *v45; // rax
  CEntityIdentity *v46; // rax
  int v47; // edx
  __int16 v48; // cx
  CEntityInstance *v49; // rax
  CDOTA_BaseNPC *v50; // rsi
  CDOTA_BaseNPC *v51; // rdi
  int v52; // r12d
  int v53; // r12d
  int v54; // r13d
  CEntityInstance *v55; // rax
  CDOTA_BaseNPC *v56; // rdi
  float ArmorReductionForDamageType; // xmm0_4
  CDOTA_Bot_Hero_SkeletonKing *v58; // r14
  CEntityInstance *v59; // rax
  CEntityInstance *v60; // rdx
  CEntityInstance *v61; // rax
  const CBaseEntity *v62; // rdi
  CDOTA_Bot_Hero_SkeletonKing *v63; // r12
  CEntityInstance *v64; // rax
  CDOTA_BaseNPC *v65; // rdi
  CDOTA_Bot_Hero_SkeletonKing *v66; // rdi
  CEntityInstance *v67; // rax
  const CBaseEntity *v68; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v70; // r12
  CDOTA_BaseNPC *v71; // rsi
  CEntityInstance *v72; // rax
  CDOTA_BaseNPC *v73; // r13
  CEntityInstance *v74; // rax
  CEntityInstance *v75; // rax
  CDOTA_BaseNPC *v76; // rsi
  CDOTA_Bot_Hero_SkeletonKing *v77; // r12
  CEntityInstance *v78; // rax
  CDOTA_BaseNPC *v79; // r13
  CEntityInstance *v80; // rax
  CDOTA_BaseNPC *v81; // rdi
  CEntityInstance *v82; // rax
  CDOTA_BaseNPC *v83; // rdi
  CDOTA_Bot_Hero_SkeletonKing *v84; // r12
  CEntityInstance *v85; // rax
  CDOTA_BaseNPC *v86; // rdx
  float fMaxRange; // [rsp+Ch] [rbp-E4h]
  float fMaxRangea; // [rsp+Ch] [rbp-E4h]
  CEntityHandle v89; // [rsp+10h] [rbp-E0h] BYREF
  float pChannelTimeRemaining; // [rsp+14h] [rbp-DCh] BYREF
  CDOTA_BaseNPC *ppTarget; // [rsp+18h] [rbp-D8h] BYREF
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > v92; // [rsp+20h] [rbp-D0h] BYREF
  _QWORD v93[23]; // [rsp+38h] [rbp-B8h] BYREF

  v93[16] = __readfsqword(0x28u);
  m_pBot = this->m_pBot;
  v3 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
  v4 = v3;
  if ( v3 == 0 )
    goto LABEL_7;
  if ( BYTE3(v3[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_7;
  m_Id = v3[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 3) == 0 && !this->m_bUseOnCreeps )
    goto LABEL_7;
  if ( (m_Id & 1) != 0 )
  {
    v6 = *(this->_vptr_CDOTA_Bot_AbilityUsage + 2);
    v7 = DOTACommander();
    IllusionState = CDOTA_Commander::GetIllusionState(v7, v4);
    if ( v6(this, IllusionState) == 0 )
      goto LABEL_7;
    m_pBot = this->m_pBot;
    v4 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
  }
  v49 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
  if ( v49 == 0 || (v50 = v49, BYTE3(v49[7]._vptr_IHandleEntity) == 0) )
    v50 = 0;
  if ( v4 != 0 && v4->m_bIsDOTANPC )
    v51 = v4;
  else
    v51 = 0;
  if ( IsBotTargetStatusValidCore(v51, v50, 251, -1.0, this->m_pAbility)
    && CDOTABaseAbility::GetEffectiveLevel(this->m_pBot->m_pAbilityReincarnation) >= 0
    && CDOTABaseAbility::GetCooldownTimeRemaining(this->m_pBot->m_pAbilityReincarnation) < 15.0 )
  {
    v52 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
    v53 = (*(this->m_pBot->m_pAbilityReincarnation->_vptr_IHandleEntity + 273))(
            this->m_pBot->m_pAbilityReincarnation,
            0xFFFFFFFFLL)
        + v52;
    v54 = (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
    v55 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v55 == 0 || (v56 = v55, BYTE3(v55[7]._vptr_IHandleEntity) == 0) )
      v56 = 0;
    ArmorReductionForDamageType = CDOTA_BaseNPC::GetArmorReductionForDamageType(v56, 2);
    v58 = this->m_pBot;
    fMaxRangea = ArmorReductionForDamageType;
    v59 = CEntityHandle::operator CEntityInstance *(&v58->m_hUnit);
    if ( v59 != 0 && BYTE3(v59[7]._vptr_IHandleEntity) != 0 )
      v60 = v59;
    else
      v60 = 0;
    if ( v53 > *&v60[44].m_iszPrivateVScripts.u.m_Id )
    {
      v61 = CEntityHandle::operator CEntityInstance *(&v58->m_hTarget);
      if ( v61 != 0 && BYTE3(v61[7]._vptr_IHandleEntity) != 0 )
        v62 = v61;
      else
        v62 = 0;
      if ( (v54 * (1.0 - fMaxRangea)) < CBaseEntity::GetHealth(v62) )
        goto LABEL_75;
    }
  }
LABEL_7:
  v9 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  v10 = 0x43480000u;
  v11 = this->m_pBot;
  ppTarget = 0;
  pChannelTimeRemaining = 0.0;
  *v10.m128i_i32 = v9 + 200.0;
  fMaxRange = v9;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(v11, v10, &ppTarget, &pChannelTimeRemaining) != 0
    && CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, ppTarget) )
  {
    v12 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
      v13 = v12;
    else
      v13 = 0;
    if ( IsBotTargetStatusValidCore(ppTarget, v13, 251, -1.0, this->m_pAbility) )
    {
      v14 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility);
      if ( pChannelTimeRemaining > v14 )
      {
        if ( ppTarget != 0 )
        {
          m_pEntity = ppTarget->m_pEntity;
          if ( m_pEntity != 0 )
          {
LABEL_16:
            v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            if ( m_pEntity->m_EHandle.m_Index == -1 )
              v17 = 0x7FFF;
            else
              v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hDesiredTarget.m_Index) = v17 | this->m_hDesiredTarget.m_Index & 0x8000;
            this->m_hDesiredTarget.m_Index = (v16 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
            return 3;
          }
        }
LABEL_51:
        this->m_hDesiredTarget.m_Index = -1;
        return 3;
      }
    }
  }
  v19 = (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode);
  if ( v19 == 2 )
  {
    v75 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
    if ( v75 != 0 && BYTE3(v75[7]._vptr_IHandleEntity) != 0 )
      v76 = v75;
    else
      v76 = 0;
    if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v76) )
    {
      v77 = this->m_pBot;
      v78 = CEntityHandle::operator CEntityInstance *(&v77->m_hUnit);
      if ( v78 != 0 && BYTE3(v78[7]._vptr_IHandleEntity) != 0 )
        v79 = v78;
      else
        v79 = 0;
      v80 = CEntityHandle::operator CEntityInstance *(&v77->m_hTarget);
      if ( v80 != 0 && BYTE3(v80[7]._vptr_IHandleEntity) != 0 )
        v81 = v80;
      else
        v81 = 0;
      if ( IsBotTargetStatusValidCore(v81, v79, 251, fMaxRange, this->m_pAbility) )
      {
        v82 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v82 == 0 || (v83 = v82, BYTE3(v82[7]._vptr_IHandleEntity) == 0) )
          v83 = 0;
        if ( !CDOTA_BaseNPC::IsMovementImpaired(v83) )
        {
          v84 = this->m_pBot;
          v85 = CEntityHandle::operator CEntityInstance *(&v84->m_hTarget);
          if ( v85 != 0 && BYTE3(v85[7]._vptr_IHandleEntity) != 0 )
            v86 = v85;
          else
            v86 = 0;
          if ( !CDOTA_TeamCommander::HasIncomingStun(v84->m_pTeamCommander, v84, v86) )
          {
            this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
            return 3;
          }
        }
      }
    }
    goto LABEL_75;
  }
  if ( v19 <= 2 )
  {
    if ( v19 == 1 )
    {
      for ( i = 0; i < CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander)->m_BotList.m_Size; ++i )
      {
        OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
        if ( OpposingTeamCommander->m_BotList.m_Size > i && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[i] != 0 )
        {
          v39 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pBot->m_pTeamCommander);
          v40 = 0;
          if ( i < v39->m_BotList.m_Size )
            v40 = v39->m_BotList.m_Memory.m_pMemory[i];
          v41 = CEntityHandle::operator CEntityInstance *(v40 + 39);
          if ( v41 != 0 && BYTE3(v41[7]._vptr_IHandleEntity) != 0 )
            v42 = v41;
          else
            v42 = 0;
          if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v42) )
          {
            v43 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
            if ( v43 != 0 && BYTE3(v43[7]._vptr_IHandleEntity) != 0 )
              v44 = v43;
            else
              v44 = 0;
            if ( IsBotTargetStatusValidCore(v42, v44, 251, fMaxRange, this->m_pAbility) )
            {
              v45 = v42->m_pBot;
              if ( v45 != 0 && v45->m_nAttackingTowers > 0 )
              {
                v46 = v42->m_pEntity;
                if ( v46 != 0 )
                {
                  v47 = (v46->m_EHandle.m_Index >> 15) - (v46->m_flags & 1);
                  if ( v46->m_EHandle.m_Index == -1 )
                    v48 = 0x7FFF;
                  else
                    v48 = v46->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(this->m_hDesiredTarget.m_Index) = v48 | this->m_hDesiredTarget.m_Index & 0x8000;
                  this->m_hDesiredTarget.m_Index = (v47 << 15) | this->m_hDesiredTarget.m_Index & 0x7FFF;
                  return 2;
                }
                else
                {
                  this->m_hDesiredTarget.m_Index = -1;
                  return 2;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_75;
  }
  if ( v19 != 4 )
  {
    if ( v19 == 18 )
    {
      v20 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
        v21 = v20;
      else
        v21 = 0;
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v21) )
      {
        v22 = this->m_pBot;
        v23 = CEntityHandle::operator CEntityInstance *(&v22->m_hUnit);
        if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
          v24 = v23;
        else
          v24 = 0;
        v25 = CEntityHandle::operator CEntityInstance *(&v22->m_hTarget);
        if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 )
          v26 = v25;
        else
          v26 = 0;
        if ( IsBotTargetStatusValidCore(v26, v24, 251, fMaxRange, this->m_pAbility) )
        {
          v27 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
          if ( v27 == 0 || (v28 = v27, BYTE3(v27[7]._vptr_IHandleEntity) == 0) )
            v28 = 0;
          if ( !CDOTA_BaseNPC::IsMovementImpaired(v28) )
          {
            v29 = this->m_pBot;
            v30 = CEntityHandle::operator CEntityInstance *(&v29->m_hTarget);
            if ( v30 != 0 && BYTE3(v30[7]._vptr_IHandleEntity) != 0 )
              v31 = v30;
            else
              v31 = 0;
            if ( !CDOTA_TeamCommander::HasIncomingStun(v29->m_pTeamCommander, v29, v31) )
            {
              v32 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
              v33 = v32;
              if ( v32 != 0 && BYTE3(v32[7]._vptr_IHandleEntity) != 0 && (v32[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              {
                v34 = *&v32[45].m_worldGroupId.m_nHashCode;
                if ( v34 != 0 )
                {
                  v89.m_Index = *(v34 + 712);
                  v35 = CEntityHandle::operator CEntityInstance *(&v89);
                  if ( v35 != 0
                    && BYTE3(v35[7]._vptr_IHandleEntity) != 0
                    && (v35[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    v36 = *&v35[45].m_worldGroupId.m_nHashCode;
                    if ( v36 != 0 && CDOTA_Bot::IsAboutToDie(v36) )
                    {
                      m_pEntity = v33->m_pEntity;
                      if ( m_pEntity != 0 )
                        goto LABEL_16;
                      goto LABEL_51;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_75:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  v63 = this->m_pBot;
  if ( v63->m_fModeDesires[(*(v63->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v63->m_pActiveBotMode)] < 0.75 )
    goto LABEL_75;
  v64 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v64 != 0 && BYTE3(v64[7]._vptr_IHandleEntity) != 0 )
    v65 = v64;
  else
    v65 = 0;
  if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v65) <= 2.0 )
    goto LABEL_75;
  v66 = this->m_pBot;
  v92.m_Size = 0;
  v92.m_Memory.m_nAllocationCount = 32;
  v92.m_Memory.m_nGrowSize = 0x80000000;
  v92.m_Memory.m_pMemory = v93;
  CDOTA_Bot::GetNearbyHeroes(v66, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &v92, fMaxRange);
  v67 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
  if ( v67 != 0 && BYTE3(v67[7]._vptr_IHandleEntity) != 0 )
    v68 = v67;
  else
    v68 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v68);
  SortEHANDLEVectorByLocation(&v92, AbsOrigin, 0);
  if ( v92.m_Size <= 0 )
  {
LABEL_74:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&v92);
    goto LABEL_75;
  }
  v70 = 0;
  while ( 1 )
  {
    v72 = CEntityHandle::operator CEntityInstance *(&v92.m_Memory.m_pMemory[v70]);
    if ( v72 == 0
      || BYTE3(v72[7]._vptr_IHandleEntity) == 0
      || (v73 = v72, (v72[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
    {
      v73 = 0;
    }
    if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v73) )
    {
      v74 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
      if ( v74 != 0 && BYTE3(v74[7]._vptr_IHandleEntity) != 0 )
        v71 = v74;
      else
        v71 = 0;
      if ( IsBotTargetStatusValidCore(v73, v71, 251, fMaxRange, this->m_pAbility)
        && !CDOTA_BaseNPC::IsMovementImpaired(v73)
        && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v73) )
      {
        break;
      }
    }
    if ( ++v70 >= v92.m_Size )
      goto LABEL_74;
  }
  this->m_hDesiredTarget.m_Index = v92.m_Memory.m_pMemory[v70].m_Index;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&v92);
  return 2;
}


// CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast::UseAbility  (line 82, @0x00000000028de7b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_TeamCommander::SetIncomingStun, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// strings: "blast_stun_duration"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast::UseAbility(
        CDOTA_Bot_AbilityUsage_SkeletonKing_HellfireBlast *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  float LevelSpecialValue; // xmm0_4
  float v7; // xmm1_4
  CDOTA_Bot_Hero_SkeletonKing *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v10; // r13

  m_Index = this->m_hDesiredTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDesiredTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hDesiredTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                this->m_pAbility,
                                "blast_stun_duration",
                                -1,
                                1);
          CDOTA_TeamCommander::SetIncomingStun(this->m_pBot->m_pTeamCommander, m_pInstance, LevelSpecialValue, v7);
          m_pBot = this->m_pBot;
          m_pAbility = this->m_pAbility;
          v10 = operator new(0xC0u);
          CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v10, m_pBot, m_pAbility, m_pInstance);
          CDOTA_Bot::PushAction(this->m_pBot, v10);
        }
      }
    }
  }
}


// CDOTA_TutorialBot_Hero_SkeletonKing::CDOTA_TutorialBot_Hero_SkeletonKing  (line 105, @0x00000000028d6d50, libserver.so)
// calls: CDOTA_Bot_Hero_SkeletonKing::CDOTA_Bot_Hero_SkeletonKing
// callers: CreateBotForUnit
void __fastcall CDOTA_TutorialBot_Hero_SkeletonKing::CDOTA_TutorialBot_Hero_SkeletonKing(
        CDOTA_TutorialBot_Hero_SkeletonKing *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  CDOTA_Bot_Hero_SkeletonKing::CDOTA_Bot_Hero_SkeletonKing(this, pPlayer, pUnit, pTeamCommander);
  this->m_bHasSeenEnemy = 0;
  this->_vptr_CDOTA_Bot = &off_42D0210;
}


// CDOTA_TutorialBot_Hero_SkeletonKing::Think  (line 115, @0x00000000028d3000, libserver.so)  // inlines: CEntityHandle, GetAssignedHero, GetBool, GetEntryIndex, GetHandleEntity, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTAPlayer, operator CBaseEntity*
// calls: CDOTA_Bot::GetOwningHero, UTIL_PlayerByIndex, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_Bot::Think
void __fastcall CDOTA_TutorialBot_Hero_SkeletonKing::Think(CDOTA_TutorialBot_Hero_SkeletonKing *const this)
{
  CDOTA_BaseNPC_Hero *OwningHero; // r15
  CEntityIndex v3; // r12d
  CBasePlayer *v4; // rax
  CBasePlayer *v5; // rbx
  unsigned __int16 v6; // dx
  int v7; // esi
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rsi

  if ( dota_tutorial_see_enemy.m_pParent->m_Value.m_nValue == 0 )
  {
LABEL_23:
    this->m_bHasSeenEnemy = 1;
    goto LABEL_24;
  }
  if ( this->m_bHasSeenEnemy )
    goto LABEL_24;
  OwningHero = CDOTA_Bot::GetOwningHero(this);
  if ( OwningHero != 0 && gpGlobals->maxClients > 0 )
  {
    v3.m_Data = 1;
    while ( 1 )
    {
      v4 = UTIL_PlayerByIndex(v3);
      v5 = v4;
      if ( v4 != 0
        && (*(v4->_vptr_IHandleEntity + 140))(v4) != 0
        && (*(v5->_vptr_IHandleEntity + 391))(v5) == 0
        && !v5->m_pl.hltv )
      {
        break;
      }
      if ( gpGlobals->maxClients < ++v3.m_Data )
        goto LABEL_11;
    }
    if ( v5[1].m_iMaxHealth.m_Value == -1 )
    {
      v6 = 0x7FFF;
      v7 = 0x7FFF;
    }
    else
    {
      v6 = v5[1].m_iMaxHealth.m_Value & 0x7FFF;
      v7 = v6;
    }
    v8 = (v5[1].m_iMaxHealth.m_Value >> 15 << 15) | v6 & 0x7FFF;
    if ( (v8 + 2) > 1 )
    {
      v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
      if ( v9 != 0 )
      {
        v10 = &v9[v7 & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( v10->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(OwningHero, m_pInstance) )
          {
            goto LABEL_23;
          }
        }
      }
    }
  }
LABEL_11:
  if ( this->m_bHasSeenEnemy )
LABEL_24:
    CDOTA_Bot::Think(this);
}


