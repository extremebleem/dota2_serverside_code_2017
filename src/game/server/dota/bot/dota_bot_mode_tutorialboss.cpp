
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_TutorialBoss::CDOTA_BotMode_TutorialBoss  (line 26, @0x000000000282a9c0, libserver.so)  // inlines: CEntityHandle, CHandle, Init
// calls: CDOTA_BotMode::CDOTA_BotMode
// callers: CDOTA_TutorialBot_Hero_Razor::CreateMode, CDOTA_TutorialBot_Hero_Tidehunter::CreateMode
void __fastcall CDOTA_BotMode_TutorialBoss::CDOTA_BotMode_TutorialBoss(
        CDOTA_BotMode_TutorialBoss *const this,
        CDOTA_Bot *pBot)
{
  CDOTA_BotMode::CDOTA_BotMode(this, pBot);
  this->_vptr_CDOTA_BotMode = off_42B8F70;  // vptr: CDOTA_BotMode_TutorialBoss
  this->m_hEnemy.m_Index = -1;
  this->m_nSubMode = 0;
  this->m_nLastSubMode = 0;
  this->m_vCoverPos.x = 0.0;
  this->m_vCoverPos.y = 0.0;
  this->m_vCoverPos.z = 0.0;
  this->m_bSpecialAttack = 0;
}


