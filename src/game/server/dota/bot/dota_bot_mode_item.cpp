
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BotMode_Item::CDOTA_BotMode_Item  (line 23, @0x000000000281d610, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CDOTA_BotMode::CDOTA_BotMode
// callers: CDOTA_Bot::CreateMode
void __fastcall CDOTA_BotMode_Item::CDOTA_BotMode_Item(CDOTA_BotMode_Item *const this, CDOTA_Bot *pBot)
{
  CDOTA_BotMode::CDOTA_BotMode(this, pBot);
  this->m_hItem.m_Index = -1;
  this->_vptr_CDOTA_BotMode = off_42B81B0;
}


// CDOTA_BotMode_Item::OnStart  (line 30, @0x00000000028174b0, libserver.so)  // inlines: NetworkStateChanged, Set, SetBotDebugData, operator=<int>
// calls: CDOTA_BotMode::DoScriptOnStart, CDOTA_BotMode::GetUnit
void __fastcall CDOTA_BotMode_Item::OnStart(CDOTA_BotMode_Item *const this)
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


// CDOTA_BotMode_Item::OnEnd  (line 40, @0x0000000002816460, libserver.so)  // inlines: SetTarget, operator=
// calls: CDOTA_BotMode::DoScriptOnEnd
void __fastcall CDOTA_BotMode_Item::OnEnd(CDOTA_BotMode_Item *const this)
{
  if ( !CDOTA_BotMode::DoScriptOnEnd(this) )
    this->m_pBot->m_hTarget.m_Index = -1;
}


// CDOTA_BotMode_Item::Think  (line 50, @0x000000000281d760, libserver.so)  // inlines: Add, CEntityHandle, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, Element, EnterScope, Get, GetAction, GetContainedItem, GetElapsed, GetInstance, GetRawTarget, GetTimebaseRegister, InTargetThread, IsEnabled, IsItemSlotBackpack, PLAT_CPU_TIME, ToDOTABotActionAttack, ToDOTABotActionDropItem, ToDOTABotActionPickUpItem, Top, operator CDOTA_Item*, operator!=<CBaseEntity>, operator==<CBaseEntity>, operator[], ~CMicroProfilerGuard, ~CVProfScope
// calls: CDOTA_BotMode::DoScriptThink, CVProfile::ExitScope, CDOTA_Bot::IsUsingAbility, CDOTA_Bot::IsUsingItem, CEntityHandle::operator CEntityInstance*, operator new, CDOTA_BotAction_Attack::CDOTA_BotAction_Attack, CDOTA_Bot::SetAction, ThreadGetCurrentId, CVProfNode::GetSubNode(char const*,int,char const*,int), CVProfNode::EnterScope(void), CDOTA_BotMode::GetUnit (22 total)
// strings: "CDOTA_BotMode_Item::Think"
void __fastcall CDOTA_BotMode_Item::Think(CDOTA_BotMode_Item *const this)
{
  int m_enabled; // eax
  bool v3; // r13
  CDOTA_Bot *m_pBot; // r14
  int m_Size; // eax
  uint32 *v6; // r15
  CDOTA_BotAction_Attack *v7; // r15
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v9; // r14
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v12; // rax
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_UnitInventory *Inventory; // rax
  int EmptySpaceInInventory; // eax
  CEntityInstance *v16; // rax
  const CEntityHandle *v17; // rax
  CEntityInstance *v18; // rax
  CDOTA_Bot *v19; // r14
  int v20; // eax
  CDOTA_BotAction *v21; // rdi
  CEntityInstance *v22; // r14
  CDOTA_Bot *v23; // r14
  int v24; // eax
  CDOTA_BotAction *v25; // rdi
  CDOTA_BaseNPC *v26; // rax
  EHANDLE *p_m_hItem; // [rsp+8h] [rbp-58h]
  const Vector *AbsOrigin; // [rsp+8h] [rbp-58h]
  EHANDLE hBestToDrop; // [rsp+10h] [rbp-50h] BYREF
  EHANDLE hTarget; // [rsp+20h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v9 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CDOTA_BotMode_Item::Think" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "CDOTA_BotMode_Item::Think", 0, "Bots", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v12 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v12->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v9 + __rdtsc();
  }
  if ( !CDOTA_BotMode::DoScriptThink(this)
    && !CDOTA_Bot::IsUsingAbility(this->m_pBot)
    && !CDOTA_Bot::IsUsingItem(this->m_pBot) )
  {
    p_m_hItem = &this->m_hItem;
    if ( CEntityHandle::operator CEntityInstance *(&this->m_hItem) != 0 )
    {
      if ( this->m_bKill )
      {
        m_pBot = this->m_pBot;
        m_Size = m_pBot->m_ActionStack.m_Size;
        if ( m_Size > 0 )
        {
          v6 = m_pBot->m_ActionStack.m_Memory.m_pMemory[m_Size - 1];
          if ( v6 != 0 )
          {
            if ( (*(*v6 + 16LL))(v6) == 3 )
            {
              hTarget.m_Index = v6[5];
              v22 = CEntityHandle::operator CEntityInstance *(&hTarget);
              if ( v22 == CEntityHandle::operator CEntityInstance *(p_m_hItem) )
                goto LABEL_3;
            }
            m_pBot = this->m_pBot;
          }
        }
        hTarget.m_Index = this->m_hItem.m_Index;
        v7 = operator new(0xB0u);
        CDOTA_BotAction_Attack::CDOTA_BotAction_Attack(v7, m_pBot, &hTarget, 0);
        goto LABEL_15;
      }
      Unit = CDOTA_BotMode::GetUnit(this);
      Inventory = CDOTA_BaseNPC::GetInventory(Unit);
      EmptySpaceInInventory = CDOTA_UnitInventory::FindEmptySpaceInInventory(Inventory, 1, 0);
      if ( EmptySpaceInInventory == -1 )
      {
        CDOTA_BotMode_Item::FindBestItemToDrop(&hBestToDrop, this);
        if ( CEntityHandle::operator CEntityInstance *(&hBestToDrop) != 0 )
        {
          v23 = this->m_pBot;
          v24 = v23->m_ActionStack.m_Size;
          if ( v24 > 0 )
          {
            v25 = v23->m_ActionStack.m_Memory.m_pMemory[v24 - 1];
            if ( v25 != 0 )
            {
              if ( (*(v25->_vptr_CDOTA_BotAction + 2))(v25) == 8 )
                goto LABEL_3;
              v23 = this->m_pBot;
            }
          }
          hTarget.m_Index = hBestToDrop.m_Index;
          v26 = CDOTA_BotMode::GetUnit(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v26);
          v7 = operator new(0x28u);
          CDOTA_BotAction_DropItem::CDOTA_BotAction_DropItem(v7, v23, &hTarget, AbsOrigin);
          goto LABEL_15;
        }
      }
      else if ( (EmptySpaceInInventory - 6) <= 2 )
      {
        v16 = CEntityHandle::operator CEntityInstance *(p_m_hItem);
        v17 = v16 != 0 ? __dynamic_cast(v16, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Item_Physical, 0) : 0LL;
        v18 = CEntityHandle::operator CEntityInstance *(v17 + 308);
        if ( (*(v18->_vptr_IHandleEntity + 363))(v18) == 0 )
          CDOTA_Bot::SwapWorstItemToBackpack(this->m_pBot);
      }
      v19 = this->m_pBot;
      v20 = v19->m_ActionStack.m_Size;
      if ( v20 <= 0 )
        goto LABEL_31;
      v21 = v19->m_ActionStack.m_Memory.m_pMemory[v20 - 1];
      if ( v21 == 0 )
        goto LABEL_31;
      if ( (*(v21->_vptr_CDOTA_BotAction + 2))(v21) != 7 )
      {
        v19 = this->m_pBot;
LABEL_31:
        hTarget.m_Index = this->m_hItem.m_Index;
        v7 = operator new(0x18u);
        CDOTA_BotAction_PickUpItem::CDOTA_BotAction_PickUpItem(v7, v19, &hTarget);
LABEL_15:
        CDOTA_Bot::SetAction(this->m_pBot, v7);
      }
    }
  }
LABEL_3:
  if ( v3 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// CDOTA_BotMode_Item::CalculateDesiredLocation  (line 113, @0x0000000002817ca0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator!=<CBaseEntity>
// calls: CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_BotMode_Item::CalculateDesiredLocation(CDOTA_BotMode_Item *const this)
{
  uint32 m_Index; // edx
  CEntityIdentity *v2; // rcx
  CEntityIdentity *v3; // rcx
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_Index = this->m_hItem.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hItem.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hItem.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && v3->m_pInstance != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3->m_pInstance);
    *&result.x = *&AbsOrigin->x;
    result.z = AbsOrigin->z;
  }
  else
  {
    *&result.x = (*(this->_vptr_CDOTA_BotMode + 11))(this);
  }
  return result;
}


