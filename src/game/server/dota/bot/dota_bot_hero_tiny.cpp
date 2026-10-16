
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Hero_Tiny::CDOTA_Bot_Hero_Tiny  (line 21, @0x00000000028e6e10, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, Zero, operator CBaseEntity*
// calls: CDOTA_Bot::CDOTA_Bot, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Bot::~CDOTA_Bot, _Unwind_Resume
// callers: CreateBotForUnit
void __fastcall CDOTA_Bot_Hero_Tiny::CDOTA_Bot_Hero_Tiny(
        CDOTA_Bot_Hero_Tiny *const this,
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
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rdi

  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42D1730;
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  this->m_pAbilityAvalanche = CDOTA_BaseNPC::FindAbilityByName(v6, "tiny_avalanche", 1);
  v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  this->m_pAbilityToss = CDOTA_BaseNPC::FindAbilityByName(v8, "tiny_toss", 1);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  this->m_pAbilityCraggyExterior = CDOTA_BaseNPC::FindAbilityByName(v10, "tiny_craggy_exterior", 1);
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  this->m_pAbilityGrow = CDOTA_BaseNPC::FindAbilityByName(v12, "tiny_grow", 1);
  this->m_fAvalancheExpireTime = 0.0;
  this->m_vAvalancheLocation.z = 0.0;
  this->m_vAvalancheLocation.y = 0.0;
  this->m_vAvalancheLocation.x = 0.0;
}


// CDOTA_Bot_Hero_Tiny::CreateMode  (line 35, @0x00000000028e21e0, libserver.so)  // inlines: CDOTA_BotMode_Attack_Tiny
// calls: CDOTA_Bot::CreateMode, operator new, CDOTA_BotMode_Attack::CDOTA_BotMode_Attack, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Hero_Tiny::CreateMode(CDOTA_Bot_Hero_Tiny *const this, int iMode)
{
  CDOTA_BotMode_Attack *v4; // r12

  if ( this->m_bHuman || iMode != 2 )
    return CDOTA_Bot::CreateMode(this, iMode);
  v4 = operator new(0xE8u);  // new CDOTA_BotMode_Attack_Tiny (size matches)
  CDOTA_BotMode_Attack::CDOTA_BotMode_Attack(v4, this);
  v4->_vptr_CDOTA_BotMode = off_42D1830;  // vptr: CDOTA_BotMode_Attack_Tiny
  return v4;
}


// CDOTA_Bot_Hero_Tiny::HasLocationStun  (line 50, @0x00000000028e3080, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
bool __fastcall CDOTA_Bot_Hero_Tiny::HasLocationStun(CDOTA_Bot_Hero_Tiny *const this)
{
  CDOTABaseAbility *m_pAbilityAvalanche; // rbx

  m_pAbilityAvalanche = this->m_pAbilityAvalanche;
  return CDOTABaseAbility::GetEffectiveLevel(m_pAbilityAvalanche) >= 0
      && (*(m_pAbilityAvalanche->_vptr_IHandleEntity + 245))(m_pAbilityAvalanche) != 0
      && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityAvalanche)
      && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityAvalanche, -1);
}


// CDOTA_Bot_Hero_Tiny::GetGankDistance  (line 57, @0x00000000028e3420, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTA_Bot::GetGankDistance, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
int __fastcall CDOTA_Bot_Hero_Tiny::GetGankDistance(CDOTA_Bot_Hero_Tiny *const this)
{
  CDOTABaseAbility *m_pAbilityAvalanche; // rbx

  m_pAbilityAvalanche = this->m_pAbilityAvalanche;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityAvalanche) >= 0
    && (*(m_pAbilityAvalanche->_vptr_IHandleEntity + 245))(m_pAbilityAvalanche) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityAvalanche)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityAvalanche, -1) )
  {
    return (*(this->m_pAbilityAvalanche->_vptr_IHandleEntity + 226))(this->m_pAbilityAvalanche, &vec3_origin, 0) + 200;
  }
  else
  {
    return CDOTA_Bot::GetGankDistance(this);
  }
}


// CDOTA_Bot_Hero_Tiny::GetMaxRoamDistance  (line 69, @0x00000000028e30e0, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_Bot::GetMaxRoamDistance
int __fastcall CDOTA_Bot_Hero_Tiny::GetMaxRoamDistance(CDOTA_Bot_Hero_Tiny *const this)
{
  CDOTABaseAbility *m_pAbilityAvalanche; // rbx

  m_pAbilityAvalanche = this->m_pAbilityAvalanche;
  if ( CDOTABaseAbility::GetEffectiveLevel(m_pAbilityAvalanche) >= 0
    && (*(m_pAbilityAvalanche->_vptr_IHandleEntity + 245))(m_pAbilityAvalanche) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(m_pAbilityAvalanche)
    && CDOTABaseAbility::IsOwnersGoldEnough(m_pAbilityAvalanche, -1) )
  {
    return CDOTA_Bot::GetMaxRoamDistance(this);
  }
  else
  {
    return 0;
  }
}