// CDOTA_BotMode_TutorialBoss::OnStart  (line 38, @0x0000000002828c50, libserver.so)  // inlines: NetworkStateChanged, Set, SetBotDebugData, operator=<int>
// calls: CDOTA_BotMode::DoScriptOnStart, CDOTA_BotMode::GetUnit
void __fastcall CDOTA_BotMode_TutorialBoss::OnStart(CDOTA_BotMode_TutorialBoss *const this)
{
  int v2; // r12d
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v4; // rbx

  if ( !CDOTA_BotMode::DoScriptOnStart(this) )
  {
    v2 = (*(this->_vptr_CDOTA_BotMode + 2))(this);
    Unit = CDOTA_BotMode::GetUnit(this);
    v4 = Unit;
    if ( v2 != Unit->m_iBotDebugData.m_Value )
    {
      (*(Unit->_vptr_IHandleEntity + 22))(Unit, 2180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v4->m_iBotDebugData.m_Value = v2;
    }
  }
}


// CDOTA_BotMode_TutorialBoss::OnEnd  (line 48, @0x00000000028278c0, libserver.so)
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_TutorialBoss::OnEnd(CDOTA_BotMode_TutorialBoss *const this)
{
  CDOTA_BotMode::DoScriptOnEnd(this);
}


// CDOTA_BotMode_TutorialBoss::UpdateSubMode  (line 64, @0x0000000002841030, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DistTo, FastSqrt, Get, GetDistanceToEntity, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, Init, Length, Set, SwitchToSubMode, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=, operator[], ~CUtlVector
// calls: CDOTA_Bot::LevelAbilities, CDOTA_Bot::UseAbilities, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::UseItems, CDOTA_Bot::IsUsingItem, CDOTA_Bot::GetNearbyCreeps, CEntityHandle::operator CEntityInstance*, CDOTA_BotMode::GetUnit, CBaseEntity::GetAbsOrigin, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_ScriptedSpawner::GetCurrentMoveToTarget, CBaseEntity::GetAbsAngles (16 total)
// callers: CDOTA_BotMode_TutorialBoss::Think
// strings: "wp_razor_hide"
void __fastcall CDOTA_BotMode_TutorialBoss::UpdateSubMode(CDOTA_BotMode_TutorialBoss *const this)
{
  int m_nSubMode; // eax
  int v3; // eax
  CDOTA_Bot *m_pBot; // rdi
  int v5; // eax
  unsigned __int64 v6; // r13
  __int64 v7; // r15
  CEntityInstance *v8; // rax
  const CBaseEntity *v9; // r12
  CDOTA_BaseNPC *Unit; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v12; // rax
  float v13; // xmm0_4
  CDOTA_BaseNPC *v14; // rax
  CDOTA_ScriptedSpawner *v15; // r12
  CDOTA_BaseNPC *v16; // rax
  CBaseEntity *CurrentMoveToTarget; // r12
  int v18; // eax
  int v19; // eax
  CEntityIdentity *m_pEntity; // rax
  int v21; // edx
  __int16 v22; // cx
  CDOTA_BaseNPC *v23; // rax
  int Health; // r12d
  CDOTA_BaseNPC *v25; // rax
  CBaseEntity *EntityByName; // r12
  CDOTA_BaseNPC *v27; // rax
  const Vector *v28; // rax
  const Vector *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  unsigned __int64 v31; // r13
  __int64 v32; // r15
  CEntityInstance *v33; // rax
  CDOTA_BaseNPC *v34; // r12
  CDOTA_BaseNPC *v35; // rax
  const Vector *v36; // r14
  const Vector *v37; // rax
  float v38; // xmm0_4
  CEntityIdentity *v39; // rdx
  int v40; // eax
  __int16 v41; // cx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  const Vector *v45; // rax
  vec_t v46; // xmm0_4
  int v47; // eax
  CDOTA_BaseNPC *pClosestCreep; // [rsp+10h] [rbp-60h]
  float pClosestCreepb; // [rsp+10h] [rbp-60h]
  CDOTA_BaseNPC *pClosestCreepa; // [rsp+10h] [rbp-60h]
  float flClosestDistance; // [rsp+18h] [rbp-58h]
  float flClosestDistanceb; // [rsp+18h] [rbp-58h]
  float flClosestDistancea; // [rsp+18h] [rbp-58h]
  float z; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEnemyCreeps; // [rsp+20h] [rbp-50h] BYREF

  CDOTA_Bot::LevelAbilities(this->m_pBot);
  CDOTA_Bot::UseAbilities(this->m_pBot);
  if ( CDOTA_Bot::IsUsingAbility(this->m_pBot) )
  {
    m_nSubMode = this->m_nSubMode;
    if ( m_nSubMode != 2 )
    {
      if ( m_nSubMode == 4 )
      {
        this->m_vCoverPos.x = 0.0;
        this->m_vCoverPos.y = 0.0;
        this->m_vCoverPos.z = 0.0;
        this->m_nSubMode = 2;
      }
      else
      {
        if ( m_nSubMode == 5 )
          this->m_hEnemy.m_Index = -1;
        this->m_nSubMode = 2;
      }
    }
    return;
  }
  CDOTA_Bot::UseItems(this->m_pBot);
  if ( CDOTA_Bot::IsUsingItem(this->m_pBot) )
  {
    v3 = this->m_nSubMode;
    if ( v3 != 3 )
    {
      if ( v3 == 4 )
      {
        this->m_vCoverPos.x = 0.0;
        this->m_vCoverPos.y = 0.0;
        this->m_vCoverPos.z = 0.0;
      }
      else if ( v3 == 5 )
      {
        this->m_hEnemy.m_Index = -1;
      }
      this->m_nSubMode = 3;
    }
    return;
  }
  m_pBot = this->m_pBot;
  if ( m_pBot->m_bForceIdle )
  {
    v5 = this->m_nSubMode;
    if ( v5 != 1 )
    {
      if ( v5 == 4 )
      {
        this->m_vCoverPos.x = 0.0;
        this->m_vCoverPos.y = 0.0;
        this->m_vCoverPos.z = 0.0;
      }
      else if ( v5 == 5 )
      {
        this->m_hEnemy.m_Index = -1;
      }
      this->m_nSubMode = 1;
    }
    return;
  }
  if ( !m_pBot->m_bForceCreepAttack )
    goto LABEL_33;
  hEnemyCreeps.m_Size = 0;
  hEnemyCreeps.m_Memory.m_pMemory = 0;
  hEnemyCreeps.m_Memory.m_nAllocationCount = 0;
  hEnemyCreeps.m_Memory.m_nGrowSize = 0;
  CDOTA_Bot::GetNearbyCreeps(m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hEnemyCreeps, 0.0);
  if ( hEnemyCreeps.m_Size <= 0 )
    goto LABEL_32;
  v6 = 0;
  flClosestDistance = 800.0;
  v7 = 4LL * (hEnemyCreeps.m_Size - 1) + 4;
  pClosestCreep = 0;
  do
  {
    v8 = CEntityHandle::operator CEntityInstance *(&hEnemyCreeps.m_Memory.m_pMemory[v6 / 4]);
    v9 = v8;
    if ( v8 == 0 || BYTE3(v8[7]._vptr_IHandleEntity) == 0 )
      v9 = 0;
    Unit = CDOTA_BotMode::GetUnit(this);
    if ( Unit != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(Unit);
      v12 = CBaseEntity::GetAbsOrigin(v9);
      v13 = fsqrt(
              (((v12->x - AbsOrigin->x) * (v12->x - AbsOrigin->x)) + ((v12->y - AbsOrigin->y) * (v12->y - AbsOrigin->y)))
            + ((v12->z - AbsOrigin->z) * (v12->z - AbsOrigin->z)));
      if ( v13 >= 800.0 )
        goto LABEL_24;
    }
    else
    {
      v13 = -1.0;
    }
    if ( flClosestDistance >= v13 )
    {
      flClosestDistance = v13;
      pClosestCreep = v9;
    }
LABEL_24:
    v6 += 4LL;
  }
  while ( v6 != v7 );
  if ( pClosestCreep != 0 )
  {
    v19 = this->m_nSubMode;
    if ( v19 != 7 )
    {
      if ( v19 == 4 )
      {
        this->m_vCoverPos.x = 0.0;
        this->m_vCoverPos.y = 0.0;
        this->m_vCoverPos.z = 0.0;
      }
      else if ( v19 == 5 )
      {
        this->m_hEnemy.m_Index = -1;
      }
      this->m_nSubMode = 7;
    }
    m_pEntity = pClosestCreep->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v21 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v22 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hEnemy.m_Index) = v22 | this->m_hEnemy.m_Index & 0x8000;
      this->m_hEnemy.m_Index = (v21 << 15) | this->m_hEnemy.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hEnemy.m_Index = -1;
    }
    goto LABEL_53;
  }