// CDOTA_BotMode_Item::GetDesire  (line 125, @0x0000000002819ef0, libserver.so)  // inlines: CVProfScope, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsEnabled, IsValid, Length2D, LookupEntity, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator bool, operator-, operator->, operator=, operator==, ~CVProfScope
// calls: CDOTA_BotMode::GetScriptDesire, CVProfile::ExitScope, CVProfile::EnterScope, CDOTA_BotMode::GetTeamCommander, CDOTA_BotMode::GetUnit, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Bot::FindEstimatedAttackLocation, CDOTA_Bot::GetAvoidanceAmountForLocation, _Unwind_Resume
// strings: "CDOTA_BotMode_Item::GetDesire"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_BotMode_Item::GetDesire(CDOTA_BotMode_Item *const this)
{
  int m_enabled; // edx
  float result; // xmm0_4
  CDOTA_TeamCommander *TeamCommander; // r13
  __int64 v5; // rbx
  bool v6; // r15
  sItemPickupInfo *v7; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *Unit; // rax
  CEntityIdentity *v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  CEntityIdentity *v15; // rcx
  CDOTA_BaseNPC *m_pInstance; // rdx
  int iUrgency; // eax
  float v18; // xmm0_4
  const CBaseEntity *v19; // rax
  Vector *AbsOrigin; // rax
  CDOTA_Bot *m_pBot; // rdi
  CDOTA_BaseNPC *v22; // rax
  const Vector *v23; // rax
  __m128 v24; // xmm1
  __m128 v25; // rt1
  float fDist; // [rsp+0h] [rbp-70h]
  EHANDLE hBestItem; // [rsp+14h] [rbp-5Ch]
  bool VProf_127; // [rsp+1Bh] [rbp-55h]
  float fBestDesirea; // [rsp+1Ch] [rbp-54h]
  float fBestDesire; // [rsp+1Ch] [rbp-54h]
  Vector vItemLoc; // [rsp+20h] [rbp-50h] BYREF
  Vector vAttackLoc; // [rsp+30h] [rbp-40h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  VProf_127 = m_enabled != 0;
  if ( m_enabled != 0 )
    CVProfile::EnterScope(&g_VProfCurrentProfile, "CDOTA_BotMode_Item::GetDesire", 0, "Bots", 0, 4);
  result = CDOTA_BotMode::GetScriptDesire(this);
  if ( result < 0.0 )
  {
    TeamCommander = CDOTA_BotMode::GetTeamCommander(this);
    if ( TeamCommander->m_ItemPickupInfos.m_Size <= 0 )
    {
      hBestItem.m_Index = -1;
      v6 = 0;
      fBestDesire = 0.0;
    }
    else
    {
      v5 = 0;
      hBestItem.m_Index = -1;
      v6 = 0;
      fBestDesire = 0.0;
      do
      {
        while ( 1 )
        {
          v7 = &TeamCommander->m_ItemPickupInfos.m_Memory.m_pMemory[v5];
          if ( v7 != 0 )
          {
            m_Index = v7->hItemContainer.m_Index;
            if ( m_Index + 2 > 1 )
            {
              v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->hItemContainer.m_Index) >> 9) & 0x3F];
              if ( v9 != 0 )
              {
                v10 = &v9[v7->hItemContainer.m_Index & 0x1FF];
                if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
                {
                  Unit = CDOTA_BotMode::GetUnit(this);
                  if ( v7->hUnit.m_Index + 2 > 1
                    && (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->hUnit.m_Index) >> 9) & 0x3F]) != 0 )
                  {
                    v13 = v7->hUnit.m_Index & 0x1FF;
                    v14 = &v12[v13] == 0;
                    v15 = &v12[v13];
                    m_pInstance = 0;
                    if ( !v14 && v7->hUnit.m_Index == v15->m_EHandle.m_Index )
                      m_pInstance = v15->m_pInstance;
                  }
                  else
                  {
                    m_pInstance = 0;
                  }
                  if ( Unit == m_pInstance )
                  {
                    if ( v7->bPickup )
                    {
                      iUrgency = v7->iUrgency;
                      if ( iUrgency == 2 )
                      {
                        v18 = 0.89999998;
                      }
                      else if ( iUrgency == 3 )
                      {
                        v18 = 1.0;
                      }
                      else
                      {
                        v18 = 0.0;
                        if ( iUrgency == 1 )
                          v18 = 0.5;
                      }
                    }
                    else
                    {
                      v19 = CEntityHandle::operator CEntityInstance *(&v7->hItemContainer);
                      AbsOrigin = CBaseEntity::GetAbsOrigin(v19);
                      m_pBot = this->m_pBot;
                      vItemLoc = *AbsOrigin;
                      vAttackLoc = CDOTA_Bot::FindEstimatedAttackLocation(m_pBot, &vItemLoc);
                      v22 = CDOTA_BotMode::GetUnit(this);
                      v23 = CBaseEntity::GetAbsOrigin(v22);
                      fDist = fsqrt(
                                ((vItemLoc.x - v23->x) * (vItemLoc.x - v23->x))
                              + ((vItemLoc.y - v23->y) * (vItemLoc.y - v23->y)));
                      v24.m128_f32[0] = CDOTA_Bot::GetAvoidanceAmountForLocation(this->m_pBot, &vAttackLoc, 0);
                      v18 = 0.75;
                      if ( v24.m128_f32[0] > 5.0 && fDist >= 200.0 )
                      {
                        v25.m128_i32[0] = 1092616192;
                        LODWORD(v18) = _mm_cmple_ss(v24, v25).m128_u32[0] & 0x3F000000;
                      }
                    }
                    if ( v18 > fBestDesire )
                      break;
                  }
                }
              }
            }
          }
          if ( ++v5 >= TeamCommander->m_ItemPickupInfos.m_Size )
            goto LABEL_28;
        }
        fBestDesire = v18;
        hBestItem.m_Index = v7->hItemContainer.m_Index;
        ++v5;
        v6 = !v7->bPickup;
      }
      while ( v5 < TeamCommander->m_ItemPickupInfos.m_Size );
    }
