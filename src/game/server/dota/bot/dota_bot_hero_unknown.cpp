
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Bot_Unit_GenericMinion::CDOTA_Bot_Unit_GenericMinion  (line 23, @0x00000000028e70e0, libserver.so)
// calls: CDOTA_Bot::CDOTA_Bot
// callers: CreateBotForUnit
void __fastcall CDOTA_Bot_Unit_GenericMinion::CDOTA_Bot_Unit_GenericMinion(
        CDOTA_Bot_Unit_GenericMinion *const this,
        CDOTAPlayer *pPlayer,
        CDOTA_BaseNPC *pUnit,
        CDOTA_TeamCommander *pTeamCommander)
{
  CDOTA_Bot::CDOTA_Bot(this, pPlayer, pUnit, pTeamCommander);
  this->_vptr_CDOTA_Bot = &off_42D1A30;
}


// CDOTA_Bot_Unit_GenericMinion::CreateMode  (line 30, @0x00000000028e2800, libserver.so)  // inlines: CDOTA_BotModeMinionNone, CDOTA_BotMode_GenericMinion
// calls: operator new, CDOTA_BotMode::CDOTA_BotMode, CDOTA_Bot::CreateMode, operator delete, _Unwind_Resume
CDOTA_BotMode *__fastcall CDOTA_Bot_Unit_GenericMinion::CreateMode(CDOTA_Bot_Unit_GenericMinion *const this, int iMode)
{
  CDOTA_BotMode *v3; // r12
  CDOTA_BotMode *v5; // r12

  if ( iMode != 0 )
  {
    if ( this->m_bHuman )
    {
      return CDOTA_Bot::CreateMode(this, iMode);
    }
    else if ( iMode == 25 )
    {
      v3 = operator new(0xE0u);  // new CDOTA_BotMode_GenericMinion (size matches)
      CDOTA_BotMode::CDOTA_BotMode(v3, this);
      v3->_vptr_CDOTA_BotMode = off_42D1B30;  // vptr: CDOTA_BotMode_GenericMinion
      return v3;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v5 = operator new(0xE0u);  // new CDOTA_BotModeMinionNone (size matches)
    CDOTA_BotMode::CDOTA_BotMode(v5, this);
    v5->_vptr_CDOTA_BotMode = off_42D1990;  // vptr: CDOTA_BotModeMinionNone
    return v5;
  }
}


// CDOTA_BotMode_GenericMinion::Think  (line 54, @0x00000000028e9990, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetAggroTarget, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, Set, SetTarget, ToDOTABaseNPC, operator CBaseEntity*, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_BotMode::GetUnit, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CEntityHandle::operator CEntityInstance*, CDOTA_Bot::DoBotScriptMinionThink, CDOTA_BotMode::IsBotTargetStatusValid, CDOTA_Bot::SetAttackAction, CDOTA_Bot::GetNearbyHeroes, SortEHANDLEVectorByHealth, CDOTA_Bot::GetNearbyTowers, CBaseEntity::GetAbsOrigin, SortEHANDLEVectorByLocation, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (16 total)
void __fastcall CDOTA_BotMode_GenericMinion::Think(CDOTA_BotMode_GenericMinion *const this)
{
  CDOTA_BaseNPC *Unit; // rax
  int v3; // eax
  CEntityInstance *v4; // rax
  CEntityInstance *v5; // r15
  CDOTA_BaseNPC *v6; // rax
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // r12
  CDOTA_BaseNPC *v9; // rax
  int v10; // edx
  CEntityIdentity *m_pEntity; // rcx
  __int16 v12; // si
  int v13; // eax
  CDOTA_Bot *m_pBot; // rdi
  __int64 v15; // r12
  int v16; // r13d
  CDOTA_BaseNPC *v17; // r14
  CDOTA_BaseNPC *v18; // rax
  CEntityInstance *v19; // rax
  CDOTA_Bot *v20; // rdi
  CDOTA_BaseNPC *v21; // rax
  const Vector *AbsOrigin; // rax
  __int64 v23; // r12
  int v24; // r13d
  CDOTA_BaseNPC *v25; // r14
  CDOTA_BaseNPC *v26; // rax
  CEntityInstance *v27; // rax
  int v28; // eax
  CEntityIdentity *v29; // rdx
  int v30; // eax
  __int16 v31; // cx
  CDOTA_Bot *v32; // rdi
  CDOTA_BaseNPC *v33; // rax
  const Vector *v34; // rax
  __int64 v35; // r12
  int v36; // r13d
  CDOTA_BaseNPC *v37; // r14
  CDOTA_BaseNPC *v38; // rax
  CEntityInstance *v39; // rax
  int v40; // eax
  CEntityIdentity *v41; // rdx
  int v42; // eax
  __int16 v43; // cx
  CEntityIdentity *v44; // rax
  int v45; // edx
  __int16 v46; // cx
  double v47; // xmm0_8
  CDOTA_Bot *v48; // rdi
  int v49; // xmm1_4
  int v50; // eax
  CEntityIdentity *v51; // rdx
  int v52; // eax
  __int16 v53; // cx
  CDOTA_Bot *v54; // rdi
  CDOTA_BaseNPC *v55; // rax
  const Vector *v56; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemyTowers; // [rsp+20h] [rbp-130h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyEnemyCreeps; // [rsp+40h] [rbp-110h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyAlliedCreeps; // [rsp+60h] [rbp-F0h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,32ul> hNearbyEnemyHeroes; // [rsp+80h] [rbp-D0h] BYREF
  unsigned __int64 v61; // [rsp+118h] [rbp-38h]

  v61 = __readfsqword(0x28u);
  Unit = CDOTA_BotMode::GetUnit(this);
  v3 = (*(Unit->_vptr_IHandleEntity + 414))(Unit);
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(&hNearbyAlliedCreeps, g_pDOTAPlayerResource, v3);
  v4 = CEntityHandle::operator CEntityInstance *(&hNearbyAlliedCreeps);
  v5 = v4;
  if ( v4 != 0 && BYTE3(v4[7]._vptr_IHandleEntity) != 0 )
  {
    v6 = CDOTA_BotMode::GetUnit(this);
    if ( !CDOTA_Bot::DoBotScriptMinionThink(*&v5[45].m_worldGroupId.m_nHashCode, v6) )
    {
      v7 = CEntityHandle::operator CEntityInstance *(&v5[59].m_worldGroupId);
      if ( v7 != 0 && BYTE3(v7[7]._vptr_IHandleEntity) != 0 )
        v8 = v7;
      else
        v8 = 0;
      v9 = CDOTA_BotMode::GetUnit(this);
      if ( CDOTA_BotMode::IsBotTargetStatusValid(this, v8, v9, 253, 1200.0) )
      {
        v10 = -1;
        hNearbyAlliedCreeps.m_Size = -1;
        if ( v8 != 0 )
        {
          m_pEntity = v8->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v12 = 0x7FFF;
            v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(hNearbyAlliedCreeps.m_Size) = v12 | hNearbyAlliedCreeps.m_Size & 0x8000;
            v10 = (v13 << 15) | hNearbyAlliedCreeps.m_Size & 0x7FFF;
            hNearbyAlliedCreeps.m_Size = v10;
          }
        }
        this->m_pBot->m_hTarget.m_Index = v10;
        CDOTA_Bot::SetAttackAction(this->m_pBot, v8, 0);
      }
      else
      {
        m_pBot = this->m_pBot;
        hNearbyEnemyHeroes.m_Size = 0;
        hNearbyEnemyHeroes.m_Memory.m_nAllocationCount = 32;
        hNearbyEnemyHeroes.m_Memory.m_nGrowSize = 0x80000000;
        hNearbyEnemyHeroes.m_Memory.m_pMemory = &hNearbyEnemyHeroes.m_FixedMemory;
        CDOTA_Bot::GetNearbyHeroes(
          m_pBot,
          DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
          &hNearbyEnemyHeroes,
          600.0);
        SortEHANDLEVectorByHealth(&hNearbyEnemyHeroes);
        v15 = 0;
        v16 = 0;
        if ( hNearbyEnemyHeroes.m_Size > 0 )
        {
          while ( 1 )
          {
            v19 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyHeroes.m_Memory.m_pMemory[v15]);
            if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
              v17 = v19;
            else
              v17 = 0;
            v18 = CDOTA_BotMode::GetUnit(this);
            if ( CDOTA_BotMode::IsBotTargetStatusValid(this, v17, v18, 253, -1.0) )
              break;
            ++v16;
            ++v15;
            if ( hNearbyEnemyHeroes.m_Size <= v16 )
              goto LABEL_24;
          }
          v28 = -1;
          hNearbyAlliedCreeps.m_Size = -1;
          if ( v17 != 0 )
          {
            v29 = v17->m_pEntity;
            if ( v29 != 0 )
            {
              v30 = (v29->m_EHandle.m_Index >> 15) - (v29->m_flags & 1);
              v31 = 0x7FFF;
              if ( v29->m_EHandle.m_Index != -1 )
                v31 = v29->m_EHandle.m_Index & 0x7FFF;
              LOWORD(hNearbyAlliedCreeps.m_Size) = v31 | hNearbyAlliedCreeps.m_Size & 0x8000;
              v28 = (v30 << 15) | hNearbyAlliedCreeps.m_Size & 0x7FFF;
              hNearbyAlliedCreeps.m_Size = v28;
            }
          }
          this->m_pBot->m_hTarget.m_Index = v28;
          CDOTA_Bot::SetAttackAction(this->m_pBot, v17, 0);
        }
        else
        {
LABEL_24:
          v20 = this->m_pBot;
          hNearbyEnemyTowers.m_Size = 0;
          hNearbyEnemyTowers.m_Memory.m_pMemory = 0;
          hNearbyEnemyTowers.m_Memory.m_nAllocationCount = 0;
          hNearbyEnemyTowers.m_Memory.m_nGrowSize = 0;
          CDOTA_Bot::GetNearbyTowers(v20, DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY, &hNearbyEnemyTowers, 0.0);
          v21 = CDOTA_BotMode::GetUnit(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v21);
          SortEHANDLEVectorByLocation(&hNearbyEnemyTowers, AbsOrigin, 0);
          v23 = 0;
          v24 = 0;
          if ( hNearbyEnemyTowers.m_Size > 0 )
          {
            while ( 1 )
            {
              v27 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyTowers.m_Memory.m_pMemory[v23]);
              if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
                v25 = v27;
              else
                v25 = 0;
              v26 = CDOTA_BotMode::GetUnit(this);
              if ( CDOTA_BotMode::IsBotTargetStatusValid(this, v25, v26, 253, -1.0) )
                break;
              ++v24;
              ++v23;
              if ( hNearbyEnemyTowers.m_Size <= v24 )
                goto LABEL_39;
            }
            v40 = -1;
            hNearbyAlliedCreeps.m_Size = -1;
            if ( v25 != 0 )
            {
              v41 = v25->m_pEntity;
              if ( v41 != 0 )
              {
                v42 = (v41->m_EHandle.m_Index >> 15) - (v41->m_flags & 1);
                v43 = 0x7FFF;
                if ( v41->m_EHandle.m_Index != -1 )
                  v43 = v41->m_EHandle.m_Index & 0x7FFF;
                LOWORD(hNearbyAlliedCreeps.m_Size) = v43 | hNearbyAlliedCreeps.m_Size & 0x8000;
                v40 = (v42 << 15) | hNearbyAlliedCreeps.m_Size & 0x7FFF;
                hNearbyAlliedCreeps.m_Size = v40;
              }
            }
            this->m_pBot->m_hTarget.m_Index = v40;
            CDOTA_Bot::SetAttackAction(this->m_pBot, v25, 0);
          }
          else
          {
LABEL_39:
            v32 = this->m_pBot;
            hNearbyEnemyCreeps.m_Size = 0;
            hNearbyEnemyCreeps.m_Memory.m_pMemory = 0;
            hNearbyEnemyCreeps.m_Memory.m_nAllocationCount = 0;
            hNearbyEnemyCreeps.m_Memory.m_nGrowSize = 0;
            CDOTA_Bot::GetNearbyCreeps(
              v32,
              DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
              &hNearbyEnemyCreeps,
              0.0);
            v33 = CDOTA_BotMode::GetUnit(this);
            v34 = CBaseEntity::GetAbsOrigin(v33);
            SortEHANDLEVectorByLocation(&hNearbyEnemyCreeps, v34, 0);
            v35 = 0;
            v36 = 0;
            if ( hNearbyEnemyCreeps.m_Size > 0 )
            {
              while ( 1 )
              {
                v39 = CEntityHandle::operator CEntityInstance *(&hNearbyEnemyCreeps.m_Memory.m_pMemory[v35]);
                if ( v39 != 0 && BYTE3(v39[7]._vptr_IHandleEntity) != 0 )
                  v37 = v39;
                else
                  v37 = 0;
                v38 = CDOTA_BotMode::GetUnit(this);
                if ( CDOTA_BotMode::IsBotTargetStatusValid(this, v37, v38, 253, -1.0) )
                  break;
                ++v36;
                ++v35;
                if ( hNearbyEnemyCreeps.m_Size <= v36 )
                  goto LABEL_54;
              }
              v50 = -1;
              hNearbyAlliedCreeps.m_Size = -1;
              if ( v37 != 0 )
              {
                v51 = v37->m_pEntity;
                if ( v51 != 0 )
                {
                  v52 = (v51->m_EHandle.m_Index >> 15) - (v51->m_flags & 1);
                  v53 = 0x7FFF;
                  if ( v51->m_EHandle.m_Index != -1 )
                    v53 = v51->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(hNearbyAlliedCreeps.m_Size) = v53 | hNearbyAlliedCreeps.m_Size & 0x8000;
                  v50 = (v52 << 15) | hNearbyAlliedCreeps.m_Size & 0x7FFF;
                  hNearbyAlliedCreeps.m_Size = v50;
                }
              }
              this->m_pBot->m_hTarget.m_Index = v50;
              CDOTA_Bot::SetAttackAction(this->m_pBot, v37, 0);
            }
            else
            {
LABEL_54:
              if ( (*(v5->_vptr_IHandleEntity + 408))(v5) != 0 )
              {
                hNearbyAlliedCreeps.m_Size = -1;
                v44 = v5->m_pEntity;
                if ( v44 != 0 )
                {
                  v45 = (v44->m_EHandle.m_Index >> 15) - (v44->m_flags & 1);
                  v46 = 0x7FFF;
                  if ( v44->m_EHandle.m_Index != -1 )
                    v46 = v44->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(hNearbyAlliedCreeps.m_Size) = v46 | hNearbyAlliedCreeps.m_Size & 0x8000;
                  hNearbyAlliedCreeps.m_Size = (v45 << 15) | hNearbyAlliedCreeps.m_Size & 0x7FFF;
                }
                this->m_pBot->m_hTarget.m_Index = hNearbyAlliedCreeps.m_Size;
              }
              else
              {
                v54 = this->m_pBot;
                hNearbyAlliedCreeps.m_Size = 0;
                hNearbyAlliedCreeps.m_Memory.m_pMemory = 0;
                hNearbyAlliedCreeps.m_Memory.m_nAllocationCount = 0;
                hNearbyAlliedCreeps.m_Memory.m_nGrowSize = 0;
                CDOTA_Bot::GetNearbyTowers(
                  v54,
                  DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_FRIENDLY,
                  &hNearbyAlliedCreeps,
                  0.0);
                if ( hNearbyAlliedCreeps.m_Size > 0 )
                {
                  v55 = CDOTA_BotMode::GetUnit(this);
                  v56 = CBaseEntity::GetAbsOrigin(v55);
                  SortEHANDLEVectorByLocation(&hNearbyAlliedCreeps, v56, 0);
                  this->m_pBot->m_hTarget.m_Index = hNearbyAlliedCreeps.m_Memory.m_pMemory->m_Index;
                }
                CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyAlliedCreeps);
              }
              v47 = (*(this->_vptr_CDOTA_BotMode + 11))(this);
              v48 = this->m_pBot;
              LODWORD(hNearbyAlliedCreeps.m_Memory.m_pMemory) = v49;
              *&hNearbyAlliedCreeps.m_Size = v47;
              CDOTA_Bot::SetMoveAction(v48, &hNearbyAlliedCreeps, 1, 1);
            }
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyCreeps);
          }
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyTowers);
        }
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyEnemyHeroes);
      }
    }
  }
}