LABEL_32:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyCreeps);
LABEL_33:
  v14 = CDOTA_BotMode::GetUnit(this);
  v15 = CEntityHandle::operator CEntityInstance *(&v14->m_hTutorialSpawner);
  if ( v15 != 0 )
  {
    v16 = CDOTA_BotMode::GetUnit(this);
    CurrentMoveToTarget = CDOTA_ScriptedSpawner::GetCurrentMoveToTarget(v15, v16);
    if ( CurrentMoveToTarget != 0 )
    {
      v18 = this->m_nSubMode;
      if ( v18 != 8 )
      {
        if ( v18 == 4 )
        {
          this->m_vCoverPos.x = 0.0;
          this->m_vCoverPos.y = 0.0;
          this->m_vCoverPos.z = 0.0;
        }
        else if ( v18 == 5 )
        {
          this->m_hEnemy.m_Index = -1;
        }
        this->m_nSubMode = 8;
      }
      this->m_vTargetPos = *CBaseEntity::GetAbsOrigin(CurrentMoveToTarget);
      this->m_angTargetAngles = *CBaseEntity::GetAbsAngles(CurrentMoveToTarget);
      return;
    }
  }
  v23 = CDOTA_BotMode::GetUnit(this);
  Health = CBaseEntity::GetHealth(v23);
  v25 = CDOTA_BotMode::GetUnit(this);
  if ( (Health / (*(v25->_vptr_IHandleEntity + 156))(v25)) < 0.40000001 )
  {
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, "wp_razor_hide", 0, 0, 0, 0);
    if ( EntityByName != 0 )
    {
      v27 = CDOTA_BotMode::GetUnit(this);
      v28 = CBaseEntity::GetAbsOrigin(v27);
      pClosestCreepb = v28->x;
      flClosestDistanceb = v28->y;
      z = v28->z;
      v29 = CBaseEntity::GetAbsOrigin(EntityByName);
      if ( fsqrt(
             (((pClosestCreepb - v29->x) * (pClosestCreepb - v29->x))
            + ((flClosestDistanceb - v29->y) * (flClosestDistanceb - v29->y)))
           + ((z - v29->z) * (z - v29->z))) > 75.0 )
      {
        v45 = CBaseEntity::GetAbsOrigin(EntityByName);
        this->m_vCoverPos.x = v45->x;
        this->m_vCoverPos.y = v45->y;
        v46 = v45->z;
        v47 = this->m_nSubMode;
        this->m_vCoverPos.z = v46;
        if ( v47 != 4 )
        {
          if ( v47 == 5 )
            this->m_hEnemy.m_Index = -1;
          this->m_nSubMode = 4;
        }
        return;
      }
    }
  }
  hEnemyCreeps.m_Size = 0;
  hEnemyCreeps.m_Memory.m_pMemory = 0;
  hEnemyCreeps.m_Memory.m_nAllocationCount = 0;
  hEnemyCreeps.m_Memory.m_nGrowSize = 0;
  v30 = CDOTA_BotMode::GetUnit(this);
  CDOTA_Bot::FindNearbyHeroes(this->m_pBot, 2000.0, (v30->m_iTeamNum.m_Value == 2) + 2, &hEnemyCreeps);
  if ( hEnemyCreeps.m_Size <= 0 )
    goto LABEL_91;
  v31 = 0;
  flClosestDistancea = 1000.0;
  v32 = 4LL * (hEnemyCreeps.m_Size - 1) + 4;
  pClosestCreepa = 0;
  while ( 2 )
  {
    v33 = CEntityHandle::operator CEntityInstance *(&hEnemyCreeps.m_Memory.m_pMemory[v31 / 4]);
    v34 = v33;
    if ( v33 == 0 || BYTE3(v33[7]._vptr_IHandleEntity) == 0 || (v33[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      v34 = 0;
    if ( CDOTA_BotMode::GetUnit(this) != v34 )
    {
      v35 = CDOTA_BotMode::GetUnit(this);
      if ( v35 == 0 )
      {
        v38 = -1.0;
        goto LABEL_68;
      }
      v36 = CBaseEntity::GetAbsOrigin(v35);
      v37 = CBaseEntity::GetAbsOrigin(v34);
      v38 = fsqrt(
              (((v37->x - v36->x) * (v37->x - v36->x)) + ((v37->y - v36->y) * (v37->y - v36->y)))
            + ((v37->z - v36->z) * (v37->z - v36->z)));
      if ( v38 < 1000.0 )
      {
LABEL_68:
        if ( flClosestDistancea > v38 )
        {
          flClosestDistancea = v38;
          pClosestCreepa = v34;
        }
      }
    }
    v31 += 4LL;
    if ( v31 != v32 )
      continue;
    break;
  }
  if ( pClosestCreepa != 0 )
  {
    v39 = pClosestCreepa->m_pEntity;
    if ( v39 != 0 )
    {
      v40 = (v39->m_EHandle.m_Index >> 15) - (v39->m_flags & 1);
      v41 = 0x7FFF;
      if ( v39->m_EHandle.m_Index != -1 )
        v41 = v39->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hEnemy.m_Index) = v41 | this->m_hEnemy.m_Index & 0x8000;
      this->m_hEnemy.m_Index = (v40 << 15) | this->m_hEnemy.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hEnemy.m_Index = -1;
    }
    if ( flClosestDistancea >= 600.0 || this->m_bSpecialAttack )
    {
      v43 = this->m_nSubMode;
      if ( v43 != 5 )
      {
        if ( v43 == 4 )
        {
          this->m_vCoverPos.x = 0.0;
          this->m_vCoverPos.y = 0.0;
          this->m_vCoverPos.z = 0.0;
        }
        this->m_nSubMode = 5;
      }
    }
    else
    {
      v42 = this->m_nSubMode;
      if ( v42 != 6 )
      {
        if ( v42 == 4 )
        {
          this->m_vCoverPos.x = 0.0;
          this->m_vCoverPos.y = 0.0;
          this->m_vCoverPos.z = 0.0;
        }
        else if ( v42 == 5 )
        {
          this->m_hEnemy.m_Index = -1;
        }
        this->m_nSubMode = 6;
      }
      this->m_bSpecialAttack = 1;
    }
    goto LABEL_53;
  }
LABEL_91:
  v44 = this->m_nSubMode;
  if ( v44 != 1 )
  {
    if ( v44 == 4 )
    {
      this->m_vCoverPos.x = 0.0;
      this->m_vCoverPos.y = 0.0;
      this->m_vCoverPos.z = 0.0;
    }
    else if ( v44 == 5 )
    {
      this->m_hEnemy.m_Index = -1;
    }
    this->m_nSubMode = 1;
  }
LABEL_53:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEnemyCreeps);
}