// CDOTA_Bot_Hero_Tiny::GetCleavePercent  (line 79, @0x00000000028eb780, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::GetCleavePercent
// strings: "bonus_cleave_damage_scepter"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot_Hero_Tiny::GetCleavePercent(CDOTA_Bot_Hero_Tiny *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  bool HasScepter; // al
  float v7; // xmm1_4

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  HasScepter = CDOTA_BaseNPC::HasScepter(m_pInstance);
  v7 = 0.0;
  if ( HasScepter )
    v7 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbilityGrow, "bonus_cleave_damage_scepter", -1, 1)
       / 100.0;
  return CDOTA_Bot::GetCleavePercent(this) + v7;
}


// CDOTA_Bot_Hero_Tiny::SetAvalancheLocation  (line 92, @0x00000000028e6f70, libserver.so)  // inlines: operator=
void __fastcall CDOTA_Bot_Hero_Tiny::SetAvalancheLocation(
        CDOTA_Bot_Hero_Tiny *const this,
        const Vector *const vLocation)
{
  this->m_vAvalancheLocation = *vLocation;
}


// CDOTA_Bot_Hero_Tiny::SetAvalancheExpireTime  (line 99, @0x00000000028e6fa0, libserver.so)
void __fastcall CDOTA_Bot_Hero_Tiny::SetAvalancheExpireTime(CDOTA_Bot_Hero_Tiny *const this, float a2, float fTime)
{
  this->m_fAvalancheExpireTime = a2;
}


// CDOTA_Bot_Hero_Tiny::IsAvalancheActive  (line 106, @0x00000000028e6fb0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
bool __fastcall CDOTA_Bot_Hero_Tiny::IsAvalancheActive(CDOTA_Bot_Hero_Tiny *const this)
{
  float v1; // xmm1_4

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  return this->m_fAvalancheExpireTime > v1;
}


// CDOTA_Bot_Hero_Tiny::GetAvalancheLocation  (line 113, @0x00000000028e6fe0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, operator=
bool __fastcall CDOTA_Bot_Hero_Tiny::GetAvalancheLocation(CDOTA_Bot_Hero_Tiny *const this, Vector *pLoc)
{
  float v2; // xmm0_4
  vec_t z; // xmm0_4
  bool result; // al

  v2 = 0.0;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  if ( this->m_fAvalancheExpireTime > v2 )
  {
    result = 1;
    pLoc->x = this->m_vAvalancheLocation.x;
    pLoc->y = this->m_vAvalancheLocation.y;
    z = this->m_vAvalancheLocation.z;
  }
  else
  {
    pLoc->x = vec3_origin.x;
    pLoc->y = vec3_origin.y;
    z = vec3_origin.z;
    result = 0;
  }
  pLoc->z = z;
  return result;
}


// CDOTA_BotMode_Attack_Tiny::GetDesire  (line 129, @0x00000000028e4d60, libserver.so)  // inlines: DOTAGameRules, Get, GetGameTime, GetInstance, GetTargetNPC, IsAvalancheActive, Max<float>, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_BotMode_Attack::GetDesire, CDOTA_BotMode::GetUnit, CEntityHandle::operator CEntityInstance*, CDOTA_BotMode::GetBotTargetStatus
float __fastcall CDOTA_BotMode_Attack_Tiny::GetDesire(CDOTA_BotMode_Attack_Tiny *const this)
{
  CDOTA_Bot *m_pBot; // r12
  float v3; // xmm1_4
  float result; // xmm0_4
  CDOTA_BaseNPC *Unit; // r12
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rsi
  __m128 v8; // xmm0
  __m128 v9; // xmm2

  m_pBot = this->m_pBot;
  if ( (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) != 2 )
    return CDOTA_BotMode_Attack::GetDesire(this);
  v3 = 0.0;
  if ( g_pGameRules != 0 )
    v3 = *&g_pGameRules[18].m_szQuestName[20];
  if ( m_pBot[1].m_fExecutionTime[1] <= v3 )
    return CDOTA_BotMode_Attack::GetDesire(this);
  Unit = CDOTA_BotMode::GetUnit(this);
  v6 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
    v7 = v6;
  else
    v7 = 0;
  if ( (CDOTA_BotMode::GetBotTargetStatus(this, v7, Unit, -1.0) & 0xF9) != 0 )
    return CDOTA_BotMode_Attack::GetDesire(this);
  v8.m128_f32[0] = CDOTA_BotMode_Attack::GetDesire(this);
  v9 = _mm_cmplt_ss(0x3F400000u, v8);
  LODWORD(result) = _mm_andnot_ps(v9, 0x3F400000u).m128_u32[0] | v8.m128_i32[0] & v9.m128_i32[0];
  return result;
}