LABEL_28:
    this->m_bKill = v6;
    result = fBestDesire;
    this->m_hItem = hBestItem;
  }
  if ( VProf_127 )
  {
    fBestDesirea = result;
    CVProfile::ExitScope(&g_VProfCurrentProfile);
    return fBestDesirea;
  }
  return result;
}


// CDOTA_BotMode_Item::GetDebugColor  (line 186, @0x0000000002816310, libserver.so)
color24 __fastcall CDOTA_BotMode_Item::GetDebugColor(CDOTA_BotMode_Item *const this)
{
  return 3710365;
}


// CDOTA_BotMode_Item::GetDebugString  (line 197, @0x0000000002816320, libserver.so)
const char *__fastcall CDOTA_BotMode_Item::GetDebugString(CDOTA_BotMode_Item *const this)
{
  return "Item";
}


// CDOTA_BotMode_Item::FindBestItemToDrop  (line 204, @0x000000000281d640, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, ToDOTABaseNPCHero
// calls: CDOTA_BotMode::GetUnit, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTA_BaseNPC_Hero::IsItemSellable
// callers: CDOTA_BotMode_Item::Think
int *__fastcall CDOTA_BotMode_Item::FindBestItemToDrop(int *a1, CDOTA_BotMode_Item *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  CDOTA_BaseNPC_Hero *v4; // r12
  int v5; // ebx
  CDOTA_Item *v6; // r14
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v9; // r15
  CEntityIdentity *m_pEntity; // rdx
  int v11; // eax
  __int16 v12; // cx
  int iLowestValue; // [rsp+Ch] [rbp-34h]

  Unit = CDOTA_BotMode::GetUnit(this);
  v4 = Unit;
  if ( Unit != 0 && (Unit->m_iUnitType & 1) != 0 )
  {
    v5 = 0;
    iLowestValue = 0;
    v6 = 0;
    do
    {
      Inventory = CDOTA_BaseNPC::GetInventory(v4);
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v5);
      v9 = ItemInSlot;
      if ( ItemInSlot != 0
        && CDOTA_BaseNPC_Hero::IsItemSellable(v4, ItemInSlot)
        && (v6 == 0 || (*(v9->_vptr_IHandleEntity + 360))(v9) < iLowestValue) )
      {
        v6 = v9;
        iLowestValue = (*(v9->_vptr_IHandleEntity + 360))(v9);
      }
      ++v5;
    }
    while ( v5 != 9 );
    *a1 = -1;
    if ( v6 != 0 )
    {
      m_pEntity = v6->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v12 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        *a1 = v12 | *a1 & 0x8000;
        *a1 = (v11 << 15) | *a1 & 0x7FFF;
      }
    }
  }
  else
  {
    *a1 = -1;
  }
  return a1;
}