// CDOTA_BotMode_TutorialBoss::SwitchToSubMode  (line 202, @0x000000000282aa30, libserver.so)  // inlines: Init, Set, operator=
void __fastcall CDOTA_BotMode_TutorialBoss::SwitchToSubMode(CDOTA_BotMode_TutorialBoss *const this, int nNewMode)
{
  int m_nSubMode; // eax

  m_nSubMode = this->m_nSubMode;
  if ( m_nSubMode != nNewMode )
  {
    if ( m_nSubMode == 4 )
    {
      this->m_vCoverPos.x = 0.0;
      this->m_vCoverPos.y = 0.0;
      this->m_vCoverPos.z = 0.0;
      this->m_nSubMode = nNewMode;
    }
    else
    {
      if ( m_nSubMode == 5 )
        this->m_hEnemy.m_Index = -1;
      this->m_nSubMode = nNewMode;
    }
  }
}


// CDOTA_BotMode_TutorialBoss::Think  (line 238, @0x0000000002841950, libserver.so)  // inlines: CVProfScope, DistTo, FastSqrt, Get, GetInstance, IsEnabled, Length, SetNPCAnimation, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CVProfile::ExitScope, CDOTA_BotMode::GetUnit, CBaseEntity::GetHealth, CEntityHandle::operator CEntityInstance*, CDOTA_ScriptedSpawner::OnNPCHealthLow, CDOTA_BotMode_TutorialBoss::UpdateSubMode, __dynamic_cast, CDOTA_Bot::SetAttackAction, CVProfile::EnterScope, CDOTA_Bot::Action_Hold, CDOTA_Bot::SetMoveAction (19 total)
// strings: "CDOTA_BotMode_Companion::Think"
void __fastcall CDOTA_BotMode_TutorialBoss::Think(CDOTA_BotMode_TutorialBoss *const this)
{
  int m_enabled; // eax
  bool v3; // r13
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC *v5; // rax
  __m128i v6; // xmm3
  float v7; // r14d
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_ScriptedSpawner *v10; // rax
  int m_nSubMode; // eax
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rsi
  CDOTA_BaseNPC *v14; // rax
  CEntityInstance *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTABaseAbility *AbilityByIndex; // r15
  CDOTA_BotAction_UseAbility *v18; // r14
  CDOTA_BaseNPC *v19; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v21; // rax
  __int64 v22; // rax
  float x; // [rsp+4h] [rbp-3Ch]
  CDOTA_Bot *pBot; // [rsp+8h] [rbp-38h]
  float pBota; // [rsp+8h] [rbp-38h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BotMode_Companion::Think", 0, "Bots", 0, 4);
  if ( !CDOTA_BotMode::DoScriptThink(this) )
  {
    if ( CDOTA_BotMode::GetUnit(this) != 0 )
    {
      Unit = CDOTA_BotMode::GetUnit(this);
      if ( (*(Unit->_vptr_IHandleEntity + 225))(Unit) != 0 )
      {
        v14 = CDOTA_BotMode::GetUnit(this);
        v15 = CEntityHandle::operator CEntityInstance *(&v14->m_hTutorialSpawner);
        if ( v15 != 0 && HIDWORD(v15[16].m_CScriptComponent) != -1 && BYTE4(v15[17]._vptr_IHandleEntity) != 0 )
          HIDWORD(v15[16].m_CScriptComponent) = -1;
      }
    }
    v5 = CDOTA_BotMode::GetUnit(this);
    *v6.m128i_i32 = CBaseEntity::GetHealth(v5);
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
    v8 = CDOTA_BotMode::GetUnit(this);
    if ( (v7 / (*(v8->_vptr_IHandleEntity + 156))(v8)) <= 0.40000001 )
    {
      v9 = CDOTA_BotMode::GetUnit(this);
      v10 = CEntityHandle::operator CEntityInstance *(&v9->m_hTutorialSpawner);
      if ( v10 != 0 )
        CDOTA_ScriptedSpawner::OnNPCHealthLow(v10);
    }
    CDOTA_BotMode_TutorialBoss::UpdateSubMode(this);
    m_nSubMode = this->m_nSubMode;
    if ( (m_nSubMode - 2) > 1 )
    {
      if ( m_nSubMode == 4 )
      {
        CDOTA_Bot::SetMoveAction(this->m_pBot, &this->m_vCoverPos, 0, 0);
      }
      else if ( (m_nSubMode & 0xFFFFFFFD) == 5 )
      {
        v12 = CEntityHandle::operator CEntityInstance *(&this->m_hEnemy);
        if ( v12 != 0 )
          v13 = __dynamic_cast(v12, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_BaseNPC, 0);
        else
          v13 = 0;
        CDOTA_Bot::SetAttackAction(this->m_pBot, v13, 0);
      }
      else if ( m_nSubMode == 6 )
      {
        v16 = CDOTA_BotMode::GetUnit(this);
        AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v16, 0);
        pBot = this->m_pBot;
        v18 = operator new(0xC0u);
        CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v18, pBot, AbilityByIndex);
        CDOTA_Bot::SetAction(this->m_pBot, v18);
      }
      else if ( m_nSubMode == 8 )
      {
        x = this->m_vTargetPos.x;
        pBota = this->m_vTargetPos.y;
        v19 = CDOTA_BotMode::GetUnit(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v19);
        if ( fsqrt((((AbsOrigin->x - x) * (AbsOrigin->x - x)) + ((AbsOrigin->y - pBota) * (AbsOrigin->y - pBota))) + 0.0) >= 100.0 )
        {
          CDOTA_Bot::SetMoveAction(this->m_pBot, &this->m_vTargetPos, 0, 0);
        }
        else
        {
          v21 = CDOTA_BotMode::GetUnit(this);
          v22 = (*(v21->_vptr_IHandleEntity + 376))(v21);
          (*(*v22 + 920LL))(v22, this->m_angTargetAngles.y);
        }
      }
      else
      {
        if ( m_nSubMode != 1 || this->m_nLastSubMode == 1 )
          goto LABEL_4;
        CDOTA_Bot::Action_Hold(this->m_pBot);
      }
      m_nSubMode = this->m_nSubMode;
    }
    this->m_nLastSubMode = m_nSubMode;
  }