// CDOTA_BotMode_GenericMinion::GetDesire  (line 150, @0x00000000028e1e80, libserver.so)
float __fastcall CDOTA_BotMode_GenericMinion::GetDesire(CDOTA_BotMode_GenericMinion *const this)
{
  return 0.0;
}


// CDOTA_BotMode_GenericMinion::CalculateDesiredLocation  (line 157, @0x00000000028e39b0, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTarget, IndexToIdentity, LookupEntity, operator CEntityInstance*, operator bool, operator->
// calls: CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CDOTA_BotMode_GenericMinion::CalculateDesiredLocation(CDOTA_BotMode_GenericMinion *const this)
{
  CEntityIdentity *v1; // rdx
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v5; // rsi
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v7; // rdx
  const Vector *AbsOrigin; // rax
  uint32 m_Index; // [rsp+20h] [rbp-10h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_Index = this->m_pBot->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v1 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F]) != 0
    && (v2 = &v1[m_Index & 0x1FF]) != 0
    && m_Index == v2->m_EHandle.m_Index )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      m_pInstance = 0;
      v7 = &v5[m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
    else
    {
      m_pInstance = 0;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    *&result.x = *&AbsOrigin->x;
    result.z = AbsOrigin->z;
  }
  else
  {
    result.z = vec3_origin.z;
    *&result.x = *&vec3_origin.x;
  }
  return result;
}


// CDOTA_BotMode_GenericMinion::GetDebugColor  (line 167, @0x00000000028e1e90, libserver.so)
color24 __fastcall CDOTA_BotMode_GenericMinion::GetDebugColor(CDOTA_BotMode_GenericMinion *const this)
{
  return 11812095;
}