// CDOTA_BotMode_Attack_Tiny::Think  (line 148, @0x00000000028eb850, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntryIndex, GetInstance, GetMana, GetSerialNumber, GetTargetNPC, IsTrained, Set, SetTarget, ToDOTABaseNPC, operator CBaseEntity*, operator=
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot::GetTargetBot, CDOTABaseAbility::GetEffectiveLevel, CDOTA_BotMode::GetUnit, CDOTA_BotMode_Attack::Think, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetDistanceToEntity, CBaseEntity::GetAbsOrigin, CDOTA_Bot::SetMoveAction
void __fastcall CDOTA_BotMode_Attack_Tiny::Think(CDOTA_BotMode_Attack_Tiny *const this)
{
  CDOTA_Bot *m_pBot; // rbx
  CEntityInstance *v3; // rax
  CEntityInstance *v4; // r13
  CEntityInstance *v5; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v7; // cx
  CDOTA_Bot *v8; // rdi
  CDOTA_Bot *TargetBot; // rax
  char v10; // r13
  int v11; // r13d
  int LevelSpecialValue; // ebx
  CDOTA_BaseNPC *Unit; // r13
  CEntityInstance *v14; // rax
  const CBaseEntity *v15; // rdi
  CEntityInstance *v16; // rax
  const CBaseEntity *v17; // rdi
  const Vector *AbsOrigin; // rax
  float m_Value; // [rsp+Ch] [rbp-34h]
  int v20; // [rsp+10h] [rbp-30h]

  m_pBot = this->m_pBot;
  v3 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
  v4 = v3;
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
  {
    v5 = CEntityHandle::operator CEntityInstance *(&this->m_hPotentialGankTarget);
    if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 && v4 != v5 )
    {
      m_pEntity = v5->m_pEntity;
      v20 = -1;
      if ( m_pEntity != 0 )
      {
        v7 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v20 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
      }
      m_pBot->m_hTarget.m_Index = v20;
      v8 = this->m_pBot;
    }
    else
    {
      v8 = m_pBot;
    }
    if ( CDOTA_Bot::GetTargetBot(v8) == 0 )
      goto LABEL_19;
    TargetBot = CDOTA_Bot::GetTargetBot(this->m_pBot);
    if ( (*(TargetBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(TargetBot->m_pActiveBotMode) == 4 )
      goto LABEL_19;
    v10 = 0;
    if ( CDOTABaseAbility::GetEffectiveLevel(m_pBot[1]._vptr_CDOTA_Bot) >= 0 )
      v10 = (*(*m_pBot[1]._vptr_CDOTA_Bot + 245))(m_pBot[1]._vptr_CDOTA_Bot);
    if ( CDOTABaseAbility::GetEffectiveLevel(m_pBot[1].m_References.m_pHead) >= 0
      && (m_pBot[1].m_References.m_pHead->m_pNext[61].m_pPrev)(m_pBot[1].m_References.m_pHead) != 0
      && v10 != 0
      && (m_Value = CDOTA_BotMode::GetUnit(this)->m_flMana.m_Value,
          v11 = (*(*m_pBot[1]._vptr_CDOTA_Bot + 273))(m_pBot[1]._vptr_CDOTA_Bot, 0xFFFFFFFFLL),
          m_Value > ((m_pBot[1].m_References.m_pHead->m_pNext[68].m_pPrev)(m_pBot[1].m_References.m_pHead, 0xFFFFFFFFLL)
                   + v11))
      && ((LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                 m_pBot[1].m_References.m_pHead,
                                 "grab_radius",
                                 -1,
                                 1),
           Unit = CDOTA_BotMode::GetUnit(this),
           (v14 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget)) == 0)
       || BYTE3(v14[7]._vptr_IHandleEntity) == 0
        ? (v15 = 0)
        : (v15 = v14),
          CBaseEntity::GetDistanceToEntity(v15, Unit) > LevelSpecialValue) )
    {
      v16 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
      if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
        v17 = v16;
      else
        v17 = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
      CDOTA_Bot::SetMoveAction(this->m_pBot, AbsOrigin, 1, 1);
    }
    else
    {
LABEL_19:
      CDOTA_BotMode_Attack::Think(this);
    }
  }
}


// CDOTA_Bot_AbilityUsage_Tiny_Avalanche::CDOTA_Bot_AbilityUsage_Tiny_Avalanche  (line 190, @0x00000000028e7070, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Tiny_Avalanche::CDOTA_Bot_AbilityUsage_Tiny_Avalanche(
        CDOTA_Bot_AbilityUsage_Tiny_Avalanche *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D18D0;  // vptr: CDOTA_Bot_AbilityUsage_Tiny_Avalanche
}


// CDOTA_Bot_AbilityUsage_Tiny_Avalanche::FindFilter  (line 197, @0x00000000028e3cb0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot_AbilityUsage_Tiny_Avalanche::FindFilter(
        CDOTA_Bot_AbilityUsage_Tiny_Avalanche *const this,
        _DWORD *hUnit)
{
  _BOOL4 m_bIsDOTANPC; // ebx
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  const CBaseEntity *m_pInstance; // r13
  int Health; // ebx

  m_bIsDOTANPC = 0;
  if ( (*hUnit + 2) <= 1 )
    return m_bIsDOTANPC;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hUnit >> 9) & 0x3F];
  if ( v4 == 0 )
    return m_bIsDOTANPC;
  v5 = &v4[*hUnit & 0x1FF];
  if ( v5 == 0 )
    return m_bIsDOTANPC;
  if ( *hUnit != v5->m_EHandle.m_Index )
    return m_bIsDOTANPC;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return m_bIsDOTANPC;
  m_bIsDOTANPC = m_pInstance->m_bIsDOTANPC;
  if ( !m_bIsDOTANPC
    || (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) != 17 )
  {
    return m_bIsDOTANPC;
  }
  Health = CBaseEntity::GetHealth(m_pInstance);
  LOBYTE(Health) = Health < (*(this->m_pAbility->_vptr_IHandleEntity + 247))(this->m_pAbility);
  return Health;
}