LABEL_4:
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_BotMode_TutorialBoss::CalculateDesiredLocation  (line 363, @0x00000000028276b0, libserver.so)
Vector __fastcall CDOTA_BotMode_TutorialBoss::CalculateDesiredLocation(CDOTA_BotMode_TutorialBoss *const this)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&vec3_origin.x;
  result.z = vec3_origin.z;
  return result;
}


// CDOTA_BotMode_TutorialBoss::GetDesire  (line 370, @0x0000000002829f50, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, PLAT_CPU_TIME, ~CMicroProfilerGuard, ~CVProfScope
// calls: ThreadGetCurrentId, CVProfile::ExitScope, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// strings: "CDOTA_BotMode_Assemble::GetDesire"
float __fastcall CDOTA_BotMode_TutorialBoss::GetDesire(CDOTA_BotMode_TutorialBoss *const this)
{
  ThreadId_t m_TargetThreadId; // r13
  unsigned __int64 v3; // r12
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v6; // rax

  if ( g_VProfCurrentProfile.m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v3 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_Assemble::GetDesire" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CDOTA_BotMode_Assemble::GetDesire",
                       0,
                       "Bots",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v6 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v6->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v3 + __rdtsc();
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  }
  return 1.0;
}


// CDOTA_BotMode_TutorialBoss::GetDebugColor  (line 379, @0x00000000028276d0, libserver.so)
color24 __fastcall CDOTA_BotMode_TutorialBoss::GetDebugColor(CDOTA_BotMode_TutorialBoss *const this)
{
  return 255;
}


