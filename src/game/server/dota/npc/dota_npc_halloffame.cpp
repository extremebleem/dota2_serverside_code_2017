// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/npc/dota_npc_halloffame.cpp:12
class C_CDOTA_BaseNPC_HallofFame_MapInstall {
	C_CDOTA_BaseNPC_HallofFame_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BaseNPC_HallofFame::YouForgotToImplementOrDeclareServerClass  (line 12, @0x00000000028f5470, libserver.so)
int __fastcall CDOTA_BaseNPC_HallofFame::YouForgotToImplementOrDeclareServerClass(CDOTA_BaseNPC_HallofFame *const this)
{
  return 0;
}


// CDOTA_BaseNPC_HallofFame::GetServerClass  (line 12, @0x0000000002900750, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_HallofFame::GetServerClass(CDOTA_BaseNPC_HallofFame *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_BaseNPC_HallofFame::CDOTA_BaseNPC_HallofFame  (line 16, @0x000000000292a2a0, libserver.so)  // inlines: CDOTA_BaseNPC_Building, CGameEventListener, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, Color, EnsureValidValue, EnsureValidValue<HSequence>, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC, CountdownTimer::CountdownTimer, CGameEventListener::~CGameEventListener, CDOTA_BaseNPC_Building::~CDOTA_BaseNPC_Building, _Unwind_Resume
// callers: CDOTA_BaseNPC_HallofFame::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTA_BaseNPC_HallofFame::CDOTA_BaseNPC_HallofFame(CDOTA_BaseNPC_HallofFame *const this)
{
  CDOTA_BaseNPC::CDOTA_BaseNPC(this);
  this->m_nFXIndex.m_Value.m_pBinding = 0;
  this->_vptr_IHandleEntity = &off_42F4A10;
  this->_vptr_INextBotEventResponder = &off_42F5988;
  this->_vptr_CObstructionObject = &off_42F5CB8;
  this->m_nFXIndexDestruction.m_Value.m_pBinding = 0;
  this->m_angInitialAngles.m_Value.x = 0.0;
  this->m_angInitialAngles.m_Value.y = 0.0;
  this->m_angInitialAngles.m_Value.z = 0.0;
  this->m_hHeroStatueSequence.m_Value.m_Data = 0;
  this->m_fHeroStatueCycle.m_Value = 0.0;
  this->m_iHeroStatueStatusEffectIndex.m_Value = 0;
  this->m_bHeroStatue.m_Value = 0;
  this->m_bBattleCup.m_Value = 0;
  this->m_iHeroStatueOwnerPlayerID.m_Value = 0;
  this->m_ParticleTintColor = 0;
  this->m_sDestroySnd.u.m_Id = 0;
  this->m_sDmgLvl1Snd.u.m_Id = 0;
  this->m_sDmgLvl2Snd.u.m_Id = 0;
  this->m_iszLinkedUnit.u.m_Id = 0;
  this->m_iszAmbientEffectName.u.m_Id = 0;
  this->m_iszDestructionEffectName.u.m_Id = 0;
  this->m_iszDamageModelLevel1.u.m_Id = 0;
  this->m_iszDamageModelLevel2.u.m_Id = 0;
  this->m_bRegisteredForEvents = 0;
  this->_vptr_IGameEventListener2 = off_42F5D08;
  this->m_event_dota_player_team_changed = 0;
  CountdownTimer::CountdownTimer(&this->m_glowThinkTimer);
}


// CDOTA_BaseNPC_HallofFame::Spawn  (line 21, @0x0000000002952ca0, libserver.so)  // inlines: ListenForGameEvent, NetworkStateChanged, Set, Start, operator=<float>
// calls: CDOTA_BaseNPC_Building::Spawn, CDOTA_BaseNPC::SetUnitName, CountdownTimer::Now
// strings: "ent_dota_halloffame", "dota_player_team_changed"
void __fastcall CDOTA_BaseNPC_HallofFame::Spawn(
        CDOTA_BaseNPC_HallofFame *const this,
        const CEntityKeyValues *pKeyValues)
{
  CountdownTimer *p_m_glowThinkTimer; // r12
  float v4; // xmm0_4
  float v5; // [rsp+Ch] [rbp-14h]

  p_m_glowThinkTimer = &this->m_glowThinkTimer;
  CDOTA_BaseNPC_Building::Spawn(this, pKeyValues);
  this->m_iUnitType |= 0x1000u;
  CDOTA_BaseNPC::SetUnitName(this, "ent_dota_halloffame");
  (*(this->_vptr_IHandleEntity + 70))(this, 5);
  this->m_bRegisteredForEvents = 1;
  this->m_event_dota_player_team_changed = (*(gameeventmanager->_vptr_IBaseInterface + 4))(
                                             gameeventmanager,
                                             &this->CGameEventListener,
                                             "dota_player_team_changed",
                                             1);
  v4 = CountdownTimer::Now(p_m_glowThinkTimer) + 3.0;
  if ( v4 != this->m_glowThinkTimer.m_timestamp.m_Value )
  {
    v5 = v4;
    (*(this->m_glowThinkTimer._vptr_CountdownTimer + 2))(p_m_glowThinkTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_glowThinkTimer.m_timestamp.m_Value = v5;
  }
  if ( this->m_glowThinkTimer.m_duration.m_Value != 3.0 )
  {
    (*(this->m_glowThinkTimer._vptr_CountdownTimer + 2))(p_m_glowThinkTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_glowThinkTimer.m_duration.m_Value = 3.0;
  }
}


// CDOTA_BaseNPC_HallofFame::UnitThink  (line 35, @0x0000000002951440, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Invalidate, IsElapsed, NetworkStateChanged, Purge, RemoveAll, Set, operator=<float>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BaseNPC::UnitThink, CountdownTimer::Now, CDOTA_BaseNPC_HallofFame::FindPlayersWithGlowEnabled, CDOTA_BaseNPC_HallofFame::SetGlowEnabled, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CDOTA_BaseNPC_HallofFame::UnitThink(CDOTA_BaseNPC_HallofFame *const this)
{
  float v2; // xmm0_4
  float m_Value; // xmm1_4
  CUtlVector<int,CUtlMemory<int,int> > vecPlayerIDs; // [rsp+0h] [rbp-30h] BYREF

  CDOTA_BaseNPC::UnitThink(this);
  if ( this->m_glowThinkTimer.m_timestamp.m_Value > 0.0 )
  {
    v2 = CountdownTimer::Now(&this->m_glowThinkTimer);
    m_Value = this->m_glowThinkTimer.m_timestamp.m_Value;
    if ( v2 >= m_Value )
    {
      if ( m_Value != -1.0 )
      {
        (*(this->m_glowThinkTimer._vptr_CountdownTimer + 2))(&this->m_glowThinkTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_glowThinkTimer.m_timestamp.m_Value = -1.0;
      }
      vecPlayerIDs.m_Size = 0;
      vecPlayerIDs.m_Memory.m_pMemory = 0;
      vecPlayerIDs.m_Memory.m_nAllocationCount = 0;
      vecPlayerIDs.m_Memory.m_nGrowSize = 0;
      CDOTA_BaseNPC_HallofFame::FindPlayersWithGlowEnabled(this, &vecPlayerIDs);
      CDOTA_BaseNPC_HallofFame::SetGlowEnabled(this, &vecPlayerIDs);
      vecPlayerIDs.m_Size = 0;
      if ( (vecPlayerIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<int,int>::Purge(&vecPlayerIDs.m_Memory);
        if ( (vecPlayerIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<int,int>::Purge(&vecPlayerIDs.m_Memory);
      }
    }
  }
}


// CDOTA_BaseNPC_HallofFame::FindPlayersWithGlowEnabled  (line 48, @0x0000000002928130, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GrowMemory, RemoveAll, operator[]
// calls: DOTAInventoryManager, CBaseEntity::GetAbsOrigin, CDOTA_PlayerResource::GetTeam, CDOTAInventoryManager::GetInventoryForPlayerID, CPlayerInventory::GetItemCount, CountdownTimer::Start, CUtlMemory<int, int>::Grow
// callers: CDOTA_BaseNPC_HallofFame::UnitThink
void __fastcall CDOTA_BaseNPC_HallofFame::FindPlayersWithGlowEnabled(
        CDOTA_BaseNPC_HallofFame *const this,
        CUtlVector<int,CUtlMemory<int,int> > *const vecPlayerIDs)
{
  CDOTAInventoryManager *v4; // r14
  const Vector *AbsOrigin; // rax
  float y; // xmm2_4
  int v7; // ebx
  int v8; // r15d
  CDOTAPlayerInventory *InventoryForPlayerID; // rax
  float v10; // xmm1_4
  __int64 m_Size; // rax
  int v12; // edx
  int *v13; // rax
  int v14; // [rsp+Ch] [rbp-44h]
  CountdownTimer *thisb; // [rsp+18h] [rbp-38h]

  vecPlayerIDs->m_Size = 0;
  v4 = DOTAInventoryManager();
  if ( v4 != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    y = AbsOrigin->y;
    if ( AbsOrigin->x < 0.0 && y < 0.0 )
    {
      v7 = 2;
LABEL_5:
      v8 = 0;
      thisb = &this->m_glowThinkTimer;
      while ( 1 )
      {
        while ( v7 != CDOTA_PlayerResource::GetTeam(g_pDOTAPlayerResource, v8) )
        {
LABEL_6:
          if ( ++v8 == 24 )
            return;
        }
        InventoryForPlayerID = CDOTAInventoryManager::GetInventoryForPlayerID(v4, v8, 1);
        if ( InventoryForPlayerID == 0 )
        {
          CountdownTimer::Start(thisb, 3.0, v10);
          goto LABEL_6;
        }
        if ( CPlayerInventory::GetItemCount(InventoryForPlayerID, 11547) == 0 )
          goto LABEL_6;
        m_Size = vecPlayerIDs->m_Size;
        v12 = vecPlayerIDs->m_Size;
        if ( m_Size == vecPlayerIDs->m_Memory.m_nAllocationCount )
        {
          v14 = vecPlayerIDs->m_Size;
          CUtlMemory<int,int>::Grow(&vecPlayerIDs->m_Memory, 1);
          v12 = vecPlayerIDs->m_Size;
          m_Size = v14;
        }
        vecPlayerIDs->m_Size = v12 + 1;
        v13 = &vecPlayerIDs->m_Memory.m_pMemory[m_Size];
        if ( v13 == 0 )
          goto LABEL_6;
        *v13 = v8++;
        if ( v8 == 24 )
          return;
      }
    }
    if ( AbsOrigin->x > 0.0 )
    {
      v7 = 3;
      if ( y > 0.0 )
        goto LABEL_5;
    }
  }
}


// CDOTA_BaseNPC_HallofFame::SetGlowEnabled  (line 87, @0x0000000002951340, libserver.so)  // inlines: FindModifierByName
// calls: ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, CDOTA_Buff::Destroy, CDOTA_Modifier_HallOfFame_Glow::SetGlowingPlayerIDs, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_BaseNPC_HallofFame::UnitThink
// strings: "modifier_halloffame_glow"
void __fastcall CDOTA_BaseNPC_HallofFame::SetGlowEnabled(
        CDOTA_BaseNPC_HallofFame *const this,
        const CUtlVector<int,CUtlMemory<int,int> > *const vecPlayerIDs)
{
  CModifieractoryDictionary *v4; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Modifier_HallOfFame_Glow *ModifierByName; // rax
  CDOTA_Buff *pModifier; // [rsp+8h] [rbp-48h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  v4 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v4, "modifier_halloffame_glow");
  ModifierByName = CDOTA_ModifierManager::FindModifierByName(
                     &this->m_ModifierManager,
                     Factory,
                     "modifier_halloffame_glow",
                     0);
  if ( vecPlayerIDs->m_Size != 0 )
  {
    if ( ModifierByName == 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_halloffame_glow");
      pModifier = CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_halloffame_glow", &kv, 0);
      KeyValues::~KeyValues(&kv);
      ModifierByName = pModifier;
    }
    CDOTA_Modifier_HallOfFame_Glow::SetGlowingPlayerIDs(ModifierByName, vecPlayerIDs);
  }
  else if ( ModifierByName != 0 )
  {
    CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
  }
}


// CDOTA_BaseNPC_HallofFame::FireGameEvent  (line 109, @0x00000000028fd800, libserver.so)  // inlines: NetworkStateChanged, Set, Start, operator=<float>
// calls: CountdownTimer::Now
void __fastcall CDOTA_BaseNPC_HallofFame::FireGameEvent(CDOTA_BaseNPC_HallofFame *const this, IGameEvent *pEvent)
{
  float v3; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( (*(pEvent->_vptr_IGameEvent + 3))(pEvent) == this->m_event_dota_player_team_changed )
  {
    v3 = CountdownTimer::Now(&this->m_glowThinkTimer) + 3.0;
    if ( v3 != this->m_glowThinkTimer.m_timestamp.m_Value )
    {
      v4 = v3;
      (*(this->m_glowThinkTimer._vptr_CountdownTimer + 2))(&this->m_glowThinkTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_glowThinkTimer.m_timestamp.m_Value = v4;
    }
    if ( this->m_glowThinkTimer.m_duration.m_Value != 3.0 )
    {
      (*(this->m_glowThinkTimer._vptr_CountdownTimer + 2))(&this->m_glowThinkTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_glowThinkTimer.m_duration.m_Value = 3.0;
    }
  }
}