// CDOTA_Bot_AbilityUsage_Tiny_Avalanche::GetCurrentUsageDesire  (line 219, @0x00000000028eca40, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetInstance, GetTarget, GetTargetNPC, GetTeamNumber, GetUnit, IsBotTargetStatusValid, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator->, operator=, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Bot::FindNearbyChannelingEnemy, CDOTA_Bot_AbilityUsage::IsValidBotTarget, CEntityHandle::operator CEntityInstance*, IsBotTargetStatusValidCore, IsInvisibleToBots, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTA_Bot_AbilityUsage::FindTargetAoELocation, CDOTA_BaseNPC::IsMovementImpaired, CDOTA_TeamCommander::HasIncomingStun (20 total)
// globals: jpt_28ECB56
// local variable allocation has failed, the output may be wrong!
int __fastcall CDOTA_Bot_AbilityUsage_Tiny_Avalanche::GetCurrentUsageDesire(
        CDOTA_Bot_AbilityUsage_Tiny_Avalanche *const this)
{
  int v2; // r12d
  int LevelSpecialValue; // eax
  CDOTABaseAbility *m_pAbility; // rdi
  int v5; // r14d
  __m128i v6; // xmm0
  int v7; // eax
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC *v9; // rsi
  CEntityInstance *v11; // rax
  const CBaseEntity *v12; // rdi
  const Vector *v13; // r15
  CEntityInstance *v14; // rax
  CDOTA_BaseNPC *v15; // rdi
  int OpposingTeamNumber; // eax
  CEntityInstance *v17; // rax
  CDOTA_BaseNPC *v18; // rsi
  int v19; // eax
  CDOTA_Bot_Hero_Tiny *v20; // r14
  __m128i v21; // xmm2
  float v22; // r12d
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // r15
  CEntityInstance *v25; // rax
  CDOTA_BaseNPC *v26; // rdi
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // rdi
  CDOTA_Bot_Hero_Tiny *v29; // r12
  CEntityInstance *v30; // rax
  CDOTA_BaseNPC *v31; // rdx
  CEntityInstance *v32; // rax
  CDOTA_BaseNPC *v33; // r12
  __int64 v34; // rax
  CEntityInstance *v35; // rax
  CDOTA_Bot *v36; // rdi
  CDOTA_BaseNPC *v37; // rdi
  CEntityInstance *v38; // rax
  CDOTA_BaseNPC *v39; // rsi
  int v40; // eax
  CDOTA_Bot_Hero_Tiny *m_pBot; // r14
  __m128i v42; // xmm3
  float v43; // r12d
  CEntityInstance *v44; // rax
  CDOTA_BaseNPC *v45; // r15
  CEntityInstance *v46; // rax
  CDOTA_BaseNPC *v47; // rdi
  CEntityInstance *v48; // rax
  CDOTA_BaseNPC *v49; // rdi
  CDOTA_Bot_Hero_Tiny *v50; // r12
  CEntityInstance *v51; // rax
  CDOTA_BaseNPC *v52; // rdx
  CDOTA_Bot_Hero_Tiny *v53; // r12
  CEntityInstance *v54; // rax
  const CBaseEntity *v55; // r14
  const CBaseEntity *v56; // rax
  CEntityInstance *v57; // rax
  CDOTA_BaseNPC *v58; // rdi
  CDOTABaseAbility *v59; // rdi
  int v60; // eax
  CEntityInstance *v61; // rax
  const CBaseEntity *v62; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v64; // r12
  CEntityInstance *v65; // rax
  CDOTA_BaseNPC *v66; // r14
  CEntityInstance *v67; // rax
  CDOTA_BaseNPC *v68; // rsi
  const CBaseEntity *v69; // rax
  int v70; // r12d
  CEntityInstance *v71; // rax
  const CBaseEntity *v72; // rdi
  const Vector *v73; // r15
  CEntityInstance *v74; // rax
  CEntityInstance *v75; // rdx
  CDOTA_Bot_Hero_Tiny *v76; // r12
  unsigned __int8 (__fastcall *v77)(CDOTA_Bot_Hero_Tiny *, _QWORD); // r14
  unsigned int v78; // eax
  CDOTA_Bot_Hero_Tiny *v79; // r12
  unsigned __int8 (__fastcall *v80)(CDOTA_Bot_Hero_Tiny *, _QWORD); // r14
  unsigned int v81; // eax
  float v82; // xmm0_4
  float fMaxRangea; // [rsp+2Ch] [rbp-64h]
  float fMaxRange; // [rsp+2Ch] [rbp-64h]
  float fChannelTimeRemaining; // [rsp+30h] [rbp-60h] BYREF
  int iTargetCount; // [rsp+34h] [rbp-5Ch] BYREF
  CDOTA_BaseNPC *pChannelTarget; // [rsp+38h] [rbp-58h] BYREF
  __int128 vTargetLoc; // [rsp+40h] [rbp-50h] OVERLAPPED BYREF
  int v89; // [rsp+50h] [rbp-40h]
  int v90; // [rsp+54h] [rbp-3Ch]

  v2 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "radius", -1, 1);
  m_pAbility = this->m_pAbility;
  fChannelTimeRemaining = 0.0;
  pChannelTarget = 0;
  v5 = LevelSpecialValue;
  v6 = (*(m_pAbility->_vptr_IHandleEntity + 226))(m_pAbility, &vec3_origin, 0);
  *v6.m128i_i32 = v7;
  if ( CDOTA_Bot::FindNearbyChannelingEnemy(this->m_pBot, v6, &pChannelTarget, &fChannelTimeRemaining) != 0
    && CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, pChannelTarget)
    && ((v8 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit)) != 0
     && BYTE3(v8[7]._vptr_IHandleEntity) != 0
      ? (v9 = v8)
      : (v9 = 0),
        IsBotTargetStatusValidCore(pChannelTarget, v9, 251, -1.0, this->m_pAbility)
     && !IsInvisibleToBots(pChannelTarget)
     && (v82 = (*(this->m_pAbility->_vptr_IHandleEntity + 231))(this->m_pAbility), fChannelTimeRemaining > v82)) )
  {
    v37 = pChannelTarget;
LABEL_114:
    this->m_vDesiredLocation = *CBaseEntity::GetAbsOrigin(v37);
    return 3;
  }
  else
  {
    switch ( (*(this->m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pBot->m_pActiveBotMode) )
    {
      case 2u:
        v38 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v38 != 0 && BYTE3(v38[7]._vptr_IHandleEntity) != 0 )
          v39 = v38;
        else
          v39 = 0;
        if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v39) )
          goto LABEL_10;
        v40 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
        m_pBot = this->m_pBot;
        *v42.m128i_i32 = v40;
        v43 = COERCE_FLOAT(_mm_cvtsi128_si32(v42));
        v44 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hUnit);
        if ( v44 != 0 && BYTE3(v44[7]._vptr_IHandleEntity) != 0 )
          v45 = v44;
        else
          v45 = 0;
        v46 = CEntityHandle::operator CEntityInstance *(&m_pBot->m_hTarget);
        if ( v46 != 0 && BYTE3(v46[7]._vptr_IHandleEntity) != 0 )
          v47 = v46;
        else
          v47 = 0;
        if ( !IsBotTargetStatusValidCore(v47, v45, 251, v43, this->m_pAbility) )
          goto LABEL_10;
        v48 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v48 == 0 || (v49 = v48, BYTE3(v48[7]._vptr_IHandleEntity) == 0) )
          v49 = 0;
        if ( CDOTA_BaseNPC::IsMovementImpaired(v49) )
          goto LABEL_10;
        v50 = this->m_pBot;
        v51 = CEntityHandle::operator CEntityInstance *(&v50->m_hTarget);
        if ( v51 != 0 && BYTE3(v51[7]._vptr_IHandleEntity) != 0 )
          v52 = v51;
        else
          v52 = 0;
        if ( CDOTA_TeamCommander::HasIncomingStun(v50->m_pTeamCommander, v50, v52)
          || CDOTA_Bot::IsUsingSpecificAbility(this->m_pBot, this->m_pAbility) )
        {
          goto LABEL_10;
        }
        if ( CDOTABaseAbility::IsFullyCastable(this->m_pBot->m_pAbilityToss) )
        {
          v53 = this->m_pBot;
          v54 = CEntityHandle::operator CEntityInstance *(&v53->m_hUnit);
          if ( v54 != 0 && BYTE3(v54[7]._vptr_IHandleEntity) != 0 )
            v55 = v54;
          else
            v55 = 0;
          LODWORD(vTargetLoc) = v53->m_hTarget.m_Index;
          v56 = CEntityHandle::operator CEntityInstance *(&vTargetLoc);
          fMaxRangea = CBaseEntity::GetDistanceToEntity(v56, v55);
          if ( (CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pBot->m_pAbilityToss, "grab_radius", -1, 1) + 200) <= fMaxRangea )
            goto LABEL_10;
        }
        LODWORD(vTargetLoc) = this->m_pBot->m_hTarget.m_Index;
        v37 = CEntityHandle::operator CEntityInstance *(&vTargetLoc);
        goto LABEL_114;
      case 4u:
        v57 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v57 != 0 && BYTE3(v57[7]._vptr_IHandleEntity) != 0 )
          v58 = v57;
        else
          v58 = 0;
        if ( CDOTA_BaseNPC::GetEstimatedTimeUntilDeath(v58) >= 5.0 )
          goto LABEL_10;
        v59 = this->m_pAbility;
        LODWORD(vTargetLoc) = 0;
        *(&vTargetLoc + 1) = 0;
        v89 = 0;
        v90 = 0;
        v60 = (*(v59->_vptr_IHandleEntity + 226))(v59, &vec3_origin, 0);
        CDOTA_Bot::GetNearbyHeroes(this->m_pBot, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &vTargetLoc, v60);
        v61 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v61 != 0 && BYTE3(v61[7]._vptr_IHandleEntity) != 0 )
          v62 = v61;
        else
          v62 = 0;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v62);
        SortEHANDLEVectorByLocation(&vTargetLoc, AbsOrigin, 0);
        if ( vTargetLoc <= 0 )
          goto LABEL_9;
        v64 = 0;
        break;
      case 8u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
      case 0xDu:
        v11 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
          v12 = v11;
        else
          v12 = 0;
        v13 = CBaseEntity::GetAbsOrigin(v12);
        v14 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
          v15 = v14;
        else
          v15 = 0;
        OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v15);
        CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
          this,
          OpposingTeamNumber,
          2,
          1,
          v13,
          v2,
          0.0,
          v5,
          &vTargetLoc,
          &iTargetCount);
        if ( iTargetCount <= 3 )
          goto LABEL_18;
        v79 = this->m_pBot;
        v80 = *(v79->_vptr_CDOTA_Bot + 10);
        v81 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
        if ( v80(v79, v81) == 0 )
          goto LABEL_18;
        goto LABEL_101;
      case 0x11u:
        v70 = (v2 + 100.0);
        v71 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v71 != 0 && BYTE3(v71[7]._vptr_IHandleEntity) != 0 )
          v72 = v71;
        else
          v72 = 0;
        v73 = CBaseEntity::GetAbsOrigin(v72);
        v74 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v74 != 0 && BYTE3(v74[7]._vptr_IHandleEntity) != 0 )
          v75 = v74;
        else
          v75 = 0;
        CDOTA_Bot_AbilityUsage::FindTargetAoELocation(
          this,
          HIBYTE(v75[7].m_CScriptComponent),
          2,
          2,
          v73,
          v70,
          0.0,
          v5,
          &vTargetLoc,
          &iTargetCount);
        if ( iTargetCount <= 2 )
          goto LABEL_10;
        v76 = this->m_pBot;
        v77 = *(v76->_vptr_CDOTA_Bot + 10);
        v78 = (*(this->m_pAbility->_vptr_IHandleEntity + 273))(this->m_pAbility, 0xFFFFFFFFLL);
        if ( v77(v76, v78) == 0 )
          goto LABEL_10;
