// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/dota_bot.cpp:60
class CDOTA_Modifier_Diabled_Invulnerable : public CDOTA_Modifier_Invulnerable {
public:

	CDOTA_Modifier_Diabled_Invulnerable(CDOTA_Modifier_Diabled_Invulnerable &);
	CDOTA_Modifier_Diabled_Invulnerable(const CDOTA_Modifier_Diabled_Invulnerable &);
	CDOTA_Modifier_Diabled_Invulnerable();
	virtual ~CDOTA_Modifier_Diabled_Invulnerable();

	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Modifier_Diabled_Invulnerable::~CDOTA_Modifier_Diabled_Invulnerable  (line 60, @0x00000000028124e0, libserver.so)  // inlines: ~CDOTA_Modifier_Invulnerable
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Diabled_Invulnerable::~CDOTA_Modifier_Diabled_Invulnerable(
        CDOTA_Modifier_Diabled_Invulnerable *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E390;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Diabled_Invulnerable::~CDOTA_Modifier_Diabled_Invulnerable  (line 60, @0x0000000002812500, libserver.so)  // inlines: ~CDOTA_Modifier_Diabled_Invulnerable, ~CDOTA_Modifier_Invulnerable
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Diabled_Invulnerable::~CDOTA_Modifier_Diabled_Invulnerable(
        CDOTA_Modifier_Diabled_Invulnerable *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E390;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Bot::CDOTA_Bot  (line 68, @0x00000000027fa780, libserver.so)  // inlines: CDOTA_Bot_Pathing, CEntityHandle, CHandle, CUtlIntrusiveDList, CUtlIntrusiveList, CUtlMemory, CUtlReferenceList, CUtlStack, CUtlVector, CUtlVectorBase, GetEHandle, GetEntryIndex, GetSerialNumber, Invalidate, NetworkStateChanged, Purge, RemoveAll, ResetDbgInfo, Set, operator=, operator=<float>, ~CDOTA_Bot_Pathing, ~CUtlMemory, ~CUtlReferenceList, ~CUtlVector, ~CUtlVectorBase
// calls: CountdownTimer::CountdownTimer, CUtlVectorBase<CDOTA_Bot::sQueuedOrder, CUtlMemory<CDOTA_Bot::sQueuedOrder, int> >::~CUtlVectorBase, CUtlStack<CDOTA_BotAction*, CUtlMemory<CDOTA_BotAction*, int> >::~CUtlStack, CUtlVectorBase<sPathingInfo, CUtlMemory<sPathingInfo, int> >::~CUtlVectorBase, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, CUtlVectorBase<CDOTA_Bot::SortedUnit_t, CUtlMemory<CDOTA_Bot::SortedUnit_t, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlMemory<CDOTABaseAbility*, int>::Purge, CUtlMemory<CDOTA_Bot::sQueuedAction, int>::Purge
// callers: CreateBotForUnit, CDOTA_Bot_Hero_Alchemist::CDOTA_Bot_Hero_Alchemist, CDOTA_Bot_Hero_AncientApparition::CDOTA_Bot_Hero_AncientApparition, CDOTA_Bot_Hero_Antimage::CDOTA_Bot_Hero_Antimage, CDOTA_Bot_Hero_Axe::CDOTA_Bot_Hero_Axe, CDOTA_Bot_Hero_Bane::CDOTA_Bot_Hero_Bane, CDOTA_Bot_Hero_Batrider::CDOTA_Bot_Hero_Batrider, CDOTA_Bot_Hero_Beastmaster::CDOTA_Bot_Hero_Beastmaster, CDOTA_Bot_Hero_Bloodseeker::CDOTA_Bot_Hero_Bloodseeker, CDOTA_Bot_Hero_BountyHunter::CDOTA_Bot_Hero_BountyHunter, CDOTA_Bot_Hero_Brewmaster::CDOTA_Bot_Hero_Brewmaster, CDOTA_Bot_Hero_Bristleback::CDOTA_Bot_Hero_Bristleback (54 total)
void __fastcall CDOTA_Bot::CDOTA_Bot(
        CDOTA_Bot *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  float *m_fExecutionTime; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // xmm3_8
  bool v14; // zf
  double v15; // xmm2_8
  double v16; // xmm1_8
  double v17; // xmm0_8
  __int64 v18; // xmm4_8
  __int64 v19; // xmm5_8
  __int64 v20; // xmm6_8
  __int64 v21; // xmm7_8
  __int64 v22; // xmm3_8
  __int64 v23; // xmm4_8

  m_fExecutionTime = this->m_fExecutionTime;
  *(m_fExecutionTime - 7) = &off_42B6D10;
  *(m_fExecutionTime - 5) = 0;
  memset(m_fExecutionTime, 0, 0x78u);
  this->m_hUnit.m_Index = -1;
  CountdownTimer::CountdownTimer(&this->m_UpdateCurrentLaneTimer);
  CountdownTimer::CountdownTimer(&this->m_UpdateModeTimer);
  CountdownTimer::CountdownTimer(&this->m_ModeThinkTimer);
  CountdownTimer::CountdownTimer(&this->m_InteralRatingsTimer);
  CountdownTimer::CountdownTimer(&this->m_BuybackDelayTimer);
  CountdownTimer::CountdownTimer(&this->m_CourierUsageTimer);
  CountdownTimer::CountdownTimer(&this->m_AbilityMutedTimer);
  CountdownTimer::CountdownTimer(&this->m_AbilityMutedCheckTimer);
  this->m_NearbyCreeps.m_Size = 0;
  this->m_NearbyCreeps.m_Memory.m_pMemory = 0;
  this->m_NearbyCreeps.m_Memory.m_nAllocationCount = 0;
  this->m_NearbyCreeps.m_Memory.m_nGrowSize = 0;
  this->m_NearbyHeroes.m_Size = 0;
  this->m_NearbyHeroes.m_Memory.m_pMemory = 0;
  this->m_NearbyHeroes.m_Memory.m_nAllocationCount = 0;
  this->m_NearbyHeroes.m_Memory.m_nGrowSize = 0;
  this->m_NearbyTowers.m_Size = 0;
  this->m_NearbyTowers.m_Memory.m_pMemory = 0;
  this->m_NearbyTowers.m_Memory.m_nAllocationCount = 0;
  this->m_NearbyTowers.m_Memory.m_nGrowSize = 0;
  this->m_NearbyBarracks.m_Size = 0;
  this->m_NearbyBarracks.m_Memory.m_pMemory = 0;
  this->m_NearbyBarracks.m_Memory.m_nAllocationCount = 0;
  this->m_NearbyBarracks.m_Memory.m_nGrowSize = 0;
  this->m_NearbyShrines.m_Size = 0;
  this->m_NearbyShrines.m_Memory.m_pMemory = 0;
  this->m_NearbyShrines.m_Memory.m_nAllocationCount = 0;
  this->m_NearbyShrines.m_Memory.m_nGrowSize = 0;
  this->m_NearbyTrees.m_Size = 0;
  this->m_NearbyTrees.m_Memory.m_pMemory = 0;
  this->m_NearbyTrees.m_Memory.m_nAllocationCount = 0;
  this->m_NearbyTrees.m_Memory.m_nGrowSize = 0;
  this->m_hTarget.m_Index = -1;
  this->m_hTargetLastHitCreep.m_Index = -1;
  this->m_hMinions.m_Size = 0;
  this->m_hMinions.m_Memory.m_pMemory = 0;
  this->m_hMinions.m_Memory.m_nAllocationCount = 0;
  this->m_hMinions.m_Memory.m_nGrowSize = 0;
  this->m_Build.m_Size = 0;
  this->m_Build.m_Memory.m_pMemory = 0;
  this->m_Build.m_Memory.m_nAllocationCount = 0;
  this->m_Build.m_Memory.m_nGrowSize = 0;
  this->m_Pathing.m_PathingGrid.m_Size = 0;
  this->m_Pathing.m_PathingGrid.m_Memory.m_pMemory = 0;
  this->m_Pathing.m_PathingGrid.m_Memory.m_nAllocationCount = 0;
  this->m_Pathing.m_PathingGrid.m_Memory.m_nGrowSize = 0;
  this->m_AvoidancePathing.m_PathingGrid.m_Size = 0;
  this->m_AvoidancePathing.m_PathingGrid.m_Memory.m_pMemory = 0;
  this->m_AvoidancePathing.m_PathingGrid.m_Memory.m_nAllocationCount = 0;
  this->m_AvoidancePathing.m_PathingGrid.m_Memory.m_nGrowSize = 0;
  this->m_ActionQueue.m_Size = 0;
  this->m_ActionQueue.m_Memory.m_pMemory = 0;
  this->m_ActionQueue.m_Memory.m_nAllocationCount = 0;
  this->m_ActionQueue.m_Memory.m_nGrowSize = 0;
  this->m_ActionStack.m_Memory.m_pMemory = 0;
  this->m_ActionStack.m_Memory.m_nAllocationCount = 0;
  this->m_ActionStack.m_Memory.m_nGrowSize = 0;
  this->m_ActionStack.m_Size = 0;
  this->m_ActionStack.m_pElements = 0;
  this->m_OrderQueue.m_Size = 0;
  this->m_OrderQueue.m_Memory.m_pMemory = 0;
  this->m_OrderQueue.m_Memory.m_nAllocationCount = 0;
  this->m_OrderQueue.m_Memory.m_nGrowSize = 0;
  this->m_iPlayerID = (*(pPlayer->_vptr_IHandleEntity + 393))(pPlayer);
  this->m_pTeamCommander = pTeamCommander;
  if ( pUnit != 0 && (m_pEntity = pUnit->m_pEntity) != 0 )
  {
    v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v10 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hUnit.m_Index) = v10 | this->m_hUnit.m_Index & 0x8000;
    this->m_hUnit.m_Index = (v9 << 15) | this->m_hUnit.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hUnit.m_Index = -1;
  }
  v11 = (*(pPlayer->_vptr_IHandleEntity + 391))(pPlayer);
  this->m_bLiquidate = 0;
  this->m_bHuman = v11 ^ 1;
  v12 = 0;
  this->m_bDoNotPurchase = 0;
  this->m_iCurExecutionTime = 0;
  this->m_iDifficulty = 3;
  this->m_CurrentLane = DOTA_LANE::DOTA_LANE_NONE;
  this->m_MostRecentLane = DOTA_LANE::DOTA_LANE_NONE;
  this->m_AssignedLane = DOTA_LANE::DOTA_LANE_NONE;
  this->m_TargetLane = DOTA_LANE::DOTA_LANE_NONE;
  this->m_ForcedLane = DOTA_LANE::DOTA_LANE_NONE;
  this->m_fCurrentLaneAmount = 0.0;
  this->m_fEstimatedUnitDamage = 0.0;
  this->m_fEstimatedMaxUnitDamage = 0.0;
  this->m_fEstimatedBuildingDamage = 0.0;
  this->m_bWantsToCast = 0;
  this->m_iWantsToCastFrame = 0;
  this->m_bWantsToAttack = 0;
  this->m_iWantsToAttackFrame = 0;
  this->m_iUnitType = 0;
  this->m_HitByTowerTime = 0.0;
  do
  {
    *(this->m_HitByHeroTime + v12) = 0.0;
    v12 += 4;
  }
  while ( v12 != 96 );
  this->m_HitByCreepTime = 0.0;
  LOBYTE(v12) = 0;
  this->m_nNearbyUnitsUpdatedFrame = -1;
  this->m_nNearbyEnemyCreeps = 0;
  this->m_nAttackingCreeps = 0;
  this->m_nAttackingTowers = 0;
  this->m_nAttackingHeroes = 0;
  this->m_pActiveBotMode = 0;
  this->m_iPreviousBotModeType = 0;
  do
  {
    *(this->m_pBotModes + 2 * v12) = 0;
    *(this->m_fModeDesires + v12) = 0.0;
    v12 += 4;
  }
  while ( v12 != 104 );
  this->m_fLastSeen = 0.0;
  v13 = 3212836864LL;
  this->m_nFailedPaths = 0;
  this->m_fTargetLastSeen = 0.0;
  v14 = this->m_UpdateCurrentLaneTimer.m_timestamp.m_Value == -1.0;
  this->m_bWasInvisible = 0;
  *&v15 = LODWORD(vec3_origin.x);
  this->m_bKnownInvisible = 0;
  this->m_fRequestedBlinkStart = 0.0;
  *&v16 = LODWORD(vec3_origin.y);
  *&v17 = LODWORD(vec3_origin.z);
  this->m_vTargetLoc.x = *&v15;
  this->m_vTargetLoc.y = *&v16;
  this->m_vTargetLoc.z = *&v17;
  this->m_vLastSeenLoc.x = *&v15;
  this->m_vLastSeenLoc.y = *&v16;
  this->m_vLastSeenLoc.z = *&v17;
  this->m_vRequestedBlinkLoc.x = *&v15;
  this->m_vRequestedBlinkLoc.y = *&v16;
  this->m_vRequestedBlinkLoc.z = *&v17;
  this->m_fRequestedBlinkExpire = 0.0;
  if ( !v14 )
  {
    (*(this->m_UpdateCurrentLaneTimer._vptr_CountdownTimer + 2))(
      &this->m_UpdateCurrentLaneTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_UpdateCurrentLaneTimer.m_timestamp.m_Value = -1.0;
  }
  v18 = 3212836864LL;
  if ( this->m_UpdateModeTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_UpdateModeTimer._vptr_CountdownTimer + 2))(
      &this->m_UpdateModeTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v17,
      v16,
      v15,
      *&v13,
      -1.0);
    this->m_UpdateModeTimer.m_timestamp.m_Value = -1.0;
  }
  v19 = 3212836864LL;
  if ( this->m_ModeThinkTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_ModeThinkTimer._vptr_CountdownTimer + 2))(
      &this->m_ModeThinkTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v17,
      v16,
      v15,
      *&v13,
      *&v18,
      -1.0);
    this->m_ModeThinkTimer.m_timestamp.m_Value = -1.0;
  }
  v20 = 3212836864LL;
  if ( this->m_InteralRatingsTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_InteralRatingsTimer._vptr_CountdownTimer + 2))(
      &this->m_InteralRatingsTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v17,
      v16,
      v15,
      *&v13,
      *&v18,
      *&v19,
      -1.0);
    this->m_InteralRatingsTimer.m_timestamp.m_Value = -1.0;
  }
  v21 = 3212836864LL;
  if ( this->m_BuybackDelayTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_BuybackDelayTimer._vptr_CountdownTimer + 2))(
      &this->m_BuybackDelayTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v17,
      v16,
      v15,
      *&v13,
      *&v18,
      *&v19,
      *&v20,
      -1.0);
    this->m_BuybackDelayTimer.m_timestamp.m_Value = -1.0;
  }
  v22 = 3212836864LL;
  if ( this->m_CourierUsageTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_CourierUsageTimer._vptr_CountdownTimer + 2))(
      &this->m_CourierUsageTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v17,
      v16,
      v15,
      -1.0,
      *&v18,
      *&v19,
      *&v20,
      *&v21);
    this->m_CourierUsageTimer.m_timestamp.m_Value = -1.0;
  }
  v23 = 3212836864LL;
  if ( this->m_AbilityMutedTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_AbilityMutedTimer._vptr_CountdownTimer + 2))(
      &this->m_AbilityMutedTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v17,
      v16,
      v15,
      *&v22,
      -1.0,
      *&v19,
      *&v20,
      *&v21);
    this->m_AbilityMutedTimer.m_timestamp.m_Value = -1.0;
  }
  if ( this->m_AbilityMutedCheckTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_AbilityMutedCheckTimer._vptr_CountdownTimer + 2))(
      &this->m_AbilityMutedCheckTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v17,
      v16,
      v15,
      *&v22,
      *&v23,
      -1.0,
      *&v20,
      *&v21);
    this->m_AbilityMutedCheckTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_ActionQueue.m_Size = 0;
  this->m_bBypassActionQueue = 0;
  this->m_bForceIdle = 0;
  this->m_nForceAbility = -1;
}


// CDOTA_Bot::Init  (line 160, @0x0000000002807960, libserver.so)  // inlines: AddToTail, CDOTA_BotAction, CDOTA_BotAction_Idle, CopyConstruct<CDOTABaseAbility*>, Element, Find, FindAndRemove, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, GetUnitName, GrowMemory, IndexToIdentity, IsValid, LookupEntity, RemoveAll, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CEntityHandle::operator CEntityInstance*, DOTAGameManager, CDOTAGameManager::GetHeroDataByName, KeyValues::FindKey, KeyValues::GetString, V_stristr_fast(char const*,char const*), KeyValues::GetInt, CDOTA_BaseNPC::GetAbilityByIndex, CUtlVectorBase<CDOTABaseAbility*, CUtlMemory<CDOTABaseAbility*, int> >::Remove, KeyValues::GetFloat, CDOTA_Bot::SwitchToMode, operator new (19 total)
// callers: CDOTA_Bot::SetIsHuman, CDOTA_TeamCommander::RegisterUnit
// strings: "HeroType", "DOTA_BOT_TANK", "DOTA_BOT_STUN_SUPPORT", "DOTA_BOT_PURE_SUPPORT", "DOTA_BOT_PUSH_SUPPORT", "DOTA_BOT_HARD_CARRY" (17 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot::Init(CDOTA_Bot *const this)
{
  EHANDLE *p_m_hUnit; // r14
  CEntityInstance *v3; // rax
  const char *m_pAsString; // r12
  CDOTAGameManager *v5; // rax
  KeyValues *HeroDataByName; // rax
  KeyValues *Key; // rdi
  KeyValues *v8; // r12
  const char *String; // rax
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  const char *v15; // rax
  KeyValues *v16; // rax
  KeyValues *v17; // r12
  __int64 v18; // r15
  CDOTA_BaseNPC *v19; // rdi
  CDOTABaseAbility *AbilityByIndex; // rax
  CEntityInstance *v21; // rax
  int v22; // r15d
  __int64 v23; // r12
  KeyValues *v24; // rax
  float v25; // xmm1_4
  CDOTA_BotMode **m_pBotModes; // r13
  unsigned int v27; // r12d
  CDOTA_BotMode *v28; // rdi
  __int64 v29; // rsi
  int (**vptr_CDOTA_Bot)(...); // rax
  int v31; // eax
  float v32; // xmm1_4
  CDOTA_BotAction *v33; // rax
  KeyValues *i; // r12
  CDOTA_BaseNPC *v35; // rdi
  CDOTABaseAbility *AbilityByName; // rax
  int m_Size; // r15d
  int v38; // ecx
  CDOTABaseAbility **v39; // rdx
  const char *v40; // r15
  CEntityInstance *v41; // rax
  const char *v42; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v44; // rdx
  CEntityIdentity *v45; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *v47; // rax
  int v48; // ecx
  CDOTABaseAbility **m_pMemory; // rdx
  CDOTABaseAbility **v50; // rdx
  int v51; // esi
  CDOTABaseAbility *v52; // [rsp+8h] [rbp-A8h]
  KeyValues *pBotData; // [rsp+10h] [rbp-A0h]
  const KeyValues *pBuildData; // [rsp+18h] [rbp-98h]
  int nAbilityLevels[36]; // [rsp+20h] [rbp-90h] BYREF

  p_m_hUnit = &this->m_hUnit;
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v3 == 0 || BYTE3(v3[7]._vptr_IHandleEntity) == 0 )
    v3 = 0;
  m_pAsString = "";
  if ( v3[70].m_iszPrivateVScripts.u.m_Id != 0 )
    m_pAsString = v3[70].m_iszPrivateVScripts.u.m_pAsString;
  v5 = DOTAGameManager();
  HeroDataByName = CDOTAGameManager::GetHeroDataByName(v5, m_pAsString);
  if ( HeroDataByName != 0 )
  {
    Key = KeyValues::FindKey(HeroDataByName, "Bot", 0);
    pBotData = Key;
    if ( Key != 0 )
    {
      v8 = KeyValues::FindKey(Key, "HeroType", 0);
      String = KeyValues::GetString(v8, 0, "", 0, 0);
      if ( V_stristr_fast(String, "DOTA_BOT_TANK") != 0 )
        this->m_iUnitType |= 1u;
      v10 = KeyValues::GetString(v8, 0, "", 0, 0);
      if ( V_stristr_fast(v10, "DOTA_BOT_STUN_SUPPORT") != 0 )
        this->m_iUnitType |= 2u;
      v11 = KeyValues::GetString(v8, 0, "", 0, 0);
      if ( V_stristr_fast(v11, "DOTA_BOT_PURE_SUPPORT") != 0 )
        this->m_iUnitType |= 4u;
      v12 = KeyValues::GetString(v8, 0, "", 0, 0);
      if ( V_stristr_fast(v12, "DOTA_BOT_PUSH_SUPPORT") != 0 )
        this->m_iUnitType |= 8u;
      v13 = KeyValues::GetString(v8, 0, "", 0, 0);
      if ( V_stristr_fast(v13, "DOTA_BOT_HARD_CARRY") != 0 )
        this->m_iUnitType |= 0x10u;
      v14 = KeyValues::GetString(v8, 0, "", 0, 0);
      if ( V_stristr_fast(v14, "DOTA_BOT_SEMI_CARRY") != 0 )
        this->m_iUnitType |= 0x20u;
      v15 = KeyValues::GetString(v8, 0, "", 0, 0);
      if ( V_stristr_fast(v15, "DOTA_BOT_GANKER") != 0 )
        this->m_iUnitType |= 0x40u;
      v16 = KeyValues::FindKey(pBotData, "LaningInfo", 0);
      v17 = v16;
      if ( v16 != 0 )
      {
        this->m_laningInfo.iSoloDesire = KeyValues::GetInt(v16, "SoloDesire", 0);
        this->m_laningInfo.iRequiresBabysit = KeyValues::GetInt(v17, "RequiresBabysit", 0);
        this->m_laningInfo.iSurvivalRating = KeyValues::GetInt(v17, "SurvivalRating", 0);
        this->m_laningInfo.iProvidesBabysit = KeyValues::GetInt(v17, "ProvidesBabysit", 0);
        this->m_laningInfo.iRequiresFarm = KeyValues::GetInt(v17, "RequiresFarm", 0);
        this->m_laningInfo.iProvidesSetup = KeyValues::GetInt(v17, "ProvidesSetup", 0);
        this->m_laningInfo.iRequiresSetup = KeyValues::GetInt(v17, "RequiresSetup", 0);
      }
      pBuildData = KeyValues::FindKey(pBotData, "Build", 0);
      if ( pBuildData == 0 )
        goto LABEL_37;
      this->m_Build.m_Size = 0;
      v18 = 0;
      memset(nAbilityLevels, 0, 0x60u);
      do
      {
        v21 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
        if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
          v19 = v21;
        else
          v19 = 0;
        AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v19, v18);
        if ( AbilityByIndex != 0 )
          nAbilityLevels[v18] = AbilityByIndex->m_iLevel.m_Value;
        ++v18;
      }
      while ( v18 != 24 );
      for ( i = KeyValues::GetFirstSubKey(pBuildData); i != 0; i = KeyValues::GetNextKey(i) )
      {
        while ( 1 )
        {
          v40 = KeyValues::GetString(i, 0, "", 0, 0);
          v41 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
          if ( v41 != 0 && BYTE3(v41[7]._vptr_IHandleEntity) != 0 )
            v35 = v41;
          else
            v35 = 0;
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v35, v40, 1);
          if ( AbilityByName != 0 )
            break;
          v42 = KeyValues::GetString(i, 0, "", 0, 0);
          Warning("Missing ability: %s\n", v42);
          i = KeyValues::GetNextKey(i);
          if ( i == 0 )
            goto LABEL_58;
        }
        m_Size = this->m_Build.m_Size;
        v38 = m_Size;
        if ( m_Size == this->m_Build.m_Memory.m_nAllocationCount )
        {
          v52 = AbilityByName;
          CUtlMemory<CDOTABaseAbility *,int>::Grow(&this->m_Build.m_Memory, 1);
          v38 = this->m_Build.m_Size;
          AbilityByName = v52;
        }
        this->m_Build.m_Size = v38 + 1;
        v39 = &this->m_Build.m_Memory.m_pMemory[m_Size];
        if ( v39 != 0 )
          *v39 = AbilityByName;
      }
LABEL_58:
      v23 = 0;
LABEL_59:
      v22 = nAbilityLevels[v23];
      if ( v22 <= 0 )
        goto LABEL_36;
      while ( 1 )
      {
        m_Index = this->m_hUnit.m_Index;
        if ( m_Index + 2 <= 1
          || (v44 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
          || (v45 = &v44[this->m_hUnit.m_Index & 0x1FF]) == 0
          || m_Index != v45->m_EHandle.m_Index
          || (m_pInstance = v45->m_pInstance, v45->m_pInstance == 0)
          || !m_pInstance->m_bIsDOTANPC )
        {
          m_pInstance = 0;
        }
        v47 = CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, v23);
        v48 = this->m_Build.m_Size;
        if ( v48 > 0 )
        {
          m_pMemory = this->m_Build.m_Memory.m_pMemory;
          if ( v47 != *m_pMemory )
          {
            v50 = m_pMemory + 1;
            v51 = 0;
            while ( ++v51 != v48 )
            {
              if ( v47 == *v50++ )
              {
                if ( v51 == -1 )
                  goto LABEL_35;
                goto LABEL_34;
              }
            }
            nAbilityLevels[v23] = --v22;
            if ( v22 != 0 )
              continue;
LABEL_36:
            if ( ++v23 == 24 )
            {
LABEL_37:
              this->m_fAggressionFactor = 1.0;
              v24 = KeyValues::FindKey(pBotData, "AggressionFactor", 0);
              if ( v24 != 0 )
                this->m_fAggressionFactor = KeyValues::GetFloat(v24, 0, v25);
              break;
            }
            goto LABEL_59;
          }
          v51 = 0;
LABEL_34:
          CUtlVectorBase<CDOTABaseAbility *,CUtlMemory<CDOTABaseAbility *,int>>::Remove(&this->m_Build, v51);
        }
LABEL_35:
        nAbilityLevels[v23] = --v22;
        if ( v22 == 0 )
          goto LABEL_36;
      }
    }
  }
  this->m_pBotModes[0] = 0;
  m_pBotModes = this->m_pBotModes;
  v27 = 0;
  while ( 1 )
  {
    v29 = v27++;
    *m_pBotModes = (*(this->_vptr_CDOTA_Bot + 12))(this, v29);
    if ( v27 == 26 )
      break;
    v28 = m_pBotModes[1];
    if ( v28 != 0 )
      (*(v28->_vptr_CDOTA_BotMode + 1))(v28);
    ++m_pBotModes;
  }
  vptr_CDOTA_Bot = this->_vptr_CDOTA_Bot;
  this->m_pActiveBotMode = 0;
  v31 = vptr_CDOTA_Bot[4](this);
  CDOTA_Bot::SwitchToMode(this, v31, 0.25, v32);
  this->m_bBypassActionQueue = 1;
  v33 = operator new(0x18u);
  v33->m_pBot = this;
  v33->_vptr_CDOTA_BotAction = off_42B6EB0;
  CDOTA_Bot::SetAction(this, v33);
  this->m_bBypassActionQueue = 0;
  CDOTA_Bot_Pathing::Init(&this->m_Pathing, this);
  CDOTA_Bot_Pathing::Init(&this->m_AvoidancePathing, this);
}


// CDOTA_Bot::GetBotLag  (line 281, @0x00000000027e4820, libserver.so)  // inlines: GetFloat
// callers: CDOTA_Bot_AbilityUsage_Kunkka_Torrent::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Lina_LightStrikearray::GetCurrentUsageDesire
float __fastcall CDOTA_Bot::GetBotLag(CDOTA_Bot *const this)
{
  float m_fValue; // xmm0_4

  m_fValue = dota_bot_fakelag.m_pParent->m_Value.m_fValue;
  if ( m_fValue <= 0.0 )
    return 0.0;
  else
    return m_fValue * 0.001;
}


// CDOTA_Bot::AccumulateExecutionTime  (line 294, @0x00000000027e4850, libserver.so)
void __fastcall CDOTA_Bot::AccumulateExecutionTime(CDOTA_Bot *const this, float a2, float fTime)
{
  float *v3; // rax

  v3 = (this + 4 * this->m_iCurExecutionTime);
  v3[7] = a2 + v3[7];
}


// CDOTA_Bot::ClearExecutionTime  (line 299, @0x00000000027e4870, libserver.so)
// callers: CDOTA_TeamCommander::Think
void __fastcall CDOTA_Bot::ClearExecutionTime(CDOTA_Bot *const this)
{
  int v1; // ecx

  v1 = (this->m_iCurExecutionTime + 1) % 30;
  this->m_iCurExecutionTime = v1;
  this->m_fExecutionTime[v1] = 0.0;
}


// CDOTA_Bot::GetExecutionTime  (line 305, @0x00000000027e48b0, libserver.so)
// callers: CDOTA_TeamCommander::GetDebugInfo
float __fastcall CDOTA_Bot::GetExecutionTime(CDOTA_Bot *const this)
{
  float *m_fExecutionTime; // rax
  int *p_m_iCurExecutionTime; // rdi
  float result; // xmm0_4

  m_fExecutionTime = this->m_fExecutionTime;
  p_m_iCurExecutionTime = &this->m_iCurExecutionTime;
  result = 0.0;
  if ( m_fExecutionTime != p_m_iCurExecutionTime )
  {
    do
      result = result + *m_fExecutionTime++;
    while ( p_m_iCurExecutionTime != m_fExecutionTime );
    return result / 30.0;
  }
  return result;
}


// CDOTA_Bot::Think  (line 319, @0x000000000280b700, libserver.so)  // inlines: AccumulateExecutionTime, CEntityHandle, CHandle, CVProfScope, DOTAGameRules, Destruct<CDOTA_Bot::sQueuedOrder>, Get, GetAssignedLane, GetBool, GetBotLag, GetEHandle, GetEntryIndex, GetFloat, GetGameTime, GetInstance, GetInt, GetPlayer, GetSerialNumber, GetUnit, HasElement, IsBotDisabled, IsEnabled, Purge, Remove, RemoveAll, Set, SetAssignedLane, ShiftElementsLeft, State_Get, State_IsAfter, State_IsAfterGameInProgress, State_Order, ToDOTABaseNPC, V_memmove, memmove, operator CBaseEntity*, operator->, operator=, ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVProfScope, ~sQueuedOrder
// calls: Plat_FloatTime, CDOTA_Bot::UpdateDifficultyMuting, CDOTA_Bot::UpdateEstimatedDamage, CDOTA_Bot::UpdateMinionList, CDOTA_Bot::DoBotScriptBaseThink, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTAFogOfWarSystem::IsLocationVisible, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_BaseNPC::FindModifierByName (41 total)
// callers: CDOTA_TutorialBot_Hero_Axe::Think, CDOTA_TutorialBot_Hero_DragonKnight::Think, CDOTA_TutorialBot_Hero_Juggernaut::Think, CDOTA_TutorialBot_Hero_SkeletonKing::Think, CDOTA_TutorialBot_Hero_Razor::Think, CDOTA_TutorialBot_Hero_Tidehunter::Think, CDOTA_TutorialBot_Hero_VengefulSpirit::Think, CDOTA_TutorialBot_Hero_WitchDoctor::Think
// strings: "modifier_disabled_invulnerable", "CDOTA_Bot::Think"
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING
void __fastcall CDOTA_Bot::Think(CDOTA_Bot *const this)
{
  int m_enabled; // edi
  bool v3; // r12
  __m128d v4; // xmm0
  float v5; // xmm4_4
  CEntityInstance *v6; // rax
  const CBaseEntity *v7; // rdi
  const Vector *AbsOrigin; // r14
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rdi
  int OpposingTeamNumber; // eax
  bool IsLocationVisible; // al
  EHANDLE *p_m_hUnit; // rdi
  CEntityInstance *v14; // rax
  CEntityInstance *v15; // r15
  CBaseEntity *v16; // rax
  CDOTA_BaseNPC *v17; // rdi
  const CBaseEntity *v18; // rax
  float v19; // xmm0_4
  CEntityInstance *v20; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v22; // cx
  int v23; // eax
  EHANDLE *v24; // rdi
  CEntityInstance *v25; // rax
  CDOTA_BaseNPC *v26; // rdi
  __int64 v27; // rax
  int v28; // edx
  DOTA_LANE m_CurrentLane; // eax
  CEntityInstance *v30; // rax
  const CBaseEntity *v31; // rdi
  const Vector *v32; // rax
  CEntityInstance *v33; // rax
  __m128i v34; // xmm0
  float v35; // r13d
  CDOTA_Bot::sQueuedOrder *m_pMemory; // rdi
  float m_fValue; // xmm0_4
  float v38; // xmm0_4
  CDOTA_Bot::sQueuedOrder *v39; // r14
  bool v40; // zf
  int v41; // eax
  const CBaseEntity *v42; // rdi
  float v43; // xmm0_4
  CEntityInstance *v44; // rax
  const CBaseEntity *v45; // rdi
  const Vector *v46; // r14
  CEntityInstance *v47; // rax
  CDOTA_BaseNPC *v48; // rdi
  int v49; // eax
  CEntityInstance *v50; // rax
  const CBaseEntity *v51; // rdi
  float v52; // xmm0_4
  CEntityInstance *v53; // rax
  CDOTA_BaseNPC *v54; // rdi
  CEntityInstance *v55; // rax
  CDOTA_BaseNPC *v56; // rdi
  float fStart; // [rsp+Ch] [rbp-64h]
  DOTA_LANE lane[4]; // [rsp+10h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v60; // [rsp+38h] [rbp-38h]

  v60 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_Bot::Think", 0, "Bots", 0, 4);
  v4.m128d_f64[0] = Plat_FloatTime();
  v5 = _mm_movedup_pd(v4).m128d_f64[0];
  fStart = v5;
  CDOTA_Bot::UpdateDifficultyMuting(this);
  CDOTA_Bot::UpdateEstimatedDamage(this);
  CDOTA_Bot::UpdateMinionList(this);
  if ( CDOTA_Bot::DoBotScriptBaseThink(this) )
  {
    CDOTA_Bot::DoActionThink(this);
    (*(this->_vptr_CDOTA_Bot + 8))(this);
    goto LABEL_54;
  }
  v6 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
    v7 = v6;
  else
    v7 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v10);
  IsLocationVisible = CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, OpposingTeamNumber, AbsOrigin, 0.0);
  p_m_hUnit = &this->m_hUnit;
  if ( !IsLocationVisible )
    goto LABEL_81;
  v14 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  v15 = v14;
  if ( v14 == 0 || BYTE3(v14[7]._vptr_IHandleEntity) == 0 )
  {
    if ( v14 == 0 )
      goto LABEL_77;
    goto LABEL_76;
  }
  if ( SLOBYTE(v14[58]._vptr_IHandleEntity) >= 0 )
  {
LABEL_76:
    v42 = v14;
    if ( BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
    {
LABEL_78:
      this->m_vLastSeenLoc = *CBaseEntity::GetAbsOrigin(v42);
      v43 = 0.0;
      if ( g_pGameRules != 0 )
        v43 = *&g_pGameRules[18].m_szQuestName[20];
      this->m_fLastSeen = v43;
      p_m_hUnit = &this->m_hUnit;
LABEL_81:
      v15 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      goto LABEL_14;
    }
LABEL_77:
    v42 = 0;
    goto LABEL_78;
  }
LABEL_14:
  v16 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  if ( v16 != 0 && v16->m_bIsDOTANPC )
  {
    if ( v15 == 0 || (v17 = v15, BYTE3(v15[7]._vptr_IHandleEntity) == 0) )
      v17 = 0;
    if ( CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(v17, v16) )
    {
      v18 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
      this->m_vTargetLoc = *CBaseEntity::GetAbsOrigin(v18);
      if ( g_pGameRules != 0 )
        v19 = *&g_pGameRules[18].m_szQuestName[20];
      else
        v19 = 0.0;
      this->m_fTargetLastSeen = v19;
    }
    v15 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  }
  if ( v15 == 0 || BYTE3(v15[7]._vptr_IHandleEntity) == 0 )
    v15 = 0;
  if ( SLOBYTE(v15[58]._vptr_IHandleEntity) >= 0 || CDOTA_Bot::IsSneakyInvis(this) )
  {
    this->m_bKnownInvisible = 0;
    this->m_bWasInvisible = 0;
  }
  else if ( !this->m_bWasInvisible )
  {
    this->m_bWasInvisible = 1;
    v44 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
    if ( v44 != 0 && BYTE3(v44[7]._vptr_IHandleEntity) != 0 )
      v45 = v44;
    else
      v45 = 0;
    v46 = CBaseEntity::GetAbsOrigin(v45);
    v47 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
    if ( v47 != 0 && BYTE3(v47[7]._vptr_IHandleEntity) != 0 )
      v48 = v47;
    else
      v48 = 0;
    v49 = CDOTA_BaseNPC::GetOpposingTeamNumber(v48);
    if ( CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, v49, v46, 0.0) )
    {
      this->m_bKnownInvisible = 1;
      v50 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
      if ( v50 != 0 && BYTE3(v50[7]._vptr_IHandleEntity) != 0 )
        v51 = v50;
      else
        v51 = 0;
      this->m_vLastSeenLoc = *CBaseEntity::GetAbsOrigin(v51);
      v52 = 0.0;
      if ( g_pGameRules != 0 )
        v52 = *&g_pGameRules[18].m_szQuestName[20];
      this->m_fLastSeen = v52;
    }
  }
  v20 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
  {
    lane[0] = -1;
    m_pEntity = v20->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v22 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      lane[0] = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v22 & 0x7FFF;
    }
  }
  else
  {
    lane[0] = -1;
  }
  v23 = CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
          &this->m_pTeamCommander->m_hDisabledBots,
          lane);
  v24 = &this->m_hUnit;
  if ( v23 < 0 )
  {
    v53 = CEntityHandle::operator CEntityInstance *(v24);
    if ( v53 != 0 && BYTE3(v53[7]._vptr_IHandleEntity) != 0 )
      v54 = v53;
    else
      v54 = 0;
    CDOTA_BaseNPC::RemoveModifierByName(v54, "modifier_disabled_invulnerable");
  }
  else
  {
    v25 = CEntityHandle::operator CEntityInstance *(v24);
    if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 )
      v26 = v25;
    else
      v26 = 0;
    if ( CDOTA_BaseNPC::FindModifierByName(v26, "modifier_disabled_invulnerable", 0) == 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_disabled_invulnerable");
      v55 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
      v56 = 0;
      if ( v55 != 0 && BYTE3(v55[7]._vptr_IHandleEntity) != 0 )
        v56 = v55;
      CDOTA_BaseNPC::AddNewModifier(v56, v56, 0, "modifier_disabled_invulnerable", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
  v27 = *&g_pGameRules[6].m_szQuestName[28];
  if ( v27 == 5 )
    goto LABEL_43;
  v28 = 0;
  if ( v27 <= 0xA )
    v28 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v27];
  if ( dword_491AD14 < v28 )
  {
LABEL_43:
    if ( this->m_bHuman )
      m_CurrentLane = this->m_CurrentLane;
    else
      m_CurrentLane = this->m_AssignedLane;
    if ( m_CurrentLane == DOTA_LANE::DOTA_LANE_NONE )
    {
      v30 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
      if ( v30 == 0 || (v31 = v30, BYTE3(v30[7]._vptr_IHandleEntity) == 0) )
        v31 = 0;
      v32 = CBaseEntity::GetAbsOrigin(v31);
      CDOTA_TeamCommander::FindClosestLane(this->m_pTeamCommander, v32, 2000.0, lane, 0);
      if ( !this->m_bHuman )
        this->m_AssignedLane = lane[0];
    }
  }
  if ( CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, this->m_iPlayerID) != 0 )
  {
    v33 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
    if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 && dota_bot_disable.m_pParent->m_Value.m_nValue == 0 )
    {
      if ( this->m_bHuman )
      {
        CDOTA_Bot::UpdateAttackers(this);
        CDOTA_Bot::UpdateInternalRatings(this);
        CDOTA_Bot::UpdateCurrentLane(this);
        CDOTA_Bot::UpdateInferredMode(this);
        CDOTA_Bot::DoModeThink(this);
        (*(this->_vptr_CDOTA_Bot + 8))(this);
      }
      else
      {
        CDOTA_Bot::UpdateAttackers(this);
        CDOTA_Bot::UpdateMode(this);
        CDOTA_Bot::UpdateCurrentLane(this);
        CDOTA_Bot::UpdateInternalRatings(this);
        CDOTA_Bot::OptimizeBackpackItems(this);
        CDOTA_Bot::LevelAbilities(this);
        CDOTA_Bot::UseAbilities(this);
        CDOTA_Bot::UseItems(this);
        CDOTA_Bot::DoModeThink(this);
        (*(this->_vptr_CDOTA_Bot + 8))(this);
        CDOTA_Bot::DoActionThink(this);
        CDOTA_Bot::ConsiderCourierUsage(this);
        CDOTA_Bot::ConsiderBuyback(this);
      }
      CDOTA_Bot::DrawDebug(this);
      *v34.m128i_i32 = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0);
      v35 = COERCE_FLOAT(_mm_cvtsi128_si32(v34));
      if ( this->m_OrderQueue.m_Size != 0 )
      {
        do
        {
          m_pMemory = this->m_OrderQueue.m_Memory.m_pMemory;
          m_fValue = dota_bot_fakelag.m_pParent->m_Value.m_fValue;
          if ( m_fValue <= 0.0 )
            v38 = 0.0;
          else
            v38 = m_fValue * 0.001;
          if ( v35 < (v38 + m_pMemory->fQueuedTime) )
            break;
          DOTA_ExecuteOrders(&m_pMemory->order, 1, 0, 0);
          v39 = this->m_OrderQueue.m_Memory.m_pMemory;
          v40 = (v39->order.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0;
          v39->order.m_nUnits.m_Size = 0;
          if ( v40 )
          {
            CUtlMemory<CEntityIndex,int>::Purge(&v39->order.m_nUnits.m_Memory);
            if ( (v39->order.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CEntityIndex,int>::Purge(&v39->order.m_nUnits.m_Memory);
          }
          v41 = this->m_OrderQueue.m_Size - 1;
          if ( v41 > 0 )
          {
            memmove(this->m_OrderQueue.m_Memory.m_pMemory, &this->m_OrderQueue.m_Memory.m_pMemory[1], 72LL * v41);
            v41 = this->m_OrderQueue.m_Size - 1;
          }
          this->m_OrderQueue.m_Size = v41;
        }
        while ( v41 != 0 );
      }
    }
  }
LABEL_54:
  this->m_fExecutionTime[this->m_iCurExecutionTime] = (Plat_FloatTime() - fStart)
                                                    + this->m_fExecutionTime[this->m_iCurExecutionTime];
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_Bot::SetIsHuman  (line 452, @0x0000000002808010, libserver.so)
// calls: CDOTA_Bot::Init
// callers: CDOTAGamerules::PlayerSpawn, CDOTAGamerules::ClientDisconnected
void __fastcall CDOTA_Bot::SetIsHuman(CDOTA_Bot *const this, bool bIsHuman, int iPlayerID)
{
  this->m_bHuman = bIsHuman;
  this->m_iPlayerID = iPlayerID;
  CDOTA_Bot::Init(this);
}


// CDOTA_Bot::GetPlayer  (line 462, @0x00000000027e48f0, libserver.so)
// calls: CDOTA_PlayerResource::GetPlayer
// callers: CDOTA_TeamCommander::CommanderChatMessageRequest
CDOTAPlayer *__fastcall CDOTA_Bot::GetPlayer(CDOTA_Bot *const this)
{
  return CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, this->m_iPlayerID);
}


// CDOTA_Bot::IsMyMinion  (line 469, @0x00000000027e4910, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTA_Bot_Script::IsMyScriptBot
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::IsMyMinion(CDOTA_Bot *const this, CDOTA_Bot *pBot)
{
  CHandle<CBaseEntity> *m_pMemory; // rdx
  CHandle<CBaseEntity> *v3; // r8
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  CEntityInstance *m_pInstance; // rcx
  bool result; // al

  m_pMemory = this->m_hMinions.m_Memory.m_pMemory;
  v3 = &m_pMemory[this->m_hMinions.m_Size];
  if ( m_pMemory == v3 )
    return 0;
  while ( 1 )
  {
    if ( m_pMemory->m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[m_pMemory->m_Index & 0x1FF];
        if ( v5 != 0 && m_pMemory->m_Index == v5->m_EHandle.m_Index )
        {
          m_pInstance = v5->m_pInstance;
          if ( m_pInstance != 0 )
          {
            result = BYTE3(m_pInstance[7]._vptr_IHandleEntity);
            if ( result && *&m_pInstance[45].m_worldGroupId.m_nHashCode == pBot )
              break;
          }
        }
      }
    }
    if ( v3 == ++m_pMemory )
      return 0;
  }
  return result;
}


// CDOTA_Bot::SetAssignedLane  (line 483, @0x00000000027e49b0, libserver.so)
// callers: CDOTA_TeamCommander::DoBotScriptLaneAssignments, CDOTA_TeamCommander::UpdateLaneAssignments
void __fastcall CDOTA_Bot::SetAssignedLane(CDOTA_Bot *const this, DOTA_LANE lane)
{
  if ( !this->m_bHuman )
    this->m_AssignedLane = lane;
}


// CDOTA_Bot::GetAssignedLane  (line 493, @0x00000000027e49d0, libserver.so)
// callers: CDOTA_BotMode_Roam::OnEnd, CDOTA_BotMode_Farm::GetFarmDesire, CDOTA_BotMode_Farm::GetDesire, CDOTA_BotMode_Laning::CalculateDesiredLocation, CDOTA_BotMode_Laning::Think, CDOTA_BotMode_Roam::GetRoamScore, CDOTA_Bot_Script::GetAssignedLane, CDOTA_TeamCommander::BuildDebugString
DOTA_LANE __fastcall CDOTA_Bot::GetAssignedLane(CDOTA_Bot *const this)
{
  if ( this->m_bHuman )
    return this->m_CurrentLane;
  else
    return this->m_AssignedLane;
}


// CDOTA_Bot::GetMostRecentLane  (line 500, @0x00000000027e49f0, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTA_TeamCommander::GetBaseLocation, CBaseEntity::GetAbsOrigin, _Unwind_Resume
// callers: CDOTA_TeamCommander::UpdateLaneAssignments
// globals: CEntityHandle::gm_pEntityList
DOTA_LANE __fastcall CDOTA_Bot::GetMostRecentLane(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  DOTA_LANE result; // eax
  __int64 v8; // xmm0_8
  __int64 v9; // [rsp+10h] [rbp-20h]

  v8 = *&CDOTA_TeamCommander::GetBaseLocation(this->m_pTeamCommander).x;
  m_Index = this->m_hUnit.m_Index;
  v9 = v8;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  if ( fsqrt(((AbsOrigin->x - *&v9) * (AbsOrigin->x - *&v9)) + ((AbsOrigin->y - *(&v9 + 1)) * (AbsOrigin->y - *(&v9 + 1)))) <= 6000.0 )
    return this->m_MostRecentLane;
  result = this->m_CurrentLane;
  if ( result == DOTA_LANE::DOTA_LANE_NONE )
    return this->m_MostRecentLane;
  this->m_MostRecentLane = result;
  return result;
}


// CDOTA_Bot::IsPushingIntoBase  (line 513, @0x00000000027e4af0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTarget, IndexToIdentity, LookupEntity, ToDOTABaseNPC, ToDOTABuilding, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_TeamCommander::GetLeadBuildingInLaneTier
// callers: CDOTA_BotMode_Farm::GetFarmDesire
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::IsPushingIntoBase(CDOTA_Bot *const this)
{
  bool result; // al
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rax

  result = ((*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode) == 8
         || (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode) == 9
         || (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode) == 10)
        && (m_Index = this->m_hTarget.m_Index) + 2 > 1
        && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F]) != 0
        && (v5 = &v4[m_Index & 0x1FF]) != 0
        && m_Index == v5->m_EHandle.m_Index
        && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
        && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
        && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x14) != 0
        && CDOTA_TeamCommander::GetLeadBuildingInLaneTier(
             this->m_pTeamCommander,
             m_pInstance[97].m_iszPrivateVScripts.u.m_Id) > 2;
  return result;
}


// CDOTA_Bot::UpdateCurrentLane  (line 534, @0x00000000027e4be0, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, Get, GetElapsed, GetInstance, GetTimebaseRegister, GetUnit, InTargetThread, IsElapsed, IsEnabled, NetworkStateChanged, PLAT_CPU_TIME, Set, Start, ToDOTABaseNPC, operator CBaseEntity*, operator=<float>, ~CMicroProfilerGuard, ~CVProfScope
// calls: CountdownTimer::Now, RandomFloat, CEntityHandle::operator CEntityInstance*, CDOTA_TeamCommander::FindCurrentLane, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: CDOTA_Bot::Think
// strings: "CDOTA_Bot::UpdateCurrentLane"
void __fastcall CDOTA_Bot::UpdateCurrentLane(CDOTA_Bot *const this)
{
  int m_enabled; // eax
  bool v3; // r13
  __m128i v4; // xmm0
  double v5; // xmm1_8
  double v6; // xmm2_8
  __m128i v7; // xmm3
  float v8; // r15d
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rsi
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v12; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v15; // rax
  float fUpdateTimea; // [rsp+Ch] [rbp-34h]
  float fUpdateTime; // [rsp+Ch] [rbp-34h]

  if ( this->m_UpdateCurrentLaneTimer.m_timestamp.m_Value <= 0.0
    || CountdownTimer::Now(&this->m_UpdateCurrentLaneTimer) >= this->m_UpdateCurrentLaneTimer.m_timestamp.m_Value )
  {
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v3 = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
      v12 = __rdtsc();
      if ( m_TargetThreadId == ThreadGetCurrentId() )
      {
        m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
        if ( m_pCurNode->m_pszName != "CDOTA_Bot::UpdateCurrentLane" )
        {
          m_pCurNode = CVProfNode::GetSubNode(
                         g_VProfCurrentProfile.m_pCurNode,
                         "CDOTA_Bot::UpdateCurrentLane",
                         0,
                         "Bots",
                         4);
          g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
        }
        v15 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
        v15->m_BudgetFlags |= 4u;
        CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
        g_VProfCurrentProfile.m_fAtRoot = 0;
      }
      m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v12 + __rdtsc();
    }
    fUpdateTimea = RandomFloat(0.2, 0.30000001);
    fUpdateTime = fUpdateTimea * (*(*engine + 96LL))(engine);
    *v4.m128i_i32 = CountdownTimer::Now(&this->m_UpdateCurrentLaneTimer);
    v7 = v4;
    *v7.m128i_i32 = *v4.m128i_i32 + fUpdateTime;
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
    if ( (*v4.m128i_i32 + fUpdateTime) != this->m_UpdateCurrentLaneTimer.m_timestamp.m_Value )
    {
      (*(this->m_UpdateCurrentLaneTimer._vptr_CountdownTimer + 2))(
        &this->m_UpdateCurrentLaneTimer,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      this->m_UpdateCurrentLaneTimer.m_timestamp.m_Value = v8;
    }
    if ( fUpdateTime != this->m_UpdateCurrentLaneTimer.m_duration.m_Value )
    {
      (*(this->m_UpdateCurrentLaneTimer._vptr_CountdownTimer + 2))(
        &this->m_UpdateCurrentLaneTimer,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        *v4.m128i_i64,
        v5,
        v6,
        *v7.m128i_i64,
        fUpdateTime);
      this->m_UpdateCurrentLaneTimer.m_duration.m_Value = fUpdateTime;
    }
    v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
    if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
      v10 = v9;
    else
      v10 = 0;
    CDOTA_TeamCommander::FindCurrentLane(this->m_pTeamCommander, v10, &this->m_CurrentLane, &this->m_fCurrentLaneAmount);
    if ( v3 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
  }
}


// CDOTA_Bot::UpdateMode  (line 550, @0x0000000002803dc0, libserver.so)  // inlines: IsElapsed, NetworkStateChanged, Set, Start, operator=<float>
// calls: CountdownTimer::Now, RandomFloat, CDOTA_Bot::GetMostDesiredMode, CDOTA_Bot::SwitchToMode
// callers: CDOTA_Bot::Think
void __fastcall CDOTA_Bot::UpdateMode(CDOTA_Bot *const this)
{
  CountdownTimer *p_m_UpdateModeTimer; // r12
  double v3; // xmm0_8
  double v4; // xmm1_8
  double v5; // xmm2_8
  float v6; // xmm1_4
  float v7; // [rsp+8h] [rbp-28h]
  float fUpdateTimea; // [rsp+Ch] [rbp-24h]
  float fUpdateTime; // [rsp+Ch] [rbp-24h]
  DOTA_BOT_MODE iDesiredMode; // [rsp+18h] [rbp-18h] BYREF
  float fDesire[5]; // [rsp+1Ch] [rbp-14h] BYREF

  p_m_UpdateModeTimer = &this->m_UpdateModeTimer;
  if ( this->m_UpdateModeTimer.m_timestamp.m_Value <= 0.0
    || CountdownTimer::Now(&this->m_UpdateModeTimer) >= this->m_UpdateModeTimer.m_timestamp.m_Value )
  {
    fUpdateTimea = RandomFloat(0.2, 0.40000001);
    fUpdateTime = fUpdateTimea * (*(*engine + 96LL))(engine);
    *&v3 = CountdownTimer::Now(p_m_UpdateModeTimer) + fUpdateTime;
    if ( *&v3 != this->m_UpdateModeTimer.m_timestamp.m_Value )
    {
      v7 = *&v3;
      (*(this->m_UpdateModeTimer._vptr_CountdownTimer + 2))(p_m_UpdateModeTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *&v3 = LODWORD(v7);
      this->m_UpdateModeTimer.m_timestamp.m_Value = v7;
    }
    if ( fUpdateTime != this->m_UpdateModeTimer.m_duration.m_Value )
    {
      (*(this->m_UpdateModeTimer._vptr_CountdownTimer + 2))(
        p_m_UpdateModeTimer,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        v3,
        v4,
        v5,
        fUpdateTime);
      this->m_UpdateModeTimer.m_duration.m_Value = fUpdateTime;
    }
    CDOTA_Bot::GetMostDesiredMode(this, &iDesiredMode, fDesire);
    if ( iDesiredMode != DOTA_BOT_MODE::DOTA_BOT_MODE_NONE )
      CDOTA_Bot::SwitchToMode(this, iDesiredMode, fDesire[0], v6);
  }
}


// CDOTA_Bot::DoModeThink  (line 574, @0x00000000027e5f80, libserver.so)  // inlines: DOTAGameRules, GetBotByIndex, IsElapsed, NetworkStateChanged, Set, Start, State_Get, State_IsBefore, State_IsBeforePreGame, State_Order, WasRecentlyHitByHero, operator=<float>
// calls: CountdownTimer::Now, RandomFloat, CDOTA_Bot::TimeSinceHitByHero
// callers: CDOTA_Bot::Think
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING
void __fastcall CDOTA_Bot::DoModeThink(CDOTA_Bot *const this)
{
  CGameRules *v2; // r14
  unsigned int v3; // eax
  double v4; // xmm0_8
  double v5; // xmm1_8
  double v6; // xmm2_8
  double v7; // xmm3_8
  double v8; // xmm4_8
  CDOTA_TeamCommander *m_pTeamCommander; // rax
  int m_Size; // r13d
  CDOTA_Bot **m_pMemory; // r15
  __int64 v12; // rbx
  CDOTA_Bot *v13; // rdi
  float v14; // [rsp+8h] [rbp-38h]
  float fUpdateTimea; // [rsp+Ch] [rbp-34h]
  float fUpdateTime; // [rsp+Ch] [rbp-34h]

  if ( this->m_ModeThinkTimer.m_timestamp.m_Value <= 0.0
    || CountdownTimer::Now(&this->m_ModeThinkTimer) >= this->m_ModeThinkTimer.m_timestamp.m_Value )
  {
    v2 = g_pGameRules;
    v3 = *&g_pGameRules[6].m_szQuestName[28];
    if ( v3 <= 0xA )
    {
      if ( dword_491AD10 > DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v3] )
        return;
    }
    else if ( dword_491AD10 > 0 )
    {
      return;
    }
    if ( v3 == 4 )
    {
      m_pTeamCommander = this->m_pTeamCommander;
      m_Size = m_pTeamCommander->m_BotList.m_Size;
      if ( m_Size <= 0 )
      {
LABEL_20:
        if ( (*&v2[6].m_szQuestName[36] - *&v2[18].m_szQuestName[20]) > 75.0 )
          return;
      }
      else
      {
        m_pMemory = m_pTeamCommander->m_BotList.m_Memory.m_pMemory;
        v12 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v13 = m_pMemory[v12];
            if ( v13 != 0 )
              break;
            if ( m_Size <= ++v12 )
              goto LABEL_20;
          }
          if ( CDOTA_Bot::TimeSinceHitByHero(v13) < 15.0 )
            break;
          if ( m_Size <= ++v12 )
            goto LABEL_20;
        }
      }
    }
    fUpdateTimea = RandomFloat(0.1, 0.2);
    fUpdateTime = fUpdateTimea * (*(*engine + 96LL))(engine);
    *&v4 = CountdownTimer::Now(&this->m_ModeThinkTimer) + fUpdateTime;
    if ( *&v4 != this->m_ModeThinkTimer.m_timestamp.m_Value )
    {
      v14 = *&v4;
      (*(this->m_ModeThinkTimer._vptr_CountdownTimer + 2))(&this->m_ModeThinkTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *&v4 = LODWORD(v14);
      this->m_ModeThinkTimer.m_timestamp.m_Value = v14;
    }
    *&v8 = LODWORD(fUpdateTime);
    if ( fUpdateTime != this->m_ModeThinkTimer.m_duration.m_Value )
    {
      (*(this->m_ModeThinkTimer._vptr_CountdownTimer + 2))(
        &this->m_ModeThinkTimer,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        v4,
        v5,
        v6,
        v7,
        fUpdateTime);
      this->m_ModeThinkTimer.m_duration.m_Value = fUpdateTime;
    }
    (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 5))(this->m_pActiveBotMode, v4, v5, v6, v7, v8);
  }
}


// CDOTA_Bot::DoActionThink  (line 615, @0x0000000002808030, libserver.so)  // inlines: CVProfScope, DOTAGameRules, Element, Get, GetGameTime, GetInstance, GetUnit, IsEnabled, Remove, ShiftElementsLeft, ToDOTABaseNPC, Top, V_memmove, memmove, operator CBaseEntity*, operator[], ~CVProfScope
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot::PushAction, CVProfile::ExitScope, CDOTA_Bot::SetAction, memmove, CVProfile::EnterScope, _Unwind_Resume
// callers: CDOTA_Bot::Think
// strings: "CDOTA_Bot::DoActionThink"
void __fastcall CDOTA_Bot::DoActionThink(CDOTA_Bot *const this)
{
  CEntityInstance *v2; // rax
  CEntityInstance *v3; // rdi
  int m_enabled; // edx
  bool v5; // r14
  int m_Size; // eax
  float v7; // xmm1_4
  CDOTA_Bot::sQueuedAction *m_pMemory; // rax
  int v9; // edx
  int v10; // eax
  CDOTA_BotAction *v11; // rdi
  int v12; // eax
  bool v13; // zf

  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v2 != 0 && BYTE3(v2[7]._vptr_IHandleEntity) != 0 )
    v3 = v2;
  else
    v3 = 0;
  if ( (*(v3->_vptr_IHandleEntity + 408))(v3) != 0 )
  {
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v5 = m_enabled != 0;
    if ( m_enabled != 0 )
      CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_Bot::DoActionThink", 0, "Bots", 0, 4);
    m_Size = this->m_ActionQueue.m_Size;
    this->m_bBypassActionQueue = 1;
    if ( m_Size > 0 )
    {
      do
      {
        v7 = 0.0;
        m_pMemory = this->m_ActionQueue.m_Memory.m_pMemory;
        if ( g_pGameRules != 0 )
          v7 = *&g_pGameRules[18].m_szQuestName[20];
        if ( v7 <= m_pMemory->fExecuteTime )
          break;
        if ( m_pMemory->bIsPush )
        {
          CDOTA_Bot::PushAction(this, m_pMemory->pAction);
          v9 = this->m_ActionQueue.m_Size - 1;
          if ( v9 <= 0 )
            goto LABEL_13;
        }
        else
        {
          CDOTA_Bot::SetAction(this, m_pMemory->pAction);
          v9 = this->m_ActionQueue.m_Size - 1;
          if ( v9 <= 0 )
          {
LABEL_13:
            this->m_ActionQueue.m_Size = v9;
            break;
          }
        }
        memmove(this->m_ActionQueue.m_Memory.m_pMemory, &this->m_ActionQueue.m_Memory.m_pMemory[1], 16LL * v9);
        v12 = this->m_ActionQueue.m_Size - 1;
        v13 = this->m_ActionQueue.m_Size == 1;
        this->m_ActionQueue.m_Size = v12;
      }
      while ( v12 >= 0 && !v13 );
    }
    v10 = this->m_ActionStack.m_Size;
    this->m_bBypassActionQueue = 0;
    v11 = this->m_ActionStack.m_Memory.m_pMemory[v10 - 1];
    (*(v11->_vptr_CDOTA_BotAction + 6))(v11);
    if ( v5 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
  }
}


// CDOTA_Bot::DoMinionThink  (line 644, @0x00000000027dffb0, libserver.so)  // inlines: GetSpecificMode
// callers: CDOTA_Bot_Hero_Juggernaut::DoMinionThink
void __fastcall CDOTA_Bot::DoMinionThink(CDOTA_Bot *const this)
{
  CDOTA_BotMode *v1; // rdi

  v1 = this->m_pBotModes[25];
  if ( v1 != 0 )
    (*(v1->_vptr_CDOTA_BotMode + 5))(v1);
}


// CDOTA_Bot::CreateMode  (line 655, @0x00000000027f7290, libserver.so)  // inlines: CDOTA_BotMode, CDOTA_BotMode_Assemble, CDOTA_BotMode_AssembleWithHumans, CDOTA_BotMode_Assemble_Human, CDOTA_BotMode_Attack, CDOTA_BotMode_DefendAlly, CDOTA_BotMode_DefendTower, CDOTA_BotMode_DefendTower_Human, CDOTA_BotMode_Farm_Human, CDOTA_BotMode_Laning_Human, CDOTA_BotMode_Retreat_Human, CDOTA_BotMode_Roam_Human, CEntityHandle, CHandle, operator=
// calls: Warning, operator new, CDOTA_BotMode_Laning::CDOTA_BotMode_Laning, CDOTA_BotMode_Attack_Human::CDOTA_BotMode_Attack_Human, CDOTA_BotMode_Roam::CDOTA_BotMode_Roam, CDOTA_BotMode_DefendAlly_Human::CDOTA_BotMode_DefendAlly_Human, CDOTA_BotMode_Retreat::CDOTA_BotMode_Retreat, CDOTA_BotMode_PushTower_Human::CDOTA_BotMode_PushTower_Human, CDOTA_BotMode_Farm::CDOTA_BotMode_Farm, CDOTA_BotMode_Roshan_Human::CDOTA_BotMode_Roshan_Human, CDOTA_BotMode_SecretShop::CDOTA_BotMode_SecretShop, CDOTA_BotMode_SideShop::CDOTA_BotMode_SideShop (21 total)
// callers: CDOTA_Bot_Hero_Bane::CreateMode, CDOTA_Bot_Hero_Axe::CreateMode, CDOTA_Bot_Hero_Bloodseeker::CreateMode, CDOTA_Bot_Hero_BountyHunter::CreateMode, CDOTA_Bot_Hero_CrystalMaiden::CreateMode, CDOTA_Bot_Hero_Earthshaker::CreateMode, CDOTA_Bot_Hero_Juggernaut::CreateMode, CDOTA_Bot_Hero_Lina::CreateMode, CDOTA_Bot_Hero_Kunkka::CreateMode, CDOTA_Bot_Hero_Nevermore::CreateMode, CDOTA_Bot_Hero_Oracle::CreateMode, CDOTA_Bot_Hero_PhantomAssassin::CreateMode (23 total)
// strings: "Unknown Bot Mode: %d\n"
// globals: jpt_27F72B8, jpt_27F72D5
CDOTA_BotMode *__fastcall CDOTA_Bot::CreateMode(CDOTA_Bot *const this, int iMode)
{
  CDOTA_BotMode *result; // rax
  vec_t v4; // xmm0_4
  vec_t v5; // xmm0_4
  vec_t v6; // xmm0_4
  vec_t v7; // xmm0_4
  CDOTA_BotMode_Laning *v8; // r12
  CDOTA_BotMode_Attack_Human *v9; // r12
  CDOTA_BotMode_Roam *v10; // r12
  CDOTA_BotMode_Retreat *v11; // r12
  CDOTA_BotMode_Farm *v12; // r12
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  vec_t v16; // xmm0_4
  vec_t v17; // xmm0_4
  vec_t v18; // xmm0_4
  vec_t v19; // xmm0_4
  vec_t v20; // xmm0_4
  vec_t v21; // xmm0_4
  vec_t v22; // xmm0_4
  vec_t v23; // xmm0_4
  vec_t v24; // xmm0_4
  vec_t v25; // xmm0_4
  vec_t v26; // xmm0_4
  vec_t v27; // xmm0_4
  vec_t v28; // xmm0_4
  vec_t v29; // xmm0_4
  vec_t v30; // xmm0_4
  vec_t v31; // xmm0_4
  vec_t v32; // xmm0_4
  vec_t v33; // xmm0_4
  vec_t v34; // xmm0_4
  vec_t v35; // xmm0_4
  vec_t v36; // xmm0_4

  if ( this->m_bHuman )
  {
    switch ( iMode )
    {
      case 0:
      case 5:
      case 6:
      case 7:
      case 15:
      case 16:
      case 19:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
        return 0;
      case 1:
        v8 = operator new(0xF0u);
        CDOTA_BotMode_Laning::CDOTA_BotMode_Laning(v8, this);
        v8->_vptr_CDOTA_BotMode = off_42B82F0;
        result = v8;
        break;
      case 2:
        v9 = operator new(0x120u);
        CDOTA_BotMode_Attack_Human::CDOTA_BotMode_Attack_Human(v9, this);
        goto LABEL_10;
      case 3:
        v10 = operator new(0x108u);
        CDOTA_BotMode_Roam::CDOTA_BotMode_Roam(v10, this);
        v10->_vptr_CDOTA_BotMode = off_42B86D0;
        result = v10;
        break;
      case 4:
        v11 = operator new(0x140u);
        CDOTA_BotMode_Retreat::CDOTA_BotMode_Retreat(v11, this);
        v11->_vptr_CDOTA_BotMode = off_42B8570;
        result = v11;
        break;
      case 8:
        v9 = operator new(0x100u);
        CDOTA_BotMode_PushTower_Human::CDOTA_BotMode_PushTower_Human(
          v9,
          this,
          DOTA_LANE::DOTA_LANE_TOP,
          DOTA_BOT_MODE::DOTA_BOT_MODE_PUSH_TOWER_TOP);
        goto LABEL_10;
      case 9:
        v9 = operator new(0x100u);
        CDOTA_BotMode_PushTower_Human::CDOTA_BotMode_PushTower_Human(
          v9,
          this,
          DOTA_LANE::DOTA_LANE_MIDDLE,
          DOTA_BOT_MODE::DOTA_BOT_MODE_PUSH_TOWER_MID);
        goto LABEL_10;
      case 10:
        v9 = operator new(0x100u);
        CDOTA_BotMode_PushTower_Human::CDOTA_BotMode_PushTower_Human(
          v9,
          this,
          DOTA_LANE::DOTA_LANE_BOTTOM,
          DOTA_BOT_MODE::DOTA_BOT_MODE_PUSH_TOWER_BOT);
        goto LABEL_10;
      case 11:
        result = operator new(0xF8u);
        result->m_pBot = this;
        result->m_iDesireLocationFrame = 0;
        result->m_DebugStringBuffer[0] = 0;
        x = vec3_origin.x;
        result->_vptr_CDOTA_BotMode = off_42B7C30;
        result->m_DebugValueBuffer[0] = 0;
        result->m_vDesiredLocation.x = x;
        y = vec3_origin.y;
        HIDWORD(result[1]._vptr_CDOTA_BotMode) = 1;
        result->m_vDesiredLocation.y = y;
        z = vec3_origin.z;
        *result[1].m_DebugStringBuffer = 11;
        result->m_vDesiredLocation.z = z;
        LODWORD(result[1]._vptr_CDOTA_BotMode) = 0;
        result[1].m_DebugStringBuffer[12] = 0;
        break;
      case 12:
        result = operator new(0xF8u);
        result->m_pBot = this;
        result->m_iDesireLocationFrame = 0;
        result->m_DebugStringBuffer[0] = 0;
        v16 = vec3_origin.x;
        result->_vptr_CDOTA_BotMode = off_42B7C30;
        result->m_DebugValueBuffer[0] = 0;
        result->m_vDesiredLocation.x = v16;
        v17 = vec3_origin.y;
        HIDWORD(result[1]._vptr_CDOTA_BotMode) = 2;
        result->m_vDesiredLocation.y = v17;
        v18 = vec3_origin.z;
        *result[1].m_DebugStringBuffer = 12;
        result->m_vDesiredLocation.z = v18;
        LODWORD(result[1]._vptr_CDOTA_BotMode) = 0;
        result[1].m_DebugStringBuffer[12] = 0;
        break;
      case 13:
        result = operator new(0xF8u);
        result->m_pBot = this;
        result->m_iDesireLocationFrame = 0;
        result->m_DebugStringBuffer[0] = 0;
        v4 = vec3_origin.x;
        result->_vptr_CDOTA_BotMode = off_42B7C30;
        result->m_DebugValueBuffer[0] = 0;
        result->m_vDesiredLocation.x = v4;
        v5 = vec3_origin.y;
        HIDWORD(result[1]._vptr_CDOTA_BotMode) = 3;
        result->m_vDesiredLocation.y = v5;
        v6 = vec3_origin.z;
        *result[1].m_DebugStringBuffer = 13;
        result->m_vDesiredLocation.z = v6;
        LODWORD(result[1]._vptr_CDOTA_BotMode) = 0;
        result[1].m_DebugStringBuffer[12] = 0;
        break;
      case 14:
        result = operator new(0xE0u);
        result->m_pBot = this;
        result->m_iDesireLocationFrame = 0;
        result->m_DebugStringBuffer[0] = 0;
        v7 = vec3_origin.x;
        result->m_DebugValueBuffer[0] = 0;
        result->_vptr_CDOTA_BotMode = off_42B7730;
        result->m_vDesiredLocation.x = v7;
        result->m_vDesiredLocation.y = vec3_origin.y;
        result->m_vDesiredLocation.z = vec3_origin.z;
        break;
      case 17:
        v12 = operator new(0x110u);
        CDOTA_BotMode_Farm::CDOTA_BotMode_Farm(v12, this);
        v12->_vptr_CDOTA_BotMode = off_42B8110;
        result = v12;
        break;
      case 18:
        v9 = operator new(0x130u);
        CDOTA_BotMode_DefendAlly_Human::CDOTA_BotMode_DefendAlly_Human(v9, this);
        goto LABEL_10;
      case 20:
        v9 = operator new(0x120u);
        CDOTA_BotMode_Roshan_Human::CDOTA_BotMode_Roshan_Human(v9, this);
        goto LABEL_10;
      default:
        goto LABEL_5;
    }
  }
  else
  {
    switch ( iMode )
    {
      case 0:
      case 23:
      case 24:
      case 25:
        return 0;
      case 1:
        v9 = operator new(0xF0u);
        CDOTA_BotMode_Laning::CDOTA_BotMode_Laning(v9, this);
        goto LABEL_10;
      case 2:
        result = operator new(0xE8u);
        result->m_pBot = this;
        result->m_iDesireLocationFrame = 0;
        result->m_DebugStringBuffer[0] = 0;
        v34 = vec3_origin.x;
        result->m_DebugValueBuffer[0] = 0;
        result->_vptr_CDOTA_BotMode = off_42B7870;
        result->m_vDesiredLocation.x = v34;
        v35 = vec3_origin.y;
        HIDWORD(result[1]._vptr_CDOTA_BotMode) = -1;
        result->m_vDesiredLocation.y = v35;
        v36 = vec3_origin.z;
        LODWORD(result[1]._vptr_CDOTA_BotMode) = 0;
        result->m_vDesiredLocation.z = v36;
        return result;
      case 3:
        v9 = operator new(0x108u);
        CDOTA_BotMode_Roam::CDOTA_BotMode_Roam(v9, this);
        goto LABEL_10;
      case 4:
        v9 = operator new(0x140u);
        CDOTA_BotMode_Retreat::CDOTA_BotMode_Retreat(v9, this);
        goto LABEL_10;
      case 5:
        v9 = operator new(0xE8u);
        CDOTA_BotMode_SecretShop::CDOTA_BotMode_SecretShop(v9, this);
        goto LABEL_10;
      case 6:
        v9 = operator new(0xE8u);
        CDOTA_BotMode_SideShop::CDOTA_BotMode_SideShop(v9, this);
        goto LABEL_10;
      case 7:
        v9 = operator new(0xF8u);
        CDOTA_BotMode_Rune::CDOTA_BotMode_Rune(v9, this);
        goto LABEL_10;
      case 8:
        v9 = operator new(0xF8u);
        CDOTA_BotMode_PushTower::CDOTA_BotMode_PushTower(
          v9,
          this,
          DOTA_LANE::DOTA_LANE_TOP,
          DOTA_BOT_MODE::DOTA_BOT_MODE_PUSH_TOWER_TOP);
        goto LABEL_10;
      case 9:
        v9 = operator new(0xF8u);
        CDOTA_BotMode_PushTower::CDOTA_BotMode_PushTower(
          v9,
          this,
          DOTA_LANE::DOTA_LANE_MIDDLE,
          DOTA_BOT_MODE::DOTA_BOT_MODE_PUSH_TOWER_MID);
        goto LABEL_10;
      case 10:
        v9 = operator new(0xF8u);
        CDOTA_BotMode_PushTower::CDOTA_BotMode_PushTower(
          v9,
          this,
          DOTA_LANE::DOTA_LANE_BOTTOM,
          DOTA_BOT_MODE::DOTA_BOT_MODE_PUSH_TOWER_BOT);
        goto LABEL_10;
      case 11:
        result = operator new(0xF8u);
        result->m_pBot = this;
        result->m_iDesireLocationFrame = 0;
        result->m_DebugStringBuffer[0] = 0;
        v19 = vec3_origin.x;
        result->m_DebugValueBuffer[0] = 0;
        result->_vptr_CDOTA_BotMode = off_42B7B90;
        result->m_vDesiredLocation.x = v19;
        v20 = vec3_origin.y;
        HIDWORD(result[1]._vptr_CDOTA_BotMode) = 1;
        result->m_vDesiredLocation.y = v20;
        v21 = vec3_origin.z;
        *result[1].m_DebugStringBuffer = 11;
        result->m_vDesiredLocation.z = v21;
        LODWORD(result[1]._vptr_CDOTA_BotMode) = 0;
        return result;
      case 12:
        result = operator new(0xF8u);
        result->m_pBot = this;
        result->m_iDesireLocationFrame = 0;
        result->m_DebugStringBuffer[0] = 0;
        v22 = vec3_origin.x;
        result->m_DebugValueBuffer[0] = 0;
        result->_vptr_CDOTA_BotMode = off_42B7B90;
        result->m_vDesiredLocation.x = v22;
        v23 = vec3_origin.y;
        HIDWORD(result[1]._vptr_CDOTA_BotMode) = 2;
        result->m_vDesiredLocation.y = v23;
        v24 = vec3_origin.z;
        *result[1].m_DebugStringBuffer = 12;
        result->m_vDesiredLocation.z = v24;
        LODWORD(result[1]._vptr_CDOTA_BotMode) = 0;
        return result;
      case 13:
        result = operator new(0xF8u);
        result->m_pBot = this;
        result->m_iDesireLocationFrame = 0;
        result->m_DebugStringBuffer[0] = 0;
        v25 = vec3_origin.x;
        result->m_DebugValueBuffer[0] = 0;
        result->_vptr_CDOTA_BotMode = off_42B7B90;
        result->m_vDesiredLocation.x = v25;
        v26 = vec3_origin.y;
        HIDWORD(result[1]._vptr_CDOTA_BotMode) = 3;
        result->m_vDesiredLocation.y = v26;
        v27 = vec3_origin.z;
        *result[1].m_DebugStringBuffer = 13;
        result->m_vDesiredLocation.z = v27;
        LODWORD(result[1]._vptr_CDOTA_BotMode) = 0;
        return result;
      case 14:
        result = operator new(0xE0u);
        result->m_pBot = this;
        result->m_iDesireLocationFrame = 0;
        result->m_DebugStringBuffer[0] = 0;
        v28 = vec3_origin.x;
        result->m_DebugValueBuffer[0] = 0;
        result->_vptr_CDOTA_BotMode = off_42B7690;
        result->m_vDesiredLocation.x = v28;
        result->m_vDesiredLocation.y = vec3_origin.y;
        result->m_vDesiredLocation.z = vec3_origin.z;
        return result;
      case 15:
        result = operator new(0xE8u);
        result->m_pBot = this;
        result->m_iDesireLocationFrame = 0;
        result->m_DebugStringBuffer[0] = 0;
        v29 = vec3_origin.x;
        result->m_DebugValueBuffer[0] = 0;
        result->_vptr_CDOTA_BotMode = off_42B77D0;
        result->m_vDesiredLocation.x = v29;
        v30 = vec3_origin.y;
        LODWORD(result[1]._vptr_CDOTA_BotMode) = -1;
        result->m_vDesiredLocation.y = v30;
        result->m_vDesiredLocation.z = vec3_origin.z;
        return result;
      case 16:
        v9 = operator new(0x100u);
        CDOTA_BotMode_TeamRoam::CDOTA_BotMode_TeamRoam(v9, this);
        goto LABEL_10;
      case 17:
        v9 = operator new(0x110u);
        CDOTA_BotMode_Farm::CDOTA_BotMode_Farm(v9, this);
        goto LABEL_10;
      case 18:
        result = operator new(0xF0u);
        result->m_pBot = this;
        result->m_iDesireLocationFrame = 0;
        result->m_DebugStringBuffer[0] = 0;
        v31 = vec3_origin.x;
        result->m_DebugValueBuffer[0] = 0;
        result->_vptr_CDOTA_BotMode = off_42B7A50;
        result->m_vDesiredLocation.x = v31;
        v32 = vec3_origin.y;
        LODWORD(result[1]._vptr_CDOTA_BotMode) = -1;
        result->m_vDesiredLocation.y = v32;
        v33 = vec3_origin.z;
        HIDWORD(result[1]._vptr_CDOTA_BotMode) = -1;
        result->m_vDesiredLocation.z = v33;
        *result[1].m_DebugStringBuffer = 0;
        return result;
      case 19:
        v9 = operator new(0x100u);
        CDOTA_BotMode_EvasiveManeuvers::CDOTA_BotMode_EvasiveManeuvers(v9, this);
        goto LABEL_10;
      case 20:
        v9 = operator new(0xF0u);
        CDOTA_BotMode_Roshan::CDOTA_BotMode_Roshan(v9, this);
        goto LABEL_10;
      case 21:
        v9 = operator new(0xE8u);
        CDOTA_BotMode_Item::CDOTA_BotMode_Item(v9, this);
        goto LABEL_10;
      case 22:
        v9 = operator new(0xF0u);
        CDOTA_BotMode_Ward::CDOTA_BotMode_Ward(v9, this);
LABEL_10:
        result = v9;
        break;
      default:
LABEL_5:
        Warning("Unknown Bot Mode: %d\n", iMode);
        result = 0;
        break;
    }
  }
  return result;
}


// CDOTA_Bot::GetMostDesiredMode  (line 739, @0x00000000027e4e90, libserver.so)  // inlines: Max<float>, Min<float>
// callers: CDOTA_Bot::UpdateMode
// globals: kCurrentModeDesireBonus
void __fastcall CDOTA_Bot::GetMostDesiredMode(CDOTA_Bot *const this, DOTA_BOT_MODE *pMode, float *pDesire)
{
  __int64 i; // rbx
  CDOTA_BotMode *v7; // rdi
  float v8; // xmm0_4
  __m128 v9; // xmm0
  __m128 v10; // xmm2
  __int64 v11; // rbx
  DOTA_BOT_MODE v12; // eax
  float v13; // xmm1_4
  float *v14; // rdi
  int j; // ecx
  float fBestDesire; // [rsp+Ch] [rbp-24h]
  float fBestDesirea; // [rsp+Ch] [rbp-24h]

  for ( i = 0; i != 26; ++i )
  {
    v7 = this->m_pBotModes[i];
    v8 = 0.0;
    if ( v7 != 0 )
      v8 = (*(v7->_vptr_CDOTA_BotMode + 10))(v7, 0.0);
    this->m_fModeDesires[i] = v8;
  }
  v9 = LODWORD(this->m_fModeDesires[(*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode)]);
  v9.m128_f32[0] = v9.m128_f32[0] * kCurrentModeDesireBonus[this->m_iDifficulty];
  v10 = _mm_cmplt_ss(0x3F733333u, v9);
  LODWORD(fBestDesire) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v10, v9).m128_f32[0]) | v10.m128_i32[0] & 0x3F733333;
  v11 = (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode);
  this->m_fModeDesires[v11] = fmaxf(
                                this->m_fModeDesires[(*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode)],
                                fBestDesire);
  fBestDesirea = this->m_fModeDesires[(*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode)];
  v12 = (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode);
  v13 = fBestDesirea;
  v14 = &this->m_fModeDesires[1];
  for ( j = 1; j != 26; ++j )
  {
    if ( *v14 > v13 )
    {
      v12 = j;
      v13 = *v14;
    }
    ++v14;
  }
  *pMode = v12;
  *pDesire = v13;
}


// CDOTA_Bot::SwitchToMode  (line 771, @0x0000000002803bb0, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Get, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, GetUnit, GetUnitName, Set, String, ToCStr, ToDOTABaseNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::IsChanneling, CDOTA_Commander::IsDebuggingEntity, Msg, CDOTA_Bot::ClearActions
// callers: CDOTA_Bot::UpdateMode, CDOTA_Bot::UpdateInferredMode, CDOTA_Bot::Init
// strings: "BOT [%2.2f] (%s) SetMode: %s, Desire: %1.3f\n"
// globals: g_DOTACommander
void __fastcall CDOTA_Bot::SwitchToMode(CDOTA_Bot *const this, int mode, float a3, float fDesire)
{
  int (***v4)(...); // r13
  CDOTA_BotMode *v6; // rax
  EHANDLE *p_m_hUnit; // r12
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BotMode *m_pActiveBotMode; // rdi
  int v10; // eax
  CDOTA_BotMode *v11; // rdi
  CDOTA_BotMode *v12; // rdi
  CEntityInstance *v13; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v15; // cx
  const char *v16; // rbx
  CEntityInstance *v17; // rax
  CEntityInstance *v18; // rcx
  const char *m_pAsString; // rsi
  double v20; // xmm0_8
  EHANDLE entity; // [rsp+10h] [rbp-30h] BYREF

  v4 = &this->_vptr_CDOTA_Bot + mode;
  v6 = v4[4258];
  if ( v6 == this->m_pActiveBotMode || v6 == 0 )
    return;
  p_m_hUnit = &this->m_hUnit;
  v8 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v8 != 0 && v8->m_bIsDOTANPC )
  {
    if ( CDOTA_BaseNPC::IsChanneling(v8) )
      goto LABEL_6;
LABEL_25:
    CDOTA_Bot::ClearActions(this, 1, 0);
    goto LABEL_6;
  }
  if ( !CDOTA_BaseNPC::IsChanneling(0) )
    goto LABEL_25;
LABEL_6:
  m_pActiveBotMode = this->m_pActiveBotMode;
  if ( m_pActiveBotMode != 0 )
  {
    v10 = (*(m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(m_pActiveBotMode);
    v11 = this->m_pActiveBotMode;
    this->m_iPreviousBotModeType = v10;
    (*(v11->_vptr_CDOTA_BotMode + 4))(v11);
  }
  v12 = v4[4258];
  this->m_pActiveBotMode = v12;
  (*(v12->_vptr_CDOTA_BotMode + 3))(v12);
  v13 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
  {
    m_pEntity = v13->m_pEntity;
    entity.m_Index = -1;
    if ( m_pEntity != 0 )
    {
      v15 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      entity.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
    }
  }
  else
  {
    entity.m_Index = -1;
  }
  if ( CDOTA_Commander::IsDebuggingEntity(&g_DOTACommander, DOTA_BOT_DEBUG_STATE::DOTA_BOT_DEBUG_MODE, &entity) )
  {
    v16 = (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 13))(this->m_pActiveBotMode);
    v17 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
      v18 = v17;
    else
      v18 = 0;
    m_pAsString = "";
    if ( v18[70].m_iszPrivateVScripts.u.m_Id != 0 )
      m_pAsString = v18[70].m_iszPrivateVScripts.u.m_pAsString;
    v20 = 0.0;
    if ( g_pGameRules != 0 )
      v20 = *&g_pGameRules[18].m_szQuestName[20];
    Msg("BOT [%2.2f] (%s) SetMode: %s, Desire: %1.3f\n", v20, m_pAsString, v16, a3);
  }
}


// CDOTA_Bot::GetSecondaryModeDesire  (line 802, @0x00000000027e4fe0, libserver.so)
// callers: CDOTA_TeamCommander::UpdatePushLaneDesires
float __fastcall CDOTA_Bot::GetSecondaryModeDesire(CDOTA_Bot *const this)
{
  __int64 v1; // rax
  float result; // xmm0_4
  CDOTA_BotMode *v3; // rdx

  v1 = 0;
  result = 0.0;
  do
  {
    v3 = this->m_pBotModes[v1 + 1];
    if ( v3 != 0 && v3 != this->m_pActiveBotMode )
      result = fmaxf(this->m_fModeDesires[v1 + 1], result);
    ++v1;
  }
  while ( v1 != 25 );
  return result;
}


// CDOTA_Bot::UpdateEstimatedDamage  (line 819, @0x00000000027ffdb0, libserver.so)  // inlines: Get, GetBotByIndex, GetInstance, GetOpposingTeamCommander, GetUnit, IsConsideredHero, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_TeamCommander::GetOpposingTeamCommander, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::GetStunDuration, CDOTA_Bot::GetSlowDuration, CDOTA_Bot::GetEstimatedDamageToTarget, CDOTA_TeamCommander::GetLeadBuildingInLane
// callers: CDOTA_Bot::Think
void __fastcall CDOTA_Bot::UpdateEstimatedDamage(CDOTA_Bot *const this)
{
  int v1; // r14d
  __int64 v2; // r12
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v5; // rax
  const CEntityHandle *v6; // rdi
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // r13
  __m128i v9; // xmm0
  float v10; // r15d
  float SlowDuration; // xmm0_4
  __m128i v12; // xmm0
  float v13; // r15d
  float v14; // xmm0_4
  DOTA_LANE v15; // r12d
  int v16; // r13d
  CDOTA_BaseNPC_Building *LeadBuildingInLane; // rax

  v1 = 0;
  v2 = 0;
  this->m_fEstimatedUnitDamage = 0.0;
  this->m_fEstimatedMaxUnitDamage = 0.0;
  while ( v2 < CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pTeamCommander)->m_BotList.m_Size )
  {
    OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pTeamCommander);
    if ( v2 < OpposingTeamCommander->m_BotList.m_Size && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v2] != 0 )
    {
      v5 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pTeamCommander);
      v6 = 0;
      if ( v2 < v5->m_BotList.m_Size )
        v6 = v5->m_BotList.m_Memory.m_pMemory[v2];
      v7 = CEntityHandle::operator CEntityInstance *(v6 + 39);
      v8 = v7;
      if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 && (v7[43].m_iszPrivateVScripts.u.m_Id & 3) != 0 )
      {
        ++v1;
        *v9.m128i_i32 = CDOTA_Bot::GetStunDuration(this, 1);
        v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
        SlowDuration = CDOTA_Bot::GetSlowDuration(this, 1);
        this->m_fEstimatedUnitDamage = CDOTA_Bot::GetEstimatedDamageToTarget(
                                         this,
                                         1,
                                         v8,
                                         (v10 + 5.0) + (SlowDuration * 0.5),
                                         7)
                                     + this->m_fEstimatedUnitDamage;
        *v12.m128i_i32 = CDOTA_Bot::GetStunDuration(this, 0);
        v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
        v14 = CDOTA_Bot::GetSlowDuration(this, 0);
        this->m_fEstimatedMaxUnitDamage = CDOTA_Bot::GetEstimatedDamageToTarget(
                                            this,
                                            0,
                                            v8,
                                            (v13 + 5.0) + (v14 * 0.5),
                                            7)
                                        + this->m_fEstimatedMaxUnitDamage;
      }
    }
    ++v2;
  }
  if ( v1 != 0 )
  {
    this->m_fEstimatedUnitDamage = this->m_fEstimatedUnitDamage / v1;
    this->m_fEstimatedMaxUnitDamage = this->m_fEstimatedMaxUnitDamage / v1;
  }
  this->m_fEstimatedBuildingDamage = 0.0;
  v15 = DOTA_LANE::DOTA_LANE_TOP;
  v16 = 0;
  do
  {
    LeadBuildingInLane = CDOTA_TeamCommander::GetLeadBuildingInLane(this->m_pTeamCommander, v15);
    if ( LeadBuildingInLane != 0 )
    {
      ++v16;
      this->m_fEstimatedBuildingDamage = CDOTA_Bot::GetEstimatedDamageToTarget(this, 1, LeadBuildingInLane, 5.0, 1)
                                       + this->m_fEstimatedBuildingDamage;
    }
    ++v15;
  }
  while ( v15 != DOTA_LANE::DOTA_LANE_MAX );
  if ( v16 != 0 )
    this->m_fEstimatedBuildingDamage = this->m_fEstimatedBuildingDamage / v16;
}


// CDOTA_Bot::UpdateDifficultyMuting  (line 862, @0x00000000027e5030, libserver.so)  // inlines: IsElapsed, NetworkStateChanged, Set, Start, operator=<float>
// calls: CountdownTimer::Now
// callers: CDOTA_Bot::Think
void __fastcall CDOTA_Bot::UpdateDifficultyMuting(CDOTA_Bot *const this)
{
  int m_iDifficulty; // eax
  CountdownTimer *p_m_AbilityMutedCheckTimer; // r12
  int v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  double v8; // xmm0_8
  double v9; // xmm1_8
  double v10; // xmm2_8
  float v11; // [rsp+4h] [rbp-1Ch]
  float fMuteCheckInterval; // [rsp+8h] [rbp-18h]
  float fMuteCheckIntervala; // [rsp+8h] [rbp-18h]
  float fMuteCheckIntervalb; // [rsp+8h] [rbp-18h]
  float fMuteDuration; // [rsp+Ch] [rbp-14h]

  m_iDifficulty = this->m_iDifficulty;
  if ( m_iDifficulty > 2 )
    return;
  p_m_AbilityMutedCheckTimer = &this->m_AbilityMutedCheckTimer;
  if ( this->m_AbilityMutedCheckTimer.m_timestamp.m_Value > 0.0 )
  {
    if ( CountdownTimer::Now(&this->m_AbilityMutedCheckTimer) < this->m_AbilityMutedCheckTimer.m_timestamp.m_Value )
      return;
    m_iDifficulty = this->m_iDifficulty;
  }
  if ( m_iDifficulty < 0 )
    goto LABEL_18;
  if ( m_iDifficulty <= 1 )
  {
    *&v4 = 8.0;
    fMuteDuration = 6.0;
    goto LABEL_9;
  }
  if ( m_iDifficulty == 2 )
  {
    *&v4 = 10.0;
    fMuteDuration = 3.0;
  }
  else
  {
LABEL_18:
    *&v4 = 0.0;
    fMuteDuration = 0.0;
  }
LABEL_9:
  fMuteCheckInterval = *&v4;
  v5 = CountdownTimer::Now(p_m_AbilityMutedCheckTimer);
  v6 = fMuteCheckInterval;
  v7 = v5 + fMuteCheckInterval;
  if ( v7 != this->m_AbilityMutedCheckTimer.m_timestamp.m_Value )
  {
    v11 = v7;
    (*(this->m_AbilityMutedCheckTimer._vptr_CountdownTimer + 2))(
      p_m_AbilityMutedCheckTimer,
      12,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    v6 = fMuteCheckInterval;
    this->m_AbilityMutedCheckTimer.m_timestamp.m_Value = v11;
  }
  if ( v6 != this->m_AbilityMutedCheckTimer.m_duration.m_Value )
  {
    fMuteCheckIntervala = v6;
    (*(this->m_AbilityMutedCheckTimer._vptr_CountdownTimer + 2))(
      p_m_AbilityMutedCheckTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL);
    this->m_AbilityMutedCheckTimer.m_duration.m_Value = fMuteCheckIntervala;
  }
  *&v8 = CountdownTimer::Now(&this->m_AbilityMutedTimer) + fMuteDuration;
  if ( *&v8 != this->m_AbilityMutedTimer.m_timestamp.m_Value )
  {
    fMuteCheckIntervalb = *&v8;
    (*(this->m_AbilityMutedTimer._vptr_CountdownTimer + 2))(&this->m_AbilityMutedTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v8 = LODWORD(fMuteCheckIntervalb);
    this->m_AbilityMutedTimer.m_timestamp.m_Value = fMuteCheckIntervalb;
  }
  if ( fMuteDuration != this->m_AbilityMutedTimer.m_duration.m_Value )
  {
    (*(this->m_AbilityMutedTimer._vptr_CountdownTimer + 2))(
      &this->m_AbilityMutedTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v8,
      v9,
      v10,
      fMuteDuration);
    this->m_AbilityMutedTimer.m_duration.m_Value = fMuteDuration;
  }
}


// CDOTA_Bot::UpdateInferredMode  (line 896, @0x0000000002803ef0, libserver.so)
// calls: CDOTA_Bot::SwitchToMode
// callers: CDOTA_Bot::Think
void __fastcall CDOTA_Bot::UpdateInferredMode(CDOTA_Bot *const this)
{
  __int64 v2; // rbx
  int v3; // r13d
  float v4; // xmm1_4
  float v5; // xmm0_4
  CDOTA_BotMode *v6; // rdi
  float fBestDesire; // [rsp+Ch] [rbp-24h]

  v2 = 0;
  fBestDesire = (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 10))(this->m_pActiveBotMode);
  v3 = (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode);
  do
  {
    while ( 1 )
    {
      v6 = this->m_pBotModes[v2 + 1];
      if ( v6 != 0 )
        break;
      this->m_fModeDesires[++v2] = 0.0;
      if ( v2 == 25 )
        goto LABEL_7;
    }
    v5 = (*(v6->_vptr_CDOTA_BotMode + 10))(v6);
    this->m_fModeDesires[v2 + 1] = v5;
    if ( v5 > fBestDesire )
    {
      v3 = v2 + 1;
      fBestDesire = v5;
    }
    ++v2;
  }
  while ( v2 != 25 );
LABEL_7:
  CDOTA_Bot::SwitchToMode(this, v3, fBestDesire, v4);
}


// CDOTA_Bot::PushAction  (line 924, @0x0000000002807760, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CUtlStack<CDOTA_BotAction*, CUtlMemory<CDOTA_BotAction*, int> >::Push, CDOTA_Bot::GetActionDelay, CUtlVectorBase<CDOTA_Bot::sQueuedAction, CUtlMemory<CDOTA_Bot::sQueuedAction, int> >::InsertBefore
// callers: CDOTA_Bot::DoActionThink, CDOTA_BotMode_Laning::Think, CDOTABehaviorTutorialRazorMoveToNPCToAttack::OnInjured, CDOTA_Bot_AbilityUsage_AncientJanggo::UseAbility, CDOTA_Bot_AbilityUsage_ArcaneBoots::UseAbility, CDOTA_Bot_AbilityUsage_Armlet::UseAbility, CDOTA_Bot_AbilityUsage_BlackKingBar::UseAbility, CDOTA_Bot_AbilityUsage_BladeMail::UseAbility, CDOTA_Bot_AbilityUsage_Bottle::UseAbility, CDOTA_Bot_AbilityUsage_Buckler::UseAbility, CDOTA_Bot_AbilityUsage_Butterfly::UseAbility, CDOTA_Bot_AbilityUsage_BlinkDagger::UseAbility (172 total)
void __fastcall CDOTA_Bot::PushAction(CDOTA_Bot *const this, CDOTA_BotAction *pAction)
{
  float ActionDelay; // xmm0_4
  int m_Size; // edx
  int v5; // esi
  float v6; // xmm0_4
  CDOTA_Bot::sQueuedAction *i; // rax
  float v8; // [rsp+4h] [rbp-2Ch]
  CDOTA_BotAction *pActiona; // [rsp+8h] [rbp-28h] BYREF
  CDOTA_Bot::sQueuedAction queuedAction; // [rsp+10h] [rbp-20h] BYREF

  pActiona = pAction;
  if ( (*(pAction->_vptr_CDOTA_BotAction + 2))(pAction) == 5
    && !this->m_bBypassActionQueue
    && (*(pActiona->_vptr_CDOTA_BotAction + 11))(pActiona) != 0 )
  {
    queuedAction.bIsPush = 1;
    if ( g_pGameRules != 0 )
      v8 = *&g_pGameRules[18].m_szQuestName[20];
    else
      v8 = 0.0;
    ActionDelay = CDOTA_Bot::GetActionDelay(this, 0);
    m_Size = this->m_ActionQueue.m_Size;
    v5 = 0;
    v6 = ActionDelay + v8;
    queuedAction.fExecuteTime = v6;
    queuedAction.pAction = pActiona;
    if ( m_Size > 0 )
    {
      for ( i = this->m_ActionQueue.m_Memory.m_pMemory; v6 > i->fExecuteTime; ++i )
      {
        if ( ++v5 == m_Size )
          break;
      }
    }
    CUtlVectorBase<CDOTA_Bot::sQueuedAction,CUtlMemory<CDOTA_Bot::sQueuedAction,int>>::InsertBefore(
      &this->m_ActionQueue,
      v5,
      &queuedAction);
  }
  else
  {
    CUtlStack<CDOTA_BotAction *,CUtlMemory<CDOTA_BotAction *,int>>::Push(&this->m_ActionStack, &pActiona);
    (*(pActiona->_vptr_CDOTA_BotAction + 4))(pActiona);
  }
}


// CDOTA_Bot::PopAction  (line 951, @0x00000000027e5240, libserver.so)  // inlines: Element, Pop, Top, operator[]
// calls: Warning
// callers: CDOTA_BotAction_Attack::OnAttacked, CDOTA_BotAction_UseAbility::OnAbilityExecuted, CDOTA_BotAction_Attack::Think, CDOTA_BotAction_AttackMove::Think, CDOTA_BotAction_UseAbility::Think, CDOTA_BotAction_PickUpRune::Think, CDOTA_BotAction_PickUpItem::Think, CDOTA_BotAction_DropItem::Think, CDOTA_BotAction_Attack::OnStart, CDOTA_BotAction_UseAbility::OnStart, CDOTA_BotAction_PickUpRune::OnStart, CDOTA_BotAction_PickUpItem::OnStart (14 total)
// strings: "Attempt to pop a bot's base idle action!\n"
void __fastcall CDOTA_Bot::PopAction(CDOTA_Bot *const this)
{
  int m_Size; // eax
  CDOTA_BotAction *v3; // rdi
  int v4; // eax
  CDOTA_BotAction *v5; // rdi

  m_Size = this->m_ActionStack.m_Size;
  if ( m_Size == 1 )
  {
    Warning("Attempt to pop a bot's base idle action!\n");
  }
  else
  {
    v3 = this->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
    (*(v3->_vptr_CDOTA_BotAction + 5))(v3);
    v4 = this->m_ActionStack.m_Size - 1;
    v5 = this->m_ActionStack.m_Memory.m_pMemory[v4];
    if ( v5 != 0 )
    {
      (*(v5->_vptr_CDOTA_BotAction + 1))(v5);
      v4 = this->m_ActionStack.m_Size - 1;
    }
    this->m_ActionStack.m_Size = v4;
  }
}


// CDOTA_Bot::ClearActions  (line 967, @0x0000000002803ad0, libserver.so)  // inlines: Element, Pop, RemoveAll, Top, operator[]
// calls: CDOTA_Bot::Action_Stop
// callers: CDOTA_Bot::SwitchToMode, CDOTA_BotMode_Companion::SwitchToSubMode, CDOTA_Bot::SetAction, CDOTA_Bot::DoCreepAttackAndDeny, CDOTA_Bot_Script::Action_ClearActions, CDOTA_TeamCommander::OnSpawn, CDOTA_ScriptedSpawner::InputTeleportToWaypoint
void __fastcall CDOTA_Bot::ClearActions(CDOTA_Bot *const this, bool bClearQueueToo, bool bStop)
{
  __int64 v4; // r13
  int i; // r12d
  CDOTA_BotAction *pAction; // rdi
  int j; // eax
  CDOTA_BotAction *v8; // rdi
  CDOTA_BotAction *v9; // rdi
  bool v10; // [rsp+Ch] [rbp-24h]

  if ( bStop )
  {
    v10 = bClearQueueToo;
    CDOTA_Bot::Action_Stop(this);
    bClearQueueToo = v10;
  }
  if ( bClearQueueToo )
  {
    v4 = 0;
    for ( i = 0; this->m_ActionQueue.m_Size > i; ++v4 )
    {
      pAction = this->m_ActionQueue.m_Memory.m_pMemory[v4].pAction;
      if ( pAction != 0 )
        (*(pAction->_vptr_CDOTA_BotAction + 1))(pAction);
      ++i;
    }
    this->m_ActionQueue.m_Size = 0;
  }
  for ( j = this->m_ActionStack.m_Size; j > 1; this->m_ActionStack.m_Size = j )
  {
    v8 = this->m_ActionStack.m_Memory.m_pMemory[j - 1];
    (*(v8->_vptr_CDOTA_BotAction + 5))(v8);
    j = this->m_ActionStack.m_Size - 1;
    v9 = this->m_ActionStack.m_Memory.m_pMemory[j];
    if ( v9 != 0 )
    {
      (*(v9->_vptr_CDOTA_BotAction + 1))(v9);
      j = this->m_ActionStack.m_Size - 1;
    }
  }
}


// CDOTA_Bot::GetActionDelay  (line 994, @0x00000000027e52e0, libserver.so)
// calls: RandomFloat
// callers: CDOTA_Bot::SetRequestedBlink, CDOTA_Bot::PushAction, CDOTA_Bot::SetAction, CDOTA_Bot_AbilityUsage_WardDispenser::GetCurrentUsageDesire
float __fastcall CDOTA_Bot::GetActionDelay(CDOTA_Bot *const this, bool bMaximum)
{
  float result; // xmm0_4
  int m_iDifficulty; // eax
  bool v4; // cc

  result = 0.2;
  if ( bMaximum )
  {
    m_iDifficulty = this->m_iDifficulty;
    v4 = m_iDifficulty <= 2;
    if ( m_iDifficulty != 2 )
      goto LABEL_3;
    return result * 3.0;
  }
  result = RandomFloat(0.1, 0.2);
  m_iDifficulty = this->m_iDifficulty;
  v4 = m_iDifficulty <= 2;
  if ( m_iDifficulty == 2 )
    return result * 3.0;
LABEL_3:
  if ( v4 )
  {
    if ( m_iDifficulty >= 0 )
      return result * 5.0;
  }
  else if ( m_iDifficulty == 4 )
  {
    return result * 0.75;
  }
  return result;
}


// CDOTA_Bot::SetAction  (line 1009, @0x0000000002807850, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTA_Bot::ClearActions, CUtlStack<CDOTA_BotAction*, CUtlMemory<CDOTA_BotAction*, int> >::Push, CDOTA_Bot::GetActionDelay, CUtlVectorBase<CDOTA_Bot::sQueuedAction, CUtlMemory<CDOTA_Bot::sQueuedAction, int> >::InsertBefore
// callers: CDOTA_Bot::Init, CDOTA_Bot::DoActionThink, CDOTA_Bot::SetMoveAction, CDOTA_Bot::SetAttackAction, CDOTA_Bot::SetAttackMoveAction, CDOTA_BotMode_Retreat::Think, CDOTA_BotMode_Item::Think, CDOTA_BotMode_Rune::Think, CDOTA_Bot_Script::Action_AttackMove, CDOTA_Bot_Script::Action_UseAbility, CDOTA_Bot_Script::Action_UseAbilityOnLocation, CDOTA_Bot_Script::Action_UseAbilityOnTree (24 total)
void __fastcall CDOTA_Bot::SetAction(CDOTA_Bot *const this, CDOTA_BotAction *pAction)
{
  float ActionDelay; // xmm0_4
  int m_Size; // edx
  int v5; // esi
  float v6; // xmm0_4
  CDOTA_Bot::sQueuedAction *i; // rax
  float v8; // [rsp+4h] [rbp-2Ch]
  CDOTA_BotAction *pActiona; // [rsp+8h] [rbp-28h] BYREF
  CDOTA_Bot::sQueuedAction queuedAction; // [rsp+10h] [rbp-20h] BYREF

  pActiona = pAction;
  if ( (*(pAction->_vptr_CDOTA_BotAction + 2))(pAction) != 5
    || this->m_bBypassActionQueue
    || (*(pActiona->_vptr_CDOTA_BotAction + 11))(pActiona) == 0
    || (*(this->_vptr_CDOTA_Bot + 27))(this) != 0 )
  {
    CDOTA_Bot::ClearActions(this, 0, 0);
    CUtlStack<CDOTA_BotAction *,CUtlMemory<CDOTA_BotAction *,int>>::Push(&this->m_ActionStack, &pActiona);
    (*(pActiona->_vptr_CDOTA_BotAction + 4))(pActiona);
  }
  else
  {
    queuedAction.bIsPush = 0;
    if ( g_pGameRules != 0 )
      v8 = *&g_pGameRules[18].m_szQuestName[20];
    else
      v8 = 0.0;
    ActionDelay = CDOTA_Bot::GetActionDelay(this, 0);
    m_Size = this->m_ActionQueue.m_Size;
    v5 = 0;
    v6 = ActionDelay + v8;
    queuedAction.fExecuteTime = v6;
    queuedAction.pAction = pActiona;
    if ( m_Size > 0 )
    {
      for ( i = this->m_ActionQueue.m_Memory.m_pMemory; v6 > i->fExecuteTime; ++i )
      {
        if ( ++v5 == m_Size )
          break;
      }
    }
    CUtlVectorBase<CDOTA_Bot::sQueuedAction,CUtlMemory<CDOTA_Bot::sQueuedAction,int>>::InsertBefore(
      &this->m_ActionQueue,
      v5,
      &queuedAction);
  }
}


// CDOTA_Bot::HasQueuedActionType  (line 1037, @0x00000000027e5360, libserver.so)  // inlines: end
// callers: CDOTA_Bot_Script::IsUsingAbility
bool __fastcall CDOTA_Bot::HasQueuedActionType(const CDOTA_Bot *const this, int eActionType)
{
  CDOTA_Bot::sQueuedAction *m_pMemory; // rbx
  CDOTA_Bot::sQueuedAction *v4; // r12

  m_pMemory = this->m_ActionQueue.m_Memory.m_pMemory;
  v4 = &m_pMemory[this->m_ActionQueue.m_Size];
  if ( m_pMemory == v4 )
    return 0;
  while ( (*(m_pMemory->pAction->_vptr_CDOTA_BotAction + 2))(m_pMemory->pAction) != eActionType )
  {
    if ( v4 == ++m_pMemory )
      return 0;
  }
  return 1;
}


// CDOTA_Bot::HasQueuedAction  (line 1048, @0x00000000027e53d0, libserver.so)
// callers: CDOTA_Bot_Script::HasQueuedAction
bool __fastcall CDOTA_Bot::HasQueuedAction(const CDOTA_Bot *const this)
{
  return this->m_ActionQueue.m_Size > 0;
}


// CDOTA_Bot::SetMoveAction  (line 1055, @0x00000000028081d0, libserver.so)  // inlines: Element, FastSqrt, GetAction, Length2D, ToDOTABotActionMoveTo, Top, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator[]
// calls: operator new, CDOTA_BotAction_MoveTo::CDOTA_BotAction_MoveTo, CDOTA_Bot::SetAction, CDOTA_BotAction_MoveTo::UpdateLocation, operator delete, _Unwind_Resume
// callers: CDOTA_BotMode_Assemble::Think, CDOTA_BotMode_AssembleWithHumans::Think, CDOTA_BotMode_Companion::HandleModeCompanionAction, CDOTA_BotMode_Attack::Think, CDOTA_BotMode_DefendAlly::Think, CDOTA_BotMode_Companion::Think, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_SecretShop::Think, CDOTA_BotMode_Retreat::Think, CDOTA_BotMode_Roam::Think, CDOTA_BotMode_EvasiveManeuvers::Think, CDOTA_BotMode_Farm::Think (27 total)
void __fastcall CDOTA_Bot::SetMoveAction(
        CDOTA_Bot *const this,
        const Vector *const vLoc,
        bool bExact,
        bool bAllowVisibleToEnemy)
{
  int v7; // xmm1_4
  int m_Size; // eax
  CDOTA_BotAction_MoveTo *v9; // rbx
  CDOTA_BotAction_MoveTo *v10; // rbx
  float fThreshold; // [rsp+Ch] [rbp-24h]

  v7 = 1120403456;
  if ( bExact )
    v7 = 1092616192;
  m_Size = this->m_ActionStack.m_Size;
  fThreshold = *&v7;
  if ( m_Size > 0
    && (v9 = this->m_ActionStack.m_Memory.m_pMemory[m_Size - 1]) != 0
    && (*(v9->_vptr_CDOTA_BotAction + 2))(v9) == 2 )
  {
    if ( fsqrt(
           ((vLoc->x - v9->m_vDestination.x) * (vLoc->x - v9->m_vDestination.x))
         + ((vLoc->y - v9->m_vDestination.y) * (vLoc->y - v9->m_vDestination.y))) > fThreshold )
      CDOTA_BotAction_MoveTo::UpdateLocation(v9, vLoc);
  }
  else
  {
    v10 = operator new(0x78u);
    CDOTA_BotAction_MoveTo::CDOTA_BotAction_MoveTo(v10, this, vLoc, bAllowVisibleToEnemy);
    CDOTA_Bot::SetAction(this, v10);
  }
}


// CDOTA_Bot::SetAttackAction  (line 1072, @0x0000000002808c50, libserver.so)  // inlines: CEntityHandle, CHandle, Element, Get, GetAction, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTarget, GetUnit, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToDOTABotActionAttack, Top, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: operator new, CDOTA_BotAction_Attack::CDOTA_BotAction_Attack, CDOTA_Bot::SetAction, CEntityHandle::operator CEntityInstance*, operator delete, _Unwind_Resume
// callers: CDOTA_BotMode_Attack::Think, CDOTA_BotMode_DefendAlly::Think, CDOTA_BotMode_Companion::Think, CDOTA_BotMode_DefendTower::Think, CDOTA_Bot::DoCreepAttackAndDeny, CDOTA_BotMode_EvasiveManeuvers::Think, CDOTA_BotMode_Farm::Think, CDOTA_BotMode_Laning::Think, CDOTA_BotMode_PushTower::Think, CDOTA_BotMode_Roshan::Think, CDOTA_BotMode_TutorialBoss::Think, CDOTA_BotMode_TeamRoam::Think (18 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot::SetAttackAction(CDOTA_Bot *const this, CDOTA_BaseNPC *pTarget, bool bOnce)
{
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rax
  int m_Size; // eax
  const CEntityHandle *v11; // r14
  CEntityIdentity *m_pEntity; // rdx
  __int16 v13; // cx
  CDOTA_BotAction_Attack *v14; // r12
  CDOTA_BaseNPC *v15; // rax
  EHANDLE hTarget; // [rsp+0h] [rbp-30h] BYREF

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v8 = &v7[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v8->m_EHandle.m_Index
    || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  if ( (m_pInstance[58]._vptr_IHandleEntity & 2) == 0 )
  {
    m_Size = this->m_ActionStack.m_Size;
    if ( m_Size <= 0 )
      goto LABEL_10;
    v11 = this->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
    if ( v11 == 0 || (*(*&v11->m_Index + 16LL))(v11) != 3 )
      goto LABEL_10;
    v15 = CEntityHandle::operator CEntityInstance *(v11 + 5);
    if ( v15 == 0 || !v15->m_bIsDOTANPC )
      v15 = 0;
    if ( pTarget != v15 )
    {
LABEL_10:
      hTarget.m_Index = -1;
      if ( pTarget != 0 )
      {
        m_pEntity = pTarget->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v13 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
        }
      }
      v14 = operator new(0xB0u);
      CDOTA_BotAction_Attack::CDOTA_BotAction_Attack(v14, this, &hTarget, bOnce);
      CDOTA_Bot::SetAction(this, v14);
    }
  }
}


// CDOTA_Bot::SetAttackMoveAction  (line 1089, @0x0000000002809650, libserver.so)  // inlines: CDOTA_BotAction, CDOTA_BotAction_AttackMove, Element, GetAction, ToDOTABotActionAttackMove, Top, operator=, operator[]
// calls: operator new, CDOTA_Bot::SetAction
// callers: CDOTA_Bot_Hero_Riki::SetAttackMoveAction
void __fastcall CDOTA_Bot::SetAttackMoveAction(CDOTA_Bot *const this, const Vector *const vLoc)
{
  int m_Size; // eax
  CDOTA_BotAction *v5; // rdi
  CDOTA_BotAction *v6; // rax

  m_Size = this->m_ActionStack.m_Size;
  if ( m_Size <= 0
    || (v5 = this->m_ActionStack.m_Memory.m_pMemory[m_Size - 1]) == 0
    || (*(v5->_vptr_CDOTA_BotAction + 2))(v5) != 4 )
  {
    v6 = operator new(0x20u);
    v6->m_pBot = this;
    v6->_vptr_CDOTA_BotAction = off_42B7030;
    *(&v6->m_iActionFrame + 1) = LODWORD(vLoc->x);
    *&v6[1]._vptr_CDOTA_BotAction = vLoc->y;
    HIDWORD(v6[1]._vptr_CDOTA_BotAction) = LODWORD(vLoc->z);
    CDOTA_Bot::SetAction(this, v6);
  }
}


// CDOTA_Bot::InvalidateCurrentPath  (line 1100, @0x00000000027e53f0, libserver.so)  // inlines: InvalidateCurrentPath, ToDOTABotActionMoveTo
// callers: CDOTA_BotAction_UseAbility::OnAbilityExecuted
void __fastcall CDOTA_Bot::InvalidateCurrentPath(CDOTA_Bot *const this)
{
  __int64 v2; // r13
  int i; // r12d
  CDOTA_BotAction *v4; // rbx

  v2 = 0;
  for ( i = 0; this->m_ActionStack.m_Size > i; ++v2 )
  {
    v4 = this->m_ActionStack.m_Memory.m_pMemory[v2];
    if ( v4 != 0 && (*(v4->_vptr_CDOTA_BotAction + 2))(v4) == 2 )
    {
      BYTE1(v4[4].m_iActionFrame) = 1;
      LOBYTE(v4[4].m_iActionFrame) = 0;
    }
    ++i;
  }
}


// CDOTA_Bot::FindEstimatedAttackLocation  (line 1114, @0x00000000027e5900, libserver.so)
// calls: CBaseEntity::GetAbsOrigin, CDOTA_Bot::FindEstimatedAttackLocation
// callers: CDOTA_BotMode_Laning::Think, CDOTA_BotMode_PushTower::Think, CDOTA_BotMode_Laning_Kunkka::Think
Vector __fastcall CDOTA_Bot::FindEstimatedAttackLocation(CDOTA_Bot *const this, CDOTA_BaseNPC *pTarget)
{
  const Vector *AbsOrigin; // rax

  AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
  return CDOTA_Bot::FindEstimatedAttackLocation(this, AbsOrigin);
}


// CDOTA_Bot::FindEstimatedAttackLocation  (line 1121, @0x00000000027e5540, libserver.so)  // inlines: FastSqrt, Get, GetAttackRange, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetUnit, IsListeningToEvent, Length2D, ToDOTABaseNPC, VectorAdd, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator*=, operator+, operator-
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, VectorNormalize, CDOTA_BaseNPC::GetAttackRange
// callers: CDOTA_Bot::FindEstimatedAttackLocation, CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BotMode_DefendTower::Think, CDOTA_Bot::DoCreepAttackAndDeny, CDOTA_BotMode_Item::GetDesire
Vector __fastcall CDOTA_Bot::FindEstimatedAttackLocation(CDOTA_Bot *const this, const Vector *const vTargetLoc)
{
  EHANDLE *p_m_hUnit; // r13
  CEntityInstance *v4; // rax
  const CBaseEntity *v5; // rdi
  const Vector *AbsOrigin; // rax
  CEntityInstance *v7; // rax
  CEntityInstance *v8; // rbx
  __int64 m_hScope_high; // rax
  float Modifier_Constant_Highest_Internal; // xmm2_4
  __int64 v11; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_hScope_low; // xmm3_4
  __int64 v14; // rax
  float v15; // xmm3_4
  float v16; // xmm0_4
  __int64 v17; // rax
  float v18; // xmm0_4
  float v19; // xmm1_4
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  CEntityInstance *v24; // rax
  const CBaseEntity *v25; // rdi
  const Vector *v26; // rax
  unsigned __int64 v27; // rdx
  CEntityInstance *v30; // rax
  const CBaseEntity *v31; // rdi
  const Vector *v32; // rax
  float x; // xmm1_4
  float y; // xmm0_4
  vec_t v35; // xmm0_4
  CEntityInstance *v36; // rax
  CDOTA_BaseNPC *v37; // rdi
  float AttackRange; // xmm0_4
  unsigned int v39; // xmm2_4
  vec_t v40; // xmm1_4
  unsigned int v41; // xmm0_4
  __int64 v42; // rax
  float v43; // [rsp+4h] [rbp-5Ch]
  float v44; // [rsp+4h] [rbp-5Ch]
  float v45; // [rsp+8h] [rbp-58h]
  float v46; // [rsp+8h] [rbp-58h]
  float v47; // [rsp+8h] [rbp-58h]
  float v48; // [rsp+8h] [rbp-58h]
  float v49; // [rsp+Ch] [rbp-54h]
  Vector vFromTarget; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v51; // [rsp+30h] [rbp-30h]
  vec_t v52; // [rsp+38h] [rbp-28h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  p_m_hUnit = &this->m_hUnit;
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
    v5 = v4;
  else
    v5 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v49 = fsqrt(
          ((AbsOrigin->x - vTargetLoc->x) * (AbsOrigin->x - vTargetLoc->x))
        + ((AbsOrigin->y - vTargetLoc->y) * (AbsOrigin->y - vTargetLoc->y)));
  v7 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  m_hScope_high = HIBYTE(v8[67].m_hPrivateScope.m_hScope);
  Modifier_Constant_Highest_Internal = 0.0;
  if ( m_hScope_high != 0xFF && *(*&v8[65].m_worldGroupId.m_nHashCode + 24 * m_hScope_high) > 0 )
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           &v8[64].m_worldGroupId,
                                           modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                           &CModifierParams::s_Default);
  v11 = BYTE5(v8[67].m_hPrivateScope.m_hScope);
  Modifier_Constant_Additive_Internal = 0.0;
  m_hScope_low = SLODWORD(v8[47].m_hPrivateScope.m_hScope);
  if ( v11 != 0xFF && *(*&v8[65].m_worldGroupId.m_nHashCode + 24 * v11) > 0 )
  {
    v43 = Modifier_Constant_Highest_Internal;
    v45 = SLODWORD(v8[47].m_hPrivateScope.m_hScope);
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &v8[64].m_worldGroupId,
                                            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v43;
    m_hScope_low = v45;
  }
  v14 = BYTE6(v8[67].m_hPrivateScope.m_hScope);
  v15 = m_hScope_low + Modifier_Constant_Additive_Internal;
  v16 = 0.0;
  if ( v14 != 0xFF && *(*&v8[65].m_worldGroupId.m_nHashCode + 24 * v14) > 0 )
  {
    v44 = Modifier_Constant_Highest_Internal;
    v46 = v15;
    v16 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            &v8[64].m_worldGroupId,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v44;
    v15 = v46;
  }
  if ( Modifier_Constant_Highest_Internal > (v15 + v16) )
  {
    v42 = HIBYTE(v8[67].m_hPrivateScope.m_hScope);
    v23 = 0.0;
    if ( v42 != 0xFF && *(*&v8[65].m_worldGroupId.m_nHashCode + 24 * v42) > 0 )
      v23 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              &v8[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
              &CModifierParams::s_Default);
  }
  else
  {
    v17 = BYTE5(v8[67].m_hPrivateScope.m_hScope);
    v18 = 0.0;
    v19 = SLODWORD(v8[47].m_hPrivateScope.m_hScope);
    if ( v17 != 0xFF && *(*&v8[65].m_worldGroupId.m_nHashCode + 24 * v17) > 0 )
    {
      v47 = SLODWORD(v8[47].m_hPrivateScope.m_hScope);
      v18 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &v8[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
              &CModifierParams::s_Default);
      v19 = v47;
    }
    v20 = BYTE6(v8[67].m_hPrivateScope.m_hScope);
    v21 = v19 + v18;
    v22 = 0.0;
    if ( v20 != 0xFF && *(*&v8[65].m_worldGroupId.m_nHashCode + 24 * v20) > 0 )
    {
      v48 = v21;
      v22 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              &v8[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      v21 = v48;
    }
    v23 = v22 + v21;
  }
  if ( v23 <= v49 )
  {
    v30 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v30 != 0 && BYTE3(v30[7]._vptr_IHandleEntity) != 0 )
      v31 = v30;
    else
      v31 = 0;
    v32 = CBaseEntity::GetAbsOrigin(v31);
    x = v32->x;
    y = v32->y;
    vFromTarget.z = 0.0;
    v35 = y - vTargetLoc->y;
    vFromTarget.x = x - vTargetLoc->x;
    vFromTarget.y = v35;
    VectorNormalize(&vFromTarget);
    v36 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v36 != 0 && BYTE3(v36[7]._vptr_IHandleEntity) != 0 )
      v37 = v36;
    else
      v37 = 0;
    AttackRange = CDOTA_BaseNPC::GetAttackRange(v37);
    *&v39 = (vFromTarget.y * AttackRange) + vTargetLoc->y;
    v40 = (vFromTarget.z * AttackRange) + vTargetLoc->z;
    *&v41 = (AttackRange * vFromTarget.x) + vTargetLoc->x;
    v52 = v40;
    v51 = __PAIR64__(v39, v41);
  }
  else
  {
    v24 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v24 != 0 && BYTE3(v24[7]._vptr_IHandleEntity) != 0 )
      v25 = v24;
    else
      v25 = 0;
    v26 = CBaseEntity::GetAbsOrigin(v25);
    v27 = *&v26->x;
    *&v26 = v26->z;
    v51 = v27;
    v52 = *&v26;
  }
  *&result.x = v51;
  result.z = v52;
  return result;
}


// CDOTA_Bot::CanKillUnit  (line 1135, @0x00000000027e5930, libserver.so)  // inlines: FastSqrt, Get, GetAttackRange, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetProjectileSpeed, GetUnit, IsListeningToEvent, Length2D, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-
// calls: CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_BaseNPC::GetAttackRange, CDOTA_BaseNPC::TimeUntilNextAttack, CDOTA_BaseNPC::GetCastPoint, CDOTA_BaseNPC::GetHealthEstimate, CDOTA_BaseNPC::GetAverageTrueAttackDamage
// callers: CDOTA_BotMode_Laning::Think
bool __fastcall CDOTA_Bot::CanKillUnit(CDOTA_Bot *const this, CDOTA_BaseNPC *pNPC)
{
  EHANDLE *p_m_hUnit; // r12
  const Vector *AbsOrigin; // rbx
  CEntityInstance *v5; // rax
  const CBaseEntity *v6; // rdi
  const Vector *v7; // rax
  __m128i v8; // xmm0
  float v9; // r15d
  CEntityInstance *v10; // rax
  CEntityInstance *v11; // rbx
  __int64 m_hScope_high; // rax
  float Modifier_Constant_Highest_Internal; // xmm3_4
  __int64 v14; // rax
  float m_hScope_low; // xmm2_4
  float Modifier_Constant_Additive_Internal; // xmm0_4
  __int64 v17; // rax
  float v18; // xmm2_4
  float v19; // xmm0_4
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // rax
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  CEntityInstance *v27; // rax
  CDOTA_BaseNPC *v28; // rdi
  CEntityInstance *v29; // rax
  CEntityInstance *v30; // rdi
  CEntityInstance *v31; // rax
  CDOTA_BaseNPC *v32; // rdi
  CEntityInstance *v33; // rax
  CDOTA_BaseNPC *v34; // rdi
  float v35; // xmm1_4
  CEntityInstance *v36; // rax
  CDOTA_BaseNPC *v37; // rdi
  CEntityInstance *v39; // rdi
  __int64 m_Id_low; // rdx
  __int64 v41; // rax
  float v42; // [rsp+4h] [rbp-3Ch]
  float v43; // [rsp+4h] [rbp-3Ch]
  float fWalkDist; // [rsp+8h] [rbp-38h]
  float fWalkDista; // [rsp+8h] [rbp-38h]
  float fWalkDistb; // [rsp+8h] [rbp-38h]
  float fWalkDistc; // [rsp+8h] [rbp-38h]
  float fTimeToAttacka; // [rsp+Ch] [rbp-34h]
  float fTimeToAttack; // [rsp+Ch] [rbp-34h]

  p_m_hUnit = &this->m_hUnit;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pNPC);
  v5 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  v7 = CBaseEntity::GetAbsOrigin(v6);
  fTimeToAttacka = ((v7->x - AbsOrigin->x) * (v7->x - AbsOrigin->x)) + ((v7->y - AbsOrigin->y) * (v7->y - AbsOrigin->y));
  v8 = LODWORD(fTimeToAttacka);
  *v8.m128i_i32 = fsqrt(fTimeToAttacka);
  v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
  v10 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
    v11 = v10;
  else
    v11 = 0;
  m_hScope_high = HIBYTE(v11[67].m_hPrivateScope.m_hScope);
  if ( m_hScope_high == 0xFF )
  {
    Modifier_Constant_Highest_Internal = 0.0;
  }
  else if ( *(*&v11[65].m_worldGroupId.m_nHashCode + 24 * m_hScope_high) <= 0 )
  {
    Modifier_Constant_Highest_Internal = 0.0;
  }
  else
  {
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           &v11[64].m_worldGroupId,
                                           modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                           &CModifierParams::s_Default);
  }
  v14 = BYTE5(v11[67].m_hPrivateScope.m_hScope);
  m_hScope_low = SLODWORD(v11[47].m_hPrivateScope.m_hScope);
  Modifier_Constant_Additive_Internal = 0.0;
  if ( v14 != 0xFF && *(*&v11[65].m_worldGroupId.m_nHashCode + 24 * v14) > 0 )
  {
    v42 = Modifier_Constant_Highest_Internal;
    fWalkDist = SLODWORD(v11[47].m_hPrivateScope.m_hScope);
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &v11[64].m_worldGroupId,
                                            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v42;
    m_hScope_low = fWalkDist;
  }
  v17 = BYTE6(v11[67].m_hPrivateScope.m_hScope);
  v18 = m_hScope_low + Modifier_Constant_Additive_Internal;
  v19 = 0.0;
  if ( v17 != 0xFF && *(*&v11[65].m_worldGroupId.m_nHashCode + 24 * v17) > 0 )
  {
    v43 = Modifier_Constant_Highest_Internal;
    fWalkDista = v18;
    v19 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            &v11[64].m_worldGroupId,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v43;
    v18 = fWalkDista;
  }
  if ( Modifier_Constant_Highest_Internal > (v18 + v19) )
  {
    v41 = HIBYTE(v11[67].m_hPrivateScope.m_hScope);
    v26 = 0.0;
    if ( v41 != 0xFF && *(*&v11[65].m_worldGroupId.m_nHashCode + 24 * v41) > 0 )
      v26 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              &v11[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
              &CModifierParams::s_Default);
  }
  else
  {
    v20 = BYTE5(v11[67].m_hPrivateScope.m_hScope);
    v21 = SLODWORD(v11[47].m_hPrivateScope.m_hScope);
    v22 = 0.0;
    if ( v20 != 0xFF && *(*&v11[65].m_worldGroupId.m_nHashCode + 24 * v20) > 0 )
    {
      fWalkDistb = SLODWORD(v11[47].m_hPrivateScope.m_hScope);
      v22 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &v11[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
              &CModifierParams::s_Default);
      v21 = fWalkDistb;
    }
    v23 = BYTE6(v11[67].m_hPrivateScope.m_hScope);
    v24 = v21 + v22;
    v25 = 0.0;
    if ( v23 != 0xFF && *(*&v11[65].m_worldGroupId.m_nHashCode + 24 * v23) > 0 )
    {
      fWalkDistc = v24;
      v25 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              &v11[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      v24 = fWalkDistc;
    }
    v26 = v25 + v24;
  }
  if ( (v9 - v26) >= 0.0 )
  {
    v27 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
      v28 = v27;
    else
      v28 = 0;
    CDOTA_BaseNPC::GetAttackRange(v28);
  }
  v29 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
  {
    v30 = v29;
    if ( (*(&v29[50].m_worldGroupId + 1) & 2) == 0 )
    {
      (*(v29->_vptr_IHandleEntity + 386))(v29);
      v31 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      goto LABEL_33;
    }
  }
  else
  {
    v30 = 0;
  }
  (*(v30->_vptr_IHandleEntity + 386))(v30);
  v31 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
    v39 = v31;
  else
    v39 = 0;
  m_Id_low = LOBYTE(v39[67].m_iszPrivateVScripts.u.m_Id);
  if ( m_Id_low != 0xFF && *(*&v39[65].m_worldGroupId.m_nHashCode + 24 * m_Id_low) > 0 )
  {
    CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
      &v39[64].m_worldGroupId,
      modifierfunction::MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS,
      &CModifierParams::s_Default);
    v31 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  }
LABEL_33:
  if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
    v32 = v31;
  else
    v32 = 0;
  CDOTA_BaseNPC::TimeUntilNextAttack(v32);
  v33 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
    v34 = v33;
  else
    v34 = 0;
  CDOTA_BaseNPC::GetCastPoint(v34, 1);
  fTimeToAttack = CDOTA_BaseNPC::GetHealthEstimate(pNPC, v35);
  v36 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v36 == 0 || (v37 = v36, BYTE3(v36[7]._vptr_IHandleEntity) == 0) )
    v37 = 0;
  return (CDOTA_BaseNPC::GetAverageTrueAttackDamage(v37, 0) * 0.85000002) > fTimeToAttack;
}


// UnitHealthSort  (line 1158, @0x00000000027e32f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator->
// calls: CBaseEntity::GetHealth, CEntityHandle::operator CEntityInstance*
// callers: CDOTA_BotMode_Farm::Think
// globals: CEntityHandle::gm_pEntityList
int __fastcall UnitHealthSort(const EHANDLE *p1, const EHANDLE *p2)
{
  uint32 m_Index; // eax
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  int Health; // eax
  const CBaseEntity *v9; // rdi
  int v10; // r13d
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  const CBaseEntity *v15; // rax
  int v16; // r12d
  const CBaseEntity *v17; // rax

  m_Index = p1->m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p1->m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[p1->m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  Health = CBaseEntity::GetHealth(m_pInstance);
  v9 = 0;
  v10 = Health;
  if ( p2->m_Index + 2 > 1 )
  {
    v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(p2->m_Index) >> 9) & 0x3F];
    if ( v11 != 0 )
    {
      v12 = &v11[p2->m_Index & 0x1FF];
      if ( v12 != 0 && p2->m_Index == v12->m_EHandle.m_Index )
        v9 = v12->m_pInstance;
    }
  }
  v13 = CBaseEntity::GetHealth(v9);
  LODWORD(v14) = -1;
  if ( v10 >= v13 )
  {
    v15 = CEntityHandle::operator CEntityInstance *(p1);
    v16 = CBaseEntity::GetHealth(v15);
    v17 = CEntityHandle::operator CEntityInstance *(p2);
    return v16 > CBaseEntity::GetHealth(v17);
  }
  return v14;
}


// CDOTA_Bot::FindNearbyCreeps  (line 1169, @0x00000000027fe750, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetNPCAttackTarget, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Sort
// callers: CDOTA_Bot::IsAboutToDie, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_EvasiveManeuvers::Think, CDOTA_BotMode_Farm::Think, CDOTA_BotMode_PushTower::Think
// globals: CEntityHandle::gm_pEntityList, UnitHealthSort(CHandle<CBaseEntity> const*,CHandle<CBaseEntity> const*)
void __fastcall CDOTA_Bot::FindNearbyCreeps(
        CDOTA_Bot *const this,
        float fRadius,
        int iTeamNumber,
        bool bAttackingUs,
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pCreeps)
{
  CDOTA_BaseNPC *v9; // rbx
  CEntityInstance *v10; // rax
  const Vector *AbsOrigin; // rax
  int v12; // ebx
  CHandle<CBaseEntity> *v13; // rcx
  uint32 m_Index; // eax
  __int16 v15; // si
  CEntityIdentity *v16; // rcx
  CEntityIdentity *v17; // rcx
  CEntityInstance *m_pInstance; // rax
  int m_pAsString_high; // ecx
  unsigned __int16 v20; // si
  CEntityIdentity *v21; // rax
  CEntityIdentity *v22; // rax
  CEntityInstance *v23; // rsi
  uint32 v24; // eax
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CEntityInstance *v27; // rax
  int v28; // esi

  v9 = 0;
  v10 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
    v9 = v10;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
  FindUnitsInRadius(iTeamNumber, AbsOrigin, v9, fRadius, pCreeps, 1, 2, 0, 0, 0);
  if ( bAttackingUs && pCreeps->m_Size > 0 )
  {
    v12 = 0;
    do
    {
      v13 = &pCreeps->m_Memory.m_pMemory[v12];
      m_Index = v13->m_Index;
      if ( v13->m_Index + 2 <= 1
        || (v15 = v13->m_Index,
            (v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F]) == 0)
        || (v17 = &v16[v15 & 0x1FF]) == 0
        || m_Index != v17->m_EHandle.m_Index
        || (m_pInstance = v17->m_pInstance, v17->m_pInstance == 0)
        || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
      {
        m_pInstance = 0;
      }
      m_pAsString_high = HIDWORD(m_pInstance[59].m_iszPrivateVScripts.u.m_pAsString);
      if ( (m_pAsString_high + 2) <= 1
        || (v20 = WORD2(m_pInstance[59].m_iszPrivateVScripts.u.m_pAsString),
            (v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v20 >> 9) & 0x3F]) == 0)
        || (v22 = &v21[v20 & 0x1FF]) == 0
        || m_pAsString_high != v22->m_EHandle.m_Index
        || (v23 = v22->m_pInstance, v22->m_pInstance == 0)
        || BYTE3(v23[7]._vptr_IHandleEntity) == 0 )
      {
        v23 = 0;
      }
      v24 = this->m_hUnit.m_Index;
      if ( v24 + 2 <= 1
        || (v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
        || (v26 = &v25[this->m_hUnit.m_Index & 0x1FF]) == 0
        || v24 != v26->m_EHandle.m_Index
        || (v27 = v26->m_pInstance, v26->m_pInstance == 0)
        || BYTE3(v27[7]._vptr_IHandleEntity) == 0 )
      {
        v27 = 0;
      }
      if ( v23 != v27 )
      {
        v28 = v12--;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(pCreeps, v28);
      }
      ++v12;
    }
    while ( pCreeps->m_Size > v12 );
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Sort(pCreeps, UnitHealthSort);
}


// CDOTA_Bot::FindNearbyHeroes  (line 1191, @0x00000000027f9c20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Sort
// callers: CDOTA_BotMode_Companion::UpdateSubMode, CDOTA_BotMode_TutorialBoss::UpdateSubMode, CDOTA_Bot_AbilityUsage_AncientJanggo::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_ArcaneBoots::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_CrimsonGuard::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Dagon::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Mekansm::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Pipe::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_ShivasGuard::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Urn::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem::GetCurrentUsageDesire (14 total)
// globals: CEntityHandle::gm_pEntityList, UnitHealthSort(CHandle<CBaseEntity> const*,CHandle<CBaseEntity> const*)
void __fastcall CDOTA_Bot::FindNearbyHeroes(
        CDOTA_Bot *const this,
        float fRadius,
        int iTeamNumber,
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pHeroes)
{
  CDOTA_BaseNPC *m_pInstance; // rbx
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  const Vector *AbsOrigin; // rax

  m_pInstance = 0;
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hUnit.m_Index & 0x1FF];
      if ( v9 != 0
        && m_Index == v9->m_EHandle.m_Index
        && v9->m_pInstance != 0
        && BYTE3(v9->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        m_pInstance = v9->m_pInstance;
      }
    }
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  FindUnitsInRadius(iTeamNumber, AbsOrigin, m_pInstance, fRadius, pHeroes, 1, 1, 128, 0, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Sort(pHeroes, UnitHealthSort);
}


// CDOTA_Bot::GetNearbyCreeps  (line 1199, @0x000000000280add0, libserver.so)
// calls: CDOTA_Bot::GetNearbyUnits
// callers: CDOTA_BotMode_Laning::Think, CDOTA_BotMode_PushTower::Think, CDOTA_BotMode_TutorialBoss::UpdateSubMode, CDOTA_Bot_Script::GetNearbyCreeps, CDOTA_BotMode_TeamRoam::Think, CDOTA_Bot_AbilityUsage_HandOfMidas::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Dazzle_ShadowWave::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bristleback_QuillSpray::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Lich_DarkRitual::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Lich_ChainFrost::GetCurrentUsageDesire (32 total)
__int64 __fastcall CDOTA_Bot::GetNearbyCreeps(
        CDOTA_Bot *const this,
        DOTA_UNIT_TARGET_TEAM iTeam,
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pCreeps,
        float fMaxDistance)
{
  return CDOTA_Bot::GetNearbyUnits(this, iTeam, &this->m_NearbyCreeps, pCreeps, fMaxDistance);
}


// CDOTA_Bot::GetNearbyHeroes  (line 1204, @0x000000000280adf0, libserver.so)
// calls: CDOTA_Bot::GetNearbyUnits
// callers: CDOTA_BotMode_EvasiveManeuvers::Think, CDOTA_BotMode_Laning::GetBaseAmountBackFromLane, CDOTA_BotMode_Rune::GetRuneDesire, CDOTA_BotMode_Rune::Think, CDOTA_BotMode_Laning::Think, CDOTA_BotMode_Roshan::Think, CDOTA_BotMode_Retreat::GetDesire, CDOTA_BotMode_Roam::GetRoamScore, CDOTA_Bot_Script::GetNearbyHeroes, CDOTA_Bot_AbilityUsage_AbyssalBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_BlackKingBar::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_BladeMail::GetCurrentUsageDesire (84 total)
__int64 __fastcall CDOTA_Bot::GetNearbyHeroes(
        CDOTA_Bot *const this,
        DOTA_UNIT_TARGET_TEAM iTeam,
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pHeroes,
        float fMaxDistance)
{
  return CDOTA_Bot::GetNearbyUnits(this, iTeam, &this->m_NearbyHeroes, pHeroes, fMaxDistance);
}


// CDOTA_Bot::GetNearbyTowers  (line 1209, @0x000000000280ae10, libserver.so)
// calls: CDOTA_Bot::GetNearbyUnits
// callers: CDOTA_Bot_Script::GetNearbyTowers, CDOTA_BotMode_Attack_WarlockGolem::Think, CDOTA_BotMode_GenericMinion::Think
__int64 __fastcall CDOTA_Bot::GetNearbyTowers(
        CDOTA_Bot *const this,
        DOTA_UNIT_TARGET_TEAM iTeam,
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pTowers,
        float fMaxDistance)
{
  return CDOTA_Bot::GetNearbyUnits(this, iTeam, &this->m_NearbyTowers, pTowers, fMaxDistance);
}


// CDOTA_Bot::GetNearbyBarracks  (line 1214, @0x000000000280ae30, libserver.so)
// calls: CDOTA_Bot::GetNearbyUnits
// callers: CDOTA_Bot_Script::GetNearbyBarracks
__int64 __fastcall CDOTA_Bot::GetNearbyBarracks(
        CDOTA_Bot *const this,
        DOTA_UNIT_TARGET_TEAM iTeam,
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pBarracks,
        float fMaxDistance)
{
  return CDOTA_Bot::GetNearbyUnits(this, iTeam, &this->m_NearbyBarracks, pBarracks, fMaxDistance);
}


// CDOTA_Bot::GetNearbyShrines  (line 1219, @0x000000000280ae50, libserver.so)
// calls: CDOTA_Bot::GetNearbyUnits
// callers: CDOTA_Bot_Script::GetNearbyShrines
__int64 __fastcall CDOTA_Bot::GetNearbyShrines(
        CDOTA_Bot *const this,
        DOTA_UNIT_TARGET_TEAM iTeam,
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pShrines,
        float fMaxDistance)
{
  return CDOTA_Bot::GetNearbyUnits(this, iTeam, &this->m_NearbyShrines, pShrines, fMaxDistance);
}


// CDOTA_Bot::GetNearbyUnits  (line 1226, @0x000000000280ab00, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnit, GrowMemory, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Bot::UpdateNearbyUnits, CEntityHandle::operator CEntityInstance*, Warning, CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// callers: CDOTA_Bot::GetNearbyCreeps, CDOTA_Bot::GetNearbyHeroes, CDOTA_Bot::GetNearbyTowers, CDOTA_Bot::GetNearbyBarracks, CDOTA_Bot::GetNearbyShrines
// strings: "Bot querying nearby creeps with a distance greater than cached!"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot::GetNearbyUnits(
        CDOTA_Bot *const this,
        DOTA_UNIT_TARGET_TEAM iTeam,
        const CUtlVector<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int> > *const vecNearbyUnits,
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pUnits,
        float fMaxDistance)
{
  char v5; // r14
  CDOTA_Bot::SortedUnit_t *m_pMemory; // rax
  CDOTA_Bot::SortedUnit_t *v10; // r15
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // r14d
  CEntityIdentity *v14; // rsi
  CEntityIdentity *v15; // rsi
  CEntityInstance *m_pInstance; // r8
  CEntityInstance *v17; // rax
  CEntityInstance *v18; // rax
  __int64 v19; // rax
  int v20; // esi
  CHandle<CBaseEntity> *v21; // rax
  __int64 m_Size; // rax
  int v24; // esi
  CHandle<CBaseEntity> *v25; // rax
  int v26; // [rsp+Ch] [rbp-54h]
  float fMaxDistSqr; // [rsp+10h] [rbp-50h]
  CEntityInstance *v29; // [rsp+18h] [rbp-48h]
  int v30; // [rsp+18h] [rbp-48h]
  char m_CScriptComponent_high; // [rsp+20h] [rbp-40h]
  char v32; // [rsp+20h] [rbp-40h]
  int v33; // [rsp+20h] [rbp-40h]
  CEntityInstance *v34; // [rsp+20h] [rbp-40h]
  CUtlVectorBase<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int> >::const_iterator __for_end; // [rsp+28h] [rbp-38h]

  v5 = iTeam;
  CDOTA_Bot::UpdateNearbyUnits(this);
  if ( fMaxDistance > 1600.0 )
    Warning("Bot querying nearby creeps with a distance greater than cached!");
  m_pMemory = vecNearbyUnits->m_Memory.m_pMemory;
  fMaxDistSqr = fMaxDistance * fMaxDistance;
  __for_end = &m_pMemory[vecNearbyUnits->m_Size];
  if ( m_pMemory != __for_end )
  {
    v10 = vecNearbyUnits->m_Memory.m_pMemory;
    v11 = 0;
    v12 = v5 & 1;
    v13 = v5 & 2;
    v26 = v12;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v10->hUnit.m_Index + 2 > 1 )
        {
          v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->hUnit.m_Index) >> 9) & 0x3F];
          if ( v14 != 0 )
          {
            v15 = &v14[v10->hUnit.m_Index & 0x1FF];
            if ( v15 != 0 && v10->hUnit.m_Index == v15->m_EHandle.m_Index )
            {
              m_pInstance = v15->m_pInstance;
              if ( v15->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                break;
            }
          }
        }
LABEL_5:
        if ( __for_end == ++v10 )
          return v11;
      }
      if ( v26 != 0 )
      {
        v29 = v15->m_pInstance;
        m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
        v17 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
        m_pInstance = v29;
        if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
        {
          if ( m_CScriptComponent_high != HIBYTE(v17[7].m_CScriptComponent) )
            goto LABEL_16;
        }
        else if ( m_CScriptComponent_high != 0 )
        {
          goto LABEL_16;
        }
        if ( fMaxDistance == 0.0 || fMaxDistSqr > v10->fDistSqr )
        {
          if ( pUnits != 0 )
          {
            m_Size = pUnits->m_Size;
            v24 = pUnits->m_Size;
            if ( m_Size == pUnits->m_Memory.m_nAllocationCount )
            {
              v30 = pUnits->m_Size;
              v34 = m_pInstance;
              CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&pUnits->m_Memory, 1);
              v24 = pUnits->m_Size;
              m_Size = v30;
              m_pInstance = v34;
            }
            pUnits->m_Size = v24 + 1;
            v25 = &pUnits->m_Memory.m_pMemory[m_Size];
            if ( v25 != 0 )
              v25->m_Index = v10->hUnit;
          }
          ++v11;
        }
      }
LABEL_16:
      if ( v13 == 0 )
        goto LABEL_5;
      v32 = HIBYTE(m_pInstance[7].m_CScriptComponent);
      v18 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
      if ( v18 == 0 || BYTE3(v18[7]._vptr_IHandleEntity) == 0 )
        v18 = 0;
      if ( v32 == HIBYTE(v18[7].m_CScriptComponent) || fMaxDistance != 0.0 && fMaxDistSqr <= v10->fDistSqr )
        goto LABEL_5;
      if ( pUnits != 0 )
      {
        v19 = pUnits->m_Size;
        v20 = pUnits->m_Size;
        if ( v19 == pUnits->m_Memory.m_nAllocationCount )
        {
          v33 = pUnits->m_Size;
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&pUnits->m_Memory, 1);
          v20 = pUnits->m_Size;
          v19 = v33;
        }
        pUnits->m_Size = v20 + 1;
        v21 = &pUnits->m_Memory.m_pMemory[v19];
        if ( v21 != 0 )
          v21->m_Index = v10->hUnit;
      }
      ++v10;
      ++v11;
      if ( __for_end == v10 )
        return v11;
    }
  }
  return 0;
}


// CDOTA_Bot::GetNearbyTrees  (line 1268, @0x000000000280ae70, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, Get, GetBinaryObject, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, GrowMemory, IndexToIdentity, IsValid, Length2DSqr, LookupEntity, ToDOTABaseNPC, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[]
// calls: CDOTA_Bot::UpdateNearbyUnits, CBaseEntity::GetAbsOrigin, CUtlMemory<int, int>::Grow, Warning
// callers: CDOTA_Bot_Script::GetNearbyTrees
// strings: "Bot querying nearby trees with a distance greater than cached!"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot::GetNearbyTrees(
        CDOTA_Bot *const this,
        CUtlVector<int,CUtlMemory<int,int> > *pTrees,
        float a3,
        float fMaxDistance)
{
  float v6; // xmm0_4
  __int64 v7; // rbx
  int v8; // r15d
  unsigned int v9; // r13d
  __int64 v10; // rax
  CDOTA_BinaryObject *v11; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v13; // rcx
  CEntityIdentity *v14; // rcx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  __int64 m_Size; // rax
  int *v18; // r8
  int v19; // ecx
  int *v20; // rax
  float fMaxDistSqr; // [rsp+8h] [rbp-48h]
  float v23; // [rsp+Ch] [rbp-44h]
  float v24; // [rsp+Ch] [rbp-44h]
  CBaseEntity *v25; // [rsp+10h] [rbp-40h]
  int v26; // [rsp+10h] [rbp-40h]
  const Vector *fMaxDistanceb; // [rsp+18h] [rbp-38h]
  int *fMaxDistancec; // [rsp+18h] [rbp-38h]

  CDOTA_Bot::UpdateNearbyUnits(this);
  v6 = a3;
  if ( a3 > 1600.0 )
  {
    Warning("Bot querying nearby trees with a distance greater than cached!");
    v6 = a3;
  }
  fMaxDistSqr = v6 * v6;
  if ( this->m_NearbyTrees.m_Size <= 0 )
  {
    return 0;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = this->m_NearbyTrees.m_Memory.m_pMemory[v7];
      if ( v10 >= 0 && v10 < g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Size )
      {
        v11 = g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Memory.m_pMemory[v10];
        if ( v11 != 0 )
        {
          if ( v6 == 0.0 )
            goto LABEL_15;
          m_Index = this->m_hUnit.m_Index;
          if ( m_Index + 2 > 1
            && (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
            && (v14 = &v13[this->m_hUnit.m_Index & 0x1FF]) != 0
            && m_Index == v14->m_EHandle.m_Index
            && v14->m_pInstance != 0
            && BYTE3(v14->m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            m_pInstance = v14->m_pInstance;
          }
          else
          {
            m_pInstance = 0;
          }
          v23 = v6;
          v25 = v11;
          fMaxDistanceb = CBaseEntity::GetAbsOrigin(m_pInstance);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v25);
          v6 = v23;
          if ( fMaxDistSqr > (((AbsOrigin->x - fMaxDistanceb->x) * (AbsOrigin->x - fMaxDistanceb->x))
                            + ((AbsOrigin->y - fMaxDistanceb->y) * (AbsOrigin->y - fMaxDistanceb->y))) )
          {
LABEL_15:
            if ( pTrees != 0 )
            {
              m_Size = pTrees->m_Size;
              v18 = &this->m_NearbyTrees.m_Memory.m_pMemory[v7];
              v19 = pTrees->m_Size;
              if ( m_Size == pTrees->m_Memory.m_nAllocationCount )
              {
                v24 = v6;
                v26 = pTrees->m_Size;
                fMaxDistancec = &this->m_NearbyTrees.m_Memory.m_pMemory[v7];
                CUtlMemory<int,int>::Grow(&pTrees->m_Memory, 1);
                v19 = pTrees->m_Size;
                v6 = v24;
                m_Size = v26;
                v18 = fMaxDistancec;
              }
              pTrees->m_Size = v19 + 1;
              v20 = &pTrees->m_Memory.m_pMemory[m_Size];
              if ( v20 != 0 )
                *v20 = *v18;
            }
            ++v9;
          }
        }
      }
      ++v8;
      ++v7;
    }
    while ( this->m_NearbyTrees.m_Size > v8 );
  }
  return v9;
}


// CDOTA_Bot::WasRecentlyHitByHero  (line 1303, @0x00000000027e5f60, libserver.so)
// calls: CDOTA_Bot::TimeSinceHitByHero
// callers: CDOTA_Bot_Script::WasRecentlyDamagedByAnyHero, CDOTA_Bot_AbilityUsage_Bottle::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Clarity::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Flask::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Urn::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift::GetCurrentUsageDesire
bool __fastcall CDOTA_Bot::WasRecentlyHitByHero(CDOTA_Bot *const this, float a2, float fTime)
{
  return a2 > CDOTA_Bot::TimeSinceHitByHero(this);
}


// CDOTA_Bot::WasRecentlyHitBySpecificHero  (line 1308, @0x00000000027e5eb0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, TimeSinceHitBySpecificHero
// callers: CDOTA_Bot_Script::WasRecentlyDamagedByHero
bool __fastcall CDOTA_Bot::WasRecentlyHitBySpecificHero(
        CDOTA_Bot *const this,
        unsigned int nPlayerID,
        float a3,
        float fTime)
{
  float v4; // xmm1_4
  float v5; // xmm1_4

  v4 = 0.0;
  if ( nPlayerID <= 0x17 )
  {
    v5 = 0.0;
    if ( g_pGameRules != 0 )
      v5 = *&g_pGameRules[18].m_szQuestName[20];
    v4 = v5 - this->m_HitByHeroTime[nPlayerID];
  }
  return a3 > v4;
}


// CDOTA_Bot::TimeSinceHitByHero  (line 1313, @0x00000000027e5ef0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, Min<float>
// callers: CDOTA_Bot::WasRecentlyHitByHero, CDOTA_Bot::DoModeThink, CDOTA_Bot_Script::TimeSinceDamagedByAnyHero, CDOTA_Bot_AbilityUsage_Necrolyte_Scythe::GetCurrentUsageDesire
float __fastcall CDOTA_Bot::TimeSinceHitByHero(CDOTA_Bot *const this)
{
  float v1; // xmm0_4
  float result; // xmm0_4
  __int64 i; // rax
  float v4; // xmm1_4
  float v5; // xmm1_4

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  result = v1 - this->m_HitByHeroTime[0];
  for ( i = 0; i != 23; ++i )
  {
    if ( g_pGameRules != 0 )
      v4 = *&g_pGameRules[18].m_szQuestName[20];
    else
      v4 = 0.0;
    v5 = v4 - this->m_HitByHeroTime[i + 1];
    result = fminf(result, v5);
  }
  return result;
}


// CDOTA_Bot::TimeSinceHitBySpecificHero  (line 1324, @0x00000000027e6190, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// callers: CDOTA_Bot_Script::TimeSinceDamagedByHero
float __fastcall CDOTA_Bot::TimeSinceHitBySpecificHero(CDOTA_Bot *const this, int nPlayer)
{
  float result; // xmm0_4
  float v3; // xmm0_4

  result = 0.0;
  if ( nPlayer <= 0x17 )
  {
    v3 = 0.0;
    if ( g_pGameRules != 0 )
      v3 = *&g_pGameRules[18].m_szQuestName[20];
    return v3 - this->m_HitByHeroTime[nPlayer];
  }
  return result;
}


// CDOTA_Bot::GetOffensivePower  (line 1334, @0x00000000027e61d0, libserver.so)
// callers: CDOTA_BotMode_Farm::GetFarmLaneScore, CDOTA_BotMode_Retreat::GetDesire, CDOTA_Bot_Script::GetOffensivePower, CDOTA_TeamCommander::GetTeamOffensivePower, CDOTA_TeamCommander::GetOpposingTeamOffensivePower, CDOTA_TeamCommander::GetNearbyEnemyOffensivePower, CDOTA_TeamCommander::GetNearbyAlliedOffensivePower, CDOTA_TeamCommander::GetDebugInfo, CDOTA_TeamCommander::BuildDebugString, CDOTA_TeamCommander::UpdateRoshanDesire, CDOTA_TeamCommander::UpdateDefendLaneDesires, CDOTA_TeamCommander::UpdatePushLaneDesires (15 total)
float __fastcall CDOTA_Bot::GetOffensivePower(CDOTA_Bot *const this)
{
  return this->m_fEstimatedUnitDamage;
}


// CDOTA_Bot::GetRawOffensivePower  (line 1341, @0x00000000027e61e0, libserver.so)
// callers: CDOTA_Bot_Script::GetRawOffensivePower, CDOTA_TeamCommander::GetTeamOffensivePower, CDOTA_TeamCommander::GetOpposingTeamOffensivePower, CDOTA_TeamCommander::GetDebugInfo, CDOTA_TeamCommander::BuildDebugString, CDOTA_Bot_AbilityUsage_Juggernaut_BladeFury::GetCurrentUsageDesire
float __fastcall CDOTA_Bot::GetRawOffensivePower(CDOTA_Bot *const this)
{
  return this->m_fEstimatedMaxUnitDamage;
}


// CDOTA_Bot::FindClosestBuilding  (line 1348, @0x00000000027e61f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_TeamCommander::GetLeadBuildingInLane, CDOTA_BaseNPC::GetRangeToUnit, CDOTA_TeamCommander::GetOpposingTeamCommander
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC_Building *__fastcall CDOTA_Bot::FindClosestBuilding(CDOTA_Bot *const this, bool bFriendly)
{
  CDOTA_BaseNPC_Building *v4; // r13
  DOTA_LANE v5; // ebx
  CDOTA_TeamCommander *m_pTeamCommander; // rdi
  CDOTA_BaseNPC_Building *LeadBuildingInLane; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *m_pInstance; // rsi
  float RangeToUnit; // xmm0_4
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  float v15; // [rsp-8h] [rbp-3Ch]

  v4 = 0;
  v5 = DOTA_LANE::DOTA_LANE_TOP;
  v15 = 0.0;
  do
  {
    m_pTeamCommander = this->m_pTeamCommander;
    if ( bFriendly )
    {
      LeadBuildingInLane = CDOTA_TeamCommander::GetLeadBuildingInLane(m_pTeamCommander, v5);
    }
    else
    {
      OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(m_pTeamCommander);
      LeadBuildingInLane = CDOTA_TeamCommander::GetLeadBuildingInLane(OpposingTeamCommander, v5);
    }
    if ( LeadBuildingInLane != 0 )
    {
      m_Index = this->m_hUnit.m_Index;
      if ( m_Index + 2 <= 1
        || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
        || (v10 = &v9[this->m_hUnit.m_Index & 0x1FF]) == 0
        || m_Index != v10->m_EHandle.m_Index
        || (m_pInstance = v10->m_pInstance, v10->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      RangeToUnit = CDOTA_BaseNPC::GetRangeToUnit(LeadBuildingInLane, m_pInstance);
      if ( v4 == 0 || v15 > RangeToUnit )
      {
        v4 = LeadBuildingInLane;
        v15 = RangeToUnit;
      }
    }
    ++v5;
  }
  while ( v5 != DOTA_LANE::DOTA_LANE_MAX );
  return v4;
}


// CDOTA_Bot::GetAverageLifestealValue  (line 1374, @0x00000000027e6300, libserver.so)
// callers: CDOTA_TeamCommander::BuildDebugString
int __fastcall CDOTA_Bot::GetAverageLifestealValue(CDOTA_Bot *const this)
{
  return this->m_iLifesteal;
}


// CDOTA_Bot::GetAverageBlockValue  (line 1381, @0x00000000027e6310, libserver.so)
// callers: CDOTA_TeamCommander::BuildDebugString
int __fastcall CDOTA_Bot::GetAverageBlockValue(CDOTA_Bot *const this)
{
  return this->m_iBlock;
}


// CDOTA_Bot::GetTankRating  (line 1388, @0x00000000027e6320, libserver.so)  // inlines: Get, GetInstance, GetUnit, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetArmorReductionForDamageType, CBaseEntity::GetHealth
// callers: CDOTA_Bot::GetAvoidanceAmountForLocation, CDOTA_Bot::FindAvoidLocation, CDOTA_BotAction_MoveTo::GeneratePathWaypoints, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_Farm::CalculateDesiredLocation, CDOTA_BotMode_Retreat::Think, CDOTA_BotMode_EvasiveManeuvers::WantsToAvoidLocation, CDOTA_BotMode_EvasiveManeuvers::WantsToAvoidVector, CDOTA_BotMode_Farm::GetNeutralFarmingLevel, CDOTA_BotMode_Farm::Think, CDOTA_BotMode_PushTower::WillingToBeInTowerRange, CDOTA_BotMode_Laning::CalculateDesiredLocation (24 total)
float __fastcall CDOTA_Bot::GetTankRating(CDOTA_Bot *const this)
{
  EHANDLE *p_m_hUnit; // r12
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // rdi
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  CEntityInstance *v8; // rax
  const CBaseEntity *v9; // rdi
  int Health; // eax
  float v11; // xmm3_4
  float v12; // xmm0_4
  float result; // xmm0_4
  float v14; // xmm2_4
  float v15; // [rsp+4h] [rbp-1Ch]
  float v16; // [rsp+8h] [rbp-18h]
  float v17; // [rsp+Ch] [rbp-14h]

  p_m_hUnit = &this->m_hUnit;
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
    v4 = v3;
  else
    v4 = 0;
  v16 = 0.0;
  v5 = (CDOTA_BaseNPC::GetArmorReductionForDamageType(v4, 1) - 0.30000001) / 0.69999999;
  if ( v5 >= 0.0 )
  {
    v16 = 3.0;
    if ( v5 <= 1.0 )
      v16 = (v5 * 3.0) + 0.0;
  }
  v15 = 0.0;
  v6 = this->m_iLifesteal / 30.0;
  if ( v6 >= 0.0 )
  {
    v15 = 1.5;
    if ( v6 <= 1.0 )
      v15 = (v6 * 1.5) + 0.0;
  }
  v17 = 0.0;
  v7 = this->m_iBlock / 40.0;
  if ( v7 >= 0.0 )
  {
    v17 = 1.5;
    if ( v7 <= 1.0 )
      v17 = (v7 * 1.5) + 0.0;
  }
  v8 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
    v9 = v8;
  else
    v9 = 0;
  Health = CBaseEntity::GetHealth(v9);
  v11 = 0.0;
  v12 = (Health - 1500.0) / 2500.0;
  if ( v12 >= 0.0 )
  {
    v11 = 3.0;
    if ( v12 <= 1.0 )
      v11 = (3.0 * v12) + 0.0;
  }
  result = 0.0;
  v14 = (((v16 + v15) + v17) + v11) / 3.5;
  if ( v14 >= 0.0 )
  {
    result = 1.0;
    if ( v14 <= 1.0 )
      return v14 + 0.0;
  }
  return result;
}


// CDOTA_Bot::NumCreepsWillingToTank  (line 1400, @0x00000000027e6530, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// callers: CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_Farm::CalculateDesiredLocation, CDOTA_BotMode_Farm::Think, CDOTA_BotMode_Laning::CalculateDesiredLocation, CDOTA_BotMode_PushTower::Think
// globals: CEntityHandle::gm_pEntityList
char __fastcall CDOTA_Bot::NumCreepsWillingToTank(CDOTA_Bot *const this, float a2, float fTankRating)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  const CBaseEntity *m_pInstance; // rdi
  float Health; // xmm1_4
  char result; // al
  float v9; // xmm1_4

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  Health = CBaseEntity::GetHealth(m_pInstance);
  result = 0;
  v9 = Health * a2;
  if ( v9 >= 250.0 )
  {
    result = 1;
    if ( v9 >= 400.0 )
    {
      result = 2;
      if ( v9 >= 500.0 )
      {
        result = 3;
        if ( v9 >= 600.0 )
        {
          result = 4;
          if ( v9 >= 700.0 )
          {
            result = 5;
            if ( v9 >= 800.0 )
            {
              result = 6;
              if ( v9 >= 900.0 )
              {
                result = 7;
                if ( v9 >= 1000.0 )
                {
                  result = 8;
                  if ( v9 >= 1100.0 )
                    return (v9 >= 1200.0) + 9;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// CDOTA_Bot::HasTeleportAbility  (line 1420, @0x00000000027e2f60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::FindItemInInventory, CEntityHandle::operator CEntityInstance*
// strings: "item_tpscroll", "item_travel_boots", "item_travel_boots_2"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::HasTeleportAbility(CDOTA_Bot *const this, bool bRightNow)
{
  uint32 m_Index; // eax
  int v5; // ebx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  EHANDLE *p_m_hUnit; // r12
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rdi
  CDOTA_UnitInventory *v14; // rax
  CEntityInstance *v15; // rax
  CDOTA_BaseNPC *v16; // rdi
  CDOTA_UnitInventory *v17; // rax

  m_Index = this->m_hUnit.m_Index;
  v5 = !bRightNow ? 3 : 1;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
  if ( CDOTA_UnitInventory::FindItemInInventory(Inventory, "item_tpscroll", v5, 0, -1) != 0 )
    return 1;
  p_m_hUnit = &this->m_hUnit;
  v12 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
    v13 = v12;
  else
    v13 = 0;
  v14 = CDOTA_BaseNPC::GetInventory(v13);
  if ( CDOTA_UnitInventory::FindItemInInventory(v14, "item_travel_boots", !bRightNow ? 3 : 1, 0, -1) != 0 )
    return 1;
  v15 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 )
    v16 = v15;
  else
    v16 = 0;
  v17 = CDOTA_BaseNPC::GetInventory(v16);
  return CDOTA_UnitInventory::FindItemInInventory(v17, "item_travel_boots_2", !bRightNow ? 3 : 1, 0, -1) != 0;
}


// CDOTA_Bot::GetCleavePercent  (line 1429, @0x00000000027fda10, libserver.so)  // inlines: FStrEq, Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetAbility
// callers: CDOTA_Bot_Hero_Sven::GetCleavePercent, CDOTA_Bot_Hero_Tiny::GetCleavePercent
// strings: "item_bfury", "cleave_damage_percent", "modifier_magnataur_empower", "cleave_damage_pct"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot::GetCleavePercent(CDOTA_Bot *const this)
{
  int v2; // ebx
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  const char **p_m_pszAbilityName; // rdx
  const char *v10; // rsi
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rdi
  CDOTA_Buff *ModifierByName; // rax
  CDOTABaseAbility *Ability; // rax
  float v16; // [rsp-8h] [rbp-2Ch]

  v2 = 0;
  v16 = 0.0;
  do
  {
    m_Index = this->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = &v4[this->m_hUnit.m_Index & 0x1FF]) == 0
      || m_Index != v5->m_EHandle.m_Index
      || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v2);
    if ( ItemInSlot != 0 )
    {
      p_m_pszAbilityName = &ItemInSlot->m_pAbilityData->m_pszAbilityName;
      if ( p_m_pszAbilityName != 0 )
      {
        v10 = *p_m_pszAbilityName;
        if ( *p_m_pszAbilityName != 0 && (v10 == "item_bfury" || strcmp(v10, "item_bfury") == 0) )
          v16 = (CDOTABaseAbility::GetLevelSpecialValueFor<int>(ItemInSlot, "cleave_damage_percent", -1, 1) / 100.0)
              + v16;
      }
    }
    ++v2;
  }
  while ( v2 != 9 );
  v11 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v12, "modifier_magnataur_empower", 0);
  if ( ModifierByName != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(ModifierByName);
    return (CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "cleave_damage_pct", -1, 1) / 100.0) + v16;
  }
  return v16;
}


// CDOTA_Bot::FindNearbyChannelingEnemy  (line 1455, @0x00000000027f9d00, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, DOTAGameRules, Get, GetChannelStartTime, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetTeamNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTAFogOfWarSystem::IsLocationVisible, CDOTA_BaseNPC::IsChanneling, CDOTA_BaseNPC::GetCurrentActiveAbility, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Bot_AbilityUsage_AbyssalBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Sheepstick::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bane_FiendsGrip::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bane_Nightmare::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_BountyHunter_ShurikenToss::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Dazzle_PoisonTouch::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_ChaosKnight_ChaosBolt::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_DragonKnight_DragonTail::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Luna_LucentBeam::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsageSpecific<CDOTA_Bot_Hero_Lion>::GetGenericStunDesire, CDOTA_Bot_AbilityUsage_Earthshaker_EnchantTotem::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::GetCurrentUsageDesire (24 total)
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot::FindNearbyChannelingEnemy(
        CDOTA_Bot *const this,
        __m128i fRadius,
        CBaseEntity **ppTarget,
        float *pChannelTimeRemaining)
{
  unsigned int v4; // r15d
  float v7; // r13d
  EHANDLE *p_m_hUnit; // rbx
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // r12
  const Vector *AbsOrigin; // r15
  CEntityInstance *v12; // rax
  __int64 v13; // r12
  int v14; // ebx
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CBaseEntity *m_pInstance; // r13
  const Vector *v21; // rax
  uint32 v22; // esi
  CEntityIdentity *v23; // rcx
  CEntityIdentity *v24; // rcx
  CEntityInstance *v25; // rcx
  CDOTABaseAbility *CurrentActiveAbility; // rax
  CDOTABaseAbility *v27; // rax
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float ppTargetb; // [rsp+20h] [rbp-160h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hNearbyEnemyHeroes; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v35; // [rsp+148h] [rbp-38h]

  v4 = 0;
  v35 = __readfsqword(0x28u);
  if ( this->m_iDifficulty > 2 )
  {
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(fRadius));
    hNearbyEnemyHeroes.m_Size = 0;
    p_m_hUnit = &this->m_hUnit;
    hNearbyEnemyHeroes.m_Memory.m_nAllocationCount = 64;
    hNearbyEnemyHeroes.m_Memory.m_nGrowSize = 0x80000000;
    hNearbyEnemyHeroes.m_Memory.m_pMemory = &hNearbyEnemyHeroes.m_FixedMemory;
    v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
    if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
      v10 = v9;
    else
      v10 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
    v12 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v12 == 0 || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
      v12 = 0;
    FindUnitsInRadius(HIBYTE(v12[7].m_CScriptComponent), AbsOrigin, v10, v7, &hNearbyEnemyHeroes, 2, 1, 0, 0, 0);
    if ( hNearbyEnemyHeroes.m_Size <= 0 )
    {
LABEL_35:
      v4 = 0;
    }
    else
    {
      v13 = 0;
      v14 = 0;
      while ( 1 )
      {
        v15 = &hNearbyEnemyHeroes.m_Memory.m_pMemory[v13];
        m_Index = hNearbyEnemyHeroes.m_Memory.m_pMemory[v13].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v17 = v15->m_Index;
          v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
          if ( v18 != 0 )
          {
            v19 = &v18[v17 & 0x1FF];
            if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
            {
              m_pInstance = v19->m_pInstance;
              if ( v19->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && (m_pInstance[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
              {
                v21 = CBaseEntity::GetAbsOrigin(v19->m_pInstance);
                v22 = this->m_hUnit.m_Index;
                if ( v22 + 2 <= 1
                  || (v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
                  || (v24 = &v23[this->m_hUnit.m_Index & 0x1FF]) == 0
                  || v22 != v24->m_EHandle.m_Index
                  || (v25 = v24->m_pInstance) == 0
                  || BYTE3(v25[7]._vptr_IHandleEntity) == 0 )
                {
                  v25 = 0;
                }
                if ( CDOTAFogOfWarSystem::IsLocationVisible(
                       &g_DOTAFogOfWarSystem,
                       HIBYTE(v25[7].m_CScriptComponent),
                       v21,
                       0.0)
                  && CDOTA_BaseNPC::IsChanneling(m_pInstance)
                  && CDOTA_BaseNPC::GetCurrentActiveAbility(m_pInstance) != 0 )
                {
                  CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(m_pInstance);
                  v4 = (*(CurrentActiveAbility->_vptr_IHandleEntity + 331))(CurrentActiveAbility);
                  if ( v4 != 0 )
                    break;
                }
              }
            }
          }
        }
        ++v14;
        ++v13;
        if ( hNearbyEnemyHeroes.m_Size <= v14 )
          goto LABEL_35;
      }
      if ( ppTarget != 0 )
        *ppTarget = m_pInstance;
      if ( pChannelTimeRemaining != 0 )
      {
        ppTargetb = CDOTA_BaseNPC::GetCurrentActiveAbility(m_pInstance)->m_flChannelStartTime.m_Value;
        v27 = CDOTA_BaseNPC::GetCurrentActiveAbility(m_pInstance);
        v28 = (*(v27->_vptr_IHandleEntity + 225))(v27);
        v29 = 0.0;
        v30 = v28 + ppTargetb;
        if ( g_pGameRules != 0 )
          v29 = *&g_pGameRules[18].m_szQuestName[20];
        *pChannelTimeRemaining = v30 - v29;
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyHeroes);
  }
  return v4;
}


// CDOTA_Bot::DoCreepAttackAndDeny  (line 1486, @0x0000000002810610, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, DOTAGameRules, Destruct<sCreepHealthInfo>, DotProduct, Element, FastSqrt, FindEstimatedAttackLocation, Get, GetBool, GetBotByIndex, GetBotLag, GetDistanceToEntity, GetEHandle, GetEntryIndex, GetFloat, GetGameTime, GetInstance, GetInt, GetModifier_Constant_Additive, GetModifier_Percentage_Additive, GetProjectileSpeed, GetSerialNumber, GetTargetLastHitCreep, GetTeamNumber, GetUnit, IsListeningToEvent, Length, Length2D, Max<float>, Purge, Purge_FixedGrowable, RemoveAll, Set, SetAttacker, SetTarget, ToDOTABaseNPC, VectorLength, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator-, operator=, operator==, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable, ~CUtlVectorFixedGrowableCompat, ~sCreepHealthInfo
// calls: CDOTA_TeamCommander::DoCreepHealthAnalysis, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetAttackRange, CUtlVectorBase<sHealthTime, CUtlMemoryFixedGrowable<sHealthTime, 64ul, int> >::RemoveAll, CUtlMemory<sHealthTime, int>::ConvertToExternalMemory, CUtlMemory<sHealthTime, int>::Purge, CDOTA_BaseNPC::IsDeniable, CDOTA_BaseNPC::GetArmorReductionForDamageType, CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, GetUnitCombatProficiency (29 total)
// callers: CDOTA_BotMode_Farm::Think, CDOTA_BotMode_Laning::Think
// globals: g_DOTACommander
__int64 __fastcall CDOTA_Bot::DoCreepAttackAndDeny(
        CDOTA_Bot *const this,
        const Vector *const vLocation,
        float fScanRadius,
        const Vector *const vLeashBase,
        float fLeashDistanceAttack,
        float fLeashDistanceDeny)
{
  CDOTA_TeamCommander *m_pTeamCommander; // rdi
  int m_Size; // ebx
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // r15
  char m_CScriptComponent_high; // bl
  CEntityInstance *v12; // rax
  CDOTA_TeamCommander *v13; // rdx
  __int64 v14; // r12
  int v15; // ebx
  CDOTA_Bot *v16; // r14
  int m_iUnitType; // eax
  const CBaseEntity *v18; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v20; // rax
  CEntityInstance *v21; // rax
  CDOTA_BaseNPC *v22; // rdi
  __int64 j; // r13
  char *v24; // r12
  CEntityInstance *v26; // rax
  CEntityInstance *v27; // rdi
  CEntityInstance *v28; // rax
  CEntityInstance *v29; // rdx
  __int64 v30; // rcx
  float v31; // xmm0_4
  __int64 vptr_IHandleEntity_low; // rdx
  float Modifier_Constant_Additive_Internal; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  int v35; // edx
  __int16 v36; // cx
  CEntityInstance *v37; // rax
  CEntityInstance *v38; // rax
  CEntityInstance *v39; // rcx
  __int64 v40; // rdx
  float v41; // xmm0_4
  int m_iCombatClassDefend; // esi
  float v43; // xmm0_4
  int v44; // edx
  sHealthTime *m_pMemory; // rax
  char v46; // bl
  __m128i fTime_low; // xmm2
  __int64 v48; // rdx
  float fHealth; // xmm1_4
  float v50; // r12d
  int m_iDifficulty; // eax
  float v52; // xmm0_4
  int v53; // eax
  float v54; // xmm0_4
  float m_fValue; // xmm0_4
  const Vector *v56; // rax
  float v57; // xmm2_4
  CEntityInstance *v58; // rax
  CDOTA_BaseNPC *v59; // rdi
  __m128i v60; // xmm0
  unsigned int v61; // ebx
  CEntityInstance *v62; // rax
  CDOTA_BaseNPC *v63; // rdi
  float AttackRange; // xmm0_4
  __m128 v65; // xmm3
  __m128 v66; // xmm1
  float v67; // ebx
  const Vector *v68; // rax
  __int128 v69; // xmm4
  CEntityInstance *v70; // rax
  CEntityInstance *v71; // rdi
  float v72; // xmm0_4
  __m128 v73; // xmm4
  float v74; // xmm5_4
  __m128 v75; // xmm0
  __m128 v76; // xmm1
  float v77; // ebx
  CEntityInstance *v78; // rax
  CDOTA_BaseNPC *v79; // rdi
  CEntityInstance *v80; // rax
  CDOTA_BaseNPC *v81; // rdi
  CEntityInstance *v82; // rax
  __int64 m_Id_low; // rdx
  float v84; // xmm0_4
  float v85; // xmm1_4
  float v86; // xmm2_4
  float v87; // xmm1_4
  CEntityIdentity *v88; // rdx
  int v89; // eax
  __int16 v90; // cx
  CEntityInstance *v91; // rax
  CEntityIdentity *v92; // rax
  __int16 v93; // cx
  int v94; // edx
  unsigned int v95; // r12d
  unsigned int v96; // r14d
  const Vector *v97; // rax
  const Vector *v98; // r12
  CEntityInstance *v99; // rax
  CEntityInstance *v100; // rdi
  vec_t v101; // xmm1_4
  CEntityInstance *v102; // rax
  const CBaseEntity *v103; // rdi
  const QAngle *AbsAngles; // rax
  CEntityInstance *v105; // rax
  const CBaseEntity *v106; // rdi
  const Vector *v107; // r12
  const Vector *v108; // rax
  vec_t v109; // xmm0_4
  vec_t v110; // xmm1_4
  CEntityIdentity *v111; // rdx
  int v112; // eax
  __int16 v113; // cx
  CEntityInstance *v114; // rax
  CDOTA_BaseNPC *v115; // rdi
  CUtlVectorBase<sCreepHealthInfo,CUtlMemory<sCreepHealthInfo,int> >::CAllocator *p_m_Memory; // rbx
  CUtlVectorBase<sCreepHealthInfo,CUtlMemory<sCreepHealthInfo,int> > *p_creepHealthInfo; // [rsp+8h] [rbp-8978h]
  float v118; // [rsp+10h] [rbp-8970h]
  float fLeashDistanceDenya; // [rsp+14h] [rbp-896Ch]
  const Vector *vLeashBasea; // [rsp+18h] [rbp-8968h]
  __int128 fDistFromAttackLocToTarget; // [rsp+20h] [rbp-8960h]
  float fLeashDistanceAttacka; // [rsp+30h] [rbp-8950h]
  float v123; // [rsp+34h] [rbp-894Ch]
  float fLatestTimeToLandAttack; // [rsp+38h] [rbp-8948h]
  float v125; // [rsp+3Ch] [rbp-8944h]
  unsigned __int8 v126; // [rsp+43h] [rbp-893Dh]
  float fTimeToInRange; // [rsp+44h] [rbp-893Ch]
  unsigned __int64 v128; // [rsp+48h] [rbp-8938h]
  CEntityHandle *p_m_hUnit; // [rsp+50h] [rbp-8930h]
  CModifierParams *fTimeToPerformAttack; // [rsp+58h] [rbp-8928h]
  EHANDLE *fTimeFlux; // [rsp+60h] [rbp-8920h]
  int i; // [rsp+68h] [rbp-8918h]
  float fOurDamageToCreep; // [rsp+6Ch] [rbp-8914h]
  Vector vFacing; // [rsp+70h] [rbp-8910h] BYREF
  Vector vToTarget; // [rsp+80h] [rbp-8900h] BYREF
  Vector v136; // [rsp+90h] [rbp-88F0h]
  CModifierParams params; // [rsp+A0h] [rbp-88E0h] BYREF
  CUtlVectorFixedGrowableCompat<sCreepHealthInfo,64ul> creepHealthInfo; // [rsp+130h] [rbp-8850h] BYREF
  unsigned __int64 v139; // [rsp+8948h] [rbp-38h]
  Vector EstimatedAttackLocation; // 0:kr00_12.12

  vLeashBasea = vLeashBase;
  v139 = __readfsqword(0x28u);
  this->m_hTargetLastHitCreep.m_Index = -1;
  m_pTeamCommander = this->m_pTeamCommander;
  p_creepHealthInfo = &creepHealthInfo;
  fLeashDistanceAttacka = fLeashDistanceAttack;
  fLeashDistanceDenya = fLeashDistanceDeny;
  creepHealthInfo.m_Size = 0;
  creepHealthInfo.m_Memory.m_nAllocationCount = 64;
  creepHealthInfo.m_Memory.m_nGrowSize = 0x80000000;
  creepHealthInfo.m_Memory.m_pMemory = &creepHealthInfo.m_FixedMemory;
  CDOTA_TeamCommander::DoCreepHealthAnalysis(m_pTeamCommander, vLocation, fScanRadius, &creepHealthInfo);
  m_Size = creepHealthInfo.m_Size;
  if ( creepHealthInfo.m_Size <= 0 )
  {
LABEL_31:
    v126 = 0;
    goto LABEL_32;
  }
  v128 = 0;
  i = 0;
  while ( 1 )
  {
    v9 = CEntityHandle::operator CEntityInstance *(&creepHealthInfo.m_Memory.m_pMemory[v128 / 0x220].hCreep);
    v10 = v9;
    if ( v9 != 0 )
    {
      v126 = BYTE3(v9[7]._vptr_IHandleEntity);
      if ( v126 == 0 )
        goto LABEL_30;
      m_CScriptComponent_high = HIBYTE(v9[7].m_CScriptComponent);
      p_m_hUnit = &this->m_hUnit;
      v12 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
      if ( v12 == 0 || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
        break;
      LOBYTE(fTimeToInRange) = m_CScriptComponent_high == HIBYTE(v12[7].m_CScriptComponent);
      if ( m_CScriptComponent_high != HIBYTE(v12[7].m_CScriptComponent) )
        goto LABEL_8;
LABEL_40:
      if ( CDOTA_BaseNPC::IsDeniable(v10)
        && this->m_iDifficulty > 2
        && dota_tutorial_force_bot_defend.m_pParent->m_Value.m_nValue == 0 )
      {
        goto LABEL_43;
      }
LABEL_29:
      m_Size = creepHealthInfo.m_Size;
    }
LABEL_30:
    ++i;
    v128 += 544LL;
    if ( m_Size <= i )
      goto LABEL_31;
  }
  LOBYTE(fTimeToInRange) = m_CScriptComponent_high == 0;
  if ( m_CScriptComponent_high == 0 )
    goto LABEL_40;
LABEL_8:
  v13 = this->m_pTeamCommander;
  v14 = 0;
  v15 = 0;
  if ( v13->m_BotList.m_Size > 0 )
  {
    fTimeToPerformAttack = &params;
    while ( 1 )
    {
      v16 = v13->m_BotList.m_Memory.m_pMemory[v14];
      if ( this == v16 || v16 == 0 )
        goto LABEL_11;
      m_iUnitType = v16->m_iUnitType;
      if ( ((m_iUnitType & 0x30) == 0 || (this->m_iUnitType & 0x30) != 0)
        && ((m_iUnitType & 0x10) == 0 || (this->m_iUnitType & 0x10) != 0)
        && ((m_iUnitType & 0xE) != 0 || (this->m_iUnitType & 0xE) == 0)
        && ((m_iUnitType & 4) != 0 || (this->m_iUnitType & 4) == 0) )
      {
        goto LABEL_11;
      }
      params.ability.m_Index = v16->m_hTargetLastHitCreep.m_Index;
      if ( v10 == CEntityHandle::operator CEntityInstance *(&fTimeToPerformAttack->ability) )
        goto LABEL_29;
      fTimeFlux = &v16->m_hUnit;
      v18 = CEntityHandle::operator CEntityInstance *(&v16->m_hUnit);
      if ( v18 == 0 || !v18->m_bIsDOTANPC )
        break;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v18);
      v20 = CBaseEntity::GetAbsOrigin(v10);
      fOurDamageToCreep = fsqrt(
                            (((v20->x - AbsOrigin->x) * (v20->x - AbsOrigin->x))
                           + ((v20->y - AbsOrigin->y) * (v20->y - AbsOrigin->y)))
                          + ((v20->z - AbsOrigin->z) * (v20->z - AbsOrigin->z)));
      v21 = CEntityHandle::operator CEntityInstance *(fTimeFlux);
      if ( v21 == 0 || BYTE3(v21[7]._vptr_IHandleEntity) == 0 )
        goto LABEL_156;
      v22 = v21;
LABEL_28:
      if ( (CDOTA_BaseNPC::GetAttackRange(v22) + 400.0) > fOurDamageToCreep )
        goto LABEL_29;
      v13 = this->m_pTeamCommander;
LABEL_11:
      ++v15;
      ++v14;
      if ( v15 >= v13->m_BotList.m_Size )
        goto LABEL_43;
    }
    fOurDamageToCreep = -1.0;
LABEL_156:
    v22 = 0;
    goto LABEL_28;
  }
LABEL_43:
  *&fTimeFlux = 1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(v10, 1);
  v26 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v26 != 0 && BYTE3(v26[7]._vptr_IHandleEntity) != 0 )
    v27 = v26;
  else
    v27 = 0;
  fOurDamageToCreep = (*(v27->_vptr_IHandleEntity + 416))(v27);
  v28 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v28 != 0 && BYTE3(v28[7]._vptr_IHandleEntity) != 0 )
    v29 = v28;
  else
    v29 = 0;
  v30 = BYTE2(v29[66].m_worldGroupId.m_nHashCode);
  if ( v30 == 0xFF || *(*&v29[65].m_worldGroupId.m_nHashCode + 24 * v30) <= 0 )
  {
    v31 = 1.0;
  }
  else
  {
    LODWORD(fTimeToPerformAttack) = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                                      &v29[64].m_worldGroupId,
                                      modifierfunction::MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE,
                                      &CModifierParams::s_Default);
    v28 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    v31 = *&fTimeToPerformAttack;
  }
  fOurDamageToCreep = v31 * fOurDamageToCreep;
  if ( v28 != 0 && BYTE3(v28[7]._vptr_IHandleEntity) != 0 )
  {
    vptr_IHandleEntity_low = LOBYTE(v28[66]._vptr_IHandleEntity);
    if ( vptr_IHandleEntity_low != 0xFF )
      goto LABEL_55;
    goto LABEL_159;
  }
  v28 = 0;
  vptr_IHandleEntity_low = 0;
LABEL_55:
  if ( *(*&v28[65].m_worldGroupId.m_nHashCode + 24 * vptr_IHandleEntity_low) <= 0 )
LABEL_159:
    Modifier_Constant_Additive_Internal = 0.0;
  else
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &v28[64].m_worldGroupId,
                                            modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE,
                                            &CModifierParams::s_Default);
  params.ability.m_Index = -1;
  params.fDamage = 0.0;
  params.fOriginalDamage = 0.0;
  params.nActivity = -1;
  params.bTooltip = 0;
  params.nTooltipParam = 0;
  params.bIgnoreInvis = 0;
  params.bNoCooldown = 0;
  params.bReincarnate = 0;
  params.bDoNotConsume = 0;
  params.fDistance = 0.0;
  params.inflictor.m_Index = -1;
  params.nDamageflags = 0;
  params.nDamageCategory = 0;
  memset(&params.pOrb, 0, 24);
  params.bCraniumBasherTested = 0;
  params.bHeartRegenApplied = 0;
  params.bDiffusalApplied = 0;
  params.bChainLightningConsidered = 0;
  params.bSuppressDamage = 0;
  params.bRangedAttack = 0;
  params.nPlayerids_stick = 0;
  params.hattacker.m_Index = -1;
  params.htarget.m_Index = -1;
  params.hunit.m_Index = -1;
  m_pEntity = v10->m_pEntity;
  fOurDamageToCreep = Modifier_Constant_Additive_Internal + fOurDamageToCreep;
  if ( m_pEntity != 0 )
  {
    v35 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v36 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v36 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(params.htarget.m_Index) = v36 | params.htarget.m_Index & 0x8000;
    params.htarget.m_Index = (v35 << 15) | params.htarget.m_Index & 0x7FFF;
  }
  v37 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v37 == 0 )
  {
    v38 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
LABEL_165:
    v39 = 0;
    goto LABEL_66;
  }
  if ( BYTE3(v37[7]._vptr_IHandleEntity) != 0 && (v111 = v37->m_pEntity) != 0 )
  {
    v112 = (v111->m_EHandle.m_Index >> 15) - (v111->m_flags & 1);
    v113 = 0x7FFF;
    if ( v111->m_EHandle.m_Index != -1 )
      v113 = v111->m_EHandle.m_Index & 0x7FFF;
    LOWORD(params.hattacker.m_Index) = v113 | params.hattacker.m_Index & 0x8000;
    params.hattacker.m_Index = (v112 << 15) | params.hattacker.m_Index & 0x7FFF;
    v38 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v38 == 0 )
    {
      v39 = 0;
      goto LABEL_66;
    }
  }
  else
  {
    v38 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  }
  if ( BYTE3(v38[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_165;
  v39 = v38;
LABEL_66:
  v40 = BYTE4(v39[66].m_iszPrivateVScripts.u.m_pAsString);
  if ( v40 == 0xFF || *(*&v39[65].m_worldGroupId.m_nHashCode + 24 * v40) <= 0 )
  {
    v41 = 1.0;
  }
  else
  {
    LODWORD(fTimeToPerformAttack) = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                                      &v39[64].m_worldGroupId,
                                      modifierfunction::MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE,
                                      &params);
    v38 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    v41 = *&fTimeToPerformAttack;
  }
  m_iCombatClassDefend = v10->m_iCombatClassDefend;
  fOurDamageToCreep = (v41 * fOurDamageToCreep) * *&fTimeFlux;
  if ( v38 == 0 || BYTE3(v38[7]._vptr_IHandleEntity) == 0 )
    v38 = 0;
  v43 = GetUnitCombatProficiency(HIDWORD(v38[50].m_pEntity), m_iCombatClassDefend) * fOurDamageToCreep;
  v44 = creepHealthInfo.m_Memory.m_pMemory[v128 / 0x220].healthValues.m_Size;
  if ( v44 <= 0 )
  {
    fOurDamageToCreep = 0.0;
    v46 = 0;
    v50 = 0.0;
  }
  else
  {
    m_pMemory = creepHealthInfo.m_Memory.m_pMemory[v128 / 0x220].healthValues.m_Memory.m_pMemory;
    v46 = 0;
    fOurDamageToCreep = 0.0;
    fTime_low = 0;
    v48 = &m_pMemory[(v44 - 1) + 1];
    do
    {
      fHealth = m_pMemory->fHealth;
      if ( v46 != 0 || v43 <= fHealth )
      {
        if ( fOurDamageToCreep >= fHealth )
          goto LABEL_78;
      }
      else
      {
        v46 = 1;
        fTime_low = LODWORD(m_pMemory->fTime);
        if ( fOurDamageToCreep >= fHealth )
        {
LABEL_78:
          v50 = COERCE_FLOAT(_mm_cvtsi128_si32(fTime_low));
          fLatestTimeToLandAttack = m_pMemory->fTime;
          goto LABEL_79;
        }
      }
      ++m_pMemory;
    }
    while ( m_pMemory != v48 );
    v50 = COERCE_FLOAT(_mm_cvtsi128_si32(fTime_low));
  }
  if ( g_pGameRules != 0 )
  {
    m_iDifficulty = this->m_iDifficulty;
    fLatestTimeToLandAttack = *&g_pGameRules[18].m_szQuestName[20] + 999.90002;
    if ( m_iDifficulty < 0 )
      goto LABEL_169;
LABEL_80:
    if ( m_iDifficulty <= 1 )
    {
      v52 = RandomFloat(-0.2, 0.2);
    }
    else
    {
      if ( m_iDifficulty != 2 )
        goto LABEL_169;
      v52 = RandomFloat(-0.1, 0.1);
    }
    *&fTimeFlux = v52;
  }
  else
  {
    fLatestTimeToLandAttack = 999.90002;
LABEL_79:
    m_iDifficulty = this->m_iDifficulty;
    if ( m_iDifficulty >= 0 )
      goto LABEL_80;
LABEL_169:
    *&fTimeFlux = fOurDamageToCreep;
  }
  if ( LOBYTE(fTimeToInRange) != 0 )
  {
    v53 = this->m_iDifficulty;
    if ( v53 >= 0 )
    {
      if ( v53 <= 1 )
      {
        v54 = RandomFloat(-0.1, 0.1);
LABEL_89:
        *&fTimeFlux = v54 + *&fTimeFlux;
      }
      else if ( v53 == 2 )
      {
        v54 = RandomFloat(-0.050000001, 0.050000001);
        goto LABEL_89;
      }
    }
  }
  m_fValue = dota_bot_fakelag.m_pParent->m_Value.m_fValue;
  *&fTimeToPerformAttack = v50 + *&fTimeFlux;
  if ( m_fValue <= fOurDamageToCreep )
  {
    v125 = fOurDamageToCreep;
  }
  else
  {
    v125 = m_fValue * 0.001;
    *&fTimeToPerformAttack = (v50 + *&fTimeFlux) - (m_fValue * 0.001);
  }
  if ( v46 == 0 )
    goto LABEL_29;
  if ( g_pGameRules != 0 )
    v123 = *&g_pGameRules[18].m_szQuestName[20];
  else
    v123 = fOurDamageToCreep;
  v56 = CBaseEntity::GetAbsOrigin(v10);
  EstimatedAttackLocation = CDOTA_Bot::FindEstimatedAttackLocation(this, v56);
  v136 = EstimatedAttackLocation;
  v57 = fLeashDistanceAttacka;
  *&fDistFromAttackLocToTarget = EstimatedAttackLocation.y;
  if ( LOBYTE(fTimeToInRange) != 0 )
    v57 = fLeashDistanceDenya;
  fTimeToInRange = ((EstimatedAttackLocation.x - vLeashBasea->x) * (EstimatedAttackLocation.x - vLeashBasea->x))
                 + ((*&fDistFromAttackLocToTarget - vLeashBasea->y) * (*&fDistFromAttackLocToTarget - vLeashBasea->y));
  if ( v57 <= fsqrt(fTimeToInRange) )
    goto LABEL_29;
  v58 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v58 != 0 && BYTE3(v58[7]._vptr_IHandleEntity) != 0 )
    v59 = v58;
  else
    v59 = 0;
  *v60.m128i_i32 = CDOTA_BaseNPC::GetDistanceToEntityForAttack(v59, v10);
  v61 = _mm_cvtsi128_si32(v60);
  v62 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v62 != 0 && BYTE3(v62[7]._vptr_IHandleEntity) != 0 )
    v63 = v62;
  else
    v63 = 0;
  AttackRange = CDOTA_BaseNPC::GetAttackRange(v63);
  v65 = _mm_cvtsi32_si128(v61);
  v65.m128_f32[0] = v65.m128_f32[0] - AttackRange;
  v66 = _mm_cmplt_ss(v65, LODWORD(fOurDamageToCreep));
  v67 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_or_ps(_mm_andnot_ps(v66, v65), _mm_and_ps(LODWORD(fOurDamageToCreep), v66))));
  v68 = CBaseEntity::GetAbsOrigin(v10);
  fTimeToInRange = ((EstimatedAttackLocation.x - v68->x) * (EstimatedAttackLocation.x - v68->x))
                 + ((*&fDistFromAttackLocToTarget - v68->y) * (*&fDistFromAttackLocToTarget - v68->y));
  v69 = LODWORD(fTimeToInRange);
  *&v69 = fsqrt(fTimeToInRange);
  fDistFromAttackLocToTarget = v69;
  v70 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v70 != 0 && BYTE3(v70[7]._vptr_IHandleEntity) != 0 )
    v71 = v70;
  else
    v71 = 0;
  v72 = (*(v71->_vptr_IHandleEntity + 386))(v71);
  v73 = fTimeToPerformAttack;
  v74 = v67 / v72;
  v73.m128_f32[0] = *&fTimeToPerformAttack - v123;
  v75 = v73;
  v123 = *&fTimeToPerformAttack - v123;
  v75.m128_f32[0] = v73.m128_f32[0] - v74;
  fTimeToInRange = v74;
  v76 = _mm_cmplt_ss(v75, LODWORD(fOurDamageToCreep));
  v77 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_or_ps(_mm_andnot_ps(v76, v75), _mm_and_ps(LODWORD(fOurDamageToCreep), v76))));
  v78 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v78 != 0 && BYTE3(v78[7]._vptr_IHandleEntity) != 0 )
    v79 = v78;
  else
    v79 = 0;
  if ( CDOTA_BaseNPC::GetTimeUntilAttackPhaseEnds(v79) <= fOurDamageToCreep )
  {
    v114 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v114 != 0 && BYTE3(v114[7]._vptr_IHandleEntity) != 0 )
      v115 = v114;
    else
      v115 = 0;
    *&fTimeToPerformAttack = CDOTA_BaseNPC::GetCastPoint(v115, 1) + 0.066;
  }
  else
  {
    v80 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v80 != 0 && BYTE3(v80[7]._vptr_IHandleEntity) != 0 )
      v81 = v80;
    else
      v81 = 0;
    LODWORD(fTimeToPerformAttack) = CDOTA_BaseNPC::GetTimeUntilAttackPhaseEnds(v81);
  }
  v82 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v82 != 0 && BYTE3(v82[7]._vptr_IHandleEntity) != 0 )
  {
    if ( (*(&v82[50].m_worldGroupId + 1) & 2) != 0 )
      goto LABEL_118;
    v85 = 0.0;
  }
  else
  {
    v82 = 0;
LABEL_118:
    m_Id_low = LOBYTE(v82[67].m_iszPrivateVScripts.u.m_Id);
    v118 = SLODWORD(v82[48].m_iszPrivateVScripts.u.m_Id);
    if ( m_Id_low == 0xFF || *(*&v82[65].m_worldGroupId.m_nHashCode + 24 * m_Id_low) <= 0 )
      v84 = 0.0;
    else
      v84 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &v82[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS,
              &CModifierParams::s_Default);
    v85 = *&fDistFromAttackLocToTarget / (v84 + v118);
  }
  v86 = 0.0;
  v87 = v85 + *&fTimeToPerformAttack;
  if ( g_pGameRules != 0 )
    v86 = *&g_pGameRules[18].m_szQuestName[20];
  fOurDamageToCreep = v87 + fTimeToInRange;
  if ( (((fLatestTimeToLandAttack + *&fTimeFlux) - v125) - v86) <= (v87 + fTimeToInRange)
    || (v77 - *&fTimeToPerformAttack) >= 0.5 )
  {
    goto LABEL_29;
  }
  v88 = v10->m_pEntity;
  if ( v88 != 0 )
  {
    v89 = (v88->m_EHandle.m_Index >> 15) - (v88->m_flags & 1);
    v90 = 0x7FFF;
    if ( v88->m_EHandle.m_Index != -1 )
      v90 = v88->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTargetLastHitCreep.m_Index) = v90 | this->m_hTargetLastHitCreep.m_Index & 0x8000;
    this->m_hTargetLastHitCreep.m_Index = (v89 << 15) | this->m_hTargetLastHitCreep.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTargetLastHitCreep.m_Index = -1;
  }
  v91 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v91 != 0 && BYTE3(v91[7]._vptr_IHandleEntity) != 0 )
  {
    vToTarget.x = NAN;
    v92 = v91->m_pEntity;
    if ( v92 != 0 )
    {
      v93 = 0x7FFF;
      if ( v92->m_EHandle.m_Index != -1 )
        v93 = v92->m_EHandle.m_Index & 0x7FFF;
      LODWORD(vToTarget.x) = (((v92->m_EHandle.m_Index >> 15) - (v92->m_flags & 1)) << 15) | v93 & 0x7FFF;
    }
  }
  else
  {
    vToTarget.x = NAN;
  }
  if ( CDOTA_Commander::IsDebuggingEntity(&g_DOTACommander, DOTA_BOT_DEBUG_STATE::DOTA_BOT_DEBUG, &vToTarget) )
  {
    v94 = 0;
    v95 = 100;
    if ( fOurDamageToCreep > v123 )
      v95 = 200;
    else
      v94 = 200;
    *&fTimeFlux = v123 * 25.0;
    v96 = v94;
    v97 = CBaseEntity::GetAbsOrigin(v10);
    NDebugOverlay::Sphere(v97, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v123 * 25.0)), v95, 0x64u, v96, 1, 0.40000001);
    v98 = CBaseEntity::GetAbsOrigin(v10);
    v99 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v99 != 0 && BYTE3(v99[7]._vptr_IHandleEntity) != 0 )
      v100 = v99;
    else
      v100 = 0;
    *&vToTarget.x = (*(v100->_vptr_IHandleEntity + 62))(v100);
    vToTarget.z = v101;
    NDebugOverlay::Line(&vToTarget, v98, 0x64u, 0x64u, 0xC8u, 1, 0.40000001);
  }
  v102 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v102 != 0 && BYTE3(v102[7]._vptr_IHandleEntity) != 0 )
    v103 = v102;
  else
    v103 = 0;
  AbsAngles = CBaseEntity::GetAbsAngles(v103);
  AngleVectors(AbsAngles, &vFacing, 0, 0);
  vFacing.z = 0.0;
  v105 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v105 != 0 && BYTE3(v105[7]._vptr_IHandleEntity) != 0 )
    v106 = v105;
  else
    v106 = 0;
  v107 = CBaseEntity::GetAbsOrigin(v106);
  v108 = CBaseEntity::GetAbsOrigin(v10);
  v109 = v108->y - v107->y;
  v110 = v108->x - v107->x;
  vToTarget.z = 0.0;
  vToTarget.y = v109;
  vToTarget.x = v110;
  VectorNormalize(&vToTarget);
  if ( (fTimeToInRange > 0.02
     || (((vFacing.x * vToTarget.x) + (vFacing.y * vToTarget.y)) + (vFacing.z * vToTarget.z)) < 0.5)
    && *&fTimeToPerformAttack > 0.050000001
    || v123 <= fOurDamageToCreep )
  {
    CDOTA_Bot::SetAttackAction(this, v10, 0);
  }
  else
  {
    CDOTA_Bot::ClearActions(this, 1, 1);
  }
  m_Size = creepHealthInfo.m_Size;
LABEL_32:
  for ( j = 544LL * m_Size - 544; --m_Size >= 0; j -= 544 )
  {
    v24 = creepHealthInfo.m_Memory.m_pMemory + j;
    CUtlVectorBase<sHealthTime,CUtlMemoryFixedGrowable<sHealthTime,64ul,int>>::RemoveAll((&creepHealthInfo.m_Memory.m_pMemory->healthValues
                                                                                        + j));
    CUtlMemory<sHealthTime,int>::ConvertToExternalMemory(v24 + 1, v24 + 4, 64, 0, 1, 0x3FFFFFFFu);
    if ( (*(v24 + 7) & 0xC0000000) == 0 )
      CUtlMemory<sHealthTime,int>::Purge(v24 + 1);
  }
  creepHealthInfo.m_Size = 0;
  if ( (creepHealthInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    p_m_Memory = &p_creepHealthInfo->m_Memory;
    CUtlMemory<sCreepHealthInfo,int>::Purge(&p_creepHealthInfo->m_Memory);
    if ( (creepHealthInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sCreepHealthInfo,int>::Purge(p_m_Memory);
  }
  return v126;
}


// CDOTA_Bot::GetBlinkRange  (line 1696, @0x00000000027fdbb0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::FindItemInInventory, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "item_blink"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot::GetBlinkRange(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInInventory; // rax

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v3 = &v2[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v3->m_EHandle.m_Index
    || (m_pInstance = v3->m_pInstance, v3->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
  ItemInInventory = CDOTA_UnitInventory::FindItemInInventory(Inventory, "item_blink", 1, 0, -1);
  if ( ItemInInventory != 0 )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(ItemInInventory, "blink_range", -1, 1);
  else
    return 0;
}


// CDOTA_Bot::GetBlinkManaCost  (line 1705, @0x00000000027e2030, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::FindItemInInventory
// strings: "item_blink"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot::GetBlinkManaCost(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInInventory; // rax

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v3 = &v2[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v3->m_EHandle.m_Index
    || (m_pInstance = v3->m_pInstance, v3->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
  ItemInInventory = CDOTA_UnitInventory::FindItemInInventory(Inventory, "item_blink", 1, 0, -1);
  if ( ItemInInventory != 0 )
    return (*(ItemInInventory->_vptr_IHandleEntity + 273))(ItemInInventory, 0xFFFFFFFFLL);
  else
    return 0;
}


// CalculateMaxAbilityDamageCombo  (line 1714, @0x00000000027e6670, libserver.so)  // inlines: operator[]
// callers: CDOTA_Bot::GetEstimatedDamageToTarget
int __fastcall CalculateMaxAbilityDamageCombo(
        const CUtlVector<AbilityDamageAndManaCost_t,CUtlMemory<AbilityDamageAndManaCost_t,int> > *const vecAbilities,
        int iHeroMana,
        int iStartIndex)
{
  int result; // eax
  int v6; // r14d
  int iManaCost; // r15d
  AbilityDamageAndManaCost_t *v9; // [rsp+8h] [rbp-38h]

  result = 0;
  if ( vecAbilities->m_Size > iStartIndex )
  {
    v6 = 0;
    iManaCost = vecAbilities->m_Memory.m_pMemory[iStartIndex].iManaCost;
    if ( iManaCost <= iHeroMana )
    {
      v9 = &vecAbilities->m_Memory.m_pMemory[iStartIndex];
      v6 = v9->iDamage + CalculateMaxAbilityDamageCombo(vecAbilities, iHeroMana - iManaCost, iStartIndex + 1);
    }
    result = 0;
    if ( iManaCost > 0 )
      result = CalculateMaxAbilityDamageCombo(vecAbilities, iHeroMana, iStartIndex + 1);
    if ( result < v6 )
      return v6;
  }
  return result;
}


// CDOTA_Bot::GetEstimatedDamageToTarget  (line 1737, @0x00000000027ff7d0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<AbilityDamageAndManaCost_t>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, GrowMemory, IndexToIdentity, IsPassive, IsTrained, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetSecondsPerAttack, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTA_BaseNPC::GetArmorReductionForDamageType, __cxa_guard_acquire, CUtlVectorBase<AbilityDamageAndManaCost_t, CUtlMemory<AbilityDamageAndManaCost_t, int> >::RemoveAll, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CalculateMaxAbilityDamageCombo, CDOTABaseAbility::GetEffectiveLevel, CUtlMemory<AbilityDamageAndManaCost_t, int>::Grow (14 total)
// callers: CDOTA_Bot::UpdateEstimatedDamage, CDOTA_Bot::IsAboutToDie, CDOTA_Bot::IsDangerouslyLow, CDOTA_Bot::GetGankingEstimatedDamage, CDOTA_BotMode_DefendAlly::GetDefendAllyScore, CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_PushTower::Think, CDOTA_BotMode_Roam::GetRoamScore, CDOTA_TeamCommander::GetPotentialDamage, CDOTA_TeamCommander::UpdateRoshanDesire, CDOTA_TeamCommander::UpdateDefendLaneDesires (19 total)
// globals: ._1060, `guard variable for'CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities, CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities, CEntityHandle::gm_pEntityList, __dso_handle, CUtlVector<AbilityDamageAndManaCost_t,CUtlMemory<AbilityDamageAndManaCost_t,int>>::~CUtlVector()
__int64 __fastcall CDOTA_Bot::GetEstimatedDamageToTarget(
        CDOTA_Bot *const this,
        bool bCurrentlyAvailable,
        CDOTA_BaseNPC *pTarget,
        float fDuration,
        int nDamageTypes)
{
  CDOTA_Bot *v5; // r12
  EHANDLE *p_m_hUnit; // rbx
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rdi
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // rdi
  int AverageTrueAttackDamage; // eax
  float v12; // xmm2_4
  float ArmorReductionForDamageType; // xmm0_4
  float v14; // xmm1_4
  int v15; // ebx
  uint32 m_Index; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v21; // r13
  CEntityInstance *v22; // rax
  CDOTA_BaseNPC *v23; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v26; // r13
  int (**vptr_IHandleEntity)(...); // rax
  int v28; // ecx
  int v29; // eax
  __int64 v30; // r13
  int v31; // edx
  AbilityDamageAndManaCost_t *v32; // rdx
  const CEntityHandle *v33; // rdi
  int v35; // r15d
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // r14d
  int v40; // r12d
  int v41; // r15d
  int v42; // ebx
  AbilityDamageAndManaCost_t *v43; // rdx
  __int64 m_Size; // r13
  int v45; // edx
  CEntityInstance *v46; // rax
  char v47; // al
  CEntityInstance *v48; // rdx
  int v49; // ecx
  DAMAGE_TYPES eDamageType; // [rsp+10h] [rbp-60h]
  CEntityHandle *v53; // [rsp+18h] [rbp-58h]
  unsigned int nTotalDamage; // [rsp+28h] [rbp-48h]
  int iAbility; // [rsp+2Ch] [rbp-44h]
  int iAbilitya; // [rsp+2Ch] [rbp-44h]
  float nManaCostb; // [rsp+30h] [rbp-40h]
  int nManaCost; // [rsp+30h] [rbp-40h]
  CDOTA_Bot *nManaCosta; // [rsp+30h] [rbp-40h]
  int nManaCostd; // [rsp+30h] [rbp-40h]
  int nManaCostc; // [rsp+30h] [rbp-40h]
  float __for_begin; // [rsp+38h] [rbp-38h]
  std::initializer_list<DAMAGE_TYPES>::const_iterator __for_begina; // [rsp+38h] [rbp-38h]

  v5 = this;
  nTotalDamage = 0;
  if ( (nDamageTypes & 1) != 0 )
  {
    p_m_hUnit = &this->m_hUnit;
    v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
    if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
      v8 = v7;
    else
      v8 = 0;
    __for_begin = fDuration / CDOTA_BaseNPC::GetSecondsPerAttack(v8);
    v9 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
      v10 = v9;
    else
      v10 = 0;
    AverageTrueAttackDamage = CDOTA_BaseNPC::GetAverageTrueAttackDamage(v10, pTarget);
    v12 = AverageTrueAttackDamage;
    if ( pTarget != 0 )
    {
      nManaCostb = AverageTrueAttackDamage;
      ArmorReductionForDamageType = CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1);
      v12 = nManaCostb;
      v14 = 1.0 - ArmorReductionForDamageType;
    }
    else
    {
      v14 = 1.0;
    }
    nTotalDamage = (((v14 * v12) * __for_begin) + 0.0);
  }
  __for_begina = &_1060;
  v53 = &v5->m_hUnit;
  do
  {
    eDamageType = *__for_begina;
    if ( (*__for_begina & nDamageTypes) == 0 )
      goto LABEL_43;
    if ( `guard variable for'CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities) != 0 )
    {
      CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Size = 0;
      CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Memory.m_pMemory = 0;
      CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Memory.m_nAllocationCount = 0;
      CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Memory.m_nGrowSize = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities);
      __cxa_atexit(
        CUtlVector<AbilityDamageAndManaCost_t,CUtlMemory<AbilityDamageAndManaCost_t,int>>::~CUtlVector,
        &CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities,
        &_dso_handle);
    }
    v15 = 0;
    CUtlVectorBase<AbilityDamageAndManaCost_t,CUtlMemory<AbilityDamageAndManaCost_t,int>>::RemoveAll(&CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities);
    do
    {
      m_Index = v5->m_hUnit.m_Index;
      if ( m_Index + 2 <= 1
        || (v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
        || (v18 = &v17[v5->m_hUnit.m_Index & 0x1FF]) == 0
        || m_Index != v18->m_EHandle.m_Index
        || (m_pInstance = v18->m_pInstance, v18->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, v15);
      v21 = AbilityByIndex;
      if ( AbilityByIndex != 0
        && AbilityByIndex->m_bActivated.m_Value
        && CDOTABaseAbility::GetEffectiveLevel(AbilityByIndex) >= 0
        && ((*(v21->_vptr_IHandleEntity + 251))(v21) & 2) == 0 )
      {
        if ( !bCurrentlyAvailable )
        {
          v35 = (*(v21->_vptr_IHandleEntity + 320))(v21, pTarget, eDamageType, fDuration);
          v36 = 0;
          if ( v35 <= 0 )
            goto LABEL_24;
          goto LABEL_50;
        }
        if ( (*(v21->_vptr_IHandleEntity + 245))(v21) != 0 )
        {
          v46 = CEntityHandle::operator CEntityInstance *(v53);
          if ( v46 == 0 || BYTE3(v46[7]._vptr_IHandleEntity) == 0 )
            v46 = 0;
          if ( (v46[58]._vptr_IHandleEntity & 8) == 0 )
          {
            v35 = (*(v21->_vptr_IHandleEntity + 320))(v21, pTarget, eDamageType, fDuration);
            if ( v35 > 0 )
            {
              v36 = (*(v21->_vptr_IHandleEntity + 273))(v21, 0xFFFFFFFFLL);
LABEL_50:
              nManaCost = v36;
              v37 = (fDuration / (*(v21->_vptr_IHandleEntity + 242))(v21, 0xFFFFFFFFLL));
              if ( v37 >= 0 )
              {
                v38 = nManaCost;
                iAbility = v15;
                v39 = 0;
                nManaCosta = v5;
                v40 = v35;
                v41 = v37;
                v42 = v38;
                do
                {
                  m_Size = CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Size;
                  v45 = CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Size;
                  if ( CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Size == CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Memory.m_nAllocationCount )
                  {
                    CUtlMemory<AbilityDamageAndManaCost_t,int>::Grow(
                      &CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Memory,
                      1);
                    v45 = CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Size;
                  }
                  CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Size = v45 + 1;
                  v43 = &CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Memory.m_pMemory[m_Size];
                  if ( v43 != 0 )
                  {
                    v43->iDamage = v40;
                    v43->iManaCost = v42;
                  }
                  ++v39;
                }
                while ( v41 >= v39 );
                v15 = iAbility;
                v5 = nManaCosta;
              }
            }
          }
        }
      }
LABEL_24:
      ++v15;
    }
    while ( v15 != 24 );
    LOBYTE(v15) = 0;
    v22 = CEntityHandle::operator CEntityInstance *(v53);
    while ( 2 )
    {
      if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
        v23 = v22;
      else
        v23 = 0;
      Inventory = CDOTA_BaseNPC::GetInventory(v23);
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v15);
      v26 = ItemInSlot;
      if ( ItemInSlot == 0 || ((*(ItemInSlot->_vptr_IHandleEntity + 251))(ItemInSlot) & 2) != 0 )
        goto LABEL_37;
      vptr_IHandleEntity = v26->_vptr_IHandleEntity;
      if ( !bCurrentlyAvailable )
      {
        v28 = vptr_IHandleEntity[320](v26, pTarget, eDamageType, fDuration);
        v29 = 0;
        if ( v28 > 0 )
          goto LABEL_33;
        goto LABEL_37;
      }
      if ( vptr_IHandleEntity[245](v26) == 0 )
        goto LABEL_37;
      v47 = (*(v26->_vptr_IHandleEntity + 348))(v26);
      v33 = v53;
      if ( v47 != 0 )
      {
LABEL_38:
        v22 = CEntityHandle::operator CEntityInstance *(v33);
      }
      else
      {
        v22 = CEntityHandle::operator CEntityInstance *(v53);
        if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
          v48 = v22;
        else
          v48 = 0;
        if ( (v48[58]._vptr_IHandleEntity & 0x10) == 0 )
        {
          v49 = (*(v26->_vptr_IHandleEntity + 320))(v26, pTarget, eDamageType, fDuration);
          if ( v49 > 0 )
          {
            nManaCostd = v49;
            v29 = (*(v26->_vptr_IHandleEntity + 273))(v26, 0xFFFFFFFFLL);
            v28 = nManaCostd;
LABEL_33:
            v30 = CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Size;
            v31 = CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Size;
            if ( CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Size == CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Memory.m_nAllocationCount )
            {
              iAbilitya = v28;
              nManaCostc = v29;
              CUtlMemory<AbilityDamageAndManaCost_t,int>::Grow(
                &CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Memory,
                1);
              v31 = CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Size;
              v28 = iAbilitya;
              v29 = nManaCostc;
            }
            CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Size = v31 + 1;
            v32 = &CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities.m_Memory.m_pMemory[v30];
            if ( v32 != 0 )
            {
              v32->iDamage = v28;
              v32->iManaCost = v29;
            }
          }
LABEL_37:
          v33 = v53;
          goto LABEL_38;
        }
      }
      if ( ++v15 != 9 )
        continue;
      break;
    }
    if ( v22 == 0 || BYTE3(v22[7]._vptr_IHandleEntity) == 0 )
      v22 = 0;
    nTotalDamage += CalculateMaxAbilityDamageCombo(
                      &CDOTA_Bot::GetEstimatedDamageToTarget(bool,CDOTA_BaseNPC *,float,int)::vecDamagingAbilities,
                      *&v22[44].m_iszPrivateVScripts.u.m_Id,
                      0);
LABEL_43:
    ++__for_begina;
  }
  while ( __for_begina != &unk_33F572C );
  return nTotalDamage;
}


// AbilityIsValid  (line 1815, @0x00000000027e6710, libserver.so)  // inlines: IsActivated, IsPassive, IsTrained
// calls: CDOTABaseAbility::GetEffectiveLevel
// callers: CDOTA_Bot::GetStunDuration, CDOTA_Bot::GetSlowDuration, CDOTA_Bot::HasBlink, CDOTA_Bot::HasMinistunOnAttack, CDOTA_Bot::HasSilence, CDOTA_Bot::HasInvisibility
bool __fastcall AbilityIsValid(CDOTA_BaseNPC *pUnit, CDOTABaseAbility *pAbility, bool bCurrentlyAvailable)
{
  bool m_Value; // r12
  bool result; // al

  if ( pAbility == 0 )
    return 0;
  m_Value = pAbility->m_bActivated.m_Value;
  if ( !m_Value
    || CDOTABaseAbility::GetEffectiveLevel(pAbility) < 0
    || ((*(pAbility->_vptr_IHandleEntity + 251))(pAbility) & 2) != 0 )
  {
    return 0;
  }
  if ( !bCurrentlyAvailable )
    return m_Value;
  result = (*(pAbility->_vptr_IHandleEntity + 245))(pAbility);
  if ( result )
  {
    result = 0;
    if ( (pUnit->m_nUnitState64.m_Value & 8) == 0 )
      return m_Value;
  }
  return result;
}


// ItemIsValid  (line 1829, @0x00000000027e6790, libserver.so)  // inlines: IsPassive
// callers: CDOTA_Bot::GetStunDuration, CDOTA_Bot::GetSlowDuration, CDOTA_Bot::HasBlink, CDOTA_Bot::HasMinistunOnAttack, CDOTA_Bot::HasSilence, CDOTA_Bot::HasInvisibility
bool __fastcall ItemIsValid(CDOTA_BaseNPC *pUnit, CDOTA_Item *pItem, bool bCurrentlyAvailable)
{
  return pItem != 0
      && ((*(pItem->_vptr_IHandleEntity + 251))(pItem) & 2) == 0
      && (!bCurrentlyAvailable
       || (*(pItem->_vptr_IHandleEntity + 245))(pItem) != 0
       && (*(pItem->_vptr_IHandleEntity + 348))(pItem) == 0
       && (pUnit->m_nUnitState64.m_Value & 0x10) == 0);
}


// CDOTA_Bot::GetStunDuration  (line 1845, @0x00000000027e6810, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, Max<float>, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetAbilityByIndex, AbilityIsValid, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CEntityHandle::operator CEntityInstance*, ItemIsValid
// callers: CDOTA_Bot::UpdateEstimatedDamage, CDOTA_BotMode_DefendAlly::GetDefendAllyScore, CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BotMode_Roam::GetRoamScore, CDOTA_Bot_Script::GetStunDuration, CDOTA_TeamCommander::BuildDebugString, CDOTA_Bot_AbilityUsage_BlackKingBar::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_TravelBoots::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_TeleportScroll::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_SandKing_Epicenter::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard::GetCurrentUsageDesire
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot::GetStunDuration(CDOTA_Bot *const this, bool bCurrentlyAvailable)
{
  unsigned int v2; // r15d
  int i; // ebx
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *AbilityByIndex; // rax
  uint32 v11; // ecx
  CDOTABaseAbility *v12; // r14
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  CDOTA_BaseNPC *v15; // rdi
  EHANDLE *p_m_hUnit; // r12
  CDOTA_BaseNPC *v17; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // r14
  CDOTA_BaseNPC *v20; // rax
  CEntityInstance *v21; // rax
  float v22; // xmm0_4
  __m128i v23; // xmm1
  float v24; // xmm0_4
  __m128i v25; // xmm2

  v2 = _mm_cvtsi128_si32(0LL);
  for ( i = 0; i != 24; ++i )
  {
    m_Index = this->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v8 = &v7[this->m_hUnit.m_Index & 0x1FF]) == 0
      || m_Index != v8->m_EHandle.m_Index
      || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, i);
    v11 = this->m_hUnit.m_Index;
    v12 = AbilityByIndex;
    if ( v11 + 2 <= 1
      || (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v14 = &v13[this->m_hUnit.m_Index & 0x1FF]) == 0
      || v11 != v14->m_EHandle.m_Index
      || (v15 = v14->m_pInstance, v14->m_pInstance == 0)
      || !v15->m_bIsDOTANPC )
    {
      v15 = 0;
    }
    if ( AbilityIsValid(v15, v12, bCurrentlyAvailable) )
    {
      v22 = (*(v12->_vptr_IHandleEntity + 322))(v12);
      v23 = _mm_cvtsi32_si128(v2);
      *v23.m128i_i32 = fmaxf(*v23.m128i_i32, v22);
      v2 = _mm_cvtsi128_si32(v23);
    }
  }
  p_m_hUnit = &this->m_hUnit;
  LOBYTE(i) = 0;
  do
  {
    while ( 1 )
    {
      v21 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
        v17 = v21;
      else
        v17 = 0;
      Inventory = CDOTA_BaseNPC::GetInventory(v17);
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, i);
      v20 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      if ( v20 == 0 || !v20->m_bIsDOTANPC )
        break;
      if ( ItemIsValid(v20, ItemInSlot, bCurrentlyAvailable) )
        goto LABEL_25;
LABEL_20:
      if ( ++i == 9 )
        return *&v2;
    }
    if ( !ItemIsValid(0, ItemInSlot, bCurrentlyAvailable) )
      goto LABEL_20;
LABEL_25:
    ++i;
    v24 = (*(ItemInSlot->_vptr_IHandleEntity + 322))(ItemInSlot);
    v25 = _mm_cvtsi32_si128(v2);
    *v25.m128i_i32 = fmaxf(*v25.m128i_i32, v24);
    v2 = _mm_cvtsi128_si32(v25);
  }
  while ( i != 9 );
  return *&v2;
}


// CDOTA_Bot::GetSlowDuration  (line 1872, @0x00000000027e6a30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, Max<float>, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetAbilityByIndex, AbilityIsValid, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CEntityHandle::operator CEntityInstance*, ItemIsValid
// callers: CDOTA_Bot::UpdateEstimatedDamage, CDOTA_BotMode_DefendAlly::GetDefendAllyScore, CDOTA_BotMode_Attack::GetAttackScore, CDOTA_Bot_Script::GetSlowDuration, CDOTA_TeamCommander::BuildDebugString, CDOTA_Bot_AbilityUsage_BlackKingBar::GetCurrentUsageDesire
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Bot::GetSlowDuration(CDOTA_Bot *const this, bool bCurrentlyAvailable)
{
  unsigned int v2; // r15d
  int i; // ebx
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *AbilityByIndex; // rax
  uint32 v11; // ecx
  CDOTABaseAbility *v12; // r14
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  CDOTA_BaseNPC *v15; // rdi
  EHANDLE *p_m_hUnit; // r12
  CDOTA_BaseNPC *v17; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // r14
  CDOTA_BaseNPC *v20; // rax
  CEntityInstance *v21; // rax
  float v22; // xmm0_4
  __m128i v23; // xmm1
  float v24; // xmm0_4
  __m128i v25; // xmm2

  v2 = _mm_cvtsi128_si32(0LL);
  for ( i = 0; i != 24; ++i )
  {
    m_Index = this->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v8 = &v7[this->m_hUnit.m_Index & 0x1FF]) == 0
      || m_Index != v8->m_EHandle.m_Index
      || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, i);
    v11 = this->m_hUnit.m_Index;
    v12 = AbilityByIndex;
    if ( v11 + 2 <= 1
      || (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v14 = &v13[this->m_hUnit.m_Index & 0x1FF]) == 0
      || v11 != v14->m_EHandle.m_Index
      || (v15 = v14->m_pInstance, v14->m_pInstance == 0)
      || !v15->m_bIsDOTANPC )
    {
      v15 = 0;
    }
    if ( AbilityIsValid(v15, v12, bCurrentlyAvailable) )
    {
      v22 = (*(v12->_vptr_IHandleEntity + 321))(v12);
      v23 = _mm_cvtsi32_si128(v2);
      *v23.m128i_i32 = fmaxf(*v23.m128i_i32, v22);
      v2 = _mm_cvtsi128_si32(v23);
    }
  }
  p_m_hUnit = &this->m_hUnit;
  LOBYTE(i) = 0;
  do
  {
    while ( 1 )
    {
      v21 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
        v17 = v21;
      else
        v17 = 0;
      Inventory = CDOTA_BaseNPC::GetInventory(v17);
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, i);
      v20 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      if ( v20 == 0 || !v20->m_bIsDOTANPC )
        break;
      if ( ItemIsValid(v20, ItemInSlot, bCurrentlyAvailable) )
        goto LABEL_25;
LABEL_20:
      if ( ++i == 9 )
        return *&v2;
    }
    if ( !ItemIsValid(0, ItemInSlot, bCurrentlyAvailable) )
      goto LABEL_20;
LABEL_25:
    ++i;
    v24 = (*(ItemInSlot->_vptr_IHandleEntity + 321))(ItemInSlot);
    v25 = _mm_cvtsi32_si128(v2);
    *v25.m128i_i32 = fmaxf(*v25.m128i_i32, v24);
    v2 = _mm_cvtsi128_si32(v25);
  }
  while ( i != 9 );
  return *&v2;
}


// CDOTA_Bot::HasBlink  (line 1899, @0x00000000027e6c50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetAbilityByIndex, AbilityIsValid, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CEntityHandle::operator CEntityInstance*, ItemIsValid
// callers: CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BotMode_Roam::GetRoamScore, CDOTA_Bot_Script::HasBlink, CDOTA_TeamCommander::BuildDebugString, CDOTA_BotMode_Attack_Earthshaker::CalculateDesiredLocation, CDOTA_Bot_AbilityUsage_Lich_ChainFrost::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_SandKing_SandStorm::ShouldBreakChannel, CDOTA_Bot_AbilityUsage_SandKing_Epicenter::GetCurrentUsageDesire, CDOTA_Modifier_Disruptor_KineticFieldThinker::AvoidStrength
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::HasBlink(CDOTA_Bot *const this, bool bCurrentlyAvailable)
{
  int i; // ebx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *AbilityByIndex; // rax
  uint32 v10; // ecx
  CDOTABaseAbility *v11; // r14
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  CDOTA_BaseNPC *v14; // rdi
  EHANDLE *p_m_hUnit; // r12
  int j; // ebx
  CDOTA_BaseNPC *v17; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // r14
  CDOTA_BaseNPC *v20; // rax
  CEntityInstance *v21; // rax

  for ( i = 0; i != 24; ++i )
  {
    m_Index = this->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v7 = &v6[this->m_hUnit.m_Index & 0x1FF]) == 0
      || m_Index != v7->m_EHandle.m_Index
      || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, i);
    v10 = this->m_hUnit.m_Index;
    v11 = AbilityByIndex;
    if ( v10 + 2 <= 1
      || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v13 = &v12[this->m_hUnit.m_Index & 0x1FF]) == 0
      || v10 != v13->m_EHandle.m_Index
      || (v14 = v13->m_pInstance, v13->m_pInstance == 0)
      || !v14->m_bIsDOTANPC )
    {
      v14 = 0;
    }
    if ( AbilityIsValid(v14, v11, bCurrentlyAvailable) && (*(v11->_vptr_IHandleEntity + 323))(v11) != 0 )
      return 1;
  }
  p_m_hUnit = &this->m_hUnit;
  for ( j = 0; j != 9; ++j )
  {
    while ( 1 )
    {
      v21 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
        v17 = v21;
      else
        v17 = 0;
      Inventory = CDOTA_BaseNPC::GetInventory(v17);
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, j);
      v20 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      if ( v20 == 0 || !v20->m_bIsDOTANPC )
        break;
      if ( ItemIsValid(v20, ItemInSlot, bCurrentlyAvailable) )
        goto LABEL_26;
LABEL_19:
      if ( ++j == 9 )
        return 0;
    }
    if ( !ItemIsValid(0, ItemInSlot, bCurrentlyAvailable) )
      goto LABEL_19;
LABEL_26:
    if ( (*(ItemInSlot->_vptr_IHandleEntity + 323))(ItemInSlot) != 0 )
      return 1;
  }
  return 0;
}


// CDOTA_Bot::HasMinistunOnAttack  (line 1926, @0x00000000027e6e50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetAbilityByIndex, AbilityIsValid, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CEntityHandle::operator CEntityInstance*, ItemIsValid
// callers: CDOTA_BotMode_Attack::GetAttackScore, CDOTA_Bot_Script::HasMinistunOnAttack, CDOTA_TeamCommander::BuildDebugString, CDOTA_Bot_AbilityUsage_SandKing_Epicenter::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_WitchDoctor_DeathWard::GetCurrentUsageDesire
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::HasMinistunOnAttack(CDOTA_Bot *const this)
{
  int i; // ebx
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *AbilityByIndex; // rax
  uint32 v8; // edx
  CDOTABaseAbility *v9; // r13
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *v12; // rdi
  EHANDLE *p_m_hUnit; // r12
  int j; // ebx
  CDOTA_BaseNPC *v15; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // r13
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // rdi
  CEntityInstance *v20; // rax

  for ( i = 0; i != 24; ++i )
  {
    m_Index = this->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = &v4[this->m_hUnit.m_Index & 0x1FF]) == 0
      || m_Index != v5->m_EHandle.m_Index
      || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, i);
    v8 = this->m_hUnit.m_Index;
    v9 = AbilityByIndex;
    if ( v8 + 2 <= 1
      || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v11 = &v10[this->m_hUnit.m_Index & 0x1FF]) == 0
      || v8 != v11->m_EHandle.m_Index
      || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
      || !v12->m_bIsDOTANPC )
    {
      v12 = 0;
    }
    if ( AbilityIsValid(v12, v9, 1) && (*(v9->_vptr_IHandleEntity + 324))(v9) != 0 )
      return 1;
  }
  p_m_hUnit = &this->m_hUnit;
  for ( j = 0; j != 9; ++j )
  {
    while ( 1 )
    {
      v20 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
        v15 = v20;
      else
        v15 = 0;
      Inventory = CDOTA_BaseNPC::GetInventory(v15);
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, j);
      v18 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
        v19 = v18;
      else
        v19 = 0;
      if ( ItemIsValid(v19, ItemInSlot, 1) )
        break;
      if ( ++j == 9 )
        return 0;
    }
    if ( (*(ItemInSlot->_vptr_IHandleEntity + 324))(ItemInSlot) != 0 )
      return 1;
  }
  return 0;
}


// CDOTA_Bot::HasSilence  (line 1953, @0x00000000027e7060, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetAbilityByIndex, AbilityIsValid, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CEntityHandle::operator CEntityInstance*, ItemIsValid
// callers: CDOTA_BotMode_Roam::GetRoamScore, CDOTA_Bot_Script::HasSilence
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::HasSilence(CDOTA_Bot *const this, bool bCurrentlyAvailable)
{
  int i; // ebx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *AbilityByIndex; // rax
  uint32 v10; // ecx
  CDOTABaseAbility *v11; // r14
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  CDOTA_BaseNPC *v14; // rdi
  EHANDLE *p_m_hUnit; // r12
  int j; // ebx
  CDOTA_BaseNPC *v17; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // r14
  CDOTA_BaseNPC *v20; // rax
  CEntityInstance *v21; // rax

  for ( i = 0; i != 24; ++i )
  {
    m_Index = this->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v7 = &v6[this->m_hUnit.m_Index & 0x1FF]) == 0
      || m_Index != v7->m_EHandle.m_Index
      || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, i);
    v10 = this->m_hUnit.m_Index;
    v11 = AbilityByIndex;
    if ( v10 + 2 <= 1
      || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v13 = &v12[this->m_hUnit.m_Index & 0x1FF]) == 0
      || v10 != v13->m_EHandle.m_Index
      || (v14 = v13->m_pInstance, v13->m_pInstance == 0)
      || !v14->m_bIsDOTANPC )
    {
      v14 = 0;
    }
    if ( AbilityIsValid(v14, v11, bCurrentlyAvailable) && (*(v11->_vptr_IHandleEntity + 325))(v11) != 0 )
      return 1;
  }
  p_m_hUnit = &this->m_hUnit;
  for ( j = 0; j != 9; ++j )
  {
    while ( 1 )
    {
      v21 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
        v17 = v21;
      else
        v17 = 0;
      Inventory = CDOTA_BaseNPC::GetInventory(v17);
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, j);
      v20 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      if ( v20 == 0 || !v20->m_bIsDOTANPC )
        break;
      if ( ItemIsValid(v20, ItemInSlot, bCurrentlyAvailable) )
        goto LABEL_26;
LABEL_19:
      if ( ++j == 9 )
        return 0;
    }
    if ( !ItemIsValid(0, ItemInSlot, bCurrentlyAvailable) )
      goto LABEL_19;
LABEL_26:
    if ( (*(ItemInSlot->_vptr_IHandleEntity + 325))(ItemInSlot) != 0 )
      return 1;
  }
  return 0;
}


// CDOTA_Bot::HasInvisibility  (line 1980, @0x00000000027e7260, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetAbilityByIndex, AbilityIsValid, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CEntityHandle::operator CEntityInstance*, ItemIsValid
// callers: CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BotMode_Retreat::Think, CDOTA_Bot_Script::HasInvisibility, CDOTA_TeamCommander::UpdateItemsDesire, CDOTA_Bot_AbilityUsage_BountyHunter_Track::GetCurrentUsageDesire, CDOTA_BaseNPC_Hero::GetSituationalItemPurchase
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::HasInvisibility(CDOTA_Bot *const this, bool bCurrentlyAvailable)
{
  int i; // ebx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *AbilityByIndex; // rax
  uint32 v10; // ecx
  CDOTABaseAbility *v11; // r14
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  CDOTA_BaseNPC *v14; // rdi
  EHANDLE *p_m_hUnit; // r12
  int j; // ebx
  CDOTA_BaseNPC *v17; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // r14
  CDOTA_BaseNPC *v20; // rax
  CEntityInstance *v21; // rax

  for ( i = 0; i != 24; ++i )
  {
    m_Index = this->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v7 = &v6[this->m_hUnit.m_Index & 0x1FF]) == 0
      || m_Index != v7->m_EHandle.m_Index
      || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, i);
    v10 = this->m_hUnit.m_Index;
    v11 = AbilityByIndex;
    if ( v10 + 2 <= 1
      || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v13 = &v12[this->m_hUnit.m_Index & 0x1FF]) == 0
      || v10 != v13->m_EHandle.m_Index
      || (v14 = v13->m_pInstance, v13->m_pInstance == 0)
      || !v14->m_bIsDOTANPC )
    {
      v14 = 0;
    }
    if ( AbilityIsValid(v14, v11, bCurrentlyAvailable) && (*(v11->_vptr_IHandleEntity + 326))(v11) != 0 )
      return 1;
  }
  p_m_hUnit = &this->m_hUnit;
  for ( j = 0; j != 9; ++j )
  {
    while ( 1 )
    {
      v21 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
        v17 = v21;
      else
        v17 = 0;
      Inventory = CDOTA_BaseNPC::GetInventory(v17);
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, j);
      v20 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      if ( v20 == 0 || !v20->m_bIsDOTANPC )
        break;
      if ( ItemIsValid(v20, ItemInSlot, bCurrentlyAvailable) )
        goto LABEL_26;
LABEL_19:
      if ( ++j == 9 )
        return 0;
    }
    if ( !ItemIsValid(0, ItemInSlot, bCurrentlyAvailable) )
      goto LABEL_19;
LABEL_26:
    if ( (*(ItemInSlot->_vptr_IHandleEntity + 326))(ItemInSlot) != 0 )
      return 1;
  }
  return 0;
}


// CDOTA_Bot::UsingItemBreaksInvisibility  (line 2007, @0x00000000027e7460, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*
// callers: CDOTA_Bot_Script::UsingItemBreaksInvisibility, CDOTA_Bot_AbilityUsage_BlinkDagger::GetCurrentUsageDesire
// strings: "modifier_smoke_of_deceit", "modifier_slark_shadow_dance"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::UsingItemBreaksInvisibility(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *v6; // rax
  CDOTA_BaseNPC *v7; // rdi
  CEntityInstance *m_pInstance; // rdi

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 0;
  v4 = &v3[this->m_hUnit.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 0;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 0;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || SLOBYTE(m_pInstance[58]._vptr_IHandleEntity) >= 0
    || CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_smoke_of_deceit", 0) != 0 )
  {
    return 0;
  }
  v6 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
    v7 = v6;
  else
    v7 = 0;
  return CDOTA_BaseNPC::FindModifierByName(v7, "modifier_slark_shadow_dance", 0) == 0;
}


// CDOTA_Bot::GetGankDistance  (line 2023, @0x00000000027e2ab0, libserver.so)  // inlines: Get, GetAttackRange, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetUnit, IndexToIdentity, IsListeningToEvent, IsValid, LookupEntity, Max<float>, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
// callers: CDOTA_Bot_Hero_BountyHunter::GetGankDistance, CDOTA_Bot_Hero_SkywrathMage::GetGankDistance, CDOTA_Bot_Hero_SkeletonKing::GetGankDistance, CDOTA_Bot_Hero_Sven::GetGankDistance, CDOTA_Bot_Hero_Tiny::GetGankDistance, CDOTA_Bot_Hero_Tidehunter::GetGankDistance, CDOTA_Bot_Hero_Zuus::GetGankDistance
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot::GetGankDistance(CDOTA_Bot *const this)
{
  __m128i v1; // xmm1
  __m128i v2; // xmm3
  uint32 m_Index; // eax
  CConcreteEntityList *v5; // rsi
  CEntityIdentity *v6; // rdx
  __int64 v7; // rcx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rbx
  __int64 v10; // rax
  CDOTA_ModifierManager *p_m_worldGroupId; // r13
  float v12; // xmm2_4
  __int64 v13; // rax
  float v14; // xmm0_4
  float m_hScope_low; // xmm3_4
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm0_4
  __int64 v19; // rax
  float v20; // xmm0_4
  __int64 v21; // rax
  float v22; // xmm0_4
  __m128i v23; // xmm5
  float v24; // ebx
  __int64 m_hScope_high; // rax
  float Modifier_Constant_Highest_Internal; // xmm2_4
  __int64 v27; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  __int64 v29; // rax
  float v30; // xmm0_4
  __m128i v31; // xmm1
  __int64 v32; // rax
  float v33; // xmm0_4
  __int64 v34; // rax
  float v35; // xmm0_4
  __m128i v36; // xmm6
  int result; // eax
  __int64 v38; // rax
  __m128i v39; // xmm1
  float v40; // xmm0_4
  float v41; // [rsp+8h] [rbp-28h]
  float v42; // [rsp+8h] [rbp-28h]
  float v43; // [rsp+8h] [rbp-28h]
  float v44; // [rsp+8h] [rbp-28h]
  float v45; // [rsp+Ch] [rbp-24h]
  float v46; // [rsp+Ch] [rbp-24h]
  unsigned int v47; // [rsp+Ch] [rbp-24h]
  unsigned __int32 v48; // [rsp+Ch] [rbp-24h]
  unsigned int v49; // [rsp+Ch] [rbp-24h]
  unsigned int v50; // [rsp+Ch] [rbp-24h]
  unsigned int v51; // [rsp+Ch] [rbp-24h]
  unsigned __int32 v52; // [rsp+Ch] [rbp-24h]
  float v53; // [rsp+Ch] [rbp-24h]

  m_Index = this->m_hUnit.m_Index;
  v5 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1
    && (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v7 = this->m_hUnit.m_Index & 0x1FF, v5 = (8 * v7), (v8 = &v6[v7]) != 0)
    && m_Index == v8->m_EHandle.m_Index
    && (m_pInstance = v8->m_pInstance, v8->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    if ( (*(&m_pInstance[50].m_worldGroupId + 1) & 2) == 0 )
    {
      m_hScope_high = HIBYTE(m_pInstance[67].m_hPrivateScope.m_hScope);
      p_m_worldGroupId = &m_pInstance[64].m_worldGroupId;
      Modifier_Constant_Highest_Internal = 0.0;
      if ( m_hScope_high != 0xFF )
      {
        v5 = *&m_pInstance[65].m_worldGroupId.m_nHashCode;
        if ( *(&v5->m_Lock.gap0 + 6 * m_hScope_high) > 0 )
          Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                                 &m_pInstance[64].m_worldGroupId,
                                                 modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                                 &CModifierParams::s_Default);
      }
      v27 = BYTE5(m_pInstance[67].m_hPrivateScope.m_hScope);
      Modifier_Constant_Additive_Internal = 0.0;
      *v2.m128i_i32 = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
      if ( v27 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v27) > 0 )
      {
        v43 = Modifier_Constant_Highest_Internal;
        *&v49 = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
        Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                                &m_pInstance[64].m_worldGroupId,
                                                modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                                &CModifierParams::s_Default);
        Modifier_Constant_Highest_Internal = v43;
        v2 = v49;
      }
      v29 = BYTE6(m_pInstance[67].m_hPrivateScope.m_hScope);
      *v2.m128i_i32 = *v2.m128i_i32 + Modifier_Constant_Additive_Internal;
      v30 = 0.0;
      if ( v29 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v29) > 0 )
      {
        v44 = Modifier_Constant_Highest_Internal;
        v50 = v2.m128i_i32[0];
        v30 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                &m_pInstance[64].m_worldGroupId,
                modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
                &CModifierParams::s_Default);
        Modifier_Constant_Highest_Internal = v44;
        v2 = v50;
      }
      v31 = v2;
      if ( Modifier_Constant_Highest_Internal <= (*v2.m128i_i32 + v30) )
      {
        v32 = BYTE5(m_pInstance[67].m_hPrivateScope.m_hScope);
        v33 = 0.0;
        *v31.m128i_i32 = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
        if ( v32 != 0xFF )
        {
          v5 = *&m_pInstance[65].m_worldGroupId.m_nHashCode;
          if ( *(&v5->m_Lock.gap0 + 6 * v32) > 0 )
          {
            *&v51 = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
            v33 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                    &m_pInstance[64].m_worldGroupId,
                    modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                    &CModifierParams::s_Default);
            v31 = v51;
          }
        }
        v34 = BYTE6(m_pInstance[67].m_hPrivateScope.m_hScope);
        *v31.m128i_i32 = *v31.m128i_i32 + v33;
        v35 = 0.0;
        if ( v34 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v34) > 0 )
        {
          v52 = v31.m128i_i32[0];
          v35 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                  &m_pInstance[64].m_worldGroupId,
                  modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
                  &CModifierParams::s_Default);
          v31 = v52;
        }
        *v31.m128i_i32 = *v31.m128i_i32 + v35;
        v36 = v31;
        *v36.m128i_i32 = *v31.m128i_i32 + 500.0;
        v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v36));
        goto LABEL_43;
      }
      v38 = HIBYTE(m_pInstance[67].m_hPrivateScope.m_hScope);
      v39 = 0x43FA0000u;
      if ( v38 != 0xFF )
        goto LABEL_50;
      goto LABEL_52;
    }
  }
  else
  {
    m_pInstance = 0;
  }
  v10 = HIBYTE(m_pInstance[67].m_hPrivateScope.m_hScope);
  p_m_worldGroupId = &m_pInstance[64].m_worldGroupId;
  v12 = 0.0;
  if ( v10 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v10) > 0 )
    v12 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            &m_pInstance[64].m_worldGroupId,
            modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
            &CModifierParams::s_Default);
  v13 = BYTE5(m_pInstance[67].m_hPrivateScope.m_hScope);
  v14 = 0.0;
  m_hScope_low = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
  if ( v13 != 0xFF )
  {
    v5 = *&m_pInstance[65].m_worldGroupId.m_nHashCode;
    if ( *(&v5->m_Lock.gap0 + 6 * v13) > 0 )
    {
      v41 = v12;
      v45 = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
      v14 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              &m_pInstance[64].m_worldGroupId,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
              &CModifierParams::s_Default);
      v12 = v41;
      m_hScope_low = v45;
    }
  }
  v16 = BYTE6(m_pInstance[67].m_hPrivateScope.m_hScope);
  v17 = m_hScope_low + v14;
  v18 = 0.0;
  if ( v16 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v16) > 0 )
  {
    v42 = v12;
    v46 = v17;
    v18 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            &m_pInstance[64].m_worldGroupId,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    v12 = v42;
    v17 = v46;
  }
  if ( v12 > (v17 + v18) )
  {
    v38 = HIBYTE(m_pInstance[67].m_hPrivateScope.m_hScope);
    v39 = 0x43480000u;
    if ( v38 != 0xFF )
    {
LABEL_50:
      if ( *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v38) > 0 )
      {
        v53 = *v39.m128i_i32;
        v40 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                p_m_worldGroupId,
                modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                &CModifierParams::s_Default);
        v39 = LODWORD(v53);
        *v39.m128i_i32 = v53 + v40;
      }
    }
LABEL_52:
    v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v39));
    goto LABEL_43;
  }
  v19 = BYTE5(m_pInstance[67].m_hPrivateScope.m_hScope);
  v20 = 0.0;
  *v1.m128i_i32 = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
  if ( v19 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v19) > 0 )
  {
    *&v47 = SLODWORD(m_pInstance[47].m_hPrivateScope.m_hScope);
    v20 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
            &m_pInstance[64].m_worldGroupId,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
            &CModifierParams::s_Default);
    v1 = v47;
  }
  v21 = BYTE6(m_pInstance[67].m_hPrivateScope.m_hScope);
  *v1.m128i_i32 = *v1.m128i_i32 + v20;
  v22 = 0.0;
  if ( v21 != 0xFF && *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v21) > 0 )
  {
    v48 = v1.m128i_i32[0];
    v22 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            &m_pInstance[64].m_worldGroupId,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    v1 = v48;
  }
  *v1.m128i_i32 = *v1.m128i_i32 + v22;
  v23 = v1;
  *v23.m128i_i32 = *v1.m128i_i32 + 200.0;
  v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
LABEL_43:
  if ( (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode, v5) != 11
    && (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode) != 12
    && (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode) != 13 )
  {
    return v24;
  }
  result = 1200;
  if ( v24 > 1200.0 )
    return v24;
  return result;
}


// CDOTA_Bot::GetMaxRoamDistance  (line 2038, @0x00000000027dffe0, libserver.so)
// callers: CDOTA_Bot_Hero_Bane::GetMaxRoamDistance, CDOTA_Bot_Hero_BountyHunter::GetMaxRoamDistance, CDOTA_Bot_Hero_CrystalMaiden::GetMaxRoamDistance, CDOTA_Bot_Hero_Kunkka::GetMaxRoamDistance, CDOTA_Bot_Hero_Earthshaker::GetMaxRoamDistance, CDOTA_Bot_Hero_Juggernaut::GetMaxRoamDistance, CDOTA_Bot_Hero_Lina::GetMaxRoamDistance, CDOTA_Bot_Hero_Tiny::GetMaxRoamDistance, CDOTA_Bot_Hero_VengefulSpirit::GetMaxRoamDistance, CDOTA_Bot_Hero_Sven::GetMaxRoamDistance, CDOTA_Bot_Hero_Windrunner::GetMaxRoamDistance, CDOTA_Bot_Hero_Sniper::GetMaxRoamDistance
int __fastcall CDOTA_Bot::GetMaxRoamDistance(CDOTA_Bot *const this)
{
  return 10000;
}


// CDOTA_Bot::SetRequestedBlink  (line 2047, @0x00000000027e7540, libserver.so)  // inlines: DOTAGameRules, GetGameTime, operator=
// calls: CDOTA_Bot::GetActionDelay
// callers: CDOTA_Bot_AbilityUsage_SandKing_Epicenter::UseAbility
void __fastcall CDOTA_Bot::SetRequestedBlink(
        CDOTA_Bot *const this,
        const Vector *const vTargetLocation,
        float a3,
        float fDuration)
{
  CGameRules *v5; // rax
  float ActionDelay; // xmm0_4
  CGameRules *v7; // rax
  bool v8; // zf
  float v9; // xmm0_4
  float v11; // [rsp+Ch] [rbp-14h]

  this->m_vRequestedBlinkLoc.x = vTargetLocation->x;
  v5 = g_pGameRules;
  this->m_vRequestedBlinkLoc.y = vTargetLocation->y;
  this->m_vRequestedBlinkLoc.z = vTargetLocation->z;
  if ( v5 != 0 )
    v11 = *&v5[18].m_szQuestName[20];
  else
    v11 = 0.0;
  ActionDelay = CDOTA_Bot::GetActionDelay(this, 1);
  v7 = g_pGameRules;
  v8 = g_pGameRules == 0;
  this->m_fRequestedBlinkStart = (ActionDelay + v11) + 0.1;
  v9 = 0.0;
  if ( !v8 )
    v9 = *&v7[18].m_szQuestName[20];
  this->m_fRequestedBlinkExpire = v9 + a3;
}


// CDOTA_Bot::HasRequestedBlink  (line 2056, @0x00000000027e7600, libserver.so)  // inlines: DOTAGameRules, GetGameTime, operator!=
// callers: CDOTA_Bot_AbilityUsage_BlinkDagger::GetCurrentUsageDesire, CDOTA_BotMode_Attack_SandKing::CalculateDesiredLocation
bool __fastcall CDOTA_Bot::HasRequestedBlink(CDOTA_Bot *const this)
{
  float v1; // xmm0_4

  if ( g_pGameRules == 0 )
  {
    v1 = 0.0;
    if ( this->m_fRequestedBlinkExpire > 0.0 )
      return v1 > this->m_fRequestedBlinkStart
          && (vec3_origin.x != this->m_vRequestedBlinkLoc.x
           || vec3_origin.y != this->m_vRequestedBlinkLoc.y
           || vec3_origin.z != this->m_vRequestedBlinkLoc.z);
    return 0;
  }
  v1 = *&g_pGameRules[18].m_szQuestName[20];
  if ( this->m_fRequestedBlinkExpire <= v1 )
    return 0;
  return v1 > this->m_fRequestedBlinkStart
      && (vec3_origin.x != this->m_vRequestedBlinkLoc.x
       || vec3_origin.y != this->m_vRequestedBlinkLoc.y
       || vec3_origin.z != this->m_vRequestedBlinkLoc.z);
}


// CDOTA_Bot::OnDidDamage  (line 2063, @0x00000000027dfff0, libserver.so)  // inlines: Element, GetAction, Top, operator[]
void __fastcall CDOTA_Bot::OnDidDamage(
        CDOTA_Bot *const this,
        CDOTA_BaseNPC *pTarget,
        CDOTABaseAbility *pInflictor,
        int iAmount)
{
  __int64 i; // rbx
  CDOTA_BotMode *v9; // rdi
  int m_Size; // eax
  CDOTA_BotAction *v11; // rdi

  for ( i = 0; i != 25; ++i )
  {
    v9 = this->m_pBotModes[i + 1];
    if ( v9 != 0 )
      (*(v9->_vptr_CDOTA_BotMode + 6))(v9, pTarget, pInflictor, iAmount);
  }
  m_Size = this->m_ActionStack.m_Size;
  if ( m_Size <= 0 )
    v11 = 0;
  else
    v11 = this->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
  (*(v11->_vptr_CDOTA_BotAction + 7))(v11, pTarget, pInflictor, iAmount);
}


// CDOTA_Bot::OnTakeDamage  (line 2077, @0x00000000027e37f0, libserver.so)  // inlines: DOTAGameRules, Element, Get, GetAction, GetAttacker, GetGameTime, GetInstance, GetTeamNumber, GetUnit, SetLastSeenLocation, ToDOTABaseNPC, ToDOTABaseNPCHero, Top, operator CBaseEntity*, operator=, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::IsLocationVisible
void __fastcall CDOTA_Bot::OnTakeDamage(CDOTA_Bot *const this, const CTakeDamageInfo *const info)
{
  CEntityInstance *v4; // rax
  CEntityInstance *v5; // rbx
  int m_Id; // eax
  float v7; // xmm0_4
  const Vector *AbsOrigin; // r14
  CEntityInstance *v9; // rax
  const Vector *v10; // rax
  __int64 v11; // rdx
  int v12; // xmm0_4
  __int64 i; // rbx
  CDOTA_BotMode *v14; // rdi
  int m_Size; // eax
  CDOTA_BotAction *v16; // rdi
  float v17; // xmm0_4
  int v18; // eax
  float v19; // xmm0_4

  v4 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
  v5 = v4;
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
  {
    m_Id = v4[43].m_iszPrivateVScripts.u.m_Id;
    if ( (m_Id & 4) != 0 )
    {
      v7 = 0.0;
      if ( g_pGameRules != 0 )
        v7 = *&g_pGameRules[18].m_szQuestName[20];
      this->m_HitByTowerTime = v7;
    }
    else if ( (m_Id & 1) != 0 )
    {
      v18 = (*(v5->_vptr_IHandleEntity + 414))(v5);
      v19 = 0.0;
      if ( g_pGameRules != 0 )
        v19 = *&g_pGameRules[18].m_szQuestName[20];
      this->m_HitByHeroTime[v18] = v19;
    }
    else if ( (m_Id & 0x80u) != 0 )
    {
      v17 = 0.0;
      if ( g_pGameRules != 0 )
        v17 = *&g_pGameRules[18].m_szQuestName[20];
      this->m_HitByCreepTime = v17;
    }
    if ( SLOBYTE(v5[58]._vptr_IHandleEntity) < 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
      v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
      if ( v9 == 0 || BYTE3(v9[7]._vptr_IHandleEntity) == 0 )
        v9 = 0;
      if ( CDOTAFogOfWarSystem::IsLocationVisible(
             &g_DOTAFogOfWarSystem,
             HIBYTE(v9[7].m_CScriptComponent),
             AbsOrigin,
             0.0)
        && (v5[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
        && *&v5[45].m_worldGroupId.m_nHashCode != 0 )
      {
        v10 = CBaseEntity::GetAbsOrigin(v5);
        v11 = *&v5[45].m_worldGroupId.m_nHashCode;
        *(v11 + 737) = 1;
        *(v11 + 740) = *v10;
        v12 = 0;
        if ( g_pGameRules != 0 )
          v12 = *&g_pGameRules[18].m_szQuestName[20];
        *(v11 + 704) = v12;
      }
    }
  }
  for ( i = 0; i != 25; ++i )
  {
    v14 = this->m_pBotModes[i + 1];
    if ( v14 != 0 )
      (*(v14->_vptr_CDOTA_BotMode + 7))(v14, info);
  }
  m_Size = this->m_ActionStack.m_Size;
  if ( m_Size <= 0 )
    v16 = 0;
  else
    v16 = this->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
  (*(v16->_vptr_CDOTA_BotAction + 8))(v16, info);
}


// CDOTA_Bot::OnAttacked  (line 2117, @0x00000000027e0080, libserver.so)  // inlines: Element, GetAction, Top, operator[]
void __fastcall CDOTA_Bot::OnAttacked(CDOTA_Bot *const this, const CDOTA_AttackRecord *pRecord)
{
  __int64 i; // rbx
  CDOTA_BotMode *v5; // rdi
  int m_Size; // eax
  CDOTA_BotAction *v7; // rdi

  for ( i = 0; i != 25; ++i )
  {
    v5 = this->m_pBotModes[i + 1];
    if ( v5 != 0 )
      (*(v5->_vptr_CDOTA_BotMode + 9))(v5, pRecord);
  }
  m_Size = this->m_ActionStack.m_Size;
  if ( m_Size <= 0 )
    v7 = 0;
  else
    v7 = this->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
  (*(v7->_vptr_CDOTA_BotAction + 9))(v7, pRecord);
}


// CDOTA_Bot::OnAbilityExecuted  (line 2132, @0x00000000027e3b30, libserver.so)  // inlines: Element, GetAction, Top, operator[]
// calls: CountdownTimer::Start
void __fastcall CDOTA_Bot::OnAbilityExecuted(CDOTA_Bot *const this, CDOTABaseAbility *pAbility, CBaseEntity *pTarget)
{
  __int64 i; // rbx
  CDOTA_BotMode *v7; // rdi
  int m_Size; // eax
  CDOTA_BotAction *v9; // rdi
  float v10; // xmm1_4
  int m_iDifficulty; // eax

  for ( i = 0; i != 26; ++i )
  {
    v7 = this->m_pBotModes[i];
    if ( v7 != 0 )
      (*(v7->_vptr_CDOTA_BotMode + 8))(v7, pAbility, pTarget);
  }
  m_Size = this->m_ActionStack.m_Size;
  v9 = 0;
  if ( m_Size > 0 )
    v9 = this->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
  (*(v9->_vptr_CDOTA_BotAction + 10))(v9, pAbility, pTarget);
  m_iDifficulty = this->m_iDifficulty;
  if ( m_iDifficulty == 1 )
  {
    CountdownTimer::Start(&this->m_AbilityMutedTimer, 6.0, v10);
  }
  else if ( m_iDifficulty == 2 )
  {
    CountdownTimer::Start(&this->m_AbilityMutedTimer, 3.0, v10);
  }
}


// CDOTA_Bot::LevelAbilities  (line 2153, @0x00000000027fe980, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot::DoBotScriptLevelUpAbilitiesThink, CUtlVectorBase<CDOTABaseAbility*, CUtlMemory<CDOTABaseAbility*, int> >::Remove
// callers: CDOTA_Bot::Think, CDOTA_BotMode_Companion::UpdateSubMode, CDOTA_BotMode_TutorialBoss::UpdateSubMode
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot::LevelAbilities(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rdi

  if ( !CDOTA_Bot::DoBotScriptLevelUpAbilitiesThink(this) )
  {
    m_Index = this->m_hUnit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F];
      if ( v3 != 0 )
      {
        v4 = &v3[this->m_hUnit.m_Index & 0x1FF];
        if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        {
          m_pInstance = v4->m_pInstance;
          if ( v4->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && SHIDWORD(m_pInstance[99].m_hPrivateScope.m_hScope) > 0
            && this->m_Build.m_Size > 0 )
          {
            (*(m_pInstance->_vptr_IHandleEntity + 495))(m_pInstance, *this->m_Build.m_Memory.m_pMemory);
            CUtlVectorBase<CDOTABaseAbility *,CUtlMemory<CDOTABaseAbility *,int>>::Remove(&this->m_Build, 0);
          }
        }
      }
    }
  }
}


// CDOTA_Bot::ConsiderBuyback  (line 2171, @0x00000000027ea650, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Get, GetActiveModeDesire, GetBotByIndex, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetOpposingTeamCommander, GetTarget, GetUnit, IndexToIdentity, Invalidate, IsElapsed, IsValid, LookupEntity, NetworkStateChanged, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABuilding, operator CBaseEntity*, operator CEntityInstance*, operator=<float>
// calls: CDOTA_Bot::DoBotScriptBuybackUsageThink, CDOTAGamerules::GetGameModeEntity, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC_Hero::GetBuybackCost, CountdownTimer::Now, CDOTA_BaseNPC_Hero::GetNextItemToPurchase, CDOTA_TeamCommander::GetOpposingTeamCommander, CDOTA_TeamCommander::IsOurLanePushedIntoBase, CDOTA_BaseNPC_Hero::Buyback, CountdownTimer::Start
// callers: CDOTA_Bot::Think
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot::ConsiderBuyback(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CEntityIdentity *v4; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rdi
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC_Hero *v9; // r12
  int v10; // r15d
  float v11; // xmm0_4
  float m_fBuybackCooldown; // xmm1_4
  CountdownTimer *p_m_BuybackDelayTimer; // rdi
  sLoadoutItem *NextItemToPurchase; // rax
  sLoadoutItem *v15; // r13
  int iFlags; // eax
  CEntityInstance *v17; // rax
  CEntityInstance *v18; // rdi
  int v19; // r15d
  CEntityInstance *v20; // rax
  CEntityInstance *v21; // rdi
  int v22; // r13d
  __int64 v23; // r13
  int v24; // r14d
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_Bot *v26; // r15
  CEntityInstance *v27; // rax
  CDOTA_TeamCommander *m_pTeamCommander; // rax
  CEntityHandle v29; // [rsp+10h] [rbp-40h] BYREF

  if ( CDOTA_Bot::DoBotScriptBuybackUsageThink(this) )
    return;
  m_Index = this->m_hUnit.m_Index;
  v3 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = this->m_hUnit.m_Index & 0x1FF, v3 = (8 * v5), (v6 = &v4[v5]) == 0)
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v3) != 0 )
  {
    if ( this->m_BuybackDelayTimer.m_timestamp.m_Value != -1.0 )
    {
      (*(this->m_BuybackDelayTimer._vptr_CountdownTimer + 2))(
        &this->m_BuybackDelayTimer,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        -1.0);
      this->m_BuybackDelayTimer.m_timestamp.m_Value = -1.0;
    }
    return;
  }
  if ( g_pGameRules == 0
    || CDOTAGamerules::GetGameModeEntity(g_pGameRules) == 0
    || CDOTAGamerules::GetGameModeEntity(g_pGameRules)->m_bBuybackEnabled.m_Value )
  {
    v8 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
    v9 = v8;
    if ( v8 != 0
      && BYTE3(v8[7]._vptr_IHandleEntity) != 0
      && (v8[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
      && BYTE1(v8[117].m_pEntity) == 0 )
    {
      v10 = (*(v8->_vptr_IHandleEntity + 397))(v8);
      if ( v10 >= CDOTA_BaseNPC_Hero::GetBuybackCost(v9) )
      {
        v11 = 0.0;
        if ( g_pGameRules != 0 )
          v11 = *&g_pGameRules[18].m_szQuestName[20];
        m_fBuybackCooldown = v9->m_fBuybackCooldown;
        if ( m_fBuybackCooldown <= v11 && !v9->m_bIsIllusion.m_Value )
        {
          p_m_BuybackDelayTimer = &this->m_BuybackDelayTimer;
          if ( this->m_BuybackDelayTimer.m_timestamp.m_Value <= 0.0 )
          {
            CountdownTimer::Start(p_m_BuybackDelayTimer, 2.0, m_fBuybackCooldown);
            return;
          }
          if ( CountdownTimer::Now(p_m_BuybackDelayTimer) >= this->m_BuybackDelayTimer.m_timestamp.m_Value
            && this->m_pTeamCommander->m_bLateGame )
          {
            NextItemToPurchase = CDOTA_BaseNPC_Hero::GetNextItemToPurchase(v9, 0);
            v15 = NextItemToPurchase;
            if ( NextItemToPurchase != 0 )
            {
              iFlags = NextItemToPurchase->iFlags;
              if ( (iFlags & 0xC) == 0 )
                goto LABEL_30;
              v17 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
              if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
                v18 = v17;
              else
                v18 = 0;
              v19 = (*(v18->_vptr_IHandleEntity + 397))(v18);
              if ( v19 <= 5 * CDOTA_BaseNPC_Hero::GetBuybackCost(v9) )
              {
                iFlags = v15->iFlags;
LABEL_30:
                if ( (iFlags & 8) != 0 )
                {
                  v20 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
                  if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
                    v21 = v20;
                  else
                    v21 = 0;
                  v22 = (*(v21->_vptr_IHandleEntity + 397))(v21);
                  if ( v22 > 3 * CDOTA_BaseNPC_Hero::GetBuybackCost(v9) )
                    goto LABEL_52;
                }
                v23 = 0;
                v24 = 0;
                while ( v23 < CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pTeamCommander)->m_BotList.m_Size )
                {
                  OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pTeamCommander);
                  if ( v23 < OpposingTeamCommander->m_BotList.m_Size )
                  {
                    v26 = OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v23];
                    if ( v26 != 0
                      && ((*(v26->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v26->m_pActiveBotMode) == 8
                       || (*(v26->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v26->m_pActiveBotMode) == 9
                       || (*(v26->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v26->m_pActiveBotMode) == 10)
                      && v26->m_fModeDesires[(*(v26->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v26->m_pActiveBotMode)] >= 0.89999998 )
                    {
                      v29.m_Index = v26->m_hTarget.m_Index;
                      v27 = CEntityHandle::operator CEntityInstance *(&v29);
                      if ( v27 != 0
                        && BYTE3(v27[7]._vptr_IHandleEntity) != 0
                        && (v27[43].m_iszPrivateVScripts.u.m_Id & 0x14) != 0 )
                      {
                        v24 -= !CDOTA_TeamCommander::IsOurLanePushedIntoBase(
                                  this->m_pTeamCommander,
                                  v27[97].m_iszPrivateVScripts.u.m_Id)
                             - 1;
                      }
                    }
                  }
                  ++v23;
                }
                if ( v24 > 1 )
                {
                  m_pTeamCommander = this->m_pTeamCommander;
                  if ( m_pTeamCommander->m_fDefendLaneUrgencyDesire[1] > 0.89999998
                    || m_pTeamCommander->m_fDefendLaneUrgencyDesire[3] > 0.89999998
                    || m_pTeamCommander->m_fDefendLaneUrgencyDesire[2] > 0.89999998 )
                  {
                    goto LABEL_52;
                  }
                }
                return;
              }
            }
LABEL_52:
            CDOTA_BaseNPC_Hero::Buyback(v9);
          }
        }
      }
    }
  }
}


// CDOTA_Bot::WantsToSaveForBuyback  (line 2254, @0x00000000027e76a0, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetUnit, IndexToIdentity, IsBuybackEnabled, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTAGamerules::GetGameModeEntity, CDOTA_TeamCommander::GetOpposingTeamOffensivePower, CDOTA_BaseNPC_Hero::GetDeathGoldCost, CDOTA_BaseNPC_Hero::GetBuybackCost
// callers: CDOTA_BotMode_Farm::GetFarmDesire
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::WantsToSaveForBuyback(CDOTA_Bot *const this)
{
  bool v2; // di
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r13
  CDOTA_TeamCommander *m_pTeamCommander; // rdi
  float v9; // xmm1_4
  int v10; // ebx
  int DeathGoldCost; // r12d

  v2 = g_pGameRules == 0
    || CDOTAGamerules::GetGameModeEntity(g_pGameRules) == 0
    || CDOTAGamerules::GetGameModeEntity(g_pGameRules)->m_bBuybackEnabled.m_Value;
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[this->m_hUnit.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 0;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 0;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return 0;
  if ( !m_pInstance->m_bIsDOTANPC )
    return 0;
  if ( (m_pInstance->m_iUnitType & 1) == 0 )
    return 0;
  if ( !v2 )
    return 0;
  m_pTeamCommander = this->m_pTeamCommander;
  if ( !m_pTeamCommander->m_bLateGame
    || CDOTA_TeamCommander::GetOpposingTeamOffensivePower(m_pTeamCommander, 1) <= 10000.0 )
  {
    return 0;
  }
  v9 = 0.0;
  if ( g_pGameRules != 0 )
    v9 = *&g_pGameRules[18].m_szQuestName[20];
  if ( (m_pInstance->m_fBuybackCooldown - v9) >= 60.0 )
    return 0;
  v10 = (*(m_pInstance->_vptr_IHandleEntity + 397))(m_pInstance);
  DeathGoldCost = CDOTA_BaseNPC_Hero::GetDeathGoldCost(m_pInstance);
  return v10 < CDOTA_BaseNPC_Hero::GetBuybackCost(m_pInstance) + DeathGoldCost;
}


// CDOTA_Bot::ConsiderCourierUsage  (line 2268, @0x00000000028096e0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CEntityHandle, CUnitOrders, CUtlMemory, CUtlStringListFixedGrowable, CUtlStringList_Base, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowable, CopyConstruct<CDOTA_Item*>, CopyConstruct<CEntityIndex>, DOTAGameRules, Element, FStrEq, FastSqrt, Find, Get, GetAbilityName, GetAssignedLane, GetBotByIndex, GetCourierState, GetEntryIndex, GetGameMode, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, GetUnit, GrowMemory, HasElement, IndexToIdentity, Init, IsAddOnGame, IsElapsed, IsFreeCourierMode, Length2D, LookupEntity, NetworkStateChanged, Purge, RemoveAll, Reset, Set, Start, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _V_strcmp, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, entindex, operator CBaseEntity*, operator-, operator=, operator=<float>, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlStringListFixedGrowable, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CountdownTimer::Now, CDOTA_Bot::DoBotScriptCourierUsageThink, CEntityHandle::operator CEntityInstance*, RandomFloat, CDOTA_Bot::GetStashValue, CDOTA_PlayerResource::GetNumCouriersForTeam, CDOTA_PlayerResource::GetNthCourierForTeam, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTA_Bot::GetPlayerID, CDOTA_PlayerResource::GetCourier (32 total)
// callers: CDOTA_Bot::Think
// strings: "modifier_fountain_aura_buff", "courier_transfer_items", "Unknown abilities on Courier?\n", "<NoAbilityName>"
void __fastcall CDOTA_Bot::ConsiderCourierUsage(CDOTA_Bot *const this)
{
  CDOTA_Bot *v1; // r14
  CEntityInstance *v2; // rax
  CDOTA_BaseNPC_Hero *v3; // r13
  double v4; // xmm0_8
  double v5; // xmm1_8
  double v6; // xmm2_8
  double v7; // xmm3_8
  int NumCouriersForTeam; // r15d
  int v9; // r12d
  CDOTA_Unit_Courier *NthCourierForTeam; // rax
  CDOTA_Unit_Courier *v11; // r14
  CourierState_t m_Value; // eax
  int v13; // ebx
  unsigned __int16 v14; // cx
  int v15; // esi
  int v16; // edx
  CEntityIdentity *v17; // rax
  CEntityIdentity *v18; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v21; // rdx
  uint32 v22; // eax
  int v23; // eax
  int PlayerID; // eax
  int i; // ebx
  CDOTA_UnitInventory *v26; // rax
  CDOTA_Item *v27; // r12
  CDOTA_TeamCommander *m_pTeamCommander; // rax
  __int64 v29; // r12
  int v30; // ebx
  CDOTA_Bot *v31; // rdi
  int j; // ebx
  CDOTA_UnitInventory *v33; // rax
  DOTA_LANE m_CurrentLane; // eax
  int v35; // ebx
  int StashValue; // r12d
  CDOTA_TeamCommander *v37; // rax
  __int64 v38; // r15
  int v39; // ebx
  CDOTA_Bot *v40; // rdi
  const Vector *AbsOrigin; // r12
  int k; // r12d
  CDOTABaseAbility *AbilityByName; // r15
  CEntityIndex v44; // eax
  __int64 m_Size; // rbx
  int32 m_Data; // r14d
  int v47; // eax
  CEntityIndex *v48; // rax
  CDOTA_Unit_Courier *v49; // r15
  __int64 v50; // r14
  int v51; // r15d
  int v52; // r12d
  CDOTA_UnitInventory *v53; // rax
  CDOTA_Item *v54; // rax
  const CEntityInstance *v55; // rbx
  CDOTA_Item **v56; // rdx
  int v57; // eax
  const char *v58; // rdi
  const char *v59; // rsi
  const char **m_Id; // rax
  const char *v61; // rax
  CEntityIndex v62; // eax
  __int64 v63; // r12
  int v64; // eax
  CEntityIndex *v65; // rax
  CDOTA_UnitInventory *v66; // rax
  __int64 v67; // r12
  int v68; // eax
  CDOTA_Item **v69; // rax
  CDOTA_Bot *thisa; // [rsp+28h] [rbp-108h]
  char thisb; // [rsp+28h] [rbp-108h]
  int32 v72; // [rsp+30h] [rbp-100h]
  int v73; // [rsp+34h] [rbp-FCh]
  float v74; // [rsp+34h] [rbp-FCh]
  float fUpdateTimeb; // [rsp+38h] [rbp-F8h]
  float fUpdateTime; // [rsp+38h] [rbp-F8h]
  CDOTA_Unit_Courier *fUpdateTimea; // [rsp+38h] [rbp-F8h]
  CUtlVector<CDOTA_Item*,CUtlMemory<CDOTA_Item*,int> > itemsRequested; // [rsp+40h] [rbp-F0h] BYREF
  CUnitOrders newOrders; // [rsp+60h] [rbp-D0h] BYREF
  CUtlStringListFixedGrowable<8ul> itemsFromStash; // [rsp+A0h] [rbp-90h] BYREF
  unsigned __int64 v81; // [rsp+F8h] [rbp-38h]

  v1 = this;
  v81 = __readfsqword(0x28u);
  if ( this->m_CourierUsageTimer.m_timestamp.m_Value > 0.0
    && CountdownTimer::Now(&this->m_CourierUsageTimer) < this->m_CourierUsageTimer.m_timestamp.m_Value )
  {
    return;
  }
  if ( CDOTA_Bot::DoBotScriptCourierUsageThink(v1) )
    return;
  v2 = CEntityHandle::operator CEntityInstance *(&v1->m_hUnit);
  v3 = v2;
  if ( v2 == 0 || BYTE3(v2[7]._vptr_IHandleEntity) == 0 || (v2[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
    return;
  fUpdateTimeb = RandomFloat(0.2, 0.40000001);
  fUpdateTime = fUpdateTimeb * (*(*engine + 96LL))(engine);
  *&v4 = CountdownTimer::Now(&v1->m_CourierUsageTimer) + fUpdateTime;
  if ( *&v4 != v1->m_CourierUsageTimer.m_timestamp.m_Value )
  {
    v74 = *&v4;
    (*(v1->m_CourierUsageTimer._vptr_CountdownTimer + 2))(&v1->m_CourierUsageTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v4 = LODWORD(v74);
    v1->m_CourierUsageTimer.m_timestamp.m_Value = v74;
  }
  *&v7 = LODWORD(fUpdateTime);
  if ( fUpdateTime != v1->m_CourierUsageTimer.m_duration.m_Value )
  {
    (*(v1->m_CourierUsageTimer._vptr_CountdownTimer + 2))(
      &v1->m_CourierUsageTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v4,
      v5,
      v6,
      fUpdateTime);
    v1->m_CourierUsageTimer.m_duration.m_Value = fUpdateTime;
  }
  if ( (*(v3->_vptr_IHandleEntity + 408))(v3, v4, v5, v6, v7) == 0 || CDOTA_Bot::GetStashValue(v1, 1) == 0 )
    return;
  NumCouriersForTeam = CDOTA_PlayerResource::GetNumCouriersForTeam(g_pDOTAPlayerResource, v3->m_iTeamNum.m_Value);
  v73 = NumCouriersForTeam;
  if ( NumCouriersForTeam <= 0 )
  {
    fUpdateTimea = 0;
    goto LABEL_33;
  }
  v9 = 0;
  thisa = v1;
  fUpdateTimea = 0;
  while ( 1 )
  {
    NthCourierForTeam = CDOTA_PlayerResource::GetNthCourierForTeam(g_pDOTAPlayerResource, v9, v3->m_iTeamNum.m_Value);
    v11 = NthCourierForTeam;
    if ( NthCourierForTeam == 0 )
      goto LABEL_17;
    m_Value = NthCourierForTeam->m_nCourierState.m_Value;
    if ( m_Value != CourierState_t::COURIER_STATE_IDLE )
    {
      if ( m_Value == CourierState_t::COURIER_STATE_RETURNING_TO_BASE )
        goto LABEL_22;
      goto LABEL_17;
    }
    if ( CDOTA_BaseNPC::FindModifierByName(v11, "modifier_fountain_aura_buff", 0) != 0 )
      break;
    if ( (v11->m_nCourierState.m_Value & 0xFFFFFFFB) == 0 )
    {
LABEL_22:
      v13 = 0;
      while ( 1 )
      {
        Inventory = CDOTA_BaseNPC::GetInventory(v11);
        ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v13);
        v21 = ItemInSlot;
        if ( ItemInSlot != 0 )
        {
          v22 = ItemInSlot->m_hOwnerEntity.m_Value.m_Index >> 15;
          if ( v21->m_hOwnerEntity.m_Value.m_Index == -1 )
          {
            v14 = 0x7FFF;
            v15 = 0x7FFF;
          }
          else
          {
            v14 = v21->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
            v15 = v14;
          }
          v16 = (v22 << 15) | v14 & 0x7FFF;
          newOrders.m_nIssuerPlayerIndex = v16;
          if ( (v16 + 2) > 1 )
          {
            v17 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v15 >> 9];
            if ( v17 != 0 )
            {
              v18 = &v17[v15 & 0x1FF];
              if ( v18 != 0 && v16 == v18->m_EHandle.m_Index && v3 == v18->m_pInstance )
                break;
            }
          }
        }
        if ( ++v13 == 9 )
          goto LABEL_17;
      }
      fUpdateTimea = v11;
    }
LABEL_17:
    if ( ++v9 == NumCouriersForTeam )
    {
      v1 = thisa;
      goto LABEL_33;
    }
  }
  v49 = v11;
  v1 = thisa;
  fUpdateTimea = v49;
LABEL_33:
  if ( g_pGameRules != 0 && g_pGameRules[5].m_szQuestName[114] != 0 )
  {
    v23 = *&g_pGameRules[6].m_szQuestName[68];
    if ( v23 != 15 && v23 != 19 )
    {
      PlayerID = CDOTA_Bot::GetPlayerID(v1);
      fUpdateTimea = CDOTA_PlayerResource::GetCourier(g_pDOTAPlayerResource, PlayerID);
    }
  }
  if ( fUpdateTimea == 0 )
    return;
  for ( i = 0; i != 9; ++i )
  {
    v26 = CDOTA_BaseNPC::GetInventory(fUpdateTimea);
    v27 = CDOTA_UnitInventory::GetItemInSlot(v26, i);
    if ( v27 != 0 && (*(v3->_vptr_IHandleEntity + 414))(v3) == v27->m_iPlayerOwnerID.m_Value )
    {
      thisb = 1;
      goto LABEL_54;
    }
  }
  m_pTeamCommander = v1->m_pTeamCommander;
  if ( m_pTeamCommander->m_BotList.m_Size > 0 )
  {
    v29 = 0;
    v30 = 0;
    do
    {
      v31 = m_pTeamCommander->m_BotList.m_Memory.m_pMemory[v29];
      if ( v31 != 0 && v31->m_bHuman )
      {
        if ( CDOTA_Bot::GetStashValue(v31, 0) > 0 )
          return;
        m_pTeamCommander = v1->m_pTeamCommander;
      }
      ++v30;
      ++v29;
    }
    while ( v30 < m_pTeamCommander->m_BotList.m_Size );
  }
  for ( j = 0; j != 9; ++j )
  {
    v33 = CDOTA_BaseNPC::GetInventory(fUpdateTimea);
    if ( CDOTA_UnitInventory::GetItemInSlot(v33, j) != 0 )
      return;
  }
  thisb = 0;
LABEL_54:
  if ( v1->m_bHuman )
    m_CurrentLane = v1->m_CurrentLane;
  else
    m_CurrentLane = v1->m_AssignedLane;
  v35 = 600;
  if ( m_CurrentLane != DOTA_LANE::DOTA_LANE_MIDDLE )
    v35 = 50;
  if ( thisb != 0 )
  {
LABEL_68:
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    *&newOrders.m_nIssuerPlayerIndex = CDOTA_TeamCommander::GetBaseLocation(v1->m_pTeamCommander);
    if ( fsqrt(
           ((*&newOrders.m_nIssuerPlayerIndex - AbsOrigin->x) * (*&newOrders.m_nIssuerPlayerIndex - AbsOrigin->x))
         + ((*&newOrders.m_nOrderSequenceNumber - AbsOrigin->y) * (*&newOrders.m_nOrderSequenceNumber - AbsOrigin->y))) < 1000.0
      && (*(v1->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v1->m_pActiveBotMode) == 4 )
    {
      return;
    }
    itemsFromStash.m_Size = 0;
    CUtlMemoryFixedGrowable<char *,8ul,int>::CUtlMemoryFixedGrowable(&itemsFromStash.m_Memory, 0, 8);
    if ( !CDOTA_BaseNPC_Hero::CanFetchItemsFromStash(v3, &itemsFromStash) )
    {
      if ( thisb != 0 )
      {
LABEL_71:
        if ( v73 > 0 )
        {
          for ( k = 0; k != v73; ++k )
          {
            AbilityByName = CDOTA_BaseNPC::FindAbilityByName(fUpdateTimea, "courier_transfer_items", 0);
            if ( AbilityByName != 0 )
            {
              newOrders.m_nUnits.m_Size = 0;
              memset(&newOrders.m_nUnits.m_Memory, 0, 28);
              newOrders.m_nOrderSequenceNumber = 0;
              newOrders.m_nIssuerPlayerIndex = -1;
              newOrders.m_vPosition = vec3_origin;
              newOrders.m_bQueue = 0;
              newOrders.m_nIssuerPlayerIndex = (*(v3->_vptr_IHandleEntity + 414))(v3);
              v44.m_Data = CEntityInstance::GetEntityIndex(fUpdateTimea).m_Data;
              m_Size = newOrders.m_nUnits.m_Size;
              m_Data = v44.m_Data;
              v47 = newOrders.m_nUnits.m_Size;
              if ( newOrders.m_nUnits.m_Size == newOrders.m_nUnits.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
                v47 = newOrders.m_nUnits.m_Size;
              }
              newOrders.m_nUnits.m_Size = v47 + 1;
              v48 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
              if ( v48 != 0 )
                v48->m_Data = m_Data;
              newOrders.m_nOrderType = 8;
              newOrders.m_nAbilityIndex = CEntityInstance::GetEntityIndex(AbilityByName);
              newOrders.m_bQueue = 1;
              DOTA_ExecuteOrders(&newOrders, 1, 0, 0);
              newOrders.m_nUnits.m_Size = 0;
              if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              {
                CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
                if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
              }
            }
            else
            {
              Warning("Unknown abilities on Courier?\n");
            }
          }
        }
      }
      CUtlStringList_Base<CUtlVectorFixedGrowable<char *,8ul>>::PurgeAndDeleteElements(&itemsFromStash);
      CUtlVectorBase<char *,CUtlMemoryFixedGrowable<char *,8ul,int>>::~CUtlVectorBase(&itemsFromStash);
      return;
    }
    itemsRequested.m_Size = 0;
    itemsRequested.m_Memory.m_pMemory = 0;
    itemsRequested.m_Memory.m_nAllocationCount = 0;
    itemsRequested.m_Memory.m_nGrowSize = 0;
    if ( itemsFromStash.m_Size <= 0 )
      goto LABEL_106;
    v50 = 0;
    v51 = 0;
LABEL_92:
    v52 = 9;
    while ( 1 )
    {
      v53 = CDOTA_BaseNPC::GetInventory(v3);
      v54 = CDOTA_UnitInventory::GetItemInSlot(v53, v52);
      v55 = v54;
      if ( v54 != 0 )
      {
        if ( itemsRequested.m_Size > 0 )
        {
          if ( v54 == *itemsRequested.m_Memory.m_pMemory )
            goto LABEL_104;
          v56 = itemsRequested.m_Memory.m_pMemory + 1;
          v57 = 0;
          while ( ++v57 != itemsRequested.m_Size )
          {
            if ( v55 == *v56++ )
            {
              if ( v57 >= 0 )
                goto LABEL_104;
              break;
            }
          }
        }
        v58 = "<NoAbilityName>";
        v59 = itemsFromStash.m_Memory.m_pMemory[v50];
        m_Id = v55[18].m_iszPrivateVScripts.u.m_Id;
        if ( m_Id != 0 )
        {
          v61 = *m_Id;
          if ( v61 != 0 )
            v58 = v61;
        }
        if ( v59 == v58 || strcmp(v58, v59) == 0 )
        {
          CUnitOrders::CUnitOrders(&newOrders);
          newOrders.m_nUnits.m_Size = 0;
          newOrders.m_nOrderType = 0;
          newOrders.m_nTargetIndex.m_Data = 0;
          newOrders.m_bQueue = 0;
          newOrders.m_nAbilityIndex.m_Data = 0;
          newOrders.m_vPosition = vec3_origin;
          newOrders.m_nIssuerPlayerIndex = (*(v3->_vptr_IHandleEntity + 414))(v3);
          v62.m_Data = CEntityInstance::GetEntityIndex(fUpdateTimea).m_Data;
          v63 = newOrders.m_nUnits.m_Size;
          v72 = v62.m_Data;
          v64 = newOrders.m_nUnits.m_Size;
          if ( newOrders.m_nUnits.m_Size == newOrders.m_nUnits.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
            v64 = newOrders.m_nUnits.m_Size;
          }
          newOrders.m_nUnits.m_Size = v64 + 1;
          v65 = &newOrders.m_nUnits.m_Memory.m_pMemory[v63];
          if ( v65 != 0 )
            v65->m_Data = v72;
          v66 = CDOTA_BaseNPC::GetInventory(fUpdateTimea);
          newOrders.m_nTargetIndex.m_Data = CDOTA_UnitInventory::FindEmptySpaceInInventory(v66, 1, 0);
          newOrders.m_nOrderType = 19;
          newOrders.m_nAbilityIndex = CEntityInstance::GetEntityIndex(v55);
          newOrders.m_bQueue = 1;
          DOTA_ExecuteOrders(&newOrders, 1, 0, 0);
          v67 = itemsRequested.m_Size;
          v68 = itemsRequested.m_Size;
          if ( itemsRequested.m_Size == itemsRequested.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CDOTA_Item *,int>::Grow(&itemsRequested.m_Memory, 1);
            v68 = itemsRequested.m_Size;
          }
          itemsRequested.m_Size = v68 + 1;
          v69 = &itemsRequested.m_Memory.m_pMemory[v67];
          if ( v69 != 0 )
            *v69 = v55;
          CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::~CUtlVectorBase(&newOrders.m_nUnits);
LABEL_105:
          ++v51;
          ++v50;
          if ( itemsFromStash.m_Size <= v51 )
          {
LABEL_106:
            CUtlVectorBase<CDOTA_Item *,CUtlMemory<CDOTA_Item *,int>>::~CUtlVectorBase(&itemsRequested);
            goto LABEL_71;
          }
          goto LABEL_92;
        }
      }
LABEL_104:
      if ( ++v52 == 16 )
        goto LABEL_105;
    }
  }
  StashValue = CDOTA_Bot::GetStashValue(v1, 0);
  if ( v35 <= StashValue )
  {
    v37 = v1->m_pTeamCommander;
    if ( v37->m_BotList.m_Size > 0 )
    {
      v38 = 0;
      v39 = 0;
      do
      {
        v40 = v37->m_BotList.m_Memory.m_pMemory[v38];
        if ( v40 != 0 && !v40->m_bHuman && v1 != v40 )
        {
          if ( CDOTA_Bot::GetStashValue(v40, 0) > (StashValue * 1.5) )
            return;
          v37 = v1->m_pTeamCommander;
        }
        ++v39;
        ++v38;
      }
      while ( v39 < v37->m_BotList.m_Size );
    }
    goto LABEL_68;
  }
}


// CDOTA_Bot::GetStashValue  (line 2463, @0x00000000027e9a90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTA_Bot::GetCourierValue
// callers: CDOTA_Bot::ConsiderCourierUsage, CDOTA_BotMode_Retreat::GetDesire, CDOTA_Bot_Script::GetStashValue
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot::GetStashValue(CDOTA_Bot *const this, bool bIncludeOnCouriers)
{
  int v3; // r13d
  int i; // ebx
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax

  v3 = 0;
  for ( i = 9; i != 15; ++i )
  {
    m_Index = this->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v8 = &v7[this->m_hUnit.m_Index & 0x1FF]) == 0
      || m_Index != v8->m_EHandle.m_Index
      || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, i);
    if ( ItemInSlot != 0 )
      v3 += (*(ItemInSlot->_vptr_IHandleEntity + 359))(ItemInSlot);
  }
  if ( bIncludeOnCouriers )
    v3 += CDOTA_Bot::GetCourierValue(this);
  return v3;
}


// CDOTA_Bot::GetCourierValue  (line 2485, @0x00000000027e9940, libserver.so)  // inlines: Get, GetInstance, GetPlayerOwnerID, GetTeamNumber, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_PlayerResource::GetNumCouriersForTeam, CDOTA_PlayerResource::GetNthCourierForTeam, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTA_Bot::GetPlayerID
// callers: CDOTA_Bot::GetStashValue, CDOTA_Bot_Script::GetCourierValue
int __fastcall CDOTA_Bot::GetCourierValue(CDOTA_Bot *const this)
{
  CEntityInstance *v2; // rax
  CEntityInstance *v3; // rax
  CDOTA_Unit_Courier *NthCourierForTeam; // r13
  int i; // ebx
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v8; // r15
  int m_Value; // r12d
  EHANDLE *p_m_hUnit; // [rsp+0h] [rbp-40h]
  int iCourierValue; // [rsp+8h] [rbp-38h]
  int nCourierIter; // [rsp+Ch] [rbp-34h]

  p_m_hUnit = &this->m_hUnit;
  nCourierIter = 0;
  iCourierValue = 0;
  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v2 == 0 )
    goto LABEL_13;
LABEL_2:
  if ( BYTE3(v2[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_13;
  while ( nCourierIter < CDOTA_PlayerResource::GetNumCouriersForTeam(
                           g_pDOTAPlayerResource,
                           HIBYTE(v2[7].m_CScriptComponent)) )
  {
    v3 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v3 == 0 || BYTE3(v3[7]._vptr_IHandleEntity) == 0 )
      v3 = 0;
    NthCourierForTeam = CDOTA_PlayerResource::GetNthCourierForTeam(
                          g_pDOTAPlayerResource,
                          nCourierIter,
                          HIBYTE(v3[7].m_CScriptComponent));
    if ( NthCourierForTeam != 0 )
    {
      for ( i = 0; i != 9; ++i )
      {
        while ( 1 )
        {
          Inventory = CDOTA_BaseNPC::GetInventory(NthCourierForTeam);
          ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, i);
          v8 = ItemInSlot;
          if ( ItemInSlot != 0 )
          {
            m_Value = ItemInSlot->m_iPlayerOwnerID.m_Value;
            if ( CDOTA_Bot::GetPlayerID(this) == m_Value )
              break;
          }
          if ( ++i == 9 )
            goto LABEL_12;
        }
        iCourierValue += (*(v8->_vptr_IHandleEntity + 359))(v8);
      }
    }
LABEL_12:
    ++nCourierIter;
    v2 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v2 != 0 )
      goto LABEL_2;
LABEL_13:
    v2 = 0;
  }
  return iCourierValue;
}


// CDOTA_Bot::GetIncomingCourier  (line 2510, @0x00000000027e77f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_PlayerResource::GetNumCouriersForTeam, CDOTA_PlayerResource::GetNthCourierForTeam, CDOTA_Unit_Courier::GetCourierStateEntity, CEntityHandle::operator CEntityInstance*
// callers: CDOTA_BotMode_Retreat::CalculateDesiredLocation, CDOTA_BotMode_Retreat::GetDesire, CDOTA_TeamCommander::OnDeath
// globals: CEntityHandle::gm_pEntityList
CDOTA_Unit_Courier *__fastcall CDOTA_Bot::GetIncomingCourier(CDOTA_Bot *const this)
{
  int v2; // ebx
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rax
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *v10; // rax
  CDOTA_Unit_Courier *NthCourierForTeam; // rax
  CDOTA_Unit_Courier *v12; // r15
  CBaseEntity *CourierStateEntity; // r14
  CEntityInstance *v14; // rax
  EHANDLE *p_m_hUnit; // [rsp+8h] [rbp-38h]

  v2 = 0;
  p_m_hUnit = &this->m_hUnit;
  while ( 1 )
  {
    m_Index = this->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = &v4[this->m_hUnit.m_Index & 0x1FF]) == 0
      || m_Index != v5->m_EHandle.m_Index
      || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    if ( v2 >= CDOTA_PlayerResource::GetNumCouriersForTeam(
                 g_pDOTAPlayerResource,
                 HIBYTE(m_pInstance[7].m_CScriptComponent)) )
      break;
    v7 = this->m_hUnit.m_Index;
    if ( v7 + 2 <= 1
      || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v9 = &v8[this->m_hUnit.m_Index & 0x1FF]) == 0
      || v7 != v9->m_EHandle.m_Index
      || (v10 = v9->m_pInstance, v9->m_pInstance == 0)
      || BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
    {
      v10 = 0;
    }
    NthCourierForTeam = CDOTA_PlayerResource::GetNthCourierForTeam(
                          g_pDOTAPlayerResource,
                          v2,
                          HIBYTE(v10[7].m_CScriptComponent));
    v12 = NthCourierForTeam;
    if ( NthCourierForTeam != 0
      && NthCourierForTeam->m_nCourierState.m_Value == CourierState_t::COURIER_STATE_DELIVERING_ITEMS )
    {
      CourierStateEntity = CDOTA_Unit_Courier::GetCourierStateEntity(NthCourierForTeam);
      v14 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      if ( v14 == 0 || BYTE3(v14[7]._vptr_IHandleEntity) == 0 )
        v14 = 0;
      if ( CourierStateEntity == v14 )
        return v12;
    }
    ++v2;
  }
  return 0;
}


// CDOTA_Bot::UseAbilities  (line 2526, @0x00000000027fdf80, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetUnit, HasElement, InState, IndexToIdentity, IsBotDisabled, IsElapsed, IsFullyCastable, IsInvisible, IsSilenced, IsToggle, IsTrained, IsValid, LookupEntity, Set, SetForceAbility, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CountdownTimer::Now, CDOTA_Bot::DoBotScriptAbilityUsageThink, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTABaseAbility::ToggleAbility
// callers: CDOTA_Bot::Think, CDOTA_BotMode_Companion::UpdateSubMode, CDOTA_BotMode_TutorialBoss::UpdateSubMode
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot::UseAbilities(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // rsi
  CEntityIdentity *v4; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rdi
  CEntityInstance *v8; // rax
  char v9; // dl
  CEntityInstance *v10; // rcx
  CEntityInstance *v11; // rdx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v13; // cx
  CEntityInstance *v14; // rax
  CEntityInstance *v15; // rdx
  int v16; // r12d
  CDOTA_BaseNPC *v17; // rdi
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v19; // r15
  CDOTA_Bot_AbilityUsage *m_pBotUsage; // rdi
  int v21; // r14d
  CDOTABaseAbility *v22; // [rsp+8h] [rbp-58h]
  unsigned __int64 iBestDesire; // [rsp+10h] [rbp-50h]
  CHandle<CBaseEntity> src; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_AbilityMutedTimer.m_timestamp.m_Value <= 0.0
    || CountdownTimer::Now(&this->m_AbilityMutedTimer) >= this->m_AbilityMutedTimer.m_timestamp.m_Value )
  {
    m_Index = this->m_hUnit.m_Index;
    v3 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = this->m_hUnit.m_Index & 0x1FF, v3 = (8 * v5), (v6 = &v4[v5]) == 0)
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v3) != 0
      && !CDOTA_Bot::DoBotScriptAbilityUsageThink(this)
      && !CDOTA_Bot::IsUsingAbility(this)
      && !CDOTA_Bot::IsUsingItem(this) )
    {
      v8 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
      if ( v8 == 0 )
        goto LABEL_18;
      v9 = BYTE3(v8[7]._vptr_IHandleEntity);
      if ( v9 != 0 )
      {
        v10 = v8;
        if ( (v8[58]._vptr_IHandleEntity & 8) != 0 )
          return;
      }
      else
      {
        v10 = 0;
      }
      if ( (v10[58]._vptr_IHandleEntity & 0x20) != 0 )
        return;
      if ( v9 != 0 )
      {
        if ( (BYTE1(v8[58]._vptr_IHandleEntity) & 8) != 0 )
          return;
        v11 = v8;
      }
      else
      {
LABEL_18:
        v11 = 0;
      }
      if ( LOBYTE(v11[71].m_pEntity) == 0 && this->m_iDifficulty != 0 )
      {
        if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
        {
          m_pEntity = v8->m_pEntity;
          src.m_Index = -1;
          if ( m_pEntity != 0 )
          {
            v13 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
          }
        }
        else
        {
          src.m_Index = -1;
        }
        if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
               &this->m_pTeamCommander->m_hDisabledBots,
               &src) < 0 )
        {
          v14 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
          if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
            v15 = v14;
          else
            v15 = 0;
          v22 = 0;
          v16 = 0;
          iBestDesire = (v15[58]._vptr_IHandleEntity >> 7) & 0xFFFFFFFF00000002LL;
          while ( 1 )
          {
            if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
              v17 = v14;
            else
              v17 = 0;
            AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v17, v16);
            v19 = AbilityByIndex;
            if ( AbilityByIndex != 0
              && CDOTABaseAbility::GetEffectiveLevel(AbilityByIndex) >= 0
              && (*(v19->_vptr_IHandleEntity + 245))(v19) != 0
              && CDOTABaseAbility::IsOwnersManaEnough(v19)
              && CDOTABaseAbility::IsOwnersGoldEnough(v19, -1) )
            {
              m_pBotUsage = v19->m_pBotUsage;
              if ( m_pBotUsage != 0 )
              {
                v21 = (*(m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(m_pBotUsage);
                if ( v16 == this->m_nForceAbility )
                {
                  this->m_nForceAbility = -1;
                  v21 = 4;
                }
                if ( ((*(v19->_vptr_IHandleEntity + 251))(v19) & 0x200) != 0 )
                {
                  if ( (v21 != 0) != v19->m_bToggleState.m_Value )
                    CDOTABaseAbility::ToggleAbility(v19);
                }
                else if ( v21 > iBestDesire )
                {
                  LODWORD(iBestDesire) = v21;
                  v22 = v19;
                }
              }
            }
            if ( ++v16 == 24 )
              break;
            v14 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
          }
          if ( v22 != 0 )
            (*(v22->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 6))(v22->m_pBotUsage);
        }
      }
    }
  }
}


// CDOTA_Bot::IsUsingAbility  (line 2599, @0x00000000027e79b0, libserver.so)  // inlines: Element, Get, GetAbility, GetAction, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, ToDOTABaseNPC, ToDOTABotActionUseAbility, Top, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTA_BaseNPC::IsChanneling, CEntityHandle::operator CEntityInstance*, __dynamic_cast
// callers: CDOTA_Bot::UseAbilities, CDOTA_Bot::UseItems, CDOTA_BotMode_Assemble::Think, CDOTA_BotMode_AssembleWithHumans::Think, CDOTA_BotMode_Attack::Think, CDOTA_BotMode_DefendAlly::Think, CDOTA_BotMode_Companion::UpdateSubMode, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_SecretShop::Think, CDOTA_BotMode_Retreat::Think, CDOTA_BotMode_Roam::Think, CDOTA_BotMode_Item::Think (22 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::IsUsingAbility(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *CurrentActiveAbility; // r13
  int m_Size; // eax
  const CEntityHandle *v8; // rbx
  bool result; // al
  CDOTA_Bot_AbilityUsage *m_pBotUsage; // rdi
  CEntityInstance *v11; // rdi
  void *v12; // rax

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
  CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(m_pInstance);
  if ( CDOTA_BaseNPC::IsChanneling(m_pInstance)
    && CurrentActiveAbility != 0
    && (*(CurrentActiveAbility->_vptr_IHandleEntity + 223))(CurrentActiveAbility) == 0 )
  {
    m_pBotUsage = CurrentActiveAbility->m_pBotUsage;
    if ( m_pBotUsage != 0 )
      return (*(m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 3))(m_pBotUsage) ^ 1;
  }
  m_Size = this->m_ActionStack.m_Size;
  result = 0;
  if ( m_Size > 0 )
  {
    v8 = this->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
    if ( v8 != 0 && (*(*&v8->m_Index + 16LL))(v8) == 5 )
    {
      v11 = CEntityHandle::operator CEntityInstance *(v8 + 5);
      if ( v11 != 0 )
      {
        v12 = __dynamic_cast(v11, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
        if ( v12 != 0 && (*(*v12 + 1784LL))(v12) == 0 )
          return 1;
      }
    }
  }
  return result;
}


// CDOTA_Bot::IsUsingSpecificAbility  (line 2622, @0x00000000027e7b10, libserver.so)  // inlines: Element, Get, GetAbility, GetAction, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, ToDOTABotActionUseAbility, Top, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: __dynamic_cast
// callers: CDOTA_Bot_AbilityUsage_Tiny_Avalanche::GetCurrentUsageDesire
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::IsUsingSpecificAbility(CDOTA_Bot *const this, CDOTABaseAbility *pAbility)
{
  int m_Size; // eax
  CDOTA_BotAction *v3; // rbx
  int v6; // esi
  CDOTABaseAbility *v7; // rax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  m_Size = this->m_ActionStack.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v3 = this->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
  if ( v3 == 0 || (*(v3->_vptr_CDOTA_BotAction + 2))(v3) != 5 )
    return 0;
  v6 = *(&v3->m_iActionFrame + 1);
  v7 = 0;
  if ( (v6 + 2) > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*(&v3->m_iActionFrame + 2) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[*(&v3->m_iActionFrame + 1) & 0x1FF];
      if ( v9 != 0 && v6 == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
        v7 = __dynamic_cast(v9->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
    }
  }
  return pAbility == v7;
}


// CDOTA_Bot::IsWillingToSpendMana  (line 2635, @0x00000000027e1770, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetMana, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::IsWillingToSpendMana(CDOTA_Bot *const this, int iMana)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  bool result; // al
  CEntityInstance *m_pInstance; // rcx
  char v7; // dl
  float v8; // xmm0_4
  CEntityInstance *v9; // rsi

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0.0 > 400.0;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 0.0 > 400.0;
  v4 = &v3[this->m_hUnit.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 0.0 > 400.0;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 0.0 > 400.0;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    return 0.0 > 400.0;
  v7 = BYTE3(m_pInstance[7]._vptr_IHandleEntity);
  if ( v7 != 0 )
  {
    v8 = *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id;
    v9 = m_pInstance;
  }
  else
  {
    v8 = 0.0;
    v9 = 0;
  }
  result = 1;
  if ( v8 < *&v9[44].m_worldGroupId.m_nHashCode )
  {
    if ( v7 != 0 )
      return *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id > 400.0;
    else
      return 0.0 > 400.0;
  }
  return result;
}


// CDOTA_Bot::OnItemEquip  (line 2650, @0x00000000027f4db0, libserver.so)  // inlines: SetBotUsage
// calls: CreateAbilityUsage
void __fastcall CDOTA_Bot::OnItemEquip(CDOTA_Bot *const this, CDOTA_Item *pItem, bool bEquip)
{
  CDOTA_Bot_AbilityUsage *m_pBotUsage; // rdi

  if ( bEquip )
  {
    pItem->m_pBotUsage = CreateAbilityUsage(pItem, this);
  }
  else
  {
    m_pBotUsage = pItem->m_pBotUsage;
    if ( m_pBotUsage != 0 )
      (*(m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 1))(m_pBotUsage);
    pItem->m_pBotUsage = 0;
  }
}


// CDOTA_Bot::OnAbilityCreated  (line 2666, @0x00000000027f4e10, libserver.so)  // inlines: SetBotUsage
// calls: CreateAbilityUsage
void __fastcall CDOTA_Bot::OnAbilityCreated(CDOTA_Bot *const this, CDOTABaseAbility *pAbility)
{
  pAbility->m_pBotUsage = CreateAbilityUsage(pAbility, this);
}


// CDOTA_Bot::UseItems  (line 2674, @0x00000000027fe340, libserver.so)  // inlines: CEntityHandle, CHandle, FStrEq, Get, GetAbilityName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetMana, GetSerialNumber, GetUnit, HasElement, InState, IndexToIdentity, IsBotDisabled, IsElapsed, IsInvisible, IsValid, LookupEntity, Set, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: CountdownTimer::Now, CDOTA_Bot::DoBotScriptItemUsageThink, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot
// callers: CDOTA_Bot::Think, CDOTA_BotMode_Companion::UpdateSubMode, CDOTA_BotMode_TutorialBoss::UpdateSubMode
// strings: "item_courier"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot::UseItems(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CEntityInstance *m_pInstance; // rdi
  CEntityInstance *v6; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int16 v8; // si
  CEntityInstance *v9; // rax
  int v10; // ebx
  __int64 v11; // r13
  CDOTA_BaseNPC *v12; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v15; // r14
  CEntityInstance *v16; // rax
  CDOTA_Bot_AbilityUsage *m_pBotUsage; // rax
  const char **p_m_pszAbilityName; // rcx
  const char *v19; // rsi
  int v20; // eax
  CDOTA_Item *pBestItem; // [rsp+0h] [rbp-50h]
  float v22; // [rsp+Ch] [rbp-44h]
  CHandle<CBaseEntity> src; // [rsp+10h] [rbp-40h] BYREF

  if ( this->m_AbilityMutedTimer.m_timestamp.m_Value <= 0.0
    || CountdownTimer::Now(&this->m_AbilityMutedTimer) >= this->m_AbilityMutedTimer.m_timestamp.m_Value )
  {
    m_Index = this->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v4 = &v3[this->m_hUnit.m_Index & 0x1FF]) == 0
      || m_Index != v4->m_EHandle.m_Index
      || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0
      && !CDOTA_Bot::DoBotScriptItemUsageThink(this)
      && !CDOTA_Bot::IsUsingAbility(this)
      && !CDOTA_Bot::IsUsingItem(this) )
    {
      v6 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
      if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
      {
        m_pEntity = v6->m_pEntity;
        src.m_Index = -1;
        if ( m_pEntity != 0 )
        {
          v8 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
        }
      }
      else
      {
        src.m_Index = -1;
      }
      if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
             &this->m_pTeamCommander->m_hDisabledBots,
             &src) < 0 )
      {
        v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
        if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 && LOBYTE(v9[71].m_pEntity) == 0 )
        {
          pBestItem = 0;
          v10 = 0;
          v11 = (v9[58]._vptr_IHandleEntity >> 7) & 2;
          while ( 1 )
          {
            if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
              v12 = v9;
            else
              v12 = 0;
            Inventory = CDOTA_BaseNPC::GetInventory(v12);
            ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v10);
            v15 = ItemInSlot;
            if ( ItemInSlot != 0 && (*(ItemInSlot->_vptr_IHandleEntity + 245))(ItemInSlot) != 0 )
            {
              v16 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
              if ( v16 == 0 || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
                v16 = 0;
              v22 = *&v16[44].m_iszPrivateVScripts.u.m_Id;
              if ( v22 > (*(v15->_vptr_IHandleEntity + 273))(v15, 0xFFFFFFFFLL) )
              {
                m_pBotUsage = v15->m_pBotUsage;
                if ( m_pBotUsage != 0 )
                {
                  if ( this->m_iDifficulty != 0
                    || (p_m_pszAbilityName = &v15->m_pAbilityData->m_pszAbilityName) != 0
                    && (v19 = *p_m_pszAbilityName, *p_m_pszAbilityName != 0)
                    && (v19 == "item_courier" || strcmp(v19, "item_courier") == 0) )
                  {
                    v20 = (*(m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(v15->m_pBotUsage);
                    if ( v20 > v11 )
                    {
                      LODWORD(v11) = v20;
                      pBestItem = v15;
                    }
                  }
                }
              }
            }
            if ( ++v10 == 9 )
              break;
            v9 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
          }
          if ( pBestItem != 0 )
            (*(pBestItem->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 6))(pBestItem->m_pBotUsage);
        }
      }
    }
  }
}


// CDOTA_Bot::IsUsingItem  (line 2728, @0x00000000027e7be0, libserver.so)  // inlines: Element, Get, GetAbility, GetAction, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, ToDOTABaseNPC, ToDOTABotActionUseAbility, Top, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::IsChanneling, CDOTA_BaseNPC::GetCurrentActiveAbility, __dynamic_cast
// callers: CDOTA_Bot::UseAbilities, CDOTA_Bot::UseItems, CDOTA_BotMode_Assemble::Think, CDOTA_BotMode_AssembleWithHumans::Think, CDOTA_BotMode_Attack::Think, CDOTA_BotMode_DefendAlly::Think, CDOTA_BotMode_Companion::UpdateSubMode, CDOTA_BotMode_DefendTower::Think, CDOTA_BotMode_SecretShop::Think, CDOTA_BotMode_Retreat::Think, CDOTA_BotMode_Roam::Think, CDOTA_BotMode_Item::Think (22 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::IsUsingItem(CDOTA_Bot *const this)
{
  int m_Size; // eax
  CDOTA_BotAction *v3; // r12
  EHANDLE *p_m_hUnit; // rbx
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rdi
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rdi
  CDOTABaseAbility *CurrentActiveAbility; // rax
  int v11; // ecx
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  void *v14; // rax

  m_Size = this->m_ActionStack.m_Size;
  if ( m_Size > 0 )
  {
    v3 = this->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
    if ( v3 != 0 && (*(v3->_vptr_CDOTA_BotAction + 2))(v3) == 5 )
    {
      v11 = *(&v3->m_iActionFrame + 1);
      if ( (v11 + 2) > 1 )
      {
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*(&v3->m_iActionFrame + 2) >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[*(&v3->m_iActionFrame + 1) & 0x1FF];
          if ( v13 != 0 && v11 == v13->m_EHandle.m_Index && v13->m_pInstance != 0 )
          {
            v14 = __dynamic_cast(v13->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
            if ( v14 != 0 && (*(*v14 + 1784LL))(v14) != 0 )
              return 1;
          }
        }
      }
    }
  }
  p_m_hUnit = &this->m_hUnit;
  v5 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v5 == 0 || (v6 = v5, BYTE3(v5[7]._vptr_IHandleEntity) == 0) )
    v6 = 0;
  if ( CDOTA_BaseNPC::IsChanneling(v6)
    && ((v7 = CEntityHandle::operator CEntityInstance *(p_m_hUnit)) != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0
      ? (v8 = v7)
      : (v8 = 0),
        CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(v8),
        (*(CurrentActiveAbility->_vptr_IHandleEntity + 223))(CurrentActiveAbility) != 0) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}


// CDOTA_Bot::SwapWorstItemToBackpack  (line 2744, @0x00000000027e7d40, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CEntityHandle::operator CEntityInstance*, CDOTA_UnitInventory::SwapItems
// callers: CDOTA_BotMode_Item::Think
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot::SwapWorstItemToBackpack(CDOTA_Bot *const this)
{
  int v1; // r15d
  int v2; // r14d
  int i; // ebx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v11; // r12
  EHANDLE *p_m_hUnit; // r13
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // rdi
  CDOTA_UnitInventory *v15; // rax
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // rdi
  CDOTA_UnitInventory *v18; // rax

  v1 = 0;
  v2 = -1;
  for ( i = 0; i != 6; ++i )
  {
    m_Index = this->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v7 = &v6[this->m_hUnit.m_Index & 0x1FF]) == 0
      || m_Index != v7->m_EHandle.m_Index
      || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    Inventory = CDOTA_BaseNPC::GetInventory(m_pInstance);
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, i);
    v11 = ItemInSlot;
    if ( ItemInSlot == 0 || v2 == -1 )
    {
      v1 = 0;
      v2 = i;
      if ( ItemInSlot == 0 )
        continue;
LABEL_9:
      v2 = i;
      v1 = (*(v11->_vptr_IHandleEntity + 359))(v11);
      continue;
    }
    if ( (*(ItemInSlot->_vptr_IHandleEntity + 359))(ItemInSlot) < v1 )
      goto LABEL_9;
  }
  p_m_hUnit = &this->m_hUnit;
  while ( 1 )
  {
    v13 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
      v14 = v13;
    else
      v14 = 0;
    v15 = CDOTA_BaseNPC::GetInventory(v14);
    if ( CDOTA_UnitInventory::GetItemInSlot(v15, i) == 0 )
      break;
    if ( ++i == 9 )
      return;
  }
  v16 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
    v17 = v16;
  else
    v17 = 0;
  v18 = CDOTA_BaseNPC::GetInventory(v17);
  CDOTA_UnitInventory::SwapItems(v18, v2, i);
}


// CDOTA_Bot::OptimizeBackpackItems  (line 2775, @0x00000000027e7ed0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTA_UnitInventory::SwapItems
// callers: CDOTA_Bot::Think
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot::OptimizeBackpackItems(CDOTA_Bot *const this)
{
  int i; // r13d
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  int v7; // ebx
  int v8; // r15d
  int v9; // r14d
  uint32 m_Index; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_UnitInventory *v14; // rax
  CDOTA_Item *v15; // rax
  int v16; // eax
  CEntityInstance *v17; // rax
  CDOTA_BaseNPC *v18; // rdi
  CDOTA_UnitInventory *v19; // rax
  CDOTA_Item *pItem; // [rsp+0h] [rbp-40h]
  EHANDLE *p_m_hUnit; // [rsp+8h] [rbp-38h]

  p_m_hUnit = &this->m_hUnit;
LABEL_2:
  for ( i = 6; i != 9; ++i )
  {
    v3 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
      v4 = v3;
    else
      v4 = 0;
    Inventory = CDOTA_BaseNPC::GetInventory(v4);
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, i);
    if ( ItemInSlot != 0 )
    {
      v7 = 0;
      v8 = -1;
      v9 = (*(ItemInSlot->_vptr_IHandleEntity + 359))(ItemInSlot);
      while ( 1 )
      {
        m_Index = this->m_hUnit.m_Index;
        if ( m_Index + 2 <= 1
          || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
          || (v12 = &v11[this->m_hUnit.m_Index & 0x1FF]) == 0
          || m_Index != v12->m_EHandle.m_Index
          || (m_pInstance = v12->m_pInstance, v12->m_pInstance == 0)
          || !m_pInstance->m_bIsDOTANPC )
        {
          m_pInstance = 0;
        }
        v14 = CDOTA_BaseNPC::GetInventory(m_pInstance);
        v15 = CDOTA_UnitInventory::GetItemInSlot(v14, v7);
        if ( v15 == 0 )
          break;
        if ( v15->m_iInitialCharges.m_Value <= 0 )
        {
          pItem = v15;
          if ( (*(v15->_vptr_IHandleEntity + 363))(v15) != 0 )
          {
            v16 = (*(pItem->_vptr_IHandleEntity + 359))(pItem);
LABEL_20:
            if ( v16 < v9 )
            {
              v9 = v16;
              v8 = v7;
            }
          }
        }
        if ( ++v7 == 6 )
        {
          if ( v8 == -1 )
            goto LABEL_17;
          v17 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
          if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
            v18 = v17;
          else
            v18 = 0;
          v19 = CDOTA_BaseNPC::GetInventory(v18);
          CDOTA_UnitInventory::SwapItems(v19, i, v8);
          goto LABEL_2;
        }
      }
      v16 = 0;
      goto LABEL_20;
    }
LABEL_17:
    ;
  }
}


// UnitDistanceSort  (line 2828, @0x00000000027e2500, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList, s_vSortReferenceLocation
int __fastcall UnitDistanceSort(CDOTA_Bot *const *p1, CDOTA_Bot *const *p2)
{
  CDOTA_Bot *v2; // rbx
  uint32 m_Index; // eax
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  float y; // xmm1_4
  float v10; // xmm0_4
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  const CBaseEntity *v14; // rdi
  const Vector *v15; // rax
  float p1Dist; // [rsp+Ch] [rbp-14h]

  v2 = *p2;
  m_Index = (*p1)->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = (*p1)->m_hUnit.m_Index, (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F]) == 0)
    || (v6 = &v5[v4 & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  y = AbsOrigin->y;
  v10 = AbsOrigin->x - s_vSortReferenceLocation.x;
  v11 = v2->m_hUnit.m_Index;
  p1Dist = fsqrt((v10 * v10) + ((y - s_vSortReferenceLocation.y) * (y - s_vSortReferenceLocation.y)));
  if ( v11 + 2 <= 1
    || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v2->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v13 = &v12[v2->m_hUnit.m_Index & 0x1FF]) == 0
    || v11 != v13->m_EHandle.m_Index
    || (v14 = v13->m_pInstance, v13->m_pInstance == 0)
    || !v14->m_bIsDOTANPC )
  {
    v14 = 0;
  }
  v15 = CBaseEntity::GetAbsOrigin(v14);
  return 2
       * (fsqrt(
            ((v15->x - s_vSortReferenceLocation.x) * (v15->x - s_vSortReferenceLocation.x))
          + ((v15->y - s_vSortReferenceLocation.y) * (v15->y - s_vSortReferenceLocation.y))) <= p1Dist)
       - 1;
}


// CDOTA_Bot::FindNearbyTeammatesInMode  (line 2841, @0x0000000002801d70, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CDOTA_Bot*>, Element, FastSqrt, Get, GetBotByIndex, GetDistanceToEntity, GetEntityIdentity, GetEntryIndex, GetInstance, GetTarget, GetTeamNumber, GetUnit, GrowMemory, IndexToIdentity, IsConsideredHero, IsValid, Length, LookupEntity, RemoveAll, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator==, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::IsOpposingTeam, CBaseEntity::GetAbsOrigin, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::Sort, CUtlMemory<CDOTA_Bot*, int>::Grow
// callers: CDOTA_BotMode_Attack::GetDesire, CDOTA_BotMode_Attack::IsValidAttackTarget, CDOTA_BotMode_PushTower::Think, CDOTA_BotMode_Retreat::GetDesire, CDOTA_BotMode_Roam::GetRoamScore, CDOTA_Bot_AbilityUsage_EtherealBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_GhostScepter::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::GetBloodrageScore, CDOTA_Bot_AbilityUsage_DragonKnight_ElderDragonForm::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_DeathProphet_Exorcism::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Lina_LagunaBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Lion_FingerOfDeath::GetCurrentUsageDesire (17 total)
// globals: CEntityHandle::gm_pEntityList, UnitDistanceSort(CDOTA_Bot * const*,CDOTA_Bot * const*), s_vSortReferenceLocation
__int64 __fastcall CDOTA_Bot::FindNearbyTeammatesInMode(
        CDOTA_Bot *const this,
        DOTA_BOT_MODE mode,
        float fRange,
        CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > *pFriendList,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_TeamCommander *m_pTeamCommander; // rcx
  __int64 v8; // r15
  CDOTA_Bot *v9; // rsi
  uint32 m_Index; // eax
  unsigned __int16 v11; // di
  CEntityIdentity *v12; // rsi
  CEntityIdentity *v13; // rsi
  CEntityInstance *m_pInstance; // rbx
  CEntityInstance *v15; // rax
  CDOTA_Bot *v16; // r14
  CEntityInstance *v17; // rax
  const CBaseEntity *v18; // rdi
  __int64 m_Size; // rbx
  int v21; // eax
  CDOTA_Bot **v22; // rax
  const CBaseEntity *v23; // rax
  const Vector *v24; // rax
  float v25; // xmm0_4
  const Vector *AbsOrigin; // [rsp+8h] [rbp-78h]
  CUtlVectorBase<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> >::CAllocator *p_m_Memory; // [rsp+10h] [rbp-70h]
  unsigned int iCount; // [rsp+30h] [rbp-50h]
  EHANDLE *p_m_hUnit; // [rsp+38h] [rbp-48h]
  CEntityHandle v33; // [rsp+40h] [rbp-40h] BYREF

  if ( pFriendList != 0 )
    pFriendList->m_Size = 0;
  m_pTeamCommander = this->m_pTeamCommander;
  if ( m_pTeamCommander->m_BotList.m_Size <= 0 )
  {
    iCount = 0;
  }
  else
  {
    v8 = 0;
    iCount = 0;
    p_m_hUnit = &this->m_hUnit;
    p_m_Memory = &pFriendList->m_Memory;
    do
    {
      while ( 1 )
      {
        v9 = m_pTeamCommander->m_BotList.m_Memory.m_pMemory[v8];
        if ( v9 != 0 )
        {
          m_Index = v9->m_hUnit.m_Index;
          if ( m_Index + 2 > 1 )
          {
            v11 = v9->m_hUnit.m_Index;
            v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v11 >> 9) & 0x3F];
            if ( v12 != 0 )
            {
              v13 = &v12[v11 & 0x1FF];
              if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
              {
                m_pInstance = v13->m_pInstance;
                if ( v13->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                  break;
              }
            }
          }
        }
        if ( m_pTeamCommander->m_BotList.m_Size <= ++v8 )
          goto LABEL_21;
      }
      if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(v13->m_pInstance) != 0
        && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 3) != 0 )
      {
        v15 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
        if ( v15 == 0 || BYTE3(v15[7]._vptr_IHandleEntity) == 0 )
          v15 = 0;
        if ( !CDOTA_BaseNPC::IsOpposingTeam(m_pInstance, HIBYTE(v15[7].m_CScriptComponent)) )
        {
          v16 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
          if ( v16 != 0 && (*(v16->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v16->m_pActiveBotMode) == mode )
          {
            if ( fRange == -1.0
              || ((v23 = CEntityHandle::operator CEntityInstance *(p_m_hUnit)) == 0 || !v23->m_bIsDOTANPC
                ? (v25 = -1.0)
                : (AbsOrigin = CBaseEntity::GetAbsOrigin(v23),
                   v24 = CBaseEntity::GetAbsOrigin(m_pInstance),
                   v25 = fsqrt(
                           (((v24->x - AbsOrigin->x) * (v24->x - AbsOrigin->x))
                          + ((v24->y - AbsOrigin->y) * (v24->y - AbsOrigin->y)))
                         + ((v24->z - AbsOrigin->z) * (v24->z - AbsOrigin->z)))),
                  fRange > v25) )
            {
              if ( pTarget == 0
                || (v33.m_Index = v16->m_hTarget.m_Index, pTarget == CEntityHandle::operator CEntityInstance *(&v33)) )
              {
                ++iCount;
                if ( pFriendList != 0 )
                {
                  m_Size = pFriendList->m_Size;
                  v21 = pFriendList->m_Size;
                  if ( m_Size == pFriendList->m_Memory.m_nAllocationCount )
                  {
                    CUtlMemory<CDOTA_Bot *,int>::Grow(p_m_Memory, 1);
                    v21 = pFriendList->m_Size;
                  }
                  pFriendList->m_Size = v21 + 1;
                  v22 = &pFriendList->m_Memory.m_pMemory[m_Size];
                  if ( v22 != 0 )
                    *v22 = v16;
                }
              }
            }
          }
        }
      }
      m_pTeamCommander = this->m_pTeamCommander;
      ++v8;
    }
    while ( m_pTeamCommander->m_BotList.m_Size > v8 );
  }
LABEL_21:
  if ( pFriendList != 0 )
  {
    v17 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
    if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
      v18 = v17;
    else
      v18 = 0;
    s_vSortReferenceLocation = *CBaseEntity::GetAbsOrigin(v18);
    CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::Sort(pFriendList, UnitDistanceSort);
  }
  return iCount;
}


// CDOTA_Bot::FindNearbyEnemiesInMode  (line 2880, @0x00000000028008d0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CDOTA_Bot*>, Element, FastSqrt, Get, GetBotByIndex, GetDistanceToEntity, GetEntityIdentity, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetTarget, GetTeamNumber, GetUnit, GrowMemory, IndexToIdentity, IsConsideredHero, IsValid, Length, LookupEntity, RemoveAll, ToDOTABaseNPC, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator==, operator[]
// calls: CDOTA_TeamCommander::GetOpposingTeamCommander, CEntityHandle::operator CEntityInstance*, CBaseModelEntity::CanBeSeenByTeam, CBaseEntity::GetAbsOrigin, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::Sort, CUtlMemory<CDOTA_Bot*, int>::Grow
// callers: CDOTA_BotMode_DefendTower::GetDesire, CDOTA_Bot::GetGankingEstimatedDamage, CDOTA_BotMode_DefendAlly::GetDefendAllyScore, CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BotMode_Laning::GetDesire, CDOTA_BotMode_Roshan::GetDesire, CDOTA_BotMode_Farm::GetDesire, CDOTA_BotMode_Rune::GetRuneDesire, CDOTA_BotMode_Farm::GetFarmLaneScore, CDOTA_BotMode_Rune::GetDesire, CDOTA_BotMode_PushTower::Think, CDOTA_BotMode_Ward::GetDesire (35 total)
// globals: CEntityHandle::gm_pEntityList, UnitDistanceSort(CDOTA_Bot * const*,CDOTA_Bot * const*), s_vSortReferenceLocation
__int64 __fastcall CDOTA_Bot::FindNearbyEnemiesInMode(
        CDOTA_Bot *const this,
        DOTA_BOT_MODE mode,
        float fRange,
        CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > *pEnemyList,
        CDOTA_BaseNPC *pTarget)
{
  __int64 v7; // rbx
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v9; // rax
  CDOTA_Bot *v10; // rdx
  uint32 m_Index; // eax
  unsigned __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *m_pInstance; // r15
  CEntityInstance *v16; // rax
  CDOTA_Bot *v17; // r13
  __int64 m_Size; // r15
  int v19; // eax
  CDOTA_Bot **v20; // rax
  CEntityInstance *v21; // rax
  const CBaseEntity *v22; // rdi
  const CBaseEntity *v24; // rax
  const Vector *v25; // rax
  float v26; // xmm0_4
  const Vector *AbsOrigin; // [rsp+8h] [rbp-78h]
  CUtlVectorBase<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> >::CAllocator *p_m_Memory; // [rsp+10h] [rbp-70h]
  EHANDLE *p_m_hUnit; // [rsp+30h] [rbp-50h]
  unsigned int iCount; // [rsp+3Ch] [rbp-44h]
  CEntityHandle v34; // [rsp+40h] [rbp-40h] BYREF

  if ( pEnemyList != 0 )
    pEnemyList->m_Size = 0;
  v7 = 0;
  iCount = 0;
  p_m_hUnit = &this->m_hUnit;
  p_m_Memory = &pEnemyList->m_Memory;
  while ( v7 < CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pTeamCommander)->m_BotList.m_Size )
  {
    OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pTeamCommander);
    if ( v7 < OpposingTeamCommander->m_BotList.m_Size && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v7] != 0 )
    {
      v9 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pTeamCommander);
      v10 = 0;
      if ( v7 < v9->m_BotList.m_Size )
        v10 = v9->m_BotList.m_Memory.m_pMemory[v7];
      m_Index = v10->m_hUnit.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v12 = v10->m_hUnit.m_Index;
        v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v12 >> 9) & 0x3F];
        if ( v13 != 0 )
        {
          v14 = &v13[v12 & 0x1FF];
          if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
          {
            m_pInstance = v14->m_pInstance;
            if ( v14->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 3) != 0
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(v14->m_pInstance) != 0 )
            {
              v16 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
              if ( v16 == 0 || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
                v16 = 0;
              if ( CBaseModelEntity::CanBeSeenByTeam(m_pInstance, HIBYTE(v16[7].m_CScriptComponent)) )
              {
                v17 = *&m_pInstance[45].m_worldGroupId.m_nHashCode;
                if ( v17 != 0 && (*(v17->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v17->m_pActiveBotMode) == mode )
                {
                  if ( fRange == -1.0
                    || ((v24 = CEntityHandle::operator CEntityInstance *(p_m_hUnit)) == 0 || !v24->m_bIsDOTANPC
                      ? (v26 = -1.0)
                      : (AbsOrigin = CBaseEntity::GetAbsOrigin(v24),
                         v25 = CBaseEntity::GetAbsOrigin(m_pInstance),
                         v26 = fsqrt(
                                 (((v25->x - AbsOrigin->x) * (v25->x - AbsOrigin->x))
                                + ((v25->y - AbsOrigin->y) * (v25->y - AbsOrigin->y)))
                               + ((v25->z - AbsOrigin->z) * (v25->z - AbsOrigin->z)))),
                        fRange > v26) )
                  {
                    if ( pTarget == 0
                      || (v34.m_Index = v17->m_hTarget.m_Index,
                          pTarget == CEntityHandle::operator CEntityInstance *(&v34)) )
                    {
                      ++iCount;
                      if ( pEnemyList != 0 )
                      {
                        m_Size = pEnemyList->m_Size;
                        v19 = pEnemyList->m_Size;
                        if ( m_Size == pEnemyList->m_Memory.m_nAllocationCount )
                        {
                          CUtlMemory<CDOTA_Bot *,int>::Grow(p_m_Memory, 1);
                          v19 = pEnemyList->m_Size;
                        }
                        pEnemyList->m_Size = v19 + 1;
                        v20 = &pEnemyList->m_Memory.m_pMemory[m_Size];
                        if ( v20 != 0 )
                          *v20 = v17;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    ++v7;
  }
  if ( pEnemyList != 0 )
  {
    v21 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
    if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
      v22 = v21;
    else
      v22 = 0;
    s_vSortReferenceLocation = *CBaseEntity::GetAbsOrigin(v22);
    CUtlVectorBase<CDOTA_Bot *,CUtlMemory<CDOTA_Bot *,int>>::Sort(pEnemyList, UnitDistanceSort);
  }
  return iCount;
}


// CDOTA_Bot::GetFountainAvoidanceCost  (line 2919, @0x00000000027e80a0, libserver.so)
// callers: CDOTA_Bot_Pathing::FindTotalAvoidanceForPath
int __fastcall CDOTA_Bot::GetFountainAvoidanceCost(CDOTA_Bot *const this, int nTowerAvoidance)
{
  return 100 * nTowerAvoidance;
}


// CDOTA_Bot::GetInnerTowerAvoidanceCost  (line 2926, @0x00000000027e80b0, libserver.so)
// callers: CDOTA_Bot_Pathing::FindTotalAvoidanceForPath
int __fastcall CDOTA_Bot::GetInnerTowerAvoidanceCost(CDOTA_Bot *const this, int nTowerAvoidance)
{
  return 3 * nTowerAvoidance;
}


// CDOTA_Bot::GetTowerAvoidanceCost  (line 2933, @0x00000000027e80c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// callers: CDOTA_Bot::GetAvoidanceAmountForGrid, CDOTA_BotMode_Roam::GetRoamScore, CDOTA_Bot_Pathing::UpdateSearch, CDOTA_Bot_Pathing::FindTotalAvoidanceForPath, CDOTA_TeamCommander::BuildDebugString
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot::GetTowerAvoidanceCost(CDOTA_Bot *const this, float a2, float fTankRating)
{
  float v3; // xmm0_4
  float v4; // xmm2_4
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const CBaseEntity *m_pInstance; // rdi
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v12; // [rsp-4h] [rbp-Ch]

  v3 = (a2 - 0.2) / 0.80000001;
  if ( v3 < 0.0 )
  {
    v4 = 10.0;
  }
  else
  {
    v4 = 0.0;
    if ( v3 <= 1.0 )
      v4 = (-10.0 * v3) + 10.0;
  }
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v12 = v4;
  v9 = CBaseEntity::GetHealth(m_pInstance) / 2000.0;
  if ( v9 < 0.0 )
  {
    v10 = 30.0;
  }
  else
  {
    v10 = 5.0;
    if ( v9 <= 1.0 )
      v10 = (-25.0 * v9) + 30.0;
  }
  return ((v10 + v12) + 0.5);
}


// CDOTA_Bot::GetPhysicalEffectAvoidanceCost  (line 2942, @0x00000000027e8220, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// callers: CDOTA_Bot_Pathing::UpdateSearch, CDOTA_TeamCommander::BuildDebugString
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot::GetPhysicalEffectAvoidanceCost(CDOTA_Bot *const this, float a2, float fTankRating)
{
  float v3; // xmm0_4
  float v4; // xmm2_4
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const CBaseEntity *m_pInstance; // rdi
  int Health; // eax
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v13; // [rsp-4h] [rbp-Ch]

  v3 = (a2 - 0.2) / 0.80000001;
  if ( v3 < 0.0 )
  {
    v4 = 5.0;
  }
  else
  {
    v4 = 0.0;
    if ( v3 <= 1.0 )
      v4 = (-5.0 * v3) + 5.0;
  }
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v13 = v4;
  Health = CBaseEntity::GetHealth(m_pInstance);
  v10 = 0.0;
  v11 = Health / 1000.0;
  if ( v11 < 0.0 )
  {
    v10 = 10.0;
  }
  else if ( v11 <= 1.0 )
  {
    v10 = (v11 * -10.0) + 10.0;
  }
  return ((v10 + v13) + 0.5);
}


// CDOTA_Bot::GetMagicalEffectAvoidanceCost  (line 2951, @0x00000000027e8370, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTA_Bot_Pathing::UpdateSearch, CDOTA_TeamCommander::BuildDebugString
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot::GetMagicalEffectAvoidanceCost(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rdx
  int result; // eax

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hUnit.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && (m_pInstance = v3->m_pInstance) != 0
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    result = 0;
    if ( (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) != 0 )
      return result;
  }
  else
  {
    m_pInstance = 0;
  }
  result = 0;
  if ( LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 )
    return (m_pInstance[58]._vptr_IHandleEntity & 0x100) == 0 ? 0xF : 0;
  return result;
}


// CDOTA_Bot::GetCreepAvoidanceCost  (line 2961, @0x00000000027e8420, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// callers: CDOTA_Bot::GetAvoidanceAmountForGrid, CDOTA_Bot_Pathing::UpdateSearch, CDOTA_TeamCommander::BuildDebugString
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot::GetCreepAvoidanceCost(CDOTA_Bot *const this, float a2, float fTankRating)
{
  float v3; // xmm0_4
  float v4; // xmm2_4
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const CBaseEntity *m_pInstance; // rdi
  int Health; // eax
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v13; // [rsp-4h] [rbp-Ch]

  v3 = a2 / 0.75;
  if ( v3 < 0.0 )
  {
    v4 = 3.0;
  }
  else
  {
    v4 = 0.0;
    if ( v3 <= 1.0 )
      v4 = (-3.0 * v3) + 3.0;
  }
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v13 = v4;
  Health = CBaseEntity::GetHealth(m_pInstance);
  v10 = 0.0;
  v11 = Health / 300.0;
  if ( v11 < 0.0 )
  {
    v10 = 5.0;
  }
  else if ( v11 <= 1.0 )
  {
    v10 = (v11 * -5.0) + 5.0;
  }
  return ((v10 + v13) + 0.5);
}


// CDOTA_Bot::GetHeroAvoidanceCost  (line 2970, @0x00000000027e8570, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// callers: CDOTA_Bot::GetAvoidanceAmountForGrid, CDOTA_Bot_Pathing::UpdateSearch, CDOTA_TeamCommander::BuildDebugString
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot::GetHeroAvoidanceCost(CDOTA_Bot *const this, double a2, float fTankRating)
{
  int v4; // eax
  int v5; // xmm4_4
  float v6; // xmm3_4
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  const CBaseEntity *m_pInstance; // rdi
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v14; // [rsp+8h] [rbp-18h]
  float fMutiplier; // [rsp+Ch] [rbp-14h]
  float fMutipliera; // [rsp+Ch] [rbp-14h]

  fMutiplier = *&a2;
  v4 = (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode, a2, fTankRating);
  v5 = 1065353216;
  if ( v4 != 2 )
  {
    if ( fMutiplier >= 0.0 )
      goto LABEL_3;
LABEL_15:
    v6 = 5.0;
    goto LABEL_5;
  }
  v5 = 1051260355;
  if ( fMutiplier < 0.0 )
    goto LABEL_15;
LABEL_3:
  v6 = 0.0;
  if ( fMutiplier <= 1.0 )
    v6 = (-5.0 * fMutiplier) + 5.0;
LABEL_5:
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = &v8[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v9->m_EHandle.m_Index
    || (m_pInstance = v9->m_pInstance, v9->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v14 = v6;
  fMutipliera = *&v5;
  v11 = CBaseEntity::GetHealth(m_pInstance) / 1000.0;
  if ( v11 < 0.0 )
  {
    v12 = 10.0;
  }
  else
  {
    v12 = 4.0;
    if ( v11 <= 1.0 )
      v12 = (v11 * -6.0) + 10.0;
  }
  return (((v12 + v14) * fMutipliera) + 0.5);
}


// CDOTA_Bot::GetAvoidanceAmountForLocation  (line 2982, @0x00000000027e8880, libserver.so)
// calls: CDOTA_TeamCommander::GetGridFromLocation, CDOTA_Bot::GetTankRating, CDOTA_Bot::GetAvoidanceAmountForGrid
// callers: CDOTA_BotMode_DefendTower::CalculateDesiredLocation, CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BotMode_EvasiveManeuvers::CalculateDesiredLocation, CDOTA_BotMode_Farm::CalculateDesiredLocation, CDOTA_BotMode_Item::GetDesire, CDOTA_BotMode_Laning::CalculateDesiredLocation, CDOTA_BotMode_Farm::GetFarmLaneScore, CDOTA_BotMode_PushTower::Think, CDOTA_Bot_AbilityUsage_Clarity::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Flask::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_TravelBoots::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Earthshaker_Fissure::FindBestFissureLaningLocation (16 total)
int __fastcall CDOTA_Bot::GetAvoidanceAmountForLocation(
        CDOTA_Bot *const this,
        const Vector *const vLoc,
        bool bIgnoreCreeps)
{
  int v5; // r14d
  int v6; // r13d
  float TankRating; // xmm0_4
  int iGridX; // [rsp+8h] [rbp-28h] BYREF
  int iGridY[9]; // [rsp+Ch] [rbp-24h] BYREF

  CDOTA_TeamCommander::GetGridFromLocation(this->m_pTeamCommander, vLoc, &iGridX, iGridY);
  v5 = iGridY[0];
  v6 = iGridX;
  TankRating = CDOTA_Bot::GetTankRating(this);
  return CDOTA_Bot::GetAvoidanceAmountForGrid(this, TankRating, v6, v5, bIgnoreCreeps);
}


// CDOTA_Bot::GetAvoidanceAmountForGrid  (line 2993, @0x00000000027e8710, libserver.so)  // inlines: GetFountainAvoidanceCost, GetInnerTowerAvoidanceCost
// calls: CDOTA_TeamCommander::GetGridCountX, CDOTA_TeamCommander::GetGridCountY, CDOTA_Bot::GetTowerAvoidanceCost, CDOTA_TeamCommander::InFountainAvoidanceGrid, CDOTA_TeamCommander::InTowerAvoidanceGrid, CDOTA_TeamCommander::InInnerTowerAvoidanceGrid, CDOTA_Bot::GetHeroAvoidanceCost, CDOTA_TeamCommander::NumHeroAvoidanceGrid, CDOTA_Bot::GetCreepAvoidanceCost, CDOTA_TeamCommander::NumCreepAvoidanceGrid
// callers: CDOTA_Bot::GetAvoidanceAmountForLocation, CDOTA_Bot::FindAvoidLocation, CDOTA_BotAction_MoveTo::GeneratePathWaypoints, CDOTA_Bot_Pathing::IsPathClear, CDOTA_Bot_Pathing::GenerateClearPath, CDOTA_Bot_Pathing::FindTotalAvoidanceForPath, CDOTA_Bot_AbilityUsage_Tango::GetCurrentUsageDesire
__int64 __fastcall CDOTA_Bot::GetAvoidanceAmountForGrid(
        CDOTA_Bot *const this,
        float fTankRating,
        int iGridX,
        int iGridY,
        bool bIgnoreCreeps)
{
  float v10; // xmm1_4
  int v11; // r14d
  int v12; // r14d
  bool v13; // al
  float v14; // xmm0_4
  int v15; // r14d
  float v16; // xmm1_4
  int HeroAvoidanceCost; // r13d
  int CreepAvoidanceCost; // r13d
  int v19; // eax
  int nTowerAvoidance; // [rsp+8h] [rbp-38h]
  float nTowerAvoidancea; // [rsp+8h] [rbp-38h]

  if ( iGridX < 0
    || iGridX >= CDOTA_TeamCommander::GetGridCountX(this->m_pTeamCommander)
    || iGridY < 0
    || iGridY >= CDOTA_TeamCommander::GetGridCountY(this->m_pTeamCommander) )
  {
    return 0;
  }
  nTowerAvoidance = CDOTA_Bot::GetTowerAvoidanceCost(this, fTankRating, v10);
  v11 = CDOTA_TeamCommander::InFountainAvoidanceGrid(this->m_pTeamCommander, iGridX, iGridY) * 100 * nTowerAvoidance;
  v12 = CDOTA_TeamCommander::InTowerAvoidanceGrid(this->m_pTeamCommander, iGridX, iGridY) * 3 * nTowerAvoidance + v11;
  v13 = CDOTA_TeamCommander::InInnerTowerAvoidanceGrid(this->m_pTeamCommander, iGridX, iGridY);
  v14 = 0.0;
  v15 = nTowerAvoidance * v13 + v12;
  v16 = v15;
  if ( !bIgnoreCreeps )
  {
    CreepAvoidanceCost = CDOTA_Bot::GetCreepAvoidanceCost(this, fTankRating, v16);
    v19 = CDOTA_TeamCommander::NumCreepAvoidanceGrid(this->m_pTeamCommander, iGridX, iGridY);
    v16 = v15;
    v14 = (v19 * CreepAvoidanceCost);
  }
  nTowerAvoidancea = v16 + v14;
  HeroAvoidanceCost = CDOTA_Bot::GetHeroAvoidanceCost(this, COERCE_DOUBLE(LODWORD(fTankRating)), v16 + v14);
  return ((CDOTA_TeamCommander::NumHeroAvoidanceGrid(this->m_pTeamCommander, iGridX, iGridY) * HeroAvoidanceCost)
        + nTowerAvoidancea);
}


// CDOTA_Bot::FindAvoidLocation  (line 3009, @0x00000000027e88e0, libserver.so)  // inlines: Length2DSqr, VectorSubtract, operator-, operator=
// calls: CDOTA_TeamCommander::GetGridFromLocation, CDOTA_TeamCommander::GetGridSizeX, CDOTA_TeamCommander::GetGridSizeY, CDOTA_Bot::GetTankRating, CDOTA_TeamCommander::GetGridCountX, CDOTA_TeamCommander::GetGridCountY, CDOTA_TeamCommander::IsGridPassable, CDOTA_TeamCommander::GetLocationFromGrid, CDOTA_Bot::GetAvoidanceAmountForGrid
// callers: CDOTA_BotMode_Assemble::CalculateDesiredLocation
__int64 __fastcall CDOTA_Bot::FindAvoidLocation(
        CDOTA_Bot *const this,
        const Vector *const vLoc,
        float fRadius,
        int iMaxAvoidance,
        Vector *pLocation,
        int *pAvoidance)
{
  int v8; // ebx
  float TankRating; // xmm0_4
  int v10; // eax
  int v11; // r15d
  int v12; // edx
  int v13; // r14d
  float x; // xmm1_4
  float v16; // xmm1_4
  int AvoidanceAmountForGrid; // eax
  __int64 v18; // xmm0_8
  float fBestDistSqr; // [rsp+10h] [rbp-70h]
  int iBestX; // [rsp+14h] [rbp-6Ch]
  float fTankRating; // [rsp+18h] [rbp-68h]
  int iBestY; // [rsp+1Ch] [rbp-64h]
  float fBestDistSqr_0; // [rsp+20h] [rbp-60h]
  float fRadiusSqr; // [rsp+28h] [rbp-58h]
  int iWidth; // [rsp+2Ch] [rbp-54h]
  int iGridX; // [rsp+38h] [rbp-48h] BYREF
  int iGridY; // [rsp+3Ch] [rbp-44h] BYREF
  Vector vGridLoc; // [rsp+40h] [rbp-40h]
  Vector LocationFromGrid; // 0:kr00_12.12

  CDOTA_TeamCommander::GetGridFromLocation(this->m_pTeamCommander, vLoc, &iGridX, &iGridY);
  fRadiusSqr = fRadius * fRadius;
  iWidth = ((fRadius / CDOTA_TeamCommander::GetGridSizeX(this->m_pTeamCommander)) + 0.5);
  v8 = ((fRadius / CDOTA_TeamCommander::GetGridSizeY(this->m_pTeamCommander)) + 0.5);
  TankRating = CDOTA_Bot::GetTankRating(this);
  v10 = iGridX;
  fTankRating = TankRating;
  v11 = iGridX - iWidth;
  if ( iGridX - iWidth > iWidth + iGridX )
    return 0;
  v12 = iGridY;
  iBestY = -1;
  fBestDistSqr = 0.0;
  iBestX = -1;
  do
  {
    v13 = v12 - v8;
    if ( v12 - v8 > v8 + v12 )
      goto LABEL_12;
    do
    {
      if ( v11 < 0 )
        goto LABEL_10;
      if ( CDOTA_TeamCommander::GetGridCountX(this->m_pTeamCommander) <= v11 )
        goto LABEL_9;
      if ( v13 < 0 )
        goto LABEL_9;
      if ( CDOTA_TeamCommander::GetGridCountY(this->m_pTeamCommander) <= v13 )
        goto LABEL_9;
      if ( !CDOTA_TeamCommander::IsGridPassable(this->m_pTeamCommander, v11, v13) )
        goto LABEL_9;
      v18 = *&CDOTA_TeamCommander::GetLocationFromGrid(this->m_pTeamCommander, v11, v13).x;
      x = vLoc->x;
      *&vGridLoc.x = v18;
      v16 = ((x - vGridLoc.x) * (x - vGridLoc.x)) + ((vLoc->y - *(&v18 + 1)) * (vLoc->y - *(&v18 + 1)));
      if ( fRadiusSqr <= v16 )
        goto LABEL_9;
      fBestDistSqr_0 = v16;
      AvoidanceAmountForGrid = CDOTA_Bot::GetAvoidanceAmountForGrid(this, fTankRating, v11, v13, 0);
      if ( AvoidanceAmountForGrid < iMaxAvoidance )
      {
        fBestDistSqr = fBestDistSqr_0;
        iMaxAvoidance = AvoidanceAmountForGrid;
        iBestY = v13;
        iBestX = v11;
LABEL_9:
        v12 = iGridY;
        goto LABEL_10;
      }
      v12 = iGridY;
      if ( iMaxAvoidance == AvoidanceAmountForGrid && fBestDistSqr > fBestDistSqr_0 )
      {
        fBestDistSqr = fBestDistSqr_0;
        iBestY = v13;
        iBestX = v11;
      }
LABEL_10:
      ++v13;
    }
    while ( v8 + v12 >= v13 );
    v10 = iGridX;
LABEL_12:
    ++v11;
  }
  while ( iWidth + v10 >= v11 );
  if ( iBestY == -1 && iBestX == -1 )
    return 0;
  if ( pLocation != 0 )
  {
    LocationFromGrid = CDOTA_TeamCommander::GetLocationFromGrid(this->m_pTeamCommander, iBestX, iBestY);
    *&vGridLoc.x = *&LocationFromGrid.x;
    pLocation->z = LocationFromGrid.z;
    pLocation->x = LocationFromGrid.x;
    pLocation->y = vGridLoc.y;
  }
  if ( pAvoidance != 0 )
    *pAvoidance = iMaxAvoidance;
  return 1;
}


// CDOTA_Bot::UpdateAttackers  (line 3079, @0x000000000280b0a0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, CVProfScope, Get, GetAggroTarget, GetAttackTarget, GetEntityIdentity, GetEntryIndex, GetInstance, GetNearbyCreeps, GetNearbyHeroes, GetNearbyTowers, GetNearbyUnits, GetTeamNumber, GetUnit, IndexToIdentity, IsEnabled, IsValid, LookupEntity, Purge, ToDOTABaseNPC, end, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat, ~CVProfScope
// calls: CDOTA_Bot::UpdateNearbyUnits, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::AddToTail, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CVProfile::ExitScope, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CVProfile::EnterScope, __stack_chk_fail, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Bot::Think
// strings: "CDOTA_Bot::UpdateAttackers"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot::UpdateAttackers(CDOTA_Bot *const this)
{
  int m_enabled; // edx
  CDOTA_Bot::SortedUnit_t *m_pMemory; // rbx
  CDOTA_Bot::SortedUnit_t *v4; // r14
  CEntityInstance *v5; // rax
  char m_CScriptComponent_high; // r15
  CEntityInstance *v7; // rax
  CHandle<CBaseEntity> *v8; // rax
  CHandle<CBaseEntity> *v9; // r15
  CHandle<CBaseEntity> *v10; // rbx
  uint32 m_Index; // ecx
  __int16 v12; // si
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdi
  CEntityInstance *v16; // rax
  CEntityInstance *v17; // r14
  CEntityInstance *v18; // rax
  CDOTA_Bot::SortedUnit_t *v19; // rbx
  CDOTA_Bot::SortedUnit_t *v20; // r14
  CEntityInstance *v21; // rax
  char v22; // r15
  CEntityInstance *v23; // rax
  CHandle<CBaseEntity> *v24; // rdi
  CHandle<CBaseEntity> *v25; // rbx
  CHandle<CBaseEntity> *v26; // r14
  CEntityInstance *v27; // rax
  CEntityInstance *v28; // rax
  CEntityInstance *v29; // r15
  CEntityInstance *v30; // rax
  CDOTA_Bot::SortedUnit_t *v31; // rbx
  CDOTA_Bot::SortedUnit_t *v32; // r14
  CEntityInstance *v33; // rax
  char v34; // r15
  CEntityInstance *v35; // rax
  CHandle<CBaseEntity> *v36; // rdi
  CHandle<CBaseEntity> *v37; // r15
  CHandle<CBaseEntity> *v38; // rbx
  CEntityInstance *v39; // rax
  CEntityInstance *v40; // r14
  CEntityInstance *v41; // rax
  bool VProf_3081; // [rsp+Fh] [rbp-91h]
  int v43; // [rsp+18h] [rbp-88h]
  CEntityHandle *v44; // [rsp+18h] [rbp-88h]
  int v45; // [rsp+18h] [rbp-88h]
  int v46; // [rsp+18h] [rbp-88h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,10ul> hUnits; // [rsp+20h] [rbp-80h] BYREF
  unsigned __int64 v48; // [rsp+68h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_3081 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_Bot::UpdateAttackers", 0, "Bots", 0, 4);
  hUnits.m_Size = 0;
  this->m_nNearbyEnemyCreeps = 0;
  this->m_nAttackingCreeps = 0;
  this->m_nAttackingHeroes = 0;
  this->m_nAttackingTowers = 0;
  hUnits.m_Memory.m_nAllocationCount = 10;
  hUnits.m_Memory.m_nGrowSize = 0x80000000;
  hUnits.m_Memory.m_pMemory = &hUnits.m_FixedMemory;
  CDOTA_Bot::UpdateNearbyUnits(this);
  m_pMemory = this->m_NearbyCreeps.m_Memory.m_pMemory;
  v43 = 0;
  v4 = &m_pMemory[this->m_NearbyCreeps.m_Size];
  if ( m_pMemory != v4 )
  {
    do
    {
      v5 = CEntityHandle::operator CEntityInstance *(m_pMemory);
      if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
      {
        m_CScriptComponent_high = HIBYTE(v5[7].m_CScriptComponent);
        v7 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
        if ( v7 == 0 || BYTE3(v7[7]._vptr_IHandleEntity) == 0 )
          v7 = 0;
        if ( m_CScriptComponent_high != HIBYTE(v7[7].m_CScriptComponent) )
        {
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(&hUnits, m_pMemory);
          ++v43;
        }
      }
      ++m_pMemory;
    }
    while ( v4 != m_pMemory );
    if ( v43 != 0 && hUnits.m_Size > 0 )
    {
      v44 = CEntityHandle::gm_pEntityList;
      v8 = hUnits.m_Memory.m_pMemory;
      v9 = hUnits.m_Memory.m_pMemory + 1;
      v10 = &hUnits.m_Memory.m_pMemory[hUnits.m_Size - 1 + 1];
      while ( 1 )
      {
        m_Index = v8->m_Index;
        if ( v8->m_Index + 2 <= 1 )
          goto LABEL_14;
        v12 = v8->m_Index;
        v13 = *&v44[2 * ((LOWORD(v8->m_Index) >> 9) & 0x3F) + 2].m_Index;
        if ( v13 == 0 )
          goto LABEL_14;
        v14 = (120LL * (v12 & 0x1FF) + v13);
        if ( v14 == 0 )
          goto LABEL_14;
        if ( m_Index != *(v14 + 4) )
          goto LABEL_14;
        v15 = *v14;
        if ( *v14 == 0 || *(v15 + 339) == 0 || (*(v15 + 2089) & 4) == 0 )
          goto LABEL_14;
        v16 = CEntityHandle::operator CEntityInstance *((v15 + 2864));
        if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
          v17 = v16;
        else
          v17 = 0;
        v18 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
        if ( v18 == 0 || BYTE3(v18[7]._vptr_IHandleEntity) == 0 )
          v18 = 0;
        if ( v17 == v18 )
        {
          ++this->m_nAttackingCreeps;
          v8 = v9;
          if ( v9 == v10 )
            break;
        }
        else
        {
LABEL_14:
          v8 = v9;
          if ( v9 == v10 )
            break;
        }
        ++v9;
      }
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hUnits);
  CDOTA_Bot::UpdateNearbyUnits(this);
  v19 = this->m_NearbyTowers.m_Memory.m_pMemory;
  v45 = 0;
  v20 = &v19[this->m_NearbyTowers.m_Size];
  if ( v19 != v20 )
  {
    do
    {
      v21 = CEntityHandle::operator CEntityInstance *(v19);
      if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
      {
        v22 = HIBYTE(v21[7].m_CScriptComponent);
        v23 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
        if ( v23 == 0 || BYTE3(v23[7]._vptr_IHandleEntity) == 0 )
          v23 = 0;
        if ( v22 != HIBYTE(v23[7].m_CScriptComponent) )
        {
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(&hUnits, v19);
          ++v45;
        }
      }
      ++v19;
    }
    while ( v20 != v19 );
    if ( v45 != 0 && hUnits.m_Size > 0 )
    {
      v24 = hUnits.m_Memory.m_pMemory;
      v25 = hUnits.m_Memory.m_pMemory + 1;
      v26 = &hUnits.m_Memory.m_pMemory[hUnits.m_Size - 1 + 1];
      while ( 1 )
      {
        v27 = CEntityHandle::operator CEntityInstance *(v24);
        if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
        {
          v28 = CEntityHandle::operator CEntityInstance *(&v27[59].m_worldGroupId);
          if ( v28 == 0 || (v29 = v28, BYTE3(v28[7]._vptr_IHandleEntity) == 0) )
            v29 = 0;
          v30 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
          if ( v30 != 0 && BYTE3(v30[7]._vptr_IHandleEntity) != 0 )
          {
            if ( v29 != v30 )
              goto LABEL_49;
          }
          else if ( v29 != 0 )
          {
            goto LABEL_49;
          }
          ++this->m_nAttackingTowers;
        }
LABEL_49:
        v24 = v25;
        if ( v25 == v26 )
          break;
        ++v25;
      }
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hUnits);
  CDOTA_Bot::UpdateNearbyUnits(this);
  v31 = this->m_NearbyHeroes.m_Memory.m_pMemory;
  v46 = 0;
  v32 = &v31[this->m_NearbyHeroes.m_Size];
  if ( v31 != v32 )
  {
    do
    {
      v33 = CEntityHandle::operator CEntityInstance *(v31);
      if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
      {
        v34 = HIBYTE(v33[7].m_CScriptComponent);
        v35 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
        if ( v35 == 0 || BYTE3(v35[7]._vptr_IHandleEntity) == 0 )
          v35 = 0;
        if ( v34 != HIBYTE(v35[7].m_CScriptComponent) )
        {
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(&hUnits, v31);
          ++v46;
        }
      }
      ++v31;
    }
    while ( v32 != v31 );
    if ( v46 != 0 && hUnits.m_Size > 0 )
    {
      v36 = hUnits.m_Memory.m_pMemory;
      v37 = hUnits.m_Memory.m_pMemory + 1;
      v38 = &hUnits.m_Memory.m_pMemory[hUnits.m_Size - 1 + 1];
      while ( 1 )
      {
        v39 = CEntityHandle::operator CEntityInstance *(v36);
        if ( v39 != 0 && BYTE3(v39[7]._vptr_IHandleEntity) != 0 )
        {
          v40 = CEntityHandle::operator CEntityInstance *(&v39[59].m_iszPrivateVScripts.u.m_pAsString + 1);
          v41 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
          if ( v41 != 0 && BYTE3(v41[7]._vptr_IHandleEntity) != 0 )
          {
            if ( v40 != v41 )
              goto LABEL_69;
          }
          else if ( v40 != 0 )
          {
            goto LABEL_69;
          }
          ++this->m_nAttackingHeroes;
        }
LABEL_69:
        v36 = v37;
        if ( v37 == v38 )
          break;
        ++v37;
      }
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hUnits);
  if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
    if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
  }
  if ( VProf_3081 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// SortByDistance  (line 3131, @0x00000000027e0100, libserver.so)
int __fastcall SortByDistance(const CDOTA_Bot::SortedUnit_t *pOne, const CDOTA_Bot::SortedUnit_t *pTwo)
{
  return pOne->fDistSqr > pTwo->fDistSqr;
}


// CDOTA_Bot::UpdateNearbyUnits  (line 3136, @0x000000000280a2c0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMap, CUtlMemory, CUtlRBTree, CVProfScope, CopyConstruct<CDOTA_Bot::SortedUnit_t>, CopyConstruct<int>, Element, EnsureCapacity, FindInsertionPosition, FirstInorder, Get, GetBinaryObject, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, GrowMemory, IndexToIdentity, Insert, InsertAt, IsEnabled, LeftChild, Length2DSqr, LookupEntity, NextInorder, RemoveAll, ResetDbgInfo, RightChild, SortedUnit_t, ToDOTABaseNPC, VectorSubtract, end, memcpy, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CVProfScope
// calls: CDOTA_TeamCommander::GetUnitList, CUtlVectorBase<CDOTA_Bot::SortedUnit_t, CUtlMemory<CDOTA_Bot::SortedUnit_t, int> >::RemoveAll, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CUtlVectorBase<CDOTA_Bot::SortedUnit_t, CUtlMemory<CDOTA_Bot::SortedUnit_t, int> >::Sort, __cxa_guard_acquire, CUtlRBTree<CUtlMap<float, int, int, CDefLess<float> >::Node_t, int, CUtlMap<float, int, int, CDefLess<float> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<float, int, int, CDefLess<float> >::Node_t, int>, int> >::RemoveAll, CUtlRBTree<CUtlMap<float, int, int, CDefLess<float> >::Node_t, int, CUtlMap<float, int, int, CDefLess<float> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<float, int, int, CDefLess<float> >::Node_t, int>, int> >::NextInorder, CUtlMemory<int, int>::Grow, CVProfile::ExitScope, CUtlRBTree<CUtlMap<float, int, int, CDefLess<float> >::Node_t, int, CUtlMap<float, int, int, CDefLess<float> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<float, int, int, CDefLess<float> >::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<float, int, int, CDefLess<float> >::Node_t, int, CUtlMap<float, int, int, CDefLess<float> >::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<float, int, int, CDefLess<float> >::Node_t, int>, int> >::LinkToParent (18 total)
// callers: CDOTA_Bot::GetNearbyUnits, CDOTA_Bot::GetNearbyTrees, CDOTA_Bot::UpdateAttackers, CDOTA_BotMode_Companion::UpdateSubMode, CDOTA_BotMode_Attack::GetAttackScore, CDOTA_BotMode_DefendTower::Think
// strings: "CDOTA_Bot::UpdateNearbyUnits"
// globals: CEntityHandle::gm_pEntityList, SortByDistance(CDOTA_Bot::SortedUnit_t const*,CDOTA_Bot::SortedUnit_t const*), `guard variable for'CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees, CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees, __dso_handle, CUtlMap<float,int,int,CDefLess<float>>::~CUtlMap()
void __fastcall CDOTA_Bot::UpdateNearbyUnits(CDOTA_Bot *const this)
{
  int framecount; // eax
  int m_enabled; // r12d
  CDOTA_TeamCommander *m_pTeamCommander; // rdi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *UnitList; // rbx
  CEntityInstance *v6; // rax
  const CBaseEntity *v7; // rdi
  const Vector *AbsOrigin; // rax
  uint32 *p_m_Index; // r12
  uint32 *v10; // r15
  uint32 m_Index; // ebx
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  const CBaseEntity *m_pInstance; // r13
  const Vector *v15; // rax
  uint32 v16; // eax
  __int64 m_Size; // r13
  CDOTA_Bot::SortedUnit_t *v18; // rax
  __int64 v19; // r13
  int v20; // r12d
  CDOTA_BinaryObject *v21; // rbx
  CEntityInstance *v22; // rax
  const CBaseEntity *v23; // rdi
  const Vector *v24; // rax
  float v25; // xmm0_4
  int m_NumElements; // ebx
  uint32 m_nGrowSize; // eax
  int *v28; // rsi
  __int64 v29; // rax
  int *v30; // rax
  int Inorder; // ebx
  UtlRBTreeNode_t<CUtlMap<float,int,int,CDefLess<float> >::Node_t,int> *v32; // rdx
  __int64 v33; // rax
  int m_Left; // esi
  int *v35; // rax
  __int64 v36; // r12
  UtlRBTreeNode_t<CUtlMap<float,int,int,CDefLess<float> >::Node_t,int> *v37; // r13
  int v38; // eax
  int m_Root; // ebx
  int m_Right; // eax
  char v41; // cl
  UtlRBTreeNode_t<CUtlMap<float,int,int,CDefLess<float> >::Node_t,int> *v42; // rax
  int v43; // eax
  int *m_pMemory; // r12
  int *v45; // rax
  __int64 v46; // r13
  int v47; // eax
  CDOTA_Bot::SortedUnit_t *v48; // rax
  __int64 v49; // r13
  int v50; // eax
  CDOTA_Bot::SortedUnit_t *v51; // rax
  __int64 v52; // r13
  int v53; // eax
  bool VProf_3141; // [rsp+5Bh] [rbp-55h]
  float y; // [rsp+5Ch] [rbp-54h]
  float vHeroLoc; // [rsp+60h] [rbp-50h]
  float vHeroLoc_8; // [rsp+68h] [rbp-48h]
  const Vector *vHeroLoc_8a; // [rsp+68h] [rbp-48h]
  bool vHeroLoc_8b; // [rsp+68h] [rbp-48h]
  EHANDLE hUnit; // [rsp+70h] [rbp-40h] BYREF
  int v61; // [rsp+74h] [rbp-3Ch]

  framecount = gpGlobals->framecount;
  if ( this->m_nNearbyUnitsUpdatedFrame != framecount )
  {
    m_enabled = g_VProfCurrentProfile.m_enabled;
    VProf_3141 = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_Bot::UpdateNearbyUnits", 0, "Bots", 0, 4);
      framecount = gpGlobals->framecount;
    }
    m_pTeamCommander = this->m_pTeamCommander;
    this->m_nNearbyUnitsUpdatedFrame = framecount;
    UnitList = CDOTA_TeamCommander::GetUnitList(
                 m_pTeamCommander,
                 CDOTA_TeamCommander::TeamCommanderUnitList_t::UNIT_LIST_ALL);
    CUtlVectorBase<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int>>::RemoveAll(&this->m_NearbyCreeps);
    CUtlVectorBase<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int>>::RemoveAll(&this->m_NearbyHeroes);
    CUtlVectorBase<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int>>::RemoveAll(&this->m_NearbyTowers);
    CUtlVectorBase<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int>>::RemoveAll(&this->m_NearbyBarracks);
    CUtlVectorBase<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int>>::RemoveAll(&this->m_NearbyShrines);
    v6 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
    if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
      v7 = v6;
    else
      v7 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
    p_m_Index = &UnitList->m_Memory.m_pMemory->m_Index;
    vHeroLoc = AbsOrigin->x;
    y = AbsOrigin->y;
    v10 = &p_m_Index[UnitList->m_Size];
    if ( p_m_Index != v10 )
    {
      while ( 1 )
      {
        hUnit.m_Index = *p_m_Index;
        m_Index = hUnit.m_Index;
        if ( hUnit.m_Index + 2 <= 1 )
          goto LABEL_9;
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hUnit.m_Index) >> 9) & 0x3F];
        if ( v12 == 0 )
          goto LABEL_9;
        v13 = &v12[hUnit.m_Index & 0x1FF];
        if ( v13 == 0 )
          goto LABEL_9;
        if ( hUnit.m_Index != v13->m_EHandle.m_Index )
          goto LABEL_9;
        m_pInstance = v13->m_pInstance;
        if ( v13->m_pInstance == 0 )
          goto LABEL_9;
        if ( !m_pInstance->m_bIsDOTANPC )
          goto LABEL_9;
        v15 = CBaseEntity::GetAbsOrigin(v13->m_pInstance);
        vHeroLoc_8 = ((y - v15->y) * (y - v15->y)) + ((vHeroLoc - v15->x) * (vHeroLoc - v15->x));
        if ( vHeroLoc_8 > 2560000.0 )
          goto LABEL_9;
        v16 = m_pInstance[2].m_hEffectEntity.m_Value.m_Index;
        if ( (v16 & 0x80u) != 0 )
          break;
        if ( (v16 & 1) != 0 && LOBYTE(m_pInstance[4].m_pfnMoveDone.__delta) == 0 || (v16 & 2) != 0 )
        {
          m_Size = this->m_NearbyHeroes.m_Size;
          if ( m_Size == this->m_NearbyHeroes.m_Memory.m_nAllocationCount )
            CUtlMemory<CDOTA_Bot::SortedUnit_t,int>::Grow(&this->m_NearbyHeroes.m_Memory, 1);
          ++this->m_NearbyHeroes.m_Size;
          v18 = &this->m_NearbyHeroes.m_Memory.m_pMemory[m_Size];
          if ( v18 == 0 )
            goto LABEL_9;
          ++p_m_Index;
          v18->hUnit.m_Index = m_Index;
          v18->fDistSqr = vHeroLoc_8;
          if ( v10 == p_m_Index )
            goto LABEL_24;
        }
        else
        {
          if ( (v16 & 4) != 0 || (v16 & 0x40) != 0 )
          {
            v49 = this->m_NearbyTowers.m_Size;
            v50 = this->m_NearbyTowers.m_Size;
            if ( v49 == this->m_NearbyTowers.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CDOTA_Bot::SortedUnit_t,int>::Grow(&this->m_NearbyTowers.m_Memory, 1);
              v50 = this->m_NearbyTowers.m_Size;
            }
            this->m_NearbyTowers.m_Size = v50 + 1;
            v51 = &this->m_NearbyTowers.m_Memory.m_pMemory[v49];
            if ( v51 != 0 )
            {
              v51->hUnit.m_Index = m_Index;
              v51->fDistSqr = vHeroLoc_8;
            }
            goto LABEL_9;
          }
          if ( (*(m_pInstance->_vptr_IHandleEntity + 400))(m_pInstance) != 0 )
          {
            v46 = this->m_NearbyShrines.m_Size;
            v47 = this->m_NearbyShrines.m_Size;
            if ( v46 == this->m_NearbyShrines.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CDOTA_Bot::SortedUnit_t,int>::Grow(&this->m_NearbyShrines.m_Memory, 1);
              v47 = this->m_NearbyShrines.m_Size;
            }
            this->m_NearbyShrines.m_Size = v47 + 1;
            v48 = &this->m_NearbyShrines.m_Memory.m_pMemory[v46];
            if ( v48 != 0 )
              goto LABEL_78;
          }
LABEL_9:
          if ( v10 == ++p_m_Index )
            goto LABEL_24;
        }
      }
      v52 = this->m_NearbyCreeps.m_Size;
      v53 = this->m_NearbyCreeps.m_Size;
      if ( v52 == this->m_NearbyCreeps.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CDOTA_Bot::SortedUnit_t,int>::Grow(&this->m_NearbyCreeps.m_Memory, 1);
        v53 = this->m_NearbyCreeps.m_Size;
      }
      this->m_NearbyCreeps.m_Size = v53 + 1;
      v48 = &this->m_NearbyCreeps.m_Memory.m_pMemory[v52];
      if ( v48 == 0 )
        goto LABEL_9;
LABEL_78:
      v48->hUnit.m_Index = m_Index;
      v48->fDistSqr = vHeroLoc_8;
      goto LABEL_9;
    }
LABEL_24:
    CUtlVectorBase<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int>>::Sort(
      &this->m_NearbyCreeps,
      SortByDistance);
    CUtlVectorBase<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int>>::Sort(
      &this->m_NearbyHeroes,
      SortByDistance);
    CUtlVectorBase<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int>>::Sort(
      &this->m_NearbyTowers,
      SortByDistance);
    CUtlVectorBase<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int>>::Sort(
      &this->m_NearbyBarracks,
      SortByDistance);
    CUtlVectorBase<CDOTA_Bot::SortedUnit_t,CUtlMemory<CDOTA_Bot::SortedUnit_t,int>>::Sort(
      &this->m_NearbyShrines,
      SortByDistance);
    if ( `guard variable for'CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees) != 0 )
    {
      CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_Elements.m_pMemory = 0;
      CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_Elements.m_nAllocationCount = 0;
      CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_Elements.m_nGrowSize = 0;
      CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_Root = -1;
      CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_NumElements = 0;
      CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_FirstFree = -1;
      CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_LastAlloc.index = -1;
      CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_pElements = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees);
      __cxa_atexit(
        CUtlMap<float,int,int,CDefLess<float>>::~CUtlMap,
        &CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees,
        &_dso_handle);
    }
    v19 = 0;
    v20 = 0;
    CUtlRBTree<CUtlMap<float,int,int,CDefLess<float>>::Node_t,int,CUtlMap<float,int,int,CDefLess<float>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<float,int,int,CDefLess<float>>::Node_t,int>,int>>::RemoveAll(&CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree);
    if ( g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Size > 0 )
    {
      do
      {
        v21 = g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Memory.m_pMemory[v19];
        if ( v21 != 0 && v21->m_bActive )
        {
          v22 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
          if ( v22 == 0 || (v23 = v22, BYTE3(v22[7]._vptr_IHandleEntity) == 0) )
            v23 = 0;
          vHeroLoc_8a = CBaseEntity::GetAbsOrigin(v23);
          v24 = CBaseEntity::GetAbsOrigin(v21);
          v25 = ((v24->x - vHeroLoc_8a->x) * (v24->x - vHeroLoc_8a->x))
              + ((v24->y - vHeroLoc_8a->y) * (v24->y - vHeroLoc_8a->y));
          if ( v25 < 2560000.0 )
          {
            m_Root = CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_Root;
            *&hUnit.m_Index = ((v24->x - vHeroLoc_8a->x) * (v24->x - vHeroLoc_8a->x))
                            + ((v24->y - vHeroLoc_8a->y) * (v24->y - vHeroLoc_8a->y));
            v61 = v20;
            if ( CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_Root != -1 )
            {
              while ( 1 )
              {
                v42 = &CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_Elements.m_pMemory[m_Root];
                if ( v42->m_Data.key <= v25 )
                {
                  m_Right = v42->m_Right;
                  v41 = 0;
                  if ( m_Right == -1 )
                    goto LABEL_64;
                }
                else
                {
                  m_Right = v42->m_Left;
                  v41 = 1;
                  if ( m_Right == -1 )
                  {
LABEL_64:
                    vHeroLoc_8b = v41;
                    goto LABEL_65;
                  }
                }
                m_Root = m_Right;
              }
            }
            vHeroLoc_8b = 0;
LABEL_65:
            v43 = CUtlRBTree<CUtlMap<float,int,int,CDefLess<float>>::Node_t,int,CUtlMap<float,int,int,CDefLess<float>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<float,int,int,CDefLess<float>>::Node_t,int>,int>>::NewNode(
                    &CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree,
                    &hUnit);
            CUtlRBTree<CUtlMap<float,int,int,CDefLess<float>>::Node_t,int,CUtlMap<float,int,int,CDefLess<float>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<float,int,int,CDefLess<float>>::Node_t,int>,int>>::LinkToParent(
              &CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree,
              v43,
              m_Root,
              vHeroLoc_8b);
            ++CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_NumElements;
          }
        }
        ++v20;
        ++v19;
      }
      while ( v20 < g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Size );
    }
    m_NumElements = CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_NumElements;
    this->m_NearbyTrees.m_Size = 0;
    if ( m_NumElements > this->m_NearbyTrees.m_Memory.m_nAllocationCount )
    {
      m_nGrowSize = this->m_NearbyTrees.m_Memory.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          m_pMemory = this->m_NearbyTrees.m_Memory.m_pMemory;
          v45 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * m_NumElements);
          this->m_NearbyTrees.m_Memory.m_pMemory = v45;
          if ( m_pMemory != 0 )
            memcpy(v45, m_pMemory, 4LL * this->m_NearbyTrees.m_Memory.m_nAllocationCount);
          this->m_NearbyTrees.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          v28 = this->m_NearbyTrees.m_Memory.m_pMemory;
          v29 = *g_pMemAlloc;
          if ( v28 != 0 )
            v30 = (*(v29 + 8))(g_pMemAlloc, v28, 4LL * m_NumElements);
          else
            v30 = (*v29)(g_pMemAlloc, 4LL * m_NumElements);
          this->m_NearbyTrees.m_Memory.m_pMemory = v30;
        }
        this->m_NearbyTrees.m_Memory.m_nAllocationCount = m_NumElements;
      }
    }
    Inorder = CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_Root;
    if ( CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_Root != -1 )
    {
      v32 = CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_Elements.m_pMemory;
      v33 = CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_Root;
      m_Left = CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_Elements.m_pMemory[CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_Root].m_Left;
      if ( m_Left != -1 )
      {
        while ( 1 )
        {
          v33 = m_Left;
          if ( CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_Elements.m_pMemory[m_Left].m_Left == -1 )
            break;
          m_Left = CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_Elements.m_pMemory[m_Left].m_Left;
        }
        Inorder = m_Left;
      }
      while ( 1 )
      {
        v36 = this->m_NearbyTrees.m_Size;
        v37 = &v32[v33];
        v38 = this->m_NearbyTrees.m_Size;
        if ( v36 == this->m_NearbyTrees.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(&this->m_NearbyTrees.m_Memory, 1);
          v38 = this->m_NearbyTrees.m_Size;
        }
        this->m_NearbyTrees.m_Size = v38 + 1;
        v35 = &this->m_NearbyTrees.m_Memory.m_pMemory[v36];
        if ( v35 != 0 )
          *v35 = v37->m_Data.elem;
        Inorder = CUtlRBTree<CUtlMap<float,int,int,CDefLess<float>>::Node_t,int,CUtlMap<float,int,int,CDefLess<float>>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<float,int,int,CDefLess<float>>::Node_t,int>,int>>::NextInorder(
                    &CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree,
                    Inorder);
        if ( Inorder == -1 )
          break;
        v32 = CDOTA_Bot::UpdateNearbyUnits(void)::mapTrees.m_Tree.m_Elements.m_pMemory;
        v33 = Inorder;
      }
    }
    if ( VProf_3141 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
  }
}


// CDOTA_Bot::UpdateMinionList  (line 3222, @0x00000000027ff360, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CVProfScope, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, GrowMemory, IndexToIdentity, IsControllableByPlayer, IsEnabled, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CVProfScope
// calls: CDOTA_TeamCommander::GetUnitList, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CEntityHandle::operator CEntityInstance*, CVProfile::ExitScope, CVProfile::EnterScope, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, _Unwind_Resume
// callers: CDOTA_Bot::Think
// strings: "CDOTA_Bot::UpdateMinionList"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot::UpdateMinionList(CDOTA_Bot *const this)
{
  int m_enabled; // esi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *UnitList; // r13
  __int64 v4; // rbx
  CHandle<CBaseEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // r12
  int m_Id; // eax
  CEntityInstance *v12; // rax
  CEntityInstance *v13; // rax
  CEntityInstance *v14; // rdi
  CEntityInstance *v15; // rax
  CEntityInstance *v16; // rdi
  unsigned __int64 v17; // rax
  HSCRIPT m_hScope; // rdx
  __int64 m_Size; // r12
  CHandle<CBaseEntity> *v20; // r14
  int v21; // eax
  CHandle<CBaseEntity> *v22; // rax
  bool VProf_3224; // [rsp+13h] [rbp-3Dh]
  int v24; // [rsp+14h] [rbp-3Ch]
  EHANDLE *p_m_hUnit; // [rsp+18h] [rbp-38h]

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_3224 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_Bot::UpdateMinionList", 0, "Bots", 0, 4);
  UnitList = CDOTA_TeamCommander::GetUnitList(
               this->m_pTeamCommander,
               CDOTA_TeamCommander::TeamCommanderUnitList_t::UNIT_LIST_ALLIES);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hMinions);
  if ( UnitList->m_Size > 0 )
  {
    v4 = 0;
    p_m_hUnit = &this->m_hUnit;
    do
    {
      while ( 1 )
      {
        v5 = &UnitList->m_Memory.m_pMemory[v4];
        m_Index = v5->m_Index;
        if ( v5->m_Index + 2 > 1 )
        {
          v7 = v5->m_Index;
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[v7 & 0x1FF];
            if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
            {
              m_pInstance = v9->m_pInstance;
              if ( v9->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              {
                m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
                if ( ((m_Id & 1) == 0 || LOBYTE(m_pInstance[71].m_pEntity) != 0) && (m_Id & 0x100) == 0 )
                {
                  v12 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
                  if ( v12 == 0 || BYTE3(v12[7]._vptr_IHandleEntity) == 0 || v12 != m_pInstance )
                  {
                    v24 = (*(m_pInstance->_vptr_IHandleEntity + 414))(m_pInstance);
                    v13 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
                    if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
                      v14 = v13;
                    else
                      v14 = 0;
                    if ( v24 == (*(v14->_vptr_IHandleEntity + 414))(v14) )
                    {
                      v15 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
                      if ( v15 == 0 || (v16 = v15, BYTE3(v15[7]._vptr_IHandleEntity) == 0) )
                        v16 = 0;
                      v17 = (*(v16->_vptr_IHandleEntity + 414))(v16);
                      m_hScope = m_pInstance[61].m_hPrivateScope.m_hScope;
                      if ( _bittest64(&m_hScope, v17) )
                      {
                        m_Size = this->m_hMinions.m_Size;
                        v20 = &UnitList->m_Memory.m_pMemory[v4];
                        v21 = this->m_hMinions.m_Size;
                        if ( m_Size == this->m_hMinions.m_Memory.m_nAllocationCount )
                        {
                          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hMinions.m_Memory, 1);
                          v21 = this->m_hMinions.m_Size;
                        }
                        this->m_hMinions.m_Size = v21 + 1;
                        v22 = &this->m_hMinions.m_Memory.m_pMemory[m_Size];
                        if ( v22 != 0 )
                          break;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if ( UnitList->m_Size <= ++v4 )
          goto LABEL_29;
      }
      v22->m_Index = v20->m_Index;
      ++v4;
    }
    while ( UnitList->m_Size > v4 );
  }
LABEL_29:
  if ( VProf_3224 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_Bot::WantsToCast  (line 3245, @0x00000000027e8b90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsFullyCastable, IsTrained, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
// callers: CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::AvoidStrength, CDOTA_Modifier_Riki_SmokeScreenThinker::AvoidStrength
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::WantsToCast(CDOTA_Bot *const this)
{
  int framecount; // eax
  int v3; // r12d
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v9; // rbx
  bool IsOwnersGoldEnough; // r14

  framecount = gpGlobals->framecount;
  if ( this->m_iWantsToCastFrame == framecount )
    return this->m_bWantsToCast;
  this->m_iWantsToCastFrame = framecount;
  v3 = 0;
  this->m_bWantsToCast = 0;
  while ( 1 )
  {
    m_Index = this->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v6 = &v5[this->m_hUnit.m_Index & 0x1FF]) == 0
      || m_Index != v6->m_EHandle.m_Index
      || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(m_pInstance, v3);
    v9 = AbilityByIndex;
    if ( AbilityByIndex != 0
      && AbilityByIndex->m_pBotUsage != 0
      && CDOTABaseAbility::GetEffectiveLevel(AbilityByIndex) >= 0
      && (*(v9->_vptr_IHandleEntity + 245))(v9) != 0
      && CDOTABaseAbility::IsOwnersManaEnough(v9) )
    {
      IsOwnersGoldEnough = CDOTABaseAbility::IsOwnersGoldEnough(v9, -1);
      if ( IsOwnersGoldEnough && (*(v9->m_pBotUsage->_vptr_CDOTA_Bot_AbilityUsage + 5))(v9->m_pBotUsage) != 0 )
        break;
    }
    if ( ++v3 == 24 )
      return this->m_bWantsToCast;
  }
  this->m_bWantsToCast = 1;
  return IsOwnersGoldEnough;
}


// CDOTA_Bot::WantsToAttack  (line 3271, @0x00000000027e8cf0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetAttackRange, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetTarget, GetUnit, IndexToIdentity, IsListeningToEvent, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_BaseNPC::IsEntityInRangeForAttack, _Unwind_Resume
// callers: CDOTA_Modifier_Riki_SmokeScreenThinker::AvoidStrength
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::WantsToAttack(CDOTA_Bot *const this)
{
  int framecount; // eax
  unsigned int v3; // ecx
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  bool result; // al
  CEntityInstance *v8; // rax
  CEntityInstance *v9; // r12
  __int64 m_hScope_high; // rax
  float Modifier_Constant_Highest_Internal; // xmm2_4
  __int64 v12; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_hScope_low; // xmm3_4
  __int64 v15; // rax
  float v16; // xmm3_4
  float v17; // xmm0_4
  __int64 v18; // rax
  __int64 v19; // rax
  CBaseEntity *v20; // r12
  CEntityInstance *v21; // rax
  float v22; // xmm1_4
  CDOTA_BaseNPC *v23; // rdi
  __int64 v24; // rax
  float v25; // [rsp+8h] [rbp-48h]
  float v26; // [rsp+8h] [rbp-48h]
  float v27; // [rsp+Ch] [rbp-44h]
  float v28; // [rsp+Ch] [rbp-44h]
  CEntityHandle v29; // [rsp+20h] [rbp-30h] BYREF

  framecount = gpGlobals->framecount;
  if ( this->m_iWantsToAttackFrame == framecount )
    return this->m_bWantsToAttack;
  this->m_iWantsToAttackFrame = framecount;
  this->m_bWantsToAttack = 0;
  v3 = (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(this->m_pActiveBotMode) - 2;
  if ( v3 > 0x12 )
    return this->m_bWantsToAttack;
  if ( ((1LL << v3) & 0x501C1) == 0 )
    return this->m_bWantsToAttack;
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return this->m_bWantsToAttack;
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
  if ( v5 == 0 )
    return this->m_bWantsToAttack;
  v6 = &v5[m_Index & 0x1FF];
  if ( v6 == 0 || m_Index != v6->m_EHandle.m_Index || v6->m_pInstance == 0 )
    return this->m_bWantsToAttack;
  v8 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
    v9 = v8;
  else
    v9 = 0;
  m_hScope_high = HIBYTE(v9[67].m_hPrivateScope.m_hScope);
  Modifier_Constant_Highest_Internal = 0.0;
  if ( m_hScope_high != 0xFF && *(*&v9[65].m_worldGroupId.m_nHashCode + 24 * m_hScope_high) > 0 )
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           &v9[64].m_worldGroupId,
                                           modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                           &CModifierParams::s_Default);
  v12 = BYTE5(v9[67].m_hPrivateScope.m_hScope);
  Modifier_Constant_Additive_Internal = 0.0;
  m_hScope_low = SLODWORD(v9[47].m_hPrivateScope.m_hScope);
  if ( v12 != 0xFF && *(*&v9[65].m_worldGroupId.m_nHashCode + 24 * v12) > 0 )
  {
    v25 = Modifier_Constant_Highest_Internal;
    v27 = SLODWORD(v9[47].m_hPrivateScope.m_hScope);
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            &v9[64].m_worldGroupId,
                                            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v25;
    m_hScope_low = v27;
  }
  v15 = BYTE6(v9[67].m_hPrivateScope.m_hScope);
  v16 = m_hScope_low + Modifier_Constant_Additive_Internal;
  v17 = 0.0;
  if ( v15 != 0xFF && *(*&v9[65].m_worldGroupId.m_nHashCode + 24 * v15) > 0 )
  {
    v26 = Modifier_Constant_Highest_Internal;
    v28 = v16;
    v17 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            &v9[64].m_worldGroupId,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v26;
    v16 = v28;
  }
  if ( Modifier_Constant_Highest_Internal > (v16 + v17) )
  {
    v24 = HIBYTE(v9[67].m_hPrivateScope.m_hScope);
    if ( v24 != 0xFF && *(*&v9[65].m_worldGroupId.m_nHashCode + 24 * v24) > 0 )
      CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
        &v9[64].m_worldGroupId,
        modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
        &CModifierParams::s_Default);
  }
  else
  {
    v18 = BYTE5(v9[67].m_hPrivateScope.m_hScope);
    if ( v18 != 0xFF && *(*&v9[65].m_worldGroupId.m_nHashCode + 24 * v18) > 0 )
      CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
        &v9[64].m_worldGroupId,
        modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
        &CModifierParams::s_Default);
    v19 = BYTE6(v9[67].m_hPrivateScope.m_hScope);
    if ( v19 != 0xFF && *(*&v9[65].m_worldGroupId.m_nHashCode + 24 * v19) > 0 )
      CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
        &v9[64].m_worldGroupId,
        modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
        &CModifierParams::s_Default);
  }
  v29.m_Index = this->m_hTarget.m_Index;
  v20 = CEntityHandle::operator CEntityInstance *(&v29);
  v21 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v21 != 0 && BYTE3(v21[7]._vptr_IHandleEntity) != 0 )
    v23 = v21;
  else
    v23 = 0;
  result = CDOTA_BaseNPC::IsEntityInRangeForAttack(v23, v20, v22);
  if ( !result )
    return this->m_bWantsToAttack;
  this->m_bWantsToAttack = 1;
  return result;
}


// CDOTA_Bot::IsAboutToDie  (line 3302, @0x0000000002800020, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetBotByIndex, GetHealthPercent, GetInstance, GetOpposingTeamCommander, GetTarget, GetUnit, InState, IsMagicImmune, ToDOTABaseNPC, operator CBaseEntity*, operator==, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetArmorReductionForDamageType, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTA_Bot::FindNearbyCreeps, CDOTA_BaseNPC::GetAttackDamage, CDOTA_BaseNPC::GetAttacksPerSecond, CBaseEntity::GetAbsOrigin, CDOTA_TeamCommander::GetPotentialLocationValues, CDOTA_TeamCommander::GetOpposingTeamCommander, CDOTA_Bot::GetEstimatedDamageToTarget, CDOTA_BaseNPC::GetHealthEstimate (15 total)
// callers: CDOTA_BotMode_DefendAlly::GetDefendAllyScore, CDOTA_BotMode_Retreat_Human::GetDesire, CDOTA_BotMode_Rune::GetRuneDesire, CDOTA_BotMode_Retreat::GetDesire, CDOTA_Bot_AbilityUsage_BlinkDagger::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Butterfly::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_AbyssalBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bottle::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_CrimsonGuard::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_EtherealBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Cyclone::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Cheese::GetCurrentUsageDesire (45 total)
bool __fastcall CDOTA_Bot::IsAboutToDie(CDOTA_Bot *const this)
{
  EHANDLE *p_m_hUnit; // r14
  CEntityInstance *v3; // rax
  const CBaseEntity *v4; // rbx
  __int64 v5; // r12
  int v6; // eax
  __int64 v7; // rcx
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC *v9; // rdi
  float ArmorReductionForDamageType; // xmm0_4
  int m_nAttackingTowers; // eax
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rdi
  int OpposingTeamNumber; // eax
  __int64 v15; // r15
  int v16; // r12d
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rbx
  CEntityInstance *v19; // rax
  CEntityInstance *v20; // rdx
  const CBaseEntity *v21; // rdi
  const Vector *AbsOrigin; // rax
  __int64 v23; // rbx
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_Bot *v25; // r12
  CEntityInstance *v26; // rax
  CDOTA_BaseNPC *v27; // rdx
  CEntityInstance *v28; // rax
  CEntityInstance *v29; // rax
  CDOTA_BaseNPC *v30; // rdx
  CEntityInstance *v31; // rax
  const CBaseEntity *v32; // rdi
  CEntityInstance *v33; // rax
  float v34; // xmm1_4
  CDOTA_BaseNPC *v35; // rdi
  unsigned int v36; // ebx
  CEntityInstance *v38; // [rsp+18h] [rbp-1D8h]
  float fTowerDamage; // [rsp+20h] [rbp-1D0h]
  int iDamageType; // [rsp+24h] [rbp-1CCh]
  int iDamageTypea; // [rsp+24h] [rbp-1CCh]
  float fCreepDamage; // [rsp+28h] [rbp-1C8h]
  float fTotalDamageb; // [rsp+2Ch] [rbp-1C4h]
  float fTotalDamage; // [rsp+2Ch] [rbp-1C4h]
  float fTotalDamagea; // [rsp+2Ch] [rbp-1C4h]
  CEntityHandle v46; // [rsp+30h] [rbp-1C0h] BYREF
  int values[24]; // [rsp+40h] [rbp-1B0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hAttackingCreeps; // [rsp+A0h] [rbp-150h] BYREF
  unsigned __int64 v49; // [rsp+1B8h] [rbp-38h]

  p_m_hUnit = &this->m_hUnit;
  v49 = __readfsqword(0x28u);
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
    v4 = v3;
  else
    v4 = 0;
  v5 = 100LL * CBaseEntity::GetHealth(v4);
  v6 = (*(v4->_vptr_IHandleEntity + 156))(v4);
  v7 = 1;
  if ( v6 > 0 )
    v7 = v6;
  if ( (v5 / v7) > 50 )
  {
    LOBYTE(v36) = 0;
  }
  else
  {
    v8 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
      v9 = v8;
    else
      v9 = 0;
    ArmorReductionForDamageType = CDOTA_BaseNPC::GetArmorReductionForDamageType(v9, 1);
    m_nAttackingTowers = this->m_nAttackingTowers;
    hAttackingCreeps.m_Size = 0;
    hAttackingCreeps.m_Memory.m_nAllocationCount = 64;
    hAttackingCreeps.m_Memory.m_nGrowSize = 0x80000000;
    *&iDamageType = 1.0 - ArmorReductionForDamageType;
    hAttackingCreeps.m_Memory.m_pMemory = &hAttackingCreeps.m_FixedMemory;
    fTowerDamage = 3.0 * ((120 * m_nAttackingTowers) * (1.0 - ArmorReductionForDamageType));
    v12 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
      v13 = v12;
    else
      v13 = 0;
    OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v13);
    CDOTA_Bot::FindNearbyCreeps(this, 600.0, OpposingTeamNumber, 1, &hAttackingCreeps);
    if ( hAttackingCreeps.m_Size <= 0 )
    {
      fCreepDamage = 0.0;
    }
    else
    {
      v15 = 0;
      v16 = 0;
      fCreepDamage = 0.0;
      do
      {
        v17 = CEntityHandle::operator CEntityInstance *(&hAttackingCreeps.m_Memory.m_pMemory[v15]);
        v18 = v17;
        if ( v17 != 0 && v17->m_bIsDOTANPC )
        {
          fTotalDamageb = CDOTA_BaseNPC::GetAttackDamage(v17);
          fCreepDamage = (((CDOTA_BaseNPC::GetAttacksPerSecond(v18) * fTotalDamageb) * *&iDamageType) * 3.0)
                       + fCreepDamage;
        }
        ++v16;
        ++v15;
      }
      while ( hAttackingCreeps.m_Size > v16 );
    }
    v19 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
      v20 = v19;
    else
      v20 = 0;
    iDamageTypea = (v20[58]._vptr_IHandleEntity & 0x200) == 0 ? 7 : 5;
    if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
      v21 = v19;
    else
      v21 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v21);
    CDOTA_TeamCommander::GetPotentialLocationValues(this->m_pTeamCommander, AbsOrigin, 1000.0, values);
    v23 = 0;
    fTotalDamage = 0.0;
    while ( v23 < CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pTeamCommander)->m_BotList.m_Size )
    {
      OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pTeamCommander);
      if ( v23 < OpposingTeamCommander->m_BotList.m_Size )
      {
        v25 = OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v23];
        if ( v25 != 0 )
        {
          if ( (*(v25->m_pActiveBotMode->_vptr_CDOTA_BotMode + 2))(v25->m_pActiveBotMode) == 2
            && ((v28 = CEntityHandle::operator CEntityInstance *(p_m_hUnit)) == 0
             || BYTE3(v28[7]._vptr_IHandleEntity) == 0
              ? (v38 = 0)
              : (v38 = v28),
                v46.m_Index = v25->m_hTarget.m_Index,
                v38 == CEntityHandle::operator CEntityInstance *(&v46)) )
          {
            v29 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
            if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
              v30 = v29;
            else
              v30 = 0;
            fTotalDamage = CDOTA_Bot::GetEstimatedDamageToTarget(v25, 1, v30, 3.0, iDamageTypea) + fTotalDamage;
          }
          else
          {
            v26 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
            if ( v26 != 0 && BYTE3(v26[7]._vptr_IHandleEntity) != 0 )
              v27 = v26;
            else
              v27 = 0;
            fTotalDamage = (((CDOTA_Bot::GetEstimatedDamageToTarget(v25, 1, v27, 3.0, 7) * 0.40000001) * values[v23])
                          / 255.0)
                         + fTotalDamage;
          }
        }
      }
      ++v23;
    }
    fTotalDamagea = fTotalDamage + (fTowerDamage + fCreepDamage);
    v31 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
      v32 = v31;
    else
      v32 = 0;
    if ( fTotalDamagea > CBaseEntity::GetHealth(v32) )
    {
      LOBYTE(v36) = 1;
    }
    else
    {
      v33 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
        v35 = v33;
      else
        v35 = 0;
      v36 = CDOTA_BaseNPC::GetHealthEstimate(v35, v34) >> 31;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hAttackingCreeps);
  }
  return v36;
}


// CDOTA_Bot::CanEasilyBeKilled  (line 3364, @0x00000000027e9050, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth, CEntityHandle::operator CEntityInstance*, CDOTA_TeamCommander::GetPotentialDamage
// callers: CDOTA_BotMode_Retreat_Human::GetDesire, CDOTA_BotMode_Farm::GetFarmLaneScore, CDOTA_Bot_AbilityUsage_InvisibilityEdge::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Riki_TricksOfTheTrade::GetCurrentUsageDesire
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::CanEasilyBeKilled(CDOTA_Bot *const this, const Vector *const vLocation)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  const CBaseEntity *m_pInstance; // rbx
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rcx
  bool v11; // dl
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rsi
  int PotentialDamage; // eax
  EHANDLE *p_m_hUnit; // rdi
  __m128i v16; // xmm1
  float v17; // r12d
  CEntityInstance *v18; // rax
  const CBaseEntity *v19; // rdi

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v8 = 100LL * CBaseEntity::GetHealth(m_pInstance);
  v9 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
  v10 = 1;
  if ( v9 > 0 )
    v10 = v9;
  v11 = 0;
  if ( (v8 / v10) <= 66 )
  {
    v12 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
    if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
      v13 = v12;
    else
      v13 = 0;
    PotentialDamage = CDOTA_TeamCommander::GetPotentialDamage(this->m_pTeamCommander, v13, 2000.0, vLocation);
    p_m_hUnit = &this->m_hUnit;
    *v16.m128i_i32 = PotentialDamage;
    v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
    v18 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
      v19 = v18;
    else
      v19 = 0;
    return v17 > (CBaseEntity::GetHealth(v19) * 1.5);
  }
  return v11;
}


// CDOTA_Bot::IsDangerouslyLow  (line 3378, @0x00000000028005c0, libserver.so)  // inlines: Get, GetBotByIndex, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, GetOpposingTeamCommander, GetUnit, InState, IndexToIdentity, IsMagicImmune, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetHealth, CDOTA_TeamCommander::GetOpposingTeamCommander, CDOTA_Bot::GetEstimatedDamageToTarget
// callers: CDOTA_BotMode_Retreat_Human::GetDesire, CDOTA_BotMode_Rune::GetRuneDesire, CDOTA_BotMode_Farm::GetFarmLaneScore, CDOTA_BotMode_Retreat::GetDesire, CDOTA_Bot_AbilityUsage_Butterfly::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bottle::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Mekansm::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_MagicStick::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Urn::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_TeleportScroll::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bloodseeker_Bloodrage::GetBloodrageScore, CDOTA_Bot_AbilityUsage_PhantomAssassin_PhantomStrike::GetCurrentUsageDesire (13 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::IsDangerouslyLow(CDOTA_Bot *const this)
{
  CEntityInstance *v2; // rax
  const CBaseEntity *v3; // rbx
  __int64 v4; // r13
  int v5; // eax
  __int64 v6; // rcx
  CEntityInstance *v7; // rax
  const CBaseEntity *v8; // rdi
  int Health; // edx
  bool result; // al
  CEntityInstance *v11; // rax
  __int64 v12; // rbx
  int v13; // r13d
  int v14; // r14d
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_Bot *v16; // r15
  uint32 m_Index; // eax
  CConcreteEntityList *v18; // rsi
  CEntityIdentity *v19; // rdx
  __int64 v20; // rcx
  CEntityIdentity *v21; // rdx
  CEntityInstance *m_pInstance; // rdi
  uint32 v23; // edx
  CEntityIdentity *v24; // rax
  CEntityIdentity *v25; // rax
  CDOTA_BaseNPC *v26; // rdx
  CEntityInstance *v27; // rax
  const CBaseEntity *v28; // rdi
  EHANDLE *p_m_hUnit; // [rsp+0h] [rbp-40h]
  int iDamageType; // [rsp+Ch] [rbp-34h]

  p_m_hUnit = &this->m_hUnit;
  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v2 != 0 && BYTE3(v2[7]._vptr_IHandleEntity) != 0 )
    v3 = v2;
  else
    v3 = 0;
  v4 = 100LL * CBaseEntity::GetHealth(v3);
  v5 = (*(v3->_vptr_IHandleEntity + 156))(v3);
  v6 = 1;
  if ( v5 > 0 )
    v6 = v5;
  if ( (v4 / v6) <= 75 )
  {
    v7 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
      v8 = v7;
    else
      v8 = 0;
    Health = CBaseEntity::GetHealth(v8);
    result = 1;
    if ( Health <= 149 )
      return result;
    v11 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v11 == 0 || BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
      v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    iDamageType = (v11[58]._vptr_IHandleEntity & 0x200) == 0 ? 7 : 5;
    do
    {
      while ( 1 )
      {
        OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pTeamCommander);
        if ( OpposingTeamCommander->m_BotList.m_Size > v12 )
        {
          v16 = OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v12];
          if ( v16 != 0 )
          {
            m_Index = v16->m_hUnit.m_Index;
            v18 = CEntityHandle::gm_pEntityList;
            if ( m_Index + 2 > 1
              && (v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
              && (v20 = v16->m_hUnit.m_Index & 0x1FF, v18 = (8 * v20), (v21 = &v19[v20]) != 0)
              && m_Index == v21->m_EHandle.m_Index
              && v21->m_pInstance != 0
              && BYTE3(v21->m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              m_pInstance = v21->m_pInstance;
            }
            else
            {
              m_pInstance = 0;
            }
            if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v18) != 0 )
              break;
          }
        }
        if ( ++v12 == 24 )
          goto LABEL_29;
      }
      v23 = this->m_hUnit.m_Index;
      if ( v23 + 2 <= 1
        || (v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
        || (v25 = &v24[this->m_hUnit.m_Index & 0x1FF]) == 0
        || v23 != v25->m_EHandle.m_Index
        || (v26 = v25->m_pInstance, v25->m_pInstance == 0)
        || !v26->m_bIsDOTANPC )
      {
        v26 = 0;
      }
      ++v12;
      ++v13;
      v14 += CDOTA_Bot::GetEstimatedDamageToTarget(v16, 1, v26, 5.0, iDamageType);
    }
    while ( v12 != 24 );
LABEL_29:
    if ( v13 != 0 )
    {
      LOWORD(v12) = 700;
      if ( ((v14 / v13) * 0.75) <= 700 )
        LODWORD(v12) = ((v14 / v13) * 0.75);
      v27 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
      if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
        v28 = v27;
      else
        v28 = 0;
      return v12 > CBaseEntity::GetHealth(v28);
    }
  }
  return 0;
}


// CDOTA_Bot::IsSneakyInvis  (line 3421, @0x00000000027e91b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::FindModifierByName
// callers: CDOTA_Bot::Think
// strings: "modifier_phantom_lancer_doppelwalk_invis"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::IsSneakyInvis(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v3 = &v2[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v3->m_EHandle.m_Index
    || (m_pInstance = v3->m_pInstance, v3->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  return CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_phantom_lancer_doppelwalk_invis", 0) != 0;
}


// CDOTA_Bot::SetLastSeenLocation  (line 3429, @0x00000000027e9230, libserver.so)  // inlines: DOTAGameRules, GetGameTime, operator=
void __fastcall CDOTA_Bot::SetLastSeenLocation(CDOTA_Bot *const this, const Vector *const vLocation)
{
  CGameRules *v2; // rax
  float v3; // xmm0_4

  this->m_bKnownInvisible = 1;
  this->m_vLastSeenLoc.x = vLocation->x;
  v2 = g_pGameRules;
  this->m_vLastSeenLoc.y = vLocation->y;
  this->m_vLastSeenLoc.z = vLocation->z;
  v3 = 0.0;
  if ( v2 != 0 )
    v3 = *&v2[18].m_szQuestName[20];
  this->m_fLastSeen = v3;
}


// CDOTA_Bot::GetGankingEstimatedDamage  (line 3438, @0x0000000002801120, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, Get, GetAggroTarget, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetMinion, GetTimeSinceLastSeen, GetUnit, InState, IndexToIdentity, IsMagicImmune, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Bot::FindNearbyEnemiesInMode, CDOTA_Bot::GetEstimatedDamageToTarget, CDOTA_BaseNPC::GetAttackDamage, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTA_BaseNPC::GetArmorForDamageType, CUtlMemory<CDOTA_Bot*, int>::Purge, CUtlVectorBase<CDOTA_Bot*, CUtlMemory<CDOTA_Bot*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BotMode_Retreat::GetDesire
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Bot::GetGankingEstimatedDamage(CDOTA_Bot *const this, float a2, float fDuration)
{
  CEntityInstance *v4; // rax
  int (**vptr_IHandleEntity)(...); // rax
  int v6; // r15d
  CDOTA_Bot *v7; // rbx
  CEntityInstance *v8; // rax
  __int64 v9; // rax
  float v10; // xmm0_4
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rdx
  __int64 v13; // r12
  int v14; // ebx
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CEntityInstance *v21; // rax
  float AttacksPerSecond; // xmm0_4
  uint32 v23; // eax
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  CDOTA_BaseNPC *v26; // rdi
  EHANDLE *p_m_hUnit; // [rsp+10h] [rbp-70h]
  int iDamageType; // [rsp+1Ch] [rbp-64h]
  __int64 v31; // [rsp+20h] [rbp-60h]
  int i; // [rsp+28h] [rbp-58h]
  float AttackDamage; // [rsp+2Ch] [rbp-54h]
  float v34; // [rsp+2Ch] [rbp-54h]
  CUtlVector<CDOTA_Bot*,CUtlMemory<CDOTA_Bot*,int> > AttackingEnemies; // [rsp+30h] [rbp-50h] BYREF

  p_m_hUnit = &this->m_hUnit;
  v4 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v4 == 0 || BYTE3(v4[7]._vptr_IHandleEntity) == 0 )
    v4 = 0;
  vptr_IHandleEntity = v4[58]._vptr_IHandleEntity;
  AttackingEnemies.m_Size = 0;
  AttackingEnemies.m_Memory.m_pMemory = 0;
  AttackingEnemies.m_Memory.m_nAllocationCount = 0;
  AttackingEnemies.m_Memory.m_nGrowSize = 0;
  iDamageType = (vptr_IHandleEntity & 0x200) == 0 ? 7 : 5;
  CDOTA_Bot::FindNearbyEnemiesInMode(this, DOTA_BOT_MODE::DOTA_BOT_MODE_ATTACK, 1800.0, &AttackingEnemies, 0);
  if ( AttackingEnemies.m_Size <= 0 )
  {
    v6 = 0;
  }
  else
  {
    v31 = 0;
    v6 = 0;
    i = 0;
    do
    {
      v7 = AttackingEnemies.m_Memory.m_pMemory[v31];
      v8 = CEntityHandle::operator CEntityInstance *(&v7->m_hUnit);
      if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
      {
        v9 = *&v8[45].m_worldGroupId.m_nHashCode;
        if ( v9 != 0 )
        {
          v10 = 0.0;
          if ( g_pGameRules != 0 )
            v10 = *&g_pGameRules[18].m_szQuestName[20];
          if ( (v10 - *(v9 + 704)) < 3.0 )
          {
            v11 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
            if ( v11 == 0 || (v12 = v11, BYTE3(v11[7]._vptr_IHandleEntity) == 0) )
              v12 = 0;
            v6 += CDOTA_Bot::GetEstimatedDamageToTarget(v7, 1, v12, a2, iDamageType);
          }
        }
      }
      if ( this->m_hMinions.m_Size > 0 )
      {
        v13 = 0;
        v14 = 0;
        do
        {
          while ( 1 )
          {
            v15 = &this->m_hMinions.m_Memory.m_pMemory[v13];
            m_Index = v15->m_Index;
            if ( v15->m_Index + 2 > 1 )
            {
              v17 = v15->m_Index;
              v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
              if ( v18 != 0 )
              {
                v19 = &v18[v17 & 0x1FF];
                if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
                {
                  m_pInstance = v19->m_pInstance;
                  if ( v19->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                  {
                    v21 = CEntityHandle::operator CEntityInstance *(&m_pInstance->m_hAggroTarget);
                    if ( v21 != 0
                      && BYTE3(v21[7]._vptr_IHandleEntity) != 0
                      && (v21[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                    {
                      break;
                    }
                  }
                }
              }
            }
            ++v14;
            ++v13;
            if ( v14 >= this->m_hMinions.m_Size )
              goto LABEL_32;
          }
          AttackDamage = CDOTA_BaseNPC::GetAttackDamage(m_pInstance);
          AttacksPerSecond = CDOTA_BaseNPC::GetAttacksPerSecond(m_pInstance);
          v23 = this->m_hUnit.m_Index;
          v34 = AttackDamage * AttacksPerSecond;
          if ( v23 + 2 <= 1
            || (v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
            || (v25 = &v24[this->m_hUnit.m_Index & 0x1FF]) == 0
            || v23 != v25->m_EHandle.m_Index
            || (v26 = v25->m_pInstance, v25->m_pInstance == 0)
            || !v26->m_bIsDOTANPC )
          {
            v26 = 0;
          }
          ++v14;
          ++v13;
          v6 = (v6 + (v34 * (1.0 - CDOTA_BaseNPC::GetArmorForDamageType(v26, 1))));
        }
        while ( v14 < this->m_hMinions.m_Size );
      }
LABEL_32:
      ++i;
      ++v31;
    }
    while ( AttackingEnemies.m_Size > i );
  }
  AttackingEnemies.m_Size = 0;
  if ( (AttackingEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Bot *,int>::Purge(&AttackingEnemies.m_Memory);
    if ( (AttackingEnemies.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Bot *,int>::Purge(&AttackingEnemies.m_Memory);
  }
  return v6;
}


// CDOTA_Bot::HasBuffThatBreaksOnDamage  (line 3475, @0x00000000027e9290, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::FindModifierByName
// callers: CDOTA_BotMode_Laning::CalculateDesiredLocation, CDOTA_Bot_AbilityUsage_Pudge_Rot::GetCurrentUsageDesire
// strings: "modifier_clarity_potion", "modifier_flask_healing", "modifier_bottle_regeneration", "modifier_item_tranquil_boots_heal"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::HasBuffThatBreaksOnDamage(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v3 = &v2[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v3->m_EHandle.m_Index
    || (m_pInstance = v3->m_pInstance, v3->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  return CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_clarity_potion", 0) != 0
      || CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_flask_healing", 0) != 0
      || CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_bottle_regeneration", 0) != 0
      || CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_item_tranquil_boots_heal", 0) != 0;
}


// CDOTA_Bot::GetTargetBot  (line 3486, @0x00000000027e9370, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTarget, IndexToIdentity, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTA_BotMode_Roam::GetDebugString, CDOTA_Bot_AbilityUsage_ForceStaff::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_ShivasGuard::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Windrunner_Windrun::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Sniper_Assassinate::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Tidehunter_Gush::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_VengefulSpirit_NetherSwap::GetCurrentUsageDesire, CDOTA_BotMode_Attack_Tiny::Think
// globals: CEntityHandle::gm_pEntityList
CDOTA_Bot *__fastcall CDOTA_Bot::GetTargetBot(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rax

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F]) != 0
    && (v3 = &v2[m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return *&m_pInstance[45].m_worldGroupId.m_nHashCode;
  }
  else
  {
    return 0;
  }
}


// CDOTA_Bot::UpdateInternalRatings  (line 3503, @0x00000000027e9510, libserver.so)  // inlines: Add, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, GetElapsed, GetTimebaseRegister, InTargetThread, IsElapsed, IsEnabled, NetworkStateChanged, PLAT_CPU_TIME, Set, Start, operator=<float>, ~CMicroProfilerGuard, ~CVProfScope
// calls: CountdownTimer::Now, RandomFloat, CDOTA_Bot::CalculateAverageBlockValue, CVProfile::ExitScope, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), _Unwind_Resume
// callers: CDOTA_Bot::Think
// strings: "CDOTA_Bot::UpdateInternalRatings"
void __fastcall CDOTA_Bot::UpdateInternalRatings(CDOTA_Bot *const this)
{
  int m_enabled; // eax
  bool v3; // r13
  __m128i v4; // xmm0
  double v5; // xmm1_8
  double v6; // xmm2_8
  __m128i v7; // xmm3
  float v8; // r15d
  double v9; // xmm4_8
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v11; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v14; // rax
  float fUpdateTimea; // [rsp+Ch] [rbp-34h]
  float fUpdateTime; // [rsp+Ch] [rbp-34h]

  if ( this->m_InteralRatingsTimer.m_timestamp.m_Value <= 0.0
    || CountdownTimer::Now(&this->m_InteralRatingsTimer) >= this->m_InteralRatingsTimer.m_timestamp.m_Value )
  {
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v3 = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
      v11 = __rdtsc();
      if ( m_TargetThreadId == ThreadGetCurrentId() )
      {
        m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
        if ( m_pCurNode->m_pszName != "CDOTA_Bot::UpdateInternalRatings" )
        {
          m_pCurNode = CVProfNode::GetSubNode(
                         g_VProfCurrentProfile.m_pCurNode,
                         "CDOTA_Bot::UpdateInternalRatings",
                         0,
                         "Bots",
                         4);
          g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
        }
        v14 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
        v14->m_BudgetFlags |= 4u;
        CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
        g_VProfCurrentProfile.m_fAtRoot = 0;
      }
      m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v11 + __rdtsc();
    }
    fUpdateTimea = RandomFloat(0.40000001, 0.60000002);
    fUpdateTime = fUpdateTimea * (*(*engine + 96LL))(engine);
    *v4.m128i_i32 = CountdownTimer::Now(&this->m_InteralRatingsTimer);
    v7 = v4;
    *v7.m128i_i32 = *v4.m128i_i32 + fUpdateTime;
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
    if ( (*v4.m128i_i32 + fUpdateTime) != this->m_InteralRatingsTimer.m_timestamp.m_Value )
    {
      (*(this->m_InteralRatingsTimer._vptr_CountdownTimer + 2))(
        &this->m_InteralRatingsTimer,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      this->m_InteralRatingsTimer.m_timestamp.m_Value = v8;
    }
    *&v9 = LODWORD(fUpdateTime);
    if ( fUpdateTime != this->m_InteralRatingsTimer.m_duration.m_Value )
    {
      (*(this->m_InteralRatingsTimer._vptr_CountdownTimer + 2))(
        &this->m_InteralRatingsTimer,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        *v4.m128i_i64,
        v5,
        v6,
        *v7.m128i_i64,
        fUpdateTime);
      this->m_InteralRatingsTimer.m_duration.m_Value = fUpdateTime;
    }
    this->m_iLifesteal = (*(this->_vptr_CDOTA_Bot + 29))(this, *v4.m128i_i64, v5, v6, *v7.m128i_i64, v9);
    this->m_iBlock = CDOTA_Bot::CalculateAverageBlockValue(this);
    if ( v3 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
  }
}


// CDOTA_Bot::CalculateAverageLifestealValue  (line 3520, @0x00000000027fdc60, libserver.so)  // inlines: Get, GetInstance, GetUnit, ToDOTABaseNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::FindItemInInventory, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetAbility
// callers: CDOTA_Bot_Hero_Bloodseeker::CalculateAverageLifestealValue
// strings: "item_lifesteal", "item_helm_of_the_dominator", "modifier_item_vladmir_aura", "modifier_skeleton_king_vampiric_aura_buff"
int __fastcall CDOTA_Bot::CalculateAverageLifestealValue(CDOTA_Bot *const this)
{
  EHANDLE *p_m_hUnit; // r12
  CEntityInstance *v2; // rax
  CDOTA_BaseNPC *v3; // rdi
  CDOTA_UnitInventory *Inventory; // rax
  int LevelSpecialValue; // ebx
  CDOTA_Item *ItemInInventory; // rax
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rdi
  CDOTA_UnitInventory *v9; // rax
  CDOTA_Item *v10; // rax
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rdi
  CDOTA_UnitInventory *v13; // rax
  CDOTA_Item *v14; // rax
  CEntityInstance *v15; // rax
  CDOTA_BaseNPC *v16; // rdi
  CDOTA_UnitInventory *v17; // rax
  CDOTA_Item *v18; // rax
  CEntityInstance *v19; // rax
  CDOTA_BaseNPC *v20; // rdi
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v22; // r13
  CDOTABaseAbility *Ability; // rax
  const CEntityHandle *v24; // rdi
  CEntityInstance *v25; // rax
  CEntityInstance *v26; // rdx
  CDOTA_BaseNPC *v27; // rdi
  CDOTA_Buff *v28; // rax
  CDOTA_Buff *v29; // r13
  CEntityInstance *v30; // rax
  CDOTABaseAbility *v31; // rax
  CDOTABaseAbility *v33; // rax

  p_m_hUnit = &this->m_hUnit;
  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v2 != 0 && BYTE3(v2[7]._vptr_IHandleEntity) != 0 )
    v3 = v2;
  else
    v3 = 0;
  Inventory = CDOTA_BaseNPC::GetInventory(v3);
  LevelSpecialValue = 0;
  ItemInInventory = CDOTA_UnitInventory::FindItemInInventory(Inventory, "item_mask_of_madness", 1, 0, -1);
  if ( ItemInInventory != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(ItemInInventory, "lifesteal_percent", -1, 1);
  v7 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  v9 = CDOTA_BaseNPC::GetInventory(v8);
  v10 = CDOTA_UnitInventory::FindItemInInventory(v9, "item_lifesteal", 1, 0, -1);
  if ( v10 != 0 )
    LevelSpecialValue += CDOTABaseAbility::GetLevelSpecialValueFor<int>(v10, "lifesteal_percent", -1, 1);
  v11 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  v13 = CDOTA_BaseNPC::GetInventory(v12);
  v14 = CDOTA_UnitInventory::FindItemInInventory(v13, "item_satanic", 1, 0, -1);
  if ( v14 != 0 )
    LevelSpecialValue += CDOTABaseAbility::GetLevelSpecialValueFor<int>(v14, "lifesteal_percent", -1, 1);
  v15 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 )
    v16 = v15;
  else
    v16 = 0;
  v17 = CDOTA_BaseNPC::GetInventory(v16);
  v18 = CDOTA_UnitInventory::FindItemInInventory(v17, "item_helm_of_the_dominator", 1, 0, -1);
  if ( v18 != 0 )
    LevelSpecialValue += CDOTABaseAbility::GetLevelSpecialValueFor<int>(v18, "lifesteal_percent", -1, 1);
  v19 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
    v20 = v19;
  else
    v20 = 0;
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v20, "modifier_item_vladmir_aura", 0);
  v22 = ModifierByName;
  if ( ModifierByName == 0 )
    goto LABEL_42;
  Ability = CDOTA_Buff::GetAbility(ModifierByName);
  v24 = p_m_hUnit;
  if ( Ability == 0 )
  {
LABEL_43:
    v26 = CEntityHandle::operator CEntityInstance *(v24);
    goto LABEL_30;
  }
  v25 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  v26 = v25;
  if ( v25 == 0 || BYTE3(v25[7]._vptr_IHandleEntity) == 0 )
    v25 = 0;
  if ( (*(&v25[50].m_worldGroupId + 1) & 2) == 0 )
  {
    v33 = CDOTA_Buff::GetAbility(v22);
    LevelSpecialValue += CDOTABaseAbility::GetLevelSpecialValueFor<int>(v33, "vampiric_aura", -1, 1);
LABEL_42:
    v24 = p_m_hUnit;
    goto LABEL_43;
  }
LABEL_30:
  if ( v26 != 0 && BYTE3(v26[7]._vptr_IHandleEntity) != 0 )
    v27 = v26;
  else
    v27 = 0;
  v28 = CDOTA_BaseNPC::FindModifierByName(v27, "modifier_skeleton_king_vampiric_aura_buff", 0);
  v29 = v28;
  if ( v28 != 0 && CDOTA_Buff::GetAbility(v28) != 0 )
  {
    v30 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v30 == 0 || BYTE3(v30[7]._vptr_IHandleEntity) == 0 )
      v30 = 0;
    if ( (*(&v30[50].m_worldGroupId + 1) & 2) == 0 )
    {
      v31 = CDOTA_Buff::GetAbility(v29);
      LevelSpecialValue += CDOTABaseAbility::GetLevelSpecialValueFor<int>(v31, "vampiric_aura", -1, 1);
    }
  }
  return LevelSpecialValue;
}


// CDOTA_Bot::CalculateAverageBlockValue  (line 3566, @0x00000000027e93f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Highest, GetUnit, IndexToIdentity, IsListeningToEvent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal
// callers: CDOTA_Bot::UpdateInternalRatings
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot::CalculateAverageBlockValue(CDOTA_Bot *const this)
{
  float v1; // xmm2_4
  int v3; // r12d
  int i; // ebx
  uint32 m_Index; // edx
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CEntityInstance *m_pInstance; // rdx
  __int64 v9; // rcx
  float Modifier_Constant_Highest_Internal; // xmm0_4
  float v12; // [rsp-24h] [rbp-2Ch]

  v1 = 0.0;
  v3 = 0;
  for ( i = 100; i != 0; --i )
  {
    m_Index = this->m_hUnit.m_Index;
    if ( m_Index + 2 <= 1
      || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
      || (v7 = &v6[this->m_hUnit.m_Index & 0x1FF]) == 0
      || m_Index != v7->m_EHandle.m_Index
      || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    v9 = *(&m_pInstance[67].m_worldGroupId + 6);
    Modifier_Constant_Highest_Internal = v1;
    if ( v9 != 0xFF )
    {
      Modifier_Constant_Highest_Internal = 0.0;
      if ( *(*&m_pInstance[65].m_worldGroupId.m_nHashCode + 24 * v9) > 0 )
      {
        v12 = v1;
        Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                               &m_pInstance[64].m_worldGroupId,
                                               modifierfunction::MODIFIER_PROPERTY_PHYSICAL_CONSTANT_BLOCK,
                                               &CModifierParams::s_Default);
        v1 = v12;
      }
    }
    v3 = (v3 + Modifier_Constant_Highest_Internal);
  }
  return v3 / 100;
}


// CDOTA_Bot::Action_MoveTo  (line 3583, @0x0000000002802f10, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, GrowMemory, HasFlyMovementCapability, HasMovementCapability, InState, IndexToIdentity, IsControllableByPlayer, IsNightmared, IsStunned, IsValid, LookupEntity, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetPlayerID, CEntityHandle::operator CEntityInstance*, CUtlMemory<CEntityIndex, int>::Grow, CDOTA_Bot::ExecuteOrder, CEntityInstance::GetEntityIndex, CUtlMemory<CEntityIndex, int>::Purge, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BotAction_MoveTo::OnStart, CDOTA_BotAction_MoveTo::Think, CDOTA_Bot_Hero_Juggernaut::DoMinionThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot::Action_MoveTo(CDOTA_Bot *const this, const Vector *const vLoc, CEntityIndex iEntIndex)
{
  EHANDLE *p_m_hUnit; // r12
  unsigned __int64 PlayerID; // r14
  CEntityInstance *v8; // rax
  CEntityInstance *v9; // rdx
  HSCRIPT m_hScope; // rax
  int v11; // edx
  vec_t x; // xmm0_4
  CEntityInstance *v13; // rax
  const CEntityInstance *v14; // rdi
  __int64 m_Size; // rbx
  CEntityIndex v16; // r12d
  CEntityIndex *v17; // rax
  __int64 v18; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v20; // rdx
  uint32 m_Index; // eax
  __int16 v22; // cx
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  CEntityInstance *m_pInstance; // r14
  int (**vptr_IHandleEntity)(...); // rax
  CEntityIndex v27; // r14d
  int v28; // eax
  CEntityIndex *v29; // rax
  int v30; // [rsp+1Ch] [rbp-74h]
  CUnitOrders newOrders; // [rsp+20h] [rbp-70h] BYREF

  p_m_hUnit = &this->m_hUnit;
  PlayerID = CDOTA_Bot::GetPlayerID(this);
  v8 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
    v9 = v8;
  else
    v9 = 0;
  m_hScope = v9[61].m_hPrivateScope.m_hScope;
  v11 = -1;
  if ( _bittest64(&m_hScope, PlayerID) )
    v11 = CDOTA_Bot::GetPlayerID(this);
  newOrders.m_bQueue = 0;
  newOrders.m_nUnits.m_Size = 0;
  memset(&newOrders.m_nUnits.m_Memory, 0, 28);
  newOrders.m_nOrderSequenceNumber = 0;
  newOrders.m_vPosition = vec3_origin;
  newOrders.m_nIssuerPlayerIndex = v11;
  if ( iEntIndex.m_Data == -1 )
  {
    v13 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
      v14 = v13;
    else
      v14 = 0;
    m_Size = newOrders.m_nUnits.m_Size;
    v16.m_Data = CEntityInstance::GetEntityIndex(v14).m_Data;
    CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
    ++newOrders.m_nUnits.m_Size;
    v17 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
    if ( v17 != 0 )
      v17->m_Data = v16.m_Data;
    v18 = 0;
    for ( i = 0; this->m_hMinions.m_Size > i; ++v18 )
    {
      v20 = &this->m_hMinions.m_Memory.m_pMemory[v18];
      m_Index = v20->m_Index;
      if ( v20->m_Index + 2 > 1 )
      {
        v22 = v20->m_Index;
        v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v20->m_Index) >> 9) & 0x3F];
        if ( v23 != 0 )
        {
          v24 = &v23[v22 & 0x1FF];
          if ( v24 != 0 && m_Index == v24->m_EHandle.m_Index )
          {
            m_pInstance = v24->m_pInstance;
            if ( v24->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(v24->m_pInstance) != 0 )
            {
              vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
              if ( ((BYTE4(m_pInstance[50].m_CScriptComponent) & 3) != 0
                 || (BYTE3(vptr_IHandleEntity) & 1 | ((vptr_IHandleEntity & 0x200000000LL) != 0)) != 0)
                && (vptr_IHandleEntity & 1) == 0
                && (m_pInstance[58]._vptr_IHandleEntity & 0x20) == 0
                && (m_pInstance[58]._vptr_IHandleEntity & 0x800) == 0
                && *&m_pInstance[45].m_worldGroupId.m_nHashCode == 0 )
              {
                v27.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
                v28 = newOrders.m_nUnits.m_Size;
                v30 = newOrders.m_nUnits.m_Size;
                if ( newOrders.m_nUnits.m_Size == newOrders.m_nUnits.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
                  v28 = newOrders.m_nUnits.m_Size;
                }
                newOrders.m_nUnits.m_Size = v28 + 1;
                v29 = &newOrders.m_nUnits.m_Memory.m_pMemory[v30];
                if ( v29 != 0 )
                  v29->m_Data = v27.m_Data;
              }
            }
          }
        }
      }
      ++i;
    }
  }
  else
  {
    CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
    ++newOrders.m_nUnits.m_Size;
    if ( newOrders.m_nUnits.m_Memory.m_pMemory != 0 )
      newOrders.m_nUnits.m_Memory.m_pMemory->m_Data = iEntIndex.m_Data;
  }
  x = vLoc->x;
  newOrders.m_nOrderType = 1;
  newOrders.m_vPosition.x = x;
  newOrders.m_vPosition.y = vLoc->y;
  newOrders.m_vPosition.z = vLoc->z;
  CDOTA_Bot::ExecuteOrder(this, &newOrders);
  newOrders.m_nUnits.m_Size = 0;
  if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
    if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
  }
}


// CDOTA_Bot::Action_Hold  (line 3614, @0x0000000002803400, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, GrowMemory, HasFlyMovementCapability, HasMovementCapability, InState, IndexToIdentity, IsControllableByPlayer, IsNightmared, IsStunned, IsValid, LookupEntity, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetPlayerID, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CDOTA_Bot::ExecuteOrder, CUtlMemory<CEntityIndex, int>::Purge, CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BotMode_Companion::HandleModeCompanionIdle, CDOTA_BotMode_TutorialBoss::Think
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot::Action_Hold(CDOTA_Bot *const this)
{
  EHANDLE *p_m_hUnit; // rbx
  unsigned __int64 PlayerID; // r12
  CEntityInstance *v4; // rax
  CEntityInstance *v5; // rdx
  HSCRIPT m_hScope; // rax
  int v7; // ecx
  CEntityInstance *v8; // rax
  const CEntityInstance *v9; // rdi
  __int64 m_Size; // rbx
  CEntityIndex v11; // r12d
  CEntityIndex *v12; // rdx
  __int64 v13; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CEntityInstance *m_pInstance; // r14
  int (**vptr_IHandleEntity)(...); // rax
  CEntityIndex v22; // eax
  __int64 v23; // r14
  int32 m_Data; // r15d
  int v25; // eax
  CEntityIndex *v26; // rax
  CUnitOrders newOrders; // [rsp+10h] [rbp-70h] BYREF

  p_m_hUnit = &this->m_hUnit;
  PlayerID = CDOTA_Bot::GetPlayerID(this);
  v4 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
    v5 = v4;
  else
    v5 = 0;
  m_hScope = v5[61].m_hPrivateScope.m_hScope;
  v7 = -1;
  if ( _bittest64(&m_hScope, PlayerID) )
    v7 = CDOTA_Bot::GetPlayerID(this);
  newOrders.m_bQueue = 0;
  newOrders.m_nUnits.m_Size = 0;
  memset(&newOrders.m_nUnits.m_Memory, 0, 28);
  newOrders.m_nOrderSequenceNumber = 0;
  newOrders.m_vPosition = vec3_origin;
  newOrders.m_nIssuerPlayerIndex = v7;
  v8 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
    v9 = v8;
  else
    v9 = 0;
  m_Size = newOrders.m_nUnits.m_Size;
  v11.m_Data = CEntityInstance::GetEntityIndex(v9).m_Data;
  CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
  ++newOrders.m_nUnits.m_Size;
  v12 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
  if ( v12 != 0 )
    v12->m_Data = v11.m_Data;
  v13 = 0;
  for ( i = 0; this->m_hMinions.m_Size > i; ++v13 )
  {
    while ( 1 )
    {
      v15 = &this->m_hMinions.m_Memory.m_pMemory[v13];
      m_Index = v15->m_Index;
      if ( v15->m_Index + 2 > 1 )
      {
        v17 = v15->m_Index;
        v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
        if ( v18 != 0 )
        {
          v19 = &v18[v17 & 0x1FF];
          if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
          {
            m_pInstance = v19->m_pInstance;
            if ( v19->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && LOBYTE(m_pInstance[71].m_pEntity) != 0
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(v19->m_pInstance) != 0 )
            {
              vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
              if ( ((BYTE4(m_pInstance[50].m_CScriptComponent) & 3) != 0
                 || (BYTE3(vptr_IHandleEntity) & 1 | ((vptr_IHandleEntity & 0x200000000LL) != 0)) != 0)
                && (vptr_IHandleEntity & 1) == 0
                && (m_pInstance[58]._vptr_IHandleEntity & 0x20) == 0
                && (m_pInstance[58]._vptr_IHandleEntity & 0x800) == 0
                && *&m_pInstance[45].m_worldGroupId.m_nHashCode == 0 )
              {
                v22.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
                v23 = newOrders.m_nUnits.m_Size;
                m_Data = v22.m_Data;
                v25 = newOrders.m_nUnits.m_Size;
                if ( newOrders.m_nUnits.m_Size == newOrders.m_nUnits.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
                  v25 = newOrders.m_nUnits.m_Size;
                }
                newOrders.m_nUnits.m_Size = v25 + 1;
                v26 = &newOrders.m_nUnits.m_Memory.m_pMemory[v23];
                if ( v26 != 0 )
                  break;
              }
            }
          }
        }
      }
      ++i;
      ++v13;
      if ( this->m_hMinions.m_Size <= i )
        goto LABEL_33;
    }
    v26->m_Data = m_Data;
    ++i;
  }
LABEL_33:
  newOrders.m_nOrderType = 10;
  CDOTA_Bot::ExecuteOrder(this, &newOrders);
  newOrders.m_nUnits.m_Size = 0;
  if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
    if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
  }
}


// CDOTA_Bot::Action_Stop  (line 3637, @0x0000000002803780, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, GrowMemory, HasFlyMovementCapability, HasMovementCapability, InState, IndexToIdentity, IsControllableByPlayer, IsNightmared, IsStunned, IsValid, LookupEntity, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetPlayerID, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CDOTA_Bot::ExecuteOrder, CUtlMemory<CEntityIndex, int>::Purge, CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Bot::ClearActions, CDOTA_BotAction_Idle::OnStart
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot::Action_Stop(CDOTA_Bot *const this)
{
  EHANDLE *p_m_hUnit; // rbx
  unsigned __int64 PlayerID; // r12
  CEntityInstance *v4; // rax
  CEntityInstance *v5; // rdx
  HSCRIPT m_hScope; // rax
  int v7; // ecx
  CEntityInstance *v8; // rax
  const CEntityInstance *v9; // rdi
  __int64 m_Size; // rbx
  CEntityIndex v11; // r12d
  CEntityIndex *v12; // rdx
  __int64 v13; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CEntityInstance *m_pInstance; // r14
  int (**vptr_IHandleEntity)(...); // rax
  CEntityIndex v22; // eax
  __int64 v23; // r14
  int32 m_Data; // r15d
  int v25; // eax
  CEntityIndex *v26; // rax
  CUnitOrders newOrders; // [rsp+10h] [rbp-70h] BYREF

  p_m_hUnit = &this->m_hUnit;
  PlayerID = CDOTA_Bot::GetPlayerID(this);
  v4 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
    v5 = v4;
  else
    v5 = 0;
  m_hScope = v5[61].m_hPrivateScope.m_hScope;
  v7 = -1;
  if ( _bittest64(&m_hScope, PlayerID) )
    v7 = CDOTA_Bot::GetPlayerID(this);
  newOrders.m_bQueue = 0;
  newOrders.m_nUnits.m_Size = 0;
  memset(&newOrders.m_nUnits.m_Memory, 0, 28);
  newOrders.m_nOrderSequenceNumber = 0;
  newOrders.m_vPosition = vec3_origin;
  newOrders.m_nIssuerPlayerIndex = v7;
  v8 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
    v9 = v8;
  else
    v9 = 0;
  m_Size = newOrders.m_nUnits.m_Size;
  v11.m_Data = CEntityInstance::GetEntityIndex(v9).m_Data;
  CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
  ++newOrders.m_nUnits.m_Size;
  v12 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
  if ( v12 != 0 )
    v12->m_Data = v11.m_Data;
  v13 = 0;
  for ( i = 0; this->m_hMinions.m_Size > i; ++v13 )
  {
    while ( 1 )
    {
      v15 = &this->m_hMinions.m_Memory.m_pMemory[v13];
      m_Index = v15->m_Index;
      if ( v15->m_Index + 2 > 1 )
      {
        v17 = v15->m_Index;
        v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
        if ( v18 != 0 )
        {
          v19 = &v18[v17 & 0x1FF];
          if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
          {
            m_pInstance = v19->m_pInstance;
            if ( v19->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && LOBYTE(m_pInstance[71].m_pEntity) != 0
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(v19->m_pInstance) != 0 )
            {
              vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
              if ( ((BYTE4(m_pInstance[50].m_CScriptComponent) & 3) != 0
                 || (BYTE3(vptr_IHandleEntity) & 1 | ((vptr_IHandleEntity & 0x200000000LL) != 0)) != 0)
                && (vptr_IHandleEntity & 1) == 0
                && (m_pInstance[58]._vptr_IHandleEntity & 0x20) == 0
                && (m_pInstance[58]._vptr_IHandleEntity & 0x800) == 0
                && *&m_pInstance[45].m_worldGroupId.m_nHashCode == 0 )
              {
                v22.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
                v23 = newOrders.m_nUnits.m_Size;
                m_Data = v22.m_Data;
                v25 = newOrders.m_nUnits.m_Size;
                if ( newOrders.m_nUnits.m_Size == newOrders.m_nUnits.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
                  v25 = newOrders.m_nUnits.m_Size;
                }
                newOrders.m_nUnits.m_Size = v25 + 1;
                v26 = &newOrders.m_nUnits.m_Memory.m_pMemory[v23];
                if ( v26 != 0 )
                  break;
              }
            }
          }
        }
      }
      ++i;
      ++v13;
      if ( this->m_hMinions.m_Size <= i )
        goto LABEL_33;
    }
    v26->m_Data = m_Data;
    ++i;
  }
LABEL_33:
  newOrders.m_nOrderType = 21;
  CDOTA_Bot::ExecuteOrder(this, &newOrders);
  newOrders.m_nUnits.m_Size = 0;
  if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
    if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
  }
}


// CDOTA_Bot::Action_Attack  (line 3660, @0x0000000002804060, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, GrowMemory, HasAttackCapability, InState, IndexToIdentity, IsControllableByPlayer, IsDisarmed, IsNightmared, IsStunned, IsValid, LookupEntity, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetPlayerID, CEntityHandle::operator CEntityInstance*, CUtlMemory<CEntityIndex, int>::Grow, CEntityInstance::GetEntityIndex, CDOTA_Bot::ExecuteOrder, CUtlMemory<CEntityIndex, int>::Purge, Warning, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BotAction_Attack::OnStart
// strings: "CDOTA_Bot::Action_Attack called with NULL target.\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot::Action_Attack(CDOTA_Bot *const this, CBaseEntity *pTarget, CEntityIndex iEntIndex)
{
  EHANDLE *p_m_hUnit; // r12
  unsigned __int64 PlayerID; // r14
  CEntityInstance *v7; // rax
  __int64 v8; // rsi
  CEntityInstance *v9; // rdx
  HSCRIPT m_hScope; // rax
  __int64 v11; // rdx
  CEntityInstance *v12; // rax
  const CEntityInstance *v13; // rdi
  __int64 m_Size; // rbx
  CEntityIndex v15; // r12d
  CEntityIndex *v16; // rax
  __int64 v17; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v19; // rdx
  uint32 m_Index; // eax
  __int16 v21; // cx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CEntityInstance *m_pInstance; // r14
  CEntityIndex v25; // eax
  __int64 v26; // r14
  int32 m_Data; // r15d
  int v28; // eax
  CEntityIndex *v29; // rax
  CUnitOrders newOrders; // [rsp+20h] [rbp-70h] BYREF

  p_m_hUnit = &this->m_hUnit;
  PlayerID = CDOTA_Bot::GetPlayerID(this);
  v7 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v9 = v7;
  else
    v9 = 0;
  m_hScope = v9[61].m_hPrivateScope.m_hScope;
  v11 = 0xFFFFFFFFLL;
  if ( _bittest64(&m_hScope, PlayerID) )
  {
    v11 = CDOTA_Bot::GetPlayerID(this);
    if ( pTarget != 0 )
      goto LABEL_6;
LABEL_41:
    Warning("CDOTA_Bot::Action_Attack called with NULL target.\n", v8, v11);
    return;
  }
  if ( pTarget == 0 )
    goto LABEL_41;
LABEL_6:
  newOrders.m_bQueue = 0;
  newOrders.m_nUnits.m_Size = 0;
  memset(&newOrders.m_nUnits.m_Memory, 0, 28);
  newOrders.m_nOrderSequenceNumber = 0;
  newOrders.m_vPosition = vec3_origin;
  newOrders.m_nIssuerPlayerIndex = v11;
  if ( iEntIndex.m_Data == -1 )
  {
    v12 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
      v13 = v12;
    else
      v13 = 0;
    m_Size = newOrders.m_nUnits.m_Size;
    v15.m_Data = CEntityInstance::GetEntityIndex(v13).m_Data;
    CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
    ++newOrders.m_nUnits.m_Size;
    v16 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
    if ( v16 != 0 )
      v16->m_Data = v15.m_Data;
    v17 = 0;
    for ( i = 0; this->m_hMinions.m_Size > i; ++v17 )
    {
      v19 = &this->m_hMinions.m_Memory.m_pMemory[v17];
      m_Index = v19->m_Index;
      if ( v19->m_Index + 2 > 1 )
      {
        v21 = v19->m_Index;
        v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v19->m_Index) >> 9) & 0x3F];
        if ( v22 != 0 )
        {
          v23 = &v22[v21 & 0x1FF];
          if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
          {
            m_pInstance = v23->m_pInstance;
            if ( v23->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && LOBYTE(m_pInstance[71].m_pEntity) != 0
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(v23->m_pInstance) != 0
              && (*(&m_pInstance[50].m_worldGroupId + 1) & 3) != 0
              && (m_pInstance[58]._vptr_IHandleEntity & 2) == 0
              && (m_pInstance[58]._vptr_IHandleEntity & 0x20) == 0
              && (m_pInstance[58]._vptr_IHandleEntity & 0x800) == 0
              && *&m_pInstance[45].m_worldGroupId.m_nHashCode == 0 )
            {
              v25.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
              v26 = newOrders.m_nUnits.m_Size;
              m_Data = v25.m_Data;
              v28 = newOrders.m_nUnits.m_Size;
              if ( newOrders.m_nUnits.m_Size == newOrders.m_nUnits.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
                v28 = newOrders.m_nUnits.m_Size;
              }
              newOrders.m_nUnits.m_Size = v28 + 1;
              v29 = &newOrders.m_nUnits.m_Memory.m_pMemory[v26];
              if ( v29 != 0 )
                v29->m_Data = m_Data;
            }
          }
        }
      }
      ++i;
    }
  }
  else
  {
    CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
    ++newOrders.m_nUnits.m_Size;
    if ( newOrders.m_nUnits.m_Memory.m_pMemory != 0 )
      newOrders.m_nUnits.m_Memory.m_pMemory->m_Data = iEntIndex.m_Data;
  }
  newOrders.m_nOrderType = 4;
  newOrders.m_nTargetIndex = CEntityInstance::GetEntityIndex(pTarget);
  CDOTA_Bot::ExecuteOrder(this, &newOrders);
  newOrders.m_nUnits.m_Size = 0;
  if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
    if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
  }
}


// CDOTA_Bot::Action_AttackMove  (line 3699, @0x00000000028045f0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, GrowMemory, HasAttackCapability, InState, IndexToIdentity, IsControllableByPlayer, IsDisarmed, IsNightmared, IsStunned, IsValid, LookupEntity, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetPlayerID, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CDOTA_Bot::ExecuteOrder, CUtlMemory<CEntityIndex, int>::Purge, CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BotAction_AttackMove::OnStart
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot::Action_AttackMove(CDOTA_Bot *const this, const Vector *const vLoc)
{
  EHANDLE *p_m_hUnit; // rbx
  unsigned __int64 PlayerID; // r12
  CEntityInstance *v5; // rax
  CEntityInstance *v6; // rdx
  HSCRIPT m_hScope; // rax
  int v8; // ecx
  CEntityInstance *v9; // rax
  const CEntityInstance *v10; // rdi
  __int64 m_Size; // rbx
  CEntityIndex v12; // r12d
  CEntityIndex *v13; // rax
  __int64 v14; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *m_pInstance; // r14
  CEntityIndex v22; // eax
  __int64 v23; // r14
  int32 m_Data; // r15d
  int v25; // eax
  CEntityIndex *v26; // rax
  CUnitOrders newOrders; // [rsp+20h] [rbp-70h] BYREF

  p_m_hUnit = &this->m_hUnit;
  PlayerID = CDOTA_Bot::GetPlayerID(this);
  v5 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
    v6 = v5;
  else
    v6 = 0;
  m_hScope = v6[61].m_hPrivateScope.m_hScope;
  v8 = -1;
  if ( _bittest64(&m_hScope, PlayerID) )
    v8 = CDOTA_Bot::GetPlayerID(this);
  newOrders.m_bQueue = 0;
  newOrders.m_nUnits.m_Size = 0;
  memset(&newOrders.m_nUnits.m_Memory, 0, 28);
  newOrders.m_nOrderSequenceNumber = 0;
  newOrders.m_vPosition = vec3_origin;
  newOrders.m_nIssuerPlayerIndex = v8;
  v9 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    v10 = v9;
  else
    v10 = 0;
  m_Size = newOrders.m_nUnits.m_Size;
  v12.m_Data = CEntityInstance::GetEntityIndex(v10).m_Data;
  CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
  ++newOrders.m_nUnits.m_Size;
  v13 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
  if ( v13 != 0 )
    v13->m_Data = v12.m_Data;
  v14 = 0;
  for ( i = 0; this->m_hMinions.m_Size > i; ++v14 )
  {
    while ( 1 )
    {
      v16 = &this->m_hMinions.m_Memory.m_pMemory[v14];
      m_Index = v16->m_Index;
      if ( v16->m_Index + 2 > 1 )
      {
        v18 = v16->m_Index;
        v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
        if ( v19 != 0 )
        {
          v20 = &v19[v18 & 0x1FF];
          if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
          {
            m_pInstance = v20->m_pInstance;
            if ( v20->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && LOBYTE(m_pInstance[71].m_pEntity) != 0
              && (*(m_pInstance->_vptr_IHandleEntity + 408))(v20->m_pInstance) != 0
              && (*(&m_pInstance[50].m_worldGroupId + 1) & 3) != 0
              && (m_pInstance[58]._vptr_IHandleEntity & 2) == 0
              && (m_pInstance[58]._vptr_IHandleEntity & 0x20) == 0
              && (m_pInstance[58]._vptr_IHandleEntity & 0x800) == 0
              && *&m_pInstance[45].m_worldGroupId.m_nHashCode == 0 )
            {
              v22.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
              v23 = newOrders.m_nUnits.m_Size;
              m_Data = v22.m_Data;
              v25 = newOrders.m_nUnits.m_Size;
              if ( newOrders.m_nUnits.m_Size == newOrders.m_nUnits.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
                v25 = newOrders.m_nUnits.m_Size;
              }
              newOrders.m_nUnits.m_Size = v25 + 1;
              v26 = &newOrders.m_nUnits.m_Memory.m_pMemory[v23];
              if ( v26 != 0 )
                break;
            }
          }
        }
      }
      ++i;
      ++v14;
      if ( this->m_hMinions.m_Size <= i )
        goto LABEL_32;
    }
    v26->m_Data = m_Data;
    ++i;
  }
LABEL_32:
  newOrders.m_nOrderType = 3;
  newOrders.m_vPosition = *vLoc;
  CDOTA_Bot::ExecuteOrder(this, &newOrders);
  newOrders.m_nUnits.m_Size = 0;
  if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
    if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
  }
}


// CDOTA_Bot::Action_UseAbility  (line 3724, @0x0000000002804980, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetInstance, GetUnit, GrowMemory, IsControllableByPlayer, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetPlayerID, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CDOTA_Bot::ExecuteOrder, CUtlMemory<CEntityIndex, int>::Purge, CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BotAction_UseAbility::OnStart
void __fastcall CDOTA_Bot::Action_UseAbility(CDOTA_Bot *const this, CDOTABaseAbility *pAbility)
{
  EHANDLE *p_m_hUnit; // r13
  unsigned __int64 PlayerID; // r14
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // rdx
  HSCRIPT m_hScope; // rax
  int v9; // ecx
  CEntityInstance *v10; // rax
  const CEntityInstance *v11; // rdi
  __int64 m_Size; // r13
  CEntityIndex v13; // r15d
  CEntityIndex *v14; // rax
  CUnitOrders newOrders; // [rsp+0h] [rbp-70h] BYREF

  p_m_hUnit = &this->m_hUnit;
  PlayerID = CDOTA_Bot::GetPlayerID(this);
  v6 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
    v7 = v6;
  else
    v7 = 0;
  m_hScope = v7[61].m_hPrivateScope.m_hScope;
  v9 = -1;
  if ( _bittest64(&m_hScope, PlayerID) )
    v9 = CDOTA_Bot::GetPlayerID(this);
  newOrders.m_bQueue = 0;
  newOrders.m_nUnits.m_Size = 0;
  memset(&newOrders.m_nUnits.m_Memory, 0, 28);
  newOrders.m_nOrderSequenceNumber = 0;
  newOrders.m_vPosition = vec3_origin;
  newOrders.m_nIssuerPlayerIndex = v9;
  v10 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
    v11 = v10;
  else
    v11 = 0;
  m_Size = newOrders.m_nUnits.m_Size;
  v13.m_Data = CEntityInstance::GetEntityIndex(v11).m_Data;
  CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
  ++newOrders.m_nUnits.m_Size;
  v14 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
  if ( v14 != 0 )
    v14->m_Data = v13.m_Data;
  newOrders.m_nOrderType = 0;
  newOrders.m_nAbilityIndex = CEntityInstance::GetEntityIndex(pAbility);
  if ( ((*(pAbility->_vptr_IHandleEntity + 251))(pAbility) & 0x200) != 0 )
  {
    newOrders.m_nOrderType = 9;
  }
  else if ( ((*(pAbility->_vptr_IHandleEntity + 251))(pAbility) & 0x1000) != 0 )
  {
    newOrders.m_nOrderType = 20;
  }
  else if ( ((*(pAbility->_vptr_IHandleEntity + 251))(pAbility) & 4) != 0 )
  {
    newOrders.m_nOrderType = 8;
  }
  CDOTA_Bot::ExecuteOrder(this, &newOrders);
  newOrders.m_nUnits.m_Size = 0;
  if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
    if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
  }
}


// CDOTA_Bot::Action_UseAbilityOnEntity  (line 3754, @0x0000000002804bc0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetInstance, GetUnit, GrowMemory, IsControllableByPlayer, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetPlayerID, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CDOTA_Bot::ExecuteOrder, CUtlMemory<CEntityIndex, int>::Purge, Warning, CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BotAction_UseAbility::OnStart, CDOTA_BotAction_DispenseWard::OnStart
// strings: "CDOTA_Bot::Action_UseAbilityOnEntity called with NULL target.\n"
void __fastcall CDOTA_Bot::Action_UseAbilityOnEntity(
        CDOTA_Bot *const this,
        CDOTABaseAbility *pAbility,
        CDOTA_BaseNPC *pTarget)
{
  EHANDLE *p_m_hUnit; // r12
  unsigned __int64 PlayerID; // r13
  CEntityInstance *v7; // rax
  __int64 v8; // rsi
  CEntityInstance *v9; // rdx
  HSCRIPT m_hScope; // rax
  __int64 v11; // rcx
  CEntityInstance *v12; // rax
  const CEntityInstance *v13; // rdi
  __int64 m_Size; // r12
  CEntityIndex v15; // r15d
  CEntityIndex *v16; // rax
  CUnitOrders newOrders; // [rsp+10h] [rbp-70h] BYREF

  p_m_hUnit = &this->m_hUnit;
  PlayerID = CDOTA_Bot::GetPlayerID(this);
  v7 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v9 = v7;
  else
    v9 = 0;
  m_hScope = v9[61].m_hPrivateScope.m_hScope;
  v11 = 0xFFFFFFFFLL;
  if ( !_bittest64(&m_hScope, PlayerID) )
  {
    if ( pTarget != 0 )
      goto LABEL_6;
LABEL_19:
    Warning("CDOTA_Bot::Action_UseAbilityOnEntity called with NULL target.\n", v8, v9, v11);
    return;
  }
  v11 = CDOTA_Bot::GetPlayerID(this);
  if ( pTarget == 0 )
    goto LABEL_19;
LABEL_6:
  newOrders.m_bQueue = 0;
  newOrders.m_nUnits.m_Size = 0;
  memset(&newOrders.m_nUnits.m_Memory, 0, 28);
  newOrders.m_nOrderSequenceNumber = 0;
  newOrders.m_vPosition = vec3_origin;
  newOrders.m_nIssuerPlayerIndex = v11;
  v12 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
    v13 = v12;
  else
    v13 = 0;
  m_Size = newOrders.m_nUnits.m_Size;
  v15.m_Data = CEntityInstance::GetEntityIndex(v13).m_Data;
  CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
  ++newOrders.m_nUnits.m_Size;
  v16 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
  if ( v16 != 0 )
    v16->m_Data = v15.m_Data;
  newOrders.m_nOrderType = 6;
  newOrders.m_nAbilityIndex = CEntityInstance::GetEntityIndex(pAbility);
  newOrders.m_nTargetIndex = CEntityInstance::GetEntityIndex(pTarget);
  CDOTA_Bot::ExecuteOrder(this, &newOrders);
  newOrders.m_nUnits.m_Size = 0;
  if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
    if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
  }
}


// CDOTA_Bot::Action_UseAbilityOnLocation  (line 3779, @0x0000000002804dd0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetInstance, GetUnit, GrowMemory, IsControllableByPlayer, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetPlayerID, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CDOTA_Bot::ExecuteOrder, CUtlMemory<CEntityIndex, int>::Purge, CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BotAction_UseAbility::OnStart
void __fastcall CDOTA_Bot::Action_UseAbilityOnLocation(
        CDOTA_Bot *const this,
        CDOTABaseAbility *pAbility,
        const Vector *const vLocation)
{
  EHANDLE *p_m_hUnit; // r13
  unsigned __int64 PlayerID; // r14
  CEntityInstance *v7; // rax
  CEntityInstance *v8; // rdx
  HSCRIPT m_hScope; // rax
  int v10; // ecx
  CEntityInstance *v11; // rax
  const CEntityInstance *v12; // rdi
  __int64 m_Size; // r13
  CEntityIndex v14; // r15d
  CEntityIndex *v15; // rax
  CEntityIndex v16; // eax
  vec_t x; // xmm0_4
  CUnitOrders newOrders; // [rsp+10h] [rbp-70h] BYREF

  p_m_hUnit = &this->m_hUnit;
  PlayerID = CDOTA_Bot::GetPlayerID(this);
  v7 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  m_hScope = v8[61].m_hPrivateScope.m_hScope;
  v10 = -1;
  if ( _bittest64(&m_hScope, PlayerID) )
    v10 = CDOTA_Bot::GetPlayerID(this);
  newOrders.m_bQueue = 0;
  newOrders.m_nUnits.m_Size = 0;
  memset(&newOrders.m_nUnits.m_Memory, 0, 28);
  newOrders.m_nOrderSequenceNumber = 0;
  newOrders.m_vPosition = vec3_origin;
  newOrders.m_nIssuerPlayerIndex = v10;
  v11 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  m_Size = newOrders.m_nUnits.m_Size;
  v14.m_Data = CEntityInstance::GetEntityIndex(v12).m_Data;
  CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
  ++newOrders.m_nUnits.m_Size;
  v15 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
  if ( v15 != 0 )
    v15->m_Data = v14.m_Data;
  newOrders.m_nOrderType = 5;
  v16.m_Data = CEntityInstance::GetEntityIndex(pAbility).m_Data;
  x = vLocation->x;
  newOrders.m_nAbilityIndex = v16;
  newOrders.m_vPosition.x = x;
  newOrders.m_vPosition.y = vLocation->y;
  newOrders.m_vPosition.z = vLocation->z;
  CDOTA_Bot::ExecuteOrder(this, &newOrders);
  newOrders.m_nUnits.m_Size = 0;
  if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
    if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
  }
}


// CDOTA_Bot::Action_UseAbilityOnTree  (line 3797, @0x0000000002804fd0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetInstance, GetUnit, GrowMemory, IsControllableByPlayer, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetPlayerID, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CDOTA_Bot::ExecuteOrder, CUtlMemory<CEntityIndex, int>::Purge, CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BotAction_UseAbility::OnStart
void __fastcall CDOTA_Bot::Action_UseAbilityOnTree(CDOTA_Bot *const this, CDOTABaseAbility *pAbility, int iTree)
{
  EHANDLE *p_m_hUnit; // r12
  unsigned __int64 PlayerID; // r13
  CEntityInstance *v7; // rax
  CEntityInstance *v8; // rdx
  HSCRIPT m_hScope; // rax
  int v10; // ecx
  CEntityInstance *v11; // rax
  const CEntityInstance *v12; // rdi
  __int64 m_Size; // r12
  CEntityIndex v14; // r15d
  CEntityIndex *v15; // rax
  CUnitOrders newOrders; // [rsp+10h] [rbp-70h] BYREF

  p_m_hUnit = &this->m_hUnit;
  PlayerID = CDOTA_Bot::GetPlayerID(this);
  v7 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  m_hScope = v8[61].m_hPrivateScope.m_hScope;
  v10 = -1;
  if ( _bittest64(&m_hScope, PlayerID) )
    v10 = CDOTA_Bot::GetPlayerID(this);
  newOrders.m_bQueue = 0;
  newOrders.m_nUnits.m_Size = 0;
  memset(&newOrders.m_nUnits.m_Memory, 0, 28);
  newOrders.m_nOrderSequenceNumber = 0;
  newOrders.m_vPosition = vec3_origin;
  newOrders.m_nIssuerPlayerIndex = v10;
  v11 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  m_Size = newOrders.m_nUnits.m_Size;
  v14.m_Data = CEntityInstance::GetEntityIndex(v12).m_Data;
  CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
  ++newOrders.m_nUnits.m_Size;
  v15 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
  if ( v15 != 0 )
    v15->m_Data = v14.m_Data;
  newOrders.m_nOrderType = 7;
  newOrders.m_nAbilityIndex = CEntityInstance::GetEntityIndex(pAbility);
  newOrders.m_nTargetIndex.m_Data = iTree;
  CDOTA_Bot::ExecuteOrder(this, &newOrders);
  newOrders.m_nUnits.m_Size = 0;
  if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
    if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
  }
}


// CDOTA_Bot::Action_PickUpRune  (line 3817, @0x00000000028055e0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetInstance, GetUnit, GrowMemory, IsControllableByPlayer, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetPlayerID, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CDOTA_Bot::ExecuteOrder, CUtlMemory<CEntityIndex, int>::Purge, CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BotAction_PickUpRune::OnStart
void __fastcall CDOTA_Bot::Action_PickUpRune(CDOTA_Bot *const this, CBaseEntity *pRune)
{
  EHANDLE *p_m_hUnit; // r12
  unsigned __int64 PlayerID; // r13
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // rdx
  HSCRIPT m_hScope; // rax
  int v9; // ecx
  CEntityInstance *v10; // rax
  const CEntityInstance *v11; // rdi
  __int64 m_Size; // r12
  CEntityIndex v13; // r15d
  CEntityIndex *v14; // rax
  CUnitOrders newOrders; // [rsp+0h] [rbp-70h] BYREF

  p_m_hUnit = &this->m_hUnit;
  PlayerID = CDOTA_Bot::GetPlayerID(this);
  v6 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
    v7 = v6;
  else
    v7 = 0;
  m_hScope = v7[61].m_hPrivateScope.m_hScope;
  v9 = -1;
  if ( _bittest64(&m_hScope, PlayerID) )
    v9 = CDOTA_Bot::GetPlayerID(this);
  newOrders.m_bQueue = 0;
  newOrders.m_nUnits.m_Size = 0;
  memset(&newOrders.m_nUnits.m_Memory, 0, 28);
  newOrders.m_nOrderSequenceNumber = 0;
  newOrders.m_vPosition = vec3_origin;
  newOrders.m_nIssuerPlayerIndex = v9;
  v10 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
    v11 = v10;
  else
    v11 = 0;
  m_Size = newOrders.m_nUnits.m_Size;
  v13.m_Data = CEntityInstance::GetEntityIndex(v11).m_Data;
  CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
  ++newOrders.m_nUnits.m_Size;
  v14 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
  if ( v14 != 0 )
    v14->m_Data = v13.m_Data;
  newOrders.m_nOrderType = 15;
  newOrders.m_nTargetIndex = CEntityInstance::GetEntityIndex(pRune);
  CDOTA_Bot::ExecuteOrder(this, &newOrders);
  newOrders.m_nUnits.m_Size = 0;
  if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
    if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
  }
}


// CDOTA_Bot::Action_PickUpItem  (line 3834, @0x0000000002805830, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetInstance, GetUnit, GrowMemory, IsControllableByPlayer, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator->, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetPlayerID, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CDOTA_Bot::ExecuteOrder, CUtlMemory<CEntityIndex, int>::Purge, CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BotAction_PickUpItem::OnStart
void __fastcall CDOTA_Bot::Action_PickUpItem(CDOTA_Bot *const this, const CEntityHandle *hItem)
{
  EHANDLE *p_m_hUnit; // r12
  unsigned __int64 PlayerID; // r13
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // rdx
  HSCRIPT m_hScope; // rax
  int v9; // ecx
  CEntityInstance *v10; // rax
  const CEntityInstance *v11; // rdi
  __int64 m_Size; // r12
  CEntityIndex v13; // r15d
  CEntityIndex *v14; // rax
  CEntityInstance *v15; // rax
  CUnitOrders newOrders; // [rsp+0h] [rbp-70h] BYREF

  p_m_hUnit = &this->m_hUnit;
  PlayerID = CDOTA_Bot::GetPlayerID(this);
  v6 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
    v7 = v6;
  else
    v7 = 0;
  m_hScope = v7[61].m_hPrivateScope.m_hScope;
  v9 = -1;
  if ( _bittest64(&m_hScope, PlayerID) )
    v9 = CDOTA_Bot::GetPlayerID(this);
  newOrders.m_bQueue = 0;
  newOrders.m_nUnits.m_Size = 0;
  memset(&newOrders.m_nUnits.m_Memory, 0, 28);
  newOrders.m_nOrderSequenceNumber = 0;
  newOrders.m_vPosition = vec3_origin;
  newOrders.m_nIssuerPlayerIndex = v9;
  v10 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
    v11 = v10;
  else
    v11 = 0;
  m_Size = newOrders.m_nUnits.m_Size;
  v13.m_Data = CEntityInstance::GetEntityIndex(v11).m_Data;
  CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
  ++newOrders.m_nUnits.m_Size;
  v14 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
  if ( v14 != 0 )
    v14->m_Data = v13.m_Data;
  newOrders.m_nOrderType = 14;
  v15 = CEntityHandle::operator CEntityInstance *(hItem);
  newOrders.m_nTargetIndex = CEntityInstance::GetEntityIndex(v15);
  CDOTA_Bot::ExecuteOrder(this, &newOrders);
  newOrders.m_nUnits.m_Size = 0;
  if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
    if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
  }
}


// CDOTA_Bot::Action_DropItem  (line 3851, @0x0000000002805aa0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetInstance, GetUnit, GrowMemory, IsControllableByPlayer, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator->, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Bot::GetPlayerID, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CDOTA_Bot::ExecuteOrder, CUtlMemory<CEntityIndex, int>::Purge, CUtlMemory<CEntityIndex, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_BotAction_DropItem::OnStart
void __fastcall CDOTA_Bot::Action_DropItem(
        CDOTA_Bot *const this,
        const CEntityHandle *hItem,
        const Vector *const vLocation)
{
  EHANDLE *p_m_hUnit; // r13
  unsigned __int64 PlayerID; // r14
  CEntityInstance *v7; // rax
  CEntityInstance *v8; // rdx
  HSCRIPT m_hScope; // rax
  int v10; // ecx
  CEntityInstance *v11; // rax
  const CEntityInstance *v12; // rdi
  __int64 m_Size; // r13
  CEntityIndex v14; // r15d
  CEntityIndex *v15; // rax
  CEntityInstance *v16; // rax
  CEntityIndex v17; // eax
  vec_t x; // xmm0_4
  CUnitOrders newOrders; // [rsp+10h] [rbp-70h] BYREF

  p_m_hUnit = &this->m_hUnit;
  PlayerID = CDOTA_Bot::GetPlayerID(this);
  v7 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
    v8 = v7;
  else
    v8 = 0;
  m_hScope = v8[61].m_hPrivateScope.m_hScope;
  v10 = -1;
  if ( _bittest64(&m_hScope, PlayerID) )
    v10 = CDOTA_Bot::GetPlayerID(this);
  newOrders.m_bQueue = 0;
  newOrders.m_nUnits.m_Size = 0;
  memset(&newOrders.m_nUnits.m_Memory, 0, 28);
  newOrders.m_nOrderSequenceNumber = 0;
  newOrders.m_vPosition = vec3_origin;
  newOrders.m_nIssuerPlayerIndex = v10;
  v11 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v11 != 0 && BYTE3(v11[7]._vptr_IHandleEntity) != 0 )
    v12 = v11;
  else
    v12 = 0;
  m_Size = newOrders.m_nUnits.m_Size;
  v14.m_Data = CEntityInstance::GetEntityIndex(v12).m_Data;
  CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
  ++newOrders.m_nUnits.m_Size;
  v15 = &newOrders.m_nUnits.m_Memory.m_pMemory[m_Size];
  if ( v15 != 0 )
    v15->m_Data = v14.m_Data;
  newOrders.m_nOrderType = 12;
  v16 = CEntityHandle::operator CEntityInstance *(hItem);
  v17.m_Data = CEntityInstance::GetEntityIndex(v16).m_Data;
  x = vLocation->x;
  newOrders.m_nAbilityIndex = v17;
  newOrders.m_vPosition.x = x;
  newOrders.m_vPosition.y = vLocation->y;
  newOrders.m_vPosition.z = vLocation->z;
  CDOTA_Bot::ExecuteOrder(this, &newOrders);
  newOrders.m_nUnits.m_Size = 0;
  if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
    if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
  }
}


// CDOTA_Bot::DrawDebug  (line 3869, @0x00000000027f8c80, libserver.so)  // inlines: CEntityHandle, CHandle, Element, Get, GetAction, GetBotByIndex, GetEHandle, GetEntryIndex, GetInstance, GetOpposingTeamCommander, GetSerialNumber, GetUnit, GetUnitName, IsConsideredHero, RemapValClamped, Set, String, ToCStr, ToDOTABaseNPC, Top, clamp<float, float>, operator CBaseEntity*, operator[]
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Commander::IsDebuggingEntity, CDOTA_TeamCommander::GetOpposingTeamCommander, CFmtStrN<256, false>::CFmtStrN, CBaseEntity::EntityText, __stack_chk_fail
// callers: CDOTA_Bot::Think
// strings: "%s: %2.2f", "Mode: %s", "Action: %d - %s"
// globals: g_DOTACommander
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Bot::DrawDebug(CDOTA_Bot *const this)
{
  EHANDLE *p_m_hUnit; // r15
  CEntityInstance *v3; // rax
  CEntityInstance *v4; // rax
  CDOTA_BotMode *v5; // r14
  __int64 v6; // rbx
  CDOTA_TeamCommander *OpposingTeamCommander; // rax
  CDOTA_TeamCommander *v8; // rax
  const CEntityHandle *v9; // rdi
  CEntityInstance *v10; // rax
  CEntityInstance *v11; // r13
  const char *v12; // rsi
  __int64 v13; // rax
  double v14; // xmm0_8
  float v15; // xmm1_4
  int v16; // ecx
  int v17; // r8d
  CEntityInstance *v18; // rax
  CBaseEntity *v19; // rdi
  CEntityIdentity *v20; // rdx
  int v21; // eax
  __int16 v22; // cx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v24; // cx
  __int64 v25; // rax
  ILocalize *v26; // r13
  __int64 (__fastcall *v27)(ILocalize *, const char *); // r14
  CEntityInstance *v28; // rax
  const char *m_pAsString; // rsi
  __int64 v30; // rax
  CEntityInstance *v31; // rax
  CBaseEntity *v32; // rdi
  int v33; // r14d
  const char *v34; // rax
  CEntityInstance *v35; // rax
  CBaseEntity *v36; // rdi
  int m_Size; // eax
  CDOTA_BotAction *v38; // rdi
  __int64 v39; // rax
  CDOTA_BotAction *v40; // rdi
  const char *v41; // rcx
  int v42; // eax
  int v43; // eax
  CEntityInstance *v44; // rax
  CBaseEntity *v45; // rdi
  int g; // [rsp+18h] [rbp-578h]
  const char *ga; // [rsp+18h] [rbp-578h]
  int offset; // [rsp+24h] [rbp-56Ch]
  int offseta; // [rsp+24h] [rbp-56Ch]
  int r; // [rsp+28h] [rbp-568h]
  int ra; // [rsp+28h] [rbp-568h]
  int colorInfo; // [rsp+30h] [rbp-560h] OVERLAPPED BYREF
  CFmtStrN<256,false> v53; // [rsp+40h] [rbp-550h] BYREF
  char nameBuffer[1032]; // [rsp+150h] [rbp-440h] BYREF
  unsigned __int64 v55; // [rsp+558h] [rbp-38h]

  p_m_hUnit = &this->m_hUnit;
  v55 = __readfsqword(0x28u);
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hUnit);
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
  {
    colorInfo = -1;
    m_pEntity = v3->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v24 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      colorInfo = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v24 & 0x7FFF;
    }
  }
  else
  {
    colorInfo = -1;
  }
  if ( CDOTA_Commander::IsDebuggingEntity(&g_DOTACommander, DOTA_BOT_DEBUG_STATE::DOTA_BOT_DEBUG, &colorInfo) )
  {
    v25 = (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 12))(this->m_pActiveBotMode);
    LOWORD(colorInfo) = v25;
    BYTE2(colorInfo) = BYTE2(v25);
    v26 = g_pVGuiLocalize;
    v27 = *(*g_pVGuiLocalize + 104LL);
    v28 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v28 == 0 || BYTE3(v28[7]._vptr_IHandleEntity) == 0 )
      v28 = 0;
    m_pAsString = "";
    if ( v28[70].m_iszPrivateVScripts.u.m_Id != 0 )
      m_pAsString = v28[70].m_iszPrivateVScripts.u.m_pAsString;
    v30 = v27(v26, m_pAsString);
    (*(*g_pVGuiLocalize + 128LL))(g_pVGuiLocalize, v30, nameBuffer, 1024);
    v31 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v31 != 0 && BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
      v32 = v31;
    else
      v32 = 0;
    CBaseEntity::EntityText(v32, 0, nameBuffer, 0.01023, 255, 255, 255, 255);
    v33 = BYTE2(colorInfo);
    ra = BYTE1(colorInfo);
    offseta = colorInfo;
    v34 = (*(this->m_pActiveBotMode->_vptr_CDOTA_BotMode + 13))(this->m_pActiveBotMode);
    CFmtStrN<256,false>::CFmtStrN(&v53, "Mode: %s", v34);
    v35 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v35 != 0 && BYTE3(v35[7]._vptr_IHandleEntity) != 0 )
      v36 = v35;
    else
      v36 = 0;
    CBaseEntity::EntityText(v36, 1, v53.m_szBuf, 0.01023, offseta, ra, v33, 255);
    m_Size = this->m_ActionStack.m_Size;
    v38 = 0;
    if ( m_Size > 0 )
      v38 = this->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
    v39 = (*(v38->_vptr_CDOTA_BotAction + 3))(v38);
    v40 = 0;
    v41 = v39;
    v42 = this->m_ActionStack.m_Size;
    if ( v42 > 0 )
      v40 = this->m_ActionStack.m_Memory.m_pMemory[v42 - 1];
    ga = v41;
    v43 = (*(v40->_vptr_CDOTA_BotAction + 2))(v40);
    CFmtStrN<256,false>::CFmtStrN(&v53, "Action: %d - %s", v43, ga);
    v44 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
    if ( v44 != 0 && BYTE3(v44[7]._vptr_IHandleEntity) != 0 )
      v45 = v44;
    else
      v45 = 0;
    CBaseEntity::EntityText(v45, 2, v53.m_szBuf, 0.01023, offseta, ra, v33, 255);
  }
  v4 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
  {
    colorInfo = -1;
    v20 = v4->m_pEntity;
    if ( v20 != 0 )
    {
      v21 = (v20->m_EHandle.m_Index >> 15) - (v20->m_flags & 1);
      v22 = 0x7FFF;
      if ( v20->m_EHandle.m_Index != -1 )
        v22 = v20->m_EHandle.m_Index & 0x7FFF;
      LOWORD(colorInfo) = v22 | colorInfo & 0x8000;
      colorInfo = (v21 << 15) | colorInfo & 0x7FFF;
    }
  }
  else
  {
    colorInfo = -1;
  }
  if ( CDOTA_Commander::IsDebuggingEntity(&g_DOTACommander, DOTA_BOT_DEBUG_STATE::DOTA_BOT_DEBUG_ATTACK, &colorInfo) )
  {
    v5 = this->m_pBotModes[2];
    v6 = 0;
    offset = 0;
    while ( v6 < CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pTeamCommander)->m_BotList.m_Size )
    {
      OpposingTeamCommander = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pTeamCommander);
      if ( v6 < OpposingTeamCommander->m_BotList.m_Size && OpposingTeamCommander->m_BotList.m_Memory.m_pMemory[v6] != 0 )
      {
        v8 = CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pTeamCommander);
        v9 = 0;
        if ( v6 < v8->m_BotList.m_Size )
          v9 = v8->m_BotList.m_Memory.m_pMemory[v6];
        v10 = CEntityHandle::operator CEntityInstance *(v9 + 39);
        v11 = v10;
        if ( v10 != 0
          && BYTE3(v10[7]._vptr_IHandleEntity) != 0
          && (v10[43].m_iszPrivateVScripts.u.m_Id & 3) != 0
          && (*(v5->_vptr_CDOTA_BotMode + 16))(v5, v10) != 0 )
        {
          v12 = "";
          if ( v11[70].m_iszPrivateVScripts.u.m_Id != 0 )
            v12 = v11[70].m_iszPrivateVScripts.u.m_pAsString;
          v13 = (*(*g_pVGuiLocalize + 104LL))(g_pVGuiLocalize, v12);
          (*(*g_pVGuiLocalize + 128LL))(g_pVGuiLocalize, v13, nameBuffer, 1024);
          v14 = (*(v5->_vptr_CDOTA_BotMode + 17))(v5, v11);
          v15 = *&v14 / 2.5;
          if ( (*&v14 / 2.5) < 0.0 )
          {
            v16 = 0;
            v17 = 255;
          }
          else
          {
            v16 = 255;
            if ( v15 <= 1.0 )
              v16 = ((255.0 * v15) + 0.0);
            if ( v15 < 0.0 )
            {
              v17 = 255;
            }
            else
            {
              v17 = 0;
              if ( v15 <= 1.0 )
                v17 = ((v15 * -255.0) + 255.0);
            }
          }
          g = v17;
          r = v16;
          CFmtStrN<256,false>::CFmtStrN(&v53, "%s: %2.2f", nameBuffer, *&v14);
          v18 = CEntityHandle::operator CEntityInstance *(p_m_hUnit);
          if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
            v19 = v18;
          else
            v19 = 0;
          CBaseEntity::EntityText(v19, offset++, v53.m_szBuf, 0.01023, r, g, 0, 255);
        }
      }
      ++v6;
    }
  }
}


// CDOTA_Bot::GetOwningHero  (line 3928, @0x00000000027e9790, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_PlayerResource::GetPlayerSelectedHeroHandle
// callers: CDOTA_BotMode::GetOwningHero, CDOTA_TutorialBot_Hero_Axe::Think, CDOTA_TutorialBot_Hero_DragonKnight::Think, CDOTA_TutorialBot_Hero_Juggernaut::Think, CDOTA_TutorialBot_Hero_SkeletonKing::Think, CDOTA_TutorialBot_Hero_Razor::Think, CDOTA_TutorialBot_Hero_Tidehunter::Think, CDOTA_TutorialBot_Hero_VengefulSpirit::Think, CDOTA_TutorialBot_Hero_WitchDoctor::Think
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC_Hero *__fastcall CDOTA_Bot::GetOwningHero(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v2; // rsi
  CEntityIdentity *v3; // rdx
  __int64 v4; // rcx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rdi
  int v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC_Hero *result; // rax
  int v11[4]; // [rsp+0h] [rbp-10h] BYREF

  m_Index = this->m_hUnit.m_Index;
  v2 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = this->m_hUnit.m_Index & 0x1FF, v2 = (8 * v4), (v5 = &v3[v4]) == 0)
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = (*(m_pInstance->_vptr_IHandleEntity + 414))(m_pInstance, v2);
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v11, g_pDOTAPlayerResource, v7);
  if ( (v11[0] + 2) <= 1 )
    return 0;
  v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11[0]) >> 9) & 0x3F];
  if ( v8 == 0 )
    return 0;
  v9 = &v8[v11[0] & 0x1FF];
  if ( v9 == 0 )
    return 0;
  if ( v11[0] != v9->m_EHandle.m_Index )
    return 0;
  result = v9->m_pInstance;
  if ( v9->m_pInstance == 0 || !result->m_bIsDOTANPC || (result->m_iUnitType & 1) == 0 )
    return 0;
  return result;
}


// CDOTA_Bot::GetOpposingTeamCommander  (line 3935, @0x00000000027e98a0, libserver.so)
// calls: CDOTA_TeamCommander::GetOpposingTeamCommander
// callers: CDOTA_BaseNPC_Hero::UpdateBotDifficulty
CDOTA_TeamCommander *__fastcall CDOTA_Bot::GetOpposingTeamCommander(CDOTA_Bot *const this)
{
  return CDOTA_TeamCommander::GetOpposingTeamCommander(this->m_pTeamCommander);
}


// CDOTA_Bot::GetPlayerID  (line 3942, @0x00000000027e98c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// callers: CDOTA_Bot::GetCourierValue, CDOTA_Bot::Action_MoveTo, CDOTA_Bot::Action_Hold, CDOTA_Bot::Action_Stop, CDOTA_Bot::Action_Attack, CDOTA_Bot::Action_AttackMove, CDOTA_Bot::Action_UseAbility, CDOTA_Bot::Action_UseAbilityOnEntity, CDOTA_Bot::Action_UseAbilityOnLocation, CDOTA_Bot::Action_UseAbilityOnTree, CDOTA_Bot::Action_PickUpRune, CDOTA_Bot::Action_PickUpItem (16 total)
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Bot::GetPlayerID(CDOTA_Bot *const this)
{
  CConcreteEntityList *v1; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  __int64 v4; // rcx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rdi

  v1 = CEntityHandle::gm_pEntityList;
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = this->m_hUnit.m_Index & 0x1FF, v1 = (8 * v4), (v5 = &v3[v4]) != 0)
    && m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return (*(m_pInstance->_vptr_IHandleEntity + 414))(m_pInstance);
  }
  else
  {
    return (*(loc_0 + 3312LL))(0, v1);
  }
}


// CDOTA_Bot::GetAggressionFactor  (line 3949, @0x00000000027e0120, libserver.so)
// callers: CDOTA_Bot_Hero_Axe::GetAggressionFactor, CDOTA_Bot_Hero_Bloodseeker::GetAggressionFactor, CDOTA_Bot_Hero_Bristleback::GetAggressionFactor, CDOTA_Bot_Hero_DeathProphet::GetAggressionFactor, CDOTA_Bot_Hero_DragonKnight::GetAggressionFactor, CDOTA_Bot_Hero_Earthshaker::GetAggressionFactor, CDOTA_Bot_Hero_Luna::GetAggressionFactor, CDOTA_Bot_Hero_Riki::GetAggressionFactor, CDOTA_Bot_Hero_SkeletonKing::GetAggressionFactor, CDOTA_Bot_Hero_Pudge::GetAggressionFactor, CDOTA_Bot_Hero_Tidehunter::GetAggressionFactor
float __fastcall CDOTA_Bot::GetAggressionFactor(CDOTA_Bot *const this)
{
  return this->m_fAggressionFactor;
}


// CDOTA_Bot::ExecuteOrder  (line 3956, @0x0000000002802ce0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_Bot::sQueuedOrder>, Element, GetBotLag, GetFloat, GrowMemory, Purge, RemoveAll, operator[], sQueuedOrder, ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~sQueuedOrder
// calls: CDOTAGamerules::GetDOTATime, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::CopyArray, CUtlMemory<CEntityIndex, int>::Purge, DOTA_ExecuteOrders, CUtlMemory<CDOTA_Bot::sQueuedOrder, int>::Grow, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Bot::Action_MoveTo, CDOTA_Bot::Action_Hold, CDOTA_Bot::Action_Stop, CDOTA_Bot::Action_Attack, CDOTA_Bot::Action_AttackMove, CDOTA_Bot::Action_UseAbility, CDOTA_Bot::Action_UseAbilityOnEntity, CDOTA_Bot::Action_UseAbilityOnLocation, CDOTA_Bot::Action_UseAbilityOnTree, CDOTA_Bot::Action_PickUpRune, CDOTA_Bot::Action_PickUpItem, CDOTA_Bot::Action_DropItem
void __fastcall CDOTA_Bot::ExecuteOrder(CDOTA_Bot *const this, CUnitOrders *const order)
{
  float m_fValue; // xmm1_4
  __m128i v5; // xmm0
  int m_nIssuerPlayerIndex; // eax
  int m_Size; // edx
  int v8; // r14d
  CEntityIndex *m_pMemory; // rsi
  int m_nOrderSequenceNumber; // eax
  int m_nOrderType; // eax
  __int64 v12; // rbx
  int v13; // eax
  CDOTA_Bot::sQueuedOrder *v14; // rbx
  int v15; // [rsp-70h] [rbp-78h]
  int v16; // [rsp-6Ch] [rbp-74h]
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> > v17; // [rsp-68h] [rbp-70h] BYREF
  int v18; // [rsp-50h] [rbp-58h]
  int32 m_Data; // [rsp-4Ch] [rbp-54h]
  int32 v20; // [rsp-48h] [rbp-50h]
  __int64 v21; // [rsp-44h] [rbp-4Ch]
  vec_t z; // [rsp-3Ch] [rbp-44h]
  char v23; // [rsp-38h] [rbp-40h]
  int v24; // [rsp-30h] [rbp-38h]

  m_fValue = dota_bot_fakelag.m_pParent->m_Value.m_fValue;
  if ( m_fValue <= 0.0 || (m_fValue * 0.001) <= 0.0 )
  {
    DOTA_ExecuteOrders(order, 1, 0, 0);
  }
  else
  {
    *v5.m128i_i32 = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 1, 0.0);
    m_nIssuerPlayerIndex = order->m_nIssuerPlayerIndex;
    m_Size = order->m_nUnits.m_Size;
    v8 = _mm_cvtsi128_si32(v5);
    v17.m_Size = 0;
    m_pMemory = order->m_nUnits.m_Memory.m_pMemory;
    v17.m_Memory.m_pMemory = 0;
    v17.m_Memory.m_nAllocationCount = 0;
    v15 = m_nIssuerPlayerIndex;
    m_nOrderSequenceNumber = order->m_nOrderSequenceNumber;
    v17.m_Memory.m_nGrowSize = 0;
    v16 = m_nOrderSequenceNumber;
    CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::CopyArray(&v17, m_pMemory, m_Size);
    m_nOrderType = order->m_nOrderType;
    v24 = v8;
    v18 = m_nOrderType;
    m_Data = order->m_nTargetIndex.m_Data;
    v20 = order->m_nAbilityIndex.m_Data;
    v21 = *&order->m_vPosition.x;
    z = order->m_vPosition.z;
    LOBYTE(m_nOrderType) = order->m_bQueue;
    v12 = this->m_OrderQueue.m_Size;
    v23 = m_nOrderType;
    v13 = v12;
    if ( v12 == this->m_OrderQueue.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CDOTA_Bot::sQueuedOrder,int>::Grow(&this->m_OrderQueue.m_Memory, 1);
      v13 = this->m_OrderQueue.m_Size;
    }
    this->m_OrderQueue.m_Size = v13 + 1;
    v14 = &this->m_OrderQueue.m_Memory.m_pMemory[v12];
    if ( v14 != 0 )
    {
      v14->order.m_nUnits.m_Size = 0;
      v14->order.m_nUnits.m_Memory.m_pMemory = 0;
      v14->order.m_nUnits.m_Memory.m_nAllocationCount = 0;
      v14->order.m_nUnits.m_Memory.m_nGrowSize = 0;
      v14->order.m_nIssuerPlayerIndex = v15;
      v14->order.m_nOrderSequenceNumber = v16;
      CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::CopyArray(
        &v14->order.m_nUnits,
        v17.m_Memory.m_pMemory,
        v17.m_Size);
      v14->order.m_nOrderType = v18;
      v14->order.m_nTargetIndex.m_Data = m_Data;
      v14->order.m_nAbilityIndex.m_Data = v20;
      *&v14->order.m_vPosition.x = v21;
      v14->order.m_vPosition.z = z;
      v14->order.m_bQueue = v23;
      LODWORD(v14->fQueuedTime) = v24;
    }
    v17.m_Size = 0;
    if ( (v17.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIndex,int>::Purge(&v17.m_Memory);
      if ( (v17.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityIndex,int>::Purge(&v17.m_Memory);
    }
  }
}


// GetBotTargetStatusCore  (line 3972, @0x00000000027e1510, libserver.so)  // inlines: FastSqrt, GetAbilityData, GetAbilityImmunityType, GetDistanceToEntity, GetTeamNumber, InState, IsAttackImmune, IsInvulnerable, IsNightmared, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTA_BaseNPC::IsOpposingTeam, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::IsLocationVisible, CDOTA_BaseNPC::IsInvisibleTo, CDOTABaseAbility::LoadAbilityData
// callers: GetBotTargetStatusCore, IsBotTargetStatusValidCore, CDOTA_BotMode::IsBotTargetStatusValid, CDOTA_BotMode::GetBotTargetStatus, CDOTA_BotMode_Attack::IsValidAttackTarget, CDOTA_BotAction_Attack::OnStart, CDOTA_BotAction_UseAbility::OnStart, CDOTA_BotMode_Attack::Think, CDOTA_BotMode_DefendAlly::Think, CDOTA_BotMode_DefendTower::Think
__int64 __fastcall GetBotTargetStatusCore(
        CDOTA_BaseNPC *pTarget,
        CDOTA_BaseNPC *pAttacker,
        float fMaxRange,
        CDOTABaseAbility *pAbility)
{
  unsigned int v7; // ebx
  const Vector *AbsOrigin; // rax
  const Vector *v9; // r15
  const Vector *v10; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  bool v12; // r12
  int m_iAbilityImmunityType; // eax

  v7 = (*(pTarget->_vptr_IHandleEntity + 408))(pTarget) ^ 1;
  if ( pTarget->m_bIsWaitingToSpawn.m_Value || (pTarget->m_nUnitState64.m_Value & 0x100) != 0 )
    v7 |= 6u;
  if ( !CDOTA_BaseNPC::IsOpposingTeam(pTarget, pAttacker->m_iTeamNum.m_Value) )
    v7 |= 0x20u;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
  if ( !CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, pAttacker->m_iTeamNum.m_Value, AbsOrigin, 0.0) )
    v7 |= 8u;
  if ( CDOTA_BaseNPC::IsInvisibleTo(pTarget, pAttacker) )
    v7 |= 0x10u;
  if ( (pTarget->m_nUnitState64.m_Value & 0x800) != 0 || (pTarget->m_nUnitState64.m_Value & 4) != 0 )
    v7 |= 4u;
  if ( fMaxRange >= 0.0 )
  {
    v9 = CBaseEntity::GetAbsOrigin(pAttacker);
    v10 = CBaseEntity::GetAbsOrigin(pTarget);
    if ( fsqrt(
           (((v10->x - v9->x) * (v10->x - v9->x)) + ((v10->y - v9->y) * (v10->y - v9->y)))
         + ((v10->z - v9->z) * (v10->z - v9->z))) > fMaxRange )
      v7 |= 0x40u;
  }
  if ( (pTarget->m_iUnitType & 0x193) == 0 )
    goto LABEL_23;
  if ( (pTarget->m_nUnitState64.m_Value & 0x200) != 0 )
  {
    if ( pAbility == 0 )
      goto LABEL_23;
    m_pAbilityData = pAbility->m_pAbilityData;
    v12 = pAttacker->m_iTeamNum.m_Value == pTarget->m_iTeamNum.m_Value;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(pAbility, 0);
      m_pAbilityData = pAbility->m_pAbilityData;
    }
    if ( (m_iAbilityImmunityType = m_pAbilityData->m_iAbilityImmunityType, v12) && m_iAbilityImmunityType != 1
      || !v12 && m_iAbilityImmunityType != 3 )
    {
LABEL_23:
      v7 |= 2u;
    }
  }
  return v7;
}


// GetBotTargetStatusCore  (line 3972, @0x00000000027e9b60, libserver.so)
// calls: GetBotTargetStatusCore
// callers: CDOTA_Bot_AbilityUsage_Dagon::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_DiffusalBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_EtherealBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Cyclone::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_GhostScepter::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Orchid::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Urn::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Axe_BerserkersCall::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_ChaosKnight_RealityRift::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_CrystalMaiden_Frostbite::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_CrystalMaiden_CrystalNova::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_CrystalMaiden_FreezingField::GetCurrentUsageDesire (41 total)
__int64 __fastcall GetBotTargetStatusCore(
        CDOTA_BaseNPC *pTarget,
        CDOTA_BaseNPC *pAttacker,
        float fMaxRange,
        CDOTABaseAbility *pAbility)
{
  if ( pTarget != 0 )
    return GetBotTargetStatusCore(pTarget, pAttacker, fMaxRange, pAbility);
  else
    return 128;
}


// IsBotTargetStatusValidCore  (line 4026, @0x00000000027e9b80, libserver.so)  // inlines: GetBotTargetStatusCore
// calls: GetBotTargetStatusCore
// callers: CDOTA_Bot_AbilityUsage_BlinkDagger::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_AbyssalBlade::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_MedallionOfCourage::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_HeavensHalberd::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_RodOfAtos::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Sheepstick::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_VeilOfDischord::FindFilter, CDOTA_Bot_AbilityUsage_Bane_FiendsGrip::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bloodseeker_Rupture::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Axe_BattleHunger::IsValidBattleHungerTarget, CDOTA_Bot_AbilityUsage_Bane_BrainSap::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Bane_Nightmare::GetCurrentUsageDesire (65 total)
bool __fastcall IsBotTargetStatusValidCore(
        CDOTA_BaseNPC *pTarget,
        CDOTA_BaseNPC *pAttacker,
        int flags,
        float fMaxRange,
        CDOTABaseAbility *pAbility)
{
  int BotTargetStatusCore; // eax

  BotTargetStatusCore = 128;
  if ( pTarget != 0 )
    BotTargetStatusCore = GetBotTargetStatusCore(pTarget, pAttacker, fMaxRange, pAbility);
  return (flags & BotTargetStatusCore) == 0;
}


// IsValidAlliedTarget  (line 4033, @0x00000000027e9bb0, libserver.so)  // inlines: FastSqrt, GetDistanceToEntity, GetTeamNumber, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTA_BaseNPC::IsOpposingTeam, CBaseEntity::GetAbsOrigin
// callers: CDOTA_Bot_AbilityUsage_Juggernaut_HealingWard::GetCurrentUsageDesire
bool __fastcall IsValidAlliedTarget(CDOTA_BaseNPC *pTarget, CDOTA_BaseNPC *pUnit, double a3, float fMaxRange)
{
  char v6; // al
  bool result; // al
  bool IsOpposingTeam; // al
  const Vector *AbsOrigin; // r12
  const Vector *v10; // rax
  float v11; // xmm1_4
  int v12; // [rsp+8h] [rbp-18h]
  int fMaxRangea; // [rsp+Ch] [rbp-14h]

  if ( pTarget != 0
    && (fMaxRangea = LODWORD(a3),
        v6 = (*(pTarget->_vptr_IHandleEntity + 408))(pTarget, a3, fMaxRange),
        LODWORD(a3) = fMaxRangea,
        v6 != 0) )
  {
    IsOpposingTeam = CDOTA_BaseNPC::IsOpposingTeam(pTarget, pUnit->m_iTeamNum.m_Value);
    LODWORD(a3) = fMaxRangea;
    result = !IsOpposingTeam;
  }
  else
  {
    result = 0;
  }
  if ( *&a3 >= 0.0 && result )
  {
    if ( pUnit != 0 )
    {
      v12 = LODWORD(a3);
      AbsOrigin = CBaseEntity::GetAbsOrigin(pUnit);
      v10 = CBaseEntity::GetAbsOrigin(pTarget);
      LODWORD(a3) = v12;
      v11 = fsqrt(
              (((v10->x - AbsOrigin->x) * (v10->x - AbsOrigin->x)) + ((v10->y - AbsOrigin->y) * (v10->y - AbsOrigin->y)))
            + ((v10->z - AbsOrigin->z) * (v10->z - AbsOrigin->z)));
    }
    else
    {
      v11 = -1.0;
    }
    return *&a3 > v11;
  }
  return result;
}


// DrawEstimatedLeadPosition  (line 4047, @0x00000000027e9ca0, libserver.so)  // inlines: FastSqrt, Length2D, VectorAdd, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator+, operator-, operator=
// calls: CDOTA_PlayerResource::GetPlayerColor, CDOTALocomotor::GetAverageVelocityOverTime, CBaseEntity::GetAbsOrigin, NDebugOverlay::Sphere
void __fastcall DrawEstimatedLeadPosition(CDOTA_BaseNPC *pTarget)
{
  Vector *v2; // r15
  int v3; // ebx
  int v4; // eax
  unsigned int PlayerColor; // eax
  unsigned __int8 v6; // r14
  CDOTALocomotor *v7; // rax
  float v8; // xmm1_4
  Vector *v9; // rax
  double v10; // xmm6_8
  double v11; // r15
  Vector *v12; // r14
  int v13; // ebx
  double v14; // xmm0_8
  const Vector *AbsOrigin; // rax
  float y; // xmm2_4
  float x; // xmm3_4
  vec_t v18; // xmm3_4
  unsigned __int8 color; // [rsp+8h] [rbp-98h]
  double colora; // [rsp+8h] [rbp-98h]
  unsigned int v21; // [rsp+10h] [rbp-90h]
  double v22; // [rsp+10h] [rbp-90h]
  double v23; // [rsp+18h] [rbp-88h]
  Vector center; // [rsp+20h] [rbp-80h] BYREF
  Vector vVelocities[5]; // [rsp+30h] [rbp-70h] BYREF
  Vector AverageVelocityOverTime; // 0:kr00_12.12

  v2 = vVelocities;
  v3 = 0;
  v4 = (*(pTarget->_vptr_IHandleEntity + 414))(pTarget);
  PlayerColor = CDOTA_PlayerResource::GetPlayerColor(g_pDOTAPlayerResource, v4);
  v6 = PlayerColor;
  color = BYTE1(PlayerColor);
  v21 = HIWORD(PlayerColor);
  do
  {
    ++v3;
    ++v2;
    v7 = (*(pTarget->_vptr_IHandleEntity + 376))(pTarget);
    AverageVelocityOverTime = CDOTALocomotor::GetAverageVelocityOverTime(v7, v8);
    *&center.x = *&AverageVelocityOverTime.x;
    v2[-1].z = AverageVelocityOverTime.z;
    center.z = AverageVelocityOverTime.z;
    v2[-1].x = AverageVelocityOverTime.x;
    v2[-1].y = center.y;
  }
  while ( v3 != 5 );
  v9 = vVelocities;
  while ( fsqrt(
            ((vVelocities[4].x - v9->x) * (vVelocities[4].x - v9->x))
          + ((vVelocities[4].y - v9->y) * (vVelocities[4].y - v9->y))) <= 80.0 )
  {
    if ( ++v9 == &vVelocities[4] )
    {
      v10 = color;
      colora = v6;
      v11 = v10;
      v22 = v21;
      goto LABEL_7;
    }
  }
  v11 = 0.0;
  v22 = 0.0;
  colora = 255.0;
LABEL_7:
  v12 = vVelocities;
  v13 = 0;
  do
  {
    v14 = v13++;
    ++v12;
    v23 = v14 * 0.5 + 1.0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
    y = AbsOrigin->y;
    x = AbsOrigin->x;
    center.z = AbsOrigin->z + v12[-1].z;
    v18 = x + v12[-1].x;
    center.y = y + v12[-1].y;
    center.x = v18;
    NDebugOverlay::Sphere(&center, COERCE_DOUBLE(1103626240), (colora / v23), (v11 / v23), (v22 / v23), 1, 0.01023);
  }
  while ( v13 != 5 );
}


// WantsCastOnEstimatedLocation  (line 4085, @0x00000000027e9ec0, libserver.so)  // inlines: FastSqrt, HasFlyMovementCapability, InState, IsInvulnerable, IsMagicImmune, Length2D, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator+, operator-, operator=
// calls: CDOTALocomotor::GetAverageVelocityOverTime, CBaseEntity::GetAbsOrigin, CGridNavBase::IsPositionValidForMovement
// callers: CDOTA_Bot_AbilityUsage_Kunkka_Torrent::GetCurrentUsageDesire, CDOTA_Bot_AbilityUsage_Lina_LightStrikearray::GetCurrentUsageDesire
__int64 __fastcall WantsCastOnEstimatedLocation(
        CDOTA_BaseNPC *pCaster,
        CDOTA_BaseNPC *pTarget,
        double fDelay,
        float fCastRange,
        Vector *pEstimatedLocation)
{
  Vector *v6; // r13
  Vector *v7; // r15
  int v9; // ebx
  CDOTALocomotor *v10; // rax
  float v11; // xmm1_4
  const Vector *AbsOrigin; // rax
  float z; // ebx
  float v14; // xmm8_4
  const Vector *v15; // rax
  float v16; // xmm7_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  unsigned __int64 m_Value; // rax
  float v20; // xmm4_4
  int v21; // r13d
  float v22; // xmm9_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  bool IsPositionValidForMovement; // al
  vec_t v27; // [rsp+Ch] [rbp-A4h]
  float v28; // [rsp+10h] [rbp-A0h]
  float v29; // [rsp+10h] [rbp-A0h]
  float x; // [rsp+18h] [rbp-98h]
  float v31; // [rsp+18h] [rbp-98h]
  float v32; // [rsp+18h] [rbp-98h]
  float pCasterb; // [rsp+20h] [rbp-90h]
  float vBaseVel; // [rsp+28h] [rbp-88h]
  float vBaseVel_4a; // [rsp+2Ch] [rbp-84h]
  float vBaseVel_4b; // [rsp+2Ch] [rbp-84h]
  float vBaseVel_4; // [rsp+2Ch] [rbp-84h]
  __int64 vBaseVel_8; // [rsp+30h] [rbp-80h]
  Vector vVelocities[5]; // [rsp+40h] [rbp-70h] BYREF
  Vector AverageVelocityOverTime; // 0:kr00_12.12
  Vector v43; // 0:xmm0_8.8,8:xmm1_4.4

  v6 = vVelocities;
  v7 = vVelocities;
  v9 = 0;
  do
  {
    ++v9;
    ++v7;
    v10 = (*(pTarget->_vptr_IHandleEntity + 376))(pTarget, fDelay);
    AverageVelocityOverTime = CDOTALocomotor::GetAverageVelocityOverTime(v10, v11);
    v7[-1] = AverageVelocityOverTime;
    *&fDelay = LODWORD(AverageVelocityOverTime.y);
  }
  while ( v9 != 5 );
  vBaseVel = vVelocities[4].z;
  do
  {
    if ( fsqrt(
           ((vVelocities[4].x - v6->x) * (vVelocities[4].x - v6->x))
         + ((vVelocities[4].y - v6->y) * (vVelocities[4].y - v6->y))) > 80.0 )
      return 0;
    ++v6;
  }
  while ( v6 != &vVelocities[4] );
  x = vVelocities[4].x;
  vBaseVel_4a = vVelocities[4].y;
  AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
  v28 = x;
  z = AbsOrigin->z;
  v14 = x + AbsOrigin->x;
  v31 = vBaseVel_4a;
  vBaseVel_4b = vBaseVel_4a + AbsOrigin->y;
  v15 = CBaseEntity::GetAbsOrigin(pCaster);
  v16 = vBaseVel_4b;
  v17 = v31;
  v18 = v28;
  if ( fCastRange <= fsqrt(((v15->x - v14) * (v15->x - v14)) + ((v15->y - vBaseVel_4b) * (v15->y - vBaseVel_4b))) )
    return 0;
  m_Value = pTarget->m_nUnitState64.m_Value;
  if ( (m_Value & 0x200) != 0 || pTarget->m_bIsWaitingToSpawn.m_Value || (m_Value & 0x100) != 0 )
    return 0;
  v20 = 0.1;
  v21 = 0;
  while ( 1 )
  {
    v22 = v14 - ((v21 * v18) * v20);
    v23 = v16 - ((v21 * v17) * v20);
    v24 = (z + vBaseVel) - ((v21 * vBaseVel) * v20);
    if ( (pTarget->m_iMoveCapabilities & 2) != 0 )
      break;
    v29 = v20;
    v32 = v16;
    pCasterb = v18;
    vBaseVel_4 = v17;
    if ( (BYTE3(pTarget->m_nUnitState64.m_Value) & 1 | ((pTarget->m_nUnitState64.m_Value & 0x200000000LL) != 0)) != 0 )
      break;
    *&vBaseVel_8 = v14 - ((v21 * v18) * v20);
    v43.z = (z + vBaseVel) - ((v21 * vBaseVel) * v20);
    *(&vBaseVel_8 + 1) = v16 - ((v21 * v17) * v20);
    *&v43.x = vBaseVel_8;
    v27 = v43.z;
    IsPositionValidForMovement = CGridNavBase::IsPositionValidForMovement(&g_GridNav, v43);
    v24 = v27;
    v23 = *(&vBaseVel_8 + 1);
    v22 = *&vBaseVel_8;
    v17 = vBaseVel_4;
    v18 = pCasterb;
    v16 = v32;
    v20 = v29;
    if ( IsPositionValidForMovement )
      break;
    if ( ++v21 == 10 )
      return 0;
  }
  pEstimatedLocation->x = v22;
  pEstimatedLocation->y = v23;
  pEstimatedLocation->z = v24;
  return 1;
}


// CDOTA_Bot::ReloadScripts  (line 4133, @0x00000000027ea230, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetScriptDirectory, GetUnit, IndexToIdentity, IsValid, LookupEntity, String, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CUtlString::Get, CDOTA_Bot_Script::ReloadScripts
// callers: CDOTA_TeamCommander::ReloadScripts
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Bot::ReloadScripts(CDOTA_Bot *const this)
{
  const char *v2; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  CEntityInstance *m_pInstance; // rdx

  v2 = CUtlString::Get(&this->m_pTeamCommander->m_sScriptDirectory);
  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[this->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  CDOTA_Bot_Script::ReloadScripts(m_pInstance[45].m_CScriptComponent, v2);
}


// CDOTA_Bot::DoBotScriptBaseThink  (line 4138, @0x00000000027ea2d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::DoBotScriptBaseThink
// callers: CDOTA_Bot::Think
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::DoBotScriptBaseThink(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rax

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hUnit.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return CDOTA_Bot_Script::DoBotScriptBaseThink(m_pInstance[45].m_CScriptComponent);
  }
  else
  {
    return CDOTA_Bot_Script::DoBotScriptBaseThink(0);
  }
}


// CDOTA_Bot::DoBotScriptItemPurchaseThink  (line 4143, @0x00000000027ea350, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::DoBotScriptItemPurchaseThink
// callers: CDOTA_BaseNPC_Hero::PurchaseItems
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::DoBotScriptItemPurchaseThink(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rax

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hUnit.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return CDOTA_Bot_Script::DoBotScriptItemPurchaseThink(m_pInstance[45].m_CScriptComponent);
  }
  else
  {
    return CDOTA_Bot_Script::DoBotScriptItemPurchaseThink(0);
  }
}


// CDOTA_Bot::DoBotScriptItemUsageThink  (line 4148, @0x00000000027ea3d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::DoBotScriptItemUsageThink
// callers: CDOTA_Bot::UseItems
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::DoBotScriptItemUsageThink(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rax

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hUnit.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return CDOTA_Bot_Script::DoBotScriptItemUsageThink(m_pInstance[45].m_CScriptComponent);
  }
  else
  {
    return CDOTA_Bot_Script::DoBotScriptItemUsageThink(0);
  }
}


// CDOTA_Bot::DoBotScriptAbilityUsageThink  (line 4153, @0x00000000027ea450, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::DoBotScriptAbilityUsageThink
// callers: CDOTA_Bot::UseAbilities
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::DoBotScriptAbilityUsageThink(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rax

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hUnit.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return CDOTA_Bot_Script::DoBotScriptAbilityUsageThink(m_pInstance[45].m_CScriptComponent);
  }
  else
  {
    return CDOTA_Bot_Script::DoBotScriptAbilityUsageThink(0);
  }
}


// CDOTA_Bot::DoBotScriptLevelUpAbilitiesThink  (line 4158, @0x00000000027ea4d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::DoBotScriptAbilityLevelUpThink
// callers: CDOTA_Bot::LevelAbilities
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::DoBotScriptLevelUpAbilitiesThink(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rax

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hUnit.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return CDOTA_Bot_Script::DoBotScriptAbilityLevelUpThink(m_pInstance[45].m_CScriptComponent);
  }
  else
  {
    return CDOTA_Bot_Script::DoBotScriptAbilityLevelUpThink(0);
  }
}


// CDOTA_Bot::DoBotScriptCourierUsageThink  (line 4163, @0x00000000027ea550, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::DoBotScriptCourierUsageThink
// callers: CDOTA_Bot::ConsiderCourierUsage
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::DoBotScriptCourierUsageThink(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rax

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hUnit.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return CDOTA_Bot_Script::DoBotScriptCourierUsageThink(m_pInstance[45].m_CScriptComponent);
  }
  else
  {
    return CDOTA_Bot_Script::DoBotScriptCourierUsageThink(0);
  }
}


// CDOTA_Bot::DoBotScriptBuybackUsageThink  (line 4168, @0x00000000027ea5d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::DoBotScriptBuybackUsageThink
// callers: CDOTA_Bot::ConsiderBuyback
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::DoBotScriptBuybackUsageThink(CDOTA_Bot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rax

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hUnit.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && (m_pInstance = v3->m_pInstance, v3->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return CDOTA_Bot_Script::DoBotScriptBuybackUsageThink(m_pInstance[45].m_CScriptComponent);
  }
  else
  {
    return CDOTA_Bot_Script::DoBotScriptBuybackUsageThink(0);
  }
}


// CDOTA_Bot::DoBotScriptMinionThink  (line 4173, @0x00000000027eaa80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Bot_Script::DoBotScriptMinionThink
// callers: CDOTA_BotMode_GenericMinion::Think
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Bot::DoBotScriptMinionThink(CDOTA_Bot *const this, CDOTA_BaseNPC *pMinion)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax

  m_Index = this->m_hUnit.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hUnit.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    return CDOTA_Bot_Script::DoBotScriptMinionThink(m_pInstance[45].m_CScriptComponent, pMinion);
  }
  else
  {
    return CDOTA_Bot_Script::DoBotScriptMinionThink(0, pMinion);
  }
}