LABEL_101:
        *&this->m_vDesiredLocation.x = vTargetLoc;
        this->m_vDesiredLocation.z = *(&vTargetLoc + 2);
        return 2;
      case 0x12u:
LABEL_18:
        v17 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
          v18 = v17;
        else
          v18 = 0;
        if ( !CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v18) )
          goto LABEL_10;
        v19 = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
        v20 = this->m_pBot;
        *v21.m128i_i32 = v19;
        v22 = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
        v23 = CEntityHandle::operator CEntityInstance *(&v20->m_hUnit);
        if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
          v24 = v23;
        else
          v24 = 0;
        v25 = CEntityHandle::operator CEntityInstance *(&v20->m_hTarget);
        if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 )
          v26 = v25;
        else
          v26 = 0;
        if ( !IsBotTargetStatusValidCore(v26, v24, 251, v22, this->m_pAbility) )
          goto LABEL_10;
        v27 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
        if ( v27 == 0 || (v28 = v27, BYTE3(v27[7]._vptr_IHandleEntity) == 0) )
          v28 = 0;
        if ( CDOTA_BaseNPC::IsMovementImpaired(v28) )
          goto LABEL_10;
        v29 = this->m_pBot;
        v30 = CEntityHandle::operator CEntityInstance *(&v29->m_hTarget);
        if ( v30 != 0 && BYTE3(v30[7]._vptr_IHandleEntity) != 0 )
          v31 = v30;
        else
          v31 = 0;
        if ( CDOTA_TeamCommander::HasIncomingStun(v29->m_pTeamCommander, v29, v31) )
          goto LABEL_10;
        LODWORD(vTargetLoc) = this->m_pBot->m_hTarget.m_Index;
        v32 = CEntityHandle::operator CEntityInstance *(&vTargetLoc);
        v33 = v32;
        if ( v32 == 0 )
          goto LABEL_10;
        if ( BYTE3(v32[7]._vptr_IHandleEntity) == 0 )
          goto LABEL_10;
        if ( (v32[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          goto LABEL_10;
        v34 = *&v32[45].m_worldGroupId.m_nHashCode;
        if ( v34 == 0 )
          goto LABEL_10;
        LODWORD(vTargetLoc) = *(v34 + 712);
        v35 = CEntityHandle::operator CEntityInstance *(&vTargetLoc);
        if ( v35 == 0 )
          goto LABEL_10;
        if ( BYTE3(v35[7]._vptr_IHandleEntity) == 0 )
          goto LABEL_10;
        if ( (v35[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
          goto LABEL_10;
        v36 = *&v35[45].m_worldGroupId.m_nHashCode;
        if ( v36 == 0 || !CDOTA_Bot::IsAboutToDie(v36) )
          goto LABEL_10;
        v37 = v33;
        goto LABEL_114;
      default:
        goto LABEL_10;
    }
    do
    {
      v65 = CEntityHandle::operator CEntityInstance *((*(&vTargetLoc + 1) + 4 * v64));
      if ( v65 == 0
        || BYTE3(v65[7]._vptr_IHandleEntity) == 0
        || (v66 = v65, (v65[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
      {
        v66 = 0;
      }
      if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v66) )
      {
        fMaxRange = (*(this->m_pAbility->_vptr_IHandleEntity + 226))(this->m_pAbility, &vec3_origin, 0);
        v67 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
        if ( v67 != 0 && BYTE3(v67[7]._vptr_IHandleEntity) != 0 )
          v68 = v67;
        else
          v68 = 0;
        if ( IsBotTargetStatusValidCore(v66, v68, 251, fMaxRange, this->m_pAbility)
          && !CDOTA_BaseNPC::IsMovementImpaired(v66)
          && !CDOTA_TeamCommander::HasIncomingStun(this->m_pBot->m_pTeamCommander, this->m_pBot, v66) )
        {
          v69 = CEntityHandle::operator CEntityInstance *((*(&vTargetLoc + 1) + 4 * v64));
          this->m_vDesiredLocation = *CBaseEntity::GetAbsOrigin(v69);
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vTargetLoc);
          return 1;
        }
      }
      ++v64;
    }
    while ( vTargetLoc > v64 );
LABEL_9:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vTargetLoc);
LABEL_10:
    this->m_vDesiredLocation = vec3_origin;
    return 0;
  }
}


// CDOTA_Bot_AbilityUsage_Tiny_Avalanche::UseAbility  (line 356, @0x00000000028e2720, libserver.so)  // inlines: DOTAGameRules, GetGameTime, SetAvalancheExpireTime, SetAvalancheLocation, operator=
// calls: CDOTABaseAbility::GetDuration, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
void __fastcall CDOTA_Bot_AbilityUsage_Tiny_Avalanche::UseAbility(CDOTA_Bot_AbilityUsage_Tiny_Avalanche *const this)
{
  CDOTA_Bot_Hero_Tiny *m_pBot; // rax
  CDOTA_Bot_Hero_Tiny *v3; // r13
  CDOTABaseAbility *m_pAbility; // r14
  CDOTA_BotAction_UseAbility *v5; // r12
  float v6; // [rsp+Ch] [rbp-24h]

  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  else
    v6 = 0.0;
  this->m_pBot->m_fAvalancheExpireTime = CDOTABaseAbility::GetDuration(this->m_pBot->m_pAbilityAvalanche) + v6;
  m_pBot = this->m_pBot;
  m_pBot->m_vAvalancheLocation.x = this->m_vDesiredLocation.x;
  m_pBot->m_vAvalancheLocation.y = this->m_vDesiredLocation.y;
  m_pBot->m_vAvalancheLocation.z = this->m_vDesiredLocation.z;
  v3 = this->m_pBot;
  m_pAbility = this->m_pAbility;
  v5 = operator new(0xC0u);
  CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v5, v3, m_pAbility, &this->m_vDesiredLocation);
  CDOTA_Bot::PushAction(this->m_pBot, v5);
}


// CDOTA_Bot_AbilityUsage_Tiny_Toss::CDOTA_Bot_AbilityUsage_Tiny_Toss  (line 368, @0x00000000028e7090, libserver.so)  // inlines: CDOTA_Bot_AbilityUsage, CDOTA_Bot_AbilityUsageSpecific, CEntityHandle, CHandle
// callers: CreateAbilityUsage
void __fastcall CDOTA_Bot_AbilityUsage_Tiny_Toss::CDOTA_Bot_AbilityUsage_Tiny_Toss(
        CDOTA_Bot_AbilityUsage_Tiny_Toss *const this,
        CDOTA_Bot *pBot,
        CDOTABaseAbility *pAbility)
{
  this->m_pAbility = pAbility;
  this->m_bUseOnCreeps = 0;
  this->m_pBot = pBot;
  this->_vptr_CDOTA_Bot_AbilityUsage = off_42D1930;  // vptr: CDOTA_Bot_AbilityUsage_Tiny_Toss
  this->m_hDesiredTarget.m_Index = -1;
}


// CDOTA_Bot_AbilityUsage_Tiny_Toss::GetCurrentUsageDesire  (line 375, @0x00000000028ed530, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, FastSqrt, Get, GetAvalancheLocation, GetBotTargetStatus, GetDistanceToEntity, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, GetTarget, GetTargetNPC, GetTeamNumber, GetUnit, Length, Set, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndFastRemove, CDOTA_Bot_AbilityUsage::IsValidBotTarget, GetBotTargetStatusCore, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
int __fastcall CDOTA_Bot_AbilityUsage_Tiny_Toss::GetCurrentUsageDesire(CDOTA_Bot_AbilityUsage_Tiny_Toss *const this)
{
  CDOTA_Bot_Hero_Tiny *m_pBot; // r12
  CEntityInstance *v3; // rax
  int LevelSpecialValue; // eax
  CDOTA_Bot_Hero_Tiny *v6; // r14
  int v7; // r15d
  CEntityInstance *v8; // rax
  const CBaseEntity *v9; // r13
  const CBaseEntity *v10; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v12; // rax
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  vec_t x; // xmm1_4
  CDOTA_Bot_Hero_Tiny *v17; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm1_4
  CEntityInstance *v20; // rax
  CDOTA_BaseNPC *v21; // rdx
  CEntityInstance *v22; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v24; // cx
  __int64 v25; // r12
  CDOTA_BaseNPC *v26; // rsi
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // r15
  CEntityInstance *v29; // rax
  CDOTA_BaseNPC *v30; // rdi
  CEntityInstance *v31; // rax
  CHandle<CBaseEntity> src; // [rsp+20h] [rbp-70h] BYREF
  Vector vAvalancheLoc; // [rsp+30h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-50h] BYREF

  m_pBot = this->m_pBot;
  if ( (*(m_pBot->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pBot->m_pActiveBotMode) != 2 )
    goto LABEL_5;
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hTarget);
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 && SLOBYTE(v3[43].m_iszPrivateVScripts.u.m_Id) < 0 )
    return 0;
  if ( (*(m_pBot->m_pAbilityAvalanche->_vptr_IHandleEntity + 245))(m_pBot->m_pAbilityAvalanche) != 0 )
    goto LABEL_5;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this->m_pAbility, "grab_radius", -1, 1);
  v6 = this->m_pBot;
  v7 = LevelSpecialValue;
  v8 = CEntityHandle::operator CEntityInstance *(&v6->m_hTarget);
  v9 = v8;
  if ( v8 == 0 || BYTE3(v8[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_5;
  v10 = CEntityHandle::operator CEntityInstance *(&v6->m_hUnit);
  if ( v10 != 0 && v10->m_bIsDOTANPC )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
    v12 = CBaseEntity::GetAbsOrigin(v9);
    v13 = v12->z - AbsOrigin->z;
    v14 = fsqrt(
            (((v12->x - AbsOrigin->x) * (v12->x - AbsOrigin->x)) + ((v12->y - AbsOrigin->y) * (v12->y - AbsOrigin->y)))
          + (v13 * v13));
  }
  else
  {
    v14 = -1.0;
  }
  if ( v7 <= v14 )
    goto LABEL_5;
  v15 = 0.0;
  if ( g_pGameRules != 0 )
    v15 = *&g_pGameRules[18].m_szQuestName[20];
  if ( m_pBot->m_fAvalancheExpireTime > v15 )
  {
    x = m_pBot->m_vAvalancheLocation.x;
    v17 = this->m_pBot;
    hEntities.m_Size = 0;
    vAvalancheLoc.x = x;
    y = m_pBot->m_vAvalancheLocation.y;
    hEntities.m_Memory.m_pMemory = 0;
    vAvalancheLoc.y = y;
    z = m_pBot->m_vAvalancheLocation.z;
    hEntities.m_Memory.m_nAllocationCount = 0;
    vAvalancheLoc.z = z;
    hEntities.m_Memory.m_nGrowSize = 0;
    v20 = CEntityHandle::operator CEntityInstance *(&v17->m_hUnit);
    if ( v20 != 0 )
    {
      v21 = 0;
      if ( BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
        v21 = v20;
    }
    else
    {
      v21 = 0;
    }
    FindUnitsInRadius(v21->m_iTeamNum.m_Value, &vAvalancheLoc, v21, v7, &hEntities, 3, 19, 128, 1, 0);
    v22 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
    if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
    {
      m_pEntity = v22->m_pEntity;
      src.m_Index = -1;
      if ( m_pEntity != 0 )
      {
        v24 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v24 & 0x7FFF;
      }
    }
    else
    {
      src.m_Index = -1;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndFastRemove(&hEntities, &src);
    if ( hEntities.m_Size > 0 )
    {
      v25 = 0;
      while ( 1 )
      {
        v31 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v25]);
        if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
          v26 = v31;
        else
          v26 = 0;
        if ( CDOTA_Bot_AbilityUsage::IsValidBotTarget(this, v26) )
        {
          v27 = CEntityHandle::operator CEntityInstance *(&this->m_pBot->m_hUnit);
          if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
            v28 = v27;
          else
            v28 = 0;
          v29 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v25]);
          if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
            v30 = v29;
          else
            v30 = 0;
          if ( (GetBotTargetStatusCore(v30, v28, -1.0, this->m_pAbility) & 0xFB) == 0 )
            break;
        }
        if ( hEntities.m_Size <= ++v25 )
          goto LABEL_48;
      }
      this->m_hDesiredTarget.m_Index = hEntities.m_Memory.m_pMemory[v25].m_Index;
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
      return 3;
    }
LABEL_48:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
LABEL_5:
    this->m_hDesiredTarget.m_Index = -1;
    return 0;
  }
  this->m_hDesiredTarget.m_Index = this->m_pBot->m_hTarget.m_Index;
  return 3;
}


// CDOTA_Bot_AbilityUsage_Tiny_Toss::UseAbility  (line 428, @0x00000000028e4730, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_TeamCommander::SetIncomingStun, operator new, CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility, CDOTA_Bot::PushAction, operator delete, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot_AbilityUsage_Tiny_Toss::UseAbility(CDOTA_Bot_AbilityUsage_Tiny_Toss *const this)
{
  float v1; // xmm1_4
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_Bot_Hero_Tiny *m_pBot; // r14
  CDOTABaseAbility *m_pAbility; // r15
  CDOTA_BotAction_UseAbility *v9; // r13

  m_Index = this->m_hDesiredTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDesiredTarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hDesiredTarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          CDOTA_TeamCommander::SetIncomingStun(this->m_pBot->m_pTeamCommander, v5->m_pInstance, 2.0, v1);
          m_pBot = this->m_pBot;
          m_pAbility = this->m_pAbility;
          v9 = operator new(0xC0u);
          CDOTA_BotAction_UseAbility::CDOTA_BotAction_UseAbility(v9, m_pBot, m_pAbility, m_pInstance);
          CDOTA_Bot::PushAction(this->m_pBot, v9);
        }
      }
    }
  }
}


